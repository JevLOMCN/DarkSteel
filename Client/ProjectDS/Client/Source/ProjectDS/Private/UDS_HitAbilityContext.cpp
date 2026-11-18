// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b4030f0

UClass * __cdecl UDS_HitAbilityContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HitAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HitAbilityContext",
               &Z_Registration_Info_UClass_UDS_HitAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_HitAbilityContext,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_HitAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_HitAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HitAbilityContext.InnerSingleton;
}

// UDS_HitAbilityContext @ 14b407050

UDS_HitAbilityContext * __thiscall
UDS_HitAbilityContext::UDS_HitAbilityContext(UDS_HitAbilityContext *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_HitAbilityContext__6B_;
  (this->StruckInfo).AttackerEntityID = 0;
  (this->StruckInfo).DefenderEntityID = 0;
  (this->StruckInfo).SkillAttackID = 0;
  (this->StruckInfo).Damage = 0;
  (this->StruckInfo).EventTime = 0.0;
  (this->StruckInfo).ExecuteTime = 0.0;
  (this->StruckInfo).AbnormalID = 0;
  (this->StruckInfo).DamageInfo = 0;
  (this->StruckInfo).HasDamage = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StruckInfo).AbnormalDestination.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StruckInfo).AbnormalDestination.field0_0x0._s_0.Y = (double)uVar1;
  (this->StruckInfo).AbnormalDestination.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->StruckInfo).MultiHitPointIndex = -1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StruckInfo).EffectLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StruckInfo).EffectLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->StruckInfo).EffectLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// UDS_HitAbilityContext @ 14b4070e0

UDS_HitAbilityContext * __thiscall
UDS_HitAbilityContext::UDS_HitAbilityContext
          (UDS_HitAbilityContext *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_HitAbilityContext__6B_;
  (this->StruckInfo).AttackerEntityID = 0;
  (this->StruckInfo).DefenderEntityID = 0;
  (this->StruckInfo).SkillAttackID = 0;
  (this->StruckInfo).Damage = 0;
  (this->StruckInfo).EventTime = 0.0;
  (this->StruckInfo).ExecuteTime = 0.0;
  (this->StruckInfo).AbnormalID = 0;
  (this->StruckInfo).DamageInfo = 0;
  (this->StruckInfo).HasDamage = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StruckInfo).AbnormalDestination.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StruckInfo).AbnormalDestination.field0_0x0._s_0.Y = (double)uVar1;
  (this->StruckInfo).AbnormalDestination.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->StruckInfo).MultiHitPointIndex = -1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StruckInfo).EffectLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StruckInfo).EffectLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->StruckInfo).EffectLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// ~UDS_HitAbilityContext @ 14b407fd0

void __thiscall UDS_HitAbilityContext::~UDS_HitAbilityContext(UDS_HitAbilityContext *this)

{
  this->_padding_ = (longlong)&___7UWN_AbilityContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b40a2c0

UClass * __cdecl UDS_HitAbilityContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HitAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HitAbilityContext",
               &Z_Registration_Info_UClass_UDS_HitAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_HitAbilityContext,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_HitAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_HitAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HitAbilityContext.InnerSingleton;
}

// StaticRegisterNativesUDS_HitAbilityContext @ 14b40ae90

void __cdecl UDS_HitAbilityContext::StaticRegisterNativesUDS_HitAbilityContext(void)

{
  return;
}

