// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// operator<int,FUserNavigationState>_TTuple<int,FUserNavigationState> @ 14269c8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<int,FUserNavigationState> * __thiscall
TKeyInitializer<int_&&>::operator<int,FUserNavigationState>_TTuple<int,FUserNavigationState>
          (TKeyInitializer<int_&&> *this,TTuple<int,FUserNavigationState> *__return_storage_ptr__)

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
  TSet<TTuple<FAnalogNavigationKey,FAnalogNavigationState>,TDefaultMapHashableKeyFuncs<FAnalogNavigationKey,FAnalogNavigationState,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FAnalogNavigationKey,FAnalogNavigationState>,TDefaultMapHashableKeyFuncs<FAnalogNavigationKey,FAnalogNavigationState,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FAnalogNavigationKey,FAnalogNavigationState>,TDefaultMapHashableKeyFuncs<FAnalogNavigationKey,FAnalogNavigationState,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<FAnalogNavigationKey,FAnalogNavigationState>,TDefaultMapHashableKeyFuncs<FAnalogNavigationKey,FAnalogNavigationState,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FAnalogNavigationKey,FAnalogNavigationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FAnalogNavigationKey,FAnalogNavigationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<FName,FInputBindingManager::FCommandFilterForContext>_TTuple<FName,FInputBindingManager::FCommandFilterForContext> @ 1426e8430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,FInputBindingManager::FCommandFilterForContext> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,FInputBindingManager::FCommandFilterForContext>_TTuple<FName,FInputBindingManager::FCommandFilterForContext>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,FInputBindingManager::FCommandFilterForContext> *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_e8 [32];
  undefined1 local_b8 [24];
  undefined8 uStack_a0;
  void *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ForElementType<FSetElementId> local_80;
  ulonglong local_70;
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
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_8c = 0x80;
  local_b8._0_8_ = (FScriptContainerElement *)0x0;
  local_80.InlineData[0] = '\0';
  local_80.InlineData[1] = '\0';
  local_80.InlineData[2] = '\0';
  local_80.InlineData[3] = '\0';
  local_80._padding_ = 0;
  local_70 = 0;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_20 = 0;
  local_b8._16_8_ = 0;
  uStack_a0 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_b8._8_8_ = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_80.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uVar2 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
              *)local_b8);
  TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x58,
             (TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FInputBindingManager::FCommandFilterOwners>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FInputBindingManager::FCommandFilterOwners>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  local_70 = local_70 & 0xffffffff00000000;
  if (local_80.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_80.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FInputBindingManager::FCommandFilterOwners>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FInputBindingManager::FCommandFilterOwners>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_b8,0,local_b8._8_4_);
  iVar1 = SUB84(local_b8._8_8_,4);
  local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
  }
  local_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),0);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FName,FInputBindingManager::FContextEntry>_TTuple<FName,FInputBindingManager::FContextEntry> @ 1426e8640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,FInputBindingManager::FContextEntry> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,FInputBindingManager::FContextEntry>_TTuple<FName,FInputBindingManager::FContextEntry>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,FInputBindingManager::FContextEntry> *__return_storage_ptr__)

{
  uint uVar1;
  FContextEntry *pFVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [72];
  undefined4 local_40;
  ForAnyElementType local_38;
  int local_30;
  FSharedReferencer<1> local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar2 = FInputBindingManager::FContextEntry::FContextEntry((FContextEntry *)local_88);
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  TSet<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FUICommandInfo,1>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FUICommandInfo,1>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FUICommandInfo,1>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FUICommandInfo,1>,0>,FDefaultSetAllocator>
              *)pFVar2);
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x58 =
       (pFVar2->ChordToCommandInfoMaps).AllocatorInstance.Data;
  (pFVar2->ChordToCommandInfoMaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x60 = (pFVar2->ChordToCommandInfoMaps).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x64 = (pFVar2->ChordToCommandInfoMaps).ArrayMax;
  (pFVar2->ChordToCommandInfoMaps).ArrayNum = 0;
  (pFVar2->ChordToCommandInfoMaps).ArrayMax = 0;
  *(FBindingContext **)&__return_storage_ptr__->field_0x68 = (pFVar2->BindingContext).Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x70 =
       (pFVar2->BindingContext).SharedReferenceCount.ReferenceController;
  (pFVar2->BindingContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (pFVar2->BindingContext).Object = (FBindingContext *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  DestructItems<TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,int>
            ((TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
              *)local_38.Data,local_30);
  if ((TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
       *)local_38.Data !=
      (TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
       *)0x0) {
    FMemory::Free(local_38.Data);
  }
  local_40 = 0;
  if ((void *)local_88._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return __return_storage_ptr__;
}

