class Solution {
public:
    int compress(vector<char>& chars) {
    string str ="";
    for(int i=0; i<chars.size(); i++){
       int count=1;
       while(i+1<chars.size() && chars[i] == chars[i + 1]){
        i++;
        count++;
       }
       str +=chars[i];
       if(count>1){
        str +=to_string(count);
       }
      
    }
    chars.clear();

    for(int i=0; i<str.size(); i++){
        chars.push_back(str[i]);
    }
    return chars.size();
    }
};