class Solution {
public:
    // Sliding window + fixed size array: O(n) Time, O(1) Space
    int lengthOfLongestSubstring(string s) {

        bool seen[128] = {false};

        int left = 0;
        int longest = 0;

        for (int right = 0; right < s.length(); right++) {

            while (seen[s[right]]) {
                seen[s[left]] = false;
                left++;
            }

            seen[s[right]] = true;

            longest = max(longest, right - left + 1);
        }

        return longest;
    }
};