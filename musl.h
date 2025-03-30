#pragma once

#include <stddef.h>

void *musl_memcpy(void *dst, const void *src, size_t len);
void *musl_memccpy(void *restrict dest, const void *restrict src, int c, size_t n);
void *musl_memmove(void *dst, const void *src, size_t len);
void *musl_memset(void *dst, int value, size_t len);
wchar_t *musl_wmemset(wchar_t *dst, wchar_t value, size_t len);
