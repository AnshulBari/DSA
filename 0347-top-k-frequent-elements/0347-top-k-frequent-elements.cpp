class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        // Count frequency
        for(int x : nums){
            freq[x]++;
        }

        // Store {number, frequency}
        vector<pair<int,int>> v;

        for(auto it : freq){
            v.push_back({it.first, it.second});
        }

        // Sort by frequency in descending order
        sort(v.begin(), v.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });

        // Take first k elements
        vector<int> ans;

        for(int i = 0; i < k; i++){
            ans.push_back(v[i].first);
        }

        return ans;
    }
};