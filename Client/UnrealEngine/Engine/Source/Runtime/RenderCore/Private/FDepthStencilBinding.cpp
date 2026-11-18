// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// Validate @ 145ebc440

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDepthStencilBinding::Validate(FDepthStencilBinding *this)

{
  EPixelFormat EVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  Type TVar6;
  Type TVar7;
  
  if (this->Texture == (FRDGTexture *)0x0) {
    if (this->ResolveTexture != (FRDGTexture *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ResolveTexture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                         ,0x1c7,
                         L"Can\'t have a depth stencil resolve texture when no depth stencil target texture is bound."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    if (this->DepthLoadAction != ENoAction) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DepthLoadAction == ERenderTargetLoadAction::ENoAction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                         ,0x1c9,L"Can\'t have a depth load action when no texture is bound.");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    if (this->StencilLoadAction != ENoAction) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StencilLoadAction == ERenderTargetLoadAction::ENoAction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                         ,0x1cb,L"Can\'t have a stencil load action when no texture is bound.");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    if ((this->DepthStencilAccess).Value != DepthNop) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DepthStencilAccess == FExclusiveDepthStencil::DepthNop_StencilNop",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                         ,0x1cd,L"Can\'t have a depth stencil access when no texture is bound.");
      if (bVar4) goto code_r0x000145ebc6e2;
    }
  }
  else {
    EVar1 = (this->Texture->Desc).field_0x33;
    GetPixelFormatString(EVar1);
    if ((EVar1 != PF_DepthStencil) && (((EVar1 - PF_ShadowDepth & 0xf6) != 0 || (EVar1 == PF_R16F)))
       ) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsDepthFormat",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                         ,0x1a7,
                         L"Can\'t bind texture %s as a depth stencil because its pixel format is %s."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    if ((this->DepthStencilAccess).Value == DepthNop) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DepthStencilAccess != FExclusiveDepthStencil::DepthNop_StencilNop",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                         ,0x1ab,L"Texture %s is bound but both depth / stencil are set to no-op.");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    if (EVar1 != PF_DepthStencil) {
      if (this->StencilLoadAction != ENoAction) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StencilLoadAction == ERenderTargetLoadAction::ENoAction",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                           ,0x1b2,
                           L"Unable to load stencil of texture %s that have a pixel format %s that does not support stencil."
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      if (((this->DepthStencilAccess).Value & StencilMask) != DepthNop) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!DepthStencilAccess.IsUsingStencil()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                           ,0x1b6,
                           L"Unable to have stencil access on texture %s that have a pixel format %s that does not support stencil."
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
    }
    TVar6 = (this->DepthStencilAccess).Value;
    TVar7 = TVar6 & DepthMask;
    if ((TVar7 == DepthNop) || (TVar7 == DepthWrite)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    TVar6 = TVar6 & StencilMask;
    if ((TVar6 == DepthNop) || (TVar6 == DepthNop_StencilWrite)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar4) && (this->DepthLoadAction != ELoad)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!(bReadDepth && DepthLoadAction != ERenderTargetLoadAction::ELoad)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                         ,0x1be,L"Depth read access without depth load action on texture %s.");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    if ((bVar3) && (this->StencilLoadAction != ELoad)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!(bReadStencil && StencilLoadAction != ERenderTargetLoadAction::ELoad)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                         ,0x1c2,L"Stencil read access without stencil load action on texture %s.");
      if (!bVar4) {
        return true;
      }
code_r0x000145ebc6e2:
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return true;
}

