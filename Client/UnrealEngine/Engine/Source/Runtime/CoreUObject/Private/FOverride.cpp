// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// operator= @ 141e88860

FOverride * __thiscall
FObjectInitializer::FOverrides::FOverride::operator=(FOverride *this,FOverride *param_1)

{
  TUniquePtr<FObjectInitializer::FOverrides,TDefaultDelete<FObjectInitializer::FOverrides>_> *pTVar1
  ;
  FOverrides *pFVar2;
  FOverride *pFVar3;
  bool bVar4;
  bool bVar5;
  FOverrides *this_00;
  ForElementType<FObjectInitializer::FOverrides::FOverride> FVar6;
  ForElementType<FObjectInitializer::FOverrides::FOverride> *pFVar7;
  FName FVar8;
  ForElementType<FObjectInitializer::FOverrides::FOverride> FVar9;
  ForElementType<FObjectInitializer::FOverrides::FOverride> local_28;
  ForElementType<FObjectInitializer::FOverrides::FOverride> local_20;
  
  this->ComponentName = param_1->ComponentName;
  this->ComponentClass = param_1->ComponentClass;
  pFVar2 = (param_1->SubOverrides).Ptr;
  if (pFVar2 == (FOverrides *)0x0) {
    pFVar7 = &local_20;
    bVar5 = false;
    bVar4 = true;
    local_20 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0;
    FVar6 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0;
  }
  else {
    this_00 = ::operator_new(0x110);
    if (this_00 == (FOverrides *)0x0) {
      FVar6 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0;
    }
    else {
      FVar6 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)FOverrides(this_00,pFVar2);
    }
    pFVar7 = &local_28;
    bVar5 = true;
    bVar4 = false;
    local_28 = FVar6;
  }
  pTVar1 = &this->SubOverrides;
  if ((ForElementType<FObjectInitializer::FOverrides::FOverride> *)pTVar1 != pFVar7) {
    pFVar3 = (FOverride *)pTVar1->Ptr;
    pTVar1->Ptr = (FOverrides *)FVar6;
    *pFVar7 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0;
    if (pFVar3 != (FOverride *)0x0) {
      FVar8 = pFVar3[8].ComponentName;
      if (pFVar3[8].ComponentName == (FName)0x0) {
        FVar8 = (FName)pFVar3;
      }
      DestructItems<FObjectInitializer::FOverrides::FOverride,int>
                ((FOverride *)FVar8,*(int *)&pFVar3[8].ComponentClass);
      if (pFVar3[8].ComponentName != (FName)0x0) {
        FMemory::Free((void *)pFVar3[8].ComponentName);
      }
      ::operator_delete(pFVar3,0x110);
    }
  }
  FVar9 = local_20;
  FVar6 = local_28;
  if ((bVar4) && (local_20 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0)) {
    FVar8 = ((FOverride *)((longlong)local_20 + 0x100))->ComponentName;
    if (FVar8 == (FName)0x0) {
      FVar8 = (FName)local_20;
    }
    DestructItems<FObjectInitializer::FOverrides::FOverride,int>
              ((FOverride *)FVar8,
               *(int *)&((FOverride *)((longlong)local_20 + 0x100))->ComponentClass);
    FVar8 = ((FOverride *)((longlong)FVar9 + 0x100))->ComponentName;
    if (FVar8 != (FName)0x0) {
      FMemory::Free((void *)FVar8);
    }
    ::operator_delete((void *)FVar9,0x110);
  }
  if ((bVar5) && (FVar6 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0)) {
    FVar9 = *(ForElementType<FObjectInitializer::FOverrides::FOverride> *)((longlong)FVar6 + 0x100);
    if (*(ForElementType<FObjectInitializer::FOverrides::FOverride> *)((longlong)FVar6 + 0x100) ==
        (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
      FVar9 = FVar6;
    }
    DestructItems<FObjectInitializer::FOverrides::FOverride,int>
              ((FOverride *)FVar9,*(int *)((longlong)FVar6 + 0x108));
    if (*(void **)((longlong)FVar6 + 0x100) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)FVar6 + 0x100));
    }
    ::operator_delete((void *)FVar6,0x110);
  }
  this->bDoNotCreate = param_1->bDoNotCreate;
  return this;
}

