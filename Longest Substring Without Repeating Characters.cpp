class Solution {
public:

    int contains(string& s, int& start, int& end){
        for(int i=end-1; i>=start; i--){
            if(s[i] == s[end]) return i;
        }
        return -1;
    }

    int lengthOfLongestSubstring(string s) {
        int start = 0;
        int end = 0;
        int highest = 0;
        while(end < s.size()){
            end++;
            int check = contains(s, start, end);
            if(end-start > highest) highest = end-start;
            if(check != -1){
                start = check+1;
            }
        }
        return highest;
    }
};
