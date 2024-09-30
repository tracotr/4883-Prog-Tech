class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> m;
        priority_queue<pair<int, char>> pq;
        string r = "";

        for (char c : s) {
            m[c]++;
        }

        for(auto it: m){
            pq.push({it.second, it.first});
        }

        while(!pq.empty()){
            r+= string(pq.top().first, pq.top().second);
            pq.pop();
        }

        return r;
    }
};