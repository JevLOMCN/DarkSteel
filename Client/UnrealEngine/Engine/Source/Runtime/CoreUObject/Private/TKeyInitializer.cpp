// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// operator<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_TTuple<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 141e6b5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> * __thiscall
TKeyInitializer<FLinkerLoad_*_const_&>::
operator<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_TTuple<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FLinkerLoad_*_const_&> *this,
          TTuple<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(FLinkerLoad **)__return_storage_ptr__ = *this->Key;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>_>_TTuple<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>_> @ 141fb5560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>_>
* __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>_>_TTuple<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>_>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  uVar2 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>::
  TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>
            ((TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>
              *)&__return_storage_ptr__->field_0x8,
             (TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_> @ 142095bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<void_*_const_&>::
operator<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<void_*_const_&> *this,
          TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(void **)__return_storage_ptr__ = *this->Key;
  TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>
  ::
  TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>
            ((TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_> @ 142095ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&&>::
operator<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&&> *this,
          TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  int iVar2;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  FVar1 = this->Key->WeakPtr;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>
  ::
  TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>
            ((TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue> @ 142155960

TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue> * __thiscall
TKeyInitializer<UE::FPropertyPathNameTree::FKey_&&>::
operator<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>
          (TKeyInitializer<UE::FPropertyPathNameTree::FKey_&&> *this,
          TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>
          *__return_storage_ptr__)

{
  FKey *pFVar1;
  uint uVar2;
  
  pFVar1 = this->Key;
  uVar2 = (pFVar1->Name).Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (pFVar1->Name).ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  *(int *)&__return_storage_ptr__->field_0x8 = (pFVar1->Type).Index;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0xffffffff;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = 0xffffffffffffffff;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x78 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x80 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x88 = 0;
  return __return_storage_ptr__;
}

// operator<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>_>_TTuple<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>_> @ 14219bb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>_>
* __thiscall
TKeyInitializer<int_const_&>::
operator<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>_>_TTuple<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>_>
          (TKeyInitializer<int_const_&> *this,
          TTuple<int,TMap<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(int *)__return_storage_ptr__ = *this->Key;
  TSet<TTuple<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>_>,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>_>,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>_>,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>_>,TDefaultMapHashableKeyFuncs<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FReferenceChainSearch::TReferenceInfo<FGCObjectInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>_TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_> @ 1421f4720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>
* __thiscall
TKeyInitializer<UObjectBase_const_*_&&>::
operator<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>_TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>
          (TKeyInitializer<UObjectBase_const_*_&&> *this,
          TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(UObjectBase **)__return_storage_ptr__ = *this->Key;
  TSet<TTuple<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_> @ 14228f840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_> * __thiscall
TKeyInitializer<UClass_*_const_&>::
operator<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<UClass_*_const_&> *this,
          TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(UClass **)__return_storage_ptr__ = *this->Key;
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>::
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>
            ((TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

