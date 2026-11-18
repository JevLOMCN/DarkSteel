// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 31

// StaticClass @ 14a6b7280

UClass * __cdecl UEnhancedPlayerInput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedPlayerInput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedPlayerInput",
               &Z_Registration_Info_UClass_UEnhancedPlayerInput.InnerSingleton,
               StaticRegisterNativesUEnhancedPlayerInput,0x900,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Input",
               InternalConstructor<UEnhancedPlayerInput>,
               InternalVTableHelperCtorCaller<UEnhancedPlayerInput>,local_res8,
               UPlayerInput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedPlayerInput.InnerSingleton;
}

// UEnhancedPlayerInput @ 14a6cbf10

UEnhancedPlayerInput * __thiscall
UEnhancedPlayerInput::UEnhancedPlayerInput(UEnhancedPlayerInput *this,FVTableHelper *param_1)

{
  UPlayerInput::UPlayerInput((UPlayerInput *)this,param_1);
  this->_padding_ = (longlong)&___7UEnhancedPlayerInput__6B_;
  *(undefined8 *)&this->KeyConsumptionData = 0;
  *(undefined8 *)&(this->KeyConsumptionData).field_0x8 = 0;
  *(undefined8 *)&(this->KeyConsumptionData).field_0x20 = 0;
  *(undefined4 *)&(this->KeyConsumptionData).field_0x28 = 0;
  *(undefined4 *)&(this->KeyConsumptionData).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeyConsumptionData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyConsumptionData).field_0x34 = 0;
  *(undefined8 *)&(this->KeyConsumptionData).field_0x40 = 0;
  *(undefined4 *)&(this->KeyConsumptionData).field_0x48 = 0;
  *(undefined8 *)&this->ActionInstanceData = 0;
  *(undefined8 *)&(this->ActionInstanceData).field_0x8 = 0;
  *(undefined8 *)&(this->ActionInstanceData).field_0x20 = 0;
  *(undefined4 *)&(this->ActionInstanceData).field_0x28 = 0;
  *(undefined4 *)&(this->ActionInstanceData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActionInstanceData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActionInstanceData).field_0x34 = 0;
  *(undefined8 *)&(this->ActionInstanceData).field_0x40 = 0;
  *(undefined4 *)&(this->ActionInstanceData).field_0x48 = 0;
  *(undefined8 *)&(this->ConsumedInputActions).Elements = 0;
  *(undefined8 *)&(this->ConsumedInputActions).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ConsumedInputActions).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ConsumedInputActions).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ConsumedInputActions).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConsumedInputActions).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConsumedInputActions).Elements.field_0x34 = 0;
  (this->ConsumedInputActions).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ConsumedInputActions).HashSize = 0;
  *(undefined8 *)&this->AppliedInputContextData = 0;
  *(undefined8 *)&(this->AppliedInputContextData).field_0x8 = 0;
  *(undefined8 *)&(this->AppliedInputContextData).field_0x20 = 0;
  *(undefined4 *)&(this->AppliedInputContextData).field_0x28 = 0;
  *(undefined4 *)&(this->AppliedInputContextData).field_0x2c = 0x80;
  *(undefined4 *)&(this->AppliedInputContextData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AppliedInputContextData).field_0x34 = 0;
  *(undefined8 *)&(this->AppliedInputContextData).field_0x40 = 0;
  *(undefined4 *)&(this->AppliedInputContextData).field_0x48 = 0;
  *(undefined8 *)&this->AppliedInputContexts = 0;
  *(undefined8 *)&(this->AppliedInputContexts).field_0x8 = 0;
  *(undefined8 *)&(this->AppliedInputContexts).field_0x20 = 0;
  *(undefined4 *)&(this->AppliedInputContexts).field_0x28 = 0;
  *(undefined4 *)&(this->AppliedInputContexts).field_0x2c = 0x80;
  *(undefined4 *)&(this->AppliedInputContexts).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AppliedInputContexts).field_0x34 = 0;
  *(undefined8 *)&(this->AppliedInputContexts).field_0x40 = 0;
  *(undefined4 *)&(this->AppliedInputContexts).field_0x48 = 0;
  (this->EnhancedActionMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnhancedActionMappings).ArrayNum = 0;
  (this->EnhancedActionMappings).ArrayMax = 0;
  (this->CurrentInputMode).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentInputMode).GameplayTags.ArrayNum = 0;
  (this->CurrentInputMode).GameplayTags.ArrayMax = 0;
  (this->CurrentInputMode).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentInputMode).ParentTags.ArrayNum = 0;
  (this->CurrentInputMode).ParentTags.ArrayMax = 0;
  *(undefined8 *)&this->EnhancedKeyBinds = 0;
  *(undefined8 *)&(this->EnhancedKeyBinds).field_0x8 = 0;
  *(undefined8 *)&(this->EnhancedKeyBinds).field_0x20 = 0;
  *(undefined4 *)&(this->EnhancedKeyBinds).field_0x28 = 0;
  *(undefined4 *)&(this->EnhancedKeyBinds).field_0x2c = 0x80;
  *(undefined4 *)&(this->EnhancedKeyBinds).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EnhancedKeyBinds).field_0x34 = 0;
  *(undefined8 *)&(this->EnhancedKeyBinds).field_0x40 = 0;
  *(undefined4 *)&(this->EnhancedKeyBinds).field_0x48 = 0;
  *(undefined8 *)&(this->ActionsWithEventsThisTick).Elements = 0;
  *(undefined8 *)&(this->ActionsWithEventsThisTick).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActionsWithEventsThisTick).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActionsWithEventsThisTick).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActionsWithEventsThisTick).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActionsWithEventsThisTick).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActionsWithEventsThisTick).Elements.field_0x34 = 0;
  (this->ActionsWithEventsThisTick).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActionsWithEventsThisTick).HashSize = 0;
  *(undefined8 *)&(this->TriggeredActionsThisTick).Elements = 0;
  *(undefined8 *)&(this->TriggeredActionsThisTick).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TriggeredActionsThisTick).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TriggeredActionsThisTick).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TriggeredActionsThisTick).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TriggeredActionsThisTick).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TriggeredActionsThisTick).Elements.field_0x34 = 0;
  (this->TriggeredActionsThisTick).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TriggeredActionsThisTick).HashSize = 0;
  *(undefined8 *)&(this->ActionsThatHaveBeenRemovedFromMappings).Elements = 0;
  *(undefined8 *)&(this->ActionsThatHaveBeenRemovedFromMappings).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActionsThatHaveBeenRemovedFromMappings).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActionsThatHaveBeenRemovedFromMappings).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActionsThatHaveBeenRemovedFromMappings).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActionsThatHaveBeenRemovedFromMappings).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ActionsThatHaveBeenRemovedFromMappings).Elements.field_0x30 = 0xffffffff;
  (this->ActionsThatHaveBeenRemovedFromMappings).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ActionsThatHaveBeenRemovedFromMappings).HashSize = 0;
  *(undefined8 *)&this->KeysPressedThisTick = 0;
  *(undefined8 *)&(this->KeysPressedThisTick).field_0x8 = 0;
  *(undefined8 *)&(this->KeysPressedThisTick).field_0x20 = 0;
  *(undefined4 *)&(this->KeysPressedThisTick).field_0x28 = 0;
  *(undefined4 *)&(this->KeysPressedThisTick).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeysPressedThisTick).field_0x34 = 0;
  *(undefined4 *)&(this->KeysPressedThisTick).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->KeysPressedThisTick).field_0x40 = 0;
  *(undefined4 *)&(this->KeysPressedThisTick).field_0x48 = 0;
  *(undefined8 *)&this->InputsInjectedThisTick = 0;
  *(undefined8 *)&(this->InputsInjectedThisTick).field_0x8 = 0;
  *(undefined8 *)&(this->InputsInjectedThisTick).field_0x20 = 0;
  *(undefined4 *)&(this->InputsInjectedThisTick).field_0x28 = 0;
  *(undefined4 *)&(this->InputsInjectedThisTick).field_0x2c = 0x80;
  *(undefined4 *)&(this->InputsInjectedThisTick).field_0x34 = 0;
  *(undefined4 *)&(this->InputsInjectedThisTick).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->InputsInjectedThisTick).field_0x40 = 0;
  *(undefined4 *)&(this->InputsInjectedThisTick).field_0x48 = 0;
  *(undefined8 *)&(this->LastInjectedActions).Elements = 0;
  *(undefined8 *)&(this->LastInjectedActions).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LastInjectedActions).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LastInjectedActions).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LastInjectedActions).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LastInjectedActions).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->LastInjectedActions).Elements.field_0x30 = 0xffffffff;
  (this->LastInjectedActions).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LastInjectedActions).HashSize = 0;
  (this->DependentChordActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DependentChordActions).ArrayNum = 0;
  (this->DependentChordActions).ArrayMax = 0;
  *(undefined8 *)&this->KeyDownPrevious = 0;
  *(undefined8 *)&(this->KeyDownPrevious).field_0x8 = 0;
  *(undefined8 *)&(this->KeyDownPrevious).field_0x20 = 0;
  *(undefined4 *)&(this->KeyDownPrevious).field_0x28 = 0;
  *(undefined4 *)&(this->KeyDownPrevious).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeyDownPrevious).field_0x34 = 0;
  *(undefined4 *)&(this->KeyDownPrevious).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->KeyDownPrevious).field_0x40 = 0;
  *(undefined4 *)&(this->KeyDownPrevious).field_0x48 = 0;
  (this->CurrentlyInUseAnyKeySubstitute).ComparisonIndex = 0;
  (this->CurrentlyInUseAnyKeySubstitute).Number = 0;
  this->LastFrameTime = 0.0;
  this->RealTimeDeltaSeconds = 0.0;
  return this;
}

// UEnhancedPlayerInput @ 14a6cc2e0

UEnhancedPlayerInput * __thiscall
UEnhancedPlayerInput::UEnhancedPlayerInput(UEnhancedPlayerInput *this)

{
  code *pcVar1;
  bool bVar2;
  UEnhancedInputDeveloperSettings *pUVar3;
  UEnhancedPlayerInput *pUVar4;
  
  UPlayerInput::UPlayerInput((UPlayerInput *)this);
  this->_padding_ = (longlong)&___7UEnhancedPlayerInput__6B_;
  *(undefined8 *)&this->KeyConsumptionData = 0;
  *(undefined8 *)&(this->KeyConsumptionData).field_0x8 = 0;
  *(undefined8 *)&(this->KeyConsumptionData).field_0x20 = 0;
  *(undefined4 *)&(this->KeyConsumptionData).field_0x28 = 0;
  *(undefined4 *)&(this->KeyConsumptionData).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeyConsumptionData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyConsumptionData).field_0x34 = 0;
  *(undefined8 *)&(this->KeyConsumptionData).field_0x40 = 0;
  *(undefined4 *)&(this->KeyConsumptionData).field_0x48 = 0;
  *(undefined8 *)&this->ActionInstanceData = 0;
  *(undefined8 *)&(this->ActionInstanceData).field_0x8 = 0;
  *(undefined8 *)&(this->ActionInstanceData).field_0x20 = 0;
  *(undefined4 *)&(this->ActionInstanceData).field_0x28 = 0;
  *(undefined4 *)&(this->ActionInstanceData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActionInstanceData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActionInstanceData).field_0x34 = 0;
  *(undefined8 *)&(this->ActionInstanceData).field_0x40 = 0;
  *(undefined4 *)&(this->ActionInstanceData).field_0x48 = 0;
  *(undefined8 *)&(this->ConsumedInputActions).Elements = 0;
  *(undefined8 *)&(this->ConsumedInputActions).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ConsumedInputActions).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ConsumedInputActions).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ConsumedInputActions).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConsumedInputActions).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConsumedInputActions).Elements.field_0x34 = 0;
  (this->ConsumedInputActions).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ConsumedInputActions).HashSize = 0;
  *(undefined8 *)&this->AppliedInputContextData = 0;
  *(undefined8 *)&(this->AppliedInputContextData).field_0x8 = 0;
  *(undefined8 *)&(this->AppliedInputContextData).field_0x20 = 0;
  *(undefined4 *)&(this->AppliedInputContextData).field_0x28 = 0;
  *(undefined4 *)&(this->AppliedInputContextData).field_0x2c = 0x80;
  *(undefined4 *)&(this->AppliedInputContextData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AppliedInputContextData).field_0x34 = 0;
  *(undefined8 *)&(this->AppliedInputContextData).field_0x40 = 0;
  *(undefined4 *)&(this->AppliedInputContextData).field_0x48 = 0;
  *(undefined8 *)&this->AppliedInputContexts = 0;
  *(undefined8 *)&(this->AppliedInputContexts).field_0x8 = 0;
  *(undefined8 *)&(this->AppliedInputContexts).field_0x20 = 0;
  *(undefined4 *)&(this->AppliedInputContexts).field_0x28 = 0;
  *(undefined4 *)&(this->AppliedInputContexts).field_0x2c = 0x80;
  *(undefined4 *)&(this->AppliedInputContexts).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AppliedInputContexts).field_0x34 = 0;
  *(undefined8 *)&(this->AppliedInputContexts).field_0x40 = 0;
  *(undefined4 *)&(this->AppliedInputContexts).field_0x48 = 0;
  (this->EnhancedActionMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnhancedActionMappings).ArrayNum = 0;
  (this->EnhancedActionMappings).ArrayMax = 0;
  (this->CurrentInputMode).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentInputMode).GameplayTags.ArrayNum = 0;
  (this->CurrentInputMode).GameplayTags.ArrayMax = 0;
  (this->CurrentInputMode).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentInputMode).ParentTags.ArrayNum = 0;
  (this->CurrentInputMode).ParentTags.ArrayMax = 0;
  *(undefined8 *)&this->EnhancedKeyBinds = 0;
  *(undefined8 *)&(this->EnhancedKeyBinds).field_0x8 = 0;
  *(undefined8 *)&(this->EnhancedKeyBinds).field_0x20 = 0;
  *(undefined4 *)&(this->EnhancedKeyBinds).field_0x28 = 0;
  *(undefined4 *)&(this->EnhancedKeyBinds).field_0x2c = 0x80;
  *(undefined4 *)&(this->EnhancedKeyBinds).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EnhancedKeyBinds).field_0x34 = 0;
  *(undefined8 *)&(this->EnhancedKeyBinds).field_0x40 = 0;
  *(undefined4 *)&(this->EnhancedKeyBinds).field_0x48 = 0;
  *(undefined8 *)&(this->ActionsWithEventsThisTick).Elements = 0;
  *(undefined8 *)&(this->ActionsWithEventsThisTick).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActionsWithEventsThisTick).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActionsWithEventsThisTick).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActionsWithEventsThisTick).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActionsWithEventsThisTick).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActionsWithEventsThisTick).Elements.field_0x34 = 0;
  (this->ActionsWithEventsThisTick).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActionsWithEventsThisTick).HashSize = 0;
  *(undefined8 *)&(this->TriggeredActionsThisTick).Elements = 0;
  *(undefined8 *)&(this->TriggeredActionsThisTick).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TriggeredActionsThisTick).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TriggeredActionsThisTick).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TriggeredActionsThisTick).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TriggeredActionsThisTick).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TriggeredActionsThisTick).Elements.field_0x34 = 0;
  (this->TriggeredActionsThisTick).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TriggeredActionsThisTick).HashSize = 0;
  *(undefined8 *)&(this->ActionsThatHaveBeenRemovedFromMappings).Elements = 0;
  *(undefined8 *)&(this->ActionsThatHaveBeenRemovedFromMappings).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActionsThatHaveBeenRemovedFromMappings).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActionsThatHaveBeenRemovedFromMappings).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActionsThatHaveBeenRemovedFromMappings).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActionsThatHaveBeenRemovedFromMappings).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActionsThatHaveBeenRemovedFromMappings).Elements.field_0x34 = 0;
  (this->ActionsThatHaveBeenRemovedFromMappings).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ActionsThatHaveBeenRemovedFromMappings).HashSize = 0;
  *(undefined8 *)&this->KeysPressedThisTick = 0;
  *(undefined8 *)&(this->KeysPressedThisTick).field_0x8 = 0;
  *(undefined8 *)&(this->KeysPressedThisTick).field_0x20 = 0;
  *(undefined4 *)&(this->KeysPressedThisTick).field_0x28 = 0;
  *(undefined4 *)&(this->KeysPressedThisTick).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeysPressedThisTick).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeysPressedThisTick).field_0x34 = 0;
  *(undefined8 *)&(this->KeysPressedThisTick).field_0x40 = 0;
  *(undefined4 *)&(this->KeysPressedThisTick).field_0x48 = 0;
  *(undefined8 *)&this->InputsInjectedThisTick = 0;
  *(undefined8 *)&(this->InputsInjectedThisTick).field_0x8 = 0;
  *(undefined8 *)&(this->InputsInjectedThisTick).field_0x20 = 0;
  *(undefined4 *)&(this->InputsInjectedThisTick).field_0x28 = 0;
  *(undefined4 *)&(this->InputsInjectedThisTick).field_0x2c = 0x80;
  *(undefined4 *)&(this->InputsInjectedThisTick).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InputsInjectedThisTick).field_0x34 = 0;
  *(undefined8 *)&(this->InputsInjectedThisTick).field_0x40 = 0;
  *(undefined4 *)&(this->InputsInjectedThisTick).field_0x48 = 0;
  *(undefined8 *)&(this->LastInjectedActions).Elements = 0;
  *(undefined8 *)&(this->LastInjectedActions).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LastInjectedActions).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LastInjectedActions).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LastInjectedActions).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LastInjectedActions).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LastInjectedActions).Elements.field_0x34 = 0;
  (this->LastInjectedActions).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LastInjectedActions).HashSize = 0;
  (this->DependentChordActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DependentChordActions).ArrayNum = 0;
  (this->DependentChordActions).ArrayMax = 0;
  *(undefined8 *)&this->KeyDownPrevious = 0;
  *(undefined8 *)&(this->KeyDownPrevious).field_0x8 = 0;
  *(undefined8 *)&(this->KeyDownPrevious).field_0x20 = 0;
  *(undefined4 *)&(this->KeyDownPrevious).field_0x28 = 0;
  *(undefined4 *)&(this->KeyDownPrevious).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeyDownPrevious).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyDownPrevious).field_0x34 = 0;
  *(undefined8 *)&(this->KeyDownPrevious).field_0x40 = 0;
  *(undefined4 *)&(this->KeyDownPrevious).field_0x48 = 0;
  this->bIsFlushingInputThisFrame = '\0';
  (this->CurrentlyInUseAnyKeySubstitute).ComparisonIndex = 0;
  (this->CurrentlyInUseAnyKeySubstitute).Number = 0;
  this->LastFrameTime = 0.0;
  this->RealTimeDeltaSeconds = 0.0;
  if ((this->_padding_ & 0x30) == 0) {
    pUVar3 = GetDefault<UEnhancedInputDeveloperSettings>();
    if (pUVar3 == (UEnhancedInputDeveloperSettings *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\EnhancedPlayerInput.cpp"
                         ,0x36,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UEnhancedPlayerInput *)(*pcVar1)();
        return pUVar4;
      }
    }
    FGameplayTagContainer::operator=(&this->CurrentInputMode,&pUVar3->DefaultInputMode);
  }
  return this;
}

