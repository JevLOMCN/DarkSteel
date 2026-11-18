// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// UpdateNumActiveMorphTargets @ 147979c80

void __thiscall
FExternalMorphWeightData::UpdateNumActiveMorphTargets(FExternalMorphWeightData *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  longlong lVar18;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  puVar1 = &(this->MorphSets).field_0x10;
  this->NumActiveMorphTargets = 0;
  iVar4 = *(int *)&(this->MorphSets).field_0x28;
  iVar14 = 0;
  iVar16 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->MorphSets).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_147979d2d;
      uVar13 = puVar17[lVar10 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar9 = local_res10 + -1 + iVar16;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_147979d2d:
  uVar13 = *(uint *)&(this->MorphSets).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar8,iVar14);
  TStack_70.CurrentBitIndex = iVar9;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iVar9;
  TStack_70.BaseBitIndex = iVar16;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->MorphSets).field_0x8 - *(int *)&(this->MorphSets).field_0x34)
  ;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar8 = *(uint *)&(this->MorphSets).field_0x28;
  if (uVar13 != uVar8) {
    puVar15 = *(undefined1 **)&(this->MorphSets).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_147979e40;
      uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    uVar13 = local_res18 + -1 + uVar12;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
    }
  }
LAB_147979e40:
  do {
    if (*(int *)&(this->MorphSets).field_0x8 - *(int *)&(this->MorphSets).field_0x34 !=
        (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,FExternalMorphSetWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar13) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    lVar10 = *(longlong *)&this->MorphSets;
    lVar11 = (longlong)TStack_70.CurrentBitIndex * 0x30;
    uVar8 = 0;
    *(undefined4 *)(lVar11 + 0x20 + lVar10) = 0;
    if (0 < *(int *)(lVar11 + 0x18 + lVar10)) {
      lVar18 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar8 < *(int *)(lVar11 + 0x18 + lVar10)) {
          uVar12 = ~uVar8 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(float *)(lVar11 + 0x24 + lVar10) <=
            (float)(*(uint *)(*(longlong *)(lVar11 + 0x10 + lVar10) + lVar18) & uVar6)) {
          piVar3 = (int *)(lVar11 + 0x20 + lVar10);
          *piVar3 = *piVar3 + 1;
        }
        uVar8 = uVar8 + 1;
        lVar18 = lVar18 + 4;
      } while ((int)uVar8 < *(int *)(lVar11 + 0x18 + lVar10));
    }
    this->NumActiveMorphTargets = this->NumActiveMorphTargets + *(int *)(lVar11 + 0x20 + lVar10);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

