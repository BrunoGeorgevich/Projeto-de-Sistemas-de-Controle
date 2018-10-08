/* Include files */

#include "Tanques_quick_start_sfun.h"
#include "Tanques_quick_start_sfun_debug_macros.h"
#include "c1_Tanques_quick_start.h"
#include "c2_Tanques_quick_start.h"
#include "c3_Tanques_quick_start.h"
#include "c4_Tanques_quick_start.h"
#include "c5_Tanques_quick_start.h"
#include "c6_Tanques_quick_start.h"
#include "c7_Tanques_quick_start.h"
#include "c8_Tanques_quick_start.h"
#include "c9_Tanques_quick_start.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _Tanques_quick_startMachineNumber_;

/* Function Declarations */

/* Function Definitions */
void Tanques_quick_start_initializer(void)
{
}

void Tanques_quick_start_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_Tanques_quick_start_method_dispatcher(SimStruct *simstructPtr,
  unsigned int chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==1) {
    c1_Tanques_quick_start_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==2) {
    c2_Tanques_quick_start_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==3) {
    c3_Tanques_quick_start_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==4) {
    c4_Tanques_quick_start_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==5) {
    c5_Tanques_quick_start_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==6) {
    c6_Tanques_quick_start_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==7) {
    c7_Tanques_quick_start_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==8) {
    c8_Tanques_quick_start_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==9) {
    c9_Tanques_quick_start_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_Tanques_quick_start_process_testpoint_info_call( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char machineName[128];
  if (nrhs < 3 || !mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;

  /* Possible call to get testpoint info. */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_testpoint_info"))
    return 0;
  mxGetString(prhs[1], machineName, sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (!strcmp(machineName, "Tanques_quick_start")) {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
    switch (chartFileNumber) {
     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }

    return 1;
  }

  return 0;

#else

  return 0;

#endif

}

unsigned int sf_Tanques_quick_start_process_check_sum_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2614410859U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1299554941U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1047015092U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3257289497U);
    } else if (!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    } else if (!strcmp(commandName,"makefile")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(134089180U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3262505612U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3899644956U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(321085013U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 1:
        {
          extern void sf_c1_Tanques_quick_start_get_check_sum(mxArray *plhs[]);
          sf_c1_Tanques_quick_start_get_check_sum(plhs);
          break;
        }

       case 2:
        {
          extern void sf_c2_Tanques_quick_start_get_check_sum(mxArray *plhs[]);
          sf_c2_Tanques_quick_start_get_check_sum(plhs);
          break;
        }

       case 3:
        {
          extern void sf_c3_Tanques_quick_start_get_check_sum(mxArray *plhs[]);
          sf_c3_Tanques_quick_start_get_check_sum(plhs);
          break;
        }

       case 4:
        {
          extern void sf_c4_Tanques_quick_start_get_check_sum(mxArray *plhs[]);
          sf_c4_Tanques_quick_start_get_check_sum(plhs);
          break;
        }

       case 5:
        {
          extern void sf_c5_Tanques_quick_start_get_check_sum(mxArray *plhs[]);
          sf_c5_Tanques_quick_start_get_check_sum(plhs);
          break;
        }

       case 6:
        {
          extern void sf_c6_Tanques_quick_start_get_check_sum(mxArray *plhs[]);
          sf_c6_Tanques_quick_start_get_check_sum(plhs);
          break;
        }

       case 7:
        {
          extern void sf_c7_Tanques_quick_start_get_check_sum(mxArray *plhs[]);
          sf_c7_Tanques_quick_start_get_check_sum(plhs);
          break;
        }

       case 8:
        {
          extern void sf_c8_Tanques_quick_start_get_check_sum(mxArray *plhs[]);
          sf_c8_Tanques_quick_start_get_check_sum(plhs);
          break;
        }

       case 9:
        {
          extern void sf_c9_Tanques_quick_start_get_check_sum(mxArray *plhs[]);
          sf_c9_Tanques_quick_start_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3084158392U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2524169757U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2812955680U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(245732821U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2283055889U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2233280328U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(545642380U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3061171136U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_Tanques_quick_start_autoinheritance_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char aiChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;
  mxGetString(prhs[2], aiChksum,sizeof(aiChksum)/sizeof(char));
  aiChksum[(sizeof(aiChksum)/sizeof(char)-1)] = '\0';

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(aiChksum, "9KTOZKVVymxp58Ffbj178F") == 0) {
          extern mxArray *sf_c1_Tanques_quick_start_get_autoinheritance_info
            (void);
          plhs[0] = sf_c1_Tanques_quick_start_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 2:
      {
        if (strcmp(aiChksum, "4gwCLA88nzVckIbYZ1PmDC") == 0) {
          extern mxArray *sf_c2_Tanques_quick_start_get_autoinheritance_info
            (void);
          plhs[0] = sf_c2_Tanques_quick_start_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 3:
      {
        if (strcmp(aiChksum, "jZnEV8iy3XGjl2NylGE5TH") == 0) {
          extern mxArray *sf_c3_Tanques_quick_start_get_autoinheritance_info
            (void);
          plhs[0] = sf_c3_Tanques_quick_start_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 4:
      {
        if (strcmp(aiChksum, "YBvgDkdEMkC8PDthj8KtQ") == 0) {
          extern mxArray *sf_c4_Tanques_quick_start_get_autoinheritance_info
            (void);
          plhs[0] = sf_c4_Tanques_quick_start_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 5:
      {
        if (strcmp(aiChksum, "6mh81cOJN4UwlbmJpAWlVB") == 0) {
          extern mxArray *sf_c5_Tanques_quick_start_get_autoinheritance_info
            (void);
          plhs[0] = sf_c5_Tanques_quick_start_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 6:
      {
        if (strcmp(aiChksum, "2xKbvHwrznUUmYTch4aokD") == 0) {
          extern mxArray *sf_c6_Tanques_quick_start_get_autoinheritance_info
            (void);
          plhs[0] = sf_c6_Tanques_quick_start_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 7:
      {
        if (strcmp(aiChksum, "kKO12ZSRPl8pK24ArWmA2E") == 0) {
          extern mxArray *sf_c7_Tanques_quick_start_get_autoinheritance_info
            (void);
          plhs[0] = sf_c7_Tanques_quick_start_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 8:
      {
        if (strcmp(aiChksum, "6mh81cOJN4UwlbmJpAWlVB") == 0) {
          extern mxArray *sf_c8_Tanques_quick_start_get_autoinheritance_info
            (void);
          plhs[0] = sf_c8_Tanques_quick_start_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 9:
      {
        if (strcmp(aiChksum, "tuaRkZu4xBIlwzhZMYBWgG") == 0) {
          extern mxArray *sf_c9_Tanques_quick_start_get_autoinheritance_info
            (void);
          plhs[0] = sf_c9_Tanques_quick_start_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_Tanques_quick_start_get_eml_resolved_functions_info( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  if (nrhs<2 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        extern const mxArray
          *sf_c1_Tanques_quick_start_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c1_Tanques_quick_start_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 2:
      {
        extern const mxArray
          *sf_c2_Tanques_quick_start_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c2_Tanques_quick_start_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 3:
      {
        extern const mxArray
          *sf_c3_Tanques_quick_start_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c3_Tanques_quick_start_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 4:
      {
        extern const mxArray
          *sf_c4_Tanques_quick_start_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c4_Tanques_quick_start_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 5:
      {
        extern const mxArray
          *sf_c5_Tanques_quick_start_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c5_Tanques_quick_start_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 6:
      {
        extern const mxArray
          *sf_c6_Tanques_quick_start_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c6_Tanques_quick_start_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 7:
      {
        extern const mxArray
          *sf_c7_Tanques_quick_start_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c7_Tanques_quick_start_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 8:
      {
        extern const mxArray
          *sf_c8_Tanques_quick_start_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c8_Tanques_quick_start_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 9:
      {
        extern const mxArray
          *sf_c9_Tanques_quick_start_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c9_Tanques_quick_start_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_Tanques_quick_start_third_party_uses_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the third_party_uses_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_third_party_uses_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(tpChksum, "bqZVTkulPPfWk3TOpEIlC") == 0) {
          extern mxArray *sf_c1_Tanques_quick_start_third_party_uses_info(void);
          plhs[0] = sf_c1_Tanques_quick_start_third_party_uses_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "okSstaxB5pn5jZXRdWyTfG") == 0) {
          extern mxArray *sf_c2_Tanques_quick_start_third_party_uses_info(void);
          plhs[0] = sf_c2_Tanques_quick_start_third_party_uses_info();
          break;
        }
      }

     case 3:
      {
        if (strcmp(tpChksum, "AbHZDJM3ixc4VUBLOMpDfG") == 0) {
          extern mxArray *sf_c3_Tanques_quick_start_third_party_uses_info(void);
          plhs[0] = sf_c3_Tanques_quick_start_third_party_uses_info();
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "7YBJ6pv3JZkRZDz1Pnp4YG") == 0) {
          extern mxArray *sf_c4_Tanques_quick_start_third_party_uses_info(void);
          plhs[0] = sf_c4_Tanques_quick_start_third_party_uses_info();
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "AdmVAF0OJwNtwMUmYNZD4B") == 0) {
          extern mxArray *sf_c5_Tanques_quick_start_third_party_uses_info(void);
          plhs[0] = sf_c5_Tanques_quick_start_third_party_uses_info();
          break;
        }
      }

     case 6:
      {
        if (strcmp(tpChksum, "j5MjwqdkBNE3MakejFdGlC") == 0) {
          extern mxArray *sf_c6_Tanques_quick_start_third_party_uses_info(void);
          plhs[0] = sf_c6_Tanques_quick_start_third_party_uses_info();
          break;
        }
      }

     case 7:
      {
        if (strcmp(tpChksum, "tUlabVoz5QusSz8PXZje7") == 0) {
          extern mxArray *sf_c7_Tanques_quick_start_third_party_uses_info(void);
          plhs[0] = sf_c7_Tanques_quick_start_third_party_uses_info();
          break;
        }
      }

     case 8:
      {
        if (strcmp(tpChksum, "AdmVAF0OJwNtwMUmYNZD4B") == 0) {
          extern mxArray *sf_c8_Tanques_quick_start_third_party_uses_info(void);
          plhs[0] = sf_c8_Tanques_quick_start_third_party_uses_info();
          break;
        }
      }

     case 9:
      {
        if (strcmp(tpChksum, "NhfocRYSXC7L3tbM10xMzG") == 0) {
          extern mxArray *sf_c9_Tanques_quick_start_third_party_uses_info(void);
          plhs[0] = sf_c9_Tanques_quick_start_third_party_uses_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_Tanques_quick_start_updateBuildInfo_args_info( int nlhs, mxArray
  * plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the updateBuildInfo_args_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_updateBuildInfo_args_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(tpChksum, "bqZVTkulPPfWk3TOpEIlC") == 0) {
          extern mxArray *sf_c1_Tanques_quick_start_updateBuildInfo_args_info
            (void);
          plhs[0] = sf_c1_Tanques_quick_start_updateBuildInfo_args_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "okSstaxB5pn5jZXRdWyTfG") == 0) {
          extern mxArray *sf_c2_Tanques_quick_start_updateBuildInfo_args_info
            (void);
          plhs[0] = sf_c2_Tanques_quick_start_updateBuildInfo_args_info();
          break;
        }
      }

     case 3:
      {
        if (strcmp(tpChksum, "AbHZDJM3ixc4VUBLOMpDfG") == 0) {
          extern mxArray *sf_c3_Tanques_quick_start_updateBuildInfo_args_info
            (void);
          plhs[0] = sf_c3_Tanques_quick_start_updateBuildInfo_args_info();
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "7YBJ6pv3JZkRZDz1Pnp4YG") == 0) {
          extern mxArray *sf_c4_Tanques_quick_start_updateBuildInfo_args_info
            (void);
          plhs[0] = sf_c4_Tanques_quick_start_updateBuildInfo_args_info();
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "AdmVAF0OJwNtwMUmYNZD4B") == 0) {
          extern mxArray *sf_c5_Tanques_quick_start_updateBuildInfo_args_info
            (void);
          plhs[0] = sf_c5_Tanques_quick_start_updateBuildInfo_args_info();
          break;
        }
      }

     case 6:
      {
        if (strcmp(tpChksum, "j5MjwqdkBNE3MakejFdGlC") == 0) {
          extern mxArray *sf_c6_Tanques_quick_start_updateBuildInfo_args_info
            (void);
          plhs[0] = sf_c6_Tanques_quick_start_updateBuildInfo_args_info();
          break;
        }
      }

     case 7:
      {
        if (strcmp(tpChksum, "tUlabVoz5QusSz8PXZje7") == 0) {
          extern mxArray *sf_c7_Tanques_quick_start_updateBuildInfo_args_info
            (void);
          plhs[0] = sf_c7_Tanques_quick_start_updateBuildInfo_args_info();
          break;
        }
      }

     case 8:
      {
        if (strcmp(tpChksum, "AdmVAF0OJwNtwMUmYNZD4B") == 0) {
          extern mxArray *sf_c8_Tanques_quick_start_updateBuildInfo_args_info
            (void);
          plhs[0] = sf_c8_Tanques_quick_start_updateBuildInfo_args_info();
          break;
        }
      }

     case 9:
      {
        if (strcmp(tpChksum, "NhfocRYSXC7L3tbM10xMzG") == 0) {
          extern mxArray *sf_c9_Tanques_quick_start_updateBuildInfo_args_info
            (void);
          plhs[0] = sf_c9_Tanques_quick_start_updateBuildInfo_args_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

void Tanques_quick_start_debug_initialize(struct SfDebugInstanceStruct*
  debugInstance)
{
  _Tanques_quick_startMachineNumber_ = sf_debug_initialize_machine(debugInstance,
    "Tanques_quick_start","sfun",0,9,0,0,0);
  sf_debug_set_machine_event_thresholds(debugInstance,
    _Tanques_quick_startMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(debugInstance,
    _Tanques_quick_startMachineNumber_,0);
}

void Tanques_quick_start_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
mxArray* load_Tanques_quick_start_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info(
      "Tanques_quick_start", "Tanques_quick_start");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_Tanques_quick_start_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
