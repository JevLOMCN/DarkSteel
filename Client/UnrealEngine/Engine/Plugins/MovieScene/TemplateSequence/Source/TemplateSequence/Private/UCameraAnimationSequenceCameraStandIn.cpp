// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 14

// StaticClass @ 14ac64050

UClass * __cdecl UCameraAnimationSequenceCameraStandIn::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAnimationSequenceCameraStandIn.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"CameraAnimationSequenceCameraStandIn",
               &Z_Registration_Info_UClass_UCameraAnimationSequenceCameraStandIn.InnerSingleton,
               StaticRegisterNativesUCameraAnimationSequenceCameraStandIn,0x8d0,0x10,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",InternalConstructor<UCameraAnimationSequenceCameraStandIn>,
               InternalVTableHelperCtorCaller<UCameraAnimationSequenceCameraStandIn>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAnimationSequenceCameraStandIn.InnerSingleton;
}

// UCameraAnimationSequenceCameraStandIn @ 14ac6ff20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraAnimationSequenceCameraStandIn * __thiscall
UCameraAnimationSequenceCameraStandIn::UCameraAnimationSequenceCameraStandIn
          (UCameraAnimationSequenceCameraStandIn *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCameraAnimationSequenceCameraStandIn__6B_;
  FPostProcessSettings::FPostProcessSettings(&this->PostProcessSettings);
  (this->Filmback).SensorWidth = 24.89;
  (this->Filmback).SensorHeight = 18.67;
  (this->Filmback).SensorHorizontalOffset = 0.0;
  (this->Filmback).SensorVerticalOffset = 0.0;
  (this->Filmback).SensorAspectRatio = 1.33;
  (this->LensSettings).MinFocalLength = 50.0;
  (this->LensSettings).MaxFocalLength = 50.0;
  (this->LensSettings).MinFStop = 2.0;
  (this->LensSettings).MaxFStop = 2.0;
  (this->LensSettings).MinimumFocusDistance = 15.0;
  (this->LensSettings).SqueezeFactor = 1.0;
  (this->LensSettings).DiaphragmBladeCount = 5;
  FCameraFocusSettings::FCameraFocusSettings(&this->FocusSettings);
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->bIsCineCamera = false;
  this->WorldToMeters = 0.0;
  return this;
}

// UCameraAnimationSequenceCameraStandIn @ 14ac70040

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraAnimationSequenceCameraStandIn * __thiscall
UCameraAnimationSequenceCameraStandIn::UCameraAnimationSequenceCameraStandIn
          (UCameraAnimationSequenceCameraStandIn *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCameraAnimationSequenceCameraStandIn__6B_;
  FPostProcessSettings::FPostProcessSettings(&this->PostProcessSettings);
  (this->Filmback).SensorWidth = 24.89;
  (this->Filmback).SensorHeight = 18.67;
  (this->Filmback).SensorHorizontalOffset = 0.0;
  (this->Filmback).SensorVerticalOffset = 0.0;
  (this->Filmback).SensorAspectRatio = 1.33;
  (this->LensSettings).MinFocalLength = 50.0;
  (this->LensSettings).MaxFocalLength = 50.0;
  (this->LensSettings).MinFStop = 2.0;
  (this->LensSettings).MaxFStop = 2.0;
  (this->LensSettings).MinimumFocusDistance = 15.0;
  (this->LensSettings).SqueezeFactor = 1.0;
  (this->LensSettings).DiaphragmBladeCount = 5;
  FCameraFocusSettings::FCameraFocusSettings(&this->FocusSettings);
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->bIsCineCamera = false;
  this->WorldToMeters = 0.0;
  return this;
}

