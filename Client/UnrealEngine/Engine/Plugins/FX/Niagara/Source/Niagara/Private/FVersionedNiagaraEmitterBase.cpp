// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FVersionedNiagaraEmitterBase @ 1492770d0

FVersionedNiagaraEmitterBase * __thiscall
FVersionedNiagaraEmitterBase::FVersionedNiagaraEmitterBase
          (FVersionedNiagaraEmitterBase *this,FVersionedNiagaraEmitterBaseWeakPtr *param_1)

{
  UNiagaraEmitterBase *pUVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  this->Emitter = (UNiagaraEmitterBase *)0x0;
  (this->Version).A = 0;
  (this->Version).B = 0;
  (this->Version).C = 0;
  (this->Version).D = 0;
  pUVar1 = (UNiagaraEmitterBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  this->Emitter = pUVar1;
  if (pUVar1 == (UNiagaraEmitterBase *)0x0) {
    local_18 = 0;
    uStack_10 = 0;
  }
  else {
    local_18._0_4_ = (param_1->Version).A;
    local_18._4_4_ = (param_1->Version).B;
    uStack_10._0_4_ = (param_1->Version).C;
    uStack_10._4_4_ = (param_1->Version).D;
  }
  (this->Version).A = (undefined4)local_18;
  (this->Version).B = local_18._4_4_;
  (this->Version).C = (undefined4)uStack_10;
  (this->Version).D = uStack_10._4_4_;
  return this;
}

// ToWeakPtr @ 1492bd480

FVersionedNiagaraEmitterBaseWeakPtr * __thiscall
FVersionedNiagaraEmitterBase::ToWeakPtr
          (FVersionedNiagaraEmitterBase *this,
          FVersionedNiagaraEmitterBaseWeakPtr *__return_storage_ptr__)

{
  UNiagaraEmitterBase *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  UNiagaraEmitterBase *local_res8;
  
  pUVar1 = this->Emitter;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UNiagaraEmitterBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (__return_storage_ptr__->Emitter).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UNiagaraEmitterBase *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_res8);
  uVar2 = (this->Version).B;
  uVar3 = (this->Version).C;
  uVar4 = (this->Version).D;
  (__return_storage_ptr__->Version).A = (this->Version).A;
  (__return_storage_ptr__->Version).B = uVar2;
  (__return_storage_ptr__->Version).C = uVar3;
  (__return_storage_ptr__->Version).D = uVar4;
  return __return_storage_ptr__;
}

