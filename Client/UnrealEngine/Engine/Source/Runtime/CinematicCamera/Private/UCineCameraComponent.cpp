// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CinematicCamera
// Functions: 66

// StaticClass @ 146ab24d0

UClass * __cdecl UCineCameraComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCineCameraComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CinematicCamera",L"CineCameraComponent",
               &Z_Registration_Info_UClass_UCineCameraComponent.InnerSingleton,
               StaticRegisterNativesUCineCameraComponent,0xbd0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UCineCameraComponent>,
               InternalVTableHelperCtorCaller<UCineCameraComponent>,local_res8,
               UCameraComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCineCameraComponent.InnerSingleton;
}

// UCineCameraComponent @ 146ab4f50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCineCameraComponent * __thiscall
UCineCameraComponent::UCineCameraComponent(UCineCameraComponent *this,FVTableHelper *param_1)

{
  UCameraComponent::UCameraComponent((UCameraComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->FilmbackSettings_DEPRECATED).SensorWidth = 24.89;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->FilmbackSettings_DEPRECATED).SensorHeight = 18.67;
  (this->FilmbackSettings_DEPRECATED).SensorHorizontalOffset = 0.0;
  (this->FilmbackSettings_DEPRECATED).SensorVerticalOffset = 0.0;
  (this->FilmbackSettings_DEPRECATED).SensorAspectRatio = 1.33;
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
  (this->CropSettings).AspectRatio = 0.0;
  (this->FilmbackPresets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilmbackPresets).ArrayNum = 0;
  (this->FilmbackPresets).ArrayMax = 0;
  (this->LensPresets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LensPresets).ArrayNum = 0;
  (this->LensPresets).ArrayMax = 0;
  (this->DefaultFilmbackPresetName_DEPRECATED).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultFilmbackPresetName_DEPRECATED).Data.ArrayNum = 0;
  (this->DefaultFilmbackPresetName_DEPRECATED).Data.ArrayMax = 0;
  (this->DefaultFilmbackPreset).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultFilmbackPreset).Data.ArrayNum = 0;
  (this->DefaultFilmbackPreset).Data.ArrayMax = 0;
  (this->DefaultLensPresetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultLensPresetName).Data.ArrayNum = 0;
  (this->DefaultLensPresetName).Data.ArrayMax = 0;
  return this;
}

// UCineCameraComponent @ 146ab5080

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCineCameraComponent * __thiscall
UCineCameraComponent::UCineCameraComponent(UCineCameraComponent *this)

{
  UObject *pUVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  FObjectInitializer *pFVar5;
  UClass *this_00;
  UCineCameraComponent *pUVar6;
  
  pFVar5 = FObjectInitializer::Get();
  UCameraComponent::UCameraComponent((UCameraComponent *)this,pFVar5);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->FilmbackSettings_DEPRECATED).SensorWidth = 24.89;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->FilmbackSettings_DEPRECATED).SensorHeight = 18.67;
  (this->FilmbackSettings_DEPRECATED).SensorHorizontalOffset = 0.0;
  (this->FilmbackSettings_DEPRECATED).SensorVerticalOffset = 0.0;
  (this->FilmbackSettings_DEPRECATED).SensorAspectRatio = 1.33;
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
  this->field_0x42 = this->field_0x42 | 2;
  this->field_0x9a = this->field_0x9a | 8;
  this->field_0x279 = this->field_0x279 | 1;
  (this->CropSettings).AspectRatio = 0.0;
  (this->FilmbackPresets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilmbackPresets).ArrayNum = 0;
  (this->FilmbackPresets).ArrayMax = 0;
  (this->LensPresets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LensPresets).ArrayNum = 0;
  (this->LensPresets).ArrayMax = 0;
  (this->DefaultFilmbackPresetName_DEPRECATED).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultFilmbackPresetName_DEPRECATED).Data.ArrayNum = 0;
  (this->DefaultFilmbackPresetName_DEPRECATED).Data.ArrayMax = 0;
  (this->DefaultFilmbackPreset).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultFilmbackPreset).Data.ArrayNum = 0;
  (this->DefaultFilmbackPreset).Data.ArrayMax = 0;
  (this->DefaultLensPresetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultLensPresetName).Data.ArrayNum = 0;
  (this->DefaultLensPresetName).Data.ArrayMax = 0;
  this_00 = UCineCameraSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CineCameraSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CinematicCamera\\Private\\CineCameraComponent.cpp"
                       ,0x31,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UCineCameraComponent *)(*pcVar2)();
      return pUVar6;
    }
  }
  SetFilmbackPresetByNameInternal(this,(FString *)&pUVar1[2].field_0x10,&this->Filmback);
  SetFilmbackPresetByNameInternal
            (this,(FString *)&pUVar1[2].field_0x10,&this->FilmbackSettings_DEPRECATED);
  SetLensPresetByNameInternal(this,(FString *)&pUVar1[1].field_0x10);
  SetCropPresetByNameInternal(this,(FString *)&pUVar1[3].field_0x8);
  this->CurrentAperture = *(float *)&pUVar1[1].field_0x24;
  this->CurrentFocalLength = *(float *)&pUVar1[1].field_0x20;
  this->ExposureMethod = Enabled;
  RecalcDerivedData(this);
  fVar3 = GNearClippingPlane;
  this->bOverride_CustomNearClippingPlane = 0;
  this->CustomNearClippingPlane = fVar3;
  return this;
}

// ~UCineCameraComponent @ 146ab5440

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UCineCameraComponent::~UCineCameraComponent(UCineCameraComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->DefaultLensPresetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultFilmbackPreset).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultFilmbackPresetName_DEPRECATED).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNamedLensPreset,int>
            ((FNamedLensPreset *)(this->LensPresets).AllocatorInstance.Data,
             (this->LensPresets).ArrayNum);
  pFVar1 = (this->LensPresets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNamedFilmbackPreset,int>
            ((FNamedFilmbackPreset *)(this->FilmbackPresets).AllocatorInstance.Data,
             (this->FilmbackPresets).ArrayNum);
  pFVar1 = (this->FilmbackPresets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->FocusSettings).TrackingFocusSettings.ActorToTrack.SoftObjectPtr.
                      field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UCameraComponent::~UCameraComponent((UCameraComponent *)this);
  return;
}

// GetCameraView @ 146ab66b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCineCameraComponent::GetCameraView
          (UCineCameraComponent *this,float param_1,FMinimalViewInfo *param_2)

{
  float fVar1;
  undefined4 in_XMM1_Db;
  
  RecalcDerivedData(this);
  UCameraComponent::GetCameraView((UCameraComponent *)this,param_1,param_2);
  (**(code **)(*(longlong *)this + 0x670))(this,CONCAT44(in_XMM1_Db,param_1),param_2);
  fVar1 = __real_bf800000;
  if (this->bOverride_CustomNearClippingPlane != 0) {
    fVar1 = this->CustomNearClippingPlane;
  }
  param_2->PerspectiveNearClipPlane = fVar1;
  fVar1 = GetHorizontalProjectionOffset(this);
  (param_2->OffCenterProjectionOffset).field0_0x0._s_0.X = (double)fVar1;
  fVar1 = GetVerticalProjectionOffset(this);
  (param_2->OffCenterProjectionOffset).field0_0x0._s_0.Y = (double)fVar1;
  this->bResetInterpolation = '\0';
  return;
}

// GetCropPresetName @ 146ab6930

FString * __thiscall
UCineCameraComponent::GetCropPresetName(UCineCameraComponent *this,FString *__return_storage_ptr__)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *this_00;
  FString *pFVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  this_00 = UCineCameraSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  uVar7 = 0;
  iVar1 = *(int *)&pUVar2[3].field_0x20;
  if (0 < (longlong)iVar1) {
    lVar9 = 0;
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < *(int *)&pUVar2[3].field_0x20) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      pFVar6 = (FString *)(*(longlong *)&pUVar2[3].field_0x18 + lVar8);
      if ((this->CropSettings).AspectRatio == *(float *)&pFVar6[1].Data.AllocatorInstance.Data) {
        ::FString::FString(__return_storage_ptr__,pFVar6);
        return __return_storage_ptr__;
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x18;
    } while (lVar9 < iVar1);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDefaultFilmbackPresetName @ 146ab6bb0

FString * __thiscall
UCineCameraComponent::GetDefaultFilmbackPresetName
          (UCineCameraComponent *this,FString *__return_storage_ptr__)

