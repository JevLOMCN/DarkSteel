// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 17

// StaticClass @ 145ecf1d0

UClass * __cdecl UFoliageType::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFoliageType.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"FoliageType",
               &Z_Registration_Info_UClass_UFoliageType.InnerSingleton,
               StaticRegisterNativesUFoliageType,0x4c0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UFoliageType>,
               InternalVTableHelperCtorCaller<UFoliageType>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFoliageType.InnerSingleton;
}

// UFoliageType @ 145ed8b00

UFoliageType * __thiscall UFoliageType::UFoliageType(UFoliageType *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  FLightingChannels *pFVar2;
  FLightingChannels *pFVar3;
  FLightingChannels FVar4;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UFoliageType__6B_;
  (this->UpdateGuid).A = 0;
  (this->UpdateGuid).B = 0;
  (this->UpdateGuid).C = 0;
  (this->UpdateGuid).D = 0;
  this->bSingleInstanceModeOverrideRadius = false;
  this->SingleInstanceModeRadius = 0.0;
  *(undefined4 *)&this->ScaleX = 0x7f7fffff;
  *(undefined4 *)&(this->ScaleX).field_0x4 = 0xff7fffff;
  *(undefined4 *)&this->ScaleY = 0x7f7fffff;
  *(undefined4 *)&(this->ScaleY).field_0x4 = 0xff7fffff;
  *(undefined4 *)&this->ScaleZ = 0x7f7fffff;
  *(undefined4 *)&(this->ScaleZ).field_0x4 = 0xff7fffff;
  this->VertexColorMaskByChannel[0].UseMask = 0;
  this->VertexColorMaskByChannel[0].InvertMask = 0;
  this->VertexColorMaskByChannel[0].MaskThreshold = 0.5;
  this->VertexColorMaskByChannel[1].UseMask = 0;
  this->VertexColorMaskByChannel[1].MaskThreshold = 0.5;
  this->VertexColorMaskByChannel[1].InvertMask = 0;
  this->VertexColorMaskByChannel[2].UseMask = 0;
  this->VertexColorMaskByChannel[2].MaskThreshold = 0.5;
  this->VertexColorMaskByChannel[2].InvertMask = 0;
  this->VertexColorMaskByChannel[3].UseMask = 0;
  this->VertexColorMaskByChannel[3].MaskThreshold = 0.5;
  this->VertexColorMaskByChannel[3].InvertMask = 0;
  *(undefined4 *)&this->ZOffset = 0x7f7fffff;
  *(undefined4 *)&(this->ZOffset).field_0x4 = 0xff7fffff;
  *(undefined4 *)&this->GroundSlopeAngle = 0x7f7fffff;
  *(undefined4 *)&(this->GroundSlopeAngle).field_0x4 = 0xff7fffff;
  *(undefined4 *)&this->Height = 0x7f7fffff;
  *(undefined4 *)&(this->Height).field_0x4 = 0xff7fffff;
  (this->LandscapeLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LandscapeLayers).ArrayNum = 0;
  (this->LandscapeLayers).ArrayMax = 0;
  (this->ExclusionLandscapeLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExclusionLandscapeLayers).ArrayNum = 0;
  (this->ExclusionLandscapeLayers).ArrayMax = 0;
  (this->LandscapeLayer_DEPRECATED).ComparisonIndex = 0;
  (this->LandscapeLayer_DEPRECATED).Number = 0;
  *(undefined4 *)&this->CullDistance = 0x7fffffff;
  *(undefined4 *)&(this->CullDistance).field_0x4 = 0x80000000;
  FBodyInstance::FBodyInstance(&this->BodyInstance);
  *(undefined4 *)&this->ProceduralScale = 0x7f7fffff;
  *(undefined4 *)&(this->ProceduralScale).field_0x4 = 0xff7fffff;
  pFVar3 = &this->LightingChannels;
  pFVar3->bChannel0 = '\x01';
  pFVar3->bChannel2 = '\0';
  pFVar3->bChannel1 = '\0';
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->ScaleCurve);
  FFoliageDensityFalloff::FFoliageDensityFalloff(&this->DensityFalloff);
  (this->RuntimeVirtualTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeVirtualTextures).ArrayNum = 0;
  (this->RuntimeVirtualTextures).ArrayMax = 0;
  this->VirtualTextureCullMips = 0;
  this->VirtualTextureRenderPassType = Exclusive;
  return this;
}

