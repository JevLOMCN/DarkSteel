// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b55f620

UClass * __cdecl UDS_PlayerSkillAbilityData_InstallCampCasting::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerSkillAbilityData_InstallCampCasting.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerSkillAbilityData_InstallCampCasting",
               &Z_Registration_Info_UClass_UDS_PlayerSkillAbilityData_InstallCampCasting.
                InnerSingleton,StaticRegisterNativesUDS_PlayerSkillAbilityData_InstallCampCasting,
               0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_PlayerSkillAbilityData_InstallCampCasting>,
               InternalVTableHelperCtorCaller<UDS_PlayerSkillAbilityData_InstallCampCasting>,
               local_res8,UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerSkillAbilityData_InstallCampCasting.InnerSingleton;
}

// UDS_PlayerSkillAbilityData_InstallCampCasting @ 14b564480

UDS_PlayerSkillAbilityData_InstallCampCasting * __thiscall
UDS_PlayerSkillAbilityData_InstallCampCasting::UDS_PlayerSkillAbilityData_InstallCampCasting
          (UDS_PlayerSkillAbilityData_InstallCampCasting *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->CampTID = 0;
  this->_padding_ = (longlong)&___7UDS_PlayerSkillAbilityData_InstallCampCasting__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->InstallLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InstallLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->InstallLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// UDS_PlayerSkillAbilityData_InstallCampCasting @ 14b5644d0

UDS_PlayerSkillAbilityData_InstallCampCasting * __thiscall
UDS_PlayerSkillAbilityData_InstallCampCasting::UDS_PlayerSkillAbilityData_InstallCampCasting
          (UDS_PlayerSkillAbilityData_InstallCampCasting *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->CampTID = 0;
  this->_padding_ = (longlong)&___7UDS_PlayerSkillAbilityData_InstallCampCasting__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->InstallLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InstallLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->InstallLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// ~UDS_PlayerSkillAbilityData_InstallCampCasting @ 14b5651e0

void __thiscall
UDS_PlayerSkillAbilityData_InstallCampCasting::~UDS_PlayerSkillAbilityData_InstallCampCasting
          (UDS_PlayerSkillAbilityData_InstallCampCasting *this)

{
  this->_padding_ = (longlong)&___7UDS_PlayerSkillAbilityData_InstallCampCasting__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b5677a0

UClass * __cdecl UDS_PlayerSkillAbilityData_InstallCampCasting::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerSkillAbilityData_InstallCampCasting.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerSkillAbilityData_InstallCampCasting",
               &Z_Registration_Info_UClass_UDS_PlayerSkillAbilityData_InstallCampCasting.
                InnerSingleton,StaticRegisterNativesUDS_PlayerSkillAbilityData_InstallCampCasting,
               0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_PlayerSkillAbilityData_InstallCampCasting>,
               InternalVTableHelperCtorCaller<UDS_PlayerSkillAbilityData_InstallCampCasting>,
               local_res8,UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerSkillAbilityData_InstallCampCasting.InnerSingleton;
}

// StaticRegisterNativesUDS_PlayerSkillAbilityData_InstallCampCasting @ 14b568100

void __cdecl
UDS_PlayerSkillAbilityData_InstallCampCasting::
StaticRegisterNativesUDS_PlayerSkillAbilityData_InstallCampCasting(void)

{
  return;
}

// ResetData @ 14ba69040

void __thiscall
UDS_PlayerSkillAbilityData_InstallCampCasting::ResetData
          (UDS_PlayerSkillAbilityData_InstallCampCasting *this)

{
  undefined8 uVar1;
  
  this->CampTID = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->InstallLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InstallLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->InstallLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

