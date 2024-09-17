class Solution {
public:
void buyandsell(vector<int>&arr,int i,int &ans,int &maxi)
{
     if(i<0)
     {
      return ;
     }   
     if(maxi>arr[i])
     {
       int k=maxi-arr[i];
       ans=max(ans,k);
       buyandsell(arr,i-1,ans,maxi);
     }
     else 
     {

       buyandsell(arr,i-1,ans,arr[i]);
     }
}
    int maxProfit(vector<int>& arr) {
        int maxi=arr[arr.size()-1];
  int i=arr.size()-2;
  int ans=INT_MIN;
   buyandsell(arr,i,ans,maxi);
  if(ans==INT_MIN) return 0;
  return ans;
    }
};
