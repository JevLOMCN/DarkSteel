// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRigSpline
// Functions: 7

// StaticStruct @ 14dec0180

UScriptStruct * __cdecl FRigUnit_ClosestParameterFromControlRigSpline::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRigSpline();
    Z_Registration_Info_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline,
                         (UObject *)pUVar1,L"RigUnit_ClosestParameterFromControlRigSpline");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline.
         OuterSingleton;
}

// GetExecuteContextStruct @ 14dec0200

UScriptStruct * __thiscall
FRigUnit_ClosestParameterFromControlRigSpline::GetExecuteContextStruct
          (FRigUnit_ClosestParameterFromControlRigSpline *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// Execute @ 14dec0210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ClosestParameterFromControlRigSpline::Execute
          (FRigUnit_ClosestParameterFromControlRigSpline *this)

{
  undefined1 auStack_288 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  if ((FRigVMNameCache *)local_268._80_8_ == (FRigVMNameCache *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
      if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          _thread_safe_static_guard_0__ == -1) {
        atexit(`FRigVMExecuteContext::Initialize'::__l5::
               _dynamic_atexit_destructor_for__StaticNameCache__);
        _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
    }
    local_268._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Spline,&this->Position,&this->U);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// operator() @ 14dec2a20

float __thiscall
`FRigUnit_ClosestParameterFromControlRigSpline::StaticExecute'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2,float *param_3)

{
  double dVar1;
  longlong lVar2;
  double *pdVar3;
  code *pcVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [12];
  bool bVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  float fVar18;
  undefined1 extraout_XMM0 [16];
  undefined8 uVar21;
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  double local_e8;
  double dStack_e0;
  
  lVar2 = *(longlong *)this;
  if ((*(longlong *)(lVar2 + 8) == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    fVar18 = (float)(*pcVar4)();
    return fVar18;
  }
  lVar16 = *(longlong *)this;
  iVar17 = *(int *)(*(longlong *)(lVar2 + 8) + 0x50) + -1;
  if ((*(longlong *)(lVar16 + 8) == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    fVar18 = (float)(*pcVar4)();
    return fVar18;
  }
  lVar2 = *(longlong *)(lVar16 + 8);
  uVar15 = 0;
  if (param_1 < *(int *)(lVar2 + 0x50)) {
    uVar15 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    fVar18 = (float)(*pcVar4)();
    return fVar18;
  }
  lVar2 = *(longlong *)(lVar2 + 0x48);
  lVar16 = *(longlong *)this;
  auVar20 = *(undefined1 (*) [16])((longlong)param_1 * 0x60 + 0x20 + lVar2);
  dVar23 = *(double *)((longlong)param_1 * 0x60 + 0x30 + lVar2);
  auVar25 = auVar20;
  if ((*(longlong *)(lVar16 + 8) == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), auVar25 = extraout_XMM0, bVar14)) {
    pcVar4 = (code *)swi(3);
    fVar18 = (float)(*pcVar4)();
    return fVar18;
  }
  uVar21 = auVar25._8_8_;
  lVar2 = *(longlong *)(lVar16 + 8);
  uVar15 = 0;
  if (param_2 < *(int *)(lVar2 + 0x50)) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    uVar21 = extraout_XMM0_00._8_8_;
    if (bVar14) {
      pcVar4 = (code *)swi(3);
      fVar18 = (float)(*pcVar4)();
      return fVar18;
    }
  }
  pdVar3 = *(double **)((longlong)this + 8);
  lVar2 = *(longlong *)(lVar2 + 0x48);
  local_e8 = auVar20._0_8_;
  dStack_e0 = auVar20._8_8_;
  dVar26 = *pdVar3;
  dVar28 = pdVar3[1];
  dVar27 = local_e8 - dVar26;
  dVar1 = pdVar3[2];
  dVar7 = dStack_e0 - dVar28;
  dVar11 = dVar23 - dVar1;
  lVar16 = (longlong)param_2 * 0x60;
  auVar20 = *(undefined1 (*) [16])(lVar16 + 0x20 + lVar2);
  dVar8 = auVar20._0_8_ - local_e8;
  dVar10 = *(double *)(lVar16 + 0x30 + lVar2) - dVar23;
  auVar13._4_8_ = uVar21;
  auVar13._0_4_ = auVar20._4_4_;
  auVar25._0_8_ = auVar13._0_8_ << 0x20;
  auVar25._8_4_ = auVar20._8_4_;
  auVar25._12_4_ = auVar20._12_4_;
  dVar9 = auVar25._8_8_ - dStack_e0;
  dVar12 = dVar9 * dVar9 + dVar8 * dVar8 + dVar10 * dVar10;
  dVar5 = (dVar7 * dVar9 + dVar27 * dVar8 + dVar11 * dVar10) / dVar12;
  fVar18 = (float)(double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^
                                   __xmm_80000000000000008000000000000000._4_4_,
                                   SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000);
  if ((fVar18 <= 0.0) || (__real_3f800000 <= fVar18)) {
    dVar5 = dVar28 - auVar25._8_8_;
    dVar7 = dVar26 - auVar20._0_8_;
    dVar8 = dVar1 - *(double *)(lVar16 + 0x30 + lVar2);
    auVar19._0_8_ = (dVar1 - dVar23) * (dVar1 - dVar23);
    auVar19._8_8_ = 0;
    auVar24._0_8_ = (dVar26 - local_e8) * (dVar26 - local_e8);
    auVar24._8_8_ = 0;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (dVar28 - dStack_e0) * (dVar28 - dStack_e0) + auVar24._0_8_ + auVar19._0_8_;
    auVar20 = sqrtpd(auVar19,auVar20);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar5 * dVar5 + dVar7 * dVar7 + dVar8 * dVar8;
    auVar25 = sqrtpd(auVar24,auVar6);
    fVar18 = (float)auVar25._0_8_;
    if ((float)auVar20._0_8_ < fVar18) {
      param_2 = param_1;
      fVar18 = (float)auVar20._0_8_;
    }
    *param_3 = (float)param_2 * (__real_3f800000 / (float)iVar17);
  }
  else {
    fVar22 = __real_3f800000 / (float)iVar17;
    *param_3 = (float)param_1 * fVar22 * (__real_3f800000 - fVar18) +
               (float)param_2 * fVar22 * fVar18;
    dVar26 = dVar7 * dVar10 - dVar11 * dVar9;
    dVar23 = dVar8 * dVar11 - dVar27 * dVar10;
    dVar28 = dVar27 * dVar9 - dVar7 * dVar8;
    fVar18 = (float)(SQRT(dVar23 * dVar23 + dVar26 * dVar26 + dVar28 * dVar28) *
                    (__real_3ff0000000000000 / SQRT(dVar12)));
  }
  return fVar18;
}

// Execute @ 14dec37b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ClosestParameterFromControlRigSpline::Execute
          (FRigUnit_ClosestParameterFromControlRigSpline *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Spline,&this->Position,&this->U);
  return;
}

// RigVMExecute @ 14dec5bb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ClosestParameterFromControlRigSpline::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  FControlRigSpline *pFVar6;
  TVector<double> *pTVar7;
  FControlRigExecuteContext *pFVar8;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FControlRigSpline *)pFVar2->Ptr;
  }
  else {
    pFVar6 = (FControlRigSpline *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TVector<double> *)pFVar2[1].Ptr;
  }
  else {
    pTVar7 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar2[1].PropertyPath,pFVar2[1].Ptr,pFVar2[1].Property);
  }
  if (iVar1 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pfVar3 = (float *)param_2->DataPtr[2].Ptr;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar8,pFVar6,pTVar7,pfVar3);
  return;
}