// ~UEnhancedPlayerInput @ 14a6cf490

void __thiscall UEnhancedPlayerInput::~UEnhancedPlayerInput(UEnhancedPlayerInput *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  
  this->_padding_ = (longlong)&___7UEnhancedPlayerInput__6B_;
  *(undefined4 *)&(this->KeyDownPrevious).field_0x48 = 0;
  pvVar1 = *(void **)&(this->KeyDownPrevious).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKey,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKey,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKey,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyDownPrevious);
  pFVar2 = (this->DependentChordActions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->LastInjectedActions).HashSize = 0;
  FVar3 = (this->LastInjectedActions).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UInputAction_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UInputAction_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LastInjectedActions).Elements);
  *(undefined4 *)&(this->InputsInjectedThisTick).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InputsInjectedThisTick).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInputArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInputArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInputArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InputsInjectedThisTick);
  *(undefined4 *)&(this->KeysPressedThisTick).field_0x48 = 0;
  pvVar1 = *(void **)&(this->KeysPressedThisTick).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKey,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKey,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKey,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeysPressedThisTick);
  (this->ActionsThatHaveBeenRemovedFromMappings).HashSize = 0;
  FVar3 = (this->ActionsThatHaveBeenRemovedFromMappings).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UInputAction_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UInputAction_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ActionsThatHaveBeenRemovedFromMappings).Elements);
  (this->TriggeredActionsThisTick).HashSize = 0;
  FVar3 = (this->TriggeredActionsThisTick).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UInputAction_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UInputAction_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TriggeredActionsThisTick).Elements);
  (this->ActionsWithEventsThisTick).HashSize = 0;
  FVar3 = (this->ActionsWithEventsThisTick).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UInputAction_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UInputAction_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ActionsWithEventsThisTick).Elements);
  *(undefined4 *)&(this->EnhancedKeyBinds).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EnhancedKeyBinds).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EnhancedKeyBinds);
  pFVar2 = (this->CurrentInputMode).ParentTags.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CurrentInputMode).GameplayTags.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FEnhancedActionKeyMapping,int>
            ((FEnhancedActionKeyMapping *)(this->EnhancedActionMappings).AllocatorInstance.Data,
             (this->EnhancedActionMappings).ArrayNum);
  pFVar2 = (this->EnhancedActionMappings).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->AppliedInputContexts).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AppliedInputContexts).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AppliedInputContexts);
  *(undefined4 *)&(this->AppliedInputContextData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AppliedInputContextData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,FAppliedInputContextData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AppliedInputContextData);
  (this->ConsumedInputActions).HashSize = 0;
  FVar3 = (this->ConsumedInputActions).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UInputAction_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UInputAction_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ConsumedInputActions).Elements);
  *(undefined4 *)&(this->ActionInstanceData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ActionInstanceData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActionInstanceData);
  *(undefined4 *)&(this->KeyConsumptionData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->KeyConsumptionData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FKeyConsumptionOptions>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyConsumptionData);
  UPlayerInput::~UPlayerInput((UPlayerInput *)this);
  return;
}

// AddMapping @ 14a6d41d0

int __thiscall
UEnhancedPlayerInput::AddMapping(UEnhancedPlayerInput *this,FEnhancedActionKeyMapping *param_1)

{
  byte *pbVar1;
  FName FVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  iVar3 = TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<FEnhancedActionKeyMapping_const_&>(&this->EnhancedActionMappings,param_1);
  FVar2 = (param_1->Key).KeyName;
  uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  piVar5 = TMapBase<FKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,int,0>_>::
           FindOrAddImpl<FKey_const_&>
                     ((TMapBase<FKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,int,0>_>
                       *)&this->EnhancedKeyBinds,uVar4 + FVar2.Number,&param_1->Key);
  *piVar5 = *piVar5 + 1;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xfe;
  return iVar3;
}

// ApplyModifiers @ 14a6d4fd0

FInputActionValue * __thiscall
UEnhancedPlayerInput::ApplyModifiers
          (UEnhancedPlayerInput *this,FInputActionValue *__return_storage_ptr__,
          TArray<UInputModifier_*,TSizedDefaultAllocator<32>_> *param_1,FInputActionValue *param_2,
          float param_3)

{
  FScriptContainerElement *pFVar1;
  EInputActionValueType EVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined7 uVar7;
  FInputActionValue *pFVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_res10 [8];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  undefined7 uStack_8f;
  TVector<double>_u_0 local_88;
  undefined8 uStack_70;
  FInputActionValue local_68 [2];
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId898,"EnhPIS_Modifiers",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\EnhancedPlayerInput.cpp"
               ,0x382);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId898);
  }
  dVar4 = (param_2->Value).field0_0x0._s_0.Y;
  pFVar9 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  dVar5 = (param_2->Value).field0_0x0._s_0.Z;
  EVar2 = param_2->ValueType;
  uVar7 = *(undefined7 *)&param_2->field_0x19;
  (__return_storage_ptr__->Value).field0_0x0._s_0.X = (param_2->Value).field0_0x0._s_0.X;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Y = dVar4;
  pFVar1 = pFVar9 + (longlong)iVar3 * 8;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Z = dVar5;
  __return_storage_ptr__->ValueType = EVar2;
  *(undefined7 *)&__return_storage_ptr__->field_0x19 = uVar7;
  do {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<UInputModifier_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar9 == pFVar1) {
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return __return_storage_ptr__;
    }
    if (*(UInputModifier **)pFVar9 != (UInputModifier *)0x0) {
      local_88._s_0.X = (__return_storage_ptr__->Value).field0_0x0._s_0.X;
      local_88._s_0.Y = (__return_storage_ptr__->Value).field0_0x0._s_0.Y;
      local_88._s_0.Z = (__return_storage_ptr__->Value).field0_0x0._s_0.Z;
      uStack_70 = *(undefined8 *)&__return_storage_ptr__->ValueType;
      pFVar8 = UInputModifier::ModifyRaw
                         (*(UInputModifier **)pFVar9,local_68,this,
                          (FInputActionValue *)&local_88._s_0,param_3);
      EVar2 = param_2->ValueType;
      local_98 = (pFVar8->Value).field0_0x0._s_0.Z;
      uVar11 = *(undefined4 *)&(pFVar8->Value).field0_0x0;
      uVar12 = *(undefined4 *)((longlong)&(pFVar8->Value).field0_0x0 + 4);
      uVar6 = *(undefined8 *)&(pFVar8->Value).field0_0x0;
      uStack_a0 = *(undefined4 *)((longlong)&(pFVar8->Value).field0_0x0 + 8);
      uStack_9c = *(undefined4 *)((longlong)&(pFVar8->Value).field0_0x0 + 0xc);
      if ((EVar2 == Boolean) || (EVar2 == Axis1D)) {
        uVar11 = (undefined4)uVar6;
        uVar12 = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_a0 = 0;
        uStack_9c = 0;
LAB_14a6d50f9:
        local_98 = 0.0;
      }
      else if (EVar2 == Axis2D) goto LAB_14a6d50f9;
      *(undefined4 *)&(__return_storage_ptr__->Value).field0_0x0 = uVar11;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 4) = uVar12;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 8) = uStack_a0;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 0xc) = uStack_9c;
      (__return_storage_ptr__->Value).field0_0x0._s_0.Z = local_98;
      *(ulonglong *)&__return_storage_ptr__->ValueType = CONCAT71(uStack_8f,EVar2);
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// ClearAllMappings @ 14a6d6580

void __thiscall UEnhancedPlayerInput::ClearAllMappings(UEnhancedPlayerInput *this)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  FEnhancedActionKeyMapping *pFVar4;
  
  piVar1 = &(this->EnhancedActionMappings).ArrayMax;
  pFVar4 = (FEnhancedActionKeyMapping *)(this->EnhancedActionMappings).AllocatorInstance.Data;
  iVar3 = (this->EnhancedActionMappings).ArrayNum;
  if ((this->EnhancedActionMappings).ArrayMax < 0) {
    DestructItems<FEnhancedActionKeyMapping,int>(pFVar4,iVar3);
    (this->EnhancedActionMappings).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,&(this->EnhancedActionMappings).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FEnhancedActionKeyMapping,int>(pFVar4,iVar3);
    (this->EnhancedActionMappings).ArrayNum = 0;
  }
  TSet<TTuple<FKey,int>,TDefaultMapHashableKeyFuncs<FKey,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FKey,int>,TDefaultMapHashableKeyFuncs<FKey,int,0>,FDefaultSetAllocator> *)
             &this->EnhancedKeyBinds);
  pbVar2 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar2 = *pbVar2 & 0xfe;
  return;
}

// ConditionalBuildKeyMappings_Internal @ 14a6d68c0

void __thiscall
UEnhancedPlayerInput::ConditionalBuildKeyMappings_Internal(UEnhancedPlayerInput *this)

