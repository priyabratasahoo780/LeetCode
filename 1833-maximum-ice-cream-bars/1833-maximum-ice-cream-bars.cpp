class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
       int Totalsum = 0;
       for(int i=0; i<costs.size(); i++){
        Totalsum += costs[i];
       if(Totalsum>coins)return i;
            if(i==costs.size()-1) return i+1;
       } 
       return 0;
    }
};
