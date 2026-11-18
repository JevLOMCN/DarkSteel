// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 1

// FSourceControlFileStatus @ 146aff9c0

FSourceControlFileStatus * __thiscall
FSourceControlFileStatusMonitor::FSourceControlFileStatus::FSourceControlFileStatus
          (FSourceControlFileStatus *this,ulong64 param_1,
          TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>
          *param_2)

{
  TMap<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,FSourceControlFileStatusMonitor::FUintptrHash>
  *this_00;
  void *pvVar1;
  ulong64 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulong64 *puVar13;
  uint uVar14;
  ulong64 *puVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  uint *puVar18;
  FSparseArrayAllocationInfo local_88;
  undefined4 local_78;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  TMap<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,FSourceControlFileStatusMonitor::FUintptrHash>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  
  this_00 = &this->OwnerDelegateMap;
  puVar15 = (ulong64 *)0x0;
  (this->FileState).Object = (ISourceControlState *)0x0;
  puVar12 = &(this->OwnerDelegateMap).field_0xc;
  (this->FileState).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  puVar9 = &(this->OwnerDelegateMap).field_0x8;
  *(undefined4 *)puVar9 = 0;
  *(undefined4 *)puVar12 = 0;
  this->LastStatusCheckTimestampSecs = 0.0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->OwnerDelegateMap).field_0x20 = 0;
  *(undefined4 *)&(this->OwnerDelegateMap).field_0x28 = 0;
  *(undefined4 *)&(this->OwnerDelegateMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->OwnerDelegateMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OwnerDelegateMap).field_0x34 = 0;
  *(undefined8 *)&(this->OwnerDelegateMap).field_0x40 = 0;
  *(undefined4 *)&(this->OwnerDelegateMap).field_0x48 = 0;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,1,(ForAnyElementType *)this_00,(int *)puVar9,(int *)puVar12);
  puVar12 = &(this->OwnerDelegateMap).field_0x10;
  iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                    ((TBitArray<FDefaultBitArrayAllocator> *)puVar12,1);
  puVar16 = *(undefined1 **)&(this->OwnerDelegateMap).field_0x20;
  uVar10 = iVar6 >> 0x1f & 0x1f;
  iVar6 = iVar6 + uVar10;
  if (puVar16 == (undefined1 *)0x0) {
    puVar16 = puVar12;
  }
  *(uint *)(puVar16 + (longlong)(iVar6 >> 5) * 4) =
       *(uint *)(puVar16 + (longlong)(iVar6 >> 5) * 4) &
       ~(1 << (((byte)iVar6 & 0x1f) - (char)uVar10 & 0x1f));
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_00,&local_88,iVar5);
  pvVar1 = local_88.Pointer;
  puVar13 = puVar15;
  if (local_88.Pointer != (ulong64 *)0x0) {
    *(ulong64 *)local_88.Pointer = param_1;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)local_88.Pointer + 8),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    *(undefined4 *)((longlong)pvVar1 + 0x20) = 0xffffffff;
    puVar13 = pvVar1;
  }
  iVar6 = local_88.Index;
  uVar2 = *puVar13;
  iVar5 = *(int *)&(this->OwnerDelegateMap).field_0x34;
  uVar10 = (int)(uVar2 >> 0x20) * 0x17 + (int)uVar2;
  if ((*(int *)puVar9 - iVar5 != 1) && (*(int *)puVar9 != iVar5)) {
    puVar12 = *(undefined1 **)&(this->OwnerDelegateMap).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->OwnerDelegateMap).field_0x38;
    }
    iVar5 = *(int *)(puVar12 +
                    (ulonglong)(*(int *)&(this->OwnerDelegateMap).field_0x48 - 1U & uVar10) * 4);
    if (iVar5 != -1) {
      lVar3 = *(longlong *)&this_00->field_0x0;
      do {
        if (*(ulong64 *)(lVar3 + (longlong)iVar5 * 0x28) == uVar2) {
          if (iVar5 != -1) {
            pvVar1 = (void *)(lVar3 + (longlong)iVar5 * 0x28);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)pvVar1 + 8));
            memmove(pvVar1,puVar13,0x20);
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this_00,iVar6,1);
            goto LAB_146affdcb;
          }
          break;
        }
        iVar5 = *(int *)(lVar3 + 0x20 + (longlong)iVar5 * 0x28);
      } while (iVar5 != -1);
    }
  }
  uVar14 = 1;
  uVar11 = *(int *)&(this->OwnerDelegateMap).field_0x8 -
           *(int *)&(this->OwnerDelegateMap).field_0x34;
  if (3 < uVar11) {
    uVar17 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar11 < 1) || ((int)uVar14 <= *(int *)&(this->OwnerDelegateMap).field_0x48)) {
    uVar10 = *(int *)&(this->OwnerDelegateMap).field_0x48 - 1U & uVar10;
    *(uint *)((longlong)puVar13 + 0x24) = uVar10;
    puVar12 = *(undefined1 **)&(this->OwnerDelegateMap).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->OwnerDelegateMap).field_0x38;
    }
    uVar17 = (longlong)*(int *)&(this->OwnerDelegateMap).field_0x48 - 1U & (longlong)(int)uVar10;
    *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(puVar12 + uVar17 * 4);
    *(int *)(puVar12 + uVar17 * 4) = local_88.Index;
    goto LAB_146affdcb;
  }
  *(uint *)&(this->OwnerDelegateMap).field_0x48 = uVar14;
  if (*(longlong *)&(this->OwnerDelegateMap).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->OwnerDelegateMap).field_0x40,0,0,4);
  }
  if (uVar14 != 0) {
    uVar10 = uVar14;
    if (uVar14 < 2) {
      if (*(longlong *)&(this->OwnerDelegateMap).field_0x40 != 0) {
        uVar10 = 0;
        goto LAB_146affbf9;
      }
    }
    else {
LAB_146affbf9:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->OwnerDelegateMap).field_0x40,0,uVar10,4);
    }
    if (0 < (int)uVar14) {
      uVar17 = (ulonglong)uVar14;
      puVar13 = puVar15;
      do {
        puVar12 = *(undefined1 **)&(this->OwnerDelegateMap).field_0x40;
        puVar9 = &(this->OwnerDelegateMap).field_0x38;
        if (puVar12 != (undefined1 *)0x0) {
          puVar9 = puVar12;
        }
        uVar7 = (ulonglong)puVar13 & (longlong)(int)uVar14 - 1U;
        puVar13 = (ulong64 *)((longlong)puVar13 + 1);
        *(undefined4 *)(puVar9 + uVar7 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if (*(int *)&(this->OwnerDelegateMap).field_0x48 != 0) {
    uVar10 = *(uint *)&(this->OwnerDelegateMap).field_0x28;
    local_88.Pointer = &(this->OwnerDelegateMap).field_0x10;
    local_88.Index = 0;
    local_88._4_4_ = 1;
    uStack_74 = 0;
    uStack_70 = 0;
    if (uVar10 != 0) {
      puVar18 = *(uint **)&(this->OwnerDelegateMap).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = local_88.Pointer;
      }
      uVar11 = *puVar18;
      puVar13 = puVar15;
      while (uVar11 == 0) {
        iVar5 = (int)puVar15;
        uStack_70 = (int)puVar13 + 0x20;
        puVar13 = (ulong64 *)(ulonglong)uStack_70;
        local_88.Index = iVar5 + 1;
        puVar15 = (ulong64 *)(ulonglong)(uint)local_88.Index;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < local_88.Index)
        goto LAB_146affceb;
        uVar11 = puVar18[(longlong)iVar5 + 1];
      }
      local_88._4_4_ = -uVar11 & uVar11;
      uVar17 = (ulonglong)(uint)local_88._4_4_ * 2 + 1;
      lVar3 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_74 = (int)lVar3 + -1 + uStack_70;
      puVar15 = (ulong64 *)(ulonglong)uStack_74;
      if ((int)uVar10 < (int)uStack_74) {
LAB_146affceb:
        puVar15 = (ulong64 *)(ulonglong)uVar10;
        uStack_74 = uVar10;
      }
    }
    local_78 = 0xffffffff;
    local_60._padding_ = CONCAT44(local_88._4_4_,local_88.Index);
    local_60.CurrentBitIndex = uStack_74;
    local_60.UnvisitedBitMask = 0xffffffff;
    local_60._28_4_ = uStack_6c;
    local_60.BaseBitIndex = uStack_70;
    local_68 = this_00;
    local_60.Array = local_88.Pointer;
    if ((int)puVar15 < (int)uVar10) {
      do {
        lVar3 = *(longlong *)&local_68->field_0x0;
        lVar8 = (longlong)(int)puVar15;
        uVar4 = *(undefined8 *)(lVar3 + lVar8 * 0x28);
        uVar10 = (int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4 &
                 *(int *)&(this->OwnerDelegateMap).field_0x48 - 1U;
        *(uint *)(lVar3 + 0x24 + lVar8 * 0x28) = uVar10;
        puVar12 = *(undefined1 **)&(this->OwnerDelegateMap).field_0x40;
        puVar9 = &(this->OwnerDelegateMap).field_0x38;
        if (puVar12 != (undefined1 *)0x0) {
          puVar9 = puVar12;
        }
        uVar17 = (longlong)*(int *)&(this->OwnerDelegateMap).field_0x48 - 1U & (longlong)(int)uVar10
        ;
        *(undefined4 *)(lVar3 + 0x20 + lVar8 * 0x28) = *(undefined4 *)(puVar9 + uVar17 * 4);
        *(int *)(puVar9 + uVar17 * 4) = (int)puVar15;
        local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
        puVar15 = (ulong64 *)(ulonglong)(uint)local_60.CurrentBitIndex;
      } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
    }
  }
LAB_146affdcb:
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return this;
}

