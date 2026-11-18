// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticClass @ 14a381f20

UClass * __cdecl UControlRigEditorSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigEditorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigEditorSettings",
               &Z_Registration_Info_UClass_UControlRigEditorSettings.InnerSingleton,
               StaticRegisterNativesUControlRigEditorSettings,0x38,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UControlRigEditorSettings>,
               InternalVTableHelperCtorCaller<UControlRigEditorSettings>,local_res8,
               URigVMEditorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigEditorSettings.InnerSingleton;
}

// UControlRigEditorSettings @ 14a3b8ba0

UControlRigEditorSettings * __thiscall
UControlRigEditorSettings::UControlRigEditorSettings
          (UControlRigEditorSettings *this,FVTableHelper *param_1)

{
  URigVMEditorSettings::URigVMEditorSettings((URigVMEditorSettings *)this,param_1);
  *(undefined ***)this = &___7UControlRigEditorSettings__6B_;
  return this;
}

// UControlRigEditorSettings @ 14a3b8bd0

UControlRigEditorSettings * __thiscall
UControlRigEditorSettings::UControlRigEditorSettings
          (UControlRigEditorSettings *this,FObjectInitializer *param_1)

{
  URigVMEditorSettings::URigVMEditorSettings((URigVMEditorSettings *)this,param_1);
  *(undefined ***)this = &___7UControlRigEditorSettings__6B_;
  return this;
}

// ~UControlRigEditorSettings @ 14a3bcfc0

void __thiscall
UControlRigEditorSettings::~UControlRigEditorSettings(UControlRigEditorSettings *this)

{
  *(undefined ***)this = &___7UControlRigEditorSettings__6B_;
  URigVMEditorSettings::~URigVMEditorSettings((URigVMEditorSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14a416c20

UClass * __cdecl UControlRigEditorSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigEditorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigEditorSettings",
               &Z_Registration_Info_UClass_UControlRigEditorSettings.InnerSingleton,
               StaticRegisterNativesUControlRigEditorSettings,0x38,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UControlRigEditorSettings>,
               InternalVTableHelperCtorCaller<UControlRigEditorSettings>,local_res8,
               URigVMEditorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigEditorSettings.InnerSingleton;
}

// StaticRegisterNativesUControlRigEditorSettings @ 14a45c350

void __cdecl UControlRigEditorSettings::StaticRegisterNativesUControlRigEditorSettings(void)

{
  return;
}

