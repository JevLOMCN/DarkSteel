// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// CurrentMapToKeySet @ 14331ce20

TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> * __thiscall
BuildPatchServices::FMockChunkEvictionPolicy::CurrentMapToKeySet
          (FMockChunkEvictionPolicy *this,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *__return_storage_ptr__,
          TMap<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
          *param_1)

{
  char *pcVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulong64 uVar11;
  ulonglong uVar12;
  byte bVar13;
  ForElementType<FSetElementId> FVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *this_00;
  ulonglong uVar19;
  uint *puVar20;
  uint *puVar21;
  ForAnyElementType FVar22;
  FScriptContainerElement *pFVar23;
  undefined1 *puVar24;
  int local_res10 [4];
  uint local_res20;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_a8;
  FSparseArrayAllocationInfo local_98;
  uint local_88;
  uint uStack_84;
  undefined1 *puStack_80;
  undefined4 local_78;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  
  uVar12 = 0;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  TMapBase<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
              *)param_1,&local_a8);
  iVar9 = local_a8.ArrayNum;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0xc = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  if (local_a8.ArrayNum == 0) goto LAB_14331d098;
  if (local_a8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)local_a8.ArrayNum);
  }
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,local_a8.ArrayNum);
  if ((uint)iVar9 < 4) {
    uVar17 = 1;
  }
  else {
    uVar15 = (ulonglong)(((uint)iVar9 >> 1) + 7) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar16 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar17 <= __return_storage_ptr__->HashSize))
  goto LAB_14331d098;
  __return_storage_ptr__->HashSize = uVar17;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar17 != 0) {
    uVar18 = uVar17;
    if (uVar17 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar18 = 0;
        goto LAB_14331cf07;
      }
    }
    else {
LAB_14331cf07:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar18,4);
    }
    if (0 < (int)uVar17) {
      uVar19 = (ulonglong)uVar17;
      uVar15 = uVar12;
      do {
        FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar14 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar14 = FVar3;
        }
        uVar10 = uVar15 & (longlong)(int)uVar17 - 1U;
        uVar15 = uVar15 + 1;
        *(undefined4 *)((longlong)FVar14 + uVar10 * 4) = 0xffffffff;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    uVar17 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
    puStack_80 = &(__return_storage_ptr__->Elements).field_0x10;
    uStack_84 = 1;
    local_88 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    if (uVar17 != 0) {
      puVar21 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)puStack_80;
      }
      uVar18 = *puVar21;
      uVar15 = uVar12;
      while (uVar18 == 0) {
        uStack_70 = (int)uVar15 + 0x20;
        uVar15 = (ulonglong)uStack_70;
        iVar9 = (int)uVar12;
        local_88 = iVar9 + 1;
        uVar12 = (ulonglong)local_88;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_88)
        goto LAB_14331cff9;
        uVar18 = puVar21[(longlong)iVar9 + 1];
      }
      uStack_84 = -uVar18 & uVar18;
      uVar12 = (ulonglong)uStack_84 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uStack_74 = (int)lVar16 + -1 + uStack_70;
      uVar12 = (ulonglong)uStack_74;
      if ((int)uVar17 < (int)uStack_74) {
LAB_14331cff9:
        uVar12 = (ulonglong)uVar17;
        uStack_74 = uVar17;
      }
    }
    local_78 = 0xffffffff;
    local_60._padding_ = CONCAT44(uStack_84,local_88);
    local_60.CurrentBitIndex = uStack_74;
    local_60.UnvisitedBitMask = 0xffffffff;
    local_60._28_4_ = uStack_6c;
    local_60.BaseBitIndex = uStack_70;
    local_68 = __return_storage_ptr__;
    local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_80;
    if ((int)uVar12 < (int)uVar17) {
      do {
        pcVar1 = (char *)(*(longlong *)&local_68->Elements + (longlong)(int)uVar12 * 0x18);
        uVar11 = CityHash64(pcVar1,0x10);
        uVar17 = __return_storage_ptr__->HashSize - 1U & (uint)uVar11;
        *(uint *)(pcVar1 + 0x14) = uVar17;
        FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar14 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar14 = FVar3;
        }
        uVar15 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar17;
        *(undefined4 *)(pcVar1 + 0x10) = *(undefined4 *)((longlong)FVar14 + uVar15 * 4);
        *(int *)((longlong)FVar14 + uVar15 * 4) = (int)uVar12;
        local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
        uVar12 = (ulonglong)(uint)local_60.CurrentBitIndex;
      } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
    }
  }
