// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4eee30

UScriptStruct * __cdecl FRigUnit_GetCurrentNameSpace::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetCurrentNameSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetCurrentNameSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetCurrentNameSpace,(UObject *)pUVar1,
                         L"RigUnit_GetCurrentNameSpace");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_GetCurrentNameSpace_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetCurrentNameSpace.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetCurrentNameSpace.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4eef30

UScriptStruct * __thiscall
FRigUnit_GetCurrentNameSpace::GetExecuteContextStruct(FRigUnit_GetCurrentNameSpace *this)

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

// Execute @ 14a4ef490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FRigUnit_GetCurrentNameSpace::Execute(FRigUnit_GetCurrentNameSpace *this)

{
  int iVar1;
  int iVar2;
  ForAnyElementType FVar3;
  undefined1 auStack_288 [32];
  undefined1 local_268 [472];
  ForAnyElementType local_90;
  int local_88;
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
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_88 != 0) {
    FVar3.Data = local_90.Data;
  }
  ::FString::operator=(&this->NameSpace,(wchar_t *)FVar3.Data);
  iVar1 = (this->NameSpace).Data.ArrayNum;
  if (1 < iVar1) {
    iVar1 = ((iVar1 + -1 <= iVar1 + -2) - 2) + iVar1;
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    ::FString::RemoveAt(&this->NameSpace,iVar2,1,Default);
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4ef5b0

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_GetCurrentNameSpace::GetUpgradeInfo
          (FRigUnit_GetCurrentNameSpace *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *pFVar2;
  FString local_48;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_38;
  FRigVMStruct local_28;
  void *local_20;
  undefined8 local_18;
  
  (__return_storage_ptr__->NodePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->NodePath).Data.ArrayNum = 0;
  (__return_storage_ptr__->NodePath).Data.ArrayMax = 0;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  *(undefined8 *)&__return_storage_ptr__->InputLinkMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->OutputLinkMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DefaultValues = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x48 = 0;
  (__return_storage_ptr__->AggregatePins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggregatePins).ArrayNum = 0;
  (__return_storage_ptr__->AggregatePins).ArrayMax = 0;
  local_28 = (FRigVMStruct)&___7FRigUnit_GetModuleName__6B_;
  local_20 = (void *)0x0;
  local_18 = 0;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetCurrentNameSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetCurrentNameSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetCurrentNameSpace,(UObject *)pUVar1,
                         L"RigUnit_GetCurrentNameSpace");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_48.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         Z_Construct_UScriptStruct_FRigUnit_GetCurrentNameSpace_Statics::RigVMFunctions;
    local_48.Data.ArrayNum = 1;
    local_38._12_4_ = local_48.Data.ArrayMax;
    local_38.ArrayNum = 1;
    local_38.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_GetCurrentNameSpace_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigUnit_GetCurrentNameSpace.OuterSingleton,
               &local_38);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_GetCurrentNameSpace.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetModuleName.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetModuleName.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetModuleName,(UObject *)pUVar1,
                         L"RigUnit_GetModuleName");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_48.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         Z_Construct_UScriptStruct_FRigUnit_GetModuleName_Statics::RigVMFunctions;
    local_48.Data.ArrayNum = 1;
    local_38._12_4_ = local_48.Data.ArrayMax;
    local_38.ArrayNum = 1;
    local_38.DataPtr = Z_Construct_UScriptStruct_FRigUnit_GetModuleName_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigUnit_GetModuleName.OuterSingleton,
               &local_38);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_GetModuleName.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_28);
  ::FString::FString((FString *)&local_38,L"Module");
  ::FString::FString(&local_48,L"NameSpace");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,&local_48,(FString *)&local_38,true,true);
  if ((FRigVMCompiledInFunction *)local_48.Data.AllocatorInstance.Data !=
      (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_38.DataPtr);
  }
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  return __return_storage_ptr__;
}

// Execute @ 14a5281a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetCurrentNameSpace::Execute
          (FRigUnit_GetCurrentNameSpace *this,FControlRigExecuteContext *param_1)

{
  FRigUnit_GetModuleName::StaticExecute(param_1,&this->NameSpace);
  return;
}

// RigVMExecute @ 14a5419a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetCurrentNameSpace::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  FControlRigExecuteContext *pFVar4;
  
  if (param_2->ArrayNum < 1) {
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
  pFVar1 = (FString *)param_2->DataPtr->Ptr;
  pFVar4 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  FRigUnit_GetModuleName::StaticExecute(pFVar4,pFVar1);
  return;
}

// StaticExecute @ 14a577180

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_GetCurrentNameSpace::StaticExecute(FControlRigExecuteContext *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  if ((param_1->RigModulePrefix).Data.ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->RigModulePrefix).Data.AllocatorInstance.Data;
  }
  ::FString::operator=(param_2,pwVar3);
  iVar1 = (param_2->Data).ArrayNum;
  if (1 < iVar1) {
    iVar1 = ((iVar1 + -1 <= iVar1 + -2) - 2) + iVar1;
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    ::FString::RemoveAt(param_2,iVar2,1,Default);
    return;
  }
  return;
}

