// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 6

// StaticClass @ 14d982190

UClass * __cdecl UAudioRequirementPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioRequirementPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioRequirementPreset",
               &Z_Registration_Info_UClass_UAudioRequirementPreset.InnerSingleton,
               StaticRegisterNativesUAudioRequirementPreset,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioRequirementPreset>,
               InternalVTableHelperCtorCaller<UAudioRequirementPreset>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioRequirementPreset.InnerSingleton;
}

// UAudioRequirementPreset @ 14d987ec0

UAudioRequirementPreset * __thiscall
UAudioRequirementPreset::UAudioRequirementPreset
          (UAudioRequirementPreset *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UAudioRequirementPreset__6B_;
  FGameplayTagQuery::FGameplayTagQuery(&this->Query);
  return this;
}

// UAudioRequirementPreset @ 14d987ef0

UAudioRequirementPreset * __thiscall
UAudioRequirementPreset::UAudioRequirementPreset
          (UAudioRequirementPreset *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UAudioRequirementPreset__6B_;
  FGameplayTagQuery::FGameplayTagQuery(&this->Query);
  return this;
}

// GetPrivateStaticClass @ 14d98e0e0

UClass * __cdecl UAudioRequirementPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioRequirementPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioRequirementPreset",
               &Z_Registration_Info_UClass_UAudioRequirementPreset.InnerSingleton,
               StaticRegisterNativesUAudioRequirementPreset,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioRequirementPreset>,
               InternalVTableHelperCtorCaller<UAudioRequirementPreset>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioRequirementPreset.InnerSingleton;
}

// Matches @ 14d98ecb0

bool __thiscall
UAudioRequirementPreset::Matches(UAudioRequirementPreset *this,FGameplayTagContainer *param_1)

{
  bool bVar1;
  
  bVar1 = FGameplayTagQuery::IsEmpty(&this->Query);
  if (!bVar1) {
    bVar1 = FGameplayTagQuery::Matches(&this->Query,param_1);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// StaticRegisterNativesUAudioRequirementPreset @ 14d993760

void __cdecl UAudioRequirementPreset::StaticRegisterNativesUAudioRequirementPreset(void)

{
  return;
}

