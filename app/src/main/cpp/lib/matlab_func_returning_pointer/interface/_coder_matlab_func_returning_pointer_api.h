/*
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 * File: _coder_matlab_func_returning_pointer_api.h
 *
 * MATLAB Coder version            : 3.3
 * C/C++ source code generated on  : 30-Apr-2018 15:02:07
 */

#ifndef _CODER_MATLAB_FUNC_RETURNING_POINTER_API_H
#define _CODER_MATLAB_FUNC_RETURNING_POINTER_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_matlab_func_returning_pointer_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void matlab_func_returning_pointer(real_T a, real_T b, real_T *c, real_T *
  d);
extern void matlab_func_returning_pointer_api(const mxArray * const prhs[2],
  const mxArray *plhs[2]);
extern void matlab_func_returning_pointer_atexit(void);
extern void matlab_func_returning_pointer_initialize(void);
extern void matlab_func_returning_pointer_terminate(void);
extern void matlab_func_returning_pointer_xil_terminate(void);

#endif

/*
 * File trailer for _coder_matlab_func_returning_pointer_api.h
 *
 * [EOF]
 */
