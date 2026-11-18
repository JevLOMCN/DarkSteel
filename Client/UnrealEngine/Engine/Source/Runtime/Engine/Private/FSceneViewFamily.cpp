// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// ConstructionValues @ 14850b610

ConstructionValues * __thiscall
FSceneViewFamily::ConstructionValues::ConstructionValues
          (ConstructionValues *this,FRenderTarget *param_1,FSceneInterface *param_2,
          FEngineShowFlags *param_3,TSharedPtr<FWN_SceneTexturesCaptureInfo,1> *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  longlong lVar8;
  
  this->RenderTarget = param_1;
  this->Scene = param_2;
  this->RenderTargetDepth = (FRenderTarget *)0x0;
  FEngineShowFlags::FEngineShowFlags(&this->EngineShowFlags,param_3);
  (this->ViewModeParamName).ComparisonIndex = 0;
  (this->ViewModeParamName).Number = 0;
  (this->Time).RealTimeSeconds = 0.0;
  (this->Time).WorldTimeSeconds = 0.0;
  (this->Time).DeltaRealTimeSeconds = 0.0;
  (this->Time).DeltaWorldTimeSeconds = 0.0;
  this->ViewModeParam = -1;
  puVar2 = &this->field_0x80;
  this->bAdditionalViewFamily = 0;
  this->bRequireMultiView = 0;
  this->bTimesSet = 0;
  this->bResolveScene = 1;
  this->bDeferClear = 0;
  this->bRealtimeUpdate = 0;
  (this->SceneTexturesCaptureInfo).Object = param_4->Object;
  pTVar6 = (param_4->SharedReferenceCount).ReferenceController;
  (this->SceneTexturesCaptureInfo).SharedReferenceCount.ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (param_2 != (FSceneInterface *)0x0) {
    lVar8 = (**(code **)(param_2->_padding_ + 0x410))(param_2);
    if (lVar8 != 0) {
      bVar7 = IsInGameThread();
      if (bVar7) {
        dVar5 = *(double *)(lVar8 + 0x8f8);
        fVar3 = *(float *)(lVar8 + 0x918);
        fVar4 = *(float *)(lVar8 + 0x91c);
        (this->Time).RealTimeSeconds = *(double *)(lVar8 + 0x908);
        (this->Time).WorldTimeSeconds = dVar5;
        (this->Time).DeltaRealTimeSeconds = fVar3;
        (this->Time).DeltaWorldTimeSeconds = fVar4;
        this->bTimesSet = 1;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return this;
}

// FSceneViewFamily @ 14850d090

FSceneViewFamily * __thiscall
FSceneViewFamily::FSceneViewFamily(FSceneViewFamily *this,FSceneViewFamily *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSceneViewFamily *pFVar3;
  
  FSceneViewFamily(this,param_1);
  this->_padding_ = (longlong)&___7FSceneViewFamily__6B_;
  if (this->ScreenPercentageInterface != (ISceneViewFamilyScreenPercentage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScreenPercentageInterface == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                       ,0xcb4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSceneViewFamily *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->TemporalUpscalerInterface != (ITemporalUpscaler *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TemporalUpscalerInterface == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                       ,0xcb5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSceneViewFamily *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->PrimarySpatialUpscalerInterface != (ISpatialUpscaler *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrimarySpatialUpscalerInterface == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                       ,0xcb6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSceneViewFamily *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->SecondarySpatialUpscalerInterface != (ISpatialUpscaler *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SecondarySpatialUpscalerInterface == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                       ,0xcb7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSceneViewFamily *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// FSceneViewFamily @ 14850d180

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FSceneViewFamily * __thiscall
FSceneViewFamily::FSceneViewFamily(FSceneViewFamily *this,ConstructionValues *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSceneInterface *this_00;
  code *pcVar5;
  double dVar6;
  float fVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  EShaderPlatform EVar10;
  uint uVar11;
  FSceneViewFamily *pFVar12;
  longlong lVar13;
  int iVar14;
  FStereoShaderAspects local_res8 [8];
  
  this->ViewMode = VMI_Lit;
  this->_padding_ = (longlong)&___7FSceneViewFamily__6B_;
  (this->Views).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Views).ArrayNum = 0;
  (this->Views).ArrayMax = 0;
  (this->AllViews).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllViews).ArrayNum = 0;
  (this->AllViews).ArrayMax = 0;
  this->RenderTarget = param_1->RenderTarget;
  this->RenderTargetDepth = param_1->RenderTargetDepth;
  this->Scene = param_1->Scene;
  FEngineShowFlags::FEngineShowFlags(&this->EngineShowFlags,&param_1->EngineShowFlags);
  dVar6 = (param_1->Time).WorldTimeSeconds;
  (this->Time).RealTimeSeconds = (param_1->Time).RealTimeSeconds;
  (this->Time).WorldTimeSeconds = dVar6;
  fVar7 = (param_1->Time).DeltaWorldTimeSeconds;
  (this->Time).DeltaRealTimeSeconds = (param_1->Time).DeltaRealTimeSeconds;
  (this->Time).DeltaWorldTimeSeconds = fVar7;
  this->FrameNumber = 0xffffffff;
  this->FrameCounter = 0;
  (this->SceneTexturesCaptureInfo).Object = (param_1->SceneTexturesCaptureInfo).Object;
  pTVar4 = (param_1->SceneTexturesCaptureInfo).SharedReferenceCount.ReferenceController;
  (this->SceneTexturesCaptureInfo).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar14 = 1;
  this->bAdditionalViewFamily = param_1->bAdditionalViewFamily;
  this->bRealtimeUpdate = param_1->bRealtimeUpdate;
  this->bDeferClear = param_1->bDeferClear;
  this->SceneCaptureSource = SCS_FinalColorLDR;
  this->SceneCaptureCompositeMode = SCCM_Overwrite;
  this->bMultiGPUForkAndJoin = false;
  this->bForceCopyCrossGPU = false;
  this->bIsMultipleViewFamily = false;
  this->bIsFirstViewInMultipleViewFamily = true;
  this->bIsViewFamilyInfo = false;
  this->bSplitScreenDebugAllowed = false;
  this->bIsMainViewFamily = false;
  this->bThumbnailRendering = false;
  this->bWorldIsPaused = false;
  this->bIsHDR = false;
  this->bResolveScene = param_1->bResolveScene;
  (this->ExposureSettings).FixedEV100 = 1.0;
  (this->ExposureSettings).bFixed = false;
  (this->ViewExtensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewExtensions).ArrayNum = 0;
  (this->ViewExtensions).ArrayMax = 0;
  (this->DisplayInternalsData).DisplayInternalsCVarValue = 0;
  (this->DisplayInternalsData).NumPendingStreamingRequests = 0xffffffff;
  this->DebugDPIScale = 1.0;
  this->SecondaryViewFraction = 1.0;
  this->SecondaryScreenPercentageMethod = LowerPixelDensitySimulation;
  this->ProfileSceneRenderTime = (float *)0x0;
  this->bRequireMultiView = param_1->bRequireMultiView;
  (this->ProfileDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProfileDescription).Data.ArrayNum = 0;
  (this->ProfileDescription).Data.ArrayMax = 0;
  (this->StreamingViewOrigins).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TVector<double>_>)0x0;
  (this->StreamingViewOrigins).ArrayNum = 0;
  (this->StreamingViewOrigins).ArrayMax = 2;
  this->DebugViewShaderMode = DVSM_MAX;
  (this->ViewModeParamName).ComparisonIndex = 0;
  (this->ViewModeParamName).Number = 0;
  this->SceneRenderer = (ISceneRenderer *)0x0;
  this->ScreenPercentageInterface = (ISceneViewFamilyScreenPercentage *)0x0;
  this->TemporalUpscalerInterface = (ITemporalUpscaler *)0x0;
  this->PrimarySpatialUpscalerInterface = (ISpatialUpscaler *)0x0;
  this->SecondarySpatialUpscalerInterface = (ISpatialUpscaler *)0x0;
  (this->ViewExtentionDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewExtentionDatas).ArrayNum = 0;
  (this->ViewExtentionDatas).ArrayMax = 0;
  this->bAllowTranslucencyAfterDOF = false;
  this->bAllowStandardTranslucencySeparated = false;
  this->bIsInFocus = true;
  if (param_1->bTimesSet == 0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8888498745365236827>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                       ,0xc5b,"CVS.bTimesSet");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FSceneViewFamily *)(*pcVar5)();
      return pFVar12;
    }
  }
  pTVar8 = CVarRenderTimeFrozen.Ref;
  bVar9 = IsInParallelGameThread();
  if (bVar9) {
LAB_14850d3d4:
    lVar13 = 0;
  }
  else {
    bVar9 = IsInGameThread();
    lVar13 = 4;
    if (bVar9) goto LAB_14850d3d4;
  }
  if (*(int *)((longlong)pTVar8->ShadowedValue + lVar13) != 0) {
    (this->Time).RealTimeSeconds = 0.0;
    (this->Time).WorldTimeSeconds = 0.0;
    (this->Time).DeltaRealTimeSeconds = (this->Time).DeltaRealTimeSeconds;
    (this->Time).DeltaWorldTimeSeconds = (this->Time).DeltaWorldTimeSeconds;
  }
  this->ViewModeParam = param_1->ViewModeParam;
  this->ViewModeParamName = param_1->ViewModeParamName;
  this->bCurrentlyBeingEdited = false;
  this->bOverrideVirtualTextureThrottle = false;
  uVar11 = VirtualTextureScalability::GetVirtualTextureFeedbackFactor();
  this->VirtualTextureFeedbackFactor = uVar11;
  bVar9 = IsDefaultBackBufferLinearSDR();
  if (bVar9) {
    this->SceneCaptureSource = SCS_FinalToneCurveHDR;
  }
  if ((this->EngineShowFlags).StationaryLightOverlap != 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!EngineShowFlags.StationaryLightOverlap",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                       ,0xc79,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FSceneViewFamily *)(*pcVar5)();
      return pFVar12;
    }
  }
  iVar3 = (this->Views).ArrayNum;
  this->LandscapeLODOverride = -1;
  if (iVar3 != 0) {
    if (iVar3 < 1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FSceneViewFamily *)(*pcVar5)();
        return pFVar12;
      }
    }
    if (*(int *)(*(longlong *)(this->Views).AllocatorInstance.Data + 0x1b94) == 2)
    goto LAB_14850d508;
  }
  this_00 = this->Scene;
  if (this_00 != (FSceneInterface *)0x0) {
    if (2 < (int)this_00->FeatureLevel) goto LAB_14850d508;
    EVar10 = FSceneInterface::GetShaderPlatform(this_00);
    UE::StereoRenderUtils::FStereoShaderAspects::FStereoShaderAspects(local_res8,EVar10);
    if (FReadOnlyCVARCache::bMobileHDR != false) {
      bVar9 = IsMobileTonemapSubpassEnabled(EVar10,ZPULL(local_res8[0],1,1));
      if (!bVar9) goto LAB_14850d508;
    }
  }
  iVar14 = 0;
LAB_14850d508:
  (this->EngineShowFlags).ScreenPercentage = 0;
  puVar1 = &(this->EngineShowFlags).field_0x4;
  *(uint *)puVar1 = *(uint *)puVar1 | iVar14 << 0x16;
  return this;
}

