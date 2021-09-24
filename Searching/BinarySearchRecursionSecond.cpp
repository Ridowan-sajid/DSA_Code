#include <iostream>
using namespace std;

void binarySearchRec(int arr[],int first,int last,int value){

        int mid=(first+last)/2;

        if(arr[mid]==value){
            cout<<"Found at: "<<mid;
        }
        else if(first==last && arr[mid]!=value){
            cout<<"Not found";

        }

        else if(value>arr[mid]){
            first=mid+1;
            binarySearchRec(arr,first,last,value);

        }
        else if(value<arr[mid]){
            last=mid-1;
            binarySearchRec(arr,first,last,value);
        }

}
int main(){

    int arr[]={5,6,9,11};
    binarySearchRec(arr,0,3,9);

    return 0;
}
