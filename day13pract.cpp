// #include<iostream>
// using namespace std;
// void counter(int arr[][3],int n,int m,int key){
//     int count =0;
//     int start=0,end=m-1;
//     for(int i=0;i<n;i++){
//       for(int j=0;j<m;j++){
//         if(arr[i][j]==7){
//             count++;
//         }
//       }
//     }
//     cout<<"count no of 7th : "<<count;
// }

// int main (){
// int arr[][3] = { {4,7,8},
//                   {8,8,7},
//                   {7,7,5} };
//     int n=3;
//     int m=3;
//     int key=7;
//     counter(arr,n,m,key);
//     return 0;
// }






#include<iostream>
using namespace std;
void counter(int arr[][3],int n,int m){
    int count =0;
    int srow=0,end=m-1;
   
      for(int j=0;j<m;j++){
       count+= arr[srow+1][j];
            
        }
      
    
    cout<<"count no of 2 row : "<<count;
}

int main (){
int arr[][3] = { {4,7,8},
                  {8,8,7},
                  {7,7,5} };
    int n=3;
    int m=3;
    cout<<sizeof(arr)/sizeof(int);
    // counter(arr,n,m);
    return 0;
}




// #include<iostream>
// #include<cstring>
// using namespace std;
// void transpose(int arr[][3],int n){
//        int mat[3][n];
//        for(int i=0;i<n;i++){
//         for(int j=0;j<3;j++){
//            mat[j][i]=arr[i][j];
//         }
//        }

//         for(int i=0;i<3;i++){
//         for(int j=0;j<n;j++){
//             cout<<mat[i][j]<<",";
//         }
//         cout<<endl;
//     }

// }


// int main(){
// int arr[2][3]={{11,12,13},
//                {21 ,22, 23} };
//  int n=2;
//      transpose(arr,n) ;         
//     return 0;
// }