// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 7

// StaticClass @ 146ac0a10

UClass * __cdecl UGameplayTagsDeveloperSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTagsDeveloperSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"GameplayTagsDeveloperSettings",
               &Z_Registration_Info_UClass_UGameplayTagsDeveloperSettings.InnerSingleton,
               StaticRegisterNativesUGameplayTagsDeveloperSettings,0x50,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UGameplayTagsDeveloperSettings>,
               InternalVTableHelperCtorCaller<UGameplayTagsDeveloperSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTagsDeveloperSettings.InnerSingleton;
}

// UGameplayTagsDeveloperSettings @ 146acc990

UGameplayTagsDeveloperSettings * __thiscall
UGameplayTagsDeveloperSettings::UGameplayTagsDeveloperSettings
          (UGameplayTagsDeveloperSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UGameplayTagsDeveloperSettings__6B_;
  (this->DeveloperConfigName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeveloperConfigName).Data.ArrayNum = 0;
  (this->DeveloperConfigName).Data.ArrayMax = 0;
  (this->FavoriteTagSource).ComparisonIndex = 0;
  (this->FavoriteTagSource).Number = 0;
  return this;
}

// UGameplayTagsDeveloperSettings @ 146acc9d0

UGameplayTagsDeveloperSettings * __thiscall
UGameplayTagsDeveloperSettings::UGameplayTagsDeveloperSettings
          (UGameplayTagsDeveloperSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UGameplayTagsDeveloperSettings__6B_;
  (this->DeveloperConfigName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeveloperConfigName).Data.ArrayNum = 0;
  (this->DeveloperConfigName).Data.ArrayMax = 0;
  (this->FavoriteTagSource).ComparisonIndex = 0;
  (this->FavoriteTagSource).Number = 0;
  return this;
}

// ~UGameplayTagsDeveloperSettings @ 146acdb90

void __thiscall
UGameplayTagsDeveloperSettings::~UGameplayTagsDeveloperSettings
          (UGameplayTagsDeveloperSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGameplayTagsDeveloperSettings__6B_;
  pFVar1 = (this->DeveloperConfigName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetCategoryName @ 146ade100

FName __thiscall
UGameplayTagsDeveloperSettings::GetCategoryName(UGameplayTagsDeveloperSettings *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = NAME_Advanced;
  return in_RDX;
}

// GetPrivateStaticClass @ 146adf5c0

UClass * __cdecl UGameplayTagsDeveloperSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTagsDeveloperSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"GameplayTagsDeveloperSettings",
               &Z_Registration_Info_UClass_UGameplayTagsDeveloperSettings.InnerSingleton,
               StaticRegisterNativesUGameplayTagsDeveloperSettings,0x50,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UGameplayTagsDeveloperSettings>,
               InternalVTableHelperCtorCaller<UGameplayTagsDeveloperSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTagsDeveloperSettings.InnerSingleton;
}

// StaticRegisterNativesUGameplayTagsDeveloperSettings @ 146aedb60

void __cdecl
UGameplayTagsDeveloperSettings::StaticRegisterNativesUGameplayTagsDeveloperSettings(void)

{
  return;
}

