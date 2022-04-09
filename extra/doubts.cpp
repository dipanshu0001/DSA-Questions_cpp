#include<iostream>
using namespace std ;
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
int first=0;
  int second =0;int n1;cin>>n1;int arr1[n1];
  	for(int i=0;i<n1;i++){
      cin>>arr1[i];
    }
  for(int i=0;i<n1;i++){
    if(first<arr1[i]){
        second=first;
      first=arr1[i];
      
    }
    else{
        if(arr1[i]>second&&arr1[i]<first){
            second=arr1[i];
        }
    }
  }
  int n2;cin>>n2;
  int arr2[n2];
  int arr3[n2];
  for(int i=0;i<n2;i++){
      cin>>arr2[i];
  }
  for(int i=0;i<n2;i++){
      cin>>arr3[i];
  }
  cout<<second<<endl;bool check=false;
  for(int i=0;i<n2;i++){
      for(int j=0;j<n2;j++){
          if(arr2[i]==arr3[j]){
              check=true;

          }

      }
  }
   Rectangle g;
   g.read_input();
   g.display();
   RectangleArea f;
   f.read_input();
   f.display();
return 0;
}