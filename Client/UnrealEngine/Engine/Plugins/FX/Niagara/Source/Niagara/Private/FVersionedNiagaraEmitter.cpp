// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// StaticStruct @ 149412760

UScriptStruct * __cdecl FVersionedNiagaraEmitter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVersionedNiagaraEmitter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FVersionedNiagaraEmitter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVersionedNiagaraEmitter,(UObject *)pUVar1,
                         L"VersionedNiagaraEmitter");
  }
  return Z_Registration_Info_UScriptStruct_FVersionedNiagaraEmitter.OuterSingleton;
}

// GetEmitterData @ 149449ba0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVersionedNiagaraEmitterData * __thiscall
FVersionedNiagaraEmitter::GetEmitterData(FVersionedNiagaraEmitter *this)

{
  UNiagaraEmitter *this_00;
  FVersionedNiagaraEmitterData *pFVar1;
  
  this_00 = (this->Emitter).field0_0x0.DebugPtr;
  if (this_00 != (UNiagaraEmitter *)0x0) {
    pFVar1 = UNiagaraEmitter::GetEmitterData(this_00,&this->Version);
    return pFVar1;
  }
  return (FVersionedNiagaraEmitterData *)0x0;
}

// ToBase @ 14946b8c0

FVersionedNiagaraEmitterBase * __thiscall
FVersionedNiagaraEmitter::ToBase
          (FVersionedNiagaraEmitter *this,FVersionedNiagaraEmitterBase *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (this->Version).A;
  uVar2 = (this->Version).B;
  uVar3 = (this->Version).C;
  uVar4 = (this->Version).D;
  __return_storage_ptr__->Emitter = (UNiagaraEmitterBase *)(this->Emitter).field0_0x0;
  (__return_storage_ptr__->Version).A = uVar1;
  (__return_storage_ptr__->Version).B = uVar2;
  (__return_storage_ptr__->Version).C = uVar3;
  (__return_storage_ptr__->Version).D = uVar4;
  return __return_storage_ptr__;
}

// ToWeakPtr @ 14946c1b0

FVersionedNiagaraEmitterWeakPtr * __thiscall
FVersionedNiagaraEmitter::ToWeakPtr
          (FVersionedNiagaraEmitter *this,FVersionedNiagaraEmitterWeakPtr *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  UNiagaraEmitter *local_res8;
  
  local_res8 = (this->Emitter).field0_0x0.DebugPtr;
  (__return_storage_ptr__->Emitter).WeakPtr = (FWeakObjectPtr)0x0;
  (__return_storage_ptr__->Version).A = 0;
  (__return_storage_ptr__->Version).B = 0;
  (__return_storage_ptr__->Version).C = 0;
  (__return_storage_ptr__->Version).D = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UNiagaraEmitter *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_res8);
  uVar1 = (this->Version).B;
  uVar2 = (this->Version).C;
  uVar3 = (this->Version).D;
  (__return_storage_ptr__->Version).A = (this->Version).A;
  (__return_storage_ptr__->Version).B = uVar1;
  (__return_storage_ptr__->Version).C = uVar2;
  (__return_storage_ptr__->Version).D = uVar3;
  return __return_storage_ptr__;
}

