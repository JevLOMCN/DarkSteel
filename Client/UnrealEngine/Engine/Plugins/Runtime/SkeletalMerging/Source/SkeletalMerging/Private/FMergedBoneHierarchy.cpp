// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMerging
// Functions: 3

// FMergedBoneHierarchy @ 14ab909e0

FMergedBoneHierarchy * __thiscall
UE::SkeletonMerging::FMergedBoneHierarchy::FMergedBoneHierarchy
          (FMergedBoneHierarchy *this,uint param_1)

{
  TMap<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
  *this_00;
  undefined1 *puVar1;
  TMap<unsigned_int,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
  *this_01;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  int iVar15;
  undefined1 *puVar16;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_80;
  FMergedBoneHierarchy *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_58;
  
  *(undefined8 *)&this->BoneNamePose = 0;
  this_01 = &this->PathHashToBoneNames;
  *(undefined8 *)&(this->BoneNamePose).field_0x8 = 0;
  this_00 = &this->PathToBoneNames;
  *(undefined8 *)&(this->BoneNamePose).field_0x20 = 0;
  puVar2 = &(this->PathToBoneNames).field_0x48;
  *(undefined4 *)&(this->BoneNamePose).field_0x28 = 0;
  *(undefined4 *)&(this->BoneNamePose).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneNamePose).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BoneNamePose).field_0x34 = 0;
  *(undefined8 *)&(this->BoneNamePose).field_0x40 = 0;
  *(undefined4 *)&(this->BoneNamePose).field_0x48 = 0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->PathToBoneNames).field_0x8 = 0;
  *(undefined8 *)&(this->PathToBoneNames).field_0x20 = 0;
  *(undefined4 *)&(this->PathToBoneNames).field_0x28 = 0;
  *(undefined4 *)&(this->PathToBoneNames).field_0x2c = 0x80;
  *(undefined4 *)&(this->PathToBoneNames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PathToBoneNames).field_0x34 = 0;
  *(undefined8 *)&(this->PathToBoneNames).field_0x40 = 0;
  *(undefined4 *)puVar2 = 0;
  *(undefined8 *)&this_01->field_0x0 = 0;
  *(undefined8 *)&(this->PathHashToBoneNames).field_0x8 = 0;
  *(undefined8 *)&(this->PathHashToBoneNames).field_0x20 = 0;
  *(undefined4 *)&(this->PathHashToBoneNames).field_0x28 = 0;
  *(undefined4 *)&(this->PathHashToBoneNames).field_0x2c = 0x80;
  *(undefined4 *)&(this->PathHashToBoneNames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PathHashToBoneNames).field_0x34 = 0;
  puVar1 = &(this->PathHashToBoneNames).field_0x48;
  *(undefined8 *)&(this->PathHashToBoneNames).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  if ((uint)(*(int *)&(this->BoneNamePose).field_0x8 - *(int *)&(this->BoneNamePose).field_0x34) <
      param_1) {
    if ((int)param_1 < 0) goto LAB_14ab910c1;
    TSparseArrayBase<128,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<128,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,param_1);
    uVar10 = 1;
    if (3 < param_1) {
      uVar8 = (ulonglong)((param_1 >> 1) + 7) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar10 = 1 << ((byte)lVar9 & 0x1f);
    }
    iVar3 = *(int *)&(this->BoneNamePose).field_0x48;
    if ((iVar3 != 0) && ((int)uVar10 <= iVar3)) goto LAB_14ab90cdc;
    puVar16 = &(this->BoneNamePose).field_0x38;
    *(uint *)&(this->BoneNamePose).field_0x48 = uVar10;
    if (*(longlong *)&(this->BoneNamePose).field_0x40 != 0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->BoneNamePose).field_0x40,0,0,4);
    }
    if (uVar10 != 0) {
      uVar12 = uVar10;
      if (uVar10 < 2) {
        if (*(longlong *)&(this->BoneNamePose).field_0x40 != 0) {
          uVar12 = 0;
          goto LAB_14ab90b32;
        }
      }
      else {
LAB_14ab90b32:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(this->BoneNamePose).field_0x40,0,uVar12,4);
      }
      if (0 < (int)uVar10) {
        uVar13 = (ulonglong)uVar10;
        uVar8 = 0;
        do {
          puVar7 = *(undefined1 **)&(this->BoneNamePose).field_0x40;
          puVar6 = puVar16;
          if (puVar7 != (undefined1 *)0x0) {
            puVar6 = puVar7;
          }
          uVar5 = uVar8 & (longlong)(int)uVar10 - 1U;
          uVar8 = uVar8 + 1;
          *(undefined4 *)(puVar6 + uVar5 * 4) = 0xffffffff;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
    if (*(int *)&(this->BoneNamePose).field_0x48 != 0) {
      iVar3 = *(int *)&(this->BoneNamePose).field_0x28;
      local_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->BoneNamePose).field_0x10;
      local_80._padding_._4_4_ = 1;
      local_80._padding_._0_4_ = 0;
      local_80.CurrentBitIndex = 0;
      local_80.BaseBitIndex = 0;
      if (iVar3 != 0) {
        puVar14 = *(uint **)&(this->BoneNamePose).field_0x20;
        if (puVar14 == (uint *)0x0) {
          puVar14 = (uint *)local_80.Array;
        }
        uVar10 = *puVar14;
        local_80.BaseBitIndex = 0;
        local_80._padding_._0_4_ = 0;
        while (uVar10 == 0) {
          local_80.BaseBitIndex = local_80.BaseBitIndex + 0x20;
          lVar9 = (longlong)(int)local_80._padding_;
          local_80._padding_._0_4_ = (int)local_80._padding_ + 1;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_80._padding_)
          goto LAB_14ab90c39;
          uVar10 = puVar14[lVar9 + 1];
        }
        local_80._padding_._4_4_ = -uVar10 & uVar10;
        uVar8 = (ulonglong)local_80._padding_._4_4_ * 2 + 1;
        lVar9 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_80.CurrentBitIndex = (int)lVar9 + -1 + local_80.BaseBitIndex;
        if (iVar3 < local_80.CurrentBitIndex) {
LAB_14ab90c39:
          local_80.CurrentBitIndex = iVar3;
        }
      }
      local_80.UnvisitedBitMask = 0xffffffff;
      local_58._padding_ = CONCAT44(local_80._padding_._4_4_,(int)local_80._padding_);
      local_58.CurrentBitIndex = local_80.CurrentBitIndex;
      local_58.UnvisitedBitMask = 0xffffffff;
      local_58._28_4_ = local_80._28_4_;
      local_58.BaseBitIndex = local_80.BaseBitIndex;
      iVar15 = local_80.CurrentBitIndex;
      local_60 = this;
      local_58.Array = local_80.Array;
      if (local_80.CurrentBitIndex < iVar3) {
        do {
          puVar11 = (undefined8 *)((longlong)iVar15 * 0x80 + *(longlong *)&local_60->BoneNamePose);
          uVar4 = *puVar11;
          uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
          uVar10 = *(int *)&(this->BoneNamePose).field_0x48 - 1U &
                   uVar10 + (int)((ulonglong)uVar4 >> 0x20);
          *(uint *)((longlong)puVar11 + 0x74) = uVar10;
          puVar7 = *(undefined1 **)&(this->BoneNamePose).field_0x40;
          puVar6 = puVar16;
          if (puVar7 != (undefined1 *)0x0) {
            puVar6 = puVar7;
          }
          uVar8 = (longlong)*(int *)&(this->BoneNamePose).field_0x48 - 1U & (longlong)(int)uVar10;
          *(undefined4 *)(puVar11 + 0xe) = *(undefined4 *)(puVar6 + uVar8 * 4);
          *(int *)(puVar6 + uVar8 * 4) = iVar15;
          local_58.UnvisitedBitMask = local_58.UnvisitedBitMask & ~local_58._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_58);
          iVar15 = local_58.CurrentBitIndex;
        } while (local_58.CurrentBitIndex < (local_58.Array)->NumBits);
      }
    }
  }
