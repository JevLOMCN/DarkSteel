// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Update @ 14885f5c0

void __thiscall FRenderAssetStreamingSettings::Update(FRenderAssetStreamingSettings *this)

{
  int iVar1;
  TConsoleVariableData<int> *pTVar2;
  TConsoleVariableData<float> *pTVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  FCachedSystemScalabilityCVars *pFVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  
  pTVar3 = CVarStreamingScreenSizeEffectiveMax.Ref;
  bVar5 = IsInParallelGameThread();
  lVar9 = 4;
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  this->MaxEffectiveScreenSize = *(float *)((longlong)pTVar3->ShadowedValue + lVar7);
  pTVar2 = CVarStreamingMaxTempMemoryAllowed.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  this->MaxTempMemoryAllowed = *(int *)((longlong)pTVar2->ShadowedValue + lVar7);
  pTVar2 = CVarStreamingHLODStrategy.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  this->HLODStrategy = *(int *)((longlong)pTVar2->ShadowedValue + lVar7);
  pTVar3 = CVarStreamingMipBias.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  fVar10 = *(float *)((longlong)pTVar3->ShadowedValue + lVar7);
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  this->GlobalMipBias = (int)ROUND((fVar10 + fVar10) - __real_3f000000) >> 1;
  pTVar2 = CVarStreamingPoolSize.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  this->PoolSize = *(int *)((longlong)pTVar2->ShadowedValue + lVar7);
  pTVar2 = CVarStreamingPoolSizeForMeshes.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  this->MeshPoolSize = *(int *)((longlong)pTVar2->ShadowedValue + lVar7);
  pTVar2 = CVarStreamingPoolSizeForVirtualTextures.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  this->VirtualTexturePoolSize = *(int *)((longlong)pTVar2->ShadowedValue + lVar7);
  pTVar2 = CVarStreamingUsePerTextureBias.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  this->bUsePerTextureBias = *(int *)((longlong)pTVar2->ShadowedValue + lVar7) != 0;
  pTVar2 = CVarStreamingUseNewMetrics.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  this->bUseNewMetrics = *(int *)((longlong)pTVar2->ShadowedValue + lVar7) != 0;
  pTVar2 = CVarStreamingLimitPoolSizeToVRAM.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  this->bLimitPoolSizeToVRAM = *(int *)((longlong)pTVar2->ShadowedValue + lVar7) != 0;
  pTVar2 = CVarStreamingFullyLoadUsedTextures.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  this->bFullyLoadUsedTextures = *(int *)((longlong)pTVar2->ShadowedValue + lVar7) != 0;
  pTVar2 = CVarStreamingFullyLoadMeshes.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  this->bFullyLoadMeshes = *(int *)((longlong)pTVar2->ShadowedValue + lVar7) != 0;
  pTVar2 = CVarStreamingUseAllMips.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  this->bUseAllMips = *(int *)((longlong)pTVar2->ShadowedValue + lVar7) != 0;
  pTVar2 = CVarStreamingMinMipForSplitRequest.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  this->MinMipForSplitRequest = *(int *)((longlong)pTVar2->ShadowedValue + lVar7);
  pTVar3 = CVarStreamingPerTextureBiasViewBoostThreshold.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  this->PerTextureBiasViewBoostThreshold = *(float *)((longlong)pTVar3->ShadowedValue + lVar7);
  pTVar3 = CVarStreamingMaxHiddenPrimitiveViewBoost.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  fVar11 = __real_3f800000;
  fVar10 = *(float *)((longlong)pTVar3->ShadowedValue + lVar7);
  if (fVar10 <= __real_3f800000) {
    fVar10 = __real_3f800000;
  }
  this->MaxHiddenPrimitiveViewBoost = fVar10;
  pTVar3 = CVarStreamingMinLevelRenderAssetScreenSize.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  this->MinLevelRenderAssetScreenSize = *(float *)((longlong)pTVar3->ShadowedValue + lVar7);
  pTVar3 = CVarStreamingMaxTextureUVDensity.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  this->MaxTextureUVDensity = *(float *)((longlong)pTVar3->ShadowedValue + lVar7);
  pTVar2 = CVarStreamingUseMaterialData.Ref;
  if (this->bUseNewMetrics != false) {
    bVar5 = IsInParallelGameThread();
    if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
      lVar7 = 0;
    }
    else {
      lVar7 = 4;
    }
    if (*(int *)((longlong)pTVar2->ShadowedValue + lVar7) != 0) {
      bVar5 = true;
      goto LAB_14885f8fb;
    }
  }
  bVar5 = false;
