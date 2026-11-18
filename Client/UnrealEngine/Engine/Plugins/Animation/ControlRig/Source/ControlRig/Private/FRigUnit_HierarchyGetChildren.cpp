// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4de150

UScriptStruct * __cdecl FRigUnit_HierarchyGetChildren::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetChildren.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetChildren.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren,(UObject *)pUVar1,
                         L"RigUnit_HierarchyGetChildren");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetChildren.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetChildren.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4de320

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_HierarchyGetChildren::GetExecuteContextStruct(FRigUnit_HierarchyGetChildren *this)

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

// Execute @ 14a4de650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_HierarchyGetChildren::Execute(FRigUnit_HierarchyGetChildren *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Parent,this->bIncludeParent,
                this->bRecursive,&this->Children,&this->CachedParent,&this->CachedChildren);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4dea40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_HierarchyGetChildren::GetUpgradeInfo
          (FRigUnit_HierarchyGetChildren *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar2;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_48;
  FRigVMStruct local_38;
  undefined8 local_30;
  uint local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined2 local_22;
  void *local_20;
  undefined8 local_18;
  
  local_30._0_1_ = (this->Parent).Type;
  local_30._1_3_ = *(undefined3 *)&(this->Parent).field_0x1;
  local_30._4_4_ = (this->Parent).Name.ComparisonIndex;
  local_38 = (FRigVMStruct)&___7FRigUnit_CollectionChildrenArray__6B_;
  local_28 = (this->Parent).Name.Number;
  local_23 = this->bRecursive;
  local_24 = this->bIncludeParent;
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
  local_20 = (void *)0x0;
  local_18 = 0;
  local_22 = 0xef01;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetChildren.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetChildren.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren,(UObject *)pUVar1,
                         L"RigUnit_HierarchyGetChildren");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_48.ArrayNum = 1;
    local_48.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetChildren.
                       OuterSingleton,&local_48);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetChildren.OuterSingleton;
  pUVar2 = FRigUnit_CollectionChildrenArray::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar2;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_38);
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  return __return_storage_ptr__;
}

// FRigUnit_HierarchyGetChildren @ 14a5116b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_HierarchyGetChildren * __thiscall
FRigUnit_HierarchyGetChildren::FRigUnit_HierarchyGetChildren(FRigUnit_HierarchyGetChildren *this)

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
  pFVar1 = &this->Children;
  local_28 = local_28 & 0xffffff00;
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyGetChildren__6B_;
  (pFVar1->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2 = &this->CachedChildren;
  (this->Children).Keys.ArrayNum = 0;
  piVar3 = &(this->Children).Keys.ArrayMax;
  *piVar3 = 0;
  (pFVar2->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedChildren).Keys.ArrayNum = 0;
  (this->CachedChildren).Keys.ArrayMax = 0;
  (this->Parent).Type = (char)uVar6;
  *(int3 *)&(this->Parent).field_0x1 = (int3)(uVar6 >> 8);
  (this->Parent).Name.ComparisonIndex = (FNameEntryId)(int)(uVar6 >> 0x20);
  uStack_1c = 0xffff;
  uStack_24 = 0;
  uStack_20 = 0;
  local_18 = 0xffffffff;
  uStack_10 = 0;
  (this->Parent).Name.Number = 0;
  uVar6 = (ulonglong)local_28;
  (this->CachedParent).Key.Type = (char)uVar6;
  *(int3 *)&(this->CachedParent).Key.field_0x1 = (int3)(uVar6 >> 8);
  (this->CachedParent).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar6 >> 0x20);
  *(ulonglong *)&(this->CachedParent).Key.Name.Number = CONCAT26(uStack_1a,0xffff00000000);
  *(ulonglong *)&(this->CachedParent).ContainerVersion = CONCAT44(uStack_14,0xffffffff);
  (this->CachedParent).Element = (FRigBaseElement *)0x0;
  if (pFVar2 != (FRigElementKeyCollection *)local_38) {
    (pFVar2->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CachedChildren).Keys.ArrayNum = 0;
    (this->CachedChildren).Keys.ArrayMax = 0;
  }
  if (pFVar1 != pFVar2) {
    iVar4 = *piVar3;
    iVar5 = (this->CachedChildren).Keys.ArrayNum;
    _Src = (pFVar2->Keys).AllocatorInstance.Data;
    (this->Children).Keys.ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar4 == 0)) {
      (this->Children).Keys.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar5,iVar4,(ForAnyElementType *)pFVar1,iVar5,piVar3);
      if (iVar5 != 0) {
        memcpy((pFVar1->Keys).AllocatorInstance.Data,_Src,(longlong)iVar5 * 0xc);
      }
    }
  }
  this->bIncludeParent = false;
  this->bRecursive = false;
  return this;
}