{
  byte *pbVar1;
  TObjectPtr<UInputAction_const_>_u_0 TVar2;
  longlong lVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  TObjectPtr<UInputAction_const_>_u_0 local_res8;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
  *local_38;
  char local_30;
  char cStack_2f;
  
  UPlayerInput::ConditionalBuildKeyMappings_Internal((UPlayerInput *)this);
  TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
              *)&this->ActionInstanceData);
  local_30 = '\0';
  cStack_2f = '\0';
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar7 = local_98._24_8_ >> 0x20;
  uVar9 = local_98._28_4_;
  local_38 = (TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
              *)&this->ActionInstanceData;
  if ((int)uVar9 < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      TVar2 = (TObjectPtr<UInputAction_const_>_u_0)
              ((TObjectPtr<UInputAction_const_>_u_0 *)((longlong)(int)uVar7 * 0x70 + *local_68))->
              DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.DebugPtr != (UInputAction *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
      local_res8 = TVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (TVar2.DebugPtr != (UInputAction *)0x0) {
          UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar2.DebugPtr != (UInputAction *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
        }
      }
      uVar6 = ((uint)((ulonglong)TVar2.DebugPtr >> 0x14) & 0xffff ^
              (uint)((ulonglong)TVar2.DebugPtr >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      uVar6 = uVar6 >> 0x10 ^ uVar6;
      iVar4 = TSet<TObjectPtr<UInputAction_const_>,DefaultKeyFuncs<TObjectPtr<UInputAction_const_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TObjectPtr<UInputAction_const_>_>
                        (&this->LastInjectedActions,uVar6,
                         (TObjectPtr<UInputAction_const_> *)&local_res8.ObjectPtr);
      if (iVar4 == -1) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar2.DebugPtr != (UInputAction *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
        }
        local_res8 = TVar2;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (TVar2.DebugPtr != (UInputAction *)0x0) {
            UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar2.DebugPtr != (UInputAction *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
          }
        }
        iVar4 = TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInputArray>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInputArray,0>,FDefaultSetAllocator>
                ::FindIndexByHash<TObjectPtr<UInputAction_const_>_>
                          ((TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInputArray>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInputArray,0>,FDefaultSetAllocator>
                            *)&this->InputsInjectedThisTick,uVar6,
                           (TObjectPtr<UInputAction_const_> *)&local_res8.ObjectPtr);
        if (iVar4 == -1) {
          pFVar5 = (this->EnhancedActionMappings).AllocatorInstance.Data;
          pFVar8 = pFVar5 + (longlong)(this->EnhancedActionMappings).ArrayNum * 0x50;
          for (; pFVar5 != pFVar8; pFVar5 = pFVar5 + 0x50) {
            if (*(UInputAction **)(pFVar5 + 0x20) == TVar2.DebugPtr) goto LAB_14a6d6ae1;
          }
          local_res8 = TVar2;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (TVar2.DebugPtr != (UInputAction *)0x0) {
              UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (TVar2.DebugPtr != (UInputAction *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
            }
          }
          iVar4 = TSet<TObjectPtr<UInputAction_const_>,DefaultKeyFuncs<TObjectPtr<UInputAction_const_>,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<TObjectPtr<UInputAction_const_>_>
                            (&this->ActionsThatHaveBeenRemovedFromMappings,uVar6,
                             (TObjectPtr<UInputAction_const_> *)&local_res8.ObjectPtr);
          if (iVar4 == -1) {
            TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_40,uVar9);
            local_30 = '\x01';
          }
        }
      }
LAB_14a6d6ae1:
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar7 = (ulonglong)uStack_4c;
      uVar9 = uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if ((local_30 != '\0') && (cStack_2f != '\0')) {
      uVar9 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar9 < 4) {
        iVar4 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar9) && (local_38->HashSize < iVar4)) || (iVar4 < local_38->HashSize)) {
        local_38->HashSize = iVar4;
        TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 | 1;
  return;
}

// ConvertInternalTriggerEvent @ 14a6d6cc0

ETriggerEvent __thiscall
UEnhancedPlayerInput::ConvertInternalTriggerEvent
          (UEnhancedPlayerInput *this,ETriggerEventInternal param_1)

{
  switch(param_1) {
  default:
    return None;
  case Completed:
    return Completed;
  case Started:
    return Started;
  case Ongoing:
    return Ongoing;
  case Canceled:
    return Canceled;
  case StartedAndTriggered:
  case Triggered:
    return Triggered;
  }
}

// EvaluateBlockedInputComponent @ 14a6d9ee0

void __thiscall
UEnhancedPlayerInput::EvaluateBlockedInputComponent
          (UEnhancedPlayerInput *this,UInputComponent *param_1)

{
  int iVar1;
  undefined8 uVar2;
  UClass *pUVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  
  UPlayerInput::EvaluateBlockedInputComponent((UPlayerInput *)this,param_1);
  if (param_1 != (UInputComponent *)0x0) {
    pUVar3 = UEnhancedInputComponent::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      lVar4 = param_1[1]._padding_;
      iVar1 = (int)param_1[1]._padding_;
      lVar5 = (longlong)iVar1 * 0x38 + lVar4;
      while( true ) {
        if ((int)param_1[1]._padding_ != iVar1) {
          `TCheckedPointerIterator<FEnhancedInputActionValueBinding_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res10);
        }
        uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        if (lVar4 == lVar5) break;
        *(double *)(lVar4 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        *(undefined8 *)(lVar4 + 0x20) = uVar2;
        *(double *)(lVar4 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        lVar4 = lVar4 + 0x38;
      }
    }
  }
  return;
}

// EvaluateInputDelegates @ 14a6daeb0

void __thiscall
UEnhancedPlayerInput::EvaluateInputDelegates
          (UEnhancedPlayerInput *this,TArray<UInputComponent_*,TSizedDefaultAllocator<32>_> *param_1
          ,float param_2,bool param_3,
          TArray<TTuple<FKey,FKeyState_*>,TSizedDefaultAllocator<32>_> *param_4)

{
  TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
  *this_00;
  ulonglong uVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  code *pcVar8;
  TSet<TObjectPtr<UInputAction_const_>,DefaultKeyFuncs<TObjectPtr<UInputAction_const_>,0>,FDefaultSetAllocator>
  *this_01;
  TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
  *pTVar9;
  TSet<TObjectPtr<UInputAction_const_>,DefaultKeyFuncs<TObjectPtr<UInputAction_const_>,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  ForElementType<unsigned_int> FVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined8 *puVar21;
  uint uVar22;
  ForElementType<unsigned_int> FVar23;
  bool bVar24;
  uint local_148;
  undefined1 local_144;
  undefined1 local_143 [3];
  ForElementType<unsigned_int> local_140;
  ulonglong local_138;
  TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
  *local_130;
  int iStack_128;
  uint uStack_124;
  undefined1 *local_120;
  undefined4 uStack_118;
  int iStack_114;
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  int local_100;
  int local_fc;
  int local_f8;
  TSet<TObjectPtr<UInputAction_const_>,DefaultKeyFuncs<TObjectPtr<UInputAction_const_>,0>,FDefaultSetAllocator>
  *local_f0;
  TSet<TObjectPtr<UInputAction_const_>,DefaultKeyFuncs<TObjectPtr<UInputAction_const_>,0>,FDefaultSetAllocator>
  *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  TSet<TObjectPtr<UInputAction_const_>,DefaultKeyFuncs<TObjectPtr<UInputAction_const_>,0>,FDefaultSetAllocator>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId341,"EnhPIS_Main",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\EnhancedPlayerInput.cpp"
               ,0x155);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId341);
  }
  UPlayerInput::EvaluateInputDelegates((UPlayerInput *)this,param_1,param_2,param_3,param_4);
  lVar12 = (**(code **)(this->_padding_ + 0x180))(this);
  if (lVar12 == 0) {
    dVar2 = (double)(this->LastFrameTime + __real_3c888889);
  }
  else {
    dVar2 = *(double *)(lVar12 + 0x908);
  }
  iVar16 = 0;
  local_140 = (ForElementType<unsigned_int>)&(this->ActionInstanceData).field_0x10;
  iVar4 = *(int *)&(this->ActionInstanceData).field_0x28;
  this_00 = &this->ActionInstanceData;
  local_138 = 1;
  iStack_128 = 0;
  local_110 = 0;
  uStack_124 = 1;
  iStack_114 = 0;
  if (iVar4 != 0) {
    puVar19 = *(uint **)&(this->ActionInstanceData).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)local_140;
    }
    uStack_124 = *puVar19;
    local_110 = 0;
    while (uStack_124 == 0) {
      lVar12 = (longlong)iStack_128;
      local_110 = local_110 + 0x20;
      iStack_128 = iStack_128 + 1;
      uStack_124 = 1;
      iStack_114 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_128) goto LAB_14a6db021;
      uStack_124 = (puVar19 + 1)[lVar12];
    }
    uStack_124 = -uStack_124 & uStack_124;
    uVar1 = (ulonglong)uStack_124 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_100 = (int)lVar12;
    iStack_114 = local_110 + -1 + local_100;
    if (iVar4 < iStack_114) {
      iStack_114 = iVar4;
    }
  }
LAB_14a6db021:
  uStack_10c = local_3c;
  iStack_108 = *(int *)&(this->ActionInstanceData).field_0x8 -
               *(int *)&(this->ActionInstanceData).field_0x34;
  local_148 = *(uint *)&(this->ActionInstanceData).field_0x28;
  TStack_b0._padding_ = CONCAT44(uStack_124,iStack_128);
  uVar22 = local_148 & 0xffffffe0;
  uStack_118 = 0xffffffff;
  TStack_b0.CurrentBitIndex = iStack_114;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)local_148 >> 5;
  TStack_b0._28_4_ = local_3c;
  TStack_b0.BaseBitIndex = local_110;
  uStack_90 = CONCAT44(uStack_104,iStack_108);
  local_130 = this_00;
  local_120 = (undefined1 *)local_140;
  local_b8 = this_00;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_140;
  if ((((int)local_148 < 0) || (iVar4 < (int)local_148)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar23 = local_140;
  uVar5 = *(int *)((longlong)local_140 + 0x18);
  if (local_148 != uVar5) {
    FVar17 = *(ForElementType<unsigned_int> *)((longlong)local_140 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_140 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar17 = local_140;
    }
    uVar20 = -1 << ((byte)local_148 & 0x1f) & *(uint *)((longlong)FVar17 + (longlong)iVar15 * 4);
    while (uVar20 == 0) {
      lVar12 = (longlong)iVar15;
      uVar22 = uVar22 + 0x20;
      iVar15 = iVar15 + 1;
      local_148 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14a6db160;
      uVar20 = *(uint *)((undefined1 *)((longlong)FVar17 + 4) + lVar12 * 4);
    }
    uVar1 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_fc = (int)lVar12;
    local_148 = local_fc + -1 + uVar22;
    if ((int)uVar5 < (int)local_148) {
      local_148 = uVar5;
    }
  }
LAB_14a6db160:
  while( true ) {
    pTVar9 = local_b8;
    if (*(int *)(&local_b8->field_0x0 + 8) - *(int *)(&local_b8->field_0x0 + 0x34) != (int)uStack_90
       ) {
      local_144 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_144);
    }
    if (((TStack_b0.CurrentBitIndex == local_148) &&
        ((ForElementType<unsigned_int>)TStack_b0.Array == FVar23)) && (pTVar9 == this_00)) break;
    lVar12 = *(longlong *)&pTVar9->field_0x0;
    lVar13 = (longlong)TStack_b0.CurrentBitIndex * 0x70;
    cVar3 = *(char *)(lVar13 + 0x1b + lVar12);
    if ((cVar3 == '\0') || ((cVar3 - 8U & 0xf7) == 0)) {
      *(undefined4 *)(lVar13 + 0x60 + lVar12) = 0;
    }
    if (cVar3 != '\x01') {
      *(undefined4 *)(lVar13 + 100 + lVar12) = 0;
    }
    *(undefined4 *)(lVar13 + 0x11 + lVar12) = 0;
    *(undefined4 *)(lVar13 + 0x15 + lVar12) = 0x10000;
    *(undefined1 *)(lVar13 + 0x19 + lVar12) = 0;
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  local_c8 = 0;
  local_f0 = &this->ActionsThatHaveBeenRemovedFromMappings;
  iVar4 = *(int *)&(this->ActionsThatHaveBeenRemovedFromMappings).Elements.field_0x28;
  local_d8 = &(this->ActionsThatHaveBeenRemovedFromMappings).Elements.field_0x10;
  iStack_cc = 0;
  if (iVar4 != 0) {
    puVar19 = *(uint **)&(this->ActionsThatHaveBeenRemovedFromMappings).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)local_d8;
    }
    uVar22 = *puVar19;
    while (uVar22 == 0) {
      lVar12 = (longlong)iVar16;
      local_c8 = local_c8 + 0x20;
      iVar16 = iVar16 + 1;
      iStack_cc = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14a6db26e;
      uVar22 = puVar19[lVar12 + 1];
    }
    local_138 = (ulonglong)(-uVar22 & uVar22);
    uVar1 = local_138 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_f8 = (int)lVar12;
    iStack_cc = local_c8 + -1 + local_f8;
    if (iVar4 < iStack_cc) {
      iStack_cc = iVar4;
    }
  }
LAB_14a6db26e:
  uStack_dc = (undefined4)local_138;
  iStack_c4 = iStack_114;
  FVar23 = (ForElementType<unsigned_int>)
           &(this->ActionsThatHaveBeenRemovedFromMappings).Elements.field_0x10;
  iStack_c0 = *(int *)&(this->ActionsThatHaveBeenRemovedFromMappings).Elements.field_0x8 -
              *(int *)&(this->ActionsThatHaveBeenRemovedFromMappings).Elements.field_0x34;
  local_148 = *(uint *)&(this->ActionsThatHaveBeenRemovedFromMappings).Elements.field_0x28;
  TStack_80._padding_ = CONCAT44(uStack_dc,iVar16);
  uStack_d0 = 0xffffffff;
  uVar22 = local_148 & 0xffffffe0;
  TStack_80.CurrentBitIndex = iStack_cc;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)local_148 >> 5;
  TStack_80._28_4_ = iStack_114;
  TStack_80.BaseBitIndex = local_c8;
  uStack_60 = CONCAT44(uStack_bc,iStack_c0);
  local_140 = FVar23;
  local_e8 = local_f0;
  iStack_e0 = iVar16;
  local_88 = local_f0;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_d8;
  if ((((int)local_148 < 0) || (iVar4 < (int)local_148)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_01 = local_f0;
  uVar5 = *(uint *)&(this->ActionsThatHaveBeenRemovedFromMappings).Elements.field_0x28;
  if (local_148 != uVar5) {
    puVar18 = *(undefined1 **)&(this->ActionsThatHaveBeenRemovedFromMappings).Elements.field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = (undefined1 *)FVar23;
    }
    uVar20 = -1 << ((byte)local_148 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar20 == 0) {
      lVar12 = (longlong)iVar15;
      uVar22 = uVar22 + 0x20;
      iVar15 = iVar15 + 1;
      local_148 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14a6db390;
      uVar20 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_148 = (int)lVar12 + -1 + uVar22;
    if ((int)uVar5 < (int)local_148) {
      local_148 = uVar5;
    }
  }
LAB_14a6db390:
  do {
    pTVar10 = local_88;
    if (*(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34 !=
        (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UInputAction_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_143);
    }
    if (((TStack_80.CurrentBitIndex == local_148) &&
        ((ForElementType<unsigned_int>)TStack_80.Array == FVar23)) && (pTVar10 == this_01)) {
      TSet<TObjectPtr<UInputAction_const_>,DefaultKeyFuncs<TObjectPtr<UInputAction_const_>,0>,FDefaultSetAllocator>
      ::Reset(this_01);
      this->LastFrameTime = (float)dVar2;
      TSet<TTuple<FKey,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FKey,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FKey,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FKey,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
               *)&this->KeysPressedThisTick);
      this->bIsFlushingInputThisFrame = '\0';
      TSet<TObjectPtr<UInputAction_const_>,DefaultKeyFuncs<TObjectPtr<UInputAction_const_>,0>,FDefaultSetAllocator>
      ::Reset(&this->ConsumedInputActions);
      if (bVar24) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    pUVar6 = *(UObject **)
              (*(longlong *)&pTVar10->Elements + (longlong)TStack_80.CurrentBitIndex * 0x10);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar6 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
    }
    if (*(int *)&(this->ActionInstanceData).field_0x8 !=
        *(int *)&(this->ActionInstanceData).field_0x34) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      uVar22 = ((uint)((ulonglong)pUVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar6 >> 4)) *
               -0x7a143595;
      uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
      puVar18 = *(undefined1 **)&(this->ActionInstanceData).field_0x40;
      puVar14 = &(this->ActionInstanceData).field_0x38;
      if (puVar18 != (undefined1 *)0x0) {
        puVar14 = puVar18;
      }
      iVar4 = *(int *)(puVar14 +
                      ((longlong)*(int *)&(this->ActionInstanceData).field_0x48 - 1U &
                      (longlong)(int)(uVar22 >> 0x10 ^ uVar22)) * 4);
      while (FVar23 = local_140, iVar4 != -1) {
        puVar21 = (undefined8 *)((longlong)iVar4 * 0x70 + *(longlong *)&this_00->field_0x0);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        pUVar7 = (UObject *)*puVar21;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        if (pUVar7 == pUVar6) {
          TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
                           *)this_00,iVar4);
          FVar23 = local_140;
          break;
        }
        iVar4 = *(int *)(puVar21 + 0xd);
      }
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  } while( true );
}

// EvaluateKeyMapState @ 14a6db560

void __thiscall
UEnhancedPlayerInput::EvaluateKeyMapState
          (UEnhancedPlayerInput *this,float param_1,bool param_2,
          TArray<TTuple<FKey,FKeyState_*>,TSizedDefaultAllocator<32>_> *param_3)

{
  atomic<int> *paVar1;
  TMap<FKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,bool,0>_> *pTVar2;
  ulonglong uVar3;
  FKeyDetails *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  code *pcVar10;
  FSharedReferencer<1> FVar11;
  void *pvVar12;
  bool bVar13;
  byte bVar14;
  UClass *this_00;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  FKey *this_01;
  longlong *plVar18;
  byte bVar19;
  byte bVar20;
  uint uVar21;
  bool bVar22;
  byte local_res8;
  undefined1 local_f7 [3];
  int local_f4;
  int local_f0 [2];
  longlong *local_e8;
  int iStack_e0;
  uint uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  TObjectPtr<UObject>_u_0 local_b0;
  longlong *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FSparseArrayAllocationInfo local_78;
  FSparseArrayAllocationInfo local_68 [3];
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId301,"EnhPIS_KeyDownPrev",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\EnhancedPlayerInput.cpp"
               ,0x12d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId301);
  }
  this_00 = UEnhancedInputDeveloperSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  local_b0 = (this_00->ClassDefaultObject).field0_0x0;
  pTVar2 = &this->KeyDownPrevious;
  local_res8 = 0;
  TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>
              *)pTVar2);
  TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>::Reserve
            ((TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>
              *)pTVar2,(int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4));
  local_d8 = &this->_padding_;
  iStack_e0 = 0;
  iVar7 = (int)this->_padding_;
  local_e8 = &this->_padding_;
  local_c8 = 0;
  uStack_dc = 1;
  iStack_cc = 0;
  if (iVar7 != 0) {
    plVar18 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar18 = local_d8;
    }
    uVar16 = (uint)*plVar18;
    while (uVar16 == 0) {
      lVar15 = (longlong)iStack_e0;
      local_c8 = local_c8 + 0x20;
      iStack_e0 = iStack_e0 + 1;
      iStack_cc = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_14a6db6af;
      uVar16 = *(uint *)((longlong)plVar18 + lVar15 * 4 + 4);
    }
    uStack_dc = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_dc * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_b8 = (int)lVar15;
    iStack_cc = local_c8 + -1 + local_b8;
    if (iVar7 < iStack_cc) {
      iStack_cc = iVar7;
    }
  }
LAB_14a6db6af:
  iStack_c0 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
  uVar16 = (uint)this->_padding_;
  uStack_d0 = 0xffffffff;
  TStack_a0.CurrentBitIndex = iStack_cc;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  TStack_a0._padding_ = CONCAT44(uStack_dc,iStack_e0);
  uVar21 = uVar16 & 0xffffffe0;
  iVar17 = (int)uVar16 >> 5;
  TStack_a0._28_4_ = iStack_cc;
  TStack_a0.BaseBitIndex = local_c8;
  uStack_80 = CONCAT44(uStack_bc,iStack_c0);
  iStack_c4 = iStack_cc;
  local_a8 = local_e8;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_d8;
  if ((((int)uVar16 < 0) || (iVar7 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar6 = (uint)this->_padding_;
  if (uVar16 != uVar6) {
    plVar18 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar18 = &this->_padding_;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)((longlong)plVar18 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      lVar15 = (longlong)iVar17;
      uVar21 = uVar21 + 0x20;
      iVar17 = iVar17 + 1;
      uVar16 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14a6db7bb;
      uVar16 = *(uint *)((longlong)plVar18 + lVar15 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar16 = (int)lVar15 + -1 + uVar21;
    if ((int)uVar6 < (int)uVar16) {
      uVar16 = uVar6;
    }
  }
LAB_14a6db7bb:
  while( true ) {
    plVar18 = local_a8;
    if ((int)local_a8[1] - *(int *)((longlong)local_a8 + 0x34) != (int)uStack_80) {
      `TSparseArray<TSparseSetElement<TTuple<FKey,FKeyState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_f7);
    }
    if (((TStack_a0.CurrentBitIndex == uVar16) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_)) &&
       (plVar18 == &this->_padding_)) break;
    this_01 = (FKey *)(*plVar18 + (longlong)TStack_a0.CurrentBitIndex * 0x110);
    if ((((this_01[3].KeyName.Number & 2) == 0) &&
        (*(int *)&this_01[3].KeyDetails.SharedReferenceCount.ReferenceController == 0)) &&
       (this_01[5].KeyName.ComparisonIndex.Value == 0)) {
      bVar19 = 0;
    }
    else {
      bVar19 = 1;
    }
    bVar13 = FKey::IsAnalog(this_01);
    if ((bVar13) &&
       (pFVar4 = this_01[1].KeyDetails.Object,
       pTVar5 = this_01[1].KeyDetails.SharedReferenceCount.ReferenceController,
       (double)pFVar4 * (double)pFVar4 + (double)this_01[1].KeyName * (double)this_01[1].KeyName +
       (double)pTVar5 * (double)pTVar5 != 0.0)) {
      bVar14 = 1;
    }
    else {
      bVar14 = 0;
    }
    if (((((this->bIsFlushingInputThisFrame == 0) || ((*(byte *)(local_b0.DebugPtr + 6) & 1) == 0))
         || (((double)this_01[2].KeyName == 0.0 &&
             (((double)this_01[2].KeyDetails.Object == 0.0 &&
              ((double)this_01[2].KeyDetails.SharedReferenceCount.ReferenceController == 0.0))))))
        || ((double)this_01[1].KeyName != 0.0)) ||
       ((((double)this_01[1].KeyDetails.Object != 0.0 ||
         ((double)this_01[1].KeyDetails.SharedReferenceCount.ReferenceController != 0.0)) ||
        ((this_01[3].KeyName.Number & 1) != 0)))) {
      bVar20 = 0;
    }
    else {
      bVar20 = 1;
    }
    iVar7 = *(int *)&(this->KeyDownPrevious).field_0x34;
    bVar20 = bVar19 | bVar14 | bVar20;
    local_res8 = local_res8 | bVar20;
    if (iVar7 == 0) {
      iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x28,8,1,(ForAnyElementType *)pTVar2,
                          (int *)&(this->KeyDownPrevious).field_0x8,
                          (int *)&(this->KeyDownPrevious).field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->KeyDownPrevious).field_0x10,false);
    }
    else {
      iVar17 = *(int *)&(this->KeyDownPrevious).field_0x30;
      iVar7 = iVar7 + -1;
      iVar8 = *(int *)(*(longlong *)&pTVar2->field_0x0 + 4 + (longlong)iVar17 * 0x28);
      *(int *)&(this->KeyDownPrevious).field_0x30 = iVar8;
      *(int *)&(this->KeyDownPrevious).field_0x34 = iVar7;
      if (iVar7 != 0) {
        *(undefined4 *)(*(longlong *)&pTVar2->field_0x0 + (longlong)iVar8 * 0x28) = 0xffffffff;
      }
    }
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)pTVar2,&local_78,iVar17);
    pvVar12 = local_78.Pointer;
    if (local_78.Pointer != (TSparseSetElement<TTuple<FKey,bool>_> *)0x0) {
      *(FName *)local_78.Pointer = this_01->KeyName;
      *(FKeyDetails **)((longlong)local_78.Pointer + 8) = (this_01->KeyDetails).Object;
      pTVar5 = (this_01->KeyDetails).SharedReferenceCount.ReferenceController;
      *(TReferenceControllerBase<1> **)((longlong)local_78.Pointer + 0x10) = pTVar5;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(byte *)((longlong)local_78.Pointer + 0x18) = bVar20;
      *(undefined4 *)((longlong)local_78.Pointer + 0x20) = 0xffffffff;
    }
    uVar9 = *(undefined8 *)local_78.Pointer;
    local_f4 = local_78.Index;
    uVar21 = ::GetTypeHash((FNameEntryId)(uint)uVar9);
    uVar21 = (int)((ulonglong)uVar9 >> 0x20) + uVar21;
    bVar13 = TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>::
             TryReplaceExisting((TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>
                                 *)pTVar2,uVar21,pvVar12,&local_f4,(bool *)0x0);
    if (!bVar13) {
      TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>::
      RehashOrLink((TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>
                    *)pTVar2,uVar21,pvVar12,local_f4);
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
  pTVar2 = &this->KeyDownPrevious;
  iVar7 = *(int *)&(this->KeyDownPrevious).field_0x34;
  if (iVar7 == 0) {
    iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x28,8,1,(ForAnyElementType *)pTVar2,
                        (int *)&(this->KeyDownPrevious).field_0x8,
                        (int *)&(this->KeyDownPrevious).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->KeyDownPrevious).field_0x10,false);
  }
  else {
    iVar17 = *(int *)&(this->KeyDownPrevious).field_0x30;
    iVar7 = iVar7 + -1;
    iVar8 = *(int *)(*(longlong *)&pTVar2->field_0x0 + 4 + (longlong)iVar17 * 0x28);
    *(int *)&(this->KeyDownPrevious).field_0x30 = iVar8;
    *(int *)&(this->KeyDownPrevious).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*(longlong *)&pTVar2->field_0x0 + (longlong)iVar8 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)pTVar2,local_68,iVar17);
  if (local_68[0].Pointer != (TSparseSetElement<TTuple<FKey,bool>_> *)0x0) {
    *(FName *)local_68[0].Pointer = EKeys::AnyKey.KeyName;
    *(FKeyDetails **)((longlong)local_68[0].Pointer + 8) = EKeys::AnyKey.KeyDetails.Object;
    FVar11 = EKeys::AnyKey.KeyDetails.SharedReferenceCount;
    *(TReferenceControllerBase<1> **)((longlong)local_68[0].Pointer + 0x10) =
         EKeys::AnyKey.KeyDetails.SharedReferenceCount.ReferenceController;
    if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar11.ReferenceController)->SharedReferenceCount;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    *(byte *)((longlong)local_68[0].Pointer + 0x18) = local_res8;
    *(undefined4 *)((longlong)local_68[0].Pointer + 0x20) = 0xffffffff;
  }
  uVar9 = *(undefined8 *)local_68[0].Pointer;
  local_f0[0] = local_68[0].Index;
  uVar16 = ::GetTypeHash((FNameEntryId)(uint)uVar9);
  uVar16 = (int)((ulonglong)uVar9 >> 0x20) + uVar16;
  bVar13 = TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>::
           TryReplaceExisting((TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>
                               *)pTVar2,uVar16,local_68[0].Pointer,local_f0,(bool *)0x0);
  if (!bVar13) {
    TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>::
    RehashOrLink((TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>
                  *)pTVar2,uVar16,local_68[0].Pointer,local_f0[0]);
  }
  UPlayerInput::EvaluateKeyMapState((UPlayerInput *)this,param_1,param_2,param_3);
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindOrAddActionEventData @ 14a6dd5c0

