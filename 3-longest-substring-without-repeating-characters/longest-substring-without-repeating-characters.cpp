class Solution {
public:
    // Sliding window + Set: O(n) Time, O(1) Space
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> seen;

        int left = 0;
        int longest = 0;

        for (int right = 0; right < s.length(); right++) {

            while (seen.count(s[right])) {
                seen.erase(s[left]);
                left++;
            }

            seen.insert(s[right]);

            longest = max(longest, right - left + 1);
        }

        return longest;
    }
};