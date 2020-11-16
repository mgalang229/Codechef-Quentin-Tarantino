#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

const int mxN=105;
int a[mxN], n;

int test1() {
	int flag=0;
	for(int i=1; i<=n; ++i) {
		flag=0;
		for(int j=1; j<=n; ++j)
			if(i==a[j]) {
				flag=1;
				break;
			}
		if(flag==0)
			break;
	}
	return flag;
}

int test2() {
	int flag=0;
	for(int i=2; i<=n; ++i)
		if(a[i]!=a[i-1]+1) {
			flag=1;
			break;
		}
	return flag;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=1; i<=n; ++i)
			cin >> a[i];
		if(test1()&&test2())
			cout << "yes";
		else
			cout << "no";
		cout << "\n";
	}
}