{
  UObject *pUVar1;
  UClass *this_00;
  
  this_00 = UCineCameraSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar1 != (UObject *)0x0) {
    ::FString::FString(__return_storage_ptr__,(FString *)&pUVar1[2].field_0x10);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDesiredFocusDistance @ 146ab6c20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall
UCineCameraComponent::GetDesiredFocusDistance(UCineCameraComponent *this,TVector<double> *param_1)

{
  ECameraFocusMethod EVar1;
  USceneComponent *pUVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  AActor *pAVar7;
  TTransform<double> *pTVar8;
  TVector<double> *pTVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0;
  TVector<double> local_98 [6];
  
  EVar1 = (this->FocusSettings).FocusMethod;
  fVar32 = 0.0;
  if (EVar1 == Manual) {
    fVar32 = (this->FocusSettings).ManualFocusDistance;
  }
  else if (EVar1 == Tracking) {
    pAVar7 = TSoftObjectPtr<AActor>::Get(&(this->FocusSettings).TrackingFocusSettings.ActorToTrack);
    if (pAVar7 == (AActor *)0x0) {
      local_c8._0_16_ =
           *(undefined1 (*) [16])
            &(this->FocusSettings).TrackingFocusSettings.RelativeOffset.field0_0x0;
      local_c8._s_0.Z = (this->FocusSettings).TrackingFocusSettings.RelativeOffset.field0_0x0._s_0.Z
      ;
    }
    else {
      pUVar2 = (pAVar7->RootComponent).field0_0x0.DebugPtr;
      if (pUVar2 == (USceneComponent *)0x0) {
        pTVar8 = &UE::Math::TTransform<double>::Identity;
      }
      else {
        pTVar8 = &pUVar2->ComponentToWorld;
      }
      auVar30 = *(undefined1 (*) [16])(pTVar8->Rotation).ZW.m128d_f64;
      auVar12 = *(undefined1 (*) [16])(pTVar8->Rotation).XY.m128d_f64;
      dVar24 = auVar12._8_8_;
      dVar6 = (this->FocusSettings).TrackingFocusSettings.RelativeOffset.field0_0x0._s_0.Z *
              (pTVar8->Scale3D).ZW.m128d_f64[0];
      dVar10 = (pTVar8->Scale3D).ZW.m128d_f64[1] * 0.0;
      dVar4 = (pTVar8->Scale3D).XY.m128d_f64[0] *
              (this->FocusSettings).TrackingFocusSettings.RelativeOffset.field0_0x0._s_0.X;
      dVar5 = (pTVar8->Scale3D).XY.m128d_f64[1] *
              (this->FocusSettings).TrackingFocusSettings.RelativeOffset.field0_0x0._s_0.Y;
      uVar26 = (undefined4)((ulonglong)dVar5 >> 0x20);
      dVar20 = auVar30._0_8_;
      auVar28._8_4_ = SUB84(dVar5,0);
      auVar28._0_8_ = dVar4;
      auVar28._12_4_ = uVar26;
      dVar3 = auVar30._8_8_;
      auVar15._8_4_ = SUB84(dVar5,0);
      auVar15._0_8_ = dVar4;
      auVar15._12_4_ = uVar26;
      auVar16._8_4_ = SUB84(dVar10,0);
      auVar16._0_8_ = dVar6;
      auVar16._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      auVar16 = blendpd(auVar15,auVar16,2);
      auVar25 = blendpd(auVar12,auVar30,2);
      auVar11._8_4_ = auVar30._0_4_;
      auVar11._0_8_ = dVar24;
      auVar11._12_4_ = auVar30._4_4_;
      auVar29._0_8_ = auVar28._8_8_ * auVar12._0_8_ - dVar24 * dVar4;
      auVar29._8_8_ = dVar6 * dVar24 - auVar11._8_8_ * dVar5;
      auVar17._0_8_ = auVar16._0_8_ * dVar20 - auVar25._0_8_ * dVar6;
      auVar17._8_8_ = auVar16._8_8_ * dVar3 - auVar25._8_8_ * dVar10;
      auVar30 = blendpd(auVar29,auVar17,2);
      auVar31._0_8_ = auVar30._0_8_ + auVar30._0_8_;
      auVar31._8_8_ = auVar30._8_8_ + auVar30._8_8_;
      dVar10 = auVar29._8_8_ + auVar29._8_8_;
      dVar14 = auVar17._0_8_ + auVar17._0_8_;
      uVar26 = SUB84(dVar14,0);
      uVar27 = (undefined4)((ulonglong)dVar14 >> 0x20);
      auVar21._8_4_ = uVar26;
      auVar21._0_8_ = dVar10;
      auVar21._12_4_ = uVar27;
      auVar30._8_4_ = uVar26;
      auVar30._0_8_ = dVar10;
      auVar30._12_4_ = uVar27;
      auVar18._8_4_ = uVar26;
      auVar18._0_8_ = dVar10;
      auVar18._12_4_ = uVar27;
      auVar16 = blendpd(auVar18,auVar31,2);
      auVar22._0_8_ = auVar21._8_8_ * auVar12._0_8_ - dVar10 * dVar24;
      auVar22._8_8_ = auVar31._0_8_ * dVar24 - auVar30._8_8_ * dVar20;
      auVar12._8_4_ = SUB84(auVar31._8_8_,0);
      auVar12._0_8_ = auVar31._0_8_;
      auVar12._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
      auVar19._0_8_ = auVar16._0_8_ * dVar20 - auVar31._0_8_ * auVar25._0_8_;
      auVar19._8_8_ = auVar16._8_8_ * dVar3 - auVar12._8_8_ * auVar25._8_8_;
      auVar25._8_4_ = SUB84(auVar22._8_8_,0);
      auVar25._0_8_ = auVar22._0_8_;
      auVar25._12_4_ = (int)((ulonglong)auVar22._8_8_ >> 0x20);
      auVar30 = blendpd(auVar22,auVar19,2);
      local_c8._s_0.Z =
           auVar31._0_8_ * dVar3 + dVar6 + auVar30._0_8_ + (pTVar8->Translation).ZW.m128d_f64[0];
      dVar14 = dVar14 * dVar3 + dVar5 + auVar19._0_8_ + (pTVar8->Translation).XY.m128d_f64[1];
      local_c8._8_4_ = SUB84(dVar14,0);
      local_c8._s_0.X =
           dVar10 * dVar3 + dVar4 + auVar25._8_8_ + (pTVar8->Translation).XY.m128d_f64[0];
      local_c8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    }
    dVar14 = local_c8._s_0.X - (param_1->field0_0x0)._s_0.X;
    dVar20 = local_c8._s_0.Y - (param_1->field0_0x0)._s_0.Y;
    dVar10 = local_c8._s_0.Z - (param_1->field0_0x0)._s_0.Z;
    pTVar9 = USceneComponent::GetForwardVector
                       ((USceneComponent *)this,(TVector<double> *)&local_b0._s_0);
    if (0.0 <= dVar20 * (pTVar9->field0_0x0)._s_0.Y + dVar14 * (pTVar9->field0_0x0)._s_0.X +
               dVar10 * (pTVar9->field0_0x0)._s_0.Z) {
      pTVar9 = USceneComponent::GetForwardVector((USceneComponent *)this,local_98);
      FMath::PointDistToLine
                ((TVector<double> *)&local_c8._s_0,pTVar9,param_1,(TVector<double> *)&local_b0._s_0)
      ;
      dVar20 = local_b0._s_0.Y - (param_1->field0_0x0)._s_0.Y;
      dVar10 = local_b0._s_0.Z - (param_1->field0_0x0)._s_0.Z;
      dVar14 = local_b0._s_0.X - (param_1->field0_0x0)._s_0.X;
      auVar13._0_8_ = dVar10 * dVar10;
      auVar13._8_8_ = 0;
      auVar23._0_8_ = dVar20 * dVar20 + dVar14 * dVar14 + auVar13._0_8_;
      auVar23._8_8_ = 0;
      auVar30 = sqrtpd(auVar13,auVar23);
      fVar32 = (float)auVar30._0_8_;
    }
  }
  return fVar32 + (this->FocusSettings).FocusOffset;
}

// GetFilmbackPresetName @ 146ab7000

FString * __thiscall
UCineCameraComponent::GetFilmbackPresetName
          (UCineCameraComponent *this,FString *__return_storage_ptr__)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *this_00;
  FString *pFVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  
  this_00 = UCineCameraSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  uVar8 = 0;
  iVar1 = *(int *)(pUVar2 + 3);
  if (0 < (longlong)iVar1) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < *(int *)(pUVar2 + 3)) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      pFVar6 = (FString *)(*(longlong *)&pUVar2[2].field_0x20 + lVar9);
      if (((((this->Filmback).SensorWidth == *(float *)&pFVar6[2].Data.AllocatorInstance.Data) &&
           ((this->Filmback).SensorHeight ==
            *(float *)((longlong)&pFVar6[2].Data.AllocatorInstance.Data + 4))) &&
          ((this->Filmback).SensorHorizontalOffset == (float)pFVar6[2].Data.ArrayNum)) &&
         ((this->Filmback).SensorVerticalOffset == (float)pFVar6[2].Data.ArrayMax)) {
        ::FString::FString(__return_storage_ptr__,pFVar6);
        return __return_storage_ptr__;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + 0x38;
    } while (lVar7 < iVar1);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetFilmbackPresets @ 146ab71f0

TArray<FNamedFilmbackPreset,TSizedDefaultAllocator<32>_> * __cdecl
UCineCameraComponent::GetFilmbackPresets(void)

{
  UClass *this;
  
  this = UCineCameraSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  return (TArray<FNamedFilmbackPreset,TSizedDefaultAllocator<32>_> *)
         &(this->ClassDefaultObject).field0_0x0.DebugPtr[2].field_0x20;
}

// GetFilmbackPresetsCopy @ 146ab7270

TArray<FNamedFilmbackPreset,TSizedDefaultAllocator<32>_> * __cdecl
UCineCameraComponent::GetFilmbackPresetsCopy
          (TArray<FNamedFilmbackPreset,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  UObject *pUVar2;
  FNamedFilmbackPreset *pFVar3;
  UClass *this;
  
  this = UCineCameraSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar2 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)(pUVar2 + 3);
  pFVar3 = *(FNamedFilmbackPreset **)&pUVar2[2].field_0x20;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x38,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FNamedFilmbackPreset,FNamedFilmbackPreset,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pFVar3,iVar1);
  return __return_storage_ptr__;
}

// GetHorizontalFieldOfView @ 146ab7320

float __thiscall UCineCameraComponent::GetHorizontalFieldOfView(UCineCameraComponent *this)

{
  float fVar1;
  
  fVar1 = GetHorizontalFieldOfViewInternal(this,true);
  return fVar1;
}

