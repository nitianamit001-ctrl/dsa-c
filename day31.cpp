#include<iostream>
#include<cstring>
#include<vector>
#include<climits>
#include<queue>
using namespace std;
class node{
    public:
      int data;
      node*left;
      node*right;
      node(int val){
        data=val;
        left=right=NULL;
      }
};
    static int idx=-1;
node*buildtree(vector<int>order){
     idx++;
     if(order[idx]==-1){
        return NULL ;
     }
     node*currroot=new node(order[idx]);
     currroot->left=buildtree(order);
    currroot->right=buildtree(order);
          return currroot;
}

// preorder transverse

void preorder(node* root){
    if (root==NULL){
        return ;
    }
   cout<<root->data ;
   preorder(root->left);
   preorder(root->right);

}

// inorder transverse

void inorder(node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);

}

//  postorder transverse

void postorder(node*root){
    if (root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"  ";
}

// levelorder

void levelorder(node*root){
    
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node *curr=q.front();
        q.pop();
        if(curr==NULL){
           
            cout<<endl;
            if(q.empty()){

                break;
            }
             q.push(NULL);
        }else{
        cout<<curr->data<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }

    }

}


// height of tree

int height(node *root){
    if(root==NULL){
        return 0;
    }
    int leftht=height(root->left);
    int rightht=height(root->right);
 return  max(leftht,rightht)+1;
 
}

// count of nodes

int count(node*root){
    if(root==NULL){
        return 0;
    }

    int left=count(root->left);
    int right=count(root->right);
    return left+right+1;
}

// sum of nodes

int sum(node*root){
    if(root==NULL){
        return 0  ;
    }
    int left=sum(root->left);
    int right=sum(root->right);
    return left+right+root->data;
}






int main (){
vector<int> pre={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
node*root=buildtree(pre);
// cout<<root->data;
// cout<<root->left->data;
// preorder(root);

// inorder(root);

// postorder(root);

// levelorder(root);

//   cout<<height(root);

// cout<<count(root);

cout<<sum(root);

    return 0;
}