// ~UCameraAnimationSequenceCameraStandIn @ 14ac71540

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraAnimationSequenceCameraStandIn::~UCameraAnimationSequenceCameraStandIn
          (UCameraAnimationSequenceCameraStandIn *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &___7UCameraAnimationSequenceCameraStandIn__6B_;
  pvVar1 = *(void **)&(this->FocusSettings).TrackingFocusSettings.ActorToTrack.SoftObjectPtr.
                      field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->PostProcessSettings).WeightedBlendables.Array.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14ac779d0

UClass * __cdecl UCameraAnimationSequenceCameraStandIn::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAnimationSequenceCameraStandIn.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"CameraAnimationSequenceCameraStandIn",
               &Z_Registration_Info_UClass_UCameraAnimationSequenceCameraStandIn.InnerSingleton,
               StaticRegisterNativesUCameraAnimationSequenceCameraStandIn,0x8d0,0x10,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",InternalConstructor<UCameraAnimationSequenceCameraStandIn>,
               InternalVTableHelperCtorCaller<UCameraAnimationSequenceCameraStandIn>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAnimationSequenceCameraStandIn.InnerSingleton;
}

// Initialize @ 14ac79150

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
UCameraAnimationSequenceCameraStandIn::Initialize
          (UCameraAnimationSequenceCameraStandIn *this,UTemplateSequence *param_1)