LAB_14ab90cdc:
  puVar16 = &(this->PathToBoneNames).field_0x40;
  if ((uint)(*(int *)&(this->PathToBoneNames).field_0x8 -
            *(int *)&(this->PathToBoneNames).field_0x34) < param_1) {
    if ((int)param_1 < 0) goto LAB_14ab910c1;
    TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_00,param_1);
    uVar10 = 1;
    if (3 < param_1) {
      uVar8 = (ulonglong)((param_1 >> 1) + 7) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar10 = 1 << ((byte)lVar9 & 0x1f);
    }
    if ((*(int *)puVar2 != 0) && ((int)uVar10 <= *(int *)puVar2)) goto LAB_14ab90efc;
    puVar7 = &(this->PathToBoneNames).field_0x38;
    *(uint *)puVar2 = uVar10;
    if (*(longlong *)&(this->PathToBoneNames).field_0x40 != 0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)puVar16,0,0,4);
    }
    if (uVar10 != 0) {
      uVar12 = uVar10;
      if (uVar10 < 2) {
        if (*(longlong *)&(this->PathToBoneNames).field_0x40 != 0) {
          uVar12 = 0;
          goto LAB_14ab90d6a;
        }
      }
      else {
LAB_14ab90d6a:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)puVar16,0,uVar12,4);
      }
      if (0 < (int)uVar10) {
        uVar13 = (ulonglong)uVar10;
        uVar8 = 0;
        do {
          puVar16 = *(undefined1 **)&(this->PathToBoneNames).field_0x40;
          puVar6 = puVar7;
          if (puVar16 != (undefined1 *)0x0) {
            puVar6 = puVar16;
          }
          uVar5 = uVar8 & (longlong)(int)uVar10 - 1U;
          uVar8 = uVar8 + 1;
          *(undefined4 *)(puVar6 + uVar5 * 4) = 0xffffffff;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
    if (*(int *)puVar2 != 0) {
      iVar3 = *(int *)&(this->PathToBoneNames).field_0x28;
      local_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->PathToBoneNames).field_0x10;
      local_80._padding_._4_4_ = 1;
      local_80._padding_._0_4_ = 0;
      local_80.CurrentBitIndex = 0;
      local_80.BaseBitIndex = 0;
      if (iVar3 != 0) {
        puVar14 = *(uint **)&(this->PathToBoneNames).field_0x20;
        if (puVar14 == (uint *)0x0) {
          puVar14 = (uint *)local_80.Array;
        }
        uVar10 = *puVar14;
        local_80._padding_._0_4_ = 0;
        local_80.BaseBitIndex = 0;
        while (uVar10 == 0) {
          local_80.BaseBitIndex = local_80.BaseBitIndex + 0x20;
          lVar9 = (longlong)(int)local_80._padding_;
          local_80._padding_._0_4_ = (int)local_80._padding_ + 1;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_80._padding_)
          goto LAB_14ab90e5a;
          uVar10 = puVar14[lVar9 + 1];
        }
        local_80._padding_._4_4_ = -uVar10 & uVar10;
        uVar8 = (ulonglong)local_80._padding_._4_4_ * 2 + 1;
        lVar9 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_80.CurrentBitIndex = local_80.BaseBitIndex + -1 + (int)lVar9;
        if (iVar3 < local_80.CurrentBitIndex) {
LAB_14ab90e5a:
          local_80.CurrentBitIndex = iVar3;
        }
      }
      local_80.UnvisitedBitMask = 0xffffffff;
      local_58._padding_ = CONCAT44(local_80._padding_._4_4_,(int)local_80._padding_);
      local_58.CurrentBitIndex = local_80.CurrentBitIndex;
      local_58.UnvisitedBitMask = 0xffffffff;
      local_58._28_4_ = local_80._28_4_;
      local_58.BaseBitIndex = local_80.BaseBitIndex;
      iVar15 = local_80.CurrentBitIndex;
      local_60 = (FMergedBoneHierarchy *)this_00;
      local_58.Array = local_80.Array;
      if (local_80.CurrentBitIndex < iVar3) {
        do {
          uVar4 = *(undefined8 *)(*(longlong *)&local_60->BoneNamePose + (longlong)iVar15 * 0x14);
          lVar9 = *(longlong *)&local_60->BoneNamePose + (longlong)iVar15 * 0x14;
          uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
          uVar10 = *(int *)puVar2 - 1U & uVar10 + (int)((ulonglong)uVar4 >> 0x20);
          *(uint *)(lVar9 + 0x10) = uVar10;
          puVar16 = *(undefined1 **)&(this->PathToBoneNames).field_0x40;
          puVar6 = puVar7;
          if (puVar16 != (undefined1 *)0x0) {
            puVar6 = puVar16;
          }
          uVar8 = (longlong)*(int *)puVar2 - 1U & (longlong)(int)uVar10;
          *(undefined4 *)(lVar9 + 0xc) = *(undefined4 *)(puVar6 + uVar8 * 4);
          *(int *)(puVar6 + uVar8 * 4) = iVar15;
          local_58.UnvisitedBitMask = local_58.UnvisitedBitMask & ~local_58._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_58);
          iVar15 = local_58.CurrentBitIndex;
        } while (local_58.CurrentBitIndex < (local_58.Array)->NumBits);
      }
    }
  }
