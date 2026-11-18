// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4fb670

UScriptStruct * __cdecl FRigUnit_PropagateTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_PropagateTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_PropagateTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PropagateTransform,(UObject *)pUVar1,
                         L"RigUnit_PropagateTransform");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_PropagateTransform.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_PropagateTransform.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4fb770

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_PropagateTransform::GetExecuteContextStruct(FRigUnit_PropagateTransform *this)

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

// Execute @ 14a4fbab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_PropagateTransform::Execute(FRigUnit_PropagateTransform *this)

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
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4fbc10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_PropagateTransform::GetUpgradeInfo
          (FRigUnit_PropagateTransform *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14a52be00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_PropagateTransform::Execute
          (FRigUnit_PropagateTransform *this,FControlRigExecuteContext *param_1)

{
  return;
}

// RigVMExecute @ 14a54e580

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_PropagateTransform::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FRigVMMemoryHandle *pFVar4;
  FRigVMSlice *pFVar5;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar4 = param_2->DataPtr;
  if (pFVar4->PropertyPath != (FRigVMPropertyPath *)0x0) {
    FRigVMPropertyPath::GetData_Internal(pFVar4->PropertyPath,pFVar4->Ptr,pFVar4->Property);
  }
  if (iVar1 < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar4 = param_2->DataPtr;
  if (pFVar4[1].PropertyPath != (FRigVMPropertyPath *)0x0) {
    FRigVMPropertyPath::GetData_Internal(pFVar4[1].PropertyPath,pFVar4[1].Ptr,pFVar4[1].Property);
  }
  if (iVar1 < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar4 = param_2->DataPtr;
  if (pFVar4[2].PropertyPath != (FRigVMPropertyPath *)0x0) {
    FRigVMPropertyPath::GetData_Internal(pFVar4[2].PropertyPath,pFVar4[2].Ptr,pFVar4[2].Property);
  }
  pFVar4 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  FRigVMMemoryHandle::GetData_Internal(pFVar4,true,-1);
  pFVar4 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar5 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  FRigVMMemoryHandle::GetData_Internal(pFVar4,false,pFVar5->Offset + pFVar5->Index);
  FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  return;
}

// StaticExecute @ 14a58b470

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_PropagateTransform::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool param_3,bool param_4,
          bool param_5,FCachedRigElement *param_6)

{
  return;
}

