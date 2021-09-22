#include <iostream>

using namespace std;

int main(){

int n[]={8,4,6,1,6,9,6,1,9,8};
    int inc=1;
    for(int i=0;i<10;i++){

        for(int j=i+1;j<10;j++){
            if(n[i]==n[j]){
                n[j]=0;
                inc++;
            }
        }
        if(n[i]!=0){
            cout<<n[i]<<" occurs = "<<inc<<" times"<<endl;
        }
        inc=1;
    }

    return 0;
}
