// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 2

// StaticStruct @ 148de8dd0

UScriptStruct * __cdecl FNiagaraShaderScriptParametersMetadata::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraShaderScriptParametersMetadata.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraShader();
    Z_Registration_Info_UScriptStruct_FNiagaraShaderScriptParametersMetadata.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata,
                         (UObject *)pUVar1,L"NiagaraShaderScriptParametersMetadata");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraShaderScriptParametersMetadata.OuterSingleton;
}

// ~FNiagaraShaderScriptParametersMetadata @ 148df15e0

void __thiscall
FNiagaraShaderScriptParametersMetadata::~FNiagaraShaderScriptParametersMetadata
          (FNiagaraShaderScriptParametersMetadata *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ShaderParametersMetadata).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->StructIncludeInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraShaderScriptExternalConstant,int>
            ((FNiagaraShaderScriptExternalConstant *)
             (this->ExternalConstants).AllocatorInstance.Data,(this->ExternalConstants).ArrayNum);
  pFVar1 = (this->ExternalConstants).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->LooseMetadataNames).AllocatorInstance.Data,
             (this->LooseMetadataNames).ArrayNum);
  pFVar1 = (this->LooseMetadataNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraDataInterfaceGPUParamInfo,int>
            ((FNiagaraDataInterfaceGPUParamInfo *)
             (this->DataInterfaceParamInfo).AllocatorInstance.Data,
             (this->DataInterfaceParamInfo).ArrayNum);
  pFVar1 = (this->DataInterfaceParamInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

