class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0; 
        int product = 1; // multiply karna h toh 0 nahi kyuki wo 0 hojaaega 
        
        while(n){
            int rem = n % 10;
            n = n / 10;
            sum = sum + rem;
            product = product * rem;
        }
            int result = product - sum;
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna