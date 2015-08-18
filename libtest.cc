#include "libtest.hpp"
#include "./test.h"
void foo(){
  tracepoint(hello_world, my_first_tracepoint, 23, "hi there!");
}
