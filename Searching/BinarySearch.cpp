#include <iostream>
using namespace std;

void binarySearch(int arr[],int length,int value){

    int first=0;

    int last=length-1;

    while(true){
        int mid=(first+last)/2;
        if(arr[mid]==value){

            cout<<"Found at: "<<mid;
            break;
        }
        else if(first==last && arr[mid]!=value){
            cout<<"Not found";
            break;
        }
        else if(value>arr[mid]){
            first=mid+1;
        }
        else if(value<arr[mid]){
            last=mid-1;
        }

    }
}

int main(){

    int arr[]={1,2,3,4,5,6};
    binarySearch(arr,6,5);

    return 0;
}

