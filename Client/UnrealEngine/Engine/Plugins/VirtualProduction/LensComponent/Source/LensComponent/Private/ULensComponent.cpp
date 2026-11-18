// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LensComponent
// Functions: 97

// GetbApplyDistortion_WrapperImpl @ 14d74c990

void __cdecl ULensComponent::GetbApplyDistortion_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x125);
  return;
}

// SetbApplyDistortion_WrapperImpl @ 14d74c9a0

void __cdecl ULensComponent::SetbApplyDistortion_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)((longlong)param_1 + 0x125) = *(undefined1 *)param_2;
  return;
}

// StaticClass @ 14d74c9b0

UClass * __cdecl ULensComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULensComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LensComponent",L"LensComponent",
               &Z_Registration_Info_UClass_ULensComponent.InnerSingleton,
               StaticRegisterNativesULensComponent,0x2f0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ULensComponent>,
               InternalVTableHelperCtorCaller<ULensComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULensComponent.InnerSingleton;
}

// ULensComponent @ 14d74fe60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULensComponent * __thiscall
ULensComponent::ULensComponent(ULensComponent *this,FVTableHelper *param_1)

{
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 local_res8;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  this_00 = &(this->TargetCameraComponent).OtherActor;
  (this->LensFilePicker).bUseDefaultLensFile = false;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  (this->LensFilePicker).LensFile.field0_0x0.DebugPtr = (ULensFile *)0x0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  this->EvaluationMode = UseLiveLink;
  (this->TargetCameraComponent)._padding_ = 0;
  (this->TargetCameraComponent)._padding_ = 0;
  (this->TargetCameraComponent)._padding_ = 0;
  (this->TargetCameraComponent)._padding_ = 0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->EvalInputs).Focus = 0.0;
  (this->EvalInputs).Iris = 0.0;
  (this->EvalInputs).Zoom = 0.0;
  (this->EvalInputs).bIsValid = false;
  (this->LensModel).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DistortionState).DistortionInfo.Parameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DistortionState).DistortionInfo.Parameters.ArrayNum = 0;
  (this->DistortionState).DistortionInfo.Parameters.ArrayMax = 0;
  this->DistortionStateSource = LensFile;
  this->bApplyDistortion = false;
  this->DistortionRenderingMode = Preferred;
  this->bOverrideCameraOverscan = true;
  this->bScaleOverscan = false;
  this->OverscanMultiplier = 1.0;
  this->FilmbackOverride = DoNotOverride;
  this->bApplyNodalOffsetOnTick = true;
  (this->DistortionState).FocalLengthInfo.FxFy.field0_0x0._s_0.X = 1.0;
  (this->DistortionState).FocalLengthInfo.FxFy.field0_0x0._s_0.Y = 1.7777777777777777;
  (this->DistortionState).ImageCenter.PrincipalPoint.field0_0x0._s_0.X = 0.5;
  (this->DistortionState).ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = 0.5;
  (this->EvalInputs).Filmback.SensorWidth = 24.89;
  (this->EvalInputs).Filmback.SensorHeight = 18.67;
  (this->EvalInputs).Filmback.SensorHorizontalOffset = 0.0;
  (this->EvalInputs).Filmback.SensorVerticalOffset = 0.0;
  (this->EvalInputs).Filmback.SensorAspectRatio = 1.33;
  (this->CroppedFilmback).SensorWidth = 24.89;
  (this->CroppedFilmback).SensorHeight = 18.67;
  (this->CroppedFilmback).SensorHorizontalOffset = 0.0;
  (this->CroppedFilmback).SensorVerticalOffset = 0.0;
  (this->CroppedFilmback).SensorAspectRatio = 1.33;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->OriginalTrackedComponentTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->OriginalTrackedComponentTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->OriginalTrackedComponentTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->OriginalTrackedComponentTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->OriginalTrackedComponentTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->OriginalTrackedComponentTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->OriginalTrackedComponentTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->OriginalTrackedComponentTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->OriginalTrackedComponentTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->OriginalTrackedComponentTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->OriginalTrackedComponentTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->OriginalTrackedComponentTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->bIsDistortionSetup = false;
  this->OriginalFocalLength = 35.0;
  (this->LastDistortionMID).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  this->LastAppliedRenderingMode = Preferred;
  (this->LastCameraComponent).field0_0x0.DebugPtr = (UCineCameraComponent *)0x0;
  *(undefined8 *)&this->LensDistortionHandlerMap = 0;
  *(undefined8 *)&(this->LensDistortionHandlerMap).field_0x8 = 0;
  *(undefined8 *)&(this->LensDistortionHandlerMap).field_0x20 = 0;
  *(undefined4 *)&(this->LensDistortionHandlerMap).field_0x28 = 0;
  *(undefined4 *)&(this->LensDistortionHandlerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LensDistortionHandlerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LensDistortionHandlerMap).field_0x34 = 0;
  *(undefined8 *)&(this->LensDistortionHandlerMap).field_0x40 = 0;
  *(undefined4 *)&(this->LensDistortionHandlerMap).field_0x48 = 0;
  (this->TrackedComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->TrackedComponentName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrackedComponentName).Data.ArrayNum = 0;
  (this->TrackedComponentName).Data.ArrayMax = 0;
  (this->WeakCachedLensFile).WeakPtr = (FWeakObjectPtr)0x0;
  this->LiveLinkFocus = 0.0;
  this->LiveLinkIris = 0.0;
  this->LiveLinkZoom = 0.0;
  this->bWasLiveLinkFIZUpdated = false;
  this->bWasDistortionEvaluated = false;
  this->bWasNodalOffsetAppliedThisTick = false;
  this->LastFocalLength = -1.0;
  *(undefined8 *)&this->OnLensComponentModelChangedDelegate = 0;
  *(undefined8 *)&(this->OnLensComponentModelChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnLensComponentModelChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnLensComponentModelChangedDelegate).field_0x18 = 2;
  return this;
}

// ULensComponent @ 14d7500f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULensComponent * __thiscall ULensComponent::ULensComponent(ULensComponent *this)

{
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  FObjectInitializer *pFVar4;
  undefined8 local_res8;
  
  pFVar4 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar4);
  *(undefined ***)this = &_vftable__for__UObject__;
  this_00 = &(this->TargetCameraComponent).OtherActor;
  (this->LensFilePicker).bUseDefaultLensFile = false;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  (this->LensFilePicker).LensFile.field0_0x0.DebugPtr = (ULensFile *)0x0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  this->EvaluationMode = UseLiveLink;
  (this->TargetCameraComponent)._padding_ = 0;
  (this->TargetCameraComponent)._padding_ = 0;
  (this->TargetCameraComponent)._padding_ = 0;
  (this->TargetCameraComponent)._padding_ = 0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->EvalInputs).Focus = 0.0;
  (this->EvalInputs).Iris = 0.0;
  (this->EvalInputs).Zoom = 0.0;
  (this->EvalInputs).bIsValid = false;
  (this->LensModel).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DistortionState).DistortionInfo.Parameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DistortionState).DistortionInfo.Parameters.ArrayNum = 0;
  (this->DistortionState).DistortionInfo.Parameters.ArrayMax = 0;
  (this->DistortionState).FocalLengthInfo.FxFy.field0_0x0._s_0.X = 1.0;
  this->DistortionStateSource = LensFile;
  this->bApplyDistortion = false;
  this->DistortionRenderingMode = Preferred;
  this->bOverrideCameraOverscan = true;
  this->bScaleOverscan = false;
  this->OverscanMultiplier = 1.0;
  this->FilmbackOverride = DoNotOverride;
  this->bApplyNodalOffsetOnTick = true;
  (this->DistortionState).FocalLengthInfo.FxFy.field0_0x0._s_0.Y = 1.7777777777777777;
  (this->DistortionState).ImageCenter.PrincipalPoint.field0_0x0._s_0.X = 0.5;
  (this->DistortionState).ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = 0.5;
  (this->EvalInputs).Filmback.SensorWidth = 24.89;
  (this->EvalInputs).Filmback.SensorHeight = 18.67;
  (this->EvalInputs).Filmback.SensorHorizontalOffset = 0.0;
  (this->EvalInputs).Filmback.SensorVerticalOffset = 0.0;
  (this->EvalInputs).Filmback.SensorAspectRatio = 1.33;
  (this->CroppedFilmback).SensorWidth = 24.89;
  (this->CroppedFilmback).SensorHeight = 18.67;
  (this->CroppedFilmback).SensorHorizontalOffset = 0.0;
  (this->CroppedFilmback).SensorVerticalOffset = 0.0;
  (this->CroppedFilmback).SensorAspectRatio = 1.33;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->OriginalTrackedComponentTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->OriginalTrackedComponentTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->OriginalTrackedComponentTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->OriginalTrackedComponentTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->OriginalTrackedComponentTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->OriginalTrackedComponentTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->OriginalTrackedComponentTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->OriginalTrackedComponentTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->OriginalTrackedComponentTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->OriginalTrackedComponentTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->OriginalTrackedComponentTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->OriginalTrackedComponentTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->bIsDistortionSetup = false;
  this->OriginalFocalLength = 35.0;
  (this->LastDistortionMID).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  this->LastAppliedRenderingMode = Preferred;
  (this->LastCameraComponent).field0_0x0.DebugPtr = (UCineCameraComponent *)0x0;
  *(undefined8 *)&this->LensDistortionHandlerMap = 0;
  *(undefined8 *)&(this->LensDistortionHandlerMap).field_0x8 = 0;
  *(undefined8 *)&(this->LensDistortionHandlerMap).field_0x20 = 0;
  *(undefined4 *)&(this->LensDistortionHandlerMap).field_0x28 = 0;
  *(undefined4 *)&(this->LensDistortionHandlerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LensDistortionHandlerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LensDistortionHandlerMap).field_0x34 = 0;
  *(undefined8 *)&(this->LensDistortionHandlerMap).field_0x40 = 0;
  *(undefined4 *)&(this->LensDistortionHandlerMap).field_0x48 = 0;
  this->field_0x42 = this->field_0x42 | 6;
  (this->TrackedComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->TrackedComponentName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrackedComponentName).Data.ArrayNum = 0;
  (this->TrackedComponentName).Data.ArrayMax = 0;
  (this->WeakCachedLensFile).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->OnLensComponentModelChangedDelegate = 0;
  *(undefined8 *)&(this->OnLensComponentModelChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnLensComponentModelChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnLensComponentModelChangedDelegate).field_0x18 = 2;
  this->field_0x99 = this->field_0x99 | 0x80;
  this->LiveLinkFocus = 0.0;
  this->LiveLinkIris = 0.0;
  this->LiveLinkZoom = 0.0;
  this->bWasLiveLinkFIZUpdated = false;
  this->bWasDistortionEvaluated = false;
  this->bWasNodalOffsetAppliedThisTick = false;
  this->LastFocalLength = -1.0;
  this->field_0x40 = 2;
  return this;
}

// ~ULensComponent @ 14d750440

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULensComponent::~ULensComponent(ULensComponent *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLensComponentModelChangedDelegate).field_0x8,
             *(int *)&(this->OnLensComponentModelChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnLensComponentModelChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLensComponentModelChangedDelegate);
  pFVar2 = (this->TrackedComponentName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->LensDistortionHandlerMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LensDistortionHandlerMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LensDistortionHandlerMap);
  pFVar2 = (this->DistortionState).DistortionInfo.Parameters.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = (void *)(this->TargetCameraComponent)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// ApplyNodalOffset @ 14d750a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULensComponent::ApplyNodalOffset(ULensComponent *this)

