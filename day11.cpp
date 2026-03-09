// #include<iostream>
// #include<climits>
// using namespace std;
// void bestbuys(int price[],int n){
//     int bestbuy[100000];
//        bestbuy[0] = INT_MAX;
//        for (int i=1;i<n;i++){
//         bestbuy[i]=min(bestbuy[i-1],price[i-1]);
//         cout<<bestbuy[i]<<",";
//        }
//        cout<<endl;
//        int maxprofit=0;
//        for(int i=0;i<n;i++){
//        int currprofit=price[i]-bestbuy[i];
//        maxprofit=max(maxprofit,currprofit);
//        }
//        cout<<maxprofit<<"is max profit";

// }
// int main (){
// int price[]={7,1,5,3,6,4};
// int n=sizeof(price)/sizeof(int);
// bestbuys(price,n);
//     return 0;
// }

#include<iostream>
#include<climits>
using namespace std;
void trapped(int height[],int n){
int leftmax[100000];
leftmax[0]=INT_MIN;
for(int i=1;i<n;i++){
leftmax[i]=max(leftmax[i-1],height[i-1]);
// cout<<leftmax[i]<<",";
}
cout<<endl;
int rightmax[100000];
rightmax[n-1]=INT_MIN;
for(int i=n-2;i>=0;i--){
rightmax[i]=max(rightmax[i+1],height[i+1]);
// cout<<rightmax[i]<<",";
}
cout<<endl;
leftmax[0]=height[0];
rightmax[n-1]=height[n-1];
int totaltrap=0;
for(int i=0;i<n;i++){
int currtrap=min(leftmax[i],rightmax[i])-height[i];
if(currtrap>0){
totaltrap+=currtrap;
}
}
cout<<totaltrap;
}
int main(){
int height[]={4,2,0,6,3,2,5};
int n=sizeof(height)/sizeof(int);
trapped(height,n);
    return 0;
}