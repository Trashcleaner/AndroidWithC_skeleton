/*
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 * File: matlab_func_returning_pointer.c
 *
 * MATLAB Coder version            : 3.3
 * C/C++ source code generated on  : 30-Apr-2018 15:02:07
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "matlab_func_returning_pointer.h"
#include <jni.h>
/* Function Definitions */


typedef struct {
    double c;
    double d;
} MyStruct;

/*
 * This function - when compiled to C - has no return value, only rewrites
 * pointer
 * Arguments    : double a
 *                double b
 *                double *c
 *                double *d
 * Return Type  : void
 */
void matlab_func_returning_pointer(double a, double b, double *c, double *d)
{
  *c = a * b;
  *d = a + b;
}

JNIEXPORT jdoubleArray JNICALL
Java_com_obrusvit_ccodeplayground_MainActivity_useMatlabWithPointers(
        JNIEnv *env,
        jobject obj,
        jdouble a,
        jdouble b)
{
  MyStruct myStruct;
  matlab_func_returning_pointer(a, b, &myStruct.c, &myStruct.d );

  //will the time for computation be enough?
  //is it sync or async??

  jdouble outCArray[] = {myStruct.c, myStruct.d};

  // Step 3: Convert the C's Native jdouble[] to JNI jdoublearray, and return
  jdoubleArray outJNIArray = (*env)->NewDoubleArray(env, 2);  // allocate
  if (NULL == outJNIArray) return NULL;
  (*env)->SetDoubleArrayRegion(env, outJNIArray, 0 , 2, outCArray);  // copy
  return outJNIArray;
}


/*
 * File trailer for matlab_func_returning_pointer.c
 *
 * [EOF]
 */
