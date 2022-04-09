#include <iostream>
#include <bits/stdc++.h>
using namespace std;
static int l = -1;
array<int, 10> arr;
int n = 10;
void add_last()
{
    if (l >= n)
    {
        cout << "array is full\n";
    }
    else
    {
        cin >> arr[l++];
    }
}

void add_beg()
{
    if (l >= n)
    {
        cout << "array is full\n";
    }
    else
    {
        l++;
        for (int i = l; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        cin >> arr[0];
    }
}
void del_last()
{
    if (l == -1)
    {
        cout << endl
             << "Array is Empty" << endl;
    }
    else
    {
        l = l - 1;
        cout << arr.front() << " -> Element Deleted at front-> " ;
    }
}
void del_beg()
{
    if (l == -1)
        cout << "array is empty\n";
    else
    {
        for (int i = 0; i < l; i++)
        {
            arr[i] = arr[i + 1];
        }
        cout << "elemnted is delted at 0\n";
    }
}
void display()
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}

int main()
{
    int n;
    do{
    cout << "enter 1 to add at last\n";
    cout << "enter 2 to add at front\n";
    cout << "enter 3 to delete from begning\n";
    cout << "enter 4 to delete from last\n";
    cout << "enter the choice above mentioned\n";
    cin >> n;
    int val = 0;
    switch (n)
    {
    case 1:
        
        add_last();
        break;

    case 2:
        
        add_beg();
        break;
    case 3:
        del_last();
        break;
    case 4:
        del_beg();
        break;
    }
    }while(n!=0);
    display();
    cout << endl;
    return 0;
}