// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// TBaseKeyIterator<1> @ 1426f56d0

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FTabId,FLayoutExtender::FExtendedTab>,TDefaultMapHashableKeyFuncs<FTabId,FLayoutExtender::FExtendedTab,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<FTabId,FLayoutExtender::FExtendedTab>,TDefaultMapHashableKeyFuncs<FTabId,FLayoutExtender::FExtendedTab,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<FTabId_const_> param_2)

{
  uint uVar1;
  FName FVar2;
  uint uVar3;
  longlong lVar4;
  FName *pFVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    FVar2 = (param_2.Ref)->TabType;
    uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    FVar6 = (param_1->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar7 = *(int *)((longlong)FVar6 +
                    ((longlong)(int)((param_2.Ref)->InstanceId ^ uVar3 + FVar2.Number) &
                    (longlong)param_1->HashSize - 1U) * 4);
    this->NextIndex = iVar7;
    this->Index = iVar7;
    if (iVar7 != -1) {
      while( true ) {
        lVar4 = (longlong)iVar7;
        iVar7 = *(int *)(lVar4 * 0x3c + 0x34 + *(longlong *)&this->Set->Elements);
        this->NextIndex = iVar7;
        pFVar5 = (FName *)(lVar4 * 0x3c + *(longlong *)&this->Set->Elements);
        if ((*pFVar5 == this->Key->TabType) &&
           (((uVar3 = pFVar5[1].ComparisonIndex.Value, uVar3 == 0xffffffff ||
             (uVar1 = this->Key->InstanceId, uVar1 == 0xffffffff)) || (uVar3 == uVar1)))) break;
        this->Index = iVar7;
        if (iVar7 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<1> @ 1426f57d0

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FName,FLayoutExtender::FExtendedArea>,TDefaultMapHashableKeyFuncs<FName,FLayoutExtender::FExtendedArea,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<FName,FLayoutExtender::FExtendedArea>,TDefaultMapHashableKeyFuncs<FName,FLayoutExtender::FExtendedArea,1>,FDefaultSetAllocator>
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
        iVar3 = *(int *)(*(longlong *)&this->Set->Elements + 0x40 + lVar2 * 0x50);
        this->NextIndex = iVar3;
        if (*(FName *)(*(longlong *)&this->Set->Elements + lVar2 * 0x50) == this->Key) break;
        this->Index = iVar3;
        if (iVar3 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<1> @ 1426f58a0

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FName,FLayoutExtender::FExtendedTab>,TDefaultMapHashableKeyFuncs<FName,FLayoutExtender::FExtendedTab,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<FName,FLayoutExtender::FExtendedTab>,TDefaultMapHashableKeyFuncs<FName,FLayoutExtender::FExtendedTab,1>,FDefaultSetAllocator>
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
        iVar3 = *(int *)(*(longlong *)&this->Set->Elements + 0x2c + lVar2 * 0x34);
        this->NextIndex = iVar3;
        if (*(FName *)(lVar2 * 0x34 + *(longlong *)&this->Set->Elements) == this->Key) break;
        this->Index = iVar3;
        if (iVar3 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<0> @ 1426f5970

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>::
TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>
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

