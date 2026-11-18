// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FCachedShadowMapData @ 145608f40

FCachedShadowMapData * __thiscall
FCachedShadowMapData::FCachedShadowMapData(FCachedShadowMapData *this,FCachedShadowMapData *param_1)

{
  ForElementType<TRefCountPtr<IPooledRenderTarget>_> FVar1;
  ForElementType<unsigned_int> FVar2;
  undefined8 uVar3;
  double dVar4;
  FCachedShadowMapData *pFVar5;
  FCachedShadowMapData *pFVar6;
  FCachedShadowMapData *pFVar7;
  longlong lVar8;
  FCachedShadowMapData *pFVar9;
  
  lVar8 = 2;
  pFVar5 = this;
  pFVar6 = param_1;
  do {
    pFVar9 = pFVar6;
    pFVar7 = pFVar5;
    pFVar5 = (FCachedShadowMapData *)&(pFVar7->Initializer).field_0x80;
    uVar3 = *(undefined8 *)&(pFVar9->Initializer).field_0x8;
    pFVar6 = (FCachedShadowMapData *)&(pFVar9->Initializer).field_0x80;
    *(undefined8 *)&pFVar7->Initializer = *(undefined8 *)&pFVar9->Initializer;
    *(undefined8 *)&(pFVar7->Initializer).field_0x8 = uVar3;
    uVar3 = *(undefined8 *)&(pFVar9->Initializer).field_0x18;
    *(undefined8 *)&(pFVar7->Initializer).field_0x10 =
         *(undefined8 *)&(pFVar9->Initializer).field_0x10;
    *(undefined8 *)&(pFVar7->Initializer).field_0x18 = uVar3;
    uVar3 = *(undefined8 *)&(pFVar9->Initializer).field_0x28;
    *(undefined8 *)&(pFVar7->Initializer).field_0x20 =
         *(undefined8 *)&(pFVar9->Initializer).field_0x20;
    *(undefined8 *)&(pFVar7->Initializer).field_0x28 = uVar3;
    uVar3 = *(undefined8 *)&(pFVar9->Initializer).field_0x38;
    *(undefined8 *)&(pFVar7->Initializer).field_0x30 =
         *(undefined8 *)&(pFVar9->Initializer).field_0x30;
    *(undefined8 *)&(pFVar7->Initializer).field_0x38 = uVar3;
    uVar3 = *(undefined8 *)&(pFVar9->Initializer).field_0x48;
    *(undefined8 *)&(pFVar7->Initializer).field_0x40 =
         *(undefined8 *)&(pFVar9->Initializer).field_0x40;
    *(undefined8 *)&(pFVar7->Initializer).field_0x48 = uVar3;
    uVar3 = *(undefined8 *)&(pFVar9->Initializer).field_0x58;
    *(undefined8 *)&(pFVar7->Initializer).field_0x50 =
         *(undefined8 *)&(pFVar9->Initializer).field_0x50;
    *(undefined8 *)&(pFVar7->Initializer).field_0x58 = uVar3;
    uVar3 = *(undefined8 *)&(pFVar9->Initializer).field_0x68;
    *(undefined8 *)&(pFVar7->Initializer).field_0x60 =
         *(undefined8 *)&(pFVar9->Initializer).field_0x60;
    *(undefined8 *)&(pFVar7->Initializer).field_0x68 = uVar3;
    uVar3 = *(undefined8 *)&(pFVar9->Initializer).field_0x78;
    *(undefined8 *)&(pFVar7->Initializer).field_0x70 =
         *(undefined8 *)&(pFVar9->Initializer).field_0x70;
    *(undefined8 *)&(pFVar7->Initializer).field_0x78 = uVar3;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  uVar3 = *(undefined8 *)&(pFVar9->Initializer).field_0x88;
  *(undefined8 *)pFVar5 = *(undefined8 *)pFVar6;
  *(undefined8 *)&(pFVar7->Initializer).field_0x88 = uVar3;
  uVar3 = *(undefined8 *)&(pFVar9->Initializer).field_0x98;
  *(undefined8 *)&(pFVar7->Initializer).field_0x90 =
       *(undefined8 *)&(pFVar9->Initializer).field_0x90;
  *(undefined8 *)&(pFVar7->Initializer).field_0x98 = uVar3;
  (this->Initializer).CascadeSettings.SplitNear = (param_1->Initializer).CascadeSettings.SplitNear;
  (this->Initializer).CascadeSettings.SplitFar = (param_1->Initializer).CascadeSettings.SplitFar;
  (this->Initializer).CascadeSettings.SplitNearFadeRegion =
       (param_1->Initializer).CascadeSettings.SplitNearFadeRegion;
  (this->Initializer).CascadeSettings.SplitFarFadeRegion =
       (param_1->Initializer).CascadeSettings.SplitFarFadeRegion;
  (this->Initializer).CascadeSettings.FadePlaneOffset =
       (param_1->Initializer).CascadeSettings.FadePlaneOffset;
  (this->Initializer).CascadeSettings.FadePlaneLength =
       (param_1->Initializer).CascadeSettings.FadePlaneLength;
  FConvexVolume::FConvexVolume
            (&(this->Initializer).CascadeSettings.ShadowBoundsAccurate,
             &(param_1->Initializer).CascadeSettings.ShadowBoundsAccurate);
  lVar8 = (param_1->Initializer).CascadeSettings.NearFrustumPlane._padding_;
  (this->Initializer).CascadeSettings.NearFrustumPlane._padding_ =
       (param_1->Initializer).CascadeSettings.NearFrustumPlane._padding_;
  (this->Initializer).CascadeSettings.NearFrustumPlane._padding_ = lVar8;
  dVar4 = (param_1->Initializer).CascadeSettings.NearFrustumPlane.W;
  (this->Initializer).CascadeSettings.NearFrustumPlane._padding_ =
       (param_1->Initializer).CascadeSettings.NearFrustumPlane._padding_;
  (this->Initializer).CascadeSettings.NearFrustumPlane.W = dVar4;
  lVar8 = (param_1->Initializer).CascadeSettings.FarFrustumPlane._padding_;
  (this->Initializer).CascadeSettings.FarFrustumPlane._padding_ =
       (param_1->Initializer).CascadeSettings.FarFrustumPlane._padding_;
  (this->Initializer).CascadeSettings.FarFrustumPlane._padding_ = lVar8;
  dVar4 = (param_1->Initializer).CascadeSettings.FarFrustumPlane.W;
  (this->Initializer).CascadeSettings.FarFrustumPlane._padding_ =
       (param_1->Initializer).CascadeSettings.FarFrustumPlane._padding_;
  (this->Initializer).CascadeSettings.FarFrustumPlane.W = dVar4;
  (this->Initializer).CascadeSettings.bFarShadowCascade =
       (param_1->Initializer).CascadeSettings.bFarShadowCascade;
  (this->Initializer).CascadeSettings.ShadowSplitIndex =
       (param_1->Initializer).CascadeSettings.ShadowSplitIndex;
  (this->Initializer).CascadeSettings.CascadeBiasDistribution =
       (param_1->Initializer).CascadeSettings.CascadeBiasDistribution;
  (this->Initializer).bOnePassPointLightShadow = (param_1->Initializer).bOnePassPointLightShadow;
  (this->Initializer).bRayTracedDistanceField = (param_1->Initializer).bRayTracedDistanceField;
  (this->ShadowMap).ColorTargets.AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0;
  if ((param_1->ShadowMap).ColorTargets.AllocatorInstance.SecondaryData ==
      (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0) {
    memmove(&this->ShadowMap,&param_1->ShadowMap,0x20);
  }
  FVar1 = (this->ShadowMap).ColorTargets.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->ShadowMap).ColorTargets.AllocatorInstance.SecondaryData =
       (param_1->ShadowMap).ColorTargets.AllocatorInstance.SecondaryData;
  (param_1->ShadowMap).ColorTargets.AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0;
  (this->ShadowMap).ColorTargets.ArrayNum = (param_1->ShadowMap).ColorTargets.ArrayNum;
  (this->ShadowMap).ColorTargets.ArrayMax = (param_1->ShadowMap).ColorTargets.ArrayMax;
  (param_1->ShadowMap).ColorTargets.ArrayNum = 0;
  (param_1->ShadowMap).ColorTargets.ArrayMax = 4;
  (this->ShadowMap).DepthTarget.Reference = (IPooledRenderTarget *)0x0;
  (this->ShadowMap).DepthTarget.Reference = (param_1->ShadowMap).DepthTarget.Reference;
  (param_1->ShadowMap).DepthTarget.Reference = (IPooledRenderTarget *)0x0;
  this->LastUsedTime = param_1->LastUsedTime;
  this->bCachedShadowMapHasPrimitives = param_1->bCachedShadowMapHasPrimitives;
  this->bCachedShadowMapHasNaniteGeometry = param_1->bCachedShadowMapHasNaniteGeometry;
  (this->StaticShadowSubjectPersistentPrimitiveIdMap).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  if ((param_1->StaticShadowSubjectPersistentPrimitiveIdMap).AllocatorInstance.SecondaryData ==
      (ForElementType<unsigned_int>)0x0) {
    memmove(&this->StaticShadowSubjectPersistentPrimitiveIdMap,
            &param_1->StaticShadowSubjectPersistentPrimitiveIdMap,0x10);
  }
  FVar2 = (this->StaticShadowSubjectPersistentPrimitiveIdMap).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->StaticShadowSubjectPersistentPrimitiveIdMap).AllocatorInstance.SecondaryData =
       (param_1->StaticShadowSubjectPersistentPrimitiveIdMap).AllocatorInstance.SecondaryData;
  (param_1->StaticShadowSubjectPersistentPrimitiveIdMap).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->StaticShadowSubjectPersistentPrimitiveIdMap).NumBits =
       (param_1->StaticShadowSubjectPersistentPrimitiveIdMap).NumBits;
  (this->StaticShadowSubjectPersistentPrimitiveIdMap).MaxBits =
       (param_1->StaticShadowSubjectPersistentPrimitiveIdMap).MaxBits;
  (param_1->StaticShadowSubjectPersistentPrimitiveIdMap).NumBits = 0;
  (param_1->StaticShadowSubjectPersistentPrimitiveIdMap).MaxBits = 0;
  (this->ShadowBufferResolution).field0_0x0 = (param_1->ShadowBufferResolution).field0_0x0;
  dVar4 = (param_1->PreShadowTranslation).field0_0x0._s_0.Y;
  (this->PreShadowTranslation).field0_0x0._s_0.X = (param_1->PreShadowTranslation).field0_0x0._s_0.X
  ;
  (this->PreShadowTranslation).field0_0x0._s_0.Y = dVar4;
  (this->PreShadowTranslation).field0_0x0._s_0.Z = (param_1->PreShadowTranslation).field0_0x0._s_0.Z
  ;
  this->MaxSubjectZ = param_1->MaxSubjectZ;
  this->MinSubjectZ = param_1->MinSubjectZ;
  this->LastFrameExtraStaticShadowSubjects = param_1->LastFrameExtraStaticShadowSubjects;
  return this;
}

