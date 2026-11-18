// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FDepthStencilBinding @ 14485b4f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDepthStencilBinding * __thiscall
FDepthStencilBinding::FDepthStencilBinding
          (FDepthStencilBinding *this,FRDGTexture *param_1,ERenderTargetLoadAction param_2,
          ERenderTargetLoadAction param_3,FExclusiveDepthStencil param_4)

{
  code *pcVar1;
  bool bVar2;
  FDepthStencilBinding *pFVar3;
  
  (this->DepthStencilAccess).Value = param_4.Value;
  this->Texture = param_1;
  this->ResolveTexture = (FRDGTexture *)0x0;
  this->DepthLoadAction = param_2;
  this->StencilLoadAction = param_3;
  bVar2 = Validate(this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Validate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x289,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FDepthStencilBinding *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

