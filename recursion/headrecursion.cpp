#include<iostream>
using namespace std ;
void display(int n){
    if(n>0){
        display(n-1);
        cout<<n<<" ";

    }
}
int main(){
int n;
cin>>n;
display(n);
return 0;
}