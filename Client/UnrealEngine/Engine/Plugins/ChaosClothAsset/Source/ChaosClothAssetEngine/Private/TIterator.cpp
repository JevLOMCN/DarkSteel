// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 2

// TIterator @ 14dc34bd0

TIterator * __thiscall
TMapBase<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
::TIterator::TIterator
          (TIterator *this,
          TMapBase<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
          *param_1,bool param_2)

{
  TIterator local_38;
  
  TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
  ::TIterator::TIterator(&local_38,&param_1->Pairs);
  this->Map = param_1;
  this->_padding_ = local_38._padding_;
  this->_padding_ = local_38._padding_;
  this->bRequiresRehashOnRemoval = param_2;
  this->_padding_ = local_38._padding_;
  this->_padding_ = local_38._padding_;
  this->bElementsHaveBeenRemoved = false;
  this->_padding_ = local_38._padding_;
  this->_padding_ = (longlong)local_38.Set;
  return this;
}

// ~TIterator @ 14dc36280

void __thiscall
TMapBase<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
::TIterator::~TIterator(TIterator *this)

{
  ulonglong uVar1;
  TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
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
      TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
      ::Rehash(this_00);
      return;
    }
  }
  return;
}

