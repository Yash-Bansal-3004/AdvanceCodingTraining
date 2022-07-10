//Delete Node in BST
#include<bits/stdc++.h>

using namespace std;

struct node{
	int val;
	node* left;
	node* right;
};

int MaxOfSubtree(node* root)
{
	while(root->left==NULL&&root->right==NULL)
		root=root->right;
	return root->val;
}

void deleteNode(node* root)
{
	if(root->left==NULL&&root->right==NULL)
	{
		root=NULL;
	}
	else if(root->left==NULL)
	{
		root->val=root->right->val;
		root->right=NULL;
	}
	else if(root->right==NULL)
	{
		root->val=root->left->val;
		root->left=NULL;
	}
	else
	{
		int num=MaxOfSubtree(root->left);
		root->val=num;
		deleteNode(root->left);
	}
}

void PreOrder(struct node* root)
{
	if(root==NULL)
		return;
	cout<<root->val<<" ";
	PreOrder(root->left);
	PreOrder(root->right);
}

void InOrder(struct node* root)
{
	if(root==NULL)
		return;
	InOrder(root->left);
	cout<<root->val<<" ";
	InOrder(root->right);
}

int main()
{
	node* root = new node();
	root->val=10;
	
	node* l = new node();
	l->val =5;
	root->left=l;
	
	node* r = new node();
	r->val =15;
	root->right=r;
	
	node* leftChild = new node();
	leftChild->val=3;
	l->left=leftChild;
	
	node* rightChild = new node();
	rightChild->val=8;
	l->right=rightChild;
	
	node* leftChild1 = new node();
	leftChild1->val=12;
	r->left=leftChild1;
	
	node* rightChild1 = new node();
	rightChild1->val=16;
	r->right=rightChild1;
	
	node* lefty=new node();
	lefty->val=2;
	leftChild->left=lefty;
	
	node* righty=new node();
	righty->val=18;
	rightChild1->left=righty;
	
//	cout<<"InOrder Before Deletion: ";
//	InOrder(root);
//	cout<<endl;
	deleteNode(root);
	cout<<"InOrder After Deletion: ";
	InOrder(root);
	
	return 0;
}
