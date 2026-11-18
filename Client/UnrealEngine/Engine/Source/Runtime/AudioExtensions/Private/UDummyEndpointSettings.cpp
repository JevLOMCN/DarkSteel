// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 7

// StaticClass @ 14452b530

UClass * __cdecl UDummyEndpointSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDummyEndpointSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"DummyEndpointSettings",
               &Z_Registration_Info_UClass_UDummyEndpointSettings.InnerSingleton,
               StaticRegisterNativesUDummyEndpointSettings,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDummyEndpointSettings>,
               InternalVTableHelperCtorCaller<UDummyEndpointSettings>,local_res8,
               UAudioEndpointSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDummyEndpointSettings.InnerSingleton;
}

// UDummyEndpointSettings @ 144530030

UDummyEndpointSettings * __thiscall
UDummyEndpointSettings::UDummyEndpointSettings(UDummyEndpointSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDummyEndpointSettings__6B_;
  return this;
}

// UDummyEndpointSettings @ 144530060

UDummyEndpointSettings * __thiscall
UDummyEndpointSettings::UDummyEndpointSettings
          (UDummyEndpointSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDummyEndpointSettings__6B_;
  return this;
}

// ~UDummyEndpointSettings @ 144530bb0

void __thiscall UDummyEndpointSettings::~UDummyEndpointSettings(UDummyEndpointSettings *this)

{
  *(undefined ***)this = &___7UAudioEndpointSettingsBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 144534e60

UClass * __cdecl UDummyEndpointSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDummyEndpointSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"DummyEndpointSettings",
               &Z_Registration_Info_UClass_UDummyEndpointSettings.InnerSingleton,
               StaticRegisterNativesUDummyEndpointSettings,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDummyEndpointSettings>,
               InternalVTableHelperCtorCaller<UDummyEndpointSettings>,local_res8,
               UAudioEndpointSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDummyEndpointSettings.InnerSingleton;
}

// GetProxy @ 1445356f0

TUniquePtr<IAudioEndpointSettingsProxy,TDefaultDelete<IAudioEndpointSettingsProxy>_> __thiscall
UDummyEndpointSettings::GetProxy(UDummyEndpointSettings *this)

{
  IAudioEndpointSettingsProxy IVar1;
  IAudioEndpointSettingsProxy *in_RDX;
  
  IVar1 = (IAudioEndpointSettingsProxy)::operator_new(8);
  if (IVar1 != (IAudioEndpointSettingsProxy)0x0) {
    *in_RDX = IVar1;
    *(undefined ***)IVar1 = &___7FDummyEndpointSettingsProxy__6B_;
    return (TUniquePtr<IAudioEndpointSettingsProxy,TDefaultDelete<IAudioEndpointSettingsProxy>_>)
           in_RDX;
  }
  *in_RDX = (IAudioEndpointSettingsProxy)0x0;
  return (TUniquePtr<IAudioEndpointSettingsProxy,TDefaultDelete<IAudioEndpointSettingsProxy>_>)
         in_RDX;
}

// StaticRegisterNativesUDummyEndpointSettings @ 144537af0

void __cdecl UDummyEndpointSettings::StaticRegisterNativesUDummyEndpointSettings(void)

{
  return;
}

