#include<stdio.h>
#include<limitS.h>
void main()
{
	printf("short int:\nsingned: %hd to %hd\n", SHRT_MIN, SHRT_MAX);
	printf("unsingned: %hu to %hu\n", 0, USHRT_MAX);
	printf("int:\nsingned: %d to %d\n", INT_MIN, INT_MAX);
	printf("unsigned: %d to %u\n", 0, UINT_MAX);
	printf("long int:\nsigned: %ld to %ld\n", LONG_MIN, LONG_MAX);
	printf("unsigned: %lu to %lu\n",0, ULONG_MAX);
	printf("long long int:\nsigned: %lld to %lld\n", LONG_LONG_MIN, LONG_LONG_MAX);
	printf("unsigned: %d to %llu\n",0, ULONG_LONG_MAX);
}
