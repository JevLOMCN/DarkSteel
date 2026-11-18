// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 1

// GetEntriesBySourceTextIterator @ 146b730f0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

TConstIterator * __thiscall
FInternationalizationManifest::GetEntriesBySourceTextIterator
          (FInternationalizationManifest *this,TConstIterator *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(this->EntriesBySourceText).field_0x28;
  puVar1 = &(this->EntriesBySourceText).field_0x10;
  iVar7 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(this->EntriesBySourceText).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar7;
      iVar9 = iVar9 + 0x20;
      iVar7 = iVar7 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar7) goto LAB_146b73186;
      uVar4 = puVar10[lVar8 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar6 = (int)lVar8 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_146b73186:
  *(TMultiMap<FString,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>_>
    **)__return_storage_ptr__ = &this->EntriesBySourceText;
  *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(uVar5,iVar7);
  *(undefined1 **)&__return_storage_ptr__->field_0x10 = puVar1;
  *(ulonglong *)&__return_storage_ptr__->field_0x18 = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)&__return_storage_ptr__->field_0x20 = CONCAT44(iVar6,iVar9);
  return __return_storage_ptr__;
}

