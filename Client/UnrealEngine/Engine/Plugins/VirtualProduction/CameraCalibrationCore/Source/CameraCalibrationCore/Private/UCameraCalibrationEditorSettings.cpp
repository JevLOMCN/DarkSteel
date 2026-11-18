// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 9

// StaticClass @ 14d678ae0

UClass * __cdecl UCameraCalibrationEditorSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraCalibrationEditorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"CameraCalibrationEditorSettings",
               &Z_Registration_Info_UClass_UCameraCalibrationEditorSettings.InnerSingleton,
               StaticRegisterNativesUCameraCalibrationEditorSettings,0x38,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UCameraCalibrationEditorSettings>,
               InternalVTableHelperCtorCaller<UCameraCalibrationEditorSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraCalibrationEditorSettings.InnerSingleton;
}

// UCameraCalibrationEditorSettings @ 14d6a9e70

UCameraCalibrationEditorSettings * __thiscall
UCameraCalibrationEditorSettings::UCameraCalibrationEditorSettings
          (UCameraCalibrationEditorSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  *(undefined ***)this = &___7UCameraCalibrationEditorSettings__6B_;
  return this;
}

// UCameraCalibrationEditorSettings @ 14d6a9ea0

UCameraCalibrationEditorSettings * __thiscall
UCameraCalibrationEditorSettings::UCameraCalibrationEditorSettings
          (UCameraCalibrationEditorSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,pFVar1);
  *(undefined ***)this = &___7UCameraCalibrationEditorSettings__6B_;
  return this;
}

// ~UCameraCalibrationEditorSettings @ 14d6acbe0

void __thiscall
UCameraCalibrationEditorSettings::~UCameraCalibrationEditorSettings
          (UCameraCalibrationEditorSettings *this)

{
  *(undefined ***)this = &___7UCameraCalibrationEditorSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetCategoryName @ 14d6d29d0

FName __thiscall
UCameraCalibrationEditorSettings::GetCategoryName(UCameraCalibrationEditorSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"Plugins");
  return in_RDX;
}

// GetPrivateStaticClass @ 14d6d8040

UClass * __cdecl UCameraCalibrationEditorSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraCalibrationEditorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"CameraCalibrationEditorSettings",
               &Z_Registration_Info_UClass_UCameraCalibrationEditorSettings.InnerSingleton,
               StaticRegisterNativesUCameraCalibrationEditorSettings,0x38,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UCameraCalibrationEditorSettings>,
               InternalVTableHelperCtorCaller<UCameraCalibrationEditorSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraCalibrationEditorSettings.InnerSingleton;
}

// GetUserLensFile @ 14d6dc770

ULensFile * __thiscall
UCameraCalibrationEditorSettings::GetUserLensFile(UCameraCalibrationEditorSettings *this)

{
  return (ULensFile *)0x0;
}

// SetUserLensFile @ 14d6ee8a0

void __thiscall
UCameraCalibrationEditorSettings::SetUserLensFile
          (UCameraCalibrationEditorSettings *this,ULensFile *param_1)

{
  return;
}

// StaticRegisterNativesUCameraCalibrationEditorSettings @ 14d6f0110

void __cdecl
UCameraCalibrationEditorSettings::StaticRegisterNativesUCameraCalibrationEditorSettings(void)

{
  return;
}

