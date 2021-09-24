#include <iostream>
using namespace std;

int factorial(int n){
    int sum=1;
    if(n==1){
        return sum;
    }
    sum*=n;
    return sum*factorial(n-1);;

}
int main(){

    cout<<factorial(5);

    return 0;
}

