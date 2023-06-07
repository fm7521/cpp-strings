#include "liba.h"
#include "libb.h"

#include "stdlib.h"
#include "stdio.h"


int main() {
    struct event eA = make_default_event();
    struct event eB = make_default_event2();
    printf("Name A is %p\n", eA.name);
    printf("Name B is %p\n", eB.name);
    return EXIT_SUCCESS;
}