class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if (n <= 1) {
            return intervals; // Nothing to merge, return as it is.
        }

        stack<pair<int, int>> s;
        sort(intervals.begin(), intervals.end()); // Sort the intervals based on start time.

        s.push({intervals[0][0], intervals[0][1]});
        for (int i = 1; i < n; i++) {
            int start1 = s.top().first;
            int end1 = s.top().second;
            int start2 = intervals[i][0];
            int end2 = intervals[i][1];
            
            if (end1 < start2) {
                s.push({start2, end2});
            } else {
                s.pop();
                end1 = max(end1, end2);
                s.push({start1, end1});
            }
        }

        vector<vector<int>> merged;
        while (!s.empty()) {
            merged.push_back({s.top().first, s.top().second});
            s.pop();
        }

        reverse(merged.begin(), merged.end()); // Since we used a stack, the intervals are in reverse order.
        return merged;
    }
};
