// #include <unordered_map>
// #include <string>
// using namespace std;

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         unordered_map<char, int> charIndex;
//         int maxLength = 0;
//         int start = 0;
//         for (int end = 0; end < s.size(); end++) {
//             if (charIndex.find(s[end]) != charIndex.end()) {
//                 start = max(start, charIndex[s[end]] + 1);
//             }
//             charIndex[s[end]] = end;
//             maxLength = max(maxLength, end - start + 1);
//         }
//         return maxLength;
//     }
// };


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    map<int,string>m;
    for(int j=0;j<s.size();j++)
    {
        string a;
        for(int i=j;i<s.size();i++)
        {
            if(a.find(s[i]) == string::npos)
            {
                a+=s[i];
            }
            else
            {
                m[a.size()]=a;
                a=s[i];
            }
        }
        m[a.size()]=a;
        cout<<a<<" ";
    }
    int b=0;
    for(auto u:m)
    {
        if(u.first>b)
            b=u.first;
    }
    cout<<"Longest substing length: "<<b<<endl;
    return 0;
}