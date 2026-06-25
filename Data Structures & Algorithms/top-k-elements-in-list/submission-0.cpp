class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n = nums.size();
        vector<vector<int>> temp(n+1);
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            temp[i.second].push_back(i.first);
        }
        vector<int> ans;
        for(int i=n;i>=1;i--){
            for(int num:temp[i]){
                ans.push_back(num);
                if (ans.size() == k)
                    return ans;
            }
        }

        return ans;
    }
};
