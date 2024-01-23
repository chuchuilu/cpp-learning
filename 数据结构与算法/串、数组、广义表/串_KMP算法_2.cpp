#include <iostream>
#include <string>

using namespace std;

void getNext(const string& p,int next[])
{

    int len = (int)p.size();
    next[0] = -1;
    int k = -1;
    int j = 0;
    while(j < len - 1)
    {
        if(k == -1 || p[j] == p[k])
        {
            ++j;
            ++k;
            next[j] = k;
        }
        else
        {
            k = next[k];
        }
    }
}

int kmp(const string& s, const string& pattern)
{
    int n = (int)s.size();
    int ans = -1;
    int i = 0;
    int j = 0;
    int patternLen = (int)pattern.size();

    int next[patternLen] ;
    getNext(pattern,next);

    while(i < n)
    {
        if(j == -1 || s[i] == pattern[j])
        {
            ++i;++j;
        }
        else
        {
            j = next[j];
        }

        if(j == patternLen)
        {
            ans = i - patternLen;
            break;
        }
    }

    return ans;
}

int main()
{
    string s = "abbbadabaabcabadba";
    string pattern = "abaabcaba";
    cout << kmp(s,pattern) << endl;
    return 0;
}