{
  undefined1 *puVar1;
  FGuid *pFVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  UMovieScene *this_00;
  UObject *pUVar5;
  code *pcVar6;
  float fVar7;
  undefined8 uVar8;
  double dVar9;
  int iVar10;
  uint uVar11;
  UMovieScene *this_01;
  FMovieSceneSpawnable *pFVar12;
  UClass *pUVar13;
  longlong lVar14;
  UWorld *this_02;
  AWorldSettings *pAVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  UObject *pUVar19;
  UClass *local_res8;
  FGuid local_18;
  UObject *pUVar20;
  
  pUVar20 = (UObject *)0x0;
  pUVar19 = (UObject *)0x0;
  this_01 = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))(param_1);
  this_00 = (param_1->MovieScene).field0_0x0.DebugPtr;
  if ((this_00 == (UMovieScene *)0x0) ||
     (iVar10 = UMovieScene::GetSpawnableCount(this_00), iVar10 < 1)) {
    uVar18 = 0;
    local_18.A = 0;
    local_18.B = 0;
    local_18.C = 0;
    local_18.D = 0;
    uVar11 = uVar18;
    uVar17 = uVar18;
    uVar16 = uVar18;
  }
  else {
    pFVar12 = UMovieScene::GetSpawnable((param_1->MovieScene).field0_0x0.DebugPtr,0);
    pFVar2 = &pFVar12->Guid;
    uVar18 = pFVar2->A;
    local_18.A = pFVar2->A;
    local_18.B = pFVar2->B;
    local_18.C = (pFVar12->Guid).C;
    local_18.D = (pFVar12->Guid).D;
    uVar11 = (pFVar12->Guid).D;
    uVar17 = (pFVar12->Guid).B;
    uVar16 = (pFVar12->Guid).C;
  }
  if ((((this_01 != (UMovieScene *)0x0) &&
       (((uVar11 != 0 || uVar16 != 0) || uVar18 != 0) || uVar17 != 0)) &&
      (pFVar12 = UMovieScene::FindSpawnable(this_01,&local_18),
      pFVar12 != (FMovieSceneSpawnable *)0x0)) &&
     (pUVar5 = (pFVar12->ObjectTemplate).field0_0x0.DebugPtr, pUVar20 = pUVar19,
     pUVar5 != (UObject *)0x0)) {
    pUVar13 = Z_Construct_UClass_AActor_NoRegister();
    iVar10 = (int)pUVar13->_padding_;
    if ((iVar10 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar10 * 8) ==
        &pUVar13->_padding_)) {
      pUVar20 = pUVar5;
    }
  }
  this->bIsCineCamera = false;
  if (pUVar20 == (UObject *)0x0) {
LAB_14ac79507:
    `UCameraAnimationSequenceCameraStandIn::Initialize'::__l2::<lambda_1>::operator()(&local_res8);
  }
  else {
    pcVar6 = *(code **)(*(longlong *)pUVar20 + 0x738);
    local_res8 = Z_Construct_UClass_UCineCameraComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    lVar14 = (*pcVar6)(pUVar20,&local_res8);
    if (lVar14 == 0) {
      pcVar6 = *(code **)(*(longlong *)pUVar20 + 0x738);
      local_res8 = Z_Construct_UClass_UCameraComponent_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      lVar14 = (*pcVar6)(pUVar20,&local_res8);
      if (lVar14 == 0) {
        *&(this->Transform).Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        *&(this->Transform).Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        *&(this->Transform).Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        *&(this->Transform).Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        *&(this->Transform).Scale3D.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        *&(this->Transform).Scale3D.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        goto LAB_14ac79507;
      }
      this->FieldOfView = *(float *)(lVar14 + 0x250);
      this->AspectRatio = *(float *)(lVar14 + 0x274);
      FPostProcessSettings::operator=
                (&this->PostProcessSettings,(FPostProcessSettings *)(lVar14 + 0x330));
      this->PostProcessBlendWeight = *(float *)(lVar14 + 0x300);
    }
    else {
      this->bIsCineCamera = true;
      this->FieldOfView = *(float *)(lVar14 + 0x250);
      this->AspectRatio = *(float *)(lVar14 + 0x274);
      FPostProcessSettings::operator=
                (&this->PostProcessSettings,(FPostProcessSettings *)(lVar14 + 0x330));
      this->PostProcessBlendWeight = *(float *)(lVar14 + 0x300);
      uVar3 = *(undefined8 *)(lVar14 + 0xab4);
      uVar8 = *(undefined8 *)(lVar14 + 0xabc);
      (this->Filmback).SensorWidth = (float)(int)uVar3;
      (this->Filmback).SensorHeight = (float)(int)((ulonglong)uVar3 >> 0x20);
      (this->Filmback).SensorHorizontalOffset = (float)(int)uVar8;
      (this->Filmback).SensorVerticalOffset = (float)(int)((ulonglong)uVar8 >> 0x20);
      (this->Filmback).SensorAspectRatio = *(float *)(lVar14 + 0xac4);
      uVar3 = *(undefined8 *)(lVar14 + 0xac8);
      uVar8 = *(undefined8 *)(lVar14 + 0xad0);
      (this->LensSettings).MinFocalLength = (float)(int)uVar3;
      (this->LensSettings).MaxFocalLength = (float)(int)((ulonglong)uVar3 >> 0x20);
      (this->LensSettings).MinFStop = (float)(int)uVar8;
      (this->LensSettings).MaxFStop = (float)(int)((ulonglong)uVar8 >> 0x20);
      uVar3 = *(undefined8 *)(lVar14 + 0xad8);
      (this->LensSettings).MinimumFocusDistance = (float)(int)uVar3;
      (this->LensSettings).SqueezeFactor = (float)(int)((ulonglong)uVar3 >> 0x20);
      (this->LensSettings).DiaphragmBladeCount = *(int *)(lVar14 + 0xae0);
      (this->FocusSettings).FocusMethod = *(ECameraFocusMethod *)(lVar14 + 0xae8);
      (this->FocusSettings).ManualFocusDistance = *(float *)(lVar14 + 0xaec);
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)
                 &(this->FocusSettings).TrackingFocusSettings,
                 (TPersistentObjectPtr<FSoftObjectPath> *)(lVar14 + 0xaf0));
      dVar9 = *(double *)(lVar14 + 0xb20);
      (this->FocusSettings).TrackingFocusSettings.RelativeOffset.field0_0x0._s_0.X =
           *(double *)(lVar14 + 0xb18);
      (this->FocusSettings).TrackingFocusSettings.RelativeOffset.field0_0x0._s_0.Y = dVar9;
      (this->FocusSettings).TrackingFocusSettings.RelativeOffset.field0_0x0._s_0.Z =
           *(double *)(lVar14 + 0xb28);
      puVar1 = &(this->FocusSettings).TrackingFocusSettings.field_0x40;
      *puVar1 = *puVar1 ^ ((this->FocusSettings).TrackingFocusSettings.bDrawDebugTrackingFocusPoint
                          ^ *(byte *)(lVar14 + 0xb30)) & 1;
      uVar4 = (this->FocusSettings).field_0x50;
      (this->FocusSettings).field_0x50 =
           ((this->FocusSettings).bSmoothFocusChanges ^ *(byte *)(lVar14 + 0xb38)) & 1 ^ uVar4;
      (this->FocusSettings).FocusSmoothingInterpSpeed = *(float *)(lVar14 + 0xb3c);
      (this->FocusSettings).FocusOffset = *(float *)(lVar14 + 0xb40);
      this->CurrentFocalLength = *(float *)(lVar14 + 0xb4c);
      this->CurrentAperture = *(float *)(lVar14 + 0xb50);
      this->CurrentFocusDistance = *(float *)(lVar14 + 0xb54);
      this_02 = (UWorld *)(**(code **)(*(longlong *)this + 0x180))(this);
      fVar7 = __real_42c80000;
      if ((this_02 != (UWorld *)0x0) &&
         (pAVar15 = UWorld::GetWorldSettings(this_02,false,true), fVar7 = __real_42c80000,
         pAVar15 != (AWorldSettings *)0x0)) {
        fVar7 = pAVar15->WorldToMeters;
      }
      this->WorldToMeters = fVar7;
    }
    *&(this->Transform).Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(this->Transform).Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(this->Transform).Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(this->Transform).Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(this->Transform).Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(this->Transform).Scale3D.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  return;
}

// RecalcDerivedData @ 14ac7de20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraAnimationSequenceCameraStandIn::RecalcDerivedData
          (UCameraAnimationSequenceCameraStandIn *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (this->bIsCineCamera != false) {
    fVar3 = (this->LensSettings).MaxFocalLength;
    if (this->CurrentFocalLength <= fVar3) {
      fVar3 = this->CurrentFocalLength;
    }
    fVar2 = (this->LensSettings).MaxFStop;
    if (this->CurrentAperture <= fVar2) {
      fVar2 = this->CurrentAperture;
    }
    fVar4 = this->WorldToMeters * __real_3a83126f * (this->LensSettings).MinimumFocusDistance;
    fVar5 = 0.0;
    fVar1 = (this->LensSettings).MinFocalLength;
    if (fVar3 <= fVar1) {
      fVar3 = fVar1;
    }
    fVar1 = (this->FocusSettings).ManualFocusDistance;
    if (fVar4 <= fVar1) {
      fVar4 = fVar1;
    }
    fVar1 = (this->LensSettings).MinFStop;
    if (fVar2 <= fVar1) {
      fVar2 = fVar1;
    }
    (this->FocusSettings).ManualFocusDistance = fVar4;
    this->CurrentFocalLength = fVar3;
    this->CurrentAperture = fVar2;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = atanf((__real_3f000000 / fVar3) * (this->Filmback).SensorWidth);
      fVar3 = fVar3 * ___real_42e52ee0;
    }
    fVar2 = (this->Filmback).SensorHeight;
    this->FieldOfView = fVar3;
    if (0.0 < fVar2) {
      fVar5 = (this->Filmback).SensorWidth / fVar2;
    }
    (this->Filmback).SensorAspectRatio = fVar5;
    this->AspectRatio = fVar5;
  }
  return;
}

// RegisterCameraStandIn @ 14ac7df10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UCameraAnimationSequenceCameraStandIn::RegisterCameraStandIn(void)

{
  int *piVar1;
  undefined8 *puVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMovieSceneTracksComponentTypes *pFVar7;
  FName *pFVar8;
  longlong lVar9;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
  FVar10;
  TArray<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar11;
  undefined1 auStackY_98 [32];
  FName local_48;
  UClass *local_40;
  FName FStack_38;
  undefined2 local_30;
  undefined6 uStack_2e;
  code *pcStack_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  if (bRegistered) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5017693477396283601>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\CameraAnimationSequencePlayer.cpp"
                       ,0xd1,"!bRegistered");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pFVar7 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    pFVar8 = ::FName::FName(&local_48,L"Transform");
    pTVar11 = &(pFVar7->Accessors).ComponentTransform.CustomAccessors;
    FVar3 = *pFVar8;
    local_40 = StaticClass();
    FVar10 = (pFVar7->Accessors).ComponentTransform.CustomAccessors.AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
                   )0x0) {
      FVar10 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
                )pTVar11;
    }
    local_30 = 0xffff;
    pcStack_28 = UE::MovieScene::GetCameraStandInTransform;
    local_20 = UE::MovieScene::SetCameraStandInTransform;
    FStack_38 = FVar3;
    if (((ulonglong)FVar10 <= &local_40) &&
       (&local_40 <
        (UClass **)
        ((longlong)FVar10 +
        (longlong)(pFVar7->Accessors).ComponentTransform.CustomAccessors.ArrayMax * 0x28))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (pFVar7->Accessors).ComponentTransform.CustomAccessors.ArrayNum;
    piVar1 = &(pFVar7->Accessors).ComponentTransform.CustomAccessors.ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>_>
                        (0x828,&pTVar11->AllocatorInstance,piVar1);
    }
    lVar9 = (longlong)iVar6;
    (pFVar7->Accessors).ComponentTransform.CustomAccessors.ArrayNum = iVar6 + 1;
    FVar10 = (pFVar7->Accessors).ComponentTransform.CustomAccessors.AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
                   )0x0) {
      FVar10 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
                )pTVar11;
    }
    puVar2 = (undefined8 *)((longlong)FVar10 + lVar9 * 0x28);
    *puVar2 = local_40;
    *(FName *)(puVar2 + 1) = FStack_38;
    *(ulonglong *)((uchar *)((longlong)FVar10 + 0x10) + lVar9 * 0x28) = CONCAT62(uStack_2e,local_30)
    ;
    *(code **)((uchar *)((longlong)FVar10 + 0x10) + lVar9 * 0x28 + 8) = pcStack_28;
    *(code **)((uchar *)((longlong)FVar10 + 0x20) + lVar9 * 0x28) = local_20;
    bRegistered = true;
  }
  return;
}

// Reset @ 14ac7ea60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCameraAnimationSequenceCameraStandIn::Reset
          (UCameraAnimationSequenceCameraStandIn *this,FMinimalViewInfo *param_1,
          UMovieSceneEntitySystemLinker *param_2)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneTracksComponentTypes *pFVar3;
  float fVar4;
  float fVar5;
  TUpdateInitialPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,TIntegerSequence<int>_>
  local_res8 [8];
  
  this->field_0x2c =
       this->field_0x2c ^ (this->bConstrainAspectRatio ^ param_1->bConstrainAspectRatio) & 1;
  this->AspectRatio = param_1->AspectRatio;
  this->FieldOfView = param_1->FOV;
  FPostProcessSettings::operator=(&this->PostProcessSettings,&param_1->PostProcessSettings);
  fVar4 = this->FieldOfView * __real_3c0efa35;
  this->PostProcessBlendWeight = param_1->PostProcessBlendWeight;
  fVar5 = (this->Filmback).SensorWidth * __real_3f000000;
  fVar4 = tanf(fVar4);
  this->CurrentFocalLength = fVar5 / fVar4;
  RecalcDerivedData(this);
  UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar3 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  if (param_2 == (UMovieSceneEntitySystemLinker *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Linker",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\CameraAnimationSequencePlayer.cpp"
                       ,0xb5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::MovieScene::
  TUpdateInitialPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,TIntegerSequence<int>_>::
  Update(local_res8,param_2,&pFVar3->Float);
  return;
}

// ResetDefaultValues @ 14ac7eb50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraAnimationSequenceCameraStandIn::ResetDefaultValues
          (UCameraAnimationSequenceCameraStandIn *this,FMinimalViewInfo *param_1)

{
  float fVar1;
  float fVar2;
  
  this->field_0x2c =
       this->field_0x2c ^ (this->bConstrainAspectRatio ^ param_1->bConstrainAspectRatio) & 1;
  this->AspectRatio = param_1->AspectRatio;
  this->FieldOfView = param_1->FOV;
  FPostProcessSettings::operator=(&this->PostProcessSettings,&param_1->PostProcessSettings);
  fVar1 = this->FieldOfView * __real_3c0efa35;
  this->PostProcessBlendWeight = param_1->PostProcessBlendWeight;
  fVar2 = (this->Filmback).SensorWidth * __real_3f000000;
  fVar1 = tanf(fVar1);
  this->CurrentFocalLength = fVar2 / fVar1;
  RecalcDerivedData(this);
  return;
}

// StaticRegisterNativesUCameraAnimationSequenceCameraStandIn @ 14ac804b0

void __cdecl
UCameraAnimationSequenceCameraStandIn::StaticRegisterNativesUCameraAnimationSequenceCameraStandIn
          (void)

{
  return;
}

// UnregisterCameraStandIn @ 14ac80dd0

void __cdecl UCameraAnimationSequenceCameraStandIn::UnregisterCameraStandIn(void)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
  FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMovieSceneTracksComponentTypes *pFVar5;
  UClass *pUVar6;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
  FVar7;
  uint uVar8;
  longlong lVar9;
  
  if (bRegistered) {
    pFVar5 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    pUVar6 = StaticClass();
    uVar8 = (pFVar5->Accessors).ComponentTransform.CustomAccessors.ArrayNum - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 * 0x28;
      do {
        uVar4 = 0;
        if ((int)uVar8 < (pFVar5->Accessors).ComponentTransform.CustomAccessors.ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar1 = (pFVar5->Accessors).ComponentTransform.CustomAccessors.AllocatorInstance.
                SecondaryData;
        FVar7 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
                 )&(pFVar5->Accessors).ComponentTransform.CustomAccessors;
        if (FVar1 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
                      )0x0) {
          FVar7 = FVar1;
        }
        if (*(UClass **)(lVar9 + (longlong)FVar7) == pUVar6) {
          *(undefined8 *)(lVar9 + (longlong)FVar7) = 0;
          *(undefined8 *)(lVar9 + 8 + (longlong)FVar7) = 0;
        }
        lVar9 = lVar9 + -0x28;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    bRegistered = false;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5017693477396283614>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\CameraAnimationSequencePlayer.cpp"
                       ,0xde,"bRegistered");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// UpdateInitialPropertyValues @ 14ac81a80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCameraAnimationSequenceCameraStandIn::UpdateInitialPropertyValues
          (UCameraAnimationSequenceCameraStandIn *this,UMovieSceneEntitySystemLinker *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneTracksComponentTypes *pFVar3;
  TUpdateInitialPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,TIntegerSequence<int>_>
  local_res10 [24];
  
  UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar3 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  if (param_1 == (UMovieSceneEntitySystemLinker *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Linker",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\CameraAnimationSequencePlayer.cpp"
                       ,0xb5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::MovieScene::
  TUpdateInitialPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,TIntegerSequence<int>_>::
  Update(local_res10,param_1,&pFVar3->Float);
  return;
}

// operator() @ 15055a3d0

bool __thiscall
`UCameraAnimationSequenceCameraStandIn::Initialize'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5017693477396283535>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5017693477396283535>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

