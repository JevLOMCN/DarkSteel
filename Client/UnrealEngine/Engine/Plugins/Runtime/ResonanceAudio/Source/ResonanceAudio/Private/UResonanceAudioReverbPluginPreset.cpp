// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 32

// StaticClass @ 14f041eb0

UClass * __cdecl UResonanceAudioReverbPluginPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UResonanceAudioReverbPluginPreset.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ResonanceAudio",L"ResonanceAudioReverbPluginPreset",
               &Z_Registration_Info_UClass_UResonanceAudioReverbPluginPreset.InnerSingleton,
               StaticRegisterNativesUResonanceAudioReverbPluginPreset,0x170,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UResonanceAudioReverbPluginPreset>,
               InternalVTableHelperCtorCaller<UResonanceAudioReverbPluginPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UResonanceAudioReverbPluginPreset.InnerSingleton;
}

// UResonanceAudioReverbPluginPreset @ 14f044070

UResonanceAudioReverbPluginPreset * __thiscall
UResonanceAudioReverbPluginPreset::UResonanceAudioReverbPluginPreset
          (UResonanceAudioReverbPluginPreset *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  USoundEffectSubmixPreset::USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this,param_1);
  this->_padding_ = (longlong)&___7UResonanceAudioReverbPluginPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).bEnableRoomEffects = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SettingsCopy).bGetTransformFromAudioVolume = false;
  (this->SettingsCopy).RoomPosition.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SettingsCopy).RoomPosition.field0_0x0._s_0.Y = (double)uVar1;
  (this->SettingsCopy).RoomPosition.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->SettingsCopy).RoomRotation.X = UE::Math::TQuat<double>::Identity.X;
  (this->SettingsCopy).RoomRotation.Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->SettingsCopy).RoomRotation.Z = UE::Math::TQuat<double>::Identity.Z;
  (this->SettingsCopy).RoomRotation.W = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SettingsCopy).RoomDimensions.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SettingsCopy).RoomDimensions.field0_0x0._s_0.Y = (double)uVar1;
  (this->SettingsCopy).RoomDimensions.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SettingsCopy).LeftWallMaterial = TRANSPARENT;
  (this->SettingsCopy).RightWallMaterial = TRANSPARENT;
  (this->SettingsCopy).FloorMaterial = TRANSPARENT;
  (this->SettingsCopy).CeilingMaterial = TRANSPARENT;
  (this->SettingsCopy).FrontWallMaterial = TRANSPARENT;
  (this->SettingsCopy).BackWallMaterial = TRANSPARENT;
  (this->SettingsCopy).ReflectionScalar = 1.0;
  (this->SettingsCopy).ReverbGain = 1.0;
  (this->SettingsCopy).ReverbTimeModifier = 1.0;
  (this->SettingsCopy).ReverbBrightness = 0.0;
  (this->Settings).bEnableRoomEffects = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Settings).bGetTransformFromAudioVolume = false;
  (this->Settings).RoomPosition.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Settings).RoomPosition.field0_0x0._s_0.Y = (double)uVar1;
  (this->Settings).RoomPosition.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->Settings).RoomRotation.X = UE::Math::TQuat<double>::Identity.X;
  (this->Settings).RoomRotation.Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->Settings).RoomRotation.Z = UE::Math::TQuat<double>::Identity.Z;
  (this->Settings).RoomRotation.W = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Settings).RoomDimensions.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Settings).RoomDimensions.field0_0x0._s_0.Y = (double)uVar1;
  (this->Settings).RoomDimensions.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Settings).LeftWallMaterial = TRANSPARENT;
  (this->Settings).RightWallMaterial = TRANSPARENT;
  (this->Settings).FloorMaterial = TRANSPARENT;
  (this->Settings).CeilingMaterial = TRANSPARENT;
  (this->Settings).FrontWallMaterial = TRANSPARENT;
  (this->Settings).BackWallMaterial = TRANSPARENT;
  (this->Settings).ReflectionScalar = 1.0;
  (this->Settings).ReverbGain = 1.0;
  (this->Settings).ReverbTimeModifier = 1.0;
  (this->Settings).ReverbBrightness = 0.0;
  return this;
}

