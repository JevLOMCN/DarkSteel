// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// Compare @ 14933ff90

int __cdecl
FNiagaraVariableSearch::Compare(FNiagaraVariableBase *param_1,FNiagaraVariableBase *param_2)

{
  int iVar1;
  int iVar2;
  FNiagaraTypeDefinition *pFVar3;
  FName FVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  
  iVar1 = (param_1->Name).ComparisonIndex.Value - (param_2->Name).ComparisonIndex.Value;
  if ((iVar1 == 0) && (iVar1 = (param_1->Name).Number - (param_2->Name).Number, iVar1 == 0)) {
    pFVar3 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
    uVar5 = 0;
    iVar2 = 0;
    uVar6 = uVar5;
    iVar7 = iVar2;
    if ((pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
      FVar4 = UE::CoreUObject::Private::GetFName((UObject *)&stack0x00000008);
      uVar6 = *(undefined8 *)FVar4;
      iVar7 = (int)((ulonglong)*(undefined8 *)FVar4 >> 0x20);
    }
    pFVar3 = FNiagaraTypeDefinitionHandle::Resolve(&param_2->TypeDefHandle);
    if ((pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
      FVar4 = UE::CoreUObject::Private::GetFName((UObject *)&stack0x00000008);
      uVar5 = *(undefined8 *)FVar4;
      iVar2 = (int)((ulonglong)uVar5 >> 0x20);
    }
    iVar1 = (int)uVar6 - (int)uVar5;
    if (iVar1 == 0) {
      iVar1 = iVar7 - iVar2;
    }
  }
  return iVar1;
}

// CompareIgnoreType @ 149340050

int __cdecl
FNiagaraVariableSearch::CompareIgnoreType
          (FNiagaraVariableBase *param_1,FNiagaraVariableBase *param_2)

{
  int iVar1;
  
  iVar1 = (param_1->Name).ComparisonIndex.Value - (param_2->Name).ComparisonIndex.Value;
  if (iVar1 == 0) {
    iVar1 = (param_1->Name).Number - (param_2->Name).Number;
  }
  return iVar1;
}

