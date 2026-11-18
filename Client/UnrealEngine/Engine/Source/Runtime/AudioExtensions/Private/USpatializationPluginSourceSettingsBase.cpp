// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 6

// StaticClass @ 14452ad60

UClass * __cdecl USpatializationPluginSourceSettingsBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpatializationPluginSourceSettingsBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"SpatializationPluginSourceSettingsBase",
               &Z_Registration_Info_UClass_USpatializationPluginSourceSettingsBase.InnerSingleton,
               StaticRegisterNativesUSpatializationPluginSourceSettingsBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USpatializationPluginSourceSettingsBase>,
               InternalVTableHelperCtorCaller<USpatializationPluginSourceSettingsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpatializationPluginSourceSettingsBase.InnerSingleton;
}

// USpatializationPluginSourceSettingsBase @ 1445303b0

USpatializationPluginSourceSettingsBase * __thiscall
USpatializationPluginSourceSettingsBase::USpatializationPluginSourceSettingsBase
          (USpatializationPluginSourceSettingsBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USpatializationPluginSourceSettingsBase__6B_;
  return this;
}

// USpatializationPluginSourceSettingsBase @ 1445303e0

USpatializationPluginSourceSettingsBase * __thiscall
USpatializationPluginSourceSettingsBase::USpatializationPluginSourceSettingsBase
          (USpatializationPluginSourceSettingsBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USpatializationPluginSourceSettingsBase__6B_;
  return this;
}

// ~USpatializationPluginSourceSettingsBase @ 144530cd0

void __thiscall
USpatializationPluginSourceSettingsBase::~USpatializationPluginSourceSettingsBase
          (USpatializationPluginSourceSettingsBase *this)

{
  *(undefined ***)this = &___7USpatializationPluginSourceSettingsBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1445354a0

UClass * __cdecl USpatializationPluginSourceSettingsBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpatializationPluginSourceSettingsBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"SpatializationPluginSourceSettingsBase",
               &Z_Registration_Info_UClass_USpatializationPluginSourceSettingsBase.InnerSingleton,
               StaticRegisterNativesUSpatializationPluginSourceSettingsBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USpatializationPluginSourceSettingsBase>,
               InternalVTableHelperCtorCaller<USpatializationPluginSourceSettingsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpatializationPluginSourceSettingsBase.InnerSingleton;
}

// StaticRegisterNativesUSpatializationPluginSourceSettingsBase @ 144537b80

void __cdecl
USpatializationPluginSourceSettingsBase::
StaticRegisterNativesUSpatializationPluginSourceSettingsBase(void)

{
  return;
}

