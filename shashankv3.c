#include<stdio.h>
struct fract
{
	int n,d;
};
int add(int n1,int d1,int n2,int d2,int n,int d)
{
	int i,a;
	n=(n1*d2)+(n2*d1);
	d=d1*d2;
	for(i=1;i<=n&&i<=d;i++)
	{
		if(n%i==0&&d%i==0)
		{
			a=i;
		}
	}
	n=n/a;
	d=d/a;
	printf("\n Sum=%d/%d",n,d);
}			
int main()
{
	struct fract x,y,z;
	printf("\n Enter numerator and denominator of num1:");
	scanf("%d %d",&x.n,&x.d);
	printf("\n Enter numerator and denominator of num2:");
	scanf("%d %d",&y.n,&y.d);
	add(x.n,x.d,y.n,y.d,z.n,z.d);
}
