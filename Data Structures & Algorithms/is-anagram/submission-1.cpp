class Solution {
public:
    bool isAnagram(string s, string t) {
        //using a hash map at most will have K entries that are equal of num of distincts characters -> O(k) =< O(26) =< O(1)

        if(s.length() != t.length())return false;

        unordered_map<char, int> um_s;
        unordered_map<char, int> um_t;

        for(char c: s){
            um_s[c]++;
        }
         for(char c: t){
            um_t[c]++;
        }
        // C++ supports direct comparison between two unordered_maps!
        return um_s == um_t;


    }
};
