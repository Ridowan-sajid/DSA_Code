#include <iostream>
using namespace std;

void bubbleSort(int arr[], int arrayLength)
{
    for(int i=arrayLength-1;i>-1;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){

    int arr[]={2,1,3,7,9};
    bubbleSort(arr,5);
    
    for(int i=0;i<5;i++){
       cout<<arr[i]<<" ";
    }

    return 0;
}

