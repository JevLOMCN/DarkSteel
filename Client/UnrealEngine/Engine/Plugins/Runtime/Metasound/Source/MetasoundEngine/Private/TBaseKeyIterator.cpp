// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 2

// TBaseKeyIterator<1> @ 14b339410

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<FMetasoundFrontendClassName_const_> param_2)

{
  FName *pFVar1;
  FMetasoundFrontendClassName *pFVar2;
  uint uVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar3 = ::GetTypeHash(param_2.Ref);
    FVar5 = (param_1->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + ((longlong)param_1->HashSize - 1U & (longlong)(int)uVar3) * 4
                    );
    this->NextIndex = iVar6;
    this->Index = iVar6;
    if (iVar6 != -1) {
      pFVar2 = this->Key;
      while( true ) {
        lVar4 = (longlong)iVar6;
        iVar6 = *(int *)(*(longlong *)&this->Set->Elements + 0x20 + lVar4 * 0x28);
        this->NextIndex = iVar6;
        pFVar1 = (FName *)(*(longlong *)&this->Set->Elements + lVar4 * 0x28);
        if (((*pFVar1 == pFVar2->Namespace) && (pFVar1[1] == pFVar2->Name)) &&
           (pFVar1[2] == pFVar2->Variant)) break;
        this->Index = iVar6;
        if (iVar6 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<0> @ 14b3394f0

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendClassName,TWeakObjectPtr<UMetaSoundBuilderBase,FWeakObjectPtr>,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<FMetasoundFrontendClassName_const_> param_2)

{
  FName *pFVar1;
  FMetasoundFrontendClassName *pFVar2;
  uint uVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar3 = ::GetTypeHash(param_2.Ref);
    FVar5 = (param_1->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + ((longlong)param_1->HashSize - 1U & (longlong)(int)uVar3) * 4
                    );
    this->NextIndex = iVar6;
    this->Index = iVar6;
    if (iVar6 != -1) {
      pFVar2 = this->Key;
      while( true ) {
        lVar4 = (longlong)iVar6;
        iVar6 = *(int *)(*(longlong *)&this->Set->Elements + 0x20 + lVar4 * 0x28);
        this->NextIndex = iVar6;
        pFVar1 = (FName *)(*(longlong *)&this->Set->Elements + lVar4 * 0x28);
        if (((*pFVar1 == pFVar2->Namespace) && (pFVar1[1] == pFVar2->Name)) &&
           (pFVar1[2] == pFVar2->Variant)) break;
        this->Index = iVar6;
        if (iVar6 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

