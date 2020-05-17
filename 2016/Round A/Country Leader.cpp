#include <bits/stdc++.h>

using namespace std;

int count(string s)
{
    set<char> SET;
    for(int i = 0; i < (int)s.length(); i++)
    {
        if(isalpha(s[i]))
            SET.insert(s[i]);
    }
    return (int)SET.size();
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
#ifdef DBG
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	// clock_t begin = clock();
#endif
	
    int T, case_no = 1;
    
    cin>>T;
    while(T--)
    {
        int N;
        vector<pair<int, string>> v;
        
        cin>>N;
        cin.ignore(1024, '\n');
        for(int i = 0; i < N; i++)
        {
            string line;
            getline(cin, line);
            v.push_back(make_pair(count(line), line));
        }
        sort(v.begin(), v.end(), 
            [](pair<int, string> p1, pair<int, string> p2)
            {
                if(p1.first == p2.first)
                    return p1.second < p2.second;
                return p1.first > p2.first;
            });
        
        // for(auto p:v)
            // cout<<"("<<p.first<<","<<p.second<<") ";
        // cout<<endl;
        
        auto ans = v.begin();
        cout << "Case #" << case_no++ << ": " << ans->second<<endl;
    }
	
#ifdef DBG
	// clock_t end = clock();
	// double elapsed_secs = double(end-begin)/CLOCKS_PER_SEC;
	// printf("elapsed: %.3lf seconds\n", elapsed_secs);
	fclose(stdin);
	fclose(stdout);
#endif 

	return 0;
}
