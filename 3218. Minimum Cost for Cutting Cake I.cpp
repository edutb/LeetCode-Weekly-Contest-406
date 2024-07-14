class Solution {
public:
    long long minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        
         long long qtd_x = 1;
         long long qtd_y = 1;
         
         vector< pair<int, int> > cuts;
         for(auto&v: verticalCut) cuts.push_back({v, 0});
         for(auto&v: horizontalCut) cuts.push_back({v, 1});

         sort(begin(cuts), end(cuts), [](auto&x, auto&y){
            return x.first > y.first;
         });
         
         long long ans = 0;

         for(auto& [v, d]: cuts){
            ans+= (d == 0 ? v*qtd_x : v*qtd_y);
            if(d == 0) qtd_y++;
            else qtd_x++;
         }

         return ans;
    }
};