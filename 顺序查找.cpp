#include<stdio.h>
//a待查找数组，n为数组长度，k为要查找的值 
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
