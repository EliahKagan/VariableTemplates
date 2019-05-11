#include "first.h"
#include "print6.h"
#include "vars.h"

void first()
{
    print6(&always_constexpr<int>, &always_constexpr<const int>,
           &always_const<int>, &always_const<const int>,
           &sometimes_const<int>, &sometimes_const<const int>);
}
