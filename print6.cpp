#include "print6.h"
#include <iostream>

void print6(const void *p, const void *q, const void *r,
            const void *s, const void *t, const void *u)
{
    std::cout << p << ' ' << q << ' ' << r << ' '
              << s << ' ' << t << ' ' << u << '\n';

}
