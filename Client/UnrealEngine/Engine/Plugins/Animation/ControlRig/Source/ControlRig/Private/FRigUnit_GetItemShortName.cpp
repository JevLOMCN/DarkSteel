// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4f0090

UScriptStruct * __cdecl FRigUnit_GetItemShortName::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetItemShortName.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetItemShortName.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetItemShortName,(UObject *)pUVar1,
                         L"RigUnit_GetItemShortName");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_GetItemShortName_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetItemShortName.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetItemShortName.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4f0110

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_GetItemShortName::GetExecuteContextStruct(FRigUnit_GetItemShortName *this)

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

// Execute @ 14a4f0ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_GetItemShortName::Execute(FRigUnit_GetItemShortName *this)

{
  FText *this_00;
  FString *pFVar1;
  wchar_t *pwVar2;
  undefined1 auStack_2a8 [32];
  FName local_288;
  FText local_280;
  undefined1 local_268 [456];
  URigHierarchy *local_a0;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2a8;
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
  local_288.ComparisonIndex.Value = 0;
  local_288.Number = 0;
  (this->ShortName).ComparisonIndex = 0;
  (this->ShortName).Number = 0;
  if (local_a0 != (URigHierarchy *)0x0) {
    this_00 = URigHierarchy::GetDisplayNameForUI(local_a0,&local_280,&this->Item,ForceShort);
    pFVar1 = FText::ToString(this_00);
    if ((pFVar1->Data).ArrayNum == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_288,pwVar2);
    this->ShortName = local_288;
    if (local_280.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_280.TextData.Reference + 0x10))();
    }
  }
  if (this->ShortName == (FName)0x0) {
    this->ShortName = (this->Item).Name;
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4f0c40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_GetItemShortName::GetUpgradeInfo
          (FRigUnit_GetItemShortName *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 14a528480

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetItemShortName::Execute
          (FRigUnit_GetItemShortName *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Item,&this->ShortName);
  return;
}

// RigVMExecute @ 14a5426c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetItemShortName::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  FRigElementKey *pFVar6;
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
    pFVar6 = (FRigElementKey *)pFVar2->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
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
  pFVar3 = (FName *)param_2->DataPtr[1].Ptr;
  pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar7,pFVar6,pFVar3);
  return;
}

// StaticExecute @ 14a577710

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetItemShortName::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,FName *param_3)

{
  FText *this;
  FString *pFVar1;
  wchar_t *pwVar2;
  FName local_res8;
  FText local_18;
  
  param_3->ComparisonIndex = 0;
  param_3->Number = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  if (param_1->Hierarchy != (URigHierarchy *)0x0) {
    this = URigHierarchy::GetDisplayNameForUI(param_1->Hierarchy,&local_18,param_2,ForceShort);
    pFVar1 = FText::ToString(this);
    if ((pFVar1->Data).ArrayNum == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,pwVar2);
    *param_3 = local_res8;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  if (*param_3 == (FName)0x0) {
    *param_3 = param_2->Name;
  }
  return;
}

