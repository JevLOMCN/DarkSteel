// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 6

// StaticClass @ 146c45030

UClass * __cdecl ULevelSequenceBurnInInitSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequenceBurnInInitSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceBurnInInitSettings",
               &Z_Registration_Info_UClass_ULevelSequenceBurnInInitSettings.InnerSingleton,
               StaticRegisterNativesULevelSequenceBurnInInitSettings,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelSequenceBurnInInitSettings>,
               InternalVTableHelperCtorCaller<ULevelSequenceBurnInInitSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequenceBurnInInitSettings.InnerSingleton;
}

// ULevelSequenceBurnInInitSettings @ 146c4e860

ULevelSequenceBurnInInitSettings * __thiscall
ULevelSequenceBurnInInitSettings::ULevelSequenceBurnInInitSettings
          (ULevelSequenceBurnInInitSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULevelSequenceBurnInInitSettings__6B_;
  return this;
}

// ULevelSequenceBurnInInitSettings @ 146c4e890

ULevelSequenceBurnInInitSettings * __thiscall
ULevelSequenceBurnInInitSettings::ULevelSequenceBurnInInitSettings
          (ULevelSequenceBurnInInitSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULevelSequenceBurnInInitSettings__6B_;
  return this;
}

// ~ULevelSequenceBurnInInitSettings @ 146c4f1f0

void __thiscall
ULevelSequenceBurnInInitSettings::~ULevelSequenceBurnInInitSettings
          (ULevelSequenceBurnInInitSettings *this)

{
  *(undefined ***)this = &___7ULevelSequenceBurnInInitSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146c559a0

UClass * __cdecl ULevelSequenceBurnInInitSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequenceBurnInInitSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceBurnInInitSettings",
               &Z_Registration_Info_UClass_ULevelSequenceBurnInInitSettings.InnerSingleton,
               StaticRegisterNativesULevelSequenceBurnInInitSettings,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelSequenceBurnInInitSettings>,
               InternalVTableHelperCtorCaller<ULevelSequenceBurnInInitSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequenceBurnInInitSettings.InnerSingleton;
}

// StaticRegisterNativesULevelSequenceBurnInInitSettings @ 146c5c5f0

void __cdecl
ULevelSequenceBurnInInitSettings::StaticRegisterNativesULevelSequenceBurnInInitSettings(void)

{
  return;
}