{
  TWeakObjectPtr<USceneComponent,FWeakObjectPtr> *this_00;
  bool bVar1;
  ULensFile *this_01;
  USceneComponent *pUVar2;
  TTransform<double> *pTVar3;
  undefined1 auStack_108 [32];
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_b8;
  TQuat<double> local_98;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  this_00 = &this->TrackedComponent;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (((bVar1) && (this->EvaluationMode != DoNotEvaluate)) && ((this->EvalInputs).bIsValid != false)
     ) {
    this_01 = FLensFilePicker::GetLensFile(&this->LensFilePicker);
    if (this_01 != (ULensFile *)0x0) {
      local_b8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_b8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_b8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_98.X = UE::Math::TQuat<double>::Identity.X;
      local_98.Y = UE::Math::TQuat<double>::Identity.Y;
      local_98.Z = UE::Math::TQuat<double>::Identity.Z;
      local_98.W = UE::Math::TQuat<double>::Identity.W;
      ULensFile::EvaluateNodalPointOffset
                (this_01,(this->EvalInputs).Focus,(this->EvalInputs).Zoom,
                 (FNodalPointOffset *)&local_b8._s_0);
      pUVar2 = (USceneComponent *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      pTVar3 = USceneComponent::GetRelativeTransform(pUVar2,&local_78);
      SetOriginalTrackedComponentTransform(this,pTVar3);
      pUVar2 = (USceneComponent *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_d8._s_0.X = local_b8._s_0.X;
      local_d8._s_0.Y = local_b8._s_0.Y;
      local_d8._s_0.Z = local_b8._s_0.Z;
      USceneComponent::AddLocalOffset
                (pUVar2,(TVector<double> *)&local_d8._s_0,false,(FHitResult *)0x0,None);
      pUVar2 = (USceneComponent *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      USceneComponent::AddLocalRotation(pUVar2,&local_98,false,(FHitResult *)0x0,None);
      this->bWasNodalOffsetAppliedThisTick = true;
      this_00->WeakPtr = (FWeakObjectPtr)0x0;
    }
  }
  return;
}

// ApplyNodalOffset @ 14d750bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULensComponent::ApplyNodalOffset
          (ULensComponent *this,USceneComponent *param_1,bool param_2,float param_3,float param_4)

{
  ULensFile *this_00;
  TTransform<double> *pTVar1;
  undefined1 auStack_128 [32];
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  TQuat<double> local_b8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  this->bApplyNodalOffsetOnTick = false;
  if ((param_1 != (USceneComponent *)0x0) &&
     (this_00 = FLensFilePicker::GetLensFile(&this->LensFilePicker), this_00 != (ULensFile *)0x0)) {
    local_b8.X = UE::Math::TQuat<double>::Identity.X;
    local_b8.Y = UE::Math::TQuat<double>::Identity.Y;
    local_d8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_d8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_d8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_b8.Z = UE::Math::TQuat<double>::Identity.Z;
    local_b8.W = UE::Math::TQuat<double>::Identity.W;
    if (!param_2) {
      if ((this->EvalInputs).bIsValid == false) {
        return;
      }
      param_3 = (this->EvalInputs).Focus;
      param_4 = (this->EvalInputs).Zoom;
    }
    ULensFile::EvaluateNodalPointOffset(this_00,param_3,param_4,(FNodalPointOffset *)&local_d8._s_0)
    ;
    pTVar1 = USceneComponent::GetRelativeTransform(param_1,&local_98);
    SetOriginalTrackedComponentTransform(this,pTVar1);
    local_f8._s_0.X = local_d8._s_0.X;
    local_f8._s_0.Y = local_d8._s_0.Y;
    local_f8._s_0.Z = local_d8._s_0.Z;
    USceneComponent::AddLocalOffset
              (param_1,(TVector<double> *)&local_f8._s_0,false,(FHitResult *)0x0,None);
    USceneComponent::AddLocalRotation(param_1,&local_b8,false,(FHitResult *)0x0,None);
  }
  return;
}

// CleanupDistortion @ 14d750d10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULensComponent::CleanupDistortion(ULensComponent *this,UCineCameraComponent *param_1)

{
  int iVar1;
  UMaterialInstanceDynamic *pUVar2;
  ACameraActor *pAVar3;
  code *pcVar4;
  bool bVar5;
  TScriptInterface<IBlendableInterface> *pTVar6;
  UCameraCalibrationSubsystem *this_00;
  UClass *pUVar7;
  UMaterialInstanceDynamic *local_res8;
  TScriptInterface<IBlendableInterface> local_18;
  
  if (this->bIsDistortionSetup != false) {
    if (param_1 == (UCineCameraComponent *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8176404317423533226>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\LensComponent\\Source\\LensComponent\\Private\\LensComponent.cpp"
                         ,0x356,"CineCameraComponent");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      pUVar2 = (this->LastDistortionMID).field0_0x0.DebugPtr;
      if (pUVar2 != (UMaterialInstanceDynamic *)0x0) {
        local_res8 = pUVar2;
        if (UE::GC::GIsIncrementalReachabilityPending) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        pTVar6 = TScriptInterface<IBlendableInterface>::
                 TScriptInterface<IBlendableInterface><UMaterialInstanceDynamic>
                           (&local_18,(TObjectPtr<UMaterialInstanceDynamic>)&local_res8);
        UCameraComponent::RemoveBlendable((UCameraComponent *)param_1,pTVar6);
        (this->LastDistortionMID).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
      }
      this_00 = UEngine::GetEngineSubsystem<UCameraCalibrationSubsystem>(GEngine);
      if ((this_00 != (UCameraCalibrationSubsystem *)0x0) &&
         (pAVar3 = *(ACameraActor **)&this->field_0xa8, pAVar3 != (ACameraActor *)0x0)) {
        pUVar7 = Z_Construct_UClass_ACameraActor_NoRegister();
        iVar1 = (int)pUVar7->_padding_;
        if ((iVar1 <= *(int *)(pAVar3->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar7->_padding_)) {
          UCameraCalibrationSubsystem::ClearLensDistortionSVEState(this_00,pAVar3);
        }
      }
    }
  }
  this->bIsDistortionSetup = false;
  this->LastAppliedRenderingMode = Preferred;
  return;
}

// ClearDistortionState @ 14d750e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ULensComponent::ClearDistortionState(ULensComponent *this)

{
  int *piVar1;
  FLensDistortionState *pFVar2;
  int iVar3;
  bool bVar4;
  ForAnyElementType _Src;
  UClass *pUVar5;
  ULensModel *this_00;
  UClass *pUVar6;
  int iVar7;
  TArray<float,TSizedDefaultAllocator<32>_> local_38;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  pUVar6 = (this->LensModel).Class.field0_0x0.DebugPtr;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_28 = ___xmm_3ffc71c71c71c71c3ff0000000000000;
  dStack_20 = _UNK_152bc18c8;
  local_18 = ___xmm_3fe00000000000003fe0000000000000;
  dStack_10 = _UNK_150689678;
  iVar7 = 0;
  if (pUVar6 == (UClass *)0x0) goto LAB_14d750f05;
  pUVar5 = Z_Construct_UClass_ULensModel_NoRegister();
  if (pUVar5 != (UClass *)0x0) {
    iVar7 = (int)pUVar5->_padding_;
    if (((int)pUVar6->_padding_ < iVar7) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar7 * 8) != &pUVar5->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (pUVar6 = (this->LensModel).Class.field0_0x0.DebugPtr, pUVar6 != (UClass *)0x0))
    {
      pUVar5 = Z_Construct_UClass_ULensModel_NoRegister();
      if (pUVar5 == (UClass *)0x0) {
LAB_14d750eed:
        pUVar6 = (UClass *)0x0;
      }
      else {
        iVar7 = (int)pUVar5->_padding_;
        if (((int)pUVar6->_padding_ < iVar7) ||
           ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar7 * 8) !=
            &pUVar5->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_14d750eed;
        pUVar6 = (this->LensModel).Class.field0_0x0.DebugPtr;
      }
      this_00 = UClass::GetDefaultObject<ULensModel>(pUVar6);
      ULensModel::GetDefaultParameterArray(this_00,&local_38);
    }
  }
  iVar7 = local_38.ArrayNum;
LAB_14d750f05:
  _Src.Data = local_38.AllocatorInstance.Data;
  pFVar2 = &this->DistortionState;
  if (pFVar2 != (FLensDistortionState *)&local_38) {
    iVar3 = (this->DistortionState).DistortionInfo.Parameters.ArrayMax;
    piVar1 = &(this->DistortionState).DistortionInfo.Parameters.ArrayMax;
    (this->DistortionState).DistortionInfo.Parameters.ArrayNum = iVar7;
    if ((iVar7 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar7,iVar3,(ForAnyElementType *)pFVar2,iVar7,piVar1);
      if (iVar7 != 0) {
        memcpy((pFVar2->DistortionInfo).Parameters.AllocatorInstance.Data,_Src.Data,
               (longlong)iVar7 << 2);
      }
    }
  }
  (this->DistortionState).FocalLengthInfo.FxFy.field0_0x0._s_0.X = local_28;
  (this->DistortionState).FocalLengthInfo.FxFy.field0_0x0._s_0.Y = dStack_20;
  (this->DistortionState).ImageCenter.PrincipalPoint.field0_0x0._s_0.X = local_18;
  (this->DistortionState).ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = dStack_10;
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// CreateDistortionHandler @ 14d751450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall ULensComponent::CreateDistortionHandler(ULensComponent *this)

{
  int iVar1;
  bool bVar2;
  FName FVar3;
  FName FVar4;
  UClass *pUVar5;
  TObjectPtr<ULensDistortionModelHandlerBase>_u_0 *pTVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  ULensDistortionModelHandlerBase *pUVar9;
  uint uVar10;
  longlong *plVar11;
  undefined1 auStack_d8 [32];
  FName local_b8;
  UClass *local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar8 = (this->LensModel).Class.field0_0x0.DebugPtr;
  if (pUVar8 == (UClass *)0x0) {
    return;
  }
  pUVar5 = Z_Construct_UClass_ULensModel_NoRegister();
  if (pUVar5 == (UClass *)0x0) {
    return;
  }
  iVar1 = (int)pUVar5->_padding_;
  if (((int)pUVar8->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  pUVar8 = (this->LensModel).Class.field0_0x0.DebugPtr;
  if (pUVar8 == (UClass *)0x0) {
    return;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  uVar10 = ((uint)((ulonglong)pUVar8 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar8 >> 4)) *
           -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  pTVar6 = &TMapBase<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,0>_>
            ::FindOrAddImpl<TSubclassOf<ULensModel>_const_&>
                      ((TMapBase<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,0>_>
                        *)&this->LensDistortionHandlerMap,uVar10 >> 0x10 ^ uVar10,&this->LensModel)
            ->field0_0x0;
  if (pTVar6->DebugPtr != (ULensDistortionModelHandlerBase *)0x0) {
    return;
  }
  local_b8 = (FName)(this->LensModel).Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_b8);
  }
  ULensModel::GetHandlerClass((TSubclassOf<ULensModel>)&local_b0);
  pUVar8 = local_b0;
  if (local_b0 == (UClass *)0x0) {
    return;
  }
  pUVar7 = Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister();
  pUVar5 = local_b0;
  if (pUVar7 == (UClass *)0x0) {
    return;
  }
  iVar1 = (int)pUVar7->_padding_;
  if (((int)pUVar8->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  if (local_b0 == (UClass *)0x0) {
    return;
  }
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  pUVar8 = Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister();
  FVar3 = local_b8;
  if (pUVar8 != (UClass *)0x0) {
    iVar1 = (int)pUVar8->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar8->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pUVar8 = local_b0;
    if (bVar2) goto LAB_14d7515e9;
  }
  pUVar8 = (UClass *)0x0;
LAB_14d7515e9:
  if (local_b8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar5 = Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister();
  CheckIsClassChildOf_Internal(pUVar5,pUVar8);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar8);
  FVar4 = local_b8;
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_b8.ComparisonIndex = FVar3.ComparisonIndex.Value;
  local_b8.Number = FVar3.Number;
  local_a8._16_4_ = local_b8.ComparisonIndex.Value;
  local_a8._20_4_ = local_b8.Number;
  local_a8._24_4_ = RF_NoFlags;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_b8 = FVar4;
  local_a8._8_8_ = this;
  pUVar9 = (ULensDistortionModelHandlerBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar11 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (ULensDistortionModelHandlerBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  pTVar6->DebugPtr = pUVar9;
  return;
}

// DestroyComponent @ 14d7516c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULensComponent::DestroyComponent(ULensComponent *this,bool param_1)

{
  int iVar1;
  UCineCameraComponent *pUVar2;
  UClass *pUVar3;
  
  UActorComponent::DestroyComponent((UActorComponent *)this,param_1);
  pUVar2 = (UCineCameraComponent *)
           FComponentReference::GetComponent
                     (&this->TargetCameraComponent,*(AActor **)&this->field_0xa8);
  if (pUVar2 != (UCineCameraComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      CleanupDistortion(this,pUVar2);
    }
  }
  return;
}

// EvaluateFocalLength @ 14d751750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ULensComponent::EvaluateFocalLength(ULensComponent *this,UCineCameraComponent *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  ULensFile *this_00;
  double dVar4;
  float fVar5;
  TVector2<double>_u_0 local_28 [2];
  
  local_28[0]._s_0.X = ___xmm_3ffc71c71c71c71c3ff0000000000000;
  local_28[0]._s_0.Y = _UNK_152bc18c8;
  this_00 = FLensFilePicker::GetLensFile(&this->LensFilePicker);
  if ((this_00 != (ULensFile *)0x0) && ((this->EvalInputs).bIsValid != false)) {
    bVar3 = ULensFile::EvaluateFocalLength
                      (this_00,(this->EvalInputs).Focus,(this->EvalInputs).Zoom,
                       (FFocalLengthInfo *)&local_28[0]._s_0);
    if (bVar3) {
      dVar4 = (double)(this->EvalInputs).Filmback.SensorWidth;
      local_28[0]._8_8_ =
           ((this_00->LensInfo).SensorDimensions.field0_0x0._s_0.Y /
           (double)(this->EvalInputs).Filmback.SensorHeight) * (double)local_28[0]._8_8_;
      local_28[0]._0_8_ =
           ((this_00->LensInfo).SensorDimensions.field0_0x0._s_0.X / dVar4) *
           (double)local_28[0]._0_8_;
      if ((__real_3f1a36e2e0000000 < (double)local_28[0]._0_8_) &&
         (__real_3f1a36e2e0000000 < (double)local_28[0]._8_8_)) {
        fVar5 = (float)(dVar4 * (double)local_28[0]._0_8_ *
                       (double)(this_00->LensInfo).SqueezeFactor);
        fVar1 = (param_1->LensSettings).MinFocalLength;
        fVar2 = fVar5;
        if (fVar1 <= fVar5) {
          fVar2 = fVar1;
        }
        dVar4 = (double)fVar2;
        if ((double)fVar2 <= __real_3f847ae147ae147b) {
          dVar4 = __real_3f847ae147ae147b;
        }
        fVar1 = (param_1->LensSettings).MaxFocalLength;
        (param_1->LensSettings).MinFocalLength = (float)dVar4;
        if (fVar1 <= fVar5) {
          fVar1 = fVar5;
        }
        dVar4 = (double)fVar1;
        if ((double)fVar1 <= __real_3f847ae147ae147b) {
          dVar4 = __real_3f847ae147ae147b;
        }
        (param_1->LensSettings).MaxFocalLength = (float)dVar4;
        UCineCameraComponent::SetCurrentFocalLength(param_1,fVar5);
        this->OriginalFocalLength = fVar5;
      }
    }
  }
  return;
}

// GetCroppedFilmback @ 14d751dd0

FCameraFilmbackSettings * __thiscall
ULensComponent::GetCroppedFilmback
          (ULensComponent *this,FCameraFilmbackSettings *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (this->CroppedFilmback).SensorAspectRatio;
  fVar2 = (this->CroppedFilmback).SensorHeight;
  fVar3 = (this->CroppedFilmback).SensorHorizontalOffset;
  fVar4 = (this->CroppedFilmback).SensorVerticalOffset;
  __return_storage_ptr__->SensorWidth = (this->CroppedFilmback).SensorWidth;
  __return_storage_ptr__->SensorHeight = fVar2;
  __return_storage_ptr__->SensorHorizontalOffset = fVar3;
  __return_storage_ptr__->SensorVerticalOffset = fVar4;
  __return_storage_ptr__->SensorAspectRatio = fVar1;
  return __return_storage_ptr__;
}

// GetDesqueezedSensorWidth @ 14d751df0

float __thiscall
ULensComponent::GetDesqueezedSensorWidth(ULensComponent *this,UCineCameraComponent *param_1)

{
  if (param_1 != (UCineCameraComponent *)0x0) {
    return (param_1->LensSettings).SqueezeFactor * (param_1->Filmback).SensorWidth;
  }
  return __real_3f800000;
}

// GetDistortionHandlerPicker @ 14d751e20

FDistortionHandlerPicker * __thiscall
ULensComponent::GetDistortionHandlerPicker
          (ULensComponent *this,FDistortionHandlerPicker *__return_storage_ptr__)

{
  (__return_storage_ptr__->TargetCameraComponent).field0_0x0.DebugPtr = (UCineCameraComponent *)0x0;
  (__return_storage_ptr__->DistortionProducerID).A = 0;
  (__return_storage_ptr__->DistortionProducerID).B = 0;
  (__return_storage_ptr__->DistortionProducerID).C = 0;
  (__return_storage_ptr__->DistortionProducerID).D = 0;
  (__return_storage_ptr__->HandlerDisplayName).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->HandlerDisplayName).Data.ArrayNum = 0;
  (__return_storage_ptr__->HandlerDisplayName).Data.ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDistortionRenderingMode @ 14d751e40

EDistortionRenderingMode __thiscall ULensComponent::GetDistortionRenderingMode(ULensComponent *this)

{
  UClass *pUVar1;
  longlong *plVar2;
  EDistortionRenderingMode EVar3;
  char cVar4;
  TObjectPtr<ULensDistortionModelHandlerBase> TVar5;
  undefined1 local_res10 [24];
  
  EVar3 = this->DistortionRenderingMode;
  if (EVar3 == Preferred) {
    pUVar1 = (this->LensModel).Class.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TVar5 = TMapBase<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,0>_>
            ::FindRef((TMapBase<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,0>_>
                       *)&this->LensDistortionHandlerMap,(TSubclassOf<ULensModel_const_>)local_res10
                     );
    plVar2 = *(longlong **)TVar5.field0_0x0;
    if (plVar2 == (longlong *)0x0) {
      EVar3 = SceneViewExtension;
    }
    else {
      EVar3 = (**(code **)(*plVar2 + 0x2c0))(plVar2);
      if (EVar3 == Preferred) {
        cVar4 = (**(code **)(*plVar2 + 0x2b8))(plVar2);
        return cVar4 != '\0';
      }
    }
  }
  return EVar3;
}

// GetDistortionSource @ 14d751ed0

EDistortionSource __thiscall ULensComponent::GetDistortionSource(ULensComponent *this)

{
  return this->DistortionStateSource;
}

// GetDistortionState @ 14d751ee0

FLensDistortionState * __thiscall
ULensComponent::GetDistortionState
          (ULensComponent *this,FLensDistortionState *__return_storage_ptr__)

{
  FLensDistortionState::FLensDistortionState(__return_storage_ptr__,&this->DistortionState);
  return __return_storage_ptr__;
}

// GetFIZEvaluationMode @ 14d751f10

EFIZEvaluationMode __thiscall ULensComponent::GetFIZEvaluationMode(ULensComponent *this)

{
  return this->EvaluationMode;
}

// GetFilmbackOverrideSetting @ 14d751f20

EFilmbackOverrideSource __thiscall ULensComponent::GetFilmbackOverrideSetting(ULensComponent *this)

{
  return this->FilmbackOverride;
}

// GetLensDistortionHandler @ 14d751f90

ULensDistortionModelHandlerBase * __thiscall
ULensComponent::GetLensDistortionHandler(ULensComponent *this)

{
  UClass *pUVar1;
  ULensDistortionModelHandlerBase *pUVar2;
  TTuple<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>_> *pTVar3;
  UClass *local_res8;
  
  pUVar1 = (this->LensModel).Class.field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pTVar3 = TSet<TTuple<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,0>,FDefaultSetAllocator>
                   *)&this->LensDistortionHandlerMap,(TSubclassOf<ULensModel_const_>)&local_res8);
  if (pTVar3 != (TTuple<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>_> *)0x0)
  {
    pUVar2 = *(ULensDistortionModelHandlerBase **)&pTVar3->field_0x8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (ULensDistortionModelHandlerBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    return pUVar2;
  }
  return (ULensDistortionModelHandlerBase *)0x0;
}

// GetLensFile @ 14d752040

ULensFile * __thiscall ULensComponent::GetLensFile(ULensComponent *this)

{
  ULensFile *pUVar1;
  
  pUVar1 = FLensFilePicker::GetLensFile(&this->LensFilePicker);
  return pUVar1;
}

// GetLensFileEvaluationInputs @ 14d752060

FLensFileEvaluationInputs * __thiscall
ULensComponent::GetLensFileEvaluationInputs(ULensComponent *this)

{
  return &this->EvalInputs;
}

// GetLensFilePicker @ 14d752070

FLensFilePicker * __thiscall
ULensComponent::GetLensFilePicker(ULensComponent *this,FLensFilePicker *__return_storage_ptr__)

{
  ULensFile *pUVar1;
  
  __return_storage_ptr__->bUseDefaultLensFile = (this->LensFilePicker).bUseDefaultLensFile;
  pUVar1 = (this->LensFilePicker).LensFile.field0_0x0.DebugPtr;
  (__return_storage_ptr__->LensFile).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (ULensFile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return __return_storage_ptr__;
}

// GetLensModel @ 14d7520b0

TSubclassOf<ULensModel> __thiscall ULensComponent::GetLensModel(ULensComponent *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = (this->LensModel).Class.field0_0x0.DebugPtr;
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<ULensModel>)in_RDX.field0_0x0;
}

// GetOriginalFocalLength @ 14d752120

float __thiscall ULensComponent::GetOriginalFocalLength(ULensComponent *this)

{
  return this->OriginalFocalLength;
}

// GetOriginalTrackedComponentTransform @ 14d752130

TTransform<double> * __thiscall
ULensComponent::GetOriginalTrackedComponentTransform
          (ULensComponent *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TQuat<double> *pTVar5;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  dVar1 = (this->OriginalTrackedComponentLocation).field0_0x0._s_0.Z;
  dVar2 = (this->OriginalTrackedComponentLocation).field0_0x0._s_0.Y;
  (this->OriginalTrackedComponentTransform).Translation.XY.m128d_f64[0] =
       (this->OriginalTrackedComponentLocation).field0_0x0._s_0.X;
  (this->OriginalTrackedComponentTransform).Translation.XY.m128d_f64[1] = dVar2;
  (this->OriginalTrackedComponentTransform).Translation.ZW.m128d_f64[0] = dVar1;
  (this->OriginalTrackedComponentTransform).Translation.ZW.m128d_f64[1] = 0.0;
  local_48.Pitch = (this->OriginalTrackedComponentRotation).field0_0x0._s_0.Y;
  local_48.Yaw = (this->OriginalTrackedComponentRotation).field0_0x0._s_0.Z;
  local_48.Roll = (this->OriginalTrackedComponentRotation).field0_0x0._s_0.X;
  pTVar5 = UE::Math::TRotator<double>::Quaternion(&local_48,&local_28);
  dVar1 = pTVar5->Y;
  dVar2 = pTVar5->Z;
  dVar3 = pTVar5->W;
  (this->OriginalTrackedComponentTransform).Rotation.XY.m128d_f64[0] = pTVar5->X;
  (this->OriginalTrackedComponentTransform).Rotation.XY.m128d_f64[1] = dVar1;
  (this->OriginalTrackedComponentTransform).Rotation.ZW.m128d_f64[0] = dVar2;
  (this->OriginalTrackedComponentTransform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar1 = (this->OriginalTrackedComponentTransform).Rotation.XY.m128d_f64[1];
  dVar2 = (this->OriginalTrackedComponentTransform).Rotation.ZW.m128d_f64[0];
  dVar3 = (this->OriginalTrackedComponentTransform).Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (this->OriginalTrackedComponentTransform).Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (this->OriginalTrackedComponentTransform).Translation.XY.m128d_f64[0];
  dVar4 = (this->OriginalTrackedComponentTransform).Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->OriginalTrackedComponentTransform).Translation.ZW.m128d_f64[0];
  dVar3 = (this->OriginalTrackedComponentTransform).Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar1 = (this->OriginalTrackedComponentTransform).Scale3D.XY.m128d_f64[0];
  dVar4 = (this->OriginalTrackedComponentTransform).Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->OriginalTrackedComponentTransform).Scale3D.ZW.m128d_f64[0];
  dVar3 = (this->OriginalTrackedComponentTransform).Scale3D.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// GetOverscanMultiplier @ 14d7521f0

float __thiscall ULensComponent::GetOverscanMultiplier(ULensComponent *this)

{
  if (this->bScaleOverscan != false) {
    return this->OverscanMultiplier;
  }
  return __real_3f800000;
}

// GetPrivateStaticClass @ 14d752220

UClass * __cdecl ULensComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULensComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LensComponent",L"LensComponent",
               &Z_Registration_Info_UClass_ULensComponent.InnerSingleton,
               StaticRegisterNativesULensComponent,0x2f0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ULensComponent>,
               InternalVTableHelperCtorCaller<ULensComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULensComponent.InnerSingleton;
}

// InitDefaultCamera @ 14d7523a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULensComponent::InitDefaultCamera(ULensComponent *this)

{
  int iVar1;
  AActor *this_00;
  UCineCameraComponent *pUVar2;
  code *pcVar3;
  bool bVar4;
  UActorComponent *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  TObjectPtr<UCineCameraComponent>_u_0 *pTVar9;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong local_110;
  UClass *local_108;
  UClass *local_100;
  TObjectPtr<UCineCameraComponent>_u_0 local_f8 [24];
  TObjectPtr<UCineCameraComponent>_u_0 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  pUVar5 = FComponentReference::GetComponent
                     (&this->TargetCameraComponent,*(AActor **)&this->field_0xa8);
  if (pUVar5 != (UActorComponent *)0x0) {
    pUVar6 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      return;
    }
  }
  this_00 = *(AActor **)&this->field_0xa8;
  local_38 = (TObjectPtr<UCineCameraComponent>_u_0 *)0x0;
  local_30 = 0;
  local_2c = 0x18;
  if (this_00 == (AActor *)0x0) goto LAB_14d7525b0;
  pUVar6 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 != (UClass *)0x0) goto LAB_14d752464;
LAB_14d752497:
    pUVar7 = (UClass *)0x0;
  }
  else {
    if (pUVar6 == (UClass *)0x0) goto LAB_14d752497;
    UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_14d752464:
    pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar7 == (UClass *)0x0) goto LAB_14d752497;
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar6->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pUVar7 = pUVar6;
    if (!bVar4) goto LAB_14d752497;
  }
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar7 == pUVar8) {
    local_108 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UCineCameraComponent,1,0,_AActor::GetComponents<UCineCameraComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_108,
               (TArray<UCineCameraComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f8);
  }
  else {
    local_100 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UCineCameraComponent,0,0,_AActor::GetComponents<UCineCameraComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_100,
               (TArray<UCineCameraComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f8);
  }
  if (0 < local_30) {
    pTVar9 = local_f8;
    if (local_38 != (TObjectPtr<UCineCameraComponent>_u_0 *)0x0) {
      pTVar9 = local_38;
    }
    (this->TargetCameraComponent)._padding_ = *(longlong *)&pTVar9->DebugPtr->field_0x18;
    if (local_30 < 1) {
      local_110 = (longlong)local_30;
      local_118 = 0;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar9 = local_f8;
    if (local_38 != (TObjectPtr<UCineCameraComponent>_u_0 *)0x0) {
      pTVar9 = local_38;
    }
    pUVar2 = pTVar9->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UCineCameraComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->LastCameraComponent).field0_0x0.DebugPtr = pUVar2;
  }
LAB_14d7525b0:
  if (local_38 != (TObjectPtr<UCineCameraComponent>_u_0 *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// OnLensFileModelChanged @ 14d7526b0

void __thiscall
ULensComponent::OnLensFileModelChanged(ULensComponent *this,TSubclassOf<ULensModel> *param_1)

{
  UClass *local_res8 [4];
  
  if (this->DistortionStateSource == LensFile) {
    local_res8[0] = (param_1->Class).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8[0]);
    }
    SetLensModel(this,(TSubclassOf<ULensModel>)local_res8);
  }
  return;
}

// OnLiveLinkComponentRegistered @ 14d752700

void __thiscall
ULensComponent::OnLiveLinkComponentRegistered
          (ULensComponent *this,ULiveLinkComponentController *param_1)

{
  bool bVar1;
  
  if (param_1->_padding_ == *(longlong *)&this->field_0xa8) {
    (**(code **)(*(longlong *)this + 0x4c0))();
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBoundToObject
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &param_1->LiveLinkControllersTickedDelegate,this);
    if (!bVar1) {
      TMulticastDelegateRegistration<void___cdecl(ULiveLinkComponentController_const_*,FLiveLinkSubjectFrameData_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<ULensComponent>
                ((TMulticastDelegateRegistration<void___cdecl(ULiveLinkComponentController_const_*,FLiveLinkSubjectFrameData_const_&),FDefaultDelegateUserPolicy>
                  *)&param_1->LiveLinkControllersTickedDelegate,(ULensComponent *)&stack0x00000008,
                 (pmf_43a92f8a *)this);
    }
  }
  return;
}

// OnRegister @ 14d752790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULensComponent::OnRegister(ULensComponent *this)

{
  AActor *this_00;
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  FName *pFVar8;
  ILiveLinkComponentsModule *pIVar9;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar10;
  TMulticastDelegateRegistration<void___cdecl(ULiveLinkComponentController_*),FDefaultDelegateUserPolicy>
  *this_01;
  UClass *pUVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  FName FVar19;
  ForElementType<TAlignedBytes<16,16>_> *pFVar20;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_190;
  FDelegateAllocation local_188;
  FName local_178;
  code *local_168;
  ulonglong uStack_160;
  float local_158;
  undefined1 local_150 [16];
  FMRSWRecursiveAccessDetector *local_140;
  char local_138;
  FDelegateAllocation *local_130;
  FDestructionSentinel local_128;
  ULensComponent *local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [192];
  FName local_40;
  float local_38;
  float local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  UActorComponent::OnRegister((UActorComponent *)this);
  InitDefaultCamera(this);
  CreateDistortionHandler(this);
  pFVar8 = ::FName::FName((FName *)local_150,L"LiveLinkComponents");
  pIVar9 = FModuleManager::GetModuleChecked<ILiveLinkComponentsModule>(*pFVar8);
  pTVar10 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            (**(code **)((longlong)*pIVar9 + 0x40))(pIVar9);
  bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBoundToObject(pTVar10,this);
  if (!bVar5) {
    this_01 = (TMulticastDelegateRegistration<void___cdecl(ULiveLinkComponentController_*),FDefaultDelegateUserPolicy>
               *)(**(code **)((longlong)*pIVar9 + 0x40))(pIVar9);
    uStack_160 = uStack_160 & 0xffffffff00000000;
    local_168 = OnLiveLinkComponentRegistered;
    TMulticastDelegateRegistration<void___cdecl(ULiveLinkComponentController_*),FDefaultDelegateUserPolicy>
    ::AddUObject<ULensComponent>(this_01,(ULensComponent *)local_150,(pmf_f914e4a6 *)this);
  }
  this_00 = *(AActor **)&this->field_0xa8;
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  local_38 = 0.0;
  local_34 = 3.36312e-44;
  if (this_00 == (AActor *)0x0) goto LAB_14d75293f;
  pUVar11 = Z_Construct_UClass_ULiveLinkComponentController_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar11 != (UClass *)0x0) goto LAB_14d7528a8;
LAB_14d7528d9:
    pUVar12 = (UClass *)0x0;
  }
  else {
    if (pUVar11 == (UClass *)0x0) goto LAB_14d7528d9;
    UE::GC::MarkAsReachable((UObject *)pUVar11);
LAB_14d7528a8:
    pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar12 == (UClass *)0x0) goto LAB_14d7528d9;
    iVar7 = (int)pUVar12->_padding_;
    if (((int)pUVar11->_padding_ < iVar7) ||
       ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar7 * 8) !=
        &pUVar12->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pUVar12 = pUVar11;
    if (!bVar5) goto LAB_14d7528d9;
  }
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_178 = (FName)pUVar11;
  if (pUVar12 == pUVar13) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    AActor::
    ForEachComponent_Internal<ULiveLinkComponentController,1,0,_AActor::GetComponents<ULiveLinkComponentController,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_178,
               (TArray<ULiveLinkComponentController_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_100);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    AActor::
    ForEachComponent_Internal<ULiveLinkComponentController,0,0,_AActor::GetComponents<ULiveLinkComponentController,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_178,
               (TArray<ULiveLinkComponentController_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_100);
  }
