#include<stdio.h>

int main() {
	//x代表公鸡，y代表母鸡，z代表小鸡
	int x,y,z;
	for(x=0; x<100; x++) {
		for(y=0;y<100;y++){
			z = 100-x-y;
			if(x*5+y*3+z/3==100){
				printf("公鸡:%d,母鸡:%d,小鸡:%d\n",x,y,z); 
			}	
		}
	}



}



