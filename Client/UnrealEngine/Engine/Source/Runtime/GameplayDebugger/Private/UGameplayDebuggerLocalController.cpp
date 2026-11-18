// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 44

// StaticClass @ 146d37a10

UClass * __cdecl UGameplayDebuggerLocalController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayDebuggerLocalController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayDebugger",L"GameplayDebuggerLocalController",
               &Z_Registration_Info_UClass_UGameplayDebuggerLocalController.InnerSingleton,
               StaticRegisterNativesUGameplayDebuggerLocalController,0x148,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayDebuggerLocalController>,
               InternalVTableHelperCtorCaller<UGameplayDebuggerLocalController>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayDebuggerLocalController.InnerSingleton;
}

// UGameplayDebuggerLocalController @ 146d408d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameplayDebuggerLocalController * __thiscall
UGameplayDebuggerLocalController::UGameplayDebuggerLocalController
          (UGameplayDebuggerLocalController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGameplayDebuggerLocalController__6B_;
  (this->CachedReplicator).field0_0x0.DebugPtr = (AGameplayDebuggerCategoryReplicator *)0x0;
  (this->CachedPlayerManager).field0_0x0.DebugPtr = (AGameplayDebuggerPlayerManager *)0x0;
  (this->DebugActorCandidate).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->HUDFont).field0_0x0.DebugPtr = (UFont *)0x0;
  (this->DataPackMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataPackMap).ArrayNum = 0;
  (this->DataPackMap).ArrayMax = 0;
  (this->SlotCategoryIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlotCategoryIds).ArrayNum = 0;
  (this->SlotCategoryIds).ArrayMax = 0;
  (this->SlotNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlotNames).ArrayNum = 0;
  (this->SlotNames).ArrayMax = 0;
  *(undefined8 *)&(this->UsedBindings).Elements = 0;
  *(undefined8 *)&(this->UsedBindings).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UsedBindings).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->UsedBindings).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UsedBindings).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UsedBindings).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->UsedBindings).Elements.field_0x30 = 0xffffffff;
  (this->UsedBindings).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->UsedBindings).HashSize = 0;
  (this->ActivationKeyDesc).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActivationKeyDesc).Data.ArrayNum = 0;
  (this->ActivationKeyDesc).Data.ArrayMax = 0;
  (this->RowUpKeyDesc).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowUpKeyDesc).Data.ArrayNum = 0;
  (this->RowUpKeyDesc).Data.ArrayMax = 0;
  (this->RowDownKeyDesc).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowDownKeyDesc).Data.ArrayNum = 0;
  (this->RowDownKeyDesc).Data.ArrayMax = 0;
  (this->CategoryKeysDesc).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryKeysDesc).Data.ArrayNum = 0;
  (this->CategoryKeysDesc).Data.ArrayMax = 0;
  (this->StartSelectingActorHandle).Handle = 0;
  (this->SelectActorTickHandle).Handle = 0;
  this->bDebugDrawEnabled = true;
  return this;
}

// UGameplayDebuggerLocalController @ 146d409b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGameplayDebuggerLocalController * __thiscall
UGameplayDebuggerLocalController::UGameplayDebuggerLocalController
          (UGameplayDebuggerLocalController *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  UFont *pUVar3;
  FName *pFVar4;
  UClass *pUVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  FName local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGameplayDebuggerLocalController__6B_;
  (this->CachedReplicator).field0_0x0.DebugPtr = (AGameplayDebuggerCategoryReplicator *)0x0;
  (this->CachedPlayerManager).field0_0x0.DebugPtr = (AGameplayDebuggerPlayerManager *)0x0;
  (this->DebugActorCandidate).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->HUDFont).field0_0x0.DebugPtr = (UFont *)0x0;
  (this->DataPackMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataPackMap).ArrayNum = 0;
  (this->DataPackMap).ArrayMax = 0;
  (this->SlotCategoryIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlotCategoryIds).ArrayNum = 0;
  (this->SlotCategoryIds).ArrayMax = 0;
  (this->SlotNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlotNames).ArrayNum = 0;
  (this->SlotNames).ArrayMax = 0;
  *(undefined8 *)&(this->UsedBindings).Elements = 0;
  *(undefined8 *)&(this->UsedBindings).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UsedBindings).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->UsedBindings).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UsedBindings).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UsedBindings).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UsedBindings).Elements.field_0x34 = 0;
  (this->UsedBindings).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->UsedBindings).HashSize = 0;
  this->bSimulateMode = 0;
  this->bPrevScreenMessagesEnabled = 0;
  this->bEnableTextShadow = 0;
  this->bPrevLocallyEnabled = 0;
  this->bIsLocallyEnabled = 0;
  this->bIsSelectingActor = 0;
  this->bNeedsCleanup = 0;
  (this->ActivationKeyDesc).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActivationKeyDesc).Data.ArrayNum = 0;
  (this->ActivationKeyDesc).Data.ArrayMax = 0;
  (this->RowUpKeyDesc).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowUpKeyDesc).Data.ArrayNum = 0;
  (this->RowUpKeyDesc).Data.ArrayMax = 0;
  (this->RowDownKeyDesc).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowDownKeyDesc).Data.ArrayNum = 0;
  (this->RowDownKeyDesc).Data.ArrayMax = 0;
  (this->CategoryKeysDesc).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryKeysDesc).Data.ArrayNum = 0;
  (this->CategoryKeysDesc).Data.ArrayMax = 0;
  (this->StartSelectingActorHandle).Handle = 0;
  (this->SelectActorTickHandle).Handle = 0;
  this->bDebugDrawEnabled = true;
  this->ActiveRowIdx = 0;
  if ((this->_padding_ & 0x10) == 0) {
    pUVar3 = UEngine::GetSmallFont();
    pFVar4 = ::FName::FName(local_b8,L"HUDFont");
    FVar2 = *pFVar4;
    if (FVar2 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar5 = Z_Construct_UClass_UFont_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar5);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._24_4_ = RF_NoFlags;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    local_a8._16_8_ = FVar2;
    local_a8._40_8_ = pUVar3;
    pUVar3 = (UFont *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UFont *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->HUDFont).field0_0x0.DebugPtr = pUVar3;
    pUVar5 = UGameplayDebuggerUserSettings::StaticClass();
    if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar5);
    }
    ((this->HUDFont).field0_0x0.DebugPtr)->LegacyFontSize =
         *(int *)&(pUVar5->ClassDefaultObject).field0_0x0.DebugPtr[3].field_0x20;
  }
  return this;
}

