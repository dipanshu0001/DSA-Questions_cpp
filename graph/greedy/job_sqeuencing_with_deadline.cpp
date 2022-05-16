#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define loop(i, a, b) for (int i = a; i < b; i++)
#define pii pair<int, int>
#define vii vector<pii>
#define f first
#define s second
bool comprator(pii a,pii b){
    return a.f>b.f;
}
pii get_max_profit_with_deadline(vii v,int n,int max_v){
    int usercount=0;
    int profit=0;
    pii p;
    vector<int> gantt(max_v+1,-1);
    for(int i=0;i<n;i++){
        int val=v[i].s;
        while(val>=0 and gantt[val]!=-1)
        {
            val--;
        }
        if(val>0)
        {
        gantt[val]=v[i].s;   
        usercount++;
        profit+=v[i].f;
        }     
    }
    p.f=usercount;
    p.s=profit;
    return p;
}
int main()
{
    int n;
    cin >> n;
    vii v(n);
    int i;
    /*
    typewriter can do as task in 1 unit of hour but the customer have a deadline to wait for 
    task and each task done by typerwriter get profit by the user so here typewriter wants to 
    maximize the profit abd sam time want to work of user before the deadline time
    :-
    to maximize profit typewriter do task with hight profit and aslo do that work on that deadline 
    time as samller deadline time work can be completed before the hight deadine time as user can wait to
    that time
    */
   int max_v=-1;
    loop(i, 0, n)
    {
        cin >> v[i].f;
        cin >> v[i].s;
        max_v=max(max_v,v[i].s);
    }
    sort(v.begin(),v.end(),comprator);
    pii p=get_max_profit_with_deadline(v,n,max_v);
    cout<<p.f<<" "<<p.s;
    /* time complexity ia nlogn for sorting and 
    for max_profit with deadline is n*m where m is the max_deadline value and n is the size
    */
   /* space is o(m+1) m=max_deadline*/

    return 0;
}