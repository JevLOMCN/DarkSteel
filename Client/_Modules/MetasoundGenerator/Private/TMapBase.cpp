// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 2

// Find @ 14b2b0750

TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>_>
       *this,FOperatorPoolEntryID *param_1)

{
  uint uVar1;
  int iVar2;
  ulong64 uVar3;
  TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  
  uVar1 = (param_1->OperatorSettings).SampleRate;
  iVar2 = (param_1->OperatorSettings).NumFramesPerBlock;
  uVar3 = CityHash64((char *)param_1,0x10);
  iVar2 = TSet<TTuple<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<Metasound::FOperatorPoolEntryID>
                    (&this->Pairs,
                     ((uint)(uVar3 >> 2) & 0x3fffffff) + 0x9e3779b9 +
                     (uint)uVar3 * 0x40 +
                     (iVar2 + -0x61c88647 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1) ^ (uint)uVar3,
                     param_1);
  if (iVar2 != -1) {
    lVar5 = (longlong)iVar2 * 0x38 + *(longlong *)&(this->Pairs).Elements;
    pTVar4 = (TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_> *)0x0;
    if (lVar5 != 0) {
      pTVar4 = (TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_> *)(lVar5 + 0x20);
    }
    return pTVar4;
  }
  return (TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_> *)0x0;
}

// Remove @ 14b2b66a0

int __thiscall
TMapBase<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>_>
::Remove(TMapBase<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>_>
         *this,FOperatorPoolEntryID *param_1)

{
  uint uVar1;
  int iVar2;
  ulong64 uVar3;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar1 = (param_1->OperatorSettings).SampleRate;
    iVar2 = (param_1->OperatorSettings).NumFramesPerBlock;
    uVar3 = CityHash64((char *)param_1,0x10);
    iVar2 = TSet<TTuple<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::RemoveImpl<Metasound::FOperatorPoolEntryID>
                      (&this->Pairs,
                       ((uint)(uVar3 >> 2) & 0x3fffffff) + 0x9e3779b9 +
                       (uint)uVar3 * 0x40 +
                       (iVar2 + -0x61c88647 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1) ^ (uint)uVar3,
                       param_1);
    return iVar2;
  }
  return 0;
}

