// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// GetLayout @ 14487c920

FRHIUniformBufferLayout * __thiscall
FShaderParametersMetadata::GetLayout(FShaderParametersMetadata *this)

{
  code *pcVar1;
  bool bVar2;
  FRHIUniformBufferLayout *pFVar3;
  
  if ((this->Layout).Reference != (FRHIUniformBufferLayout *)0x0) {
    return (this->Layout).Reference;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsLayoutInitialized()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                     ,0x177,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRHIUniformBufferLayout *)(*pcVar1)();
    return pFVar3;
  }
  return (this->Layout).Reference;
}

// GetLayoutPtr @ 14487c970

FRHIUniformBufferLayout * __thiscall
FShaderParametersMetadata::GetLayoutPtr(FShaderParametersMetadata *this)

{
  code *pcVar1;
  bool bVar2;
  FRHIUniformBufferLayout *pFVar3;
  
  if ((this->Layout).Reference != (FRHIUniformBufferLayout *)0x0) {
    return (this->Layout).Reference;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsLayoutInitialized()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                     ,0x17c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRHIUniformBufferLayout *)(*pcVar1)();
    return pFVar3;
  }
  return (this->Layout).Reference;
}

// GetPreferredBindingFlag @ 1450d19e0

EUniformBufferBindingFlags __thiscall
FShaderParametersMetadata::GetPreferredBindingFlag(FShaderParametersMetadata *this)

{
  EUniformBufferBindingFlags EVar1;
  
  EVar1 = Static;
  if (this->BindingFlags != StaticAndShader) {
    EVar1 = this->BindingFlags;
  }
  return EVar1;
}

