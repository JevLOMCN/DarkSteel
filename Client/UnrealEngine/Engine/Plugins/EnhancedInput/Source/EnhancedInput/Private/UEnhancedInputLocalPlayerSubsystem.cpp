// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 20

// StaticClass @ 14a6bbfc0

UClass * __cdecl UEnhancedInputLocalPlayerSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedInputLocalPlayerSubsystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedInputLocalPlayerSubsystem",
               &Z_Registration_Info_UClass_UEnhancedInputLocalPlayerSubsystem.InnerSingleton,
               StaticRegisterNativesUEnhancedInputLocalPlayerSubsystem,0x238,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnhancedInputLocalPlayerSubsystem>,
               InternalVTableHelperCtorCaller<UEnhancedInputLocalPlayerSubsystem>,local_res8,
               ULocalPlayerSubsystem::StaticClass,ULocalPlayer::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedInputLocalPlayerSubsystem.InnerSingleton;
}

// UEnhancedInputLocalPlayerSubsystem @ 14a6cb7b0

UEnhancedInputLocalPlayerSubsystem * __thiscall
UEnhancedInputLocalPlayerSubsystem::UEnhancedInputLocalPlayerSubsystem
          (UEnhancedInputLocalPlayerSubsystem *this,FVTableHelper *param_1)

{
  ULocalPlayerSubsystem::ULocalPlayerSubsystem((ULocalPlayerSubsystem *)this,param_1);
  IEnhancedInputSubsystemInterface::IEnhancedInputSubsystemInterface
            ((IEnhancedInputSubsystemInterface *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__ULocalPlayerSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__IEnhancedInputSubsystemInterface__;
  *(undefined8 *)&this->ControlMappingsRebuiltDelegate = 0;
  *(undefined8 *)&(this->ControlMappingsRebuiltDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ControlMappingsRebuiltDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnMappingContextAdded = 0;
  *(undefined8 *)&(this->OnMappingContextAdded).field_0x8 = 0;
  *(undefined8 *)&(this->OnMappingContextAdded).field_0x10 = 0;
  *(undefined8 *)&this->OnMappingContextRemoved = 0;
  *(undefined8 *)&(this->OnMappingContextRemoved).field_0x8 = 0;
  *(undefined8 *)&(this->OnMappingContextRemoved).field_0x10 = 0;
  *(undefined8 *)&this->OnPostUserSettingsInitialized = 0;
  *(undefined8 *)&(this->OnPostUserSettingsInitialized).field_0x8 = 0;
  *(undefined8 *)&(this->OnPostUserSettingsInitialized).field_0x10 = 0;
  (this->UserSettings).field0_0x0.DebugPtr = (UEnhancedInputUserSettings *)0x0;
  *(undefined8 *)&this->ContinuouslyInjectedInputs = 0;
  *(undefined8 *)&(this->ContinuouslyInjectedInputs).field_0x8 = 0;
  *(undefined8 *)&(this->ContinuouslyInjectedInputs).field_0x20 = 0;
  *(undefined4 *)&(this->ContinuouslyInjectedInputs).field_0x28 = 0;
  *(undefined4 *)&(this->ContinuouslyInjectedInputs).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContinuouslyInjectedInputs).field_0x34 = 0;
  *(undefined4 *)&(this->ContinuouslyInjectedInputs).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ContinuouslyInjectedInputs).field_0x40 = 0;
  *(undefined4 *)&(this->ContinuouslyInjectedInputs).field_0x48 = 0;
  return this;
}

// UEnhancedInputLocalPlayerSubsystem @ 14a6cb8a0

UEnhancedInputLocalPlayerSubsystem * __thiscall
UEnhancedInputLocalPlayerSubsystem::UEnhancedInputLocalPlayerSubsystem
          (UEnhancedInputLocalPlayerSubsystem *this)

{
  ULocalPlayerSubsystem::ULocalPlayerSubsystem((ULocalPlayerSubsystem *)this);
  IEnhancedInputSubsystemInterface::IEnhancedInputSubsystemInterface
            ((IEnhancedInputSubsystemInterface *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__ULocalPlayerSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__IEnhancedInputSubsystemInterface__;
  *(undefined8 *)&this->ControlMappingsRebuiltDelegate = 0;
  *(undefined8 *)&(this->ControlMappingsRebuiltDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ControlMappingsRebuiltDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnMappingContextAdded = 0;
  *(undefined8 *)&(this->OnMappingContextAdded).field_0x8 = 0;
  *(undefined8 *)&(this->OnMappingContextAdded).field_0x10 = 0;
  *(undefined8 *)&this->OnMappingContextRemoved = 0;
  *(undefined8 *)&(this->OnMappingContextRemoved).field_0x8 = 0;
  *(undefined8 *)&(this->OnMappingContextRemoved).field_0x10 = 0;
  *(undefined8 *)&this->OnPostUserSettingsInitialized = 0;
  *(undefined8 *)&(this->OnPostUserSettingsInitialized).field_0x8 = 0;
  *(undefined8 *)&(this->OnPostUserSettingsInitialized).field_0x10 = 0;
  (this->UserSettings).field0_0x0.DebugPtr = (UEnhancedInputUserSettings *)0x0;
  *(undefined8 *)&this->ContinuouslyInjectedInputs = 0;
  *(undefined8 *)&(this->ContinuouslyInjectedInputs).field_0x8 = 0;
  *(undefined8 *)&(this->ContinuouslyInjectedInputs).field_0x20 = 0;
  *(undefined4 *)&(this->ContinuouslyInjectedInputs).field_0x28 = 0;
  *(undefined4 *)&(this->ContinuouslyInjectedInputs).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContinuouslyInjectedInputs).field_0x34 = 0;
  *(undefined4 *)&(this->ContinuouslyInjectedInputs).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ContinuouslyInjectedInputs).field_0x40 = 0;
  *(undefined4 *)&(this->ContinuouslyInjectedInputs).field_0x48 = 0;
  return this;
}

// ~UEnhancedInputLocalPlayerSubsystem @ 14a6cf130

void __thiscall
UEnhancedInputLocalPlayerSubsystem::~UEnhancedInputLocalPlayerSubsystem
          (UEnhancedInputLocalPlayerSubsystem *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__ULocalPlayerSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__IEnhancedInputSubsystemInterface__;
  *(undefined4 *)&(this->ContinuouslyInjectedInputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ContinuouslyInjectedInputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputAction_const_>,FInjectedInput>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ContinuouslyInjectedInputs);
  pvVar1 = *(void **)&(this->OnPostUserSettingsInitialized).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPostUserSettingsInitialized);
  pvVar1 = *(void **)&(this->OnMappingContextRemoved).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMappingContextRemoved);
  pvVar1 = *(void **)&(this->OnMappingContextAdded).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMappingContextAdded);
  pvVar1 = *(void **)&(this->ControlMappingsRebuiltDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ControlMappingsRebuiltDelegate);
  IEnhancedInputSubsystemInterface::~IEnhancedInputSubsystemInterface
            ((IEnhancedInputSubsystemInterface *)&this->_padding_);
  ULocalPlayerSubsystem::~ULocalPlayerSubsystem((ULocalPlayerSubsystem *)this);
  return;
}

