#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    char z;
    cin>>z;

    switch(z){
        case '+':
            cout<<n1 +n2;
            break;
        case '-':
            cout<<n1 -n2;
            break;
        default :
            cout<<"error";
            break;
    }


}