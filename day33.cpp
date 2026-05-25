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
node* buildtree(vector<int> vec){
   idx++;
   if(vec[idx]==-1){
    return NULL;
   }
   node*currnode=new node(vec[idx]);
   currnode->left=buildtree(vec);
   currnode->right=buildtree(vec);

   return currnode;

}


// print kth node     approach 1


void kth(node*root,int k){
queue<node*> q;


q.push(root);
q.push(NULL);
int count=1;
while(!q.empty()){
    node*currnode=q.front();
    q.pop();
    if(currnode==NULL){
        cout<<endl;
        if(q.empty()){
            break;
        }
        count++;
        q.push(NULL);
    }else{
        if(currnode->left!=NULL){
            q.push(currnode->left);
        }
        if(currnode->right!=NULL){
            q.push(currnode->right);
        }
     
        if(count==k){
            cout<<currnode->data<<"  ";
        }

    }
}
}


// print Kth odder apporaoch 2

void kthorder(node* root,int k,int currlevel){
    if (root==NULL){
        return;
    }
    if(currlevel==k){
        cout<<root->data<<"  ";
    }
    kthorder(root->left,k,currlevel+1);
    kthorder(root->right,k,currlevel+1);
}


// lowest ancestor

// node to n
bool ndn(node* root,int n,vector<int>&path){
     if(root==NULL){
        return false;
     }

    path.push_back(root->data);
    if(root->data==n){
        return true;
    }
    bool left=ndn(root->left,n,path); 
    bool right=ndn(root->right,n,path);
    if(left||right){
        return true;
    }
    path.pop_back();
    return false;
}
int lca(node*root,int n1,int n2){
     vector<int> path1;
     vector<int> path2;
    ndn(root,n1,path1);
    ndn(root,n2,path2);
  int lca=-1;
  for(int i=0,j=0;i<path1.size(),j<path2.size();i++,j++){
    if(path1[i]!=path2[j]){
         return lca;
    }
    lca=path1[i];
  }
}


// /approach 2

node* lca2(node *root,int n1,int n2){
   if(root==NULL){
       return NULL;

   }

    if(root->data==n1 || root->data==n2){
           return root;
    }

    node* leftside=lca2(root->left,n1,n2);
    node* rightside=lca2(root->right,n1,n2);

    if(leftside!=NULL &&rightside!=NULL){
        return root;
    }
    return leftside==NULL? rightside:leftside;
}


// min dist bt two node

int dist(node* root,int n){
    if (root==NULL){
        return -1;
    }
    if(root->data==n){
        return 0;
    }
    int leftside=dist(root->left,n);
    if(leftside!=-1){
      return  leftside+=1;
    }
    int rightside=dist(root->right,n);
    if(rightside!=-1){
       return rightside+=1;
    }
    return -1;
}

int mindist(node* root,int n1,int n2){
    node* lc=lca2(root,n1,n2);
      
    int dist1=dist(lc,n1);
    int dist2=dist(lc,n2);
    cout<<dist1+dist2;
    return dist1+dist2;
}


// kth ancestor root


int kthancestor(node* root,int n,int k){
if (root==NULL){
    return -1;
}
if (root->data==n){
     return 0;
}
int left=kthancestor(root->left,n,k);
int right=kthancestor(root->right,n,k);
if(left==-1 && right==-1){
    return -1;
}
int validval=left==-1? right :left;
if (validval+1==k){
    cout<<"kth ancestor = "<<root->data;

}
return validval+=1;

}

// approach 2 to just cout kth ancestor

void kth(node *root,int n,int k){
    vector<int>path;
    ndn(root ,n,path);
    for(int i=0;i<path.size();i++){
        if(i==k){
            cout<<path[i-k];
        }
    }
}


// transformation to sum of tree

int transform(node* root){
    if (root==NULL){
        return 0;
    }
    int left=transform(root->left);
    int right=transform(root->right);
    int currnode=root->data;
    root->data=left+right;
    if(root->left!=NULL){
        root->data+=root->left->data;
    }

    if(root->right!=NULL){
        root->data+=root->right->data;
    }
    return currnode;

}





int main (){
vector <int> vec={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
node* root=buildtree(vec);
int k=2;
// kth(root,k);

// kthorder(root,k,1);

// int lc=lca(root,5,4);
// cout<<lc;

// node *lc=lca2(root,5,6);
// cout<<root->data;
    
// mindist(root,5,6);

// kthancestor(root,5,2);
// kth(root,5,2);

// transform(root);
// cout<<root->data;



    return 0;
}