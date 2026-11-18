// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CinematicCamera
// Functions: 13

// StaticClass @ 146ab3b80

UClass * __cdecl ACineCameraActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACineCameraActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CinematicCamera",L"CineCameraActor",
               &Z_Registration_Info_UClass_ACineCameraActor.InnerSingleton,
               StaticRegisterNativesACineCameraActor,0xae0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ACineCameraActor>,
               InternalVTableHelperCtorCaller<ACineCameraActor>,local_res8,ACameraActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACineCameraActor.InnerSingleton;
}

// ACineCameraActor @ 146ab4d40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ACineCameraActor * __thiscall
ACineCameraActor::ACineCameraActor(ACineCameraActor *this,FVTableHelper *param_1)

{
  ACameraActor::ACameraActor((ACameraActor *)this,param_1);
  this->_padding_ = (longlong)&___7ACineCameraActor__6B_;
  FCameraLookatTrackingSettings::FCameraLookatTrackingSettings(&this->LookatTrackingSettings);
  return this;
}

// ACineCameraActor @ 146ab4d80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ACineCameraActor * __thiscall
ACineCameraActor::ACineCameraActor(ACineCameraActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  int iVar2;
  FName FVar3;
  FName *pFVar4;
  UClass *pUVar5;
  UCineCameraComponent *pUVar6;
  FName local_res8;
  
  pFVar4 = ::FName::FName(&local_res8,L"CameraComponent");
  FVar3 = *pFVar4;
  pUVar5 = UCineCameraComponent::StaticClass();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar3);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar3,pUVar5,(TArrayView<FName_const_,int> *)0x0);
  ACameraActor::ACameraActor((ACameraActor *)this,param_1);
  this->_padding_ = (longlong)&___7ACineCameraActor__6B_;
  FCameraLookatTrackingSettings::FCameraLookatTrackingSettings(&this->LookatTrackingSettings);
  pUVar6 = (UCineCameraComponent *)this->_padding_;
  if (pUVar6 != (UCineCameraComponent *)0x0) {
    pUVar5 = UCineCameraComponent::StaticClass();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar5->_padding_)) goto LAB_146ab4e26;
  }
  pUVar6 = (UCineCameraComponent *)0x0;
LAB_146ab4e26:
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  this->CineCameraComponent = pUVar6;
  AActor::SetActorTickEnabled((AActor *)this,true);
  return this;
}

// ~ACineCameraActor @ 146ab5400

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ACineCameraActor::~ACineCameraActor(ACineCameraActor *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ACineCameraActor__6B_;
  pvVar1 = *(void **)&(this->LookatTrackingSettings).ActorToTrack.SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  ACameraActor::~ACameraActor((ACameraActor *)this);
  return;
}

