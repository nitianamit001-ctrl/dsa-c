// #include<iostream>
// #include<cstring>
// #include<vector>
// using namespace std;
// class node{
//     public:
// int data;
// node*next;
//      node(int val){
//         data=val;
//         next=NULL;
//      }
// };
// class list {
// public:
// node*head;
// node*tail;
// list(){
//     head=tail=NULL;
// }
// void push_front(int val){
//     node*newnode=new node(val);
//     if(head==NULL){
//         head=tail=newnode;
//     }else{
//         newnode->next=head;
//         head=newnode;
//     }
// }
// void push_back(int val){
//     node*newnode=new node(val);
//     if(head==NULL){
//         head=tail=newnode;
//     }else{
//         tail->next=newnode;
//         tail=newnode;
// }
// }
// void print(){
//     node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }


// };

// bool cycle(node*head){
//    node*slow=head;
//    node*fast=head;
//    while(fast!=NULL && fast->next!=NULL){
//       slow=slow->next;
//       fast=fast->next->next;
//       if (slow==fast){
//         cout<<"cycle";
//         return true;
//       }
//    }
//    cout<<"do not exist cycle";
//    return false;
// }

// int main (){
// list ll;
// ll.push_front(4);
// ll.push_front(3);
// ll.push_front(2);
// ll.push_back(5);
// ll.print();
// ll.tail->next=ll.head;
// cycle(ll.head);

//     return 0;




// #include<iostream>
// #include<list>
// using namespace std;
// void print(list<int>ll){
//   list<int>::iterator itr;
//   for(itr=ll.begin();itr!=ll.end();itr++){
//     cout<<(*itr)<<"->";
//   }
//   cout<<"Null"<<endl;
// }

// int main(){
//     list<int> ll;
//     ll.push_front(5);
//     ll.push_front(4);
//     ll.push_front(3);
//     ll.push_front(2);
//     ll.push_back(6);
   
//     auto it=ll.begin();
//     advance(it,4);
//     ll.insert(it,100);


//     cout<<ll.size()<<endl;
//     cout<<ll.front()<<endl;
//     cout<<ll.back()<<endl;
//        print(ll);
//        return 0;
// }


#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
class node{
    public:
int data;
node*next;
     node(int val){
        data=val;
        next=NULL;
     }
};
class list {
public:
node*head;
node*tail;
list(){
    head=tail=NULL;
}
void push_front(int val){
    node*newnode=new node(val);
    if(head==NULL){
        head=tail=newnode;
    }else{
        newnode->next=head;
        head=newnode;
    }
}
void push_back(int val){
    node*newnode=new node(val);
    if(head==NULL){
        head=tail=newnode;
    }else{
        tail->next=newnode;
        tail=newnode;
}
}
};
void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

node*reverse(node*head){
  node*curr=head;
  node*prev=NULL;
  while(curr!=NULL){
    node*temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
  }

  return prev;
}
node* splitatmid(node*head){
  node*slow=head;
  node*fast=head;
  node*prev=NULL;
  while(fast!=NULL && fast->next!=NULL){
    prev=slow;
    slow=slow->next;
    fast=fast->next->next;
  }
  if(prev!=NULL){
  prev->next=NULL;
  }
  return slow;
}

node* zigzag(node*head){
  node* righthead=splitatmid(head);
   node*rightrev= reverse(righthead);
    node*left=head;
    node*right=rightrev;
    node*tail=right;
    while(left!=NULL && right!=NULL){
      node*leftnext=left->next;
      node*rightnext=right->next;
      left->next=right;
      right->next=leftnext;
      tail=right;
      left=leftnext;
      right=rightnext;
    }
    if(right!=NULL){
      tail->next=right;
    }
     return head;
}





int main (){
list ll;
ll.push_front(4);
ll.push_front(3);
ll.push_front(2);
ll.push_back(5);
print(ll.head);
ll.head=zigzag(ll.head);
print(ll.head);


    return 0;

}