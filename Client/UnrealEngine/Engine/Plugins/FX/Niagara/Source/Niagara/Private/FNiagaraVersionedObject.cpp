// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// ~FNiagaraVersionedObject @ 14927a780

void __thiscall FNiagaraVersionedObject::~FNiagaraVersionedObject(FNiagaraVersionedObject *this)

{
  return;
}

// GetAllAvailableVersions @ 149448500

TArray<FNiagaraAssetVersion,TSizedDefaultAllocator<32>_> * __thiscall
FNiagaraVersionedObject::GetAllAvailableVersions
          (FNiagaraVersionedObject *this,
          TArray<FNiagaraAssetVersion,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArray<FNiagaraAssetVersion,TSizedDefaultAllocator<32>_> *pTVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4104621595346075723>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraVersionedObject.cpp"
                     ,0x4b,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<FNiagaraAssetVersion,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

