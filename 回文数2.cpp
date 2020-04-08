/**
* 优化第一版的检测回文数算法
*/

#include<stdio.h>

bool isPalindrome(int x) {

	int temp = x;			//为避免直接对x进行修改操作，改变了其原值，设置temp变量作为x的副本
	int suf_num = 0;		//x的前文后文（以中间数为界限）


	//判断x是否为负数
	if(temp < 0) {
		return false;
	}

	//判断x是否等于0
	if(temp < 10) {
		return true;
	}



	//判断x是否为类似10、100、1000的数字
	if(temp % 10 == 0) {
		return false;
	}

	//排除以上情况，则开始根据回文数的特征开始判断
	
	/**
	*	官方解法，将取前后文操作简化成为了比较前文数和后文数的大小（太秀了。。。） 
	*/
	while(temp > suf_num) {
		suf_num = (suf_num * 10) + (temp % 10);
		temp /= 10;
	}

	//返回前文与后文是否相等（回文数的判断规则）
	return temp==suf_num||temp==suf_num/10;
}

int main() {
	int x = 12321;
	bool isPalind = isPalindrome(x);
	if(isPalind) {
		printf("%d是回文数",x);
		return 1;
	}
	printf("%d不是回文数",x);
	return 0;
}
