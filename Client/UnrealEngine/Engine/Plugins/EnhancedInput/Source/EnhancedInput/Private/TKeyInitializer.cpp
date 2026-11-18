// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 4

// operator<TObjectPtr<UInputAction_const_>,FInjectedInput>_TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput> @ 14a6bc1b0

TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput> * __thiscall
TKeyInitializer<TObjectPtr<UInputAction_const_>_&&>::
operator<TObjectPtr<UInputAction_const_>,FInjectedInput>_TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput>
          (TKeyInitializer<TObjectPtr<UInputAction_const_>_&&> *this,
          TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput> *__return_storage_ptr__)

{
  UInputAction *pUVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pUVar1 = (this->Key->field0_0x0).DebugPtr;
  *(UInputAction **)__return_storage_ptr__ = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar3;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar4;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  return __return_storage_ptr__;
}

// operator<FHardwareDeviceIdentifier,TMap<FName,enum_EPlayerMappableKeySlot,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EPlayerMappableKeySlot,0>_>_>_TTuple<FHardwareDeviceIdentifier,TMap<FName,enum_EPlayerMappableKeySlot,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EPlayerMappableKeySlot,0>_>_> @ 14a6bc2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FHardwareDeviceIdentifier,TMap<FName,EPlayerMappableKeySlot,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,EPlayerMappableKeySlot,0>_>_>
* __thiscall
TKeyInitializer<FHardwareDeviceIdentifier_const_&>::
operator<FHardwareDeviceIdentifier,TMap<FName,enum_EPlayerMappableKeySlot,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EPlayerMappableKeySlot,0>_>_>_TTuple<FHardwareDeviceIdentifier,TMap<FName,enum_EPlayerMappableKeySlot,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EPlayerMappableKeySlot,0>_>_>
          (TKeyInitializer<FHardwareDeviceIdentifier_const_&> *this,
          TTuple<FHardwareDeviceIdentifier,TMap<FName,EPlayerMappableKeySlot,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,EPlayerMappableKeySlot,0>_>_>
          *__return_storage_ptr__)

{
  FHardwareDeviceIdentifier *pFVar1;
  int iVar2;
  uint uVar3;
  FNameEntryId FVar4;
  uint uVar5;
  undefined3 uVar6;
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
  pFVar1 = this->Key;
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
  uVar3 = (pFVar1->InputClassName).Number;
  FVar4.Value = (pFVar1->HardwareDeviceIdentifier).ComparisonIndex.Value;
  uVar5 = (pFVar1->HardwareDeviceIdentifier).Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (pFVar1->InputClassName).ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar3;
  *(uint *)&__return_storage_ptr__->field_0x8 = FVar4.Value;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar5;
  uVar6 = *(undefined3 *)&pFVar1->field_0x11;
  iVar2 = pFVar1->SupportedFeaturesMask;
  __return_storage_ptr__->field_0x10 = pFVar1->PrimaryDeviceType;
  *(undefined3 *)&__return_storage_ptr__->field_0x11 = uVar6;
  *(int *)&__return_storage_ptr__->field_0x14 = iVar2;
  TMap<FName,enum_EPlayerMappableKeySlot,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EPlayerMappableKeySlot,0>_>
  ::
  TMap<FName,enum_EPlayerMappableKeySlot,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EPlayerMappableKeySlot,0>_>
            (&__return_storage_ptr__->field_0x18,
             (TMap<FName,EPlayerMappableKeySlot,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,EPlayerMappableKeySlot,0>_>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData>_TTuple<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData> @ 14a6bc400

TTuple<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData> * __thiscall
TKeyInitializer<FKey_const_&>::
operator<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData>_TTuple<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData>
          (TKeyInitializer<FKey_const_&> *this,
          TTuple<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData> *__return_storage_ptr__)

{
  FKey *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pFVar1 = this->Key;
  uVar3 = (pFVar1->KeyName).Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (pFVar1->KeyName).ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar3;
  *(FKeyDetails **)&__return_storage_ptr__->field_0x8 = (pFVar1->KeyDetails).Object;
  pTVar2 = (pFVar1->KeyDetails).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar4;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = uVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = uVar6;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 3;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = uVar4;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = uVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = uVar6;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 3;
  return __return_storage_ptr__;
}

// operator<FName,FKeyMappingRow>_TTuple<FName,FKeyMappingRow> @ 14a6bc490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,FKeyMappingRow> * __thiscall
TKeyInitializer<FName_const_&>::operator<FName,FKeyMappingRow>_TTuple<FName,FKeyMappingRow>
          (TKeyInitializer<FName_const_&> *this,TTuple<FName,FKeyMappingRow> *__return_storage_ptr__
          )

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
  uVar2 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator>::
  TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator>
            ((TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator> *)
             local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FPlayerKeyMapping>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FPlayerKeyMapping>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

