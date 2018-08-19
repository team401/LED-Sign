#include <SomeMoreComplicatedClass.h>
#include "SomeClass.h"

int main() {
    SomeClass c{
        .x = 5,
        .y = 4
    };

    SomeMoreComplicatedClass cc;

    cc.doSomething();
}