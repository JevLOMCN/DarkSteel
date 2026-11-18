// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b40d110

UClass * __cdecl UDS_ActiveSkillAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ActiveSkillAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ActiveSkillAbilityData",
               &Z_Registration_Info_UClass_UDS_ActiveSkillAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_ActiveSkillAbilityData,0x58,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_ActiveSkillAbilityData>,
               InternalVTableHelperCtorCaller<UDS_ActiveSkillAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ActiveSkillAbilityData.InnerSingleton;
}

// UDS_ActiveSkillAbilityData @ 14b4113a0

UDS_ActiveSkillAbilityData * __thiscall
UDS_ActiveSkillAbilityData::UDS_ActiveSkillAbilityData
          (UDS_ActiveSkillAbilityData *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  *(undefined ***)this = &___7UDS_ActiveSkillAbilityData__6B_;
  return this;
}

// ~UDS_ActiveSkillAbilityData @ 14b411ec0

void __thiscall
UDS_ActiveSkillAbilityData::~UDS_ActiveSkillAbilityData(UDS_ActiveSkillAbilityData *this)

{
  *(undefined ***)this = &___7UDS_ActiveSkillAbilityData__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b4135a0

UClass * __cdecl UDS_ActiveSkillAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ActiveSkillAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ActiveSkillAbilityData",
               &Z_Registration_Info_UClass_UDS_ActiveSkillAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_ActiveSkillAbilityData,0x58,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_ActiveSkillAbilityData>,
               InternalVTableHelperCtorCaller<UDS_ActiveSkillAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ActiveSkillAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_ActiveSkillAbilityData @ 14b414270

void __cdecl UDS_ActiveSkillAbilityData::StaticRegisterNativesUDS_ActiveSkillAbilityData(void)

{
  return;
}

// UDS_ActiveSkillAbilityData @ 14b9d7ec0

UDS_ActiveSkillAbilityData * __thiscall
UDS_ActiveSkillAbilityData::UDS_ActiveSkillAbilityData
          (UDS_ActiveSkillAbilityData *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  *(undefined ***)this = &___7UDS_ActiveSkillAbilityData__6B_;
  return this;
}

// ResetData @ 14ba18530

void __thiscall UDS_ActiveSkillAbilityData::ResetData(UDS_ActiveSkillAbilityData *this)

{
  return;
}

