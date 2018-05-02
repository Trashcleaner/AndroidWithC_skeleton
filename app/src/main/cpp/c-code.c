//
// Created by obrusvit on 28.4.18.
//

#include <jni.h>
#include <stdio.h>

JNIEXPORT void JNICALL
Java_com_obrusvit_ccodeplayground_MainActivity_callC(JNIEnv *env, jobject obj)  {
    printf("Hello World!\n");
    return;
}

JNIEXPORT jint JNICALL
Java_com_obrusvit_ccodeplayground_MainActivity_getIntFromCJNI(JNIEnv *env, jobject obj)  {
    int res = 3;
    return res;
}