// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4c12a0

UScriptStruct * __cdecl FRigUnit_CollectionReplaceItems::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_CollectionReplaceItems.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_CollectionReplaceItems.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems,(UObject *)pUVar1
                         ,L"RigUnit_CollectionReplaceItems");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_CollectionReplaceItems.OuterSingleton
               ,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_CollectionReplaceItems.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4c13b0

UScriptStruct * __thiscall
FRigUnit_CollectionReplaceItems::GetExecuteContextStruct(FRigUnit_CollectionReplaceItems *this)

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

// Execute @ 14a4c15a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_CollectionReplaceItems::Execute(FRigUnit_CollectionReplaceItems *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 auStackY_2b8 [32];
  TArrayView<FRigElementKey_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
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
  local_278.DataPtr = (FRigElementKey *)(this->Items).Keys.AllocatorInstance.Data;
  iVar3 = (this->Items).Keys.ArrayNum;
  bVar1 = this->bAllowDuplicates;
  bVar2 = this->RemoveInvalidItems;
  if (iVar3 < 0) {
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
  local_278.ArrayNum = iVar3;
  FRigUnit_CollectionReplaceItemsArray::StaticExecute
            ((FControlRigExecuteContext *)local_268,&local_278,&this->Old,&this->New,bVar2,bVar1,
             &(this->Collection).Keys);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4c1750

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_CollectionReplaceItems::GetUpgradeInfo
          (FRigUnit_CollectionReplaceItems *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UPackage *pUVar2;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar3;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_68;
  FRigVMStruct local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  FName local_40;
  FName local_38;
  undefined2 local_30;
  void *local_28;
  undefined8 local_20;
  
  local_58 = (FRigVMStruct)&___7FRigUnit_CollectionReplaceItemsArray__6B_;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  local_48 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  local_30 = 0;
  if ((FRigElementKeyCollection *)&local_50 != &this->Items) {
    uVar1 = (this->Items).Keys.ArrayNum;
    _Src = (this->Items).Keys.AllocatorInstance.Data;
    local_48 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar1,0,&local_50,uVar1,(int *)((longlong)&local_48 + 4));
      memcpy(local_50.Data,_Src,(longlong)(int)uVar1 * 0xc);
    }
  }
  local_40 = this->Old;
  local_38 = this->New;
  local_30._0_1_ = this->RemoveInvalidItems;
  local_30._1_1_ = this->bAllowDuplicates;
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_CollectionReplaceItems.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_CollectionReplaceItems.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems,(UObject *)pUVar2
                         ,L"RigUnit_CollectionReplaceItems");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_68.ArrayNum = 1;
    local_68.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_CollectionReplaceItems.
                       OuterSingleton,&local_68);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_CollectionReplaceItems.OuterSingleton;
  pUVar3 = FRigUnit_CollectionReplaceItemsArray::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar3;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_58);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return __return_storage_ptr__;
}

// Execute @ 14a5259f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_CollectionReplaceItems::Execute
          (FRigUnit_CollectionReplaceItems *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Items,&this->Old,&this->New,this->RemoveInvalidItems,
                this->bAllowDuplicates,&this->Collection);
  return;
}

// RigVMExecute @ 14a538b20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionReplaceItems::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FRigElementKeyCollection *pFVar5;
  FName *pFVar6;
  FName *pFVar7;
  FRigVMMemoryHandle *pFVar8;
  uchar *puVar9;
  FRigElementKeyCollection *pFVar10;
  FControlRigExecuteContext *pFVar11;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FRigElementKeyCollection *)pFVar8->Ptr;
  }
  else {
    pFVar5 = (FRigElementKeyCollection *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
  }
  if (iVar2 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FName *)pFVar8[1].Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  if (iVar2 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FName *)pFVar8[2].Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  bVar4 = (bool)*puVar9;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  puVar9 = FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  bVar1 = (bool)*puVar9;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar10 = (FRigElementKeyCollection *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar11,pFVar5,pFVar6,pFVar7,bVar4,bVar1,pFVar10);
  return;
}

// StaticExecute @ 14a5695e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionReplaceItems::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKeyCollection *param_2,FName *param_3,
          FName *param_4,bool param_5,bool param_6,FRigElementKeyCollection *param_7)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigElementKey_const_,int> local_18;
  
  local_18.DataPtr = (FRigElementKey *)(param_2->Keys).AllocatorInstance.Data;
  iVar1 = (param_2->Keys).ArrayNum;
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
  FRigUnit_CollectionReplaceItemsArray::StaticExecute
            (param_1,&local_18,param_3,param_4,param_5,param_6,&param_7->Keys);
  return;
}

