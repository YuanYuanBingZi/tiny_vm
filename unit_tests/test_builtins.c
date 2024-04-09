/* Test cases for builtins.{c,h} */
#include "../builtins.h"
#include "../builtins.c"
#include <assert.h>

void test_Int() {
    obj_ref i = int_literal((char *)42);
    assert(i->fields);
}

int main(){
    test_Int();
}

