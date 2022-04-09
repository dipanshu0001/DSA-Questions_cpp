#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
class vehicle{
public:
vehicle(){cout<<"this is from vehicle classs\n";}
virtual void print(){cout<<"vehicle\n";}
};
///// single inheritance
class car:virtual public vehicle{
public:
car(){cout<<"this is from car class\n";}
void print(){cout<<"car\n";}
};
////// multipe inheritance
class swift:virtual public vehicle,virtual public car{
    public:
swift(){cout<<"this is a vehicle and comes under car section\n";}
};
////// multilevel inheritance
class swifttwothousand:public swift{
    swifttwothousand(){cout<<" this is model of year 2019\n";}
};
////////// herarichal inheritance
class bus:public vehicle{
bus(){cout<<"this is also comes under vehicle section\n";}
};




int main(){
car c;
c.print();

// swift s;
// swifttwothousand s1pro();
// bus b();

return 0;
}