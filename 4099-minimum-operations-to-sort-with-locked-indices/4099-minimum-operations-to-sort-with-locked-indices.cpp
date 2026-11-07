class Solution {
public:


bool is_sort(vector<int>&nums){
for(int i=0;i<nums.size()-1;i++){
if(nums[i]>nums[i+1])
return false;
}
return true;

}


    int minOperations(vector<int>& nums, vector<int>& locked, int k) {
        int n=nums.size();
        int ans=0;

       for(int i=0;i<n-1;i++){
        if(nums[i]>nums[i+1] && locked[i]==0 && locked[i+1]==0){
        swap(nums[i],nums[i+1]);
        ans++;
        }
       }



       for(int i=0;i<n-1 && k>0;i++){



        if(nums[i]>nums[i+1]){

         if(locked[i]==0 && locked[i+1]==0){
        swap(nums[i],nums[i+1]);
        ans++;
         }
        

        if(locked[i]==1 && locked[i+1]==1 && k>1){
         locked[i]=0;
        locked[i+1]=0;
        swap(nums[i],nums[i+1]);
        ans+=3;
        k=k-2;
        }
        

        if(locked[i]==1 && locked[i+1]==0){
        locked[i]=0;
        k--;
        swap(nums[i],nums[i+1]);
        ans+=2;
        }

        if(locked[i]==0 && locked[i+1]==1){
        locked[i+1]=0;
        k--;
        swap(nums[i],nums[i+1]);
        ans+=2;
        }


        }

       }

        int m=n;
        int t=n;
        int x=n;
    

        
       while(t!=0){

      for(int i=0;i<n-1;i++){
        if(nums[i]>nums[i+1] && locked[i]==0 && locked[i+1]==0){
        swap(nums[i],nums[i+1]);
        ans++;
        }
       }


       t--;


       }




      while(x!=0){

      for(int i=0;i<n-1 && k>0;i++){


        if(nums[i]>nums[i+1]){

         if(locked[i]==0 && locked[i+1]==0){
        swap(nums[i],nums[i+1]);
        ans++;
         }
        

        if(locked[i]==1 && locked[i+1]==1 && k>1){
         locked[i]=0;
        locked[i+1]=0;
        swap(nums[i],nums[i+1]);
        ans+=3;
        k=k-2;
        }
        

        if(locked[i]==1 && locked[i+1]==0){
        locked[i]=0;
        k--;
        swap(nums[i],nums[i+1]);
        ans+=2;
        }

        if(locked[i]==0 && locked[i+1]==1){
        locked[i+1]=0;
        k--;
        swap(nums[i],nums[i+1]);
        ans+=2;
        }
        }
       }
        x--;
      }



       while(m!=0){

      for(int i=0;i<n-1;i++){
        if(nums[i]>nums[i+1] && locked[i]==0 && locked[i+1]==0){
        swap(nums[i],nums[i+1]);
        ans++;
        }
       }

       
       m--;


       }





       if(is_sort(nums))
       return ans;

       return -1;

    }
};