// FCachedShadowMapData @ 145609220

FCachedShadowMapData * __thiscall
FCachedShadowMapData::FCachedShadowMapData
          (FCachedShadowMapData *this,FWholeSceneProjectedShadowInitializer *param_1,float param_2)

{
  undefined8 uVar1;
  double dVar2;
  FCachedShadowMapData *pFVar3;
  FWholeSceneProjectedShadowInitializer *pFVar4;
  FCachedShadowMapData *pFVar5;
  FWholeSceneProjectedShadowInitializer *pFVar6;
  longlong lVar7;
  
  lVar7 = 2;
  pFVar3 = this;
  pFVar4 = param_1;
  do {
    pFVar6 = pFVar4;
    pFVar5 = pFVar3;
    pFVar3 = (FCachedShadowMapData *)&(pFVar5->Initializer).field_0x80;
    uVar1 = *(undefined8 *)&pFVar6->field_0x8;
    *(undefined8 *)&pFVar5->Initializer = *(undefined8 *)pFVar6;
    *(undefined8 *)&(pFVar5->Initializer).field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&pFVar6->field_0x18;
    *(undefined8 *)&(pFVar5->Initializer).field_0x10 = *(undefined8 *)&pFVar6->field_0x10;
    *(undefined8 *)&(pFVar5->Initializer).field_0x18 = uVar1;
    uVar1 = *(undefined8 *)&pFVar6->field_0x28;
    *(undefined8 *)&(pFVar5->Initializer).field_0x20 = *(undefined8 *)&pFVar6->field_0x20;
    *(undefined8 *)&(pFVar5->Initializer).field_0x28 = uVar1;
    uVar1 = *(undefined8 *)&pFVar6->field_0x38;
    *(undefined8 *)&(pFVar5->Initializer).field_0x30 = *(undefined8 *)&pFVar6->field_0x30;
    *(undefined8 *)&(pFVar5->Initializer).field_0x38 = uVar1;
    uVar1 = *(undefined8 *)&pFVar6->field_0x48;
    *(undefined8 *)&(pFVar5->Initializer).field_0x40 = *(undefined8 *)&pFVar6->field_0x40;
    *(undefined8 *)&(pFVar5->Initializer).field_0x48 = uVar1;
    uVar1 = *(undefined8 *)&pFVar6->field_0x58;
    *(undefined8 *)&(pFVar5->Initializer).field_0x50 = *(undefined8 *)&pFVar6->field_0x50;
    *(undefined8 *)&(pFVar5->Initializer).field_0x58 = uVar1;
    uVar1 = *(undefined8 *)&pFVar6->field_0x68;
    *(undefined8 *)&(pFVar5->Initializer).field_0x60 = *(undefined8 *)&pFVar6->field_0x60;
    *(undefined8 *)&(pFVar5->Initializer).field_0x68 = uVar1;
    uVar1 = *(undefined8 *)&pFVar6->field_0x78;
    *(undefined8 *)&(pFVar5->Initializer).field_0x70 = *(undefined8 *)&pFVar6->field_0x70;
    *(undefined8 *)&(pFVar5->Initializer).field_0x78 = uVar1;
    lVar7 = lVar7 + -1;
    pFVar4 = (FWholeSceneProjectedShadowInitializer *)&pFVar6->field_0x80;
  } while (lVar7 != 0);
  uVar1 = *(undefined8 *)&pFVar6->field_0x88;
  *(undefined8 *)pFVar3 = *(undefined8 *)&pFVar6->field_0x80;
  *(undefined8 *)&(pFVar5->Initializer).field_0x88 = uVar1;
  uVar1 = *(undefined8 *)&pFVar6->field_0x98;
  *(undefined8 *)&(pFVar5->Initializer).field_0x90 = *(undefined8 *)&pFVar6->field_0x90;
  *(undefined8 *)&(pFVar5->Initializer).field_0x98 = uVar1;
  (this->Initializer).CascadeSettings.SplitNear = (param_1->CascadeSettings).SplitNear;
  (this->Initializer).CascadeSettings.SplitFar = (param_1->CascadeSettings).SplitFar;
  (this->Initializer).CascadeSettings.SplitNearFadeRegion =
       (param_1->CascadeSettings).SplitNearFadeRegion;
  (this->Initializer).CascadeSettings.SplitFarFadeRegion =
       (param_1->CascadeSettings).SplitFarFadeRegion;
  (this->Initializer).CascadeSettings.FadePlaneOffset = (param_1->CascadeSettings).FadePlaneOffset;
  (this->Initializer).CascadeSettings.FadePlaneLength = (param_1->CascadeSettings).FadePlaneLength;
  FConvexVolume::FConvexVolume
            (&(this->Initializer).CascadeSettings.ShadowBoundsAccurate,
             &(param_1->CascadeSettings).ShadowBoundsAccurate);
  lVar7 = (param_1->CascadeSettings).NearFrustumPlane._padding_;
  (this->Initializer).CascadeSettings.NearFrustumPlane._padding_ =
       (param_1->CascadeSettings).NearFrustumPlane._padding_;
  (this->Initializer).CascadeSettings.NearFrustumPlane._padding_ = lVar7;
  dVar2 = (param_1->CascadeSettings).NearFrustumPlane.W;
  (this->Initializer).CascadeSettings.NearFrustumPlane._padding_ =
       (param_1->CascadeSettings).NearFrustumPlane._padding_;
  (this->Initializer).CascadeSettings.NearFrustumPlane.W = dVar2;
  lVar7 = (param_1->CascadeSettings).FarFrustumPlane._padding_;
  (this->Initializer).CascadeSettings.FarFrustumPlane._padding_ =
       (param_1->CascadeSettings).FarFrustumPlane._padding_;
  (this->Initializer).CascadeSettings.FarFrustumPlane._padding_ = lVar7;
  dVar2 = (param_1->CascadeSettings).FarFrustumPlane.W;
  (this->Initializer).CascadeSettings.FarFrustumPlane._padding_ =
       (param_1->CascadeSettings).FarFrustumPlane._padding_;
  (this->Initializer).CascadeSettings.FarFrustumPlane.W = dVar2;
  (this->Initializer).CascadeSettings.bFarShadowCascade =
       (param_1->CascadeSettings).bFarShadowCascade;
  (this->Initializer).CascadeSettings.ShadowSplitIndex = (param_1->CascadeSettings).ShadowSplitIndex
  ;
  (this->Initializer).CascadeSettings.CascadeBiasDistribution =
       (param_1->CascadeSettings).CascadeBiasDistribution;
  (this->Initializer).bOnePassPointLightShadow = param_1->bOnePassPointLightShadow;
  (this->Initializer).bRayTracedDistanceField = param_1->bRayTracedDistanceField;
  (this->ShadowMap).ColorTargets.AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0;
  (this->ShadowMap).ColorTargets.ArrayNum = 0;
  (this->ShadowMap).ColorTargets.ArrayMax = 4;
  (this->ShadowMap).DepthTarget.Reference = (IPooledRenderTarget *)0x0;
  this->LastUsedTime = param_2;
  (this->StaticShadowSubjectPersistentPrimitiveIdMap).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  this->bCachedShadowMapHasPrimitives = true;
  this->bCachedShadowMapHasNaniteGeometry = false;
  (this->StaticShadowSubjectPersistentPrimitiveIdMap).NumBits = 0;
  (this->StaticShadowSubjectPersistentPrimitiveIdMap).MaxBits = 0x80;
  return this;
}