// GetHorizontalFieldOfViewInternal @ 146ab7330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
UCineCameraComponent::GetHorizontalFieldOfViewInternal(UCineCameraComponent *this,bool param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (this->CurrentFocalLength <= 0.0) {
    return 0.0;
  }
  fVar1 = (this->CropSettings).AspectRatio;
  fVar3 = (this->LensSettings).SqueezeFactor * (this->Filmback).SensorWidth;
  if ((0.0 < fVar1) && (fVar2 = fVar3 / (this->Filmback).SensorHeight, fVar1 < fVar2)) {
    fVar3 = (fVar1 / fVar2) * fVar3;
  }
  fVar1 = __real_3f800000;
  if (param_1) {
    fVar1 = (*(float *)&this->field_0x284 + *(float *)&this->field_0x280 + __real_40000000) *
            (*(float *)&this->field_0x27c + __real_3f800000) * __real_3f000000;
  }
  fVar1 = atanf(fVar1 * fVar3 * (__real_3f000000 / this->CurrentFocalLength));
  return fVar1 * ___real_42e52ee0;
}

// GetHorizontalProjectionOffset @ 146ab7400

float __thiscall UCineCameraComponent::GetHorizontalProjectionOffset(UCineCameraComponent *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->CropSettings).AspectRatio;
  fVar3 = (this->LensSettings).SqueezeFactor * (this->Filmback).SensorWidth;
  if ((0.0 < fVar1) && (fVar2 = fVar3 / (this->Filmback).SensorHeight, fVar1 < fVar2)) {
    fVar3 = (fVar1 / fVar2) * fVar3;
  }
  fVar1 = (this->Filmback).SensorHorizontalOffset;
  fVar2 = *(float *)&this->field_0x284 + *(float *)&this->field_0x280 + __real_40000000;
  return (fVar1 + fVar1) /
         ((*(float *)&this->field_0x27c + __real_3f800000) * __real_3f000000 * fVar2 * fVar3) +
         (*(float *)&this->field_0x284 - *(float *)&this->field_0x280) / fVar2;
}

// GetLensPresetName @ 146ab75e0

FString * __thiscall
UCineCameraComponent::GetLensPresetName(UCineCameraComponent *this,FString *__return_storage_ptr__)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *this_00;
  FString *pFVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  
  this_00 = UCineCameraSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  uVar8 = 0;
  iVar1 = *(int *)&pUVar2[2].field_0x8;
  if (0 < (longlong)iVar1) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < *(int *)&pUVar2[2].field_0x8) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      pFVar6 = (FString *)(*(longlong *)(pUVar2 + 2) + lVar9);
      if (((((this->LensSettings).MinFocalLength == *(float *)&pFVar6[1].Data.AllocatorInstance.Data
            ) && ((this->LensSettings).MaxFocalLength ==
                  *(float *)((longlong)&pFVar6[1].Data.AllocatorInstance.Data + 4))) &&
          ((this->LensSettings).MinFStop == (float)pFVar6[1].Data.ArrayNum)) &&
         ((((this->LensSettings).MaxFStop == (float)pFVar6[1].Data.ArrayMax &&
           ((this->LensSettings).MinimumFocusDistance ==
            *(float *)&pFVar6[2].Data.AllocatorInstance.Data)) &&
          (((this->LensSettings).SqueezeFactor ==
            *(float *)((longlong)&pFVar6[2].Data.AllocatorInstance.Data + 4) &&
           (pFVar6[2].Data.ArrayNum == (this->LensSettings).DiaphragmBladeCount)))))) {
        ::FString::FString(__return_storage_ptr__,pFVar6);
        return __return_storage_ptr__;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + 0x30;
    } while (lVar7 < iVar1);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetLensPresets @ 146ab7800

TArray<FNamedLensPreset,TSizedDefaultAllocator<32>_> * __cdecl
UCineCameraComponent::GetLensPresets(void)

{
  UClass *this;
  
  this = UCineCameraSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  return (TArray<FNamedLensPreset,TSizedDefaultAllocator<32>_> *)
         ((this->ClassDefaultObject).field0_0x0.DebugPtr + 2);
}

// GetLensPresetsCopy @ 146ab7880

TArray<FNamedLensPreset,TSizedDefaultAllocator<32>_> * __cdecl
UCineCameraComponent::GetLensPresetsCopy
          (TArray<FNamedLensPreset,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  UObject *pUVar2;
  FNamedLensPreset *pFVar3;
  UClass *this;
  
  this = UCineCameraSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar2 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)&pUVar2[2].field_0x8;
  pFVar3 = *(FNamedLensPreset **)(pUVar2 + 2);
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FNamedLensPreset,FNamedLensPreset,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pFVar3,iVar1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146ab7d20

UClass * __cdecl UCineCameraComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCineCameraComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CinematicCamera",L"CineCameraComponent",
               &Z_Registration_Info_UClass_UCineCameraComponent.InnerSingleton,
               StaticRegisterNativesUCineCameraComponent,0xbd0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UCineCameraComponent>,
               InternalVTableHelperCtorCaller<UCineCameraComponent>,local_res8,
               UCameraComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCineCameraComponent.InnerSingleton;
}

// GetVerticalFieldOfView @ 146ab7ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall UCineCameraComponent::GetVerticalFieldOfView(UCineCameraComponent *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = 0.0;
  if (0.0 < this->CurrentFocalLength) {
    fVar1 = (this->CropSettings).AspectRatio;
    fVar3 = (this->Filmback).SensorHeight;
    if ((0.0 < fVar1) &&
       (fVar2 = ((this->LensSettings).SqueezeFactor * (this->Filmback).SensorWidth) / fVar3,
       fVar2 < fVar1)) {
      fVar3 = (fVar2 / fVar1) * fVar3;
    }
    fVar1 = atanf((*(float *)&this->field_0x27c + __real_3f800000) *
                  (__real_3e800000 / this->CurrentFocalLength) *
                  (*(float *)&this->field_0x28c + *(float *)&this->field_0x288 + __real_40000000) *
                  fVar3);
    fVar1 = fVar1 * ___real_42e52ee0;
  }
  return fVar1;
}

// GetVerticalFieldOfViewInternal @ 146ab7f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
UCineCameraComponent::GetVerticalFieldOfViewInternal(UCineCameraComponent *this,bool param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = 0.0;
  if (0.0 < this->CurrentFocalLength) {
    fVar1 = (this->CropSettings).AspectRatio;
    fVar3 = (this->Filmback).SensorHeight;
    if ((0.0 < fVar1) &&
       (fVar2 = ((this->LensSettings).SqueezeFactor * (this->Filmback).SensorWidth) / fVar3,
       fVar2 < fVar1)) {
      fVar3 = (fVar2 / fVar1) * fVar3;
    }
    fVar1 = __real_3f800000;
    if (param_1) {
      fVar1 = (*(float *)&this->field_0x28c + *(float *)&this->field_0x288 + __real_40000000) *
              (*(float *)&this->field_0x27c + __real_3f800000) * __real_3f000000;
    }
    fVar1 = atanf(fVar1 * fVar3 * (__real_3f000000 / this->CurrentFocalLength));
    fVar1 = fVar1 * ___real_42e52ee0;
  }
  return fVar1;
}

// GetVerticalProjectionOffset @ 146ab8010

float __thiscall UCineCameraComponent::GetVerticalProjectionOffset(UCineCameraComponent *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->CropSettings).AspectRatio;
  fVar3 = (this->Filmback).SensorHeight;
  if ((0.0 < fVar1) &&
     (fVar2 = ((this->LensSettings).SqueezeFactor * (this->Filmback).SensorWidth) / fVar3,
     fVar2 < fVar1)) {
    fVar3 = (fVar2 / fVar1) * fVar3;
  }
  fVar1 = (this->Filmback).SensorVerticalOffset;
  fVar2 = *(float *)&this->field_0x28c + *(float *)&this->field_0x288 + __real_40000000;
  return (fVar1 + fVar1) /
         ((*(float *)&this->field_0x27c + __real_3f800000) * __real_3f000000 * fVar2 * fVar3) +
         (*(float *)&this->field_0x288 - *(float *)&this->field_0x28c) / fVar2;
}

// GetWorldToMetersScale @ 146ab80b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall UCineCameraComponent::GetWorldToMetersScale(UCineCameraComponent *this)

{
  UWorld *this_00;
  AWorldSettings *pAVar1;
  
  this_00 = *(UWorld **)&this->field_0xb0;
  if ((this_00 == (UWorld *)0x0) &&
     (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     this_00 == (UWorld *)0x0)) {
    return __real_42c80000;
  }
  pAVar1 = UWorld::GetWorldSettings(this_00,false,true);
  if (pAVar1 == (AWorldSettings *)0x0) {
    return __real_42c80000;
  }
  return pAVar1->WorldToMeters;
}

// NotifyCameraCut @ 146ab8150

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UCineCameraComponent::NotifyCameraCut(UCineCameraComponent *this)

{
  UCameraComponent::NotifyCameraCut((UCameraComponent *)this);
  this->bResetInterpolation = '\x01';
  return;
}

// OnRegister @ 146ab8180

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCineCameraComponent::OnRegister(UCineCameraComponent *this)

{
  char cVar1;
  UWorld *pUVar2;
  ULevel *pUVar3;
  FLevelCollection *pFVar4;
  bool bVar5;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId846,"USceneComponent::OnRegister",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
               ,0x34e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId846);
  }
  pFVar4 = (FLevelCollection *)0x0;
  if ((*(longlong *)&this->field_0xd0 != 0) &&
     (cVar1 = (**(code **)(*(longlong *)this + 0x508))
                        (this,*(longlong *)&this->field_0xd0,
                         &FAttachmentTransformRules::KeepRelativeTransform,
                         *(undefined8 *)&this->field_0xd8), cVar1 == '\0')) {
    *(undefined8 *)&this->field_0xd0 = 0;
    this->field_0x1a8 = this->field_0x1a8 & 0x3f;
    this->field_0x1a9 = this->field_0x1a9 & 0xfc;
    *(undefined8 *)&this->field_0xd8 = 0;
  }
  if ((*(longlong *)&this->field_0xb0 != 0) ||
     (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar2 != (UWorld *)0x0)
     ) {
    pUVar3 = UActorComponent::GetComponentLevel((UActorComponent *)this);
    if (pUVar3 != (ULevel *)0x0) {
      pFVar4 = pUVar3->CachedLevelCollection;
    }
    *(FLevelCollection **)&this->field_0xc0 = pFVar4;
  }
  UActorComponent::OnRegister((UActorComponent *)this);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PostInitProperties @ 146ab8190

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCineCameraComponent::PostInitProperties(UCineCameraComponent *this)