LAB_14d75293f:
  uVar3 = uStack_160;
  uVar16 = (ulonglong)(int)local_38;
  local_158 = local_38;
  FVar19 = (FName)local_100;
  if (local_40 != (FName)0x0) {
    FVar19 = local_40;
  }
  local_150._0_8_ = (longlong)FVar19 + uVar16 * 8;
LAB_14d752972:
  do {
    uVar4 = local_150._0_8_;
    local_178 = FVar19;
    if (local_38 != (float)uVar16) {
      `TCheckedPointerIterator<ULiveLinkComponentController_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_198);
    }
    if (FVar19 == (FName)uVar4) {
      if (local_40 != (FName)0x0) {
        FMemory::Free((void *)local_40);
      }
      return;
    }
    lVar1 = *(longlong *)FVar19;
    (**(code **)(*(longlong *)this + 0x4c0))(this,lVar1);
    pTVar10 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar1 + 0x160);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar10,
               (FReadAccessScope *)(local_150 + 8));
    iVar7 = *(int *)(lVar1 + 0x170);
    plVar18 = *(longlong **)(lVar1 + 0x168);
    plVar17 = plVar18 + (longlong)iVar7 * 2;
    while( true ) {
      if (*(int *)(lVar1 + 0x170) != iVar7) {
        `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_198);
      }
      if (plVar18 == plVar17) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_150 + 8));
        uStack_160 = uVar3 & 0xffffffff00000000;
        local_168 = ProcessLiveLinkData;
        local_190.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_188.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_188.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_190,(FWriteAccessScope *)(local_150 + 8));
        local_130 = &local_188;
        puVar14 = UE::Core::Private::DelegateAllocate(0x30,&local_188);
        if (puVar14 != (undefined8 *)0x0) {
          *puVar14 = &
                     ___7__TCommonDelegateInstanceState___A6AXPEBVULiveLinkComponentController__AEBUFLiveLinkSubjectFrameData___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar15 = FDelegateHandle::GenerateNewID();
          puVar14[2] = uVar15;
          *puVar14 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VULensComponent____A6AXPEBVULiveLinkComponentController__AEBUFLiveLinkSubjectFrameData___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar14[3] = 0;
          local_110 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 3),(FObjectPtr)&local_110);
          puVar14[4] = local_168;
          puVar14[5] = uStack_160;
        }
        if (local_138 == '\0') {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    (local_140,(FDestructionSentinel *)(local_150 + 8));
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar10,
                   (FWriteAccessScope *)(local_150 + 8));
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (&local_190,(FReadAccessScope *)&local_128);
        if (((local_188.DelegateSize == 0) ||
            (local_188.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
           (cVar6 = (**(code **)(*(longlong *)local_188.DelegateAllocator + 0x38))(), cVar6 == '\0')
           ) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope((FReadAccessScope *)&local_128);
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope((FReadAccessScope *)&local_128);
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(pTVar10,true);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    (&local_190,(FReadAccessScope *)&local_128);
          if ((local_188.DelegateSize != 0) &&
             (local_188.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (**(code **)(*(longlong *)local_188.DelegateAllocator + 0x40))
                      (local_188.DelegateAllocator,local_108);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope((FReadAccessScope *)&local_128);
          iVar7 = *(int *)(lVar1 + 0x170);
          if (iVar7 == *(int *)(lVar1 + 0x174)) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,(ForAnyElementType *)(lVar1 + 0x168),(int *)(lVar1 + 0x174));
          }
          *(int *)(lVar1 + 0x170) = iVar7 + 1;
          pFVar20 = (ForElementType<TAlignedBytes<16,16>_> *)
                    ((longlong)iVar7 * 0x10 + *(longlong *)(lVar1 + 0x168));
          *pFVar20 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          *(undefined4 *)(pFVar20 + 1) = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_190,(FWriteAccessScope *)&local_128);
          if (*pFVar20 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)*pFVar20);
          }
          *pFVar20 = local_188.DelegateAllocator;
          local_188.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          *(int *)(pFVar20 + 1) = local_188.DelegateSize;
          local_188.DelegateSize = 0;
          if (local_128.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
          }
        }
        if (local_138 == '\0') {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    (local_140,(FDestructionSentinel *)(local_150 + 8));
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_190,(FWriteAccessScope *)(local_150 + 8));
        if ((local_188.DelegateSize != 0) &&
           (local_188.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_188.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_188,0,0,0x10);
          local_188.DelegateSize = 0;
        }
        if (local_138 == '\0') {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    (local_140,(FDestructionSentinel *)(local_150 + 8));
        }
        if (local_188.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_188.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_190.AccessDetector);
        uVar16 = (ulonglong)(uint)local_158;
        FVar19 = (FName)((longlong)local_178 + 8);
        goto LAB_14d752972;
      }
      if ((((int)plVar18[1] != 0) && (plVar2 = (longlong *)*plVar18, plVar2 != (longlong *)0x0)) &&
         (cVar6 = (**(code **)(*plVar2 + 0x28))(plVar2,this), cVar6 != '\0')) break;
      plVar18 = plVar18 + 2;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_150 + 8));
    uVar16 = (ulonglong)(uint)local_158;
    FVar19 = (FName)((longlong)local_178 + 8);
  } while( true );
}

