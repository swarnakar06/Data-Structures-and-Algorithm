class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=s.length();
        int end=part.length();
        while(n>0 && s.find(part)<n)
        {
            int start=s.find(part);
            s.erase(start,end);

        }
        return s;
        

    }
};