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

	//����Ǹ���ֱ�ӷ���false
	if(x<0) {
		return false;
	}

	//�����10�ı�����ֱ�ӷ���false
	if(x%10==0) {
		return false;
	}

	//�ȼ�����������ж���λ
	while(temp>0) {
		weishu++;
		temp /= 10;
	}
//	printf("x��λ��Ϊ:%d\n",weishu);
	temp = x;

	//�����ȡ��һ��������Ҫ���Զ���
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
//		printf("times=%d,firstNum=%d,lastNum=%d,���Ϊ:%d\n",times,firstNum,lastNum,eq);

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
		printf("%d�ǻ�����",x);
		return 1;
	}
	printf("%d���ǻ�����",x);

}
