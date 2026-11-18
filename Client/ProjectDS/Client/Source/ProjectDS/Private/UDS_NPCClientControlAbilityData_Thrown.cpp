// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b534b60

UClass * __cdecl UDS_NPCClientControlAbilityData_Thrown::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCClientControlAbilityData_Thrown.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCClientControlAbilityData_Thrown",
               &Z_Registration_Info_UClass_UDS_NPCClientControlAbilityData_Thrown.InnerSingleton,
               StaticRegisterNativesUDS_NPCClientControlAbilityData_Thrown,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NPCClientControlAbilityData_Thrown>,
               InternalVTableHelperCtorCaller<UDS_NPCClientControlAbilityData_Thrown>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCClientControlAbilityData_Thrown.InnerSingleton;
}

// UDS_NPCClientControlAbilityData_Thrown @ 14b538590

UDS_NPCClientControlAbilityData_Thrown * __thiscall
UDS_NPCClientControlAbilityData_Thrown::UDS_NPCClientControlAbilityData_Thrown
          (UDS_NPCClientControlAbilityData_Thrown *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCClientControlAbilityData_Thrown__6B_;
  this->InstigatorEntityID = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
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

// UDS_NPCClientControlAbilityData_Thrown @ 14b538640

UDS_NPCClientControlAbilityData_Thrown * __thiscall
UDS_NPCClientControlAbilityData_Thrown::UDS_NPCClientControlAbilityData_Thrown
          (UDS_NPCClientControlAbilityData_Thrown *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCClientControlAbilityData_Thrown__6B_;
  this->InstigatorEntityID = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
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

// ~UDS_NPCClientControlAbilityData_Thrown @ 14b538f80

void __thiscall
UDS_NPCClientControlAbilityData_Thrown::~UDS_NPCClientControlAbilityData_Thrown
          (UDS_NPCClientControlAbilityData_Thrown *this)

{
  this->_padding_ = (longlong)&___7UDS_NPCClientControlAbilityData_Thrown__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b53a450

UClass * __cdecl UDS_NPCClientControlAbilityData_Thrown::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCClientControlAbilityData_Thrown.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCClientControlAbilityData_Thrown",
               &Z_Registration_Info_UClass_UDS_NPCClientControlAbilityData_Thrown.InnerSingleton,
               StaticRegisterNativesUDS_NPCClientControlAbilityData_Thrown,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NPCClientControlAbilityData_Thrown>,
               InternalVTableHelperCtorCaller<UDS_NPCClientControlAbilityData_Thrown>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCClientControlAbilityData_Thrown.InnerSingleton;
}

// StaticRegisterNativesUDS_NPCClientControlAbilityData_Thrown @ 14b53a990

void __cdecl
UDS_NPCClientControlAbilityData_Thrown::StaticRegisterNativesUDS_NPCClientControlAbilityData_Thrown
          (void)

{
  return;
}

// ResetData @ 14ba68d00

void __thiscall
UDS_NPCClientControlAbilityData_Thrown::ResetData(UDS_NPCClientControlAbilityData_Thrown *this)

{
  undefined8 uVar1;
  
  this->InstigatorEntityID = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
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
  (this->ThrowStartSkillInfo).InitialVelocity.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ThrowStartSkillInfo).TotalTime = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ThrowStartSkillInfo).ImpactTime = 0.0;
  (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

