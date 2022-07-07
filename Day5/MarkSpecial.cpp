#include<bits/stdc++.h>
using namespace std;
struct node
{
	char val;
	node* left;
	node* right;
	bool isSpecial=false;
};
bool markSpecial(node* root)
{
	node* l=root->left;
	node* r=root->right;
	if(l->isSpecial==true||r->isSpecial==true)
	{
		cout<<"One Of its child node is Special,So We can't make it Special."<<endl;
		return false;
	}
	else
	{
		root->isSpecial=true;
		return true;
	}
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
	
	markSpecial(l);
	
	if(markSpecial(root))
	{
		cout<<"Special Marked"<<endl;
		cout<<"Value Of Special Node is: "<<(root->val)<<endl;
	}
	else
	{
		cout<<"Special Not Marked"<<endl;
	}
	return 0;
}
