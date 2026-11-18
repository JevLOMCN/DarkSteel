// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b55f1f0

UClass * __cdecl UDS_PlayerSkillAbilityData_InstallCamp::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerSkillAbilityData_InstallCamp.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerSkillAbilityData_InstallCamp",
               &Z_Registration_Info_UClass_UDS_PlayerSkillAbilityData_InstallCamp.InnerSingleton,
               StaticRegisterNativesUDS_PlayerSkillAbilityData_InstallCamp,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PlayerSkillAbilityData_InstallCamp>,
               InternalVTableHelperCtorCaller<UDS_PlayerSkillAbilityData_InstallCamp>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerSkillAbilityData_InstallCamp.InnerSingleton;
}

// UDS_PlayerSkillAbilityData_InstallCamp @ 14b5643e0

UDS_PlayerSkillAbilityData_InstallCamp * __thiscall
UDS_PlayerSkillAbilityData_InstallCamp::UDS_PlayerSkillAbilityData_InstallCamp
          (UDS_PlayerSkillAbilityData_InstallCamp *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->bAbleInstallCamp = false;
  this->_padding_ = (longlong)&___7UDS_PlayerSkillAbilityData_InstallCamp__6B_;
  this->InstallCampUnableReason = None;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->InstallCampLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InstallCampLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->ItemTID = 0;
  this->CampTID = 0;
  (this->InstallCampLocation).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// UDS_PlayerSkillAbilityData_InstallCamp @ 14b564430

UDS_PlayerSkillAbilityData_InstallCamp * __thiscall
UDS_PlayerSkillAbilityData_InstallCamp::UDS_PlayerSkillAbilityData_InstallCamp
          (UDS_PlayerSkillAbilityData_InstallCamp *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->bAbleInstallCamp = false;
  this->_padding_ = (longlong)&___7UDS_PlayerSkillAbilityData_InstallCamp__6B_;
  this->InstallCampUnableReason = None;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->InstallCampLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InstallCampLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->ItemTID = 0;
  this->CampTID = 0;
  (this->InstallCampLocation).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// ~UDS_PlayerSkillAbilityData_InstallCamp @ 14b5651c0

void __thiscall
UDS_PlayerSkillAbilityData_InstallCamp::~UDS_PlayerSkillAbilityData_InstallCamp
          (UDS_PlayerSkillAbilityData_InstallCamp *this)

{
  this->_padding_ = (longlong)&___7UDS_PlayerSkillAbilityData_InstallCamp__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b5676e0

UClass * __cdecl UDS_PlayerSkillAbilityData_InstallCamp::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerSkillAbilityData_InstallCamp.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerSkillAbilityData_InstallCamp",
               &Z_Registration_Info_UClass_UDS_PlayerSkillAbilityData_InstallCamp.InnerSingleton,
               StaticRegisterNativesUDS_PlayerSkillAbilityData_InstallCamp,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PlayerSkillAbilityData_InstallCamp>,
               InternalVTableHelperCtorCaller<UDS_PlayerSkillAbilityData_InstallCamp>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerSkillAbilityData_InstallCamp.InnerSingleton;
}

// StaticRegisterNativesUDS_PlayerSkillAbilityData_InstallCamp @ 14b5680f0

void __cdecl
UDS_PlayerSkillAbilityData_InstallCamp::StaticRegisterNativesUDS_PlayerSkillAbilityData_InstallCamp
          (void)

{
  return;
}

// ResetData @ 14ba69010

void __thiscall
UDS_PlayerSkillAbilityData_InstallCamp::ResetData(UDS_PlayerSkillAbilityData_InstallCamp *this)

{
  undefined8 uVar1;
  
  this->bAbleInstallCamp = false;
  this->InstallCampUnableReason = None;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->InstallCampLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InstallCampLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->InstallCampLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->ItemTID = 0;
  this->CampTID = 0;
  return;
}

