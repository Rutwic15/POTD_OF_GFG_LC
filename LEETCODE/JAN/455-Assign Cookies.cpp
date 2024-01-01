class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(s.size() == 0) return 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i = g.size() - 1;
        int j = s.size() - 1;
        int maxChild = 0;
        while(i >= 0 && j >= 0){
            if(s[j] >= g[i]){
                maxChild++;
                j--;
                i--;
            }
            else{
                i--;
            }
        }
        return maxChild;
    }
};