// OnUnregister @ 14d752d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULensComponent::OnUnregister(ULensComponent *this)

{
  longlong *plVar1;
  int iVar2;
  AActor *this_00;
  bool bVar3;
  FName *pFVar4;
  ILiveLinkComponentsModule *pIVar5;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_01;
  FName FVar6;
  UClass *pUVar7;
  FName FVar8;
  longlong *plVar9;
  FName FVar10;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  FName local_f0;
  longlong local_e8 [24];
  longlong *local_28;
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  UActorComponent::OnUnregister((UActorComponent *)this);
  pFVar4 = ::FName::FName(&local_f0,L"LiveLinkComponents");
  pIVar5 = FModuleManager::GetModuleChecked<ILiveLinkComponentsModule>(*pFVar4);
  this_01 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            (**(code **)((longlong)*pIVar5 + 0x40))(pIVar5);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_01,this);
  this_00 = *(AActor **)&this->field_0xa8;
  FVar8.ComparisonIndex.Value = 0;
  FVar8.Number = 0;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_1c = 0x18;
  if (this_00 == (AActor *)0x0) goto LAB_14d752e59;
  FVar6 = (FName)Z_Construct_UClass_ULiveLinkComponentController_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (FVar6 != (FName)0x0) goto LAB_14d752dbf;
  }
  else {
    FVar10 = FVar8;
    if (FVar6 != (FName)0x0) {
      UE::GC::MarkAsReachable((UObject *)FVar6);
LAB_14d752dbf:
      pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
      FVar10 = FVar8;
      if (pUVar7 != (UClass *)0x0) {
        iVar2 = (int)pUVar7->_padding_;
        if ((*(int *)((longlong)FVar6 + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)((longlong)FVar6 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar7->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FVar10 = FVar6;
        }
      }
    }
  }
  FVar8 = (FName)Z_Construct_UClass_UActorComponent_NoRegister();
  local_f0 = FVar6;
  if (FVar10 == FVar8) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar6);
    }
    AActor::
    ForEachComponent_Internal<ULiveLinkComponentController,1,0,_AActor::GetComponents<ULiveLinkComponentController,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_f0,
               (TArray<ULiveLinkComponentController_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_e8);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar6);
    }
    AActor::
    ForEachComponent_Internal<ULiveLinkComponentController,0,0,_AActor::GetComponents<ULiveLinkComponentController,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_f0,
               (TArray<ULiveLinkComponentController_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_e8);
  }
LAB_14d752e59:
  iVar2 = local_20;
  plVar9 = local_e8;
  if (local_28 != (longlong *)0x0) {
    plVar9 = local_28;
  }
  plVar1 = plVar9 + local_20;
  while( true ) {
    if (local_20 != iVar2) {
      `TCheckedPointerIterator<ULiveLinkComponentController_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_f8);
    }
    if (plVar9 == plVar1) break;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(*plVar9 + 0x160),this);
    plVar9 = plVar9 + 1;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// PostDuplicate @ 14d752f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULensComponent::PostDuplicate(ULensComponent *this,bool param_1)

{
  int iVar1;
  AActor *this_00;
  UCineCameraComponent *pUVar2;
  code *pcVar3;
  bool bVar4;
  UActorComponent *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  TObjectPtr<UCineCameraComponent>_u_0 *pTVar9;
  undefined1 auStack_138 [32];
  undefined8 uStack_118;
  longlong lStack_110;
  UClass *pUStack_108;
  UClass *pUStack_100;
  TObjectPtr<UCineCameraComponent>_u_0 aTStack_f8 [24];
  TObjectPtr<UCineCameraComponent>_u_0 *pTStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  pUVar5 = FComponentReference::GetComponent
                     (&this->TargetCameraComponent,*(AActor **)&this->field_0xa8);
  if (pUVar5 != (UActorComponent *)0x0) {
    pUVar6 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      return;
    }
  }
  this_00 = *(AActor **)&this->field_0xa8;
  pTStack_38 = (TObjectPtr<UCineCameraComponent>_u_0 *)0x0;
  iStack_30 = 0;
  uStack_2c = 0x18;
  if (this_00 == (AActor *)0x0) goto LAB_14d7525b0;
  pUVar6 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 != (UClass *)0x0) goto LAB_14d752464;
LAB_14d752497:
    pUVar7 = (UClass *)0x0;
  }
  else {
    if (pUVar6 == (UClass *)0x0) goto LAB_14d752497;
    UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_14d752464:
    pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar7 == (UClass *)0x0) goto LAB_14d752497;
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar6->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pUVar7 = pUVar6;
    if (!bVar4) goto LAB_14d752497;
  }
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar7 == pUVar8) {
    pUStack_108 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UCineCameraComponent,1,0,_AActor::GetComponents<UCineCameraComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&pUStack_108,
               (TArray<UCineCameraComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)aTStack_f8);
  }
  else {
    pUStack_100 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UCineCameraComponent,0,0,_AActor::GetComponents<UCineCameraComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&pUStack_100,
               (TArray<UCineCameraComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)aTStack_f8);
  }
  if (0 < iStack_30) {
    pTVar9 = aTStack_f8;
    if (pTStack_38 != (TObjectPtr<UCineCameraComponent>_u_0 *)0x0) {
      pTVar9 = pTStack_38;
    }
    (this->TargetCameraComponent)._padding_ = *(longlong *)&pTVar9->DebugPtr->field_0x18;
    if (iStack_30 < 1) {
      lStack_110 = (longlong)iStack_30;
      uStack_118 = 0;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar9 = aTStack_f8;
    if (pTStack_38 != (TObjectPtr<UCineCameraComponent>_u_0 *)0x0) {
      pTVar9 = pTStack_38;
    }
    pUVar2 = pTVar9->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UCineCameraComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->LastCameraComponent).field0_0x0.DebugPtr = pUVar2;
  }
LAB_14d7525b0:
  if (pTStack_38 != (TObjectPtr<UCineCameraComponent>_u_0 *)0x0) {
    FMemory::Free(pTStack_38);
  }
  return;
}

// PostEditImport @ 14d752f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULensComponent::PostEditImport(ULensComponent *this)

{
  int iVar1;
  AActor *this_00;
  UCineCameraComponent *pUVar2;
  code *pcVar3;
  bool bVar4;
  UActorComponent *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  TObjectPtr<UCineCameraComponent>_u_0 *pTVar9;
  undefined1 auStack_138 [32];
  undefined8 uStack_118;
  longlong lStack_110;
  UClass *pUStack_108;
  UClass *pUStack_100;
  TObjectPtr<UCineCameraComponent>_u_0 aTStack_f8 [24];
  TObjectPtr<UCineCameraComponent>_u_0 *pTStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  pUVar5 = FComponentReference::GetComponent
                     (&this->TargetCameraComponent,*(AActor **)&this->field_0xa8);
  if (pUVar5 != (UActorComponent *)0x0) {
    pUVar6 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      return;
    }
  }
  this_00 = *(AActor **)&this->field_0xa8;
  pTStack_38 = (TObjectPtr<UCineCameraComponent>_u_0 *)0x0;
  iStack_30 = 0;
  uStack_2c = 0x18;
  if (this_00 == (AActor *)0x0) goto LAB_14d7525b0;
  pUVar6 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 != (UClass *)0x0) goto LAB_14d752464;
LAB_14d752497:
    pUVar7 = (UClass *)0x0;
  }
  else {
    if (pUVar6 == (UClass *)0x0) goto LAB_14d752497;
    UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_14d752464:
    pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar7 == (UClass *)0x0) goto LAB_14d752497;
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar6->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pUVar7 = pUVar6;
    if (!bVar4) goto LAB_14d752497;
  }
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar7 == pUVar8) {
    pUStack_108 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UCineCameraComponent,1,0,_AActor::GetComponents<UCineCameraComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&pUStack_108,
               (TArray<UCineCameraComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)aTStack_f8);
  }
  else {
    pUStack_100 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UCineCameraComponent,0,0,_AActor::GetComponents<UCineCameraComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&pUStack_100,
               (TArray<UCineCameraComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)aTStack_f8);
  }
  if (0 < iStack_30) {
    pTVar9 = aTStack_f8;
    if (pTStack_38 != (TObjectPtr<UCineCameraComponent>_u_0 *)0x0) {
      pTVar9 = pTStack_38;
    }
    (this->TargetCameraComponent)._padding_ = *(longlong *)&pTVar9->DebugPtr->field_0x18;
    if (iStack_30 < 1) {
      lStack_110 = (longlong)iStack_30;
      uStack_118 = 0;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar9 = aTStack_f8;
    if (pTStack_38 != (TObjectPtr<UCineCameraComponent>_u_0 *)0x0) {
      pTVar9 = pTStack_38;
    }
    pUVar2 = pTVar9->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UCineCameraComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->LastCameraComponent).field0_0x0.DebugPtr = pUVar2;
  }
LAB_14d7525b0:
  if (pTStack_38 != (TObjectPtr<UCineCameraComponent>_u_0 *)0x0) {
    FMemory::Free(pTStack_38);
  }
  return;
}

// PostLoad @ 14d752f20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULensComponent::PostLoad(ULensComponent *this)

{
  int iVar1;
  bool bVar2;
  UCineCameraComponent *pUVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  ULensFile *local_res8;
  
  UActorComponent::PostLoad((UActorComponent *)this);
  CreateDistortionHandler(this);
  if (this->bIsDistortionSetup != false) {
    pUVar3 = (UCineCameraComponent *)
             FComponentReference::GetComponent
                       (&this->TargetCameraComponent,*(AActor **)&this->field_0xa8);
    if (pUVar3 != (UCineCameraComponent *)0x0) {
      pUVar4 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        CleanupDistortion(this,pUVar3);
      }
    }
    this->bIsDistortionSetup = false;
  }
  local_res8 = FLensFilePicker::GetLensFile(&this->LensFilePicker);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (ULensFile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=(&(this->WeakCachedLensFile).WeakPtr,(FObjectPtr)&local_res8);
  pUVar5 = FWeakObjectPtr::Get(&(this->WeakCachedLensFile).WeakPtr);
  if (pUVar5 != (UObject *)0x0) {
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBoundToObject
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar5[0x12].field_0x20,this);
    if (!bVar2) {
      TMulticastDelegateRegistration<void___cdecl(TSubclassOf<ULensModel>_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<ULensComponent>
                ((TMulticastDelegateRegistration<void___cdecl(TSubclassOf<ULensModel>_const_&),FDefaultDelegateUserPolicy>
                  *)&pUVar5[0x12].field_0x20,(ULensComponent *)&local_res8,(pmf_38a41cb6 *)this);
    }
  }
  return;
}

// ProcessLiveLinkData @ 14d753040

void __thiscall
ULensComponent::ProcessLiveLinkData
          (ULensComponent *this,ULiveLinkComponentController *param_1,
          FLiveLinkSubjectFrameData *param_2)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  pUVar5 = (param_1->SubjectRepresentation).Role.Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 != (UClass *)0x0) goto LAB_14d7530a1;
LAB_14d7530d4:
    pUVar3 = (UClass *)0x0;
  }
  else {
    if (pUVar5 == (UClass *)0x0) goto LAB_14d7530d4;
    UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_14d7530a1:
    pUVar3 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
    if (pUVar3 == (UClass *)0x0) goto LAB_14d7530d4;
    iVar1 = (int)pUVar3->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pUVar3 = pUVar5;
    if (!bVar2) goto LAB_14d7530d4;
  }
  pUVar4 = Z_Construct_UClass_ULiveLinkCameraRole_NoRegister();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      UpdateLiveLinkFIZ(this,param_1,param_2);
    }
  }
  if ((pUVar5 != (UClass *)0x0) &&
     (pUVar3 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar3 != (UClass *)0x0)) {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14d75314c;
  }
  pUVar5 = (UClass *)0x0;
LAB_14d75314c:
  pUVar3 = Z_Construct_UClass_ULiveLinkTransformRole_NoRegister();
  if (pUVar3 != (UClass *)0x0) {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      UpdateTrackedComponent(this,param_1,param_2);
    }
  }
  return;
}

// ReapplyNodalOffset @ 14d7531b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULensComponent::ReapplyNodalOffset(ULensComponent *this)

{
  FName *pFVar1;
  double dVar2;
  int iVar3;
  AActor *this_00;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  FName FVar8;
  UClass *pUVar9;
  FName FVar10;
  USceneComponent *this_01;
  TQuat<double> *pTVar11;
  FName *pFVar12;
  FName FVar13;
  bool bVar14;
  undefined1 auStack_1e8 [32];
  undefined1 local_1b8 [8];
  FName local_1b0;
  TRotator<double> local_1a8;
  TQuat<double> local_188;
  TTransform<double> local_168;
  FName local_108 [24];
  FName *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  this_00 = *(AActor **)&this->field_0xa8;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
  local_48 = (FName *)0x0;
  local_40 = 0;
  local_3c = 0x18;
  if (this_00 == (AActor *)0x0) goto LAB_14d7532ca;
  FVar8 = (FName)Z_Construct_UClass_USceneComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (FVar8 != (FName)0x0) goto LAB_14d753233;
  }
  else {
    FVar13 = FVar10;
    if (FVar8 != (FName)0x0) {
      UE::GC::MarkAsReachable((UObject *)FVar8);
LAB_14d753233:
      pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
      FVar13 = FVar10;
      if (pUVar9 != (UClass *)0x0) {
        iVar3 = (int)pUVar9->_padding_;
        if ((*(int *)((longlong)FVar8 + 0x38) < iVar3) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)((longlong)FVar8 + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar9->_padding_)) {
          bVar14 = false;
        }
        else {
          bVar14 = true;
        }
        if (bVar14) {
          FVar13 = FVar8;
        }
      }
    }
  }
  FVar10 = (FName)Z_Construct_UClass_UActorComponent_NoRegister();
  local_1b0 = FVar8;
  if (FVar13 == FVar10) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar8);
    }
    AActor::
    ForEachComponent_Internal<USceneComponent,1,0,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_1b0,
               (TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_108);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar8 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar8);
    }
    AActor::
    ForEachComponent_Internal<USceneComponent,0,0,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_1b0,
               (TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_108);
  }
LAB_14d7532ca:
  iVar3 = local_40;
  pFVar12 = local_108;
  if (local_48 != (FName *)0x0) {
    pFVar12 = local_48;
  }
  pFVar1 = pFVar12 + local_40;
  while( true ) {
    if (local_40 != iVar3) {
      `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1b8);
    }
    if (pFVar12 == pFVar1) goto LAB_14d7533a6;
    FVar13 = *pFVar12;
    local_1b0 = *(FName *)((longlong)FVar13 + 0x18);
    ::FName::ToString(&local_1b0,(FString *)&local_1a8);
    iVar7 = (this->TrackedComponentName).Data.ArrayNum;
    iVar6 = SUB84(local_1a8.Yaw,0);
    if (iVar6 == iVar7) {
      if (iVar6 < 2) {
        bVar14 = true;
      }
      else {
        iVar7 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_1a8.Pitch,
                           (wchar_t *)(this->TrackedComponentName).Data.AllocatorInstance.Data);
        bVar14 = iVar7 == 0;
      }
    }
    else {
      bVar14 = iVar6 + iVar7 == 1;
    }
    if ((wchar_t *)local_1a8.Pitch != (wchar_t *)0x0) {
      FMemory::Free((void *)local_1a8.Pitch);
    }
    if (bVar14) break;
    pFVar12 = pFVar12 + 1;
  }
  local_1b0 = FVar13;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)FVar13);
  }
  FWeakObjectPtr::operator=(&(this->TrackedComponent).WeakPtr,(FObjectPtr)&local_1b0);
