#include<stdio.h>
int main(){
	// let me say 3^3 for example
	// 3^3 = 3*3*3
	 
	int a,b,temp,i,j,new_num=0;
	printf("Enter a and b numbers that you want to take power of numbers as a ^ b-->");
	scanf("%d %d",&a,&b);
	for(i=0;i<b-1;i++){
		for(j=0;j<a;j++){
			if(i==0){ // first we need to calculate the product of the first number and the second number
				new_num +=a; 
			}
			else{ 
				new_num +=temp;
			}
		}
		temp=new_num;
		if(i==0){
			--a;
		}
	}
	printf("%d",new_num);
}
