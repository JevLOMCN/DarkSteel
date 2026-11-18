// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FRDGParameterStruct<FCopyCompressCS::FParameters> @ 14899ef40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGParameterStruct * __thiscall
FRDGParameterStruct::FRDGParameterStruct<FCopyCompressCS::FParameters>
          (FRDGParameterStruct *this,FParameters *param_1,FShaderParametersMetadata *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FRDGParameterStruct *pFVar3;
  
  this->Contents = (uchar *)param_1;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGParameterStruct *)(*pcVar1)();
      return pFVar3;
    }
  }
  this_00 = (param_2->Layout).Reference;
  (this->Layout).Reference = this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->Metadata = param_2;
  return this;
}

