// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4eb8b0

UScriptStruct * __cdecl FRigUnit_PoseGetItems::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetItems.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetItems.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PoseGetItems,(UObject *)pUVar1,
                         L"RigUnit_PoseGetItems");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetItems.OuterSingleton,&local_18
              );
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetItems.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4eb970

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_PoseGetItems::GetExecuteContextStruct(FRigUnit_PoseGetItems *this)

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

// Execute @ 14a4ebbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_PoseGetItems::Execute(FRigUnit_PoseGetItems *this)

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
  FRigUnit_PoseGetItemsItemArray::StaticExecute
            ((FControlRigExecuteContext *)local_268,&this->Pose,this->ElementType,
             &(this->Items).Keys);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4ebd80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_PoseGetItems::GetUpgradeInfo
          (FRigUnit_PoseGetItems *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *pFVar2;
  undefined1 auStack_d8 [32];
  TArrayView<FRigVMCompiledInFunction_const_,int> local_b8;
  undefined1 local_a8 [104];
  void *local_40;
  undefined4 local_38;
  ERigElementType local_30;
  ForAnyElementType local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  FRigUnit_PoseGetItemsItemArray::FRigUnit_PoseGetItemsItemArray
            ((FRigUnit_PoseGetItemsItemArray *)local_a8);
  FRigPose::operator=((FRigPose *)(local_a8 + 8),&this->Pose);
  local_30 = this->ElementType;
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetItems.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetItems.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PoseGetItems,(UObject *)pUVar1,
                         L"RigUnit_PoseGetItems");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_b8.ArrayNum = 1;
    local_b8.DataPtr = Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetItems.OuterSingleton,
               &local_b8);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetItems.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetItemsItemArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetItemsItemArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray,(UObject *)pUVar1,
                         L"RigUnit_PoseGetItemsItemArray");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_b8.ArrayNum = 1;
    local_b8.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetItemsItemArray.
                      OuterSingleton,&local_b8);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_PoseGetItemsItemArray.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  local_b8.DataPtr = (FRigVMCompiledInFunction *)0x0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,(FRigVMStruct *)local_a8);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  local_38 = 0;
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_a8 + 0x28));
  if ((FScriptContainerElement *)local_a8._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._8_8_);
  }
  return __return_storage_ptr__;
}

// FRigUnit_PoseGetItems @ 14a513c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_PoseGetItems * __thiscall
FRigUnit_PoseGetItems::FRigUnit_PoseGetItems(FRigUnit_PoseGetItems *this)

{
  FRigPose *pFVar1;
  TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
  *pTVar2;
  FRigElementKeyCollection *pFVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStackY_d8 [32];
  undefined8 local_a8 [2];
  ForAnyElementType local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  (this->Pose).HierarchyTopologyVersion = -1;
  (this->Pose).PoseHash = -1;
  (this->Pose).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = &this->Pose;
  pTVar2 = &(this->Pose).KeyToIndex;
  (this->Pose).Elements.ArrayNum = 0;
  (this->Pose).Elements.ArrayMax = 0;
  *(undefined8 *)pTVar2 = 0;
  pFVar3 = &this->Items;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x8 = 0;
  this->_padding_ = (longlong)&___7FRigUnit_PoseGetItems__6B_;
  local_88._0_4_ = -1;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x20 = 0;
  (this->Pose).CachedPoseHash = -1;
  local_90._0_4_ = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x34 = 0;
  local_88._4_4_ = -1;
  *(undefined8 *)&(this->Pose).KeyToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->Pose).KeyToIndex.field_0x48 = 0;
  (pFVar3->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Items).Keys.ArrayNum = 0;
  (this->Items).Keys.ArrayMax = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_88 = 0xffffffffffffffff;
  local_80 = -1;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  iVar8 = local_88._4_4_;
  iVar7 = (int)local_88;
  if (pFVar1 != (FRigPose *)&local_98) {
    pFVar4 = (pFVar1->Elements).AllocatorInstance.Data;
    local_90._4_4_ = (int)local_90;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Elements).AllocatorInstance.Data = local_98.Data;
    (this->Pose).Elements.ArrayNum = (int)local_90;
    (this->Pose).Elements.ArrayMax = local_90._4_4_;
    iVar8 = local_88._4_4_;
    iVar7 = (int)local_88;
  }
  local_90 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  (this->Pose).HierarchyTopologyVersion = iVar7;
  (this->Pose).PoseHash = iVar8;
  (this->Pose).CachedPoseHash = local_80;
  if (pTVar2 != (TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                 *)&local_78) {
    if (*(void **)pTVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar2);
    }
    *(FScriptContainerElement **)pTVar2 = local_78.Data;
    *(undefined4 *)&(this->Pose).KeyToIndex.field_0x8 = (undefined4)local_70;
    *(undefined4 *)&(this->Pose).KeyToIndex.field_0xc = local_70._4_4_;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = 0;
    if ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pose).KeyToIndex.field_0x10 != &local_68) {
      if (local_68.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
        (this->Pose).KeyToIndex.field_0x10 = local_68.AllocatorInstance.InlineData[0];
        (this->Pose).KeyToIndex.field_0x11 = local_68.AllocatorInstance.InlineData[1];
        (this->Pose).KeyToIndex.field_0x12 = local_68.AllocatorInstance.InlineData[2];
        (this->Pose).KeyToIndex.field_0x13 = local_68.AllocatorInstance.InlineData[3];
        (this->Pose).KeyToIndex.field_0x14 = local_68.AllocatorInstance.InlineData[4];
        (this->Pose).KeyToIndex.field_0x15 = local_68.AllocatorInstance.InlineData[5];
        (this->Pose).KeyToIndex.field_0x16 = local_68.AllocatorInstance.InlineData[6];
        (this->Pose).KeyToIndex.field_0x17 = local_68.AllocatorInstance.InlineData[7];
        (this->Pose).KeyToIndex.field_0x18 = local_68.AllocatorInstance.InlineData[8];
        (this->Pose).KeyToIndex.field_0x19 = local_68.AllocatorInstance.InlineData[9];
        (this->Pose).KeyToIndex.field_0x1a = local_68.AllocatorInstance.InlineData[10];
        (this->Pose).KeyToIndex.field_0x1b = local_68.AllocatorInstance.InlineData[0xb];
        (this->Pose).KeyToIndex.field_0x1c = local_68.AllocatorInstance.InlineData[0xc];
        (this->Pose).KeyToIndex.field_0x1d = local_68.AllocatorInstance.InlineData[0xd];
        (this->Pose).KeyToIndex.field_0x1e = local_68.AllocatorInstance.InlineData[0xe];
        (this->Pose).KeyToIndex.field_0x1f = local_68.AllocatorInstance.InlineData[0xf];
      }
      pvVar5 = *(void **)&(this->Pose).KeyToIndex.field_0x20;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      *(ForElementType<unsigned_int> *)&(this->Pose).KeyToIndex.field_0x20 =
           local_68.AllocatorInstance.SecondaryData;
      *(int *)&(this->Pose).KeyToIndex.field_0x28 = local_68.NumBits;
      *(int *)&(this->Pose).KeyToIndex.field_0x2c = local_68.MaxBits;
      local_68.NumBits = 0;
      local_68.MaxBits = 0;
      local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    }
    *(undefined4 *)&(this->Pose).KeyToIndex.field_0x30 = local_48;
    *(undefined4 *)&(this->Pose).KeyToIndex.field_0x34 = local_44;
    local_44 = 0;
    local_48 = 0xffffffff;
    if (local_38 == (void *)0x0) {
      *(undefined4 *)&(this->Pose).KeyToIndex.field_0x38 = local_40;
    }
    pvVar5 = *(void **)&(this->Pose).KeyToIndex.field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    *(void **)&(this->Pose).KeyToIndex.field_0x40 = local_38;
    local_38 = (void *)0x0;
    *(undefined4 *)&(this->Pose).KeyToIndex.field_0x48 = local_30;
  }
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar6 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  iVar8 = local_68.MaxBits;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68._24_8_ = (ulonglong)(uint)local_68.MaxBits << 0x20;
  if (0x80 < (uint)iVar8) {
    local_68.NumBits = 0;
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  this->ElementType = All;
  if (pFVar3 != (FRigElementKeyCollection *)local_a8) {
    pFVar4 = (pFVar3->Keys).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar3->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Items).Keys.ArrayNum = 0;
    (this->Items).Keys.ArrayMax = 0;
  }
  return this;
}

