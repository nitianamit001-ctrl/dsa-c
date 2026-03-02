#include<iostream>
using namespace std;
int main(){
// int n=4;                                                               1
// for(int i=1;i<=4;i++){
//     for(int j=1;j<=i;j++){
//         cout<<"*"<<"";
//     }
//     cout<<endl;
// }


// int n=4;                                                                      3
// for(int i=1;i<=n;i++){
//   for(int j=1;j<=i;j++){
//     cout<<j<<"";
//   }
//   cout<<endl;
// }


// int n=4;                                                                                   4
//     char ch='A';
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//       cout<<ch<<"";
//           ch++;
//     } 
//     cout<<endl;
// }


// int n=4;                                                5
// for(int i=1;i<=n;i++){
//     cout<<"*";
//     for(int j=1;j<=n-1;j++){
//         if( i==1 || i==n){
//             cout<<"*";
//         }else{
//             cout<<" ";
//         }
//     }
//     cout<<"*";
//     cout<<endl;
// }


// int n=4;                                                  6
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//     cout<<" ";
//     }
//     for(int k=1;k<=i;k++){
//         cout<<"*";
//     }
//     cout<<endl;
// }


// int n=5;                                                       7
// int val=1;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//    cout<<val<<" ";
//    val++;
//     }
//     cout<<endl;
// }


// int n=4;                                                            8
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=(n-i);j++){
//         cout<<" ";
//     }
//     for(int k=1;k<=2*i-1;k++){
//         cout<<"*";
//     }
  
//     cout<<endl;
// }
// for(int i=n;i>=1;i--){
//     for(int j=1;j<=(n-i);j++){
//         cout<<" ";
//     }
//     for(int k=1;k<=2*i-1;k++){
//         cout<<"*";
//     }
  
//     cout<<endl;
// }


int n=4;
for(int i=1; i<=n; i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    for(int j=1;j<=2*n-2*i;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}
for(int i=n; i>=1; i--){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    for(int j=1;j<=2*n-2*i;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}
    return 0;
}