// AddMappingContext @ 14a6d4410

void __thiscall
UEnhancedInputLocalPlayerSubsystem::AddMappingContext
          (UEnhancedInputLocalPlayerSubsystem *this,UInputMappingContext *param_1,int param_2,
          FModifyContextOptions *param_3)

{
  UInputMappingContext *local_res8;
  
  IEnhancedInputSubsystemInterface::AddMappingContext
            ((IEnhancedInputSubsystemInterface *)this,param_1,param_2,param_3);
  local_res8 = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_res8);
  return;
}

// ControlMappingsRebuiltThisFrame @ 14a6d6bb0

void __thiscall
UEnhancedInputLocalPlayerSubsystem::ControlMappingsRebuiltThisFrame
          (UEnhancedInputLocalPlayerSubsystem *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,(void *)0x0);
  return;
}

// Deinitialize @ 14a6d7ad0

void __thiscall
UEnhancedInputLocalPlayerSubsystem::Deinitialize(UEnhancedInputLocalPlayerSubsystem *this)

{
  IEnhancedInputSubsystemInterface::ValidateTrackedMappingContextsAreUnregistered
            ((IEnhancedInputSubsystemInterface *)&this->_padding_);
  return;
}

// FOnControlMappingsRebuilt_DelegateWrapper @ 14a6dc8c0

void __cdecl
UEnhancedInputLocalPlayerSubsystem::FOnControlMappingsRebuilt_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FOnMappingContextAdded_DelegateWrapper @ 14a6dc8d0

void __cdecl
UEnhancedInputLocalPlayerSubsystem::FOnMappingContextAdded_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UInputMappingContext *param_2)

{
  UInputMappingContext *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnMappingContextRemoved_DelegateWrapper @ 14a6dc8f0

void __cdecl
UEnhancedInputLocalPlayerSubsystem::FOnMappingContextRemoved_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UInputMappingContext *param_2)

{
  UInputMappingContext *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnUserSettingsPostInitialized_DelegateWrapper @ 14a6dc910

void __cdecl
UEnhancedInputLocalPlayerSubsystem::FOnUserSettingsPostInitialized_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UEnhancedInputUserSettings *param_2)