FInputActionInstance * __thiscall
UEnhancedPlayerInput::FindOrAddActionEventData
          (UEnhancedPlayerInput *this,TObjectPtr<UInputAction_const_> param_1)

{
  longlong lVar1;
  FInputActionInstance *pFVar2;
  longlong lVar3;
  UObject *local_res8;
  TObjectPtr<UInputAction_const_>_u_0 local_78;
  FInputActionInstance *local_70;
  FInputActionInstance local_68;
  
  local_res8 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  pFVar2 = TMapBase<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
           ::Find((TMapBase<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
                   *)&this->ActionInstanceData,(TObjectPtr<UInputAction_const_>)&local_res8);
  if (pFVar2 == (FInputActionInstance *)0x0) {
    local_78 = param_1.field0_0x0;
    local_70 = FInputActionInstance::FInputActionInstance
                         (&local_68,*(UInputAction **)param_1.field0_0x0);
    TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TObjectPtr<UInputAction_const_>_&,FInputActionInstance_&&>_>
              ((TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
                *)&this->ActionInstanceData,
               (TPairInitializer<TObjectPtr<UInputAction_const_>_&,FInputActionInstance_&&> *)
               &local_res8,(bool *)&local_78);
    lVar3 = (longlong)(int)local_res8;
    lVar1 = *(longlong *)&this->ActionInstanceData;
    if (local_68.Modifiers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Modifiers.AllocatorInstance.Data);
    }
    if (local_68.Triggers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Triggers.AllocatorInstance.Data);
    }
    pFVar2 = (FInputActionInstance *)(lVar3 * 0x70 + lVar1 + 8);
  }
  return pFVar2;
}

// FlushPressedKeys @ 14a6dd6b0

void __thiscall UEnhancedPlayerInput::FlushPressedKeys(UEnhancedPlayerInput *this)

{
  UPlayerInput::FlushPressedKeys((UPlayerInput *)this);
  this->bIsFlushingInputThisFrame = '\x01';
  return;
}

// GetActionValue @ 14a6de490

/* WARNING: Enum "Type": Some values do not have unique names */

FInputActionValue * __thiscall
UEnhancedPlayerInput::GetActionValue
          (UEnhancedPlayerInput *this,FInputActionValue *__return_storage_ptr__,
          TObjectPtr<UInputAction_const_> param_1)

{
  UObject *pUVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FInputActionInstance *this_00;
  TVector<double>_u_0 *pTVar6;
  UObject *local_res18;
  TVector<double>_u_0 local_28;
  char cStack_10;
  
  pUVar1 = *(UObject **)param_1.field0_0x0;
  if (pUVar1 == (UObject *)0x0) {
    if (1 < (byte)LogEnhancedInput._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    }
    *(undefined4 *)&__return_storage_ptr__->field_0x19 = 0;
    *(undefined2 *)&__return_storage_ptr__->field_0x1d = 0;
    __return_storage_ptr__->field_0x1f = 0;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    __return_storage_ptr__->ValueType = Boolean;
    (__return_storage_ptr__->Value).field0_0x0._s_0.X = (double)uVar4;
    (__return_storage_ptr__->Value).field0_0x0._s_0.Y = (double)uVar5;
    (__return_storage_ptr__->Value).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_res18 = pUVar1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  this_00 = TMapBase<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
            ::Find((TMapBase<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
                    *)&this->ActionInstanceData,(TObjectPtr<UInputAction_const_>)&local_res18);
  if (this_00 != (FInputActionInstance *)0x0) {
    pTVar6 = (TVector<double>_u_0 *)
             FInputActionInstance::GetValue(this_00,(FInputActionValue *)&local_28._s_0);
    goto LAB_14a6de59c;
  }
  local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  cStack_10 = *(char *)(*(longlong *)param_1.field0_0x0 + 0x48);
  if ((cStack_10 == '\0') || (cStack_10 == '\x01')) {
    local_28._s_0.Y = 0.0;
LAB_14a6de591:
    local_28._s_0.Z = 0.0;
  }
  else if (cStack_10 == '\x02') goto LAB_14a6de591;
  pTVar6 = &local_28;
LAB_14a6de59c:
  dVar2 = (pTVar6->_s_0).Y;
  dVar3 = (pTVar6->_s_0).Z;
  uVar4 = pTVar6->XYZ[3];
  (__return_storage_ptr__->Value).field0_0x0._s_0.X =
       (((TVector<double> *)&(pTVar6->_s_0).X)->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Z = dVar3;
  *(undefined8 *)&__return_storage_ptr__->ValueType = uVar4;
  return __return_storage_ptr__;
}

// GetCurrentInputMode @ 14a6dec40

FGameplayTagContainer * __thiscall
UEnhancedPlayerInput::GetCurrentInputMode(UEnhancedPlayerInput *this)

{
  return &this->CurrentInputMode;
}

// GetCurrentInputMode @ 14a6dec50

FGameplayTagContainer * __thiscall
UEnhancedPlayerInput::GetCurrentInputMode(UEnhancedPlayerInput *this)

{
  return &this->CurrentInputMode;
}

// GetEffectiveTimeDilation @ 14a6df280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall UEnhancedPlayerInput::GetEffectiveTimeDilation(UEnhancedPlayerInput *this)

{
  code *UNRECOVERED_JUMPTABLE;
  APlayerController *this_00;
  UWorld *this_01;
  AWorldSettings *pAVar1;
  float fVar2;
  
  this_00 = UPlayerInput::GetOuterAPlayerController((UPlayerInput *)this);
  if (this_00 != (APlayerController *)0x0) {
    fVar2 = AActor::GetActorTimeDilation((AActor *)this_00);
    return fVar2;
  }
  this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  if (this_01 != (UWorld *)0x0) {
    pAVar1 = UWorld::GetWorldSettings(this_01,false,true);
    if (pAVar1 != (AWorldSettings *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(pAVar1->_padding_ + 0x790);
                    /* WARNING: Could not recover jumptable at 0x00014a6df2d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar2 = (float)(*UNRECOVERED_JUMPTABLE)(pAVar1,UNRECOVERED_JUMPTABLE);
      return fVar2;
    }
  }
  return __real_3f800000;
}

// GetPrivateStaticClass @ 14a6e0de0

UClass * __cdecl UEnhancedPlayerInput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedPlayerInput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedPlayerInput",
               &Z_Registration_Info_UClass_UEnhancedPlayerInput.InnerSingleton,
               StaticRegisterNativesUEnhancedPlayerInput,0x900,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Input",
               InternalConstructor<UEnhancedPlayerInput>,
               InternalVTableHelperCtorCaller<UEnhancedPlayerInput>,local_res8,
               UPlayerInput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedPlayerInput.InnerSingleton;
}

// GetTriggerStateChangeEvent @ 14a6e2780

ETriggerEventInternal __thiscall
UEnhancedPlayerInput::GetTriggerStateChangeEvent
          (UEnhancedPlayerInput *this,ETriggerState param_1,ETriggerState param_2)

{
  ETriggerEventInternal EVar1;
  
  if (param_1 == None) {
    if (param_2 == Ongoing) {
      return Started;
    }
    EVar1 = None;
    if (param_2 == Triggered) {
      EVar1 = StartedAndTriggered;
    }
    return EVar1;
  }
  if (param_1 == Ongoing) {
    if (param_2 == None) {
      return Canceled;
    }
    if (param_2 != Ongoing) {
      EVar1 = None;
      if (param_2 == Triggered) {
        EVar1 = Triggered;
      }
      return EVar1;
    }
  }
  else {
    if (param_1 != Triggered) {
      return None;
    }
    if (param_2 == Triggered) {
      return Triggered;
    }
    if (param_2 != Ongoing) {
      return param_2 == None;
    }
  }
  return Ongoing;
}

// GetUserSettingsSaveFileName @ 14a6e2c20

FString * __thiscall
UEnhancedPlayerInput::GetUserSettingsSaveFileName
          (UEnhancedPlayerInput *this,FString *__return_storage_ptr__)

{
  UClass *this_00;
  
  this_00 = UEnhancedInputDeveloperSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  ::FString::FString(__return_storage_ptr__,
                     (FString *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[4].field_0x18);
  return __return_storage_ptr__;
}

// InitializeMappingActionModifiers @ 14a6e4900

void __thiscall
UEnhancedPlayerInput::InitializeMappingActionModifiers
          (UEnhancedPlayerInput *this,FEnhancedActionKeyMapping *param_1)

{
  double dVar1;
  EInputActionValueType EVar2;
  undefined7 uVar3;
  FInputActionInstance *pFVar4;
  FInputActionValue *pFVar5;
  UInputAction *local_res10;
  TVector<double>_u_0 local_48;
  undefined8 uStack_30;
  FInputActionValue local_28;
  
  local_res10 = (param_1->Action).field0_0x0.DebugPtr;
  if (local_res10 != (UInputAction *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    pFVar4 = FindOrAddActionEventData(this,(TObjectPtr<UInputAction_const_>)&local_res10);
    local_48._s_0.X = (pFVar4->Value).Value.field0_0x0._s_0.X;
    local_48._s_0.Y = (pFVar4->Value).Value.field0_0x0._s_0.Y;
    local_48._s_0.Z = (pFVar4->Value).Value.field0_0x0._s_0.Z;
    uStack_30 = *(undefined8 *)&(pFVar4->Value).ValueType;
    pFVar5 = ApplyModifiers(this,&local_28,
                            (TArray<UInputModifier_*,TSizedDefaultAllocator<32>_> *)
                            &param_1->Modifiers,(FInputActionValue *)&local_48._s_0,0.0);
    dVar1 = (pFVar5->Value).field0_0x0._s_0.Y;
    (pFVar4->Value).Value.field0_0x0._s_0.X = (pFVar5->Value).field0_0x0._s_0.X;
    (pFVar4->Value).Value.field0_0x0._s_0.Y = dVar1;
    EVar2 = pFVar5->ValueType;
    uVar3 = *(undefined7 *)&pFVar5->field_0x19;
    (pFVar4->Value).Value.field0_0x0._s_0.Z = (pFVar5->Value).field0_0x0._s_0.Z;
    (pFVar4->Value).ValueType = EVar2;
    *(undefined7 *)&(pFVar4->Value).field_0x19 = uVar3;
  }
  return;
}

// InjectInputForAction @ 14a6e5050

/* WARNING: Removing unreachable block (ram,0x00014a6e5208) */
/* WARNING: Removing unreachable block (ram,0x00014a6e5216) */

void __thiscall
UEnhancedPlayerInput::InjectInputForAction
          (UEnhancedPlayerInput *this,TObjectPtr<UInputAction_const_> param_1,
          FInputActionValue *param_2,TArray<UInputModifier_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int iVar2;
  UObject *pUVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  int iVar8;
  FInjectedInputArray *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType local_38;
  undefined8 local_30;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  uVar10 = param_3->ArrayNum;
  pFVar11 = (param_3->AllocatorInstance).Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = (ulonglong)uVar10;
  dVar4 = (param_2->Value).field0_0x0._s_0.X;
  dVar5 = (param_2->Value).field0_0x0._s_0.Y;
  dVar6 = (param_2->Value).field0_0x0._s_0.Z;
  uVar7 = *(undefined8 *)&param_2->ValueType;
  iVar8 = 0;
  if (uVar10 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar10,0,&local_28,uVar10,(int *)((longlong)&local_20 + 4));
    ConstructItems<TObjectPtr<UInputModifier>,UInputModifier_*,int>
              (local_28.Data,(UInputModifier **)pFVar11,uVar10);
    iVar8 = local_30._4_4_;
  }
  iVar2 = param_4->ArrayNum;
  pFVar11 = (param_4->AllocatorInstance).Data;
  local_30 = CONCAT44(local_30._4_4_,iVar2);
  if ((iVar2 == 0) && (iVar8 == 0)) {
    local_30 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,iVar8,&local_38,iVar2,(int *)((longlong)&local_30 + 4));
    ConstructItems<TObjectPtr<UInputTrigger>,UInputTrigger_*,int>
              (local_38.Data,(UInputTrigger **)pFVar11,iVar2);
  }
  pUVar3 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  uVar10 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
           -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  pFVar9 = TMapBase<TObjectPtr<UInputAction_const_>,FInjectedInputArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInputArray,0>_>
           ::FindOrAddImpl<TObjectPtr<UInputAction_const_>_const_&>
                     ((TMapBase<TObjectPtr<UInputAction_const_>,FInjectedInputArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInputArray,0>_>
                       *)&this->InputsInjectedThisTick,uVar10 >> 0x10 ^ uVar10,
                      (TObjectPtr<UInputAction_const_> *)param_1.field0_0x0);
  piVar1 = &(pFVar9->Injected).ArrayMax;
  iVar8 = (pFVar9->Injected).ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,(ForAnyElementType *)pFVar9,piVar1);
  }
  (pFVar9->Injected).ArrayNum = iVar8 + 1;
  pFVar11 = (pFVar9->Injected).AllocatorInstance.Data + (longlong)iVar8 * 0x40;
  *(double *)pFVar11 = dVar4;
  *(double *)(pFVar11 + 8) = dVar5;
  *(double *)(pFVar11 + 0x10) = dVar6;
  *(undefined8 *)(pFVar11 + 0x18) = uVar7;
  *(undefined8 *)(pFVar11 + 0x20) = 0;
  *(FScriptContainerElement **)(pFVar11 + 0x20) = local_38.Data;
  *(undefined4 *)(pFVar11 + 0x28) = (undefined4)local_30;
  *(int *)(pFVar11 + 0x2c) = local_30._4_4_;
  *(undefined8 *)(pFVar11 + 0x30) = 0;
  *(FScriptContainerElement **)(pFVar11 + 0x30) = local_28.Data;
  *(undefined4 *)(pFVar11 + 0x38) = (undefined4)local_20;
  *(undefined4 *)(pFVar11 + 0x3c) = local_20._4_4_;
  return;
}

// InputKey @ 14a6e5540

bool __thiscall
UEnhancedPlayerInput::InputKey(UEnhancedPlayerInput *this,FInputKeyEventArgs *param_1)

{
  FKey *this_00;
  FName FVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  TVector<double>_u_0 local_28;
  
  bVar2 = UPlayerInput::InputKey((UPlayerInput *)this,param_1);
  this_00 = &param_1->Key;
  bVar3 = FKey::IsButtonAxis(this_00);
  if ((bVar3) && (param_1->Event == IE_Pressed)) {
    FVar1 = this_00->KeyName;
    local_28._s_0.X = (double)param_1->AmountDepressed;
    local_28._s_0.Y = 0.0;
    local_28._s_0.Z = 0.0;
    uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    TMapBase<FKey,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,UE::Math::TVector<double>,0>_>
    ::FindOrAddImpl<FKey_const_&,UE::Math::TVector<double>_>
              ((TMapBase<FKey,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,UE::Math::TVector<double>,0>_>
                *)&this->KeysPressedThisTick,uVar4 + FVar1.Number,this_00,
               (TVector<double> *)&local_28._s_0);
  }
  return bVar2;
}

// IsKeyHandledByAction @ 14a6e59b0

bool __thiscall UEnhancedPlayerInput::IsKeyHandledByAction(UEnhancedPlayerInput *this,FKey *param_1)

{
  FName FVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  FKey local_28;
  
  FVar1 = param_1->KeyName;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->EnhancedKeyBinds).field_0x8 != *(int *)&(this->EnhancedKeyBinds).field_0x34) {
    puVar5 = *(undefined1 **)&(this->EnhancedKeyBinds).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->EnhancedKeyBinds).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->EnhancedKeyBinds).field_0x48 - 1U &
                              FVar1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->EnhancedKeyBinds + (longlong)iVar4 * 0x28) ==
            param_1->KeyName) goto LAB_14a6e5a6e;
        iVar4 = *(int *)(*(longlong *)&this->EnhancedKeyBinds + 0x20 + (longlong)iVar4 * 0x28);
      } while (iVar4 != -1);
    }
  }
  local_28.KeyName = param_1->KeyName;
  local_28.KeyDetails.Object = (param_1->KeyDetails).Object;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  bVar2 = UPlayerInput::IsKeyHandledByAction((UPlayerInput *)this,&local_28);
  if (bVar2) {
LAB_14a6e5a6e:
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return bVar2;
}

