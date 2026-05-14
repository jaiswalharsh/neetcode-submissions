class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram_set;
        for(string& str: strs) {
            string sortedstr = str;
            std::sort(sortedstr.begin(), sortedstr.end());
            anagram_set[sortedstr].push_back(str);
        }

        vector<vector<string>> result;
        for(auto& pair : anagram_set) {
            result.push_back(pair.second);
        }

        return result;
    }
};
