// next greater element

// #include<iostream>
// #include<cstring>
// #include<vector>
// #include<stack>
// using namespace std;
// void nextgreater(int arr[],int ans[],int n){
//     stack<int> s;
//     ans[n-1]=-1;
//     s.push(3);
//     for(int i=n-2;i>=0;i--){
//        int currprice= arr[i];
//        while( !s.empty() && currprice>=s.top()){
//         s.pop();
//        }    
//        if(s.empty()){
//         ans[i]=-1;
//         s.push(arr[i]);
//        }else{
//         ans[i]=s.top();
//         s.push(arr[i]);
//        }
       
//     }
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
// }

// int main (){
//  int arr[]={6,8,0,1,3};
//  int n=sizeof(arr)/sizeof(int);
//  int ans[]={0,0,0,0,0};
//  nextgreater(arr,ans,n);
//     return 0;
// }



// .valid parinthesis


// #include<iostream>
// #include<cstring>
// #include<vector>
// #include<stack>
// using namespace std;
// bool validparanthses(string str){
//     stack<char> s;
//     for(int i=0;i<str.size();i++){
//         char ch=str[i];
//         if(ch=='(' ||ch=='{' || ch =='['){
//             s.push(ch);
//         }else{
//             if(s.empty()){
//                 return false;
//             }
//             char top=s.top();
//             if(top=='{'&& ch=='}'  || top=='[' && ch==']'  || top =='('  && ch== ')'){
//                 s.pop();
//             }else{
//                 return false;
//             }
//         }
//     }

//     return s.empty();

// }

// int main (){
// string str="([{}]())";
//  cout<<validparanthses(str);
//     return 0;
// }


// duplicate parenthsis
  

// #include<iostream>
// #include<cstring>
// #include<vector>
// #include<stack>
// using namespace std;
// bool duplicateparanthes(string str){
//     stack<char> s;

//     for(int i=0;i<str.size();i++){
//         char ch=str[i];
//         if(ch!=')'){
//             s.push(ch);
//         }else{
//             if(s.empty()){
//                 return true;
//             }

//             if(s.top()=='(' ){
//                 return true;
//             }else{
//                 while(s.top()!='('){
//                     s.pop();
//                 }
//                 s.pop();

//             }
//         }
//     }
//     return true;
// }

// int main (){
// string str="(x+y)";
// cout<<duplicateparanthes(str);
//     return 0;
// }



// maxarea in histogram


#include<iostream>
#include<cstring>
#include<vector>
#include<stack>
using namespace std;
int maxarea(vector<int>height){
    int n=height.size();
    vector<int> nsl(n);
    vector<int> nsr(n);
    stack<int> s;
    
    nsl[0]=-1;
    s.push(0);

    for(int i=1;i<n;i++){
        int curr=height[i];
        while(!s.empty() && curr<=height[s.top()]){
            s.pop();
        }
        if(s.empty()){
            nsl[i]= -1;
        }else{
          nsl[i]=s.top()  ;
        }
        s.push(i);
    }

    while(!s.empty()){
        s.pop();
    }

    nsr[n-1]=n;
    s.push(n-1);
    for(int i=n-2;i>=0;i--){
        int curr=height[i];
        while(!s.empty() && curr<=height[s.top()]){
            s.pop();
        }
        if(s.empty()){
            nsr[i]= n;
        }else{
            nsr[i]= s.top();
        }
        s.push(i);
    }


    int maxarea=0;
    for(int i=0;i<n ;i++){
        int width=nsr[i]-nsl[i]-1;
        int area=height[i]*width;
        maxarea=max(area,maxarea);
    }

    return maxarea;

}

int main (){

vector<int> height={2,1,5,6,2,3};

    cout<<maxarea(height);
    return 0;
}