// NotifyInputActionsUnmapped @ 14a6e8910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UEnhancedPlayerInput::NotifyInputActionsUnmapped
          (UEnhancedPlayerInput *this,
          TSet<UInputAction_const_*,DefaultKeyFuncs<UInputAction_const_*,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  TObjectPtr<UInputAction_const_>_u_0 TVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  code *pcVar5;
  undefined8 uVar6;
  TSet<UInputAction_const_*,DefaultKeyFuncs<UInputAction_const_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint uVar21;
  uint *puVar23;
  uint uVar24;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_dc;
  TObjectPtr<UInputAction_const_>_u_0 local_d0;
  TSet<UInputAction_const_*,DefaultKeyFuncs<UInputAction_const_*,0>,FDefaultSetAllocator> *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TSet<UInputAction_const_*,DefaultKeyFuncs<UInputAction_const_*,0>,FDefaultSetAllocator> *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  ulonglong uVar22;
  
  uVar13 = *(uint *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  uVar18 = 0;
  uVar19 = 0;
  uVar9 = 1;
  uVar21 = 0;
  if (UE::Input::ReconcileRemovedMappingDelegates == 0) {
    uVar10 = uVar19;
    if (uVar13 != 0) {
      puVar23 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)puVar1;
      }
      uVar11 = *puVar23;
      uVar12 = uVar18;
      uVar19 = uVar21;
      uVar10 = uVar21;
      while (uVar11 == 0) {
        iVar16 = (int)uVar18;
        uVar19 = (int)uVar12 + 0x20;
        uVar12 = (ulonglong)uVar19;
        uVar10 = iVar16 + 1;
        uVar18 = (ulonglong)uVar10;
        uVar21 = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar10)
        goto LAB_14a6e8c6f;
        uVar11 = puVar23[(longlong)iVar16 + 1];
      }
      uVar9 = -uVar11 & uVar11;
      uVar18 = (ulonglong)uVar9 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar21 = (uVar19 - 1) + (int)lVar14;
      if ((int)uVar13 < (int)uVar21) {
        uVar21 = uVar13;
      }
    }
LAB_14a6e8c6f:
    uVar11 = *(uint *)&(param_1->Elements).field_0x28;
    TStack_90._padding_ = CONCAT44(uVar9,uVar10);
    uVar9 = uVar11 & 0xffffffe0;
    TStack_90.CurrentBitIndex = uVar21;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar11 >> 5;
    TStack_90._28_4_ = uVar21;
    TStack_90.BaseBitIndex = uVar19;
    uStack_70 = CONCAT44(uStack_dc,
                         *(int *)&(param_1->Elements).field_0x8 -
                         *(int *)&(param_1->Elements).field_0x34);
    local_98 = param_1;
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || ((int)uVar13 < (int)uVar11)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar13 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar11 != uVar13) {
      puVar20 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = puVar1;
      }
      uVar19 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
      while (uVar19 == 0) {
        lVar14 = (longlong)iVar16;
        uVar9 = uVar9 + 0x20;
        iVar16 = iVar16 + 1;
        uVar11 = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_14a6e8d80;
        uVar19 = *(uint *)(puVar20 + lVar14 * 4 + 4);
      }
      uVar18 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar11 = (int)lVar14 + -1 + uVar9;
      if ((int)uVar13 < (int)uVar11) {
        uVar11 = uVar13;
      }
    }
