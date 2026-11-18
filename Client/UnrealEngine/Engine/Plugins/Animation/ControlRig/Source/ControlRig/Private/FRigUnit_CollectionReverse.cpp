// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4ce720

UScriptStruct * __cdecl FRigUnit_CollectionReverse::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_CollectionReverse.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_CollectionReverse.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionReverse,(UObject *)pUVar1,
                         L"RigUnit_CollectionReverse");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_CollectionReverse_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_CollectionReverse.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_CollectionReverse.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4ce7a0

UScriptStruct * __thiscall
FRigUnit_CollectionReverse::GetExecuteContextStruct(FRigUnit_CollectionReverse *this)

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

// Execute @ 14a4ce9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_CollectionReverse::Execute(FRigUnit_CollectionReverse *this)

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
  pFVar2 = FRigElementKeyCollection::MakeReversed(&local_278,&this->Collection);
  pFVar3 = &this->Reversed;
  if (pFVar3 != pFVar2) {
    pFVar1 = (pFVar3->Keys).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar3->Keys).AllocatorInstance.Data = (pFVar2->Keys).AllocatorInstance.Data;
    (pFVar2->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Reversed).Keys.ArrayNum = (pFVar2->Keys).ArrayNum;
    (this->Reversed).Keys.ArrayMax = (pFVar2->Keys).ArrayMax;
    (pFVar2->Keys).ArrayNum = 0;
    (pFVar2->Keys).ArrayMax = 0;
  }
  if (local_278.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Keys.AllocatorInstance.Data);
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4ceec0

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_CollectionReverse::GetUpgradeInfo
          (FRigUnit_CollectionReverse *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14a525c10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_CollectionReverse::Execute
          (FRigUnit_CollectionReverse *this,FControlRigExecuteContext *param_1)

{
  FScriptContainerElement *pFVar1;
  FRigElementKeyCollection *pFVar2;
  FRigElementKeyCollection *pFVar3;
  FRigElementKeyCollection local_18;
  
  pFVar2 = FRigElementKeyCollection::MakeReversed(&local_18,&this->Collection);
  pFVar3 = &this->Reversed;
  if (pFVar3 != pFVar2) {
    pFVar1 = (pFVar3->Keys).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar3->Keys).AllocatorInstance.Data = (pFVar2->Keys).AllocatorInstance.Data;
    (pFVar2->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Reversed).Keys.ArrayNum = (pFVar2->Keys).ArrayNum;
    (this->Reversed).Keys.ArrayMax = (pFVar2->Keys).ArrayMax;
    (pFVar2->Keys).ArrayNum = 0;
    (pFVar2->Keys).ArrayMax = 0;
  }
  if (local_18.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Keys.AllocatorInstance.Data);
  }
  return;
}

// RigVMExecute @ 14a538f50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionReverse::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  FRigElementKeyCollection *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRigElementKeyCollection *pFVar7;
  FRigElementKeyCollection local_18;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigElementKeyCollection *)pFVar2->Ptr;
  }
  else {
    pFVar7 = (FRigElementKeyCollection *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (FRigElementKeyCollection *)param_2->DataPtr[1].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pFVar7 = FRigElementKeyCollection::MakeReversed(&local_18,pFVar7);
  if (pFVar3 != pFVar7) {
    pFVar4 = (pFVar3->Keys).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar3->Keys).AllocatorInstance.Data = (pFVar7->Keys).AllocatorInstance.Data;
    (pFVar7->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Keys).ArrayNum = (pFVar7->Keys).ArrayNum;
    (pFVar3->Keys).ArrayMax = (pFVar7->Keys).ArrayMax;
    (pFVar7->Keys).ArrayNum = 0;
    (pFVar7->Keys).ArrayMax = 0;
  }
  if (local_18.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Keys.AllocatorInstance.Data);
  }
  return;
}

// StaticExecute @ 14a569cd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionReverse::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKeyCollection *param_2,
          FRigElementKeyCollection *param_3)

{
  FScriptContainerElement *pFVar1;
  FRigElementKeyCollection *pFVar2;
  FRigElementKeyCollection local_18;
  
  pFVar2 = FRigElementKeyCollection::MakeReversed(&local_18,param_2);
  if (param_3 != pFVar2) {
    pFVar1 = (param_3->Keys).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_3->Keys).AllocatorInstance.Data = (pFVar2->Keys).AllocatorInstance.Data;
    (pFVar2->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_3->Keys).ArrayNum = (pFVar2->Keys).ArrayNum;
    (param_3->Keys).ArrayMax = (pFVar2->Keys).ArrayMax;
    (pFVar2->Keys).ArrayNum = 0;
    (pFVar2->Keys).ArrayMax = 0;
  }
  if (local_18.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Keys.AllocatorInstance.Data);
  }
  return;
}

