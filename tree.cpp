#include <iostream>

using namespace std;

typedef struct node* nnode;

struct node{
	int data;
	nnode left;
	nnode right;
};

nnode getNewNode(int data){
	nnode newNode = new node();
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

nnode insert_t(nnode root,int data){
	if(root == NULL)
		root = getNewNode(data);
	else if(data <= root->data)
		root->left = insert_t(root->left,data);
	else
		root->right = insert_t(root->right,data);
	return root;
}

bool search_t(nnode root,int data){
	if(root == NULL)
		return false;
	else if(data == root->data)
		return true;
	else if(data <= root->data)
		return search_t(root->left,data);
	else
		return search_t(root->right,data);
}

void print_preorder(nnode root){
	if(root == NULL) return;
	else{
		cout << root->data << "\t" ;
		print_preorder(root->left);
		print_preorder(root->right);
	}
}

void print_postorder(nnode root){
	if(NULL == root) return;
	else{
		print_postorder(root->left);
		print_postorder(root->right);
		cout << root->data << "\t";
	}
}

void print_inorder(nnode root){
	if(NULL == root) return;
	else{
		print_inorder(root->left);
		cout << root->data << "\t";
		print_inorder(root->right);
	}
}

nnode findMin(nnode root){
	while(root->left != NULL)
		root = root->left;
	return root;
}

nnode delete_t(nnode root,int data){
	if(NULL == root) return root;
	else if(data < root->data) root->left = delete_t(root->left,data);
	else if(data > root->data) root->right = delete_t(root->right,data);
	else{
		if(root->left == NULL && root->right == NULL){
			delete root;
			root = NULL;
		}

		else if(root->left == NULL){
			nnode temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL){
			nnode temp = root;
			root = root->left;
			delete temp;
		}
		else{
			nnode temp = findMin(root->right);
			root->data = temp->data;
			root->right = delete_t(root->right,temp->data);
		}
	}
	return root;
}

int main(){
	nnode root = NULL;
	
	root = insert_t(root,5); root = insert_t(root,10);
	root = insert_t(root,3); root = insert_t(root,4);
	root = insert_t(root,1); root = insert_t(root,11);
	
	bool ch = search_t(root,25);
	
	cout << "\n\tPre order traversal\n" << endl;
	print_preorder(root);
	
	cout << "\n\tPost order traversal\n" << endl;
	print_postorder(root);
	
	cout << "\n\tInorder traversal\n" << endl;
	print_inorder(root);
	
	root = delete_t(root,11);
	cout << endl;
	print_inorder(root);

	cout << "\n" ;
	return 0;
}


