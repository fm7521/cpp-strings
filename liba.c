#include "liba.h"

struct event make_default_event() {
    return (struct event) {
        .name = "default"
    };
}