{
  UActorComponent::PostInitProperties((UActorComponent *)this);
  RecalcDerivedData(this);
  return;
}

// PostLoad @ 146ab8260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCineCameraComponent::PostLoad(UCineCameraComponent *this)

{
  UActorComponent::PostLoad((UActorComponent *)this);
  if (Disable < (this->FocusSettings).FocusMethod) {
    (this->FocusSettings).FocusMethod = DoNotOverride;
  }
  RecalcDerivedData(this);
  this->bResetInterpolation = '\x01';
  return;
}

// RecalcDerivedData @ 146ab82a0

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

void __thiscall UCineCameraComponent::RecalcDerivedData(UCineCameraComponent *this)

{
  float *pfVar1;
  UWorld *this_00;
  AWorldSettings *pAVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = (this->LensSettings).MaxFocalLength;
  fVar3 = (this->LensSettings).MinFocalLength;
  this_00 = *(UWorld **)&this->field_0xb0;
  if (fVar5 <= fVar3) {
    fVar5 = fVar3;
  }
  (this->LensSettings).MaxFocalLength = fVar5;
  if (this->CurrentFocalLength <= fVar5) {
    fVar5 = this->CurrentFocalLength;
  }
  if (fVar5 <= fVar3) {
    fVar5 = fVar3;
  }
  this->CurrentFocalLength = fVar5;
  fVar5 = (this->LensSettings).MaxFStop;
  if (this->CurrentAperture <= fVar5) {
    fVar5 = this->CurrentAperture;
  }
  fVar3 = (this->LensSettings).MinFStop;
  if (fVar5 <= fVar3) {
    fVar5 = fVar3;
  }
  this->CurrentAperture = fVar5;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    fVar5 = this->CurrentFocalLength;
    fVar3 = __real_42c80000;
    if (this_00 == (UWorld *)0x0) goto LAB_146ab8348;
  }
  pAVar2 = UWorld::GetWorldSettings(this_00,false,true);
  fVar5 = this->CurrentFocalLength;
  fVar3 = __real_42c80000;
  if (pAVar2 != (AWorldSettings *)0x0) {
    fVar3 = pAVar2->WorldToMeters;
  }
LAB_146ab8348:
  pfVar1 = &(this->LensSettings).SqueezeFactor;
  fVar4 = fVar3 * (this->LensSettings).MinimumFocusDistance * __real_3a83126f;
  fVar3 = (this->FocusSettings).ManualFocusDistance;
  if (fVar4 <= fVar3) {
    fVar4 = fVar3;
  }
  (this->FocusSettings).ManualFocusDistance = fVar4;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  else {
    fVar3 = (this->CropSettings).AspectRatio;
    fVar4 = (this->Filmback).SensorWidth * *pfVar1;
    if ((0.0 < fVar3) && (fVar6 = fVar4 / (this->Filmback).SensorHeight, fVar3 < fVar6)) {
      fVar4 = (fVar3 / fVar6) * fVar4;
    }
    fVar5 = atanf((__real_3f000000 / fVar5) * fVar4);
    fVar5 = fVar5 * ___real_42e52ee0;
  }
  *(float *)&this->field_0x250 = fVar5;
  fVar5 = (this->Filmback).SensorHeight;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = (this->Filmback).SensorWidth / fVar5;
  }
  (this->Filmback).SensorAspectRatio = fVar5;
  fVar3 = (this->CropSettings).AspectRatio;
  if (fVar3 <= 0.0) {
    *(float *)&this->field_0x274 = fVar5 * *pfVar1;
    return;
  }
  *(float *)&this->field_0x274 = fVar3;
  return;
}

// Serialize @ 146ab84f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCineCameraComponent::Serialize(UCineCameraComponent *this,FArchive *param_1)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  TArray<FNamedFilmbackPreset,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FCineCameraObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  USceneComponent::Serialize((USceneComponent *)this,param_1);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar8 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID),
     iVar8 < 0x1c)) {
    iVar8 = FArchiveState::CustomVer((FArchiveState *)param_1,&FCineCameraObjectVersion::GUID);
    if ((iVar8 == 1) &&
       (pUVar11 = UObject::GetArchetype((UObject *)this), pUVar11 != (UObject *)0x0)) {
      pUVar12 = StaticClass();
      iVar8 = (int)pUVar12->_padding_;
      if ((iVar8 <= *(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar12->_padding_)) {
        pTVar13 = UCineCameraSettings::GetFilmbackPresets();
        fVar1 = __real_3faa3d71;
        uVar16 = 0;
        iVar8 = pTVar13->ArrayNum;
        if (0 < iVar8) {
          lVar15 = 0;
          lVar14 = 0;
          do {
            uVar9 = 0;
            if ((int)uVar16 < pTVar13->ArrayNum) {
              uVar9 = ~uVar16 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar2 = (pTVar13->AllocatorInstance).Data;
            if (((((this->FilmbackSettings_DEPRECATED).SensorWidth ==
                   *(float *)(pFVar2 + lVar14 + 0x20)) &&
                 ((this->FilmbackSettings_DEPRECATED).SensorHeight ==
                  *(float *)(pFVar2 + lVar14 + 0x24))) &&
                ((this->FilmbackSettings_DEPRECATED).SensorHorizontalOffset ==
                 *(float *)(pFVar2 + lVar14 + 0x28))) &&
               (((this->FilmbackSettings_DEPRECATED).SensorVerticalOffset ==
                 *(float *)(pFVar2 + lVar14 + 0x2c) &&
                (fVar1 == (this->FilmbackSettings_DEPRECATED).SensorAspectRatio)))) {
              iVar10 = *(int *)(pFVar2 + lVar14 + 8);
              if (iVar10 == *(int *)&pUVar11[0x4a].field_0x8) {
                if (iVar10 < 2) {
                  return;
                }
                iVar10 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)(pFVar2 + lVar14),*(wchar_t **)(pUVar11 + 0x4a));
                bVar7 = iVar10 == 0;
              }
              else {
                bVar7 = iVar10 + *(int *)&pUVar11[0x4a].field_0x8 == 1;
              }
              if (bVar7) {
                return;
              }
            }
            uVar16 = uVar16 + 1;
            lVar15 = lVar15 + 1;
            lVar14 = lVar14 + 0x38;
          } while (lVar15 < iVar8);
        }
      }
    }
    fVar4 = (this->FilmbackSettings_DEPRECATED).SensorHeight;
    fVar5 = (this->FilmbackSettings_DEPRECATED).SensorHorizontalOffset;
    fVar6 = (this->FilmbackSettings_DEPRECATED).SensorVerticalOffset;
    fVar1 = (this->FilmbackSettings_DEPRECATED).SensorAspectRatio;
    (this->Filmback).SensorWidth = (this->FilmbackSettings_DEPRECATED).SensorWidth;
    (this->Filmback).SensorHeight = fVar4;
    (this->Filmback).SensorHorizontalOffset = fVar5;
    (this->Filmback).SensorVerticalOffset = fVar6;
    (this->Filmback).SensorAspectRatio = fVar1;
  }
  return;
}

// Serialize @ 146ab8710

void __thiscall
UCineCameraComponent::Serialize(UCineCameraComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetCropPresetByName @ 146ab8740

void __thiscall
UCineCameraComponent::SetCropPresetByName(UCineCameraComponent *this,FString *param_1)

{
  SetCropPresetByNameInternal(this,param_1);
  RecalcDerivedData(this);
  return;
}

// SetCropPresetByNameInternal @ 146ab8770

void __thiscall
UCineCameraComponent::SetCropPresetByNameInternal(UCineCameraComponent *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  UObject *pUVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *this_00;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  this_00 = UCineCameraSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar3 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  uVar9 = 0;
  iVar1 = *(int *)&pUVar3[3].field_0x20;
  if (0 < (longlong)iVar1) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < *(int *)&pUVar3[3].field_0x20) {
        uVar7 = ~uVar9 >> 0x1f;
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
      lVar4 = *(longlong *)&pUVar3[3].field_0x18;
      iVar8 = (param_1->Data).ArrayNum;
      iVar2 = *(int *)(lVar4 + 8 + lVar11);
      if (iVar2 == iVar8) {
        if (iVar2 < 2) goto LAB_146ab8867;
        iVar8 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(lVar4 + lVar11),
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar6 = iVar8 == 0;
      }
      else {
        bVar6 = iVar2 + iVar8 == 1;
      }
      if (bVar6) {
LAB_146ab8867:
        (this->CropSettings).AspectRatio = *(float *)(lVar4 + 0x10 + lVar11);
        return;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0x18;
    } while (lVar10 < iVar1);
  }
  return;
}

// SetCropSettings @ 146ab8960

void __thiscall
UCineCameraComponent::SetCropSettings(UCineCameraComponent *this,FPlateCropSettings *param_1)

{
  (this->CropSettings).AspectRatio = param_1->AspectRatio;
  RecalcDerivedData(this);
  return;
}

// SetCurrentAperture @ 146ab89b0

void __thiscall UCineCameraComponent::SetCurrentAperture(UCineCameraComponent *this,float param_1)

