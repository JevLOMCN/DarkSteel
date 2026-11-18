// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 4

// TMap<enum_EAudioSpectrumType,enum_Audio::ESpectrumType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioSpectrumType,enum_Audio::ESpectrumType,0>_> @ 14d81a1c0

TMap<EAudioSpectrumType,Audio::ESpectrumType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAudioSpectrumType,Audio::ESpectrumType,0>_>
* __thiscall
TMap<enum_EAudioSpectrumType,enum_Audio::ESpectrumType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioSpectrumType,enum_Audio::ESpectrumType,0>_>
::
TMap<enum_EAudioSpectrumType,enum_Audio::ESpectrumType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioSpectrumType,enum_Audio::ESpectrumType,0>_>
          (void *this,
          initializer_list<TPairInitializer<EAudioSpectrumType_const_&,Audio::ESpectrumType_const_&>_>
          *param_1)

{
  TPairInitializer<EAudioSpectrumType_const_&,Audio::ESpectrumType_const_&> *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  TPairInitializer<EAudioSpectrumType_const_&,Audio::ESpectrumType_const_&> *pTVar9;
  ulonglong uVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  uint uVar12;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar1 = param_1->_Last;
  uVar5 = 0;
  pTVar9 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  uVar12 = (uint)((longlong)pTVar1 - (longlong)pTVar9 >> 4);
  if (uVar12 == 0) goto joined_r0x00014d81a431;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(this,uVar12);
  if (uVar12 < 4) {
    uVar12 = 1;
  }
  else {
    uVar6 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((*(int *)((longlong)this + 0x48) != 0) && ((int)uVar12 <= *(int *)((longlong)this + 0x48)))
  goto joined_r0x00014d81a431;
  *(uint *)((longlong)this + 0x48) = uVar12;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x40),0,0,4);
  }
  if (uVar12 != 0) {
    uVar3 = uVar12;
    if (uVar12 < 2) {
      if (*(longlong *)((longlong)this + 0x40) != 0) {
        uVar3 = 0;
        goto LAB_14d81a2a5;
      }
    }
    else {
LAB_14d81a2a5:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)((longlong)this + 0x40),0,uVar3,4);
    }
    if (0 < (int)uVar12) {
      uVar10 = (ulonglong)uVar12;
      uVar6 = uVar5;
      do {
        lVar4 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar4 = *(longlong *)((longlong)this + 0x40);
        }
        uVar2 = uVar6 & (longlong)(int)uVar12 - 1U;
        uVar6 = uVar6 + 1;
        *(undefined4 *)(lVar4 + uVar2 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  if (*(int *)((longlong)this + 0x48) != 0) {
    uVar12 = *(uint *)((longlong)this + 0x28);
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_78 = (EAudioSpectrumType *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar12 != 0) {
      pTVar11 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar11 = pTStack_70;
      }
      uVar3 = *(uint *)(pTVar11->AllocatorInstance).InlineData;
      uVar6 = uVar5;
      while (uVar3 == 0) {
        iVar8 = (int)uVar5;
        uStack_60 = (int)uVar6 + 0x20;
        uVar6 = (ulonglong)uStack_60;
        uVar3 = iVar8 + 1;
        uVar5 = (ulonglong)local_78 >> 0x20;
        local_78 = (EAudioSpectrumType *)CONCAT44((int)uVar5,uVar3);
        uVar5 = (ulonglong)uVar3;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar3)
        goto LAB_14d81a39b;
        uVar3 = *(uint *)((pTVar11->AllocatorInstance).InlineData + (longlong)iVar8 * 4 + 4);
      }
      local_78 = (EAudioSpectrumType *)CONCAT44(-uVar3 & uVar3,SUB84(local_78,0));
      uVar5 = (ulonglong)(-uVar3 & uVar3) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar5 = (ulonglong)uStack_64;
      if ((int)uVar12 < (int)uStack_64) {
LAB_14d81a39b:
        uVar5 = (ulonglong)uVar12;
        uStack_64 = uVar12;
      }
    }
    local_68 = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_50._padding_ = (longlong)local_78;
    local_58 = this;
    local_50.Array = pTStack_70;
    if ((int)uVar5 < (int)uVar12) {
      do {
        iVar8 = (int)uVar5;
        lVar4 = *local_58 + (longlong)iVar8 * 0xc;
        uVar12 = *(int *)((longlong)this + 0x48) - 1U &
                 (uint)*(byte *)(*local_58 + (longlong)iVar8 * 0xc);
        *(uint *)(lVar4 + 8) = uVar12;
        lVar7 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar7 = *(longlong *)((longlong)this + 0x40);
        }
        uVar5 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (ulonglong)uVar12;
        *(undefined4 *)(lVar4 + 4) = *(undefined4 *)(lVar7 + uVar5 * 4);
        *(int *)(lVar7 + uVar5 * 4) = iVar8;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar5 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x00014d81a431:
  for (; pTVar9 != pTVar1; pTVar9 = pTVar9 + 1) {
    local_78 = pTVar9->Key;
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)pTVar9->Value;
    TSet<TTuple<enum_EAudioSpectrumType,enum_Audio::ESpectrumType>,TDefaultMapHashableKeyFuncs<enum_EAudioSpectrumType,enum_Audio::ESpectrumType,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EAudioSpectrumType_const_&,enum_Audio::ESpectrumType_const_&>_>
              (this,(TPairInitializer<EAudioSpectrumType_const_&,Audio::ESpectrumType_const_&> *)
                    &stack0x00000008,(bool *)&local_78);
  }
  return this;
}

