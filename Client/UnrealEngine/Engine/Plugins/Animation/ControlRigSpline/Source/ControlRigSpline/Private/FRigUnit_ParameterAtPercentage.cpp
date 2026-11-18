// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRigSpline
// Functions: 6

// StaticStruct @ 14dec0340

UScriptStruct * __cdecl FRigUnit_ParameterAtPercentage::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ParameterAtPercentage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRigSpline();
    Z_Registration_Info_UScriptStruct_FRigUnit_ParameterAtPercentage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage,(UObject *)pUVar1,
                         L"RigUnit_ParameterAtPercentage");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ParameterAtPercentage.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ParameterAtPercentage.OuterSingleton;
}

// GetExecuteContextStruct @ 14dec03c0

UScriptStruct * __thiscall
FRigUnit_ParameterAtPercentage::GetExecuteContextStruct(FRigUnit_ParameterAtPercentage *this)

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

// Execute @ 14dec03d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ParameterAtPercentage::Execute(FRigUnit_ParameterAtPercentage *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Spline,this->Percentage,&this->U);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14dec40c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ParameterAtPercentage::Execute
          (FRigUnit_ParameterAtPercentage *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Spline,this->Percentage,&this->U);
  return;
}

// RigVMExecute @ 14dec7070

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ParameterAtPercentage::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  FRigVMMemoryHandle *pFVar3;
  code *pcVar4;
  bool bVar5;
  FControlRigSpline *pFVar6;
  float *pfVar7;
  FControlRigExecuteContext *pFVar8;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
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
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FControlRigSpline *)pFVar3->Ptr;
  }
  else {
    pFVar6 = (FControlRigSpline *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  if (iVar2 < 2) {
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
  pFVar3 = param_2->DataPtr;
  if (pFVar3[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar7 = (float *)pFVar3[1].Ptr;
  }
  else {
    pfVar7 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
  fVar1 = *pfVar7;
  if (iVar2 < 3) {
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
  pfVar7 = (float *)param_2->DataPtr[2].Ptr;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar8,pFVar6,fVar1,pfVar7);
  return;
}

// StaticExecute @ 14ded0220

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRigUnit_ParameterAtPercentage::StaticExecute
          (FControlRigExecuteContext *param_1,FControlRigSpline *param_2,float param_3,
          float *param_4)

{
  TSharedPtr<FControlRigSplineImpl,1> *this;
  FScriptContainerElement *pFVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  FControlRigSplineImpl *pFVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  
  pFVar8 = (param_2->SplineData).Object;
  this = &param_2->SplineData;
  if (pFVar8 != (FControlRigSplineImpl *)0x0) {
    if (pFVar8->Spline == (ControlRigBaseSpline *)0x0) {
      if (1 < (byte)LogControlRig._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        return;
      }
    }
    else {
      iVar3 = (pFVar8->SamplesArray).ArrayNum;
      if ((pFVar8 == (FControlRigSplineImpl *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar8 = this->Object;
      uVar12 = 0;
      iVar4 = (pFVar8->AccumulatedLenth).ArrayNum;
      uVar11 = iVar4 - 1;
      uVar9 = 0;
      uVar10 = uVar9;
      if ((int)uVar11 < iVar4) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar6 = __real_3f800000;
      if (__real_3f800000 <= param_3) {
        param_3 = __real_3f800000;
      }
      if (param_3 <= 0.0) {
        param_3 = 0.0;
      }
      fVar14 = param_3 * *(float *)((pFVar8->AccumulatedLenth).AllocatorInstance.Data +
                                   (longlong)(pFVar8->AccumulatedLenth).ArrayNum * 4 + -4);
      if ((this->Object == (FControlRigSplineImpl *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar10 = (this->Object->AccumulatedLenth).ArrayNum;
      if (0 < (int)uVar10) {
        do {
          uVar11 = uVar10 >> 1;
          pFVar1 = (this->Object->AccumulatedLenth).AllocatorInstance.Data +
                   (longlong)(int)(uVar11 + uVar12) * 4;
          uVar9 = uVar12;
          if (*(float *)pFVar1 <= fVar14 && fVar14 != *(float *)pFVar1) {
            uVar9 = uVar11 + uVar12 + (uVar10 & 1);
          }
          uVar10 = uVar11;
          uVar12 = uVar9;
        } while (uVar11 != 0);
      }
      if ((int)uVar9 < iVar3) {
        if ((int)uVar9 < 1) {
          *param_4 = 0.0;
        }
        else {
          uVar12 = uVar9 - 1;
          fVar13 = fVar6 / (float)(iVar3 + -1);
          pFVar8 = TSharedPtr<FControlRigSplineImpl,1>::operator->(this);
          uVar10 = 0;
          if ((int)uVar12 < (pFVar8->AccumulatedLenth).ArrayNum) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar2 = *(float *)((pFVar8->AccumulatedLenth).AllocatorInstance.Data +
                            (longlong)(int)uVar12 * 4);
          pFVar8 = TSharedPtr<FControlRigSplineImpl,1>::operator->(this);
          uVar10 = 0;
          if ((int)uVar9 < (pFVar8->AccumulatedLenth).ArrayNum) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar14 = (fVar14 - fVar2) /
                   (*(float *)((pFVar8->AccumulatedLenth).AllocatorInstance.Data +
                              (longlong)(int)uVar9 * 4) - fVar2);
          *param_4 = (fVar6 - fVar14) * (float)(int)uVar12 * fVar13 +
                     fVar14 * (float)(int)uVar9 * fVar13;
        }
      }
      else {
        *param_4 = 1.0;
      }
    }
  }
  return;
}

