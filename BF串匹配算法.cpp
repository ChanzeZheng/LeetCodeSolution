#include <iostream>
using namespace std;
//BF¥Æ∆•≈‰À„∑®

int BF(char S[],int n,char T[],int m) {

	for(int i=0; i<=n-m; i++) {
		for(int j=0,k=i; j<m; j++) {
			
			if(S[k]!=T[j]){
				break;
			}
			if(j==m-1&&S[k]==T[j]){
				return i;
			}
			k++;
		}
	}
	return -1;




}

int main() {
//	char S[] = {'a','b','a','b','d','a','c','b','a','b'};
//	char T[] = {'a','b','c'};
	char S[] = {'a','a','a','a','a','a','a','a','b'};
	char T[] = {'a','a','b'};


	int result = BF(S,sizeof(S),T,sizeof(T));
	cout<<"result="<<result;


}
