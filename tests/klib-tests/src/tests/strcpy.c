#include <klibtest.h>

#define N 32
uint8_t data1[N], data2[N];

void strcpy_reset() {
    int i;
    for (i = 0; i < N; i++) {
        data1[i] = i + 1;
        data2[i] = 0;
    }
    data1[N - 1] = '\0';
}

void strcpy_check_eq(const char *d1, const char *d2) {
    assert(d1 != NULL && d2 != NULL);
    char *p1 = (char *)d1, *p2 = (char *)d2;
    while (*p1 != '\0' && *p2 != '\0') {
        assert(*p1 == *p2);
        p1++;
        p2++;
    }
    assert(*p1 == '\0' && *p2 == '\0');
}

void test_strcpy() {
    strcpy_reset();
    strcpy((char *) data2, (const char *) data1);
    strcpy_check_eq((const char *) data1, (const char *) data2);
}