#include <iostream>

using namespace std;

void selectionSort(int arr[], int arrayLength)
{
    for(int i=0;i<arrayLength-1;i++){
        int minimum=i;
        for(int j=minimum+1;j<arrayLength;j++){
            if(arr[minimum]>arr[j]){
                minimum=j;
            }
        }

        int temp;
        temp=arr[minimum];
        arr[minimum]=arr[i];
        arr[i]=temp;
    }
}

int main(){
    int arr[]={2,7,3,1,9};
    selectionSort(arr,5);
    for(int i=0;i<5;i++){
       cout<<arr[i]<<" ";
    }

    return 0;
}

