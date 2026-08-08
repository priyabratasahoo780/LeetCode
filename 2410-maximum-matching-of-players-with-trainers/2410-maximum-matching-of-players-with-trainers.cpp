class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
            sort(trainers.begin(), trainers.end());
                  sort(players.begin(), players.end());
        int i = 0;
        int j = 0;
        if(trainers.size() == 0){
            return 0;
        }
        while(i<=players.size()-1 && j<=trainers.size()-1){
            if(players[i] <= trainers[j]){
                i++;
                j++;
            }
            else if(players[i] >= trainers[j]){
                j++;
            }
        }
        return i;
    }
};