// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4cc6a0

UScriptStruct * __cdecl FRigUnit_CollectionDifference::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_CollectionDifference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_CollectionDifference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionDifference,(UObject *)pUVar1,
                         L"RigUnit_CollectionDifference");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_CollectionDifference_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_CollectionDifference.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_CollectionDifference.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4cc720

UScriptStruct * __thiscall
FRigUnit_CollectionDifference::GetExecuteContextStruct(FRigUnit_CollectionDifference *this)

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

// Execute @ 14a4cc940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_CollectionDifference::Execute(FRigUnit_CollectionDifference *this)

{
  FScriptContainerElement *pFVar1;
  FRigElementKeyCollection *pFVar2;
  FRigElementKeyCollection *pFVar3;
  undefined1 auStack_298 [32];
  FRigElementKeyCollection local_278;
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
  pFVar2 = FRigElementKeyCollection::MakeDifference(&local_278,&this->A,&this->B);
  pFVar3 = &this->Collection;
  if (pFVar3 != pFVar2) {
    pFVar1 = (pFVar3->Keys).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar3->Keys).AllocatorInstance.Data = (pFVar2->Keys).AllocatorInstance.Data;
    (pFVar2->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Collection).Keys.ArrayNum = (pFVar2->Keys).ArrayNum;
    (this->Collection).Keys.ArrayMax = (pFVar2->Keys).ArrayMax;
    (pFVar2->Keys).ArrayNum = 0;
    (pFVar2->Keys).ArrayMax = 0;
  }
  if (local_278.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Keys.AllocatorInstance.Data);
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4ccaa0

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_CollectionDifference::GetUpgradeInfo
          (FRigUnit_CollectionDifference *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14a5254a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_CollectionDifference::Execute
          (FRigUnit_CollectionDifference *this,FControlRigExecuteContext *param_1)

{
  FScriptContainerElement *pFVar1;
  FRigElementKeyCollection *pFVar2;
  FRigElementKeyCollection *pFVar3;
  FRigElementKeyCollection local_18;
  
  pFVar2 = FRigElementKeyCollection::MakeDifference(&local_18,&this->A,&this->B);
  pFVar3 = &this->Collection;
  if (pFVar3 != pFVar2) {
    pFVar1 = (pFVar3->Keys).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar3->Keys).AllocatorInstance.Data = (pFVar2->Keys).AllocatorInstance.Data;
    (pFVar2->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Collection).Keys.ArrayNum = (pFVar2->Keys).ArrayNum;
    (this->Collection).Keys.ArrayMax = (pFVar2->Keys).ArrayMax;
    (pFVar2->Keys).ArrayNum = 0;
    (pFVar2->Keys).ArrayMax = 0;
  }
  if (local_18.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Keys.AllocatorInstance.Data);
  }
  return;
}

// RigVMExecute @ 14a537cc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionDifference::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  FRigElementKeyCollection *pFVar3;
  code *pcVar4;
  bool bVar5;
  FRigElementKeyCollection *pFVar6;
  FRigElementKeyCollection *pFVar7;
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
    pFVar6 = (FRigElementKeyCollection *)pFVar2->Ptr;
  }
  else {
    pFVar6 = (FRigElementKeyCollection *)
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
    pFVar7 = (FRigElementKeyCollection *)pFVar2[1].Ptr;
  }
  else {
    pFVar7 = (FRigElementKeyCollection *)
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
  pFVar3 = (FRigElementKeyCollection *)param_2->DataPtr[2].Ptr;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar8,pFVar6,pFVar7,pFVar3);
  return;
}

// StaticExecute @ 14a568410

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionDifference::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKeyCollection *param_2,
          FRigElementKeyCollection *param_3,FRigElementKeyCollection *param_4)

{
  FScriptContainerElement *pFVar1;
  FRigElementKeyCollection *pFVar2;
  FRigElementKeyCollection local_18;
  
  pFVar2 = FRigElementKeyCollection::MakeDifference(&local_18,param_2,param_3);
  if (param_4 != pFVar2) {
    pFVar1 = (param_4->Keys).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_4->Keys).AllocatorInstance.Data = (pFVar2->Keys).AllocatorInstance.Data;
    (pFVar2->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_4->Keys).ArrayNum = (pFVar2->Keys).ArrayNum;
    (param_4->Keys).ArrayMax = (pFVar2->Keys).ArrayMax;
    (pFVar2->Keys).ArrayNum = 0;
    (pFVar2->Keys).ArrayMax = 0;
  }
  if (local_18.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Keys.AllocatorInstance.Data);
  }
  return;
}

