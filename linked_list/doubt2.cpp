#include<iostream>
#include<cmath>
using namespace std ;
void moveElements(int arr[], int n){ 
  // Write your code here
  for(int i=0;i<n;i++){
    
    if(arr[i]<0){
      int j=i;
      while(j<=n-i){
      int temp=arr[j];
      arr[j]=arr[j+1];
      arr[n-i]=temp;}
      
      
    }
  }
}
void m(int c, int a, int b)
{
        cout<<b<<" + "<<c<<" = "<<a;
}
class Rectangle{
    protected:
    int width;
    int height;
    public:
    
    void display(){
        cout<<width<<" "<<height<<endl;
    }
    void read_input(){
        cin>>width>>height;
    }
};
class RectangleArea:public Rectangle{
    public:
    void display(){
        cout<<width*height<<endl;
    }
};
int main(){
// Rectangle g;
//    g.read_input();
//    g.display();
//    RectangleArea f;
// //    f.read_input();
//    f.display();
   
//    int arr[n/2];int count=0;
//    for(int i=2;i<n;i++){
//        if(n%i==0){
//            arr[count++]=i;
//        }
//    }
//    for(int i=0;i<count;i++){
//        cout<<arr[i]<<endl;
//    }
// int left=n;
// for(int i=2;i<=n;i++){
//     while(left%i==0){
//         cout<<i<<endl;
//         left=left/i;
//     }
// }
   
//    cout<<"heloo";
// int h;
// cin>>h;
// int sum=0,p=0;
//   while(h>0){
//     int res=h%10;
//     sum+=res*pow(2,p++);
//     h/=10;
//   }
//   cout<<sum<<endl;
  int k;cin>>k;
  int arr1[k];
  for(int i=0;i<k;i++){cin>>arr1[i];}
  moveElements(arr1,k);
  for(int i=0;i<k;i++){
      cout<<arr1[i]<<" ";
  }

  
return 0;
}
