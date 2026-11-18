// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XInputDevice
// Functions: 25

// `dynamic_initializer_for_'CVarForceControllerStateUpdate'' @ 141453750

void __cdecl _dynamic_initializer_for__CVarForceControllerStateUpdate__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceControllerStateUpdate,L"XInput.ForceControllerStateUpdate",
             &ForceControllerStateUpdate,
             L"Force XInput refresh of controller state on each frame.\n0: Not Enabled, 1: Enabled",
             0);
  atexit(_dynamic_atexit_destructor_for__CVarForceControllerStateUpdate__);
  return;
}

// `dynamic_initializer_for_'LogXInput'' @ 1414537a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogXInput__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogXInput,L"LogXInput",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogXInput__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantXInputDevice'' @ 1414537e0

void __cdecl _dynamic_initializer_for__ModuleRegistrantXInputDevice__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "XInputDevice";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"XInputDevice",0xc);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FXInputDeviceModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'XInputControllerIdentifier'' @ 141453830

void __cdecl _dynamic_initializer_for__XInputControllerIdentifier__(void)

{
  FString::FString(&XInputControllerIdentifier,L"XInputController");
  atexit(_dynamic_atexit_destructor_for__XInputControllerIdentifier__);
  return;
}

// `dynamic_initializer_for_'XInputInterfaceName'' @ 141453860

void __cdecl _dynamic_initializer_for__XInputInterfaceName__(void)

{
  FName::FName(&XInputInterfaceName,"XInputInterface");
  return;
}

// `scalar_deleting_destructor' @ 14f12c3c0

void * __thiscall
FXInputDeviceModule::_scalar_deleting_destructor_(FXInputDeviceModule *this,uint param_1)