{
  UEnhancedInputUserSettings *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// GetContinuouslyInjectedInputs @ 14a6dec20

TMap<TObjectPtr<UInputAction_const_>,FInjectedInput,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInput,0>_>
* __thiscall
UEnhancedInputLocalPlayerSubsystem::GetContinuouslyInjectedInputs
          (UEnhancedInputLocalPlayerSubsystem *this)

{
  return (TMap<TObjectPtr<UInputAction_const_>,FInjectedInput,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInjectedInput,0>_>
          *)&(this->OnMappingContextRemoved).field_0x8;
}

// GetPlayerInput @ 14a6e02d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UEnhancedPlayerInput * __thiscall
UEnhancedInputLocalPlayerSubsystem::GetPlayerInput(UEnhancedInputLocalPlayerSubsystem *this)

{
  TObjectPtr<UPlayerInput> *this_00;
  int iVar1;
  UPlayer *this_01;
  bool bVar2;
  UClass *pUVar3;
  UWorld *pUVar4;
  APlayerController *pAVar5;
  
  this_01 = *(UPlayer **)&this[-1].ContinuouslyInjectedInputs.field_0x40;
  if (this_01 != (UPlayer *)0x0) {
    pUVar3 = Z_Construct_UClass_ULocalPlayer_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      pUVar4 = (UWorld *)
               (**(code **)(*(longlong *)&this[-1].ContinuouslyInjectedInputs.field_0x20 + 0x180))
                         (&this[-1].ContinuouslyInjectedInputs.field_0x20);
      pAVar5 = UPlayer::GetPlayerController(this_01,pUVar4);
      if ((pAVar5 != (APlayerController *)0x0) &&
         (this_00 = &pAVar5->PlayerInput, (this_00->field0_0x0).DebugPtr != (UPlayerInput *)0x0)) {
        pUVar3 = UEnhancedPlayerInput::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
        if (bVar2) {
          return (UEnhancedPlayerInput *)(this_00->field0_0x0).DebugPtr;
        }
      }
    }
  }
  return (UEnhancedPlayerInput *)0x0;
}

// GetPrivateStaticClass @ 14a6e0970

UClass * __cdecl UEnhancedInputLocalPlayerSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedInputLocalPlayerSubsystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedInputLocalPlayerSubsystem",
               &Z_Registration_Info_UClass_UEnhancedInputLocalPlayerSubsystem.InnerSingleton,
               StaticRegisterNativesUEnhancedInputLocalPlayerSubsystem,0x238,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnhancedInputLocalPlayerSubsystem>,
               InternalVTableHelperCtorCaller<UEnhancedInputLocalPlayerSubsystem>,local_res8,
               ULocalPlayerSubsystem::StaticClass,ULocalPlayer::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedInputLocalPlayerSubsystem.InnerSingleton;
}

// GetUserSettings @ 14a6e2c10

UEnhancedInputUserSettings * __thiscall
UEnhancedInputLocalPlayerSubsystem::GetUserSettings(UEnhancedInputLocalPlayerSubsystem *this)

{
  return *(UEnhancedInputUserSettings **)&this->OnMappingContextRemoved;
}

// InitalizeUserSettings @ 14a6e4110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEnhancedInputLocalPlayerSubsystem::InitalizeUserSettings(UEnhancedInputLocalPlayerSubsystem *this)

{
  int iVar1;
  ULocalPlayer *pUVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  longlong lVar7;
  UEnhancedInputUserSettings *pUVar8;
  FName local_res8;
  undefined8 local_res10;
  FString local_18;
  
  pUVar2 = *(ULocalPlayer **)&this[-1].ContinuouslyInjectedInputs.field_0x40;
  if (pUVar2 != (ULocalPlayer *)0x0) {
    pUVar6 = Z_Construct_UClass_ULocalPlayer_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      plVar3 = *(longlong **)&this->OnMappingContextRemoved;
      if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a6e4171. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x2b0))(plVar3,pUVar2);
        return;
      }
      pUVar6 = UEnhancedInputDeveloperSettings::StaticClass();
      if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar6);
      }
      if ((*(byte *)((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr + 6) & 2) == 0) {
        if ((byte)LogEnhancedInput._0_1_ < 6) {
          return;
        }
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
        return;
      }
      lVar7 = (**(code **)(this->_padding_ + 0x10))(this);
      if (lVar7 == 0) {
        if ((byte)LogEnhancedInput._0_1_ < 3) {
          return;
        }
        local_res8 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_res8,&local_18);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
        if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return;
      }
      pUVar8 = UEnhancedInputUserSettings::LoadOrCreateSettings(pUVar2);
      if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
         (pUVar8 == (UEnhancedInputUserSettings *)0x0)) {
        *(UEnhancedInputUserSettings **)&this->OnMappingContextRemoved = pUVar8;
        if (pUVar8 == (UEnhancedInputUserSettings *)0x0) {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2059040637763714947>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\EnhancedInputSubsystems.cpp"
                             ,0x7d,"UserSettings");
          if (!bVar5) {
            return;
          }
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
        *(UEnhancedInputUserSettings **)&this->OnMappingContextRemoved = pUVar8;
      }
      (**(code **)(this->_padding_ + 0x28))(this);
      local_res10 = *(undefined8 *)&this->OnMappingContextRemoved;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->OnMappingContextAdded,&local_res10);
      if ((byte)LogEnhancedInput._0_1_ < 5) {
        return;
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
      return;
    }
  }
  if (1 < (byte)LogEnhancedInput._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
  }
  return;
}

