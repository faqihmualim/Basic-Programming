#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int N;
	cin >> N;
	// Loop Pertama untuk membuat setengah ketupat ke atas
	for (int i=N;i>=1;i--){
		for (int j=1;j<i;j++){
			cout <<" ";
			}
		for (int k=0;k<=N-i;k++){
			cout << k+1 ;
			}
		for (int z=N-i;z>=1;z--){
			cout << z ;
		}
			cout << "\n";
		}
  // Loop kedua untuk membuat setengah ketupat ke bawah
	for (int d= 1; d<=N-1;d++){
		for (int y=1;y<=d;y++){
			cout << " ";
		}
		for (int r=1; r<=N-d;r++){
			cout << r;
		}
		for (int h=N-d-1;h>=1;h--){
			cout << h;
		}
		cout << "\n";
	}
		
	return 0;
	}

