// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticClass @ 14a153420

UClass * __cdecl URigVMEditorSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVMEditorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVMEditorSettings",
               &Z_Registration_Info_UClass_URigVMEditorSettings.InnerSingleton,
               StaticRegisterNativesURigVMEditorSettings,0x38,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<URigVMEditorSettings>,
               InternalVTableHelperCtorCaller<URigVMEditorSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVMEditorSettings.InnerSingleton;
}

// URigVMEditorSettings @ 14a190f10

URigVMEditorSettings * __thiscall
URigVMEditorSettings::URigVMEditorSettings(URigVMEditorSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  *(undefined ***)this = &___7URigVMEditorSettings__6B_;
  return this;
}

// URigVMEditorSettings @ 14a190f40

URigVMEditorSettings * __thiscall
URigVMEditorSettings::URigVMEditorSettings(URigVMEditorSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  *(undefined ***)this = &___7URigVMEditorSettings__6B_;
  return this;
}

// ~URigVMEditorSettings @ 14a191e10

void __thiscall URigVMEditorSettings::~URigVMEditorSettings(URigVMEditorSettings *this)

{
  *(undefined ***)this = &___7URigVMEditorSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetCategoryName @ 14a1ab580

FName __thiscall URigVMEditorSettings::GetCategoryName(URigVMEditorSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"ContentEditors");
  return in_RDX;
}

// GetPrivateStaticClass @ 14a1abfe0

UClass * __cdecl URigVMEditorSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVMEditorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVMEditorSettings",
               &Z_Registration_Info_UClass_URigVMEditorSettings.InnerSingleton,
               StaticRegisterNativesURigVMEditorSettings,0x38,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<URigVMEditorSettings>,
               InternalVTableHelperCtorCaller<URigVMEditorSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVMEditorSettings.InnerSingleton;
}

// StaticRegisterNativesURigVMEditorSettings @ 14a1ea970

void __cdecl URigVMEditorSettings::StaticRegisterNativesURigVMEditorSettings(void)

{
  return;
}

