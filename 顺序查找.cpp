#include<stdio.h>
//a���������飬nΪ���鳤�ȣ�kΪҪ���ҵ�ֵ 
int Seqsearch(int a[],int n,int k){
	for(int i=0;i<n;i++){
		if(a[i]==k){
			return i;
		}
	}
	return -1;
	
}

int main(){
	int a[] = {1,2,3,4,5,6};
	int k = 8; 
	int result = Seqsearch(a,6,k);
	printf("%d",result);
	return 0;
}