{
  *this = (FXInputDeviceModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// XInputInterface @ 14f12c830

XInputInterface * __thiscall
XInputInterface::XInputInterface
          (XInputInterface *this,TSharedRef<FGenericApplicationMessageHandler,1> *param_1,
          bool param_2)

{
  undefined1 *puVar1;
  FDynamicReleaseDeadZone *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDynamicReleaseDeadZone FVar4;
  FDynamicReleaseDeadZone FVar5;
  FDynamicReleaseDeadZone FVar6;
  FDynamicReleaseDeadZone FVar7;
  FDynamicReleaseDeadZone FVar8;
  FDynamicReleaseDeadZone FVar9;
  FDynamicReleaseDeadZone FVar10;
  FDynamicReleaseDeadZone FVar11;
  FName *pFVar12;
  longlong lVar13;
  FDynamicReleaseDeadZone local_res8;
  FDynamicReleaseDeadZone local_res10;
  
  this->bIsPrimaryDevice = param_2;
  this->_padding_ = (longlong)&___7XInputInterface__6B_;
  this->ControllerStates[0].LeftTriggerReleaseDeadZone.bHasOverride = '\0';
  this->ControllerStates[0].LeftTriggerReleaseDeadZone.bWasDynamicPressed = '\0';
  this->ControllerStates[0].LeftTriggerReleaseDeadZone.bWasSimplePressed = '\0';
  this->ControllerStates[0].ForceFeedback.LeftLarge = 0.0;
  this->ControllerStates[0].ForceFeedback.LeftSmall = 0.0;
  this->ControllerStates[0].ForceFeedback.RightLarge = 0.0;
  this->ControllerStates[0].ForceFeedback.RightSmall = 0.0;
  this->ControllerStates[0].LastUsedValidPlatformUserId.InternalId = -1;
  this->ControllerStates[0].LeftTriggerReleaseDeadZone.DeadZone = 1.0;
  this->ControllerStates[0].LeftTriggerReleaseDeadZone.TriggerThreshold = '\0';
  FDynamicReleaseDeadZone::RefreshSettings(&this->ControllerStates[0].LeftTriggerReleaseDeadZone);
  this->ControllerStates[0].RightTriggerReleaseDeadZone.bHasOverride = '\0';
  this->ControllerStates[0].RightTriggerReleaseDeadZone.bWasDynamicPressed = '\0';
  this->ControllerStates[0].RightTriggerReleaseDeadZone.bWasSimplePressed = '\0';
  this->ControllerStates[0].RightTriggerReleaseDeadZone.DeadZone = 1.0;
  this->ControllerStates[0].RightTriggerReleaseDeadZone.TriggerThreshold = '\0';
  FDynamicReleaseDeadZone::RefreshSettings(&this->ControllerStates[0].RightTriggerReleaseDeadZone);
  this->ControllerStates[1].ForceFeedback.LeftLarge = 0.0;
  this->ControllerStates[1].ForceFeedback.LeftSmall = 0.0;
  pFVar2 = &this->ControllerStates[1].LeftTriggerReleaseDeadZone;
  this->ControllerStates[1].ForceFeedback.RightLarge = 0.0;
  this->ControllerStates[1].ForceFeedback.RightSmall = 0.0;
  this->ControllerStates[1].LastUsedValidPlatformUserId.InternalId = -1;
  pFVar2->DeadZone = 1.0;
  this->ControllerStates[1].LeftTriggerReleaseDeadZone.TriggerThreshold = '\0';
  this->ControllerStates[1].LeftTriggerReleaseDeadZone.bHasOverride = '\0';
  this->ControllerStates[1].LeftTriggerReleaseDeadZone.bWasDynamicPressed = '\0';
  this->ControllerStates[1].LeftTriggerReleaseDeadZone.bWasSimplePressed = '\0';
  FDynamicReleaseDeadZone::RefreshSettings(pFVar2);
  pFVar2 = &this->ControllerStates[1].RightTriggerReleaseDeadZone;
  pFVar2->DeadZone = 1.0;
  this->ControllerStates[1].RightTriggerReleaseDeadZone.TriggerThreshold = '\0';
  this->ControllerStates[1].RightTriggerReleaseDeadZone.bHasOverride = '\0';
  this->ControllerStates[1].RightTriggerReleaseDeadZone.bWasDynamicPressed = '\0';
  this->ControllerStates[1].RightTriggerReleaseDeadZone.bWasSimplePressed = '\0';
  FDynamicReleaseDeadZone::RefreshSettings(pFVar2);
  this->ControllerStates[2].ForceFeedback.LeftLarge = 0.0;
  this->ControllerStates[2].ForceFeedback.LeftSmall = 0.0;
  pFVar2 = &this->ControllerStates[2].LeftTriggerReleaseDeadZone;
  this->ControllerStates[2].ForceFeedback.RightLarge = 0.0;
  this->ControllerStates[2].ForceFeedback.RightSmall = 0.0;
  this->ControllerStates[2].LastUsedValidPlatformUserId.InternalId = -1;
  pFVar2->DeadZone = 1.0;
  this->ControllerStates[2].LeftTriggerReleaseDeadZone.TriggerThreshold = '\0';
  this->ControllerStates[2].LeftTriggerReleaseDeadZone.bHasOverride = '\0';
  this->ControllerStates[2].LeftTriggerReleaseDeadZone.bWasDynamicPressed = '\0';
  this->ControllerStates[2].LeftTriggerReleaseDeadZone.bWasSimplePressed = '\0';
  FDynamicReleaseDeadZone::RefreshSettings(pFVar2);
  pFVar2 = &this->ControllerStates[2].RightTriggerReleaseDeadZone;
  pFVar2->DeadZone = 1.0;
  this->ControllerStates[2].RightTriggerReleaseDeadZone.TriggerThreshold = '\0';
  this->ControllerStates[2].RightTriggerReleaseDeadZone.bHasOverride = '\0';
  this->ControllerStates[2].RightTriggerReleaseDeadZone.bWasDynamicPressed = '\0';
  this->ControllerStates[2].RightTriggerReleaseDeadZone.bWasSimplePressed = '\0';
  FDynamicReleaseDeadZone::RefreshSettings(pFVar2);
  this->ControllerStates[3].ForceFeedback.LeftLarge = 0.0;
  this->ControllerStates[3].ForceFeedback.LeftSmall = 0.0;
  pFVar2 = &this->ControllerStates[3].LeftTriggerReleaseDeadZone;
  this->ControllerStates[3].ForceFeedback.RightLarge = 0.0;
  this->ControllerStates[3].ForceFeedback.RightSmall = 0.0;
  this->ControllerStates[3].LastUsedValidPlatformUserId.InternalId = -1;
  pFVar2->DeadZone = 1.0;
  this->ControllerStates[3].LeftTriggerReleaseDeadZone.TriggerThreshold = '\0';
  this->ControllerStates[3].LeftTriggerReleaseDeadZone.bHasOverride = '\0';
  this->ControllerStates[3].LeftTriggerReleaseDeadZone.bWasDynamicPressed = '\0';
  this->ControllerStates[3].LeftTriggerReleaseDeadZone.bWasSimplePressed = '\0';
  FDynamicReleaseDeadZone::RefreshSettings(pFVar2);
  pFVar2 = &this->ControllerStates[3].RightTriggerReleaseDeadZone;
  pFVar2->DeadZone = 1.0;
  this->ControllerStates[3].RightTriggerReleaseDeadZone.TriggerThreshold = '\0';
  this->ControllerStates[3].RightTriggerReleaseDeadZone.bHasOverride = '\0';
  this->ControllerStates[3].RightTriggerReleaseDeadZone.bWasDynamicPressed = '\0';
  this->ControllerStates[3].RightTriggerReleaseDeadZone.bWasSimplePressed = '\0';
  FDynamicReleaseDeadZone::RefreshSettings(pFVar2);
  pFVar12 = this->Buttons;
  lVar13 = 0x18;
  do {
    pFVar12->ComparisonIndex = 0;
    pFVar12->Number = 0;
    pFVar12 = pFVar12 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  (this->MessageHandler).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  (this->MessageHandler).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)&(this->InternalDeviceIdMappings).MappedDeviceIds = 0;
  *(undefined8 *)&(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x8 = 0;
  *(undefined8 *)&(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x20 = 0;
  *(undefined4 *)&(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x28 = 0;
  *(undefined4 *)&(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x2c = 0x80;
  *(undefined4 *)&(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x34 = 0;
  *(undefined8 *)&(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x40 = 0;
  *(undefined4 *)&(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x48 = 0;
  *(undefined8 *)&(this->InternalDeviceIdMappings).MappedIdToKey = 0;
  *(undefined8 *)&(this->InternalDeviceIdMappings).MappedIdToKey.field_0x8 = 0;
  *(undefined8 *)&(this->InternalDeviceIdMappings).MappedIdToKey.field_0x20 = 0;
  *(undefined4 *)&(this->InternalDeviceIdMappings).MappedIdToKey.field_0x28 = 0;
  *(undefined4 *)&(this->InternalDeviceIdMappings).MappedIdToKey.field_0x2c = 0x80;
  *(undefined4 *)&(this->InternalDeviceIdMappings).MappedIdToKey.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InternalDeviceIdMappings).MappedIdToKey.field_0x34 = 0;
  *(undefined8 *)&(this->InternalDeviceIdMappings).MappedIdToKey.field_0x40 = 0;
  *(undefined4 *)&(this->InternalDeviceIdMappings).MappedIdToKey.field_0x48 = 0;
  memset(this->ControllerStates,0,0x118);
  local_res8.bWasDynamicPressed = '\0';
  local_res8.bWasSimplePressed = '\0';
  local_res8.bHasOverride = '\0';
  local_res8.DeadZone = 1.0;
  local_res8.TriggerThreshold = '\0';
  FDynamicReleaseDeadZone::RefreshSettings(&local_res8);
  FVar4.TriggerThreshold = local_res8.TriggerThreshold;
  FVar4.DeadZone = local_res8.DeadZone;
  FVar4._5_1_ = local_res8._5_1_;
  FVar4._6_2_ = local_res8._6_2_;
  local_res10.bWasDynamicPressed = '\0';
  local_res10.bWasSimplePressed = '\0';
  local_res10.bHasOverride = '\0';
  this->ControllerStates[0].LeftTriggerReleaseDeadZone = FVar4;
  local_res10.DeadZone = 1.0;
  local_res10.TriggerThreshold = '\0';
  FDynamicReleaseDeadZone::RefreshSettings(&local_res10);
  FVar8.TriggerThreshold = local_res10.TriggerThreshold;
  FVar8.DeadZone = local_res10.DeadZone;
  FVar8._5_1_ = local_res10._5_1_;
  FVar8._6_2_ = local_res10._6_2_;
  this->ControllerStates[0].RightTriggerReleaseDeadZone = FVar8;
  memset(this->ControllerStates + 1,0,0x118);
  local_res8.bWasDynamicPressed = '\0';
  local_res8.bWasSimplePressed = '\0';
  local_res8.bHasOverride = '\0';
  this->ControllerStates[1].ControllerId = 1;
  local_res8.DeadZone = 1.0;
  local_res8.TriggerThreshold = '\0';
  FDynamicReleaseDeadZone::RefreshSettings(&local_res8);
  FVar5.TriggerThreshold = local_res8.TriggerThreshold;
  FVar5.DeadZone = local_res8.DeadZone;
  FVar5._5_1_ = local_res8._5_1_;
  FVar5._6_2_ = local_res8._6_2_;
  local_res10.bWasDynamicPressed = '\0';
  local_res10.bWasSimplePressed = '\0';
  local_res10.bHasOverride = '\0';
  this->ControllerStates[1].LeftTriggerReleaseDeadZone = FVar5;
  local_res10.DeadZone = 1.0;
  local_res10.TriggerThreshold = '\0';
  FDynamicReleaseDeadZone::RefreshSettings(&local_res10);
  FVar9.TriggerThreshold = local_res10.TriggerThreshold;
  FVar9.DeadZone = local_res10.DeadZone;
  FVar9._5_1_ = local_res10._5_1_;
  FVar9._6_2_ = local_res10._6_2_;
  this->ControllerStates[1].RightTriggerReleaseDeadZone = FVar9;
  memset(this->ControllerStates + 2,0,0x118);
  local_res8.bWasDynamicPressed = '\0';
  local_res8.bWasSimplePressed = '\0';
  local_res8.bHasOverride = '\0';
  this->ControllerStates[2].ControllerId = 2;
  local_res8.DeadZone = 1.0;
  local_res8.TriggerThreshold = '\0';
  FDynamicReleaseDeadZone::RefreshSettings(&local_res8);
  FVar6.TriggerThreshold = local_res8.TriggerThreshold;
  FVar6.DeadZone = local_res8.DeadZone;
  FVar6._5_1_ = local_res8._5_1_;
  FVar6._6_2_ = local_res8._6_2_;
  local_res10.bWasDynamicPressed = '\0';
  local_res10.bWasSimplePressed = '\0';
  local_res10.bHasOverride = '\0';
  this->ControllerStates[2].LeftTriggerReleaseDeadZone = FVar6;
  local_res10.DeadZone = 1.0;
  local_res10.TriggerThreshold = '\0';
  FDynamicReleaseDeadZone::RefreshSettings(&local_res10);
  FVar10.TriggerThreshold = local_res10.TriggerThreshold;
  FVar10.DeadZone = local_res10.DeadZone;
  FVar10._5_1_ = local_res10._5_1_;
  FVar10._6_2_ = local_res10._6_2_;
  this->ControllerStates[2].RightTriggerReleaseDeadZone = FVar10;
  memset(this->ControllerStates + 3,0,0x118);
  this->ControllerStates[3].ControllerId = 3;
  local_res8.DeadZone = 1.0;
  local_res8.TriggerThreshold = '\0';
  local_res8.bWasDynamicPressed = '\0';
  local_res8.bWasSimplePressed = '\0';
  local_res8.bHasOverride = '\0';
  FDynamicReleaseDeadZone::RefreshSettings(&local_res8);
  FVar7.TriggerThreshold = local_res8.TriggerThreshold;
  FVar7.DeadZone = local_res8.DeadZone;
  FVar7._5_1_ = local_res8._5_1_;
  FVar7._6_2_ = local_res8._6_2_;
  local_res10.bWasDynamicPressed = '\0';
  local_res10.bWasSimplePressed = '\0';
  local_res10.bHasOverride = '\0';
  this->ControllerStates[3].LeftTriggerReleaseDeadZone = FVar7;
  local_res10.DeadZone = 1.0;
  local_res10.TriggerThreshold = '\0';
  FDynamicReleaseDeadZone::RefreshSettings(&local_res10);
  FVar11.TriggerThreshold = local_res10.TriggerThreshold;
  FVar11.DeadZone = local_res10.DeadZone;
  FVar11._5_1_ = local_res10._5_1_;
  FVar11._6_2_ = local_res10._6_2_;
  this->ControllerStates[3].RightTriggerReleaseDeadZone = FVar11;
  this->bNeedsControllerStateUpdate = true;
  this->bIsGamepadAttached = false;
  this->InitialButtonRepeatDelay = 0.2;
  this->ButtonRepeatDelay = 0.1;
  FConfigCacheIni::GetFloat
            (GConfig,L"/Script/Engine.InputSettings",L"InitialButtonRepeatDelay",
             &this->InitialButtonRepeatDelay,&GInputIni);
  FConfigCacheIni::GetFloat
            (GConfig,L"/Script/Engine.InputSettings",L"ButtonRepeatDelay",&this->ButtonRepeatDelay,
             &GInputIni);
  this->X360ToXboxControllerMapping[0] = '\0';
  this->X360ToXboxControllerMapping[1] = '\x01';
  this->X360ToXboxControllerMapping[2] = '\x02';
  this->X360ToXboxControllerMapping[3] = '\x03';
  this->X360ToXboxControllerMapping[4] = '\x04';
  this->X360ToXboxControllerMapping[5] = '\x05';
  this->X360ToXboxControllerMapping[6] = '\a';
  this->X360ToXboxControllerMapping[7] = '\x06';
  this->X360ToXboxControllerMapping[8] = '\b';
  this->X360ToXboxControllerMapping[9] = '\t';
  this->X360ToXboxControllerMapping[10] = '\n';
  this->X360ToXboxControllerMapping[0xb] = '\v';
  this->X360ToXboxControllerMapping[0xc] = '\f';
  this->X360ToXboxControllerMapping[0xd] = '\r';
  this->X360ToXboxControllerMapping[0xe] = '\x0e';
  this->X360ToXboxControllerMapping[0xf] = '\x0f';
  this->X360ToXboxControllerMapping[0x10] = '\x10';
  this->X360ToXboxControllerMapping[0x11] = '\x11';
  this->X360ToXboxControllerMapping[0x12] = '\x12';
  this->X360ToXboxControllerMapping[0x13] = '\x13';
  this->X360ToXboxControllerMapping[0x14] = '\x14';
  this->X360ToXboxControllerMapping[0x15] = '\x15';
  this->X360ToXboxControllerMapping[0x16] = '\x16';
  this->X360ToXboxControllerMapping[0x17] = '\x17';
  this->Buttons[0] = FGamepadKeyNames::FaceButtonBottom;
  this->Buttons[1] = FGamepadKeyNames::FaceButtonRight;
  this->Buttons[2] = FGamepadKeyNames::FaceButtonLeft;
  this->Buttons[3] = FGamepadKeyNames::FaceButtonTop;
  this->Buttons[4] = FGamepadKeyNames::LeftShoulder;
  this->Buttons[5] = FGamepadKeyNames::RightShoulder;
  this->Buttons[6] = FGamepadKeyNames::SpecialRight;
  this->Buttons[7] = FGamepadKeyNames::SpecialLeft;
  this->Buttons[8] = FGamepadKeyNames::LeftThumb;
  this->Buttons[9] = FGamepadKeyNames::RightThumb;
  this->Buttons[10] = FGamepadKeyNames::LeftTriggerThreshold;
  this->Buttons[0xb] = FGamepadKeyNames::RightTriggerThreshold;
  this->Buttons[0xc] = FGamepadKeyNames::DPadUp;
  this->Buttons[0xd] = FGamepadKeyNames::DPadDown;
  this->Buttons[0xe] = FGamepadKeyNames::DPadLeft;
  this->Buttons[0xf] = FGamepadKeyNames::DPadRight;
  this->Buttons[0x10] = FGamepadKeyNames::LeftStickUp;
  this->Buttons[0x11] = FGamepadKeyNames::LeftStickDown;
  this->Buttons[0x12] = FGamepadKeyNames::LeftStickLeft;
  this->Buttons[0x13] = FGamepadKeyNames::LeftStickRight;
  this->Buttons[0x14] = FGamepadKeyNames::RightStickUp;
  this->Buttons[0x15] = FGamepadKeyNames::RightStickDown;
  this->Buttons[0x16] = FGamepadKeyNames::RightStickLeft;
  this->Buttons[0x17] = FGamepadKeyNames::RightStickRight;
  return this;
}

// `scalar_deleting_destructor' @ 14f12cf50

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<XInputInterface,SharedPointerInternals::DefaultDeleter<XInputInterface>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<XInputInterface,SharedPointerInternals::DefaultDeleter<XInputInterface>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f12cf90

void * __thiscall XInputInterface::_scalar_deleting_destructor_(XInputInterface *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->InternalDeviceIdMappings).MappedIdToKey.field_0x48 = 0;
  pvVar1 = *(void **)&(this->InternalDeviceIdMappings).MappedIdToKey.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FInputDeviceId,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FInputDeviceId,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FInputDeviceId,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->InternalDeviceIdMappings).MappedIdToKey);
  *(undefined4 *)&(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x48 = 0;
  pvVar1 = *(void **)&(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FInputDeviceId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FInputDeviceId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FInputDeviceId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InternalDeviceIdMappings);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageHandler).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IInputDevice__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x600);
  }
  return this;
}

// Create @ 14f12d040

TSharedRef<XInputInterface,1> * __cdecl
XInputInterface::Create
          (TSharedRef<XInputInterface,1> *__return_storage_ptr__,
          TSharedRef<FGenericApplicationMessageHandler,1> *param_1,bool param_2)

{
  XInputInterface *this;
  TRawPtrProxy<XInputInterface> local_res8;
  
  this = ::operator_new(0x600);
  local_res8.Object = (XInputInterface *)0x0;
  if (this != (XInputInterface *)0x0) {
    local_res8.Object = XInputInterface(this,param_1,param_2);
  }
  TSharedRef<XInputInterface,1>::TSharedRef<XInputInterface,1><XInputInterface>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// Exec @ 14f12d0d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
XInputInterface::Exec(XInputInterface *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  return false;
}

// GetPlatformUserAndDevice @ 14f12d110

void __thiscall
XInputInterface::GetPlatformUserAndDevice
          (XInputInterface *this,int param_1,EInputDeviceConnectionState param_2,
          FPlatformUserId *param_3,FInputDeviceId *param_4)

{
  longlong lVar1;
  int iVar2;
  FInputDeviceId FVar3;
  IPlatformInputDeviceMapper *pIVar4;
  int *piVar5;
  int *piVar6;
  undefined1 *puVar7;
  FInputDeviceId local_res8 [2];
  FInputDeviceId local_res10 [2];
  TPairInitializer<FInputDeviceId_const_&,int_const_&> local_38;
  FInputDeviceId *local_28;
  
  if (this->bIsPrimaryDevice == false) {
    param_4->InternalId = param_1;
    return;
  }
  local_res10[0].InternalId = param_1;
  if (*(int *)&(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x8 !=
      *(int *)&(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x34) {
    puVar7 = *(undefined1 **)&(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x38;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x48
                               - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar6 = (int *)((longlong)iVar2 * 0x10 +
                        *(longlong *)&(this->InternalDeviceIdMappings).MappedDeviceIds);
        if (*piVar6 == param_1) {
          piVar5 = piVar6 + 1;
          if (piVar6 == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          if (piVar5 != (int *)0x0) {
            FVar3.InternalId = *piVar5;
            goto LAB_14f12d202;
          }
          break;
        }
        iVar2 = piVar6[2];
      } while (iVar2 != -1);
    }
  }
  pIVar4 = IPlatformInputDeviceMapper::Get();
  piVar6 = (int *)(**(code **)(pIVar4->_padding_ + 200))(pIVar4,&local_38);
  local_res8[0].InternalId = *piVar6;
  local_38.Value = &local_res10[0].InternalId;
  local_28 = local_res8;
  TSet<TTuple<int,FInputDeviceId>,TDefaultMapHashableKeyFuncs<int,FInputDeviceId,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,FInputDeviceId_const_&>_>
            ((TSet<TTuple<int,FInputDeviceId>,TDefaultMapHashableKeyFuncs<int,FInputDeviceId,0>,FDefaultSetAllocator>
              *)&this->InternalDeviceIdMappings,
             (TPairInitializer<int_const_&,FInputDeviceId_const_&> *)&local_38,
             (bool *)&local_38.Value);
  local_38.Value = &local_res8[0].InternalId;
  local_28 = local_res10;
  TSet<TTuple<FInputDeviceId,int>,TDefaultMapHashableKeyFuncs<FInputDeviceId,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FInputDeviceId_const_&,int_const_&>_>
            ((TSet<TTuple<FInputDeviceId,int>,TDefaultMapHashableKeyFuncs<FInputDeviceId,int,0>,FDefaultSetAllocator>
              *)&(this->InternalDeviceIdMappings).MappedIdToKey,&local_38,(bool *)&local_38.Value);
  FVar3.InternalId = local_res8[0].InternalId;
LAB_14f12d202:
  param_4->InternalId = (int)FVar3;
  pIVar4 = IPlatformInputDeviceMapper::Get();
  lVar1 = pIVar4->_padding_;
  if (param_2 == Connected) {
    piVar6 = (int *)(**(code **)(lVar1 + 0x60))(pIVar4,local_res8,0xffffffff);
    param_3->InternalId = *piVar6;
    (**(code **)(pIVar4->_padding_ + 0x88))(pIVar4,param_4->InternalId,param_3->InternalId,3);
    return;
  }
  if (param_2 == Disconnected) {
    piVar6 = (int *)(**(code **)(lVar1 + 0x38))(pIVar4,&local_38);
  }
  else {
    piVar6 = (int *)(**(code **)(lVar1 + 0x68))
                              (pIVar4,(undefined1 *)((longlong)&local_38.Key + 4),
                               param_4->InternalId);
  }
  param_3->InternalId = *piVar6;
  return;
}

// IsGamepadAttached @ 14f12d2f0

bool __thiscall XInputInterface::IsGamepadAttached(XInputInterface *this)

{
  return this->bIsGamepadAttached;
}

// SendControllerEvents @ 14f12d620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall XInputInterface::SendControllerEvents(XInputInterface *this)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  undefined2 uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  FGenericApplicationMessageHandler *pFVar8;
  FGenericApplicationMessageHandler FVar9;
  code *pcVar10;
  float fVar11;
  double dVar12;
  uint uVar13;
  float fVar14;
  ForAnyElementType _Src;
  byte *pbVar15;
  longlong lVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  byte *pbVar20;
  IPlatformInputDeviceMapper *pIVar21;
  IPlatformInputDeviceMapper *pIVar22;
  undefined4 *puVar23;
  longlong lVar24;
  int iVar25;
  FPlatformUserId FVar26;
  EInputDeviceConnectionState EVar27;
  double *pdVar28;
  byte bVar29;
  longlong lVar30;
  FControllerState *pFVar31;
  longlong lVar32;
  bool bVar33;
  float fVar34;
  double dVar35;
  undefined1 auStackY_278 [32];
  char local_234 [4];
  longlong local_230;
  byte *local_228;
  undefined2 local_220;
  undefined2 local_21e;
  int local_21c;
  longlong local_218;
  longlong local_210;
  FString local_208;
  longlong local_1f8;
  undefined1 local_1f0 [8];
  LARGE_INTEGER local_1e8;
  longlong local_1e0;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FInputDeviceScope local_148;
  undefined8 local_118;
  short asStack_110 [4];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  byte local_d8 [24];
  ulonglong local_c0;
  
  local_c0 = __security_cookie.value ^ (ulonglong)auStackY_278;
  this->bIsGamepadAttached = false;
  local_234[0] = this->ControllerStates[0].bIsConnected;
  if ((((bool)local_234[0] != false) || (this->bNeedsControllerStateUpdate != false)) ||
     (ForceControllerStateUpdate != 0)) {
    local_118 = 0;
    asStack_110[0] = 0;
    asStack_110[1] = 0;
    asStack_110[2] = 0;
    asStack_110[3] = 0;
    iVar19 = XInputGetState(0,&local_118);
    this->ControllerStates[0].bIsConnected = iVar19 == 0;
    if (iVar19 == 0) {
      this->bIsGamepadAttached = true;
    }
  }
  local_234[1] = this->ControllerStates[1].bIsConnected;
  if ((((bool)local_234[1] != false) || (this->bNeedsControllerStateUpdate != false)) ||
     (ForceControllerStateUpdate != 0)) {
    local_108 = 0;
    uStack_100 = 0;
    iVar19 = XInputGetState(1,&local_108);
    this->ControllerStates[1].bIsConnected = iVar19 == 0;
    if (iVar19 == 0) {
      this->bIsGamepadAttached = true;
    }
  }
  local_234[2] = this->ControllerStates[2].bIsConnected;
  if ((((bool)local_234[2] != false) || (this->bNeedsControllerStateUpdate != false)) ||
     (ForceControllerStateUpdate != 0)) {
    local_f8 = 0;
    uStack_f0 = 0;
    iVar19 = XInputGetState(2,&local_f8);
    this->ControllerStates[2].bIsConnected = iVar19 == 0;
    if (iVar19 == 0) {
      this->bIsGamepadAttached = true;
    }
  }
  local_234[3] = this->ControllerStates[3].bIsConnected;
  if ((((bool)local_234[3] != false) || (this->bNeedsControllerStateUpdate != false)) ||
     (ForceControllerStateUpdate != 0)) {
    local_e8 = 0;
    uStack_e0 = 0;
    iVar19 = XInputGetState(3,&local_e8);
    this->ControllerStates[3].bIsConnected = iVar19 == 0;
    if (iVar19 == 0) {
      this->bIsGamepadAttached = true;
    }
  }
  fVar14 = __real_477fff00;
  uVar13 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar12 = __real_4170000000000000;
  fVar11 = __real_322bcc77;
  local_21c = 0;
  local_210 = 0;
  do {
    lVar24 = local_210;
    iVar19 = local_21c;
    _Src.Data = XInputControllerIdentifier.Data.AllocatorInstance.Data;
    local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar25 = XInputControllerIdentifier.Data.ArrayNum;
    local_208.Data.ArrayNum = iVar25;
    if (iVar25 == 0) {
      local_208.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar25,0,(ForAnyElementType *)&local_208,iVar25,&local_208.Data.ArrayMax);
      memcpy(local_208.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar25 * 2);
    }
    FInputDeviceScope::FInputDeviceScope
              (&local_148,(IInputDevice *)this,XInputInterfaceName,iVar19,&local_208);
    local_1e0 = lVar24 * 0x118;
    pFVar31 = this->ControllerStates + lVar24;
    bVar33 = pFVar31->bIsConnected;
    if ((bVar33 != false) || (local_234[lVar24] != '\0')) {
      local_230 = CONCAT44(local_230._4_4_,0xffffffff);
      local_228 = (byte *)CONCAT44(local_228._4_4_,0xffffffff);
      if (local_234[lVar24] == '\0') {
        if (bVar33 == false) {
LAB_14f12d8f3:
          EVar27 = Unknown;
        }
        else {
          EVar27 = Connected;
        }
      }
      else {
        EVar27 = Disconnected;
        if (bVar33 != false) goto LAB_14f12d8f3;
      }
      GetPlatformUserAndDevice
                (this,this->ControllerStates[lVar24].ControllerId,EVar27,
                 (FPlatformUserId *)&local_230,(FInputDeviceId *)&local_228);
      bVar33 = false;
      FVar26.InternalId = local_230._0_4_;
      if (local_230._0_4_ == -1) {
        if (EVar27 == Disconnected) {
          FVar26.InternalId = this->ControllerStates[lVar24].LastUsedValidPlatformUserId.InternalId;
        }
        bVar33 = FVar26.InternalId == -1;
      }
      if ((bVar33) && (this->bIsPrimaryDevice != false)) {
        FInputDeviceScope::~FInputDeviceScope(&local_148);
        return;
      }
      bVar29 = *(byte *)((longlong)&local_118 + lVar24 * 0x10 + 6);
      bVar3 = *(byte *)((longlong)&local_118 + lVar24 * 0x10 + 7);
      bVar17 = FDynamicReleaseDeadZone::IsPressed
                         (&pFVar31->LeftTriggerReleaseDeadZone,bVar29,0x1e < bVar29);
      bVar18 = FDynamicReleaseDeadZone::IsPressed
                         (&pFVar31->RightTriggerReleaseDeadZone,
                          *(uchar *)((longlong)&local_118 + lVar24 * 0x10 + 7),0x1e < bVar3);
      pbVar15 = local_228;
      uVar4 = *(undefined2 *)((longlong)&local_118 + lVar24 * 0x10 + 4);
      local_d8[0x10] = 0;
      local_d8[0x11] = 0;
      local_d8[0x12] = 0;
      local_d8[0x13] = 0;
      local_d8[0x14] = 0;
      local_d8[0x15] = 0;
      local_d8[0x16] = 0;
      local_d8[0x17] = 0;
      bVar29 = this->X360ToXboxControllerMapping[1];
      local_d8[0] = 0;
      local_d8[1] = 0;
      local_d8[2] = 0;
      local_d8[3] = 0;
      local_d8[4] = 0;
      local_d8[5] = 0;
      local_d8[6] = 0;
      local_d8[7] = 0;
      local_d8[8] = 0;
      local_d8[9] = 0;
      local_d8[10] = 0;
      local_d8[0xb] = 0;
      local_d8[0xc] = 0;
      local_d8[0xd] = 0;
      local_d8[0xe] = 0;
      local_d8[0xf] = 0;
      bVar3 = (byte)((ushort)uVar4 >> 8);
      local_d8[this->X360ToXboxControllerMapping[0]] = bVar3 >> 4 & 1;
      local_d8[bVar29] = bVar3 >> 5 & 1;
      local_d8[this->X360ToXboxControllerMapping[2]] = bVar3 >> 6 & 1;
      local_d8[this->X360ToXboxControllerMapping[3]] = bVar3 >> 7;
      local_d8[this->X360ToXboxControllerMapping[4]] = bVar3 & 1;
      local_d8[this->X360ToXboxControllerMapping[5]] = bVar3 >> 1 & 1;
      bVar29 = (byte)uVar4;
      local_d8[this->X360ToXboxControllerMapping[6]] = bVar29 >> 5 & 1;
      local_d8[this->X360ToXboxControllerMapping[7]] = bVar29 >> 4 & 1;
      local_d8[this->X360ToXboxControllerMapping[8]] = bVar29 >> 6 & 1;
      local_d8[this->X360ToXboxControllerMapping[9]] = bVar29 >> 7;
      local_d8[this->X360ToXboxControllerMapping[10]] = bVar17;
      local_d8[this->X360ToXboxControllerMapping[0xb]] = bVar18;
      local_d8[this->X360ToXboxControllerMapping[0xc]] = bVar29 & 1;
      local_d8[this->X360ToXboxControllerMapping[0xd]] = bVar29 >> 1 & 1;
      sVar5 = asStack_110[lVar24 * 8 + 1];
      sVar6 = asStack_110[lVar24 * 8];
      local_d8[this->X360ToXboxControllerMapping[0xe]] = bVar29 >> 2 & 1;
      sVar7 = asStack_110[lVar24 * 8 + 3];
      local_d8[this->X360ToXboxControllerMapping[0xf]] = bVar29 >> 3 & 1;
      local_d8[this->X360ToXboxControllerMapping[0x10]] = 0x1ea9 < sVar5;
      local_d8[this->X360ToXboxControllerMapping[0x11]] = sVar5 < -0x1ea9;
      local_d8[this->X360ToXboxControllerMapping[0x12]] = sVar6 < -0x1ea9;
      local_d8[this->X360ToXboxControllerMapping[0x13]] = 0x1ea9 < sVar6;
      sVar5 = asStack_110[lVar24 * 8 + 2];
      local_d8[this->X360ToXboxControllerMapping[0x14]] = 0x21f1 < sVar7;
      local_d8[this->X360ToXboxControllerMapping[0x15]] = sVar7 < -0x21f1;
      local_d8[this->X360ToXboxControllerMapping[0x16]] = sVar5 < -0x21f1;
      local_d8[this->X360ToXboxControllerMapping[0x17]] = 0x21f1 < sVar5;
      if (pFVar31->LeftXAnalog == sVar6) {
        iVar19 = -(int)sVar6;
        if (iVar19 < 0) {
          iVar19 = (int)sVar6;
        }
        if (0x1ea9 < iVar19) goto LAB_14f12dbe5;
      }
      else {
LAB_14f12dbe5:
        pFVar8 = (this->MessageHandler).Object;
        (**(code **)((longlong)*pFVar8 + 0x90))
                  (pFVar8,FGamepadKeyNames::LeftAnalogX,FVar26.InternalId);
        if (6 < (byte)LogXInput._0_1_) {
          ::FName::ToString(&FGamepadKeyNames::LeftAnalogX,&local_1d8);
          UE::Logging::Private::BasicLog<7>
                    ((FStaticBasicLogRecord *)&PTR_u___hs__PlatUser__153150c00,
                     (FLogCategoryBase *)&LogXInput);
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          }
        }
      }
      pFVar31->LeftXAnalog = sVar6;
      sVar5 = asStack_110[lVar24 * 8 + 1];
      if (pFVar31->LeftYAnalog == sVar5) {
        iVar19 = -(int)sVar5;
        if (iVar19 < 0) {
          iVar19 = (int)sVar5;
        }
        if (0x1ea9 < iVar19) goto LAB_14f12dcb4;
      }
      else {
LAB_14f12dcb4:
        pFVar8 = (this->MessageHandler).Object;
        (**(code **)((longlong)*pFVar8 + 0x90))
                  (pFVar8,FGamepadKeyNames::LeftAnalogY,FVar26.InternalId);
        if (6 < (byte)LogXInput._0_1_) {
          ::FName::ToString(&FGamepadKeyNames::LeftAnalogY,&local_1c8);
          UE::Logging::Private::BasicLog<7>
                    ((FStaticBasicLogRecord *)&PTR_u___hs__PlatUser__153150c00,
                     (FLogCategoryBase *)&LogXInput);
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
        }
      }
      pFVar31->LeftYAnalog = sVar5;
      sVar5 = asStack_110[lVar24 * 8 + 2];
      if (pFVar31->RightXAnalog == sVar5) {
        iVar19 = -(int)sVar5;
        if (iVar19 < 0) {
          iVar19 = (int)sVar5;
        }
        if (0x21f1 < iVar19) goto LAB_14f12dd85;
      }
      else {
LAB_14f12dd85:
        pFVar8 = (this->MessageHandler).Object;
        (**(code **)((longlong)*pFVar8 + 0x90))
                  (pFVar8,FGamepadKeyNames::RightAnalogX,FVar26.InternalId);
        if (6 < (byte)LogXInput._0_1_) {
          ::FName::ToString(&FGamepadKeyNames::RightAnalogX,&local_1b8);
          UE::Logging::Private::BasicLog<7>
                    ((FStaticBasicLogRecord *)&PTR_u___hs__PlatUser__153150c00,
                     (FLogCategoryBase *)&LogXInput);
          if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
          }
        }
      }
      pFVar31->RightXAnalog = sVar5;
      sVar5 = asStack_110[lVar24 * 8 + 3];
      if (pFVar31->RightYAnalog == sVar5) {
        iVar19 = -(int)sVar5;
        if (iVar19 < 0) {
          iVar19 = (int)sVar5;
        }
        if (0x21f1 < iVar19) goto LAB_14f12de56;
      }
      else {
LAB_14f12de56:
        pFVar8 = (this->MessageHandler).Object;
        (**(code **)((longlong)*pFVar8 + 0x90))
                  (pFVar8,FGamepadKeyNames::RightAnalogY,FVar26.InternalId);
        if (6 < (byte)LogXInput._0_1_) {
          ::FName::ToString(&FGamepadKeyNames::RightAnalogY,&local_1a8);
          UE::Logging::Private::BasicLog<7>
                    ((FStaticBasicLogRecord *)&PTR_u___hs__PlatUser__153150c00,
                     (FLogCategoryBase *)&LogXInput);
          if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
          }
        }
      }
      pFVar31->RightYAnalog = sVar5;
      bVar29 = *(byte *)((longlong)&local_118 + lVar24 * 0x10 + 6);
      if (((pFVar31->LeftTriggerAnalog != bVar29) || (0x1e < bVar29)) &&
         (pFVar8 = (this->MessageHandler).Object,
         (**(code **)((longlong)*pFVar8 + 0x90))
                   (pFVar8,FGamepadKeyNames::LeftTriggerAnalog,FVar26.InternalId),
         6 < (byte)LogXInput._0_1_)) {
        ::FName::ToString(&FGamepadKeyNames::LeftTriggerAnalog,&local_198);
        UE::Logging::Private::BasicLog<7>
                  ((FStaticBasicLogRecord *)&PTR_u___hs__PlatUser__153150d18,
                   (FLogCategoryBase *)&LogXInput);
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
      }
      pFVar31->LeftTriggerAnalog = bVar29;
      bVar29 = *(byte *)((longlong)&local_118 + lVar24 * 0x10 + 7);
      if (((pFVar31->RightTriggerAnalog != bVar29) || (0x1e < bVar29)) &&
         (pFVar8 = (this->MessageHandler).Object,
         (**(code **)((longlong)*pFVar8 + 0x90))
                   (pFVar8,FGamepadKeyNames::RightTriggerAnalog,FVar26.InternalId),
         6 < (byte)LogXInput._0_1_)) {
        ::FName::ToString(&FGamepadKeyNames::RightTriggerAnalog,&local_188);
        UE::Logging::Private::BasicLog<7>
                  ((FStaticBasicLogRecord *)&PTR_u___hs__PlatUser__153150d18,
                   (FLogCategoryBase *)&LogXInput);
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
      }
      pFVar31->RightTriggerAnalog = bVar29;
      QueryPerformanceCounter(&local_1e8);
      local_1f8 = 0x18;
      lVar30 = (longlong)this - (longlong)pFVar31;
      pdVar28 = pFVar31->NextRepeatTime;
      local_218 = lVar30;
      lVar24 = 0x478 - (longlong)pFVar31;
      pbVar20 = local_d8 + -(longlong)pFVar31;
      lVar32 = 0x490;
      local_230 = lVar24;
      local_228 = pbVar20;
      dVar35 = (double)local_1e8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar12;
      do {
        bVar17 = (bool)pbVar20[(longlong)pFVar31];
        if (bVar17 == pFVar31->ButtonStates[0]) {
          if ((bVar17 != false) && (*pdVar28 <= dVar35)) {
            pFVar8 = (this->MessageHandler).Object;
            (**(code **)((longlong)*pFVar8 + 0x98))
                      (pFVar8,*(undefined8 *)((longlong)pdVar28 + lVar30 + 0x478),FVar26.InternalId)
            ;
            if (5 < (byte)LogXInput._0_1_) {
              ::FName::ToString((FName *)(this->X360ToXboxControllerMapping + lVar32 + -0xb),
                                &local_158);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogXInput);
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
            }
            fVar34 = this->ButtonRepeatDelay;
            goto LAB_14f12e26a;
          }
        }
        else {
          pFVar8 = (this->MessageHandler).Object;
          FVar9 = *pFVar8;
          if (bVar17 == false) {
            (**(code **)((longlong)FVar9 + 0xa0))
                      (pFVar8,*(undefined8 *)
                               ((longlong)pdVar28 +
                               (longlong)(this->X360ToXboxControllerMapping + lVar24 + -0xb)),
                       FVar26.InternalId);
            pbVar20 = local_228;
            lVar24 = local_230;
            lVar30 = local_218;
            if (5 < (byte)LogXInput._0_1_) {
              ::FName::ToString((FName *)(this->X360ToXboxControllerMapping + lVar32 + -0xb),
                                &local_168);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogXInput);
              pbVar20 = local_228;
              lVar24 = local_230;
              lVar30 = local_218;
              if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_168.Data.AllocatorInstance.Data);
                pbVar20 = local_228;
                lVar24 = local_230;
                lVar30 = local_218;
              }
            }
          }
          else {
            (**(code **)((longlong)FVar9 + 0x98))();
            if (5 < (byte)LogXInput._0_1_) {
              ::FName::ToString((FName *)(this->X360ToXboxControllerMapping + lVar32 + -0xb),
                                &local_178);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogXInput);
              if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.Data.AllocatorInstance.Data);
              }
            }
            fVar34 = this->InitialButtonRepeatDelay;