// ~UGameplayDebuggerLocalController @ 146d41630

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
UGameplayDebuggerLocalController::~UGameplayDebuggerLocalController
          (UGameplayDebuggerLocalController *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&___7UGameplayDebuggerLocalController__6B_;
  pFVar1 = (this->CategoryKeysDesc).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RowDownKeyDesc).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RowUpKeyDesc).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActivationKeyDesc).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->UsedBindings).HashSize = 0;
  FVar2 = (this->UsedBindings).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->UsedBindings).Elements);
  DestructItems<FString,int>
            ((FString *)(this->SlotNames).AllocatorInstance.Data,(this->SlotNames).ArrayNum);
  pFVar1 = (this->SlotNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->SlotCategoryIds).AllocatorInstance.Data,(this->SlotCategoryIds).ArrayNum);
  pFVar1 = (this->SlotCategoryIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(this->DataPackMap).AllocatorInstance.Data,
             (this->DataPackMap).ArrayNum);
  pFVar1 = (this->DataPackMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 146d432a0

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
UGameplayDebuggerLocalController::BeginDestroy(UGameplayDebuggerLocalController *this)

{
  undefined1 *puVar1;
  
  UObject::BeginDestroy((UObject *)this);
  if (this->bNeedsCleanup != 0) {
    if ((this->bIsLocallyEnabled != 0) && (GAreScreenMessagesEnabled == false)) {
      GAreScreenMessagesEnabled = this->bPrevScreenMessagesEnabled;
    }
    this->bNeedsCleanup = 0;
  }
  return;
}

// BindInput @ 146d435e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
UGameplayDebuggerLocalController::BindInput
          (UGameplayDebuggerLocalController *this,UInputComponent *param_1)

{
  int *piVar1;
  byte *pbVar2;
  undefined1 *this_00;
  int iVar3;
  AGameplayDebuggerCategoryReplicator *pAVar4;
  FScriptContainerElement *pFVar5;
  FInputKeyBinding *pFVar6;
  undefined8 uVar7;
  APlayerController *pAVar8;
  TObjectPtr<UPlayerInput> TVar9;
  ForElementType<FSetElementId> FVar10;
  code *pcVar11;
  undefined4 uVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  UClass *this_01;
  UGameplayDebuggerConfig *pUVar16;
  FInputChord *pFVar17;
  FName FVar18;
  TReferenceControllerBase<1> *pTVar19;
  undefined8 *puVar20;
  ulong64 uVar21;
  ForElementType<FSetElementId> FVar22;
  TArray<FInputKeyBinding,TSizedDefaultAllocator<32>_> *pTVar23;
  uint uVar24;
  FKey *this_02;
  ForElementType<FSetElementId> _Dst;
  uint uVar25;
  TReferenceControllerBase<1> *pTVar26;
  longlong lVar27;
  longlong lVar28;
  FNameEntryId FVar29;
  FName *pFVar30;
  bool *pbVar31;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_03;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar32;
  undefined1 auStackY_5c8 [32];
  uint local_578;
  longlong local_560;
  longlong local_558;
  longlong local_550;
  FName local_540;
  FName local_538;
  TReferenceControllerBase<1> *local_530;
  FScriptContainerElement local_528;
  FScriptContainerElement local_527;
  undefined8 local_520;
  undefined8 local_518;
  TReferenceControllerBase<1> *pTStack_510;
  uint local_508;
  FInputActionUnifiedDelegate local_500;
  FName local_4c8;
  undefined8 local_4c0;
  FSharedReferencer<1> local_4b8;
  undefined8 local_4b0;
  FSharedReferencer<1> local_4a8 [2];
  FInputKeyBinding local_498;
  undefined1 local_438 [8];
  undefined1 local_430 [8];
  undefined1 local_428 [8];
  undefined1 local_420 [8];
  undefined1 local_418 [8];
  undefined1 local_410 [8];
  UGameplayDebuggerLocalController *local_408;
  UGameplayDebuggerLocalController *local_400;
  TReferenceControllerBase<1> *local_3f8;
  FKey local_3f0;
  FKey local_3d8;
  FKey local_3c0;
  FKey local_3a8;
  FKey local_390;
  FKey local_378;
  FKey local_360;
  FKey local_348;
  FKey local_330;
  FKey local_318;
  FKey local_300;
  FKey local_2e8;
  FKey local_2d0;
  FKey local_2b8;
  FKey local_2a0;
  FKey local_288;
  FDestructionSentinel local_270;
  atomic<int> *local_258;
  FDestructionSentinel local_250;
  atomic<int> *local_238;
  FInputChord local_1b8;
  FInputChord local_198;
  FInputChord local_178;
  FInputChord local_158;
  undefined1 local_138 [32];
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100 [8];
  ForElementType<FSetElementId> local_f8;
  uint local_f0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_e8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  local_138._0_8_ = (void *)0x0;
  local_138._8_8_ = 0;
  local_118 = 0;
  local_110 = 0;
  local_10c = 0x80;
  local_108 = 0xffffffff;
  local_104 = 0;
  local_f8 = (ForElementType<FSetElementId>)0x0;
  local_f0 = 0;
  this_01 = UGameplayDebuggerConfig::StaticClass();
  pUVar16 = UClass::GetDefaultObject<UGameplayDebuggerConfig>(this_01);
  if (this->bSimulateMode == 0) {
    local_3d8.KeyName = (pUVar16->ActivationKey).KeyName;
    local_3d8.KeyDetails.Object = (pUVar16->ActivationKey).KeyDetails.Object;
    local_3d8.KeyDetails.SharedReferenceCount.ReferenceController =
         (pUVar16->ActivationKey).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_3d8.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3d8.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3d8.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar17 = FInputChord::FInputChord(&local_158,'\0',&local_3d8);
    UInputComponent::BindKey<UGameplayDebuggerLocalController>
              (param_1,pFVar17,IE_Pressed,this,(pmf_8f91aab7)0x146d54f10);
    local_360.KeyName = (pUVar16->ActivationKey).KeyName;
    local_360.KeyDetails.Object = (pUVar16->ActivationKey).KeyDetails.Object;
    local_360.KeyDetails.SharedReferenceCount.ReferenceController =
         (pUVar16->ActivationKey).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_360.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_360.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_360.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar17 = FInputChord::FInputChord(&local_1b8,'\0',&local_360);
    UInputComponent::BindKey<UGameplayDebuggerLocalController>
              (param_1,pFVar17,IE_Released,this,(pmf_8f91aab7)0x146d55050);
    local_348.KeyName = (pUVar16->ActivationKey).KeyName;
    local_348.KeyDetails.Object = (pUVar16->ActivationKey).KeyDetails.Object;
    local_348.KeyDetails.SharedReferenceCount.ReferenceController =
         (pUVar16->ActivationKey).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_348.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_348.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_348.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar17 = FInputChord::FInputChord(&local_198,'\x04',&local_348);
    UInputComponent::BindKey<UGameplayDebuggerLocalController>
              (param_1,pFVar17,IE_Pressed,this,(pmf_8f91aab7)0x146d54fb0);
    local_330.KeyName = (pUVar16->ActivationKey).KeyName;
    local_330.KeyDetails.Object = (pUVar16->ActivationKey).KeyDetails.Object;
    local_330.KeyDetails.SharedReferenceCount.ReferenceController =
         (pUVar16->ActivationKey).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_330.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_330.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_330.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar17 = FInputChord::FInputChord(&local_178,'\x04',&local_330);
    UInputComponent::BindKey<UGameplayDebuggerLocalController>
              (param_1,pFVar17,IE_Released,this,(pmf_8f91aab7)0x146d55060);
    FVar18 = FKey::GetFName(&pUVar16->ActivationKey);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_138,
               (FName *)local_438,(bool *)FVar18);
  }
  if (this->bSimulateMode != 0 || this->bIsLocallyEnabled != 0) {
    local_318.KeyName = (pUVar16->CategorySlot0).KeyName;
    local_318.KeyDetails.Object = (pUVar16->CategorySlot0).KeyDetails.Object;
    local_318.KeyDetails.SharedReferenceCount.ReferenceController =
         (pUVar16->CategorySlot0).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_318.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_318.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_318.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    UInputComponent::BindKey<UGameplayDebuggerLocalController>
              (param_1,&local_318,IE_Pressed,this,(pmf_8f91aab7)0x146d55740);
    local_300.KeyName = (pUVar16->CategorySlot1).KeyName;
    local_300.KeyDetails.Object = (pUVar16->CategorySlot1).KeyDetails.Object;
    local_300.KeyDetails.SharedReferenceCount.ReferenceController =
         (pUVar16->CategorySlot1).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_300.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_300.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_300.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    UInputComponent::BindKey<UGameplayDebuggerLocalController>
              (param_1,&local_300,IE_Pressed,this,(pmf_8f91aab7)0x146d55760);
    local_2e8.KeyName = (pUVar16->CategorySlot2).KeyName;
    local_2e8.KeyDetails.Object = (pUVar16->CategorySlot2).KeyDetails.Object;
    local_2e8.KeyDetails.SharedReferenceCount.ReferenceController =
         (pUVar16->CategorySlot2).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_2e8.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2e8.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2e8.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    UInputComponent::BindKey<UGameplayDebuggerLocalController>
              (param_1,&local_2e8,IE_Pressed,this,(pmf_8f91aab7)0x146d55780);
    local_2d0.KeyName = (pUVar16->CategorySlot3).KeyName;
    local_2d0.KeyDetails.Object = (pUVar16->CategorySlot3).KeyDetails.Object;
    local_2d0.KeyDetails.SharedReferenceCount.ReferenceController =
         (pUVar16->CategorySlot3).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_2d0.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2d0.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2d0.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    UInputComponent::BindKey<UGameplayDebuggerLocalController>
              (param_1,&local_2d0,IE_Pressed,this,(pmf_8f91aab7)0x146d557a0);
    local_2b8.KeyName = (pUVar16->CategorySlot4).KeyName;
    local_2b8.KeyDetails.Object = (pUVar16->CategorySlot4).KeyDetails.Object;
    local_2b8.KeyDetails.SharedReferenceCount.ReferenceController =
         (pUVar16->CategorySlot4).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_2b8.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2b8.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2b8.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    UInputComponent::BindKey<UGameplayDebuggerLocalController>
              (param_1,&local_2b8,IE_Pressed,this,(pmf_8f91aab7)0x146d557c0);
    local_4c8 = (FName)&pUVar16->CategorySlot5;
    local_2a0.KeyName = ((FKey *)local_4c8)->KeyName;
    local_2a0.KeyDetails.Object = (pUVar16->CategorySlot5).KeyDetails.Object;
    local_2a0.KeyDetails.SharedReferenceCount.ReferenceController =
         (pUVar16->CategorySlot5).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_2a0.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2a0.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2a0.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    UInputComponent::BindKey<UGameplayDebuggerLocalController>
              (param_1,&local_2a0,IE_Pressed,this,(pmf_8f91aab7)0x146d557e0);
    local_538 = (FName)&pUVar16->CategorySlot6;
    local_378.KeyName = ((FKey *)local_538)->KeyName;
    local_378.KeyDetails.Object = (pUVar16->CategorySlot6).KeyDetails.Object;
    local_378.KeyDetails.SharedReferenceCount.ReferenceController =
         (pUVar16->CategorySlot6).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_378.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_378.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_378.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    UInputComponent::BindKey<UGameplayDebuggerLocalController>
              (param_1,&local_378,IE_Pressed,this,(pmf_8f91aab7)0x146d55800);
    local_288.KeyName = (pUVar16->CategorySlot7).KeyName;
    local_288.KeyDetails.Object = (pUVar16->CategorySlot7).KeyDetails.Object;
    local_288.KeyDetails.SharedReferenceCount.ReferenceController =
         (pUVar16->CategorySlot7).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_288.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_288.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_288.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    UInputComponent::BindKey<UGameplayDebuggerLocalController>
              (param_1,&local_288,IE_Pressed,this,(pmf_8f91aab7)0x146d55820);
    local_3f0.KeyName = (pUVar16->CategorySlot8).KeyName;
    local_3f0.KeyDetails.Object = (pUVar16->CategorySlot8).KeyDetails.Object;
    local_3f0.KeyDetails.SharedReferenceCount.ReferenceController =
         (pUVar16->CategorySlot8).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_3f0.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3f0.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3f0.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    UInputComponent::BindKey<UGameplayDebuggerLocalController>
              (param_1,&local_3f0,IE_Pressed,this,(pmf_8f91aab7)0x146d55840);
    local_3c0.KeyName = (pUVar16->CategorySlot9).KeyName;
    local_3c0.KeyDetails.Object = (pUVar16->CategorySlot9).KeyDetails.Object;
    local_3c0.KeyDetails.SharedReferenceCount.ReferenceController =
         (pUVar16->CategorySlot9).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_3c0.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3c0.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3c0.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    UInputComponent::BindKey<UGameplayDebuggerLocalController>
              (param_1,&local_3c0,IE_Pressed,this,(pmf_8f91aab7)0x146d55860);
    local_3a8.KeyName = (pUVar16->CategoryRowPrevKey).KeyName;
    local_3a8.KeyDetails.Object = (pUVar16->CategoryRowPrevKey).KeyDetails.Object;
    local_3a8.KeyDetails.SharedReferenceCount.ReferenceController =
         (pUVar16->CategoryRowPrevKey).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_3a8.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3a8.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3a8.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    UInputComponent::BindKey<UGameplayDebuggerLocalController>
              (param_1,&local_3a8,IE_Pressed,this,(pmf_8f91aab7)0x146d558f0);
    local_390.KeyName = (pUVar16->CategoryRowNextKey).KeyName;
    local_390.KeyDetails.Object = (pUVar16->CategoryRowNextKey).KeyDetails.Object;
    local_390.KeyDetails.SharedReferenceCount.ReferenceController =
         (pUVar16->CategoryRowNextKey).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_390.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_390.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_390.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    UInputComponent::BindKey<UGameplayDebuggerLocalController>
              (param_1,&local_390,IE_Pressed,this,(pmf_8f91aab7)0x146d558a0);
    FVar18 = FKey::GetFName(&pUVar16->CategorySlot0);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_138,
               (FName *)(local_438 + 4),(bool *)FVar18);
    FVar18 = FKey::GetFName(&pUVar16->CategorySlot1);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_138,
               (FName *)local_430,(bool *)FVar18);
    FVar18 = FKey::GetFName(&pUVar16->CategorySlot2);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_138,
               (FName *)(local_430 + 4),(bool *)FVar18);
    FVar18 = FKey::GetFName(&pUVar16->CategorySlot3);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_138,
               (FName *)local_428,(bool *)FVar18);
    FVar18 = FKey::GetFName(&pUVar16->CategorySlot4);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_138,
               (FName *)(local_428 + 4),(bool *)FVar18);
    FVar18 = FKey::GetFName((FKey *)local_4c8);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_138,
               (FName *)(local_410 + 4),(bool *)FVar18);
    FVar18 = FKey::GetFName((FKey *)local_538);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_138,
               (FName *)local_420,(bool *)FVar18);
    FVar18 = FKey::GetFName(&pUVar16->CategorySlot7);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_138,
               (FName *)(local_420 + 4),(bool *)FVar18);
    FVar18 = FKey::GetFName(&pUVar16->CategorySlot8);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_138,
               (FName *)local_418,(bool *)FVar18);
    FVar18 = FKey::GetFName(&pUVar16->CategorySlot9);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_138,
               (FName *)(local_418 + 4),(bool *)FVar18);
    FVar18 = FKey::GetFName(&pUVar16->CategoryRowPrevKey);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_138,
               (FName *)local_410,(bool *)FVar18);
    FVar18 = FKey::GetFName(&pUVar16->CategoryRowNextKey);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_138,&local_540,
               (bool *)FVar18);
    local_578 = 0;
    if (0 < this->NumCategories) {
      local_558 = 0;
      FVar29.Value = local_540.ComparisonIndex.Value;
      do {
        pAVar4 = (this->CachedReplicator).field0_0x0.DebugPtr;
        uVar24 = 0;
        if ((int)local_578 < (pAVar4->Categories).ArrayNum) {
          uVar24 = ~local_578 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar5 = (pAVar4->Categories).AllocatorInstance.Data;
        lVar28 = *(longlong *)(pFVar5 + local_558);
        local_530 = *(TReferenceControllerBase<1> **)(pFVar5 + local_558 + 8);
        if (local_530 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_530->SharedReferenceCount = (atomic<int>)((int)local_530->SharedReferenceCount + 1);
          UNLOCK();
        }
        lVar27 = (longlong)*(int *)(lVar28 + 0x20);
        uVar24 = 0;
        if (0 < lVar27) {
          local_560 = 0;
          do {
            uVar14 = 0;
            if ((int)uVar24 < *(int *)(lVar28 + 0x20)) {
              uVar14 = ~uVar24 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar30 = (FName *)(*(longlong *)(lVar28 + 0x18) + local_560);
            uVar14 = pFVar30[1].ComparisonIndex.Value;
            if ((uVar14 & 0x30) != 0) {
              FVar18 = *pFVar30;
              uVar25 = (((uVar14 >> 3 & 1) * 2 | uVar14 >> 2 & 1) * 2 | uVar14 >> 1 & 1) * 2 |
                       uVar14 & 1;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              local_498.Chord.Key.KeyDetails.Object = (FKeyDetails *)0x0;
              local_498.Chord.Key.KeyDetails.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              uVar14 = (FVar29.Value ^ uVar25) & 1 ^ FVar29.Value;
              local_498.KeyDelegate.FuncDelegate.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              local_498.KeyDelegate.FuncDelegateWithKey.Object =
                   (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)0x0;
              local_498.KeyDelegate.FuncDelegateWithKey.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              local_498.KeyDelegate.FuncDynDelegate.Object =
                   (FInputActionHandlerDynamicSignature *)0x0;
              uVar14 = (uVar14 ^ uVar25) & 2 ^ uVar14;
              uVar14 = (uVar14 ^ uVar25) & 4 ^ uVar14;
              pTVar26 = (TReferenceControllerBase<1> *)0x0;
              local_498.KeyDelegate.FuncDelegate.Object =
                   (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
              FVar29.Value = (uVar14 ^ uVar25) & 8 ^ uVar14;
              local_498.KeyDelegate.FuncDynDelegate.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              local_498.KeyDelegate.BoundDelegateType = Unbound;
              local_498._padding_ = local_498._padding_ & 0xfdU | 1;
              local_498.Chord._24_4_ =
                   (local_498.Chord._24_4_ ^ FVar29.Value) & 1 ^ local_498.Chord._24_4_;
              local_498.KeyEvent.Value = ~(byte)(pFVar30[1].ComparisonIndex.Value >> 4) & 1;
              local_498.Chord._24_4_ =
                   (local_498.Chord._24_4_ ^ FVar29.Value) & 2 ^ local_498.Chord._24_4_;
              local_498.Chord._24_4_ =
                   (local_498.Chord._24_4_ ^ FVar29.Value) & 4 ^ local_498.Chord._24_4_;
              local_498.Chord._24_4_ =
                   (local_498.Chord._24_4_ ^ FVar29.Value) & 8 ^ local_498.Chord._24_4_;
              local_498.Chord.Key.KeyName = FVar18;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              FInputActionUnifiedDelegate::Unbind(&local_498.KeyDelegate);
              local_498.KeyDelegate.BoundDelegateType = Delegate;
              pTVar19 = ::operator_new(0x28);
              if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
                pTVar32 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&DAT_00000010;
              }
              else {
                pTVar19->SharedReferenceCount = (atomic<int>)0x1;
                pTVar32 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar19 + 1);
                pTVar19->WeakReferenceCount = (atomic<int>)0x1;
                pTVar19->_padding_ =
                     (longlong)
                     &
                     ___7__TIntrusiveReferenceController_V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
                ;
                pTVar19[2]._padding_ = 0;
                pTVar19[1]._padding_ = 0;
                pTVar19[1].SharedReferenceCount = (atomic<int>)0x0;
                pTVar19[1].WeakReferenceCount = (atomic<int>)0x0;
                if ((pTVar32 == (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InObject != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x246,L""), bVar13)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                LOCK();
                pTVar19->SharedReferenceCount =
                     (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
                UNLOCK();
                pTVar26 = pTVar19;
              }
              local_4c0 = 0;
              local_4b8.ReferenceController = pTVar26;
              local_498.KeyDelegate.FuncDelegate.Object = pTVar32;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&local_498.KeyDelegate.FuncDelegate.SharedReferenceCount,&local_4b8);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_4b8.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar26);
              if ((local_498.KeyDelegate.FuncDelegate.Object ==
                   (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x44d,L""), bVar13)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pTVar32 = local_498.KeyDelegate.FuncDelegate.Object;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         local_498.KeyDelegate.FuncDelegate.Object,(FWriteAccessScope *)&local_270);
              local_258 = (atomic<int> *)&pTVar32->field_0x8;
              puVar20 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_258);
              if (puVar20 != (undefined8 *)0x0) {
                *puVar20 = &
                           ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__HH__6B_
                ;
                *(uint *)(puVar20 + 1) = local_578;
                *(uint *)((longlong)puVar20 + 0xc) = uVar24;
                uVar21 = FDelegateHandle::GenerateNewID();
                puVar20[2] = uVar21;
                *puVar20 = &
                           ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameplayDebuggerLocalController____A6AXXZUFDefaultDelegateUserPolicy__HH__6B_
                ;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                puVar20[3] = 0;
                local_408 = this;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar20 + 3),(FObjectPtr)&local_408);
                puVar20[4] = OnCategoryBindingEvent;
              }
              if (local_270.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_270.Accessor,&local_270);
              }
              pTVar23 = &param_1->KeyBindings;
              pFVar6 = (FInputKeyBinding *)(pTVar23->AllocatorInstance).Data;
              if (((pFVar6 <= &local_498) && (&local_498 < pFVar6 + (param_1->KeyBindings).ArrayMax)
                  ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar13)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              iVar15 = (param_1->KeyBindings).ArrayNum;
              piVar1 = &(param_1->KeyBindings).ArrayMax;
              if (iVar15 == *piVar1) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x860,&pTVar23->AllocatorInstance,piVar1);
              }
              (param_1->KeyBindings).ArrayNum = iVar15 + 1;
              FInputKeyBinding::FInputKeyBinding
                        ((FInputKeyBinding *)
                         ((pTVar23->AllocatorInstance).Data + (longlong)iVar15 * 0x60),&local_498);
              TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                        ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_138,
                         &local_538,(bool *)pFVar30);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_498.KeyDelegate.FuncDynDelegate.SharedReferenceCount.
                         ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_498.KeyDelegate.FuncDelegateWithKey.SharedReferenceCount.
                         ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_498.KeyDelegate.FuncDelegate.SharedReferenceCount.ReferenceController
                        );
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_498.Chord.Key.KeyDetails.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
            }
            local_560 = local_560 + 0x30;
            uVar24 = uVar24 + 1;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_530);
        local_578 = local_578 + 1;
        local_558 = local_558 + 0x10;
      } while ((int)local_578 < this->NumCategories);
    }
    if (this->bSimulateMode == 0) {
      iVar15 = (((this->CachedReplicator).field0_0x0.DebugPtr)->Extensions).ArrayNum;
    }
    else {
      iVar15 = 0;
    }
    local_550 = (longlong)iVar15;
    local_578 = 0;
    if (0 < iVar15) {
      local_560 = 0;
      FVar29.Value = local_538.ComparisonIndex.Value;
      do {
        pAVar4 = (this->CachedReplicator).field0_0x0.DebugPtr;
        uVar24 = 0;
        if ((int)local_578 < (pAVar4->Extensions).ArrayNum) {
          uVar24 = ~local_578 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar5 = (pAVar4->Extensions).AllocatorInstance.Data;
        pTVar26 = *(TReferenceControllerBase<1> **)(pFVar5 + local_560);
        local_3f8 = *(TReferenceControllerBase<1> **)(pFVar5 + local_560 + 8);
        if (local_3f8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_3f8->SharedReferenceCount = (atomic<int>)((int)local_3f8->SharedReferenceCount + 1);
          UNLOCK();
        }
        lVar28 = (longlong)(int)pTVar26[2]._padding_;
        uVar24 = 0;
        local_530 = pTVar26;
        if (0 < lVar28) {
          local_558 = 0;
          do {
            uVar14 = 0;
            if ((int)uVar24 < (int)pTVar26[2]._padding_) {
              uVar14 = ~uVar24 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pbVar31 = (bool *)(*(longlong *)&pTVar26[1].SharedReferenceCount + local_558);
            uVar14 = *(uint *)(pbVar31 + 8);
            if ((uVar14 & 0x30) != 0) {
              uVar7 = *(undefined8 *)pbVar31;
              uVar25 = (((uVar14 >> 3 & 1) * 2 | uVar14 >> 2 & 1) * 2 | uVar14 >> 1 & 1) * 2 |
                       uVar14 & 1;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              local_518 = 0;
              pTStack_510 = (TReferenceControllerBase<1> *)0x0;
              uVar14 = (FVar29.Value ^ uVar25) & 1 ^ FVar29.Value;
              local_500.FuncDelegate.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              local_500.FuncDelegateWithKey.Object =
                   (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)0x0;
              local_500.FuncDelegateWithKey.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              local_500.FuncDynDelegate.Object = (FInputActionHandlerDynamicSignature *)0x0;
              uVar14 = (uVar14 ^ uVar25) & 2 ^ uVar14;
              uVar14 = (uVar14 ^ uVar25) & 4 ^ uVar14;
              pTVar26 = (TReferenceControllerBase<1> *)0x0;
              local_500.FuncDelegate.Object =
                   (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
              FVar29.Value = (uVar14 ^ uVar25) & 8 ^ uVar14;
              local_500.FuncDynDelegate.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              local_500.BoundDelegateType = Unbound;
              local_528 = (FScriptContainerElement)((byte)local_528 & 0xfd | 1);
              local_508 = (local_508 ^ FVar29.Value) & 1 ^ local_508;
              local_527 = (FScriptContainerElement)(~(byte)(*(uint *)(pbVar31 + 8) >> 4) & 1);
              local_508 = (local_508 ^ FVar29.Value) & 2 ^ local_508;
              local_508 = (local_508 ^ FVar29.Value) & 4 ^ local_508;
              local_508 = (local_508 ^ FVar29.Value) & 8 ^ local_508;
              local_520 = uVar7;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              FInputActionUnifiedDelegate::Unbind(&local_500);
              local_500.BoundDelegateType = Delegate;
              pTVar19 = ::operator_new(0x28);
              if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
                pTVar32 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&DAT_00000010;
              }
              else {
                pTVar19->SharedReferenceCount = (atomic<int>)0x1;
                pTVar32 = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar19 + 1);
                pTVar19->WeakReferenceCount = (atomic<int>)0x1;
                pTVar19->_padding_ =
                     (longlong)
                     &
                     ___7__TIntrusiveReferenceController_V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
                ;
                pTVar19[2]._padding_ = 0;
                pTVar19[1]._padding_ = 0;
                pTVar19[1].SharedReferenceCount = (atomic<int>)0x0;
                pTVar19[1].WeakReferenceCount = (atomic<int>)0x0;
                if ((pTVar32 == (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InObject != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x246,L""), bVar13)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                LOCK();
                pTVar19->SharedReferenceCount =
                     (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
                UNLOCK();
                pTVar26 = pTVar19;
              }
              local_4b0 = 0;
              local_500.FuncDelegate.Object = pTVar32;
              local_4a8[0].ReferenceController = pTVar26;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&local_500.FuncDelegate.SharedReferenceCount,local_4a8);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_4a8[0].ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar26);
              if ((local_500.FuncDelegate.Object ==
                   (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x44d,L""), bVar13)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pTVar32 = local_500.FuncDelegate.Object;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         local_500.FuncDelegate.Object,(FWriteAccessScope *)&local_250);
              local_238 = (atomic<int> *)&pTVar32->field_0x8;
              puVar20 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_238);
              if (puVar20 != (undefined8 *)0x0) {
                *puVar20 = &
                           ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__HH__6B_
                ;
                *(uint *)(puVar20 + 1) = local_578;
                *(uint *)((longlong)puVar20 + 0xc) = uVar24;
                uVar21 = FDelegateHandle::GenerateNewID();
                puVar20[2] = uVar21;
                *puVar20 = &
                           ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameplayDebuggerLocalController____A6AXXZUFDefaultDelegateUserPolicy__HH__6B_
                ;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                puVar20[3] = 0;
                local_400 = this;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar20 + 3),(FObjectPtr)&local_400);
                puVar20[4] = OnExtensionBindingEvent;
              }
              if (local_250.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_250.Accessor,&local_250);
              }
              pTVar23 = &param_1->KeyBindings;
              pFVar5 = (pTVar23->AllocatorInstance).Data;
              if (((pFVar5 <= &local_528) &&
                  (&local_528 < pFVar5 + (longlong)(param_1->KeyBindings).ArrayMax * 0x60)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              iVar15 = (param_1->KeyBindings).ArrayNum;
              piVar1 = &(param_1->KeyBindings).ArrayMax;
              if (iVar15 == *piVar1) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x860,&pTVar23->AllocatorInstance,piVar1);
              }
              (param_1->KeyBindings).ArrayNum = iVar15 + 1;
              pFVar5 = (pTVar23->AllocatorInstance).Data;
              lVar27 = (longlong)iVar15 * 0x60;
              pFVar5[lVar27] = local_528;
              pFVar5[lVar27 + 1] = local_527;
              *(undefined8 *)(pFVar5 + lVar27 + 8) = local_520;
              *(undefined8 *)(pFVar5 + lVar27 + 0x10) = local_518;
              *(TReferenceControllerBase<1> **)(pFVar5 + lVar27 + 0x18) = pTStack_510;
              if (pTStack_510 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTStack_510->SharedReferenceCount =
                     (atomic<int>)((int)pTStack_510->SharedReferenceCount + 1);
                UNLOCK();
              }
              uVar14 = (local_508 ^ *(uint *)(pFVar5 + lVar27 + 0x20)) & 1 ^
                       *(uint *)(pFVar5 + lVar27 + 0x20);
              *(uint *)(pFVar5 + lVar27 + 0x20) = uVar14;
              uVar14 = (local_508 ^ uVar14) & 2 ^ uVar14;
              *(uint *)(pFVar5 + lVar27 + 0x20) = uVar14;
              uVar14 = (local_508 ^ uVar14) & 4 ^ uVar14;
              *(uint *)(pFVar5 + lVar27 + 0x20) = uVar14;
              *(uint *)(pFVar5 + lVar27 + 0x20) = (local_508 ^ uVar14) & 8 ^ uVar14;
              *(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> **)(pFVar5 + lVar27 + 0x28)
                   = local_500.FuncDelegate.Object;
              *(TReferenceControllerBase<1> **)(pFVar5 + lVar27 + 0x30) =
                   local_500.FuncDelegate.SharedReferenceCount.ReferenceController;
              if (local_500.FuncDelegate.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_500.FuncDelegate.SharedReferenceCount.ReferenceController)->
                SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_500.FuncDelegate.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              *(TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> **)(pFVar5 + lVar27 + 0x38)
                   = local_500.FuncDelegateWithKey.Object;
              *(TReferenceControllerBase<1> **)(pFVar5 + lVar27 + 0x40) =
                   local_500.FuncDelegateWithKey.SharedReferenceCount.ReferenceController;
              if (local_500.FuncDelegateWithKey.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_500.FuncDelegateWithKey.SharedReferenceCount.ReferenceController)->
                SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_500.FuncDelegateWithKey.SharedReferenceCount.ReferenceController)
                           ->SharedReferenceCount + 1);
                UNLOCK();
              }
              *(FInputActionHandlerDynamicSignature **)(pFVar5 + lVar27 + 0x48) =
                   local_500.FuncDynDelegate.Object;
              *(TReferenceControllerBase<1> **)(pFVar5 + lVar27 + 0x50) =
                   local_500.FuncDynDelegate.SharedReferenceCount.ReferenceController;
              if (local_500.FuncDynDelegate.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_500.FuncDynDelegate.SharedReferenceCount.ReferenceController)->
                SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_500.FuncDynDelegate.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              pFVar5[lVar27 + 0x58] = (FScriptContainerElement)local_500.BoundDelegateType;
              TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                        ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_138,
                         &local_4c8,pbVar31);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_500.FuncDynDelegate.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_500.FuncDelegateWithKey.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_500.FuncDelegate.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTStack_510);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              pTVar26 = local_530;
            }
            local_558 = local_558 + 0x30;
            uVar24 = uVar24 + 1;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3f8);
        local_578 = local_578 + 1;
        local_560 = local_560 + 0x10;
        local_550 = local_550 + -1;
      } while (local_550 != 0);
    }
  }
  pAVar4 = (this->CachedReplicator).field0_0x0.DebugPtr;
  if ((pAVar4 == (AGameplayDebuggerCategoryReplicator *)0x0) ||
     (pAVar8 = (pAVar4->OwnerPC).field0_0x0.DebugPtr, pAVar8 == (APlayerController *)0x0))
  goto LAB_146d44c77;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pAVar8);
  }
  pAVar8 = (((this->CachedReplicator).field0_0x0.DebugPtr)->OwnerPC).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar8 != (APlayerController *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pAVar8);
  }
  if ((pAVar8->PlayerInput).field0_0x0 == (UPlayerInput *)0x0) goto LAB_146d44c77;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Difference
            (&this->UsedBindings,&local_98,
             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_138);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Difference
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_138,&local_e8,
             &this->UsedBindings);
  pAVar8 = (((this->CachedReplicator).field0_0x0.DebugPtr)->OwnerPC).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar8 != (APlayerController *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pAVar8);
  }
  TVar9.field0_0x0 = (pAVar8->PlayerInput).field0_0x0;
  uVar24 = 0;
  if (0 < *(int *)((longlong)TVar9.field0_0x0 + 0x1a8)) {
    lVar28 = 0;
    do {
      uVar14 = 0;
      if ((int)uVar24 < *(int *)((longlong)TVar9.field0_0x0 + 0x1a8)) {
        uVar14 = ~uVar24 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      this_02 = (FKey *)(*(longlong *)((longlong)TVar9.field0_0x0 + 0x1a0) + lVar28);
      FVar18 = FKey::GetFName(this_02);
      lVar27 = *(longlong *)FVar18;
      uVar14 = ::GetTypeHash((FNameEntryId)(uint)lVar27);
      if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
        FVar22 = (ForElementType<FSetElementId>)&local_98.Hash;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar22 = local_98.Hash.SecondaryData;
        }
        for (iVar15 = *(int *)((longlong)FVar22 +
                              (ulonglong)
                              (local_98.HashSize - 1U & (int)((ulonglong)lVar27 >> 0x20) + uVar14) *
                              4); iVar15 != -1;
            iVar15 = *(int *)(local_98.Elements._0_8_ + 8 + (longlong)iVar15 * 0x10)) {
          if (*(longlong *)(local_98.Elements._0_8_ + (longlong)iVar15 * 0x10) == lVar27)
          goto LAB_146d44a7a;
        }
      }
      iVar15 = -1;
LAB_146d44a7a:
      FVar18 = FKey::GetFName(this_02);
      lVar27 = *(longlong *)FVar18;
      uVar14 = ::GetTypeHash((FNameEntryId)(uint)lVar27);
      if (local_e8.Elements._8_4_ == local_e8.Elements._52_4_) {
        bVar13 = false;
      }
      else {
        FVar22 = (ForElementType<FSetElementId>)&local_e8.Hash;
        if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar22 = local_e8.Hash.SecondaryData;
        }
        for (iVar3 = *(int *)((longlong)FVar22 +
                             (ulonglong)
                             (local_e8.HashSize - 1U & (int)((ulonglong)lVar27 >> 0x20) + uVar14) *
                             4); iVar3 != -1;
            iVar3 = *(int *)(local_e8.Elements._0_8_ + 8 + (longlong)iVar3 * 0x10)) {
          if (*(longlong *)(local_e8.Elements._0_8_ + (longlong)iVar3 * 0x10) == lVar27) {
            bVar13 = iVar3 != -1;
            if (bVar13) goto LAB_146d44b01;
            goto LAB_146d44afc;
          }
        }
        bVar13 = false;
      }
