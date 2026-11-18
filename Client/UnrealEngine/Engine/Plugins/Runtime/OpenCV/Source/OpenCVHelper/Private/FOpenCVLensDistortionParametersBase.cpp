// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenCVHelper
// Functions: 3

// StaticStruct @ 14d36bc80

UScriptStruct * __cdecl FOpenCVLensDistortionParametersBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOpenCVLensDistortionParametersBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OpenCVHelper();
    Z_Registration_Info_UScriptStruct_FOpenCVLensDistortionParametersBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase,
                         (UObject *)pUVar1,L"OpenCVLensDistortionParametersBase");
  }
  return Z_Registration_Info_UScriptStruct_FOpenCVLensDistortionParametersBase.OuterSingleton;
}

// ConvertToOpenCVDistortionCoefficients @ 14d36dc60

Mat * __thiscall
FOpenCVLensDistortionParametersBase::ConvertToOpenCVDistortionCoefficients
          (FOpenCVLensDistortionParametersBase *this,Mat *__return_storage_ptr__)

{
  MatSize *pMVar1;
  int *piVar2;
  int iVar3;
  double *pdVar4;
  double dVar5;
  
  if (this->bUseFisheyeModel == false) {
    cv::Mat::Mat(__return_storage_ptr__,1,8,6);
    pMVar1 = &__return_storage_ptr__->size;
    *(double *)__return_storage_ptr__->data = (double)this->K1;
    if (((__return_storage_ptr__->flags & 0x4000U) == 0) && (*pMVar1->p != 1)) {
      if (pMVar1->p[1] == 1) {
        pdVar4 = (double *)(__return_storage_ptr__->data + *(__return_storage_ptr__->step).p);
      }
      else {
        iVar3 = (int)(1 / (longlong)__return_storage_ptr__->cols);
        pdVar4 = (double *)
                 (__return_storage_ptr__->data +
                 (longlong)iVar3 * *(__return_storage_ptr__->step).p +
                 (longlong)(1 - iVar3 * __return_storage_ptr__->cols) * 8);
      }
    }
    else {
      pdVar4 = (double *)(__return_storage_ptr__->data + 8);
    }
    *pdVar4 = (double)this->K2;
    if (((__return_storage_ptr__->flags & 0x4000U) == 0) && (*pMVar1->p != 1)) {
      if (pMVar1->p[1] == 1) {
        pdVar4 = (double *)(__return_storage_ptr__->data + *(__return_storage_ptr__->step).p * 2);
      }
      else {
        iVar3 = (int)(2 / (longlong)__return_storage_ptr__->cols);
        pdVar4 = (double *)
                 (__return_storage_ptr__->data +
                 (longlong)iVar3 * *(__return_storage_ptr__->step).p +
                 (longlong)(2 - iVar3 * __return_storage_ptr__->cols) * 8);
      }
    }
    else {
      pdVar4 = (double *)(__return_storage_ptr__->data + 0x10);
    }
    *pdVar4 = (double)this->P1;
    if (((__return_storage_ptr__->flags & 0x4000U) == 0) && (*pMVar1->p != 1)) {
      if (pMVar1->p[1] == 1) {
        pdVar4 = (double *)(__return_storage_ptr__->data + *(__return_storage_ptr__->step).p * 3);
      }
      else {
        iVar3 = (int)(3 / (longlong)__return_storage_ptr__->cols);
        pdVar4 = (double *)
                 (__return_storage_ptr__->data +
                 (longlong)iVar3 * *(__return_storage_ptr__->step).p +
                 (longlong)(3 - iVar3 * __return_storage_ptr__->cols) * 8);
      }
    }
    else {
      pdVar4 = (double *)(__return_storage_ptr__->data + 0x18);
    }
    pMVar1 = &__return_storage_ptr__->size;
    *pdVar4 = (double)this->P2;
    if (((__return_storage_ptr__->flags & 0x4000U) == 0) && (*pMVar1->p != 1)) {
      if (pMVar1->p[1] == 1) {
        pdVar4 = (double *)(__return_storage_ptr__->data + *(__return_storage_ptr__->step).p * 4);
      }
      else {
        iVar3 = (int)(4 / (longlong)__return_storage_ptr__->cols);
        pdVar4 = (double *)
                 (__return_storage_ptr__->data +
                 (longlong)iVar3 * *(__return_storage_ptr__->step).p +
                 (longlong)(4 - iVar3 * __return_storage_ptr__->cols) * 8);
      }
    }
    else {
      pdVar4 = (double *)(__return_storage_ptr__->data + 0x20);
    }
    *pdVar4 = (double)this->K3;
    if (((__return_storage_ptr__->flags & 0x4000U) == 0) && (*pMVar1->p != 1)) {
      if (pMVar1->p[1] == 1) {
        pdVar4 = (double *)(__return_storage_ptr__->data + *(__return_storage_ptr__->step).p * 5);
      }
      else {
        iVar3 = (int)(5 / (longlong)__return_storage_ptr__->cols);
        pdVar4 = (double *)
                 (__return_storage_ptr__->data +
                 (longlong)iVar3 * *(__return_storage_ptr__->step).p +
                 (longlong)(5 - iVar3 * __return_storage_ptr__->cols) * 8);
      }
    }
    else {
      pdVar4 = (double *)(__return_storage_ptr__->data + 0x28);
    }
    *pdVar4 = (double)this->K4;
    if (((__return_storage_ptr__->flags & 0x4000U) == 0) && (*pMVar1->p != 1)) {
      if (pMVar1->p[1] == 1) {
        pdVar4 = (double *)(__return_storage_ptr__->data + *(__return_storage_ptr__->step).p * 6);
      }
      else {
        iVar3 = (int)(6 / (longlong)__return_storage_ptr__->cols);
        pdVar4 = (double *)
                 (__return_storage_ptr__->data +
                 (longlong)iVar3 * *(__return_storage_ptr__->step).p +
                 (longlong)(6 - iVar3 * __return_storage_ptr__->cols) * 8);
      }
    }
    else {
      pdVar4 = (double *)(__return_storage_ptr__->data + 0x30);
    }
    *pdVar4 = (double)this->K5;
    if (((__return_storage_ptr__->flags & 0x4000U) == 0) &&
       (piVar2 = (__return_storage_ptr__->size).p, *piVar2 != 1)) {
      if (piVar2[1] == 1) {
        pdVar4 = (double *)(__return_storage_ptr__->data + *(__return_storage_ptr__->step).p * 7);
      }
      else {
        iVar3 = (int)(7 / (longlong)__return_storage_ptr__->cols);
        pdVar4 = (double *)
                 (__return_storage_ptr__->data +
                 (longlong)iVar3 * *(__return_storage_ptr__->step).p +
                 (longlong)(7 - iVar3 * __return_storage_ptr__->cols) * 8);
      }
    }
    else {
      pdVar4 = (double *)(__return_storage_ptr__->data + 0x38);
    }
    *pdVar4 = (double)this->K6;
    return __return_storage_ptr__;
  }
  cv::Mat::Mat(__return_storage_ptr__,1,4,6);
  pMVar1 = &__return_storage_ptr__->size;
  *(double *)__return_storage_ptr__->data = (double)this->K1;
  if (((__return_storage_ptr__->flags & 0x4000U) == 0) && (*pMVar1->p != 1)) {
    if (pMVar1->p[1] == 1) {
      pdVar4 = (double *)(__return_storage_ptr__->data + *(__return_storage_ptr__->step).p);
    }
    else {
      iVar3 = (int)(1 / (longlong)__return_storage_ptr__->cols);
      pdVar4 = (double *)
               (__return_storage_ptr__->data +
               (longlong)iVar3 * *(__return_storage_ptr__->step).p +
               (longlong)(1 - iVar3 * __return_storage_ptr__->cols) * 8);
    }
  }
  else {
    pdVar4 = (double *)(__return_storage_ptr__->data + 8);
  }
  *pdVar4 = (double)this->K2;
  if (((__return_storage_ptr__->flags & 0x4000U) == 0) && (*pMVar1->p != 1)) {
    if (pMVar1->p[1] == 1) {
      pdVar4 = (double *)(__return_storage_ptr__->data + *(__return_storage_ptr__->step).p * 2);
    }
    else {
      iVar3 = (int)(2 / (longlong)__return_storage_ptr__->cols);
      pdVar4 = (double *)
               (__return_storage_ptr__->data +
               (longlong)iVar3 * *(__return_storage_ptr__->step).p +
               (longlong)(2 - iVar3 * __return_storage_ptr__->cols) * 8);
    }
  }
  else {
    pdVar4 = (double *)(__return_storage_ptr__->data + 0x10);
  }
  *pdVar4 = (double)this->K3;
  dVar5 = (double)this->K4;
  if (((__return_storage_ptr__->flags & 0x4000U) == 0) && (*pMVar1->p != 1)) {
    if (pMVar1->p[1] == 1) {
      *(double *)(__return_storage_ptr__->data + *(__return_storage_ptr__->step).p * 3) = dVar5;
      return __return_storage_ptr__;
    }
    iVar3 = (int)(3 / (longlong)__return_storage_ptr__->cols);
    *(double *)
     (__return_storage_ptr__->data +
     (longlong)iVar3 * *(__return_storage_ptr__->step).p +
     (longlong)(3 - iVar3 * __return_storage_ptr__->cols) * 8) = dVar5;
    return __return_storage_ptr__;
  }
  *(double *)(__return_storage_ptr__->data + 0x18) = dVar5;
  return __return_storage_ptr__;
}