// PlayerControllerChanged @ 14a6e9a70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEnhancedInputLocalPlayerSubsystem::PlayerControllerChanged
          (UEnhancedInputLocalPlayerSubsystem *this,APlayerController *param_1)

{
  int *this_00;
  int iVar1;
  int iVar2;
  UObject *pUVar3;
  longlong lVar4;
  UEnhancedInputUserSettings *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FSoftObjectPath *this_01;
  byte local_res18 [8];
  undefined1 local_res20 [8];
  
  ULocalPlayerSubsystem::PlayerControllerChanged((ULocalPlayerSubsystem *)this,param_1);
  pUVar6 = UEnhancedInputDeveloperSettings::StaticClass();
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  if ((*(byte *)((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr + 6) & 2) != 0) {
    (**(code **)(this->_padding_ + 0x20))(&this->_padding_);
  }
  if (UE::Input::EnableDefaultMappingContexts != 0) {
    pUVar6 = UEnhancedInputDeveloperSettings::StaticClass();
    if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar6);
    }
    pUVar3 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
    lVar4 = *(longlong *)&pUVar3[1].field_0x10;
    iVar1 = *(int *)&pUVar3[1].field_0x18;
    this_01 = (FSoftObjectPath *)(lVar4 + 8);
    while( true ) {
      if (*(int *)&pUVar3[1].field_0x18 != iVar1) {
        `TCheckedPointerIterator<FDefaultContextSetting_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res20);
      }
      this_00 = &this_01[-1].SubPathString.Data.ArrayNum;
      if (this_00 == (int *)((longlong)iVar1 * 0x30 + lVar4)) break;
      pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
      if (pUVar7 == (UObject *)0x0) {
        if ((this_01->AssetPath).PackageName != (FName)0x0) {
          FSoftObjectPath::TryLoad(this_01,(FUObjectSerializeContext *)0x0);
          pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get
                             ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
          goto LAB_14a6e9b5d;
        }
      }
      else {
LAB_14a6e9b5d:
        if (pUVar7 != (UObject *)0x0) {
          pUVar6 = UInputMappingContext::StaticClass();
          iVar2 = (int)pUVar6->_padding_;
          if ((iVar2 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar6->_padding_)) {
            if ((char)this_01[1].AssetPath.PackageName.Number != '\0') {
              local_res18[0] = local_res18[0] & 0xf9 | 1;
              (**(code **)(this->_padding_ + 0x98))
                        (&this->_padding_,pUVar7,
                         this_01[1].AssetPath.PackageName.ComparisonIndex.Value,local_res18);
            }
            if ((*(char *)((longlong)&this_01[1].AssetPath.PackageName.Number + 1) != '\0') &&
               (pUVar5 = (this->UserSettings).field0_0x0.DebugPtr,
               pUVar5 != (UEnhancedInputUserSettings *)0x0)) {
              (**(code **)(pUVar5->_padding_ + 0x368))();
            }
          }
        }
      }
      this_01 = (FSoftObjectPath *)&this_01[1].SubPathString;
    }
  }
  return;
}

// RemoveMappingContext @ 14a6f3370

void __thiscall
UEnhancedInputLocalPlayerSubsystem::RemoveMappingContext
          (UEnhancedInputLocalPlayerSubsystem *this,UInputMappingContext *param_1,
          FModifyContextOptions *param_2)

{
  UInputMappingContext *local_res8;
  
  IEnhancedInputSubsystemInterface::RemoveMappingContext
            ((IEnhancedInputSubsystemInterface *)this,param_1,param_2);
  local_res8 = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->ControlMappingsRebuiltDelegate,&local_res8);
  return;
}

// StaticRegisterNativesUEnhancedInputLocalPlayerSubsystem @ 14a6fb420

void __cdecl
UEnhancedInputLocalPlayerSubsystem::StaticRegisterNativesUEnhancedInputLocalPlayerSubsystem(void)

{
  return;
}

// _getUObject @ 14a703000

UObject * __thiscall
UEnhancedInputLocalPlayerSubsystem::_getUObject(UEnhancedInputLocalPlayerSubsystem *this)

{
  return (UObject *)&this[-1].ContinuouslyInjectedInputs.field_0x20;
}

