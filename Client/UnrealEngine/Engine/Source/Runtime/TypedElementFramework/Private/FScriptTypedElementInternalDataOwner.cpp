// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 1

// FScriptTypedElementInternalDataOwner @ 142c98660

FScriptTypedElementInternalDataOwner * __thiscall
FScriptTypedElementInternalDataOwner::FScriptTypedElementInternalDataOwner
          (FScriptTypedElementInternalDataOwner *this,FTypedElementInternalData *param_1)

{
  FScriptTypedElementInternalDataOwner FVar1;
  
  FVar1 = (FScriptTypedElementInternalDataOwner)::operator_new(0x10);
  if (FVar1 == (FScriptTypedElementInternalDataOwner)0x0) {
    *this = (FScriptTypedElementInternalDataOwner)0x0;
  }
  else {
    *(FTypedElementInternalData **)FVar1 = param_1;
    *(undefined4 *)((longlong)FVar1 + 8) = 0;
    *this = FVar1;
    *(int *)((longlong)FVar1 + 8) = *(int *)((longlong)FVar1 + 8) + 1;
  }
  FVar1 = (FScriptTypedElementInternalDataOwner)::operator_new(0x10);
  if (FVar1 != (FScriptTypedElementInternalDataOwner)0x0) {
    *(FTypedElementInternalData **)FVar1 = param_1;
    *(undefined4 *)((longlong)FVar1 + 8) = 0;
    *this = FVar1;
    *(int *)((longlong)FVar1 + 8) = *(int *)((longlong)FVar1 + 8) + 1;
    return this;
  }
  *this = (FScriptTypedElementInternalDataOwner)0x0;
  return this;
}