// CreateOpenCVCameraMatrix @ 14d36e1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Mat * __thiscall
FOpenCVLensDistortionParametersBase::CreateOpenCVCameraMatrix
          (FOpenCVLensDistortionParametersBase *this,Mat *__return_storage_ptr__,
          TVector2<double> *param_1)

{
  MatExpr *pMVar1;
  undefined1 auStack_198 [32];
  MatExpr local_178;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  pMVar1 = cv::Mat::eye(&local_178,3,3,6);
  cv::Mat::Mat(__return_storage_ptr__);
  (**(code **)((longlong)*pMVar1->op + 0x10))(pMVar1->op,pMVar1,__return_storage_ptr__,0xffffffff);
  cv::Mat::~Mat(&local_178.c);
  cv::Mat::~Mat(&local_178.b);
  cv::Mat::~Mat(&local_178.a);
  *(double *)__return_storage_ptr__->data =
       (this->F).field0_0x0._s_0.X * (param_1->field0_0x0)._s_0.X;
  *(double *)(__return_storage_ptr__->data + *(__return_storage_ptr__->step).p + 8) =
       (this->F).field0_0x0._s_0.Y * (param_1->field0_0x0)._s_0.Y;
  *(double *)(__return_storage_ptr__->data + 0x10) =
       (this->C).field0_0x0._s_0.X * (param_1->field0_0x0)._s_0.X;
  *(double *)(__return_storage_ptr__->data + *(__return_storage_ptr__->step).p + 0x10) =
       (this->C).field0_0x0._s_0.Y * (param_1->field0_0x0)._s_0.Y;
  return __return_storage_ptr__;
}

