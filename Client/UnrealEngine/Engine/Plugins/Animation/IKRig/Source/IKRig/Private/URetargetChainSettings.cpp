// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 8

// StaticClass @ 14dee9850

UClass * __cdecl URetargetChainSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URetargetChainSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"RetargetChainSettings",
               &Z_Registration_Info_UClass_URetargetChainSettings.InnerSingleton,
               StaticRegisterNativesURetargetChainSettings,0x188,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URetargetChainSettings>,
               InternalVTableHelperCtorCaller<URetargetChainSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URetargetChainSettings.InnerSingleton;
}

// URetargetChainSettings @ 14df1ac60

URetargetChainSettings * __thiscall
URetargetChainSettings::URetargetChainSettings(URetargetChainSettings *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7URetargetChainSettings__6B_;
  (this->SourceChain).ComparisonIndex = 0;
  (this->SourceChain).Number = 0;
  (this->TargetChain).ComparisonIndex = 0;
  (this->TargetChain).Number = 0;
  FTargetChainSettings::FTargetChainSettings(&this->Settings);
  this->CopyPoseUsingFK_DEPRECATED = true;
  this->RotationAlpha_DEPRECATED = 1.0;
  this->TranslationAlpha_DEPRECATED = 1.0;
  this->DriveIKGoal_DEPRECATED = true;
  this->BlendToSource_DEPRECATED = 0.0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->BlendToSourceWeights_DEPRECATED).field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->BlendToSourceWeights_DEPRECATED).field0_0x0._s_0.Y = (double)uVar1;
  (this->BlendToSourceWeights_DEPRECATED).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->SpeedCurveName_DEPRECATED).ComparisonIndex = 0;
  (this->SpeedCurveName_DEPRECATED).Number = 0;
  this->Extension_DEPRECATED = 1.0;
  this->UseSpeedCurveToPlantIK_DEPRECATED = false;
  this->VelocityThreshold_DEPRECATED = 15.0;
  this->UnplantStiffness_DEPRECATED = 250.0;
  this->UnplantCriticalDamping_DEPRECATED = 1.0;
  return this;
}

// URetargetChainSettings @ 14df1ad20

URetargetChainSettings * __thiscall
URetargetChainSettings::URetargetChainSettings
          (URetargetChainSettings *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7URetargetChainSettings__6B_;
  (this->SourceChain).ComparisonIndex = 0;
  (this->SourceChain).Number = 0;
  (this->TargetChain).ComparisonIndex = 0;
  (this->TargetChain).Number = 0;
  FTargetChainSettings::FTargetChainSettings(&this->Settings);
  this->CopyPoseUsingFK_DEPRECATED = true;
  this->RotationAlpha_DEPRECATED = 1.0;
  this->TranslationAlpha_DEPRECATED = 1.0;
  this->DriveIKGoal_DEPRECATED = true;
  this->BlendToSource_DEPRECATED = 0.0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->BlendToSourceWeights_DEPRECATED).field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->BlendToSourceWeights_DEPRECATED).field0_0x0._s_0.Y = (double)uVar1;
  (this->BlendToSourceWeights_DEPRECATED).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->SpeedCurveName_DEPRECATED).ComparisonIndex = 0;
  (this->SpeedCurveName_DEPRECATED).Number = 0;
  this->Extension_DEPRECATED = 1.0;
  this->UseSpeedCurveToPlantIK_DEPRECATED = false;
  this->VelocityThreshold_DEPRECATED = 15.0;
  this->UnplantStiffness_DEPRECATED = 250.0;
  this->UnplantCriticalDamping_DEPRECATED = 1.0;
  return this;
}

// ~URetargetChainSettings @ 14df1c9c0

void __thiscall URetargetChainSettings::~URetargetChainSettings(URetargetChainSettings *this)

{
  this->_padding_ = (longlong)&___7URetargetChainSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3df90

UClass * __cdecl URetargetChainSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URetargetChainSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"RetargetChainSettings",
               &Z_Registration_Info_UClass_URetargetChainSettings.InnerSingleton,
               StaticRegisterNativesURetargetChainSettings,0x188,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URetargetChainSettings>,
               InternalVTableHelperCtorCaller<URetargetChainSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URetargetChainSettings.InnerSingleton;
}

// Serialize @ 14df53dd0

void __thiscall URetargetChainSettings::Serialize(URetargetChainSettings *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014df53df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FIKRigObjectVersion::GUID);
  return;
}

// Serialize @ 14df53e00

void __thiscall
URetargetChainSettings::Serialize(URetargetChainSettings *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FIKRigObjectVersion::GUID);
  return;
}

// StaticRegisterNativesURetargetChainSettings @ 14df5a370

void __cdecl URetargetChainSettings::StaticRegisterNativesURetargetChainSettings(void)

{
  return;
}

