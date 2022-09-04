#include <bits/stdc++.h>
using namespace std;

struct Node{
	char data;
	Node *left,*right;
};

//function to create node
Node *newNode(char Data) 
{
	Node *new_node = new Node;
	new_node->data = Data;
	new_node->left = new_node->right = NULL;
	return new_node;
}

//function to traverse preorder
void preorder(Node *root){ 
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

//recursive function to build the tree
Node *convertExpression(string str,int& i) 
{
	Node* root=newNode(str[i]);
	i++;
	if(i<str.length() && str[i]=='?'){
		i++;
		root->left=convertExpression(str,i);
		root->right=convertExpression(str,i);
	}
	return root;
}


int main(){
	string str;
	
	cin>>str;
	
	int i=0;
	Node *root=convertExpression(str,i);
	preorder(root);
	cout<<endl;
	
	return 0;
}