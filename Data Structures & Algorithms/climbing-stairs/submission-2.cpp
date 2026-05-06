class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2)
            return n;

        int a = 2;
        int b = 1;

        for(int i=3; i<=n; i++){
            int sum = a+b;
            b = a;
            a = sum;
        }
        return a;
    }
};