// TMap<enum_EConstantQFFTSizeEnum,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConstantQFFTSizeEnum,int,0>_> @ 14d81a4a0

TMap<EConstantQFFTSizeEnum,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EConstantQFFTSizeEnum,int,0>_>
* __thiscall
TMap<enum_EConstantQFFTSizeEnum,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConstantQFFTSizeEnum,int,0>_>
::
TMap<enum_EConstantQFFTSizeEnum,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConstantQFFTSizeEnum,int,0>_>
          (void *this,
          initializer_list<TPairInitializer<EConstantQFFTSizeEnum_const_&,int_const_&>_> *param_1)

{
  TPairInitializer<EConstantQFFTSizeEnum_const_&,int_const_&> *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  TPairInitializer<EConstantQFFTSizeEnum_const_&,int_const_&> *pTVar8;
  ulonglong uVar9;
  byte *pbVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  uint uVar12;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar1 = param_1->_Last;
  uVar7 = 0;
  pTVar8 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  uVar12 = (uint)((longlong)pTVar1 - (longlong)pTVar8 >> 4);
  if (uVar12 == 0) goto joined_r0x00014d81a70d;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(this,uVar12);
  if (uVar12 < 4) {
    uVar12 = 1;
  }
  else {
    uVar5 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((*(int *)((longlong)this + 0x48) != 0) && ((int)uVar12 <= *(int *)((longlong)this + 0x48)))
  goto joined_r0x00014d81a70d;
  *(uint *)((longlong)this + 0x48) = uVar12;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x40),0,0,4);
  }
  if (uVar12 != 0) {
    uVar3 = uVar12;
    if (uVar12 < 2) {
      if (*(longlong *)((longlong)this + 0x40) != 0) {
        uVar3 = 0;
        goto LAB_14d81a585;
      }
    }
    else {
LAB_14d81a585:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)((longlong)this + 0x40),0,uVar3,4);
    }
    if (0 < (int)uVar12) {
      uVar9 = (ulonglong)uVar12;
      uVar5 = uVar7;
      do {
        lVar4 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar4 = *(longlong *)((longlong)this + 0x40);
        }
        uVar2 = uVar5 & (longlong)(int)uVar12 - 1U;
        uVar5 = uVar5 + 1;
        *(undefined4 *)(lVar4 + uVar2 * 4) = 0xffffffff;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  if (*(int *)((longlong)this + 0x48) != 0) {
    uVar12 = *(uint *)((longlong)this + 0x28);
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_78 = (EConstantQFFTSizeEnum *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar12 != 0) {
      pTVar11 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar11 = pTStack_70;
      }
      uVar3 = *(uint *)(pTVar11->AllocatorInstance).InlineData;
      uVar5 = uVar7;
      while (uVar3 == 0) {
        iVar6 = (int)uVar7;
        uStack_60 = (int)uVar5 + 0x20;
        uVar5 = (ulonglong)uStack_60;
        uVar3 = iVar6 + 1;
        uVar7 = (ulonglong)local_78 >> 0x20;
        local_78 = (EConstantQFFTSizeEnum *)CONCAT44((int)uVar7,uVar3);
        uVar7 = (ulonglong)uVar3;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar3)
        goto LAB_14d81a67b;
        uVar3 = *(uint *)((pTVar11->AllocatorInstance).InlineData + (longlong)iVar6 * 4 + 4);
      }
      local_78 = (EConstantQFFTSizeEnum *)CONCAT44(-uVar3 & uVar3,SUB84(local_78,0));
      uVar7 = (ulonglong)(-uVar3 & uVar3) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar12 < (int)uStack_64) {
LAB_14d81a67b:
        uVar7 = (ulonglong)uVar12;
        uStack_64 = uVar12;
      }
    }
    local_68 = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_50._padding_ = (longlong)local_78;
    local_58 = this;
    local_50.Array = pTStack_70;
    if ((int)uVar7 < (int)uVar12) {
      do {
        pbVar10 = (byte *)((longlong)(int)uVar7 * 0x10 + *local_58);
        uVar12 = *(int *)((longlong)this + 0x48) - 1U & (uint)*pbVar10;
        *(uint *)(pbVar10 + 0xc) = uVar12;
        lVar4 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar4 = *(longlong *)((longlong)this + 0x40);
        }
        uVar5 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (ulonglong)uVar12;
        *(undefined4 *)(pbVar10 + 8) = *(undefined4 *)(lVar4 + uVar5 * 4);
        *(int *)(lVar4 + uVar5 * 4) = (int)uVar7;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar7 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x00014d81a70d:
  for (; pTVar8 != pTVar1; pTVar8 = pTVar8 + 1) {
    local_78 = pTVar8->Key;
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)pTVar8->Value;
    TSet<TTuple<enum_EConstantQFFTSizeEnum,int>,TDefaultMapHashableKeyFuncs<enum_EConstantQFFTSizeEnum,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EConstantQFFTSizeEnum_const_&,int_const_&>_>
              (this,(TPairInitializer<EConstantQFFTSizeEnum_const_&,int_const_&> *)&stack0x00000008,
               (bool *)&local_78);
  }
  return this;
}

