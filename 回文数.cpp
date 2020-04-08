#include<stdio.h>

bool isPalindrome(int x) {

	int weishu = 0;
	int temp = x;
	int i,j;
	int firstNum,lastNum;
	int times,times2;
	bool eq = true;

	if(x==0) {
		return true;
	}

	//如果是负数直接返回false
	if(x<0) {
		return false;
	}

	//如果是10的倍数则直接返回false
	if(x%10==0) {
		return false;
	}

	//先计算出该整数有多少位
	while(temp>0) {
		weishu++;
		temp /= 10;
	}
//	printf("x的位数为:%d\n",weishu);
	temp = x;

	//求出获取第一个数字需要除以多少
	times = 1;
	for(j=0; j<weishu-1; j++) {
		times *=10;
	}
	times2 = 1;

	for(i=0; i<=weishu/2; i++) {

		firstNum = temp / times;
//		lastNum = temp % times2;
//		printf("lastNum=%d,temp=%d,times=%d",lastNum,temp,times);
		lastNum = (temp/times2)%10 + lastNum*10;
		eq = eq && (firstNum == lastNum);
		times/=10;
		times2*=10;
//		printf("times=%d,firstNum=%d,lastNum=%d,结果为:%d\n",times,firstNum,lastNum,eq);

		if(!eq){
			return false;
		}





	}

	return eq;


}

int main() {
	int x = 121;
	bool isPalind = isPalindrome(x);
	if(isPalind) {
		printf("%d是回文数",x);
		return 1;
	}
	printf("%d不是回文数",x);

}
