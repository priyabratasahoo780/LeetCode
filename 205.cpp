class Solution {
public:
    bool isIsomorphic(string s, string t) {
     unordered_map<char,char>m1,m2;
     for(int i=0; i<s.length(); i++){
        char ch1 = s[i];
        char ch2 = t[i];
        if(m1.count(ch1) && m1[ch1]!=ch2) return false;
        if(m2.count(ch2) && m2[ch2]!=ch1) return false;
        m1[ch1] = ch2;
        m2[ch2] = ch1;
     
     }
     return true;
    }
};

  // unordered_map<string>freq;
    //     for(int i=0; i<s.size(); i++){
    //     for(int j=0; j<s.size(); j++){
    //         if(s[i]>s[j]){
    //             return true;
    //         }
    //     }
    //     }
    //     return false;
// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//         if(s.size() != t.size()) return false;

//         int mapST[256] = {0};
//         int mapTS[256] = {0};

//         for(int i = 0; i < s.size(); i++) {
//             if(mapST[s[i]] != mapTS[t[i]]) {
//                 return false;
//             }

//             mapST[s[i]] = i + 1;
//             mapTS[t[i]] = i + 1;
//         }

//         return true;
//     }
// };