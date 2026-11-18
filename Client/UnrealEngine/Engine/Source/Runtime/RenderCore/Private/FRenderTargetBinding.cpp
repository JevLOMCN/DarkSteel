// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// Validate @ 145ebc700

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

bool __thiscall FRenderTargetBinding::Validate(FRenderTargetBinding *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Texture == (FRDGTexture *)0x0) {
    if (this->LoadAction != ENoAction) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LoadAction == ERenderTargetLoadAction::ENoAction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                         ,0x195,L"Can\'t have a load action when no texture is bound.");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        bVar2 = (bool)(*pcVar1)();
        return bVar2;
      }
    }
    if (this->ResolveTexture != (FRDGTexture *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ResolveTexture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                         ,0x197,
                         L"Can\'t have a resolve texture when no render target texture is bound.");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        bVar2 = (bool)(*pcVar1)();
        return bVar2;
      }
    }
  }
  return true;
}