{
  this->CurrentAperture = param_1;
  RecalcDerivedData(this);
  return;
}

// SetCurrentFocalLength @ 146ab8a00

void __thiscall
UCineCameraComponent::SetCurrentFocalLength(UCineCameraComponent *this,float param_1)

{
  this->CurrentFocalLength = param_1;
  RecalcDerivedData(this);
  return;
}

// SetCustomNearClippingPlane @ 146ab8a20

void __thiscall
UCineCameraComponent::SetCustomNearClippingPlane(UCineCameraComponent *this,float param_1)

{
  this->CustomNearClippingPlane = param_1;
  return;
}

// SetFieldOfView @ 146ab8bc0

void __thiscall UCineCameraComponent::SetFieldOfView(UCineCameraComponent *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (this->CropSettings).AspectRatio;
  fVar3 = (this->LensSettings).SqueezeFactor * (this->Filmback).SensorWidth;
  *(float *)&this->field_0x250 = param_1;
  if ((0.0 < fVar2) && (fVar1 = fVar3 / (this->Filmback).SensorHeight, fVar2 < fVar1)) {
    fVar3 = (fVar2 / fVar1) * fVar3;
  }
  fVar3 = fVar3 * __real_3f000000;
  fVar2 = tanf(param_1 * __real_3c0efa35);
  this->CurrentFocalLength = fVar3 / fVar2;
  return;
}

// SetFilmback @ 146ab8c50

void __thiscall
UCineCameraComponent::SetFilmback(UCineCameraComponent *this,FCameraFilmbackSettings *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1->SensorHeight;
  fVar2 = param_1->SensorHorizontalOffset;
  fVar3 = param_1->SensorVerticalOffset;
  (this->Filmback).SensorWidth = param_1->SensorWidth;
  (this->Filmback).SensorHeight = fVar1;
  (this->Filmback).SensorHorizontalOffset = fVar2;
  (this->Filmback).SensorVerticalOffset = fVar3;
  (this->Filmback).SensorAspectRatio = param_1->SensorAspectRatio;
  RecalcDerivedData(this);
  return;
}

// SetFilmbackPresetByName @ 146ab8c70

void __thiscall
UCineCameraComponent::SetFilmbackPresetByName(UCineCameraComponent *this,FString *param_1)

{
  SetFilmbackPresetByNameInternal(this,param_1,&this->Filmback);
  RecalcDerivedData(this);
  return;
}

// SetFilmbackPresetByNameInternal @ 146ab8ca0

void __thiscall
UCineCameraComponent::SetFilmbackPresetByNameInternal
          (UCineCameraComponent *this,FString *param_1,FCameraFilmbackSettings *param_2)

{
  int iVar1;
  int iVar2;
  UObject *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UClass *this_00;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  
  this_00 = UCineCameraSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar3 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  uVar10 = 0;
  iVar1 = *(int *)(pUVar3 + 3);
  if (0 < (longlong)iVar1) {
    lVar12 = 0;
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < *(int *)(pUVar3 + 3)) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = (param_1->Data).ArrayNum;
      puVar13 = (undefined8 *)(*(longlong *)&pUVar3[2].field_0x20 + lVar11);
      iVar2 = *(int *)(puVar13 + 1);
      if (iVar2 == iVar9) {
        if (iVar2 < 2) goto LAB_146ab8d91;
        iVar9 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)*puVar13,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar7 = iVar9 == 0;
      }
      else {
        bVar7 = iVar2 + iVar9 == 1;
      }
      if (bVar7) {
LAB_146ab8d91:
        uVar5 = puVar13[4];
        uVar6 = puVar13[5];
        param_2->SensorWidth = (float)(int)uVar5;
        param_2->SensorHeight = (float)(int)((ulonglong)uVar5 >> 0x20);
        param_2->SensorHorizontalOffset = (float)(int)uVar6;
        param_2->SensorVerticalOffset = (float)(int)((ulonglong)uVar6 >> 0x20);
        param_2->SensorAspectRatio = *(float *)(puVar13 + 6);
        return;
      }
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x38;
    } while (lVar12 < iVar1);
  }
  return;
}

// SetFocusSettings @ 146ab8eb0

void __thiscall
UCineCameraComponent::SetFocusSettings(UCineCameraComponent *this,FCameraFocusSettings *param_1)

{
  FCameraFocusSettings::operator=(&this->FocusSettings,param_1);
  RecalcDerivedData(this);
  return;
}

// SetLensPresetByName @ 146ab8ee0

void __thiscall
UCineCameraComponent::SetLensPresetByName(UCineCameraComponent *this,FString *param_1)

{
  SetLensPresetByNameInternal(this,param_1);
  RecalcDerivedData(this);
  return;
}

// SetLensPresetByNameInternal @ 146ab8f10

void __thiscall
UCineCameraComponent::SetLensPresetByNameInternal(UCineCameraComponent *this,FString *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  UObject *pUVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UClass *this_00;
  uint uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  
  this_00 = UCineCameraSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar4 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  uVar10 = 0;
  iVar2 = *(int *)&pUVar4[2].field_0x8;
  if (0 < (longlong)iVar2) {
    lVar11 = 0;
    lVar13 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < *(int *)&pUVar4[2].field_0x8) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (param_1->Data).ArrayNum;
      puVar12 = (undefined8 *)(*(longlong *)(pUVar4 + 2) + lVar13);
      iVar3 = *(int *)(puVar12 + 1);
      if (iVar3 == iVar9) {
        if (iVar3 < 2) goto LAB_146ab9001;
        iVar9 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)*puVar12,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar7 = iVar9 == 0;
      }
      else {
        bVar7 = iVar3 + iVar9 == 1;
      }
      if (bVar7) {
LAB_146ab9001:
        uVar1 = puVar12[2];
        uVar6 = puVar12[3];
        (this->LensSettings).MinFocalLength = (float)(int)uVar1;
        (this->LensSettings).MaxFocalLength = (float)(int)((ulonglong)uVar1 >> 0x20);
        (this->LensSettings).MinFStop = (float)(int)uVar6;
        (this->LensSettings).MaxFStop = (float)(int)((ulonglong)uVar6 >> 0x20);
        uVar1 = puVar12[4];
        (this->LensSettings).MinimumFocusDistance = (float)(int)uVar1;
        (this->LensSettings).SqueezeFactor = (float)(int)((ulonglong)uVar1 >> 0x20);
        (this->LensSettings).DiaphragmBladeCount = *(int *)(puVar12 + 5);
        return;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 1;
      lVar13 = lVar13 + 0x30;
    } while (lVar11 < iVar2);
  }
  return;
}

// SetLensSettings @ 146ab9100

void __thiscall
UCineCameraComponent::SetLensSettings(UCineCameraComponent *this,FCameraLensSettings *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1->MaxFocalLength;
  fVar2 = param_1->MinFStop;
  fVar3 = param_1->MaxFStop;
  (this->LensSettings).MinFocalLength = param_1->MinFocalLength;
  (this->LensSettings).MaxFocalLength = fVar1;
  (this->LensSettings).MinFStop = fVar2;
  (this->LensSettings).MaxFStop = fVar3;
  fVar1 = param_1->SqueezeFactor;
  (this->LensSettings).MinimumFocusDistance = param_1->MinimumFocusDistance;
  (this->LensSettings).SqueezeFactor = fVar1;
  (this->LensSettings).DiaphragmBladeCount = param_1->DiaphragmBladeCount;
  RecalcDerivedData(this);
  return;
}

// StaticRegisterNativesUCineCameraComponent @ 146ab9430

