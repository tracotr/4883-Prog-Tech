class Solution {
public:
    static bool compare(pair<int, string>& a, pair<int, string>& b){
        if(a.first == b.first) return a.second < b.second;
        else return a.first > b.first;
    }

    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> m;
       
        for(string s: words){
            m[s]++;
        }

        vector<pair<int, string>> v;

        for(auto entry: m){
            v.push_back({entry.second, entry.first});
        }

        sort(v.begin(), v.end(), compare);

        vector<string> r;
        
        for(int i = 0; i < k; i++){
            r.push_back(v[i].second);
        }

        return r;
    }
};