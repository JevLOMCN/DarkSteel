// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 6

// StaticClass @ 14452ae10

UClass * __cdecl USourceDataOverridePluginSourceSettingsBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceDataOverridePluginSourceSettingsBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"SourceDataOverridePluginSourceSettingsBase",
               &Z_Registration_Info_UClass_USourceDataOverridePluginSourceSettingsBase.
                InnerSingleton,StaticRegisterNativesUSourceDataOverridePluginSourceSettingsBase,0x28
               ,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USourceDataOverridePluginSourceSettingsBase>,
               InternalVTableHelperCtorCaller<USourceDataOverridePluginSourceSettingsBase>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceDataOverridePluginSourceSettingsBase.InnerSingleton;
}

// USourceDataOverridePluginSourceSettingsBase @ 144530350

USourceDataOverridePluginSourceSettingsBase * __thiscall
USourceDataOverridePluginSourceSettingsBase::USourceDataOverridePluginSourceSettingsBase
          (USourceDataOverridePluginSourceSettingsBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USourceDataOverridePluginSourceSettingsBase__6B_;
  return this;
}

// USourceDataOverridePluginSourceSettingsBase @ 144530380

USourceDataOverridePluginSourceSettingsBase * __thiscall
USourceDataOverridePluginSourceSettingsBase::USourceDataOverridePluginSourceSettingsBase
          (USourceDataOverridePluginSourceSettingsBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USourceDataOverridePluginSourceSettingsBase__6B_;
  return this;
}

// ~USourceDataOverridePluginSourceSettingsBase @ 144530cb0

void __thiscall
USourceDataOverridePluginSourceSettingsBase::~USourceDataOverridePluginSourceSettingsBase
          (USourceDataOverridePluginSourceSettingsBase *this)

{
  *(undefined ***)this = &___7USourceDataOverridePluginSourceSettingsBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1445353f0

UClass * __cdecl USourceDataOverridePluginSourceSettingsBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceDataOverridePluginSourceSettingsBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"SourceDataOverridePluginSourceSettingsBase",
               &Z_Registration_Info_UClass_USourceDataOverridePluginSourceSettingsBase.
                InnerSingleton,StaticRegisterNativesUSourceDataOverridePluginSourceSettingsBase,0x28
               ,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USourceDataOverridePluginSourceSettingsBase>,
               InternalVTableHelperCtorCaller<USourceDataOverridePluginSourceSettingsBase>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceDataOverridePluginSourceSettingsBase.InnerSingleton;
}

// StaticRegisterNativesUSourceDataOverridePluginSourceSettingsBase @ 144537b70

void __cdecl
USourceDataOverridePluginSourceSettingsBase::
StaticRegisterNativesUSourceDataOverridePluginSourceSettingsBase(void)

{
  return;
}