// InvalidateCachedShadow @ 14563a6d0

void __thiscall FCachedShadowMapData::InvalidateCachedShadow(FCachedShadowMapData *this)

{
  int *piVar1;
  FShadowMapRenderTargetsRefCounted *pFVar2;
  longlong *plVar3;
  IPooledRenderTarget *pIVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ForElementType<TRefCountPtr<IPooledRenderTarget>_> FVar8;
  ForElementType<TRefCountPtr<IPooledRenderTarget>_> FVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar12 = 0;
  pFVar2 = &this->ShadowMap;
  iVar10 = (this->ShadowMap).ColorTargets.ArrayNum;
  uVar13 = uVar12;
  if (0 < iVar10) {
    do {
      uVar11 = (uint)uVar12;
      uVar7 = 0;
      if ((int)uVar11 < iVar10) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar9 = (this->ShadowMap).ColorTargets.AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)pFVar2;
      if (FVar9 != (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0) {
        FVar8 = FVar9;
      }
      plVar3 = *(longlong **)(uVar13 + (longlong)FVar8);
      if (plVar3 != (longlong *)0x0) {
        *(undefined8 *)(uVar13 + (longlong)FVar8) = 0;
        (**(code **)(*plVar3 + 0x38))();
      }
      iVar10 = (this->ShadowMap).ColorTargets.ArrayNum;
      uVar12 = (ulonglong)(uVar11 + 1);
      uVar13 = uVar13 + 8;
    } while ((int)(uVar11 + 1) < iVar10);
  }
  FVar9 = (this->ShadowMap).ColorTargets.AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0) {
    FVar9 = (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)pFVar2;
  }
  DestructItems<TRefCountPtr<IPooledRenderTarget>,int>
            ((TRefCountPtr<IPooledRenderTarget> *)FVar9,iVar10);
  piVar1 = &(this->ShadowMap).ColorTargets.ArrayMax;
  (this->ShadowMap).ColorTargets.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<IPooledRenderTarget>_>_>
              (8,8,0,(ForElementType<TRefCountPtr<IPooledRenderTarget>_> *)pFVar2,0,piVar1);
  }
  pIVar4 = (this->ShadowMap).DepthTarget.Reference;
  if (pIVar4 != (IPooledRenderTarget *)0x0) {
    (this->ShadowMap).DepthTarget.Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar4->_padding_ + 0x38))();
  }
  TBitArray<FDefaultBitArrayAllocator>::SetRange
            (&this->StaticShadowSubjectPersistentPrimitiveIdMap,0,
             (this->StaticShadowSubjectPersistentPrimitiveIdMap).NumBits,false);
  return;
}

