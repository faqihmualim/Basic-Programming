// Faqih Mualim ITB Bandung --> Jakarta
// Template Untuk Competitive Programming
#include <bits/stdc++.h>
#include <string>
#include <cstdio>
#include <cmath>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <ext/pb_ds/assoc_container.hpp>

#define endl "\n"
#define pb push_back
#define popb pop_back
#define ll long long
#define forianplus(i,a,n) for(ll i=a;i<=n;i++)
#define forianmin(i,a,n) for(ll i=a;i>=n;i--)
#define Faqih using
#define itu namespace
#define Ganteng_Titik std; 
Faqih itu Ganteng_Titik
using namespace __gnu_pbds;
typedef tree<int,null_type,less<ll>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

ll N;
int arr[100005];

ll fibo(ll n){ // Recursive Function
	if (n <=1){
		return n;
	}
	else {
		return (fibo(n-1) + fibo(n-2));
	}
}

ll fibo2(ll n){ // Iterative Function
	int x0;
	int x1=0;
	int x2=1;
	if (n==0){
		x0 = x1;
		x1 = x2;
		return x0;
	}
	else if (n==1){
		x0 = x1;
		x1 = x2;
		return x1;
	}
	else
	for (int i=2 ; i <=n; i++){
		x0 = x1;
		x1 = x2;
		x2 = x0 + x1;
	}
	return x2;
}

void test_case()
{
	cin >> N;
	ll answer;
	answer = fibo(N); // Return with Recursive function
	cout << answer << endl;
	ll answer2;
	answer2 = fibo2(N); // Return with Iteratif Function
	cout << answer2 << endl;
}
	
int main() // Main Program for Codeforces
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	test_case();
return 0;
}
