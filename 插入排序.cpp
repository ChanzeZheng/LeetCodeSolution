#include <iostream>

using namespace std;

void insert_sort(int arr[],int n) {
	for(int i=1; i<n; i++) {
		int temp = arr[i];
		int j;
		for(j=i-1; j>=0&&temp<arr[j]; j--) {
//			if(temp<arr[j]) {
//				cout<<"temp<arr["<<j<<"](j:"<<j<<",temp:"<<temp<<",arr["<<j<<"]:"<<arr[j]<<"):";
//				cout<<j+1<<"位置变为"<<arr[j]<<endl;
				arr[j+1] = arr[j];
//			} else {
//				cout<<"else:";
//				cout<<j+1<<"位置变为"<<arr[j+1]<<endl;
//				arr[j+1]=temp;
//				break;
//			}
		}
//		cout<<"跳出循环:";
//		cout<<j+1<<"位置变为"<<temp<<endl;
		arr[j+1]=temp;

	}

}

void print_arr(int arr[], int n) {
	cout<<"{";
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<"}";
}

int main() {
	int arr[]= {31,41,59,26,41,58};
	insert_sort(arr,6);
	print_arr(arr,6);

	return 0;
}

