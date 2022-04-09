#include <iostream>
#include <cstdio>
#include <cmath>
#include <string.h>
using namespace std;
#define SIZE 100

int Stack[SIZE], top = -1;

int isFull()
{
    return top == (SIZE - 1);
}

int isEmpty()
{
    return top == -1;
}

// Function to add an item to stack.  It increases top by 1
int push(int item)
{
    if (isFull())
    {
        return -1;
    }
    Stack[++top] = item;
}

// Function to remove an item from stack.  It decreases top by 1
int pop()
{
    int temp;
    if (isEmpty())
    {
        return -1;
    }
    temp = Stack[top--];
    return temp;
}
int evalPrefix(char *exp)
{
    int i = strlen(exp) - 1;
    for(;i>=0;i--)
    {
    if(isdigit(exp[i])){
            push(exp[i] - '0');
           
      }
       else{
            int x1 = pop();
            int x2 = pop();
            switch (exp[i])
            {
            case '+':push(x1+x2);break;
            case '-':push(x1-x2);break;
            case '*':push(x1*x2);break;
            case '/':push(x1/x2);break;
            case '^':push(pow(x1,x2));break;
            }
       }
       int ans=pop();
       return ans;
       
    }
}
int evalPrefix(char* exp){
    int i,op1,op2;
  	int len = strlen(exp);
	for ( i = len-1; i>=0 ; i--)
    {
      char c = exp[i];
      if (isdigit(c))
        push(c-'0');

      else
      {
        op1 = pop();
        op2 = pop();
        switch(c)
        {
          case '+': push(op1 + op2); break;
          case '-': push(op1 - op2); break;
          case '*': push(op1 * op2); break;
          case '/': push(op1 / op2); break;
          case '^':push(pow(op1,op2)); break;
        }
      }
    }
 	int ans=pop();
     return ans;
}
int main()
{
    int n;
    char *exp, input[100];
    cin >> n;
    exp = input;
    while (n--)
    {
        cin >> exp;
        cout << evalPrefix(exp) << endl;
    }
    return 0;
}
