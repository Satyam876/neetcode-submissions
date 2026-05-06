class Solution {
public:
    int totalTimeTaken(vector<int>& piles, int hourly){
        int hours = 0;
        for(int i=0; i<piles.size(); i++){
            hours += (piles[i]+hourly-1)/hourly;
        }
        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h){
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int minTime = INT_MAX;

        while(low <= high){
            int mid = (low+high)/2;
            int totalTime = totalTimeTaken(piles, mid);

            if(totalTime <= h){
                minTime = mid;
                high = mid-1;
            }
            else
                low = mid+1;
        }
        return minTime;
    }
};
