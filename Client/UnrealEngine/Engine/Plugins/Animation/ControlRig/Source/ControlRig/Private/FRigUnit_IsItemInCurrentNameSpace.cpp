// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4f2ce0

UScriptStruct * __cdecl FRigUnit_IsItemInCurrentNameSpace::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace,
                         (UObject *)pUVar1,L"RigUnit_IsItemInCurrentNameSpace");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4f2e60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_IsItemInCurrentNameSpace::GetExecuteContextStruct(FRigUnit_IsItemInCurrentNameSpace *this)

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

// Execute @ 14a4f3550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_IsItemInCurrentNameSpace::Execute(FRigUnit_IsItemInCurrentNameSpace *this)

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
  FRigUnit_IsItemInCurrentModule::StaticExecute
            ((FControlRigExecuteContext *)local_268,&this->Item,&this->Result);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4f36b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_IsItemInCurrentNameSpace::GetUpgradeInfo
          (FRigUnit_IsItemInCurrentNameSpace *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *pFVar2;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_38;
  FRigVMStruct local_28;
  undefined8 local_20;
  uint local_18;
  undefined1 local_14;
  
  local_20._0_1_ = (this->Item).Type;
  local_20._1_3_ = *(undefined3 *)&(this->Item).field_0x1;
  local_20._4_4_ = (this->Item).Name.ComparisonIndex;
  local_28 = (FRigVMStruct)&___7FRigUnit_IsItemInCurrentModule__6B_;
  local_18 = (this->Item).Name.Number;
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
  local_14 = 0;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace,
                         (UObject *)pUVar1,L"RigUnit_IsItemInCurrentNameSpace");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_38.ArrayNum = 1;
    local_38.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace.
                      OuterSingleton,&local_38);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_IsItemInCurrentModule.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_IsItemInCurrentModule.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentModule,(UObject *)pUVar1,
                         L"RigUnit_IsItemInCurrentModule");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_38.ArrayNum = 1;
    local_38.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentModule_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigUnit_IsItemInCurrentModule.
                      OuterSingleton,&local_38);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_IsItemInCurrentModule.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// Execute @ 14a52a5e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_IsItemInCurrentNameSpace::Execute
          (FRigUnit_IsItemInCurrentNameSpace *this,FControlRigExecuteContext *param_1)

{
  FRigUnit_IsItemInCurrentModule::StaticExecute(param_1,&this->Item,&this->Result);
  return;
}

// RigVMExecute @ 14a549b10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_IsItemInCurrentNameSpace::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  bool *pbVar3;
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
  pbVar3 = (bool *)param_2->DataPtr[1].Ptr;
  pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  FRigUnit_IsItemInCurrentModule::StaticExecute(pFVar7,pFVar6,pbVar3);
  return;
}

// StaticExecute @ 14a582ac0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_IsItemInCurrentNameSpace::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool *param_3)

{
  ForAnyElementType _Src;
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  bool bVar4;
  FRigElementKey FStack_48;
  FString FStack_38;
  FString FStack_28;
  FString FStack_18;
  
  FStack_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_28.Data.ArrayNum = 0;
  FStack_28.Data.ArrayMax = 0;
  if ((param_1->RigModulePrefix).Data.ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->RigModulePrefix).Data.AllocatorInstance.Data;
  }
  ::FString::operator=(&FStack_28,pwVar3);
  if (1 < FStack_28.Data.ArrayNum) {
    iVar1 = FStack_28.Data.ArrayNum + -1;
    if (FStack_28.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    if (iVar1 + -1 < iVar1) {
      iVar1 = iVar1 + -1;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    ::FString::RemoveAt(&FStack_28,iVar2,1,Default);
  }
  FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_38.Data.ArrayNum = 0;
  FStack_38.Data.ArrayMax = 0;
  ::FString::Reset(&FStack_38,0);
  if (param_1->Hierarchy != (URigHierarchy *)0x0) {
    FStack_48.Type = param_2->Type;
    FStack_48._1_3_ = *(undefined3 *)&param_2->field_0x1;
    FStack_48.Name.ComparisonIndex.Value = (param_2->Name).ComparisonIndex.Value;
    FStack_48.Name.Number = (param_2->Name).Number;
    URigHierarchy::GetModuleName(param_1->Hierarchy,&FStack_18,&FStack_48);
    _Src.Data = FStack_18.Data.AllocatorInstance.Data;
    iVar1 = FStack_18.Data.ArrayNum;
    if (1 < iVar1) {
      FStack_38.Data.ArrayNum = iVar1;
      if ((iVar1 == 0) && (FStack_38.Data.ArrayMax == 0)) {
        FStack_38.Data._8_8_ = FStack_18.Data._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,FStack_38.Data.ArrayMax,(ForAnyElementType *)&FStack_38,iVar1,
                   &FStack_38.Data.ArrayMax);
        if (iVar1 != 0) {
          memcpy(FStack_38.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar1 * 2);
        }
      }
    }
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  *param_3 = false;
  if ((1 < FStack_28.Data.ArrayNum) && (1 < FStack_38.Data.ArrayNum)) {
    if (FStack_38.Data.ArrayNum == FStack_28.Data.ArrayNum) {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)FStack_38.Data.AllocatorInstance.Data,
                         (wchar_t *)FStack_28.Data.AllocatorInstance.Data);
      bVar4 = iVar1 == 0;
    }
    else {
      bVar4 = FStack_28.Data.ArrayNum + FStack_38.Data.ArrayNum == 1;
    }
    *param_3 = bVar4;
  }
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  return;
}

