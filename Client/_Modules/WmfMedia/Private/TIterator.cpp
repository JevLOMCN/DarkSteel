// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 2

// TIterator @ 14ea95d40

TIterator * __thiscall
TSet<TTuple<unsigned_char_*,WmfMediaDecoder_*>,TDefaultMapHashableKeyFuncs<unsigned_char_*,WmfMediaDecoder_*,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<unsigned_char_*,WmfMediaDecoder_*>,TDefaultMapHashableKeyFuncs<unsigned_char_*,WmfMediaDecoder_*,0>,FDefaultSetAllocator>
          *param_1)

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
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14ea95dd9;
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
LAB_14ea95dd9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// ~TIterator @ 14ea980b0

void __thiscall
TMapBase<unsigned_char_*,WmfMediaDecoder_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char_*,WmfMediaDecoder_*,0>_>
::TIterator::~TIterator(TIterator *this)

{
  ulonglong uVar1;
  TSet<TTuple<unsigned_char_*,WmfMediaDecoder_*>,TDefaultMapHashableKeyFuncs<unsigned_char_*,WmfMediaDecoder_*,0>,FDefaultSetAllocator>
  *this_00;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  
  if ((this->bElementsHaveBeenRemoved != false) && (this->bRequiresRehashOnRemoval != false)) {
    this_00 = &this->Map->Pairs;
    uVar4 = *(int *)&(this_00->Elements).field_0x8 - *(int *)&(this_00->Elements).field_0x34;
    if (uVar4 < 4) {
      iVar3 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar3 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((0 < (int)uVar4) && (this_00->HashSize < iVar3)) || (iVar3 < this_00->HashSize)) {
      this_00->HashSize = iVar3;
      TSet<TTuple<unsigned_char_*,WmfMediaDecoder_*>,TDefaultMapHashableKeyFuncs<unsigned_char_*,WmfMediaDecoder_*,0>,FDefaultSetAllocator>
      ::Rehash(this_00);
    }
  }
  return;
}

