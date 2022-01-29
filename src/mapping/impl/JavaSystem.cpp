//
// Created by somepineaple on 1/29/22.
//

#include "JavaSystem.h"

JavaSystem::JavaSystem(Phantom *udp) : AbstractClass(udp, "System") {
    out = new JavaPrintStream(udp, getObject(getFieldID("out")));
}