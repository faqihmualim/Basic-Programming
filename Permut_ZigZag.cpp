// Faqih Mualim ITB Bandung --> Jakarta
// Template for Competitive Programming
// Link soal: https://tlx.toki.id/courses/basic/chapters/13/problems/C
#include <bits/stdc++.h>
#include <string>
#include <cstdio>
#include <cmath>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <ext/pb_ds/assoc_container.hpp>

#define endl "\n"
#define pb push_back
#define popb pop_back
#define ll long long
#define REPPLUS(i,a,n) for(ll i=a;i<=n;i++)
#define REPMIN(i,a,n) for(ll i=a;i>=n;i--)
#define Faqih using
#define itu namespace
#define Ganteng_Titik std;
Faqih itu Ganteng_Titik
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

ll N;
ll arr[100005];
ll mat[100][100];

ll catat[100005];
ll pernah[100005];

//bool isZigZag = false;

void tulis(ll dalam) {
	if (dalam >=N) {
		bool IsZigZag = true;
		for (ll i=1; i<N-1; i++) {
			if (!((catat[i] > catat [i-1] && catat[i] > catat[i+1]) || (catat[i] < catat [i-1] && catat[i] < catat[i+1]))) {
				IsZigZag = false;
			}
		}
		if (IsZigZag == true)  {
			for (ll i =0; i<N; i++ ){
				printf("%d", catat[i]);
			}
		printf(endl);
		}
	}
	else {
		for (ll i =1 ; i<=N ; i++ ) {
			if (pernah[i]==false) {
				pernah[i] = true;
				catat[dalam] = i;
				tulis(dalam+1);
				pernah[i] = false;	
			}
		}
	}
}

void test_case()
{
	scanf("%d",&N);
	REPPLUS(j,1,N) {
		pernah[j]= false;	
	}
	tulis(0);
}
	
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	test_case();
return 0;
}
