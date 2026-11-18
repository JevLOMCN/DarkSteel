// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 1

// GetRHICommandList @ 1463b7930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHICommandList * __thiscall FMeshElementCollector::GetRHICommandList(FMeshElementCollector *this)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandList *pFVar3;
  
  if (this->RHICmdList != (FRHICommandList *)0x0) {
    return this->RHICmdList;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("RHICmdList",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                     ,0x46,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRHICommandList *)(*pcVar1)();
    return pFVar3;
  }
  return this->RHICmdList;
}

