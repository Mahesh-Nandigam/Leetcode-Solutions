using ll=long long;
class Solution {
public:
ll my_func(ll n){
    ll count=0;
    for(ll i=1;i<=n;i=i*10){
    count=count+n-i+1;
    }
    return count;
}
    int kthDigit(long long k) {
        if(k<=9)
        return k;
        ll st=1;
        ll end=1e14;
        ll ans=0;
        while(st<=end){
            ll mid = st+(end-st)/2;
            if(my_func(10*mid+9)<k){
            st=mid+1;
            }
            else
            {
            ans=mid;
            end=mid-1;
            }
        }
        ll curr=ans;
        ll prev=my_func(10*(curr-1)+9);
        ll rem=k-prev-1;
        ll d=to_string(10*curr).size();
        ll q=rem/d;
        ll r=rem%d;
        ll num=0;
        if(curr%2==0){
            num=10*curr+q;
        }
        else{
            num=10*curr+9-q;
        }
        string s=to_string(num);
        return s[r]-'0';

    }
};