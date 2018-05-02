#include <jni.h>
#include <string.h>
#include <string>

extern "C" JNIEXPORT jstring
JNICALL
Java_com_obrusvit_ccodeplayground_MainActivity_otherStringFromJNI(
        JNIEnv *env,
        jobject /*this*/) {
    std::string hello = "Hello from my CPP function";
    return env->NewStringUTF(hello.c_str());
}


extern "C" JNIEXPORT jdouble
JNICALL
Java_com_obrusvit_ccodeplayground_MainActivity_getDoubleFromJNI(
        JNIEnv *env,
        jobject /*this*/){
    return 42.0;
}

extern "C" JNIEXPORT jdouble
JNICALL
Java_com_obrusvit_ccodeplayground_MainActivity_multiplyInJNI(
        JNIEnv *env,
        jobject /*this*/,
        jdouble a,
        jdouble b){
    return a*b;
}