// UFoliageType @ 145ed8c90

UFoliageType * __thiscall UFoliageType::UFoliageType(UFoliageType *this,FObjectInitializer *param_1)

{
  FLightingChannels *pFVar1;
  FLightingChannels *pFVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  FLightingChannels FVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  FRichCurve *this_00;
  FGuid *pFVar11;
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle local_res8 [2];
  uint in_stack_ffffffffffffffc8;
  FKeyHandle FVar12;
  FGuid local_28;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UFoliageType__6B_;
  (this->UpdateGuid).A = 0;
  (this->UpdateGuid).B = 0;
  (this->UpdateGuid).C = 0;
  (this->UpdateGuid).D = 0;
  this->bSingleInstanceModeOverrideRadius = false;
  this->SingleInstanceModeRadius = 0.0;
  *(undefined4 *)&this->ScaleX = 0x7f7fffff;
  *(undefined4 *)&(this->ScaleX).field_0x4 = 0xff7fffff;
  *(undefined4 *)&this->ScaleY = 0x7f7fffff;
  *(undefined4 *)&(this->ScaleY).field_0x4 = 0xff7fffff;
  *(undefined4 *)&this->ScaleZ = 0x7f7fffff;
  *(undefined4 *)&(this->ScaleZ).field_0x4 = 0xff7fffff;
  this->VertexColorMaskByChannel[0].UseMask = 0;
  this->VertexColorMaskByChannel[0].InvertMask = 0;
  this->VertexColorMaskByChannel[0].MaskThreshold = 0.5;
  this->VertexColorMaskByChannel[1].UseMask = 0;
  this->VertexColorMaskByChannel[1].MaskThreshold = 0.5;
  this->VertexColorMaskByChannel[1].InvertMask = 0;
  this->VertexColorMaskByChannel[2].UseMask = 0;
  this->VertexColorMaskByChannel[2].MaskThreshold = 0.5;
  this->VertexColorMaskByChannel[2].InvertMask = 0;
  this->VertexColorMaskByChannel[3].UseMask = 0;
  this->VertexColorMaskByChannel[3].MaskThreshold = 0.5;
  this->VertexColorMaskByChannel[3].InvertMask = 0;
  *(undefined4 *)&this->ZOffset = 0x7f7fffff;
  *(undefined4 *)&(this->ZOffset).field_0x4 = 0xff7fffff;
  *(undefined4 *)&this->GroundSlopeAngle = 0x7f7fffff;
  *(undefined4 *)&(this->GroundSlopeAngle).field_0x4 = 0xff7fffff;
  *(undefined4 *)&this->Height = 0x7f7fffff;
  *(undefined4 *)&(this->Height).field_0x4 = 0xff7fffff;
  (this->LandscapeLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LandscapeLayers).ArrayNum = 0;
  (this->LandscapeLayers).ArrayMax = 0;
  (this->ExclusionLandscapeLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExclusionLandscapeLayers).ArrayNum = 0;
  (this->ExclusionLandscapeLayers).ArrayMax = 0;
  (this->LandscapeLayer_DEPRECATED).ComparisonIndex = 0;
  (this->LandscapeLayer_DEPRECATED).Number = 0;
  *(undefined4 *)&this->CullDistance = 0x7fffffff;
  *(undefined4 *)&(this->CullDistance).field_0x4 = 0x80000000;
  FBodyInstance::FBodyInstance(&this->BodyInstance);
  *(undefined4 *)&this->ProceduralScale = 0x7f7fffff;
  *(undefined4 *)&(this->ProceduralScale).field_0x4 = 0xff7fffff;
  pFVar2 = &this->LightingChannels;
  pFVar2->bChannel0 = '\x01';
  pFVar2->bChannel2 = '\0';
  pFVar2->bChannel1 = '\0';
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->ScaleCurve);
  FFoliageDensityFalloff::FFoliageDensityFalloff(&this->DensityFalloff);
  this->RandomYaw = 1;
  (this->RuntimeVirtualTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeVirtualTextures).ArrayNum = 0;
  (this->RuntimeVirtualTextures).ArrayMax = 0;
  this->VirtualTextureCullMips = 0;
  this->VirtualTextureRenderPassType = Exclusive;
  puVar5 = &this->field_0xac;
  this->AlignToNormal = 1;
  this->AverageNormalSingleComponent = 1;
  this->AverageNormal = 0;
  this->Density = 100.0;
  this->DensityAdjustmentFactor = 1.0;
  this->Radius = 0.0;
  this->Scaling = Uniform;
  *(undefined4 *)&this->ScaleX = 0x3f800000;
  *(undefined4 *)&this->ScaleY = 0x3f800000;
  *(undefined4 *)&this->ScaleZ = 0x3f800000;
  *(undefined4 *)&(this->ScaleX).field_0x4 = 0x3f800000;
  *(undefined4 *)&(this->ScaleY).field_0x4 = 0x3f800000;
  *(undefined4 *)&(this->ScaleZ).field_0x4 = 0x3f800000;
  this->AlignMaxAngle = 0.0;
  *(undefined8 *)&this->RandomPitchAngle = 0;
  *(undefined4 *)&(this->GroundSlopeAngle).field_0x4 = 0x42340000;
  *(undefined4 *)&this->Height = 0xc8800000;
  *(undefined4 *)&(this->Height).field_0x4 = 0x48800000;
  this->ZOffset = (FFloatInterval)0x0;
  this->CullDistance = (FInt32Interval)0x0;
  this->MinimumLayerWeight = 0.5;
  this->AverageNormalSampleCount = 10;
  this->CollisionWithWorld = 0;
  (this->CollisionScale).field0_0x0._s_0.X = 0.8999999761581421;
  (this->CollisionScale).field0_0x0._s_0.Y = 0.8999999761581421;
  (this->CollisionScale).field0_0x0._s_0.Z = 0.8999999761581421;
  this->bCastContactShadow = '\x01';
  this->bCastShadowAsTwoSided = 0;
  this->bOverrideLightMapRes = 0;
  this->bReceivesDecals = 0;
  this->bUseAsOccluder = 0;
  this->bVisibleInRayTracing = '\x01';
  this->bEvaluateWorldPositionOffset = '\x01';
  (this->Mobility).Value = '\0';
  puVar3 = &this->field_0x184;
  this->bEnableStaticLighting_DEPRECATED = 1;
  this->bCastStaticShadow = 1;
  this->bCastDynamicShadow = 1;
  this->bAffectDistanceFieldLighting = 0;
  this->bAffectDynamicIndirectLighting = 1;
  this->CastShadow = 1;
  this->TranslucencySortPriority = 0;
  this->OverriddenLightMapRes = 8;
  this->WorldPositionOffsetDisableDistance = 0;
  this->ShadowCacheInvalidationBehavior = Auto;
  FBodyInstance::SetCollisionProfileName
            (&this->BodyInstance,UCollisionProfile::NoCollision_ProfileName);
  this->AverageSpreadDistance = 50.0;
  this->SpreadVariance = 150.0;
  this->bCanGrowInShade = false;
  this->bSpawnsInShade = false;
  this->SeedsPerStep = 3;
  this->OverlapPriority = 0.0;
  this->NumSteps = 3;
  *(undefined4 *)&this->ProceduralScale = 0x3f800000;
  *(undefined4 *)&(this->ProceduralScale).field_0x4 = 0x40400000;
  this->ChangeCount = 0;
  this->InitialSeedDensity = 1.0;
  this->CollisionRadius = 100.0;
  this->ShadeRadius = 100.0;
  this->MaxInitialAge = 0.0;
  this->MaxAge = 10.0;
  this_00 = FRuntimeFloatCurve::GetRichCurve(&this->ScaleCurve);
  FKeyHandle::FKeyHandle(local_res8);
  FVar12.Index = in_stack_ffffffffffffffc8 & 0xffffff00;
  FRichCurve::AddKey(this_00,in_XMM1_Da,0.0,(bool)in_R9B,FVar12);
  FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(this_00,in_XMM1_Da,__real_3f800000,(bool)in_R9B,
                     (FKeyHandle)(FVar12.Index & 0xffffff00));
  bVar10 = UObjectBaseUtility::IsTemplate
                     ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar10) {
    pFVar11 = FGuid::NewGuid(&local_28);
    uVar7 = pFVar11->B;
    uVar8 = pFVar11->C;
    uVar9 = pFVar11->D;
    (this->UpdateGuid).A = pFVar11->A;
    (this->UpdateGuid).B = uVar7;
    (this->UpdateGuid).C = uVar8;
    (this->UpdateGuid).D = uVar9;
  }
  this->bEnableDensityScaling = 0;
  this->bEnableCullDistanceScaling = 0;
  this->bEnableDiscardOnLoad = 0;
  return this;
}

