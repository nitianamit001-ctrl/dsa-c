// queue impletion;


// #include<iostream>
// #include<cstring>
// #include<vector>
// #include<list>
// using namespace std;
// class Queue{
// list<int> ll;
// public:

// void push(int val){
//     ll.push_back(val);
// }

// void pop(){
//     ll.pop_front();
// }

// int front(){
//      return ll.front();
// }

// bool isempty(){
//     return ll.size()==0;
// }


// };

// int main (){
//  Queue q;
//  q.push(5);
//  q.push(6);
//  q.push(7);
//  q.push(8);

//  while(!q.isempty()){
//     cout<<q.front()<<" ";
//     q.pop();
//  }
//     return 0;
// }


// circular queue implemention using array

// #include<iostream>
// #include<cstring>
// #include<vector>

// using namespace std;
// class queue{
// int * arr;
// int capacity;
// int currsize;
// int r,f;
// public:
//  queue(int capacity){
//     this->capacity=capacity;
//     arr=new int[capacity];
//     currsize=0;
//     f=0;
//     r=-1;

// }
// void push(int val){
//     if(currsize==capacity){
//         cout<<"queue is full"<<endl;
//         return;
//     }
//     r=(r+1)%capacity;
//     arr[r]=val;
//     currsize++;
// }

// void pop(){
//     if(empty()){
//         cout<<"empty";
//         return;
//     }
//     f=(f+1)%capacity;
//     currsize--;
// }

// int front(){
//     if(empty()){
//         cout<<"empty";
//         return -1;
//     }
//     return arr[f];
// }

// bool empty(){
//     return currsize==0;
// }

// };

// int main (){
//  queue q(5);
//  q.push(1);
//  q.push(2);
//  q.push(3);
//  q.push(4);
//  q.push(5);
//  cout <<q.front()<<endl;
//  q.push(1);
//  q.pop();
//  cout <<q.front()<<endl;
 
//     return 0;
// }


// queue using 2 stacks;


// #include<iostream>
// #include<cstring>
// #include<vector>
// #include<stack>
// using namespace std;
// class queue{
//     stack<int> s1;
//     stack<int> s2;
// public:
//     void push(int val){
//         while(!s1.empty()){
//         s2.push(s1.top());
//         s1.pop();
//         }
//         s1.push(val);

//         while(!s2.empty()){
//             s1.push(s2.top());
//             s2.pop();
//         }
//     }
//   void pop(){
//     s1.pop();
//   }

//   int front(){
//     return s1.top();
//   }

//   bool empty(){
//     return s1.empty();
//   }

// };

// int main (){
// queue q;
// q.push(1);
// q.push(2);
// q.push(3);
// while(!q.empty()){
// cout<<q.front();
// q.pop();
// }
//     return 0;
// }


// stacks using 2 queue

// #include<iostream>
// #include<cstring>
// #include<vector>
// #include<queue>
// using namespace std;
// class stack{
// queue<int> q1;
// queue<int> q2;

// public:
//  void push (int val){
//     while(!q1.empty()){
//         q2.push(q1.front());
//         q1.pop();
//     }
//     q1.push(val);

//     while(!q2.empty()){
//         q1.push(q2.front());
//         q2.pop();
//     }
//  }

//  void pop(){
//     q1.pop();
//  }
//  int top(){
//     return q1.front();
//  }
//  bool empty(){
//     return q1.empty();
//  }

// };


// int main (){
//  stack s;
//  s.push(1);
//  s.push(2);
//  s.push(3);

//  while(!s.empty()){
//     cout<<s.top();
//     s.pop();
//  }
//     return 0;
// }


// non repeting letter

// #include<iostream>
// #include<cstring>
// #include<vector>
// #include<queue>
// using namespace std;
// void nonrepeting(string str){
//     int n=str.size();
//     queue<char> q;
//     int freq[26]={0};
//     for(int i=0;i<n;i++){
//         char ch=str[i];
//         q.push(ch);
//         int idx=ch-'a';
//         freq[idx]++;

//         while(!q.empty()  && freq[q.front()-'a']>1){
//             q.pop();
//         }
//         if(q.empty()){
//             cout<<"-1"<<" ";
           
//         }else{
//         cout<<q.front()<<" ";
//         }
//     }
// }

// int main (){
//  string str="aabccxb";
//  nonrepeting(str);
//     return 0;
// }


// interleave 2 queue

#include<iostream>
#include<cstring>
#include<vector>
#include<queue>
using namespace std;
void interleave(queue<int> &org){
  queue<int> f;
  int n=org.size();
  for(int i=0;i<n/2;i++){
    f.push(org.front());
    org.pop();
  }
    while(!f.empty()){
        org.push(f.front());
        org.push(org.front());
        f.pop();
        org.pop();
    }
   
}

int main (){
queue<int > org;

for(int i=1;i<=10;i++){
    org.push(i);
}
 interleave(org);
for(int i=0;i<10;i++){
    cout<<org.front();
    org.pop();
}
    return 0;
}