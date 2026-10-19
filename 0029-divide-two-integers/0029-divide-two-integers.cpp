class Solution {
public:
    int divide(int dividend, int divisor) {
        long long ans=0;
        bool sign=true;
        if((dividend>0 && divisor<0) || (dividend<0 && divisor>0))
        sign=false;
       long long  div=abs((long long )dividend);  
          long long    divi=abs((long long )divisor);
        while(div>=divi){
        int i=0;
        while(divi<<(i+1)<div)
        i++;
        div-=divi<<(i);
        ans+=1<<(i);
        }

        if(ans==(1LL<<(31)) && sign==true)
        return INT_MAX;


        if(sign)
        return ans;
        else
        return -ans;
        
    }
};