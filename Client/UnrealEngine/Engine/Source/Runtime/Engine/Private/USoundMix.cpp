// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 148674b80

UClass * __cdecl USoundMix::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USoundMix.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundMix",&Z_Registration_Info_UClass_USoundMix.InnerSingleton,
               StaticRegisterNativesUSoundMix,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundMix>,InternalVTableHelperCtorCaller<USoundMix>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundMix.InnerSingleton;
}

// USoundMix @ 148696f90

USoundMix * __thiscall USoundMix::USoundMix(USoundMix *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundMix__6B_;
  (this->EQSettings)._padding_ = (longlong)&___7FAudioEQEffect__6B_;
  (this->EQSettings).RootTime = 0.0;
  (this->SoundClassEffects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoundClassEffects).ArrayNum = 0;
  (this->SoundClassEffects).ArrayMax = 0;
  (this->EQSettings).FrequencyCenter0 = 600.0;
  (this->EQSettings).Gain0 = 1.0;
  (this->EQSettings).Bandwidth0 = 1.0;
  (this->EQSettings).FrequencyCenter1 = 1000.0;
  (this->EQSettings).Gain1 = 1.0;
  (this->EQSettings).Bandwidth1 = 1.0;
  (this->EQSettings).FrequencyCenter2 = 2000.0;
  (this->EQSettings).Gain2 = 1.0;
  (this->EQSettings).Bandwidth2 = 1.0;
  (this->EQSettings).FrequencyCenter3 = 10000.0;
  (this->EQSettings).Gain3 = 1.0;
  (this->EQSettings).Bandwidth3 = 1.0;
  return this;
}

// USoundMix @ 148697030

USoundMix * __thiscall USoundMix::USoundMix(USoundMix *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Duration = -1.0;
  this->_padding_ = (longlong)&___7USoundMix__6B_;
  (this->EQSettings)._padding_ = (longlong)&___7FAudioEQEffect__6B_;
  this->bApplyEQ = 0;
  (this->EQSettings).RootTime = 0.0;
  (this->SoundClassEffects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoundClassEffects).ArrayNum = 0;
  (this->SoundClassEffects).ArrayMax = 0;
  this->InitialDelay = 0.0;
  (this->EQSettings).FrequencyCenter0 = 600.0;
  (this->EQSettings).Gain0 = 1.0;
  (this->EQSettings).Bandwidth0 = 1.0;
  (this->EQSettings).FrequencyCenter1 = 1000.0;
  (this->EQSettings).Gain1 = 1.0;
  (this->EQSettings).Bandwidth1 = 1.0;
  (this->EQSettings).FrequencyCenter2 = 2000.0;
  (this->EQSettings).Gain2 = 1.0;
  (this->EQSettings).Bandwidth2 = 1.0;
  (this->EQSettings).FrequencyCenter3 = 10000.0;
  (this->EQSettings).Gain3 = 1.0;
  (this->EQSettings).Bandwidth3 = 1.0;
  this->FadeInTime = 0.2;
  this->FadeOutTime = 0.2;
  return this;
}

// ~USoundMix @ 14869b6f0

void __thiscall USoundMix::~USoundMix(USoundMix *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USoundMix__6B_;
  pFVar1 = (this->SoundClassEffects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->EQSettings)._padding_ = (longlong)&___7FAudioEffectParameters__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 1486a6a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USoundMix::BeginDestroy(USoundMix *this)

{
  FAudioDeviceManager *this_00;
  
  if ((!GExitPurge) && (GEngine != (UEngine *)0x0)) {
    this_00 = UEngine::GetAudioDeviceManager(GEngine);
    if (this_00 != (FAudioDeviceManager *)0x0) {
      FAudioDeviceManager::RemoveSoundMix(this_00,this);
    }
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// GetDesc @ 1486bd750

FString * __thiscall USoundMix::GetDesc(USoundMix *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"Adjusters: %d");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1486c4590

UClass * __cdecl USoundMix::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundMix.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundMix",&Z_Registration_Info_UClass_USoundMix.InnerSingleton,
               StaticRegisterNativesUSoundMix,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundMix>,InternalVTableHelperCtorCaller<USoundMix>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundMix.InnerSingleton;
}

// StaticRegisterNativesUSoundMix @ 1486f18a0

void __cdecl USoundMix::StaticRegisterNativesUSoundMix(void)

{
  return;
}

