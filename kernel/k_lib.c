#include "k_lib.h"
#include "../common/types.h"

void *memcpy(void *dst, void *src, uint count)
{
	uint i;
	uchar* d = dst;
	uchar* s = src;
	for (i=0; i<count;i++) 
		d[i]=s[i];
	return dst;
}

void *memset(void *dst, int value, uint count)
{
	uint i;
	uchar* d = dst;
	for (i=0; i<count;i++)
		d[i]=value;
	return dst;
}

int strncmp(const char *p, const char *q, uint n)
{
	while(n > 0 && *p && *p == *q)
		n--, p++, q++;
	if(n == 0)
		return 0;
	return (uchar)*p - (uchar)*q;
}
