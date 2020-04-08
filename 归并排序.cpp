#include <iostream>
using namespace std;



void print_arr(int arr[], int n) {
	cout<<"{";
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<"}";
}

void MERGE(int arr[],int start,int mid,int end) {
	int size_arr1 = mid-start+1;
	int size_arr2 = end-mid;
	//需要两个临时数组
	int temp_arr1[size_arr1],temp_arr2[size_arr2];

	//初始化两个临时数组
	for(int i=0; i<size_arr1; i++) {
		temp_arr1[i] = arr[start+i];
	}
	for(int i=0; i<size_arr2; i++) {
		temp_arr2[i] = arr[mid+1+i];
	}

	//开始合并算法
	int i=0,j=0,index=0;
	while(i<size_arr1&&j<size_arr2) {
		if(temp_arr1[i]<=temp_arr2[j]) {
			arr[start+index++] = temp_arr1[i++];
		} else {
			arr[start+index++] = temp_arr2[j++];
		}
	}

	while(i<size_arr1) {				//说明数组1还没有处理完，数组2处理完
		arr[start+index++] = temp_arr1[i++];
	}
	while(j<size_arr2) {
		arr[start+index++] = temp_arr2[j++];
	}




}

void merge_sort(int arr[],int start, int end) {
	int test;
	if(start<end) {
		int mid = (end-start)/2+start;
		merge_sort(arr,start,mid);
		merge_sort(arr,mid+1,end);
		MERGE(arr,start,mid,end);
//		cout<<"当前start:"<<start<<",mid:"<<mid<<",end:"<<end<<",数组为: ";
//		print_arr(arr,6);
//		cout<<endl;
	}

}






int main() {
	int arr[]= {2,4,5,7,1,2,3,6};
	merge_sort(arr,0,7);
	print_arr(arr,8);

	return 0;
}

