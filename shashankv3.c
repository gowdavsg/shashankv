#include<stdio.h>
struct fract
{
	int n,d;
};
int gcd(struct fract z)
{
        int i,a;
         for(i=1;i<=z.n&&i<=z.d;i++)
        {
                if((z.n)%i==0&&(z.d)%i==0)
                {
                        a=i;
                }
        }
        return a;
}

int add(struct fract x,struct fract y,struct fract *z)
{
	int i,a;
	z->n=((x.n)*(y.d))+((y.n)*(x.d));
	z->d=(x.d)*(y.d);
	a=gcd(*z);
	z->n=(z->n)/a;
	z->d=(z->d)/a;
}		
int main()
{
	struct fract x,y,z;
	printf("\n Enter numerator and denominator of num1:");
	scanf("%d %d",&x.n,&x.d);
	printf("\n Enter numerator and denominator of num2:");
	scanf("%d %d",&y.n,&y.d);
	add(x,y,&z);
	printf("\n Sum=%d/%d",z.n,z.d);
}

