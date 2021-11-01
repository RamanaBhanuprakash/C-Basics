#include<stdio.h>
void main()
{
	//character declaration
	
	int a, b, s, d, p, q, r, n; 
	
	// initialization
	
	a = 10;
	b = 3;
	s = a+b;
	d = a-b;
	p = a*b;
	q = a/b;
	r = a%b; 
	n = s+d+p+q+r;
	printf("sum of %d and %d is %d\n",a,b,s);
	printf("difference of %d and %dn is:%d\n",a,b,d);
	printf("difference of %d and %dn is:%d\n",a,b,d);
	printf("quotient of %d and %dn is:%d\n",a,b,q);
	printf("reminder of %d and %dn is:%d\n",a,b,r);
	printf("sum of all arethmetic operations is:%d",n);
}
