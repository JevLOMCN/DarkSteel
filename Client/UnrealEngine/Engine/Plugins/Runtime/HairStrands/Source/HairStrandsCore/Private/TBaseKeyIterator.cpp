// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// TBaseKeyIterator<0> @ 14dfed280

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<UGroomAsset_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<UGroomAsset_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<UGroomAsset_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<UGroomAsset_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
          *param_1,UGroomAsset *param_2)

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
        iVar4 = *(int *)(*(longlong *)&param_1->Elements + 0x10 + lVar1 * 0x18);
        this->NextIndex = iVar4;
        if (*(UGroomAsset **)(*(longlong *)&param_1->Elements + lVar1 * 0x18) == param_2) break;
        this->Index = iVar4;
        if (iVar4 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<0> @ 14dfed350

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<USkeletalMesh_*,UGroomBindingAsset_*>,TDefaultMapHashableKeyFuncs<USkeletalMesh_*,UGroomBindingAsset_*,1>,FDefaultSetAllocator>
          *param_1,USkeletalMesh *param_2)

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
        iVar4 = *(int *)(*(longlong *)&param_1->Elements + 0x10 + lVar1 * 0x18);
        this->NextIndex = iVar4;
        if (*(USkeletalMesh **)(*(longlong *)&param_1->Elements + lVar1 * 0x18) == param_2) break;
        this->Index = iVar4;
        if (iVar4 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

