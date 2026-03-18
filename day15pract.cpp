// #include<iostream>
// #include<cstring>
// #include<vector>
// #include <algorithm>
// using namespace std;
// vector<int> duplicate(vector<int> arr,int n){
//     sort(arr.begin(),arr.end());
//     vector<int> ans;
//     int duplicate=-2;
//     int missing=-2;
//     for(int i=0;i<n-1;i++ ){
//         if(arr[i]==arr[i+1]){
//         duplicate=arr[i];
//         break;
//     }
// }
// for(int i=1;i<n;i++){
//     if(find(arr.begin(),arr.end(),i)==arr.end()){
//         missing=i;
//         break;
//     }
// }
// ans.push_back(duplicate);
// ans.push_back(missing);
// return ans;
// }

// int main (){
//    vector<int> arr={1,2,2,4};
//    vector<int> ans=duplicate(arr,arr.size());
//    cout<<ans[0]<<endl;
//    cout<<ans[1]<<endl;
// //    cout<<ans[2]<<endl;
// //    cout<<ans[3]<<endl;
   
//     return 0;
// }



// #include<iostream>
// #include<cstring>
// #include<vector>
// #include<climits>
// using namespace std;
// vector<int> areamax(vector<int> height,int n){
//     int left=0;
//     int right=n-1;
//     int maxarea=0;
//     while(left<right){
//      int currarea=min(height[left],height[right])*(right-left);
//      maxarea=max(maxarea,currarea);
//      if(height[left]<height[right]){
//      left++;
//      }else{
//         right--;
//      }
//     }
//     cout<<maxarea;
// } 

// int main (){
// vector<int> height={1,12,6,2,5,4,,3,7};
//  areamax(height,height.size());
//     return 0;
// }




#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> triple(vector<int> input,int n){
    sort(input.begin(),input.end());
    int sum;
    vector<vector<int>>ans;
    
    for(int i=0;i<n;i++){
    int left=i+1;
    int right=n-1;
    if(i>0 && input[i]==input[i-1]){
        continue;
    }
    while(left<right){
        sum=input[i]+input[left]+input[right];
        if(sum==0){
            vector<int> temp={input[i],input[left],input[right]};
            ans.push_back(temp);

            while(left<right && input[left]==input[left+1]){
                left++;
            }
            while(left<right && input[right]==input[right-1]){
                right--;
            }
            left++;
            right--;
        }else if(sum<0){
            left++;
        }else{
            right--;
        }
    }    
    }
    return ans ;

}

int main (){
vector<int> input={-1,0,1,2,-1,-4};
vector<vector<int>> ans=triple(input,input.size());
for(int i=0;i<ans.size();i++){
    cout<<"[";
    for(int j=0;j<ans[i].size();j++){
    cout<<ans[i][j]<<",";
}
cout<<"]";
}
    return 0;
}