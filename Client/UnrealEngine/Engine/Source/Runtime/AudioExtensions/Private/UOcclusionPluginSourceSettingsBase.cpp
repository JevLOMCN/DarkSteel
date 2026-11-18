// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 6

// StaticClass @ 14452aec0

UClass * __cdecl UOcclusionPluginSourceSettingsBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOcclusionPluginSourceSettingsBase.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"OcclusionPluginSourceSettingsBase",
               &Z_Registration_Info_UClass_UOcclusionPluginSourceSettingsBase.InnerSingleton,
               StaticRegisterNativesUOcclusionPluginSourceSettingsBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOcclusionPluginSourceSettingsBase>,
               InternalVTableHelperCtorCaller<UOcclusionPluginSourceSettingsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOcclusionPluginSourceSettingsBase.InnerSingleton;
}

// UOcclusionPluginSourceSettingsBase @ 144530090

UOcclusionPluginSourceSettingsBase * __thiscall
UOcclusionPluginSourceSettingsBase::UOcclusionPluginSourceSettingsBase
          (UOcclusionPluginSourceSettingsBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UOcclusionPluginSourceSettingsBase__6B_;
  return this;
}

// UOcclusionPluginSourceSettingsBase @ 1445300c0

UOcclusionPluginSourceSettingsBase * __thiscall
UOcclusionPluginSourceSettingsBase::UOcclusionPluginSourceSettingsBase
          (UOcclusionPluginSourceSettingsBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UOcclusionPluginSourceSettingsBase__6B_;
  return this;
}

// ~UOcclusionPluginSourceSettingsBase @ 144530bd0

void __thiscall
UOcclusionPluginSourceSettingsBase::~UOcclusionPluginSourceSettingsBase
          (UOcclusionPluginSourceSettingsBase *this)

{
  *(undefined ***)this = &___7UOcclusionPluginSourceSettingsBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 144534f20

UClass * __cdecl UOcclusionPluginSourceSettingsBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOcclusionPluginSourceSettingsBase.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"OcclusionPluginSourceSettingsBase",
               &Z_Registration_Info_UClass_UOcclusionPluginSourceSettingsBase.InnerSingleton,
               StaticRegisterNativesUOcclusionPluginSourceSettingsBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOcclusionPluginSourceSettingsBase>,
               InternalVTableHelperCtorCaller<UOcclusionPluginSourceSettingsBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOcclusionPluginSourceSettingsBase.InnerSingleton;
}

// StaticRegisterNativesUOcclusionPluginSourceSettingsBase @ 144537b00

void __cdecl
UOcclusionPluginSourceSettingsBase::StaticRegisterNativesUOcclusionPluginSourceSettingsBase(void)

{
  return;
}

