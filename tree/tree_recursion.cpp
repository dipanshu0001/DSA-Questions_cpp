#include<iostream>
using namespace std ;
void dispaly(int n){
    if(n>0){
        cout<<n<<" ";
        dispaly(n-1);
        dispaly(n-1);
    }
}
int main(){
int n;
cin>>n;
dispaly(n);
return 0;
}