// Execute @ 14a529830

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyGetChildren::Execute
          (FRigUnit_HierarchyGetChildren *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Parent,this->bIncludeParent,this->bRecursive,&this->Children,
                &this->CachedParent,&this->CachedChildren);
  return;
}

// RigVMExecute @ 14a547990

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyGetChildren::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FRigElementKey *pFVar5;
  uchar *puVar6;
  FRigVMMemoryHandle *pFVar7;
  FRigElementKeyCollection *pFVar8;
  FRigVMSlice *pFVar9;
  FCachedRigElement *pFVar10;
  FRigElementKeyCollection *pFVar11;
  FControlRigExecuteContext *pFVar12;
  
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FRigElementKey *)pFVar7->Ptr;
  }
  else {
    pFVar5 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar7[1].Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal
                       (pFVar7[1].PropertyPath,pFVar7[1].Ptr,pFVar7[1].Property);
  }
  bVar3 = (bool)*puVar6;
  if (iVar1 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar7[2].Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal
                       (pFVar7[2].PropertyPath,pFVar7[2].Ptr,pFVar7[2].Property);
  }
  bVar4 = (bool)*puVar6;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar8 = (FRigElementKeyCollection *)FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar9->Offset + pFVar9->Index);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FRigElementKeyCollection *)
            FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar9->Offset + pFVar9->Index);
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar12,pFVar5,bVar3,bVar4,pFVar8,pFVar10,pFVar11);
  return;
}

// StaticExecute @ 14a5806d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyGetChildren::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool param_3,bool param_4,
          FRigElementKeyCollection *param_5,FCachedRigElement *param_6,
          FRigElementKeyCollection *param_7)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  FRigElementKey *pFVar5;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  FRigElementKey local_68;
  FRigElementKeyCollection local_58;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_48;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_38;
  
  bVar3 = FCachedRigElement::IsIdentical(param_6,param_2,param_1->Hierarchy);
  if (!bVar3) {
    piVar1 = &(param_7->Keys).ArrayMax;
    (param_7->Keys).ArrayNum = 0;
    if ((param_7->Keys).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)param_7,0,piVar1);
    }
    bVar3 = FCachedRigElement::UpdateCache(param_6,param_2,param_1->Hierarchy);
    if (bVar3) {
      pFVar5 = FCachedRigElement::GetResolvedKey(param_6);
      local_68.Type = pFVar5->Type;
      local_68._1_3_ = *(undefined3 *)&pFVar5->field_0x1;
      local_68.Name.ComparisonIndex.Value = (pFVar5->Name).ComparisonIndex.Value;
      local_68.Name.Number = (pFVar5->Name).Number;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      if (param_3) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&local_48.AllocatorInstance,&local_48.ArrayMax);
        local_48.ArrayNum = iVar4 + 1;
        *(undefined8 *)(local_48.AllocatorInstance.Data + (longlong)iVar4 * 0xc) = local_68._0_8_;
        *(uint *)(local_48.AllocatorInstance.Data + (longlong)iVar4 * 0xc + 8) =
             local_68.Name.Number;
      }
      pTVar6 = URigHierarchy::GetChildren(param_1->Hierarchy,&local_38,&local_68,param_4);
      TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::
      Append<FRigElementKey,TSizedDefaultAllocator<32>_>(&local_48,pTVar6);
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      _Src.Data = local_48.AllocatorInstance.Data;
      lVar7 = (longlong)local_48.ArrayNum;
      local_58.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Keys.ArrayNum = local_48.ArrayNum;
      if (local_48.ArrayNum == 0) {
        local_58.Keys._8_8_ = local_48._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,local_48.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.ArrayNum,
                   &local_58.Keys.ArrayMax);
        memcpy(local_58.Keys.AllocatorInstance.Data,_Src.Data,lVar7 * 0xc);
      }
      if (param_7 != &local_58) {
        pFVar2 = (param_7->Keys).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (param_7->Keys).AllocatorInstance.Data = local_58.Keys.AllocatorInstance.Data;
        (param_7->Keys).ArrayNum = local_58.Keys.ArrayNum;
        local_58.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *piVar1 = local_58.Keys.ArrayMax;
        local_58.Keys.ArrayNum = 0;
        local_58.Keys.ArrayMax = 0;
      }
      if (local_58.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Keys.AllocatorInstance.Data);
      }
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
    }
  }
  if (param_5 != param_7) {
    iVar4 = (param_7->Keys).ArrayNum;
    piVar1 = &(param_5->Keys).ArrayMax;
    pFVar2 = (param_7->Keys).AllocatorInstance.Data;
    (param_5->Keys).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar4,*piVar1,(ForAnyElementType *)param_5,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((param_5->Keys).AllocatorInstance.Data,pFVar2,(longlong)iVar4 * 0xc);
      }
    }
  }
  return;
}

