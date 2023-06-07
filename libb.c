#include "liba.h"
#include "libb.h"

struct event make_default_event2() {
    return (struct event) {
        .name = "default"
    };
}
