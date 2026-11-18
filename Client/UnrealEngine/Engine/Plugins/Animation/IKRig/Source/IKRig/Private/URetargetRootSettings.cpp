// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 8

// StaticClass @ 14dee9b60

UClass * __cdecl URetargetRootSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URetargetRootSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"RetargetRootSettings",
               &Z_Registration_Info_UClass_URetargetRootSettings.InnerSingleton,
               StaticRegisterNativesURetargetRootSettings,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URetargetRootSettings>,
               InternalVTableHelperCtorCaller<URetargetRootSettings>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URetargetRootSettings.InnerSingleton;
}

// URetargetRootSettings @ 14df1af20

URetargetRootSettings * __thiscall
URetargetRootSettings::URetargetRootSettings(URetargetRootSettings *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7URetargetRootSettings__6B_;
  (this->Settings).RotationAlpha = 1.0;
  (this->Settings).TranslationAlpha = 1.0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->Settings).BlendToSource = 0.0;
  (this->Settings).BlendToSourceWeights.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Settings).BlendToSourceWeights.field0_0x0._s_0.Y = (double)uVar1;
  (this->Settings).BlendToSourceWeights.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->Settings).ScaleHorizontal = 1.0;
  (this->Settings).ScaleVertical = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Settings).TranslationOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Settings).TranslationOffset.field0_0x0._s_0.Y = (double)uVar1;
  (this->Settings).TranslationOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->Settings).RotationOffset.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->Settings).RotationOffset.Yaw = dVar2;
  (this->Settings).RotationOffset.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->Settings).AffectIKHorizontal = 1.0;
  (this->Settings).AffectIKVertical = 0.0;
  this->RetargetRootTranslation_DEPRECATED = true;
  this->GlobalScaleHorizontal_DEPRECATED = 1.0;
  this->GlobalScaleVertical_DEPRECATED = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->BlendToSource_DEPRECATED).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->BlendToSource_DEPRECATED).field0_0x0._s_0.Y = (double)uVar1;
  (this->BlendToSource_DEPRECATED).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StaticOffset_DEPRECATED).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StaticOffset_DEPRECATED).field0_0x0._s_0.Y = (double)uVar1;
  (this->StaticOffset_DEPRECATED).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->StaticRotationOffset_DEPRECATED).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->StaticRotationOffset_DEPRECATED).Yaw = dVar2;
  (this->StaticRotationOffset_DEPRECATED).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return this;
}

// URetargetRootSettings @ 14df1b030

URetargetRootSettings * __thiscall
URetargetRootSettings::URetargetRootSettings
          (URetargetRootSettings *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7URetargetRootSettings__6B_;
  (this->Settings).RotationAlpha = 1.0;
  (this->Settings).TranslationAlpha = 1.0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->Settings).BlendToSource = 0.0;
  (this->Settings).BlendToSourceWeights.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Settings).BlendToSourceWeights.field0_0x0._s_0.Y = (double)uVar1;
  (this->Settings).BlendToSourceWeights.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->Settings).ScaleHorizontal = 1.0;
  (this->Settings).ScaleVertical = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Settings).TranslationOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Settings).TranslationOffset.field0_0x0._s_0.Y = (double)uVar1;
  (this->Settings).TranslationOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->Settings).RotationOffset.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->Settings).RotationOffset.Yaw = dVar2;
  (this->Settings).RotationOffset.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->Settings).AffectIKHorizontal = 1.0;
  (this->Settings).AffectIKVertical = 0.0;
  this->RetargetRootTranslation_DEPRECATED = true;
  this->GlobalScaleHorizontal_DEPRECATED = 1.0;
  this->GlobalScaleVertical_DEPRECATED = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->BlendToSource_DEPRECATED).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->BlendToSource_DEPRECATED).field0_0x0._s_0.Y = (double)uVar1;
  (this->BlendToSource_DEPRECATED).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StaticOffset_DEPRECATED).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StaticOffset_DEPRECATED).field0_0x0._s_0.Y = (double)uVar1;
  (this->StaticOffset_DEPRECATED).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->StaticRotationOffset_DEPRECATED).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->StaticRotationOffset_DEPRECATED).Yaw = dVar2;
  (this->StaticRotationOffset_DEPRECATED).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return this;
}

// ~URetargetRootSettings @ 14df1ca60

void __thiscall URetargetRootSettings::~URetargetRootSettings(URetargetRootSettings *this)

{
  this->_padding_ = (longlong)&___7URetargetRootSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3e260

UClass * __cdecl URetargetRootSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URetargetRootSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"RetargetRootSettings",
               &Z_Registration_Info_UClass_URetargetRootSettings.InnerSingleton,
               StaticRegisterNativesURetargetRootSettings,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URetargetRootSettings>,
               InternalVTableHelperCtorCaller<URetargetRootSettings>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URetargetRootSettings.InnerSingleton;
}

// Serialize @ 14df53e60

void __thiscall URetargetRootSettings::Serialize(URetargetRootSettings *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014df53e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FIKRigObjectVersion::GUID);
  return;
}

// Serialize @ 14df53e90

void __thiscall
URetargetRootSettings::Serialize(URetargetRootSettings *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FIKRigObjectVersion::GUID);
  return;
}

// StaticRegisterNativesURetargetRootSettings @ 14df5a3e0

void __cdecl URetargetRootSettings::StaticRegisterNativesURetargetRootSettings(void)

{
  return;
}

