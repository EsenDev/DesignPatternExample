/*  com_misoo_gx05_NativeJniAdder.c    */
#include "HalfAdder.h"
#include "com_misoo_gx05_NativeJniAdder.h"
extern void* HalfAdderNew();
JNIEXPORT jint JNICALL
    Java_com_misoo_gx05_NativeJniAdder_calculate(JNIEnv *env, jclass c, jint digit_1, jint digit_2){
    HalfAdder* hadder = (HalfAdder*)HalfAdderNew();
    hadder->set_digits(hadder, digit_1, digit_2);
    hadder->run(hadder);
    int k = hadder->get_carry(hadder)*10 + hadder->get_sum(hadder);
    return k;
}
