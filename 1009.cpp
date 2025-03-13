class Solution {
public:
    int bitwiseComplement(int n) {
        int ans=0;
        int bit;
        int i = 0;
        while(n != 0){
            bit = n%2;
            ans = (bit*(10^i) + ans);
            n = n/2;
            i++;
        }
        
        int x=0;
        int y;
        int j=0;
        while(ans != 0){
            y == x%10;
            if(y == 1){
                x = (0*(10^j)) + x;
            }
            else{
                x = (1*(10^j)) + x;
            }
            ans = ans/10;
            j++;
        }
        int a;
        int b=0;
        int k = 0;
        while(x!=0){
            a = x%10;
            if(a==1){
                b = b + 2^k;
            }
            x = x/10;
            k++;
        }
        return b;
    }
};