// StaticExecute @ 14decaca0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRigUnit_ClosestParameterFromControlRigSpline::StaticExecute
          (FControlRigExecuteContext *param_1,FControlRigSpline *param_2,TVector<double> *param_3,
          float *param_4)

{
  int iVar1;
  FControlRigSplineImpl *pFVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float local_res10 [2];
  FControlRigSpline *local_28;
  TVector<double> *local_20;
  
  pFVar2 = (param_2->SplineData).Object;
  if (pFVar2 != (FControlRigSplineImpl *)0x0) {
    if (pFVar2->Spline == (ControlRigBaseSpline *)0x0) {
      if (1 < (byte)LogControlRig._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        return;
      }
    }
    else {
      iVar3 = 1;
      iVar1 = (pFVar2->SamplesArray).ArrayNum;
      fVar5 = __real_7f7fffff;
      local_28 = param_2;
      local_20 = param_3;
      if (1 < iVar1) {
        do {
          fVar4 = `FRigUnit_ClosestParameterFromControlRigSpline::StaticExecute'::__l2::<lambda_1>::
                  operator()(&local_28,iVar3 + -1,iVar3,local_res10);
          if (fVar4 < fVar5) {
            *param_4 = local_res10[0];
            fVar5 = fVar4;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar1);
      }
    }
  }
  return;
}