LAB_146d44afc:
      if (iVar15 != -1) {
LAB_146d44b01:
        pbVar2 = (byte *)((longlong)&this_02[1].KeyDetails.SharedReferenceCount.ReferenceController
                         + 1);
        *pbVar2 = *pbVar2 & 0xfe;
        pbVar2 = (byte *)((longlong)&this_02[1].KeyDetails.SharedReferenceCount.ReferenceController
                         + 1);
        *pbVar2 = *pbVar2 | bVar13;
      }
      uVar24 = uVar24 + 1;
      lVar28 = lVar28 + 0x30;
    } while ((int)uVar24 < *(int *)((longlong)TVar9.field0_0x0 + 0x1a8));
  }
  uVar24 = local_f0;
  this_03 = &this->UsedBindings;
  if (this_03 != (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_138) {
    lVar28 = (longlong)(int)local_f0;
    uVar14 = local_f0;
    if (local_f0 < 2) {
      if ((this->UsedBindings).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar14 = 0;
        goto LAB_146d44b5f;
      }
    }
    else {
LAB_146d44b5f:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->UsedBindings).Hash.SecondaryData,0,uVar14,4);
    }
    FVar22 = (ForElementType<FSetElementId>)local_100;
    if (local_f8 != (ForElementType<FSetElementId>)0x0) {
      FVar22 = local_f8;
    }
    FVar10 = (this->UsedBindings).Hash.SecondaryData;
    _Dst = (ForElementType<FSetElementId>)&(this->UsedBindings).Hash;
    if (FVar10 != (ForElementType<FSetElementId>)0x0) {
      _Dst = FVar10;
    }
    if (uVar24 != 0) {
      memcpy((void *)_Dst,(void *)FVar22,lVar28 << 2);
    }
    (this->UsedBindings).HashSize = uVar24;
    uVar12 = local_138._8_4_;
    lVar28 = (longlong)(int)local_138._8_4_;
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this_03->Elements,local_138._8_4_);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar12,(ForAnyElementType *)this_03,
               (int *)&(this->UsedBindings).Elements.field_0x8,
               (int *)&(this->UsedBindings).Elements.field_0xc);
    this_00 = &(this->UsedBindings).Elements.field_0x10;
    *(undefined4 *)&(this->UsedBindings).Elements.field_0x30 = local_108;
    *(undefined4 *)&(this->UsedBindings).Elements.field_0x34 = local_104;
    if (this_00 != local_138 + 0x10) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                 (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10));
    }
    if (uVar12 != 0) {
      memcpy(*(void **)&this_03->Elements,(void *)local_138._0_8_,lVar28 << 4);
    }
  }
  local_e8.HashSize = 0;
  if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8.Elements);
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
LAB_146d44c77:
  local_f0 = 0;
  if (local_f8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f8);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_138);
  return;
}

// Cleanup @ 146d44f40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameplayDebuggerLocalController::Cleanup(UGameplayDebuggerLocalController *this)

{
  if ((this->bIsLocallyEnabled != 0) && (!GAreScreenMessagesEnabled)) {
    GAreScreenMessagesEnabled = this->bPrevScreenMessagesEnabled;
  }
  this->bNeedsCleanup = 0;
  return;
}

// DrawCategoryHeader @ 146d496a0

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
UGameplayDebuggerLocalController::DrawCategoryHeader
          (UGameplayDebuggerLocalController *this,int param_1,
          TSharedRef<FGameplayDebuggerCategory,1> *param_2,FGameplayDebuggerCanvasContext *param_3)

