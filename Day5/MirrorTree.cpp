#include<bits/stdc++.h>

using namespace std;

struct node{
	char val;
	node* left;
	node* right;
};

void swap(node* root)
{
	node* temp=root->left;
	root->left=root->right;
	root->right=temp;
}

void mirror(node* root)
{
	if(root != NULL)
	{
		swap(root);
		mirror(root->left);
		mirror(root->right);
	}
}

void InOrder(struct node* root)
{
	if(root==NULL)
		return;
	InOrder(root->left);
	cout<<root->val;
	InOrder(root->right);
}

int main()
{
	node* root = new node();
	root->val='A';
	
	node* l = new node();
	l->val ='B';
	root->left=l;
	
	node* r = new node();
	r->val ='C';
	root->right=r;
	
	node* leftChild = new node();
	leftChild->val='D';
	l->left=leftChild;
	
	node* rightChild = new node();
	rightChild->val='E';
	l->right=rightChild;
	
	node* leftChild1 = new node();
	leftChild1->val='F';
	r->left=leftChild1;
	
	node* rightChild1 = new node();
	rightChild1->val='G';
	r->right=rightChild1;
	cout<<"Print InOrder Before Mirroring: ";
	InOrder(root);
	cout<<endl;
	mirror(root);
	cout<<"Print InOrder After Mirroring: ";
	InOrder(root);
	return 0;
}
