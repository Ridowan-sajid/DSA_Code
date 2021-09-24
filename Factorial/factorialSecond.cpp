#include <iostream>
using namespace std;

int factorial(int n){
    if(n>1)
        return n*factorial(n-1);
    return 1;
}

int main(){

    cout<<"factorial : "<<factorial(5);

    return 0;
}

