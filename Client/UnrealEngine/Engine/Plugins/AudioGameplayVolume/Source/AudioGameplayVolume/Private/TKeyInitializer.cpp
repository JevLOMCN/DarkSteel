// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 2

// operator<unsigned_int,FAudioGameplayActiveSoundInfo>_TTuple<unsigned_int,FAudioGameplayActiveSoundInfo> @ 14d999420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<unsigned_int,FAudioGameplayActiveSoundInfo> * __thiscall
TKeyInitializer<unsigned_int_&&>::
operator<unsigned_int,FAudioGameplayActiveSoundInfo>_TTuple<unsigned_int,FAudioGameplayActiveSoundInfo>
          (TKeyInitializer<unsigned_int_&&> *this,
          TTuple<unsigned_int,FAudioGameplayActiveSoundInfo> *__return_storage_ptr__)

{
  undefined1 auStack_70 [32];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  void *local_30;
  undefined8 uStack_28;
  
  auStack_70[0] = false;
  auStack_70._1_3_ = 0;
  auStack_70._4_4_ = 0.0;
  auStack_70._8_4_ = 0.0;
  auStack_70._12_4_ = 0.0;
  auStack_70._16_4_ = 0.0;
  auStack_70._20_4_ = 0.0;
  auStack_70._24_4_ = 0.0;
  auStack_70._28_4_ = 0.0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = (void *)0x0;
  uStack_28 = 0;
  FInteriorSettings::FInteriorSettings((FInteriorSettings *)auStack_70);
  local_30 = (void *)0x0;
  local_40 = ___xmm_469c4000469c40003f8000003f800000;
  uStack_38 = _UNK_152c36868;
  uStack_28 = 0;
  uStack_48 = 0;
  *(uint *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x70 = 0x3f800000;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x74 = 0x3f800000;
  *(undefined4 *)&__return_storage_ptr__->field_0x78 = 0x469c4000;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x7c = 0x469c4000;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = auStack_70._0_8_;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = auStack_70._8_8_;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = auStack_70._16_8_;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = auStack_70._24_8_;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = local_50;
  *(undefined8 *)&__return_storage_ptr__->field_0x80 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x88 = 0;
  DestructItems<TSharedPtr<FProxyVolumeMutator,1>,int>((TSharedPtr<FProxyVolumeMutator,1> *)0x0,0);
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  return __return_storage_ptr__;
}

// operator<unsigned_int,FAudioGameplayVolumeProxyInfo>_TTuple<unsigned_int,FAudioGameplayVolumeProxyInfo> @ 14d999550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<unsigned_int,FAudioGameplayVolumeProxyInfo> * __thiscall
TKeyInitializer<unsigned_int_const_&>::
operator<unsigned_int,FAudioGameplayVolumeProxyInfo>_TTuple<unsigned_int,FAudioGameplayVolumeProxyInfo>
          (TKeyInitializer<unsigned_int_const_&> *this,
          TTuple<unsigned_int,FAudioGameplayVolumeProxyInfo> *__return_storage_ptr__)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [24];
  undefined8 uStack_b0;
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  ForElementType<FSetElementId> local_90;
  ulonglong local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_40;
  ulonglong local_30;
  ForAnyElementType local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_9c = 0x80;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_90.InlineData[0] = '\0';
  local_90.InlineData[1] = '\0';
  local_90.InlineData[2] = '\0';
  local_90.InlineData[3] = '\0';
  local_90._padding_ = 0;
  local_80 = 0;
  local_40.InlineData[0] = '\0';
  local_40.InlineData[1] = '\0';
  local_40.InlineData[2] = '\0';
  local_40.InlineData[3] = '\0';
  local_40._padding_ = 0;
  local_30 = 0;
  local_c8._16_8_ = 0;
  uStack_b0 = 0;
  local_68.AllocatorInstance.InlineData[0] = '\0';
  local_68.AllocatorInstance.InlineData[1] = '\0';
  local_68.AllocatorInstance.InlineData[2] = '\0';
  local_68.AllocatorInstance.InlineData[3] = '\0';
  local_68.AllocatorInstance.InlineData[4] = '\0';
  local_68.AllocatorInstance.InlineData[5] = '\0';
  local_68.AllocatorInstance.InlineData[6] = '\0';
  local_68.AllocatorInstance.InlineData[7] = '\0';
  local_68.AllocatorInstance.InlineData[8] = '\0';
  local_68.AllocatorInstance.InlineData[9] = '\0';
  local_68.AllocatorInstance.InlineData[10] = '\0';
  local_68.AllocatorInstance.InlineData[0xb] = '\0';
  local_68.AllocatorInstance.InlineData[0xc] = '\0';
  local_68.AllocatorInstance.InlineData[0xd] = '\0';
  local_68.AllocatorInstance.InlineData[0xe] = '\0';
  local_68.AllocatorInstance.InlineData[0xf] = '\0';
  local_c8._8_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_90.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_40.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  *(uint *)__return_storage_ptr__ = *this->Key;
  FAudioGameplayVolumeProxyInfo::FAudioGameplayVolumeProxyInfo
            ((FAudioGameplayVolumeProxyInfo *)&__return_storage_ptr__->field_0x8,
             (FAudioGameplayVolumeProxyInfo *)local_c8);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  local_30 = local_30 & 0xffffffff00000000;
  if (local_40.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_40.SecondaryData);
  }
  uVar2 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  local_80 = local_80 & 0xffffffff00000000;
  if (local_90.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_90.SecondaryData);
  }
  iVar1 = SUB84(local_c8._8_8_,4);
  local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_a0 = 0;
  if (0x80 < local_9c) {
    local_9c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  return __return_storage_ptr__;
}