// TMap<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization,0>_> @ 14d81a770

TMap<EConstantQNormalizationEnum,Audio::EPseudoConstantQNormalization,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EConstantQNormalizationEnum,Audio::EPseudoConstantQNormalization,0>_>
* __thiscall
TMap<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization,0>_>
::
TMap<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization,0>_>
          (void *this,
          initializer_list<TPairInitializer<EConstantQNormalizationEnum_const_&,Audio::EPseudoConstantQNormalization_const_&>_>
          *param_1)

{
  TPairInitializer<EConstantQNormalizationEnum_const_&,Audio::EPseudoConstantQNormalization_const_&>
  *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  TPairInitializer<EConstantQNormalizationEnum_const_&,Audio::EPseudoConstantQNormalization_const_&>
  *pTVar9;
  ulonglong uVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  uint uVar12;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar1 = param_1->_Last;
  uVar5 = 0;
  pTVar9 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  uVar12 = (uint)((longlong)pTVar1 - (longlong)pTVar9 >> 4);
  if (uVar12 == 0) goto joined_r0x00014d81a9e1;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(this,uVar12);
  if (uVar12 < 4) {
    uVar12 = 1;
  }
  else {
    uVar6 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((*(int *)((longlong)this + 0x48) != 0) && ((int)uVar12 <= *(int *)((longlong)this + 0x48)))
  goto joined_r0x00014d81a9e1;
  *(uint *)((longlong)this + 0x48) = uVar12;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x40),0,0,4);
  }
  if (uVar12 != 0) {
    uVar3 = uVar12;
    if (uVar12 < 2) {
      if (*(longlong *)((longlong)this + 0x40) != 0) {
        uVar3 = 0;
        goto LAB_14d81a855;
      }
    }
    else {
LAB_14d81a855:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)((longlong)this + 0x40),0,uVar3,4);
    }
    if (0 < (int)uVar12) {
      uVar10 = (ulonglong)uVar12;
      uVar6 = uVar5;
      do {
        lVar4 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar4 = *(longlong *)((longlong)this + 0x40);
        }
        uVar2 = uVar6 & (longlong)(int)uVar12 - 1U;
        uVar6 = uVar6 + 1;
        *(undefined4 *)(lVar4 + uVar2 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  if (*(int *)((longlong)this + 0x48) != 0) {
    uVar12 = *(uint *)((longlong)this + 0x28);
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_78 = (EConstantQNormalizationEnum *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar12 != 0) {
      pTVar11 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar11 = pTStack_70;
      }
      uVar3 = *(uint *)(pTVar11->AllocatorInstance).InlineData;
      uVar6 = uVar5;
      while (uVar3 == 0) {
        iVar8 = (int)uVar5;
        uStack_60 = (int)uVar6 + 0x20;
        uVar6 = (ulonglong)uStack_60;
        uVar3 = iVar8 + 1;
        uVar5 = (ulonglong)local_78 >> 0x20;
        local_78 = (EConstantQNormalizationEnum *)CONCAT44((int)uVar5,uVar3);
        uVar5 = (ulonglong)uVar3;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar3)
        goto LAB_14d81a94b;
        uVar3 = *(uint *)((pTVar11->AllocatorInstance).InlineData + (longlong)iVar8 * 4 + 4);
      }
      local_78 = (EConstantQNormalizationEnum *)CONCAT44(-uVar3 & uVar3,SUB84(local_78,0));
      uVar5 = (ulonglong)(-uVar3 & uVar3) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar5 = (ulonglong)uStack_64;
      if ((int)uVar12 < (int)uStack_64) {
LAB_14d81a94b:
        uVar5 = (ulonglong)uVar12;
        uStack_64 = uVar12;
      }
    }
    local_68 = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_50._padding_ = (longlong)local_78;
    local_58 = this;
    local_50.Array = pTStack_70;
    if ((int)uVar5 < (int)uVar12) {
      do {
        iVar8 = (int)uVar5;
        lVar4 = *local_58 + (longlong)iVar8 * 0xc;
        uVar12 = *(int *)((longlong)this + 0x48) - 1U &
                 (uint)*(byte *)(*local_58 + (longlong)iVar8 * 0xc);
        *(uint *)(lVar4 + 8) = uVar12;
        lVar7 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar7 = *(longlong *)((longlong)this + 0x40);
        }
        uVar5 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (ulonglong)uVar12;
        *(undefined4 *)(lVar4 + 4) = *(undefined4 *)(lVar7 + uVar5 * 4);
        *(int *)(lVar7 + uVar5 * 4) = iVar8;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar5 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x00014d81a9e1:
  for (; pTVar9 != pTVar1; pTVar9 = pTVar9 + 1) {
    local_78 = pTVar9->Key;
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)pTVar9->Value;
    TSet<TTuple<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization>,TDefaultMapHashableKeyFuncs<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<enum_EConstantQNormalizationEnum_const_&,enum_Audio::EPseudoConstantQNormalization_const_&>_>
              (this,(TPairInitializer<EConstantQNormalizationEnum_const_&,Audio::EPseudoConstantQNormalization_const_&>
                     *)&stack0x00000008,(bool *)&local_78);
  }
  return this;
}

