#include<bits/stdc++.h>

using namespace std;

struct node
{
	int val;
	node* left;
	node* right;
};

struct node* newNode(int val)
{
	node* root=new node();
	root->val=val;
	root->left=NULL;
	root->right=NULL;
	return root;
}

struct node* insertValue(node* root,int value)
{
	if (!root) {
        return newNode(value);
    }
    if (value > root->val) {
        root->right = insertValue(root->right, value);
    }
    else {
        root->left = insertValue(root->left, value);
    }
    return root;
}

node* createTree(int a[],int n)
{
	node* root = NULL;
    //queue<node*> q;
    for (int i = 0; i < n; i++)
      root = insertValue(root,a[i]);
    return root;
}

void InOrder(struct node* root)
{
	if(root==NULL)
		return;
	InOrder(root->left);
	cout<<root->val;
	InOrder(root->right);
}

void PreOrder(struct node* root)
{
	if(root==NULL)
		return;
	cout<<root->val;
	PreOrder(root->left);
	PreOrder(root->right);
}

void PostOrder(struct node* root)
{
	if(root==NULL)
		return;
	PostOrder(root->left);
	PostOrder(root->right);
	cout<<root->val;
}

node* search(struct node* root, int key)
{
    if (root == NULL || root->val == key)
       return root;
    if (root->val < key)
       return search(root->right, key);
    return search(root->left, key);
}

int main()
{
	int n;
	cout<<"Enter the No. of elements in tree: ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements inserted in tree: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	node* root=createTree(a,n);
	
	cout<<"PreOrder: ";
	PreOrder(root);
	cout<<endl;
	cout<<"InOrder: ";
	InOrder(root);
	cout<<endl;
	cout<<"PostOrder: ";
	PostOrder(root);
	cout<<endl;
	
	int element;
	cout<<"Enter the element to search in tree: ";
	cin>>element;
	search(root,element);
	
	return 0;
}