// ~UFoliageType @ 145eda370

void __thiscall UFoliageType::~UFoliageType(UFoliageType *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UFoliageType__6B_;
  pFVar1 = (this->RuntimeVirtualTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DensityFalloff).FalloffCurve.EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->DensityFalloff).FalloffCurve.EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->DensityFalloff).FalloffCurve.EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->DensityFalloff).FalloffCurve.EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->DensityFalloff).FalloffCurve.EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->DensityFalloff).FalloffCurve.EditorCurveData._padding_);
  pFVar1 = (this->ScaleCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->ScaleCurve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->ScaleCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->ScaleCurve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->ScaleCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ScaleCurve).EditorCurveData._padding_);
  FBodyInstance::~FBodyInstance(&this->BodyInstance);
  pFVar1 = (this->ExclusionLandscapeLayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LandscapeLayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetInitAge @ 145ee3710

float __thiscall UFoliageType::GetInitAge(UFoliageType *this,FRandomStream *param_1)

{
  uint uVar1;
  
  uVar1 = param_1->Seed * 0xbb38435 + 0x3619636b;
  param_1->Seed = uVar1;
  return ((float)(uVar1 >> 9 | 0x3f800000) - __real_3f800000) * this->MaxInitialAge;
}

// GetMaxRadius @ 145ee4050

float __thiscall UFoliageType::GetMaxRadius(UFoliageType *this)

{
  float fVar1;
  
  fVar1 = this->ShadeRadius;
  if (this->ShadeRadius <= this->CollisionRadius) {
    fVar1 = this->CollisionRadius;
  }
  return fVar1;
}

// GetNextAge @ 145ee40b0

float __thiscall UFoliageType::GetNextAge(UFoliageType *this,float param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = 0;
  if (0 < param_2) {
    while (fVar2 = param_1 + __real_3f800000, fVar2 <= this->MaxAge) {
      iVar1 = iVar1 + 1;
      param_1 = fVar2;
      if (param_2 <= iVar1) {
        return fVar2;
      }
    }
  }
  return param_1;
}

// GetPrivateStaticClass @ 145ee4fd0

UClass * __cdecl UFoliageType::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFoliageType.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"FoliageType",
               &Z_Registration_Info_UClass_UFoliageType.InnerSingleton,
               StaticRegisterNativesUFoliageType,0x4c0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UFoliageType>,
               InternalVTableHelperCtorCaller<UFoliageType>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFoliageType.InnerSingleton;
}

