#include <iostream>

using namespace std;

int main(){

    int a[]={1,4,6,3,6,9,1};
    int count=0;
    for(int i=0;i<7;i++){

        for(int j=i+1;j<7;j++){
            if(a[i]==a[j]){
                cout<<a[i]<<" ";
                count++;
            }

        }
        if(count==0){
            cout<<"Not found";
        }
    }


    return 0;
}
