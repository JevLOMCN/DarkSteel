// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4dc940

UScriptStruct * __cdecl FRigUnit_HierarchyGetParents::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParents.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParents.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents,(UObject *)pUVar1,
                         L"RigUnit_HierarchyGetParents");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParents.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParents.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4dc9c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_HierarchyGetParents::GetExecuteContextStruct(FRigUnit_HierarchyGetParents *this)

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

// Execute @ 14a4dcaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_HierarchyGetParents::Execute(FRigUnit_HierarchyGetParents *this)

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
  FRigUnit_HierarchyGetParentsItemArray::StaticExecute
            ((FControlRigExecuteContext *)local_268,&this->Child,this->bIncludeChild,this->bReverse,
             true,&(this->Parents).Keys,&this->CachedChild,&this->CachedParents);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4dcc30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_HierarchyGetParents::GetUpgradeInfo
          (FRigUnit_HierarchyGetParents *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UPackage *pUVar2;
  FRigVMRegistry_RWLock *pFVar3;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  FRigVMStruct local_78;
  undefined8 local_70;
  uint local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  ForAnyElementType local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  void *local_30;
  undefined8 local_28;
  
  local_78 = (FRigVMStruct)&___7FRigUnit_HierarchyGetParentsItemArray__6B_;
  local_98.DataPtr._0_4_ = (uint)local_98.DataPtr & 0xffffff00;
  local_98._12_2_ = 0xffff;
  local_68 = (this->Child).Name.Number;
  local_64 = this->bIncludeChild;
  local_63 = this->bReverse;
  local_98.DataPtr._4_4_ = 0;
  local_98.ArrayNum = 0;
  local_50 = (ulonglong)(uint)local_98.DataPtr;
  uStack_48 = CONCAT26(local_98._14_2_,0xffff00000000);
  local_88 = 0xffffffff;
  uStack_80 = 0;
  local_40 = CONCAT44(uStack_84,0xffffffff);
  local_60.Data = (FScriptContainerElement *)0x0;
  local_70._0_1_ = (this->Child).Type;
  local_70._1_3_ = *(undefined3 *)&(this->Child).field_0x1;
  local_70._4_4_ = (this->Child).Name.ComparisonIndex;
  local_58 = 0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_62 = 1;
  uStack_38 = 0;
  if ((FRigElementKeyCollection *)&local_60 != &this->Parents) {
    _Src = (this->Parents).Keys.AllocatorInstance.Data;
    uVar1 = (this->Parents).Keys.ArrayNum;
    local_58 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar1,0,&local_60,uVar1,(int *)((longlong)&local_58 + 4));
      memcpy(local_60.Data,_Src,(longlong)(int)uVar1 * 0xc);
    }
  }
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParents.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParents.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents,(UObject *)pUVar2,
                         L"RigUnit_HierarchyGetParents");
    pFVar3 = FRigVMRegistry_RWLock::Get();
    local_98.DataPtr._0_4_ = 0x5218a388;
    local_98.DataPtr._4_4_ = 1;
    local_98.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar3,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParents.OuterSingleton,
               &local_98);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParents.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray,
                         (UObject *)pUVar2,L"RigUnit_HierarchyGetParentsItemArray");
    pFVar3 = FRigVMRegistry_RWLock::Get();
    local_98.DataPtr._0_4_ = 0x5218a4a8;
    local_98.DataPtr._4_4_ = 1;
    local_98.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar3,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray.
                      OuterSingleton,&local_98);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_78);
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  return __return_storage_ptr__;
}

// FRigUnit_HierarchyGetParents @ 14a5117e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_HierarchyGetParents * __thiscall
FRigUnit_HierarchyGetParents::FRigUnit_HierarchyGetParents(FRigUnit_HierarchyGetParents *this)

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
  pFVar1 = &this->Parents;
  local_28 = local_28 & 0xffffff00;
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyGetParents__6B_;
  (pFVar1->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2 = &this->CachedParents;
  (this->Parents).Keys.ArrayNum = 0;
  piVar3 = &(this->Parents).Keys.ArrayMax;
  *piVar3 = 0;
  (pFVar2->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedParents).Keys.ArrayNum = 0;
  (this->CachedParents).Keys.ArrayMax = 0;
  (this->Child).Type = (char)uVar6;
  *(int3 *)&(this->Child).field_0x1 = (int3)(uVar6 >> 8);
  (this->Child).Name.ComparisonIndex = (FNameEntryId)(int)(uVar6 >> 0x20);
  uStack_1c = 0xffff;
  uStack_24 = 0;
  uStack_20 = 0;
  local_18 = 0xffffffff;
  uStack_10 = 0;
  (this->Child).Name.Number = 0;
  uVar6 = (ulonglong)local_28;
  (this->CachedChild).Key.Type = (char)uVar6;
  *(int3 *)&(this->CachedChild).Key.field_0x1 = (int3)(uVar6 >> 8);
  (this->CachedChild).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar6 >> 0x20);
  *(ulonglong *)&(this->CachedChild).Key.Name.Number = CONCAT26(uStack_1a,0xffff00000000);
  *(ulonglong *)&(this->CachedChild).ContainerVersion = CONCAT44(uStack_14,0xffffffff);
  (this->CachedChild).Element = (FRigBaseElement *)0x0;
  if (pFVar2 != (FRigElementKeyCollection *)local_38) {
    (pFVar2->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CachedParents).Keys.ArrayNum = 0;
    (this->CachedParents).Keys.ArrayMax = 0;
  }
  if (pFVar1 != pFVar2) {
    iVar4 = *piVar3;
    iVar5 = (this->CachedParents).Keys.ArrayNum;
    _Src = (pFVar2->Keys).AllocatorInstance.Data;
    (this->Parents).Keys.ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar4 == 0)) {
      (this->Parents).Keys.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar5,iVar4,(ForAnyElementType *)pFVar1,iVar5,piVar3);
      if (iVar5 != 0) {
        memcpy((pFVar1->Keys).AllocatorInstance.Data,_Src,(longlong)iVar5 * 0xc);
      }
    }
  }
  this->bIncludeChild = false;
  this->bReverse = false;
  return this;
}

// Execute @ 14a5299d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyGetParents::Execute
          (FRigUnit_HierarchyGetParents *this,FControlRigExecuteContext *param_1)

{
  FRigUnit_HierarchyGetParentsItemArray::StaticExecute
            (param_1,&this->Child,this->bIncludeChild,this->bReverse,true,&(this->Parents).Keys,
             &this->CachedChild,&this->CachedParents);
  return;
}

// RigVMExecute @ 14a548030

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyGetParents::RigVMExecute
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
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar8;
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
  pTVar8 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)
           FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar9->Offset + pFVar9->Index);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FRigElementKeyCollection *)
            FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar9->Offset + pFVar9->Index);
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  FRigUnit_HierarchyGetParentsItemArray::StaticExecute
            (pFVar12,pFVar5,bVar3,bVar4,true,pTVar8,pFVar10,pFVar11);
  return;
}

// StaticExecute @ 14a580c00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyGetParents::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool param_3,bool param_4,
          FRigElementKeyCollection *param_5,FCachedRigElement *param_6,
          FRigElementKeyCollection *param_7)

{
  FRigUnit_HierarchyGetParentsItemArray::StaticExecute
            (param_1,param_2,param_3,param_4,true,&param_5->Keys,param_6,param_7);
  return;
}

