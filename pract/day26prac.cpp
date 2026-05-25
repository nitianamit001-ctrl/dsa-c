// #include<iostream>
// #include<cstring>
// #include<vector>
// #include<list>
// using namespace std;


// int main (){
// list<int> ll={1,2,3,4,5,6,7,8,9,10};
// int m=3;
// int n=2;
// while(ll.size()!=0){
//     for(int i=0;i<m;i++){
//         cout<<ll.front()<<"->";
//         ll.pop_front();
//     }
//     for(int i=0;i<n;i++){
//         ll.pop_front();
//     }
// }
//     return 0;
// }


#include<iostream>
#include<cstring>
#include<vector>
#include<list>
using namespace std;



int main (){
list<int> ll={1,2,3,4};
int x=2;
int y=4;
while(ll.size()!=0){
    if(ll.front()==x){
        ll.front()=y;
    }else if(ll.front()==y){
        ll.front()=x;
    }
    cout<<ll.front()<<"->";
    ll.pop_front();
}
    return 0;
}