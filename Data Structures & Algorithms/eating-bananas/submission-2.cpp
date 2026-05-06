class Solution {
public:
    int hours_taken(vector<int>& piles, int hourly){
        int totalhrs=0;

        for(int i=0; i<piles.size(); i++){
            totalhrs += (piles[i] + hourly-1)/hourly;
        }
        return totalhrs;
    }

    int minEatingSpeed(vector<int>& piles, int h){
        int low=1;
        int high = *max_element(piles.begin(), piles.end());
        int minTimeTaken = 0;

        while(low <= high){
            int mid = low +(high-low)/2;
            int totalhrs = hours_taken(piles, mid);

            if(totalhrs <= h){
                minTimeTaken = mid;
                high = mid-1;
            }
            else
                low = mid+1;
        }
        return minTimeTaken;
    }
};