LAB_14f12e26a:
            *pdVar28 = (double)fVar34 + dVar35;
            pbVar20 = local_228;
            lVar24 = local_230;
            lVar30 = local_218;
          }
        }
        lVar16 = local_1e0;
        pFVar31->ButtonStates[0] = bVar17;
        lVar32 = lVar32 + 8;
        pFVar31 = (FControllerState *)(pFVar31->ButtonStates + 1);
        pdVar28 = pdVar28 + 1;
        local_1f8 = local_1f8 + -1;
      } while (local_1f8 != 0);
      fVar34 = *(float *)((longlong)this->ControllerStates[0].NextRepeatTime + local_1e0 + 0xd0);
      fVar1 = *(float *)((longlong)this->ControllerStates[0].NextRepeatTime + local_1e0 + 0xd8);
      if (fVar34 <= fVar1) {
        fVar34 = fVar1;
      }
      fVar2 = *(float *)((longlong)this->ControllerStates[0].NextRepeatTime + local_1e0 + 0xdc);
      fVar1 = *(float *)((longlong)this->ControllerStates[0].NextRepeatTime + local_1e0 + 0xd4);
      if (fVar2 <= fVar1) {
        fVar2 = fVar1;
      }
      if ((fVar11 < (float)((uint)(fVar34 - *(float *)((longlong)
                                                       this->ControllerStates[0].NextRepeatTime +
                                                      local_1e0 + 0xe0)) & uVar13)) ||
         (fVar11 < (float)((uint)(fVar2 - *(float *)((longlong)
                                                     this->ControllerStates[0].NextRepeatTime +
                                                    local_1e0 + 0xe4)) & uVar13))) {
        local_220 = (undefined2)(int)(fVar34 * fVar14);
        local_21e = (undefined2)(int)(fVar2 * fVar14);
        XInputSetState(*(undefined4 *)
                        ((longlong)this->ControllerStates[0].NextRepeatTime + local_1e0 + 0xcc),
                       &local_220);
        *(float *)((longlong)this->ControllerStates[0].NextRepeatTime + lVar16 + 0xe0) = fVar34;
        *(float *)((longlong)this->ControllerStates[0].NextRepeatTime + lVar16 + 0xe4) = fVar2;
      }
      if (!bVar33) {
        *(int *)((longlong)this->ControllerStates[0].NextRepeatTime + lVar16 + 0xe8) =
             FVar26.InternalId;
      }
      lVar24 = local_210;
      if (EVar27 == Disconnected) {
        pIVar21 = IPlatformInputDeviceMapper::Get();
        pcVar10 = *(code **)(pIVar21->_padding_ + 0x88);
        pIVar22 = IPlatformInputDeviceMapper::Get();
        puVar23 = (undefined4 *)(**(code **)(pIVar22->_padding_ + 0x38))(pIVar22,local_1f0);
        (*pcVar10)(pIVar21,(ulonglong)pbVar15 & 0xffffffff,*puVar23);
        lVar24 = local_210;
      }
    }
    FInputDeviceScope::~FInputDeviceScope(&local_148);
    local_210 = lVar24 + 1;
    local_21c = local_21c + 1;
    if (3 < local_21c) {
      this->bNeedsControllerStateUpdate = false;
      return;
    }
  } while( true );
}

