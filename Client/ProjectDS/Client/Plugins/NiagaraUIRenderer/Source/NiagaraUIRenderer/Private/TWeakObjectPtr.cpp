// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraUIRenderer
// Functions: 1

// UEOpEquals @ 14d29a0f0

bool __thiscall
TWeakObjectPtr<UNiagaraUIComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UNiagaraUIComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

