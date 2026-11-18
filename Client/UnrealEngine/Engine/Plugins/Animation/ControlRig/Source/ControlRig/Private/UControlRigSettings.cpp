// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticClass @ 14a381ca0

UClass * __cdecl UControlRigSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigSettings",
               &Z_Registration_Info_UClass_UControlRigSettings.InnerSingleton,
               StaticRegisterNativesUControlRigSettings,0x38,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UControlRigSettings>,
               InternalVTableHelperCtorCaller<UControlRigSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigSettings.InnerSingleton;
}

// UControlRigSettings @ 14a3b8f90

UControlRigSettings * __thiscall
UControlRigSettings::UControlRigSettings(UControlRigSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  *(undefined ***)this = &___7UControlRigSettings__6B_;
  return this;
}

// UControlRigSettings @ 14a3b8fc0

UControlRigSettings * __thiscall
UControlRigSettings::UControlRigSettings(UControlRigSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  *(undefined ***)this = &___7UControlRigSettings__6B_;
  return this;
}

// ~UControlRigSettings @ 14a3bd100

void __thiscall UControlRigSettings::~UControlRigSettings(UControlRigSettings *this)

{
  *(undefined ***)this = &___7UControlRigSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14a416fb0

UClass * __cdecl UControlRigSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigSettings",
               &Z_Registration_Info_UClass_UControlRigSettings.InnerSingleton,
               StaticRegisterNativesUControlRigSettings,0x38,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UControlRigSettings>,
               InternalVTableHelperCtorCaller<UControlRigSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigSettings.InnerSingleton;
}

// StaticRegisterNativesUControlRigSettings @ 14a45c3d0

void __cdecl UControlRigSettings::StaticRegisterNativesUControlRigSettings(void)

{
  return;
}

