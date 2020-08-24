#include <bits/stdc++.h>

using namespace std;

int nums[200001];

void solve()
{
    int N, ans = 0;

    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }
    
    for(int i = 0; i < N - 1;)
    {
        int j = i;
        int diff = nums[i+1] - nums[i];
        while(j < N - 1 && (nums[j+1] - nums[j] == diff))
            j++;
        ans = max(ans, j - i + 1);
        i = max(i+1, j);
    }
    cout << ans << endl;
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
	
    cin >> T;
	while(T--)
    {
		cout << "Case #" << case_no++ <<": ";
		solve();
	}
    
#ifdef DBG
	// clock_t end = clock();
	// double elapsed_secs = double(end-begin) / CLOCKS_PER_SEC;
    // cout<<fixed<<setprecision(3)<<"elapsed: "<<elapsed_secs<<" sec."<<endl;
	fclose(stdin);
	fclose(stdout);
#endif 

	return 0;
}