LAB_14885f8fb:
  this->bUseMaterialData = bVar5;
  pTVar3 = CVarStreamingHiddenPrimitiveScale.Ref;
  if (this->bUseNewMetrics != false) {
    bVar5 = IsInParallelGameThread();
    if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
      lVar7 = 0;
    }
    else {
      lVar7 = 4;
    }
    fVar11 = *(float *)((longlong)pTVar3->ShadowedValue + lVar7);
  }
  this->HiddenPrimitiveScale = fVar11;
  pTVar2 = CVarStreamingLowResHandlingMode.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  this->LowResHandlingMode = *(ELowResHandlingMode *)((longlong)pTVar2->ShadowedValue + lVar7);
  pTVar2 = CVarStreamingMipCalculationEnablePerLevelList.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  this->bMipCalculationEnablePerLevelList = *(int *)((longlong)pTVar2->ShadowedValue + lVar7) != 0;
  pTVar2 = CVarPrioritizeMeshLODRetention.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  this->bPrioritizeMeshLODRetention = *(int *)((longlong)pTVar2->ShadowedValue + lVar7) != 0;
  pTVar2 = CVarStreamingVRAMPercentageClamp.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  this->VRAMPercentageClamp = *(int *)((longlong)pTVar2->ShadowedValue + lVar7);
  pFVar8 = GetCachedScalabilityCVars();
  this->MaterialQualityLevel = (uint)pFVar8->MaterialQualityLevel;
  if (this->MinMipForSplitRequest < 1) {
    this->MinMipForSplitRequest = 0x10;
  }
  if (this->bUseAllMips != false) {
    this->bUsePerTextureBias = false;
    this->GlobalMipBias = 0;
  }
  pTVar2 = CVarStreamingStressTest.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  if (*(int *)((longlong)pTVar2->ShadowedValue + lVar7) != 0) {
    this->bStressTest = true;
    pTVar2 = CVarStreamingStressTestFramesForFullUpdate.Ref;
    bVar5 = IsInParallelGameThread();
    if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
      lVar7 = 0;
    }
    else {
      lVar7 = 4;
    }
    iVar1 = *(int *)((longlong)pTVar2->ShadowedValue + lVar7);
    this->DropMips = 2;
    iVar6 = 0;
    if (0 < iVar1) {
      iVar6 = iVar1;
    }
    this->FramesForFullUpdate = iVar6;
    pTVar2 = CVarStreamingStressTestExtraIOLatency.Ref;
    bVar5 = IsInParallelGameThread();
    if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
      lVar7 = 0;
    }
    else {
      lVar7 = 4;
    }
    pTVar4 = CVarStreamingStressTestRayTracingExtraIOLatency.Ref;
    ExtraIOLatency = *(int *)((longlong)pTVar2->ShadowedValue + lVar7);
    bVar5 = IsInParallelGameThread();
    if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
      lVar9 = 0;
    }
    ExtraIOLatencyRayTracing = *(int *)((longlong)pTVar4->ShadowedValue + lVar9);
    return;
  }
  this->bStressTest = false;
  pTVar2 = CVarFramesForFullUpdate.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  iVar1 = *(int *)((longlong)pTVar2->ShadowedValue + lVar7);
  iVar6 = 0;
  if (0 < iVar1) {
    iVar6 = iVar1;
  }
  this->FramesForFullUpdate = iVar6;
  pTVar2 = CVarStreamingDropMips.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar9 = 0;
  }
  this->DropMips = *(int *)((longlong)pTVar2->ShadowedValue + lVar9);
  ExtraIOLatency = 0;
  ExtraIOLatencyRayTracing = 0;
  return;
}

