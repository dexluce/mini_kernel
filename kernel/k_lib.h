#ifndef _K_LIB_H_
#define _K_LIB_H_

#include "../common/types.h"

void *memcpy(void *dst, void *src, uint count);
void *memset(void *dst, int value, uint count);
int strncmp(const char *p, const char *q, uint n);

#endif
