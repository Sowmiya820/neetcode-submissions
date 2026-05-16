class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea=0;
        int n=heights.size();
        int l=0,h=n-1;
        while(l<h){
            int currArea=(h-l )* min(heights[h],heights[l]);
            maxArea=max(maxArea,currArea);
            if(heights[l]<=heights[h]){
                l++;
            }
            else {
                h--;
            }
            
          
        }
        return maxArea;
    }
};
