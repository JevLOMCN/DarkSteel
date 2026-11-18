// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 1

// UEOpEquals @ 14ea70980

bool __thiscall
TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UMediaTexture,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

