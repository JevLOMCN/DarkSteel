// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// StaticStruct @ 1493c4410

UScriptStruct * __cdecl FNiagaraSystemScalabilityOverrides::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilityOverrides.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilityOverrides.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides,
                         (UObject *)pUVar1,L"NiagaraSystemScalabilityOverrides");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilityOverrides.OuterSingleton;
}

// FNiagaraSystemScalabilityOverrides @ 1493cdeb0

FNiagaraSystemScalabilityOverrides * __thiscall
FNiagaraSystemScalabilityOverrides::FNiagaraSystemScalabilityOverrides
          (FNiagaraSystemScalabilityOverrides *this)

{
  (this->Overrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Overrides).ArrayNum = 0;
  (this->Overrides).ArrayMax = 0;
  return this;
}

// ~FNiagaraSystemScalabilityOverrides @ 1493d14f0

void __thiscall
FNiagaraSystemScalabilityOverrides::~FNiagaraSystemScalabilityOverrides
          (FNiagaraSystemScalabilityOverrides *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FNiagaraSystemScalabilityOverride,int>
            ((FNiagaraSystemScalabilityOverride *)(this->Overrides).AllocatorInstance.Data,
             (this->Overrides).ArrayNum);
  pFVar1 = (this->Overrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

