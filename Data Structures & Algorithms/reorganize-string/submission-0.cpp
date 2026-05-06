class Solution {
public:
    string reorganizeString(string s) {
        string result="";
        unordered_map<char, int>mp;

        for(char ch:s){
            mp[ch]++;
        }

        priority_queue<pair<int, char>>pq;

        for(auto it:mp){
            if(it.second > (s.size()+1)/2)
                return "";
            pq.push({it.second, it.first});
        }

        while(pq.size() >= 2){
            auto first = pq.top();
            pq.pop();
            auto second = pq.top();
            pq.pop();

            result += first.second;
            first.first--;
            result += second.second;
            second.first--;

            if(first.first > 0)
                pq.push({first.first, first.second});
            if(second.first > 0)
                pq.push({second.first, second.second});
        }

        while(!pq.empty()){
            result += pq.top().second;
            pq.pop();
        }
        return result;
    }
};