LAB_14ab90efc:
  if (param_1 <=
      (uint)(*(int *)&(this->PathHashToBoneNames).field_0x8 -
            *(int *)&(this->PathHashToBoneNames).field_0x34)) {
    return this;
  }
  if ((int)param_1 < 0) {
LAB_14ab910c1:
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)param_1);
  }
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_01,param_1);
  uVar10 = 1;
  if (3 < param_1) {
    uVar8 = (ulonglong)((param_1 >> 1) + 7) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = 1 << ((byte)lVar9 & 0x1f);
  }
  if ((*(int *)puVar1 != 0) && ((int)uVar10 <= *(int *)puVar1)) {
    return this;
  }
  puVar2 = &(this->PathHashToBoneNames).field_0x38;
  *(uint *)puVar1 = uVar10;
  puVar16 = &(this->PathHashToBoneNames).field_0x40;
  if (*(longlong *)&(this->PathHashToBoneNames).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)puVar16,0,0,4);
  }
  if (uVar10 == 0) goto LAB_14ab90fd4;
  uVar12 = uVar10;
  if (uVar10 < 2) {
    if (*(longlong *)&(this->PathHashToBoneNames).field_0x40 != 0) {
      uVar12 = 0;
      goto LAB_14ab90f89;
    }
  }
  else {
LAB_14ab90f89:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)puVar16,0,uVar12,4);
  }
  if (0 < (int)uVar10) {
    uVar13 = (ulonglong)uVar10;
    uVar8 = 0;
    do {
      puVar16 = *(undefined1 **)&(this->PathHashToBoneNames).field_0x40;
      puVar7 = puVar2;
      if (puVar16 != (undefined1 *)0x0) {
        puVar7 = puVar16;
      }
      uVar5 = uVar8 & (longlong)(int)uVar10 - 1U;
      uVar8 = uVar8 + 1;
      *(undefined4 *)(puVar7 + uVar5 * 4) = 0xffffffff;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
LAB_14ab90fd4:
  if (*(int *)puVar1 != 0) {
    local_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->PathHashToBoneNames).field_0x10
    ;
    local_80._padding_._0_4_ = 0;
    local_80._padding_._4_4_ = 1;
    local_80.UnvisitedBitMask = 0xffffffff;
    local_80.CurrentBitIndex = 0;
    local_80.BaseBitIndex = 0;
    if (*(int *)&(this->PathHashToBoneNames).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_80);
    }
    local_58._padding_._0_4_ = (int)local_80._padding_;
    local_58._padding_._4_4_ = local_80._padding_._4_4_;
    local_58.Array = local_80.Array;
    local_58.UnvisitedBitMask = local_80.UnvisitedBitMask;
    local_58.CurrentBitIndex = local_80.CurrentBitIndex;
    local_58._28_4_ = local_80._28_4_;
    local_58.BaseBitIndex = local_80.BaseBitIndex;
    local_60 = (FMergedBoneHierarchy *)this_01;
    if (local_80.CurrentBitIndex < (local_80.Array)->NumBits) {
      do {
        puVar14 = (uint *)((longlong)local_58.CurrentBitIndex * 0x60 +
                          *(longlong *)&local_60->BoneNamePose);
        uVar10 = *(int *)puVar1 - 1U & *puVar14;
        puVar14[0x17] = uVar10;
        puVar16 = *(undefined1 **)&(this->PathHashToBoneNames).field_0x40;
        puVar7 = puVar2;
        if (puVar16 != (undefined1 *)0x0) {
          puVar7 = puVar16;
        }
        uVar8 = (longlong)*(int *)puVar1 - 1U & (longlong)(int)uVar10;
        puVar14[0x16] = *(uint *)(puVar7 + uVar8 * 4);
        *(int *)(puVar7 + uVar8 * 4) = local_58.CurrentBitIndex;
        local_58.UnvisitedBitMask = local_58.UnvisitedBitMask & ~local_58._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_58);
      } while (local_58.CurrentBitIndex < (local_58.Array)->NumBits);
    }
  }
  return this;
}

