///week05-5.cpp
/// LeetCode ¾Ç²ß­pµe 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.length(); i++){
            s[i] = tolower( s[i] );
        }
        return s;
    }
};