LAB_14d7533a6:
  bVar14 = FWeakObjectPtr::IsValid(&(this->TrackedComponent).WeakPtr);
  if (bVar14) {
    this_01 = (USceneComponent *)FWeakObjectPtr::Get(&(this->TrackedComponent).WeakPtr);
    dVar2 = (this->OriginalTrackedComponentLocation).field0_0x0._s_0.Z;
    dVar4 = (this->OriginalTrackedComponentLocation).field0_0x0._s_0.Y;
    (this->OriginalTrackedComponentTransform).Translation.XY.m128d_f64[0] =
         (this->OriginalTrackedComponentLocation).field0_0x0._s_0.X;
    (this->OriginalTrackedComponentTransform).Translation.XY.m128d_f64[1] = dVar4;
    (this->OriginalTrackedComponentTransform).Translation.ZW.m128d_f64[0] = dVar2;
    (this->OriginalTrackedComponentTransform).Translation.ZW.m128d_f64[1] = 0.0;
    local_1a8.Pitch = (this->OriginalTrackedComponentRotation).field0_0x0._s_0.Y;
    local_1a8.Yaw = (this->OriginalTrackedComponentRotation).field0_0x0._s_0.Z;
    local_1a8.Roll = (this->OriginalTrackedComponentRotation).field0_0x0._s_0.X;
    pTVar11 = UE::Math::TRotator<double>::Quaternion(&local_1a8,&local_188);
    dVar2 = pTVar11->Y;
    dVar4 = pTVar11->Z;
    dVar5 = pTVar11->W;
    (this->OriginalTrackedComponentTransform).Rotation.XY.m128d_f64[0] = pTVar11->X;
    (this->OriginalTrackedComponentTransform).Rotation.XY.m128d_f64[1] = dVar2;
    (this->OriginalTrackedComponentTransform).Rotation.ZW.m128d_f64[0] = dVar4;
    (this->OriginalTrackedComponentTransform).Rotation.ZW.m128d_f64[1] = dVar5;
    local_168.Rotation.XY.m128d_f64[0] =
         (this->OriginalTrackedComponentTransform).Rotation.XY.m128d_f64[0];
    local_168.Rotation.XY.m128d_f64[1] =
         (this->OriginalTrackedComponentTransform).Rotation.XY.m128d_f64[1];
    local_168.Rotation.ZW.m128d_f64[0] =
         (this->OriginalTrackedComponentTransform).Rotation.ZW.m128d_f64[0];
    local_168.Rotation.ZW.m128d_f64[1] =
         (this->OriginalTrackedComponentTransform).Rotation.ZW.m128d_f64[1];
    local_168.Translation.XY.m128d_f64[0] =
         (this->OriginalTrackedComponentTransform).Translation.XY.m128d_f64[0];
    local_168.Translation.XY.m128d_f64[1] =
         (this->OriginalTrackedComponentTransform).Translation.XY.m128d_f64[1];
    local_168.Translation.ZW.m128d_f64[0] =
         (this->OriginalTrackedComponentTransform).Translation.ZW.m128d_f64[0];
    local_168.Translation.ZW.m128d_f64[1] =
         (this->OriginalTrackedComponentTransform).Translation.ZW.m128d_f64[1];
    local_168.Scale3D.XY.m128d_f64[0] =
         (this->OriginalTrackedComponentTransform).Scale3D.XY.m128d_f64[0];
    local_168.Scale3D.XY.m128d_f64[1] =
         (this->OriginalTrackedComponentTransform).Scale3D.XY.m128d_f64[1];
    local_168.Scale3D.ZW.m128d_f64[0] =
         (this->OriginalTrackedComponentTransform).Scale3D.ZW.m128d_f64[0];
    local_168.Scale3D.ZW.m128d_f64[1] =
         (this->OriginalTrackedComponentTransform).Scale3D.ZW.m128d_f64[1];
    USceneComponent::SetRelativeTransform(this_01,&local_168,false,(FHitResult *)0x0,None);
    ApplyNodalOffset(this);
  }
  if (local_48 != (FName *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// Serialize @ 14d7538a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULensComponent::Serialize(ULensComponent *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  UActorComponent::Serialize((UActorComponent *)this,param_1);
  return;
}

// Serialize @ 14d7538e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULensComponent::Serialize(ULensComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FFortniteMainBranchObjectVersion::GUID);
  UActorComponent::Serialize((UActorComponent *)this,pFVar1);
  return;
}

// SetApplyDistortion @ 14d753940

void __thiscall ULensComponent::SetApplyDistortion(ULensComponent *this,bool param_1)

{
  this->bApplyDistortion = param_1;
  return;
}

// SetApplyNodalOffsetOnTick @ 14d753950

void __thiscall ULensComponent::SetApplyNodalOffsetOnTick(ULensComponent *this,bool param_1)

{
  this->bApplyNodalOffsetOnTick = param_1;
  return;
}

// SetCroppedFilmback @ 14d753960

void __thiscall
ULensComponent::SetCroppedFilmback(ULensComponent *this,FCameraFilmbackSettings *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = param_1->SensorHeight;
  fVar3 = param_1->SensorHorizontalOffset;
  fVar4 = param_1->SensorVerticalOffset;
  fVar1 = param_1->SensorAspectRatio;
  (this->CroppedFilmback).SensorWidth = param_1->SensorWidth;
  (this->CroppedFilmback).SensorHeight = fVar2;
  (this->CroppedFilmback).SensorHorizontalOffset = fVar3;
  (this->CroppedFilmback).SensorVerticalOffset = fVar4;
  (this->CroppedFilmback).SensorAspectRatio = fVar1;
  return;
}

// SetDistortionSource @ 14d753980

void __thiscall ULensComponent::SetDistortionSource(ULensComponent *this,EDistortionSource param_1)

{
  ULensFile *pUVar1;
  UClass *local_res8 [4];
  
  this->DistortionStateSource = param_1;
  if (param_1 == LensFile) {
    pUVar1 = FLensFilePicker::GetLensFile(&this->LensFilePicker);
    if (pUVar1 != (ULensFile *)0x0) {
      local_res8[0] = (pUVar1->LensInfo).LensModel.Class.field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)local_res8[0]);
      }
      SetLensModel(this,(TSubclassOf<ULensModel>)local_res8);
    }
  }
  ClearDistortionState(this);
  return;
}

// SetDistortionState @ 14d7539e0

void __thiscall
ULensComponent::SetDistortionState(ULensComponent *this,FLensDistortionState *param_1)

