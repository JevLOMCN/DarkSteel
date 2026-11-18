// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 2

// GetKeys<TSizedDefaultAllocator<32>_> @ 14e8f82d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
           *this,TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  ForElementType<FSetElementId> FVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint *puVar19;
  undefined1 auStackY_198 [32];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  TTuple<int,int> local_118;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
  *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
  TSet<TTuple<int,int>,DefaultKeyFuncs<TTuple<int,int>,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  ulonglong uVar18;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  piVar1 = &param_1->ArrayMax;
  uVar18 = 0;
  uVar16 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  uVar14 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar14 == 0) goto LAB_14e8f84de;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)&local_98,uVar14);
  uVar15 = 1;
  if (3 < uVar14) {
    uVar13 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_120 = (undefined4)lVar5;
    uVar15 = 1 << ((byte)lVar5 & 0x1f);
  }
  if ((local_98.HashSize != 0) && ((int)uVar15 <= local_98.HashSize)) goto LAB_14e8f84de;
  local_98.HashSize = uVar15;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_98.Hash.SecondaryData,0,0,4);
  }
  if (uVar15 != 0) {
    uVar14 = uVar15;
    if (uVar15 < 2) {
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar14 = 0;
        goto LAB_14e8f83e2;
      }
    }
    else {
LAB_14e8f83e2:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_98.Hash.SecondaryData,0,uVar14,4);
    }
    if (0 < (int)uVar15) {
      uVar17 = (ulonglong)uVar15;
      uVar13 = uVar18;
      do {
        FVar11 = (ForElementType<FSetElementId>)&local_98.Hash;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar11 = local_98.Hash.SecondaryData;
        }
        uVar10 = uVar13 & (longlong)(int)uVar15 - 1U;
        uVar13 = uVar13 + 1;
        *(undefined4 *)((longlong)FVar11 + uVar10 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if ((local_98.HashSize != 0) &&
     (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator((TConstIterator *)&local_110,&local_98.Elements),
     local_108.CurrentBitIndex < (local_108.Array)->NumBits)) {
    do {
      puVar19 = (uint *)((longlong)local_108.CurrentBitIndex * 0x10 + *local_110);
      uVar14 = *puVar19;
      uVar14 = (puVar19[1] + (uVar14 >> 2) + uVar14 * 0x40 + -0x61c88647 ^ uVar14) &
               local_98.HashSize - 1U;
      puVar19[3] = uVar14;
      FVar11 = (ForElementType<FSetElementId>)&local_98.Hash;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar11 = local_98.Hash.SecondaryData;
      }
      uVar13 = (longlong)local_98.HashSize - 1U & (longlong)(int)uVar14;
      puVar19[2] = *(uint *)((longlong)FVar11 + uVar13 * 4);
      *(int *)((longlong)FVar11 + uVar13 * 4) = local_108.CurrentBitIndex;
      local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
    } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
  }
LAB_14e8f84de:
  uVar14 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if (*piVar1 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar14,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar14 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  local_c8 = 0;
  uVar13 = uVar18;
  uStack_dc = 1;
  if (uVar14 != 0) {
    puVar19 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar13 = (ulonglong)uVar14;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_140.Array;
    }
    uVar15 = *puVar19;
    uVar17 = uVar18;
    local_c8 = 0;
    uVar16 = 0;
    while (uVar15 == 0) {
      iVar9 = (int)uVar18;
      local_c8 = (int)uVar17 + 0x20;
      uVar17 = (ulonglong)local_c8;
      uVar16 = iVar9 + 1;
      uVar18 = (ulonglong)uVar16;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
      goto LAB_14e8f8591;
      uVar15 = puVar19[(longlong)iVar9 + 1];
    }
    uStack_dc = -uVar15 & uVar15;
    uVar18 = (ulonglong)uStack_dc * 2 + 1;
    lVar5 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_11c = (int)lVar5;
    uVar15 = (local_c8 - 1) + local_11c;
    if ((int)uVar14 < (int)uVar15) {
      uVar15 = uVar14;
    }
    uVar13 = (ulonglong)uVar15;
  }
LAB_14e8f8591:
  uStack_d0 = 0xffffffff;
  uStack_cc = (uint)uVar13;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,uVar16);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  uStack_e0 = uVar16;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = uStack_cc;
  if ((int)uStack_cc < (int)uVar14) {
    do {
      iVar7 = TStack_140.CurrentBitIndex;
      lVar5 = *(longlong *)&(this->Pairs).Elements;
      uVar16 = *(uint *)(lVar5 + (longlong)(int)uVar13 * 0x14);
      iVar9 = *(int *)(lVar5 + 4 + (longlong)(int)uVar13 * 0x14);
      if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
        FVar11 = (ForElementType<FSetElementId>)&local_98.Hash;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar11 = local_98.Hash.SecondaryData;
        }
        iVar3 = *(int *)((longlong)FVar11 +
                        (ulonglong)
                        (local_98.HashSize - 1U &
                        (uVar16 * 0x40 + -0x61c88647 + iVar9 + (uVar16 >> 2) ^ uVar16)) * 4);
        while (iVar3 != -1) {
          lVar12 = (longlong)iVar3;
          if ((*(uint *)(local_98.Elements._0_8_ + lVar12 * 0x10) == uVar16) &&
             (*(int *)(local_98.Elements._0_8_ + 4 + lVar12 * 0x10) == iVar9)) {
            if (iVar3 != -1) goto LAB_14e8f8736;
            break;
          }
          iVar3 = *(int *)(local_98.Elements._0_8_ + 8 + lVar12 * 0x10);
        }
      }
      pFVar2 = (FScriptContainerElement *)(lVar5 + (longlong)TStack_140.CurrentBitIndex * 0x14);
      pFVar4 = (param_1->AllocatorInstance).Data;
      if (((pFVar4 <= pFVar2) && (pFVar2 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
           *(undefined8 *)pFVar2;
      TSet<TTuple<int,int>,DefaultKeyFuncs<TTuple<int,int>,0>,FDefaultSetAllocator>::
      Emplace<TTuple<int,int>_const_&>
                (&local_98,&local_118,
                 (bool *)(*(longlong *)&(this->Pairs).Elements + (longlong)iVar7 * 0x14));
LAB_14e8f8736:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      uVar13 = (ulonglong)(uint)TStack_140.CurrentBitIndex;
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar9 = param_1->ArrayNum;
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return iVar9;
}

// FindChecked @ 14e946530

FMeshInfo ** __thiscall
TMapBase<int,UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo_*,0>_>
::FindChecked(TMapBase<int,UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo_*,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMeshInfo **ppFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (FMeshInfo **)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FMeshInfo **)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  ppFVar6 = (FMeshInfo **)(*pcVar3)();
  return ppFVar6;
}

