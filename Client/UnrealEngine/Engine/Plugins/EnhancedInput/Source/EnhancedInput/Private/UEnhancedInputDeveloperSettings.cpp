// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 6

// StaticClass @ 14a6b9510

UClass * __cdecl UEnhancedInputDeveloperSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedInputDeveloperSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedInputDeveloperSettings",
               &Z_Registration_Info_UClass_UEnhancedInputDeveloperSettings.InnerSingleton,
               StaticRegisterNativesUEnhancedInputDeveloperSettings,0x160,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UEnhancedInputDeveloperSettings>,
               InternalVTableHelperCtorCaller<UEnhancedInputDeveloperSettings>,local_res8,
               UDeveloperSettingsBackedByCVars::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedInputDeveloperSettings.InnerSingleton;
}

// UEnhancedInputDeveloperSettings @ 14a6cb410

UEnhancedInputDeveloperSettings * __thiscall
UEnhancedInputDeveloperSettings::UEnhancedInputDeveloperSettings
          (UEnhancedInputDeveloperSettings *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UDeveloperSettingsBackedByCVars::UDeveloperSettingsBackedByCVars
            ((UDeveloperSettingsBackedByCVars *)this,param_1);
  puVar1 = &(this->UserSettingsClass).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UEnhancedInputDeveloperSettings__6B_;
  (this->DefaultMappingContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultMappingContexts).ArrayNum = 0;
  (this->DefaultMappingContexts).ArrayMax = 0;
  (this->DefaultWorldSubsystemMappingContexts).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultWorldSubsystemMappingContexts).ArrayNum = 0;
  (this->DefaultWorldSubsystemMappingContexts).ArrayMax = 0;
  (this->PlatformSettings).Settings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformSettings).Settings.ArrayNum = 0;
  (this->PlatformSettings).Settings.ArrayMax = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->UserSettingsClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->UserSettingsClass).SoftObjectPtr = 0;
  *(undefined8 *)&(this->UserSettingsClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->UserSettingsClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->DefaultPlayerMappableKeyProfileClass).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->DefaultPlayerMappableKeyProfileClass).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultPlayerMappableKeyProfileClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultPlayerMappableKeyProfileClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultPlayerMappableKeyProfileClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  ::FString::FString(&this->InputSettingsSaveSlotName,L"EnhancedInputUserSettings");
  puVar1 = &(this->DefaultWorldInputClass).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->DefaultWorldInputClass).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultWorldInputClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultWorldInputClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultWorldInputClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  this->bShouldLogAllWorldSubsystemInputs = '\0';
  FGameplayTagQuery::FGameplayTagQuery(&this->DefaultMappingContextInputModeQuery);
  (this->DefaultInputMode).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultInputMode).GameplayTags.ArrayNum = 0;
  (this->DefaultInputMode).GameplayTags.ArrayMax = 0;
  (this->DefaultInputMode).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultInputMode).ParentTags.ArrayNum = 0;
  (this->DefaultInputMode).ParentTags.ArrayMax = 0;
  return this;
}

// UEnhancedInputDeveloperSettings @ 14a6cb520

