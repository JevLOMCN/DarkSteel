// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationTest
// Functions: 8

// StaticClass @ 148bed7b0

UClass * __cdecl UAutomationTestExcludelistSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationTestExcludelistSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AutomationTest",L"AutomationTestExcludelistSettings",
               &Z_Registration_Info_UClass_UAutomationTestExcludelistSettings.InnerSingleton,
               StaticRegisterNativesUAutomationTestExcludelistSettings,0x48,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAutomationTestExcludelistSettings>,
               InternalVTableHelperCtorCaller<UAutomationTestExcludelistSettings>,local_res8,
               UAutomationTestPlatformSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationTestExcludelistSettings.InnerSingleton;
}

// UAutomationTestExcludelistSettings @ 148bf1a50

UAutomationTestExcludelistSettings * __thiscall
UAutomationTestExcludelistSettings::UAutomationTestExcludelistSettings
          (UAutomationTestExcludelistSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAutomationTestExcludelistSettings__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SupportedRHIs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedRHIs).ArrayNum = 0;
  (this->SupportedRHIs).ArrayMax = 0;
  return this;
}

// UAutomationTestExcludelistSettings @ 148bf1a90

UAutomationTestExcludelistSettings * __thiscall
UAutomationTestExcludelistSettings::UAutomationTestExcludelistSettings
          (UAutomationTestExcludelistSettings *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UAutomationTestExcludelistSettings__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SupportedRHIs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedRHIs).ArrayNum = 0;
  (this->SupportedRHIs).ArrayMax = 0;
  return this;
}

// ~UAutomationTestExcludelistSettings @ 148bf1e70

void __thiscall
UAutomationTestExcludelistSettings::~UAutomationTestExcludelistSettings
          (UAutomationTestExcludelistSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAutomationTestExcludelistSettings__6B_;
  pFVar1 = (this->SupportedRHIs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UAutomationTestPlatformSettings__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148bf4d10

UClass * __cdecl UAutomationTestExcludelistSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationTestExcludelistSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AutomationTest",L"AutomationTestExcludelistSettings",
               &Z_Registration_Info_UClass_UAutomationTestExcludelistSettings.InnerSingleton,
               StaticRegisterNativesUAutomationTestExcludelistSettings,0x48,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAutomationTestExcludelistSettings>,
               InternalVTableHelperCtorCaller<UAutomationTestExcludelistSettings>,local_res8,
               UAutomationTestPlatformSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationTestExcludelistSettings.InnerSingleton;
}

// GetSectionName @ 148bf4eb0

FString * __thiscall
UAutomationTestExcludelistSettings::GetSectionName
          (UAutomationTestExcludelistSettings *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"AutomationTestExcludelistSettings");
  return __return_storage_ptr__;
}

// InitializeSettingsDefault @ 148bf5380

void __thiscall
UAutomationTestExcludelistSettings::InitializeSettingsDefault
          (UAutomationTestExcludelistSettings *this)

{
  return;
}

// StaticRegisterNativesUAutomationTestExcludelistSettings @ 148bf8680

void __cdecl
UAutomationTestExcludelistSettings::StaticRegisterNativesUAutomationTestExcludelistSettings(void)

{
  return;
}

