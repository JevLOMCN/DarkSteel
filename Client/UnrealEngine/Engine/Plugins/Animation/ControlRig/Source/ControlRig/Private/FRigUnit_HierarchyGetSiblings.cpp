// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4df490

UScriptStruct * __cdecl FRigUnit_HierarchyGetSiblings::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetSiblings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetSiblings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings,(UObject *)pUVar1,
                         L"RigUnit_HierarchyGetSiblings");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetSiblings.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetSiblings.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4df510

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_HierarchyGetSiblings::GetExecuteContextStruct(FRigUnit_HierarchyGetSiblings *this)

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

// Execute @ 14a4df950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_HierarchyGetSiblings::Execute(FRigUnit_HierarchyGetSiblings *this)

{
  undefined1 auStackY_2a8 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
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
  FRigUnit_HierarchyGetSiblingsItemArray::StaticExecute
            ((FControlRigExecuteContext *)local_268,&this->Item,this->bIncludeItem,true,
             &(this->Siblings).Keys,&this->CachedItem,&this->CachedSiblings);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4e0080

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_HierarchyGetSiblings::GetUpgradeInfo
          (FRigUnit_HierarchyGetSiblings *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *pFVar2;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  FRigVMStruct local_68;
  undefined8 local_60;
  uint local_58;
  undefined1 local_54;
  undefined1 local_53;
  void *local_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  void *local_20;
  undefined8 local_18;
  
  local_78 = 0xffffffff;
  local_88.DataPtr._0_4_ = (uint)local_88.DataPtr & 0xffffff00;
  local_68 = (FRigVMStruct)&___7FRigUnit_HierarchyGetSiblingsItemArray__6B_;
  local_88.DataPtr._4_4_ = 0;
  local_88.ArrayNum = 0;
  local_88._12_2_ = 0xffff;
  local_58 = (this->Item).Name.Number;
  local_40 = (ulonglong)(uint)local_88.DataPtr;
  uStack_38 = CONCAT26(local_88._14_2_,0xffff00000000);
  local_54 = this->bIncludeItem;
  uStack_70 = 0;
  local_60._0_1_ = (this->Item).Type;
  local_60._1_3_ = *(undefined3 *)&(this->Item).field_0x1;
  local_60._4_4_ = (this->Item).Name.ComparisonIndex;
  local_30 = CONCAT44(uStack_74,0xffffffff);
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
  local_50 = (void *)0x0;
  local_48 = 0;
  local_20 = (void *)0x0;
  local_18 = 0;
  local_53 = 1;
  uStack_28 = 0;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetSiblings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetSiblings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings,(UObject *)pUVar1,
                         L"RigUnit_HierarchyGetSiblings");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_88.DataPtr._0_4_ = 0x5218a738;
    local_88.DataPtr._4_4_ = 1;
    local_88.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetSiblings.OuterSingleton
               ,&local_88);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetSiblings.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray,
                         (UObject *)pUVar1,L"RigUnit_HierarchyGetSiblingsItemArray");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_88.DataPtr._0_4_ = 0x5218a868;
    local_88.DataPtr._4_4_ = 1;
    local_88.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray.
                      OuterSingleton,&local_88);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_68);
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return __return_storage_ptr__;
}

// FRigUnit_HierarchyGetSiblings @ 14a511f60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_HierarchyGetSiblings * __thiscall
FRigUnit_HierarchyGetSiblings::FRigUnit_HierarchyGetSiblings(FRigUnit_HierarchyGetSiblings *this)

