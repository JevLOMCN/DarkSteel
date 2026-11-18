// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// TBaseKeyIterator<0> @ 144e709d0

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<void_*,FMaterialCacheTagProvider::FTagBatonEntry>,TDefaultMapHashableKeyFuncs<void_*,FMaterialCacheTagProvider::FTagBatonEntry,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<void_*,FMaterialCacheTagProvider::FTagBatonEntry>,TDefaultMapHashableKeyFuncs<void_*,FMaterialCacheTagProvider::FTagBatonEntry,1>,FDefaultSetAllocator>
          *param_1,void *param_2)

{
  longlong lVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  
  this->Set = param_1;
  this->Key = param_2;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    FVar3 = (param_1->Hash).SecondaryData;
    uVar2 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar4 = *(int *)((longlong)FVar3 +
                    (((ulonglong)(uVar2 >> 0x10) ^ (longlong)(int)uVar2) &
                    (longlong)param_1->HashSize - 1U) * 4);
    this->NextIndex = iVar4;
    this->Index = iVar4;
    if (iVar4 != -1) {
      while( true ) {
        lVar1 = (longlong)iVar4;
        iVar4 = *(int *)(*(longlong *)&param_1->Elements + 0x20 + lVar1 * 0x28);
        this->NextIndex = iVar4;
        if (*(void **)(*(longlong *)&param_1->Elements + lVar1 * 0x28) == param_2) break;
        this->Index = iVar4;
        if (iVar4 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<0> @ 144e70aa0

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>::
TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<FGuid_const_> param_2)

{
  FGuid *pFVar1;
  ulong64 uVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  uint *puVar5;
  int iVar6;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar2 = CityHash64((char *)param_2.Ref,0x10);
    FVar4 = (param_1->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar6 = *(int *)((longlong)FVar4 + ((longlong)param_1->HashSize - 1U & (longlong)(int)uVar2) * 4
                    );
    this->NextIndex = iVar6;
    this->Index = iVar6;
    if (iVar6 != -1) {
      pFVar1 = this->Key;
      while( true ) {
        lVar3 = (longlong)iVar6;
        iVar6 = *(int *)(*(longlong *)&this->Set->Elements + 0x14 + lVar3 * 0x1c);
        this->NextIndex = iVar6;
        puVar5 = (uint *)(*(longlong *)&this->Set->Elements + lVar3 * 0x1c);
        if (((puVar5[2] == pFVar1->C && puVar5[1] == pFVar1->B) && puVar5[3] == pFVar1->D) &&
            pFVar1->A == *puVar5) break;
        this->Index = iVar6;
        if (iVar6 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// operator++ @ 144e75130

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>::
TBaseKeyIterator<0>::operator++(TBaseKeyIterator<0> *this)

{
  FGuid *pFVar1;
  longlong lVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = this->NextIndex;
  this->Index = iVar4;
  if (iVar4 != -1) {
    pFVar1 = this->Key;
    do {
      lVar2 = (longlong)iVar4;
      iVar4 = *(int *)(*(longlong *)&this->Set->Elements + 0x14 + lVar2 * 0x1c);
      this->NextIndex = iVar4;
      puVar3 = (uint *)(*(longlong *)&this->Set->Elements + lVar2 * 0x1c);
      if (((puVar3[3] == pFVar1->D && puVar3[2] == pFVar1->C) && puVar3[1] == pFVar1->B) &&
          pFVar1->A == *puVar3) {
        return this;
      }
      this->Index = iVar4;
    } while (iVar4 != -1);
  }
  return this;
}

