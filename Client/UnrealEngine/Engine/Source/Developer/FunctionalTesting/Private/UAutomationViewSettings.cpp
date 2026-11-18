// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 5

// StaticClass @ 148c70230

UClass * __cdecl UAutomationViewSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationViewSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"AutomationViewSettings",
               &Z_Registration_Info_UClass_UAutomationViewSettings.InnerSingleton,
               StaticRegisterNativesUAutomationViewSettings,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAutomationViewSettings>,
               InternalVTableHelperCtorCaller<UAutomationViewSettings>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationViewSettings.InnerSingleton;
}

// UAutomationViewSettings @ 148c800e0

UAutomationViewSettings * __thiscall
UAutomationViewSettings::UAutomationViewSettings
          (UAutomationViewSettings *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UAutomationViewSettings__6B_;
  return this;
}

// ~UAutomationViewSettings @ 148c811d0

void __thiscall UAutomationViewSettings::~UAutomationViewSettings(UAutomationViewSettings *this)

{
  this->_padding_ = (longlong)&___7UAutomationViewSettings__6B_;
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 148c91960

UClass * __cdecl UAutomationViewSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationViewSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"AutomationViewSettings",
               &Z_Registration_Info_UClass_UAutomationViewSettings.InnerSingleton,
               StaticRegisterNativesUAutomationViewSettings,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAutomationViewSettings>,
               InternalVTableHelperCtorCaller<UAutomationViewSettings>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationViewSettings.InnerSingleton;
}

// StaticRegisterNativesUAutomationViewSettings @ 148c9d4d0

void __cdecl UAutomationViewSettings::StaticRegisterNativesUAutomationViewSettings(void)

{
  return;
}

