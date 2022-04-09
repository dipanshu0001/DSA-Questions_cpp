

#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;

	Node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};





void inorder(Node* root)
{
	if (root == NULL)
	{
		return;
	}

	inorder(root->left);
	cout<<root->data << " ";
	inorder(root->right);
}

int search(int ino[], int start, int end, int val)
{
	for (int i = start; i <= end; i++)
	{
		if (ino[i] == val)
		{
			return i;
		}

		return -1;
	}
}

Node* buildTree(int ino[], int post[], int start, int end)
{
	static int idx = 4;
	if (start > end)
	{
		return NULL;
	}

	int val = post[idx];
	idx--;
	struct Node* curr = new Node(val); //ERROR here

	if (start == end)
	{
		return curr;
	}
	int pos = search(ino, start, end, val);
	curr->right = buildTree(ino, post, pos + 1, end);
	curr->left = buildTree(ino, post, start, pos - 1);

	return curr;
}
int main()
{
	
	int post[] = {4,2,5,3,1};
	int ino[] = {4,2,1,5,3};

	Node* root = buildTree(ino, post, 0, 4);
	inorder(root);
    cout<<"HEJEJ JEJKJE J L: JEONE L NEL JEJ EJ NN E"<<endl;


	return 0;
}