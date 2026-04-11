class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1, r=1e9;
        int m=0;
        int ans=1e9;
        while (l<=r){
            int count=0;
            m = l + (r-l)/2;
            for (int i=0; i< piles.size();i++){
                count+= (piles[i]+ m -1) / m;
            }
            if (count > h){
                l=m+1;
            } else {

                ans = m;
                r=m-1;
            }
        }
        return ans;
    }
};