{
  FScriptContainerElement *pFVar1;
  
  FLensDistortionState::operator=(&this->DistortionState,param_1);
  pFVar1 = (param_1->DistortionInfo).Parameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// SetFIZEvaluationMode @ 14d753a20

void __thiscall
ULensComponent::SetFIZEvaluationMode(ULensComponent *this,EFIZEvaluationMode param_1)

{
  this->EvaluationMode = param_1;
  return;
}

// SetFilmbackOverrideSetting @ 14d753a30

void __thiscall
ULensComponent::SetFilmbackOverrideSetting(ULensComponent *this,EFilmbackOverrideSource param_1)

{
  this->FilmbackOverride = param_1;
  return;
}

// SetLensFile @ 14d753a40

void __thiscall ULensComponent::SetLensFile(ULensComponent *this,ULensFile *param_1)

{
  FLensFilePicker local_18;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (ULensFile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_18.bUseDefaultLensFile = false;
  local_18.LensFile.field0_0x0 = (TObjectPtr<ULensFile>_u_0)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ULensFile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  SetLensFilePicker(this,&local_18);
  return;
}

// SetLensFileEvaluationInputs @ 14d753ab0

void __thiscall
ULensComponent::SetLensFileEvaluationInputs(ULensComponent *this,float param_1,float param_2)

{
  (this->EvalInputs).Focus = param_1;
  (this->EvalInputs).Zoom = param_2;
  (this->EvalInputs).bIsValid = true;
  return;
}

// SetLensFilePicker @ 14d753ad0

void __thiscall ULensComponent::SetLensFilePicker(ULensComponent *this,FLensFilePicker *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  ULensFile *pUVar3;
  TObjectPtr<UClass>_u_0 local_res8;
  
  (this->LensFilePicker).bUseDefaultLensFile = param_1->bUseDefaultLensFile;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (param_1->LensFile).field0_0x0.DebugPtr, pUVar3 != (ULensFile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->LensFilePicker).LensFile.field0_0x0 = (param_1->LensFile).field0_0x0;
  pUVar2 = FWeakObjectPtr::Get(&(this->WeakCachedLensFile).WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0x12].field_0x20,this);
  }
  local_res8.DebugPtr = (UClass *)FLensFilePicker::GetLensFile(&this->LensFilePicker);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((ULensFile *)local_res8.DebugPtr != (ULensFile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  FWeakObjectPtr::operator=(&(this->WeakCachedLensFile).WeakPtr,(FObjectPtr)&local_res8);
  pUVar2 = FWeakObjectPtr::Get(&(this->WeakCachedLensFile).WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBoundToObject
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2[0x12].field_0x20,this);
    if (!bVar1) {
      TMulticastDelegateRegistration<void___cdecl(TSubclassOf<ULensModel>_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<ULensComponent>
                ((TMulticastDelegateRegistration<void___cdecl(TSubclassOf<ULensModel>_const_&),FDefaultDelegateUserPolicy>
                  *)&pUVar2[0x12].field_0x20,(ULensComponent *)&local_res8.ObjectPtr,
                 (pmf_38a41cb6 *)this);
    }
  }
  if (this->DistortionStateSource == LensFile) {
    pUVar3 = FLensFilePicker::GetLensFile(&this->LensFilePicker);
    if (pUVar3 != (ULensFile *)0x0) {
      local_res8 = (TObjectPtr<UClass>_u_0)(pUVar3->LensInfo).LensModel.Class.field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res8.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
      }
      SetLensModel(this,(TSubclassOf<ULensModel>)&local_res8);
      return;
    }
    ClearDistortionState(this);
  }
  return;
}

// SetLensModel @ 14d753c40

void __thiscall ULensComponent::SetLensModel(ULensComponent *this,TSubclassOf<ULensModel> param_1)

{
  undefined1 *puVar1;
  TSubclassOf<ULensModel> *pTVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  UClass *pUVar11;
  ULensModel *this_00;
  UClass *pUVar12;
  uint uVar13;
  longlong lVar14;
  FDestructionSentinel local_38;
  
  pTVar2 = &this->LensModel;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
  }
  pUVar12 = *(UClass **)param_1.Class.field0_0x0;
  (pTVar2->Class).field0_0x0.DebugPtr = pUVar12;
  if ((pUVar12 != (UClass *)0x0) &&
     (pUVar11 = Z_Construct_UClass_ULensModel_NoRegister(), pUVar11 != (UClass *)0x0)) {
    iVar3 = (int)pUVar11->_padding_;
    if (((int)pUVar12->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar3 * 8) !=
        &pUVar11->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((bVar7) && (pUVar12 = (pTVar2->Class).field0_0x0.DebugPtr, pUVar12 != (UClass *)0x0)) {
      pUVar11 = Z_Construct_UClass_ULensModel_NoRegister();
      if (pUVar11 == (UClass *)0x0) {
LAB_14d753cf3:
        pUVar12 = (UClass *)0x0;
      }
      else {
        iVar3 = (int)pUVar11->_padding_;
        if (((int)pUVar12->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar11->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (!bVar7) goto LAB_14d753cf3;
        pUVar12 = (pTVar2->Class).field0_0x0.DebugPtr;
      }
      this_00 = UClass::GetDefaultObject<ULensModel>(pUVar12);
      ULensModel::GetDefaultParameterArray
                (this_00,(TArray<float,TSizedDefaultAllocator<32>_> *)&this->DistortionState);
      CreateDistortionHandler(this);
      goto LAB_14d753d49;
    }
  }
  iVar3 = (this->DistortionState).DistortionInfo.Parameters.ArrayMax;
  (this->DistortionState).DistortionInfo.Parameters.ArrayNum = 0;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->DistortionState,0,
               &(this->DistortionState).DistortionInfo.Parameters.ArrayMax);
  }
LAB_14d753d49:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnLensComponentModelChangedDelegate,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnLensComponentModelChangedDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar7 = false;
  uVar13 = *(int *)&(this->OnLensComponentModelChangedDelegate).field_0x10 - 1;
  if (-1 < (int)uVar13) {
    lVar14 = (longlong)(int)uVar13 << 4;
    bVar7 = false;
    do {
      uVar10 = 0;
      if ((int)uVar13 < *(int *)&(this->OnLensComponentModelChangedDelegate).field_0x10) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *(longlong *)&(this->OnLensComponentModelChangedDelegate).field_0x8;
      if (((*(int *)(lVar4 + 8 + lVar14) == 0) ||
          (plVar5 = *(longlong **)(lVar4 + lVar14), plVar5 == (longlong *)0x0)) ||
         (cVar9 = (**(code **)(*plVar5 + 0x68))(), cVar9 == '\0')) {
        bVar7 = true;
      }
      lVar14 = lVar14 + -0x10;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  puVar1 = &(this->OnLensComponentModelChangedDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnLensComponentModelChangedDelegate,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// SetOriginalTrackedComponentTransform @ 14d753e60

void __thiscall
ULensComponent::SetOriginalTrackedComponentTransform
          (ULensComponent *this,TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  dVar1 = (param_1->Rotation).XY.m128d_f64[1];
  (this->OriginalTrackedComponentTransform).Rotation.XY.m128d_f64[0] =
       (param_1->Rotation).XY.m128d_f64[0];
  (this->OriginalTrackedComponentTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->OriginalTrackedComponentTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->Rotation).ZW.m128d_f64[0];
  (this->OriginalTrackedComponentTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Translation).XY.m128d_f64[1];
  (this->OriginalTrackedComponentTransform).Translation.XY.m128d_f64[0] =
       (param_1->Translation).XY.m128d_f64[0];
  (this->OriginalTrackedComponentTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Translation).ZW.m128d_f64[1];
  (this->OriginalTrackedComponentTransform).Translation.ZW.m128d_f64[0] =
       (param_1->Translation).ZW.m128d_f64[0];
  (this->OriginalTrackedComponentTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->OriginalTrackedComponentTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->Scale3D).XY.m128d_f64[0];
  (this->OriginalTrackedComponentTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Scale3D).ZW.m128d_f64[1];
  (this->OriginalTrackedComponentTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->Scale3D).ZW.m128d_f64[0];
  (this->OriginalTrackedComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  dVar2 = (param_1->Translation).XY.m128d_f64[1];
  dVar1 = (param_1->Translation).ZW.m128d_f64[0];
  (this->OriginalTrackedComponentLocation).field0_0x0._s_0.X =
       (param_1->Translation).XY.m128d_f64[0];
  (this->OriginalTrackedComponentLocation).field0_0x0._s_0.Y = dVar2;
  (this->OriginalTrackedComponentLocation).field0_0x0._s_0.Z = dVar1;
  local_28.X = (param_1->Rotation).XY.m128d_f64[0];
  local_28.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_28.Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_28.W = (param_1->Rotation).ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(&local_28,&local_48);
  (this->OriginalTrackedComponentRotation).field0_0x0._s_0.Y = local_48.Pitch;
  (this->OriginalTrackedComponentRotation).field0_0x0._s_0.Z = local_48.Yaw;
  (this->OriginalTrackedComponentRotation).field0_0x0._s_0.X = local_48.Roll;
  return;
}

// SetOverscanMultiplier @ 14d753f10

void __thiscall ULensComponent::SetOverscanMultiplier(ULensComponent *this,float param_1)

{
  this->OverscanMultiplier = param_1;
  this->bScaleOverscan = true;
  return;
}

// ShouldApplyDistortion @ 14d753f30

bool __thiscall ULensComponent::ShouldApplyDistortion(ULensComponent *this)

{
  return this->bApplyDistortion;
}

// ShouldApplyNodalOffsetOnTick @ 14d753f40

bool __thiscall ULensComponent::ShouldApplyNodalOffsetOnTick(ULensComponent *this)

{
  return this->bApplyNodalOffsetOnTick;
}

// StaticRegisterNativesULensComponent @ 14d753f50

void __cdecl ULensComponent::StaticRegisterNativesULensComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1e;
  local_18.DataPtr = Z_Construct_UClass_ULensComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 14d753f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULensComponent::TickComponent
          (ULensComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  FLensDistortionState *pFVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  EFIZEvaluationMode EVar7;
  EFilmbackOverrideSource EVar8;
  EDistortionSource EVar9;
  int iVar10;
  void *_Src;
  FScriptContainerElement *pFVar11;
  longlong *plVar12;
  UMaterialInstanceDynamic *pUVar13;
  UMaterialInstanceDynamic *pUVar14;
  float fVar15;
  undefined8 this_00;
  bool bVar16;
  EDistortionRenderingMode EVar17;
  char cVar18;
  UCineCameraComponent *this_01;
  UClass *pUVar19;
  ULensFile *this_02;
  ULensFile *pUVar20;
  TObjectPtr<ULensDistortionModelHandlerBase> TVar21;
  TScriptInterface<IBlendableInterface> *pTVar22;
  UCameraCalibrationSubsystem *this_03;
  FDisplacementMapBlendingParams *pFVar23;
  UCineCameraComponent *pUVar24;
  UCineCameraComponent *pUVar25;
  double dVar26;
  float fVar27;
  undefined1 auStackY_398 [32];
  undefined1 local_358 [16];
  TVector2<double>_u_0 local_348;
  ELevelTick local_338;
  ForAnyElementType local_330;
  undefined8 local_328;
  double local_320;
  double dStack_318;
  double local_310;
  double dStack_308;
  TObjectPtr<UClass>_u_0 local_300 [2];
  FActorComponentTickFunction *local_2f0;
  FDisplacementMapBlendingParams local_2e8;
  FDisplacementMapBlendingParams local_1b8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_338 = param_2;
  local_2f0 = param_3;
  this_01 = (UCineCameraComponent *)
            FComponentReference::GetComponent
                      (&this->TargetCameraComponent,*(AActor **)&this->field_0xa8);
  pUVar25 = (UCineCameraComponent *)0x0;
  if (this_01 == (UCineCameraComponent *)0x0) {
LAB_14d754011:
    this_01 = pUVar25;
  }
  else {
    pUVar19 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
    iVar10 = (int)pUVar19->_padding_;
    if ((*(int *)(*(longlong *)&this_01->field_0x10 + 0x38) < iVar10) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
        &pUVar19->_padding_)) goto LAB_14d754011;
  }
  if (this_01 == (UCineCameraComponent *)0x0) goto LAB_14d7548f5;
  if ((this_01->CurrentFocalLength != this->LastFocalLength) &&
     (this->EvaluationMode != UseRecordedValues)) {
    this->OriginalFocalLength = this_01->CurrentFocalLength;
  }
  EVar7 = this->EvaluationMode;
  (this->EvalInputs).bIsValid = false;
  if (EVar7 == UseLiveLink) {
    if (this->bWasLiveLinkFIZUpdated != false) {
      (this->EvalInputs).Focus = this->LiveLinkFocus;
      (this->EvalInputs).Iris = this->LiveLinkIris;
      (this->EvalInputs).Zoom = this->LiveLinkZoom;
      goto LAB_14d7540d3;
    }
  }
  else {
    if (EVar7 == UseCameraSettings) {
      (this->EvalInputs).Focus = this_01->CurrentFocusDistance;
      (this->EvalInputs).Iris = this_01->CurrentAperture;
      (this->EvalInputs).Zoom = this->OriginalFocalLength;
    }
    else if (1 < (byte)(EVar7 - UseRecordedValues)) goto LAB_14d7540da;
LAB_14d7540d3:
    (this->EvalInputs).bIsValid = true;
  }
LAB_14d7540da:
  if (this->bApplyNodalOffsetOnTick != false) {
    ApplyNodalOffset(this);
  }
  this_02 = FLensFilePicker::GetLensFile(&this->LensFilePicker);
  EVar8 = this->FilmbackOverride;
  if (EVar8 == LensFile) {
    pUVar20 = FLensFilePicker::GetLensFile(&this->LensFilePicker);
    if (pUVar20 != (ULensFile *)0x0) {
      (this_01->Filmback).SensorWidth =
           (float)(pUVar20->LensInfo).SensorDimensions.field0_0x0._s_0.X;
      (this_01->Filmback).SensorHeight =
           (float)(pUVar20->LensInfo).SensorDimensions.field0_0x0._s_0.Y;
LAB_14d75417f:
      (this_01->LensSettings).SqueezeFactor = (pUVar20->LensInfo).SqueezeFactor;
    }
  }
  else if (EVar8 == CroppedFilmbackSetting) {
    fVar2 = (this->CroppedFilmback).SensorHeight;
    fVar27 = (this->CroppedFilmback).SensorHorizontalOffset;
    fVar15 = (this->CroppedFilmback).SensorVerticalOffset;
    (this_01->Filmback).SensorWidth = (this->CroppedFilmback).SensorWidth;
    (this_01->Filmback).SensorHeight = fVar2;
    (this_01->Filmback).SensorHorizontalOffset = fVar27;
    (this_01->Filmback).SensorVerticalOffset = fVar15;
    (this_01->Filmback).SensorAspectRatio = (this->CroppedFilmback).SensorAspectRatio;
    pUVar20 = FLensFilePicker::GetLensFile(&this->LensFilePicker);
    if (pUVar20 != (ULensFile *)0x0) goto LAB_14d75417f;
  }
  else if (EVar8 != DoNotOverride) {
    `ULensComponent::UpdateCameraFilmback'::__l14::<lambda_1>::operator()(local_358);
  }
  fVar2 = (this_01->Filmback).SensorHeight;
  fVar27 = (this_01->Filmback).SensorHorizontalOffset;
  fVar15 = (this_01->Filmback).SensorVerticalOffset;
  (this->EvalInputs).Filmback.SensorWidth = (this_01->Filmback).SensorWidth;
  (this->EvalInputs).Filmback.SensorHeight = fVar2;
  (this->EvalInputs).Filmback.SensorHorizontalOffset = fVar27;
  (this->EvalInputs).Filmback.SensorVerticalOffset = fVar15;
  local_348._s_0.X = (double)___xmm_3ffc71c71c71c71c3ff0000000000000;
  local_348._s_0.Y = (double)_UNK_152bc18c8;
  (this->EvalInputs).Filmback.SensorAspectRatio = (this_01->Filmback).SensorAspectRatio;
  pUVar20 = FLensFilePicker::GetLensFile(&this->LensFilePicker);
  if (((pUVar20 != (ULensFile *)0x0) && ((this->EvalInputs).bIsValid != false)) &&
     (bVar16 = ULensFile::EvaluateFocalLength
                         (pUVar20,(this->EvalInputs).Focus,(this->EvalInputs).Zoom,
                          (FFocalLengthInfo *)&local_348._s_0), bVar16)) {
    dVar26 = (double)(this->EvalInputs).Filmback.SensorWidth;
    local_348._s_0.Y =
         ((pUVar20->LensInfo).SensorDimensions.field0_0x0._s_0.Y /
         (double)(this->EvalInputs).Filmback.SensorHeight) * local_348._s_0.Y;
    local_348._s_0.X =
         ((pUVar20->LensInfo).SensorDimensions.field0_0x0._s_0.X / dVar26) * local_348._s_0.X;
    if ((__real_3f1a36e2e0000000 < local_348._s_0.X) && (__real_3f1a36e2e0000000 < local_348._s_0.Y)
       ) {
      fVar27 = (float)((double)(pUVar20->LensInfo).SqueezeFactor * local_348._s_0.X * dVar26);
      fVar2 = (this_01->LensSettings).MinFocalLength;
      if (fVar27 <= fVar2) {
        fVar2 = fVar27;
      }
      dVar26 = (double)fVar2;
      if ((double)fVar2 <= __real_3f847ae147ae147b) {
        dVar26 = __real_3f847ae147ae147b;
      }
      fVar2 = (this_01->LensSettings).MaxFocalLength;
      (this_01->LensSettings).MinFocalLength = (float)dVar26;
      if (fVar2 <= fVar27) {
        fVar2 = fVar27;
      }
      dVar26 = (double)fVar2;
      if ((double)fVar2 <= __real_3f847ae147ae147b) {
        dVar26 = __real_3f847ae147ae147b;
      }
      (this_01->LensSettings).MaxFocalLength = (float)dVar26;
      UCineCameraComponent::SetCurrentFocalLength(this_01,fVar27);
      this->OriginalFocalLength = fVar27;
    }
  }
  local_300[0] = (TObjectPtr<UClass>_u_0)(this->LensModel).Class.field0_0x0.DebugPtr;
  this->bWasDistortionEvaluated = false;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_300[0].DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_300[0].DebugPtr);
  }
  TMapBase<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,0>_>
  ::FindRef((TMapBase<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,0>_>
             *)&this->LensDistortionHandlerMap,(TSubclassOf<ULensModel_const_>)&local_348);
  this_00 = local_348._s_0.X;
  fVar2 = __real_3f800000;
  local_1b8.PatchCorners[0].Y = 0.0;
  local_1b8.PatchCorners[0].TangentX = 0.0;
  local_1b8.PatchCorners[0].TangentY = 0.0;
  local_1b8.PatchCorners[1].X = 0.0;
  local_1b8.PatchCorners[2].Y = 0.0;
  local_1b8.PatchCorners[2].TangentX = 0.0;
  local_1b8.PatchCorners[2].TangentY = 0.0;
  local_1b8.PatchCorners[3].X = 0.0;
  local_1b8.States[0].FocalLengthInfo.FxFy.field0_0x0._s_0.X =
       (double)___xmm_3ffc71c71c71c71c3ff0000000000000;
  local_1b8.States[0].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = (double)_UNK_152bc18c8;
  local_1b8.States[1].FocalLengthInfo.FxFy.field0_0x0._s_0.X =
       (double)___xmm_3ffc71c71c71c71c3ff0000000000000;
  local_1b8.States[1].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = (double)_UNK_152bc18c8;
  local_1b8.States[2].FocalLengthInfo.FxFy.field0_0x0._s_0.X =
       (double)___xmm_3ffc71c71c71c71c3ff0000000000000;
  local_1b8.States[2].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = (double)_UNK_152bc18c8;
  local_1b8.States[3].FocalLengthInfo.FxFy.field0_0x0._s_0.X =
       (double)___xmm_3ffc71c71c71c71c3ff0000000000000;
  local_1b8.States[3].FocalLengthInfo.FxFy.field0_0x0._s_0.Y = (double)_UNK_152bc18c8;
  local_1b8.PatchCorners[1].Y = 0.0;
  local_1b8.PatchCorners[1].TangentX = 0.0;
  local_1b8.PatchCorners[1].TangentY = 0.0;
  local_1b8.PatchCorners[2].X = 0.0;
  local_1b8.FxFyScale.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_1b8.FxFyScale.field0_0x0._s_0.Y = _UNK_150689688;
  local_1b8.BlendType = OneFocusOneZoom;
  local_1b8.EvalFocus = 0.0;
  local_1b8.EvalZoom = 0.0;
  local_1b8.PatchCorners[0].X = 0.0;
  local_1b8.PatchCorners[3].Y = 0.0;
  local_1b8.PatchCorners[3].TangentX = 0.0;
  local_1b8.PatchCorners[3].TangentY = 0.0;
  local_1b8.States[0].DistortionInfo.Parameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_1b8.States[0].DistortionInfo.Parameters.ArrayNum = 0;
  local_1b8.States[0].DistortionInfo.Parameters.ArrayMax = 0;
  local_1b8.States[0].ImageCenter.PrincipalPoint.field0_0x0._s_0.X =
       ___xmm_3fe00000000000003fe0000000000000;
  local_1b8.States[0].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = _UNK_150689678;
  local_1b8.States[1].DistortionInfo.Parameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_1b8.States[1].DistortionInfo.Parameters.ArrayNum = 0;
  local_1b8.States[1].DistortionInfo.Parameters.ArrayMax = 0;
  local_1b8.States[1].ImageCenter.PrincipalPoint.field0_0x0._s_0.X =
       ___xmm_3fe00000000000003fe0000000000000;
  local_1b8.States[1].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = _UNK_150689678;
  local_1b8.States[2].DistortionInfo.Parameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_1b8.States[2].DistortionInfo.Parameters.ArrayNum = 0;
  local_1b8.States[2].DistortionInfo.Parameters.ArrayMax = 0;
  local_1b8.States[2].ImageCenter.PrincipalPoint.field0_0x0._s_0.X =
       ___xmm_3fe00000000000003fe0000000000000;
  local_1b8.States[2].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = _UNK_150689678;
  local_1b8.States[3].DistortionInfo.Parameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_1b8.States[3].DistortionInfo.Parameters.ArrayNum = 0;
  local_1b8.States[3].DistortionInfo.Parameters.ArrayMax = 0;
  local_1b8.States[3].ImageCenter.PrincipalPoint.field0_0x0._s_0.X =
       ___xmm_3fe00000000000003fe0000000000000;
  local_1b8.States[3].ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = _UNK_150689678;
  local_1b8.PrincipalPoint.field0_0x0._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
  local_1b8.PrincipalPoint.field0_0x0._s_0.Y = _UNK_150689678;
  if ((UMaterialInstanceDynamic *)local_348._s_0.X != (UMaterialInstanceDynamic *)0x0) {
    EVar9 = this->DistortionStateSource;
    if (EVar9 == LensFile) {
      if ((this_02 != (ULensFile *)0x0) && ((this->EvalInputs).bIsValid != false)) {
        uVar3 = (this->EvalInputs).Filmback.SensorWidth;
        uVar5 = (this->EvalInputs).Filmback.SensorHeight;
        local_348._s_0.X = (double)(float)uVar3;
        local_348._s_0.Y = (double)(float)uVar5;
        ULensFile::EvaluateDistortionData
                  (this_02,(this->EvalInputs).Focus,(this->EvalInputs).Zoom,
                   (TVector2<double> *)&local_348._s_0,(ULensDistortionModelHandlerBase *)this_00);
        local_330.Data = (FScriptContainerElement *)0x0;
        iVar10 = *(int *)(this_00 + 0x40);
        _Src = *(void **)(this_00 + 0x38);
        local_328 = CONCAT44(local_328._4_4_,iVar10);
        if (iVar10 == 0) {
          local_328 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar10,0,&local_330,iVar10,(int *)((longlong)&local_328 + 4));
          memcpy(local_330.Data,_Src,(longlong)iVar10 << 2);
        }
        local_320 = *(double *)(this_00 + 0x48);
        dStack_318 = *(double *)(this_00 + 0x50);
        pFVar1 = &this->DistortionState;
        local_310 = *(double *)(this_00 + 0x58);
        dStack_308 = *(double *)(this_00 + 0x60);
        if (pFVar1 != (FLensDistortionState *)&local_330) {
          pFVar11 = (pFVar1->DistortionInfo).Parameters.AllocatorInstance.Data;
          if (pFVar11 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar11);
          }
          (pFVar1->DistortionInfo).Parameters.AllocatorInstance.Data = local_330.Data;
          (this->DistortionState).DistortionInfo.Parameters.ArrayNum = (int)local_328;
          local_330.Data = (FScriptContainerElement *)0x0;
          (this->DistortionState).DistortionInfo.Parameters.ArrayMax = local_328._4_4_;
          local_328 = 0;
        }
        (this->DistortionState).FocalLengthInfo.FxFy.field0_0x0._s_0.X = local_320;
        (this->DistortionState).FocalLengthInfo.FxFy.field0_0x0._s_0.Y = dStack_318;
        (this->DistortionState).ImageCenter.PrincipalPoint.field0_0x0._s_0.X = local_310;
        (this->DistortionState).ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = dStack_308;
        if (local_330.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_330.Data);
        }
        uVar4 = (this->EvalInputs).Filmback.SensorWidth;
        uVar6 = (this->EvalInputs).Filmback.SensorHeight;
        local_348._s_0.X = (double)(float)uVar4;
        local_348._s_0.Y = (double)(float)uVar6;
        ULensFile::GetBlendState
                  (this_02,(this->EvalInputs).Focus,(this->EvalInputs).Zoom,
                   (TVector2<double> *)&local_348._s_0,&local_1b8);
        if (this->bScaleOverscan != false) {
          ULensDistortionModelHandlerBase::SetOverscanFactor
                    ((ULensDistortionModelHandlerBase *)this_00,
                     (*(float *)(this_00 + 0x90) - fVar2) * this->OverscanMultiplier + fVar2);
        }
        goto LAB_14d754608;
      }
    }
    else if ((EVar9 == LiveLinkLensSubject) || (EVar9 == Manual)) {
      ULensDistortionModelHandlerBase::SetDistortionState
                ((ULensDistortionModelHandlerBase *)local_348._s_0.X,&this->DistortionState);
      ULensDistortionModelHandlerBase::SetCameraFilmback
                ((ULensDistortionModelHandlerBase *)this_00,&this_01->Filmback);
      FLensDistortionState::operator=(local_1b8.States,&this->DistortionState);
      local_1b8.BlendType = OneFocusOneZoom;
      fVar27 = ULensDistortionModelHandlerBase::ComputeOverscanFactor
                         ((ULensDistortionModelHandlerBase *)this_00);
      if (this->bScaleOverscan != false) {
        fVar27 = (fVar27 - fVar2) * this->OverscanMultiplier + fVar2;
      }
      ULensDistortionModelHandlerBase::SetOverscanFactor
                ((ULensDistortionModelHandlerBase *)this_00,fVar27);
      ULensDistortionModelHandlerBase::ProcessCurrentDistortion
                ((ULensDistortionModelHandlerBase *)this_00);
LAB_14d754608:
      this->bWasDistortionEvaluated = true;
    }
    else {
      `ULensComponent::TickComponent'::__l32::<lambda_1>::operator()(local_358);
    }
  }
  if (this->bApplyDistortion == false) {
    if (this->EvaluationMode == UseRecordedValues) {
      this_01->CurrentFocalLength = this->OriginalFocalLength;
    }
LAB_14d754869:
    CleanupDistortion(this,this_01);
  }
  else {
    if (((UMaterialInstanceDynamic *)this_00 == (UMaterialInstanceDynamic *)0x0) ||
       (this->bWasDistortionEvaluated == false)) goto LAB_14d754869;
    EVar17 = this->DistortionRenderingMode;
    if (EVar17 == Preferred) {
      local_348._s_0.X = (double)(this->LensModel).Class.field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UMaterialInstanceDynamic *)local_348._s_0.X != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_348._s_0.X);
      }
      TVar21 = TMapBase<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,0>_>
               ::FindRef((TMapBase<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,0>_>
                          *)&this->LensDistortionHandlerMap,
                         (TSubclassOf<ULensModel_const_>)local_300);
      plVar12 = *(longlong **)TVar21.field0_0x0;
      if (plVar12 == (longlong *)0x0) {
        EVar17 = SceneViewExtension;
      }
      else {
        EVar17 = (**(code **)(*plVar12 + 0x2c0))(plVar12);
        if (EVar17 == Preferred) {
          cVar18 = (**(code **)(*plVar12 + 0x2b8))(plVar12);
          EVar17 = cVar18 != '\0';
        }
      }
    }
    if ((this->bIsDistortionSetup != false) && (EVar17 != this->LastAppliedRenderingMode)) {
      CleanupDistortion(this,this_01);
    }
    if (EVar17 == PostProcessMaterial) {
      pUVar13 = (this->LastDistortionMID).field0_0x0.DebugPtr;
      pUVar14 = *(UMaterialInstanceDynamic **)(this_00 + 0x30);
      if (pUVar13 == (UMaterialInstanceDynamic *)0x0) {
        bVar16 = pUVar14 == (UMaterialInstanceDynamic *)0x0;
      }
      else {
        bVar16 = pUVar13 == pUVar14;
      }
      if (!bVar16) {
        local_348._s_0.X = (double)pUVar13;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar13 != (UMaterialInstanceDynamic *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar13);
        }
        pTVar22 = TScriptInterface<IBlendableInterface>::
                  TScriptInterface<IBlendableInterface><UMaterialInstanceDynamic>
                            ((TScriptInterface<IBlendableInterface> *)&local_300[0].ObjectPtr,
                             (TObjectPtr<UMaterialInstanceDynamic>)&local_348);
        UCameraComponent::RemoveBlendable((UCameraComponent *)this_01,pTVar22);
        if (pUVar14 != (UMaterialInstanceDynamic *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar14);
          }
          pUVar25 = (UCineCameraComponent *)&pUVar14->_padding_;
        }
        local_348._0_8_ = pUVar14;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar14 != (UMaterialInstanceDynamic *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar14);
        }
        local_348._8_8_ = pUVar25;
        FPostProcessSettings::AddBlendable
                  ((FPostProcessSettings *)&this_01->field_0x330,
                   (TScriptInterface<IBlendableInterface> *)&local_348._s_0,fVar2);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar14 != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      (this->LastDistortionMID).field0_0x0.DebugPtr = pUVar14;
      this->LastAppliedRenderingMode = PostProcessMaterial;
LAB_14d75480a:
      this->bIsDistortionSetup = true;
    }
    else if (EVar17 == SceneViewExtension) {
      this_03 = UEngine::GetEngineSubsystem<UCameraCalibrationSubsystem>(GEngine);
      if (this_03 != (UCameraCalibrationSubsystem *)0x0) {
        pUVar24 = *(UCineCameraComponent **)&this->field_0xa8;
        if (pUVar24 == (UCineCameraComponent *)0x0) {
LAB_14d7547da:
          pUVar24 = pUVar25;
        }
        else {
          pUVar19 = Z_Construct_UClass_ACameraActor_NoRegister();
          iVar10 = (int)pUVar19->_padding_;
          if ((*(int *)(*(longlong *)&pUVar24->field_0x10 + 0x38) < iVar10) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar24->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
              &pUVar19->_padding_)) goto LAB_14d7547da;
        }
        if (pUVar24 != (UCineCameraComponent *)0x0) {
          pFVar23 = FDisplacementMapBlendingParams::FDisplacementMapBlendingParams
                              (&local_2e8,&local_1b8);
          UCameraCalibrationSubsystem::SetLensDistortionSVEState
                    (this_03,(ACameraActor *)pUVar24,pFVar23,
                     (ULensDistortionModelHandlerBase *)this_00);
        }
      }
      this->LastAppliedRenderingMode = SceneViewExtension;
      goto LAB_14d75480a;
    }
    if (this->bOverrideCameraOverscan != false) {
      fVar27 = *(float *)(this_00 + 0x90) - fVar2;
      if (fVar2 <= fVar27) {
        fVar27 = fVar2;
      }
      if (fVar27 <= 0.0) {
        fVar27 = 0.0;
      }
      *(float *)&this_01->field_0x27c = fVar27;
      ULensDistortionModelHandlerBase::SetOverscanFactor
                ((ULensDistortionModelHandlerBase *)this_00,fVar27 + fVar2);
      this_01->field_0x291 = EVar17 == SceneViewExtension;
    }
  }
  this->LastFocalLength = this_01->CurrentFocalLength;
  if (local_1b8.States[3].DistortionInfo.Parameters.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.States[3].DistortionInfo.Parameters.AllocatorInstance.Data);
  }
  if (local_1b8.States[2].DistortionInfo.Parameters.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.States[2].DistortionInfo.Parameters.AllocatorInstance.Data);
  }
  if (local_1b8.States[1].DistortionInfo.Parameters.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.States[1].DistortionInfo.Parameters.AllocatorInstance.Data);
  }
  if (local_1b8.States[0].DistortionInfo.Parameters.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.States[0].DistortionInfo.Parameters.AllocatorInstance.Data);
  }
