class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> numString;
        if(n == 0)
        {
            return numString;
        }
        for (int i=1; i<=n; i++)
        {
            if(i%3==0 && i%5==0) {numString.push_back("FizzBuzz");}
            else if(i%3==0 && i%5!=0) {numString.push_back("Fizz");}
            else if(i%3!=0 && i%5==0) {numString.push_back("Buzz");}
            else {numString.push_back(to_string(i));}
        }
        return numString;
    }
};