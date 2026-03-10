// #include<iostream>                                                       stair case search from top
// using namespace std;
// int stair(int arr[4][4],int key){
// int n=4;
// int m=4;
// int r=0,c=m-1;
// while(r<n&& c>=0){
    
//         int start=arr[r][c];
//     if(start==key){
//         return 1;
//     } else if(start<key ){
//         r++;
//     }else{
//         c--;
//     }
// }
// return -1;
// }
// int main(){
// int arr[4][4]={{10,20,30,40},
//                 {15,25,35,45},
//                  {27,29,37,48},
//                  {32,33,39,50}};
//  int key=300;
//  cout<<stair(arr,key);


//     return 0;
// }





// #include<iostream>
// using namespace std;                                                binary search in 2d array
// int bi(int arr[4][4],int key){
//  int n=4;
//  int m=4;
//  int start=0;
//  int end=m-1;
//  for(int i=0;i<n;i++){
//     while(start<=end){
//         int mid=(start+end)/2;
//         if(arr[i][mid] ==key){
//             cout<<i<<","<<mid<<endl;
//             return 1;
//         }else if(arr[i][mid]>key){
//             end=mid-1;
//         }else{
//             start=mid+1;
//         }
//     }
//     start=0;
//     end=m-1;
//  }
// return -1;
// }

// int main(){
// int arr[4][4]={{10,20,30,40},
//                 {15,25,35,45},
//                  {27,29,37,48},
//                  {32,33,39,50}};
// int key=33;
// cout<<bi(arr,key);
//     return 0;
// }





// #include<iostream>                                                                 STRAIR SEARh from bottom
// using namespace std;
// int stair(int arr[4][4],int key){
// int n=4;
// int m=4;
// int r=n-1,c=0;
// while(c<m &&r>=0){
//     if(arr[r][c]==key){
//         cout<<r<<","<<c<<"found  CONGRULATION"<<endl;
//         return 0;
//     }else if (arr[r][c]<key){
//         c++;
//     }else{
//         r--;
//     }
// }
// cout<<"not found  SORRY";

// }
// int main(){
// int arr[4][4]={{10,20,30,40},
//                 {15,25,35,45},
//                  {27,29,37,48},
//                  {32,33,39,50}};
// int key=90;
// stair(arr,key);
// return 0;
// }





// #include<iostream>
// using namespace std;
// int daigonal(int arr[4][4], int n){
//     int diasum=0;

// for(int i=0;i<n;i++){                                          less t.c=n
//    diasum+=arr[i][i];
//    if(i!=n-i-1){
//     diasum+=arr[i][n-1-i];
//    } 
// }

// for(int i=0;i<n;i++){                                           t.c=n2
//     for(int j=0;j<n;j++){
//         if(i==j){
//             diasum+=arr[i][j];
//         }else if(j==n-i-1){
//             diasum+=arr[i][j];
//         }
//     }
// }

// cout<<"daigonal sum"<<"="<<diasum;
// }
    // // int main(){
    // // int arr[4][4]={{10,20,30,40},
    // //                 {15,25,35,45},
    // //                  {27,29,37,48},
    // //                  {32,33,39,50}};
 
//   int n=4    ;   
//   daigonal(arr,n);        
// return 0;
// } 





#include<iostream>
using namespace std;
int daigonal(int arr[4][4], int n){
int srow=0,scol=0;
int erow=n-1,ecol=3;
 
while(srow<=erow && scol<=ecol){
    // top
    for(int j=scol;j<=ecol;j++){
        cout<<arr[srow][j];
    }
    cout<<endl;
    // right
    for(int i=srow+1;i<=erow;i++){
        cout<<arr[i][ecol];
    }
    cout<<endl;
    //  bottom
    for(int j=ecol-1;j>=scol;j--){
        cout<<arr[erow][j];
    }
    cout<<endl;
    // left
    for(int i=erow-1;i>=srow+1;i--){
        cout<<arr[i][scol];
    }
    cout<<endl;
    srow++,scol++;
    erow--,ecol--;
}



}
     int main(){
    int arr[4][4]={{10,20,30,40},
                   {15,25,35,45},
                   {27,29,37,48},
                   {32,33,39,50}};
int n=4;
daigonal(arr,n);
 return 0;
     }