{
  undefined1 *puVar1;
  short sVar2;
  AGameplayDebuggerCategoryReplicator *pAVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  size_t sVar13;
  UFont *this_00;
  wchar_t *_Str;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  float fVar21;
  bool local_b8;
  FString local_a0;
  ulonglong local_90;
  TReferenceControllerBase<1> *local_88;
  longlong local_80;
  FName local_78;
  FString local_70;
  FString local_60 [2];
  
  uVar19 = (ulonglong)param_1;
  local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.Data.ArrayNum = 0;
  local_a0.Data.ArrayMax = 0;
  if ((((-1 < param_1) && (param_1 < (this->DataPackMap).ArrayNum)) &&
      (((param_2->Object->bHasAuthority | param_2->Object->bShowDataPackReplication) & 1) == 0)) &&
     (0 < (param_2->Object->ReplicatedDataPacks).ArrayNum)) {
    sVar2 = (((this->CachedReplicator).field0_0x0.DebugPtr)->DebugActor).SyncCounter;
    ::FString::operator=(&local_a0,L"{white} ver[");
    uVar15 = 0;
    bVar9 = false;
    local_b8 = false;
    bVar7 = false;
    lVar20 = uVar19 << 4;
    uVar18 = uVar15;
    local_80 = lVar20;
    while( true ) {
      uVar14 = (uint)uVar15;
      uVar11 = 0;
      if ((int)uVar19 < (this->DataPackMap).ArrayNum) {
        uVar11 = (uint)~param_1 >> 0x1f;
      }
      local_90 = uVar18;
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(int *)((this->DataPackMap).AllocatorInstance.Data + lVar20 + 8) <= (int)uVar14) break;
      pAVar3 = (this->CachedReplicator).field0_0x0.DebugPtr;
      uVar11 = 0;
      if ((int)uVar19 < (this->DataPackMap).ArrayNum) {
        uVar11 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->DataPackMap).AllocatorInstance.Data;
      uVar11 = 0;
      if ((int)uVar14 < *(int *)(pFVar4 + lVar20 + 8)) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar11 = *(uint *)(*(longlong *)(pFVar4 + lVar20) + uVar18);
      uVar12 = 0;
      if ((int)uVar11 < (pAVar3->Categories).ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar18 = 0;
      pFVar4 = (pAVar3->Categories).AllocatorInstance.Data;
      lVar5 = *(longlong *)(pFVar4 + (longlong)(int)uVar11 * 0x10);
      local_88 = *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)(int)uVar11 * 0x10 + 8);
      if (local_88 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_88->SharedReferenceCount = (atomic<int>)((int)local_88->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar17 = *(int *)(lVar5 + 0x78);
      uVar15 = uVar18;
      if (0 < iVar17) {
        do {
          iVar16 = (int)uVar18;
          if ((iVar16 < 0) || (iVar17 <= iVar16)) {
            sVar10 = 0;
          }
          else {
            if ((iVar16 < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            sVar10 = *(short *)(*(longlong *)(lVar5 + 0x70) + uVar15 + 0x12);
          }
          if (bVar7) {
            ::FString::AppendChar(&local_a0,L';');
          }
          if ((sVar10 != sVar2) != local_b8) {
            _Str = L"{white}";
            if (sVar10 != sVar2) {
              _Str = L"{red}";
            }
            sVar13 = wcslen(_Str);
            ::FString::AppendChars(&local_a0,_Str,(int)sVar13);
            local_b8 = sVar10 != sVar2;
          }
          ::FString::PrintfImpl(&local_70,L"%d");
          iVar17 = local_70.Data.ArrayNum + -1;
          if (local_70.Data.ArrayNum == 0) {
            iVar17 = 0;
          }
          ::FString::AppendChars(&local_a0,(wchar_t *)local_70.Data.AllocatorInstance.Data,iVar17);
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          iVar17 = *(int *)(lVar5 + 0x78);
          uVar18 = (ulonglong)(iVar16 + 1U);
          bVar7 = true;
          uVar15 = uVar15 + 0x60;
        } while ((int)(iVar16 + 1U) < iVar17);
        uVar19 = (ulonglong)(uint)param_1;
        lVar20 = local_80;
        bVar9 = local_b8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88);
      uVar15 = (ulonglong)(uVar14 + 1);
      uVar18 = local_90 + 4;
    }
    if (bVar9 != false) {
      ::FString::AppendChars(&local_a0,L"{white}",7);
    }
    ::FString::AppendChar(&local_a0,L']');
  }
  this_00 = (UFont *)FWeakObjectPtr::Get(&(param_3->Font).WeakPtr);
  if (this_00 == (UFont *)0x0) {
    fVar21 = 0.0;
  }
  else {
    fVar21 = UFont::GetMaxCharHeight(this_00);
  }
  param_3->CursorX = param_3->DefaultX;
  param_3->CursorY = fVar21 + param_3->CursorY;
  local_78 = param_2->Object->CategoryName;
  ::FName::ToString(&local_78,local_60);
  FGameplayDebuggerCanvasContext::PrintfImpl
            (param_3,&FColor::Green,__real_3f800000,L"[CATEGORY: %s]%s");
  if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// DrawHeader @ 146d49bd0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UGameplayDebuggerLocalController::DrawHeader
          (UGameplayDebuggerLocalController *this,FGameplayDebuggerCanvasContext *param_1)

{
  FGameplayDebuggerDebugActor *this_00;
  int iVar1;
  AGameplayDebuggerCategoryReplicator *pAVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  UFont *this_01;
  UObject *pUVar17;
  UCanvas *pUVar18;
  UClass *this_02;
  UGameplayDebuggerConfig *pUVar19;
  UEnum *this_03;
  wchar_t *pwVar20;
  FString *pFVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  ForAnyElementType FVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  float fVar29;
  float fVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int local_res8;
  int local_res18;
  float local_res20 [2];
  float local_578;
  float local_574;
  float local_570;
  uint local_56c;
  float local_568;
  float local_564;
  float local_560;
  float local_55c;
  FString local_558;
  longlong local_548;
  longlong local_540;
  FString local_538;
  FString local_528;
  FString local_518;
  FName local_508;
  FName local_500;
  longlong local_4f8;
  TReferenceControllerBase<1> *local_4f0;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  TVector2<double>_u_0 local_478;
  TVector2<double>_u_0 local_468;
  TVector2<double>_u_0 local_458;
  TVector2<double>_u_0 local_448;
  FLinearColor_u_0 local_438;
  TVector2<double>_u_0 local_428;
  FLinearColor_u_0 local_418;
  TVector2<double>_u_0 local_408;
  FLinearColor_u_0 local_3f8;
  TVector2<double>_u_0 local_3e8;
  FLinearColor_u_0 local_3d8;
  TVector2<double>_u_0 local_3c8;
  FString local_3b8;
  FString local_3a8;
  FCanvasTileItem local_398;
  FCanvasTileItem local_2e8;
  FCanvasTileItem local_238;
  FCanvasTileItem local_188;
  
  uVar28 = 0;
  iVar1 = (this->NumCategorySlots + 9) / 10;
  this_01 = (UFont *)FWeakObjectPtr::Get(&(param_1->Font).WeakPtr);
  if (this_01 == (UFont *)0x0) {
    fVar29 = 0.0;
  }
  else {
    fVar29 = UFont::GetMaxCharHeight(this_01);
  }
  if (this->bSimulateMode == 0) {
    iVar14 = (((this->CachedReplicator).field0_0x0.DebugPtr)->Extensions).ArrayNum;
  }
  else {
    iVar14 = 0;
  }
  pUVar17 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  fVar12 = __real_3f800000;
  fVar35 = __real_3f800000;
  if (*(char *)(*(longlong *)&pUVar17[0x12].field_0x18 + 0xa0) == '\0') {
    fVar35 = *(float *)(*(longlong *)&pUVar17[0x12].field_0x18 + 0xb0);
  }
  pUVar17 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  fVar9 = __real_40a00000;
  fVar35 = fVar12 / fVar35;
  fVar34 = ((float)*(int *)&pUVar17[1].field_0x18 * fVar35 - this->PaddingLeft) - this->PaddingRight
  ;
  fVar33 = 0.0;
  if (this->bSimulateMode != 0) {
    fVar33 = __real_41f00000;
  }
  fVar33 = fVar33 + this->PaddingTop;
  uVar23 = (uint)(0 < iVar14);
  if (iVar1 < 2) {
    local_3d8._0_8_ = ___xmm_3e4ccccd000000000000000000000000;
    local_3d8._8_8_ = _UNK_15146ec78;
    local_448._s_0.X = (double)fVar34 + __real_4024000000000000;
    local_3c8._0_12_ = ZEXT812(0);
    local_3c8._12_4_ = 0;
    local_448._s_0.Y = (double)((float)(int)(iVar1 + 1 + uVar23) * fVar29) + __real_4024000000000000
    ;
    FCanvasTileItem::FCanvasTileItem
              (&local_188,(TVector2<double> *)&local_3c8._s_0,GWhiteTexture,
               (TVector2<double> *)&local_448._s_0,(FLinearColor *)&local_3d8._s_0);
    fVar9 = __real_40a00000;
    fVar32 = this->PaddingLeft - __real_40a00000;
    local_188._padding_._4_4_ = 2;
    pUVar18 = (UCanvas *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    if (pUVar18 != (UCanvas *)0x0) {
      UCanvas::DrawItem(pUVar18,(FCanvasItem *)&local_188,fVar32,fVar33 - fVar9);
    }
    local_188._padding_ = (longlong)&___7FCanvasItem__6B_;
  }
  else {
    local_438._0_8_ = ___xmm_3e4ccccd000000000000000000000000;
    local_438._8_8_ = _UNK_15146ec78;
    dVar8 = (double)(fVar34 + __real_41200000);
    local_428._0_12_ = ZEXT812(0);
    local_428._12_4_ = 0;
    local_478._s_0.Y =
         (double)((float)(int)(this->ActiveRowIdx + 1 + uVar23) * fVar29 + __real_40a00000);
    local_478._s_0.X = dVar8;
    FCanvasTileItem::FCanvasTileItem
              (&local_398,(TVector2<double> *)&local_428._s_0,GWhiteTexture,
               (TVector2<double> *)&local_478._s_0,(FLinearColor *)&local_438._s_0);
    local_418._0_8_ = ___xmm_3e99999a000000003f00000000000000;
    local_418._8_8_ = _UNK_15146ec88;
    local_468._s_0.Y = (double)fVar29;
    local_408._s_0.X = 0.0;
    local_408._s_0.Y = 0.0;
    local_468._s_0.X = dVar8;
    FCanvasTileItem::FCanvasTileItem
              (&local_2e8,(TVector2<double> *)&local_408._s_0,GWhiteTexture,
               (TVector2<double> *)&local_468._s_0,(FLinearColor *)&local_418._s_0);
    local_3f8._0_8_ = ___xmm_3e4ccccd000000000000000000000000;
    local_3f8._8_8_ = _UNK_15146ec78;
    local_3e8._s_0.X = 0.0;
    local_3e8._s_0.Y = 0.0;
    local_458._s_0.Y = (double)((float)((iVar1 - this->ActiveRowIdx) + -1) * fVar29 + fVar9);
    local_458._s_0.X = dVar8;
    FCanvasTileItem::FCanvasTileItem
              (&local_238,(TVector2<double> *)&local_3e8._s_0,GWhiteTexture,
               (TVector2<double> *)&local_458._s_0,(FLinearColor *)&local_3f8._s_0);
    fVar32 = this->PaddingLeft;
    local_398._padding_._4_4_ = 2;
    local_2e8._padding_._4_4_ = 2;
    local_238._padding_._4_4_ = 2;
    pUVar18 = (UCanvas *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    if (pUVar18 != (UCanvas *)0x0) {
      UCanvas::DrawItem(pUVar18,(FCanvasItem *)&local_398,fVar32 - fVar9,fVar33 - fVar9);
    }
    fVar32 = this->PaddingLeft;
    dVar8 = (double)(fVar33 - fVar9);
    dVar31 = dVar8 + local_398.Size.field0_0x0._s_0.Y;
    pUVar18 = (UCanvas *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    if (pUVar18 != (UCanvas *)0x0) {
      UCanvas::DrawItem(pUVar18,(FCanvasItem *)&local_2e8,fVar32 - fVar9,(float)dVar31);
    }
    fVar32 = this->PaddingLeft;
    pUVar18 = (UCanvas *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    if (pUVar18 != (UCanvas *)0x0) {
      UCanvas::DrawItem(pUVar18,(FCanvasItem *)&local_238,fVar32 - fVar9,
                        (float)(dVar8 + local_398.Size.field0_0x0._s_0.Y +
                               local_2e8.Size.field0_0x0._s_0.Y));
    }
    local_238._padding_ = (longlong)&___7FCanvasItem__6B_;
    local_2e8._padding_ = (longlong)&___7FCanvasItem__6B_;
    local_398._padding_ = (longlong)&___7FCanvasItem__6B_;
  }
  param_1->CursorY = fVar33;
  if (this->bSimulateMode == 0) {
    this_02 = UGameplayDebuggerConfig::StaticClass();
    pUVar19 = UClass::GetDefaultObject<UGameplayDebuggerConfig>(this_02);
    FKey::ToString(&pUVar19->ActivationKey,&local_3b8);
    FGameplayDebuggerCanvasContext::PrintfImpl
              (param_1,&FColor::White,fVar12,
               L"Tap {yellow}%s{white} to close or hold to select new Pawn (hold {yellow}[Shift+%s]{white} to select local player). Use %s to toggle categories."
              );
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
  }
  else {
    FGameplayDebuggerCanvasContext::PrintfImpl
              (param_1,&FColor::White,fVar12,
               L"Clear {yellow}DebugAI{white} show flag to close, use %s to toggle categories.");
  }
  pAVar2 = (this->CachedReplicator).field0_0x0.DebugPtr;
  if (pAVar2 != (AGameplayDebuggerCategoryReplicator *)0x0) {
    this_00 = &pAVar2->DebugActor;
    bVar13 = FWeakObjectPtr::IsStale((FWeakObjectPtr *)this_00,true,false);
    if (!bVar13) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    }
  }
  this_03 = StaticEnum<enum_ENetRole>();
  if ((this_03 == (UEnum *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("EnumClass != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                          ,0xca4,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  UEnum::GetNameByValue(this_03,(long64)&local_508);
  ::FName::ToString(&local_508,&local_488);
  local_500 = (((this->CachedReplicator).field0_0x0.DebugPtr)->DebugActor).ActorName;
  ::FName::ToString(&local_500,&local_3a8);
  ::FString::PrintfImpl(&local_498,L"Debug actor: {cyan}%s{white} [%s]");
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  local_res20[0] = 0.0;
  local_568 = 0.0;
  FGameplayDebuggerCanvasContext::MeasureString(param_1,&local_498,local_res20,&local_568);
  pUVar17 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  fVar9 = param_1->CursorX;
  fVar32 = param_1->CursorY;
  fVar10 = param_1->DefaultX;
  fVar11 = param_1->DefaultY;
  fVar30 = ((float)*(int *)&pUVar17[1].field_0x18 * fVar35 - this->PaddingRight) - local_res20[0];
  param_1->CursorX = fVar30;
  param_1->CursorY = fVar33;
  param_1->DefaultX = fVar30;
  param_1->DefaultY = fVar33;
  FGameplayDebuggerCanvasContext::Print(param_1,&FColor::White,fVar12,&local_498);
  param_1->CursorX = fVar9;
  param_1->CursorY = fVar32;
  param_1->DefaultX = fVar10;
  param_1->DefaultY = fVar11;
  ::FString::PrintfImpl(&local_4a8,L"VLog: {cyan}%s");
  local_578 = 0.0;
  local_564 = 0.0;
  FGameplayDebuggerCanvasContext::MeasureString(param_1,&local_4a8,&local_578,&local_564);
  pUVar17 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  fVar9 = param_1->CursorX;
  fVar32 = param_1->CursorY;
  fVar10 = param_1->DefaultX;
  fVar11 = param_1->DefaultY;
  fVar30 = ((float)*(int *)&pUVar17[1].field_0x18 * fVar35 - this->PaddingRight) - local_578;
  param_1->CursorX = fVar30;
  param_1->CursorY = fVar29 + fVar33;
  param_1->DefaultX = fVar30;
  param_1->DefaultY = fVar29 + fVar33;
  FGameplayDebuggerCanvasContext::Print(param_1,&FColor::White,fVar12,&local_4a8);
  param_1->CursorX = fVar9;
  param_1->CursorY = fVar32;
  param_1->DefaultX = fVar10;
  param_1->DefaultY = fVar11;
  AActor::GetWorld((AActor *)(this->CachedReplicator).field0_0x0.DebugPtr);
  ::FString::PrintfImpl(&local_4b8,L"Time: %.2fs");
  local_574 = 0.0;
  local_560 = 0.0;
  FGameplayDebuggerCanvasContext::MeasureString(param_1,&local_4b8,&local_574,&local_560);
  fVar9 = param_1->CursorX;
  fVar32 = param_1->CursorY;
  fVar10 = param_1->DefaultX;
  fVar11 = param_1->DefaultY;
  fVar34 = (fVar34 - local_574) * __real_3f000000;
  param_1->CursorX = fVar34;
  param_1->CursorY = fVar33;
  param_1->DefaultX = fVar34;
  param_1->DefaultY = fVar33;
  FGameplayDebuggerCanvasContext::Print(param_1,&FColor::White,fVar12,&local_4b8);
  param_1->CursorX = fVar9;
  param_1->CursorY = fVar32;
  param_1->DefaultX = fVar10;
  param_1->DefaultY = fVar11;
  if (1 < iVar1) {
    ::FString::PrintfImpl(&local_4e8,L"Prev row: {yellow}%s\n{white}Next row: {yellow}%s");
    local_570 = 0.0;
    local_55c = 0.0;
    FGameplayDebuggerCanvasContext::MeasureString(param_1,&local_4e8,&local_570,&local_55c);
    pUVar17 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    fVar9 = param_1->CursorX;
    fVar34 = param_1->CursorY;
    fVar32 = param_1->DefaultX;
    fVar10 = param_1->DefaultY;
    fVar33 = (float)(byte)((0 < iVar14) + 1) * fVar29 + fVar33;
    fVar35 = ((float)*(int *)&pUVar17[1].field_0x18 * fVar35 - this->PaddingRight) - local_570;
    param_1->CursorX = fVar35;
    param_1->CursorY = fVar33;
    param_1->DefaultX = fVar35;
    param_1->DefaultY = fVar33;
    FGameplayDebuggerCanvasContext::Print(param_1,&FColor::White,fVar12,&local_4e8);
    param_1->CursorX = fVar9;
    param_1->CursorY = fVar34;
    param_1->DefaultX = fVar32;
    param_1->DefaultY = fVar10;
    if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
    }
  }
  if (0 < iVar14) {
    lVar26 = (longlong)iVar14;
    uVar23 = 0;
    local_558.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_558.Data.ArrayNum = 0;
    local_558.Data.ArrayMax = 0;
    uVar27 = uVar28;
    do {
      pAVar2 = (this->CachedReplicator).field0_0x0.DebugPtr;
      uVar16 = 0;
      if ((int)uVar23 < (pAVar2->Extensions).ArrayNum) {
        uVar16 = ~uVar23 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar3 = (pAVar2->Extensions).AllocatorInstance.Data;
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar3 + uVar27 + 8);
      plVar5 = *(longlong **)(pFVar3 + uVar27);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_538);
      ::FString::ReplaceInline(&local_538,L"\n",L"",IgnoreCase);
      iVar22 = local_538.Data.ArrayNum;
      iVar14 = iVar22 + -1;
      if (iVar22 == 0) {
        iVar14 = 0;
      }
      if (iVar14 != 0) {
        iVar14 = local_558.Data.ArrayNum + -1;
        if (local_558.Data.ArrayNum == 0) {
          iVar14 = 0;
        }
        if (iVar14 != 0) {
          iVar14 = FGameplayDebuggerCanvasStrings::SeparatorSpace.Data.ArrayNum + -1;
          if (FGameplayDebuggerCanvasStrings::SeparatorSpace.Data.ArrayNum == 0) {
            iVar14 = 0;
          }
          ::FString::AppendChars
                    (&local_558,
                     (wchar_t *)
                     FGameplayDebuggerCanvasStrings::SeparatorSpace.Data.AllocatorInstance.Data,
                     iVar14);
          iVar22 = local_538.Data.ArrayNum;
        }
        iVar14 = iVar22 + -1;
        if (iVar22 == 0) {
          iVar14 = 0;
        }
        ::FString::AppendChars(&local_558,(wchar_t *)local_538.Data.AllocatorInstance.Data,iVar14);
      }
      if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_538.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      uVar23 = uVar23 + 1;
      uVar27 = uVar27 + 0x10;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    FGameplayDebuggerCanvasContext::Print(param_1,&FColor::White,fVar12,&local_558);
    if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.Data.AllocatorInstance.Data);
    }
  }
  local_4f8 = (longlong)iVar1;
  local_res8 = 0;
  if (0 < iVar1) {
    local_548 = 0;
    local_56c = 0;
    local_540 = local_4f8;
    do {
      local_518.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_518.Data.ArrayNum = 0;
      local_518.Data.ArrayMax = 0;
      local_res18 = 0;
      lVar26 = local_548;
      uVar23 = local_56c;
      do {
        if (((-1 < (int)uVar23) && ((int)uVar23 < (this->SlotCategoryIds).ArrayNum)) &&
           ((int)uVar23 < (this->SlotNames).ArrayNum)) {
          uVar24 = ~uVar23 >> 0x1f;
          uVar16 = 0;
          if ((int)uVar23 < (this->SlotCategoryIds).ArrayNum) {
            uVar16 = uVar24;
          }
          if ((uVar16 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(int *)((this->SlotCategoryIds).AllocatorInstance.Data + lVar26 + 8) != 0) {
            pAVar2 = (this->CachedReplicator).field0_0x0.DebugPtr;
            uVar16 = 0;
            if ((int)uVar23 < (this->SlotCategoryIds).ArrayNum) {
              uVar16 = uVar24;
            }
            if ((uVar16 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar3 = (this->SlotCategoryIds).AllocatorInstance.Data;
            if ((*(int *)(pFVar3 + lVar26 + 8) < 1) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar16 = **(uint **)(pFVar3 + lVar26);
            uVar15 = 0;
            if ((int)uVar16 < (pAVar2->Categories).ArrayNum) {
              uVar15 = ~uVar16 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar3 = (pAVar2->Categories).AllocatorInstance.Data;
            lVar6 = *(longlong *)(pFVar3 + (longlong)(int)uVar16 * 0x10);
            local_4f0 = *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)(int)uVar16 * 0x10 + 8)
            ;
            if (local_4f0 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_4f0->SharedReferenceCount =
                   (atomic<int>)((int)local_4f0->SharedReferenceCount + 1);
              UNLOCK();
            }
            uVar16 = *(uint *)(lVar6 + 0x34) >> 7;
            if ((local_res8 == this->ActiveRowIdx) && (1 < local_4f8)) {
              pwVar20 = L"";
              if ((uVar16 & 1) == 0) {
                if (FGameplayDebuggerCanvasStrings::ColorNameDisabledActiveRow.Data.ArrayNum != 0) {
                  pwVar20 = (wchar_t *)
                            FGameplayDebuggerCanvasStrings::ColorNameDisabledActiveRow.Data.
                            AllocatorInstance.Data;
                }
              }
              else if (FGameplayDebuggerCanvasStrings::ColorNameEnabledActiveRow.Data.ArrayNum != 0)
              {
                pwVar20 = (wchar_t *)
                          FGameplayDebuggerCanvasStrings::ColorNameEnabledActiveRow.Data.
                          AllocatorInstance.Data;
              }
            }
            else {
              pwVar20 = L"";
              if ((uVar16 & 1) == 0) {
                if (FGameplayDebuggerCanvasStrings::ColorNameDisabled.Data.ArrayNum != 0) {
                  pwVar20 = (wchar_t *)
                            FGameplayDebuggerCanvasStrings::ColorNameDisabled.Data.AllocatorInstance
                            .Data;
                }
              }
              else if (FGameplayDebuggerCanvasStrings::ColorNameEnabled.Data.ArrayNum != 0) {
                pwVar20 = (wchar_t *)
                          FGameplayDebuggerCanvasStrings::ColorNameEnabled.Data.AllocatorInstance.
                          Data;
              }
            }
            ::FString::FString(&local_528,pwVar20);
            iVar1 = (this->SlotNames).ArrayNum;
            if (local_res8 == this->ActiveRowIdx) {
              uVar16 = 0;
              if ((int)uVar23 < iVar1) {
                uVar16 = uVar24;
              }
              if ((uVar16 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar16 = (uint)uVar28 | 1;
              ::FString::PrintfImpl(&local_4c8,L"%s{%s}%d:{%s}%s");
              pFVar21 = &local_4c8;
              FVar25.Data = local_4c8.Data.AllocatorInstance.Data;
            }
            else {
              uVar16 = 0;
              if ((int)uVar23 < iVar1) {
                uVar16 = uVar24;
              }
              if ((uVar16 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar16 = (uint)uVar28 | 2;
              ::FString::PrintfImpl(&local_4d8,L"%s{%s}%s");
              pFVar21 = &local_4d8;
              FVar25.Data = local_4d8.Data.AllocatorInstance.Data;
            }
            uVar28 = (ulonglong)uVar16;
            (pFVar21->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            iVar1 = (pFVar21->Data).ArrayNum;
            (pFVar21->Data).ArrayNum = 0;
            (pFVar21->Data).ArrayMax = 0;
            if (((uVar16 & 2) != 0) &&
               (uVar28 = (ulonglong)(uVar16 & 0xfffffffd),
               local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
            }
            if (((uVar28 & 1) != 0) &&
               (uVar28 = (ulonglong)((uint)uVar28 & 0xfffffffe),
               local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
            }
            iVar14 = iVar1 + -1;
            if (iVar1 == 0) {
              iVar14 = 0;
            }
            ::FString::AppendChars(&local_518,(wchar_t *)FVar25.Data,iVar14);
            if (FVar25.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar25.Data);
            }
            if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_528.Data.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_4f0);
          }
        }
        local_res18 = local_res18 + 1;
        lVar26 = lVar26 + 0x10;
        uVar23 = uVar23 + 1;
      } while (local_res18 < 10);
      FGameplayDebuggerCanvasContext::Print(param_1,&FColor::White,fVar12,&local_518);
      if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_518.Data.AllocatorInstance.Data);
      }
      local_56c = local_56c + 10;
      local_res8 = local_res8 + 1;
      local_548 = local_548 + 0xa0;
      local_540 = local_540 + -1;
    } while (local_540 != 0);
  }
  param_1->DefaultY = fVar29 + param_1->CursorY;
  if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
  }
  if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
  }
  if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.Data.AllocatorInstance.Data);
  }
  if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data.AllocatorInstance.Data);
  }
  return;
}

// GetKeyDescriptionLong @ 146d4c9c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
UGameplayDebuggerLocalController::GetKeyDescriptionLong
          (UGameplayDebuggerLocalController *this,FString *__return_storage_ptr__,FKey *param_1)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  bool bVar2;
  int iVar3;
  FText *pFVar4;
  FString *pFVar5;
  FName this_00;
  TRefCountPtr<ITextData> TVar6;
  longlong lVar7;
  bool bVar8;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FString local_58;
  FText local_48;
  FText local_38;
  
  pFVar4 = FKey::GetDisplayName(param_1,&local_38,true);
  pFVar5 = FText::ToString(pFVar4);
  local_68.Data = (FScriptContainerElement *)0x0;
  bVar2 = false;
  bVar1 = true;
  local_60 = (pFVar5->Data).ArrayNum;
  lVar7 = (longlong)local_60;
  _Src = (pFVar5->Data).AllocatorInstance.Data;
  if (local_60 == 0) {
    local_5c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_60,0,&local_68,local_60,&local_5c);
    memcpy(local_68.Data,_Src,lVar7 * 2);
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  this_00 = FKey::GetFName(param_1);
  ::FName::ToString((FName *)this_00,&local_58);
  if (local_60 == local_58.Data.ArrayNum) {
    if (1 < local_60) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_68.Data,(wchar_t *)local_58.Data.AllocatorInstance.Data);
      bVar8 = iVar3 == 0;
      goto LAB_146d4caa9;
    }
  }
  else {
    bVar8 = local_58.Data.ArrayNum + local_60 == 1;
LAB_146d4caa9:
    if (!bVar8) {
      ::FString::PrintfImpl((FString *)&local_48,L"%s [%s key])");
      pFVar4 = &local_48;
      TVar6.Reference = local_48.TextData.Reference;
      goto LAB_146d4cb0d;
    }
  }
  ::FString::PrintfImpl((FString *)&local_38,L"[%s]");
  pFVar4 = &local_38;
  bVar2 = true;
  bVar1 = false;
  TVar6.Reference = local_38.TextData.Reference;
LAB_146d4cb0d:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)TVar6.Reference
  ;
  (pFVar4->TextData).Reference = (ITextData *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = pFVar4->Flags;
  (__return_storage_ptr__->Data).ArrayMax = *(int *)&pFVar4->field_0xc;
  *(undefined8 *)&pFVar4->Flags = 0;
  if ((bVar1) && (local_48.TextData.Reference != (ITextData *)0x0)) {
    FMemory::Free(local_48.TextData.Reference);
  }
  if ((bVar2) && (local_38.TextData.Reference != (ITextData *)0x0)) {
    FMemory::Free(local_38.TextData.Reference);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return __return_storage_ptr__;
}

// GetKeyDescriptionShort @ 146d4cb90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
UGameplayDebuggerLocalController::GetKeyDescriptionShort
          (UGameplayDebuggerLocalController *this,FString *__return_storage_ptr__,FKey *param_1)

{
  FName this_00;
  FString local_18;
  
  this_00 = FKey::GetFName(param_1);
  ::FName::ToString((FName *)this_00,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"[%s]");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146d4d930

UClass * __cdecl UGameplayDebuggerLocalController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayDebuggerLocalController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayDebugger",L"GameplayDebuggerLocalController",
               &Z_Registration_Info_UClass_UGameplayDebuggerLocalController.InnerSingleton,
               StaticRegisterNativesUGameplayDebuggerLocalController,0x148,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayDebuggerLocalController>,
               InternalVTableHelperCtorCaller<UGameplayDebuggerLocalController>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayDebuggerLocalController.InnerSingleton;
}

// Initialize @ 146d4e790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UGameplayDebuggerLocalController::Initialize
          (UGameplayDebuggerLocalController *this,AGameplayDebuggerCategoryReplicator *param_1,
          AGameplayDebuggerPlayerManager *param_2)

{
  TReferenceControllerBase<1> **ppTVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UClass *this_00;
  UGameplayDebuggerConfig *pUVar7;
  FName *pFVar8;
  FString *pFVar9;
  FName FVar10;
  FName *pFVar11;
  FModuleManager *this_01;
  IModuleInterface *pIVar12;
  uint uVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  undefined1 *puVar16;
  TReferenceControllerBase<1> **ppTVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_2c8 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2a8;
  FDelegateAllocation local_2a0;
  FString local_290;
  FString local_280;
  undefined1 local_270 [24];
  FString local_258;
  undefined1 local_248 [24];
  TObjectPtr<UFont>_u_0 local_230;
  FName local_228;
  FKeyDetails *local_220;
  ForAnyElementType local_218;
  FName local_210;
  ForAnyElementType local_208;
  TReferenceControllerBase<1> *local_200;
  FName local_1f8;
  FKeyDetails *local_1f0;
  TReferenceControllerBase<1> *local_1e8;
  FName local_1e0;
  FKeyDetails *local_1d8;
  TReferenceControllerBase<1> *local_1d0;
  FName local_1c8;
  FKeyDetails *local_1c0;
  TReferenceControllerBase<1> *local_1b8;
  FName local_1b0;
  ForElementType<FSetElementId> local_1a8;
  TReferenceControllerBase<1> *local_1a0;
  FName local_198;
  FKeyDetails *local_190;
  ForAnyElementType local_188;
  FName local_180;
  ForAnyElementType local_178;
  TReferenceControllerBase<1> *local_170;
  FName local_168;
  FKeyDetails *local_160;
  TReferenceControllerBase<1> *local_158;
  FName local_150;
  FKeyDetails *local_148;
  FTimerHandle local_140;
  FName local_138;
  FKeyDetails *local_130;
  TReferenceControllerBase<1> *local_128;
  FName local_120;
  FKeyDetails *local_118;
  TReferenceControllerBase<1> *local_110;
  FName local_108;
  FKeyDetails *local_100;
  TReferenceControllerBase<1> *local_f8;
  FName local_f0;
  FKeyDetails *local_e8;
  TReferenceControllerBase<1> *local_e0;
  FName local_d8;
  FKeyDetails *local_d0;
  TReferenceControllerBase<1> *local_c8;
  FName local_c0;
  FKeyDetails *local_b8;
  TReferenceControllerBase<1> *local_b0;
  FName local_a8;
  FKeyDetails *local_a0;
  TReferenceControllerBase<1> *local_98;
  FName local_90;
  FKeyDetails *local_88;
  TReferenceControllerBase<1> *local_80;
  FName local_78;
  FKeyDetails *local_70;
  TReferenceControllerBase<1> *local_68;
  FName local_60;
  FKeyDetails *local_58;
  TReferenceControllerBase<1> *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (AGameplayDebuggerCategoryReplicator *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->CachedReplicator).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (AGameplayDebuggerPlayerManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->CachedPlayerManager).field0_0x0.DebugPtr = param_2;
  local_2a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_2a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  this->bSimulateMode = param_1->bIsEditorWorldReplicator;
  bVar4 = false;
  local_2a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2a8,(FWriteAccessScope *)local_248);
  local_230.DebugPtr = (UFont *)&local_2a0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_2a0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameplayDebuggerLocalController____A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar5[3] = 0;
    local_270._0_8_ = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)local_270);
    puVar5[4] = OnDebugDraw;
  }
  if ((bool)local_248[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_248._8_8_,(FDestructionSentinel *)local_248);
  }
  pwVar14 = L"Game";
  if (this->bSimulateMode != 0) {
    pwVar14 = L"DebugAI";
  }
  UDebugDrawService::Register
            ((wchar_t *)&local_258,
             (TDelegate<void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy> *)
             pwVar14);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2a8,(FWriteAccessScope *)local_270);
  if ((local_2a0.DelegateSize != 0) &&
     (local_2a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_2a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_2a0,0,0,0x10);
    local_2a0.DelegateSize = 0;
  }
  if (local_270[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_270._8_8_,(FDestructionSentinel *)local_270);
  }
  if (local_2a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_2a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2a8.AccessDetector);
  this_00 = UGameplayDebuggerConfig::StaticClass();
  pUVar7 = UClass::GetDefaultObject<UGameplayDebuggerConfig>(this_00);
  local_138 = EKeys::NumPadZero.KeyName;
  local_130 = EKeys::NumPadZero.KeyDetails.Object;
  local_128 = EKeys::NumPadZero.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::NumPadZero.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::NumPadZero.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::NumPadZero.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_118 = EKeys::NumPadOne.KeyDetails.Object;
  local_120 = EKeys::NumPadOne.KeyName;
  local_110 = EKeys::NumPadOne.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::NumPadOne.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::NumPadOne.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::NumPadOne.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_108 = EKeys::NumPadTwo.KeyName;
  local_100 = EKeys::NumPadTwo.KeyDetails.Object;
  local_f8 = EKeys::NumPadTwo.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::NumPadTwo.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::NumPadTwo.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::NumPadTwo.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f0 = EKeys::NumPadThree.KeyName;
  local_e8 = EKeys::NumPadThree.KeyDetails.Object;
  local_e0 = EKeys::NumPadThree.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::NumPadThree.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::NumPadThree.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::NumPadThree.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d8 = EKeys::NumPadFour.KeyName;
  local_d0 = EKeys::NumPadFour.KeyDetails.Object;
  local_c8 = EKeys::NumPadFour.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::NumPadFour.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::NumPadFour.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::NumPadFour.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c0 = EKeys::NumPadFive.KeyName;
  local_b8 = EKeys::NumPadFive.KeyDetails.Object;
  local_b0 = EKeys::NumPadFive.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::NumPadFive.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::NumPadFive.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::NumPadFive.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8 = EKeys::NumPadSix.KeyName;
  local_a0 = EKeys::NumPadSix.KeyDetails.Object;
  local_98 = EKeys::NumPadSix.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::NumPadSix.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::NumPadSix.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::NumPadSix.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_90 = EKeys::NumPadSeven.KeyName;
  local_88 = EKeys::NumPadSeven.KeyDetails.Object;
  local_80 = EKeys::NumPadSeven.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::NumPadSeven.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::NumPadSeven.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::NumPadSeven.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = EKeys::NumPadEight.KeyName;
  local_70 = EKeys::NumPadEight.KeyDetails.Object;
  local_68 = EKeys::NumPadEight.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::NumPadEight.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::NumPadEight.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::NumPadEight.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_60 = EKeys::NumPadNine.KeyName;
  local_58 = EKeys::NumPadNine.KeyDetails.Object;
  local_50 = EKeys::NumPadNine.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::NumPadNine.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::NumPadNine.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::NumPadNine.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_228 = (pUVar7->CategorySlot0).KeyName;
  local_220 = (pUVar7->CategorySlot0).KeyDetails.Object;
  local_218.Data =
       (FScriptContainerElement *)
       (pUVar7->CategorySlot0).KeyDetails.SharedReferenceCount.ReferenceController;
  if ((TReferenceControllerBase<1> *)local_218.Data != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_218.Data)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_218.Data)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_210 = (pUVar7->CategorySlot1).KeyName;
  local_208.Data = (FScriptContainerElement *)(pUVar7->CategorySlot1).KeyDetails.Object;
  local_200 = (pUVar7->CategorySlot1).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_200 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_200->SharedReferenceCount = (atomic<int>)((int)local_200->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1f8 = (pUVar7->CategorySlot2).KeyName;
  local_1f0 = (pUVar7->CategorySlot2).KeyDetails.Object;
  local_1e8 = (pUVar7->CategorySlot2).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_1e8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1e8->SharedReferenceCount = (atomic<int>)((int)local_1e8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1e0 = (pUVar7->CategorySlot3).KeyName;
  local_1d8 = (pUVar7->CategorySlot3).KeyDetails.Object;
  local_1d0 = (pUVar7->CategorySlot3).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_1d0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1d0->SharedReferenceCount = (atomic<int>)((int)local_1d0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1c8 = (pUVar7->CategorySlot4).KeyName;
  local_1c0 = (pUVar7->CategorySlot4).KeyDetails.Object;
  local_1b8 = (pUVar7->CategorySlot4).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_1b8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1b8->SharedReferenceCount = (atomic<int>)((int)local_1b8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1b0 = (pUVar7->CategorySlot5).KeyName;
  local_1a8 = (ForElementType<FSetElementId>)(pUVar7->CategorySlot5).KeyDetails.Object;
  local_1a0 = (pUVar7->CategorySlot5).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_1a0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1a0->SharedReferenceCount = (atomic<int>)((int)local_1a0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_198 = (pUVar7->CategorySlot6).KeyName;
  local_190 = (pUVar7->CategorySlot6).KeyDetails.Object;
  local_188.Data =
       (FScriptContainerElement *)
       (pUVar7->CategorySlot6).KeyDetails.SharedReferenceCount.ReferenceController;
  if ((TReferenceControllerBase<1> *)local_188.Data != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_188.Data)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_188.Data)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_180 = (pUVar7->CategorySlot7).KeyName;
  local_178.Data = (FScriptContainerElement *)(pUVar7->CategorySlot7).KeyDetails.Object;
  local_170 = (pUVar7->CategorySlot7).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_170 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_170->SharedReferenceCount = (atomic<int>)((int)local_170->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_168 = (pUVar7->CategorySlot8).KeyName;
  local_160 = (pUVar7->CategorySlot8).KeyDetails.Object;
  local_158 = (pUVar7->CategorySlot8).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_158 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_158->SharedReferenceCount = (atomic<int>)((int)local_158->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_150 = (pUVar7->CategorySlot9).KeyName;
  local_148 = (pUVar7->CategorySlot9).KeyDetails.Object;
  local_140.Handle =
       (ulong64)(pUVar7->CategorySlot9).KeyDetails.SharedReferenceCount.ReferenceController;
  if ((TReferenceControllerBase<1> *)local_140.Handle != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_140.Handle)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_140.Handle)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar11 = &local_228;
  uVar19 = 0;
  do {
    pFVar8 = &local_138;
    uVar13 = 0;
    while (*pFVar11 != *pFVar8) {
      uVar13 = uVar13 + 1;
      pFVar8 = pFVar8 + 3;
      if (9 < uVar13) goto LAB_146d4ed58;
    }
    uVar19 = uVar19 + 1;
    pFVar11 = pFVar11 + 3;
  } while (uVar19 < 10);
  bVar4 = true;
LAB_146d4ed58:
  pFVar9 = GetKeyDescriptionLong(this,&local_258,&pUVar7->ActivationKey);
  pFVar2 = &this->ActivationKeyDesc;
  if (pFVar2 != pFVar9) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ActivationKeyDesc).Data.ArrayNum = (pFVar9->Data).ArrayNum;
    (this->ActivationKeyDesc).Data.ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if ((FName)local_258.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  FVar10 = FKey::GetFName(&pUVar7->CategoryRowPrevKey);
  ::FName::ToString((FName *)FVar10,(FString *)local_270);
  ::FString::PrintfImpl(&local_290,L"[%s]");
  if ((UGameplayDebuggerLocalController *)local_270._0_8_ != (UGameplayDebuggerLocalController *)0x0
     ) {
    FMemory::Free((void *)local_270._0_8_);
  }
  pFVar2 = &this->RowUpKeyDesc;
  if (pFVar2 != &local_290) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_290.Data.AllocatorInstance.Data;
    (this->RowUpKeyDesc).Data.ArrayNum = local_290.Data.ArrayNum;
    (this->RowUpKeyDesc).Data.ArrayMax = local_290.Data.ArrayMax;
    local_290.Data.ArrayNum = 0;
    local_290.Data.ArrayMax = 0;
    local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  FVar10 = FKey::GetFName(&pUVar7->CategoryRowNextKey);
  ::FName::ToString((FName *)FVar10,(FString *)local_270);
  ::FString::PrintfImpl(&local_280,L"[%s]");
  if ((UGameplayDebuggerLocalController *)local_270._0_8_ != (UGameplayDebuggerLocalController *)0x0
     ) {
    FMemory::Free((void *)local_270._0_8_);
  }
  pFVar2 = &this->RowDownKeyDesc;
  if (pFVar2 != &local_280) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_280.Data.AllocatorInstance.Data;
    (this->RowDownKeyDesc).Data.ArrayNum = local_280.Data.ArrayNum;
    (this->RowDownKeyDesc).Data.ArrayMax = local_280.Data.ArrayMax;
    local_280.Data.ArrayNum = 0;
    local_280.Data.ArrayMax = 0;
    local_280.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  pwVar14 = L"highlighted keys";
  if (bVar4) {
    pwVar14 = L"{yellow}Numpad{white}";
  }
  ::FString::operator=(&this->CategoryKeysDesc,pwVar14);
  this->PaddingLeft = pUVar7->DebugCanvasPaddingLeft;
  this->PaddingRight = pUVar7->DebugCanvasPaddingRight;
  this->PaddingTop = pUVar7->DebugCanvasPaddingTop;
  this->PaddingBottom = pUVar7->DebugCanvasPaddingBottom;
  *(uint *)&this->field_0x78 =
       *(uint *)&this->field_0x78 ^
       ((uint)pUVar7->bDebugCanvasEnableTextShadow << 5 ^ *(uint *)&this->field_0x78) & 0x20;
  pFVar11 = ::FName::FName((FName *)&local_258,"GameplayDebugger");
  FVar10 = *pFVar11;
  this_01 = FModuleManager::Get();
  pIVar12 = FModuleManager::LoadModuleChecked(this_01,FVar10);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UGameplayDebuggerLocalController>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             (pIVar12 + 1),(UGameplayDebuggerLocalController *)local_270,(pmf_8f91aab7)this);
  OnCategoriesChanged(this);
  RestoreCategories(this);
  this->bNeedsCleanup = 1;
  lVar18 = 10;
  lVar15 = 10;
  ppTVar17 = &local_128;
  do {
    ppTVar1 = ppTVar17 + -3;
    ppTVar17 = ppTVar17 + -3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(*ppTVar1);
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  puVar16 = &stack0xffffffffffffffc8;
  do {
    puVar5 = (undefined8 *)(puVar16 + -0x18);
    puVar16 = puVar16 + -0x18;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)*puVar5);
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  return;
}

// IsKeyBound @ 146d4f350

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameplayDebuggerLocalController::IsKeyBound(UGameplayDebuggerLocalController *this,FName param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->UsedBindings).Elements.field_0x8 !=
      *(int *)&(this->UsedBindings).Elements.field_0x34) {
    FVar4 = (this->UsedBindings).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->UsedBindings).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->UsedBindings).HashSize - 1U & param_1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&(this->UsedBindings).Elements;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar3 * 0x10) == param_1) goto LAB_146d4f3cb;
        iVar3 = *(int *)(lVar1 + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_146d4f3cb:
  return iVar3 != -1;
}

