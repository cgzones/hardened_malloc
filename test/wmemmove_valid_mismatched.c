#include <stdlib.h>
#include <wchar.h>

#include "test_util.h"

OPTNONE int main(void) {
    wchar_t *firstbuffer = malloc(32 * sizeof(wchar_t));
    wchar_t *secondbuffer = malloc(16 * sizeof(wchar_t));
    if (!firstbuffer && !secondbuffer) {
        return 1;
    }
    wmemset(secondbuffer, L'\U0001F642', 16);
    wmemmove(firstbuffer, secondbuffer, 16);
    return 0;
}
