// C++ program to print inorder traversal 
// using stack. 
#include<bits/stdc++.h> 
using namespace std; 

/* A binary tree Node has data, pointer to left child 
and a pointer to right child */
struct Node 
{ 
	int data; 
	struct Node* left; 
	struct Node* right; 
	Node (int data) 
	{ 
		this->data = data; 
		left = right = NULL; 
	} 
}; 

/* Iterative function for inorder tree 
traversal */
void inOrder(struct Node *root) 
{ 
	stack<Node*> s;
	Node* curr = root;
	while(curr!= NULL || (!s.empty())){
		while(curr != NULL){
			s.push(curr);
			curr = curr->left;
		}
		//now we reach to leftmost node in the tree
		curr = s.top();
		s.pop();
		cout<< curr->data<<" ";
		curr = curr->right;
	}

} 

/* Driver program to test above functions*/
int main() 
{ 
	cin.tie(NULL);
	freopen("output.txt","w",stdout);
	/* Constructed binary tree is 
			1 
			/ \ 
		2	 3 
		/ \ 
	4	 5 
	*/
	struct Node *root = new Node(1); 
	root->left	 = new Node(2); 
	root->right	 = new Node(3); 
	root->left->left = new Node(4); 
	root->left->right = new Node(5); 

	inOrder(root); 
	return 0; 
}

