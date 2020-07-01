// ini template jangan diedit
// Link Soal : https://tlx.toki.id/courses/basic/chapters/12/problems/B
#include <bits/stdc++.h>
#include <string>
#include <cstdio>
#include <cmath>
#include <math.h>
#include <algorithm>

#define endl "\n"
#define forian(i,a,n) for(ll i=a;i<=n;i++)
#define pb push_back
#define popb pop_back
#define ll long long
#define Faqih using
#define itu namespace
#define Ganteng_Titik std; 
Faqih itu Ganteng_Titik
// ASCII 'a' = 97, ASCII 'A' =65

int faktorial (int n) {
	int x =n;
	if (x==1){
		return x;
	}
	else {
		if (x%2==0){
			return x/2 * faktorial(x-1);
		}
		else {
			return x * faktorial(x-1);
		}
	}
}

void test_case()
{
	int n;
	cin >> n;
	cout << faktorial(n) << endl;
}

int main() // Main Program for Codeforces
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	test_case();
return 0;
}
