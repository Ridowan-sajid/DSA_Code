#include <iostream>
using namespace std;

int binarySearchRec(int arr[],int first,int last,int value){

    if(first<=last){
            int mid=(first+last)/2;

            if(arr[mid]==value){
                return mid;
            }
            else if(value>arr[mid]){
                binarySearchRec(arr,mid+1,last,value);
            }
            else if(value<arr[mid]){
                binarySearchRec(arr,first,mid-1,value);
            }

    }
    else return -1;


}


int main(){

    int arr[]={9,23,34,45,56};

    int index=binarySearchRec(arr,0,4,45);

    if(index==-1){
        cout<<"Not found!";
    }
    else{
        cout<<"Found at: "<<index;
    }
    return 0;
}
