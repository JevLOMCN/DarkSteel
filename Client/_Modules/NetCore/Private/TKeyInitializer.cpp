// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 3

// operator<unsigned_int,FNetTraceInternal::FGameInstance>_TTuple<unsigned_int,FNetTraceInternal::FGameInstance> @ 1441c8c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<unsigned_int,FNetTraceInternal::FGameInstance> * __thiscall
TKeyInitializer<unsigned_int_const_&>::
operator<unsigned_int,FNetTraceInternal::FGameInstance>_TTuple<unsigned_int,FNetTraceInternal::FGameInstance>
          (TKeyInitializer<unsigned_int_const_&> *this,
          TTuple<unsigned_int,FNetTraceInternal::FGameInstance> *__return_storage_ptr__)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [24];
  undefined8 uStack_c0;
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  void *local_98;
  ulonglong local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  void *local_48;
  ulonglong local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_ac = 0x80;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  local_90 = 0;
  local_50 = 0;
  local_40 = 0;
  local_28._0_1_ = false;
  local_28._1_7_ = 0;
  local_d8._16_8_ = 0;
  uStack_c0 = 0;
  local_78.AllocatorInstance.InlineData[0] = '\0';
  local_78.AllocatorInstance.InlineData[1] = '\0';
  local_78.AllocatorInstance.InlineData[2] = '\0';
  local_78.AllocatorInstance.InlineData[3] = '\0';
  local_78.AllocatorInstance.InlineData[4] = '\0';
  local_78.AllocatorInstance.InlineData[5] = '\0';
  local_78.AllocatorInstance.InlineData[6] = '\0';
  local_78.AllocatorInstance.InlineData[7] = '\0';
  local_78.AllocatorInstance.InlineData[8] = '\0';
  local_78.AllocatorInstance.InlineData[9] = '\0';
  local_78.AllocatorInstance.InlineData[10] = '\0';
  local_78.AllocatorInstance.InlineData[0xb] = '\0';
  local_78.AllocatorInstance.InlineData[0xc] = '\0';
  local_78.AllocatorInstance.InlineData[0xd] = '\0';
  local_78.AllocatorInstance.InlineData[0xe] = '\0';
  local_78.AllocatorInstance.InlineData[0xf] = '\0';
  local_d8._8_8_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (void *)0x0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30._0_4_ = 0;
  local_30._4_4_ = 0;
  *(uint *)__return_storage_ptr__ = *this->Key;
  FNetTraceInternal::FGameInstance::FGameInstance
            ((FGameInstance *)&__return_storage_ptr__->field_0x8,(FGameInstance *)local_d8);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  local_40 = local_40 & 0xffffffff00000000;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  uVar2 = local_80 >> 0x20;
  local_80 = local_80 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&local_88,0,(int *)((longlong)&local_80 + 4));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_78.NumBits = 0;
  if (0x80 < (uint)local_78.MaxBits) {
    local_78.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
  }
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  local_90 = local_90 & 0xffffffff00000000;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FNetTraceInternal::FConnection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FNetTraceInternal::FConnection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_d8,0,local_d8._8_4_);
  iVar1 = SUB84(local_d8._8_8_,4);
  local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
  }
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_b0 = 0;
  if (0x80 < local_ac) {
    local_ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<unsigned_int,FNetTraceInternal::FObjectTraceCounter>_TTuple<unsigned_int,FNetTraceInternal::FObjectTraceCounter> @ 1441c8e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<unsigned_int,FNetTraceInternal::FObjectTraceCounter> * __thiscall
TKeyInitializer<unsigned_int_const_&>::
operator<unsigned_int,FNetTraceInternal::FObjectTraceCounter>_TTuple<unsigned_int,FNetTraceInternal::FObjectTraceCounter>
          (TKeyInitializer<unsigned_int_const_&> *this,
          TTuple<unsigned_int,FNetTraceInternal::FObjectTraceCounter> *__return_storage_ptr__)

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
  *(uint *)__return_storage_ptr__ = *this->Key;
  FNetTraceInternal::FObjectTraceCounter::FObjectTraceCounter
            ((FObjectTraceCounter *)&__return_storage_ptr__->field_0x8,
             (FObjectTraceCounter *)local_68);
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

// operator<unsigned_int,FPacketAuditData>_TTuple<unsigned_int,FPacketAuditData> @ 1441c8f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<unsigned_int,FPacketAuditData> * __thiscall
TKeyInitializer<unsigned_int_const_&>::
operator<unsigned_int,FPacketAuditData>_TTuple<unsigned_int,FPacketAuditData>
          (TKeyInitializer<unsigned_int_const_&> *this,
          TTuple<unsigned_int,FPacketAuditData> *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_a8 [32];
  undefined1 auStack_70 [24];
  undefined8 local_58;
  void *pvStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ForElementType<FSetElementId> local_38;
  ulonglong local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_38.InlineData[0] = '\0';
  local_38.InlineData[1] = '\0';
  local_38.InlineData[2] = '\0';
  local_38.InlineData[3] = '\0';
  local_38._padding_ = 0;
  local_48 = 0x8000000000;
  auStack_70._0_8_ = (FScriptContainerElement *)0x0;
  auStack_70._8_8_ = 0;
  auStack_70._16_8_ = 0;
  local_58 = 0;
  pvStack_50 = (void *)0x0;
  uStack_40 = 0xffffffff;
  local_38.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_28 = 0;
  *(uint *)__return_storage_ptr__ = *this->Key;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  TSet<TTuple<FString,FPacketStageData>,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,FPacketStageData>,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,FPacketStageData>,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x10,
             (TSet<TTuple<FString,FPacketStageData>,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>,FDefaultSetAllocator>
              *)auStack_70);
  local_28 = local_28 & 0xffffffff00000000;
  if (local_38.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FPacketStageData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FPacketStageData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)auStack_70,0,auStack_70._8_4_);
  iVar1 = SUB84(auStack_70._8_8_,4);
  auStack_70._8_8_ = auStack_70._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)auStack_70,0,(int *)(auStack_70 + 0xc));
  }
  uVar2 = local_48._4_4_;
  uStack_40 = 0xffffffff;
  local_48 = (ulonglong)local_48._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_48 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_70 + 0x10),0);
  }
  if (pvStack_50 != (void *)0x0) {
    FMemory::Free(pvStack_50);
  }
  if ((FScriptContainerElement *)auStack_70._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_70._0_8_);
  }
  return __return_storage_ptr__;
}

