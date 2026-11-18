// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4f1460

UScriptStruct * __cdecl FRigUnit_GetItemNameSpace::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetItemNameSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetItemNameSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace,(UObject *)pUVar1,
                         L"RigUnit_GetItemNameSpace");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetItemNameSpace.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetItemNameSpace.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4f1560

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_GetItemNameSpace::GetExecuteContextStruct(FRigUnit_GetItemNameSpace *this)

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

// Execute @ 14a4f17e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_GetItemNameSpace::Execute(FRigUnit_GetItemNameSpace *this)

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
  FRigUnit_GetItemModuleName::StaticExecute
            ((FControlRigExecuteContext *)local_268,&this->Item,&this->HasNameSpace,&this->NameSpace
            );
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4f1940

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_GetItemNameSpace::GetUpgradeInfo
          (FRigUnit_GetItemNameSpace *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *pFVar2;
  FString local_58;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_48;
  FRigVMStruct local_38;
  undefined8 local_30;
  uint local_28;
  undefined1 local_24;
  void *local_20;
  undefined8 local_18;
  
  local_30._0_1_ = (this->Item).Type;
  local_30._1_3_ = *(undefined3 *)&(this->Item).field_0x1;
  local_30._4_4_ = (this->Item).Name.ComparisonIndex;
  local_38 = (FRigVMStruct)&___7FRigUnit_GetItemModuleName__6B_;
  local_28 = (this->Item).Name.Number;
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
  local_24 = 0;
  local_20 = (void *)0x0;
  local_18 = 0;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetItemNameSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetItemNameSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace,(UObject *)pUVar1,
                         L"RigUnit_GetItemNameSpace");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_58.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics::RigVMFunctions;
    local_58.Data.ArrayNum = 1;
    local_48._12_4_ = local_58.Data.ArrayMax;
    local_48.ArrayNum = 1;
    local_48.DataPtr = Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigUnit_GetItemNameSpace.OuterSingleton,
               &local_48);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_GetItemNameSpace.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetItemModuleName.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetItemModuleName.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetItemModuleName,(UObject *)pUVar1,
                         L"RigUnit_GetItemModuleName");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_58.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         Z_Construct_UScriptStruct_FRigUnit_GetItemModuleName_Statics::RigVMFunctions;
    local_58.Data.ArrayNum = 1;
    local_48._12_4_ = local_58.Data.ArrayMax;
    local_48.ArrayNum = 1;
    local_48.DataPtr = Z_Construct_UScriptStruct_FRigUnit_GetItemModuleName_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigUnit_GetItemModuleName.OuterSingleton,
               &local_48);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_GetItemModuleName.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_38);
  ::FString::FString((FString *)&local_48,L"Module");
  ::FString::FString(&local_58,L"NameSpace");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,&local_58,(FString *)&local_48,true,true);
  if ((FRigVMCompiledInFunction *)local_58.Data.AllocatorInstance.Data !=
      (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  ::FString::FString(&local_58,L"IsPartOfModule");
  ::FString::FString((FString *)&local_48,L"HasNameSpace");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_48,&local_58,true,true);
  if (local_48.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  if ((FRigVMCompiledInFunction *)local_58.Data.AllocatorInstance.Data !=
      (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  return __return_storage_ptr__;
}

// Execute @ 14a528460

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetItemNameSpace::Execute
          (FRigUnit_GetItemNameSpace *this,FControlRigExecuteContext *param_1)

{
  FRigUnit_GetItemModuleName::StaticExecute
            (param_1,&this->Item,&this->HasNameSpace,&this->NameSpace);
  return;
}

// RigVMExecute @ 14a542570

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetItemNameSpace::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  bool *pbVar3;
  FString *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRigElementKey *pFVar7;
  FControlRigExecuteContext *pFVar8;
  
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
    pFVar7 = (FRigElementKey *)pFVar2->Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
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
  pbVar3 = (bool *)param_2->DataPtr[1].Ptr;
  if (iVar1 < 3) {
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
  pFVar4 = (FString *)param_2->DataPtr[2].Ptr;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  FRigUnit_GetItemModuleName::StaticExecute(pFVar8,pFVar7,pbVar3,pFVar4);
  return;
}

// StaticExecute @ 14a577700

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetItemNameSpace::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool *param_3,FString *param_4
          )

{
  int *piVar1;
  int iVar2;
  ForAnyElementType _Src;
  FRigElementKey FStack_28;
  FString FStack_18;
  
  ::FString::Reset(param_4,0);
  *param_3 = false;
  if (param_1->Hierarchy != (URigHierarchy *)0x0) {
    FStack_28.Type = param_2->Type;
    FStack_28._1_3_ = *(undefined3 *)&param_2->field_0x1;
    FStack_28.Name.ComparisonIndex.Value = (param_2->Name).ComparisonIndex.Value;
    FStack_28.Name.Number = (param_2->Name).Number;
    URigHierarchy::GetModuleName(param_1->Hierarchy,&FStack_18,&FStack_28);
    _Src.Data = FStack_18.Data.AllocatorInstance.Data;
    if (1 < FStack_18.Data.ArrayNum) {
      if (param_4 != &FStack_18) {
        iVar2 = (param_4->Data).ArrayMax;
        piVar1 = &(param_4->Data).ArrayMax;
        (param_4->Data).ArrayNum = FStack_18.Data.ArrayNum;
        if ((FStack_18.Data.ArrayNum == 0) && (iVar2 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,FStack_18.Data.ArrayNum,iVar2,(ForAnyElementType *)param_4,
                     FStack_18.Data.ArrayNum,piVar1);
          if (FStack_18.Data.ArrayNum != 0) {
            memcpy((param_4->Data).AllocatorInstance.Data,_Src.Data,
                   (longlong)FStack_18.Data.ArrayNum * 2);
          }
        }
      }
      *param_3 = true;
    }
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

