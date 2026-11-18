// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 6

// StaticClass @ 146b35af0

UClass * __cdecl UUserGeneratedContentLocalizationSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserGeneratedContentLocalizationSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Localization",L"UserGeneratedContentLocalizationSettings",
               &Z_Registration_Info_UClass_UUserGeneratedContentLocalizationSettings.InnerSingleton,
               StaticRegisterNativesUUserGeneratedContentLocalizationSettings,0x40,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UUserGeneratedContentLocalizationSettings>,
               InternalVTableHelperCtorCaller<UUserGeneratedContentLocalizationSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserGeneratedContentLocalizationSettings.InnerSingleton;
}

// UUserGeneratedContentLocalizationSettings @ 146b43c40

UUserGeneratedContentLocalizationSettings * __thiscall
UUserGeneratedContentLocalizationSettings::UUserGeneratedContentLocalizationSettings
          (UUserGeneratedContentLocalizationSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bCompileDLCLocalizationDuringCook = true;
  this->bValidateDLCLocalizationDuringCook = true;
  this->_padding_ = (longlong)&___7UUserGeneratedContentLocalizationSettings__6B_;
  (this->CulturesToDisable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CulturesToDisable).ArrayNum = 0;
  (this->CulturesToDisable).ArrayMax = 0;
  return this;
}

// UUserGeneratedContentLocalizationSettings @ 146b43c80

UUserGeneratedContentLocalizationSettings * __thiscall
UUserGeneratedContentLocalizationSettings::UUserGeneratedContentLocalizationSettings
          (UUserGeneratedContentLocalizationSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bCompileDLCLocalizationDuringCook = true;
  this->bValidateDLCLocalizationDuringCook = true;
  this->_padding_ = (longlong)&___7UUserGeneratedContentLocalizationSettings__6B_;
  (this->CulturesToDisable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CulturesToDisable).ArrayNum = 0;
  (this->CulturesToDisable).ArrayMax = 0;
  return this;
}

// ~UUserGeneratedContentLocalizationSettings @ 146b44da0

void __thiscall
UUserGeneratedContentLocalizationSettings::~UUserGeneratedContentLocalizationSettings
          (UUserGeneratedContentLocalizationSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UUserGeneratedContentLocalizationSettings__6B_;
  DestructItems<FString,int>
            ((FString *)(this->CulturesToDisable).AllocatorInstance.Data,
             (this->CulturesToDisable).ArrayNum);
  pFVar1 = (this->CulturesToDisable).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146b766f0

UClass * __cdecl UUserGeneratedContentLocalizationSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserGeneratedContentLocalizationSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Localization",L"UserGeneratedContentLocalizationSettings",
               &Z_Registration_Info_UClass_UUserGeneratedContentLocalizationSettings.InnerSingleton,
               StaticRegisterNativesUUserGeneratedContentLocalizationSettings,0x40,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UUserGeneratedContentLocalizationSettings>,
               InternalVTableHelperCtorCaller<UUserGeneratedContentLocalizationSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserGeneratedContentLocalizationSettings.InnerSingleton;
}

// StaticRegisterNativesUUserGeneratedContentLocalizationSettings @ 146b89510

void __cdecl
UUserGeneratedContentLocalizationSettings::
StaticRegisterNativesUUserGeneratedContentLocalizationSettings(void)

{
  return;
}

