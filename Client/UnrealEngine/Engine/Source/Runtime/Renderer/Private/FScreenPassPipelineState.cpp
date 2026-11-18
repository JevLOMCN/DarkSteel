// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Validate @ 1447ba8a0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FScreenPassPipelineState::Validate(FScreenPassPipelineState *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->VertexShader).ShaderContent == (FShader *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexShader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                       ,400,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->PixelShader).ShaderContent == (FShader *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PixelShader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                       ,0x191,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->BlendState == (FRHIBlendState *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlendState",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                       ,0x192,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->DepthStencilState == (FRHIDepthStencilState *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DepthStencilState",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                       ,0x193,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->VertexDeclaration == (FRHIVertexDeclaration *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexDeclaration",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                       ,0x194,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

