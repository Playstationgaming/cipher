#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
        }
        sort(arr,arr+size);
        bool ans=false;
      for(int i=0;i<size-2;i++){
        int l=i+1;
        int r=size-1;
        while(arr[l]<arr[r]){
            int sum=arr[i]+arr[l]+arr[r];
            if(sum==0){
                ans=true;
                break;
            }
            else if(sum<0){
                l++;
            }
            else{
                r--;
            }
        }
      }
      if(ans==true){
        cout<<"Output: 1";
      }
      else{
        cout<<"Output 0";
      }

}