// OnActivationPressed @ 146d54f10

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
UGameplayDebuggerLocalController::OnActivationPressed(UGameplayDebuggerLocalController *this)

{
  FTimerManager *this_00;
  double dVar1;
  
  if ((this->CachedReplicator).field0_0x0.DebugPtr != (AGameplayDebuggerCategoryReplicator *)0x0) {
    dVar1 = __real_3ff0000000000000;
    if (FApp::bUseFixedTimeStep) {
      dVar1 = (double)FApp::FixedDeltaTime * __real_404e000000000000;
    }
    this_00 = AActor::GetWorldTimerManager((AActor *)(this->CachedReplicator).field0_0x0.DebugPtr);
    FTimerManager::SetTimer<UGameplayDebuggerLocalController>
              (this_00,&this->StartSelectingActorHandle,this,(pmf_8f91aab7)0x146d57100,
               (float)(dVar1 * __real_3fc999999999999a),false,__real_bf800000);
  }
  return;
}

// OnActivationPressedWithModifier @ 146d54fb0

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
UGameplayDebuggerLocalController::OnActivationPressedWithModifier
          (UGameplayDebuggerLocalController *this)

{
  FTimerManager *this_00;
  double dVar1;
  
  if ((this->CachedReplicator).field0_0x0.DebugPtr != (AGameplayDebuggerCategoryReplicator *)0x0) {
    dVar1 = __real_3ff0000000000000;
    if (FApp::bUseFixedTimeStep) {
      dVar1 = (double)FApp::FixedDeltaTime * __real_404e000000000000;
    }
    this_00 = AActor::GetWorldTimerManager((AActor *)(this->CachedReplicator).field0_0x0.DebugPtr);
    FTimerManager::SetTimer<UGameplayDebuggerLocalController>
              (this_00,&this->StartSelectingActorHandle,this,(pmf_8f91aab7)0x146d57110,
               (float)(dVar1 * __real_3fc999999999999a),false,__real_bf800000);
  }
  return;
}

