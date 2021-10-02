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

int findMin(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main() {

    int arr[] = {7,-9,6,-1,9};
    int min=findMin(arr,5);

    for(int i=0;i<5;i++){
        arr[i]=arr[i]+(-min);
    }

    countSort(arr,5);

    for(int i=0;i<5;i++){
        arr[i]=arr[i]-(-min);
    }

    for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
    }
}
