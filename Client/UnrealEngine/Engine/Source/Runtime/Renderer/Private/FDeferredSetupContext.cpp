// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// GetMaxInstanceWorkGroups @ 144fafb80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

uint __thiscall
Nanite::FInstanceHierarchyDriver::FDeferredSetupContext::GetMaxInstanceWorkGroups
          (FDeferredSetupContext *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (this->bAlreadySynced == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bAlreadySynced",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                       ,0xc2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (this->MaxInstanceWorkGroups == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxInstanceWorkGroups != ~0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                       ,0xc2d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return this->MaxInstanceWorkGroups;
}

// Sync @ 144ff5a30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
Nanite::FInstanceHierarchyDriver::FDeferredSetupContext::Sync(FDeferredSetupContext *this)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSceneInstanceCullResult *pFVar7;
  int iVar8;
  
  if (this->bAlreadySynced == false) {
    this->bAlreadySynced = true;
    pFVar7 = FSceneInstanceCullingQuery::GetResult(this->SceneInstanceCullingQuery);
    this->SceneInstanceCullResult = pFVar7;
    if (0x3fffff < pFVar7->NumInstanceGroups) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1420459583024925730>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                         ,0xc22,
                         "SceneInstanceCullResult->NumInstanceGroups >= 0 && SceneInstanceCullResult->NumInstanceGroups < 4 * 1024 * 1024"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar2 = this->SceneInstanceCullResult->NumInstanceGroups;
    uVar6 = 1;
    if (uVar2 != 0) {
      uVar6 = uVar2;
    }
    uVar1 = (ulonglong)(uVar6 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    this->MaxInstanceWorkGroups = 1 << ((byte)lVar3 & 0x1f);
    uVar2 = (this->SceneInstanceCullingQuery->ViewDrawGroups).ArrayNum;
    if ((int)uVar2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar7 = this->SceneInstanceCullResult;
    this->NumViewDrawRanges = uVar2;
    iVar8 = 1;
    if (pFVar7->MaxOccludedChunkDraws != 0) {
      iVar8 = pFVar7->MaxOccludedChunkDraws;
    }
    uVar1 = (ulonglong)(iVar8 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    this->MaxOccludedChunkDrawsPOT = 1 << ((byte)lVar3 & 0x1f);
    this->NumChunkViewGroups = (pFVar7->ChunkCullViewGroupIds).ArrayNum;
    this->NumAllocatedChunks = pFVar7->NumAllocatedChunks;
  }
  return;
}