// GetRandomScale @ 145ee5750

TVector<float> * __thiscall
UFoliageType::GetRandomScale(UFoliageType *this,TVector<float> *__return_storage_ptr__)

{
  EFoliageScaling EVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
  EVar1 = this->Scaling;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
  fVar5 = __real_38000100;
  if (EVar1 == Uniform) {
    uVar2 = rand();
    fVar5 = *(float *)&(this->ScaleX).field_0x4;
    fVar3 = *(float *)&this->ScaleX;
    if (fVar5 < fVar3) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
      return __return_storage_ptr__;
    }
    fVar3 = (fVar5 - fVar3) * (float)(uVar2 & 0x7fff) * __real_38000100 + fVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.X = fVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3;
    return __return_storage_ptr__;
  }
  if (EVar1 == Free) {
    uVar2 = rand();
    fVar4 = __real_38000100;
    fVar5 = *(float *)&(this->ScaleX).field_0x4;
    fVar3 = *(float *)&this->ScaleX;
    if (fVar5 < fVar3) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = (fVar5 - fVar3) * (float)(uVar2 & 0x7fff) * __real_38000100 + fVar3;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = fVar3;
    uVar2 = rand();
    fVar3 = *(float *)&(this->ScaleY).field_0x4;
    fVar5 = *(float *)&this->ScaleY;
    if (fVar5 <= fVar3) {
      fVar5 = (fVar3 - fVar5) * (float)(uVar2 & 0x7fff) * fVar4 + fVar5;
      goto LAB_145ee59e6;
    }
  }
  else {
    if (EVar1 != LockXY) {
      if (EVar1 == LockXZ) {
        uVar2 = rand();
        fVar3 = *(float *)&(this->ScaleX).field_0x4;
        fVar4 = *(float *)&this->ScaleX;
        fVar6 = (float)(uVar2 & 0x7fff) * fVar5;
        if (fVar3 < fVar4) {
          fVar4 = 0.0;
        }
        else {
          fVar4 = (fVar3 - fVar4) * fVar6 + fVar4;
        }
        (__return_storage_ptr__->field0_0x0)._s_0.X = fVar4;
        uVar2 = rand();
        fVar3 = *(float *)&(this->ScaleY).field_0x4;
        fVar4 = *(float *)&this->ScaleY;
        if (fVar3 < fVar4) {
          fVar4 = 0.0;
        }
        else {
          fVar4 = (fVar3 - fVar4) * (float)(uVar2 & 0x7fff) * fVar5 + fVar4;
        }
        fVar3 = *(float *)&this->ScaleZ;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar4;
        fVar4 = *(float *)&(this->ScaleZ).field_0x4;
        if (fVar4 < fVar3) {
          fVar3 = 0.0;
        }
        else {
          fVar3 = (fVar4 - fVar3) * fVar6 + fVar3;
        }
        (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3;
      }
      else if (EVar1 != LockYZ) {
        return __return_storage_ptr__;
      }
      uVar2 = rand();
      fVar6 = (float)(uVar2 & 0x7fff) * fVar5;
      uVar2 = rand();
      fVar3 = *(float *)&(this->ScaleX).field_0x4;
      fVar4 = *(float *)&this->ScaleX;
      if (fVar3 < fVar4) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = (fVar3 - fVar4) * (float)(uVar2 & 0x7fff) * fVar5 + fVar4;
      }
      fVar5 = *(float *)&this->ScaleY;
      (__return_storage_ptr__->field0_0x0)._s_0.X = fVar4;
      fVar3 = *(float *)&(this->ScaleY).field_0x4;
      if (fVar3 < fVar5) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = (fVar3 - fVar5) * fVar6 + fVar5;
      }
      fVar3 = *(float *)&this->ScaleZ;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar5;
      fVar5 = *(float *)&(this->ScaleZ).field_0x4;
      if (fVar5 < fVar3) {
        (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
      }
      else {
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (fVar5 - fVar3) * fVar6 + fVar3;
      }
      return __return_storage_ptr__;
    }
    uVar2 = rand();
    fVar4 = __real_38000100;
    fVar5 = *(float *)&(this->ScaleX).field_0x4;
    fVar3 = *(float *)&this->ScaleX;
    fVar6 = (float)(uVar2 & 0x7fff) * __real_38000100;
    if (fVar5 < fVar3) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = (fVar5 - fVar3) * fVar6 + fVar3;
    }
    fVar5 = *(float *)&this->ScaleY;
    (__return_storage_ptr__->field0_0x0)._s_0.X = fVar3;
    fVar3 = *(float *)&(this->ScaleY).field_0x4;
    if (fVar5 <= fVar3) {
      fVar5 = (fVar3 - fVar5) * fVar6 + fVar5;
      goto LAB_145ee59e6;
    }
  }
  fVar5 = 0.0;
