#include <iostream>
using namespace std;
void print_arr(int arr[], int n) {
	cout<<"{";
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<"}";
}

int lengthOfLongestSubstring(char * s){
    if(s[0]=='\0'){
        return 0;
    }
    int i,j,k;
    int longest = 1;
    int flag=1;                 //1��ʾ�����ȣ�0��ʾ�����
    for(i=0;s[i]!='\0';i++){
        for(j=i+1;s[j]!='\0';j++){
            flag=1;             //��ʶ��ǰ�ַ��Ƿ���ǰ���Ӵ��ַ�������
            for(k=j-1;k>=i;k--){
                if(s[j]==s[k]){
                    flag=0;     //��ʾ�����
                    // count=0;    //��־����ȵ��Ӵ�
                    break;      //�˳���ǰѭ��
                }
            }
            if(!flag){           //����ȵ�
                break;      //�˳���ǰѭ��
            }
        }
        longest = longest>(j-i)?longest:(j-i);
    }
    return longest;
}




int main(){
	
	return 0;
}
 
