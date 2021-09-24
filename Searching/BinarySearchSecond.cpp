#include <iostream>
using namespace std;

int binarySearch(int arr[],int length,int value){

    int first,last;

    first=0;
    last=length-1;

    while(first<=last){

        int midPoint=(first+last)/2;

        if(arr[midPoint]==value){
            return midPoint;
        }
        else if(value<arr[midPoint]){
            last=midPoint-1;
        }
        else if(value>arr[midPoint]){
            first=midPoint+1;
        }
    }

    return -1;
}

int main(){

    int arr[]={1,4,6,7,8};

    int index=binarySearch(arr,5,7);

    if(index==-1){
        cout<<"Not found!";
    }
    else{
        cout<<"Found at: "<<index;
    }


    return 0;
}