// UResonanceAudioReverbPluginPreset @ 14f0441d0

UResonanceAudioReverbPluginPreset * __thiscall
UResonanceAudioReverbPluginPreset::UResonanceAudioReverbPluginPreset
          (UResonanceAudioReverbPluginPreset *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  USoundEffectSubmixPreset::USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this,param_1);
  this->_padding_ = (longlong)&___7UResonanceAudioReverbPluginPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).bEnableRoomEffects = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SettingsCopy).bGetTransformFromAudioVolume = false;
  (this->SettingsCopy).RoomPosition.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SettingsCopy).RoomPosition.field0_0x0._s_0.Y = (double)uVar1;
  (this->SettingsCopy).RoomPosition.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->SettingsCopy).RoomRotation.X = UE::Math::TQuat<double>::Identity.X;
  (this->SettingsCopy).RoomRotation.Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->SettingsCopy).RoomRotation.Z = UE::Math::TQuat<double>::Identity.Z;
  (this->SettingsCopy).RoomRotation.W = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SettingsCopy).RoomDimensions.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SettingsCopy).RoomDimensions.field0_0x0._s_0.Y = (double)uVar1;
  (this->SettingsCopy).RoomDimensions.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SettingsCopy).LeftWallMaterial = TRANSPARENT;
  (this->SettingsCopy).RightWallMaterial = TRANSPARENT;
  (this->SettingsCopy).FloorMaterial = TRANSPARENT;
  (this->SettingsCopy).CeilingMaterial = TRANSPARENT;
  (this->SettingsCopy).FrontWallMaterial = TRANSPARENT;
  (this->SettingsCopy).BackWallMaterial = TRANSPARENT;
  (this->SettingsCopy).ReflectionScalar = 1.0;
  (this->SettingsCopy).ReverbGain = 1.0;
  (this->SettingsCopy).ReverbTimeModifier = 1.0;
  (this->SettingsCopy).ReverbBrightness = 0.0;
  (this->Settings).bEnableRoomEffects = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Settings).bGetTransformFromAudioVolume = false;
  (this->Settings).RoomPosition.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Settings).RoomPosition.field0_0x0._s_0.Y = (double)uVar1;
  (this->Settings).RoomPosition.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->Settings).RoomRotation.X = UE::Math::TQuat<double>::Identity.X;
  (this->Settings).RoomRotation.Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->Settings).RoomRotation.Z = UE::Math::TQuat<double>::Identity.Z;
  (this->Settings).RoomRotation.W = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Settings).RoomDimensions.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Settings).RoomDimensions.field0_0x0._s_0.Y = (double)uVar1;
  (this->Settings).RoomDimensions.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Settings).LeftWallMaterial = TRANSPARENT;
  (this->Settings).RightWallMaterial = TRANSPARENT;
  (this->Settings).FloorMaterial = TRANSPARENT;
  (this->Settings).CeilingMaterial = TRANSPARENT;
  (this->Settings).FrontWallMaterial = TRANSPARENT;
  (this->Settings).BackWallMaterial = TRANSPARENT;
  (this->Settings).ReflectionScalar = 1.0;
  (this->Settings).ReverbGain = 1.0;
  (this->Settings).ReverbTimeModifier = 1.0;
  (this->Settings).ReverbBrightness = 0.0;
  return this;
}

// ~UResonanceAudioReverbPluginPreset @ 14f044d00

void __thiscall
UResonanceAudioReverbPluginPreset::~UResonanceAudioReverbPluginPreset
          (UResonanceAudioReverbPluginPreset *this)

{
  this->_padding_ = (longlong)&___7UResonanceAudioReverbPluginPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSubmixPreset::~USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this);
  return;
}

// CanFilter @ 14f045d70

bool __thiscall
UResonanceAudioReverbPluginPreset::CanFilter(UResonanceAudioReverbPluginPreset *this)

{
  return false;
}

// CreateNewEffect @ 14f046630

FSoundEffectBase * __thiscall
UResonanceAudioReverbPluginPreset::CreateNewEffect(UResonanceAudioReverbPluginPreset *this)

