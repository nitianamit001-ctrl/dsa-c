
// #include<iostream>                                                             1
// #include<cstring>
// using namespace std;
// void lowercase(string str){
// int count=0;
// for(int i=0;i<str.length();i++){
//     char ch=str[i];
//     if(ch>='a' && ch<='z' ){
//         if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
//             count++;
//         }
//     }
// }
// cout<<count;
// }
// int main(){
// string str="AmitOoeiI";
// lowercase(str);
//     return 0;
// }





// #include<iostream>                                                              2
// #include<cstring>
// using namespace std;
// bool swap(string str1,string str2){
//     int count=0;
//     int first=-1,second=-1;
//     if(str1.length()!=str2.length()){
//         return false;
//     }
//     for(int i=0;i<str1.length();i++){
//         if(str1[i]!=str2[i]){
//               count++;
        
//         if(count==1){
//             first=i;
//         }else if(count==2){
//             second=i;
//         }
//     }
        
//     }
//     if(str1[first]==str2[second] && str1[second]==str2[first]){
//         return true;
//     }
//     return false;
// }
// int main(){
//  string str1="bank";
//  string str2="kabn";
//   cout<<swap(str1,str2);
//     return 0;
// }