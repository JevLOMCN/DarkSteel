// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b5a0430

UClass * __cdecl ADS_SpotLight::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_SpotLight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SpotLight",
               &Z_Registration_Info_UClass_ADS_SpotLight.InnerSingleton,
               StaticRegisterNativesADS_SpotLight,0x2e0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_SpotLight>,
               InternalVTableHelperCtorCaller<ADS_SpotLight>,local_res8,ASpotLight::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_SpotLight.InnerSingleton;
}

// ADS_SpotLight @ 14b5a28b0

ADS_SpotLight * __thiscall ADS_SpotLight::ADS_SpotLight(ADS_SpotLight *this,FVTableHelper *param_1)

{
  ASpotLight::ASpotLight((ASpotLight *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_SpotLight__6B_;
  return this;
}

// ~ADS_SpotLight @ 14b5a2b10

void __thiscall ADS_SpotLight::~ADS_SpotLight(ADS_SpotLight *this)

{
  this->_padding_ = (longlong)&___7ADS_SpotLight__6B_;
  ASpotLight::~ASpotLight((ASpotLight *)this);
  return;
}

// GetPrivateStaticClass @ 14b5a32e0

UClass * __cdecl ADS_SpotLight::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_SpotLight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SpotLight",
               &Z_Registration_Info_UClass_ADS_SpotLight.InnerSingleton,
               StaticRegisterNativesADS_SpotLight,0x2e0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_SpotLight>,
               InternalVTableHelperCtorCaller<ADS_SpotLight>,local_res8,ASpotLight::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_SpotLight.InnerSingleton;
}

// StaticRegisterNativesADS_SpotLight @ 14b5a3780

void __cdecl ADS_SpotLight::StaticRegisterNativesADS_SpotLight(void)

{
  return;
}

// ADS_SpotLight @ 14b999130

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_SpotLight * __thiscall
ADS_SpotLight::ADS_SpotLight(ADS_SpotLight *this,FObjectInitializer *param_1)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  ASpotLight::ASpotLight((ASpotLight *)this,pFVar1);
  this->UseTimeOfDay = 1;
  this->_padding_ = (longlong)&___7ADS_SpotLight__6B_;
  USceneComponent::SetVisibility((USceneComponent *)this->_padding_,false,DirtyOnly);
  return this;
}

// DayNightChanged @ 14b9a6400

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_SpotLight::DayNightChanged(ADS_SpotLight *this,bool param_1)

{
  if (this->UseTimeOfDay == 0) {
    return;
  }
  if (!param_1) {
    USceneComponent::SetVisibility((USceneComponent *)this->_padding_,false,DirtyOnly);
    return;
  }
  USceneComponent::SetVisibility((USceneComponent *)this->_padding_,true,DirtyOnly);
  return;
}

// Destroyed @ 14b9a6e10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_SpotLight::Destroyed(ADS_SpotLight *this)

{
  uint *puVar1;
  bool bVar2;
  UWorld *this_00;
  
  if (this->_padding_ != 0) {
    puVar1 = (uint *)(this->_padding_ + 0x27c);
    *puVar1 = *puVar1 & 0xfffffffe;
    this_00 = AActor::GetWorld((AActor *)this);
    if (this_00 != (UWorld *)0x0) {
      bVar2 = UWorld::IsGameWorld(this_00);
      if (!bVar2) {
        (**(code **)(*(longlong *)this->_padding_ + 0x440))((longlong *)this->_padding_,1,0);
      }
    }
  }
  AActor::Destroyed((AActor *)this);
  return;
}

// PostLoad @ 14b9c0460

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_SpotLight::PostLoad(ADS_SpotLight *this)

{
  ULightComponent *this_00;
  
  AActor::PostLoad((AActor *)this);
  this_00 = (ULightComponent *)this->_padding_;
  if ((this_00 != (ULightComponent *)0x0) && (*(char *)((longlong)&this_00->_padding_ + 3) == '\0'))
  {
    ULightComponent::ClearLightFunctionMaterial(this_00);
    return;
  }
  return;
}

// RegisterEvent @ 14b9c17c0

void __thiscall ADS_SpotLight::RegisterEvent(ADS_SpotLight *this)

{
  return;
}

// UnRegisterEvent @ 14b9c80b0

void __thiscall ADS_SpotLight::UnRegisterEvent(ADS_SpotLight *this)

{
  return;
}

