// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b5902c0

UClass * __cdecl UDS_SkillRotateAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillRotateAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillRotateAbilityData",
               &Z_Registration_Info_UClass_UDS_SkillRotateAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_SkillRotateAbilityData,0x58,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_SkillRotateAbilityData>,
               InternalVTableHelperCtorCaller<UDS_SkillRotateAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillRotateAbilityData.InnerSingleton;
}

// UDS_SkillRotateAbilityData @ 14b594bd0

UDS_SkillRotateAbilityData * __thiscall
UDS_SkillRotateAbilityData::UDS_SkillRotateAbilityData
          (UDS_SkillRotateAbilityData *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  *(undefined ***)this = &___7UDS_SkillRotateAbilityData__6B_;
  return this;
}

// UDS_SkillRotateAbilityData @ 14b594c00

UDS_SkillRotateAbilityData * __thiscall
UDS_SkillRotateAbilityData::UDS_SkillRotateAbilityData
          (UDS_SkillRotateAbilityData *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  *(undefined ***)this = &___7UDS_SkillRotateAbilityData__6B_;
  return this;
}

// ~UDS_SkillRotateAbilityData @ 14b595590

void __thiscall
UDS_SkillRotateAbilityData::~UDS_SkillRotateAbilityData(UDS_SkillRotateAbilityData *this)

{
  *(undefined ***)this = &___7UDS_SkillRotateAbilityData__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b597330

UClass * __cdecl UDS_SkillRotateAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillRotateAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillRotateAbilityData",
               &Z_Registration_Info_UClass_UDS_SkillRotateAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_SkillRotateAbilityData,0x58,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_SkillRotateAbilityData>,
               InternalVTableHelperCtorCaller<UDS_SkillRotateAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillRotateAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_SkillRotateAbilityData @ 14b5978f0

void __cdecl UDS_SkillRotateAbilityData::StaticRegisterNativesUDS_SkillRotateAbilityData(void)

{
  return;
}

// ResetData @ 14ba69570

void __thiscall UDS_SkillRotateAbilityData::ResetData(UDS_SkillRotateAbilityData *this)

{
  return;
}

