// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 7

// StaticClass @ 148c4aca0

UClass * __cdecl UAutomationControllerSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationControllerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AutomationController",L"AutomationControllerSettings",
               &Z_Registration_Info_UClass_UAutomationControllerSettings.InnerSingleton,
               StaticRegisterNativesUAutomationControllerSettings,0x90,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAutomationControllerSettings>,
               InternalVTableHelperCtorCaller<UAutomationControllerSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationControllerSettings.InnerSingleton;
}

// UAutomationControllerSettings @ 148c53ab0

UAutomationControllerSettings * __thiscall
UAutomationControllerSettings::UAutomationControllerSettings
          (UAutomationControllerSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAutomationControllerSettings__6B_;
  (this->Groups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Groups).ArrayNum = 0;
  (this->Groups).ArrayMax = 0;
  (this->SuppressedLogCategories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SuppressedLogCategories).ArrayNum = 0;
  (this->SuppressedLogCategories).ArrayMax = 0;
  (this->TelemetryDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TelemetryDirectory).Data.ArrayNum = 0;
  (this->TelemetryDirectory).Data.ArrayMax = 0;
  (this->InitialSelectedTestsNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialSelectedTestsNames).ArrayNum = 0;
  (this->InitialSelectedTestsNames).ArrayMax = 0;
  return this;
}

// UAutomationControllerSettings @ 148c53b00

UAutomationControllerSettings * __thiscall
UAutomationControllerSettings::UAutomationControllerSettings
          (UAutomationControllerSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bElevateLogWarningsToErrors = true;
  this->_padding_ = (longlong)&___7UAutomationControllerSettings__6B_;
  (this->Groups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Groups).ArrayNum = 0;
  (this->Groups).ArrayMax = 0;
  this->bSuppressLogErrors = false;
  this->bSuppressLogWarnings = false;
  (this->SuppressedLogCategories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SuppressedLogCategories).ArrayNum = 0;
  (this->SuppressedLogCategories).ArrayMax = 0;
  (this->TelemetryDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TelemetryDirectory).Data.ArrayNum = 0;
  (this->TelemetryDirectory).Data.ArrayMax = 0;
  this->bResetTelemetryStorageOnNewSession = false;
  (this->InitialSelectedTestsNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialSelectedTestsNames).ArrayNum = 0;
  (this->InitialSelectedTestsNames).ArrayMax = 0;
  this->bKeepPIEOpen = false;
  this->bAutoExpandSingleItemSubgroups = true;
  this->bSortTestsByFailure = false;
  this->bPruneLogsOnSuccess = true;
  this->bTreatLogWarningsAsTestErrors = true;
  this->GameInstanceLostTimerSeconds = 300.0;
  return this;
}

// ~UAutomationControllerSettings @ 148c54280

void __thiscall
UAutomationControllerSettings::~UAutomationControllerSettings(UAutomationControllerSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAutomationControllerSettings__6B_;
  DestructItems<FString,int>
            ((FString *)(this->InitialSelectedTestsNames).AllocatorInstance.Data,
             (this->InitialSelectedTestsNames).ArrayNum);
  pFVar1 = (this->InitialSelectedTestsNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TelemetryDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->SuppressedLogCategories).AllocatorInstance.Data,
             (this->SuppressedLogCategories).ArrayNum);
  pFVar1 = (this->SuppressedLogCategories).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAutomatedTestGroup,int>
            ((FAutomatedTestGroup *)(this->Groups).AllocatorInstance.Data,(this->Groups).ArrayNum);
  pFVar1 = (this->Groups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148c5fea0

UClass * __cdecl UAutomationControllerSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationControllerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AutomationController",L"AutomationControllerSettings",
               &Z_Registration_Info_UClass_UAutomationControllerSettings.InnerSingleton,
               StaticRegisterNativesUAutomationControllerSettings,0x90,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAutomationControllerSettings>,
               InternalVTableHelperCtorCaller<UAutomationControllerSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationControllerSettings.InnerSingleton;
}

// PostInitProperties @ 148c65270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAutomationControllerSettings::PostInitProperties(UAutomationControllerSettings *this)

{
  UObject::PostInitProperties((UObject *)this);
  if (this->bTreatLogWarningsAsTestErrors == false) {
    if (2 < (byte)LogAutomationControllerSettings._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogAutomationControllerSettings);
    }
    this->bElevateLogWarningsToErrors = false;
  }
  return;
}

// StaticRegisterNativesUAutomationControllerSettings @ 148c6d490

void __cdecl UAutomationControllerSettings::StaticRegisterNativesUAutomationControllerSettings(void)

{
  return;
}

