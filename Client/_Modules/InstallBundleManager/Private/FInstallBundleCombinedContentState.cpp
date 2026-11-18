// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 2

// GetAllBundlesHaveState @ 148bc9ba0

bool __thiscall
FInstallBundleCombinedContentState::GetAllBundlesHaveState
          (FInstallBundleCombinedContentState *this,EInstallBundleInstallState param_1,
          TArrayView<FName_const_,int> *param_2)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  EInstallBundleInstallState EVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  FName *pFVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined1 *puVar16;
  FName *pFVar17;
  int iVar18;
  int iVar19;
  undefined1 local_res8 [8];
  EInstallBundleInstallState local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&(this->IndividualBundleStates).field_0x28;
  puVar1 = &(this->IndividualBundleStates).field_0x10;
  iVar18 = 0;
  uVar9 = 1;
  iVar19 = 0;
  iVar10 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->IndividualBundleStates).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar14 = *puVar15;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      iVar19 = iVar19 + 0x20;
      iVar18 = iVar18 + 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_148bc9c3e;
      uVar14 = puVar15[lVar12 + 1];
    }
    uVar9 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar10 = (int)lVar12 + -1 + iVar19;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_148bc9c3e:
  uVar14 = *(uint *)&(this->IndividualBundleStates).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar9,iVar18);
  TStack_60.CurrentBitIndex = iVar10;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iVar10;
  TStack_60.BaseBitIndex = iVar19;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->IndividualBundleStates).field_0x8 -
                       *(int *)&(this->IndividualBundleStates).field_0x34);
  local_res10 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  EVar6 = local_res10;
  uVar9 = *(uint *)&(this->IndividualBundleStates).field_0x28;
  if (uVar14 != uVar9) {
    puVar16 = *(undefined1 **)&(this->IndividualBundleStates).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar18 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      uVar14 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_148bc9d40;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar9 < (int)uVar14) {
      uVar14 = uVar9;
    }
  }
LAB_148bc9d40:
  do {
    if (*(int *)&(this->IndividualBundleStates).field_0x8 -
        *(int *)&(this->IndividualBundleStates).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleContentState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar14) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return true;
    }
    pFVar11 = param_2->DataPtr;
    pFVar17 = (FName *)((longlong)TStack_60.CurrentBitIndex * 0x68 +
                       *(longlong *)&this->IndividualBundleStates);
    pFVar2 = pFVar11 + param_2->ArrayNum;
    if (pFVar11 != pFVar2) {
      do {
        if (*pFVar11 == *pFVar17) goto LAB_148bc9d9c;
        pFVar11 = pFVar11 + 1;
      } while (pFVar11 != pFVar2);
    }
    if (pFVar17[1].ComparisonIndex.Value != EVar6) {
      return false;
    }
LAB_148bc9d9c:
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// GetAnyBundleHasState @ 148bca020

bool __thiscall
FInstallBundleCombinedContentState::GetAnyBundleHasState
          (FInstallBundleCombinedContentState *this,EInstallBundleInstallState param_1,
          TArrayView<FName_const_,int> *param_2)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  EInstallBundleInstallState EVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  FName *pFVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined1 *puVar16;
  FName *pFVar17;
  int iVar18;
  int iVar19;
  undefined1 local_res8 [8];
  EInstallBundleInstallState local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&(this->IndividualBundleStates).field_0x28;
  puVar1 = &(this->IndividualBundleStates).field_0x10;
  iVar18 = 0;
  uVar9 = 1;
  iVar19 = 0;
  iVar10 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->IndividualBundleStates).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar14 = *puVar15;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      iVar19 = iVar19 + 0x20;
      iVar18 = iVar18 + 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_148bca0be;
      uVar14 = puVar15[lVar12 + 1];
    }
    uVar9 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar10 = (int)lVar12 + -1 + iVar19;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_148bca0be:
  uVar14 = *(uint *)&(this->IndividualBundleStates).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar9,iVar18);
  TStack_60.CurrentBitIndex = iVar10;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iVar10;
  TStack_60.BaseBitIndex = iVar19;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->IndividualBundleStates).field_0x8 -
                       *(int *)&(this->IndividualBundleStates).field_0x34);
  local_res10 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  EVar6 = local_res10;
  uVar9 = *(uint *)&(this->IndividualBundleStates).field_0x28;
  if (uVar14 != uVar9) {
    puVar16 = *(undefined1 **)&(this->IndividualBundleStates).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar18 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      uVar14 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_148bca1c0;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar9 < (int)uVar14) {
      uVar14 = uVar9;
    }
  }
LAB_148bca1c0:
  do {
    if (*(int *)&(this->IndividualBundleStates).field_0x8 -
        *(int *)&(this->IndividualBundleStates).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FInstallBundleContentState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar14) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return false;
    }
    pFVar11 = param_2->DataPtr;
    pFVar17 = (FName *)((longlong)TStack_60.CurrentBitIndex * 0x68 +
                       *(longlong *)&this->IndividualBundleStates);
    pFVar2 = pFVar11 + param_2->ArrayNum;
    if (pFVar11 != pFVar2) {
      do {
        if (*pFVar11 == *pFVar17) goto LAB_148bca21c;
        pFVar11 = pFVar11 + 1;
      } while (pFVar11 != pFVar2);
    }
    if (pFVar17[1].ComparisonIndex.Value == EVar6) {
      return true;
    }
LAB_148bca21c:
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

