/*
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 * File: _coder_my_multiply_api.h
 *
 * MATLAB Coder version            : 3.3
 * C/C++ source code generated on  : 27-Apr-2018 12:24:39
 */

#ifndef _CODER_MY_MULTIPLY_API_H
#define _CODER_MY_MULTIPLY_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_my_multiply_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern real_T my_multiply(real_T a, real_T b);
extern void my_multiply_api(const mxArray * const prhs[2], const mxArray *plhs[1]);
extern void my_multiply_atexit(void);
extern void my_multiply_initialize(void);
extern void my_multiply_terminate(void);
extern void my_multiply_xil_terminate(void);

#endif

/*
 * File trailer for _coder_my_multiply_api.h
 *
 * [EOF]
 */
