#include "k_lib.h"

void *memcpy(void *dst, void *src, uint count)
{
	int i;
	for (i=0; i<count;i++) 
		dst[i]=src[i];
	return dst;
}

void *memset(void *dst, int value, uint count)
{
	int i;
	for (i=0; i<count;i++)
		dest[i]=value;
	return dst;
}

int strncmp(const char *p, const char *q, uint n)
{
	
}