// FSceneViewFamily @ 14850d540

FSceneViewFamily * __thiscall
FSceneViewFamily::FSceneViewFamily(FSceneViewFamily *this,FSceneViewFamily *param_1)

{
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TSharedRef<ISceneViewFamilyExtentionData,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedRef<ISceneViewExtension,1> *pTVar8;
  TSharedRef<ISceneViewFamilyExtentionData,1> *pTVar9;
  double dVar10;
  float fVar11;
  ForElementType<UE::Math::TVector<double>_> _Dst;
  ForElementType<UE::Math::TVector<double>_> _Src;
  
  pTVar1 = &this->Views;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FSceneViewFamily__6B_;
  iVar5 = (param_1->Views).ArrayNum;
  piVar2 = &(this->Views).ArrayMax;
  pFVar6 = (param_1->Views).AllocatorInstance.Data;
  (this->Views).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 3);
  }
  pTVar1 = &this->AllViews;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AllViews).ArrayMax;
  iVar5 = (param_1->AllViews).ArrayNum;
  pFVar6 = (param_1->AllViews).AllocatorInstance.Data;
  (this->AllViews).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 3);
  }
  this->ViewMode = param_1->ViewMode;
  this->RenderTarget = param_1->RenderTarget;
  this->RenderTargetDepth = param_1->RenderTargetDepth;
  this->Scene = param_1->Scene;
  FEngineShowFlags::FEngineShowFlags(&this->EngineShowFlags,&param_1->EngineShowFlags);
  dVar10 = (param_1->Time).WorldTimeSeconds;
  (this->Time).RealTimeSeconds = (param_1->Time).RealTimeSeconds;
  (this->Time).WorldTimeSeconds = dVar10;
  fVar11 = (param_1->Time).DeltaWorldTimeSeconds;
  (this->Time).DeltaRealTimeSeconds = (param_1->Time).DeltaRealTimeSeconds;
  (this->Time).DeltaWorldTimeSeconds = fVar11;
  this->FrameNumber = param_1->FrameNumber;
  this->FrameCounter = param_1->FrameCounter;
  (this->SceneTexturesCaptureInfo).Object = (param_1->SceneTexturesCaptureInfo).Object;
  pTVar7 = (param_1->SceneTexturesCaptureInfo).SharedReferenceCount.ReferenceController;
  (this->SceneTexturesCaptureInfo).SharedReferenceCount.ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = &this->ViewExtensions;
  this->bAdditionalViewFamily = param_1->bAdditionalViewFamily;
  this->bRealtimeUpdate = param_1->bRealtimeUpdate;
  this->bDeferClear = param_1->bDeferClear;
  this->bResolveScene = param_1->bResolveScene;
  this->bMultiGPUForkAndJoin = param_1->bMultiGPUForkAndJoin;
  this->bForceCopyCrossGPU = param_1->bForceCopyCrossGPU;
  this->bIsMultipleViewFamily = param_1->bIsMultipleViewFamily;
  this->bIsFirstViewInMultipleViewFamily = param_1->bIsFirstViewInMultipleViewFamily;
  this->bIsViewFamilyInfo = param_1->bIsViewFamilyInfo;
  this->bSplitScreenDebugAllowed = param_1->bSplitScreenDebugAllowed;
  this->bIsMainViewFamily = param_1->bIsMainViewFamily;
  this->SceneCaptureSource = param_1->SceneCaptureSource;
  this->SceneCaptureCompositeMode = param_1->SceneCaptureCompositeMode;
  this->bThumbnailRendering = param_1->bThumbnailRendering;
  this->bWorldIsPaused = param_1->bWorldIsPaused;
  this->bIsHDR = param_1->bIsHDR;
  this->bRequireMultiView = param_1->bRequireMultiView;
  this->DebugDPIScale = param_1->DebugDPIScale;
  this->ExposureSettings = param_1->ExposureSettings;
  piVar2 = &(this->ViewExtensions).ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->ViewExtensions).ArrayNum;
  pTVar8 = (TSharedRef<ISceneViewExtension,1> *)(param_1->ViewExtensions).AllocatorInstance.Data;
  (this->ViewExtensions).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    ConstructItems<TSharedRef<ISceneViewExtension,1>,TSharedRef<ISceneViewExtension,1>,int>
              ((pTVar3->AllocatorInstance).Data,pTVar8,iVar5);
  }
  this->DisplayInternalsData = param_1->DisplayInternalsData;
  this->SecondaryViewFraction = param_1->SecondaryViewFraction;
  this->SecondaryScreenPercentageMethod = param_1->SecondaryScreenPercentageMethod;
  this->LandscapeLODOverride = param_1->LandscapeLODOverride;
  this->bCurrentlyBeingEdited = param_1->bCurrentlyBeingEdited;
  this->bOverrideVirtualTextureThrottle = param_1->bOverrideVirtualTextureThrottle;
  this->VirtualTextureFeedbackFactor = param_1->VirtualTextureFeedbackFactor;
  ::FString::FString(&this->ProfileDescription,&param_1->ProfileDescription);
  this->ProfileSceneRenderTime = param_1->ProfileSceneRenderTime;
  (this->StreamingViewOrigins).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TVector<double>_>)0x0;
  _Src = (param_1->StreamingViewOrigins).AllocatorInstance.SecondaryData;
  iVar5 = (param_1->StreamingViewOrigins).ArrayNum;
  (this->StreamingViewOrigins).ArrayNum = iVar5;
  if (_Src == (ForElementType<UE::Math::TVector<double>_>)0x0) {
    _Src = (ForElementType<UE::Math::TVector<double>_>)&param_1->StreamingViewOrigins;
  }
  piVar2 = &(this->StreamingViewOrigins).ArrayMax;
  if (iVar5 == 0) {
    *piVar2 = 2;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
              (0x18,8,iVar5,0,&(this->StreamingViewOrigins).AllocatorInstance,iVar5,piVar2);
    _Dst = (this->StreamingViewOrigins).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<UE::Math::TVector<double>_>)0x0) {
      _Dst = (ForElementType<UE::Math::TVector<double>_>)&this->StreamingViewOrigins;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar5 * 0x18);
  }
  pTVar4 = &this->ViewExtentionDatas;
  this->DebugViewShaderMode = param_1->DebugViewShaderMode;
  this->ViewModeParam = param_1->ViewModeParam;
  this->ViewModeParamName = param_1->ViewModeParamName;
  this->SceneRenderer = param_1->SceneRenderer;
  this->ScreenPercentageInterface = param_1->ScreenPercentageInterface;
  this->TemporalUpscalerInterface = param_1->TemporalUpscalerInterface;
  this->PrimarySpatialUpscalerInterface = param_1->PrimarySpatialUpscalerInterface;
  this->SecondarySpatialUpscalerInterface = param_1->SecondarySpatialUpscalerInterface;
  piVar2 = &(this->ViewExtentionDatas).ArrayMax;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->ViewExtentionDatas).ArrayNum;
  pTVar9 = (TSharedRef<ISceneViewFamilyExtentionData,1> *)
           (param_1->ViewExtentionDatas).AllocatorInstance.Data;
  (this->ViewExtentionDatas).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    ConstructItems<TSharedRef<ISceneViewFamilyExtentionData,1>,TSharedRef<ISceneViewFamilyExtentionData,1>,int>
              ((pTVar4->AllocatorInstance).Data,pTVar9,iVar5);
  }
  this->bAllowTranslucencyAfterDOF = param_1->bAllowTranslucencyAfterDOF;
  this->bAllowStandardTranslucencySeparated = param_1->bAllowStandardTranslucencySeparated;
  this->bIsInFocus = param_1->bIsInFocus;
  return this;
}