// TMap<enum_EFFTWindowType,enum_Audio::EWindowType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EFFTWindowType,enum_Audio::EWindowType,0>_> @ 14d81aa50

TMap<EFFTWindowType,Audio::EWindowType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EFFTWindowType,Audio::EWindowType,0>_>
* __thiscall
TMap<enum_EFFTWindowType,enum_Audio::EWindowType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EFFTWindowType,enum_Audio::EWindowType,0>_>
::
TMap<enum_EFFTWindowType,enum_Audio::EWindowType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EFFTWindowType,enum_Audio::EWindowType,0>_>
          (void *this,
          initializer_list<TPairInitializer<EFFTWindowType_const_&,Audio::EWindowType_const_&>_>
          *param_1)

{
  TPairInitializer<EFFTWindowType_const_&,Audio::EWindowType_const_&> *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  TPairInitializer<EFFTWindowType_const_&,Audio::EWindowType_const_&> *pTVar9;
  ulonglong uVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  uint uVar12;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar1 = param_1->_Last;
  uVar5 = 0;
  pTVar9 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  uVar12 = (uint)((longlong)pTVar1 - (longlong)pTVar9 >> 4);
  if (uVar12 == 0) goto joined_r0x00014d81acc1;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(this,uVar12);
  if (uVar12 < 4) {
    uVar12 = 1;
  }
  else {
    uVar6 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((*(int *)((longlong)this + 0x48) != 0) && ((int)uVar12 <= *(int *)((longlong)this + 0x48)))
  goto joined_r0x00014d81acc1;
  *(uint *)((longlong)this + 0x48) = uVar12;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x40),0,0,4);
  }
  if (uVar12 != 0) {
    uVar3 = uVar12;
    if (uVar12 < 2) {
      if (*(longlong *)((longlong)this + 0x40) != 0) {
        uVar3 = 0;
        goto LAB_14d81ab35;
      }
    }
    else {
LAB_14d81ab35:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)((longlong)this + 0x40),0,uVar3,4);
    }
    if (0 < (int)uVar12) {
      uVar10 = (ulonglong)uVar12;
      uVar6 = uVar5;
      do {
        lVar4 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar4 = *(longlong *)((longlong)this + 0x40);
        }
        uVar2 = uVar6 & (longlong)(int)uVar12 - 1U;
        uVar6 = uVar6 + 1;
        *(undefined4 *)(lVar4 + uVar2 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  if (*(int *)((longlong)this + 0x48) != 0) {
    uVar12 = *(uint *)((longlong)this + 0x28);
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_78 = (EFFTWindowType *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar12 != 0) {
      pTVar11 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar11 = pTStack_70;
      }
      uVar3 = *(uint *)(pTVar11->AllocatorInstance).InlineData;
      uVar6 = uVar5;
      while (uVar3 == 0) {
        iVar8 = (int)uVar5;
        uStack_60 = (int)uVar6 + 0x20;
        uVar6 = (ulonglong)uStack_60;
        uVar3 = iVar8 + 1;
        uVar5 = (ulonglong)local_78 >> 0x20;
        local_78 = (EFFTWindowType *)CONCAT44((int)uVar5,uVar3);
        uVar5 = (ulonglong)uVar3;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar3)
        goto LAB_14d81ac2b;
        uVar3 = *(uint *)((pTVar11->AllocatorInstance).InlineData + (longlong)iVar8 * 4 + 4);
      }
      local_78 = (EFFTWindowType *)CONCAT44(-uVar3 & uVar3,SUB84(local_78,0));
      uVar5 = (ulonglong)(-uVar3 & uVar3) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar5 = (ulonglong)uStack_64;
      if ((int)uVar12 < (int)uStack_64) {
LAB_14d81ac2b:
        uVar5 = (ulonglong)uVar12;
        uStack_64 = uVar12;
      }
    }
    local_68 = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_50._padding_ = (longlong)local_78;
    local_58 = this;
    local_50.Array = pTStack_70;
    if ((int)uVar5 < (int)uVar12) {
      do {
        iVar8 = (int)uVar5;
        lVar4 = *local_58 + (longlong)iVar8 * 0xc;
        uVar12 = *(int *)((longlong)this + 0x48) - 1U &
                 (uint)*(byte *)(*local_58 + (longlong)iVar8 * 0xc);
        *(uint *)(lVar4 + 8) = uVar12;
        lVar7 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar7 = *(longlong *)((longlong)this + 0x40);
        }
        uVar5 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (ulonglong)uVar12;
        *(undefined4 *)(lVar4 + 4) = *(undefined4 *)(lVar7 + uVar5 * 4);
        *(int *)(lVar7 + uVar5 * 4) = iVar8;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar5 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x00014d81acc1:
  for (; pTVar9 != pTVar1; pTVar9 = pTVar9 + 1) {
    local_78 = pTVar9->Key;
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)pTVar9->Value;
    TSet<TTuple<enum_EFFTWindowType,enum_Audio::EWindowType>,TDefaultMapHashableKeyFuncs<enum_EFFTWindowType,enum_Audio::EWindowType,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EFFTWindowType_const_&,enum_Audio::EWindowType_const_&>_>
              (this,(TPairInitializer<EFFTWindowType_const_&,Audio::EWindowType_const_&> *)
                    &stack0x00000008,(bool *)&local_78);
  }
  return this;
}

