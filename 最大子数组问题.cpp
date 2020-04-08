#include <iostream>
using namespace std;
void print_arr(int arr[], int n) {
	cout<<"{";
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<"}";
}

int find_max_sub_arr(int arr[],int low, int mid,int hight) {

	int max=0,max_low=0,max_hight=0,left_max=0,right_max=0,mid_max=0;
	if(low<hight) {
		left_max = find_max_sub_arr(arr,low,(low+mid)/2,mid);
		right_max = find_max_sub_arr(arr,mid+1,(mid+1+hight)/2,hight);
		max=left_max <= right_max ? right_max : left_max;

	}


	int temp=0;
	for(int i = mid; i<=hight; i++) {			//ÏÈÍùmidÓÒ±ßÑÓÉê
		temp += arr[i];
		if(temp>mid_max) {
			mid_max = temp;
		}
	}
	for(int i = mid-1; i>=low; i--) {				//ÔÙÍùmid×ó±ßÑÓÉê 
		temp+=arr[i];
		if(temp>mid_max) {
			mid_max=temp;
		}
	}

	cout<<"µ±Ç°µÄlow="<<low<<",mid="<<mid<<",hight="<<hight<<endl;
	cout<<"\tleft_max="<<left_max<<",right_max="<<right_max<<",mid_max="<<mid_max<<endl;

	if(max<mid_max) {
		return mid_max;
	}
	return max;

}



int main() {
	int arr[] = {13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
	int low = 0;
	int hight = 15;
	int mid = (low+hight)/2;
	int max = find_max_sub_arr(arr,low,mid,hight);
	cout<<"max="<<max<<endl;
	return 0;
}

