// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 1

// TBaseKeyIterator<1> @ 14ad36e60

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>,Metasound::FDataEdge>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>,Metasound::FDataEdge,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>,Metasound::FDataEdge>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>,Metasound::FDataEdge,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>_const_>
                   param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    FVar5 = (param_1->Hash).SecondaryData;
    uVar2 = ((uint)(*(ulonglong *)param_2.Ref >> 0x14) & 0xffff ^
            (uint)(*(ulonglong *)param_2.Ref >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    uVar2 = uVar2 >> 0x10 ^ uVar2;
    uVar3 = ((uint)(*(ulonglong *)&(param_2.Ref)->field_0x8 >> 0x14) & 0xffff ^
            (uint)(*(ulonglong *)&(param_2.Ref)->field_0x8 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar1 = *(int *)((longlong)FVar5 +
                    (((longlong)(int)((uVar3 >> 0x10 ^ uVar3) + (uVar2 >> 2) + uVar2 * 0x40) -
                      0x61c88647U ^ (longlong)(int)uVar2) & (longlong)param_1->HashSize - 1U) * 4);
    this->NextIndex = iVar1;
    this->Index = iVar1;
    if (iVar1 != -1) {
      while( true ) {
        lVar4 = (longlong)iVar1 * 0x80;
        iVar1 = *(int *)(lVar4 + 0x78 + *(longlong *)&param_1->Elements);
        this->NextIndex = iVar1;
        if ((*(longlong *)(*(longlong *)&param_1->Elements + lVar4) == *(longlong *)param_2.Ref) &&
           (*(longlong *)(*(longlong *)&param_1->Elements + 8 + lVar4) ==
            *(longlong *)&(param_2.Ref)->field_0x8)) break;
        this->Index = iVar1;
        if (iVar1 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