LAB_14d7548f5:
  this->bWasLiveLinkFIZUpdated = false;
  UActorComponent::TickComponent((UActorComponent *)this,param_1,local_338,local_2f0);
  return;
}

// UpdateCameraFilmback @ 14d754b60

void __thiscall
ULensComponent::UpdateCameraFilmback(ULensComponent *this,UCineCameraComponent *param_1)

{
  EFilmbackOverrideSource EVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ULensFile *pUVar5;
  undefined1 local_res8 [8];
  
  EVar1 = this->FilmbackOverride;
  if (EVar1 == LensFile) {
    pUVar5 = FLensFilePicker::GetLensFile(&this->LensFilePicker);
    if (pUVar5 == (ULensFile *)0x0) goto LAB_14d754bfe;
    (param_1->Filmback).SensorWidth = (float)(pUVar5->LensInfo).SensorDimensions.field0_0x0._s_0.X;
    (param_1->Filmback).SensorHeight = (float)(pUVar5->LensInfo).SensorDimensions.field0_0x0._s_0.Y;
  }
  else {
    if (EVar1 != CroppedFilmbackSetting) {
      if (EVar1 != DoNotOverride) {
        `ULensComponent::UpdateCameraFilmback'::__l14::<lambda_1>::operator()(local_res8);
      }
      goto LAB_14d754bfe;
    }
    fVar2 = (this->CroppedFilmback).SensorHeight;
    fVar3 = (this->CroppedFilmback).SensorHorizontalOffset;
    fVar4 = (this->CroppedFilmback).SensorVerticalOffset;
    (param_1->Filmback).SensorWidth = (this->CroppedFilmback).SensorWidth;
    (param_1->Filmback).SensorHeight = fVar2;
    (param_1->Filmback).SensorHorizontalOffset = fVar3;
    (param_1->Filmback).SensorVerticalOffset = fVar4;
    (param_1->Filmback).SensorAspectRatio = (this->CroppedFilmback).SensorAspectRatio;
    pUVar5 = FLensFilePicker::GetLensFile(&this->LensFilePicker);
    if (pUVar5 == (ULensFile *)0x0) goto LAB_14d754bfe;
  }
  (param_1->LensSettings).SqueezeFactor = (pUVar5->LensInfo).SqueezeFactor;
LAB_14d754bfe:
  fVar2 = (param_1->Filmback).SensorHeight;
  fVar3 = (param_1->Filmback).SensorHorizontalOffset;
  fVar4 = (param_1->Filmback).SensorVerticalOffset;
  (this->EvalInputs).Filmback.SensorWidth = (param_1->Filmback).SensorWidth;
  (this->EvalInputs).Filmback.SensorHeight = fVar2;
  (this->EvalInputs).Filmback.SensorHorizontalOffset = fVar3;
  (this->EvalInputs).Filmback.SensorVerticalOffset = fVar4;
  (this->EvalInputs).Filmback.SensorAspectRatio = (param_1->Filmback).SensorAspectRatio;
  return;
}

// UpdateLensFileEvaluationInputs @ 14d754c30

void __thiscall
ULensComponent::UpdateLensFileEvaluationInputs(ULensComponent *this,UCineCameraComponent *param_1)

{
  EFIZEvaluationMode EVar1;
  
  EVar1 = this->EvaluationMode;
  (this->EvalInputs).bIsValid = false;
  if (EVar1 == UseLiveLink) {
    if (this->bWasLiveLinkFIZUpdated != false) {
      (this->EvalInputs).Focus = this->LiveLinkFocus;
      (this->EvalInputs).Iris = this->LiveLinkIris;
      (this->EvalInputs).Zoom = this->LiveLinkZoom;
      (this->EvalInputs).bIsValid = true;
      return;
    }
  }
  else {
    if (EVar1 == UseCameraSettings) {
      (this->EvalInputs).Focus = param_1->CurrentFocusDistance;
      (this->EvalInputs).Iris = param_1->CurrentAperture;
      (this->EvalInputs).Zoom = this->OriginalFocalLength;
      (this->EvalInputs).bIsValid = true;
      return;
    }
    if ((byte)(EVar1 - UseRecordedValues) < 2) {
      (this->EvalInputs).bIsValid = true;
    }
  }
  return;
}

// UpdateLiveLinkFIZ @ 14d754cc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULensComponent::UpdateLiveLinkFIZ
          (ULensComponent *this,ULiveLinkComponentController *param_1,
          FLiveLinkSubjectFrameData *param_2)

{
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar1;
  int iVar2;
  TObjectPtr<ULiveLinkControllerBase> this_00;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  UClass *pUVar7;
  UScriptStruct *pUVar8;
  longlong lVar9;
  TObjectPtr<ULiveLinkControllerBase>_u_0 *pTVar10;
  UActorComponent *pUVar11;
  UActorComponent *pUVar12;
  UClass *local_res10;
  
  lVar5 = (**(code **)((param_2->StaticData).WrappedStruct._padding_ + 0x10))(param_2);
  lVar6 = (**(code **)((param_2->StaticData).WrappedStruct._padding_ + 0x20))(param_2);
  if (lVar6 == 0) {
LAB_14d754d49:
    lVar5 = 0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if (((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar2) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar2 * 8)
         != &pUVar7->_padding_)) ||
       (pUVar8 = FLiveLinkCameraStaticData::StaticStruct(), pUVar8 == (UScriptStruct *)0x0))
    goto LAB_14d754d49;
    iVar2 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar8->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14d754d49;
  }
  pFVar1 = &param_2->FrameData;
  lVar6 = (**(code **)((param_2->FrameData).WrappedStruct._padding_ + 0x10))(pFVar1);
  lVar9 = (**(code **)((pFVar1->WrappedStruct)._padding_ + 0x20))(pFVar1);
  if (lVar9 != 0) {
    pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if (((iVar2 <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar2 * 8)
         == &pUVar7->_padding_)) &&
       (pUVar8 = FLiveLinkCameraFrameData::StaticStruct(), pUVar8 != (UScriptStruct *)0x0)) {
      iVar2 = (int)pUVar8->_padding_;
      if ((*(int *)(lVar9 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar8->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_14d754dc0;
    }
  }
  lVar6 = 0;
LAB_14d754dc0:
  if (((lVar5 == 0) || (lVar6 == 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticData && FrameData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\LensComponent\\Source\\LensComponent\\Private\\LensComponent.cpp"
                         ,0x3cc,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res10 = Z_Construct_UClass_ULiveLinkCameraRole_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pTVar10 = &TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
             ::Find((TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
                     *)&param_1->ControllerMap,(TSubclassOf<ULiveLinkRole_const_>)&local_res10)->
             field0_0x0;
  if ((pTVar10 != (TObjectPtr<ULiveLinkControllerBase>_u_0 *)0x0) &&
     (this_00.field0_0x0 = (TObjectPtr<ULiveLinkControllerBase>_u_0)pTVar10->DebugPtr,
     this_00.field0_0x0 != (ULiveLinkControllerBase *)0x0)) {
    pUVar11 = FComponentReference::GetComponent
                        (&this->TargetCameraComponent,*(AActor **)&this->field_0xa8);
    pUVar12 = ULiveLinkControllerBase::GetAttachedComponent
                        ((ULiveLinkControllerBase *)this_00.field0_0x0);
    if (pUVar12 != pUVar11) {
      return;
    }
  }
  if ((*(char *)(lVar5 + 0x25) != '\0') && (*(char *)(lVar5 + 0x1a) != '\0')) {
    this->LiveLinkFocus = *(float *)(lVar6 + 0x110);
    this->LiveLinkZoom = *(float *)(lVar6 + 0x108);
    this->LiveLinkIris = *(float *)(lVar6 + 0x10c);
    this->bWasLiveLinkFIZUpdated = true;
  }
  return;
}

// UpdateTrackedComponent @ 14d754ec0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULensComponent::UpdateTrackedComponent
          (ULensComponent *this,ULiveLinkComponentController *param_1,
          FLiveLinkSubjectFrameData *param_2)

{
  FString *pFVar1;
  int iVar2;
  ULiveLinkControllerBase *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  UActorComponent *pUVar6;
  longlong lVar7;
  UClass *pUVar8;
  UScriptStruct *pUVar9;
  UActorComponent *pUVar10;
  FObjectPtr_u_0 *this_01;
  UObject *pUVar11;
  UActorComponent *pUVar12;
  UClass *local_res10;
  UActorComponent *local_res18;
  FName local_res20;
  FString local_48;
  
  pUVar6 = (UActorComponent *)
           (**(code **)((param_2->StaticData).WrappedStruct._padding_ + 0x10))(param_2);
  lVar7 = (**(code **)((param_2->StaticData).WrappedStruct._padding_ + 0x20))(param_2);
  pUVar12 = (UActorComponent *)0x0;
  if (lVar7 == 0) {
LAB_14d754f48:
    pUVar6 = pUVar12;
  }
  else {
    pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if (((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar2) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar2 * 8)
         != &pUVar8->_padding_)) ||
       (pUVar9 = FLiveLinkTransformStaticData::StaticStruct(), pUVar9 == (UScriptStruct *)0x0))
    goto LAB_14d754f48;
    iVar2 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar7 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar9->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14d754f48;
  }
  pUVar10 = (UActorComponent *)
            (**(code **)((param_2->FrameData).WrappedStruct._padding_ + 0x10))(&param_2->FrameData);
  lVar7 = (**(code **)((param_2->FrameData).WrappedStruct._padding_ + 0x20))(&param_2->FrameData);
  if (lVar7 == 0) {
LAB_14d754fbd:
    pUVar10 = pUVar12;
  }
  else {
    pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if (((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar2) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar2 * 8)
         != &pUVar8->_padding_)) ||
       (pUVar9 = FLiveLinkTransformFrameData::StaticStruct(), pUVar9 == (UScriptStruct *)0x0))
    goto LAB_14d754fbd;
    iVar2 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar7 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar9->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14d754fbd;
  }
  if (((pUVar6 == (UActorComponent *)0x0) || (pUVar10 == (UActorComponent *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticData && FrameData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\LensComponent\\Source\\LensComponent\\Private\\LensComponent.cpp"
                         ,0x3ac,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_res10 = Z_Construct_UClass_ULiveLinkTransformRole_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  this_01 = (FObjectPtr_u_0 *)
            TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
            ::Find((TMapBase<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<ULiveLinkRole>,TObjectPtr<ULiveLinkControllerBase>,0>_>
                    *)&param_1->ControllerMap,(TSubclassOf<ULiveLinkRole_const_>)&local_res10);
  if (this_01 == (FObjectPtr_u_0 *)0x0) {
    return;
  }
  if (this_01->Handle == (UObject *)0x0) {
    return;
  }
  pUVar8 = Z_Construct_UClass_ULiveLinkTransformController_NoRegister();
  bVar5 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar8);
  if (!bVar5) {
    return;
  }
  this_00 = (ULiveLinkControllerBase *)this_01->Handle;
  if (this_00 == (ULiveLinkControllerBase *)0x0) {
    return;
  }
  if ((char)pUVar6->_padding_ == '\0') {
    return;
  }
  if (*(char *)((longlong)&pUVar6->_padding_ + 1) == '\0') {
    return;
  }
  if (*(char *)((longlong)&this_00[1]._padding_ + 1) == '\0') {
    return;
  }
  if (*(char *)((longlong)&this_00[1]._padding_ + 2) == '\0') {
    return;
  }
  local_res18 = ULiveLinkControllerBase::GetAttachedComponent(this_00);
  if (local_res18 != (UActorComponent *)0x0) {
    pUVar8 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((iVar2 <= *(int *)(local_res18->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(local_res18->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar8->_padding_)) goto LAB_14d7550d2;
  }
  local_res18 = pUVar12;
LAB_14d7550d2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18 != (UActorComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  FWeakObjectPtr::operator=(&(this->TrackedComponent).WeakPtr,(FObjectPtr)&local_res18);
  bVar5 = FWeakObjectPtr::IsValid(&(this->TrackedComponent).WeakPtr);
  if (bVar5) {
    pUVar11 = FWeakObjectPtr::Get(&(this->TrackedComponent).WeakPtr);
    local_res20.ComparisonIndex.Value = *(uint *)&pUVar11->field_0x18;
    local_res20.Number = *(uint *)&pUVar11->field_0x1c;
    ::FName::ToString(&local_res20,&local_48);
    pFVar1 = &this->TrackedComponentName;
    if (pFVar1 != &local_48) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      (this->TrackedComponentName).Data.ArrayNum = local_48.Data.ArrayNum;
      (this->TrackedComponentName).Data.ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  this->bWasNodalOffsetAppliedThisTick = false;
  return;
}

// WasDistortionEvaluated @ 14d7551b0

bool __thiscall ULensComponent::WasDistortionEvaluated(ULensComponent *this)

{
  return this->bWasDistortionEvaluated;
}

// WasNodalOffsetAppliedThisTick @ 14d7551c0

bool __thiscall ULensComponent::WasNodalOffsetAppliedThisTick(ULensComponent *this)

{
  return this->bWasNodalOffsetAppliedThisTick;
}

// execApplyNodalOffset @ 14d755290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ULensComponent::execApplyNodalOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USceneComponent *this;
  ULensFile *this_00;
  TTransform<double> *pTVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_158 [32];
  int local_128;
  float local_124;
  float local_120 [2];
  USceneComponent *local_118 [2];
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  TQuat<double> local_c8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_118[0] = (USceneComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  local_128 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  bVar3 = local_128 == 0;
  local_120[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_120);
  }
  local_124 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_124,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_124);
  }
  this = local_118[0];
  fVar4 = local_120[0];
  fVar5 = local_124;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[9].field_0x18 = 0;
  if ((local_118[0] != (USceneComponent *)0x0) &&
     (this_00 = FLensFilePicker::GetLensFile((FLensFilePicker *)&param_1[4].field_0x20),
     this_00 != (ULensFile *)0x0)) {
    local_c8.X = UE::Math::TQuat<double>::Identity.X;
    local_c8.Y = UE::Math::TQuat<double>::Identity.Y;
    local_e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_c8.Z = UE::Math::TQuat<double>::Identity.Z;
    local_c8.W = UE::Math::TQuat<double>::Identity.W;
    if (bVar3) {
      if (param_1[7].field_0x8 == '\0') {
        return;
      }
      fVar4 = *(float *)&param_1[6].field_0x10;
      fVar5 = *(float *)&param_1[6].field_0x18;
    }
    ULensFile::EvaluateNodalPointOffset(this_00,fVar4,fVar5,(FNodalPointOffset *)&local_e8._s_0);
    pTVar2 = USceneComponent::GetRelativeTransform(this,&local_a8);
    SetOriginalTrackedComponentTransform((ULensComponent *)param_1,pTVar2);
    local_108._s_0.X = local_e8._s_0.X;
    local_108._s_0.Y = local_e8._s_0.Y;
    local_108._s_0.Z = local_e8._s_0.Z;
    USceneComponent::AddLocalOffset
              (this,(TVector<double> *)&local_108._s_0,false,(FHitResult *)0x0,None);
    USceneComponent::AddLocalRotation(this,&local_c8,false,(FHitResult *)0x0,None);
  }
  return;
}

// execClearDistortionState @ 14d755500

void __cdecl
ULensComponent::execClearDistortionState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearDistortionState((ULensComponent *)param_1);
  return;
}

// execGetCroppedFilmback @ 14d755520

void __cdecl ULensComponent::execGetCroppedFilmback(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)&param_1[9].field_0xc;
  uVar1 = *(undefined4 *)&param_1[9].field_0x14;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[9].field_0x4;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined4 *)((longlong)param_3 + 0x10) = uVar1;
  return;
}

// execGetDistortionSource @ 14d755560

void __cdecl ULensComponent::execGetDistortionSource(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[7].field_0xc;
  return;
}

// execGetDistortionState @ 14d755590

void __cdecl ULensComponent::execGetDistortionState(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  ForAnyElementType local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_38.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[7].field_0x20;
  _Src = *(void **)&param_1[7].field_0x18;
  local_30 = CONCAT44(local_30._4_4_,iVar1);
  if (iVar1 == 0) {
    local_30 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,0,&local_38,iVar1,(int *)((longlong)&local_30 + 4));
    memcpy(local_38.Data,_Src,(longlong)iVar1 << 2);
  }
  local_28 = *(undefined4 *)(param_1 + 8);
  uStack_24 = *(undefined4 *)&param_1[8].field_0x4;
  uStack_20 = *(undefined4 *)&param_1[8].field_0x8;
  uStack_1c = *(undefined4 *)&param_1[8].field_0xc;
  local_18 = *(undefined4 *)&param_1[8].field_0x10;
  uStack_14 = *(undefined4 *)&param_1[8].field_0x14;
  uStack_10 = *(undefined4 *)&param_1[8].field_0x18;
  uStack_c = *(undefined4 *)&param_1[8].field_0x1c;
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_30;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_30._4_4_;
    local_30 = 0;
  }
  *(undefined4 *)((longlong)param_3 + 0x10) = local_28;
  *(undefined4 *)((longlong)param_3 + 0x14) = uStack_24;
  *(undefined4 *)((longlong)param_3 + 0x18) = uStack_20;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_1c;
  *(undefined4 *)((longlong)param_3 + 0x20) = local_18;
  *(undefined4 *)((longlong)param_3 + 0x24) = uStack_14;
  *(undefined4 *)((longlong)param_3 + 0x28) = uStack_10;
  *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_c;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// execGetFIZEvaluationMode @ 14d7556b0

void __cdecl
ULensComponent::execGetFIZEvaluationMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[5].field_0x8;
  return;
}

// execGetFilmbackOverrideSetting @ 14d7556e0

void __cdecl
ULensComponent::execGetFilmbackOverrideSetting(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 9);
  return;
}

// execGetLensDistortionHandler @ 14d755710

void __cdecl
ULensComponent::execGetLensDistortionHandler(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  TTuple<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>_> *pTVar2;
  UObject *local_res8;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = *(UObject **)&param_1[7].field_0x10;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pTVar2 = TSet<TTuple<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>_>,TDefaultMapHashableKeyFuncs<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>,0>,FDefaultSetAllocator>
                   *)&param_1[0xe].field_0x10,(TSubclassOf<ULensModel_const_>)&local_res8);
  if (pTVar2 != (TTuple<TSubclassOf<ULensModel>,TObjectPtr<ULensDistortionModelHandlerBase>_> *)0x0)
  {
    pUVar1 = *(UObject **)&pTVar2->field_0x8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    *(UObject **)param_3 = pUVar1;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetLensFile @ 14d7557f0

void __cdecl ULensComponent::execGetLensFile(UObject *param_1,FFrame *param_2,void *param_3)

{
  ULensFile *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = FLensFilePicker::GetLensFile((FLensFilePicker *)&param_1[4].field_0x20);
  *(ULensFile **)param_3 = pUVar1;
  return;
}

// execGetLensFileEvaluationInputs @ 14d755830

void __cdecl
ULensComponent::execGetLensFileEvaluationInputs(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[6].field_0x18;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[6].field_0x10;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 7);
  *(undefined8 *)((longlong)param_3 + 0x10) = *(undefined8 *)&param_1[6].field_0x20;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar1;
  *(undefined4 *)((longlong)param_3 + 0x20) = *(undefined4 *)&param_1[7].field_0x8;
  return;
}

// execGetLensFilePicker @ 14d755870

void __cdecl ULensComponent::execGetLensFilePicker(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = param_1[4].field_0x20;
  pUVar2 = *(UObject **)(param_1 + 5);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  *(undefined1 *)param_3 = uVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  *(UObject **)((longlong)param_3 + 8) = pUVar2;
  return;
}

// execGetLensModel @ 14d7558f0

void __cdecl ULensComponent::execGetLensModel(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = *(UObject **)&param_1[7].field_0x10;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    *(UObject **)param_3 = pUVar1;
    return;
  }
  *(UObject **)param_3 = pUVar1;
  return;
}

// execGetOriginalFocalLength @ 14d755970

void __cdecl
ULensComponent::execGetOriginalFocalLength(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0xd].field_0x1c;
  return;
}

// execGetOverscanMultiplier @ 14d7559a0

void __cdecl
ULensComponent::execGetOverscanMultiplier(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[8].field_0x20 != '\0') {
    *(undefined4 *)param_3 = *(undefined4 *)&param_1[8].field_0x24;
    return;
  }
  *(undefined4 *)param_3 = __real_3f800000;
  return;
}

// execSetApplyDistortion @ 14d7559e0

void __cdecl ULensComponent::execSetApplyDistortion(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[7].field_0xd = local_res8[0] != 0;
  return;
}

// execSetApplyNodalOffsetOnTick @ 14d755a70

void __cdecl
ULensComponent::execSetApplyNodalOffsetOnTick(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[9].field_0x18 = local_res8[0] != 0;
  return;
}

// execSetCroppedFilmback @ 14d755b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ULensComponent::execSetCroppedFilmback(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  
  local_28 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_20 = _UNK_1513d9ee8;
  local_18 = 0x3faa3d71;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)&param_1[9].field_0x4 = local_28;
  *(undefined8 *)&param_1[9].field_0xc = uStack_20;
  *(undefined4 *)&param_1[9].field_0x14 = local_18;
  return;
}

// execSetDistortionSource @ 14d755ba0

void __cdecl ULensComponent::execSetDistortionSource(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ULensFile *pUVar2;
  char local_res8 [8];
  UClass *local_res10;
  
  local_res8[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[7].field_0xc = local_res8[0];
  if (local_res8[0] == '\0') {
    pUVar2 = FLensFilePicker::GetLensFile((FLensFilePicker *)&param_1[4].field_0x20);
    if (pUVar2 != (ULensFile *)0x0) {
      local_res10 = (pUVar2->LensInfo).LensModel.Class.field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      SetLensModel((ULensComponent *)param_1,(TSubclassOf<ULensModel>)&local_res10);
    }
  }
  ClearDistortionState((ULensComponent *)param_1);
  return;
}

// execSetDistortionState @ 14d755c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ULensComponent::execSetDistortionState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  void *local_68;
  undefined8 local_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  FLensDistortionState local_38;
  
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = ___xmm_3ffc71c71c71c71c3ff0000000000000;
  dStack_50 = _UNK_152bc18c8;
  local_48 = ___xmm_3fe00000000000003fe0000000000000;
  dStack_40 = _UNK_150689678;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  _Src = local_68;
  local_38.DistortionInfo.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_60;
  local_38.DistortionInfo.Parameters.ArrayNum = (int)local_60;
  if ((int)local_60 == 0) {
    local_38.DistortionInfo.Parameters.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_60,0,(ForAnyElementType *)&local_38,(int)local_60,
               &local_38.DistortionInfo.Parameters.ArrayMax);
    memcpy(local_38.DistortionInfo.Parameters.AllocatorInstance.Data,_Src,lVar2 << 2);
  }
  local_38.FocalLengthInfo.FxFy.field0_0x0._s_0.X = local_58;
  local_38.FocalLengthInfo.FxFy.field0_0x0._s_0.Y = dStack_50;
  local_38.ImageCenter.PrincipalPoint.field0_0x0._s_0.X = local_48;
  local_38.ImageCenter.PrincipalPoint.field0_0x0._s_0.Y = dStack_40;
  FLensDistortionState::operator=((FLensDistortionState *)&param_1[7].field_0x18,&local_38);
  if (local_38.DistortionInfo.Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.DistortionInfo.Parameters.AllocatorInstance.Data);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// execSetFIZEvaluationMode @ 14d755dc0

void __cdecl
ULensComponent::execSetFIZEvaluationMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[5].field_0x8 = local_res8[0];
  return;
}

// execSetFilmbackOverrideSetting @ 14d755e40

void __cdecl
ULensComponent::execSetFilmbackOverrideSetting(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)(param_1 + 9) = local_res8[0];
  return;
}

// execSetLensFile @ 14d755ec0

void __cdecl ULensComponent::execSetLensFile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ULensFile *pUVar2;
  ULensFile *local_res10;
  FLensFilePicker local_18;
  
  local_res10 = (ULensFile *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (ULensFile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  local_18.bUseDefaultLensFile = false;
  local_18.LensFile.field0_0x0.DebugPtr = (TObjectPtr<ULensFile>_u_0)pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (ULensFile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  SetLensFilePicker((ULensComponent *)param_1,&local_18);
  return;
}

// execSetLensFileEvaluationInputs @ 14d755f90

void __cdecl
ULensComponent::execSetLensFileEvaluationInputs(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[6].field_0x10 = local_res8[0];
  *(undefined4 *)&param_1[6].field_0x18 = local_res10[0];
  param_1[7].field_0x8 = 1;
  return;
}

// execSetLensFilePicker @ 14d756070

void __cdecl ULensComponent::execSetLensFilePicker(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_28 [8];
  ULensFile *local_20;
  FLensFilePicker local_18;
  
  local_28[0] = 0;
  local_20 = (ULensFile *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_18.LensFile.field0_0x0.DebugPtr = (TObjectPtr<ULensFile>_u_0)local_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18.bUseDefaultLensFile = (bool)local_28[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20 != (ULensFile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_20);
  }
  SetLensFilePicker((ULensComponent *)param_1,&local_18);
  return;
}

// execSetLensModel @ 14d756130

void __cdecl ULensComponent::execSetLensModel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res10;
  UObject *local_res20;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  SetLensModel((ULensComponent *)param_1,(TSubclassOf<ULensModel>)&local_res20);
  return;
}

// execSetOverscanMultiplier @ 14d7561e0

void __cdecl
ULensComponent::execSetOverscanMultiplier(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[8].field_0x24 = local_res8[0];
  param_1[8].field_0x20 = 1;
  return;
}

// execShouldApplyDistortion @ 14d756270

void __cdecl
ULensComponent::execShouldApplyDistortion(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[7].field_0xd;
  return;
}

// execShouldApplyNodalOffsetOnTick @ 14d7562a0

void __cdecl
ULensComponent::execShouldApplyNodalOffsetOnTick(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[9].field_0x18;
  return;
}

// execWasDistortionEvaluated @ 14d7562d0

void __cdecl
ULensComponent::execWasDistortionEvaluated(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x11].field_0x15;
  return;
}

// execWasNodalOffsetAppliedThisTick @ 14d756300

void __cdecl
ULensComponent::execWasNodalOffsetAppliedThisTick(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x11].field_0x16;
  return;
}

// operator() @ 150586520

bool __thiscall `ULensComponent::TickComponent'::__l32::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8176404317423533898>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8176404317423533898>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150586560

bool __thiscall `ULensComponent::UpdateCameraFilmback'::__l14::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8176404317423533023>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8176404317423533023>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

