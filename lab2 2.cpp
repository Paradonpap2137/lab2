#include<stdio.h>
#include<math.h>

int main(){
	float a=1.0,b=1.0,c=5.0,d=1.0;

	printf("%5s =%7.1f\n","A",(3*a/5+1/b));
	printf("%5s =%7.1f\n","B",((3*a+5*b)/(2+c)));
	printf("%5s =%7.1f\n","C",2.0/7*(pow(4,3+c)-5*d));
	printf("%5s =%7.1f\n","D",sqrt((2+8*b)/a));
	printf("%5s =%7.1f\n","E",cbrt(pow(b,2)-4*d));
	
	return 0;
}
