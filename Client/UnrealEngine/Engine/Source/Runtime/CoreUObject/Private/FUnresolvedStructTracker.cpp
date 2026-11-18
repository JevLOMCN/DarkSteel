// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// IsAssociatedStructUnresolved @ 141ea8b10

bool __cdecl FUnresolvedStructTracker::IsAssociatedStructUnresolved(FLinkerLoad *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  FLinkerLoad *pFVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&UnresolvedStructsCritical);
  iVar11 = 0;
  uVar5 = 1;
  iVar12 = 0;
  uVar13 = UnresolvedStructs.Elements._40_4_;
  uVar6 = 0;
  if (uVar13 != 0) {
    puVar14 = (uint *)&UnresolvedStructs.Elements.field_0x10;
    if (UnresolvedStructs.Elements._32_8_ != 0) {
      puVar14 = (uint *)UnresolvedStructs.Elements._32_8_;
    }
    uVar6 = *puVar14;
    while (uVar6 == 0) {
      lVar8 = (longlong)iVar11;
      iVar12 = iVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar6 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_141ea8bcd;
      uVar6 = puVar14[lVar8 + 1];
    }
    uVar5 = -uVar6 & uVar6;
    uVar15 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    uVar6 = iVar12 + -1 + local_res18;
    if ((int)uVar13 < (int)uVar6) {
      uVar6 = uVar13;
    }
  }
LAB_141ea8bcd:
  bVar2 = UnresolvedStructs.Elements._40_1_;
  uVar10 = uVar13 & 0xffffffe0;
  uVar15 = UnresolvedStructs.Elements._40_8_ & 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar5,iVar11);
  TStack_60.CurrentBitIndex = uVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_60._28_4_ = uVar6;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,
                       UnresolvedStructs.Elements._8_4_ - UnresolvedStructs.Elements._52_4_);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&UnresolvedStructs.Elements.field_0x10;
  if (((int)uVar13 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  uVar6 = UnresolvedStructs.Elements._40_4_;
  if (uVar13 != uVar6) {
    uVar15 = UnresolvedStructs.Elements._40_8_ & 0xffffffff;
    lVar8 = 0x154b88000;
    if (UnresolvedStructs.Elements._32_8_ != 0) {
      lVar8 = UnresolvedStructs.Elements._32_8_;
    }
    uVar5 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar8 + (longlong)iVar11 * 4);
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar11;
      uVar10 = uVar10 + 0x20;
      iVar11 = iVar11 + 1;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141ea8ce0;
      uVar5 = *(uint *)(lVar8 + 4 + lVar9 * 4);
    }
    uVar15 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
    uVar15 = (ulonglong)uVar10;
  }
