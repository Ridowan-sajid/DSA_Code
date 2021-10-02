#include <iostream>
using namespace std;

void countSort(int array[], int n) {

      int maxVal=array[0];

      for(int i=0;i<n;i++){
        if(maxVal<array[i]){
            maxVal=array[i];
        }
      }

      int arr[maxVal];
      int c[maxVal+1]={0};

      for (int i=0;i<n;i++) {
        c[array[i]]++;
      }
      for (int i=1;i<=maxVal;i++) {
        c[i]=c[i]+c[i-1];
      }
      for (int i=n - 1;i>=0;i--) {
        arr[--c[array[i]]] = array[i];
      }
      for (int i=0;i<n;i++) {
        array[i]=arr[i];
      }
}


int main() {

    int arr[] = {4,7,3,2,1,9};
    countSort(arr,6);

    for(int i=0;i<6;i++){
            cout<<arr[i]<<" ";
    }
}
