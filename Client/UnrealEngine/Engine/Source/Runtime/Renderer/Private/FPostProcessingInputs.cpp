// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Validate @ 1451e7070

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FPostProcessingInputs::Validate(FPostProcessingInputs *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->SceneTextures == (TRDGUniformBuffer<FSceneTextureUniformParameters> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneTextures",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\PostProcess\\PostProcessInputs.h"
                       ,0x16,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->ViewFamilyTexture == (FRDGTexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewFamilyTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\PostProcess\\PostProcessInputs.h"
                       ,0x17,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->TranslucencyViewResourcesMap).TranslucencyPassResourcesMap ==
      (FTranslucencyPassResourcesMap *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TranslucencyViewResourcesMap.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\PostProcess\\PostProcessInputs.h"
                       ,0x18,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

