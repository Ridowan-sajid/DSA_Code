#include <iostream>
using namespace std;

void insertionSort(int ar[], int n)
{

    for(int i=1;i<n;i++){

        int temp=ar[i];
        int j=i-1;
        while(j>=0 && ar[j]>temp){
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=temp;

    }
}
void show(int ar[]){
    cout<<"Sorted array: ";
    for(int i=0;i<4;i++){

        cout<<ar[i]<<" ";

    }
}
int main(){

    int ar[]={3,2,6,1};

    insertionSort(ar,4);

    show(ar);


    return 0;
}

