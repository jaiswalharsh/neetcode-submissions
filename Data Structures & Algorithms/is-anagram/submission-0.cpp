class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length())
        {
            return false;
        }

        unordered_map<char, int> s_freq;
        unordered_map<char, int> t_freq;

        for (int i = 0; i<s.length(); i++ )
        {
            s_freq[s[i]]++;
            t_freq[t[i]]++;
        }

        return s_freq == t_freq;
    }
};
