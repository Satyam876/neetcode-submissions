class Solution {
public:
    int totalhours_func(vector<int>& piles, int hourly){
        int totalhrs=0;

        for(int i=0; i<piles.size(); i++){
            totalhrs += ((piles[i]+hourly-1)/hourly);
        }
        return totalhrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high = *max_element(piles.begin(), piles.end());
        int ans=INT_MAX;

        while(low <= high){
            int mid = (low+high)/2;
            int totalhrs = totalhours_func(piles, mid);

            if(totalhrs <= h){
                ans = mid;
                high = mid-1;
            }
            else
                low = mid+1;
        }
        return ans;
    }
};
