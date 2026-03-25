// #include<iostream>                                                            1
// #include<cstring>
// #include<vector>
// using namespace std;
// int function(int n){
//     if(n==0){
//        return 0;
//     }
//     cout<<n<<",";
//     function(n-1);
// }

// int main (){
//     function(5);
//     return 0;
// }



// #include<iostream>                                                                           1
// #include<cstring>
// #include<vector>
// using namespace std;
// int sumnat(int n){
//     if (n==1){
//         return 1;
//     }
//     return n+sumnat(n-1);
// }

// int main (){
//   int sum= sumnat(5);
//   cout<<"sumof natural no : "<<sum<<endl;
//     return 0;
// }



// #include<iostream>
// #include<cstring>                                                                           2
// #include<vector>
// using namespace std;
// int fabonachi(int n){
//  if(n==0){
//     return 0;
//  }
//  if(n==1){
//     return 1;
//  }

//     return fabonachi(n-1)+fabonachi(n-2);
// }

// int main (){
//   int ans=fabonachi(6);
//   cout<<ans;
//     return 0;
// }



// #include<iostream>                                                                                       4
// #include<cstring>
// #include<vector>
// using namespace std;
// bool issorted (int arr[],int n,int i){
//    if (i==n-1){
//       return true;
//    }
//    if(arr[i]>arr[i+1]){
//       return false;
//    }
//    return issorted(arr,n,i+1);
// }

// int main (){
//  int arr[]={1,2,3,4,4};
//  int n=sizeof(arr)/sizeof(int);
//  int i=0;
//   cout<<issorted(arr,n,i);

//     return 0;
// }




// #include<iostream>
// #include<cstring>
// #include<vector>
// using namespace std;
// vector<int> occurance (vector<int> arr,int i,int target){
//   vector<int> ans;
//   if(i==arr.size()-1){
//      ans.push_back(-1);
//      return ans;
//   }
//    if(arr[i]==target){
//       ans.push_back(i);
//       return ans;
//    }
//    return occurance(arr,i+1,target);
// }

// int main (){
// vector<int>  arr={1,2,3,4,4};
 
//  int i=0;
//  int target=3;
//   vector<int> ans=occurance(arr,i,target);
//    cout<<ans[0];
//     return 0;
// }






// #include<iostream>
// #include<cstring>
// #include<vector>
// using namespace std;
// vector<int> occurance (vector<int> arr,int i,int target){
//   vector<int> ans;
//   if(i==0){
//      ans.push_back(-1);
//      return ans;
//   }
//    if(arr[i]==target){
//       ans.push_back(i);
//       return ans;
//    }
//    return occurance(arr,i-1,target);
// }

// int main (){
// vector<int>  arr={1,2,3,4,4};
 
//  int i=arr.size()-1;
//  int target=4;
//   vector<int> ans=occurance(arr,i,target);
//    cout<<ans[0];
//     return 0;
// }



// #include<iostream>
// #include<cstring>                                                  not good time compleccity=n
// #include<vector>
// using namespace std;
// int power(int base,int expo){
//   if(expo==0){
//     return 1;
//   }
//   return 2*power(base,expo-1);
// }

// int main (){
// int base =2;
// int expo=10;
// cout<<power(base,expo);
//     return 0;
// }


#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int power(int base,int expo){
  if(expo==0){
    return 1;
  }
 int halfpower=power(base,expo/2);
 int halfpowersquare=halfpower*halfpower;
 if(expo%2!=0){
  return base*halfpowersquare;
 }
 return halfpowersquare;
}

int main (){
int base =2;
int expo=10;
cout<<power(base,expo);
    return 0;
}