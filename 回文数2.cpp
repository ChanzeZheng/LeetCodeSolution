/**
* �Ż���һ��ļ��������㷨
*/

#include<stdio.h>

bool isPalindrome(int x) {

	int temp = x;			//Ϊ����ֱ�Ӷ�x�����޸Ĳ������ı�����ԭֵ������temp������Ϊx�ĸ���
	int suf_num = 0;		//x��ǰ�ĺ��ģ����м���Ϊ���ޣ�


	//�ж�x�Ƿ�Ϊ����
	if(temp < 0) {
		return false;
	}

	//�ж�x�Ƿ����0
	if(temp < 10) {
		return true;
	}



	//�ж�x�Ƿ�Ϊ����10��100��1000������
	if(temp % 10 == 0) {
		return false;
	}

	//�ų������������ʼ���ݻ�������������ʼ�ж�
	
	/**
	*	�ٷ��ⷨ����ȡǰ���Ĳ����򻯳�Ϊ�˱Ƚ�ǰ�����ͺ������Ĵ�С��̫���ˡ������� 
	*/
	while(temp > suf_num) {
		suf_num = (suf_num * 10) + (temp % 10);
		temp /= 10;
	}

	//����ǰ��������Ƿ���ȣ����������жϹ���
	return temp==suf_num||temp==suf_num/10;
}

int main() {
	int x = 12321;
	bool isPalind = isPalindrome(x);
	if(isPalind) {
		printf("%d�ǻ�����",x);
		return 1;
	}
	printf("%d���ǻ�����",x);
	return 0;
}
