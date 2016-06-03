class Solution {
public:
    bool isVowel(char c)
    {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
           || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        if(s.empty())
            return s;
        int left, right;
        left = 0;
        right = s.size()-1;
        while((left < s.size()) && (right >= 0) && (left < right))
        {
            while(true)
            {
                if(isVowel(s[left]))
                {
                    break;
                }
                ++left;
            }
            while(true)
            {
                if(isVowel(s[right]))
                {
                    break;
                }
                --right;
            }
            if(left >= right)
            {
                break;
            }
            else
            {
                char tmp;
                tmp = s[left];
                s[left] = s[right];
                s[right] = tmp;
                ++left;
                --right;
            }
        }
        return s;
    }
};
