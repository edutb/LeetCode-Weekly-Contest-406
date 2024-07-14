class Solution {
public:
    string getSmallestString(string s) {
         
         for(int i = 0; i < s.size()-1; i++){
            int x = s[i] - '0';
            int y = s[i+1] - '0';
            if((x&1) == (y&1) && x > y){
                swap(s[i], s[i+1]);
                return s;
            }
         }

         return s;
    }
};