LAB_14a6e8d80:
    while( true ) {
      pTVar7 = local_98;
      if (*(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34 !=
          (int)uStack_70) {
        `TSparseArray<TSparseSetElement<UInputAction_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_90.CurrentBitIndex == uVar11) &&
          (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar7 == param_1)) break;
      pUVar3 = *(UObject **)
                (*(longlong *)&pTVar7->Elements + (longlong)TStack_90.CurrentBitIndex * 0x10);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar3 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
      }
      if (*(int *)&(this->ActionInstanceData).field_0x8 !=
          *(int *)&(this->ActionInstanceData).field_0x34) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        uVar13 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                 -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        puVar20 = *(undefined1 **)&(this->ActionInstanceData).field_0x40;
        puVar15 = &(this->ActionInstanceData).field_0x38;
        if (puVar20 != (undefined1 *)0x0) {
          puVar15 = puVar20;
        }
        iVar16 = *(int *)(puVar15 +
                         ((longlong)*(int *)&(this->ActionInstanceData).field_0x48 - 1U &
                         (longlong)(int)(uVar13 >> 0x10 ^ uVar13)) * 4);
        while (iVar16 != -1) {
          puVar17 = (undefined8 *)
                    ((longlong)iVar16 * 0x70 + *(longlong *)&(this->ActionInstanceData).field_0x0);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          pUVar4 = (UObject *)*puVar17;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar4);
          }
          if (pUVar4 == pUVar3) {
            TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
                             *)&this->ActionInstanceData,iVar16);
            break;
          }
          iVar16 = *(int *)(puVar17 + 0xd);
        }
      }
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    }
    if (6 < (byte)LogEnhancedInput._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    }
  }
  else {
    uVar10 = uVar21;
    if (uVar13 != 0) {
      puVar23 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)puVar1;
      }
      uVar10 = *puVar23;
      uVar12 = uVar18;
      uVar22 = uVar18;
      uVar19 = uVar21;
      while (uVar10 == 0) {
        iVar16 = (int)uVar12;
        uVar21 = (int)uVar22 + 0x20;
        uVar22 = (ulonglong)uVar21;
        uVar19 = iVar16 + 1;
        uVar12 = (ulonglong)uVar19;
        uVar10 = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
        goto LAB_14a6e89ce;
        uVar10 = puVar23[(longlong)iVar16 + 1];
      }
      uVar9 = -uVar10 & uVar10;
      uVar12 = (ulonglong)uVar9 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar10 = (uVar21 - 1) + (int)lVar14;
      if ((int)uVar13 < (int)uVar10) {
        uVar10 = uVar13;
      }
    }
LAB_14a6e89ce:
    uVar11 = *(uint *)&(param_1->Elements).field_0x28;
    uVar24 = uVar11 & 0xffffffe0;
    TStack_c0._padding_ = CONCAT44(uVar9,uVar19);
    TStack_c0.CurrentBitIndex = uVar10;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar11 >> 5;
    TStack_c0._28_4_ = local_4c;
    TStack_c0.BaseBitIndex = uVar21;
    uStack_a0 = CONCAT44(uStack_dc,
                         *(int *)&(param_1->Elements).field_0x8 -
                         *(int *)&(param_1->Elements).field_0x34);
    local_c8 = param_1;
    TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || ((int)uVar13 < (int)uVar11)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar13 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar11 != uVar13) {
      puVar20 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = puVar1;
      }
      uVar19 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
      while (uVar19 == 0) {
        lVar14 = (longlong)iVar16;
        uVar24 = uVar24 + 0x20;
        iVar16 = iVar16 + 1;
        uVar11 = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_14a6e8ae0;
        uVar19 = *(uint *)(puVar20 + lVar14 * 4 + 4);
      }
      uVar12 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar11 = (int)lVar14 + -1 + uVar24;
      if ((int)uVar13 < (int)uVar11) {
        uVar11 = uVar13;
      }
    }
LAB_14a6e8ae0:
    while( true ) {
      pTVar7 = local_c8;
      if (*(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34 !=
          (int)uStack_a0) {
        `TSparseArray<TSparseSetElement<UInputAction_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_c0.CurrentBitIndex == uVar11) &&
          (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar7 == param_1)) break;
      TVar2 = (TObjectPtr<UInputAction_const_>_u_0)
              ((TObjectPtr<UInputAction_const_>_u_0 *)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_c0.CurrentBitIndex * 0x10))->
              DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.DebugPtr != (UInputAction *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
      local_d0 = TVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (TVar2.DebugPtr != (UInputAction *)0x0) {
          UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar2.DebugPtr != (UInputAction *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
        }
      }
      uVar13 = ((uint)((ulonglong)TVar2.DebugPtr >> 0x14) & 0xffff ^
               (uint)((ulonglong)TVar2.DebugPtr >> 4)) * -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      iVar16 = TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TObjectPtr<UInputAction_const_>_>
                         ((TSet<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>,FDefaultSetAllocator>
                           *)&this->ActionInstanceData,uVar13 >> 0x10 ^ uVar13,
                          (TObjectPtr<UInputAction_const_> *)&local_d0.ObjectPtr);
      uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if (iVar16 != -1) {
        lVar14 = (longlong)iVar16 * 0x70 + *(longlong *)&this->ActionInstanceData;
        uVar12 = lVar14 + 8;
        if (lVar14 == 0) {
          uVar12 = uVar18;
        }
        if (uVar12 != 0) {
          *(double *)(uVar12 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          *(undefined8 *)(uVar12 + 0x40) = uVar6;
          *(double *)(uVar12 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
      }
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    }
    TSet<TObjectPtr<UInputAction_const_>,DefaultKeyFuncs<TObjectPtr<UInputAction_const_>,0>,FDefaultSetAllocator>
    ::Reset(&this->ActionsThatHaveBeenRemovedFromMappings);
    TSet<TObjectPtr<UInputAction_const_>,DefaultKeyFuncs<TObjectPtr<UInputAction_const_>,0>,FDefaultSetAllocator>
    ::
    Append<DefaultKeyFuncs<UInputAction_const_*,0>,FDefaultSetAllocator,TObjectPtr<UInputAction_const_>_>
              (&this->ActionsThatHaveBeenRemovedFromMappings,param_1);
  }
  return;
}

// PrepareInputDelegatesForEvaluation @ 14a6e9c90

void __thiscall
UEnhancedPlayerInput::PrepareInputDelegatesForEvaluation
          (UEnhancedPlayerInput *this,TArray<UInputComponent_*,TSizedDefaultAllocator<32>_> *param_1
          ,float param_2,bool param_3,
          TArray<TTuple<FKey,FKeyState_*>,TSizedDefaultAllocator<32>_> *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  TMap<TObjectPtr<UInputAction_const_>,FInjectedInputArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInputArray,0>_>
  *this_00;
  TSet<TObjectPtr<UInputAction_const_>,DefaultKeyFuncs<TObjectPtr<UInputAction_const_>,0>,FDefaultSetAllocator>
  *this_01;
  double dVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  int iVar6;
  undefined1 *puVar7;
  TObjectPtr<UInputAction_const_>_u_0 TVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  code *pcVar11;
  TObjectPtr<UInputAction_const_>_u_0 TVar12;
  TObjectPtr<UInputAction_const_>_u_0 TVar13;
  TObjectPtr<UInputAction_const_>_u_0 TVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  FObjectPtr_u_0 FVar18;
  bool bVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
  *pTVar22;
  TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInputArray>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInputArray,0>,FDefaultSetAllocator>
  *pTVar23;
  bool bVar24;
  bool bVar25;
  undefined1 uVar26;
  ETriggerState EVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  longlong lVar31;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar32;
  FName FVar33;
  TVector<double> *pTVar34;
  TTuple<FKey,bool> *pTVar35;
  FName *pFVar36;
  FObjectPtr_u_0 *pFVar37;
  uint uVar38;
  ulonglong uVar39;
  TReferenceControllerBase<1> *pTVar40;
  FName *pFVar41;
  undefined1 *puVar42;
  TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInputArray>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInputArray,0>,FDefaultSetAllocator>
  *pTVar43;
  uint uVar44;
  FKeyState *pFVar45;
  TObjectPtr<UInputAction_const_>_u_0 *pTVar46;
  FKey *pFVar47;
  double *pdVar48;
  uint *puVar49;
  char cVar50;
  EKeyEvent EVar51;
  ETriggerState EVar52;
  FKey *this_02;
  TSparseSetElement<TObjectPtr<UInputAction_const_>_> *pTVar53;
  double *pdVar54;
  undefined8 *puVar55;
  bool bVar56;
  ETriggerState EVar57;
  float fVar58;
  float fVar59;
  double dVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  FNameEntryId FVar64;
  uint uVar65;
  undefined1 local_467;
  undefined1 local_466;
  undefined1 local_465 [5];
  TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInputArray>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInputArray,0>,FDefaultSetAllocator>
  *local_460;
  undefined1 local_458 [4];
  int local_454;
  uint local_450;
  ulonglong local_448;
  TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
  *local_440;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_438;
  undefined8 local_418;
  TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInputArray>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInputArray,0>,FDefaultSetAllocator>
  *local_410;
  undefined8 local_408;
  TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_> local_400;
  TArray<UInputModifier_*,TSizedDefaultAllocator<32>_> local_3f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3e0;
  TVector<double>_u_0 local_3c0;
  undefined4 uStack_3a8;
  int iStack_3a4;
  int local_3a0;
  undefined4 uStack_39c;
  int iStack_398;
  undefined4 uStack_394;
  int local_390;
  int local_38c;
  UObject *local_388;
  TObjectPtr<UInputAction_const_>_u_0 local_380;
  TObjectPtr<UInputAction_const_>_u_0 local_378;
  TObjectPtr<UInputAction_const_>_u_0 local_370;
  TObjectPtr<UInputAction_const_>_u_0 local_368;
  UObject *local_360;
  undefined1 local_358 [12];
  uint local_34c;
  longlong local_348;
  uint local_340;
  int local_33c;
  TSet<TObjectPtr<UInputAction_const_>,DefaultKeyFuncs<TObjectPtr<UInputAction_const_>,0>,FDefaultSetAllocator>
  *local_330;
  TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
  *local_328;
  int iStack_320;
  undefined4 uStack_31c;
  undefined1 *local_318;
  undefined4 uStack_310;
  int iStack_30c;
  int local_308;
  undefined4 uStack_304;
  int iStack_300;
  undefined4 uStack_2fc;
  undefined1 local_2f8 [12];
  uint uStack_2ec;
  TBitArray<FDefaultBitArrayAllocator> *local_2e8;
  undefined8 uStack_2e0;
  longlong local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInputArray>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInputArray,0>,FDefaultSetAllocator>
  *local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c0;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  undefined1 uStack_280;
  undefined4 uStack_27f;
  undefined2 uStack_27b;
  undefined1 uStack_279;
  FSparseArrayAllocationInfo local_278;
  double local_268;
  FKey local_260;
  uint local_240;
  uint uStack_23c;
  uint uStack_238;
  uint uStack_234;
  double local_230;
  undefined1 uStack_228;
  undefined7 uStack_227;
  TRangedForIterator local_218;
  TVector<double>_u_0 local_1e8;
  undefined8 uStack_1d0;
  TVector<double>_u_0 local_1c8;
  undefined8 uStack_1b0;
  TVector<double>_u_0 local_1a8;
  double dStack_190;
  TVector<double>_u_0 local_188;
  TObjectPtr<UInputAction_const_>_u_0 TStack_170;
  TVector<double>_u_0 local_168;
  TObjectPtr<UInputAction_const_>_u_0 TStack_150;
  TObjectPtr<UInputAction_const_>_u_0 local_138;
  FKey local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_118;
  undefined4 local_dc;
  undefined4 local_bc;
  
  TSet<TObjectPtr<UInputAction_const_>,DefaultKeyFuncs<TObjectPtr<UInputAction_const_>,0>,FDefaultSetAllocator>
  ::Reset(&this->ActionsWithEventsThisTick);
  lVar31 = (**(code **)(this->_padding_ + 0x180))(this);
  if (lVar31 == 0) {
    dVar3 = (double)(this->LastFrameTime + __real_3c888889);
  }
  else {
    dVar3 = *(double *)(lVar31 + 0x908);
  }
  this->RealTimeDeltaSeconds = (float)dVar3 - this->LastFrameTime;
  fVar58 = GetEffectiveTimeDilation(this);
  if (fVar58 == 0.0) {
    fVar58 = this->RealTimeDeltaSeconds;
  }
  else {
    fVar58 = param_2 / fVar58;
  }
  uVar38 = (this->EnhancedActionMappings).ArrayNum;
  uVar39 = (ulonglong)(int)uVar38;
  pTVar43 = (TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInputArray>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInputArray,0>,FDefaultSetAllocator>
             *)(this->EnhancedActionMappings).AllocatorInstance.Data;
  local_448 = CONCAT44(local_448._4_4_,1);
  this_02 = (FKey *)&(pTVar43->Elements).field_0x28;
  local_410 = pTVar43 + uVar39;
  while( true ) {
    pTVar23 = local_410;
    local_460 = pTVar43;
    if ((this->EnhancedActionMappings).ArrayNum != (int)uVar39) {
      local_467 = 0;
      `TCheckedPointerIterator<FEnhancedActionKeyMapping,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_467);
    }
    if (pTVar43 == pTVar23) break;
    bVar56 = -1 < CpuChannel->Enabled;
    if (bVar56) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId411,"EnhPIS_Devices",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\EnhancedPlayerInput.cpp"
                 ,0x19b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId411);
    }
    if (this_02[-1].KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      if (this_02->KeyName == EKeys::AnyKey.KeyName) {
        plVar1 = &this->_padding_;
        plVar2 = &this->_padding_;
        local_3e0._padding_._4_4_ = (undefined4)local_448;
        local_3e0._padding_._0_4_ = 0;
        local_3e0.UnvisitedBitMask = 0xffffffff;
        local_3e0.CurrentBitIndex = 0;
        local_3e0.BaseBitIndex = 0;
        local_3e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
        if ((int)this->_padding_ != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3e0);
        }
        TStack_438._padding_ = CONCAT44(local_3e0._padding_._4_4_,(undefined4)local_3e0._padding_);
        TStack_438._16_8_ = CONCAT44(local_3e0.CurrentBitIndex,local_3e0.UnvisitedBitMask);
        TStack_438._24_8_ = CONCAT44(local_3e0._28_4_,local_3e0.BaseBitIndex);
        iStack_2d0 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
        TStack_438.Array = local_3e0.Array;
        local_418._0_4_ = iStack_2d0;
        local_2e8 = local_3e0.Array;
        uStack_2cc = local_418._4_4_;
        local_440 = (TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
                     *)plVar2;
        local_2f8._0_8_ = plVar2;
        unique0x10002fea = TStack_438._padding_;
        uStack_2e0 = TStack_438._16_8_;
        local_2d8 = TStack_438._24_8_;
        pTVar32 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_118,(TBitArray<FDefaultBitArrayAllocator> *)plVar1,
                             (int)this->_padding_);
        TStack_438._padding_ = pTVar32->_padding_;
        TStack_438.Array = pTVar32->Array;
        TStack_438.UnvisitedBitMask = pTVar32->UnvisitedBitMask;
        TStack_438.CurrentBitIndex = pTVar32->CurrentBitIndex;
        TStack_438._24_8_ = *(undefined8 *)&pTVar32->BaseBitIndex;
        local_218.InitialNum = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
        local_418._0_4_ = local_218.InitialNum;
        local_218._44_4_ = local_418._4_4_;
        local_440 = (TMap<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
                     *)plVar2;
        local_218._padding_ = (longlong)plVar2;
        local_218._padding_ = TStack_438._padding_;
        local_218._padding_ = (longlong)TStack_438.Array;
        local_218._padding_ = TStack_438._16_8_;
        local_218._padding_ = TStack_438._24_8_;
        bVar24 = TSparseArray<TSparseSetElement<TTuple<FKey,FKeyState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_2f8,&local_218);
        pFVar45 = (FKeyState *)0x0;
        if (bVar24) {
          do {
            pFVar47 = (FKey *)((longlong)uStack_2e0._4_4_ * 0x110 + *(longlong *)local_2f8._0_8_);
            bVar24 = FKey::IsDigital(pFVar47);
            if (bVar24) {
              if ((this->CurrentlyInUseAnyKeySubstitute == (FName)0x0) &&
                 (0 < *(int *)&pFVar47[3].KeyDetails.SharedReferenceCount.ReferenceController)) {
                FVar33 = FKey::GetFName(pFVar47);
                this->CurrentlyInUseAnyKeySubstitute = *(FName *)FVar33;
                pTVar34 = (TVector<double> *)(pFVar47 + 1);
                goto LAB_14a6ea087;
              }
              FVar33 = FKey::GetFName(pFVar47);
              if (*(FName *)FVar33 == this->CurrentlyInUseAnyKeySubstitute) {
                if (0 < *(int *)&pFVar47[4].KeyDetails.Object) {
                  local_408 = 0;
                  (this->CurrentlyInUseAnyKeySubstitute).ComparisonIndex = 0;
                  (this->CurrentlyInUseAnyKeySubstitute).Number = 0;
                }
                pTVar34 = (TVector<double> *)(pFVar47 + 1);
                goto LAB_14a6ea087;
              }
            }
            uStack_2e0 = CONCAT44(uStack_2e0._4_4_,(uint)uStack_2e0 & ~uStack_2ec);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_2f8 + 8));
            bVar24 = TSparseArray<TSparseSetElement<TTuple<FKey,FKeyState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForIterator::operator!=((TRangedForIterator *)local_2f8,&local_218);
            pFVar45 = (FKeyState *)0x0;
          } while (bVar24);
        }
LAB_14a6ea08f:
        pTVar34 = &UE::Math::TVector<double>::ZeroVector;
      }
      else {
        bVar24 = FKey::IsVirtual(this_02);
        if (bVar24) {
          pFVar47 = FKey::GetVirtualKey(this_02,&local_130);
          pTVar34 = &TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
                     ::Find((TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
                             *)&this->_padding_,pFVar47)->RawValue;
          pTVar40 = (pFVar47->KeyDetails).SharedReferenceCount.ReferenceController;
        }
        else {
          local_260.KeyName = this_02->KeyName;
          pTVar40 = (this_02->KeyDetails).SharedReferenceCount.ReferenceController;
          local_260.KeyDetails.Object = (this_02->KeyDetails).Object;
          if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_260.KeyDetails.SharedReferenceCount.ReferenceController = pTVar40;
          pTVar34 = &TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
                     ::Find((TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
                             *)&this->_padding_,&local_260)->RawValue;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar40)
        ;
LAB_14a6ea087:
        pFVar45 = (FKeyState *)pTVar34;
        if ((FKeyState *)pTVar34 == (FKeyState *)0x0) goto LAB_14a6ea08f;
      }
      local_268 = (((FKeyState *)pTVar34)->RawValue).field0_0x0._s_0.Z;
      FVar64.Value = SUB84(local_268,0);
      uVar65 = (uint)((ulonglong)local_268 >> 0x20);
      auVar4 = *(undefined1 (*) [16])&(((FKeyState *)pTVar34)->RawValue).field0_0x0;
      uVar44 = auVar4._0_4_;
      uVar61 = auVar4._4_4_;
      uVar62 = auVar4._8_4_;
      uVar63 = auVar4._12_4_;
      bVar5 = (byte)this_02[1].KeyName.ComparisonIndex.Value;
      if (((bVar5 & 1) != 0) && (pFVar45 != (FKeyState *)0x0)) {
        if (pFVar45->bDown != 0) goto joined_r0x00014a6ea2e0;
        *(byte *)&this_02[1].KeyName.ComparisonIndex.Value = bVar5 & 0xfe;
      }
      pTVar35 = TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FKey,bool>,TDefaultMapHashableKeyFuncs<FKey,bool,0>,FDefaultSetAllocator>
                        *)&this->KeyDownPrevious,this_02);
      if (pTVar35 == (TTuple<FKey,bool> *)0x0) {
        cVar50 = '\0';
      }
      else {
        cVar50 = pTVar35->field_0x18;
      }
      if ((pFVar45 == (FKeyState *)0x0) ||
         (((pFVar45->bDown == 0 && (pFVar45->EventCounts[0].ArrayNum == 0)) &&
          (pFVar45->EventCounts[2].ArrayNum == 0)))) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      bVar25 = FKey::IsAnalog(this_02);
      dVar16 = local_268;
      dVar15 = auVar4._0_8_;
      dVar60 = auVar4._8_8_;
      if ((!bVar25) || (dVar60 * dVar60 + dVar15 * dVar15 + local_268 * local_268 <= 0.0)) {
        bVar25 = false;
      }
      else {
        bVar25 = true;
      }
      if ((bVar25 || bVar24) || (cVar50 == '\0')) {
        bVar19 = false;
        if (!bVar25 && !bVar24) goto LAB_14a6ea168;
        if (cVar50 == '\0') goto LAB_14a6ea163;
        EVar51 = Held;
      }
      else {
        bVar19 = true;
LAB_14a6ea163:
        if (!bVar25 && !bVar24) {
LAB_14a6ea168:
          if (!bVar19) {
            EVar51 = None;
            goto LAB_14a6ea185;
          }
        }
        EVar51 = Actuated;
      }
LAB_14a6ea185:
      FVar33 = this_02->KeyName;
      uVar28 = ::GetTypeHash(FVar33.ComparisonIndex.Value);
      if (*(int *)&(this->KeysPressedThisTick).field_0x8 !=
          *(int *)&(this->KeysPressedThisTick).field_0x34) {
        puVar7 = *(undefined1 **)&(this->KeysPressedThisTick).field_0x40;
        puVar42 = &(this->KeysPressedThisTick).field_0x38;
        if (puVar7 != (undefined1 *)0x0) {
          puVar42 = puVar7;
        }
        uVar28 = *(uint *)(puVar42 +
                          (ulonglong)
                          (*(int *)&(this->KeysPressedThisTick).field_0x48 - 1U &
                          FVar33.Number + uVar28) * 4);
        if (uVar28 != 0xffffffff) {
          do {
            pFVar36 = (FName *)((longlong)(int)uVar28 * 0x38 +
                               *(longlong *)&this->KeysPressedThisTick);
            if (*pFVar36 == this_02->KeyName) {
              pFVar41 = pFVar36 + 3;
              if (pFVar36 == (FName *)0x0) {
                pFVar41 = (FName *)0x0;
              }
              if (((((pFVar41 != (FName *)0x0) && (bVar25 || bVar24)) &&
                   (pFVar45->EventCounts[0].ArrayNum != 0)) &&
                  ((pFVar45->EventCounts[1].ArrayNum != 0 && (dVar15 == 0.0)))) &&
                 ((dVar60 == 0.0 && (dVar16 == 0.0)))) {
                uVar44 = (pFVar41->ComparisonIndex).Value;
                uVar61 = pFVar41->Number;
                uVar62 = pFVar41[1].ComparisonIndex.Value;
                uVar63 = pFVar41[1].Number;
                FVar64 = pFVar41[2].ComparisonIndex;
                uVar65 = pFVar41[2].Number;
              }
              break;
            }
            uVar28 = pFVar36[6].ComparisonIndex.Value;
          } while (uVar28 != 0xffffffff);
        }
      }
      uVar28 = this_02[1].KeyName.ComparisonIndex.Value;
      local_388 = (UObject *)this_02[-1].KeyDetails.SharedReferenceCount.ReferenceController;
      local_230 = (double)CONCAT44(uVar65,FVar64.Value);
      uStack_228 = 3;
      local_240 = uVar44;
      uStack_23c = uVar61;
      uStack_238 = uVar62;
      uStack_234 = uVar63;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_388 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_388);
      }
      uStack_1d0 = CONCAT71(uStack_227,uStack_228);
      local_1e8._s_0.Z = local_230;
      local_1e8._0_4_ = uVar44;
      local_1e8._4_4_ = uVar61;
      local_1e8._8_4_ = uVar62;
      local_1e8._12_4_ = uVar63;
      ProcessActionMappingEvent
                (this,(TObjectPtr<UInputAction_const_>)&local_388,fVar58,param_3,
                 (FInputActionValue *)&local_1e8._s_0,EVar51,
                 (TArray<UInputModifier_*,TSizedDefaultAllocator<32>_> *)(this_02 + -1),
                 (TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_> *)local_460,
                 (bool)((byte)uVar28 >> 1 & 1));
    }
joined_r0x00014a6ea2e0:
    if (bVar56) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    pTVar43 = local_460 + 1;
    uVar39 = (ulonglong)uVar38;
    this_02 = (FKey *)&this_02[3].KeyDetails;
  }
  TSet<TObjectPtr<UInputAction_const_>,DefaultKeyFuncs<TObjectPtr<UInputAction_const_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_358,&this->LastInjectedActions);
  if (local_33c < *(int *)(local_348 + 0x18)) {
    do {
      iVar30 = local_33c;
      bVar56 = -1 < CpuChannel->Enabled;
      if (bVar56) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId512,"EnhPIS_InjectedStrip",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\EnhancedPlayerInput.cpp"
                   ,0x200);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId512);
      }
      TVar8 = (TObjectPtr<UInputAction_const_>_u_0)
              ((TObjectPtr<UInputAction_const_>_u_0 *)
              (*(longlong *)local_358._0_8_ + (longlong)iVar30 * 0x10))->DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (TVar8.DebugPtr == (UInputAction *)0x0) goto LAB_14a6ea553;
LAB_14a6ea3bc:
        this_00 = &this->InputsInjectedThisTick;
        local_460 = (TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInputArray>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInputArray,0>,FDefaultSetAllocator>
                     *)this_00;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
        }
        local_380 = TVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr),
           UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
        }
        uVar38 = ((uint)((ulonglong)TVar8.DebugPtr >> 0x14) & 0xffff ^
                 (uint)((ulonglong)TVar8.DebugPtr >> 4)) * -0x7a143595;
        uVar38 = (uVar38 >> 0xd ^ uVar38) * -0x3d4d51cb;
        iVar29 = TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInputArray>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInputArray,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<TObjectPtr<UInputAction_const_>_>
                           ((TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInputArray>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInputArray,0>,FDefaultSetAllocator>
                             *)this_00,uVar38 >> 0x10 ^ uVar38,
                            (TObjectPtr<UInputAction_const_> *)&local_380.ObjectPtr);
        uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        if (iVar29 == -1) {
          local_298 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          dStack_290 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_400.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_400.ArrayNum = 0;
          local_400.ArrayMax = 0;
          local_3f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3f0.ArrayNum = 0;
          local_3f0.ArrayMax = 0;
          uStack_27f = 0;
          uStack_27b = 0;
          uStack_279 = 0;
          local_288 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uStack_280 = 0;
          local_378 = TVar8;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
          }
          uStack_1b0 = CONCAT17(uStack_279,CONCAT25(uStack_27b,CONCAT41(uStack_27f,uStack_280)));
          local_1c8._s_0.X = (double)uVar20;
          local_1c8._s_0.Y = (double)uVar21;
          local_1c8._s_0.Z = local_288;
          ProcessActionMappingEvent
                    (this,(TObjectPtr<UInputAction_const_>)&local_378,fVar58,param_3,
                     (FInputActionValue *)&local_1c8._s_0,Actuated,&local_3f0,&local_400,false);
          if (local_3f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3f0.AllocatorInstance.Data);
          }
          if (local_400.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_400.AllocatorInstance.Data);
          }
          TSet<TObjectPtr<UInputAction_const_>,DefaultKeyFuncs<TObjectPtr<UInputAction_const_>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(local_330,iVar30);
          goto LAB_14a6ea518;
        }
      }
      else {
        if (TVar8.DebugPtr != (UInputAction *)0x0) {
          UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
          goto LAB_14a6ea3bc;
        }
LAB_14a6ea553:
        TSet<TObjectPtr<UInputAction_const_>,DefaultKeyFuncs<TObjectPtr<UInputAction_const_>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(local_330,iVar30);
LAB_14a6ea518:
        local_460 = (TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInputArray>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInputArray,0>,FDefaultSetAllocator>
                     *)&this->InputsInjectedThisTick;
      }
      if (bVar56) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      local_340 = local_340 & ~local_34c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_358 + 8));
    } while (local_33c < *(int *)(local_348 + 0x18));
  }
  else {
    local_460 = (TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInputArray>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInputArray,0>,FDefaultSetAllocator>
                 *)&this->InputsInjectedThisTick;
  }
  pTVar43 = (TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInputArray>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInputArray,0>,FDefaultSetAllocator>
             *)&this->InputsInjectedThisTick;
  iVar30 = *(int *)&(this->InputsInjectedThisTick).field_0x28;
  local_3c0._s_0.Z = (double)&(this->InputsInjectedThisTick).field_0x10;
  local_3c0._8_4_ = 0;
  local_3a0 = 0;
  local_3c0._12_4_ = (uint)local_448;
  iStack_3a4 = 0;
  if (iVar30 != 0) {
    puVar49 = *(uint **)&(this->InputsInjectedThisTick).field_0x20;
    if (puVar49 == (uint *)0x0) {
      puVar49 = (uint *)local_3c0._s_0.Z;
    }
    uVar38 = *puVar49;
    local_3a0 = 0;
    while (uVar38 == 0) {
      lVar31 = (longlong)(int)local_3c0._8_4_;
      local_3a0 = local_3a0 + 0x20;
      local_3c0._8_4_ = local_3c0._8_4_ + 1;
      iStack_3a4 = iVar30;
      if ((int)(iVar30 + -1 + (iVar30 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_3c0._8_4_)
      goto LAB_14a6ea5fe;
      uVar38 = puVar49[lVar31 + 1];
    }
    local_3c0._12_4_ = -uVar38 & uVar38;
    uVar39 = (ulonglong)(uint)local_3c0._12_4_ * 2 + 1;
    lVar31 = 0x3f;
    if (uVar39 != 0) {
      for (; uVar39 >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    local_390 = (int)lVar31;
    iStack_3a4 = local_390 + -1 + local_3a0;
    if (iVar30 < iStack_3a4) {
      iStack_3a4 = iVar30;
    }
  }
LAB_14a6ea5fe:
  uStack_39c = local_dc;
  iStack_398 = *(int *)&(this->InputsInjectedThisTick).field_0x8 -
               *(int *)&(this->InputsInjectedThisTick).field_0x34;
  uStack_3a8 = 0xffffffff;
  uVar38 = *(uint *)&(this->InputsInjectedThisTick).field_0x28;
  TStack_2c0.CurrentBitIndex = iStack_3a4;
  TStack_2c0.UnvisitedBitMask = 0xffffffff;
  TStack_2c0._padding_ = CONCAT44(local_3c0._12_4_,local_3c0._8_4_);
  uVar44 = uVar38 & 0xffffffe0;
  iVar29 = (int)uVar38 >> 5;
  TStack_2c0._28_4_ = local_dc;
  TStack_2c0.BaseBitIndex = local_3a0;
  uStack_2a0 = CONCAT44(uStack_394,iStack_398);
  local_450 = uVar38;
  local_3c0._0_8_ = pTVar43;
  local_2c8 = pTVar43;
  TStack_2c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_3c0._s_0.Z;
  if ((((int)uVar38 < 0) || (iVar30 < (int)uVar38)) &&
     (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar56)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar61 = *(uint *)&(this->InputsInjectedThisTick).field_0x28;
  if (uVar38 != uVar61) {
    puVar7 = *(undefined1 **)&(this->InputsInjectedThisTick).field_0x20;
    puVar42 = &(this->InputsInjectedThisTick).field_0x10;
    if (puVar7 != (undefined1 *)0x0) {
      puVar42 = puVar7;
    }
    uVar38 = -1 << ((byte)uVar38 & 0x1f) & *(uint *)(puVar42 + (longlong)iVar29 * 4);
    while (uVar38 == 0) {
      lVar31 = (longlong)iVar29;
      uVar44 = uVar44 + 0x20;
      iVar29 = iVar29 + 1;
      uVar38 = uVar61;
      local_450 = uVar61;
      if ((int)((uVar61 - 1) + ((int)(uVar61 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29)
      goto LAB_14a6ea731;
      uVar38 = *(uint *)(puVar42 + lVar31 * 4 + 4);
    }
    uVar39 = (ulonglong)(-uVar38 & uVar38) * 2 + 1;
    lVar31 = 0x3f;
    if (uVar39 != 0) {
      for (; uVar39 >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    local_38c = (int)lVar31;
    uVar38 = local_38c + -1 + uVar44;
    local_450 = uVar38;
    if ((int)uVar61 < (int)uVar38) {
      uVar38 = uVar61;
      local_450 = uVar61;
    }
  }
LAB_14a6ea731:
  do {
    pTVar23 = local_2c8;
    this_01 = &this->LastInjectedActions;
    if (*(int *)&(local_2c8->Elements).field_0x8 - *(int *)&(local_2c8->Elements).field_0x34 !=
        (int)uStack_2a0) {
      local_466 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInputArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_466);
    }
    if (((TStack_2c0.CurrentBitIndex == uVar38) &&
        (TStack_2c0.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->InputsInjectedThisTick).field_0x10)) &&
       (pTVar23 == pTVar43)) break;
    puVar55 = (undefined8 *)
              ((longlong)TStack_2c0.CurrentBitIndex * 0x20 + *(longlong *)&pTVar23->Elements);
    bVar56 = -1 < CpuChannel->Enabled;
    if (bVar56) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId539,"EnhPIS_Injected",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\EnhancedPlayerInput.cpp"
                 ,0x21b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId539);
    }
    pUVar9 = (UObject *)*puVar55;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar9 != (UObject *)0x0) goto LAB_14a6ea7f4;
    }
    else if (pUVar9 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar9);
LAB_14a6ea7f4:
      iVar30 = *(int *)&(this->LastInjectedActions).Elements.field_0x34;
      if (iVar30 == 0) {
        iVar29 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,(uint)local_448,(ForAnyElementType *)this_01,
                            (int *)&(this->LastInjectedActions).Elements.field_0x8,
                            (int *)&(this->LastInjectedActions).Elements.field_0xc);
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->LastInjectedActions).Elements.field_0x10,false);
      }
      else {
        iVar29 = *(int *)&(this->LastInjectedActions).Elements.field_0x30;
        lVar31 = *(longlong *)&this_01->Elements;
        iVar6 = *(int *)(lVar31 + 4 + (longlong)iVar29 * 0x10);
        iVar30 = iVar30 + -1;
        *(int *)&(this->LastInjectedActions).Elements.field_0x30 = iVar6;
        *(int *)&(this->LastInjectedActions).Elements.field_0x34 = iVar30;
        if (iVar30 != 0) {
          *(undefined4 *)(lVar31 + (longlong)iVar6 * 0x10) = 0xffffffff;
        }
      }
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_01,&local_278,iVar29);
      pTVar53 = local_278.Pointer;
      if (local_278.Pointer == (TSparseSetElement<TObjectPtr<UInputAction_const_>_> *)0x0) {
        pTVar53 = (TSparseSetElement<TObjectPtr<UInputAction_const_>_> *)0x0;
      }
      else {
        *(UObject **)local_278.Pointer = pUVar9;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar9);
        }
        *(undefined4 *)((longlong)pTVar53 + 8) = 0xffffffff;
      }
      pUVar10 = *(UObject **)pTVar53;
      local_454 = local_278.Index;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar10);
      }
      bVar24 = false;
      uVar38 = ((uint)((ulonglong)pUVar10 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar10 >> 4)) *
               -0x7a143595;
      uVar38 = (uVar38 >> 0xd ^ uVar38) * -0x3d4d51cb;
      uVar38 = uVar38 >> 0x10 ^ uVar38;
      if (*(int *)&(this->LastInjectedActions).Elements.field_0x8 -
          *(int *)&(this->LastInjectedActions).Elements.field_0x34 == 1) {
LAB_14a6ea99f:
        TSet<TObjectPtr<UInputAction_const_>,DefaultKeyFuncs<TObjectPtr<UInputAction_const_>,0>,FDefaultSetAllocator>
        ::RehashOrLink(&this->LastInjectedActions,uVar38,pTVar53,local_454);
      }
      else {
        local_370.DebugPtr = *(UInputAction **)pTVar53;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_370.DebugPtr != (UInputAction *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_370.DebugPtr);
        }
        iVar30 = TSet<TObjectPtr<UInputAction_const_>,DefaultKeyFuncs<TObjectPtr<UInputAction_const_>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<TObjectPtr<UInputAction_const_>_>
                           (&this->LastInjectedActions,uVar38,
                            (TObjectPtr<UInputAction_const_> *)&local_370.ObjectPtr);
        bVar24 = iVar30 != -1;
        if (!bVar24) goto LAB_14a6ea99f;
        *(undefined8 *)
         (*(longlong *)&(this->LastInjectedActions).Elements + (longlong)iVar30 * 0x10) =
             *(undefined8 *)pTVar53;
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized
                  ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&this->LastInjectedActions,local_454,(uint)local_448);
        local_454 = iVar30;
      }
      iVar30 = *(int *)(puVar55 + 2);
      pdVar48 = (double *)puVar55[1];
      pdVar54 = pdVar48 + (longlong)iVar30 * 8;
      while( true ) {
        if (*(int *)(puVar55 + 2) != iVar30) {
          local_465[0] = 0;
          `TCheckedPointerIterator<FInjectedInput,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_465);
        }
        if (pdVar48 == pdVar54) break;
        dVar15 = *pdVar48;
        dVar16 = pdVar48[1];
        dVar60 = pdVar48[2];
        dVar17 = pdVar48[3];
        local_360 = pUVar9;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar9);
        }
        local_1a8._s_0.X = dVar15;
        local_1a8._s_0.Y = dVar16;
        local_1a8._s_0.Z = dVar60;
        dStack_190 = dVar17;
        ProcessActionMappingEvent
                  (this,(TObjectPtr<UInputAction_const_>)&local_360,fVar58,param_3,
                   (FInputActionValue *)&local_1a8._s_0,bVar24 + Actuated,
                   (TArray<UInputModifier_*,TSizedDefaultAllocator<32>_> *)(pdVar48 + 6),
                   (TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_> *)(pdVar48 + 4),false);
        pdVar48 = pdVar48 + 8;
      }
    }
    if (bVar56) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    TStack_2c0.UnvisitedBitMask = TStack_2c0.UnvisitedBitMask & ~TStack_2c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c0);
    pTVar43 = local_460;
    uVar38 = local_450;
  } while( true );
  TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInputArray>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInputArray,0>,FDefaultSetAllocator>
  ::Reset(pTVar43);
  TStack_438.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ActionInstanceData).field_0x10;
  iVar30 = *(int *)&(this->ActionInstanceData).field_0x28;
  local_440 = &this->ActionInstanceData;
  iStack_320 = 0;
  local_308 = 0;
  iStack_30c = 0;
  if (iVar30 != 0) {
    puVar49 = *(uint **)&(this->ActionInstanceData).field_0x20;
    if (puVar49 == (uint *)0x0) {
      puVar49 = (uint *)TStack_438.Array;
    }
    uVar38 = *puVar49;
    local_308 = 0;
    while (uVar38 == 0) {
      lVar31 = (longlong)iStack_320;
      local_308 = local_308 + 0x20;
      iStack_320 = iStack_320 + 1;
      iStack_30c = iVar30;
      if ((int)(iVar30 + -1 + (iVar30 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_320) goto LAB_14a6eab31;
      uVar38 = puVar49[lVar31 + 1];
    }
    local_448 = (ulonglong)(-uVar38 & uVar38);
    uVar39 = local_448 * 2 + 1;
    lVar31 = 0x3f;
    if (uVar39 != 0) {
      for (; uVar39 >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    iStack_30c = local_308 + -1 + (int)lVar31;
    local_410 = (TSet<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInputArray>,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInputArray,0>,FDefaultSetAllocator>
                 *)CONCAT44(local_410._4_4_,(int)lVar31);
    if (iVar30 < iStack_30c) {
      iStack_30c = iVar30;
    }
  }
LAB_14a6eab31:
  uVar38 = *(uint *)&(this->ActionInstanceData).field_0x28;
  uStack_31c = (undefined4)local_448;
  uStack_304 = local_bc;
  iStack_300 = *(int *)&(this->ActionInstanceData).field_0x8 -
               *(int *)&(this->ActionInstanceData).field_0x34;
  uStack_310 = 0xffffffff;
  uVar44 = uVar38 & 0xffffffe0;
  TStack_438.CurrentBitIndex = iStack_30c;
  TStack_438.UnvisitedBitMask = 0xffffffff;
  TStack_438._padding_ = CONCAT44(uStack_31c,iStack_320);
  iVar29 = (int)uVar38 >> 5;
  TStack_438._28_4_ = local_bc;
  TStack_438.BaseBitIndex = local_308;
  local_418 = CONCAT44(uStack_2fc,iStack_300);
  local_328 = local_440;
  local_318 = (undefined1 *)TStack_438.Array;
  if ((((int)uVar38 < 0) || (iVar30 < (int)uVar38)) &&
     (bVar56 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar56)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  dVar15 = __real_3e45798ec0000000;
  uVar61 = *(uint *)&(this->ActionInstanceData).field_0x28;
  if (uVar38 != uVar61) {
    puVar7 = *(undefined1 **)&(this->ActionInstanceData).field_0x20;
    puVar42 = &(this->ActionInstanceData).field_0x10;
    if (puVar7 != (undefined1 *)0x0) {
      puVar42 = puVar7;
    }
    uVar38 = -1 << ((byte)uVar38 & 0x1f) & *(uint *)(puVar42 + (longlong)iVar29 * 4);
    while (uVar38 == 0) {
      lVar31 = (longlong)iVar29;
      uVar44 = uVar44 + 0x20;
      iVar29 = iVar29 + 1;
      uVar38 = uVar61;
      if ((int)((uVar61 - 1) + ((int)(uVar61 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29)
      goto LAB_14a6eac90;
      uVar38 = *(uint *)(puVar42 + lVar31 * 4 + 4);
    }
    uVar39 = (ulonglong)(-uVar38 & uVar38) * 2 + 1;
    lVar31 = 0x3f;
    if (uVar39 != 0) {
      for (; uVar39 >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    uVar38 = (int)lVar31 + -1 + uVar44;
    if ((int)uVar61 < (int)uVar38) {
      uVar38 = uVar61;
    }
  }
LAB_14a6eac90:
  do {
    pTVar22 = local_440;
    if (*(int *)&local_440->field_0x8 - *(int *)&local_440->field_0x34 != (int)local_418) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInputActionInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_458);
    }
    if (((TStack_438.CurrentBitIndex == uVar38) &&
        (TStack_438.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->ActionInstanceData).field_0x10)) &&
       (pTVar22 == &this->ActionInstanceData)) {
      return;
    }
    pTVar46 = (TObjectPtr<UInputAction_const_>_u_0 *)
              ((longlong)TStack_438.CurrentBitIndex * 0x70 + *(longlong *)pTVar22);
    bVar56 = -1 < CpuChannel->Enabled;
    if (bVar56) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId563,"EnhPIS_PostTick",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\EnhancedPlayerInput.cpp"
                 ,0x233);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId563);
    }
    TVar8 = (TObjectPtr<UInputAction_const_>_u_0)pTVar46->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar8.DebugPtr != (UInputAction *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
    }
    EVar52 = None;
    local_368 = TVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar8.DebugPtr != (UInputAction *)0x0) {
        UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar8.DebugPtr != (UInputAction *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
      }
    }
    uVar44 = ((uint)((ulonglong)TVar8.DebugPtr >> 0x14) & 0xffff ^
             (uint)((ulonglong)TVar8.DebugPtr >> 4)) * -0x7a143595;
    uVar44 = (uVar44 >> 0xd ^ uVar44) * -0x3d4d51cb;
    iVar30 = TSet<TObjectPtr<UInputAction_const_>,DefaultKeyFuncs<TObjectPtr<UInputAction_const_>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<TObjectPtr<UInputAction_const_>_>
                       (&this->ActionsWithEventsThisTick,uVar44 >> 0x10 ^ uVar44,
                        (TObjectPtr<UInputAction_const_> *)&local_368.ObjectPtr);
    if (iVar30 != -1) {
      TVar12 = pTVar46[8];
      TVar13 = pTVar46[9];
      TVar14 = pTVar46[10];
      TStack_170 = pTVar46[0xb];
      local_188._s_0.X = (double)TVar12;
      local_188._s_0.Y = (double)TVar13;
      local_188._s_0.Z = (double)TVar14;
      pFVar37 = (FObjectPtr_u_0 *)
                ApplyModifiers(this,(FInputActionValue *)&local_3c0._s_0,
                               (TArray<UInputModifier_*,TSizedDefaultAllocator<32>_> *)
                               &pTVar46[6].ObjectPtr,(FInputActionValue *)&local_188._s_0,fVar58);
      FVar18 = pFVar37[1];
      *(FObjectPtr_u_0 *)(pTVar46 + 8) = *pFVar37;
      *(FObjectPtr_u_0 *)(pTVar46 + 9) = FVar18;
      FVar18 = pFVar37[3];
      *(FObjectPtr_u_0 *)(pTVar46 + 10) = pFVar37[2];
      *(FObjectPtr_u_0 *)(pTVar46 + 0xb) = FVar18;
      local_138 = pTVar46[10];
      if ((((double)pTVar46[8] != (double)TVar12) || ((double)pTVar46[9] != (double)TVar13)) ||
         ((double)local_138 != (double)TVar14)) {
        uVar26 = 0;
        if (dVar15 <= (double)pTVar46[9] * (double)pTVar46[9] +
                      (double)pTVar46[8] * (double)pTVar46[8] +
                      (double)pTVar46[10] * (double)pTVar46[10]) {
          uVar26 = 2;
        }
        *(undefined1 *)((longlong)pTVar46 + 0x11) = uVar26;
      }
      if (*(char *)((longlong)pTVar46 + 0x13) == '\0') {
        EVar57 = *(ETriggerState *)((longlong)pTVar46 + 0x11);
      }
      else if (*(char *)(pTVar46 + 3) == '\0') {
        if (((*(char *)((longlong)pTVar46 + 0x16) == '\0') ||
            (*(char *)((longlong)pTVar46 + 0x15) != '\0')) &&
           (*(char *)((longlong)pTVar46 + 0x17) != '\0')) {
          EVar57 = Triggered;
        }
        else {
          EVar57 = *(char *)((longlong)pTVar46 + 0x14) != '\0';
        }
      }
      else {
        EVar57 = None;
      }
      local_168._s_0.X = (double)pTVar46[8];
      local_168._s_0.Y = (double)pTVar46[9];
      local_168._s_0.Z = (double)pTVar46[10];
      TStack_150 = pTVar46[0xb];
      EVar27 = FTriggerStateTracker::EvaluateTriggers
                         ((FTriggerStateTracker *)((longlong)pTVar46 + 0x11),this,
                          (TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_> *)
                          &pTVar46[4].ObjectPtr,(FInputActionValue *)&local_168._s_0,fVar58);
      EVar52 = EVar27;
      if ((*(char *)((longlong)pTVar46 + 0x19) != '\0') && (EVar52 = EVar57, EVar27 < EVar57)) {
        EVar52 = EVar27;
      }
      if ((param_3) && ((TVar8.DebugPtr)->bTriggerWhenPaused == false)) {
        EVar52 = None;
      }
    }
    cVar50 = *(char *)(pTVar46 + 2);
    if (cVar50 == '\0') {
      if (EVar52 == Ongoing) {
        uVar26 = 2;
      }
      else {
        if (EVar52 != Triggered) goto LAB_14a6eaf51;
        uVar26 = 5;
      }
    }
    else if (cVar50 == '\x01') {
      if (EVar52 == None) {
        uVar26 = 4;
      }
      else if (EVar52 == Ongoing) {
        uVar26 = 3;
      }
      else {
        if (EVar52 != Triggered) goto LAB_14a6eaf51;
        uVar26 = 6;
      }
    }
    else if (cVar50 == '\x02') {
      if (EVar52 == Triggered) {
        uVar26 = 6;
      }
      else if (EVar52 == Ongoing) {
        uVar26 = 3;
      }
      else {
        if (EVar52 != None) goto LAB_14a6eaf51;
        uVar26 = 1;
      }
    }
    else {
LAB_14a6eaf51:
      uVar26 = 0;
    }
    *(undefined1 *)((longlong)pTVar46 + 0x1a) = uVar26;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar26) {
    case 0:
      cVar50 = '\0';
      break;
    case 1:
      cVar50 = '\x10';
      break;
    case 2:
      cVar50 = '\x02';
      break;
    case 3:
      cVar50 = '\x04';
      break;
    case 4:
      cVar50 = '\b';
      break;
    default:
      cVar50 = '\x01';
    }
    *(char *)((longlong)pTVar46 + 0x1b) = cVar50;
    *(ETriggerState *)(pTVar46 + 2) = EVar52;
    fVar59 = fVar58;
    if (EVar52 == None) {
      fVar59 = 0.0;
    }
    *(float *)(pTVar46 + 0xc) = fVar59 + *(float *)(pTVar46 + 0xc);
    fVar59 = fVar58;
    if (cVar50 != '\x01') {
      fVar59 = 0.0;
    }
    *(float *)((longlong)pTVar46 + 100) = fVar59 + *(float *)((longlong)pTVar46 + 100);
    if (EVar52 == Triggered) {
      *(float *)((longlong)pTVar46 + 0x1c) = (float)dVar3;
    }
    if (bVar56) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    TStack_438.UnvisitedBitMask = TStack_438.UnvisitedBitMask & ~TStack_438._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_438);
  } while( true );
}