LAB_145ee59e6:
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar5;
  uVar2 = rand();
  fVar5 = *(float *)&(this->ScaleZ).field_0x4;
  fVar3 = *(float *)&this->ScaleZ;
  if (fVar5 < fVar3) {
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (fVar5 - fVar3) * (float)(uVar2 & 0x7fff) * fVar4 + fVar3;
  return __return_storage_ptr__;
}

// GetScaleForAge @ 145ee5e70

float __thiscall UFoliageType::GetScaleForAge(UFoliageType *this,float param_1)

{
  FRichCurve *this_00;
  float fVar1;
  
  this_00 = FRuntimeFloatCurve::GetRichCurveConst(&this->ScaleCurve);
  fVar1 = __real_3f800000;
  if (this->MaxAge != 0.0) {
    fVar1 = param_1 / this->MaxAge;
  }
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar1 = FRichCurve::Eval(this_00,fVar1,0.0);
  return (*(float *)&(this->ProceduralScale).field_0x4 - *(float *)&this->ProceduralScale) * fVar1 +
         *(float *)&this->ProceduralScale;
}

// GetSource @ 145ee61a0

UObject * __thiscall UFoliageType::GetSource(UFoliageType *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Public\\FoliageType.h",
             0x6e,L"Pure virtual not implemented (%s)");
  return (UObject *)0x0;
}

