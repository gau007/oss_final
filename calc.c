#include<stdio.h>
int val1 , val2 , ans ;
void input()
{
	printf("\n input two no.s");
	scanf("%d %d",&val1,&val2);
	   printf("%d %d",val1,val2);
}
void add()
{
	ans = val1 + val2 ;
	printf("\n total = %d \n" , ans);
}
void subtract()
{

	ans = val1 - val2 ;
	printf("\n difference = %d \n " , ans);
}
void multiply()
{
	ans = val1* val2 ;
	printf("\n product = %d \n " , ans);
}
void devide()
{
	ans = val1 / val2 ;
	printf("\n quotient = %d \n ", ans);
}

int main()
{
	//int val1 , val2 , ans ;
	int opt;
	printf("\n 1. add \n 2. substract \n 3. multiply \n 4. devide");
	printf("\n enter your choice");
	scanf("%d",&opt);
//	printf("%d",opt);

//    2nd  edit by ranawaregv .................
//   commmit by collaborator...............commit 3 by gau007
	
	switch(opt)
	{
		case 1:
			input();
			add();
			break;
		case 2:
			input();
			subtract();
			break;
		case 3:
			input();
			multiply();
			break;
		case 4:
			input();
			devide();

	}
}
