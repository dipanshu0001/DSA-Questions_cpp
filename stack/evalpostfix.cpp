#include <iostream>
#include<bits/stdc++.h>
#include <string.h>
#include<ctype.h>

using namespace std;
class stack1
{
    int size;
    int top;
    int *s;

public:
    stack1(int val)
    {
        size = val;
        top = -1;
        s = new int[size];
    }
    void push(int val)
    {
        if (top == size - 1)
        {
            cout << "stack is full" << endl;
            return;
        }
        else
        {
            top++;
            s[top] = val;
        }
    }
    int pop()
    {
        if (top == -1)
            return -1;
        else
        {
            return s[top--];
        }
    }
    bool isempty()
    {
        return top == -1;
    }
    int Top()
    {
        if (top == -1)
            return -1;
        else
        {
            return s[top];
        }
    }
    void display()
    {

        cout << s[top] << " ";
    }
};
bool isopredend(char infix)
{
    if (infix == '+' || infix == '*' || infix == '/' || infix == '*')
        return false;
    else
        return true;
}
int evalpostfix(char const *infix)
{
    stack <int>st;
    int i = 0;
    int x1 = 0;
    int x2 = 0;
    int r = 0;
    while (i < strlen(infix))
    {
        if (isopredend(infix[i]))
        {
            // cout<<infix[i]<<" ";
            // st.display();
            st.push(infix[i++] - '0');

            
        }

        else
        {
            x1 = st.top();st.pop();
            x2 = st.top();st.pop();
            switch (infix[i++])
            {
            case '+':
                st.push(x1 + x2);
                break;
            case '-':
                st.push(x1 - x2);
                break;
            case '/':
                st.push(x1 / x2);
                break;
            case '*':
                st.push(x1 * x2);
                break;
            }
            
        }
        
    }
    
    return st.top();
    

    
}
int evaluatePostfix(string exp){
  stack<int> st;
  for (int i = 0; exp[i]; ++i){
    // If the scanned character is an operand (number here), push it to the stack.
    if (isdigit(exp[i]))  
      st.push(exp[i] - '0');  
    // If the scanned character is an operator, pop two elements from stack apply the operator
    else{  
      int val2 = st.top();
      st.pop();  
      int val1 = st.top();
      st.pop();  
      switch (exp[i])  {  
        case '+': st.push( val1 + val2); break;  
        case '-': st.push( val1 - val2); break;  
        case '*': st.push( val1 * val2); break;  
        case '/': st.push( val1/val2); break;  
      }  
    }  
  }  
  return st.top(); 
}
int main()
{
    string postfix = "8425+-*";
    char const *postfix1="8425+-*";
    printf("Result is %d\n", evaluatePostfix(postfix));
    printf("Result is %d\n", evalpostfix(postfix1));

    return 0;
}