{
  FSoundEffectBase *this_00;
  
  this_00 = ::operator_new(0x90);
  if (this_00 != (FSoundEffectBase *)0x0) {
    FSoundEffectBase::FSoundEffectBase(this_00);
    *(undefined4 *)&this_00[1]._padding_ = 0xffffffff;
    this_00[1]._padding_ = 0;
    *(undefined4 *)this_00[1].SettingsCritSect.CriticalSection.Opaque1 = 0;
    this_00[1].SettingsCritSect.CriticalSection.Opaque2[0] = 0;
    this_00[1].SettingsCritSect.CriticalSection.Opaque2[1] = 0;
    *(undefined4 *)((longlong)this_00[1].SettingsCritSect.CriticalSection.Opaque1 + 4) = 0xffffffff;
    this_00->_padding_ = (longlong)&___7FResonanceAudioReverbPlugin__6B_;
    return this_00;
  }
  return (FSoundEffectBase *)0x0;
}

// CreateNewPreset @ 14f0466a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundEffectPreset * __thiscall
UResonanceAudioReverbPluginPreset::CreateNewPreset
          (UResonanceAudioReverbPluginPreset *this,UObject *param_1,FName param_2,
          EObjectFlags param_3)

{
  UClass *pUVar1;
  UClass *pUVar2;
  USoundEffectPreset *pUVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar1 = (UClass *)(**(code **)(this->_padding_ + 0x2c0))();
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar2 = StaticClass();
  CheckIsClassChildOf_Internal(pUVar2,pUVar1);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = param_1;
  local_a8._16_8_ = param_2;
  local_a8._24_4_ = param_3;
  pUVar3 = (USoundEffectPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar4 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  (**(code **)(pUVar3->_padding_ + 0x2e0))(pUVar3);
  return pUVar3;
}

// GetAssetActionName @ 14f048480

FText * __thiscall
UResonanceAudioReverbPluginPreset::GetAssetActionName
          (UResonanceAudioReverbPluginPreset *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,"ResonanceAudioReverbPlugin");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14f048d30

UClass * __cdecl UResonanceAudioReverbPluginPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UResonanceAudioReverbPluginPreset.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ResonanceAudio",L"ResonanceAudioReverbPluginPreset",
               &Z_Registration_Info_UClass_UResonanceAudioReverbPluginPreset.InnerSingleton,
               StaticRegisterNativesUResonanceAudioReverbPluginPreset,0x170,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UResonanceAudioReverbPluginPreset>,
               InternalVTableHelperCtorCaller<UResonanceAudioReverbPluginPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UResonanceAudioReverbPluginPreset.InnerSingleton;
}

// GetSupportedClass @ 14f049310

UClass * __thiscall
UResonanceAudioReverbPluginPreset::GetSupportedClass(UResonanceAudioReverbPluginPreset *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UResonanceAudioReverbPluginPreset.InnerSingleton == (UClass *)0x0)
  {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ResonanceAudio",L"ResonanceAudioReverbPluginPreset",
               &Z_Registration_Info_UClass_UResonanceAudioReverbPluginPreset.InnerSingleton,
               StaticRegisterNativesUResonanceAudioReverbPluginPreset,0x170,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UResonanceAudioReverbPluginPreset>,
               InternalVTableHelperCtorCaller<UResonanceAudioReverbPluginPreset>,aFStackX_8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UResonanceAudioReverbPluginPreset.InnerSingleton;
}

// HasAssetActions @ 14f049330

bool __thiscall
UResonanceAudioReverbPluginPreset::HasAssetActions(UResonanceAudioReverbPluginPreset *this)

{
  return true;
}

// Init @ 14f049350