LAB_14331d098:
  uVar12 = (ulonglong)local_a8.ArrayNum;
  pFVar23 = local_a8.AllocatorInstance.Data + uVar12 * 0x10;
  local_res20 = local_a8.ArrayNum;
  FVar22.Data = local_a8.AllocatorInstance.Data;
  do {
    while( true ) {
      puVar24 = &(__return_storage_ptr__->Elements).field_0x8;
      if (local_a8.ArrayNum != (int)uVar12) {
        `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar22.Data == pFVar23) {
        iVar9 = local_a8.ArrayMax;
        if ((longlong)local_a8._8_8_ < 0) {
          local_a8._8_8_ = (ulonglong)(uint)local_a8.ArrayMax << 0x20;
          if (iVar9 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,0,&local_a8.AllocatorInstance,0,&local_a8.ArrayMax);
          }
        }
        else {
          local_a8._8_8_ = (ulonglong)(uint)local_a8.ArrayMax << 0x20;
        }
        if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      iVar9 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      if (iVar9 == 0) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,4,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar24,
                           (int *)&(__return_storage_ptr__->Elements).field_0xc);
        this_00 = &(__return_storage_ptr__->Elements).field_0x10;
        iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                          ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
        puVar4 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
        if (puVar4 != (undefined1 *)0x0) {
          this_00 = puVar4;
        }
        bVar13 = (byte)iVar9 & 0x1f;
        if (iVar9 < 0) {
          iVar9 = iVar9 + 0x1f;
          bVar13 = bVar13 - 0x20;
        }
        *(uint *)(this_00 + (longlong)(iVar9 >> 5) * 4) =
             *(uint *)(this_00 + (longlong)(iVar9 >> 5) * 4) & ~(1 << (bVar13 & 0x1f));
      }
      else {
        iVar8 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
        iVar9 = iVar9 + -1;
        lVar16 = *(longlong *)&__return_storage_ptr__->Elements;
        iVar2 = *(int *)(lVar16 + 4 + (longlong)iVar8 * 0x18);
        *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar2;
        *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar9;
        if (iVar9 != 0) {
          *(undefined4 *)(lVar16 + (longlong)iVar2 * 0x18) = 0xffffffff;
        }
      }
      TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)__return_storage_ptr__,&local_98,iVar8);
      pvVar6 = local_98.Pointer;
      if (local_98.Pointer != (TSparseSetElement<FGuid> *)0x0) {
        uVar5 = *(undefined8 *)(FVar22.Data + 8);
        *(undefined8 *)local_98.Pointer = *(undefined8 *)FVar22.Data;
        *(undefined8 *)((longlong)local_98.Pointer + 8) = uVar5;
        *(undefined4 *)((longlong)local_98.Pointer + 0x10) = 0xffffffff;
      }
      local_res10[0] = local_98.Index;
      uVar11 = CityHash64(local_98.Pointer,0x10);
      bVar7 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::TryReplaceExisting
                        (__return_storage_ptr__,(uint)uVar11,pvVar6,local_res10,(bool *)0x0);
      if (!bVar7) break;
LAB_14331d335:
      uVar12 = (ulonglong)local_res20;
      FVar22.Data = FVar22.Data + 0x10;
    }
    uVar18 = 1;
    uVar17 = *(int *)puVar24 - *(int *)&(__return_storage_ptr__->Elements).field_0x34;
    if (3 < uVar17) {
      uVar12 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar18 = 1 << ((byte)lVar16 & 0x1f);
    }
    if ((0 < (int)uVar17) && (__return_storage_ptr__->HashSize < (int)uVar18)) {
      __return_storage_ptr__->HashSize = uVar18;
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
      }
      if (uVar18 != 0) {
        uVar17 = uVar18;
        if (uVar18 < 2) {
          if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
            uVar17 = 0;
            goto LAB_14331d22d;
          }
        }
        else {
LAB_14331d22d:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar17,4);
        }
        if (0 < (int)uVar18) {
          uVar15 = (ulonglong)uVar18;
          uVar12 = 0;
          do {
            FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
            FVar14 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
            if (FVar3 != (ForElementType<FSetElementId>)0x0) {
              FVar14 = FVar3;
            }
            uVar19 = uVar12 & (longlong)(int)uVar18 - 1U;
            uVar12 = uVar12 + 1;
            *(undefined4 *)((longlong)FVar14 + uVar19 * 4) = 0xffffffff;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
      }
      if (__return_storage_ptr__->HashSize != 0) {
        uVar17 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
        puStack_80 = &(__return_storage_ptr__->Elements).field_0x10;
        uStack_84 = 1;
        local_88 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_80;
        if (uVar17 != 0) {
          puVar21 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
          puVar20 = (uint *)puStack_80;
          if (puVar21 != (uint *)0x0) {
            puVar20 = puVar21;
          }
          uVar18 = *puVar20;
          local_88 = 0;
          uStack_70 = 0;
          while (uVar18 == 0) {
            uStack_70 = uStack_70 + 0x20;
            lVar16 = (longlong)(int)local_88;
            local_88 = local_88 + 1;
            if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_88)
            goto LAB_14331d319;
            uVar18 = puVar20[lVar16 + 1];
          }
          uStack_84 = -uVar18 & uVar18;
          uVar12 = (ulonglong)uStack_84 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uStack_74 = (int)lVar16 + -1 + uStack_70;
          if ((int)uVar17 < (int)uStack_74) {
LAB_14331d319:
            local_78 = 0xffffffff;
            local_60._padding_ = CONCAT44(uStack_84,local_88);
            local_60.CurrentBitIndex = uVar17;
            local_60.UnvisitedBitMask = 0xffffffff;
            local_60._28_4_ = uStack_6c;
            local_60.BaseBitIndex = uStack_70;
            uStack_74 = uVar17;
            local_68 = __return_storage_ptr__;
            goto LAB_14331d335;
          }
        }
        local_78 = 0xffffffff;
        local_60._padding_ = CONCAT44(uStack_84,local_88);
        local_60.CurrentBitIndex = uStack_74;
        local_60.UnvisitedBitMask = 0xffffffff;
        local_60._28_4_ = uStack_6c;
        local_60.BaseBitIndex = uStack_70;
        uVar18 = uStack_74;
        local_68 = __return_storage_ptr__;
        if ((int)uStack_74 < (int)uVar17) {
          do {
            pcVar1 = (char *)(*(longlong *)&local_68->Elements + (longlong)(int)uVar18 * 0x18);
            uVar11 = CityHash64(pcVar1,0x10);
            uVar17 = __return_storage_ptr__->HashSize - 1U & (uint)uVar11;
            *(uint *)(pcVar1 + 0x14) = uVar17;
            FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
            FVar14 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
            if (FVar3 != (ForElementType<FSetElementId>)0x0) {
              FVar14 = FVar3;
            }
            uVar12 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar17;
            *(undefined4 *)(pcVar1 + 0x10) = *(undefined4 *)((longlong)FVar14 + uVar12 * 4);
            *(uint *)((longlong)FVar14 + uVar12 * 4) = uVar18;
            local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
            uVar18 = local_60.CurrentBitIndex;
          } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
        }
      }
      goto LAB_14331d335;
    }
    uVar17 = __return_storage_ptr__->HashSize - 1U & (uint)uVar11;
    *(uint *)((longlong)pvVar6 + 0x14) = uVar17;
    FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
    FVar14 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
    if (FVar3 != (ForElementType<FSetElementId>)0x0) {
      FVar14 = FVar3;
    }
    uVar12 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar17;
    FVar22.Data = FVar22.Data + 0x10;
    *(undefined4 *)((longlong)pvVar6 + 0x10) = *(undefined4 *)((longlong)FVar14 + uVar12 * 4);
    *(int *)((longlong)FVar14 + uVar12 * 4) = local_res10[0];
    uVar12 = (ulonglong)local_res20;
  } while( true );
}

// Query @ 143325aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
BuildPatchServices::FMockChunkEvictionPolicy::Query
          (FMockChunkEvictionPolicy *this,
          TMap<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TUniquePtr<BuildPatchServices::IChunkDataAccess,TDefaultDelete<BuildPatchServices::IChunkDataAccess>_>,0>_>
          *param_1,int param_2,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_3,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_c8 [32];
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_c8;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=(param_3,&this->Cleanable);
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=(param_4,&this->Bootable);
  pTVar4 = CurrentMapToKeySet(this,&local_a8,param_1);
  dVar6 = FStatsCollector::GetSeconds();
  iVar3 = (this->RxQuery).ArrayNum;
  piVar1 = &(this->RxQuery).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x100,8,&(this->RxQuery).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->RxQuery).AllocatorInstance.Data;
  (this->RxQuery).ArrayNum = iVar3 + 1;
  lVar5 = (longlong)iVar3 * 0x100;
  *(double *)(pFVar2 + lVar5) = dVar6;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>
            ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(pFVar2 + lVar5 + 8),
             pTVar4);
  *(int *)(pFVar2 + lVar5 + 0x58) = param_2;
  pTVar4 = (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(pFVar2 + lVar5 + 0x60);
  *(undefined8 *)&pTVar4->Elements = 0;
  *(undefined8 *)&(pTVar4->Elements).field_0x8 = 0;
  *(undefined8 *)&(pTVar4->Elements).field_0x20 = 0;
  *(undefined4 *)&(pTVar4->Elements).field_0x28 = 0;
  *(undefined4 *)&(pTVar4->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(pTVar4->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(pTVar4->Elements).field_0x34 = 0;
  (pTVar4->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  pTVar4->HashSize = 0;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=(pTVar4,param_3);
  pTVar4 = (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)(pFVar2 + lVar5 + 0xb0);
  *(undefined8 *)&pTVar4->Elements = 0;
  *(undefined8 *)&(pTVar4->Elements).field_0x8 = 0;
  *(undefined8 *)&(pTVar4->Elements).field_0x20 = 0;
  *(undefined4 *)&(pTVar4->Elements).field_0x28 = 0;
  *(undefined4 *)&(pTVar4->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(pTVar4->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(pTVar4->Elements).field_0x34 = 0;
  (pTVar4->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  pTVar4->HashSize = 0;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=(pTVar4,param_4);
  local_a8.HashSize = 0;
  if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a8.Elements);
  return;
}

