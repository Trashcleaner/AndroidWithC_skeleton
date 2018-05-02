/*
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 * File: my_multiply.c
 *
 * MATLAB Coder version            : 3.3
 * C/C++ source code generated on  : 27-Apr-2018 12:24:39
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "my_multiply.h"
#include <jni.h>

/* Function Definitions */

/*
 * UNTITLED Summary of this function goes here
 *    Detailed explanation goes here
 * Arguments    : double a
 *                double b
 * Return Type  : double
 */
double my_multiply(double a, double b)
{
  return a * b;
}

JNIEXPORT jdouble
JNICALL
Java_com_obrusvit_ccodeplayground_MainActivity_useMatlab(JNIEnv *env, jobject obj, jdouble a, jdouble b){

  return my_multiply(a,b);
}


/*
 * File trailer for my_multiply.c
 *
 * [EOF]
 */
