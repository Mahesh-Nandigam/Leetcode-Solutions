class Solution {
public:
long long  mod=1e9+7;
long long poww(long long x, long long y){
long long ans=1;


while(y!=0){

if(y&1)
ans=(ans*x)%mod;


x=(x*x)%mod;
y=y>>1;
}

return ans%mod;





}
    int sumDecoded(vector<long long>& nums) {
    

    int n=nums.size();
    long long ans=0;
    for(int i=0;i<n;i++){


    long long width=nums[i]%10;
    long long d=floor(nums[i]/10);


    string d1=to_string(d);
    string x;
    string y;


    for(int k=0;k<d1.size();k++){
    if(k<width) x+=d1[k];
    else     y+=d1[k];
    }


    long long x1=stoll(x);
    long long y1=stoll(y);

    
    ans=ans+poww(x1,y1);
    ans=ans%mod;
    
    }

return ans%mod;

    }
};