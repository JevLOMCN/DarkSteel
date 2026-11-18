// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticClass @ 148aa8350

UClass * __cdecl UWorldPartitionEditorPerProjectUserSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionEditorPerProjectUserSettings.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionEditorPerProjectUserSettings",
               &Z_Registration_Info_UClass_UWorldPartitionEditorPerProjectUserSettings.
                InnerSingleton,StaticRegisterNativesUWorldPartitionEditorPerProjectUserSettings,0x38
               ,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UWorldPartitionEditorPerProjectUserSettings>,
               InternalVTableHelperCtorCaller<UWorldPartitionEditorPerProjectUserSettings>,
               aFStackX_8,UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionEditorPerProjectUserSettings.InnerSingleton;
}

// UWorldPartitionEditorPerProjectUserSettings @ 148ab51e0

UWorldPartitionEditorPerProjectUserSettings * __thiscall
UWorldPartitionEditorPerProjectUserSettings::UWorldPartitionEditorPerProjectUserSettings
          (UWorldPartitionEditorPerProjectUserSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionEditorPerProjectUserSettings__6B_;
  return this;
}

// ~UWorldPartitionEditorPerProjectUserSettings @ 148ab7400

void __thiscall
UWorldPartitionEditorPerProjectUserSettings::~UWorldPartitionEditorPerProjectUserSettings
          (UWorldPartitionEditorPerProjectUserSettings *this)

{
  *(undefined ***)this = &___7UWorldPartitionEditorPerProjectUserSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetPrivateStaticClass @ 148acf1f0

UClass * __cdecl UWorldPartitionEditorPerProjectUserSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionEditorPerProjectUserSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionEditorPerProjectUserSettings",
               &Z_Registration_Info_UClass_UWorldPartitionEditorPerProjectUserSettings.
                InnerSingleton,StaticRegisterNativesUWorldPartitionEditorPerProjectUserSettings,0x38
               ,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UWorldPartitionEditorPerProjectUserSettings>,
               InternalVTableHelperCtorCaller<UWorldPartitionEditorPerProjectUserSettings>,
               local_res8,UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionEditorPerProjectUserSettings.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionEditorPerProjectUserSettings @ 148adb840

void __cdecl
UWorldPartitionEditorPerProjectUserSettings::
StaticRegisterNativesUWorldPartitionEditorPerProjectUserSettings(void)

{
  return;
}

