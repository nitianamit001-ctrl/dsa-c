// stack impletaion as stack



// #include<iostream>
// #include<cstring>
// #include<vector>
// using namespace std;
// template <class T>
// class Stack{
//     vector<T>vec;
//   public:  
//     void push(T val){
//         vec.push_back(val);
//     }

//     void pop(){
//         if(isempty()){
//             cout<<"empty stack"<<endl;
//         }
//         vec.pop_back();
//     }

//     T top(){
//          if(isempty()){
//             cout<<"empty stack"<<endl;
//         }
//       int lastidx=vec.size()-1;
//       return  vec[lastidx];
//     }

//     bool isempty(){
//         return vec.size()==0;
//     }
// };




// stack impltion as linklist



// #include<iostream>
// #include<cstring>
// #include<vector>
// #include<list>
// using namespace std;

//  class Stack{
//     list<int> ll;
//     public:
     
//     void push(int val){
//         ll.push_front(val);
//     }

//     void pop(){
//         ll.pop_front();
//     }
     
//     int top(){
//         return ll.front();
//     }

//     bool isempty(){
//         return ll.size()==0;
//     }
//  };



// int main (){
//   Stack s;
//   s.push(3);
//   s.push(2);
//   s.push(1);

//   while(!s.isempty()){
//     cout<<s.top()<<" ";
//     s.pop();
//   }

//     return 0;
// }



// implemt but without use stl list



// #include<iostream>
// #include<cstring>
// #include<vector>
// using namespace std;
// template<class T>
// class node{
//     public:
//     T data;
//     node*next;

//     node( T val){
//         data=val;
//         next=NULL;
//     }

// };

// template <class T>
// class Stack{
//     node<T>*head;
//     public :
//      Stack(){
//         head=NULL;
//      }

//       void push(T val){
//         node<T>*newnode=new  node <T>(val);
//         if (head==NULL){
//             head=newnode;
//         }else{
//             newnode->next=head;
//             head=newnode;

//         }
//       }

//       void pop(){
//         node<T>*temp=head;
//         head=temp->next;
//         temp->next=NULL;
//         delete temp;
//       }

//       T top(){
//         return head->data;
//       }

//       bool isempty(){
//         return head==NULL;
//       }

// };


// int main (){
//   Stack <int> s;
//   s.push(3);
//   s.push(2);
//   s.push(1);

//   while(!s.isempty()){
//     cout<<s.top()<<" ";
//     s.pop();
//   }

//     return 0;
// }


// pushatbottom problem 

// #include<iostream>
// #include<cstring>
// #include<vector>
// #include<stack>
// using namespace std;
// void pushatbottom(stack<int>&s, int val){
//     if(s.empty()){
//        s. push(val);
//         return;
//     }
//   int temp=s.top();
//   s.pop();
//   pushatbottom(s,val);
//  s. push(temp);


// }

// int main (){
// stack<int > s;
// s.push(4);
// s.push(3);
// s.push(2);
// pushatbottom(s,5);
// while(!s.empty()){
//     cout<<s.top()<<" ";
//     s.pop();
// }

//     return 0;
// }


// reverse the string using stack

// #include<iostream>
// #include<cstring>
// #include<vector>
// #include<stack>
// using namespace std;
// string reverse(string str){
//     string ans;
//     stack<char> s;
//     for(int i=0;i<str.size();i++){
//         s.push(str[i]);
//     }
//     while(!s.empty()){
//         ans+=s.top();
//         s.pop();
//     }
//     return ans;
// }

// int main (){
// string str="tima";
// cout<<reverse(str);
//     return 0;
// }


// reverse the stack using recursion only

// #include<iostream>
// #include<cstring>
// #include<vector>
// #include<stack>
// using namespace std;

// void pushatbottom(stack<int> &s,int val){
//     if(s.empty()){
//         s.push(val);
//         return ;
//     }

//     int temp=s.top();
//     s.pop();
//     pushatbottom(s,val);
//     s.push(temp);

    
// }

// void reverse(stack<int> &s){
//   if(s.empty()){
//     return;
//   }
//   int temp=s.top();
//   s.pop();
//   reverse(s);
//  pushatbottom(s,temp);

// }




// int main (){
//     stack<int > s;
// s.push(4);
// s.push(3);
// s.push(2);
// reverse(s);
// while(!s.empty()){
//     cout<<s.top()<<" ";
//     s.pop();
// }

//     return 0;
// }



// span probleam


#include<iostream>
#include<cstring>
#include<vector>
#include<stack>
using namespace std;
void calspan( vector<int> vec,vector<int> span){
    stack<int> s;
    s.push(0);
    span[0]=1;

    for(int i=1;i<span.size();i++){
        int currprice=vec[i];
        while(!s.empty() && currprice>=vec[s.top()]){
            s.pop();
        }
    
    if(s.empty()){
            span[i]=i+1;
        }else{
            int prevhigh=s.top();
            span[i]=i-prevhigh;
            s.push(i);

        }
    }
    for(int i=0;i<span.size();i++){
        cout<<span[i]<<" ";
    }
}

int main (){
 vector<int> vec={100,80,60,70,60,85,100};
 vector<int> span={0,0,0,0,0,0,0}   ;


calspan(vec,span);

    return 0;
}