class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x){
            int y = x % 10;
            x = x / 10;
            if(ans > INT_MAX/10 || ans < INT_MIN/10)
            return 0;
            ans = ans * 10 + y;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna