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
    int flag=1;                 //1表示都不等，0表示有相等
    for(i=0;s[i]!='\0';i++){
        for(j=i+1;s[j]!='\0';j++){
            flag=1;             //标识当前字符是否与前方子串字符都不等
            for(k=j-1;k>=i;k--){
                if(s[j]==s[k]){
                    flag=0;     //表示有相等
                    // count=0;    //标志有相等的子串
                    break;      //退出当前循环
                }
            }
            if(!flag){           //有相等的
                break;      //退出当前循环
            }
        }
        longest = longest>(j-i)?longest:(j-i);
    }
    return longest;
}




int main(){
	
	return 0;
}
 
