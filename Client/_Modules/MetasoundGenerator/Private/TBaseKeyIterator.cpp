// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 2

// TBaseKeyIterator<1> @ 14b2a5c00

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<Metasound::FOperatorPoolEntryID_const_> param_2)

{
  uint uVar1;
  FOperatorPoolEntryID *pFVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  ForElementType<FSetElementId> FVar6;
  uint *puVar7;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar1 = ((param_2.Ref)->OperatorSettings).SampleRate;
    iVar4 = ((param_2.Ref)->OperatorSettings).NumFramesPerBlock;
    uVar5 = CityHash64((char *)param_2.Ref,0x10);
    FVar6 = (param_1->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (((longlong)
                      (int)((int)uVar5 * 0x40 +
                           ((uint)(uVar5 >> 2) & 0x3fffffff) +
                           (iVar4 + -0x61c88647 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1)) -
                      0x61c88647U ^ (longlong)(int)uVar5) & (longlong)param_1->HashSize - 1U) * 4);
    this->NextIndex = iVar4;
    this->Index = iVar4;
    if (iVar4 != -1) {
      while( true ) {
        pFVar2 = this->Key;
        this->NextIndex =
             *(int *)(*(longlong *)&this->Set->Elements + 0x30 + (longlong)iVar4 * 0x38);
        puVar7 = (uint *)(*(longlong *)&this->Set->Elements + (longlong)iVar4 * 0x38);
        if ((((puVar7[3] == (pFVar2->OperatorID).D && puVar7[2] == (pFVar2->OperatorID).C) &&
             puVar7[1] == (pFVar2->OperatorID).B) && (pFVar2->OperatorID).A == *puVar7) &&
           (bVar3 = Metasound::operator==
                              ((FOperatorSettings *)(puVar7 + 4),&pFVar2->OperatorSettings), bVar3))
        break;
        iVar4 = this->NextIndex;
        this->Index = iVar4;
        if (iVar4 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<0> @ 14b2a5d40

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<Metasound::FOperatorPoolEntryID_const_> param_2)

{
  uint uVar1;
  FOperatorPoolEntryID *pFVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  ForElementType<FSetElementId> FVar6;
  uint *puVar7;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar1 = ((param_2.Ref)->OperatorSettings).SampleRate;
    iVar4 = ((param_2.Ref)->OperatorSettings).NumFramesPerBlock;
    uVar5 = CityHash64((char *)param_2.Ref,0x10);
    FVar6 = (param_1->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (((longlong)
                      (int)((int)uVar5 * 0x40 +
                           ((uint)(uVar5 >> 2) & 0x3fffffff) +
                           (iVar4 + -0x61c88647 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1)) -
                      0x61c88647U ^ (longlong)(int)uVar5) & (longlong)param_1->HashSize - 1U) * 4);
    this->NextIndex = iVar4;
    this->Index = iVar4;
    if (iVar4 != -1) {
      while( true ) {
        pFVar2 = this->Key;
        this->NextIndex =
             *(int *)(*(longlong *)&this->Set->Elements + 0x30 + (longlong)iVar4 * 0x38);
        puVar7 = (uint *)(*(longlong *)&this->Set->Elements + (longlong)iVar4 * 0x38);
        if ((((puVar7[3] == (pFVar2->OperatorID).D && puVar7[2] == (pFVar2->OperatorID).C) &&
             puVar7[1] == (pFVar2->OperatorID).B) && (pFVar2->OperatorID).A == *puVar7) &&
           (bVar3 = Metasound::operator==
                              ((FOperatorSettings *)(puVar7 + 4),&pFVar2->OperatorSettings), bVar3))
        break;
        iVar4 = this->NextIndex;
        this->Index = iVar4;
        if (iVar4 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

