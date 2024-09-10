#include<bits/stdc++.h>
using namespace std;

class bnode{
    public:
    int value;
    bnode* left;
    bnode* right;
    bnode (int value){
        this->value=value;
        this->left=NULL;
        this->right=NULL;
    }
};

bnode *input(){
    int n;
    cin>>n;
    if(n==-1){
        return NULL;
    }
    bnode *root = new bnode(n);
    queue<bnode *>q;
    q.push(root);
    while(!q.empty()){
        bnode *temp = q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        bnode *left;
        bnode *right;
        
        if(l==-1)
        left=NULL;
        else left = new bnode(l);
        if(r==-1)
        right=NULL;
        else right = new bnode(r);
        
        temp->left=left;
        temp->right=right;
        
        if(left)
        q.push(left);
        if(right)
        q.push(right);
    }
    return root;
}

void print_tree_preorder(bnode* root){
    if (root==NULL)
    {
        return;
    }//root->left->right
    cout<<root->value<<" ";
    print_tree_preorder(root->left);
    print_tree_preorder(root->right);
    
}

void print_tree_postorder(bnode* root){
    if (root==NULL)
    {
        return;
    }
    //left->right->root
    print_tree_preorder(root->left);
    print_tree_preorder(root->right);
    cout<<root->value<<" ";
    
}

void inorder(bnode*root){
    queue<bnode*>q;
    q.push(root);
    while (!q.empty())
    {
        bnode*temp=q.front();
        q.pop();
        cout<<temp->value<<" ";
    if(temp->left)q.push(temp->left);
    if(temp->right)q.push(temp->right);
    }
    
}

int main(){
    bnode* root=input();
    cout<<"pre order "<<'\n';
    print_tree_preorder(root);
    cout<<'\n';
    cout<<"post order "<<'\n';
    print_tree_postorder(root);
    cout<<'\n';
    cout<<"in order "<<'\n';
    inorder(root);
    
    return 0;
}
