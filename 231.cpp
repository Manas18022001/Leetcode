class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = 1;

        for(int i=0; i<31; i++){
            if(ans == n)
                return true;
            
            else if (n>ans && ans<(INT_MAX/2) && n<(ans*2))
                return false;

            if(ans < INT_MAX/2)
                ans = ans*2;
        }
        return false;
    }
};