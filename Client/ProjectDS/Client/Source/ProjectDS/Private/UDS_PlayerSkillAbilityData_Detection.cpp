// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b55efd0

UClass * __cdecl UDS_PlayerSkillAbilityData_Detection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerSkillAbilityData_Detection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerSkillAbilityData_Detection",
               &Z_Registration_Info_UClass_UDS_PlayerSkillAbilityData_Detection.InnerSingleton,
               StaticRegisterNativesUDS_PlayerSkillAbilityData_Detection,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PlayerSkillAbilityData_Detection>,
               InternalVTableHelperCtorCaller<UDS_PlayerSkillAbilityData_Detection>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerSkillAbilityData_Detection.InnerSingleton;
}

// UDS_PlayerSkillAbilityData_Detection @ 14b564380

UDS_PlayerSkillAbilityData_Detection * __thiscall
UDS_PlayerSkillAbilityData_Detection::UDS_PlayerSkillAbilityData_Detection
          (UDS_PlayerSkillAbilityData_Detection *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  *(undefined ***)this = &___7UDS_PlayerSkillAbilityData_Detection__6B_;
  return this;
}

// UDS_PlayerSkillAbilityData_Detection @ 14b5643b0

UDS_PlayerSkillAbilityData_Detection * __thiscall
UDS_PlayerSkillAbilityData_Detection::UDS_PlayerSkillAbilityData_Detection
          (UDS_PlayerSkillAbilityData_Detection *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  *(undefined ***)this = &___7UDS_PlayerSkillAbilityData_Detection__6B_;
  return this;
}

// ~UDS_PlayerSkillAbilityData_Detection @ 14b5651a0

void __thiscall
UDS_PlayerSkillAbilityData_Detection::~UDS_PlayerSkillAbilityData_Detection
          (UDS_PlayerSkillAbilityData_Detection *this)

{
  *(undefined ***)this = &___7UDS_PlayerSkillAbilityData_Detection__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b567620

UClass * __cdecl UDS_PlayerSkillAbilityData_Detection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerSkillAbilityData_Detection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerSkillAbilityData_Detection",
               &Z_Registration_Info_UClass_UDS_PlayerSkillAbilityData_Detection.InnerSingleton,
               StaticRegisterNativesUDS_PlayerSkillAbilityData_Detection,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PlayerSkillAbilityData_Detection>,
               InternalVTableHelperCtorCaller<UDS_PlayerSkillAbilityData_Detection>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerSkillAbilityData_Detection.InnerSingleton;
}

// StaticRegisterNativesUDS_PlayerSkillAbilityData_Detection @ 14b5680e0

void __cdecl
UDS_PlayerSkillAbilityData_Detection::StaticRegisterNativesUDS_PlayerSkillAbilityData_Detection
          (void)

{
  return;
}

// ResetData @ 14ba69000

void __thiscall
UDS_PlayerSkillAbilityData_Detection::ResetData(UDS_PlayerSkillAbilityData_Detection *this)

{
  return;
}

