// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GetTileBufferSRV @ 1449f2000

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBufferSRV * __thiscall
FHairStrandsTiles::GetTileBufferSRV(FHairStrandsTiles *this,ETileType param_1)

{
  code *pcVar1;
  bool bVar2;
  FRDGBufferSRV *pFVar3;
  
  if (this->TileDataSRV[param_1] == (FRDGBufferSRV *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TileDataSRV[Index] != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\HairStrands\\HairStrandsData.h"
                       ,0x5b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGBufferSRV *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this->TileDataSRV[param_1];
}

