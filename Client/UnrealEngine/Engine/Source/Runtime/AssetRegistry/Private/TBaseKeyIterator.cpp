// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 3

// TBaseKeyIterator<1> @ 142ad3460

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<FName,FAssetPackageData_*>,TDefaultMapHashableKeyFuncs<FName,FAssetPackageData_*,0>,FDefaultSetAllocator>
          *param_1,FName param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  this->Set = param_1;
  this->Key = param_2;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar1 = ::GetTypeHash(param_2.ComparisonIndex.Value);
    FVar4 = (param_1->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    ((longlong)param_1->HashSize - 1U & (longlong)(int)(uVar1 + param_2.Number)) * 4
                    );
    this->NextIndex = iVar3;
    this->Index = iVar3;
    if (iVar3 != -1) {
      while( true ) {
        lVar2 = (longlong)iVar3;
        iVar3 = *(int *)(*(longlong *)&this->Set->Elements + 0x10 + lVar2 * 0x18);
        this->NextIndex = iVar3;
        if (*(FName *)(*(longlong *)&this->Set->Elements + lVar2 * 0x18) == this->Key) break;
        this->Index = iVar3;
        if (iVar3 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<1> @ 142b78d80

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
          *param_1,FName param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  this->Set = param_1;
  this->Key = param_2;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar1 = ::GetTypeHash(param_2.ComparisonIndex.Value);
    FVar4 = (param_1->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    ((longlong)param_1->HashSize - 1U & (longlong)(int)(uVar1 + param_2.Number)) * 4
                    );
    this->NextIndex = iVar3;
    this->Index = iVar3;
    if (iVar3 != -1) {
      while( true ) {
        lVar2 = (longlong)iVar3;
        iVar3 = *(int *)(*(longlong *)&this->Set->Elements + 0xe8 + lVar2 * 0xf0);
        this->NextIndex = iVar3;
        if (*(FName *)(lVar2 * 0xf0 + *(longlong *)&this->Set->Elements) == this->Key) break;
        this->Index = iVar3;
        if (iVar3 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<0> @ 142b78e50

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
          *param_1,FName param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  this->Set = param_1;
  this->Key = param_2;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar1 = ::GetTypeHash(param_2.ComparisonIndex.Value);
    FVar4 = (param_1->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    ((longlong)param_1->HashSize - 1U & (longlong)(int)(uVar1 + param_2.Number)) * 4
                    );
    this->NextIndex = iVar3;
    this->Index = iVar3;
    if (iVar3 != -1) {
      while( true ) {
        lVar2 = (longlong)iVar3;
        iVar3 = *(int *)(*(longlong *)&this->Set->Elements + 0x10 + lVar2 * 0x18);
        this->NextIndex = iVar3;
        if (*(FName *)(*(longlong *)&this->Set->Elements + lVar2 * 0x18) == this->Key) break;
        this->Index = iVar3;
        if (iVar3 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

