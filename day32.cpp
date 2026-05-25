#include<iostream>
#include<cstring>
#include<vector>
#include<climits>
#include<map>
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
   node* currroot =new node(vec[idx]);
   currroot->left=buildtree(vec);
   currroot->right=buildtree(vec);

   return currroot;

}

// height

int height(node*root){
    if (root==NULL){
        return 0;
    }
    int leftht=height(root->left);
    int rightht=height(root->right);
     return max(leftht,rightht) +1;
}

// calculta diameter   t.c=0(n2)


int diam(node * root){
  if (root==NULL){
    return 0;
  }

 int currdiam=height(root->left)+height(root->right)+1;

 int leftdiam=diam(root->left);
 int rightdiam=diam(root->right);
   return max(currdiam,max(leftdiam,rightdiam));
}





// calculate diam     t.c=0(n)

pair<int,int> diam2(node* root){
  if(root==NULL){
    return make_pair(0,0);
  }
  
  pair<int ,int> leftinfo=diam2(root->left);
  pair<int,int> rightinfo=diam2(root->right);

  int currdiam=leftinfo.second+rightinfo.second+1;
  int finaldiam=max(currdiam,max(leftinfo.first,rightinfo.first));
  int finalht=max(leftinfo.second,rightinfo.second)+1;
  return  make_pair (finaldiam,finalht);

}


// find subtree

bool isidentical(node*root,node*subroot){
     if(root==NULL && subroot==NULL){
        return true;
    }else if(root==NULL||subroot==NULL){
        return false;
    }

    if(root->data!=subroot->data){
        return false;
    }

    isidentical(root->left,subroot->left);
    isidentical(root->right,subroot->right);
}



bool issubtree(node*root,node*subroot){
    if(root==NULL && subroot==NULL){
        return true;
    }else if(root==NULL||subroot==NULL){
        return false;
    }

    if(root->data==subroot->data){
        if(isidentical(root,subroot)){
            return true;
        }
    }
    int isleftsubroot=issubtree(root->left,subroot);
    if(!isleftsubroot){
        return issubtree(root->right,subroot);
    }

}



// top view of the tree

void topview(node* root){
  queue<pair<node*,int>> q;
  map<int ,int> m;
  q.push(make_pair(root,0));
  while(!q.empty()){
    pair<node*,int> curr=q.front();
    q.pop();
    node* currnode=curr.first;
    int currhd=curr.second;
    if(currnode->left!=NULL){
        q.push(make_pair(currnode->left,currhd-1));
    }
    if(currnode->right!=NULL){
        q.push(make_pair(currnode->right,currhd+1));
    }
    if(m.count(currhd)==0){
        m[currhd]=currnode->data;
    }
  }

  for(auto it:m){
    cout<<it.second<<" ";
  }


}







int main (){
vector <int> vec={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
node* root=buildtree(vec);

node*subroot=new node(2);
subroot->left=new node(4);
subroot->right=new node(5);
// cout<<root->data;
// cout<<height(root);

// pair<int,int> l=diam2(root);
 
// cout<<l.first<<endl;
// cout<<l.second;

// cout<<issubtree(root,subroot);
  

topview(root);
    
    return 0;
}