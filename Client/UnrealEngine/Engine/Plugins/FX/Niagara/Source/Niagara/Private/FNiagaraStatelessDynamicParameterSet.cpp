// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 149416830

UScriptStruct * __cdecl FNiagaraStatelessDynamicParameterSet::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessDynamicParameterSet.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessDynamicParameterSet.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet,
                         (UObject *)pUVar1,L"NiagaraStatelessDynamicParameterSet");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStatelessDynamicParameterSet.OuterSingleton;
}

// ~FNiagaraStatelessDynamicParameterSet @ 14942bc10

void __thiscall
FNiagaraStatelessDynamicParameterSet::~FNiagaraStatelessDynamicParameterSet
          (FNiagaraStatelessDynamicParameterSet *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->WChannelDistribution).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->WChannelDistribution)._padding_);
  pFVar1 = (this->ZChannelDistribution).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->ZChannelDistribution)._padding_);
  pFVar1 = (this->YChannelDistribution).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->YChannelDistribution)._padding_);
  pFVar1 = (this->XChannelDistribution).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->XChannelDistribution)._padding_);
  return;
}

