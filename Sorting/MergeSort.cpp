#include <iostream>
using namespace std;


void merging(int arr[],int lv,int mid,int hv){
    int i=lv;
    int j=mid+1;
    int k=lv;
    int b[hv+1];

    while(i<=mid && j<=hv){
        if(arr[i]<arr[j]){
            b[k]=arr[i];
            i++;
        }
        else{
            b[k]=arr[j];
            j++;
        }
        k++;
    }

   if(i>mid){
    while(j<=hv){
        b[k]=arr[j];
        k++;j++;
    }
   }
   if(j>hv){
    while(i<=mid){
        b[k]=arr[i];
        k++;i++;
    }
   }


    for(int l=lv;l<=hv;l++){
        arr[l]=b[l];
    }

}


void mergeSort(int arr[],int lv,int hv){

    int mid;
    if(lv<hv){
        mid=(lv+hv)/2;
        mergeSort(arr,lv,mid);
        mergeSort(arr,mid+1,hv);
        merging(arr,lv,mid,hv);
    }

}



int main()
{
    int arr[]={5,6,3,4,7,8,1};
    mergeSort(arr,0,6);

    cout<<"Sorted array: ";
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

   return 0;
}

