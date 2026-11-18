// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FVersionedNiagaraEmitterBaseWeakPtr @ 149277140

FVersionedNiagaraEmitterBaseWeakPtr * __thiscall
FVersionedNiagaraEmitterBaseWeakPtr::FVersionedNiagaraEmitterBaseWeakPtr
          (FVersionedNiagaraEmitterBaseWeakPtr *this,FVersionedNiagaraEmitterBase *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  UNiagaraEmitterBase *local_res8;
  
  (this->Emitter).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Version).A = 0;
  (this->Version).B = 0;
  (this->Version).C = 0;
  (this->Version).D = 0;
  local_res8 = param_1->Emitter;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res8 != (UNiagaraEmitterBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  uVar1 = (param_1->Version).B;
  uVar2 = (param_1->Version).C;
  uVar3 = (param_1->Version).D;
  (this->Version).A = (param_1->Version).A;
  (this->Version).B = uVar1;
  (this->Version).C = uVar2;
  (this->Version).D = uVar3;
  return this;
}

