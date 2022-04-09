#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class friend1
{
    int a;

public:
    int b;

protected:
    int c;
    friend void function();
};
void function()
{ /// this is global function so cant access protected and private meber of a class of swhich it is not mmeber
    friend1 f1;
    f1.a = 10;
    f1.b = 15;
    f1.c = 16;
}
///// functions classes
//// accessing a private member of one class by other class we need to declare friend class in which we want to acess
class brother;
class my
{
    int a = 10;
    friend brother;
};
class brother
{
public:
    void func()
    {
        my m;
        cout << m.a << " ";
    }
} ;
/* static members of class 
 variable which get static their will be one copy of  it doesnt
 depend how many times object is made all object will share same memory 
 of that static int/variable*/
 class test{
     int a;int b;
     public:
     static int count;
     test(){
         a=10;
         b=10;
         count++;
     }

 };
int test::count=0;
/*static member 2 
 */
class student {
    public:
    int roll_no;
    static int add_mission_no;
    student(){
        add_mission_no++;
        roll_no=add_mission_no;
    }
    void roll_nos(){
        cout<<"roll_no. is : "<<roll_no<<" \n";
    }
};
int student::add_mission_no=0;
/* inner nested class usefull only inside outer class */
class outer{
    public:
    int a=10;
    static int b;
     //outer class can acess public  member of inner class 
     void function(){
         inner i;
         i.show();
         cout<<i.x<<" \n";// this can be accesed as it is publi member of inner class

     }


    class inner{
        public:
        int x=5;
        void show(){
            //cout<<a;//cant acess it as it is not static member
            cout<<b<<" ";// this can be accesed as it is static member
            cout<<"show :";
        }

    };

};
int outer::b=0;


  
int main()
{
    brother j;
    j.func();
    test t;
    test t2;
    cout<<t.count<<" ";
    cout<<t2.count<<" ";
    student raju;
    raju.roll_nos();
    student aryan;
    aryan.roll_nos();
    outer o;
    o.function();




    return 0;
}