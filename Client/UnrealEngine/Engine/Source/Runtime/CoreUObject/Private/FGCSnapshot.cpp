// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// GetAllocatedSize @ 142054a70

long64 __thiscall FGCSnapshot::GetAllocatedSize(FGCSnapshot *this)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long64 lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint *puVar18;
  longlong lVar19;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  ulonglong uVar17;
  
  uVar2 = *(uint *)&(this->ObjectToInfoMap).field_0x48;
  uVar14 = 0;
  uVar13 = 0;
  uVar17 = uVar14;
  if (1 < uVar2) {
    uVar17 = (longlong)(int)uVar2 << 2;
  }
  uVar2 = *(uint *)&(this->DirectReferences).field_0x48;
  uVar16 = uVar14;
  if (1 < uVar2) {
    uVar16 = (longlong)(int)uVar2 << 2;
  }
  puVar1 = &(this->DirectReferences).field_0x10;
  uVar2 = *(uint *)&(this->DirectReferences).field_0x28;
  uVar5 = 1;
  uVar15 = 0;
  lVar19 = ((*(int *)&(this->ObjectToInfoMap).field_0x2c + 0x1fU >> 5) << 2) + uVar17 +
           ((longlong)*(int *)&(this->ObjectToInfoMap).field_0xc +
           (longlong)
           (*(int *)&(this->ObjectToInfoMap).field_0x8 - *(int *)&(this->ObjectToInfoMap).field_0x34
           ) * 2) * 0x18 +
           uVar16 + ((*(int *)&(this->DirectReferences).field_0x2c + 0x1fU >> 5) << 2) +
           (longlong)*(int *)&(this->DirectReferences).field_0xc * 0x18;
  uVar6 = uVar13;
  if (uVar2 != 0) {
    puVar18 = *(uint **)&(this->DirectReferences).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar6 = *puVar18;
    uVar17 = uVar14;
    uVar15 = 0;
    uVar13 = 0;
    while (uVar6 == 0) {
      iVar11 = (int)uVar14;
      uVar15 = (int)uVar17 + 0x20;
      uVar17 = (ulonglong)uVar15;
      uVar13 = iVar11 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar6 = uVar2;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < (int)uVar13)
      goto LAB_142054b8d;
      uVar6 = puVar18[(longlong)iVar11 + 1];
    }
    uVar5 = -uVar6 & uVar6;
    uVar14 = (ulonglong)uVar5 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    uVar6 = (uVar15 - 1) + local_res10;
    if ((int)uVar2 < (int)uVar6) {
      uVar6 = uVar2;
    }
  }
LAB_142054b8d:
  uVar7 = *(uint *)&(this->DirectReferences).field_0x28;
  uVar12 = uVar7 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar5,uVar13);
  TStack_60.CurrentBitIndex = uVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar7 >> 5;
  TStack_60._28_4_ = uVar6;
  TStack_60.BaseBitIndex = uVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->DirectReferences).field_0x8 -
                       *(int *)&(this->DirectReferences).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar7 < 0) || ((int)uVar2 < (int)uVar7)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    lVar8 = (*pcVar3)();
    return lVar8;
  }
  uVar2 = *(uint *)&(this->DirectReferences).field_0x28;
  if (uVar7 != uVar2) {
    puVar10 = *(undefined1 **)&(this->DirectReferences).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar7 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar7 = uVar2;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar11) goto LAB_142054c90;
      uVar13 = *(uint *)(puVar10 + lVar9 * 4 + 4);
    }
    uVar14 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar7 = (int)lVar9 + -1 + uVar12;
    if ((int)uVar2 < (int)uVar7) {
      uVar7 = uVar2;
    }
  }
LAB_142054c90:
  while( true ) {
    if (*(int *)&(this->DirectReferences).field_0x8 - *(int *)&(this->DirectReferences).field_0x34
        != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar7) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar19 = lVar19 + (longlong)
                      *(int *)(*(longlong *)
                                (*(longlong *)&this->DirectReferences + 8 +
                                (longlong)TStack_60.CurrentBitIndex * 0x18) + 0xc) * 0x10;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return lVar19;
}

