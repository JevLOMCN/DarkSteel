// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 1

// TMap<enum_ELensDataCategory,FLinkPointMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ELensDataCategory,FLinkPointMetadata,0>_> @ 14d6a6570

TMap<ELensDataCategory,FLinkPointMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ELensDataCategory,FLinkPointMetadata,0>_>
* __thiscall
TMap<enum_ELensDataCategory,FLinkPointMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ELensDataCategory,FLinkPointMetadata,0>_>
::
TMap<enum_ELensDataCategory,FLinkPointMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ELensDataCategory,FLinkPointMetadata,0>_>
          (void *this,
          initializer_list<TPairInitializer<ELensDataCategory_const_&,FLinkPointMetadata_const_&>_>
          *param_1)

{
  TPairInitializer<ELensDataCategory_const_&,FLinkPointMetadata_const_&> *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  TPairInitializer<ELensDataCategory_const_&,FLinkPointMetadata_const_&> *pTVar9;
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
  if (uVar12 == 0) goto joined_r0x00014d6a67e1;
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
  goto joined_r0x00014d6a67e1;
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
        goto LAB_14d6a6655;
      }
    }
    else {
LAB_14d6a6655:
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
    local_78 = (ELensDataCategory *)0x100000000;
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
        local_78 = (ELensDataCategory *)CONCAT44((int)uVar5,uVar3);
        uVar5 = (ulonglong)uVar3;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar3)
        goto LAB_14d6a674b;
        uVar3 = *(uint *)((pTVar11->AllocatorInstance).InlineData + (longlong)iVar8 * 4 + 4);
      }
      local_78 = (ELensDataCategory *)CONCAT44(-uVar3 & uVar3,SUB84(local_78,0));
      uVar5 = (ulonglong)(-uVar3 & uVar3) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar5 = (ulonglong)uStack_64;
      if ((int)uVar12 < (int)uStack_64) {
LAB_14d6a674b:
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
joined_r0x00014d6a67e1:
  for (; pTVar9 != pTVar1; pTVar9 = pTVar9 + 1) {
    local_78 = pTVar9->Key;
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)pTVar9->Value;
    TSet<TTuple<enum_ELensDataCategory,FLinkPointMetadata>,TDefaultMapHashableKeyFuncs<enum_ELensDataCategory,FLinkPointMetadata,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_ELensDataCategory_const_&,FLinkPointMetadata_const_&>_>
              (this,(TPairInitializer<ELensDataCategory_const_&,FLinkPointMetadata_const_&> *)
                    &stack0x00000008,(bool *)&local_78);
  }
  return this;
}

