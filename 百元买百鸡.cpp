#include<stdio.h>

int main() {
	//x��������y����ĸ����z����С��
	int x,y,z;
	for(x=0; x<100; x++) {
		for(y=0;y<100;y++){
			z = 100-x-y;
			if(x*5+y*3+z/3==100){
				printf("����:%d,ĸ��:%d,С��:%d\n",x,y,z); 
			}	
		}
	}



}