// GetLookatLocation @ 146ab7930

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
ACineCameraActor::GetLookatLocation(ACineCameraActor *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  USceneComponent *pUVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  AActor *pAVar10;
  TTransform<double> *pTVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  pAVar10 = TSoftObjectPtr<AActor>::Get(&(this->LookatTrackingSettings).ActorToTrack);
  if (pAVar10 != (AActor *)0x0) {
    pUVar2 = (pAVar10->RootComponent).field0_0x0.DebugPtr;
    if (pUVar2 == (USceneComponent *)0x0) {
      pTVar11 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar11 = &pUVar2->ComponentToWorld;
    }
    auVar17 = *(undefined1 (*) [16])(pTVar11->Rotation).ZW.m128d_f64;
    auVar18 = *(undefined1 (*) [16])(pTVar11->Rotation).XY.m128d_f64;
    dVar7 = (this->LookatTrackingSettings).RelativeOffset.field0_0x0._s_0.Z *
            (pTVar11->Scale3D).ZW.m128d_f64[0];
    dVar8 = (pTVar11->Scale3D).ZW.m128d_f64[1] * 0.0;
    dVar5 = (pTVar11->Scale3D).XY.m128d_f64[0] *
            (this->LookatTrackingSettings).RelativeOffset.field0_0x0._s_0.X;
    dVar6 = (pTVar11->Scale3D).XY.m128d_f64[1] *
            (this->LookatTrackingSettings).RelativeOffset.field0_0x0._s_0.Y;
    uVar12 = (undefined4)((ulonglong)dVar6 >> 0x20);
    dVar1 = auVar17._0_8_;
    dVar19 = auVar18._8_8_;
    dVar9 = auVar17._8_8_;
    auVar22 = blendpd(auVar18,auVar17,2);
    auVar23._8_4_ = SUB84(dVar6,0);
    auVar23._0_8_ = dVar5;
    auVar23._12_4_ = uVar12;
    auVar13._8_4_ = SUB84(dVar6,0);
    auVar13._0_8_ = dVar5;
    auVar13._12_4_ = uVar12;
    auVar14._8_4_ = SUB84(dVar8,0);
    auVar14._0_8_ = dVar7;
    auVar14._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    auVar14 = blendpd(auVar13,auVar14,2);
    auVar24._0_8_ = auVar23._8_8_ * auVar18._0_8_ - dVar19 * dVar5;
    auVar24._8_8_ = dVar7 * dVar19 - dVar1 * dVar6;
    auVar15._0_8_ = auVar14._0_8_ * dVar1 - auVar22._0_8_ * dVar7;
    auVar15._8_8_ = auVar14._8_8_ * dVar9 - auVar22._8_8_ * dVar8;
    dVar3 = auVar24._8_8_ + auVar24._8_8_;
    dVar4 = auVar15._0_8_ + auVar15._0_8_;
    uVar12 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar14 = blendpd(auVar24,auVar15,2);
    auVar16._8_4_ = auVar17._8_4_;
    auVar16._0_8_ = dVar9;
    auVar16._12_4_ = auVar17._12_4_;
    auVar20._8_4_ = SUB84(dVar4,0);
    auVar20._0_8_ = dVar3;
    auVar20._12_4_ = uVar12;
    auVar25._0_8_ = auVar14._0_8_ + auVar14._0_8_;
    auVar25._8_8_ = auVar14._8_8_ + auVar14._8_8_;
    auVar21._0_8_ = auVar20._8_8_ * auVar18._0_8_ - dVar19 * dVar3;
    auVar21._8_8_ = auVar25._0_8_ * dVar19 - dVar1 * dVar4;
    auVar17._8_4_ = SUB84(dVar4,0);
    auVar17._0_8_ = dVar3;
    auVar17._12_4_ = uVar12;
    auVar17 = blendpd(auVar17,auVar25,2);
    auVar18._0_8_ = auVar17._0_8_ * dVar1 - auVar22._0_8_ * auVar25._0_8_;
    auVar18._8_8_ = auVar17._8_8_ * dVar9 - auVar22._8_8_ * auVar25._8_8_;
    auVar17 = blendpd(auVar21,auVar18,2);
    dVar1 = (pTVar11->Translation).ZW.m128d_f64[0];
    dVar8 = (pTVar11->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         dVar9 * dVar3 + dVar5 + auVar21._8_8_ + (pTVar11->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         auVar16._8_8_ * dVar4 + dVar6 + auVar18._0_8_ + dVar8;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         dVar9 * auVar25._0_8_ + dVar7 + auVar17._0_8_ + dVar1;
    return __return_storage_ptr__;
  }
  dVar8 = (this->LookatTrackingSettings).RelativeOffset.field0_0x0._s_0.Y;
  dVar1 = (this->LookatTrackingSettings).RelativeOffset.field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (this->LookatTrackingSettings).RelativeOffset.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146ab7c60

UClass * __cdecl ACineCameraActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACineCameraActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CinematicCamera",L"CineCameraActor",
               &Z_Registration_Info_UClass_ACineCameraActor.InnerSingleton,
               StaticRegisterNativesACineCameraActor,0xae0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ACineCameraActor>,
               InternalVTableHelperCtorCaller<ACineCameraActor>,local_res8,ACameraActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACineCameraActor.InnerSingleton;
}

// NotifyCameraCut @ 146ab8140

void __thiscall ACineCameraActor::NotifyCameraCut(ACineCameraActor *this)

{
  this->bResetInterplation = '\x01';
  return;
}

// PostInitializeComponents @ 146ab81f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ACineCameraActor::PostInitializeComponents(ACineCameraActor *this)

{
  double dVar1;
  TRotator<double> *pTVar2;
  TRotator<double> local_28;
  
  AActor::PostInitializeComponents((AActor *)this);
  if ((USceneComponent *)this->_padding_ == (USceneComponent *)0x0) {
    pTVar2 = &local_28;
    local_28.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    local_28.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_28.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  }
  else {
    pTVar2 = USceneComponent::GetComponentRotation((USceneComponent *)this->_padding_,&local_28);
  }
  dVar1 = pTVar2->Yaw;
  (this->LookatTrackingSettings).LastLookatTrackingRotation.Pitch = pTVar2->Pitch;
  (this->LookatTrackingSettings).LastLookatTrackingRotation.Yaw = dVar1;
  (this->LookatTrackingSettings).LastLookatTrackingRotation.Roll = pTVar2->Roll;
  return;
}

// ShouldTickForTracking @ 146ab9320

bool __thiscall ACineCameraActor::ShouldTickForTracking(ACineCameraActor *this)

{
  if (((this->LookatTrackingSettings).bEnableLookAtTracking == 0) &&
     ((this->CineCameraComponent->FocusSettings).TrackingFocusSettings.bDrawDebugTrackingFocusPoint
      == 0)) {
    return false;
  }
  return true;
}

// ShouldTickIfViewportsOnly @ 146ab9370

bool __thiscall ACineCameraActor::ShouldTickIfViewportsOnly(ACineCameraActor *this)

{
  return true;
}

// StaticRegisterNativesACineCameraActor @ 146ab93f0

void __cdecl ACineCameraActor::StaticRegisterNativesACineCameraActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ACineCameraActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 146ab9700

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

void __thiscall ACineCameraActor::Tick(ACineCameraActor *this,float param_1)

{
  float fVar1;
  undefined1 uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  TVector<double>_u_0 *pTVar6;
  UWorld *pUVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70;
  TRotator<double> local_58;
  TRotator<double> local_40 [2];
  
  AActor::Tick((AActor *)this,param_1);
  if ((this->_padding_ != 0) &&
     (((bVar8 = (this->LookatTrackingSettings).bEnableLookAtTracking, bVar8 != 0 ||
       ((this->CineCameraComponent->FocusSettings).TrackingFocusSettings.
        bDrawDebugTrackingFocusPoint != 0)) && (bVar8 != 0)))) {
    GetLookatLocation(this,(TVector<double> *)&local_88._s_0);
    lVar3 = this->_padding_;
    local_70._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_70._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_a8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar3 != 0) {
      local_70._s_0.X = *(double *)(lVar3 + 0x210);
      local_70._s_0.Y = *(double *)(lVar3 + 0x218);
      local_a8._s_0.Z = *(double *)(lVar3 + 0x220);
    }
    local_70._s_0.X = local_88._s_0.X - local_70._s_0.X;
    local_70._s_0.Y = local_88._s_0.Y - local_70._s_0.Y;
    local_70._s_0.Z = local_88._s_0.Z - local_a8._s_0.Z;
    if (this->bResetInterplation == 0) {
      fVar1 = (this->LookatTrackingSettings).LookAtTrackingInterpSpeed;
      UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_70._s_0,&local_58);
      pTVar6 = (TVector<double>_u_0 *)
               FMath::RInterpTo(local_40,&(this->LookatTrackingSettings).LastLookatTrackingRotation,
                                &local_58,param_1,fVar1);
    }
    else {
      UE::Math::TVector<double>::ToOrientationRotator
                ((TVector<double> *)&local_70._s_0,(TRotator<double> *)&local_a8._s_0);
      pTVar6 = &local_a8;
    }
    dVar4 = (pTVar6->_s_0).X;
    dVar5 = (pTVar6->_s_0).Y;
    uVar9 = SUB84(*(double *)((longlong)pTVar6 + 0x10),0);
    uVar10 = (undefined4)((ulonglong)*(double *)((longlong)pTVar6 + 0x10) >> 0x20);
    if ((this->LookatTrackingSettings).bAllowRoll != 0) {
      if ((USceneComponent *)this->_padding_ == (USceneComponent *)0x0) {
        pTVar6 = &local_a8;
        local_a8._s_0.X = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        local_a8._s_0.Y = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        local_a8._s_0.Z = UE::Math::TRotator<double>::ZeroRotator.Roll;
      }
      else {
        pTVar6 = (TVector<double>_u_0 *)
                 USceneComponent::GetComponentRotation((USceneComponent *)this->_padding_,local_40);
      }
      uVar9 = SUB84(*(double *)((longlong)pTVar6 + 0x10),0);
      uVar10 = (undefined4)((ulonglong)*(double *)((longlong)pTVar6 + 0x10) >> 0x20);
    }
    local_a8._s_0.Z = (double)CONCAT44(uVar10,uVar9);
    local_a8._s_0.X = dVar4;
    local_a8._s_0.Y = dVar5;
    AActor::SetActorRotation((AActor *)this,(TRotator<double> *)&local_a8._s_0,None);
    (this->LookatTrackingSettings).LastLookatTrackingRotation.Pitch = dVar4;
    (this->LookatTrackingSettings).LastLookatTrackingRotation.Yaw = dVar5;
    (this->LookatTrackingSettings).LastLookatTrackingRotation.Roll = (double)CONCAT44(uVar10,uVar9);
    (this->LookatTrackingSettings).LastLookatTrackingRotationFrame = GFrameNumber;
    dVar4 = __real_4028000000000000;
    if ((this->LookatTrackingSettings).bDrawDebugLookAtTrackingPosition != '\0') {
      local_a8._s_0.Z = __real_4028000000000000;
      local_a8._s_0.X = ___xmm_40280000000000004028000000000000;
      local_a8._s_0.Y = _UNK_1513d9f08;
      pUVar7 = AActor::GetWorld((AActor *)this);
      fVar1 = __real_bf800000;
      DrawDebugSolidBox(pUVar7,(TVector<double> *)&local_88._s_0,(TVector<double> *)&local_a8._s_0,
                        &DebugLookatTrackingPointSolidColor,false,__real_bf800000,'\0');
      local_a8._s_0.X = ___xmm_40280000000000004028000000000000;
      local_a8._s_0.Y = _UNK_1513d9f08;
      local_a8._s_0.Z = dVar4;
      pUVar7 = AActor::GetWorld((AActor *)this);
      DrawDebugBox(pUVar7,(TVector<double> *)&local_88._s_0,(TVector<double> *)&local_a8._s_0,
                   &DebugLookatTrackingPointOutlineColor,false,fVar1,'\0',0.0);
    }
  }
  this->bResetInterplation = '\0';
  return;
}

// execGetCineCameraComponent @ 146aba500

void __cdecl
ACineCameraActor::execGetCineCameraComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x45].field_0x10;
  return;
}

