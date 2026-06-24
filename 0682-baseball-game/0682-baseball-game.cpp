class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> arr;
        for(string s : operations){
            if(s == "D"){
              arr.push_back(arr.back() * 2);
            }
       else if(s == "C"){
                arr.pop_back();
            }
       else if(s == "+"){
          int n = arr.size();
                arr.push_back(arr[n - 1] + arr[n - 2]);
            }
            else {
               arr.push_back(stoi(s));
            }      
        }
        int sum = 0;
        for(int num : arr){
            sum += num;
        }
        return sum;
    }
};