// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b402ab0

UClass * __cdecl UDS_SkillAbilityContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillAbilityContext",
               &Z_Registration_Info_UClass_UDS_SkillAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_SkillAbilityContext,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SkillAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_SkillAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillAbilityContext.InnerSingleton;
}

// UDS_SkillAbilityContext @ 14b407450

UDS_SkillAbilityContext * __thiscall
UDS_SkillAbilityContext::UDS_SkillAbilityContext
          (UDS_SkillAbilityContext *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SkillAbilityContext__6B_;
  this->SkillID = 0;
  this->SkillStartTime = 0.0;
  this->SkillEndTime = 0.0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->SkillRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->SkillRotation).Yaw = dVar2;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->UseInputDirection = false;
  (this->SkillRotation).Roll = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DestinationLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DestinationLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->TargetEntityID = 0;
  (this->DestinationLocation).field0_0x0._s_0.Z = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetSkillLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetSkillLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->IsMoveToggleSkill = false;
  (this->TargetSkillLocation).field0_0x0._s_0.Z = (double)uVar1;
  this->LocationLerpTime = 0.1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->IsCollision = false;
  this->IsHighPass = false;
  this->IsSkillRotationPlace = false;
  this->TryActiveSkillAbility = false;
  (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ThrowStartSkillInfo).InitialVelocity.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ThrowStartSkillInfo).InitialVelocity.field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ThrowStartSkillInfo).TotalTime = 0.0;
  (this->ThrowStartSkillInfo).ImpactTime = 0.0;
  (this->ThrowStartSkillInfo).InitialVelocity.field0_0x0._s_0.Z = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// UDS_SkillAbilityContext @ 14b407590

UDS_SkillAbilityContext * __thiscall
UDS_SkillAbilityContext::UDS_SkillAbilityContext
          (UDS_SkillAbilityContext *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SkillAbilityContext__6B_;
  this->SkillID = 0;
  this->SkillStartTime = 0.0;
  this->SkillEndTime = 0.0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->SkillRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->SkillRotation).Yaw = dVar2;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->UseInputDirection = false;
  (this->SkillRotation).Roll = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DestinationLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DestinationLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->TargetEntityID = 0;
  (this->DestinationLocation).field0_0x0._s_0.Z = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetSkillLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetSkillLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->IsMoveToggleSkill = false;
  (this->TargetSkillLocation).field0_0x0._s_0.Z = (double)uVar1;
  this->LocationLerpTime = 0.1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->IsCollision = false;
  this->IsHighPass = false;
  this->IsSkillRotationPlace = false;
  this->TryActiveSkillAbility = false;
  (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ThrowStartSkillInfo).InitialVelocity.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ThrowStartSkillInfo).InitialVelocity.field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ThrowStartSkillInfo).TotalTime = 0.0;
  (this->ThrowStartSkillInfo).ImpactTime = 0.0;
  (this->ThrowStartSkillInfo).InitialVelocity.field0_0x0._s_0.Z = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// ~UDS_SkillAbilityContext @ 14b4080d0

void __thiscall UDS_SkillAbilityContext::~UDS_SkillAbilityContext(UDS_SkillAbilityContext *this)

{
  this->_padding_ = (longlong)&___7UWN_AbilityContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b40a8c0

UClass * __cdecl UDS_SkillAbilityContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillAbilityContext",
               &Z_Registration_Info_UClass_UDS_SkillAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_SkillAbilityContext,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SkillAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_SkillAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillAbilityContext.InnerSingleton;
}

// StaticRegisterNativesUDS_SkillAbilityContext @ 14b40af10

void __cdecl UDS_SkillAbilityContext::StaticRegisterNativesUDS_SkillAbilityContext(void)

{
  return;
}

