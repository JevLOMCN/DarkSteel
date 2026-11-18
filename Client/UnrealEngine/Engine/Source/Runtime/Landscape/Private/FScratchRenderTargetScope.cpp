// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// FScratchRenderTargetScope @ 145f42290

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FScratchRenderTargetScope * __thiscall
UE::Landscape::FScratchRenderTargetScope::FScratchRenderTargetScope
          (FScratchRenderTargetScope *this,FScratchRenderTargetParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  ULandscapeEditResourcesSubsystem *this_00;
  FScratchRenderTargetScope *pFVar3;
  ULandscapeScratchRenderTarget *pUVar4;
  
  this->EditResourcesSubsystem = (ULandscapeEditResourcesSubsystem *)0x0;
  this->RenderTarget = (ULandscapeScratchRenderTarget *)0x0;
  this_00 = UEngine::GetEngineSubsystem<ULandscapeEditResourcesSubsystem>(GEngine);
  if (this_00 == (ULandscapeEditResourcesSubsystem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LandscapeEditResourcesSubsystem != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditResourcesSubsystem.cpp"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FScratchRenderTargetScope *)(*pcVar1)();
      return pFVar3;
    }
  }
  pUVar4 = ULandscapeEditResourcesSubsystem::RequestScratchRenderTarget(this_00,param_1);
  this->RenderTarget = pUVar4;
  return this;
}

// ~FScratchRenderTargetScope @ 145f43620

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Landscape::FScratchRenderTargetScope::~FScratchRenderTargetScope
          (FScratchRenderTargetScope *this)

{
  FScratchRenderTargetParams *pFVar1;
  ULandscapeScratchRenderTarget *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  ULandscapeEditResourcesSubsystem *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined8 local_58 [2];
  TIntPoint<int>_u_0 local_44;
  
  pUVar6 = UEngine::GetEngineSubsystem<ULandscapeEditResourcesSubsystem>(GEngine);
  if ((pUVar6 == (ULandscapeEditResourcesSubsystem *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LandscapeEditResourcesSubsystem != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditResourcesSubsystem.cpp"
                         ,0x22,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar2 = this->RenderTarget;
  if (pUVar2->bIsInUse != false) {
    pFVar7 = (pUVar6->ScratchRenderTargets).AllocatorInstance.Data;
    pFVar3 = pFVar7 + (longlong)(pUVar6->ScratchRenderTargets).ArrayNum * 8;
    for (; pFVar7 != pFVar3; pFVar7 = pFVar7 + 8) {
      if (*(ULandscapeScratchRenderTarget **)pFVar7 == (ULandscapeScratchRenderTarget *)0x0) {
        bVar5 = pUVar2 == (ULandscapeScratchRenderTarget *)0x0;
      }
      else {
        bVar5 = *(ULandscapeScratchRenderTarget **)pFVar7 == pUVar2;
      }
      if (bVar5) goto LAB_145f436d6;
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("InScratchRenderTarget->IsInUse() && ScratchRenderTargets.Contains(InScratchRenderTarget)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditResourcesSubsystem.cpp"
                     ,0x1e9,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_145f436d6:
  if ((pUVar2->bIsInUse == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInUse()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditResourcesSubsystem.cpp"
                         ,399,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = &pUVar2->CurrentRenderTargetParams;
  local_44 = (TIntPoint<int>_u_0)0x0;
  if (pFVar1 != (FScratchRenderTargetParams *)local_58) {
    pFVar3 = (pFVar1->DebugName).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pUVar2->CurrentRenderTargetParams).DebugName.Data.ArrayNum = 0;
    (pUVar2->CurrentRenderTargetParams).DebugName.Data.ArrayMax = 0;
  }
  (pUVar2->CurrentRenderTargetParams).bExactDimensions = false;
  (pUVar2->CurrentRenderTargetParams).bUseUAV = false;
  (pUVar2->CurrentRenderTargetParams).bTargetArraySlicesIndependently = false;
  (pUVar2->CurrentRenderTargetParams).NumSlices = 0;
  *(undefined8 *)&(pUVar2->CurrentRenderTargetParams).ClearColor.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(pUVar2->CurrentRenderTargetParams).ClearColor.field0_0x0 + 8) = 0;
  (pUVar2->CurrentRenderTargetParams).InitialState = None;
  (pUVar2->CurrentRenderTargetParams).Resolution.field0_0x0 = local_44;
  (pUVar2->CurrentRenderTargetParams).Format = RTF_RGBA8;
  pUVar2->bIsInUse = false;
  return;
}

