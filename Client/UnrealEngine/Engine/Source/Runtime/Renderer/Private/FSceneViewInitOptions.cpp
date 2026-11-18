// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FSceneViewInitOptions @ 144eef4a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSceneViewInitOptions * __thiscall
FSceneViewInitOptions::FSceneViewInitOptions
          (FSceneViewInitOptions *this,FSceneViewInitOptions *param_1)

{
  TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
  *this_00;
  longlong lVar1;
  AActor *pAVar2;
  undefined8 uVar3;
  double dVar4;
  undefined4 uVar5;
  float fVar6;
  undefined3 uVar7;
  
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  this->_padding_ = param_1->_padding_;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->ViewFamily = param_1->ViewFamily;
  this->SceneViewStateInterface = param_1->SceneViewStateInterface;
  this->ExposureSceneViewStateInterface = param_1->ExposureSceneViewStateInterface;
  uVar5 = *(undefined4 *)&(param_1->ViewActor).field_0x4;
  pAVar2 = (param_1->ViewActor).Actor;
  (this->ViewActor).ActorUniqueId = (param_1->ViewActor).ActorUniqueId;
  *(undefined4 *)&(this->ViewActor).field_0x4 = uVar5;
  (this->ViewActor).Actor = pAVar2;
  this->PlayerIndex = param_1->PlayerIndex;
  this->ViewElementDrawer = param_1->ViewElementDrawer;
  uVar3 = *(undefined8 *)((longlong)&(param_1->BackgroundColor).field0_0x0 + 8);
  *(undefined8 *)&(this->BackgroundColor).field0_0x0 =
       *(undefined8 *)&(param_1->BackgroundColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->BackgroundColor).field0_0x0 + 8) = uVar3;
  uVar3 = *(undefined8 *)((longlong)&(param_1->OverlayColor).field0_0x0 + 8);
  *(undefined8 *)&(this->OverlayColor).field0_0x0 =
       *(undefined8 *)&(param_1->OverlayColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->OverlayColor).field0_0x0 + 8) = uVar3;
  uVar3 = *(undefined8 *)((longlong)&(param_1->ColorScale).field0_0x0 + 8);
  *(undefined8 *)&(this->ColorScale).field0_0x0 = *(undefined8 *)&(param_1->ColorScale).field0_0x0;
  *(undefined8 *)((longlong)&(this->ColorScale).field0_0x0 + 8) = uVar3;
  this->StereoPass = param_1->StereoPass;
  this->StereoViewIndex = param_1->StereoViewIndex;
  this->WorldToMetersScale = param_1->WorldToMetersScale;
  dVar4 = (param_1->ViewLocation).field0_0x0._s_0.Y;
  (this->ViewLocation).field0_0x0._s_0.X = (param_1->ViewLocation).field0_0x0._s_0.X;
  (this->ViewLocation).field0_0x0._s_0.Y = dVar4;
  (this->ViewLocation).field0_0x0._s_0.Z = (param_1->ViewLocation).field0_0x0._s_0.Z;
  dVar4 = (param_1->ViewRotation).Yaw;
  (this->ViewRotation).Pitch = (param_1->ViewRotation).Pitch;
  (this->ViewRotation).Yaw = dVar4;
  (this->ViewRotation).Roll = (param_1->ViewRotation).Roll;
  *(undefined8 *)&(this->HiddenPrimitives).Elements = 0;
  *(undefined8 *)&(this->HiddenPrimitives).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->HiddenPrimitives).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->HiddenPrimitives).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->HiddenPrimitives).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->HiddenPrimitives).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HiddenPrimitives).Elements.field_0x34 = 0;
  (this->HiddenPrimitives).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->HiddenPrimitives).HashSize = 0;
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
  operator=(&this->HiddenPrimitives,&param_1->HiddenPrimitives);
  this_00 = &this->ShowOnlyPrimitives;
  *(undefined8 *)&this_00->field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x40) = 0;
  (this->ShowOnlyPrimitives).field0_0x0.TypedValue.HashSize = 0;
  if (*(int *)((longlong)&(param_1->ShowOnlyPrimitives).field0_0x0 + 0xc) != -1) {
    *(undefined8 *)&this_00->field0_0x0 = 0;
    *(undefined8 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 8) = 0;
    *(undefined8 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x20) = 0;
    *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x28) = 0;
    *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x2c) = 0x80;
    *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x30) = 0xffffffff;
    *(undefined4 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x34) = 0;
    *(undefined8 *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x40) = 0;
    (this->ShowOnlyPrimitives).field0_0x0.TypedValue.HashSize = 0;
    TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
    operator=((TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
               *)this_00,
              (TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
               *)&param_1->ShowOnlyPrimitives);
  }
  (this->CursorPos).field0_0x0 = (param_1->CursorPos).field0_0x0;
  this->LODDistanceFactor = param_1->LODDistanceFactor;
  this->OverrideFarClippingPlaneDistance = param_1->OverrideFarClippingPlaneDistance;
  dVar4 = (param_1->OriginOffsetThisFrame).field0_0x0._s_0.Y;
  (this->OriginOffsetThisFrame).field0_0x0._s_0.X =
       (param_1->OriginOffsetThisFrame).field0_0x0._s_0.X;
  (this->OriginOffsetThisFrame).field0_0x0._s_0.Y = dVar4;
  (this->OriginOffsetThisFrame).field0_0x0._s_0.Z =
       (param_1->OriginOffsetThisFrame).field0_0x0._s_0.Z;
  this->bInCameraCut = param_1->bInCameraCut;
  this->bUseFieldOfViewForLOD = param_1->bUseFieldOfViewForLOD;
  this->FOV = param_1->FOV;
  this->DesiredFOV = param_1->DesiredFOV;
  fVar6 = (param_1->FirstPersonParams).Scale;
  (this->FirstPersonParams).FOVCorrectionFactor = (param_1->FirstPersonParams).FOVCorrectionFactor;
  (this->FirstPersonParams).Scale = fVar6;
  uVar7 = *(undefined3 *)&(param_1->FirstPersonParams).field_0x9;
  (this->FirstPersonParams).bUseParameters = (param_1->FirstPersonParams).bUseParameters;
  *(undefined3 *)&(this->FirstPersonParams).field_0x9 = uVar7;
  this->bIsSceneCapture = param_1->bIsSceneCapture;
  this->bIsSceneCaptureCube = param_1->bIsSceneCaptureCube;
  this->bSceneCaptureUsesRayTracing = param_1->bSceneCaptureUsesRayTracing;
  this->bIsReflectionCapture = param_1->bIsReflectionCapture;
  this->bIsPlanarReflection = param_1->bIsPlanarReflection;
  this->bExcludeFromSceneTextureExtents = param_1->bExcludeFromSceneTextureExtents;
  this->OverridePrimaryResolutionFraction = param_1->OverridePrimaryResolutionFraction;
  this->OverscanResolutionFraction = param_1->OverscanResolutionFraction;
  this->CropFraction = param_1->CropFraction;
  uVar3 = *(undefined8 *)((longlong)&(param_1->AsymmetricCropFraction).field0_0x0 + 8);
  *(undefined8 *)&(this->AsymmetricCropFraction).field0_0x0 =
       *(undefined8 *)&(param_1->AsymmetricCropFraction).field0_0x0;
  *(undefined8 *)((longlong)&(this->AsymmetricCropFraction).field0_0x0 + 8) = uVar3;
  return this;
}

// ~FSceneViewInitOptions @ 144ef1140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FSceneViewInitOptions::~FSceneViewInitOptions(FSceneViewInitOptions *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (*(int *)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0xc) != -1) {
    (this->ShowOnlyPrimitives).field0_0x0.TypedValue.HashSize = 0;
    pvVar1 = *(void **)((longlong)&(this->ShowOnlyPrimitives).field0_0x0 + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->ShowOnlyPrimitives);
  }
  (this->HiddenPrimitives).HashSize = 0;
  FVar2 = (this->HiddenPrimitives).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->HiddenPrimitives).Elements);
  return;
}

