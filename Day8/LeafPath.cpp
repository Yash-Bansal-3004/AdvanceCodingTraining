#include<bits/stdc++.h>

using namespace std;

struct node
{
	char val;
	node* left;
	node* right;
	//bool isfind=false;
};



void PreOrder(struct node* root, string s)
{
	if(root==NULL)
		return;
	if(root->left==NULL && root->right==NULL) {
		cout<<s+root->val<<endl;
		return;
	}
	PreOrder(root->left, s+root->val);
	PreOrder(root->right, s+root->val);
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
	
	node* leftChild2 = new node();
	leftChild2->val='H';
	leftChild->left=leftChild2;
	
	PreOrder(root, "");
	
	return 0;
}