// Execute @ 14a52b770

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_PoseGetItems::Execute(FRigUnit_PoseGetItems *this,FControlRigExecuteContext *param_1)

{
  FRigUnit_PoseGetItemsItemArray::StaticExecute
            (param_1,&this->Pose,this->ElementType,&(this->Items).Keys);
  return;
}

// RigVMExecute @ 14a54d2f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_PoseGetItems::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigElementType EVar1;
  int iVar2;
  FRigVMMemoryHandle *pFVar3;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FRigPose *pFVar7;
  ERigElementType *pEVar8;
  FControlRigExecuteContext *pFVar9;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
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
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigPose *)pFVar3->Ptr;
  }
  else {
    pFVar7 = (FRigPose *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  if (iVar2 < 2) {
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
  pFVar3 = param_2->DataPtr;
  if (pFVar3[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar8 = pFVar3[1].Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
  EVar1 = *pEVar8;
  if (iVar2 < 3) {
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
  pTVar4 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)param_2->DataPtr[2].Ptr;
  pFVar9 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  FRigUnit_PoseGetItemsItemArray::StaticExecute(pFVar9,pFVar7,EVar1,pTVar4);
  return;
}

// StaticExecute @ 14a588dd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_PoseGetItems::StaticExecute
          (FControlRigExecuteContext *param_1,FRigPose *param_2,ERigElementType param_3,
          FRigElementKeyCollection *param_4)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackX_10 [8];
  
  piVar1 = &(param_4->Keys).ArrayMax;
  (param_4->Keys).ArrayNum = 0;
  if ((param_4->Keys).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)param_4,0,piVar1);
  }
  iVar2 = (param_2->Elements).ArrayNum;
  pFVar7 = (param_2->Elements).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar2 * 0x110;
  while( true ) {
    if ((param_2->Elements).ArrayNum != iVar2) {
      auStackX_10[0] = 0;
      `TCheckedPointerIterator<FRigPoseElement_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_10);
    }
    if (pFVar7 == pFVar8) break;
    if (((byte)*pFVar7 & param_3) != None) {
      pFVar3 = (param_4->Keys).AllocatorInstance.Data;
      if ((pFVar3 <= pFVar7) && (pFVar7 < pFVar3 + (longlong)*piVar1 * 0xc)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = (param_4->Keys).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)param_4,piVar1);
      }
      (param_4->Keys).ArrayNum = iVar6 + 1;
      pFVar3 = (param_4->Keys).AllocatorInstance.Data;
      *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0xc) = *(undefined8 *)pFVar7;
      *(undefined4 *)(pFVar3 + (longlong)iVar6 * 0xc + 8) = *(undefined4 *)(pFVar7 + 8);
    }
    pFVar7 = pFVar7 + 0x110;
  }
  return;
}

