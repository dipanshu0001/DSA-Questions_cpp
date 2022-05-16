#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define loop(i, a, b) for (int i = a; i < b; i++)



/*
Assign variable length to unqiue character
hight freq char get lowest code 
low freq char get hiaghest code
all code assigned in a way that each code doeasnt have a same prefix 

*/
struct minheap
{
    char data;
    int freq;
    struct minheap *left, *right;
    minheap(char data, int freq)
    {
        this->data = data;
        this->freq = freq;
        left = right = NULL;
    }
};
struct compare
{

    bool operator()(minheap *l, minheap *r)

    {
        return (l->freq > r->freq);
    }
};
void print(minheap *root, string s)
{
    if (root == NULL)
        return;
    if (root->data != '$')
    {
        cout << root->data << ": " << s << endl;
    }
    print(root->left, s + "0");
    print(root->right, s + "1");
}
void huffman_code(vector<char> c, vector<int> f, int n)
{
    priority_queue<minheap *, vector<minheap *>, compare> heap;
    minheap *l, *r, *top;
    for (int i = 0; i < n; i++)
    {
        heap.push(new minheap(c[i], f[i]));
    }
    while (heap.size() != 1)
    {
        l = heap.top();
        heap.pop();
        r = heap.top();
        heap.pop();
        top = new minheap('$', l->freq + r->freq);
        top->left = l;
        top->right = r;
        heap.push(top);
    }

    print(top, "");
}

int main()
{
    int n;
    cin >> n;
    vector<char> data(n);
    vector<int> freq(n);
    int i;
    loop(i, 0, n)
    {
        cin >> data[i];
        cin >> freq[i];
    }
    huffman_code(data, freq, n);
    return 0;
}