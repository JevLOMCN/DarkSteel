// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 2

// AreSatisfiedBy @ 1496d7340

bool __thiscall
FToolTargetTypeRequirements::AreSatisfiedBy(FToolTargetTypeRequirements *this,UClass *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<UClass_const_*> FVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  
  FVar3 = (this->Interfaces).AllocatorInstance.SecondaryData;
  piVar1 = &(this->Interfaces).ArrayNum;
  iVar2 = *piVar1;
  if (FVar3 != (ForElementType<UClass_const_*>)0x0) {
    this = (FToolTargetTypeRequirements *)FVar3;
  }
  FVar3 = (ForElementType<UClass_const_*>)((longlong)this + (longlong)iVar2 * 8);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<UClass_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((ForElementType<UClass_const_*>)this == FVar3) break;
    bVar4 = UClass::ImplementsInterface(param_1,*(UClass **)this);
    if (!bVar4) {
      return false;
    }
    this = (FToolTargetTypeRequirements *)((longlong)this + 8);
  }
  return true;
}

// AreSatisfiedBy @ 1496d73c0

bool __thiscall
FToolTargetTypeRequirements::AreSatisfiedBy(FToolTargetTypeRequirements *this,UToolTarget *param_1)

{
  bool bVar1;
  
  if (param_1 == (UToolTarget *)0x0) {
    return false;
  }
  bVar1 = AreSatisfiedBy(this,*(UClass **)&param_1->field_0x10);
  return bVar1;
}

