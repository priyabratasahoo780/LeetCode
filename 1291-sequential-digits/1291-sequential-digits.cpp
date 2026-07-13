class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        string a = "123456789";
        for(int i=2; i<=9; i++){
        for(int j=0; j+i<=9; j++){
            string part = a.substr(j,i);
            int num = stoi(part);
            if(num>=low && num<=high){
                ans.push_back(num);
            }
        }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

