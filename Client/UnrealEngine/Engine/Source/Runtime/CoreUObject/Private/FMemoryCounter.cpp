// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// GetFixedSize @ 141ea0670

ulong64 __thiscall FAssetDataTagMapSharedView::FMemoryCounter::GetFixedSize(FMemoryCounter *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FStore *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong64 uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar17;
  uint *puVar19;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  ulong64 uVar16;
  ulong64 uVar18;
  
  uVar3 = *(uint *)&(this->FixedStoreIndices).Elements.field_0x28;
  puVar1 = &(this->FixedStoreIndices).Elements.field_0x10;
  uVar10 = 0;
  uVar15 = 0;
  uVar7 = 1;
  uVar17 = 0;
  uVar8 = uVar15;
  if (uVar3 != 0) {
    puVar19 = *(uint **)&(this->FixedStoreIndices).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar8 = *puVar19;
    uVar16 = uVar10;
    uVar18 = uVar10;
    uVar17 = 0;
    uVar15 = 0;
    while (uVar8 == 0) {
      iVar13 = (int)uVar16;
      uVar17 = (int)uVar18 + 0x20;
      uVar18 = (ulong64)uVar17;
      uVar15 = iVar13 + 1;
      uVar16 = (ulong64)uVar15;
      uVar8 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < (int)uVar15)
      goto LAB_141ea070d;
      uVar8 = puVar19[(longlong)iVar13 + 1];
    }
    uVar7 = -uVar8 & uVar8;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    uVar8 = local_res10 + -1 + uVar17;
    if ((int)uVar3 < (int)uVar8) {
      uVar8 = uVar3;
    }
  }
LAB_141ea070d:
  uVar9 = *(uint *)&(this->FixedStoreIndices).Elements.field_0x28;
  uVar14 = uVar9 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar7,uVar15);
  TStack_70.CurrentBitIndex = uVar8;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar9 >> 5;
  TStack_70._28_4_ = uVar8;
  TStack_70.BaseBitIndex = uVar17;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->FixedStoreIndices).Elements.field_0x8 -
                       *(int *)&(this->FixedStoreIndices).Elements.field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || ((int)uVar3 < (int)uVar9)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return uVar10;
  }
  uVar3 = *(uint *)&(this->FixedStoreIndices).Elements.field_0x28;
  if (uVar9 != uVar3) {
    puVar12 = *(undefined1 **)&(this->FixedStoreIndices).Elements.field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar9 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar13) goto LAB_141ea0820;
      uVar17 = *(uint *)(puVar12 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    uVar9 = local_res18 + -1 + uVar14;
    if ((int)uVar3 < (int)uVar9) {
      uVar9 = uVar3;
    }
  }
