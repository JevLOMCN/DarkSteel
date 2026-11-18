// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// GetRHIRef @ 1492f15f0

TUniformBufferRef<FSceneUniformParameters> __thiscall
TRDGUniformBuffer<FSceneUniformParameters>::GetRHIRef
          (TRDGUniformBuffer<FSceneUniformParameters> *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TUniformBufferRef<FSceneUniformParameters> TVar4;
  TUniformBufferRef<FSceneUniformParameters> in_RDX;
  
  FRDGResource::ValidateRHIAccess((FRDGResource *)this);
  this_00 = (FRHIResource *)this->_padding_;
  *(FRHIResource **)in_RDX = this_00;
  if (this_00 == (FRHIResource *)0x0) {
    return in_RDX;
  }
  FRHIResource::AddRef(this_00);
  pFVar3 = ::GetForwardDeclaredShaderParametersStructMetadata((FSceneUniformParameters *)0x0);
  if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4 = (TUniformBufferRef<FSceneUniformParameters>)(*pcVar1)();
    return TVar4;
  }
  if ((FName)(pFVar3->Layout).Reference != this_00[2].OwnerName) {
    pFVar3 = ::GetForwardDeclaredShaderParametersStructMetadata((FSceneUniformParameters *)0x0);
    if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x177,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FSceneUniformParameters>)(*pcVar1)();
      return TVar4;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x96,
                       L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FSceneUniformParameters>)(*pcVar1)();
      return TVar4;
    }
  }
  return in_RDX;
}

