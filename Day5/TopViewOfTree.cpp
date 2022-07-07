#include<bits/stdc++.h>

using namespace std;

struct node{
	char val;
	node* left;
	node* right;
};

void InOrder(struct node* root)
{
	if(root==NULL)
		return;
	InOrder(root->left);
	cout<<root->val;
	InOrder(root->right);
}

void LeftTraverse(node* root)
{
	if(root==NULL)
		return;
	else
	{	
		if(root->left!=NULL)
			cout<<root->left->val;
		LeftTraverse(root->left);
		//LeftTraverse(root->right);
		//cout<<root->val;
	}
}

void RightTraverse(node* root)
{
	if(root==NULL)
		return;
	else
	{
		if(root->right!=NULL)
			cout<<root->right->val;
		RightTraverse(root->right);	
	}
	//RightTraverse(root->right);
	//cout<<root->val;
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
	
	cout<<"Top View Of A Tree: "<<endl;
	LeftTraverse(root);
	cout<<root->val;
	RightTraverse(root);
	
	return 0;
}
