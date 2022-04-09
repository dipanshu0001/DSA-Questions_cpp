#include<iostream>
using namespace std ;
///////////Bit mauplations
int getbit(int n,int pos){
    return  (n&(1<<pos))!=0;
}
int setbit(int n,int pos){
    return (n|(1<<pos));
}
int clearbit(int n,int pos){
    return (n&~(1<<pos));
}
////updatebit=clearbit+setbit
int update(int n,int pos,int value){
    int m=n&~(1<<pos);
    return m|(value<<pos);
}
int main(){
    cout<<getbit(0,0);
    cout<<setbit(5,1);
    cout<<clearbit(5,2);
    cout<<update(5,2,1);

return 0;
}