// PopulateSkeleton @ 14ab94e50

void __thiscall
UE::SkeletonMerging::FMergedBoneHierarchy::PopulateSkeleton
          (FMergedBoneHierarchy *this,FReferenceSkeletonModifier *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  TTuple<FName,UE::Math::TTransform<double>_> *pTVar4;
  int iVar5;
  undefined1 *puVar6;
  int *piVar7;
  FName local_res8;
  FMeshBoneInfo local_38;
  TArray<FName,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  if (*(int *)&(this->PathHashToBoneNames).field_0x8 !=
      *(int *)&(this->PathHashToBoneNames).field_0x34) {
    puVar6 = *(undefined1 **)&(this->PathHashToBoneNames).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->PathHashToBoneNames).field_0x38;
    }
    iVar5 = *(int *)(puVar6 + ((ulonglong)(*(int *)&(this->PathHashToBoneNames).field_0x48 - 1) &
                              0xbd49d10d) * 4);
    if (iVar5 != -1) {
      do {
        piVar7 = (int *)((longlong)iVar5 * 0x60 + *(longlong *)&this->PathHashToBoneNames);
        if (*piVar7 == -0x42b62ef3) {
          if (piVar7 == (int *)0x0) goto LAB_14ab94ed1;
          goto LAB_14ab94ef7;
        }
        iVar5 = piVar7[0x16];
      } while (iVar5 != -1);
    }
  }
  piVar7 = (int *)0x0;
