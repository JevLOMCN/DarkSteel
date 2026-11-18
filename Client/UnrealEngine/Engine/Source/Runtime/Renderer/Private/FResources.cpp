// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// SafeRelease @ 144b45f40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FMegaLightsViewState::FResources::SafeRelease(FResources *this)

{
  longlong *plVar1;
  IPooledRenderTarget *pIVar2;
  FRDGPooledBuffer *pFVar3;
  longlong lVar4;
  
  pIVar2 = (this->DiffuseLightingHistory).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->DiffuseLightingHistory).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->SpecularLightingHistory).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->SpecularLightingHistory).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->LightingMomentsHistory).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->LightingMomentsHistory).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->NumFramesAccumulatedHistory).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->NumFramesAccumulatedHistory).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pFVar3 = (this->VisibleLightHashHistory).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    (this->VisibleLightHashHistory).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->VisibleLightMaskHashHistory).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    (this->VisibleLightMaskHashHistory).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->VolumeVisibleLightHashHistory).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    (this->VolumeVisibleLightHashHistory).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->TranslucencyVolume0VisibleLightHashHistory).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    (this->TranslucencyVolume0VisibleLightHashHistory).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->TranslucencyVolume1VisibleLightHashHistory).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    (this->TranslucencyVolume1VisibleLightHashHistory).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  return;
}

// FResources @ 1453fdd70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FResources * __thiscall FMegaLightsViewState::FResources::FResources(FResources *this)

{
  (this->HistoryScreenPositionScaleBias).field0_0x0._s_0.X = 1.0;
  (this->DiffuseLightingHistory).Reference = (IPooledRenderTarget *)0x0;
  (this->SpecularLightingHistory).Reference = (IPooledRenderTarget *)0x0;
  (this->LightingMomentsHistory).Reference = (IPooledRenderTarget *)0x0;
  (this->NumFramesAccumulatedHistory).Reference = (IPooledRenderTarget *)0x0;
  (this->VisibleLightHashHistory).Reference = (FRDGPooledBuffer *)0x0;
  (this->VisibleLightMaskHashHistory).Reference = (FRDGPooledBuffer *)0x0;
  (this->VolumeVisibleLightHashHistory).Reference = (FRDGPooledBuffer *)0x0;
  (this->TranslucencyVolume0VisibleLightHashHistory).Reference = (FRDGPooledBuffer *)0x0;
  (this->TranslucencyVolume1VisibleLightHashHistory).Reference = (FRDGPooledBuffer *)0x0;
  (this->SceneDepthHistory).Reference = (IPooledRenderTarget *)0x0;
  (this->SceneNormalHistory).Reference = (IPooledRenderTarget *)0x0;
  *(undefined8 *)((longlong)&(this->HistoryScreenPositionScaleBias).field0_0x0 + 0xc) = 0;
  *(undefined8 *)((longlong)&(this->HistoryUVMinMax).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->HistoryUVMinMax).field0_0x0 + 0xc) = 0;
  *(undefined8 *)((longlong)&(this->HistoryGatherUVMinMax).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->HistoryGatherUVMinMax).field0_0x0 + 0xc) = 0;
  *(undefined8 *)((longlong)&(this->HistoryBufferSizeAndInvSize).field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->HistoryBufferSizeAndInvSize).field0_0x0 + 0xc) = 0;
  *(undefined8 *)((longlong)&(this->HistoryVisibleLightHashViewMinInTiles).field0_0x0 + 4) = 0;
  (this->HistoryVisibleLightHashViewSizeInTiles).field0_0x0._s_0.Y = 0;
  *(undefined8 *)((longlong)&(this->HistoryScreenPositionScaleBias).field0_0x0 + 4) = 0x3f800000;
  *(undefined8 *)&(this->HistoryVolumeVisibleLightHashViewSizeInTiles).field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (this->HistoryVolumeVisibleLightHashViewSizeInTiles).field0_0x0._s_0.Z =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->HistoryTranslucencyVolumeVisibleLightHashSizeInTiles).field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (this->HistoryTranslucencyVolumeVisibleLightHashSizeInTiles).field0_0x0._s_0.Z =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  return this;
}

// ~FResources @ 145405d80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FMegaLightsViewState::FResources::~FResources(FResources *this)

{
  longlong *plVar1;
  IPooledRenderTarget *pIVar2;
  FRDGPooledBuffer *pFVar3;
  longlong lVar4;
  
  pIVar2 = (this->SceneNormalHistory).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->SceneDepthHistory).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pFVar3 = (this->TranslucencyVolume1VisibleLightHashHistory).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->TranslucencyVolume0VisibleLightHashHistory).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->VolumeVisibleLightHashHistory).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->VisibleLightMaskHashHistory).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->VisibleLightHashHistory).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pIVar2 = (this->NumFramesAccumulatedHistory).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->LightingMomentsHistory).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->SpecularLightingHistory).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->DiffuseLightingHistory).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  return;
}

// GetGPUSizeBytes @ 1454f59e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall FMegaLightsViewState::FResources::GetGPUSizeBytes(FResources *this,bool param_1)

{
  FRDGPooledBuffer *pFVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  pFVar1 = (this->VisibleLightHashHistory).Reference;
  uVar8 = 0;
  if (pFVar1 == (FRDGPooledBuffer *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar7 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar1 = (this->VisibleLightMaskHashHistory).Reference;
  if (pFVar1 == (FRDGPooledBuffer *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar6 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar1 = (this->VolumeVisibleLightHashHistory).Reference;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    uVar8 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar8 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  uVar2 = GetRenderTargetGPUSizeBytes(&this->NumFramesAccumulatedHistory,param_1);
  uVar3 = GetRenderTargetGPUSizeBytes(&this->LightingMomentsHistory,param_1);
  uVar4 = GetRenderTargetGPUSizeBytes(&this->SpecularLightingHistory,param_1);
  uVar5 = GetRenderTargetGPUSizeBytes(&this->DiffuseLightingHistory,param_1);
  return (ulonglong)uVar7 + (ulonglong)uVar6 + uVar2 + uVar3 + uVar4 + uVar8 + uVar5;
}

