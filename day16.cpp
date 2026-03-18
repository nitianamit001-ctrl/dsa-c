// #include<iostream>
// #include<cstring>
// #include<vector>
// using namespace std;
// void numupdate(int num,int i,int value){
//    int mask=~(1<<i);
//    num=(num&mask);
//    num=num|(value<<i);
//    cout<<num;
// }

// int main (){
//   int num=7;
//   int i=3;
//   int value=0;
//   numupdate(num,i,value);


//     return 0;
// }


// #include<iostream>
// #include<cstring>
// #include<vector>
// using namespace std;
// void clear(int num,int i){
//     int mask=~0<<i;
//     num=num& mask;
//     cout<<num<<endl;
// }

// int main (){
// int num=15;
// int i=2;
// clear(num,i);
//     return 0;
// }



// #include<iostream>
// #include<cstring>
// #include<vector>
// using namespace std;
// void countbits(int num){
//     int count=0;
//     while(num>0){
//         int lastdigit=num&1;
//         count+=lastdigit;
//         num=num>>1;
        
//     }
//     cout<<count<<endl;
// }

// int main (){
// int num=10;
// countbits(num);
//     return 0;
// }



#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
void countbits(int num,int expo){
    int count=1;
    while(expo>0){
        int lastdigit=expo&1;
        if(lastdigit){
        count=count*num;
        }
       expo= expo>>1;
        num=num*num;
        
    }
    cout<<count<<endl;
}

int main (){
int num=3;
int expo=5;
countbits(num,expo);
    return 0;
}