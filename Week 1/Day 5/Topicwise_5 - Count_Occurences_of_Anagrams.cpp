class Solution{
public:
	int search(string pat, string txt) {
	    
	  int n1 = pat.length();
    int n2 = txt.length();
    map<char, int> p;
    for (int i = 0; i < n1; i++)
    {
        p[pat[i]]++;
    }
    int l = 0, r = 0;
    map<char, int> q;
    int count = 0;
    while (r < n2+1)
    {
        if (p == q)
            count++;
        if (r < n1)
        {
            q[txt[r]]++;
            r++;
        }
        else
        {
            q[txt[l]]--;
            if (q[txt[l]] == 0)
                q.erase(txt[l]);
            q[txt[r]]++;
            r++;
            l++;
        }
    }
	    
	 return count;
	}

};
