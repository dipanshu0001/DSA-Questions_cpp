#include <iostream>
using namespace std;

int main()
{int q;cin>>q;
while(q>0){
    int n;
    int x;
    cin >> n >> x;int count = 0;
    int equals = 1;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if((arr[i]^arr[j])==x){
                cout<<(arr[i]^arr[j])<<endl;
                count++;equals++;
            }
        }
    }
    cout<<equals<<" "<<count<<endl;
    cout<<endl;
    q--;}

    return 0;
}