LAB_141ea0820:
  while( true ) {
    if (*(int *)&(this->FixedStoreIndices).Elements.field_0x8 -
        *(int *)&(this->FixedStoreIndices).Elements.field_0x34 != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar9) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    uVar3 = *(uint *)(*(longlong *)&(this->FixedStoreIndices).Elements +
                     (longlong)TStack_70.CurrentBitIndex * 0xc);
    if (((0x3fff < uVar3) || (FixedTagPrivate::GStores.Data[uVar3] == (FStore *)0x0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < Capacity && Data[Index] != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                           ,0x180,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return uVar10;
    }
    pFVar4 = FixedTagPrivate::GStores.Data[uVar3];
    uVar10 = (longlong)(pFVar4->AnsiStrings).ArrayNum + uVar10 +
             ((longlong)(pFVar4->WideStrings).ArrayNum +
             ((longlong)(pFVar4->Pairs).ArrayNum * 3 +
              (((longlong)(pFVar4->ExportPaths).ArrayNum + 5) * 5 +
               ((longlong)(pFVar4->Texts).ArrayNum +
               (longlong)(pFVar4->NumberlessExportPaths).ArrayNum) * 2 +
               (longlong)(pFVar4->Names).ArrayNum + (longlong)(pFVar4->NumberlessPairs).ArrayNum) *
              2 + (longlong)(pFVar4->NumberlessNames).ArrayNum +
              (longlong)(pFVar4->WideStringOffsets).ArrayNum +
             (longlong)(pFVar4->AnsiStringOffsets).ArrayNum) * 2) * 2;
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return uVar10;
}

// Include @ 141ea5050

void __thiscall
FAssetDataTagMapSharedView::FMemoryCounter::Include
          (FMemoryCounter *this,FAssetDataTagMapSharedView *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  FAssetDataTagMap *pFVar4;
  longlong lVar5;
  longlong lVar6;
  uint local_res10 [2];
  uint local_res18 [4];
  
  if ((*(byte *)&param_1->field0_0x0 & 1) != 0) {
    local_res10[0] = (uint)(*(ushort *)&param_1->field0_0x0 >> 2);
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int>
              (&this->FixedStoreIndices,local_res18,(bool *)local_res10);
    return;
  }
  pFVar4 = (param_1->field0_0x0).Loose;
  if ((((byte)*(ushort *)&param_1->field0_0x0 ^ 1) & pFVar4 != (FAssetDataTagMap *)0x0) != 0) {
    lVar5 = pFVar4->_padding_;
    iVar3 = (int)pFVar4->_padding_;
    lVar6 = ((longlong)*(int *)((longlong)&pFVar4->_padding_ + 4) + 1) * 0x18;
    lVar2 = lVar5 + (longlong)iVar3 * 0x18;
    while( true ) {
      if ((int)pFVar4->_padding_ != iVar3) {
        `TCheckedPointerIterator<TTuple<FName,FString>_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (lVar5 == lVar2) break;
      piVar1 = (int *)(lVar5 + 0x14);
      lVar5 = lVar5 + 0x18;
      lVar6 = lVar6 + (longlong)*piVar1 * 2;
    }
    this->LooseBytes = this->LooseBytes + lVar6;
  }
  return;
}

// ReportFixedStoreBreakdown @ 141eb6330

void __thiscall
FAssetDataTagMapSharedView::FMemoryCounter::ReportFixedStoreBreakdown(FMemoryCounter *this)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  FMemoryCounter *pFVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  int local_res18;
  int local_res20;
  <lambda_1> local_b8;
  FMemoryCounter *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  FMemoryCounter *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar2 = *(int *)&(this->FixedStoreIndices).Elements.field_0x28;
  puVar1 = &(this->FixedStoreIndices).Elements.field_0x10;
  iStack_a0 = 0;
  uStack_9c = 1;
  iStack_8c = iStack_a0;
  local_88 = iStack_a0;
  if (iVar2 != 0) {
    puVar13 = *(uint **)&(this->FixedStoreIndices).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    local_88 = 0;
    iStack_a0 = 0;
    while (uVar11 == 0) {
      lVar7 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_141eb63cd;
      uVar11 = puVar13[lVar7 + 1];
    }
    uStack_9c = -uVar11 & uVar11;
    uVar9 = (ulonglong)uStack_9c * 2 + 1;
    lVar7 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res18 = (int)lVar7;
    iStack_8c = local_res18 + -1 + local_88;
    if (iVar2 < iStack_8c) {
      iStack_8c = iVar2;
    }
  }
LAB_141eb63cd:
  uVar11 = *(uint *)&(this->FixedStoreIndices).Elements.field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  iStack_80 = *(int *)&(this->FixedStoreIndices).Elements.field_0x8 -
              *(int *)&(this->FixedStoreIndices).Elements.field_0x34;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar8 = (int)uVar11 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = this;
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_78 = this;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar2 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(this->FixedStoreIndices).Elements.field_0x28;
  if (uVar11 != uVar3) {
    puVar12 = *(undefined1 **)&(this->FixedStoreIndices).Elements.field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar8 * 4);
    while (uVar11 == 0) {
      lVar7 = (longlong)iVar8;
      uVar10 = uVar10 + 0x20;
      iVar8 = iVar8 + 1;
      uVar11 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_141eb64e0;
      uVar11 = *(uint *)(puVar12 + lVar7 * 4 + 4);
    }
    uVar9 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    uVar11 = local_res20 + -1 + uVar10;
    if ((int)uVar3 < (int)uVar11) {
      uVar11 = uVar3;
    }
  }
LAB_141eb64e0:
  while( true ) {
    pFVar5 = local_78;
    if (*(int *)&(local_78->FixedStoreIndices).Elements.field_0x8 -
        *(int *)&(local_78->FixedStoreIndices).Elements.field_0x34 != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar11) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar5 == this))
    break;
    local_res10[0] = 0;
    local_b8.StoreIndex =
         *(uint *)(*(longlong *)&(pFVar5->FixedStoreIndices).Elements +
                  (longlong)TStack_70.CurrentBitIndex * 0xc);
    local_b8.Idx = local_res10;
    uVar9 = (ulonglong)local_b8.StoreIndex;
    if (((0x3fff < local_b8.StoreIndex) ||
        (FixedTagPrivate::GStores.Data[local_b8.StoreIndex] == (FStore *)0x0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < Capacity && Data[Index] != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                           ,0x180,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FixedTagPrivate::
    VisitViews<0,FixedTagPrivate::FStore_&,_FAssetDataTagMapSharedView::FMemoryCounter::ReportFixedStoreBreakdown_::__l6::<lambda_1>_>
              (FixedTagPrivate::GStores.Data[uVar9],&local_b8);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

