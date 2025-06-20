class Solution {
public:
    int reverse(int x) {
        int reverse = 0;
        while(x!=0){
            if(reverse>INT_MAX/10 || reverse<INT_MIN/10)
            return 0;
            int lastDigit = x%10;
            x=x/10;
            reverse = reverse*10 + lastDigit;
        }
        return reverse;
        
    }
};