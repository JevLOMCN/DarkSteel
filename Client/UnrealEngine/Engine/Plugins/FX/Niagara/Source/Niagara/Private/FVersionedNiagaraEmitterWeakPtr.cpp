// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// FVersionedNiagaraEmitterWeakPtr @ 149428420

FVersionedNiagaraEmitterWeakPtr * __thiscall
FVersionedNiagaraEmitterWeakPtr::FVersionedNiagaraEmitterWeakPtr
          (FVersionedNiagaraEmitterWeakPtr *this,UNiagaraEmitter *param_1,FGuid *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  UNiagaraEmitter *local_res8;
  
  (this->Emitter).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Version).A = 0;
  (this->Version).B = 0;
  (this->Version).C = 0;
  (this->Version).D = 0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNiagaraEmitter *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  uVar1 = param_2->B;
  uVar2 = param_2->C;
  uVar3 = param_2->D;
  (this->Version).A = param_2->A;
  (this->Version).B = uVar1;
  (this->Version).C = uVar2;
  (this->Version).D = uVar3;
  return this;
}

// GetEmitterData @ 149449bc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVersionedNiagaraEmitterData * __thiscall
FVersionedNiagaraEmitterWeakPtr::GetEmitterData(FVersionedNiagaraEmitterWeakPtr *this)

{
  bool bVar1;
  UNiagaraEmitter *this_00;
  FVersionedNiagaraEmitterData *pFVar2;
  FGuid local_20;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar1) {
    this_00 = (UNiagaraEmitter *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UNiagaraEmitter *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    local_20.A = (this->Version).A;
    local_20.B = (this->Version).B;
    local_20.C = (this->Version).C;
    local_20.D = (this->Version).D;
    if (this_00 != (UNiagaraEmitter *)0x0) {
      pFVar2 = UNiagaraEmitter::GetEmitterData(this_00,&local_20);
      return pFVar2;
    }
  }
  return (FVersionedNiagaraEmitterData *)0x0;
}

// IsValid @ 1494545d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FVersionedNiagaraEmitterWeakPtr::IsValid(FVersionedNiagaraEmitterWeakPtr *this)

{
  bool bVar1;
  UNiagaraEmitter *this_00;
  FVersionedNiagaraEmitterData *pFVar2;
  FGuid local_20;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar1) {
    this_00 = (UNiagaraEmitter *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UNiagaraEmitter *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    local_20.A = (this->Version).A;
    local_20.B = (this->Version).B;
    local_20.C = (this->Version).C;
    local_20.D = (this->Version).D;
    if (this_00 != (UNiagaraEmitter *)0x0) {
      pFVar2 = UNiagaraEmitter::GetEmitterData(this_00,&local_20);
      return pFVar2 != (FVersionedNiagaraEmitterData *)0x0;
    }
  }
  return false;
}

// ResolveWeakPtr @ 1494641e0

FVersionedNiagaraEmitter * __thiscall
FVersionedNiagaraEmitterWeakPtr::ResolveWeakPtr
          (FVersionedNiagaraEmitterWeakPtr *this,FVersionedNiagaraEmitter *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  UNiagaraEmitter *pUVar5;
  
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar4) {
    pUVar5 = (UNiagaraEmitter *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    (__return_storage_ptr__->Emitter).field0_0x0.DebugPtr = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UNiagaraEmitter *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    uVar1 = (this->Version).B;
    uVar2 = (this->Version).C;
    uVar3 = (this->Version).D;
    (__return_storage_ptr__->Version).A = (this->Version).A;
    (__return_storage_ptr__->Version).B = uVar1;
    (__return_storage_ptr__->Version).C = uVar2;
    (__return_storage_ptr__->Version).D = uVar3;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Emitter).field0_0x0.DebugPtr = (UNiagaraEmitter *)0x0;
  (__return_storage_ptr__->Version).A = 0;
  (__return_storage_ptr__->Version).B = 0;
  (__return_storage_ptr__->Version).C = 0;
  (__return_storage_ptr__->Version).D = 0;
  return __return_storage_ptr__;
}

// ToWeakBase @ 14946c190

FVersionedNiagaraEmitterBaseWeakPtr * __thiscall
FVersionedNiagaraEmitterWeakPtr::ToWeakBase
          (FVersionedNiagaraEmitterWeakPtr *this,
          FVersionedNiagaraEmitterBaseWeakPtr *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (this->Version).A;
  uVar2 = (this->Version).B;
  uVar3 = (this->Version).C;
  uVar4 = (this->Version).D;
  (__return_storage_ptr__->Emitter).WeakPtr = (this->Emitter).WeakPtr;
  (__return_storage_ptr__->Version).A = uVar1;
  (__return_storage_ptr__->Version).B = uVar2;
  (__return_storage_ptr__->Version).C = uVar3;
  (__return_storage_ptr__->Version).D = uVar4;
  return __return_storage_ptr__;
}

