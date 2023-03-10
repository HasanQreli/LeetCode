class Solution {
public:
    int min(int& a, int& b){
        if(a>b) return b;
        return a;
    }

    int maxArea(vector<int>& height) {
        int result = 0;
        int l = 0, r = height.size()-1;
        while(r>l){
            int area = (r-l) * min(height[r], height[l]);
            if(result < area) result = area;
            if(height[l] > height[r]) r--;
            else l++;
        }

        return result;
    }
};
