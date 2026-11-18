// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// GetTexture @ 144bcf7a0

ULightMapTexture2D * __thiscall
FLightMapInteraction::GetTexture(FLightMapInteraction *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  ULightMapTexture2D *pUVar3;
  
  if (this->Type != LMIT_Texture) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type == LMIT_Texture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneManagement.h"
                       ,0x1bf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (ULightMapTexture2D *)(*pcVar1)();
      return pUVar3;
    }
  }
  if (param_1) {
    return this->HighQualityTexture;
  }
  return this->LowQualityTexture;
}

// GetVirtualTexture @ 144bd01d0

ULightMapVirtualTexture2D * __thiscall
FLightMapInteraction::GetVirtualTexture(FLightMapInteraction *this)

{
  code *pcVar1;
  bool bVar2;
  ULightMapVirtualTexture2D *pUVar3;
  
  if (this->Type == LMIT_Texture) {
    return this->VirtualTexture;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type == LMIT_Texture",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneManagement.h"
                     ,0x1df,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (ULightMapVirtualTexture2D *)(*pcVar1)();
    return pUVar3;
  }
  return this->VirtualTexture;
}