LAB_14ab94ed1:
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14ab94ef7:
  if ((piVar7[4] - piVar7[0xf] != 1) &&
     (bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1386500320292503502>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SkeletalMerging\\Source\\SkeletalMerging\\Private\\SkeletalMergingLibrary.cpp"
                         ,0x32,"ChildBoneNames.Num() == 1"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar3 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array
                     ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(piVar7 + 2),
                      &local_28);
  if ((pTVar3->ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res8 = *(FName *)(pTVar3->AllocatorInstance).Data;
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  ::FName::ToString(&local_res8,&local_18);
  local_38.Name = local_res8;
  local_38.ParentIndex = -1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pTVar4 = TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                   *)this,local_res8);
  if ((pTVar4 == (TTuple<FName,UE::Math::TTransform<double>_> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FReferenceSkeletonModifier::Add(param_1,&local_38,(TTransform<double> *)&pTVar4->field_0x10,false)
  ;
  RecursiveAddBones(this,param_1,local_res8);
  return;
}

// RecursiveAddBones @ 14ab95050

void __thiscall
UE::SkeletonMerging::FMergedBoneHierarchy::RecursiveAddBones
          (FMergedBoneHierarchy *this,FReferenceSkeletonModifier *param_1,FName param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<FName,unsigned_int> *pTVar4;
  uint *puVar5;
  TTuple<FName,UE::Math::TTransform<double>_> *pTVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  FName *this_00;
  uint *puVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  FName local_res18;
  int local_res20;
  FMeshBoneInfo local_e0;
  uint *local_d0;
  uint uStack_c8;
  uint uStack_c4;
  TBitArray<FDefaultBitArrayAllocator> *local_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  uint *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  FString local_70 [2];
  undefined4 local_44;
  
  local_res18 = param_2;
  pTVar4 = TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
                   *)&this->PathToBoneNames,param_2);
  if ((pTVar4 == (TTuple<FName,unsigned_int> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar12 = (uint *)0x0;
  uStack_c8 = 0;
  puVar5 = puVar12;
  if (*(int *)&(this->PathHashToBoneNames).field_0x8 !=
      *(int *)&(this->PathHashToBoneNames).field_0x34) {
    puVar9 = *(undefined1 **)&(this->PathHashToBoneNames).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->PathHashToBoneNames).field_0x38;
    }
    uVar11 = *(uint *)(puVar9 + (ulonglong)
                                (*(int *)&(this->PathHashToBoneNames).field_0x48 - 1U &
                                *(uint *)&pTVar4->field_0x8) * 4);
    if (uVar11 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar11 * 0x60 + *(longlong *)&this->PathHashToBoneNames);
        if (*puVar5 == *(uint *)&pTVar4->field_0x8) break;
        uVar11 = puVar5[0x16];
        puVar5 = puVar12;
      } while (uVar11 != 0xffffffff);
    }
  }
  puVar14 = puVar5 + 2;
  if (puVar5 == (uint *)0x0) {
    puVar14 = puVar12;
  }
  if (puVar14 != (uint *)0x0) {
    uVar11 = puVar14[10];
    local_c0 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar14 + 4);
    uStack_c4 = 1;
    local_b0 = 0;
    uVar8 = 0;
    uStack_b4 = uStack_c8;
    if (uVar11 != 0) {
      pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)(puVar14 + 8);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(puVar14 + 8) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar13 = local_c0;
      }
      uVar15 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
      puVar5 = puVar12;
      local_b0 = 0;
      uStack_c8 = 0;
      while (uVar15 == 0) {
        iVar10 = (int)puVar12;
        local_b0 = (int)puVar5 + 0x20;
        puVar5 = (uint *)(ulonglong)local_b0;
        uStack_c8 = iVar10 + 1;
        puVar12 = (uint *)(ulonglong)uStack_c8;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_c8) {
          uVar8 = puVar14[10];
          uStack_b4 = uVar11;
          goto LAB_14ab951b4;
        }
        uVar15 = *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar10 * 4 + 4);
      }
      uVar8 = puVar14[10];
      uStack_c4 = -uVar15 & uVar15;
      uVar1 = (ulonglong)uStack_c4 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_res20 = (int)lVar7;
      uStack_b4 = (local_b0 - 1) + local_res20;
      if ((int)uVar8 < (int)uStack_b4) {
        uStack_b4 = uVar11;
      }
    }
