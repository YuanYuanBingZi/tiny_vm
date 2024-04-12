/* Test cases for builtins.{c,h} */
#include "../builtins.h"
#include "../vm_state.h"
#include "../vm_ops.h"
#include <assert.h>

void test_Int() {
    obj_ref i = new_int(42);
    assert(i->fields);
    vm_frame_push_word((vm_Word) {.obj = i});
    obj_ref j = new_int(1);
    assert(j->fields);
    vm_frame_push_word((vm_Word) {.obj = j});


}

int main(){
    test_Int();
}

