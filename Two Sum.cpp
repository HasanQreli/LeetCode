class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> sortedTarget;
        for(int i=0 ; i<nums.size() ; i++){
            sortedTarget.push_back(make_pair(nums[i],i));
        }
        std::sort(sortedTarget.begin(),sortedTarget.end());
        int i=0 , j=sortedTarget.size()-1;
        while(i<j){
            
            
            if(sortedTarget[i].first+sortedTarget[j].first == target)
                return {sortedTarget[i].second,sortedTarget[j].second};
            else if(sortedTarget[i].first+sortedTarget[j].first < target)
                i++;
            else j--;
        }
        return {};
    }
};
