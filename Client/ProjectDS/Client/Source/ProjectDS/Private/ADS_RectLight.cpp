// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b578f80

UClass * __cdecl ADS_RectLight::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_RectLight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RectLight",
               &Z_Registration_Info_UClass_ADS_RectLight.InnerSingleton,
               StaticRegisterNativesADS_RectLight,0x2e0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_RectLight>,
               InternalVTableHelperCtorCaller<ADS_RectLight>,local_res8,ARectLight::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_RectLight.InnerSingleton;
}

// ADS_RectLight @ 14b57d930

ADS_RectLight * __thiscall ADS_RectLight::ADS_RectLight(ADS_RectLight *this,FVTableHelper *param_1)

{
  ARectLight::ARectLight((ARectLight *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_RectLight__6B_;
  return this;
}

// ~ADS_RectLight @ 14b57e1f0

void __thiscall ADS_RectLight::~ADS_RectLight(ADS_RectLight *this)

{
  this->_padding_ = (longlong)&___7ADS_RectLight__6B_;
  ARectLight::~ARectLight((ARectLight *)this);
  return;
}

// GetPrivateStaticClass @ 14b57f810

UClass * __cdecl ADS_RectLight::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_RectLight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RectLight",
               &Z_Registration_Info_UClass_ADS_RectLight.InnerSingleton,
               StaticRegisterNativesADS_RectLight,0x2e0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_RectLight>,
               InternalVTableHelperCtorCaller<ADS_RectLight>,local_res8,ARectLight::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_RectLight.InnerSingleton;
}

// StaticRegisterNativesADS_RectLight @ 14b580880

void __cdecl ADS_RectLight::StaticRegisterNativesADS_RectLight(void)

{
  return;
}

// ADS_RectLight @ 14b998ee0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_RectLight * __thiscall
ADS_RectLight::ADS_RectLight(ADS_RectLight *this,FObjectInitializer *param_1)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  ARectLight::ARectLight((ARectLight *)this,pFVar1);
  this->UseTimeOfDay = 1;
  this->_padding_ = (longlong)&___7ADS_RectLight__6B_;
  USceneComponent::SetVisibility((USceneComponent *)this->_padding_,false,DirtyOnly);
  return this;
}

// DayNightChanged @ 14b9a63d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_RectLight::DayNightChanged(ADS_RectLight *this,bool param_1)

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

// Destroyed @ 14b9a6e00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_RectLight::Destroyed(ADS_RectLight *this)

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

// RegisterEvent @ 14b9c17b0

void __thiscall ADS_RectLight::RegisterEvent(ADS_RectLight *this)

{
  return;
}

// UnRegisterEvent @ 14b9c80a0

void __thiscall ADS_RectLight::UnRegisterEvent(ADS_RectLight *this)

{
  return;
}

