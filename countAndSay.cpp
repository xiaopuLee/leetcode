class Solution {
public:
    string countAndSay(int n) {
        string res;
        ostringstream st;
        st << 1;
        res = st.str();
        while(--n >= 1)
        {
            res = fun(res);
        }
        return res;
    }
    
    string fun(string str)
    {
        int cnt = 0;
        char c = '0';
        int index = 0;
        int iter = 0;
        string res = "";
        while(iter < str.size())
        {
            c = str[index];
            cnt = 0;
            while((iter < str.size()) && (c == str[iter]))
            {
                ++iter;
                ++cnt;
            }
            if(cnt == 1)
            {
                res += "1";
                res += c;
            }
            else
            {
                res += char(cnt + '0');
                res += c;
            }
            index = iter;
        }
        return res;
    }
};