UEnhancedInputDeveloperSettings * __thiscall
UEnhancedInputDeveloperSettings::UEnhancedInputDeveloperSettings
          (UEnhancedInputDeveloperSettings *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  UClass *pUVar3;
  UClass *local_res8;
  
  UDeveloperSettingsBackedByCVars::UDeveloperSettingsBackedByCVars
            ((UDeveloperSettingsBackedByCVars *)this,param_1);
  this->_padding_ = (longlong)&___7UEnhancedInputDeveloperSettings__6B_;
  (this->DefaultMappingContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultMappingContexts).ArrayNum = 0;
  (this->DefaultMappingContexts).ArrayMax = 0;
  (this->DefaultWorldSubsystemMappingContexts).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultWorldSubsystemMappingContexts).ArrayNum = 0;
  (this->DefaultWorldSubsystemMappingContexts).ArrayMax = 0;
  (this->PlatformSettings).Settings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformSettings).Settings.ArrayNum = 0;
  (this->PlatformSettings).Settings.ArrayMax = 0;
  pUVar3 = UEnhancedInputUserSettings::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  puVar1 = &(this->UserSettingsClass).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->UserSettingsClass).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->UserSettingsClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->UserSettingsClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->UserSettingsClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  local_res8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FSoftObjectPtr::operator=(&(this->UserSettingsClass).SoftObjectPtr,(FObjectPtr)&local_res8);
  pUVar3 = UEnhancedPlayerMappableKeyProfile::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  puVar1 = &(this->DefaultPlayerMappableKeyProfileClass).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->DefaultPlayerMappableKeyProfileClass).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultPlayerMappableKeyProfileClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultPlayerMappableKeyProfileClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultPlayerMappableKeyProfileClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  local_res8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FSoftObjectPtr::operator=
            (&(this->DefaultPlayerMappableKeyProfileClass).SoftObjectPtr,(FObjectPtr)&local_res8);
  ::FString::FString(&this->InputSettingsSaveSlotName,L"EnhancedInputUserSettings");
  pUVar3 = UEnhancedPlayerInput::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  puVar1 = &(this->DefaultWorldInputClass).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->DefaultWorldInputClass).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultWorldInputClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultWorldInputClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultWorldInputClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  local_res8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FSoftObjectPtr::operator=(&(this->DefaultWorldInputClass).SoftObjectPtr,(FObjectPtr)&local_res8);
  puVar2 = &this->field_0xf0;
  this->bSendTriggeredEventsWhenInputIsFlushed = '\x01';
  this->bShouldLogAllWorldSubsystemInputs = '\0';
  this->bEnableWorldSubsystem = '\0';
  this->bEnableInputModeFiltering = '\x01';
  this->bShouldOnlyTriggerLastActionInChord = '\x01';
  this->bEnableDefaultMappingContexts = '\x01';
  this->bEnableUserSettings = '\0';
  FGameplayTagQuery::FGameplayTagQuery(&this->DefaultMappingContextInputModeQuery);
  (this->DefaultInputMode).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultInputMode).GameplayTags.ArrayNum = 0;
  (this->DefaultInputMode).GameplayTags.ArrayMax = 0;
  (this->DefaultInputMode).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultInputMode).ParentTags.ArrayNum = 0;
  (this->DefaultInputMode).ParentTags.ArrayMax = 0;
  local_res8 = UEnhancedInputPlatformSettings::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FPerPlatformSettings::Initialize
            (&this->PlatformSettings,(TSubclassOf<UPlatformSettings>)&local_res8);
  return this;
}

// ~UEnhancedInputDeveloperSettings @ 14a6ceff0

void __thiscall
UEnhancedInputDeveloperSettings::~UEnhancedInputDeveloperSettings
          (UEnhancedInputDeveloperSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UEnhancedInputDeveloperSettings__6B_;
  pFVar1 = (this->DefaultInputMode).ParentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultInputMode).GameplayTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultMappingContextInputModeQuery).AutoDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultMappingContextInputModeQuery).UserDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultMappingContextInputModeQuery).QueryTokenStream.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultMappingContextInputModeQuery).TagDictionary.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->DefaultWorldInputClass).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->InputSettingsSaveSlotName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->DefaultPlayerMappableKeyProfileClass).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->UserSettingsClass).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->PlatformSettings).Settings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDefaultContextSetting,int>
            ((FDefaultContextSetting *)
             (this->DefaultWorldSubsystemMappingContexts).AllocatorInstance.Data,
             (this->DefaultWorldSubsystemMappingContexts).ArrayNum);
  pFVar1 = (this->DefaultWorldSubsystemMappingContexts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDefaultContextSetting,int>
            ((FDefaultContextSetting *)(this->DefaultMappingContexts).AllocatorInstance.Data,
             (this->DefaultMappingContexts).ArrayNum);
  pFVar1 = (this->DefaultMappingContexts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettingsBackedByCVars::~UDeveloperSettingsBackedByCVars
            ((UDeveloperSettingsBackedByCVars *)this);
  return;
}

// GetPrivateStaticClass @ 14a6e07f0

UClass * __cdecl UEnhancedInputDeveloperSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedInputDeveloperSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedInputDeveloperSettings",
               &Z_Registration_Info_UClass_UEnhancedInputDeveloperSettings.InnerSingleton,
               StaticRegisterNativesUEnhancedInputDeveloperSettings,0x160,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UEnhancedInputDeveloperSettings>,
               InternalVTableHelperCtorCaller<UEnhancedInputDeveloperSettings>,local_res8,
               UDeveloperSettingsBackedByCVars::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedInputDeveloperSettings.InnerSingleton;
}

// StaticRegisterNativesUEnhancedInputDeveloperSettings @ 14a6fb3d0

void __cdecl
UEnhancedInputDeveloperSettings::StaticRegisterNativesUEnhancedInputDeveloperSettings(void)

{
  return;
}

