// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 6

// StaticClass @ 14452b070

UClass * __cdecl UReverbPluginSourceSettingsBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReverbPluginSourceSettingsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"ReverbPluginSourceSettingsBase",
               &Z_Registration_Info_UClass_UReverbPluginSourceSettingsBase.InnerSingleton,
               StaticRegisterNativesUReverbPluginSourceSettingsBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UReverbPluginSourceSettingsBase>,
               InternalVTableHelperCtorCaller<UReverbPluginSourceSettingsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReverbPluginSourceSettingsBase.InnerSingleton;
}

// UReverbPluginSourceSettingsBase @ 1445300f0

UReverbPluginSourceSettingsBase * __thiscall
UReverbPluginSourceSettingsBase::UReverbPluginSourceSettingsBase
          (UReverbPluginSourceSettingsBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UReverbPluginSourceSettingsBase__6B_;
  return this;
}

// UReverbPluginSourceSettingsBase @ 144530120

UReverbPluginSourceSettingsBase * __thiscall
UReverbPluginSourceSettingsBase::UReverbPluginSourceSettingsBase
          (UReverbPluginSourceSettingsBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UReverbPluginSourceSettingsBase__6B_;
  return this;
}

// ~UReverbPluginSourceSettingsBase @ 144530bf0

void __thiscall
UReverbPluginSourceSettingsBase::~UReverbPluginSourceSettingsBase
          (UReverbPluginSourceSettingsBase *this)

{
  *(undefined ***)this = &___7UReverbPluginSourceSettingsBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 144534fd0

UClass * __cdecl UReverbPluginSourceSettingsBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReverbPluginSourceSettingsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"ReverbPluginSourceSettingsBase",
               &Z_Registration_Info_UClass_UReverbPluginSourceSettingsBase.InnerSingleton,
               StaticRegisterNativesUReverbPluginSourceSettingsBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UReverbPluginSourceSettingsBase>,
               InternalVTableHelperCtorCaller<UReverbPluginSourceSettingsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReverbPluginSourceSettingsBase.InnerSingleton;
}

// StaticRegisterNativesUReverbPluginSourceSettingsBase @ 144537b10

void __cdecl
UReverbPluginSourceSettingsBase::StaticRegisterNativesUReverbPluginSourceSettingsBase(void)

{
  return;
}

