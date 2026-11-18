// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FRenderAssetIterator @ 148777d90

FRenderAssetIterator * __thiscall
FRenderAssetInstanceView::FRenderAssetIterator::FRenderAssetIterator
          (FRenderAssetIterator *this,FRenderAssetInstanceView *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar8 = 0;
  iVar3 = *(int *)&(param_1->RenderAssetMap).field_0x28;
  puVar1 = &(param_1->RenderAssetMap).field_0x10;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->RenderAssetMap).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_148777e28;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_148777e28:
  *(TMap<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
    **)&this->MapIt = &param_1->RenderAssetMap;
  *(ulonglong *)&(this->MapIt).field_0x8 = CONCAT44(uVar5,iVar8);
  *(undefined1 **)&(this->MapIt).field_0x10 = puVar1;
  *(ulonglong *)&(this->MapIt).field_0x18 = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)&(this->MapIt).field_0x20 = CONCAT44(iVar6,iVar9);
  return this;
}

