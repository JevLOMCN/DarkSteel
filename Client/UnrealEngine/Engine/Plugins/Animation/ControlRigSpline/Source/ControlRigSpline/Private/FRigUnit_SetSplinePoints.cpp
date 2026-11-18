// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRigSpline
// Functions: 6

// StaticStruct @ 14debd900

UScriptStruct * __cdecl FRigUnit_SetSplinePoints::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetSplinePoints.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRigSpline();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetSplinePoints.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints,(UObject *)pUVar1,
                         L"RigUnit_SetSplinePoints");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetSplinePoints.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetSplinePoints.OuterSingleton;
}

// GetExecuteContextStruct @ 14debd980

UScriptStruct * __thiscall
FRigUnit_SetSplinePoints::GetExecuteContextStruct(FRigUnit_SetSplinePoints *this)

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

// Execute @ 14debd9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SetSplinePoints::Execute(FRigUnit_SetSplinePoints *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStack_298 [32];
  TArrayView<UE::Math::TVector<double>_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_298;
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
  local_278.DataPtr = (TVector<double> *)(this->Points).AllocatorInstance.Data;
  iVar1 = (this->Points).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_278.ArrayNum = iVar1;
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,&this->Spline);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14dec4150

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetSplinePoints::Execute(FRigUnit_SetSplinePoints *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TVector<double>_const_,int> local_18;
  
  local_18.DataPtr = (TVector<double> *)(this->Points).AllocatorInstance.Data;
  iVar1 = (this->Points).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  StaticExecute(param_1,&local_18,&this->Spline);
  return;
}

// RigVMExecute @ 14dec7350

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetSplinePoints::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  FControlRigSpline *pFVar3;
  code *pcVar4;
  bool bVar5;
  uchar *puVar6;
  FControlRigExecuteContext *pFVar7;
  TArrayView<UE::Math::TVector<double>_const_,int> local_18;
  
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
    puVar6 = pFVar2->Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
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
  iVar1 = *(int *)(puVar6 + 8);
  pFVar3 = (FControlRigSpline *)param_2->DataPtr[1].Ptr;
  local_18.DataPtr = *(TVector<double> **)puVar6;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar7,&local_18,pFVar3);
  return;
}

// StaticExecute @ 14ded05b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRigUnit_SetSplinePoints::StaticExecute
          (FControlRigExecuteContext *param_1,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_2,FControlRigSpline *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  FControlRigSplineImpl *pFVar7;
  TArrayView<UE::Math::TVector<double>_const_,int> local_38 [3];
  
  pFVar7 = (param_3->SplineData).Object;
  if (pFVar7 == (FControlRigSplineImpl *)0x0) {
    if (1 < (byte)LogControlRig._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
      return;
    }
  }
  else if (pFVar7->Spline == (ControlRigBaseSpline *)0x0) {
    if (1 < (byte)LogControlRig._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
      return;
    }
  }
  else {
    if (pFVar7->bClosed == false) {
      pFVar7 = TSharedPtr<FControlRigSplineImpl,1>::operator->(&param_3->SplineData);
      local_38[0].ArrayNum = param_2->ArrayNum;
      if (local_38[0].ArrayNum != (pFVar7->ControlTransforms).ArrayNum) {
        if ((byte)LogControlRig._0_1_ < 2) {
          return;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        return;
      }
    }
    else {
      pFVar7 = TSharedPtr<FControlRigSplineImpl,1>::operator->(&param_3->SplineData);
      bVar5 = FControlRigSpline::GetDegree(param_3);
      local_38[0].ArrayNum = param_2->ArrayNum;
      if (local_38[0].ArrayNum != (pFVar7->ControlTransforms).ArrayNum - (uint)bVar5) {
        pFVar7 = TSharedPtr<FControlRigSplineImpl,1>::operator->(&param_3->SplineData);
        local_38[0].ArrayNum = param_2->ArrayNum;
        if (local_38[0].ArrayNum != (pFVar7->ControlTransforms).ArrayNum) {
          if ((byte)LogControlRig._0_1_ < 2) {
            return;
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
          return;
        }
      }
    }
    local_38[0].DataPtr = param_2->DataPtr;
    if ((local_38[0].ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar7 = TSharedPtr<FControlRigSplineImpl,1>::operator->(&param_3->SplineData);
    fVar1 = pFVar7->Stretch;
    pFVar7 = TSharedPtr<FControlRigSplineImpl,1>::operator->(&param_3->SplineData);
    fVar2 = pFVar7->Compression;
    pFVar7 = TSharedPtr<FControlRigSplineImpl,1>::operator->(&param_3->SplineData);
    iVar3 = pFVar7->SamplesPerSegment;
    pFVar7 = TSharedPtr<FControlRigSplineImpl,1>::operator->(&param_3->SplineData);
    bVar6 = pFVar7->bClosed;
    pFVar7 = TSharedPtr<FControlRigSplineImpl,1>::operator->(&param_3->SplineData);
    FControlRigSpline::SetControlPoints(param_3,local_38,pFVar7->SplineMode,bVar6,iVar3,fVar2,fVar1)
    ;
  }
  return;
}

