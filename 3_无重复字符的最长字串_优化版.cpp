#include <iostream>
using namespace std;
void print_arr(int arr[], int n) {
	cout<<"{";
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<"}";
}


int getArrLen(char * s) {
	int i;
	for(i = 0; s[i]!='\0'; i++);
	return i;
}



int lengthOfLongestSubstring(char * s) {
	if(s[0]=='\0') {
		return 0;
	}
	int i,j,k;
	int longest = 1;
	int flag = 0;
	int len = getArrLen(s);			//����һ���ַ�������䳤��
	i = 0;
	j = 1;
	while(i+longest<len) {
//		j = i + 1;
		while(s[j]!='\0') {
			k = j-1;
			while(k>=i && s[j]!=s[k]) {
				k--;
			}
			cout<<"i="<<i<<",j="<<j;
			cout<<",k="<<k<<endl;
			
			if(k<i) {								//��i��j��ƥ�����û����ͬ�ַ����˳���ѭ��
				longest = (longest > j-i+1) ? longest : j-i+1;
				cout<<"longest="<<longest<<endl; 
			}
			else if(s[j]==s[k]) {								//����ƥ�䵽��ͬ�ַ����˳���ѭ��
				cout<<"s["<<j<<"]==s["<<k<<"],"<<s[j]<<"=="<<s[k];
				cout<<",longest="<<longest<<endl;
				longest = (longest > j-i) ? longest : j-i;//����longest
				i = k + 1;									//��Ҫ��i������ֵ���������´�ѭ��
				j++;
				break;										//�˳���ǰѭ��
			} 
			j++;
		}
	}
	return longest;
}




int main() {
	char* cs = "abcabcbb";
//	char* cs = "dvdf";
	int result = lengthOfLongestSubstring(cs);
	cout<<"result="<<result;
//cout<<"len = "<<getArrLen(cs);
	return 0;
}
