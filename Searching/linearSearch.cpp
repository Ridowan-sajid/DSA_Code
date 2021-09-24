#include <iostream>
using namespace std;

void linearSearch(int arr[],int length,int value){
    int i;
    int iter=0;
    for(i=0;i<length;i++){
        if(arr[i]==value){
            cout<<value<<" found at index: "<<i;
	    iter++;
        }
    }
   if(iter==0) cout<<" Not found!";

}

int main(){

    int arr[]={6,5,4,3,2,1};
    linearSearch(arr,5,2);

    return 0;
}

