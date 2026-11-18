// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// Append<FDefaultSetAllocator> @ 1426e90f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TMap<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
::Append<FDefaultSetAllocator>
          (TMap<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
           *this,TMap<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
                 *param_1)

{
  undefined1 *puVar1;
  FTabId *pFVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TSet<TTuple<FTabId,TSharedRef<SDockTab,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FTabId,TSharedRef<SDockTab,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>,FDefaultSetAllocator>
             *)this,((*(int *)&this->field_0x8 - *(int *)&this->field_0x34) -
                    *(int *)&param_1->field_0x34) + *(int *)&param_1->field_0x8);
  iVar4 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1426e919d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = iVar14 + -1 + local_res10;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_1426e919d:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar4 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1426e92a0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_1426e92a0:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FTabId,TSharedRef<SDockTab,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar2 = (FTabId *)(*(longlong *)param_1 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    TMapBase<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
    ::Emplace<FTabId,TSharedRef<SDockTab,1>_>
              ((TMapBase<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
                *)this,pFVar2,(TSharedRef<SDockTab,1> *)(pFVar2 + 1));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TSet<TTuple<FTabId,TSharedRef<SDockTab,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FTabId,TSharedRef<SDockTab,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>,FDefaultSetAllocator>
           *)param_1);
  return;
}