LAB_141ea8ce0:
  do {
    if (UnresolvedStructs.Elements._8_4_ - UnresolvedStructs.Elements._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == (int)uVar15) &&
       (TStack_60.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&UnresolvedStructs.Elements.field_0x10)) {
      bVar3 = false;
      goto LAB_141ea8d39;
    }
    pFVar7 = UObjectBaseUtility::GetLinker
                       (*(UObjectBaseUtility **)
                         (UnresolvedStructs.Elements._0_8_ +
                         (longlong)TStack_60.CurrentBitIndex * 0x10));
    if (pFVar7 == param_1) {
      bVar3 = true;
LAB_141ea8d39:
      LeaveCriticalSection((LPCRITICAL_SECTION)&UnresolvedStructsCritical);
      return bVar3;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// Reset @ 141eb6dd0

void __cdecl FUnresolvedStructTracker::Reset(FLinkerLoad *param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  UObjectBaseUtility *pUVar3;
  code *pcVar4;
  byte bVar5;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  int iVar8;
  FLinkerLoad *pFVar9;
  longlong lVar10;
  longlong lVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  UObjectBaseUtility *local_a8;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined8 local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int local_70;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&UnresolvedStructsCritical);
  iVar8 = UnresolvedStructs.Elements._40_4_;
  uStack_94 = 1;
  local_b8.Data = (FScriptContainerElement *)0x0;
  iStack_98 = 0;
  local_b0 = 0;
  local_80 = 0;
  iStack_84 = iStack_98;
  if (UnresolvedStructs.Elements._40_4_ != 0) {
    puVar15 = (uint *)&UnresolvedStructs.Elements.field_0x10;
    if (UnresolvedStructs.Elements._32_8_ != 0) {
      puVar15 = (uint *)UnresolvedStructs.Elements._32_8_;
    }
    uVar14 = *puVar15;
    local_80 = 0;
    iStack_98 = 0;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = UnresolvedStructs.Elements._40_4_;
      if ((int)(UnresolvedStructs.Elements._40_4_ + -1 +
               (UnresolvedStructs.Elements._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98)
      goto LAB_141eb6e8d;
      uVar14 = puVar15[lVar10 + 1];
    }
    uStack_94 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    iStack_84 = local_80 + -1 + local_res20;
    if ((int)UnresolvedStructs.Elements._40_4_ < iStack_84) {
      iStack_84 = UnresolvedStructs.Elements._40_4_;
    }
  }
LAB_141eb6e8d:
  bVar5 = UnresolvedStructs.Elements._40_1_;
  iStack_78 = UnresolvedStructs.Elements._8_4_ - UnresolvedStructs.Elements._52_4_;
  uVar14 = UnresolvedStructs.Elements._40_4_ & 0xffffffe0;
  local_a0 = &UnresolvedStructs;
  uStack_88 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_94,iStack_98);
  local_90 = 0x154b88000;
  TStack_60.CurrentBitIndex = iStack_84;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  local_68 = &UnresolvedStructs;
  iVar13 = (int)UnresolvedStructs.Elements._40_4_ >> 5;
  TStack_60._28_4_ = iStack_84;
  TStack_60.BaseBitIndex = local_80;
  uStack_40 = CONCAT44(uStack_74,iStack_78);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&UnresolvedStructs.Elements.field_0x10;
  iStack_7c = iStack_84;
  if (((int)UnresolvedStructs.Elements._40_4_ < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (iVar8 != UnresolvedStructs.Elements._40_4_) {
    lVar10 = 0x154b88000;
    if (UnresolvedStructs.Elements._32_8_ != 0) {
      lVar10 = UnresolvedStructs.Elements._32_8_;
    }
    uVar16 = -1 << (bVar5 & 0x1f) & *(uint *)(lVar10 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = UnresolvedStructs.Elements._40_4_;
      if ((int)(UnresolvedStructs.Elements._40_4_ + -1 +
               (UnresolvedStructs.Elements._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_141eb6fa0;
      uVar16 = *(uint *)(lVar10 + 4 + lVar11 * 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_70 = (int)lVar10;
    iVar8 = local_70 + -1 + uVar14;
    if ((int)UnresolvedStructs.Elements._40_4_ < iVar8) {
      iVar8 = UnresolvedStructs.Elements._40_4_;
    }
  }
LAB_141eb6fa0:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_60.CurrentBitIndex == iVar8) &&
        (TStack_60.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&UnresolvedStructs.Elements.field_0x10)) &&
       (pTVar6 == &UnresolvedStructs)) break;
    local_a8 = *(UObjectBaseUtility **)
                (*(longlong *)&pTVar6->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
    pFVar9 = UObjectBaseUtility::GetLinker(local_a8);
    if (pFVar9 == param_1) {
      if (((local_b8.Data <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 < local_b8.Data + (longlong)local_b0._4_4_ * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar13 = (int)local_b0;
      if ((int)local_b0 == local_b0._4_4_) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_b8,(int *)((longlong)&local_b0 + 4));
      }
      local_b0 = CONCAT44(local_b0._4_4_,iVar13 + 1);
      *(UObjectBaseUtility **)(local_b8.Data + (longlong)iVar13 * 8) = local_a8;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  iVar8 = (int)local_b0;
  pFVar1 = local_b8.Data + (longlong)(int)local_b0 * 8;
  FVar17.Data = local_b8.Data;
LAB_141eb70b8:
  do {
    if ((int)local_b0 != iVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar17.Data == pFVar1) {
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&UnresolvedStructsCritical);
      return;
    }
    pUVar3 = *(UObjectBaseUtility **)FVar17.Data;
    if (UnresolvedStructs.Elements._8_4_ != UnresolvedStructs.Elements._52_4_) {
      uVar14 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
               -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      FVar12 = (ForElementType<FSetElementId>)0x154b88028;
      if (UnresolvedStructs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar12 = UnresolvedStructs.Hash.SecondaryData;
      }
      uVar14 = *(uint *)((longlong)FVar12 +
                        (longlong)(int)(UnresolvedStructs.HashSize - 1U & (uVar14 >> 0x10 ^ uVar14))
                        * 4);
      if (uVar14 != 0xffffffff) {
LAB_141eb7140:
        lVar10 = (longlong)(int)uVar14 * 0x10;
        if (*(UObjectBaseUtility **)(UnresolvedStructs.Elements._0_8_ + lVar10) != pUVar3) break;
        if (((int)uVar14 < 0) || ((int)UnresolvedStructs.Elements._40_4_ <= (int)uVar14)) {
LAB_141eb71a2:
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else {
          lVar11 = 0x154b88000;
          if (UnresolvedStructs.Elements._32_8_ != 0) {
            lVar11 = UnresolvedStructs.Elements._32_8_;
          }
          uVar16 = uVar14;
          if ((int)uVar14 < 0) {
            uVar16 = uVar14 + 0x1f;
          }
          if ((*(uint *)(lVar11 + (longlong)((int)uVar16 >> 5) * 4) >> (uVar14 & 0x1f) & 1) == 0)
          goto LAB_141eb71a2;
        }
        lVar10 = UnresolvedStructs.Elements._0_8_ + lVar10;
        FVar12 = (ForElementType<FSetElementId>)0x154b88028;
        if (UnresolvedStructs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar12 = UnresolvedStructs.Hash.SecondaryData;
        }
        puVar15 = (uint *)((longlong)FVar12 + (longlong)*(int *)(lVar10 + 0xc) * 4);
        while( true ) {
          uVar16 = *puVar15;
          if ((uVar16 == 0xffffffff) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash"), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (uVar16 == uVar14) break;
          puVar15 = (uint *)(UnresolvedStructs.Elements._0_8_ + 8 + (longlong)(int)uVar16 * 0x10);
        }
        *puVar15 = *(uint *)(lVar10 + 8);
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized
                  ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&UnresolvedStructs,uVar14,1);
      }
    }
    FVar17.Data = FVar17.Data + 8;
  } while( true );
  uVar14 = *(uint *)(UnresolvedStructs.Elements._0_8_ + 8 + lVar10);
  if (uVar14 == 0xffffffff) goto code_r0x000141eb715d;
  goto LAB_141eb7140;
code_r0x000141eb715d:
  FVar17.Data = FVar17.Data + 8;
  goto LAB_141eb70b8;
}

