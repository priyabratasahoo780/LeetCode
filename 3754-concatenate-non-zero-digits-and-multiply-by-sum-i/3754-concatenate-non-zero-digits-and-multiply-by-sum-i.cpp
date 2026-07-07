class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int> v;
    long long sum = 0;
    string b = to_string(n);
    for(char c : b)
    {
        if(c != '0')
        {
            long long digit = c - '0';
            v.push_back(digit);
            sum += digit;
        }
    }
    int num = 0;
    for(int x : v)
    {
        num = num * 10 + x;
    }
    return num * sum;   
    }
};