// OnActivationReleased @ 146d55050

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
UGameplayDebuggerLocalController::OnActivationReleased(UGameplayDebuggerLocalController *this)

{
  ToggleActivation(this,BestPawnCandidate);
  return;
}

// OnActivationReleasedWithModifier @ 146d55060

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
UGameplayDebuggerLocalController::OnActivationReleasedWithModifier
          (UGameplayDebuggerLocalController *this)

{
  ToggleActivation(this,LocalPlayer);
  return;
}

// OnCategoriesChanged @ 146d553b0

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
UGameplayDebuggerLocalController::OnCategoriesChanged(UGameplayDebuggerLocalController *this)

{
  int *piVar1;
  int *piVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  FName FVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  FName *pFVar11;
  FModuleManager *this_00;
  IModuleInterface *pIVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  longlong local_res10;
  FName local_res18;
  int local_48 [4];
  
  pFVar11 = ::FName::FName(&local_res18,"GameplayDebugger");
  FVar4 = *pFVar11;
  this_00 = FModuleManager::Get();
  pIVar12 = FModuleManager::LoadModuleChecked(this_00,FVar4);
  pFVar13 = (this->SlotNames).AllocatorInstance.Data;
  pTVar3 = &this->SlotNames;
  piVar1 = &(this->SlotNames).ArrayMax;
  iVar10 = (this->SlotNames).ArrayNum;
  piVar2 = &(this->SlotNames).ArrayNum;
  if ((this->SlotNames).ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar13,iVar10);
    *piVar2 = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar13,iVar10);
    *piVar2 = 0;
  }
  if (pTVar3 == (TArray<FString,TSizedDefaultAllocator<32>_> *)(pIVar12 + 0x1f)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar10 = *(int *)(pIVar12 + 0x20);
  if (iVar10 != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar10,&pTVar3->AllocatorInstance,piVar2,piVar1);
    ConstructItems<FString,FString,int>
              ((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 0x10,(FString *)pIVar12[0x1f],
               iVar10);
  }
  piVar1 = &(this->SlotCategoryIds).ArrayMax;
  pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(this->SlotCategoryIds).AllocatorInstance.Data
  ;
  iVar10 = (this->SlotCategoryIds).ArrayNum;
  if ((this->SlotCategoryIds).ArrayMax < 0) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar5,iVar10);
    (this->SlotCategoryIds).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->SlotCategoryIds).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar5,iVar10);
    (this->SlotCategoryIds).ArrayNum = 0;
  }
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::AddDefaulted
            (&this->SlotCategoryIds,*(int *)(pIVar12 + 0x1e));
  local_48[0] = 0;
  if (0 < *(int *)(pIVar12 + 0x1e)) {
    local_res10 = 0;
    uVar15 = 0;
    do {
      uVar14 = 0;
      while( true ) {
        uVar9 = 0;
        if ((int)uVar15 < *(int *)(pIVar12 + 0x1e)) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (*(int *)(local_res10 + 8 + (longlong)pIVar12[0x1d]) <= (int)uVar14) break;
        uVar9 = 0;
        if ((int)uVar15 < (this->SlotCategoryIds).ArrayNum) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        pFVar13 = (this->SlotCategoryIds).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10;
        if ((*(int **)&pFVar13->field_0x0 <= local_48) &&
           (local_48 < *(int **)&pFVar13->field_0x0 + *(int *)(pFVar13 + 0xc))) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar10 = *(int *)&pFVar13[8].field_0x0;
        if (iVar10 == *(int *)(pFVar13 + 0xc)) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar13,(int *)(pFVar13 + 0xc));
        }
        *(int *)&pFVar13[8].field_0x0 = iVar10 + 1;
        *(int *)(*(longlong *)&pFVar13->field_0x0 + (longlong)iVar10 * 4) = local_48[0];
        local_48[0] = local_48[0] + 1;
        uVar14 = uVar14 + 1;
      }
      local_res10 = local_res10 + 0x10;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < *(int *)(pIVar12 + 0x1e));
  }
  piVar1 = &(this->DataPackMap).ArrayMax;
  this->NumCategorySlots = (this->SlotCategoryIds).ArrayNum;
  this->NumCategories = *(int *)(pIVar12 + 0x21);
  pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(this->DataPackMap).AllocatorInstance.Data;
  iVar10 = (this->DataPackMap).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar5,iVar10);
    (this->DataPackMap).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->DataPackMap).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar5,iVar10);
    (this->DataPackMap).ArrayNum = 0;
  }
  return;
}

// OnCategory0Pressed @ 146d55740

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
UGameplayDebuggerLocalController::OnCategory0Pressed(UGameplayDebuggerLocalController *this)

{
  ToggleSlotState(this,this->ActiveRowIdx * 10);
  return;
}

// OnCategory1Pressed @ 146d55760

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
UGameplayDebuggerLocalController::OnCategory1Pressed(UGameplayDebuggerLocalController *this)

{
  ToggleSlotState(this,this->ActiveRowIdx * 10 + 1);
  return;
}

// OnCategory2Pressed @ 146d55780

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
UGameplayDebuggerLocalController::OnCategory2Pressed(UGameplayDebuggerLocalController *this)

{
  ToggleSlotState(this,this->ActiveRowIdx * 10 + 2);
  return;
}

// OnCategory3Pressed @ 146d557a0

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
UGameplayDebuggerLocalController::OnCategory3Pressed(UGameplayDebuggerLocalController *this)

{
  ToggleSlotState(this,this->ActiveRowIdx * 10 + 3);
  return;
}

// OnCategory4Pressed @ 146d557c0

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
UGameplayDebuggerLocalController::OnCategory4Pressed(UGameplayDebuggerLocalController *this)

{
  ToggleSlotState(this,this->ActiveRowIdx * 10 + 4);
  return;
}

// OnCategory5Pressed @ 146d557e0

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
UGameplayDebuggerLocalController::OnCategory5Pressed(UGameplayDebuggerLocalController *this)

{
  ToggleSlotState(this,this->ActiveRowIdx * 10 + 5);
  return;
}

// OnCategory6Pressed @ 146d55800

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
UGameplayDebuggerLocalController::OnCategory6Pressed(UGameplayDebuggerLocalController *this)

{
  ToggleSlotState(this,this->ActiveRowIdx * 10 + 6);
  return;
}

// OnCategory7Pressed @ 146d55820

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
UGameplayDebuggerLocalController::OnCategory7Pressed(UGameplayDebuggerLocalController *this)

{
  ToggleSlotState(this,this->ActiveRowIdx * 10 + 7);
  return;
}

// OnCategory8Pressed @ 146d55840

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
UGameplayDebuggerLocalController::OnCategory8Pressed(UGameplayDebuggerLocalController *this)

{
  ToggleSlotState(this,this->ActiveRowIdx * 10 + 8);
  return;
}

// OnCategory9Pressed @ 146d55860

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
UGameplayDebuggerLocalController::OnCategory9Pressed(UGameplayDebuggerLocalController *this)

{
  ToggleSlotState(this,this->ActiveRowIdx * 10 + 9);
  return;
}

// OnCategoryBindingEvent @ 146d55880

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
UGameplayDebuggerLocalController::OnCategoryBindingEvent
          (UGameplayDebuggerLocalController *this,int param_1,int param_2)

{
  AGameplayDebuggerCategoryReplicator *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FGameplayDebuggerInputHandler *pFVar4;
  UFunction *pUVar5;
  int iStackX_20;
  int iStackX_24;
  
  this_00 = (this->CachedReplicator).field0_0x0.DebugPtr;
  if (this_00 == (AGameplayDebuggerCategoryReplicator *)0x0) {
    return;
  }
  if (((-1 < param_2) && (-1 < param_1)) && (param_1 < (this_00->Categories).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this_00->Categories).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_2 < *(int *)(*(longlong *)
                             ((this_00->Categories).AllocatorInstance.Data +
                             (longlong)param_1 * 0x10) + 0x20)) &&
       ((this_00->bIsLocal == 0 ||
        (bVar2 = AGameplayDebuggerCategoryReplicator::IsCategoryEnabled(this_00,param_1), bVar2))))
    {
      uVar3 = 0;
      if (param_1 < (this_00->Categories).ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4 = FGameplayDebuggerAddonBase::GetInputHandler
                         (*(FGameplayDebuggerAddonBase **)
                           ((this_00->Categories).AllocatorInstance.Data + (longlong)param_1 * 0x10)
                          ,param_2);
      if ((pFVar4->Mode == Local) || (this_00->bHasAuthority != 0)) {
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound(&pFVar4->Delegate);
      }
      else {
        iStackX_20 = param_1;
        iStackX_24 = param_2;
        pUVar5 = UObject::FindFunctionChecked
                           ((UObject *)this_00,
                            NAME_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent);
        (**(code **)(this_00->_padding_ + 0x260))(this_00,pUVar5,&iStackX_20);
      }
    }
  }
  return;
}

// OnCategoryRowDownPressed @ 146d558a0

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
UGameplayDebuggerLocalController::OnCategoryRowDownPressed(UGameplayDebuggerLocalController *this)

{
  int iVar1;
  
  iVar1 = this->NumCategorySlots + 9;
  if (0x13 < iVar1) {
    this->ActiveRowIdx = (this->ActiveRowIdx + 1) % (iVar1 / 10);
    return;
  }
  this->ActiveRowIdx = 0;
  return;
}

// OnCategoryRowUpPressed @ 146d558f0

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
UGameplayDebuggerLocalController::OnCategoryRowUpPressed(UGameplayDebuggerLocalController *this)

{
  int iVar1;
  
  iVar1 = (this->NumCategorySlots + 9) / 10;
  if (1 < iVar1) {
    this->ActiveRowIdx = (this->ActiveRowIdx + -1 + iVar1) % iVar1;
    return;
  }
  this->ActiveRowIdx = 0;
  return;
}

// OnDebugDraw @ 146d559f0

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
UGameplayDebuggerLocalController::OnDebugDraw
          (UGameplayDebuggerLocalController *this,UCanvas *param_1,APlayerController *param_2)

