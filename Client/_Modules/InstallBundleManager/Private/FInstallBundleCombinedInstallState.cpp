// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 2

// GetAllBundlesHaveState @ 148bc9de0

bool __thiscall
FInstallBundleCombinedInstallState::GetAllBundlesHaveState
          (FInstallBundleCombinedInstallState *this,EInstallBundleInstallState param_1,
          TArrayView<FName_const_,int> *param_2)

{
  undefined1 *puVar1;
  FName *pFVar2;
  FName *pFVar3;
  ulonglong uVar4;
  int iVar5;
  code *pcVar6;
  EInstallBundleInstallState EVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  FName *pFVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 *puVar17;
  int iVar18;
  int iVar19;
  undefined1 local_res8 [8];
  EInstallBundleInstallState local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar5 = *(int *)&(this->IndividualBundleStates).field_0x28;
  puVar1 = &(this->IndividualBundleStates).field_0x10;
  iVar18 = 0;
  uVar10 = 1;
  iVar19 = 0;
  iVar11 = 0;
  if (iVar5 != 0) {
    puVar16 = *(uint **)&(this->IndividualBundleStates).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar15 = *puVar16;
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar18;
      iVar19 = iVar19 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_148bc9e7e;
      uVar15 = puVar16[lVar13 + 1];
    }
    uVar10 = -uVar15 & uVar15;
    uVar4 = (ulonglong)uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar11 = (int)lVar13 + -1 + iVar19;
    if (iVar5 < iVar11) {
      iVar11 = iVar5;
    }
  }
LAB_148bc9e7e:
  uVar15 = *(uint *)&(this->IndividualBundleStates).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar18);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iVar11;
  TStack_60.BaseBitIndex = iVar19;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->IndividualBundleStates).field_0x8 -
                       *(int *)&(this->IndividualBundleStates).field_0x34);
  local_res10 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  EVar7 = local_res10;
  uVar10 = *(uint *)&(this->IndividualBundleStates).field_0x28;
  if (uVar15 != uVar10) {
    puVar17 = *(undefined1 **)&(this->IndividualBundleStates).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar18 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar18;
      uVar14 = uVar14 + 0x20;
      iVar18 = iVar18 + 1;
      uVar15 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_148bc9f80;
      uVar15 = *(uint *)(puVar17 + lVar13 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = (int)lVar13 + -1 + uVar14;
    if ((int)uVar10 < (int)uVar15) {
      uVar15 = uVar10;
    }
  }
LAB_148bc9f80:
  do {
    if (*(int *)&(this->IndividualBundleStates).field_0x8 -
        *(int *)&(this->IndividualBundleStates).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,enum_EInstallBundleInstallState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar15) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return true;
    }
    pFVar2 = (FName *)(*(longlong *)&this->IndividualBundleStates +
                      (longlong)TStack_60.CurrentBitIndex * 0x14);
    pFVar12 = param_2->DataPtr;
    pFVar3 = pFVar12 + param_2->ArrayNum;
    if (pFVar12 != pFVar3) {
      do {
        if (*pFVar12 == *pFVar2) goto LAB_148bc9fe4;
        pFVar12 = pFVar12 + 1;
      } while (pFVar12 != pFVar3);
    }
    if (pFVar2[1].ComparisonIndex.Value != EVar7) {
      return false;
    }
LAB_148bc9fe4:
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// GetAnyBundleHasState @ 148bca260

bool __thiscall
FInstallBundleCombinedInstallState::GetAnyBundleHasState
          (FInstallBundleCombinedInstallState *this,EInstallBundleInstallState param_1,
          TArrayView<FName_const_,int> *param_2)

{
  undefined1 *puVar1;
  FName *pFVar2;
  FName *pFVar3;
  ulonglong uVar4;
  int iVar5;
  code *pcVar6;
  EInstallBundleInstallState EVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  FName *pFVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 *puVar17;
  int iVar18;
  int iVar19;
  undefined1 local_res8 [8];
  EInstallBundleInstallState local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar5 = *(int *)&(this->IndividualBundleStates).field_0x28;
  puVar1 = &(this->IndividualBundleStates).field_0x10;
  iVar18 = 0;
  uVar10 = 1;
  iVar19 = 0;
  iVar11 = 0;
  if (iVar5 != 0) {
    puVar16 = *(uint **)&(this->IndividualBundleStates).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar15 = *puVar16;
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar18;
      iVar19 = iVar19 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_148bca2fe;
      uVar15 = puVar16[lVar13 + 1];
    }
    uVar10 = -uVar15 & uVar15;
    uVar4 = (ulonglong)uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar11 = (int)lVar13 + -1 + iVar19;
    if (iVar5 < iVar11) {
      iVar11 = iVar5;
    }
  }
LAB_148bca2fe:
  uVar15 = *(uint *)&(this->IndividualBundleStates).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar18);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iVar11;
  TStack_60.BaseBitIndex = iVar19;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->IndividualBundleStates).field_0x8 -
                       *(int *)&(this->IndividualBundleStates).field_0x34);
  local_res10 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  EVar7 = local_res10;
  uVar10 = *(uint *)&(this->IndividualBundleStates).field_0x28;
  if (uVar15 != uVar10) {
    puVar17 = *(undefined1 **)&(this->IndividualBundleStates).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar18 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar18;
      uVar14 = uVar14 + 0x20;
      iVar18 = iVar18 + 1;
      uVar15 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_148bca400;
      uVar15 = *(uint *)(puVar17 + lVar13 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = (int)lVar13 + -1 + uVar14;
    if ((int)uVar10 < (int)uVar15) {
      uVar15 = uVar10;
    }
  }
LAB_148bca400:
  do {
    if (*(int *)&(this->IndividualBundleStates).field_0x8 -
        *(int *)&(this->IndividualBundleStates).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,enum_EInstallBundleInstallState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar15) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return false;
    }
    pFVar2 = (FName *)(*(longlong *)&this->IndividualBundleStates +
                      (longlong)TStack_60.CurrentBitIndex * 0x14);
    pFVar12 = param_2->DataPtr;
    pFVar3 = pFVar12 + param_2->ArrayNum;
    if (pFVar12 != pFVar3) {
      do {
        if (*pFVar12 == *pFVar2) goto LAB_148bca464;
        pFVar12 = pFVar12 + 1;
      } while (pFVar12 != pFVar3);
    }
    if (pFVar2[1].ComparisonIndex.Value == EVar7) {
      return true;
    }
LAB_148bca464:
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

