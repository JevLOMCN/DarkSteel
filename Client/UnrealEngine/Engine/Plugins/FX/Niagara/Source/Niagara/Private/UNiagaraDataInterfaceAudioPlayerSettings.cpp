// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticClass @ 14907a7e0

UClass * __cdecl UNiagaraDataInterfaceAudioPlayerSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayerSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceAudioPlayerSettings",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayerSettings.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceAudioPlayerSettings,0x410,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceAudioPlayerSettings>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceAudioPlayerSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayerSettings.InnerSingleton;
}

// UNiagaraDataInterfaceAudioPlayerSettings @ 1490b3df0

UNiagaraDataInterfaceAudioPlayerSettings * __thiscall
UNiagaraDataInterfaceAudioPlayerSettings::UNiagaraDataInterfaceAudioPlayerSettings
          (UNiagaraDataInterfaceAudioPlayerSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bOverrideConcurrency = true;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceAudioPlayerSettings__6B_;
  (this->Concurrency).field0_0x0.DebugPtr = (USoundConcurrency *)0x0;
  this->bOverrideAttenuationSettings = true;
  FSoundAttenuationSettings::FSoundAttenuationSettings(&this->AttenuationSettings);
  return this;
}

// UNiagaraDataInterfaceAudioPlayerSettings @ 1490b3e30

UNiagaraDataInterfaceAudioPlayerSettings * __thiscall
UNiagaraDataInterfaceAudioPlayerSettings::UNiagaraDataInterfaceAudioPlayerSettings
          (UNiagaraDataInterfaceAudioPlayerSettings *this)

{
  UObject::UObject((UObject *)this);
  this->bOverrideConcurrency = true;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceAudioPlayerSettings__6B_;
  (this->Concurrency).field0_0x0.DebugPtr = (USoundConcurrency *)0x0;
  this->bOverrideAttenuationSettings = true;
  FSoundAttenuationSettings::FSoundAttenuationSettings(&this->AttenuationSettings);
  return this;
}

// ~UNiagaraDataInterfaceAudioPlayerSettings @ 1490b9040

void __thiscall
UNiagaraDataInterfaceAudioPlayerSettings::~UNiagaraDataInterfaceAudioPlayerSettings
          (UNiagaraDataInterfaceAudioPlayerSettings *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceAudioPlayerSettings__6B_;
  FSoundAttenuationSettings::~FSoundAttenuationSettings(&this->AttenuationSettings);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1491097e0

UClass * __cdecl UNiagaraDataInterfaceAudioPlayerSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayerSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceAudioPlayerSettings",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayerSettings.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceAudioPlayerSettings,0x410,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceAudioPlayerSettings>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceAudioPlayerSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayerSettings.InnerSingleton;
}

// StaticRegisterNativesUNiagaraDataInterfaceAudioPlayerSettings @ 149139f70

void __cdecl
UNiagaraDataInterfaceAudioPlayerSettings::
StaticRegisterNativesUNiagaraDataInterfaceAudioPlayerSettings(void)

{
  return;
}

