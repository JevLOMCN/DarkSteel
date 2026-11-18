// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRigSpline
// Functions: 6

// StaticStruct @ 14debe970

UScriptStruct * __cdecl FRigUnit_GetLengthControlRigSpline::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetLengthControlRigSpline.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRigSpline();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetLengthControlRigSpline.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline,
                         (UObject *)pUVar1,L"RigUnit_GetLengthControlRigSpline");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetLengthControlRigSpline.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetLengthControlRigSpline.OuterSingleton;
}

// GetExecuteContextStruct @ 14debe9f0

UScriptStruct * __thiscall
FRigUnit_GetLengthControlRigSpline::GetExecuteContextStruct
          (FRigUnit_GetLengthControlRigSpline *this)

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

// Execute @ 14debea00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetLengthControlRigSpline::Execute(FRigUnit_GetLengthControlRigSpline *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Spline,&this->Length);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14dec40a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetLengthControlRigSpline::Execute
          (FRigUnit_GetLengthControlRigSpline *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Spline,&this->Length);
  return;
}

// RigVMExecute @ 14dec6f80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetLengthControlRigSpline::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  FControlRigSpline *pFVar6;
  FControlRigExecuteContext *pFVar7;
  
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
  pfVar3 = (float *)param_2->DataPtr[1].Ptr;
  pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar7,pFVar6,pfVar3);
  return;
}

// StaticExecute @ 14ded0160

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRigUnit_GetLengthControlRigSpline::StaticExecute
          (FControlRigExecuteContext *param_1,FControlRigSpline *param_2,float *param_3)

{
  int iVar1;
  FControlRigSplineImpl *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  pFVar2 = (param_2->SplineData).Object;
  if (pFVar2 == (FControlRigSplineImpl *)0x0) {
    *param_3 = 0.0;
    return;
  }
  if (pFVar2->Spline == (ControlRigBaseSpline *)0x0) {
    *param_3 = 0.0;
    if (1 < (byte)LogControlRig._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
      return;
    }
  }
  else {
    iVar1 = (pFVar2->AccumulatedLenth).ArrayNum;
    uVar6 = iVar1 - 1;
    uVar5 = 0;
    if ((int)uVar6 < iVar1) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *param_3 = *(float *)((pFVar2->AccumulatedLenth).AllocatorInstance.Data +
                         (longlong)(pFVar2->AccumulatedLenth).ArrayNum * 4 + -4);
  }
  return;
}