LAB_14ab951b4:
    uVar11 = puVar14[10];
    uStack_ac = local_44;
    uVar15 = uVar11 & 0xffffffe0;
    iStack_a8 = puVar14[2] - puVar14[0xd];
    uStack_b8 = 0xffffffff;
    TStack_98._padding_ = CONCAT44(uStack_c4,uStack_c8);
    TStack_98.CurrentBitIndex = uStack_b4;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    iVar10 = (int)uVar11 >> 5;
    TStack_98._28_4_ = local_44;
    TStack_98.BaseBitIndex = local_b0;
    uStack_78 = CONCAT44(uStack_a4,iStack_a8);
    local_d0 = puVar14;
    local_a0 = puVar14;
    TStack_98.Array = local_c0;
    if ((((int)uVar11 < 0) || ((int)uVar8 < (int)uVar11)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar8 = puVar14[10];
    if (uVar11 != uVar8) {
      puVar12 = *(uint **)(puVar14 + 8);
      if (*(uint **)(puVar14 + 8) == (uint *)0x0) {
        puVar12 = puVar14 + 4;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & puVar12[iVar10];
      while (uVar11 == 0) {
        lVar7 = (longlong)iVar10;
        uVar15 = uVar15 + 0x20;
        iVar10 = iVar10 + 1;
        uVar11 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_14ab952c0;
        uVar11 = puVar12[lVar7 + 1];
      }
      uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar11 = (int)lVar7 + -1 + uVar15;
      if ((int)uVar8 < (int)uVar11) {
        uVar11 = uVar8;
      }
    }
LAB_14ab952c0:
    while( true ) {
      puVar12 = local_a0;
      if (local_a0[2] - local_a0[0xd] != (int)uStack_78) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_98.CurrentBitIndex == uVar11) &&
          (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)(puVar14 + 4))) &&
         (puVar12 == puVar14)) break;
      this_00 = (FName *)((longlong)TStack_98.CurrentBitIndex * 0x10 + *(longlong *)puVar12);
      iVar10 = FReferenceSkeletonModifier::FindBoneIndex(param_1,&local_res18);
      ::FName::ToString(this_00,local_70);
      local_e0.Name = *this_00;
      local_e0.ParentIndex = iVar10;
      if (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
      }
      pTVar6 = TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                       *)this,*this_00);
      if ((pTVar6 == (TTuple<FName,UE::Math::TTransform<double>_> *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x27b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FReferenceSkeletonModifier::Add
                (param_1,&local_e0,(TTransform<double> *)&pTVar6->field_0x10,false);
      RecursiveAddBones(this,param_1,*this_00);
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
  }
  return;
}