void __cdecl UCineCameraComponent::StaticRegisterNativesUCineCameraComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x14;
  local_18.DataPtr = Z_Construct_UClass_UCineCameraComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 146ab9990

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
UCineCameraComponent::TickComponent
          (UCineCameraComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  USceneComponent *pUVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  AActor *pAVar11;
  TTransform<double> *pTVar12;
  UWorld *pUVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90 [5];
  
  if ((this->FocusSettings).TrackingFocusSettings.bDrawDebugTrackingFocusPoint != 0) {
    pAVar11 = TSoftObjectPtr<AActor>::Get(&(this->FocusSettings).TrackingFocusSettings.ActorToTrack)
    ;
    dVar10 = __real_4028000000000000;
    if (pAVar11 == (AActor *)0x0) {
      local_a8._0_16_ =
           *(undefined1 (*) [16])
            &(this->FocusSettings).TrackingFocusSettings.RelativeOffset.field0_0x0;
      local_a8._s_0.Z = (this->FocusSettings).TrackingFocusSettings.RelativeOffset.field0_0x0._s_0.Z
      ;
    }
    else {
      pUVar1 = (pAVar11->RootComponent).field0_0x0.DebugPtr;
      if (pUVar1 == (USceneComponent *)0x0) {
        pTVar12 = &UE::Math::TTransform<double>::Identity;
      }
      else {
        pTVar12 = &pUVar1->ComponentToWorld;
      }
      auVar29 = *(undefined1 (*) [16])(pTVar12->Rotation).ZW.m128d_f64;
      auVar14 = *(undefined1 (*) [16])(pTVar12->Rotation).XY.m128d_f64;
      dVar23 = auVar14._8_8_;
      dVar5 = (this->FocusSettings).TrackingFocusSettings.RelativeOffset.field0_0x0._s_0.X *
              (pTVar12->Scale3D).XY.m128d_f64[0];
      dVar6 = (this->FocusSettings).TrackingFocusSettings.RelativeOffset.field0_0x0._s_0.Y *
              (pTVar12->Scale3D).XY.m128d_f64[1];
      uVar25 = (undefined4)((ulonglong)dVar6 >> 0x20);
      dVar7 = (this->FocusSettings).TrackingFocusSettings.RelativeOffset.field0_0x0._s_0.Z *
              (pTVar12->Scale3D).ZW.m128d_f64[0];
      dVar8 = (pTVar12->Scale3D).ZW.m128d_f64[1] * 0.0;
      dVar3 = auVar29._0_8_;
      auVar27._8_4_ = SUB84(dVar6,0);
      auVar27._0_8_ = dVar5;
      auVar27._12_4_ = uVar25;
      auVar16._8_4_ = SUB84(dVar6,0);
      auVar16._0_8_ = dVar5;
      auVar16._12_4_ = uVar25;
      auVar17._8_4_ = SUB84(dVar8,0);
      auVar17._0_8_ = dVar7;
      auVar17._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar17 = blendpd(auVar16,auVar17,2);
      dVar4 = auVar29._8_8_;
      auVar24._8_4_ = auVar29._0_4_;
      auVar24._0_8_ = dVar23;
      auVar24._12_4_ = auVar29._4_4_;
      auVar28._0_8_ = auVar27._8_8_ * auVar14._0_8_ - dVar23 * dVar5;
      auVar28._8_8_ = dVar7 * dVar23 - auVar24._8_8_ * dVar6;
      auVar24 = blendpd(auVar14,auVar29,2);
      auVar18._0_8_ = auVar17._0_8_ * dVar3 - auVar24._0_8_ * dVar7;
      auVar18._8_8_ = auVar17._8_8_ * dVar4 - auVar24._8_8_ * dVar8;
      auVar29 = blendpd(auVar28,auVar18,2);
      auVar30._0_8_ = auVar29._0_8_ + auVar29._0_8_;
      auVar30._8_8_ = auVar29._8_8_ + auVar29._8_8_;
      dVar8 = auVar28._8_8_ + auVar28._8_8_;
      dVar2 = auVar18._0_8_ + auVar18._0_8_;
      uVar25 = SUB84(dVar2,0);
      uVar26 = (undefined4)((ulonglong)dVar2 >> 0x20);
      auVar21._8_4_ = uVar25;
      auVar21._0_8_ = dVar8;
      auVar21._12_4_ = uVar26;
      auVar29._8_4_ = uVar25;
      auVar29._0_8_ = dVar8;
      auVar29._12_4_ = uVar26;
      auVar19._8_4_ = uVar25;
      auVar19._0_8_ = dVar8;
      auVar19._12_4_ = uVar26;
      auVar17 = blendpd(auVar19,auVar30,2);
      auVar22._0_8_ = auVar21._8_8_ * auVar14._0_8_ - dVar8 * dVar23;
      auVar22._8_8_ = auVar30._0_8_ * dVar23 - auVar29._8_8_ * dVar3;
      auVar14._8_4_ = SUB84(auVar30._8_8_,0);
      auVar14._0_8_ = auVar30._0_8_;
      auVar14._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
      auVar20._0_8_ = auVar17._0_8_ * dVar3 - auVar30._0_8_ * auVar24._0_8_;
      auVar20._8_8_ = auVar17._8_8_ * dVar4 - auVar14._8_8_ * auVar24._8_8_;
      auVar15._8_4_ = SUB84(auVar22._8_8_,0);
      auVar15._0_8_ = auVar22._0_8_;
      auVar15._12_4_ = (int)((ulonglong)auVar22._8_8_ >> 0x20);
      auVar29 = blendpd(auVar22,auVar20,2);
      local_a8._s_0.Z =
           auVar30._0_8_ * dVar4 + dVar7 + auVar29._0_8_ + (pTVar12->Translation).ZW.m128d_f64[0];
      dVar2 = dVar2 * dVar4 + dVar6 + auVar20._0_8_ + (pTVar12->Translation).XY.m128d_f64[1];
      local_a8._8_4_ = SUB84(dVar2,0);
      local_a8._0_8_ =
           dVar8 * dVar4 + dVar5 + auVar15._8_8_ + (pTVar12->Translation).XY.m128d_f64[0];
      local_a8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    }
    pUVar13 = *(UWorld **)&this->field_0xb0;
    local_90[0]._s_0.Z = __real_4028000000000000;
    local_90[0]._s_0.X = ___xmm_40280000000000004028000000000000;
    local_90[0]._s_0.Y = _UNK_1513d9f08;
    if (pUVar13 == (UWorld *)0x0) {
      pUVar13 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    fVar9 = __real_bf800000;
    DrawDebugSolidBox(pUVar13,(TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_90[0]._s_0
                      ,&DebugFocusPointSolidColor,false,__real_bf800000,'\0');
    pUVar13 = *(UWorld **)&this->field_0xb0;
    local_90[0]._s_0.Z = dVar10;
    local_90[0]._s_0.X = ___xmm_40280000000000004028000000000000;
    local_90[0]._s_0.Y = _UNK_1513d9f08;
    if (pUVar13 == (UWorld *)0x0) {
      pUVar13 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    DrawDebugBox(pUVar13,(TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_90[0]._s_0,
                 &DebugFocusPointOutlineColor,false,fVar9,'\0',0.0);
  }
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  return;
}

// UpdateCameraLens @ 146ab9c60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCineCameraComponent::UpdateCameraLens
          (UCineCameraComponent *this,float param_1,FMinimalViewInfo *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ECameraFocusMethod EVar3;
  byte bVar4;
  undefined1 uVar5;
  float fVar6;
  UWorld *this_00;
  AWorldSettings *pAVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((this->ExposureMethod == DoNotOverride) &&
     ((this->FocusSettings).FocusMethod == DoNotOverride)) {
    (param_2->PostProcessSettings).bOverride_DepthOfFieldFstop = '\0';
  }
  else {
    (param_2->PostProcessSettings).bOverride_DepthOfFieldFstop = '\x01';
    (param_2->PostProcessSettings).DepthOfFieldFstop = this->CurrentAperture;
  }
  EVar3 = (this->FocusSettings).FocusMethod;
  bVar4 = (param_2->PostProcessSettings).field_0x1a;
  if (EVar3 == DoNotOverride) {
    (param_2->PostProcessSettings).bOverride_DepthOfFieldSqueezeFactor = '\0';
    (param_2->PostProcessSettings).field_0x1a = bVar4 & 0x17;
    return;
  }
  if (EVar3 == Disable) {
    (param_2->PostProcessSettings).DepthOfFieldFocalDistance = 0.0;
    (param_2->PostProcessSettings).field_0x1a = bVar4 | 8;
    return;
  }
  fVar8 = *(float *)&this->field_0x300;
  (param_2->PostProcessSettings).field_0x1a = bVar4 | 0x20;
  param_2->PostProcessBlendWeight = fVar8;
  fVar8 = (this->LensSettings).MinFStop;
  (param_2->PostProcessSettings).field_0x1a = bVar4 | 0x60;
  (param_2->PostProcessSettings).DepthOfFieldMinFstop = fVar8;
  (param_2->PostProcessSettings).DepthOfFieldBladeCount = (this->LensSettings).DiaphragmBladeCount;
  fVar8 = GetDesiredFocusDistance(this,&param_2->Location);
  this_00 = *(UWorld **)&this->field_0xb0;
  this->CurrentFocusDistance = fVar8;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    fVar8 = this->CurrentFocusDistance;
    fVar9 = __real_42c80000;
    if (this_00 == (UWorld *)0x0) goto LAB_146ab9da8;
  }
  pAVar7 = UWorld::GetWorldSettings(this_00,false,true);
  fVar8 = this->CurrentFocusDistance;
  fVar9 = __real_42c80000;
  if (pAVar7 != (AWorldSettings *)0x0) {
    fVar9 = pAVar7->WorldToMeters;
  }
LAB_146ab9da8:
  fVar10 = __real_3f800000;
  fVar9 = fVar9 * (this->LensSettings).MinimumFocusDistance * __real_3a83126f;
  if (fVar9 <= fVar8) {
    fVar9 = fVar8;
  }
  this->CurrentFocusDistance = fVar9;
  if (((this->FocusSettings).bSmoothFocusChanges != 0) && (this->bResetInterpolation == 0)) {
    fVar8 = (this->FocusSettings).FocusSmoothingInterpSpeed;
    if ((0.0 < fVar8) &&
       (fVar11 = fVar9 - this->LastFocusDistance, __real_322bcc77 <= fVar11 * fVar11)) {
      fVar8 = fVar8 * param_1;
      if (fVar10 <= fVar8) {
        fVar8 = fVar10;
      }
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      fVar9 = fVar8 * fVar11 + this->LastFocusDistance;
    }
    this->CurrentFocusDistance = fVar9;
  }
  fVar6 = __real_40000000;
  this->LastFocusDistance = fVar9;
  (param_2->PostProcessSettings).bOverride_DepthOfFieldFocalDistance = '\x01';
  (param_2->PostProcessSettings).DepthOfFieldFocalDistance = this->CurrentFocusDistance;
  fVar8 = *(float *)&this->field_0x280;
  fVar9 = *(float *)&this->field_0x27c;
  fVar11 = *(float *)&this->field_0x284;
  puVar2 = &(param_2->PostProcessSettings).field_0x1a;
  (param_2->PostProcessSettings).bOverride_DepthOfFieldFocalDistance = '\x01';
  (param_2->PostProcessSettings).bOverride_DepthOfFieldSensorWidth = '\x01';
  (param_2->PostProcessSettings).DepthOfFieldSensorWidth =
       (fVar9 + fVar10) * __real_3f000000 * (fVar8 + fVar11 + fVar6) * (this->Filmback).SensorWidth;
  if (this->field_0x291 != '\0') {
    fVar10 = (*(float *)&this->field_0x280 + *(float *)&this->field_0x284 + fVar6) /
             (*(float *)&this->field_0x28c + *(float *)&this->field_0x288 + fVar6);
  }
  (param_2->PostProcessSettings).bOverride_DepthOfFieldSqueezeFactor = '\x01';
  fVar8 = (this->LensSettings).SqueezeFactor;
  (param_2->PostProcessSettings).bOverride_DepthOfFieldAspectRatioScalar = '\x01';
  (param_2->PostProcessSettings).DepthOfFieldAspectRatioScalar = fVar10;
  (param_2->PostProcessSettings).DepthOfFieldSqueezeFactor = fVar10 * fVar8;
  return;
}

// execGetCropPresetName @ 146aba790

void __cdecl
UCineCameraComponent::execGetCropPresetName(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UClass *this;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  uVar8 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = UCineCameraSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar2 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  iVar1 = *(int *)&pUVar2[3].field_0x20;
  uVar9 = uVar8;
  uVar10 = uVar8;
  if (0 < (longlong)iVar1) {
    do {
      uVar7 = (uint)uVar8;
      uVar6 = 0;
      if ((int)uVar7 < *(int *)&pUVar2[3].field_0x20) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)&pUVar2[3].field_0x18;
      if (*(float *)&param_1[0x48].field_0x8 == *(float *)(lVar3 + 0x10 + uVar10)) {
        local_38.Data = (FScriptContainerElement *)0x0;
        iVar1 = *(int *)(lVar3 + 8 + uVar10);
        _Src = *(void **)(lVar3 + uVar10);
        local_30 = CONCAT44(local_30._4_4_,iVar1);
        if (iVar1 == 0) {
          local_30 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar1,0,&local_38,iVar1,(int *)((longlong)&local_30 + 4));
          memcpy(local_38.Data,_Src,(longlong)iVar1 * 2);
        }
        goto LAB_146aba894;
      }
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar9 = uVar9 + 1;
      uVar10 = uVar10 + 0x18;
    } while ((longlong)uVar9 < (longlong)iVar1);
  }
  local_30 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
LAB_146aba894:
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
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// execGetDefaultFilmbackPresetName @ 146abaad0

void __cdecl
UCineCameraComponent::execGetDefaultFilmbackPresetName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UObject *pUVar2;
  void *_Src;
  UClass *this;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = UCineCameraSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar2 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  local_18.Data = (FScriptContainerElement *)0x0;
  if (pUVar2 == (UObject *)0x0) {
    local_10 = 0;
  }
  else {
    iVar1 = *(int *)&pUVar2[2].field_0x18;
    _Src = *(void **)&pUVar2[2].field_0x10;
    local_10 = CONCAT44(local_10._4_4_,iVar1);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
      memcpy(local_18.Data,_Src,(longlong)iVar1 * 2);
    }
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execGetFilmbackPresetName @ 146abae40

void __cdecl
UCineCameraComponent::execGetFilmbackPresetName(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UClass *this;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  uVar7 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = UCineCameraSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar2 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  iVar1 = *(int *)(pUVar2 + 3);
  uVar8 = uVar7;
  uVar10 = uVar7;
  if (0 < (longlong)iVar1) {
    do {
      uVar9 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar9 < *(int *)(pUVar2 + 3)) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)&pUVar2[2].field_0x20;
      if ((((*(float *)&param_1[0x44].field_0x14 == *(float *)(lVar3 + 0x20 + uVar7)) &&
           (*(float *)&param_1[0x44].field_0x18 == *(float *)(lVar3 + 0x24 + uVar7))) &&
          (*(float *)&param_1[0x44].field_0x1c == *(float *)(lVar3 + 0x28 + uVar7))) &&
         (*(float *)&param_1[0x44].field_0x20 == *(float *)(lVar3 + 0x2c + uVar7))) {
        local_38.Data = (FScriptContainerElement *)0x0;
        iVar1 = *(int *)(lVar3 + 8 + uVar7);
        _Src = *(void **)(lVar3 + uVar7);
        local_30 = CONCAT44(local_30._4_4_,iVar1);
        if (iVar1 == 0) {
          local_30 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar1,0,&local_38,iVar1,(int *)((longlong)&local_30 + 4));
          memcpy(local_38.Data,_Src,(longlong)iVar1 * 2);
        }
        goto LAB_146abaf6f;
      }
      uVar8 = uVar8 + 1;
      uVar7 = uVar7 + 0x38;
      uVar10 = (ulonglong)(uVar9 + 1);
    } while ((longlong)uVar8 < (longlong)iVar1);
  }
  local_30 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
