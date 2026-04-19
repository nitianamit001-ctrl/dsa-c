#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
class node{
    public :
    int data ;
    node *next;

    node(int val){
        data=val;
        next=NULL;
    }
};
class list{
    node *head;
    node *tail;
public :
  list(){
    head=NULL;
    tail=NULL;
  }
  void front(int val){
       node *newnode =new node(val);
         if(head==NULL){
            head=tail=newnode;
         }else{
            newnode->next=head;
            head=newnode;
         }
  }
  void back(int val){
    node*newnode=new node(val);
    if(head==NULL){
       head=tail=newnode; 
    }else{
        tail->next=newnode;
        tail=newnode;
    }
  }

  void insert(int val,int pos){
    node* newnode=new node(val);
     node*temp=head;
     for(int i=0;i<pos-1;i++){
        temp=temp->next;
     }
     newnode->next=temp->next;
     temp->next=newnode;

}
  void print(){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";
  }

  int searchitr(int key){
    node * temp=head;
    int count=0;
    while(temp!=NULL){
        if(temp->data==key){
            cout<<" found\n";
            return count;
        }
        count++;
        temp=temp->next;
    }
    return -1;
  }

  void reverse(){
    node* curr=head;
    node * prev=NULL;
     tail=head;
while(curr!=NULL){
    node*next=curr->next;
    curr->next=prev;

    prev=curr;
    curr=next;
  }
  head=prev;
}

int getsize(){
    node*temp=head;
    int sz=0;
    while(temp!=NULL){
        temp=temp->next;
        sz++;
    }
    return sz;
}

void todelete(int n){
    int size=getsize();
    node *prev=head;
    for(int i=1;i<(size-n);i++){
        prev=prev->next;
    }
    prev->next=prev->next->next;
}


};

int main (){
 list ll;
 ll.front(3);
 ll.front(2);
 ll.front(1);
 ll.print();
 ll.back(4);
 ll.back(5);
//  ll.insert(100,2);
ll.reverse();
 ll.print();
 
 // cout<<ll.searchitr(5);
 ll.todelete(2);
 
 ll.print();
    return 0;
}