// SetChannelValue @ 14f12e440

void __thiscall
XInputInterface::SetChannelValue
          (XInputInterface *this,int param_1,FForceFeedbackChannelType param_2,float param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  IPlatformInputDeviceMapper *pIVar5;
  UInputDeviceSubsystem *this_00;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined1 *puVar10;
  FPlatformUserId *pFVar11;
  int local_res10 [2];
  uint local_38 [8];
  
  pIVar5 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar5->_padding_ + 0xb8))(pIVar5,local_res10,param_1);
  this_00 = UInputDeviceSubsystem::Get();
  if ((this_00 == (UInputDeviceSubsystem *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DeviceSubsystem",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Windows\\XInputDevice\\Source\\XInputDevice\\Private\\XInputInterface.cpp"
                         ,0x1a9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UInputDeviceSubsystem::GetLatestDeviceOfType
            (this_00,(FPlatformUserId)(int)local_38,(EHardwareDevicePrimaryType)local_res10[0]);
  if ((uint)param_1 < 4) {
    pFVar11 = &this->ControllerStates[0].LastUsedValidPlatformUserId;
    lVar6 = 4;
    do {
      uVar4 = 0xffffffff;
      if (*(int *)&(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x8 !=
          *(int *)&(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x34) {
        puVar1 = *(undefined1 **)&(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x40;
        puVar10 = &(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x38;
        if (puVar1 != (undefined1 *)0x0) {
          puVar10 = puVar1;
        }
        uVar7 = *(uint *)(puVar10 +
                         (ulonglong)
                         (*(int *)&(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x48 - 1U
                         & *(uint *)(pFVar11 + -7)) * 4);
        if (uVar7 != 0xffffffff) {
          do {
            puVar9 = (uint *)((longlong)(int)uVar7 * 0x10 +
                             *(longlong *)&(this->InternalDeviceIdMappings).MappedDeviceIds);
            if (*puVar9 == *(uint *)(pFVar11 + -7)) {
              puVar8 = puVar9 + 1;
              if (puVar9 == (uint *)0x0) {
                puVar8 = (uint *)0x0;
              }
              if (puVar8 != (uint *)0x0) {
                uVar4 = *puVar8;
              }
              break;
            }
            uVar7 = puVar9[2];
          } while (uVar7 != 0xffffffff);
        }
      }
      if ((((*(bool *)((longlong)(pFVar11 + -8) + 2) != false) &&
           (pFVar11->InternalId == local_res10[0])) && (-1 < (int)uVar4)) && (local_38[0] == uVar4))
      {
        if (param_2 == LEFT_LARGE) {
          ((FForceFeedbackValues *)(pFVar11 + -6))->LeftLarge = param_3;
        }
        else if (param_2 == LEFT_SMALL) {
          pFVar11[-5] = (FPlatformUserId)param_3;
        }
        else if (param_2 == RIGHT_LARGE) {
          pFVar11[-4] = (FPlatformUserId)param_3;
        }
        else if (param_2 == RIGHT_SMALL) {
          pFVar11[-3] = (FPlatformUserId)param_3;
        }
      }
      pFVar11 = pFVar11 + 0x46;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

// SetChannelValues @ 14f12e5f0

void __thiscall
XInputInterface::SetChannelValues(XInputInterface *this,int param_1,FForceFeedbackValues *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  IPlatformInputDeviceMapper *pIVar5;
  UInputDeviceSubsystem *this_00;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined1 *puVar10;
  FForceFeedbackValues *pFVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int local_res10 [2];
  uint local_res20 [2];
  
  pIVar5 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar5->_padding_ + 0xb8))(pIVar5,local_res10,param_1);
  this_00 = UInputDeviceSubsystem::Get();
  if ((this_00 == (UInputDeviceSubsystem *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DeviceSubsystem",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Windows\\XInputDevice\\Source\\XInputDevice\\Private\\XInputInterface.cpp"
                         ,0x1d6,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UInputDeviceSubsystem::GetLatestDeviceOfType
            (this_00,(FPlatformUserId)(int)local_res20,(EHardwareDevicePrimaryType)local_res10[0]);
  if ((uint)param_1 < 4) {
    pFVar11 = &this->ControllerStates[0].ForceFeedback;
    lVar6 = 4;
    do {
      uVar4 = 0xffffffff;
      if (*(int *)&(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x8 !=
          *(int *)&(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x34) {
        puVar1 = *(undefined1 **)&(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x40;
        puVar10 = &(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x38;
        if (puVar1 != (undefined1 *)0x0) {
          puVar10 = puVar1;
        }
        uVar7 = *(uint *)(puVar10 +
                         (ulonglong)
                         (*(int *)&(this->InternalDeviceIdMappings).MappedDeviceIds.field_0x48 - 1U
                         & *(int *)((longlong)(pFVar11 + -1) + 0xc)) * 4);
        if (uVar7 != 0xffffffff) {
          do {
            puVar9 = (uint *)((longlong)(int)uVar7 * 0x10 +
                             *(longlong *)&(this->InternalDeviceIdMappings).MappedDeviceIds);
            if (*puVar9 == *(int *)((longlong)(pFVar11 + -1) + 0xc)) {
              puVar8 = puVar9 + 1;
              if (puVar9 == (uint *)0x0) {
                puVar8 = (uint *)0x0;
              }
              if (puVar8 != (uint *)0x0) {
                uVar4 = *puVar8;
              }
              break;
            }
            uVar7 = puVar9[2];
          } while (uVar7 != 0xffffffff);
        }
      }
      if ((*(bool *)((longlong)(pFVar11 + -1) + 10) != false) &&
         (((FPlatformUserId *)((longlong)(pFVar11 + 1) + 8))->InternalId == local_res10[0])) {
        if (((int)uVar4 < 0) || (uVar4 != local_res20[0])) {
          fVar12 = 0.0;
          fVar13 = 0.0;
          fVar14 = 0.0;
          fVar15 = 0.0;
        }
        else {
          fVar12 = param_2->LeftLarge;
          fVar13 = param_2->LeftSmall;
          fVar14 = param_2->RightLarge;
          fVar15 = param_2->RightSmall;
        }
        pFVar11->LeftLarge = fVar12;
        pFVar11->LeftSmall = fVar13;
        pFVar11->RightLarge = fVar14;
        pFVar11->RightSmall = fVar15;
      }
      pFVar11 = (FForceFeedbackValues *)((longlong)(pFVar11 + 0x11) + 8);
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

// SetDeviceProperty @ 14f12e760

void __thiscall
XInputInterface::SetDeviceProperty(XInputInterface *this,int param_1,FInputDeviceProperty *param_2)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  FDynamicReleaseDeadZone *this_00;
  FName local_res18 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&UpdateRequestedName,L"Request_Device_Update");
    _Init_thread_footer(&::_TSS0);
  }
  if (param_2 != (FInputDeviceProperty *)0x0) {
    if (param_2->Name == UpdateRequestedName) {
      this->bNeedsControllerStateUpdate = true;
      return;
    }
    ::FName::FName(local_res18,"InputDeviceTriggerDynamicReleaseDeadZone");
    if (param_2->Name == local_res18[0]) {
      lVar3 = 0;
      fVar1 = (float)param_2[1].Name.Number;
      do {
        if (this->ControllerStates[0].ControllerId == param_1) {
          cVar2 = (char)param_2[1].Name.ComparisonIndex.Value;
          if (cVar2 == '\x01') {
            this_00 = &this->ControllerStates[0].LeftTriggerReleaseDeadZone;
          }
          else {
            if (cVar2 != '\x02') {
              if (cVar2 != '\x03') {
                return;
              }
              FDynamicReleaseDeadZone::OverrideDeadZone
                        (&this->ControllerStates[0].LeftTriggerReleaseDeadZone,fVar1);
            }
            this_00 = &this->ControllerStates[0].RightTriggerReleaseDeadZone;
          }
          FDynamicReleaseDeadZone::OverrideDeadZone(this_00,fVar1);
          return;
        }
        lVar3 = lVar3 + 1;
        this = (XInputInterface *)&this->ControllerStates[0].ForceFeedback.RightLarge;
      } while (lVar3 < 4);
    }
  }
  return;
}

// SetDynamicTriggerThreshold @ 14f12e8a0

void __thiscall
XInputInterface::SetDynamicTriggerThreshold
          (XInputInterface *this,int param_1,EInputDeviceTriggerMask param_2,float param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  while (this->ControllerStates[0].ControllerId != param_1) {
    lVar1 = lVar1 + 1;
    this = (XInputInterface *)&this->ControllerStates[0].ForceFeedback.RightLarge;
    if (3 < lVar1) {
      return;
    }
  }
  if (param_2 == Left) {
    FDynamicReleaseDeadZone::OverrideDeadZone
              (&this->ControllerStates[0].LeftTriggerReleaseDeadZone,param_3);
    return;
  }
  if (param_2 != Right) {
    if (param_2 != All) {
      return;
    }
    FDynamicReleaseDeadZone::OverrideDeadZone
              (&this->ControllerStates[0].LeftTriggerReleaseDeadZone,param_3);
  }
  FDynamicReleaseDeadZone::OverrideDeadZone
            (&this->ControllerStates[0].RightTriggerReleaseDeadZone,param_3);
  return;
}

// SetMessageHandler @ 14f12e940

void __thiscall
XInputInterface::SetMessageHandler
          (XInputInterface *this,TSharedRef<FGenericApplicationMessageHandler,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FGenericApplicationMessageHandler *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->MessageHandler).SharedReferenceCount.ReferenceController;
  (this->MessageHandler).Object = pFVar2;
  (this->MessageHandler).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// ShortToNormalizedFloat @ 14f12e980

float __cdecl ShortToNormalizedFloat(short param_1)

{
  if (param_1 < 1) {
    return (float)(int)param_1 * __real_38000000;
  }
  return (float)(int)param_1 * __real_38000100;
}

// Tick @ 14f12e9c0

void __thiscall XInputInterface::Tick(XInputInterface *this,float param_1)

{
  return;
}

// IMPLEMENT_MODULE_XInputDevice @ 14f12e9d0

void __cdecl IMPLEMENT_MODULE_XInputDevice(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceControllerStateUpdate'' @ 150472330

void __cdecl _dynamic_atexit_destructor_for__CVarForceControllerStateUpdate__(void)

{
  CVarForceControllerStateUpdate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceControllerStateUpdate);
  return;
}

// `dynamic_atexit_destructor_for_'LogXInput'' @ 150472350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogXInput__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogXInput);
  return;
}

// `dynamic_atexit_destructor_for_'XInputControllerIdentifier'' @ 150472370

void __cdecl _dynamic_atexit_destructor_for__XInputControllerIdentifier__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = XInputControllerIdentifier.Data.AllocatorInstance.Data;
  if (XInputControllerIdentifier.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (XInputControllerIdentifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

