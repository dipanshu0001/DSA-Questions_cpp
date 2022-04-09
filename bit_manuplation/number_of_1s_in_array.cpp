#include<iostream>
using namespace std ;
int multipleof2(int n){
    return (n&& !(n&(n-1)));
}
///// number of 1s in binary number
int number(int n){
    int count=0;
    while(n!=0){
        n=n&(n-1);
        count++;
    }
    return count;

}
////// number of subset that can be made from arrray

int main(){

cout<<multipleof2(15);
cout<<number(5);
return 0;
}