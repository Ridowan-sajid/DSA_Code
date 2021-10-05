#include <iostream>
using namespace std;

int partition(int arr[],int first,int last){
    int pivot=arr[first];

    while(first<last){
        while(pivot>arr[first]){
            first++;
        }
        while(pivot<arr[last]){
            last--;
        }
        if(first<last){
            int temp=arr[first];
            arr[first]=arr[last];
            arr[last]=temp;
        }
    }
    int temp=pivot;
    pivot=arr[last];
    arr[last]=temp;

    return last;

}

void QuickSort(int arr[],int first,int last){
    if(first<last){
        int pt = partition(arr,first,last);
        QuickSort(arr,first,pt-1);
        QuickSort(arr,pt+1,last);
    }
}

int main()
{
    int arr[]={5,4,3,7,2,1,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

   return 0;
}