void __thiscall UResonanceAudioReverbPluginPreset::Init(UResonanceAudioReverbPluginPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  undefined6 uVar12;
  ERaMaterialName EVar13;
  ERaMaterialName EVar14;
  ERaMaterialName EVar15;
  ERaMaterialName EVar16;
  ERaMaterialName EVar17;
  ERaMaterialName EVar18;
  undefined2 uVar19;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar11 = (this->Settings).bGetTransformFromAudioVolume;
    uVar12 = *(undefined6 *)&(this->Settings).field_0x2;
    dVar7 = (this->Settings).RoomPosition.field0_0x0._s_0.X;
    dVar8 = (this->Settings).RoomPosition.field0_0x0._s_0.Y;
    dVar9 = (this->Settings).RoomPosition.field0_0x0._s_0.Z;
    (this->SettingsCopy).bEnableRoomEffects = (this->Settings).bEnableRoomEffects;
    (this->SettingsCopy).bGetTransformFromAudioVolume = bVar11;
    *(undefined6 *)&(this->SettingsCopy).field_0x2 = uVar12;
    (this->SettingsCopy).RoomPosition.field0_0x0._s_0.X = dVar7;
    dVar7 = (this->Settings).RoomRotation.X;
    dVar10 = (this->Settings).RoomRotation.Y;
    (this->SettingsCopy).RoomPosition.field0_0x0._s_0.Y = dVar8;
    (this->SettingsCopy).RoomPosition.field0_0x0._s_0.Z = dVar9;
    dVar8 = (this->Settings).RoomRotation.Z;
    dVar9 = (this->Settings).RoomRotation.W;
    (this->SettingsCopy).RoomRotation.X = dVar7;
    (this->SettingsCopy).RoomRotation.Y = dVar10;
    dVar7 = (this->Settings).RoomDimensions.field0_0x0._s_0.X;
    dVar10 = (this->Settings).RoomDimensions.field0_0x0._s_0.Y;
    (this->SettingsCopy).RoomRotation.Z = dVar8;
    (this->SettingsCopy).RoomRotation.W = dVar9;
    uVar1 = *(undefined4 *)((longlong)&(this->Settings).RoomDimensions.field0_0x0 + 0x10);
    uVar2 = *(undefined4 *)((longlong)&(this->Settings).RoomDimensions.field0_0x0 + 0x14);
    EVar13 = (this->Settings).LeftWallMaterial;
    EVar14 = (this->Settings).RightWallMaterial;
    EVar15 = (this->Settings).FloorMaterial;
    EVar16 = (this->Settings).CeilingMaterial;
    EVar17 = (this->Settings).FrontWallMaterial;
    EVar18 = (this->Settings).BackWallMaterial;
    uVar19 = *(undefined2 *)&(this->Settings).field_0x5e;
    (this->SettingsCopy).RoomDimensions.field0_0x0._s_0.X = dVar7;
    (this->SettingsCopy).RoomDimensions.field0_0x0._s_0.Y = dVar10;
    fVar3 = (this->Settings).ReflectionScalar;
    fVar4 = (this->Settings).ReverbGain;
    fVar5 = (this->Settings).ReverbTimeModifier;
    fVar6 = (this->Settings).ReverbBrightness;
    *(undefined4 *)((longlong)&(this->SettingsCopy).RoomDimensions.field0_0x0 + 0x10) = uVar1;
    *(undefined4 *)((longlong)&(this->SettingsCopy).RoomDimensions.field0_0x0 + 0x14) = uVar2;
    (this->SettingsCopy).LeftWallMaterial = EVar13;
    (this->SettingsCopy).RightWallMaterial = EVar14;
    (this->SettingsCopy).FloorMaterial = EVar15;
    (this->SettingsCopy).CeilingMaterial = EVar16;
    (this->SettingsCopy).FrontWallMaterial = EVar17;
    (this->SettingsCopy).BackWallMaterial = EVar18;
    *(undefined2 *)&(this->SettingsCopy).field_0x5e = uVar19;
    (this->SettingsCopy).ReflectionScalar = fVar3;
    (this->SettingsCopy).ReverbGain = fVar4;
    (this->SettingsCopy).ReverbTimeModifier = fVar5;
    (this->SettingsCopy).ReverbBrightness = fVar6;
                    /* WARNING: Could not recover jumptable at 0x00014f0493de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetEnableRoomEffects @ 14f04c730

void __thiscall
UResonanceAudioReverbPluginPreset::SetEnableRoomEffects
          (UResonanceAudioReverbPluginPreset *this,bool param_1)

{
  (this->Settings).bEnableRoomEffects = param_1;
  UpdateSettings(this,&this->Settings);
  return;
}

// SetReflectionScalar @ 14f04c870

void __thiscall
UResonanceAudioReverbPluginPreset::SetReflectionScalar
          (UResonanceAudioReverbPluginPreset *this,float param_1)

{
  (this->Settings).ReflectionScalar = param_1;
  UpdateSettings(this,&this->Settings);
  return;
}

// SetReverbBrightness @ 14f04c910

void __thiscall
UResonanceAudioReverbPluginPreset::SetReverbBrightness
          (UResonanceAudioReverbPluginPreset *this,float param_1)

{
  (this->Settings).ReverbBrightness = param_1;
  UpdateSettings(this,&this->Settings);
  return;
}

// SetReverbGain @ 14f04c950

void __thiscall
UResonanceAudioReverbPluginPreset::SetReverbGain
          (UResonanceAudioReverbPluginPreset *this,float param_1)

{
  (this->Settings).ReverbGain = param_1;
  UpdateSettings(this,&this->Settings);
  return;
}

// SetReverbTimeModifier @ 14f04c990

void __thiscall
UResonanceAudioReverbPluginPreset::SetReverbTimeModifier
          (UResonanceAudioReverbPluginPreset *this,float param_1)

{
  (this->Settings).ReverbTimeModifier = param_1;
  UpdateSettings(this,&this->Settings);
  return;
}

// SetRoomDimensions @ 14f04ca60

void __thiscall
UResonanceAudioReverbPluginPreset::SetRoomDimensions
          (UResonanceAudioReverbPluginPreset *this,TVector<double> *param_1)

{
  double dVar1;
  
  if ((((param_1->field0_0x0)._s_0.X == (this->Settings).RoomDimensions.field0_0x0._s_0.X) &&
      ((param_1->field0_0x0)._s_0.Y == (this->Settings).RoomDimensions.field0_0x0._s_0.Y)) &&
     ((param_1->field0_0x0)._s_0.Z == (this->Settings).RoomDimensions.field0_0x0._s_0.Z)) {
    return;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Settings).RoomDimensions.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Settings).RoomDimensions.field0_0x0._s_0.Y = dVar1;
  (this->Settings).RoomDimensions.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  UpdateSettings(this,&this->Settings);
  return;
}

// SetRoomMaterials @ 14f04cba0

void __thiscall
UResonanceAudioReverbPluginPreset::SetRoomMaterials
          (UResonanceAudioReverbPluginPreset *this,
          TArray<ERaMaterialName,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->Settings).LeftWallMaterial = (ERaMaterialName)*(param_1->AllocatorInstance).Data;
  if (param_1->ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->Settings).RightWallMaterial = (ERaMaterialName)(param_1->AllocatorInstance).Data[1];
  if (param_1->ArrayNum < 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->Settings).FloorMaterial = (ERaMaterialName)(param_1->AllocatorInstance).Data[2];
  if (param_1->ArrayNum < 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->Settings).CeilingMaterial = (ERaMaterialName)(param_1->AllocatorInstance).Data[3];
  if (param_1->ArrayNum < 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->Settings).FrontWallMaterial = (ERaMaterialName)(param_1->AllocatorInstance).Data[4];
  if (param_1->ArrayNum < 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->Settings).BackWallMaterial = (ERaMaterialName)(param_1->AllocatorInstance).Data[5];
  UpdateSettings(this,&this->Settings);
  return;
}

// SetRoomPosition @ 14f04ce40

void __thiscall
UResonanceAudioReverbPluginPreset::SetRoomPosition
          (UResonanceAudioReverbPluginPreset *this,TVector<double> *param_1)

{
  double dVar1;
  
  if ((((param_1->field0_0x0)._s_0.X == (this->Settings).RoomPosition.field0_0x0._s_0.X) &&
      ((param_1->field0_0x0)._s_0.Y == (this->Settings).RoomPosition.field0_0x0._s_0.Y)) &&
     ((param_1->field0_0x0)._s_0.Z == (this->Settings).RoomPosition.field0_0x0._s_0.Z)) {
    return;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Settings).RoomPosition.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Settings).RoomPosition.field0_0x0._s_0.Y = dVar1;
  (this->Settings).RoomPosition.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  UpdateSettings(this,&this->Settings);
  return;
}

// SetRoomRotation @ 14f04cf50

void __thiscall
UResonanceAudioReverbPluginPreset::SetRoomRotation
          (UResonanceAudioReverbPluginPreset *this,TQuat<double> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined4 in_EAX;
  int iVar4;
  undefined4 in_R8D;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = -(ulonglong)((this->Settings).RoomRotation.W != param_1->W);
  lVar7 = -(ulonglong)((this->Settings).RoomRotation.Y != param_1->Y);
  auVar1._8_4_ = (int)lVar6;
  auVar1._0_8_ = -(ulonglong)((this->Settings).RoomRotation.Z != param_1->Z);
  auVar1._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
  uVar5 = movmskpd(in_R8D,auVar1);
  auVar2._8_4_ = (int)lVar7;
  auVar2._0_8_ = -(ulonglong)((this->Settings).RoomRotation.X != param_1->X);
  auVar2._12_4_ = (int)((ulonglong)lVar7 >> 0x20);
  iVar4 = movmskpd(in_EAX,auVar2);
  if ((uVar5 & 0x3fffffff) != 0 || iVar4 != 0) {
    dVar3 = param_1->Y;
    (this->Settings).RoomRotation.X = param_1->X;
    (this->Settings).RoomRotation.Y = dVar3;
    dVar3 = param_1->W;
    (this->Settings).RoomRotation.Z = param_1->Z;
    (this->Settings).RoomRotation.W = dVar3;
    UpdateSettings(this,&this->Settings);
    return;
  }
  return;
}

// StaticRegisterNativesUResonanceAudioReverbPluginPreset @ 14f04d640

void __cdecl
UResonanceAudioReverbPluginPreset::StaticRegisterNativesUResonanceAudioReverbPluginPreset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UResonanceAudioReverbPluginPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateSettings @ 14f04e040

void __thiscall
UResonanceAudioReverbPluginPreset::UpdateSettings
          (UResonanceAudioReverbPluginPreset *this,FResonanceAudioReverbPluginSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  double dVar1;
  bool bVar2;
  undefined6 uVar3;
  ERaMaterialName EVar4;
  ERaMaterialName EVar5;
  ERaMaterialName EVar6;
  ERaMaterialName EVar7;
  ERaMaterialName EVar8;
  ERaMaterialName EVar9;
  undefined2 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar2 = param_1->bGetTransformFromAudioVolume;
    uVar3 = *(undefined6 *)&param_1->field_0x2;
    dVar1 = (param_1->RoomPosition).field0_0x0._s_0.X;
    (this->SettingsCopy).bEnableRoomEffects = param_1->bEnableRoomEffects;
    (this->SettingsCopy).bGetTransformFromAudioVolume = bVar2;
    *(undefined6 *)&(this->SettingsCopy).field_0x2 = uVar3;
    (this->SettingsCopy).RoomPosition.field0_0x0._s_0.X = dVar1;
    dVar1 = (param_1->RoomPosition).field0_0x0._s_0.Z;
    (this->SettingsCopy).RoomPosition.field0_0x0._s_0.Y = (param_1->RoomPosition).field0_0x0._s_0.Y;
    (this->SettingsCopy).RoomPosition.field0_0x0._s_0.Z = dVar1;
    dVar1 = (param_1->RoomRotation).Y;
    (this->SettingsCopy).RoomRotation.X = (param_1->RoomRotation).X;
    (this->SettingsCopy).RoomRotation.Y = dVar1;
    dVar1 = (param_1->RoomRotation).W;
    (this->SettingsCopy).RoomRotation.Z = (param_1->RoomRotation).Z;
    (this->SettingsCopy).RoomRotation.W = dVar1;
    dVar1 = (param_1->RoomDimensions).field0_0x0._s_0.Y;
    (this->SettingsCopy).RoomDimensions.field0_0x0._s_0.X =
         (param_1->RoomDimensions).field0_0x0._s_0.X;
    (this->SettingsCopy).RoomDimensions.field0_0x0._s_0.Y = dVar1;
    EVar4 = param_1->LeftWallMaterial;
    EVar5 = param_1->RightWallMaterial;
    EVar6 = param_1->FloorMaterial;
    EVar7 = param_1->CeilingMaterial;
    EVar8 = param_1->FrontWallMaterial;
    EVar9 = param_1->BackWallMaterial;
    uVar10 = *(undefined2 *)&param_1->field_0x5e;
    (this->SettingsCopy).RoomDimensions.field0_0x0._s_0.Z =
         (param_1->RoomDimensions).field0_0x0._s_0.Z;
    (this->SettingsCopy).LeftWallMaterial = EVar4;
    (this->SettingsCopy).RightWallMaterial = EVar5;
    (this->SettingsCopy).FloorMaterial = EVar6;
    (this->SettingsCopy).CeilingMaterial = EVar7;
    (this->SettingsCopy).FrontWallMaterial = EVar8;
    (this->SettingsCopy).BackWallMaterial = EVar9;
    *(undefined2 *)&(this->SettingsCopy).field_0x5e = uVar10;
    fVar11 = param_1->ReverbGain;
    fVar12 = param_1->ReverbTimeModifier;
    fVar13 = param_1->ReverbBrightness;
    (this->SettingsCopy).ReflectionScalar = param_1->ReflectionScalar;
    (this->SettingsCopy).ReverbGain = fVar11;
    (this->SettingsCopy).ReverbTimeModifier = fVar12;
    (this->SettingsCopy).ReverbBrightness = fVar13;
    USoundEffectPreset::Update((USoundEffectPreset *)this);
                    /* WARNING: Could not recover jumptable at 0x00014f04e0cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// execSetEnableRoomEffects @ 14f04f9f0

void __cdecl
UResonanceAudioReverbPluginPreset::execSetEnableRoomEffects
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  param_1[6].field_0x10 = local_res8[0] != 0;
  UpdateSettings((UResonanceAudioReverbPluginPreset *)param_1,
                 (FResonanceAudioReverbPluginSettings *)&param_1[6].field_0x10);
  return;
}

// execSetReflectionScalar @ 14f04fb90

void __cdecl
UResonanceAudioReverbPluginPreset::execSetReflectionScalar
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  *(undefined4 *)&param_1[8].field_0x20 = local_res8[0];
  UpdateSettings((UResonanceAudioReverbPluginPreset *)param_1,
                 (FResonanceAudioReverbPluginSettings *)&param_1[6].field_0x10);
  return;
}

// execSetReverbBrightness @ 14f04fc30

void __cdecl
UResonanceAudioReverbPluginPreset::execSetReverbBrightness
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  *(undefined4 *)&param_1[9].field_0x4 = local_res8[0];
  UpdateSettings((UResonanceAudioReverbPluginPreset *)param_1,
                 (FResonanceAudioReverbPluginSettings *)&param_1[6].field_0x10);
  return;
}

// execSetReverbGain @ 14f04fcd0

void __cdecl
UResonanceAudioReverbPluginPreset::execSetReverbGain(UObject *param_1,FFrame *param_2,void *param_3)

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
  UpdateSettings((UResonanceAudioReverbPluginPreset *)param_1,
                 (FResonanceAudioReverbPluginSettings *)&param_1[6].field_0x10);
  return;
}

// execSetReverbTimeModifier @ 14f04fd70

void __cdecl
UResonanceAudioReverbPluginPreset::execSetReverbTimeModifier
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  *(undefined4 *)(param_1 + 9) = local_res8[0];
  UpdateSettings((UResonanceAudioReverbPluginPreset *)param_1,
                 (FResonanceAudioReverbPluginSettings *)&param_1[6].field_0x10);
  return;
}

// execSetRoomDimensions @ 14f04fe10

void __cdecl
UResonanceAudioReverbPluginPreset::execSetRoomDimensions
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double *pdVar3;
  double local_28 [4];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  pdVar3 = local_28;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar3 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((*pdVar3 != *(double *)(param_1 + 8)) || (pdVar3[1] != *(double *)&param_1[8].field_0x8)) ||
     (pdVar3[2] != *(double *)&param_1[8].field_0x10)) {
    dVar2 = pdVar3[1];
    *(double *)(param_1 + 8) = *pdVar3;
    *(double *)&param_1[8].field_0x8 = dVar2;
    *(double *)&param_1[8].field_0x10 = pdVar3[2];
    UpdateSettings((UResonanceAudioReverbPluginPreset *)param_1,
                   (FResonanceAudioReverbPluginSettings *)&param_1[6].field_0x10);
  }
  return;
}

// execSetRoomMaterials @ 14f04fef0

void __cdecl
UResonanceAudioReverbPluginPreset::execSetRoomMaterials
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<ERaMaterialName,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<ERaMaterialName,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<ERaMaterialName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<ERaMaterialName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<ERaMaterialName,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetRoomMaterials((UResonanceAudioReverbPluginPreset *)param_1,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetRoomPosition @ 14f04ffa0

void __cdecl
UResonanceAudioReverbPluginPreset::execSetRoomPosition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double *pdVar3;
  double local_28 [4];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  pdVar3 = local_28;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar3 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((*pdVar3 != *(double *)&param_1[6].field_0x18) ||
      (pdVar3[1] != *(double *)&param_1[6].field_0x20)) || (pdVar3[2] != *(double *)(param_1 + 7)))
  {
    dVar2 = pdVar3[1];
    *(double *)&param_1[6].field_0x18 = *pdVar3;
    *(double *)&param_1[6].field_0x20 = dVar2;
    *(double *)(param_1 + 7) = pdVar3[2];
    UpdateSettings((UResonanceAudioReverbPluginPreset *)param_1,
                   (FResonanceAudioReverbPluginSettings *)&param_1[6].field_0x10);
  }
  return;
}

// execSetRoomRotation @ 14f050080

void __cdecl
UResonanceAudioReverbPluginPreset::execSetRoomRotation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  FFrame *pFVar9;
  double *pdVar10;
  longlong lVar11;
  longlong lVar12;
  double local_28 [4];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    pFVar9 = param_2;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
    uVar7 = SUB84(pFVar9,0);
  }
  else {
    pFVar9 = param_2;
    FFrame::Step(param_2,param_2->Object,local_28);
    uVar7 = SUB84(pFVar9,0);
  }
  pdVar10 = local_28;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar10 = (double *)param_2->MostRecentPropertyAddress;
  }
  puVar2 = param_2->Code;
  param_2->Code = puVar2 + (puVar2 != (uchar *)0x0);
  lVar11 = -(ulonglong)(*(double *)&param_1[7].field_0x20 != pdVar10[3]);
  lVar12 = -(ulonglong)(*(double *)&param_1[7].field_0x10 != pdVar10[1]);
  auVar3._8_4_ = (int)lVar11;
  auVar3._0_8_ = -(ulonglong)(*(double *)&param_1[7].field_0x18 != pdVar10[2]);
  auVar3._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
  uVar8 = movmskpd(uVar7,auVar3);
  auVar4._8_4_ = (int)lVar12;
  auVar4._0_8_ = -(ulonglong)(*(double *)&param_1[7].field_0x8 != *pdVar10);
  auVar4._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
  iVar6 = movmskpd((int)puVar2,auVar4);
  if ((uVar8 & 0x3fffffff) != 0 || iVar6 != 0) {
    dVar5 = pdVar10[1];
    *(double *)&param_1[7].field_0x8 = *pdVar10;
    *(double *)&param_1[7].field_0x10 = dVar5;
    dVar5 = pdVar10[3];
    *(double *)&param_1[7].field_0x18 = pdVar10[2];
    *(double *)&param_1[7].field_0x20 = dVar5;
    UpdateSettings((UResonanceAudioReverbPluginPreset *)param_1,
                   (FResonanceAudioReverbPluginSettings *)&param_1[6].field_0x10);
  }
  return;
}

