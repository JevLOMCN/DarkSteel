// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FRenderTargetBinding @ 14472e490

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

FRenderTargetBinding * __thiscall
FRenderTargetBinding::FRenderTargetBinding(FRenderTargetBinding *this)

{
  this->LoadAction = ENoAction;
  this->MipIndex = '\0';
  this->ArraySlice = -1;
  this->Texture = (FRDGTexture *)0x0;
  this->ResolveTexture = (FRDGTexture *)0x0;
  return this;
}

// SetLoadAction @ 14478e1d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
FRenderTargetBinding::SetLoadAction(FRenderTargetBinding *this,ERenderTargetLoadAction param_1)

{
  code *pcVar1;
  bool bVar2;
  
  this->LoadAction = param_1;
  bVar2 = Validate(this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Validate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x256,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// FRenderTargetBinding @ 14485d0c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

FRenderTargetBinding * __thiscall
FRenderTargetBinding::FRenderTargetBinding
          (FRenderTargetBinding *this,FRDGTexture *param_1,ERenderTargetLoadAction param_2,
          uchar param_3,short param_4)

{
  code *pcVar1;
  bool bVar2;
  FRenderTargetBinding *pFVar3;
  
  this->ArraySlice = param_4;
  this->Texture = param_1;
  this->ResolveTexture = (FRDGTexture *)0x0;
  this->LoadAction = param_2;
  this->MipIndex = param_3;
  bVar2 = Validate(this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Validate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x216,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRenderTargetBinding *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