{
  undefined1 *puVar1;
  AGameplayDebuggerCategoryReplicator *pAVar2;
  APlayerController *pAVar3;
  UFont *pUVar4;
  FName FVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FGameplayDebuggerCategory *this_00;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TVector<double> *pTVar11;
  UObject *pUVar12;
  APlayerController *pAVar13;
  longlong lVar14;
  uint uVar15;
  int *local_res8;
  APlayerController *local_res20;
  UCanvas *local_f8;
  UFont *local_f0;
  UWorld *local_e8;
  code *local_e0;
  FGameplayDebuggerCanvasContext local_d8;
  TSharedRef<FGameplayDebuggerCategory,1> local_68;
  TVector<double> local_58;
  
  if ((param_1 == (UCanvas *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Canvas",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayDebugger\\Private\\GameplayDebuggerLocalController.cpp"
                         ,0xec,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pAVar2 = (this->CachedReplicator).field0_0x0.DebugPtr;
  if (pAVar2 == (AGameplayDebuggerCategoryReplicator *)0x0) {
    return;
  }
  if (pAVar2->bIsEnabled != false) {
    if (this->bDebugDrawEnabled == false) {
      return;
    }
    if (param_2 != (APlayerController *)0x0) {
      pAVar3 = (pAVar2->OwnerPC).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pAVar3 == (APlayerController *)0x0) {
          return;
        }
      }
      else {
        if (pAVar3 == (APlayerController *)0x0) {
          return;
        }
        UE::GC::MarkAsReachable((UObject *)pAVar3);
      }
      if (pAVar3 != param_2) {
        return;
      }
    }
    local_d8.FontRenderInfo.GlowInfo.bEnableGlow = 0;
    local_d8.FontRenderInfo.bEnableShadow = 0;
    local_d8.FontRenderInfo.bClipText = 0;
    pUVar4 = (this->HUDFont).field0_0x0.DebugPtr;
    local_d8.Canvas.WeakPtr.ObjectIndex = 0;
    local_d8.Canvas.WeakPtr.ObjectSerialNumber = 0;
    local_d8.Font.WeakPtr.ObjectIndex = 0;
    local_d8.Font.WeakPtr.ObjectSerialNumber = 0;
    local_d8.PlayerController.WeakPtr.ObjectIndex = 0;
    local_d8.PlayerController.WeakPtr.ObjectSerialNumber = 0;
    local_d8.World.WeakPtr.ObjectIndex = 0;
    local_d8.World.WeakPtr.ObjectSerialNumber = 0;
    local_d8.FontRenderInfo.GlowInfo.GlowColor.field0_0x0._0_8_ = 0;
    local_d8.FontRenderInfo.GlowInfo.GlowColor.field0_0x0._8_8_ = 0;
    local_d8.FontRenderInfo.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
    local_d8.FontRenderInfo.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
    local_d8.FontRenderInfo.GlowInfo.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
    local_d8.FontRenderInfo.GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
    if (param_1 != (UCanvas *)0x0) {
      local_f8 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_d8,(FObjectPtr)&local_f8);
      local_f0 = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UFont *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      FWeakObjectPtr::operator=(&local_d8.Font.WeakPtr,(FObjectPtr)&local_f0);
    }
    local_d8.CursorX = this->PaddingLeft;
    local_d8.CursorY = this->PaddingTop;
    local_d8.FontRenderInfo._0_4_ =
         *(uint *)&this->field_0x78 >> 4 & 2 | local_d8.FontRenderInfo._0_4_ & 0xfffffffd;
    pAVar3 = *(APlayerController **)((longlong)(this->CachedReplicator).field0_0x0 + 0x2c0);
    local_d8.DefaultX = local_d8.CursorX;
    local_d8.DefaultY = local_d8.CursorY;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar3 != (APlayerController *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pAVar3);
    }
    pAVar13 = pAVar3;
    local_res20 = pAVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pAVar3 == (APlayerController *)0x0)
       ) {
      FWeakObjectPtr::operator=(&local_d8.PlayerController.WeakPtr,(FObjectPtr)&local_res20);
      if (pAVar3 == (APlayerController *)0x0) {
        pAVar13 = (APlayerController *)(this->CachedReplicator).field0_0x0.DebugPtr;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pAVar3);
      FWeakObjectPtr::operator=(&local_d8.PlayerController.WeakPtr,(FObjectPtr)&local_res20);
    }
    local_e8 = AActor::GetWorld((AActor *)pAVar13);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e8 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_e8);
    }
    FWeakObjectPtr::operator=(&local_d8.World.WeakPtr,(FObjectPtr)&local_e8);
    DrawHeader(this,&local_d8);
    if ((this->DataPackMap).ArrayNum != this->NumCategories) {
      RebuildDataPackMap(this);
    }
    pAVar2 = (this->CachedReplicator).field0_0x0.DebugPtr;
    if ((param_1->SceneView->ViewActor).ActorUniqueId == 0) {
      pTVar11 = UE::Math::TRotator<double>::Vector(&param_1->SceneView->ViewRotation,&local_58);
      AGameplayDebuggerCategoryReplicator::SetViewPoint
                (pAVar2,&param_1->SceneView->ViewLocation,pTVar11);
    }
    else if (((pAVar2->ViewLocation).bIsSet != false) && ((pAVar2->ViewDirection).bIsSet != false))
    {
      AGameplayDebuggerCategoryReplicator::ResetViewPoint(pAVar2);
    }
    local_res8 = &this->NumCategories;
    uVar15 = 0;
    FVar5 = (((this->CachedReplicator).field0_0x0.DebugPtr)->DebugActor).ActorName;
    if (0 < this->NumCategories) {
      lVar14 = 0;
      do {
        pAVar2 = (this->CachedReplicator).field0_0x0.DebugPtr;
        uVar10 = 0;
        if ((int)uVar15 < (pAVar2->Categories).ArrayNum) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (pAVar2->Categories).AllocatorInstance.Data;
        pTVar7 = *(TReferenceControllerBase<1> **)(pFVar6 + lVar14 + 8);
        this_00 = *(FGameplayDebuggerCategory **)(pFVar6 + lVar14);
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((this_00->bIsEnabled != 0) &&
           ((this_00->bShowOnlyWithDebugActor == 0 || (FVar5 != (FName)0x0)))) {
          if ((this_00->bHasAuthority == 0) && (this_00->bAllowLocalDataCollection != 0)) {
            pAVar2 = (this->CachedReplicator).field0_0x0.DebugPtr;
            local_e0 = *(code **)(this_00->_padding_ + 0x18);
            bVar9 = FWeakObjectPtr::IsStale((FWeakObjectPtr *)&pAVar2->DebugActor,true,false);
            if (bVar9) {
              pUVar12 = (UObject *)0x0;
            }
            else {
              pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pAVar2->DebugActor);
            }
            (*local_e0)(this_00,pAVar3,pUVar12);
          }
          if (this_00->bShowCategoryName != 0) {
            if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_68.Object = this_00;
            local_68.SharedReferenceCount.ReferenceController = pTVar7;
            DrawCategoryHeader(this,uVar15,&local_68,&local_d8);
          }
          FGameplayDebuggerCategory::DrawCategory(this_00,pAVar3,&local_d8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        uVar15 = uVar15 + 1;
        lVar14 = lVar14 + 0x10;
      } while ((int)uVar15 < *local_res8);
    }
    return;
  }
  return;
}

// OnExtensionBindingEvent @ 146d55e30

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
UGameplayDebuggerLocalController::OnExtensionBindingEvent
          (UGameplayDebuggerLocalController *this,int param_1,int param_2)

{
  AGameplayDebuggerCategoryReplicator *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FGameplayDebuggerInputHandler *pFVar4;
  UFunction *pUVar5;
  int iStackX_20;
  int iStackX_24;
  
  this_00 = (this->CachedReplicator).field0_0x0.DebugPtr;
  if (this_00 == (AGameplayDebuggerCategoryReplicator *)0x0) {
    return;
  }
  if (((-1 < param_2) && (-1 < param_1)) && (param_1 < (this_00->Extensions).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this_00->Extensions).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (param_2 < *(int *)(*(longlong *)
                            ((this_00->Extensions).AllocatorInstance.Data + (longlong)param_1 * 0x10
                            ) + 0x20)) {
      uVar3 = 0;
      if (param_1 < (this_00->Extensions).ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4 = FGameplayDebuggerAddonBase::GetInputHandler
                         (*(FGameplayDebuggerAddonBase **)
                           ((this_00->Extensions).AllocatorInstance.Data + (longlong)param_1 * 0x10)
                          ,param_2);
      if ((pFVar4->Mode == Local) || (this_00->bHasAuthority != 0)) {
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound(&pFVar4->Delegate);
      }
      else {
        iStackX_20 = param_1;
        iStackX_24 = param_2;
        pUVar5 = UObject::FindFunctionChecked
                           ((UObject *)this_00,
                            NAME_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent);
        (**(code **)(this_00->_padding_ + 0x260))(this_00,pUVar5,&iStackX_20);
      }
    }
  }
  return;
}

// OnSelectActorTick @ 146d569e0

/* WARNING: Type propagation algorithm not settling */
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
UGameplayDebuggerLocalController::OnSelectActorTick(UGameplayDebuggerLocalController *this)

{
  float fVar1;
  int iVar2;
  TObjectPtr<AGameplayDebuggerCategoryReplicator>_u_0 TVar3;
  APlayerController *this_00;
  AGameplayDebuggerCategoryReplicator *pAVar4;
  UObject *pUVar5;
  APawn *pAVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double *pdVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  UClass *pUVar15;
  UWorld *pUVar16;
  AActor *pAVar17;
  APawn *pAVar18;
  APawn *pAVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double dVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  UClass *local_res8;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  TActorIteratorBase<TActorIterator<APawn>_> local_158;
  double local_e8;
  double local_d8;
  double local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  
  TVar3 = (this->CachedReplicator).field0_0x0;
  if (TVar3.DebugPtr != (AGameplayDebuggerCategoryReplicator *)0x0) {
    this_00 = *(APlayerController **)((longlong)TVar3 + 0x2c0);
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (this_00 == (APlayerController *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    if (this_00 != (APlayerController *)0x0) {
      local_170._s_0.X =
           (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      local_170._s_0.Y =
           (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      pAVar4 = (this->CachedReplicator).field0_0x0.DebugPtr;
      local_170._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_188._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
      local_188._s_0.X = (double)UE::Math::TVector<double>::ForwardVector.field0_0x0._0_8_;
      local_188._s_0.Y = (double)UE::Math::TVector<double>::ForwardVector.field0_0x0._8_8_;
      if (((pAVar4->ViewLocation).bIsSet == false) || ((pAVar4->ViewDirection).bIsSet == false)) {
        AGameplayDebuggerPlayerManager::GetViewPoint
                  (this_00,(TVector<double> *)&local_170._s_0,(TVector<double> *)&local_188._s_0);
        uVar31 = local_188._0_4_;
        uVar32 = local_188._4_4_;
        uVar33 = local_188._8_4_;
        uVar34 = local_188._12_4_;
      }
      else {
        local_170._s_0.X = (pAVar4->ViewLocation).TypedValue.field0_0x0._s_0.X;
        local_170._s_0.Y = (pAVar4->ViewLocation).TypedValue.field0_0x0._s_0.Y;
        local_188._s_0.X = (pAVar4->ViewDirection).TypedValue.field0_0x0._s_0.X;
        pdVar11 = &(pAVar4->ViewDirection).TypedValue.field0_0x0._s_0.Y;
        local_188._s_0.Y = *pdVar11;
        local_170._s_0.Z = (pAVar4->ViewLocation).TypedValue.field0_0x0._s_0.Z;
        local_188._s_0.Z = (pAVar4->ViewDirection).TypedValue.field0_0x0._s_0.Z;
        uVar31 = *(undefined4 *)&(pAVar4->ViewDirection).TypedValue.field0_0x0;
        uVar32 = *(undefined4 *)((longlong)&(pAVar4->ViewDirection).TypedValue.field0_0x0 + 4);
        uVar33 = *(undefined4 *)pdVar11;
        uVar34 = *(undefined4 *)((longlong)&(pAVar4->ViewDirection).TypedValue.field0_0x0 + 0xc);
      }
      pUVar15 = UGameplayDebuggerUserSettings::StaticClass();
      if ((pUVar15->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar15);
      }
      pUVar5 = (pUVar15->ClassDefaultObject).field0_0x0.DebugPtr;
      pAVar19 = (APawn *)0x0;
      fVar1 = *(float *)&pUVar5[1].field_0x14;
      fVar20 = cosf(*(float *)&pUVar5[1].field_0x18 * __real_3c8efa35);
      dVar10 = (double)fVar20;
      pUVar15 = Z_Construct_UClass_APawn_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar15);
      }
      pUVar16 = AActor::GetWorld((AActor *)this_00);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar15 != (UClass *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar15);
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar15 != (UClass *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar15);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar15);
          }
        }
      }
      local_158.Flags = OnlyActiveLevels|SkipPendingKill;
      local_158.State.bIsSet = false;
      local_res8 = pUVar15;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar15);
      }
      FActorIteratorState::FActorIteratorState
                (&local_158.State.TypedValue,pUVar16,(TSubclassOf<AActor>)&local_res8);
      local_158.State.bIsSet = true;
      TActorIteratorBase<TActorIterator<APawn>_>::operator++(&local_158);
      dVar13 = __real_3e45798ee2308c3a;
      dVar12 = __real_3ff0000000000000;
      while( true ) {
        if ((local_158.State.bIsSet == false) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (local_158.State.TypedValue.ReachedEnd != false) break;
        if ((local_158.State.bIsSet == false) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pAVar17 = FActorIteratorState::GetActorChecked(&local_158.State.TypedValue);
        pAVar18 = CastChecked<APawn,AActor>(pAVar17);
        if ((-1 < (char)pAVar18->_padding_) && ((pAVar18->_padding_ & 0x10000000000) != 0)) {
          pUVar15 = Z_Construct_UClass_ASpectatorPawn_NoRegister();
          iVar2 = (int)pUVar15->_padding_;
          if ((*(int *)(pAVar18->_padding_ + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pAVar18->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar15->_padding_)) {
            pAVar6 = (APawn *)this_00->_padding_;
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (pAVar6 == (APawn *)0x0) goto LAB_146d56d8d;
LAB_146d56d54:
              bVar14 = pAVar6 == pAVar18;
            }
            else {
              if (pAVar6 != (APawn *)0x0) {
                UE::GC::MarkAsReachable((UObject *)pAVar6);
                goto LAB_146d56d54;
              }
LAB_146d56d8d:
              bVar14 = pAVar18 == (APawn *)0x0;
            }
            if (!bVar14) {
              lVar7 = pAVar18->_padding_;
              if (lVar7 == 0) {
                uVar21 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                uVar22 = (undefined4)
                         ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20
                         );
                uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
              }
              else {
                local_c8 = *(undefined4 *)(lVar7 + 0x210);
                uStack_c4 = *(undefined4 *)(lVar7 + 0x214);
                uStack_c0 = *(undefined4 *)(lVar7 + 0x218);
                uStack_bc = *(undefined4 *)(lVar7 + 0x21c);
                local_b8 = *(undefined8 *)(lVar7 + 0x220);
                uVar21 = (undefined4)local_b8;
                uVar22 = (undefined4)((ulonglong)local_b8 >> 0x20);
                uVar26 = local_c8;
                uVar27 = uStack_c4;
                uVar28 = uStack_c0;
                uVar29 = uStack_bc;
              }
              local_e8 = (double)CONCAT44(uVar22,uVar21);
              dVar23 = (double)CONCAT44(uVar27,uVar26) - local_170._s_0.X;
              local_d0 = local_e8 - local_170._s_0.Z;
              local_d8 = (double)CONCAT44(uVar29,uVar28) - local_170._s_0.Y;
              dVar30 = SQRT(local_d8 * local_d8 + dVar23 * dVar23 + local_d0 * local_d0);
              if (dVar13 < dVar30) {
                dVar24 = dVar12 / dVar30;
                dVar23 = dVar24 * dVar23;
                dVar9 = dVar24 * local_d8;
                uVar25 = dVar24 * local_d0;
              }
              else {
                local_d0 = local_188._s_0.Z;
                uVar25 = local_188._s_0.Z;
                dVar30 = dVar12;
                dVar23 = (double)CONCAT44(uVar32,uVar31);
                dVar9 = (double)CONCAT44(uVar34,uVar33);
              }
              dVar23 = (double)CONCAT44(uVar34,uVar33) * dVar9 +
                       (double)CONCAT44(uVar32,uVar31) * dVar23 + local_188._s_0.Z * (double)uVar25;
              if ((dVar30 < (double)fVar1) && (dVar10 < dVar23)) {
                pAVar19 = pAVar18;
                dVar10 = dVar23;
              }
            }
          }
        }
        TActorIteratorBase<TActorIterator<APawn>_>::operator++(&local_158);
      }
      if (local_158.State.bIsSet != false) {
        UWorld::RemoveOnActorSpawnedHandler
                  (local_158.State.TypedValue.CurrentWorld,
                   local_158.State.TypedValue.ActorSpawnedDelegateHandle);
        if (local_158.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
        }
        if (local_158.State.TypedValue.ActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.State.TypedValue.ActorArray.AllocatorInstance.Data);
        }
      }
      pAVar18 = (APawn *)(this->DebugActorCandidate).field0_0x0.DebugPtr;
      if (pAVar18 == (APawn *)0x0) {
        bVar14 = pAVar19 == (APawn *)0x0;
      }
      else {
        bVar14 = pAVar18 == pAVar19;
      }
      if (!bVar14) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar19 != (APawn *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pAVar19);
        }
        (this->DebugActorCandidate).field0_0x0.DebugPtr = (AActor *)pAVar19;
        AGameplayDebuggerCategoryReplicator::SetDebugActor
                  ((this->CachedReplicator).field0_0x0.DebugPtr,(AActor *)pAVar19,true);
      }
    }
  }
  return;
}

// OnSelectLocalPlayer @ 146d56f70

/* WARNING: Type propagation algorithm not settling */
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
UGameplayDebuggerLocalController::OnSelectLocalPlayer(UGameplayDebuggerLocalController *this)

{
  AGameplayDebuggerCategoryReplicator *pAVar1;
  APlayerController *pAVar2;
  AActor *pAVar3;
  
  pAVar1 = (this->CachedReplicator).field0_0x0.DebugPtr;
  if ((pAVar1 != (AGameplayDebuggerCategoryReplicator *)0x0) &&
     (pAVar2 = (pAVar1->OwnerPC).field0_0x0.DebugPtr, pAVar2 != (APlayerController *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pAVar2);
    }
    if (((pAVar2->Player).field0_0x0 != (UPlayer *)0x0) &&
       (pAVar3 = (AActor *)pAVar2->_padding_, pAVar3 != (AActor *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pAVar3);
      }
      AGameplayDebuggerCategoryReplicator::SetDebugActor
                ((this->CachedReplicator).field0_0x0.DebugPtr,pAVar3,true);
      AGameplayDebuggerCategoryReplicator::CollectCategoryData
                ((this->CachedReplicator).field0_0x0.DebugPtr,true);
    }
  }
  return;
}

// OnStartSelecting @ 146d57000

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
UGameplayDebuggerLocalController::OnStartSelecting
          (UGameplayDebuggerLocalController *this,ESelectionMode param_1)

{
  uint uVar1;
  AGameplayDebuggerCategoryReplicator *this_00;
  FTimerManager *this_01;
  
  (this->StartSelectingActorHandle).Handle = 0;
  this_00 = (this->CachedReplicator).field0_0x0.DebugPtr;
  if (this_00 != (AGameplayDebuggerCategoryReplicator *)0x0) {
    if (this_00->bIsEnabled == false) {
      uVar1 = *(uint *)&this->field_0x78;
      *(uint *)&this->field_0x78 = (uVar1 * 2 ^ uVar1) & 0x10 ^ uVar1 | 8;
      AGameplayDebuggerCategoryReplicator::SetEnabled(this_00,true);
      *(uint *)&this->field_0x78 =
           *(uint *)&this->field_0x78 ^
           ((uint)GAreScreenMessagesEnabled << 6 ^ *(uint *)&this->field_0x78) & 0x40;
      GAreScreenMessagesEnabled = false;
    }
    this->bIsSelectingActor = 1;
    (this->DebugActorCandidate).field0_0x0.DebugPtr = (AActor *)0x0;
    if (param_1 == BestPawnCandidate) {
      this_01 = AActor::GetWorldTimerManager((AActor *)(this->CachedReplicator).field0_0x0.DebugPtr)
      ;
      FTimerManager::SetTimer<UGameplayDebuggerLocalController>
                (this_01,&this->SelectActorTickHandle,this,(pmf_8f91aab7)0x146d569e0,__real_3c23d70a
                 ,true,__real_bf800000);
      OnSelectActorTick(this);
      return;
    }
    if (param_1 == LocalPlayer) {
      OnSelectLocalPlayer(this);
    }
  }
  return;
}

