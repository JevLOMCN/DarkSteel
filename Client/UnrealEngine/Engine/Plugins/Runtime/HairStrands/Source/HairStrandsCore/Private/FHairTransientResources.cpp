// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// GetMeshLODData @ 14e050b30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FCachedGeometry * __thiscall
FHairTransientResources::GetMeshLODData(FHairTransientResources *this,uint param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FCachedGeometry *pFVar3;
  uint uVar4;
  
  if (!param_2) {
    if (((int)param_1 < 0) || ((this->RenMeshDatas).ArrayNum <= (int)param_1)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RenMeshDatas.IsValidIndex(InRegisteredIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\HairStrandsInterface.h"
                         ,0x1cb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FCachedGeometry *)(*pcVar1)();
        return pFVar3;
      }
    }
    uVar4 = 0;
    if ((int)param_1 < (this->RenMeshDatas).ArrayNum) {
      uVar4 = ~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FCachedGeometry *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FCachedGeometry *)
           ((this->RenMeshDatas).AllocatorInstance.Data + (longlong)(int)param_1 * 0x80);
  }
  if (((int)param_1 < 0) || ((this->SimMeshDatas).ArrayNum <= (int)param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SimMeshDatas.IsValidIndex(InRegisteredIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\HairStrandsInterface.h"
                       ,0x1cb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCachedGeometry *)(*pcVar1)();
      return pFVar3;
    }
  }
  uVar4 = 0;
  if ((int)param_1 < (this->SimMeshDatas).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCachedGeometry *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FCachedGeometry *)
         ((this->SimMeshDatas).AllocatorInstance.Data + (longlong)(int)param_1 * 0x80);
}