{
  FRigElementKeyCollection *pFVar1;
  FRigElementKeyCollection *pFVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  ulonglong uVar6;
  uint local_48;
  ForAnyElementType local_38 [2];
  uint local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  local_48 = CONCAT31(local_48._1_3_,1);
  uVar6 = (ulonglong)local_48;
  pFVar1 = &this->Siblings;
  local_28 = local_28 & 0xffffff00;
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyGetSiblings__6B_;
  (pFVar1->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2 = &this->CachedSiblings;
  (this->Siblings).Keys.ArrayNum = 0;
  piVar3 = &(this->Siblings).Keys.ArrayMax;
  *piVar3 = 0;
  (pFVar2->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSiblings).Keys.ArrayNum = 0;
  (this->CachedSiblings).Keys.ArrayMax = 0;
  (this->Item).Type = (char)uVar6;
  *(int3 *)&(this->Item).field_0x1 = (int3)(uVar6 >> 8);
  (this->Item).Name.ComparisonIndex = (FNameEntryId)(int)(uVar6 >> 0x20);
  uStack_1c = 0xffff;
  uStack_24 = 0;
  uStack_20 = 0;
  local_18 = 0xffffffff;
  uStack_10 = 0;
  (this->Item).Name.Number = 0;
  uVar6 = (ulonglong)local_28;
  (this->CachedItem).Key.Type = (char)uVar6;
  *(int3 *)&(this->CachedItem).Key.field_0x1 = (int3)(uVar6 >> 8);
  (this->CachedItem).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar6 >> 0x20);
  *(ulonglong *)&(this->CachedItem).Key.Name.Number = CONCAT26(uStack_1a,0xffff00000000);
  *(ulonglong *)&(this->CachedItem).ContainerVersion = CONCAT44(uStack_14,0xffffffff);
  (this->CachedItem).Element = (FRigBaseElement *)0x0;
  if (pFVar2 != (FRigElementKeyCollection *)local_38) {
    (pFVar2->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CachedSiblings).Keys.ArrayNum = 0;
    (this->CachedSiblings).Keys.ArrayMax = 0;
  }
  if (pFVar1 == pFVar2) {
    this->bIncludeItem = false;
  }
  else {
    iVar4 = *piVar3;
    _Src = (pFVar2->Keys).AllocatorInstance.Data;
    iVar5 = (this->CachedSiblings).Keys.ArrayNum;
    (this->Siblings).Keys.ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar4 == 0)) {
      (this->Siblings).Keys.ArrayMax = 0;
      this->bIncludeItem = false;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar5,iVar4,(ForAnyElementType *)pFVar1,iVar5,piVar3);
      if (iVar5 != 0) {
        memcpy((pFVar1->Keys).AllocatorInstance.Data,_Src,(longlong)iVar5 * 0xc);
      }
      this->bIncludeItem = false;
    }
  }
  return this;
}

// Execute @ 14a529e50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyGetSiblings::Execute
          (FRigUnit_HierarchyGetSiblings *this,FControlRigExecuteContext *param_1)

{
  FRigUnit_HierarchyGetSiblingsItemArray::StaticExecute
            (param_1,&this->Item,this->bIncludeItem,true,&(this->Siblings).Keys,&this->CachedItem,
             &this->CachedSiblings);
  return;
}

// RigVMExecute @ 14a548900

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyGetSiblings::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FRigElementKey *pFVar6;
  uchar *puVar7;
  FRigVMMemoryHandle *pFVar8;
  FRigVMSlice *pFVar9;
  FCachedRigElement *pFVar10;
  FRigElementKeyCollection *pFVar11;
  FControlRigExecuteContext *pFVar12;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
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
    pFVar6 = (FRigElementKey *)pFVar8->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
  }
  if (iVar1 < 2) {
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
    puVar7 = pFVar8[1].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  bVar4 = (bool)*puVar7;
  if (iVar1 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar2 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)param_2->DataPtr[2].Ptr;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar9->Offset + pFVar9->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FRigElementKeyCollection *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar9->Offset + pFVar9->Index);
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  FRigUnit_HierarchyGetSiblingsItemArray::StaticExecute
            (pFVar12,pFVar6,bVar4,true,pTVar2,pFVar10,pFVar11);
  return;
}

// StaticExecute @ 14a581430

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyGetSiblings::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool param_3,
          FRigElementKeyCollection *param_4,FCachedRigElement *param_5,
          FRigElementKeyCollection *param_6)

{
  FRigUnit_HierarchyGetSiblingsItemArray::StaticExecute
            (param_1,param_2,param_3,true,&param_4->Keys,param_5,param_6);
  return;
}

