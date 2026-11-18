// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 2

// IdenticalWordCounts @ 146b77a10

bool __thiscall FLocTextWordCounts::FRowData::IdenticalWordCounts(FRowData *this,FRowData *param_1)

{
  undefined1 *puVar1;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *pTVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  FString *pFVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  undefined1 local_res8 [8];
  int local_res10;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if ((this->SourceWordCount == param_1->SourceWordCount) &&
     (iVar20 = *(int *)&(this->PerCultureWordCounts).field_0x8 -
               *(int *)&(this->PerCultureWordCounts).field_0x34,
     iVar20 == *(int *)&(param_1->PerCultureWordCounts).field_0x8 -
               *(int *)&(param_1->PerCultureWordCounts).field_0x34)) {
    puVar1 = &(this->PerCultureWordCounts).field_0x10;
    iVar4 = *(int *)&(this->PerCultureWordCounts).field_0x28;
    pTVar2 = &this->PerCultureWordCounts;
    iVar16 = 0;
    iVar18 = 0;
    uVar9 = 1;
    iVar10 = 0;
    if (iVar4 != 0) {
      puVar19 = *(uint **)&(this->PerCultureWordCounts).field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)puVar1;
      }
      uVar14 = *puVar19;
      while (uVar14 == 0) {
        lVar12 = (longlong)iVar16;
        iVar18 = iVar18 + 0x20;
        iVar16 = iVar16 + 1;
        iVar10 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_146b77ade;
        uVar14 = puVar19[lVar12 + 1];
      }
      uVar9 = -uVar14 & uVar14;
      uVar3 = (ulonglong)uVar9 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res10 = (int)lVar12;
      iVar10 = iVar18 + -1 + local_res10;
      if (iVar4 < iVar10) {
        iVar10 = iVar4;
      }
    }
LAB_146b77ade:
    uVar14 = *(uint *)&(this->PerCultureWordCounts).field_0x28;
    uVar13 = uVar14 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar9,iVar16);
    TStack_60.CurrentBitIndex = iVar10;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._28_4_ = iVar10;
    TStack_60.BaseBitIndex = iVar18;
    uStack_40 = CONCAT44(uStack_6c,iVar20);
    iVar20 = (int)uVar14 >> 5;
    local_res18 = pTVar2;
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
    pTVar6 = local_res18;
    uVar9 = *(uint *)&(this->PerCultureWordCounts).field_0x28;
    if (uVar14 != uVar9) {
      puVar17 = *(undefined1 **)&(this->PerCultureWordCounts).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar20 * 4);
      while (uVar14 == 0) {
        lVar12 = (longlong)iVar20;
        uVar13 = uVar13 + 0x20;
        iVar20 = iVar20 + 1;
        uVar14 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_146b77be0;
        uVar14 = *(uint *)(puVar17 + lVar12 * 4 + 4);
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
LAB_146b77be0:
    while( true ) {
      if (*(int *)&(this->PerCultureWordCounts).field_0x8 -
          *(int *)&(this->PerCultureWordCounts).field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_60.CurrentBitIndex == uVar14) &&
          (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar2 == pTVar6)
         ) {
        return true;
      }
      pFVar15 = (FString *)((longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)pTVar2);
      iVar20 = 0;
      piVar11 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                ::Find((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                        *)&param_1->PerCultureWordCounts,pFVar15);
      if (piVar11 != (int *)0x0) {
        iVar20 = *piVar11;
      }
      if (iVar20 != *(int *)&pFVar15[1].Data.AllocatorInstance.Data) break;
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return false;
}

// ResetWordCounts @ 146b84dc0

void __thiscall FLocTextWordCounts::FRowData::ResetWordCounts(FRowData *this)

{
  this->SourceWordCount = 0;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              *)&this->PerCultureWordCounts);
  return;
}

