// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineSettings
// Functions: 6

// StaticClass @ 14312a0b0

UClass * __cdecl UGeneralProjectSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeneralProjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineSettings",L"GeneralProjectSettings",
               &Z_Registration_Info_UClass_UGeneralProjectSettings.InnerSingleton,
               StaticRegisterNativesUGeneralProjectSettings,0x110,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UGeneralProjectSettings>,
               InternalVTableHelperCtorCaller<UGeneralProjectSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeneralProjectSettings.InnerSingleton;
}

// UGeneralProjectSettings @ 14312af30

UGeneralProjectSettings * __thiscall
UGeneralProjectSettings::UGeneralProjectSettings
          (UGeneralProjectSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGeneralProjectSettings__6B_;
  (this->CompanyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompanyName).Data.ArrayNum = 0;
  (this->CompanyName).Data.ArrayMax = 0;
  (this->CompanyDistinguishedName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompanyDistinguishedName).Data.ArrayNum = 0;
  (this->CompanyDistinguishedName).Data.ArrayMax = 0;
  (this->CopyrightNotice).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CopyrightNotice).Data.ArrayNum = 0;
  (this->CopyrightNotice).Data.ArrayMax = 0;
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = 0;
  (this->Description).Data.ArrayMax = 0;
  (this->Homepage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Homepage).Data.ArrayNum = 0;
  (this->Homepage).Data.ArrayMax = 0;
  (this->LicensingTerms).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LicensingTerms).Data.ArrayNum = 0;
  (this->LicensingTerms).Data.ArrayMax = 0;
  (this->PrivacyPolicy).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrivacyPolicy).Data.ArrayNum = 0;
  (this->PrivacyPolicy).Data.ArrayMax = 0;
  (this->ProjectID).A = 0;
  (this->ProjectID).B = 0;
  (this->ProjectID).C = 0;
  (this->ProjectID).D = 0;
  (this->ProjectName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectName).Data.ArrayNum = 0;
  (this->ProjectName).Data.ArrayMax = 0;
  (this->ProjectVersion).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectVersion).Data.ArrayNum = 0;
  (this->ProjectVersion).Data.ArrayMax = 0;
  (this->SupportContact).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportContact).Data.ArrayNum = 0;
  (this->SupportContact).Data.ArrayMax = 0;
  FText::FText(&this->ProjectDisplayedTitle);
  FText::FText(&this->ProjectDebugTitleInfo);
  return this;
}

// UGeneralProjectSettings @ 14312aff0

UGeneralProjectSettings * __thiscall
UGeneralProjectSettings::UGeneralProjectSettings
          (UGeneralProjectSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGeneralProjectSettings__6B_;
  (this->CompanyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompanyName).Data.ArrayNum = 0;
  (this->CompanyName).Data.ArrayMax = 0;
  (this->CompanyDistinguishedName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompanyDistinguishedName).Data.ArrayNum = 0;
  (this->CompanyDistinguishedName).Data.ArrayMax = 0;
  (this->CopyrightNotice).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CopyrightNotice).Data.ArrayNum = 0;
  (this->CopyrightNotice).Data.ArrayMax = 0;
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = 0;
  (this->Description).Data.ArrayMax = 0;
  (this->Homepage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Homepage).Data.ArrayNum = 0;
  (this->Homepage).Data.ArrayMax = 0;
  (this->LicensingTerms).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LicensingTerms).Data.ArrayNum = 0;
  (this->LicensingTerms).Data.ArrayMax = 0;
  (this->PrivacyPolicy).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrivacyPolicy).Data.ArrayNum = 0;
  (this->PrivacyPolicy).Data.ArrayMax = 0;
  (this->ProjectID).A = 0;
  (this->ProjectID).B = 0;
  (this->ProjectID).C = 0;
  (this->ProjectID).D = 0;
  (this->ProjectName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectName).Data.ArrayNum = 0;
  (this->ProjectName).Data.ArrayMax = 0;
  (this->ProjectVersion).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectVersion).Data.ArrayNum = 0;
  (this->ProjectVersion).Data.ArrayMax = 0;
  (this->SupportContact).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportContact).Data.ArrayNum = 0;
  (this->SupportContact).Data.ArrayMax = 0;
  FText::FText(&this->ProjectDisplayedTitle);
  FText::FText(&this->ProjectDebugTitleInfo);
  this->bShouldWindowPreserveAspectRatio = true;
  this->bUseBorderlessWindow = false;
  this->bStartInVR = false;
  this->bAllowWindowResize = true;
  this->bAllowClose = true;
  this->bAllowMaximize = true;
  this->bAllowMinimize = true;
  this->EyeOffsetForFakeStereoRenderingDevice = 0.032;
  this->FOVForFakeStereoRenderingDevice = 90.0;
  this->TopFOVRatioForFakeStereoRenderingDevice = 0.47;
  this->DifferenceBetweenEyesForFakeStereoRenderingDevice = 0.2;
  return this;
}

// ~UGeneralProjectSettings @ 14312b310

void __thiscall UGeneralProjectSettings::~UGeneralProjectSettings(UGeneralProjectSettings *this)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UGeneralProjectSettings__6B_;
  pIVar1 = (this->ProjectDebugTitleInfo).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->ProjectDisplayedTitle).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pFVar2 = (this->SupportContact).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ProjectVersion).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ProjectName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PrivacyPolicy).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LicensingTerms).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Homepage).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Description).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CopyrightNotice).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CompanyDistinguishedName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CompanyName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14312c8d0

UClass * __cdecl UGeneralProjectSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeneralProjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineSettings",L"GeneralProjectSettings",
               &Z_Registration_Info_UClass_UGeneralProjectSettings.InnerSingleton,
               StaticRegisterNativesUGeneralProjectSettings,0x110,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UGeneralProjectSettings>,
               InternalVTableHelperCtorCaller<UGeneralProjectSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeneralProjectSettings.InnerSingleton;
}

// StaticRegisterNativesUGeneralProjectSettings @ 14312ce60

void __cdecl UGeneralProjectSettings::StaticRegisterNativesUGeneralProjectSettings(void)

{
  return;
}

