class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        for(int i=0;i<=n-1;i++){
            for(int j=i+1;j<n;j++){
                if(intervals[i][0]>intervals[j][0]){
                    int t1 = intervals[i][0];
                    int t2 = intervals[i][1];
                    intervals[i][0] = intervals[j][0];
                    intervals[i][1] = intervals[j][1];
                    intervals[j][0] = t1;
                    intervals[j][1] = t2;
                }
            }
        }

        vector<vector<int>> ans;

        int start = intervals[0][0];
        int end = intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=end){
                end = max(end,intervals[i][1]);
            }
            else{
                ans.push_back({start,end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        ans.push_back({start,end});
        return ans;
    }
};