class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int sum = 0;
        int num = n;

        while(num != 0){
        prod = prod * (num%10);
        sum = sum + (num%10);
        num = num/10; 
        }

        return (prod-sum);

    }
};