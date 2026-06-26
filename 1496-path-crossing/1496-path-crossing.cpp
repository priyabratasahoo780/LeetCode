class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> visited;
        int x = 0;
        int y = 0;
        visited.insert({0,0});
        for(char dir : path){
           if(dir == 'N'){
                  y++;
           }
           else if(dir == 'S'){
                  y--;
           }
           else if(dir == 'E'){
                  x++;
           }
           else{
                   x--;
           }
           if(visited.count({x,y})){
            return true;
           }
           visited.insert({x,y});
        }
        return false;
    }
};