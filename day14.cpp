// #include<iostream>                                   covert lower to uppercase
// #include<cstring>
// using namespace std;
// void utol(char w[],int n){
//     for(int i=0;i<n;i++){
//         char ch=w[i];
//         if(ch>='a' &&ch<='z'){
//             continue;
//         }else{
//             w[i]=ch-'A'+'a';
//         }
//     }
// }
// int main(){
//    char w[]="AMIT";
//    int n=strlen(w);
//    utol(w,n);
// cout<<w;

//     return 0;
// }

// #include<iostream>                                    find palidrome
// #include<cstring>
// using namespace std;
// int vp(char w[],int n){
   
//    for(int i=0;i<n;i++){
//     if(w[i]!=w[n-i-1]){
//         return false;
//     }
// }
// return true;
// }

// int main(){
//    char w[]="racer";
// cout<<vp(w,strlen(w));
//    return 0;
// }


// #include<iostream>                                              valid anagram
// #include<cstring>
// using namespace std;
// bool anagram(string str1,string str2){
//    if(str1.length() != str2.length()){
//     return false;
//    }
//    int count[26]={0};
//    for(int i=0;i<str1.length();i++){
//     int idx=str1[i]-'a';
//      count[idx]++;
//    }
//    for(int i=0;i<str2.length();i++){
//     int idx=str2[i]-'a';
//     if(count[idx]==0){
//         return false;
//     }
//     count[idx]--;
//    }
//    return true;
// }


// int main(){
//     string str1="amit";
//     string str2="sert";
//   cout<<  anagram(str1,str2);
//     return 0;
// }