// OnStartSelectingActor @ 146d57100

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
UGameplayDebuggerLocalController::OnStartSelectingActor(UGameplayDebuggerLocalController *this)

{
  OnStartSelecting(this,BestPawnCandidate);
  return;
}

// OnStartSelectingLocalPlayer @ 146d57110

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
UGameplayDebuggerLocalController::OnStartSelectingLocalPlayer
          (UGameplayDebuggerLocalController *this)

{
  uint uVar1;
  AGameplayDebuggerCategoryReplicator *this_00;
  
  (this->StartSelectingActorHandle).Handle = 0;
  this_00 = (this->CachedReplicator).field0_0x0.DebugPtr;
  if (this_00 != (AGameplayDebuggerCategoryReplicator *)0x0) {
    if (this_00->bIsEnabled == false) {
      uVar1 = *(uint *)&this->field_0x78;
      *(uint *)&this->field_0x78 = (uVar1 * 2 ^ uVar1) & 0x10 ^ uVar1 | 8;
      AGameplayDebuggerCategoryReplicator::SetEnabled(this_00,true);
      *(uint *)&this->field_0x78 =
           *(uint *)&this->field_0x78 ^
           ((uint)GAreScreenMessagesEnabled << 6 ^ *(uint *)&this->field_0x78) & 0x40;
      GAreScreenMessagesEnabled = false;
    }
    this->bIsSelectingActor = 1;
    (this->DebugActorCandidate).field0_0x0.DebugPtr = (AActor *)0x0;
    OnSelectLocalPlayer(this);
  }
  return;
}

// RebuildDataPackMap @ 146d587e0

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
UGameplayDebuggerLocalController::RebuildDataPackMap(UGameplayDebuggerLocalController *this)

{
  int *piVar1;
  AGameplayDebuggerCategoryReplicator *pAVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong local_res8;
  uint local_58 [2];
  ForAnyElementType local_50;
  int local_48;
  int aiStack_44 [3];
  
  iVar8 = (this->DataPackMap).ArrayNum;
  piVar1 = &(this->DataPackMap).ArrayNum;
  uVar14 = this->NumCategories;
  if (iVar8 < (int)uVar14) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar14 - iVar8,&(this->DataPackMap).AllocatorInstance,piVar1,
                       &(this->DataPackMap).ArrayMax);
    memset((this->DataPackMap).AllocatorInstance.Data + (longlong)iVar6 * 0x10,0,
           (longlong)(int)(uVar14 - iVar8) << 4);
  }
  else {
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    if ((int)uVar14 < iVar8) {
      uVar12 = iVar8 - uVar14;
      if (((int)(uVar12 | uVar14) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar12 != 0) {
        TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&this->DataPackMap,uVar14,uVar12);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->DataPackMap).AllocatorInstance,*piVar1,
                   &(this->DataPackMap).ArrayMax);
      }
    }
  }
  uVar14 = 0;
  if (0 < this->NumCategorySlots) {
    local_res8 = 0;
    do {
      local_50.Data = (FScriptContainerElement *)0x0;
      local_48 = 0;
      aiStack_44[0] = 0;
      uVar11 = 0;
      lVar13 = 0;
      uVar12 = 0xffffffff;
      while( true ) {
        uVar7 = 0;
        if ((int)uVar14 < (this->SlotCategoryIds).ArrayNum) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(int *)((this->SlotCategoryIds).AllocatorInstance.Data + local_res8 + 8) <= (int)uVar11
           ) break;
        uVar7 = 0;
        if ((int)uVar14 < (this->SlotCategoryIds).ArrayNum) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar9 = (this->SlotCategoryIds).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x10;
        uVar7 = 0;
        if ((int)uVar11 < *(int *)(pFVar9 + 8)) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_58[0] = *(uint *)(lVar13 + *(longlong *)pFVar9);
        lVar10 = (longlong)(int)local_58[0];
        pAVar2 = (this->CachedReplicator).field0_0x0.DebugPtr;
        uVar7 = 0;
        if ((int)local_58[0] < (pAVar2->Categories).ArrayNum) {
          uVar7 = ~local_58[0] >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar9 = (pAVar2->Categories).AllocatorInstance.Data;
        pTVar3 = *(TReferenceControllerBase<1> **)(pFVar9 + lVar10 * 0x10 + 8);
        lVar10 = *(longlong *)(pFVar9 + lVar10 * 0x10);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((*(uint *)(lVar10 + 0x34) >> 2 & 1) == 0) {
          if (((local_50.Data <= (FScriptContainerElement *)local_58) &&
              ((FScriptContainerElement *)local_58 < local_50.Data + (longlong)aiStack_44[0] * 4))
             && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (local_48 == aiStack_44[0]) {
            local_48 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_50,aiStack_44);
          }
          lVar10 = (longlong)local_48;
          local_48 = local_48 + 1;
          *(uint *)(local_50.Data + lVar10 * 4) = local_58[0];
        }
        else {
          lVar10 = (longlong)(int)local_58[0];
          uVar7 = 0;
          if ((int)local_58[0] < *piVar1) {
            uVar7 = ~local_58[0] >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar9 = (this->DataPackMap).AllocatorInstance.Data + lVar10 * 0x10;
          if (((*(uint **)&pFVar9->field_0x0 <= local_58) &&
              (local_58 < *(uint **)&pFVar9->field_0x0 + *(int *)(pFVar9 + 0xc))) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = *(int *)&pFVar9[8].field_0x0;
          if (iVar8 == *(int *)(pFVar9 + 0xc)) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)pFVar9,(int *)(pFVar9 + 0xc));
          }
          *(int *)&pFVar9[8].field_0x0 = iVar8 + 1;
          *(uint *)(*(longlong *)&pFVar9->field_0x0 + (longlong)iVar8 * 4) = local_58[0];
          if (uVar12 == 0xffffffff) {
            uVar12 = local_58[0];
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 4;
      }
      if ((uVar12 != 0xffffffff) && (local_48 != 0)) {
        uVar11 = 0;
        if ((int)uVar12 < *piVar1) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar9 = (this->DataPackMap).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10;
        if ((pFVar9 == (FScriptContainerElement *)&local_50) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar13 = (longlong)local_48;
        if (local_48 != 0) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,local_48,(ForAnyElementType *)pFVar9,(int *)(pFVar9 + 8),
                             (int *)(pFVar9 + 0xc));
          memcpy((void *)(*(longlong *)&pFVar9->field_0x0 + (longlong)iVar8 * 4),local_50.Data,
                 lVar13 << 2);
        }
      }
      if (local_50.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data);
      }
      local_res8 = local_res8 + 0x10;
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < this->NumCategorySlots);
  }
  return;
}

// RestoreCategories @ 146d5ab10

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
UGameplayDebuggerLocalController::RestoreCategories(UGameplayDebuggerLocalController *this)

{
  UObject *pUVar1;
  AGameplayDebuggerCategoryReplicator *pAVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UClass *this_00;
  undefined1 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  
  this_00 = UGameplayDebuggerUserSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (*(int *)(pUVar1 + 2) != *(int *)&pUVar1[3].field_0x4) {
    uVar11 = 0;
    lVar12 = (longlong)(((this->CachedReplicator).field0_0x0.DebugPtr)->Categories).ArrayNum;
    if (0 < lVar12) {
      lVar13 = 0;
      do {
        pAVar2 = (this->CachedReplicator).field0_0x0.DebugPtr;
        uVar8 = 0;
        if ((int)uVar11 < (pAVar2->Categories).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar3 = (pAVar2->Categories).AllocatorInstance.Data;
        pTVar4 = *(TReferenceControllerBase<1> **)(pFVar3 + lVar13 + 8);
        lVar5 = *(longlong *)(pFVar3 + lVar13);
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        lVar5 = *(longlong *)(lVar5 + 0x48);
        uVar8 = ::GetTypeHash((FNameEntryId)(uint)lVar5);
        if (*(int *)(pUVar1 + 2) != *(int *)&pUVar1[3].field_0x4) {
          puVar10 = &pUVar1[3].field_0x8;
          if (*(undefined1 **)&pUVar1[3].field_0x10 != (undefined1 *)0x0) {
            puVar10 = *(undefined1 **)&pUVar1[3].field_0x10;
          }
          iVar9 = *(int *)(puVar10 +
                          (ulonglong)
                          (*(int *)&pUVar1[3].field_0x18 - 1U &
                          (int)((ulonglong)lVar5 >> 0x20) + uVar8) * 4);
          if (iVar9 != -1) {
            do {
              if (*(longlong *)(*(longlong *)&pUVar1[1].field_0x20 + (longlong)iVar9 * 0x10) ==
                  lVar5) goto LAB_146d5ac4c;
              iVar9 = *(int *)(*(longlong *)&pUVar1[1].field_0x20 + 8 + (longlong)iVar9 * 0x10);
            } while (iVar9 != -1);
          }
        }
        iVar9 = -1;
LAB_146d5ac4c:
        bVar7 = AGameplayDebuggerCategoryReplicator::IsCategoryEnabled
                          ((this->CachedReplicator).field0_0x0.DebugPtr,uVar11);
        if ((iVar9 != -1) != bVar7) {
          AGameplayDebuggerCategoryReplicator::SetCategoryEnabled
                    ((this->CachedReplicator).field0_0x0.DebugPtr,uVar11,iVar9 != -1);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 0x10;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  return;
}

// StaticRegisterNativesUGameplayDebuggerLocalController @ 146d5c5d0

void __cdecl
UGameplayDebuggerLocalController::StaticRegisterNativesUGameplayDebuggerLocalController(void)

{
  return;
}

// ToggleActivation @ 146d5c8b0

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
UGameplayDebuggerLocalController::ToggleActivation
          (UGameplayDebuggerLocalController *this,ESelectionMode param_1)

{
  FTimerHandle *pFVar1;
  undefined4 uVar2;
  AGameplayDebuggerCategoryReplicator *pAVar3;
  uint uVar4;
  UWorld *this_00;
  FTimerManager *pFVar5;
  FTimerData *pFVar6;
  uint uVar7;
  
  pAVar3 = (this->CachedReplicator).field0_0x0.DebugPtr;
  if (pAVar3 != (AGameplayDebuggerCategoryReplicator *)0x0) {
    this_00 = AActor::GetWorld((AActor *)pAVar3);
    uVar2 = *(undefined4 *)&this->field_0x78;
    if ((ZPULL(uVar2,2,1) == 0) || ((this->StartSelectingActorHandle).Handle != 0)) {
      uVar7 = 0;
      uVar4 = (uVar2 * 2 ^ uVar2) & 0x10U ^ uVar2;
      pAVar3 = (this->CachedReplicator).field0_0x0.DebugPtr;
      *(uint *)&this->field_0x78 = uVar4;
      if (pAVar3->bIsEnabled == false) {
        uVar7 = 8;
      }
      uVar7 = uVar7 | uVar4 & 0xfffffff7;
      *(uint *)&this->field_0x78 = uVar7;
      AGameplayDebuggerCategoryReplicator::SetEnabled(pAVar3,(bool)((byte)(uVar7 >> 3) & 1));
      uVar2 = *(undefined4 *)&this->field_0x78;
      if (this->bIsLocallyEnabled == 0) {
        if (GAreScreenMessagesEnabled == false) {
          GAreScreenMessagesEnabled = ZPULL(uVar2,6,1);
        }
      }
      else {
        *(uint *)&this->field_0x78 = ((uint)GAreScreenMessagesEnabled << 6 ^ uVar2) & 0x40 ^ uVar2;
        GAreScreenMessagesEnabled = false;
        (this->DebugActorCandidate).field0_0x0.DebugPtr = (AActor *)0x0;
        if (param_1 == BestPawnCandidate) {
          OnSelectActorTick(this);
        }
        if ((this->DebugActorCandidate).field0_0x0.DebugPtr == (AActor *)0x0) {
          OnSelectLocalPlayer(this);
        }
      }
    }
    pFVar5 = UWorld::GetTimerManager(this_00);
    pFVar6 = FTimerManager::FindTimer(pFVar5,&this->StartSelectingActorHandle);
    if (pFVar6 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (pFVar5,(FTimerHandle)(this->StartSelectingActorHandle).Handle);
    }
    (this->StartSelectingActorHandle).Handle = 0;
    pFVar5 = UWorld::GetTimerManager(this_00);
    pFVar1 = &this->SelectActorTickHandle;
    pFVar6 = FTimerManager::FindTimer(pFVar5,pFVar1);
    if (pFVar6 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar5,(FTimerHandle)pFVar1->Handle);
    }
    pFVar1->Handle = 0;
    AActor::MarkComponentsRenderStateDirty((AActor *)(this->CachedReplicator).field0_0x0.DebugPtr);
  }
  uVar4 = *(uint *)&this->field_0x78;
  pAVar3 = (this->CachedReplicator).field0_0x0.DebugPtr;
  uVar7 = uVar4 & 0xfffffffb;
  (this->SelectActorTickHandle).Handle = 0;
  (this->StartSelectingActorHandle).Handle = 0;
  this->bIsSelectingActor = 0;
  if ((pAVar3 != (AGameplayDebuggerCategoryReplicator *)0x0) && (((uVar7 >> 1 ^ uVar7) & 8) != 0)) {
    AGameplayDebuggerPlayerManager::RefreshInputBindings
              ((this->CachedPlayerManager).field0_0x0.DebugPtr,pAVar3);
    return;
  }
  return;
}

// ToggleSlotState @ 146d5cca0

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
UGameplayDebuggerLocalController::ToggleSlotState
          (UGameplayDebuggerLocalController *this,int param_1)

{
  undefined1 *this_00;
  AGameplayDebuggerCategoryReplicator *pAVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  UObject *this_01;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  UClass *this_02;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  FName local_res18;
  longlong local_res20;
  FName local_48 [2];
  
  lVar13 = (longlong)param_1;
  if ((((this->CachedReplicator).field0_0x0.DebugPtr != (AGameplayDebuggerCategoryReplicator *)0x0)
      && (-1 < param_1)) && (param_1 < (this->SlotCategoryIds).ArrayNum)) {
    uVar12 = (uint)~param_1 >> 0x1f;
    uVar10 = 0;
    if (param_1 < (this->SlotCategoryIds).ArrayNum) {
      uVar10 = uVar12;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(int *)((this->SlotCategoryIds).AllocatorInstance.Data + lVar13 * 0x10 + 8) != 0) {
      uVar10 = 0;
      if (param_1 < (this->SlotCategoryIds).ArrayNum) {
        uVar10 = uVar12;
      }
      pAVar1 = (this->CachedReplicator).field0_0x0.DebugPtr;
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = (this->SlotCategoryIds).AllocatorInstance.Data;
      if ((*(int *)(pFVar2 + lVar13 * 0x10 + 8) < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar6 = AGameplayDebuggerCategoryReplicator::IsCategoryEnabled
                        (pAVar1,**(int **)(pFVar2 + lVar13 * 0x10));
      uVar10 = 0;
      lVar11 = 0;
      while( true ) {
        uVar9 = 0;
        if (param_1 < (this->SlotCategoryIds).ArrayNum) {
          uVar9 = uVar12;
        }
        local_res20 = lVar11;
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(int *)((this->SlotCategoryIds).AllocatorInstance.Data + lVar13 * 0x10 + 8) <=
            (int)uVar10) break;
        uVar9 = 0;
        if (param_1 < (this->SlotCategoryIds).ArrayNum) {
          uVar9 = uVar12;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = (this->SlotCategoryIds).AllocatorInstance.Data;
        uVar9 = 0;
        if ((int)uVar10 < *(int *)(pFVar2 + lVar13 * 0x10 + 8)) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar9 = *(uint *)(lVar11 + *(longlong *)(pFVar2 + lVar13 * 0x10));
        AGameplayDebuggerCategoryReplicator::SetCategoryEnabled
                  ((this->CachedReplicator).field0_0x0.DebugPtr,uVar9,!bVar6);
        pAVar1 = (this->CachedReplicator).field0_0x0.DebugPtr;
        uVar8 = 0;
        if ((int)uVar9 < (pAVar1->Categories).ArrayNum) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = (pAVar1->Categories).AllocatorInstance.Data;
        lVar11 = *(longlong *)(pFVar2 + (longlong)(int)uVar9 * 0x10);
        pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)(int)uVar9 * 0x10 + 8);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        FVar4 = *(FName *)(lVar11 + 0x48);
        local_48[0] = FVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        this_02 = UGameplayDebuggerUserSettings::StaticClass();
        if ((this_02->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(this_02);
        }
        this_01 = (this_02->ClassDefaultObject).field0_0x0.DebugPtr;
        this_00 = &this_01[1].field_0x20;
        if (!bVar6) {
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                    ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this_00,
                     &local_res18,(bool *)local_48);
        }
        else {
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
                    ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this_00,FVar4);
        }
        UObject::SaveConfig(this_01,0x4000,(wchar_t *)0x0,GConfig,true);
        uVar10 = uVar10 + 1;
        lVar11 = local_res20 + 4;
      }
    }
  }
  return;
}