// ProcessActionMappingEvent @ 14a6eb180

void __thiscall
UEnhancedPlayerInput::ProcessActionMappingEvent
          (UEnhancedPlayerInput *this,TObjectPtr<UInputAction_const_> param_1,float param_2,
          bool param_3,FInputActionValue *param_4,EKeyEvent param_5,
          TArray<UInputModifier_*,TSizedDefaultAllocator<32>_> *param_6,
          TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_> *param_7,bool param_8)

{
  double dVar1;
  undefined8 uVar2;
  EInputActionValueType EVar3;
  EInputActionAccumulationBehavior EVar4;
  TObjectPtr<UInputAction_const_>_u_0 TVar5;
  UInputAction *pUVar6;
  code *pcVar7;
  uint uVar8;
  undefined1 auVar9 [12];
  uint uVar10;
  uint uVar11;
  TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_> *pTVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  FInputActionInstance *pFVar17;
  ulonglong *puVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  bool bVar22;
  ETriggerState EVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  UObject *local_res8;
  TObjectPtr<UInputAction_const_>_u_0 local_res10;
  FTriggerStateTracker local_178;
  ulonglong local_168;
  undefined1 local_160;
  ulonglong local_158;
  undefined1 local_150;
  double local_148 [3];
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  EInputActionValueType EStack_100;
  undefined7 uStack_ff;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  EInputActionValueType EStack_e0;
  undefined7 uStack_df;
  TVector<double>_u_0 local_d8;
  undefined8 uStack_c0;
  TVector<double>_u_0 local_b8;
  undefined8 uStack_a0;
  TVector<double>_u_0 local_98;
  undefined8 uStack_80;
  
  local_res8 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  pFVar17 = FindOrAddActionEventData(this,(TObjectPtr<UInputAction_const_>)&local_res8);
                    /* WARNING: Load size is inaccurate */
  TVar5.DebugPtr = *param_1.field0_0x0;
  EVar23 = None;
  local_178.NoTriggerState = None;
  local_178.bEvaluatedInput = false;
  local_178.bEvaluatedTriggers = false;
  local_178.bFoundActiveTrigger = false;
  local_178.bAnyExplictTriggered = false;
  local_178.bFoundExplicit = false;
  local_178.bAllImplicitsTriggered = true;
  local_178.bBlocking = false;
  local_178.bMappingTriggerApplied = false;
  local_res10 = TVar5;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar5.DebugPtr != (UInputAction *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar5.DebugPtr != (UInputAction *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
    }
  }
  uVar19 = ((uint)((ulonglong)TVar5.DebugPtr >> 0x14) & 0xffff ^
           (uint)((ulonglong)TVar5.DebugPtr >> 4)) * -0x7a143595;
  uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
  iVar16 = TSet<TObjectPtr<UInputAction_const_>,DefaultKeyFuncs<TObjectPtr<UInputAction_const_>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<TObjectPtr<UInputAction_const_>_>
                     (&this->ActionsWithEventsThisTick,uVar19 >> 0x10 ^ uVar19,
                      (TObjectPtr<UInputAction_const_> *)&local_res10.ObjectPtr);
  bVar22 = false;
  if ((param_5 == None) && (param_8 == false)) goto LAB_14a6eb617;
  if (iVar16 == -1) {
    TSet<TObjectPtr<UInputAction_const_>,DefaultKeyFuncs<TObjectPtr<UInputAction_const_>,0>,FDefaultSetAllocator>
    ::Emplace<TObjectPtr<UInputAction_const_>_const_&>
              (&this->ActionsWithEventsThisTick,(TObjectPtr<UInputAction_const_> *)&param_5,
               (bool *)param_1.field0_0x0);
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (pFVar17->Value).Value.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (pFVar17->Value).Value.field0_0x0._s_0.Y = (double)uVar2;
    (pFVar17->Value).Value.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  EVar3 = (pFVar17->Value).ValueType;
  local_108 = (param_4->Value).field0_0x0._s_0.Z;
  local_b8._0_4_ = *(undefined4 *)&(param_4->Value).field0_0x0;
  local_b8._4_4_ = *(undefined4 *)((longlong)&(param_4->Value).field0_0x0 + 4);
  uVar2 = *(undefined8 *)&(param_4->Value).field0_0x0;
  uStack_110 = *(undefined4 *)((longlong)&(param_4->Value).field0_0x0 + 8);
  auVar9 = *(undefined1 (*) [12])&(param_4->Value).field0_0x0;
  uStack_10c = *(undefined4 *)((longlong)&(param_4->Value).field0_0x0 + 0xc);
  uVar19 = (uint)EVar3;
  if ((EVar3 == Boolean) || (EVar3 == Axis1D)) {
    local_b8._0_4_ = (undefined4)uVar2;
    local_b8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    local_118 = auVar9._0_4_;
    uStack_114 = auVar9._4_4_;
    uStack_110 = 0;
    uStack_10c = 0;
LAB_14a6eb31f:
    local_108 = 0.0;
  }
  else {
    local_118 = local_b8._0_4_;
    uStack_114 = local_b8._4_4_;
    if (EVar3 == Axis2D) goto LAB_14a6eb31f;
  }
  uStack_a0 = CONCAT71(uStack_ff,EVar3);
  local_b8._s_0.Z = local_108;
  EStack_100 = EVar3;
  local_b8._8_4_ = uStack_110;
  local_b8._12_4_ = uStack_10c;
  ApplyModifiers(this,(FInputActionValue *)&local_d8._s_0,param_6,
                 (FInputActionValue *)&local_b8._s_0,param_2);
  uVar14 = local_d8._s_0.Z;
  uVar13 = local_d8._s_0.Y;
  uVar2 = local_d8._s_0.X;
  pTVar12 = param_7;
  local_98._s_0.X = local_d8._s_0.X;
  local_98._s_0.Y = local_d8._s_0.Y;
  local_98._s_0.Z = local_d8._s_0.Z;
  uStack_80 = uStack_c0;
  FTriggerStateTracker::EvaluateTriggers
            (&local_178,this,param_7,(FInputActionValue *)&local_98._s_0,param_2);
  uVar20 = 0;
  uVar21 = uVar20;
  if (__real_3e45798ec0000000 <=
      (double)uVar13 * (double)uVar13 + (double)uVar2 * (double)uVar2 +
      (double)uVar14 * (double)uVar14) {
    uVar21 = 2;
  }
  pUVar6 = (pFVar17->SourceAction).field0_0x0.DebugPtr;
  bVar22 = 0 < pTVar12->ArrayNum;
  EVar23 = (ETriggerState)uVar21;
  local_178.NoTriggerState = EVar23;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  EVar4 = pUVar6->AccumulationBehavior;
  fVar24 = FInputActionValue::GetMagnitudeSq((FInputActionValue *)&local_d8._s_0);
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (fVar24 == 0.0) goto LAB_14a6eb617;
  local_148[0] = local_d8._s_0.X;
  local_148[1] = local_d8._s_0.Y;
  uVar8 = uVar19;
  if (uVar19 == 0) {
    uVar8 = 1;
  }
  local_148[2] = local_d8._s_0.Z;
  local_120 = *(undefined8 *)((longlong)&(pFVar17->Value).Value.field0_0x0 + 0x10);
  uVar25 = (undefined4)local_120;
  uVar26 = (undefined4)((ulonglong)local_120 >> 0x20);
  local_130 = *(undefined4 *)&(pFVar17->Value).Value.field0_0x0;
  uStack_12c = *(undefined4 *)((longlong)&(pFVar17->Value).Value.field0_0x0 + 4);
  uStack_128 = *(undefined4 *)((longlong)&(pFVar17->Value).Value.field0_0x0 + 8);
  uStack_124 = *(undefined4 *)((longlong)&(pFVar17->Value).Value.field0_0x0 + 0xc);
  uVar21 = uVar20;
  if (uVar8 != 0) {
    do {
      if ((EVar4 == TakeHighestAbsoluteValue) || (EVar4 != Cumulative)) {
        if ((2 < uVar21) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                ,0x7a2,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar2 = *(undefined8 *)((longlong)local_148 + uVar20);
        if ((2 < uVar21) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                ,0x7a2,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)((longlong)&local_130 + uVar20) >>
                                   0x20) & uVar11,
                             (uint)*(undefined8 *)((longlong)&local_130 + uVar20) & uVar10) <=
            (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) & uVar11,(uint)uVar2 & uVar10)) {
          if ((2 < uVar21) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L""), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          dVar1 = *(double *)((longlong)local_148 + uVar20);
          if ((2 < uVar21) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L""), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          goto LAB_14a6eb59b;
        }
      }
      else {
        if ((2 < uVar21) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                ,0x7a2,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        dVar1 = *(double *)((longlong)local_148 + uVar20);
        if ((2 < uVar21) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                ,0x7a2,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        dVar1 = dVar1 + *(double *)((longlong)&local_130 + uVar20);
LAB_14a6eb59b:
        *(double *)((longlong)&local_130 + uVar20) = dVar1;
      }
      uVar21 = uVar21 + 1;
      uVar20 = uVar20 + 8;
    } while ((longlong)uVar21 < (longlong)(ulonglong)uVar8);
    uVar25 = (undefined4)local_120;
    uVar26 = (undefined4)((ulonglong)local_120 >> 0x20);
    EVar23 = local_178.NoTriggerState;
  }
  local_e8 = (double)CONCAT44(uVar26,uVar25);
  EStack_e0 = EVar3;
  local_f8 = local_130;
  uStack_f4 = uStack_12c;
  uStack_f0 = uStack_128;
  uStack_ec = uStack_124;
  if ((EVar3 == Boolean) || (uVar19 == 1)) {
    uStack_128 = 0;
    uStack_124 = 0;
LAB_14a6eb5ea:
    local_e8 = 0.0;
  }
  else if (uVar19 == 2) goto LAB_14a6eb5ea;
  *(undefined4 *)&(pFVar17->Value).Value.field0_0x0 = local_130;
  *(undefined4 *)((longlong)&(pFVar17->Value).Value.field0_0x0 + 4) = uStack_12c;
  *(undefined4 *)((longlong)&(pFVar17->Value).Value.field0_0x0 + 8) = uStack_128;
  *(undefined4 *)((longlong)&(pFVar17->Value).Value.field0_0x0 + 0xc) = uStack_124;
  (pFVar17->Value).Value.field0_0x0._s_0.Z = local_e8;
  *(ulonglong *)&(pFVar17->Value).ValueType = CONCAT71(uStack_df,EVar3);
LAB_14a6eb617:
  local_150 = local_178.bMappingTriggerApplied;
  local_160 = (pFVar17->TriggerStateTracker).bMappingTriggerApplied;
  local_158 = CONCAT44(local_178._4_4_,local_178._0_4_);
  local_168._0_1_ = (pFVar17->TriggerStateTracker).NoTriggerState;
  local_168._1_1_ = (pFVar17->TriggerStateTracker).bEvaluatedInput;
  local_168._2_1_ = (pFVar17->TriggerStateTracker).bEvaluatedTriggers;
  local_168._3_1_ = (pFVar17->TriggerStateTracker).bFoundActiveTrigger;
  local_168._4_1_ = (pFVar17->TriggerStateTracker).bAnyExplictTriggered;
  local_168._5_1_ = (pFVar17->TriggerStateTracker).bFoundExplicit;
  local_168._6_1_ = (pFVar17->TriggerStateTracker).bAllImplicitsTriggered;
  local_168._7_1_ = (pFVar17->TriggerStateTracker).bBlocking;
  if (local_178.bEvaluatedTriggers != false) {
    if (local_178.bBlocking == false) {
      if (((local_178.bFoundExplicit == false) || (local_178.bAnyExplictTriggered != false)) &&
         (local_178.bAllImplicitsTriggered != false)) {
        EVar23 = Triggered;
      }
      else {
        EVar23 = local_178.bFoundActiveTrigger != false;
      }
    }
    else {
      EVar23 = None;
    }
  }
  if (local_168._2_1_ != '\0') {
    if (local_168._7_1_ == '\0') {
      if (((local_168._5_1_ == '\0') || (local_168._4_1_ != '\0')) && (local_168._6_1_ != '\0')) {
        local_168 = 2;
      }
      else {
        local_168 = (ulonglong)(local_168._3_1_ != '\0');
      }
    }
    else {
      local_168 = 0;
    }
  }
  puVar18 = &local_168;
  if ((ETriggerState)local_168 <= EVar23) {
    puVar18 = &local_158;
  }
  uVar21 = *puVar18;
  (pFVar17->TriggerStateTracker).NoTriggerState = (char)uVar21;
  (pFVar17->TriggerStateTracker).bEvaluatedInput = (bool)(char)(uVar21 >> 8);
  (pFVar17->TriggerStateTracker).bEvaluatedTriggers = (bool)(char)(uVar21 >> 0x10);
  (pFVar17->TriggerStateTracker).bFoundActiveTrigger = (bool)(char)(uVar21 >> 0x18);
  (pFVar17->TriggerStateTracker).bAnyExplictTriggered = (bool)(char)(uVar21 >> 0x20);
  (pFVar17->TriggerStateTracker).bFoundExplicit = (bool)(char)(uVar21 >> 0x28);
  (pFVar17->TriggerStateTracker).bAllImplicitsTriggered = (bool)(char)(uVar21 >> 0x30);
  (pFVar17->TriggerStateTracker).bBlocking = (bool)(char)(uVar21 >> 0x38);
  (pFVar17->TriggerStateTracker).bMappingTriggerApplied = bVar22;
  return;
}

// SetCurrentInputMode @ 14a6f6350

void __thiscall
UEnhancedPlayerInput::SetCurrentInputMode(UEnhancedPlayerInput *this,FGameplayTagContainer *param_1)

{
  FGameplayTagContainer::operator=(&this->CurrentInputMode,param_1);
  return;
}

// StaticRegisterNativesUEnhancedPlayerInput @ 14a6fb540

void __cdecl UEnhancedPlayerInput::StaticRegisterNativesUEnhancedPlayerInput(void)

{
  return;
}

// operator() @ 150552b70

bool __thiscall
`UEnhancedPlayerInput::EvaluateInputComponentDelegates'::__l122::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1571898527859080449>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1571898527859080449>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