LAB_146abaf6f:
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
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// execGetFilmbackPresetsCopy @ 146abb190

void __cdecl
UCineCameraComponent::execGetFilmbackPresetsCopy(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  FNamedFilmbackPreset *pFVar2;
  UClass *this;
  int iVar3;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = UCineCameraSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  local_18.Data = (FScriptContainerElement *)0x0;
  iVar3 = *(int *)(pUVar1 + 3);
  pFVar2 = *(FNamedFilmbackPreset **)&pUVar1[2].field_0x20;
  local_10 = CONCAT44(local_10._4_4_,iVar3);
  if (iVar3 == 0) {
    local_10 = 0;
    local_10._0_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar3,0,&local_18,iVar3,(int *)((longlong)&local_10 + 4));
    ConstructItems<FNamedFilmbackPreset,FNamedFilmbackPreset,int>(local_18.Data,pFVar2,iVar3);
  }
  iVar3 = (int)local_10;
  if (param_3 != &local_18) {
    DestructItems<FNamedFilmbackPreset,int>
              (*(FNamedFilmbackPreset **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    iVar3 = 0;
    *(int *)((longlong)param_3 + 8) = (int)local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FNamedFilmbackPreset,int>((FNamedFilmbackPreset *)local_18.Data,iVar3);
  if ((FNamedFilmbackPreset *)local_18.Data != (FNamedFilmbackPreset *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execGetHorizontalFieldOfView @ 146abb2b0

void __cdecl
UCineCameraComponent::execGetHorizontalFieldOfView(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetHorizontalFieldOfViewInternal((UCineCameraComponent *)param_1,true);
  *(float *)param_3 = fVar1;
  return;
}

// execGetHorizontalProjectionOffset @ 146abb2f0

void __cdecl
UCineCameraComponent::execGetHorizontalProjectionOffset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetHorizontalProjectionOffset((UCineCameraComponent *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetLensPresetName @ 146abb5b0

void __cdecl
UCineCameraComponent::execGetLensPresetName(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UClass *this;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  uVar7 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = UCineCameraSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar2 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  iVar1 = *(int *)&pUVar2[2].field_0x8;
  uVar8 = uVar7;
  uVar10 = uVar7;
  if (0 < (longlong)iVar1) {
    do {
      uVar9 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar9 < *(int *)&pUVar2[2].field_0x8) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)(pUVar2 + 2);
      if ((((*(float *)(param_1 + 0x45) == *(float *)(lVar3 + 0x10 + uVar7)) &&
           (*(float *)&param_1[0x45].field_0x4 == *(float *)(lVar3 + 0x14 + uVar7))) &&
          (*(float *)&param_1[0x45].field_0x8 == *(float *)(lVar3 + 0x18 + uVar7))) &&
         (((*(float *)&param_1[0x45].field_0xc == *(float *)(lVar3 + 0x1c + uVar7) &&
           (*(float *)&param_1[0x45].field_0x10 == *(float *)(lVar3 + 0x20 + uVar7))) &&
          ((*(float *)&param_1[0x45].field_0x14 == *(float *)(lVar3 + 0x24 + uVar7) &&
           (*(int *)(lVar3 + 0x28 + uVar7) == *(int *)&param_1[0x45].field_0x18)))))) {
        local_38.Data = (FScriptContainerElement *)0x0;
        iVar1 = *(int *)(lVar3 + 8 + uVar7);
        _Src = *(void **)(lVar3 + uVar7);
        local_30 = CONCAT44(local_30._4_4_,iVar1);
        if (iVar1 == 0) {
          local_30 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar1,0,&local_38,iVar1,(int *)((longlong)&local_30 + 4));
          memcpy(local_38.Data,_Src,(longlong)iVar1 * 2);
        }
        goto LAB_146abb707;
      }
      uVar8 = uVar8 + 1;
      uVar7 = uVar7 + 0x30;
      uVar10 = (ulonglong)(uVar9 + 1);
    } while ((longlong)uVar8 < (longlong)iVar1);
  }
  local_30 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
LAB_146abb707:
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
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// execGetLensPresetsCopy @ 146abb940

void __cdecl
UCineCameraComponent::execGetLensPresetsCopy(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  FNamedLensPreset *pFVar2;
  UClass *this;
  int iVar3;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = UCineCameraSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  local_18.Data = (FScriptContainerElement *)0x0;
  iVar3 = *(int *)&pUVar1[2].field_0x8;
  pFVar2 = *(FNamedLensPreset **)(pUVar1 + 2);
  local_10 = CONCAT44(local_10._4_4_,iVar3);
  if (iVar3 == 0) {
    local_10 = 0;
    local_10._0_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar3,0,&local_18,iVar3,(int *)((longlong)&local_10 + 4));
    ConstructItems<FNamedLensPreset,FNamedLensPreset,int>(local_18.Data,pFVar2,iVar3);
  }
  iVar3 = (int)local_10;
  if (param_3 != &local_18) {
    DestructItems<FNamedLensPreset,int>
              (*(FNamedLensPreset **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    iVar3 = 0;
    *(int *)((longlong)param_3 + 8) = (int)local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FNamedLensPreset,int>((FNamedLensPreset *)local_18.Data,iVar3);
  if ((FNamedLensPreset *)local_18.Data != (FNamedLensPreset *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execGetVerticalFieldOfView @ 146abba90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UCineCameraComponent::execGetVerticalFieldOfView(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (0.0 < *(float *)&param_1[0x48].field_0xc) {
    fVar3 = *(float *)&param_1[0x48].field_0x8;
    fVar2 = *(float *)&param_1[0x44].field_0x18;
    if ((0.0 < fVar3) &&
       (fVar1 = (*(float *)&param_1[0x45].field_0x14 * *(float *)&param_1[0x44].field_0x14) / fVar2,
       fVar1 < fVar3)) {
      fVar2 = (fVar1 / fVar3) * fVar2;
    }
    fVar3 = atanf((*(float *)&param_1[0xf].field_0x24 + __real_3f800000) *
                  (__real_3e800000 / *(float *)&param_1[0x48].field_0xc) *
                  (*(float *)&param_1[0x10].field_0xc + *(float *)&param_1[0x10].field_0x8 +
                  __real_40000000) * fVar2);
    *(float *)param_3 = fVar3 * ___real_42e52ee0;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetVerticalProjectionOffset @ 146abbb70

void __cdecl
UCineCameraComponent::execGetVerticalProjectionOffset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetVerticalProjectionOffset((UCineCameraComponent *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execSetCropPresetByName @ 146abbbb0

void __cdecl
UCineCameraComponent::execSetCropPresetByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetCropPresetByNameInternal((UCineCameraComponent *)param_1,&local_18);
  RecalcDerivedData((UCineCameraComponent *)param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCropSettings @ 146abbdb0

void __cdecl
UCineCameraComponent::execSetCropSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar *puVar5;
  uchar local_res8 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar5 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  param_1[0x48].field_0x8 = puVar5[0];
  param_1[0x48].field_0x9 = uVar2;
  param_1[0x48].field_0xa = uVar3;
  param_1[0x48].field_0xb = uVar4;
  RecalcDerivedData((UCineCameraComponent *)param_1);
  return;
}

// execSetCurrentAperture @ 146abbe60

void __cdecl
UCineCameraComponent::execSetCurrentAperture(UObject *param_1,FFrame *param_2,void *param_3)

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
  *(undefined4 *)&param_1[0x48].field_0x10 = local_res8[0];
  RecalcDerivedData((UCineCameraComponent *)param_1);
  return;
}

// execSetCurrentFocalLength @ 146abbef0

void __cdecl
UCineCameraComponent::execSetCurrentFocalLength(UObject *param_1,FFrame *param_2,void *param_3)

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
  *(undefined4 *)&param_1[0x48].field_0xc = local_res8[0];
  RecalcDerivedData((UCineCameraComponent *)param_1);
  return;
}

// execSetCustomNearClippingPlane @ 146abbf80

void __cdecl
UCineCameraComponent::execSetCustomNearClippingPlane(UObject *param_1,FFrame *param_2,void *param_3)

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
  *(undefined4 *)&param_1[0x48].field_0x20 = local_res8[0];
  return;
}

// execSetFilmback @ 146abc510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UCineCameraComponent::execSetFilmback(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar *puVar17;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  
  local_18 = 0x3faa3d71;
  local_28 = ___xmm_000000000000000041955c2941c71eb8;
  uStack_20 = _UNK_1513d9ee8;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  puVar17 = (uchar *)&local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar17[1];
  uVar3 = puVar17[2];
  uVar4 = puVar17[3];
  uVar5 = puVar17[4];
  uVar6 = puVar17[5];
  uVar7 = puVar17[6];
  uVar8 = puVar17[7];
  uVar9 = puVar17[8];
  uVar10 = puVar17[9];
  uVar11 = puVar17[10];
  uVar12 = puVar17[0xb];
  uVar13 = puVar17[0xc];
  uVar14 = puVar17[0xd];
  uVar15 = puVar17[0xe];
  uVar16 = puVar17[0xf];
  param_1[0x44].field_0x14 = puVar17[0];
  param_1[0x44].field_0x15 = uVar2;
  param_1[0x44].field_0x16 = uVar3;
  param_1[0x44].field_0x17 = uVar4;
  param_1[0x44].field_0x18 = uVar5;
  param_1[0x44].field_0x19 = uVar6;
  param_1[0x44].field_0x1a = uVar7;
  param_1[0x44].field_0x1b = uVar8;
  param_1[0x44].field_0x1c = uVar9;
  param_1[0x44].field_0x1d = uVar10;
  param_1[0x44].field_0x1e = uVar11;
  param_1[0x44].field_0x1f = uVar12;
  param_1[0x44].field_0x20 = uVar13;
  param_1[0x44].field_0x21 = uVar14;
  param_1[0x44].field_0x22 = uVar15;
  param_1[0x44].field_0x23 = uVar16;
  uVar2 = puVar17[0x11];
  uVar3 = puVar17[0x12];
  uVar4 = puVar17[0x13];
  param_1[0x44].field_0x24 = puVar17[0x10];
  param_1[0x44].field_0x25 = uVar2;
  param_1[0x44].field_0x26 = uVar3;
  param_1[0x44].field_0x27 = uVar4;
  RecalcDerivedData((UCineCameraComponent *)param_1);
  return;
}

// execSetFilmbackPresetByName @ 146abc5d0

void __cdecl
UCineCameraComponent::execSetFilmbackPresetByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetFilmbackPresetByNameInternal
            ((UCineCameraComponent *)param_1,&local_18,
             (FCameraFilmbackSettings *)&param_1[0x44].field_0x14);
  RecalcDerivedData((UCineCameraComponent *)param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetFocusSettings @ 146abc7e0

void __cdecl
UCineCameraComponent::execSetFocusSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FCameraFocusSettings *pFVar2;
  undefined1 local_68 [32];
  FUtf8String local_48;
  TVector<double>_u_0 local_38;
  byte local_20;
  byte local_18;
  undefined8 local_14;
  
  local_68[0] = Manual;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_68._12_4_ = 0;
  local_68._24_8_ = 0;
  local_68._16_8_ = 0;
  local_68._4_8_ = 0x47c35000;
  FUtf8String::Reset(&local_48,0);
  local_20 = local_20 & 0xfe;
  local_18 = local_18 & 0xfe;
  local_38._s_0.Z = 0.0;
  local_38._s_0.X = 0.0;
  local_38._s_0.Y = 0.0;
  local_14._0_4_ = 8.0;
  local_14._4_4_ = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  pFVar2 = (FCameraFocusSettings *)local_68;
  if ((FCameraFocusSettings *)param_2->MostRecentPropertyAddress != (FCameraFocusSettings *)0x0) {
    pFVar2 = (FCameraFocusSettings *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FCameraFocusSettings::operator=((FCameraFocusSettings *)&param_1[0x45].field_0x20,pFVar2);
  RecalcDerivedData((UCineCameraComponent *)param_1);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetLensPresetByName @ 146abc8f0

void __cdecl
UCineCameraComponent::execSetLensPresetByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetLensPresetByNameInternal((UCineCameraComponent *)param_1,&local_18);
  RecalcDerivedData((UCineCameraComponent *)param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetLensSettings @ 146abcaf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UCineCameraComponent::execSetLensSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar *puVar17;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  local_18 = 0x41700000;
  local_28 = ___xmm_40000000400000004248000042480000;
  uStack_20 = _UNK_1513d9ef8;
  uStack_14 = 0x3f800000;
  local_10 = 5;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  puVar17 = (uchar *)&local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar17[1];
  uVar3 = puVar17[2];
  uVar4 = puVar17[3];
  uVar5 = puVar17[4];
  uVar6 = puVar17[5];
  uVar7 = puVar17[6];
  uVar8 = puVar17[7];
  uVar9 = puVar17[8];
  uVar10 = puVar17[9];
  uVar11 = puVar17[10];
  uVar12 = puVar17[0xb];
  uVar13 = puVar17[0xc];
  uVar14 = puVar17[0xd];
  uVar15 = puVar17[0xe];
  uVar16 = puVar17[0xf];
  param_1[0x45].field_0x0 = puVar17[0];
  param_1[0x45].field_0x1 = uVar2;
  param_1[0x45].field_0x2 = uVar3;
  param_1[0x45].field_0x3 = uVar4;
  param_1[0x45].field_0x4 = uVar5;
  param_1[0x45].field_0x5 = uVar6;
  param_1[0x45].field_0x6 = uVar7;
  param_1[0x45].field_0x7 = uVar8;
  param_1[0x45].field_0x8 = uVar9;
  param_1[0x45].field_0x9 = uVar10;
  param_1[0x45].field_0xa = uVar11;
  param_1[0x45].field_0xb = uVar12;
  param_1[0x45].field_0xc = uVar13;
  param_1[0x45].field_0xd = uVar14;
  param_1[0x45].field_0xe = uVar15;
  param_1[0x45].field_0xf = uVar16;
  uVar2 = puVar17[0x11];
  uVar3 = puVar17[0x12];
  uVar4 = puVar17[0x13];
  uVar5 = puVar17[0x14];
  uVar6 = puVar17[0x15];
  uVar7 = puVar17[0x16];
  uVar8 = puVar17[0x17];
  param_1[0x45].field_0x10 = puVar17[0x10];
  param_1[0x45].field_0x11 = uVar2;
  param_1[0x45].field_0x12 = uVar3;
  param_1[0x45].field_0x13 = uVar4;
  param_1[0x45].field_0x14 = uVar5;
  param_1[0x45].field_0x15 = uVar6;
  param_1[0x45].field_0x16 = uVar7;
  param_1[0x45].field_0x17 = uVar8;
  uVar2 = puVar17[0x19];
  uVar3 = puVar17[0x1a];
  uVar4 = puVar17[0x1b];
  param_1[0x45].field_0x18 = puVar17[0x18];
  param_1[0x45].field_0x19 = uVar2;
  param_1[0x45].field_0x1a = uVar3;
  param_1[0x45].field_0x1b = uVar4;
  RecalcDerivedData((UCineCameraComponent *)param_1);
  return;
}

