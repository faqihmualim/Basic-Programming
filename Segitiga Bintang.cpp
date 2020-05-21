#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int N;
	cin >> N;
	for (int i=N;i>=1;i--){ // Loop untuk membuat baris
		for (int j=1;j<i;j++){ // Loop untuk membuat spasi ke kanan
			cout <<"x";}
		for (int k=N-i;k>=0;k--){ // Loop untuk membuat bintang
			cout << "* ";
			}
			cout << "\n";
		}
		
return 0;
}

