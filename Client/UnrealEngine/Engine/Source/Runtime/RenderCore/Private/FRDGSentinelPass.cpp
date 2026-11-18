// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// FRDGSentinelPass @ 145d8ce70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGSentinelPass * __thiscall
FRDGSentinelPass::FRDGSentinelPass
          (FRDGSentinelPass *this,FRDGEventName *param_1,ERDGPassFlags param_2)

{
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  FRDGSentinelPass *pFVar4;
  FRDGParameterStruct local_28;
  
  pFVar3 = FEmptyShaderParameters::FTypeInfo::GetStructMetadata();
  local_28.Contents = (uchar *)&EmptyShaderParameters;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGSentinelPass *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_28.Layout.Reference = (pFVar3->Layout).Reference;
  if (local_28.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_28.Layout.Reference);
  }
  local_28.Metadata = pFVar3;
  FRDGPass::FRDGPass((FRDGPass *)this,param_1,&local_28,param_2 | NeverCull,Async);
  *(undefined ***)this = &___7FRDGSentinelPass__6B_;
  *(ushort *)&this->field_0x54 = *(ushort *)&this->field_0x54 | 0x80;
  return this;
}