// ~FSceneViewFamily @ 148510d40

void __thiscall FSceneViewFamily::~FSceneViewFamily(FSceneViewFamily *this)

{
  ISceneViewFamilyScreenPercentage *pIVar1;
  ITemporalUpscaler *pIVar2;
  ISpatialUpscaler *pIVar3;
  FScriptContainerElement *pFVar4;
  ForElementType<UE::Math::TVector<double>_> FVar5;
  ForElementType<unsigned_int> FVar6;
  
  this->_padding_ = (longlong)&___7FSceneViewFamily__6B_;
  pIVar1 = this->ScreenPercentageInterface;
  if (pIVar1 != (ISceneViewFamilyScreenPercentage *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pIVar2 = this->TemporalUpscalerInterface;
  if (pIVar2 != (ITemporalUpscaler *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  pIVar3 = this->PrimarySpatialUpscalerInterface;
  if (pIVar3 != (ISpatialUpscaler *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  pIVar3 = this->SecondarySpatialUpscalerInterface;
  if (pIVar3 != (ISpatialUpscaler *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  DestructItems<TSharedRef<ISceneViewFamilyExtentionData,1>,int>
            ((TSharedRef<ISceneViewFamilyExtentionData,1> *)
             (this->ViewExtentionDatas).AllocatorInstance.Data,(this->ViewExtentionDatas).ArrayNum);
  pFVar4 = (this->ViewExtentionDatas).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FVar5 = (this->StreamingViewOrigins).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  pFVar4 = (this->ProfileDescription).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<TSharedRef<ISceneViewExtension,1>,int>
            ((TSharedRef<ISceneViewExtension,1> *)(this->ViewExtensions).AllocatorInstance.Data,
             (this->ViewExtensions).ArrayNum);
  pFVar4 = (this->ViewExtensions).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SceneTexturesCaptureInfo).SharedReferenceCount.ReferenceController);
  FVar6 = (this->EngineShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData;
  if (FVar6 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  pFVar4 = (this->AllViews).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Views).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
    return;
  }
  return;
}

// ChooseDebugViewShaderMode @ 14851ab10

EDebugViewShaderMode __thiscall FSceneViewFamily::ChooseDebugViewShaderMode(FSceneViewFamily *this)

{
  undefined1 *puVar1;
  
  if ((this->EngineShowFlags).ShaderComplexity != 0) {
    if ((this->EngineShowFlags).QuadOverdraw != 0) {
      return DVSM_QuadComplexity;
    }
    return ((this->EngineShowFlags).ShaderComplexityWithQuadOverdraw != 0) + DVSM_ShaderComplexity;
  }
  if ((this->EngineShowFlags).PrimitiveDistanceAccuracy != 0) {
    return DVSM_PrimitiveDistanceAccuracy;
  }
  if ((this->EngineShowFlags).MeshUVDensityAccuracy != 0) {
    return DVSM_MeshUVDensityAccuracy;
  }
  if ((this->EngineShowFlags).OutputMaterialTextureScales != 0) {
    return DVSM_OutputMaterialTextureScales;
  }
  if ((this->EngineShowFlags).MaterialTextureScaleAccuracy != 0) {
    return DVSM_MaterialTextureScaleAccuracy;
  }
  if ((this->EngineShowFlags).RequiredTextureResolution != 0) {
    return DVSM_RequiredTextureResolution;
  }
  if ((this->EngineShowFlags).LODColoration == 0 && (this->EngineShowFlags).HLODColoration == 0) {
    if ((this->EngineShowFlags).VisualizeGPUSkinCache != 0) {
      return DVSM_VisualizeGPUSkinCache;
    }
    if ((this->EngineShowFlags).VisualizeLWCComplexity != 0) {
      return DVSM_LWCComplexity;
    }
    return -(uint)((this->EngineShowFlags).VisualizeShadowCasters != 0) & DVSM_ShadowCasters;
  }
  return DVSM_LODColoration;
}

// GetDebugViewShaderMode @ 1485296c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

EDebugViewShaderMode __thiscall FSceneViewFamily::GetDebugViewShaderMode(FSceneViewFamily *this)

{
  undefined1 *puVar1;
  bool bVar2;
  EDebugViewShaderMode EVar3;
  EShaderPlatform EVar4;
  Type TVar5;
  
  if (this->DebugViewShaderMode != DVSM_MAX) {
    return this->DebugViewShaderMode;
  }
  if ((this->EngineShowFlags).ShaderComplexity == 0) {
    if ((this->EngineShowFlags).PrimitiveDistanceAccuracy == 0) {
      if ((this->EngineShowFlags).MeshUVDensityAccuracy == 0) {
        if ((this->EngineShowFlags).OutputMaterialTextureScales == 0) {
          if ((this->EngineShowFlags).MaterialTextureScaleAccuracy == 0) {
            if ((this->EngineShowFlags).RequiredTextureResolution == 0) {
              if ((this->EngineShowFlags).LODColoration == 0 &&
                  (this->EngineShowFlags).HLODColoration == 0) {
                if ((this->EngineShowFlags).VisualizeGPUSkinCache == 0) {
                  if ((this->EngineShowFlags).VisualizeLWCComplexity == 0) {
                    EVar3 = -(uint)((this->EngineShowFlags).VisualizeShadowCasters != 0) &
                            DVSM_ShadowCasters;
                  }
                  else {
                    EVar3 = DVSM_LWCComplexity;
                  }
                }
                else {
                  EVar3 = DVSM_VisualizeGPUSkinCache;
                }
              }
              else {
                EVar3 = DVSM_LODColoration;
              }
            }
            else {
              EVar3 = DVSM_RequiredTextureResolution;
            }
          }
          else {
            EVar3 = DVSM_MaterialTextureScaleAccuracy;
          }
        }
        else {
          EVar3 = DVSM_OutputMaterialTextureScales;
        }
      }
      else {
        EVar3 = DVSM_MeshUVDensityAccuracy;
      }
    }
    else {
      EVar3 = DVSM_PrimitiveDistanceAccuracy;
    }
  }
  else if ((this->EngineShowFlags).QuadOverdraw == 0) {
    EVar3 = ((this->EngineShowFlags).ShaderComplexityWithQuadOverdraw != 0) + DVSM_ShaderComplexity;
  }
  else {
    EVar3 = DVSM_QuadComplexity;
  }
  this->DebugViewShaderMode = EVar3;
  TVar5 = GMaxRHIFeatureLevel;
  if (this->Scene != (FSceneInterface *)0x0) {
    TVar5 = this->Scene->FeatureLevel;
  }
  if (TVar5 == Num) {
    EVar4 = SP_NumPlatforms;
  }
  else {
    EVar4 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar5];
  }
  bVar2 = AllowDebugViewShaderMode(EVar3,EVar4,TVar5);
  if (!bVar2) {
    this->DebugViewShaderMode = DVSM_None;
  }
  return this->DebugViewShaderMode;
}

// GetFeatureLevel @ 14852a710

Type __thiscall FSceneViewFamily::GetFeatureLevel(FSceneViewFamily *this)

{
  if (this->Scene != (FSceneInterface *)0x0) {
    return this->Scene->FeatureLevel;
  }
  return GMaxRHIFeatureLevel;
}

// SupportsScreenPercentage @ 148549460

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FSceneViewFamily::SupportsScreenPercentage(FSceneViewFamily *this)

{
  int iVar1;
  FSceneInterface *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EShaderPlatform EVar5;
  FStereoShaderAspects local_res8 [32];
  
  iVar1 = (this->Views).ArrayNum;
  if (iVar1 != 0) {
    if ((iVar1 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (*(int *)(*(longlong *)(this->Views).AllocatorInstance.Data + 0x1b94) == 2) {
      return true;
    }
  }
  this_00 = this->Scene;
  if (this_00 != (FSceneInterface *)0x0) {
    if (2 < (int)this_00->FeatureLevel) {
      return true;
    }
    EVar5 = FSceneInterface::GetShaderPlatform(this_00);
    UE::StereoRenderUtils::FStereoShaderAspects::FStereoShaderAspects(local_res8,EVar5);
    if ((FReadOnlyCVARCache::bMobileHDR != false) &&
       (bVar3 = IsMobileTonemapSubpassEnabled(EVar5,ZPULL(local_res8[0],1,1)), !bVar3)) {
      return true;
    }
  }
  return false;
}

