// #include<iostream>
// #include<cstring>
// #include<vector>
// using namespace std;
// int duplicate( string str,int i,int arr[26]){
//     int idx=str[i]-'a';
//     arr[idx]+=1;
//     if(i==str.length()){
//         return 1;
//     }

//    if(arr[idx]==1){
//     cout<<str[i];
//    }
   
//    duplicate(str,i+1,arr);
// }

// int main (){
//    string str="appannacollege";
//    int i=0;
//     int arr[26]={0};

//    duplicate(str,i,arr);
//     return 0;
// }





// #include<iostream>
// #include<cstring>
// #include<vector>
// using namespace std;
// int freindpairing(int n){
//     if(n==1||n==2){
//         return n;
//     }
//     return freindpairing(n-1)+(n-1)*freindpairing(n-2);
// }

// int main (){
//   int n=4;
//  cout<< freindpairing(n);

//     return 0;
// }








#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
void binarystring(int n,int lp,string ans){
if(n==0){
    cout<<ans<<endl;
    return;
}
if(lp!=1){
    binarystring(n-1,0,ans+'0');
    binarystring(n-1,1,ans+'1');
}else{
    binarystring(n-1,0,ans+'0');

}
}

int main (){
 int n=3;
 string ans="";
 binarystring(n,0,ans);
    return 0;
}