// GetSpawnsInShade @ 145ee6250

bool __thiscall UFoliageType::GetSpawnsInShade(UFoliageType *this)

{
  if ((this->bCanGrowInShade != false) && (this->bSpawnsInShade != false)) {
    return true;
  }
  return false;
}

// IsNotAssetOrBlueprint @ 145ee78e0

bool __thiscall UFoliageType::IsNotAssetOrBlueprint(UFoliageType *this)

{
  char cVar1;
  FUObjectItem *pFVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x1c0))();
  if (cVar1 == '\0') {
    pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(this->_padding_ + 0xc));
    if (((uint)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x39) & 1) != 0) {
      return true;
    }
  }
  return false;
}

// PostLoad @ 145ee8a00

void __thiscall UFoliageType::PostLoad(UFoliageType *this)

{
  bool bVar1;
  
  UObject::PostLoad((UObject *)this);
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar1) {
    FBodyInstance::FixupData(&this->BodyInstance,(UObject *)this);
    return;
  }
  return;
}

// Serialize @ 145eeb280

void __thiscall UFoliageType::Serialize(UFoliageType *this,FArchive *param_1)

{
  int *piVar1;
  FName *pFVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  uint *puVar4;
  uchar uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  FGuid local_28;
  FGuid local_18;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFoliageCustomVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((((param_1->field_0x28 & 1) != 0) && ((param_1->field_0x29 & 1) != 0)) &&
      ((*(uint *)&param_1->field_0x34 & 0x401000) == 0)) &&
     (uVar5 = (this->VertexColorMask_DEPRECATED).Value, uVar5 != '\0')) {
    if (uVar5 == '\x01') {
      lVar11 = 0x68;
    }
    else if (uVar5 == '\x02') {
      lVar11 = 0x74;
    }
    else if (uVar5 == '\x03') {
      lVar11 = 0x80;
    }
    else {
      if (uVar5 != '\x04') goto LAB_145eeb33d;
      lVar11 = 0x8c;
    }
    puVar4 = (uint *)((longlong)this->VertexColorMaskByChannel + lVar11 + -0x68);
    if (puVar4 != (uint *)0x0) {
      *puVar4 = *puVar4 | 1;
      puVar4[1] = (uint)this->VertexColorMaskThreshold_DEPRECATED;
      puVar4[2] = puVar4[2] ^ (puVar4[2] ^ this->VertexColorMaskInvert_DEPRECATED) & 1;
      (this->VertexColorMask_DEPRECATED).Value = '\0';
    }
  }
LAB_145eeb33d:
  pFVar2 = &this->LandscapeLayer_DEPRECATED;
  if ((*pFVar2 != (FName)0x0) && ((this->LandscapeLayers).ArrayNum == 0)) {
    pTVar3 = &this->LandscapeLayers;
    pFVar7 = (pTVar3->AllocatorInstance).Data;
    if ((pFVar7 <= pFVar2) && (pFVar2 < pFVar7 + (longlong)(this->LandscapeLayers).ArrayMax * 8)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar10 = (this->LandscapeLayers).ArrayNum;
    piVar1 = &(this->LandscapeLayers).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->LandscapeLayers).ArrayNum = iVar10 + 1;
    *(FName *)((pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 8) = *pFVar2;
    pFVar2->ComparisonIndex = 0;
    pFVar2->Number = 0;
  }
  bVar9 = (param_1->field_0x28 & 1) == 0;
  if (!bVar9) {
    local_28 = FFoliageCustomVersion::GUID;
    iVar10 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_28);
    if (iVar10 < 10) {
      (this->Mobility).Value = ~(this->field_0x184 * '\x02') & 2;
    }
    bVar9 = (param_1->field_0x28 & 1) == 0;
  }
  if (!bVar9) {
    local_18 = FFoliageCustomVersion::GUID;
    iVar10 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
    if (iVar10 < 0xf) {
      uVar6 = *(uint *)&this->field_0x4a4;
      *(uint *)&this->field_0x4a4 = (uVar6 * 2 ^ uVar6) & 0x10000 ^ uVar6;
    }
  }
  return;
}

// Serialize @ 145eeb4b0

void __thiscall UFoliageType::Serialize(UFoliageType *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUFoliageType @ 145eed030

void __cdecl UFoliageType::StaticRegisterNativesUFoliageType(void)

{
  return;
}

