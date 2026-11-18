// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 79

// StaticClass @ 14a6b6340

UClass * __cdecl UEnhancedInputUserSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedInputUserSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedInputUserSettings",
               &Z_Registration_Info_UClass_UEnhancedInputUserSettings.InnerSingleton,
               StaticRegisterNativesUEnhancedInputUserSettings,0x1a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"GameUserSettings",InternalConstructor<UEnhancedInputUserSettings>,
               InternalVTableHelperCtorCaller<UEnhancedInputUserSettings>,local_res8,
               USaveGame::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedInputUserSettings.InnerSingleton;
}

// UEnhancedInputUserSettings @ 14a6cbb10

UEnhancedInputUserSettings * __thiscall
UEnhancedInputUserSettings::UEnhancedInputUserSettings
          (UEnhancedInputUserSettings *this,FVTableHelper *param_1)

{
  USaveGame::USaveGame((USaveGame *)this,param_1);
  this->_padding_ = (longlong)&___7UEnhancedInputUserSettings__6B_;
  (this->DeferredSettingsChangedTimerHandle).Handle = 0;
  *(undefined8 *)&this->OnSettingsChanged = 0;
  *(undefined8 *)&(this->OnSettingsChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnSettingsChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnSettingsApplied = 0;
  *(undefined8 *)&(this->OnSettingsApplied).field_0x8 = 0;
  *(undefined8 *)&(this->OnSettingsApplied).field_0x10 = 0;
  *(undefined8 *)&this->OnKeyProfileChanged = 0;
  *(undefined8 *)&(this->OnKeyProfileChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnKeyProfileChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnMappingContextRegistered = 0;
  *(undefined8 *)&(this->OnMappingContextRegistered).field_0x8 = 0;
  *(undefined8 *)&(this->OnMappingContextRegistered).field_0x10 = 0;
  (this->CurrentProfileIdentifier).TagName = (FName)0x0;
  (this->CurrentProfileIdentifierString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CurrentProfileIdentifierString).Data.ArrayNum = 0;
  (this->CurrentProfileIdentifierString).Data.ArrayMax = 0;
  *(undefined8 *)&this->SavedKeyProfiles = 0;
  *(undefined8 *)&(this->SavedKeyProfiles).field_0x8 = 0;
  *(undefined8 *)&(this->SavedKeyProfiles).field_0x20 = 0;
  *(undefined4 *)&(this->SavedKeyProfiles).field_0x28 = 0;
  *(undefined4 *)&(this->SavedKeyProfiles).field_0x2c = 0x80;
  *(undefined4 *)&(this->SavedKeyProfiles).field_0x34 = 0;
  *(undefined4 *)&(this->SavedKeyProfiles).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SavedKeyProfiles).field_0x40 = 0;
  *(undefined4 *)&(this->SavedKeyProfiles).field_0x48 = 0;
  *(undefined8 *)&this->SavedKeyProfilesMap = 0;
  *(undefined8 *)&(this->SavedKeyProfilesMap).field_0x8 = 0;
  *(undefined8 *)&(this->SavedKeyProfilesMap).field_0x20 = 0;
  *(undefined4 *)&(this->SavedKeyProfilesMap).field_0x28 = 0;
  *(undefined4 *)&(this->SavedKeyProfilesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SavedKeyProfilesMap).field_0x34 = 0;
  *(undefined4 *)&(this->SavedKeyProfilesMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SavedKeyProfilesMap).field_0x40 = 0;
  *(undefined4 *)&(this->SavedKeyProfilesMap).field_0x48 = 0;
  (this->OwningLocalPlayer).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->RegisteredMappingContexts).Elements = 0;
  *(undefined8 *)&(this->RegisteredMappingContexts).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredMappingContexts).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredMappingContexts).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredMappingContexts).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredMappingContexts).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->RegisteredMappingContexts).Elements.field_0x30 = 0xffffffff;
  (this->RegisteredMappingContexts).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RegisteredMappingContexts).HashSize = 0;
  return this;
}

// UEnhancedInputUserSettings @ 14a6cbc60

UEnhancedInputUserSettings * __thiscall
UEnhancedInputUserSettings::UEnhancedInputUserSettings
          (UEnhancedInputUserSettings *this,FObjectInitializer *param_1)

{
  USaveGame::USaveGame((USaveGame *)this,param_1);
  this->_padding_ = (longlong)&___7UEnhancedInputUserSettings__6B_;
  (this->DeferredSettingsChangedTimerHandle).Handle = 0;
  *(undefined8 *)&this->OnSettingsChanged = 0;
  *(undefined8 *)&(this->OnSettingsChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnSettingsChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnSettingsApplied = 0;
  *(undefined8 *)&(this->OnSettingsApplied).field_0x8 = 0;
  *(undefined8 *)&(this->OnSettingsApplied).field_0x10 = 0;
  *(undefined8 *)&this->OnKeyProfileChanged = 0;
  *(undefined8 *)&(this->OnKeyProfileChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnKeyProfileChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnMappingContextRegistered = 0;
  *(undefined8 *)&(this->OnMappingContextRegistered).field_0x8 = 0;
  *(undefined8 *)&(this->OnMappingContextRegistered).field_0x10 = 0;
  (this->CurrentProfileIdentifier).TagName = (FName)0x0;
  (this->CurrentProfileIdentifierString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CurrentProfileIdentifierString).Data.ArrayNum = 0;
  (this->CurrentProfileIdentifierString).Data.ArrayMax = 0;
  *(undefined8 *)&this->SavedKeyProfiles = 0;
  *(undefined8 *)&(this->SavedKeyProfiles).field_0x8 = 0;
  *(undefined8 *)&(this->SavedKeyProfiles).field_0x20 = 0;
  *(undefined4 *)&(this->SavedKeyProfiles).field_0x28 = 0;
  *(undefined4 *)&(this->SavedKeyProfiles).field_0x2c = 0x80;
  *(undefined4 *)&(this->SavedKeyProfiles).field_0x34 = 0;
  *(undefined4 *)&(this->SavedKeyProfiles).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SavedKeyProfiles).field_0x40 = 0;
  *(undefined4 *)&(this->SavedKeyProfiles).field_0x48 = 0;
  *(undefined8 *)&this->SavedKeyProfilesMap = 0;
  *(undefined8 *)&(this->SavedKeyProfilesMap).field_0x8 = 0;
  *(undefined8 *)&(this->SavedKeyProfilesMap).field_0x20 = 0;
  *(undefined4 *)&(this->SavedKeyProfilesMap).field_0x28 = 0;
  *(undefined4 *)&(this->SavedKeyProfilesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SavedKeyProfilesMap).field_0x34 = 0;
  *(undefined4 *)&(this->SavedKeyProfilesMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SavedKeyProfilesMap).field_0x40 = 0;
  *(undefined4 *)&(this->SavedKeyProfilesMap).field_0x48 = 0;
  (this->OwningLocalPlayer).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->RegisteredMappingContexts).Elements = 0;
  *(undefined8 *)&(this->RegisteredMappingContexts).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredMappingContexts).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredMappingContexts).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredMappingContexts).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredMappingContexts).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->RegisteredMappingContexts).Elements.field_0x30 = 0xffffffff;
  (this->RegisteredMappingContexts).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RegisteredMappingContexts).HashSize = 0;
  return this;
}

// ~UEnhancedInputUserSettings @ 14a6cf2d0

void __thiscall
UEnhancedInputUserSettings::~UEnhancedInputUserSettings(UEnhancedInputUserSettings *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&___7UEnhancedInputUserSettings__6B_;
  (this->RegisteredMappingContexts).HashSize = 0;
  FVar1 = (this->RegisteredMappingContexts).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UInputMappingContext_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UInputMappingContext_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RegisteredMappingContexts).Elements);
  *(undefined4 *)&(this->SavedKeyProfilesMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SavedKeyProfilesMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SavedKeyProfilesMap);
  *(undefined4 *)&(this->SavedKeyProfiles).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SavedKeyProfiles).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGameplayTag,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGameplayTag,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGameplayTag,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SavedKeyProfiles);
  pFVar3 = (this->CurrentProfileIdentifierString).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pvVar2 = *(void **)&(this->OnMappingContextRegistered).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMappingContextRegistered);
  pvVar2 = *(void **)&(this->OnKeyProfileChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnKeyProfileChanged);
  pvVar2 = *(void **)&(this->OnSettingsApplied).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSettingsApplied);
  pvVar2 = *(void **)&(this->OnSettingsChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSettingsChanged);
  USaveGame::~USaveGame((USaveGame *)this);
  return;
}

// ApplySettings @ 14a6d5160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UEnhancedInputUserSettings::ApplySettings(UEnhancedInputUserSettings *this)

{
  if (5 < (byte)LogEnhancedInput._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSettingsApplied,
             (void *)0x0);
  return;
}

// AsyncSaveSettings @ 14a6d51a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UEnhancedInputUserSettings::AsyncSaveSettings(UEnhancedInputUserSettings *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ULocalPlayer *this_00;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(FString_const_&,int,bool),FDefaultDelegateUserPolicy> *pTVar6;
  UEnhancedInputLocalPlayerSubsystem *pUVar7;
  longlong *plVar8;
  UEnhancedInputUserSettings *local_res8;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  FString local_90;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  TDelegate<void___cdecl(FString_const_&,int,bool),FDefaultDelegateUserPolicy> local_48;
  
  this_00 = (ULocalPlayer *)FWeakObjectPtr::Get(&(this->OwningLocalPlayer).WeakPtr);
  if (this_00 == (ULocalPlayer *)0x0) {
    if (1 < (byte)LogEnhancedInput._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    }
    return;
  }
  local_a8 = (undefined1  [8])0x0;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_68);
  local_50 = &local_a0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_a0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__H_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUEnhancedInputUserSettings____A6AXAEBVFString__H_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UEnhancedInputUserSettings *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UEnhancedInputUserSettings *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = _vcall__728__flat______;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  pTVar6 = TDelegate<void___cdecl(FString_const_&,int,bool),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(FString_const_&,int,bool),FDefaultDelegateUserPolicy>
                     (&local_48,
                      (TDelegate<void___cdecl(FString_const_&,int,bool),FDefaultDelegateUserPolicy>
                       *)local_a8);
  iVar3 = (**(code **)(this_00->_padding_ + 0x340))(this_00);
  pUVar7 = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(this_00);
  plVar8 = (longlong *)(**(code **)(pUVar7->_padding_ + 0x10))(&pUVar7->_padding_);
  if (plVar8 == (longlong *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PlayerInput",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\UserSettings\\EnhancedInputUserSettings.cpp"
                       ,0x333,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(*plVar8 + 0x338))(plVar8,&local_90);
  UGameplayStatics::AsyncSaveGameToSlot((USaveGame *)this,&local_90,iVar3,pTVar6);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_80);
  if ((local_a0.DelegateSize != 0) &&
     (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a0,0,0,0x10);
    local_a0.DelegateSize = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  return;
}

// CreateNewKeyProfile @ 14a6d7660

/* WARNING: Enum "Type": Some values do not have unique names */

UEnhancedPlayerMappableKeyProfile * __thiscall
UEnhancedInputUserSettings::CreateNewKeyProfile
          (UEnhancedInputUserSettings *this,FPlayerMappableKeyProfileCreationArgs *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  TSet<TObjectPtr<UInputMappingContext_const_>,DefaultKeyFuncs<TObjectPtr<UInputMappingContext_const_>,0>,FDefaultSetAllocator>
  *pTVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UClass *pUVar7;
  UEnhancedPlayerMappableKeyProfile *pUVar8;
  UClass *pUVar9;
  longlong lVar10;
  UClass *pUVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  FString *pFVar19;
  undefined1 local_res18 [16];
  undefined4 uStack_94;
  UEnhancedPlayerMappableKeyProfile *local_88;
  FString *local_80;
  TSet<TObjectPtr<UInputMappingContext_const_>,DefaultKeyFuncs<TObjectPtr<UInputMappingContext_const_>,0>,FDefaultSetAllocator>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  FString *local_48;
  UEnhancedPlayerMappableKeyProfile **local_40;
  UClass *pUVar15;
  
  pUVar15 = (param_1->ProfileType).Class.field0_0x0.DebugPtr;
  if ((pUVar15 != (UClass *)0x0) &&
     (pUVar7 = UEnhancedPlayerMappableKeyProfile::StaticClass(), pUVar7 != (UClass *)0x0)) {
    iVar13 = (int)pUVar7->_padding_;
    if (((int)pUVar15->_padding_ < iVar13) ||
       ((longlong *)*(undefined1 **)(pUVar15->_padding_ + (longlong)iVar13 * 8) !=
        &pUVar7->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && ((param_1->ProfileType).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
      pFVar19 = &param_1->ProfileStringIdentifier;
      local_80 = pFVar19;
      pUVar8 = (UEnhancedPlayerMappableKeyProfile *)
               (**(code **)(this->_padding_ + 0x360))(this,pFVar19);
      if (pUVar8 == (UEnhancedPlayerMappableKeyProfile *)0x0) {
        pUVar15 = (param_1->ProfileType).Class.field0_0x0.DebugPtr;
        pUVar7 = (UClass *)0x0;
        uVar12 = 0;
        pUVar11 = pUVar7;
        if ((pUVar15 != (UClass *)0x0) &&
           (pUVar9 = UEnhancedPlayerMappableKeyProfile::StaticClass(), pUVar9 != (UClass *)0x0)) {
          iVar13 = (int)pUVar9->_padding_;
          if (((int)pUVar15->_padding_ < iVar13) ||
             ((longlong *)*(undefined1 **)(pUVar15->_padding_ + (longlong)iVar13 * 8) !=
              &pUVar9->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            pUVar11 = (param_1->ProfileType).Class.field0_0x0.DebugPtr;
          }
        }
        pUVar8 = NewObject<UEnhancedPlayerMappableKeyProfile>
                           ((UObject *)this,pUVar11,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                            (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        ::FString::operator=(&pUVar8->ProfileIdentifierString,pFVar19);
        FText::operator=(&pUVar8->DisplayName,&param_1->DisplayName);
        (pUVar8->OwningUserId).InternalId = (param_1->UserId).InternalId;
        local_88 = pUVar8;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
        local_40 = &local_88;
        local_48 = pFVar19;
        TSet<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FString_const_&,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_&&>_>
                  ((TSet<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>,FDefaultSetAllocator>
                    *)&this->SavedKeyProfilesMap,
                   (TPairInitializer<FString_const_&,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_&&>
                    *)(local_res18 + 8),(bool *)&local_48);
        TStack_70.Array =
             (TBitArray<FDefaultBitArrayAllocator> *)
             &(this->RegisteredMappingContexts).Elements.field_0x10;
        uVar5 = 1;
        uVar18 = *(uint *)&(this->RegisteredMappingContexts).Elements.field_0x28;
        local_78 = &this->RegisteredMappingContexts;
        uVar14 = 0;
        uVar6 = uVar12;
        if (uVar18 != 0) {
          puVar17 = *(uint **)&(this->RegisteredMappingContexts).Elements.field_0x20;
          if (puVar17 == (uint *)0x0) {
            puVar17 = (uint *)TStack_70.Array;
          }
          uVar6 = *puVar17;
          pUVar15 = pUVar7;
          uVar14 = 0;
          uVar12 = 0;
          while (uVar6 == 0) {
            iVar13 = (int)pUVar7;
            uVar14 = (int)pUVar15 + 0x20;
            pUVar15 = (UClass *)(ulonglong)uVar14;
            uVar12 = iVar13 + 1;
            pUVar7 = (UClass *)(ulonglong)uVar12;
            uVar6 = uVar18;
            if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
            goto LAB_14a6d788e;
            uVar6 = puVar17[(longlong)iVar13 + 1];
          }
          uVar5 = -uVar6 & uVar6;
          uVar1 = (ulonglong)uVar5 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          uVar6 = (uVar14 - 1) + (int)lVar10;
          if ((int)uVar18 < (int)uVar6) {
            uVar6 = uVar18;
          }
        }
LAB_14a6d788e:
        uVar18 = *(uint *)&(this->RegisteredMappingContexts).Elements.field_0x28;
        TStack_70._padding_ = CONCAT44(uVar5,uVar12);
        uVar12 = uVar18 & 0xffffffe0;
        TStack_70.CurrentBitIndex = uVar6;
        TStack_70.UnvisitedBitMask = 0xffffffff;
        iVar13 = (int)uVar18 >> 5;
        TStack_70._28_4_ = uVar6;
        TStack_70.BaseBitIndex = uVar14;
        uStack_50 = CONCAT44(uStack_94,
                             *(int *)&(this->RegisteredMappingContexts).Elements.field_0x8 -
                             *(int *)&(this->RegisteredMappingContexts).Elements.field_0x34);
        if (((int)uVar18 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pUVar8 = (UEnhancedPlayerMappableKeyProfile *)(*pcVar2)();
          return pUVar8;
        }
        uVar14 = *(uint *)&(this->RegisteredMappingContexts).Elements.field_0x28;
        if (uVar18 != uVar14) {
          puVar16 = *(undefined1 **)&(this->RegisteredMappingContexts).Elements.field_0x20;
          if (puVar16 == (undefined1 *)0x0) {
            puVar16 = &(this->RegisteredMappingContexts).Elements.field_0x10;
          }
          uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
          while (uVar18 == 0) {
            lVar10 = (longlong)iVar13;
            uVar12 = uVar12 + 0x20;
            iVar13 = iVar13 + 1;
            uVar18 = uVar14;
            if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
            goto LAB_14a6d799e;
            uVar18 = *(uint *)(puVar16 + lVar10 * 4 + 4);
          }
          uVar1 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
          lVar10 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          uVar18 = (int)lVar10 + -1 + uVar12;
          if ((int)uVar14 < (int)uVar18) {
            uVar18 = uVar14;
          }
        }
LAB_14a6d799e:
        while( true ) {
          pTVar3 = local_78;
          if (*(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34 !=
              (int)uStack_50) {
            `TSparseArray<TSparseSetElement<TObjectPtr<UInputMappingContext_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          if (((TStack_70.CurrentBitIndex == uVar18) &&
              (TStack_70.Array ==
               (TBitArray<FDefaultBitArrayAllocator> *)
               &(this->RegisteredMappingContexts).Elements.field_0x10)) &&
             (pFVar19 = local_80, pTVar3 == &this->RegisteredMappingContexts)) break;
          (**(code **)(this->_padding_ + 0x378))
                    (this,pUVar8,
                     *(undefined8 *)
                      (*(longlong *)&pTVar3->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10))
          ;
          TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
        }
      }
      else if (2 < (byte)LogEnhancedInput._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
      }
      if (param_1->bSetAsCurrentProfile != 0) {
        (**(code **)(this->_padding_ + 0x338))(this,pFVar19);
      }
      if (5 < (byte)LogEnhancedInput._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
      }
      return pUVar8;
    }
  }
  if (1 < (byte)LogEnhancedInput._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
  }
  return (UEnhancedPlayerMappableKeyProfile *)0x0;
}

// DetermineHardwareDeviceForActionMapping @ 14a6d8ab0

FHardwareDeviceIdentifier * __thiscall
UEnhancedInputUserSettings::DetermineHardwareDeviceForActionMapping
          (UEnhancedInputUserSettings *this,FHardwareDeviceIdentifier *__return_storage_ptr__,
          FEnhancedActionKeyMapping *param_1)

{
  (**(code **)(this->_padding_ + 0x380))();
  return __return_storage_ptr__;
}

// DetermineHardwareDeviceForActionMapping @ 14a6d8ae0

FHardwareDeviceIdentifier * __thiscall
UEnhancedInputUserSettings::DetermineHardwareDeviceForActionMapping
          (UEnhancedInputUserSettings *this,FHardwareDeviceIdentifier *__return_storage_ptr__,
          FEnhancedActionKeyMapping *param_1,UInputMappingContext *param_2)

{
  FName FVar1;
  undefined8 uVar2;
  undefined3 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar2 = FHardwareDeviceIdentifier::Invalid._16_8_;
  FVar1 = FHardwareDeviceIdentifier::Invalid.HardwareDeviceIdentifier;
  __return_storage_ptr__->InputClassName = FHardwareDeviceIdentifier::Invalid.InputClassName;
  __return_storage_ptr__->HardwareDeviceIdentifier = FVar1;
  uVar5 = FHardwareDeviceIdentifier::Invalid._16_8_;
  FHardwareDeviceIdentifier::Invalid.PrimaryDeviceType = (EHardwareDevicePrimaryType)uVar2;
  FHardwareDeviceIdentifier::Invalid._17_3_ = SUB83(uVar2,1);
  uVar3 = FHardwareDeviceIdentifier::Invalid._17_3_;
  FHardwareDeviceIdentifier::Invalid.SupportedFeaturesMask = SUB84(uVar2,4);
  iVar4 = FHardwareDeviceIdentifier::Invalid.SupportedFeaturesMask;
  __return_storage_ptr__->PrimaryDeviceType = FHardwareDeviceIdentifier::Invalid.PrimaryDeviceType;
  FHardwareDeviceIdentifier::Invalid._16_8_ = uVar5;
  *(undefined3 *)&__return_storage_ptr__->field_0x11 = uVar3;
  __return_storage_ptr__->SupportedFeaturesMask = iVar4;
  return __return_storage_ptr__;
}

// FEnhancedInputUserSettingsApplied_DelegateWrapper @ 14a6dc790

void __cdecl
UEnhancedInputUserSettings::FEnhancedInputUserSettingsApplied_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FEnhancedInputUserSettingsChanged_DelegateWrapper @ 14a6dc7a0

void __cdecl
UEnhancedInputUserSettings::FEnhancedInputUserSettingsChanged_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UEnhancedInputUserSettings *param_2)

{
  UEnhancedInputUserSettings *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FMappableKeyProfileChanged_DelegateWrapper @ 14a6dc880

void __cdecl
UEnhancedInputUserSettings::FMappableKeyProfileChanged_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UEnhancedPlayerMappableKeyProfile *param_2)

{
  UEnhancedPlayerMappableKeyProfile *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FMappingContextRegisteredWithSettings_DelegateWrapper @ 14a6dc8a0

void __cdecl
UEnhancedInputUserSettings::FMappingContextRegisteredWithSettings_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UInputMappingContext *param_2)

{
  UInputMappingContext *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FindCurrentMappingForSlot @ 14a6dcfb0

/* WARNING: Enum "Type": Some values do not have unique names */

FPlayerKeyMapping * __thiscall
UEnhancedInputUserSettings::FindCurrentMappingForSlot
          (UEnhancedInputUserSettings *this,FName param_1,EPlayerMappableKeySlot param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  EPlayerMappableKeySlot EVar6;
  longlong *plVar7;
  bool bVar8;
  longlong *plVar9;
  FPlayerKeyMapping *pFVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  undefined1 local_res8 [8];
  FName local_res10;
  EPlayerMappableKeySlot local_res18;
  int local_res20;
  FString local_b8;
  longlong *local_a8;
  int iStack_a0;
  uint uStack_9c;
  TBitArray<FDefaultBitArrayAllocator> *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  local_res10 = param_1;
  local_res18 = param_2;
  plVar9 = (longlong *)(**(code **)(this->_padding_ + 800))();
  iVar3 = (int)plVar9[5];
  iStack_a0 = 0;
  uStack_9c = 1;
  local_88 = 0;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar9 + 2);
  iStack_8c = 0;
  if (iVar3 != 0) {
    pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)plVar9[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar9[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar1;
    }
    uVar14 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14a6dd05d;
      uVar14 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uStack_9c = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_9c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iStack_8c = local_88 + -1 + local_res20;
    if (iVar3 < iStack_8c) {
      iStack_8c = iVar3;
    }
  }
LAB_14a6dd05d:
  uVar14 = *(uint *)(plVar9 + 5);
  uVar13 = uVar14 & 0xffffffe0;
  iStack_80 = (int)plVar9[1] - *(int *)((longlong)plVar9 + 0x34);
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = plVar9;
  local_98 = pTVar1;
  iStack_84 = iStack_8c;
  local_78 = plVar9;
  TStack_70.Array = pTVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FPlayerKeyMapping *)(*pcVar5)();
    return pFVar10;
  }
  EVar6 = local_res18;
  uVar4 = *(uint *)(plVar9 + 5);
  if (uVar14 != uVar4) {
    pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)plVar9[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar9[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) &
             *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14a6dd160;
      uVar14 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_14a6dd160:
  while( true ) {
    plVar7 = local_78;
    if ((int)local_78[1] - *(int *)((longlong)local_78 + 0x34) != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<FPlayerKeyMapping>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar14) && (TStack_70.Array == pTVar1)) && (plVar7 == plVar9)
       ) break;
    pFVar10 = (FPlayerKeyMapping *)(*plVar7 + (longlong)TStack_70.CurrentBitIndex * 0xb0);
    if (pFVar10->Slot == EVar6) {
      return pFVar10;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  if (2 < (byte)LogEnhancedInput._0_1_) {
    ::FName::ToString(&local_res10,&local_b8);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  return (FPlayerKeyMapping *)0x0;
}

// FindInputActionForMapping @ 14a6dd220

UInputAction * __thiscall
UEnhancedInputUserSettings::FindInputActionForMapping
          (UEnhancedInputUserSettings *this,FName param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  UInputAction *pUVar10;
  UClass *pUVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  int iVar16;
  undefined1 local_res8 [8];
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  plVar9 = (longlong *)(**(code **)(this->_padding_ + 800))();
  iVar3 = (int)plVar9[5];
  iVar14 = 0;
  uVar7 = 1;
  iVar16 = 0;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar9 + 2);
  iVar8 = 0;
  if (iVar3 != 0) {
    pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)plVar9[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar9[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar1;
    }
    uVar13 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14a6dd2cc;
      uVar13 = *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
    }
    uVar7 = ~(uVar13 - 1) & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar8 = (int)lVar4 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14a6dd2cc:
  uVar13 = *(uint *)(plVar9 + 5);
  uVar12 = uVar13 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar14);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_50._28_4_ = iVar8;
  TStack_50.BaseBitIndex = iVar16;
  uStack_30 = CONCAT44(uStack_5c,(int)plVar9[1] - *(int *)((longlong)plVar9 + 0x34));
  TStack_50.Array = pTVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pUVar10 = (UInputAction *)(*pcVar5)();
    return pUVar10;
  }
  uVar7 = *(uint *)(plVar9 + 5);
  if (uVar13 != uVar7) {
    pTVar15 = pTVar1;
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar9[4] !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)plVar9[4];
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) &
             *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      uVar12 = uVar12 + 0x20;
      uVar13 = uVar7;
      if ((int)(((int)(uVar7 - 1) >> 0x1f & 0x1fU) + (uVar7 - 1)) >> 5 < iVar14) goto LAB_14a6dd3c0;
      uVar13 = *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
    }
    uVar2 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar13 = (int)lVar4 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14a6dd3c0:
  while( true ) {
    if ((int)plVar9[1] - *(int *)((longlong)plVar9 + 0x34) != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<FPlayerKeyMapping>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar13) && (TStack_50.Array == pTVar1)) break;
    pUVar10 = (UInputAction *)
              TPersistentObjectPtr<FSoftObjectPath>::Get
                        ((TPersistentObjectPtr<FSoftObjectPath> *)
                         ((longlong)TStack_50.CurrentBitIndex * 0xb0 + *plVar9 + 0x80));
    if (pUVar10 != (UInputAction *)0x0) {
      pUVar11 = UInputAction::StaticClass();
      iVar3 = (int)pUVar11->_padding_;
      if ((iVar3 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar11->_padding_)) {
        return pUVar10;
      }
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return (UInputAction *)0x0;
}

// FindMappingsInRow @ 14a6dd4d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator> * __thiscall
UEnhancedInputUserSettings::FindMappingsInRow(UEnhancedInputUserSettings *this,FName param_1)

{
  FName FVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator> *pTVar5;
  FName local_res10 [3];
  
  lVar4 = this->_padding_;
  local_res10[0] = param_1;
  uVar3 = (**(code **)(lVar4 + 0x348))();
  lVar4 = (**(code **)(lVar4 + 0x360))(this,uVar3);
  FVar1 = local_res10[0];
  if (lVar4 != 0) {
    uVar2 = ::GetTypeHash(local_res10[0].ComparisonIndex.Value);
    pTVar5 = &TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
              ::FindOrAddImpl<FName_const_&>
                        ((TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
                          *)(lVar4 + 0x58),uVar2 + FVar1.Number,local_res10)->Mappings;
    return pTVar5;
  }
  if (1 < (byte)LogEnhancedInput._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UEnhancedInputUserSettings::FindMappingsInRow'::__l2::
             _dynamic_atexit_destructor_for__EmptyMappings__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &EmptyMappings;
}

// GetActiveKeyProfile @ 14a6de5d0

UEnhancedPlayerMappableKeyProfile * __thiscall
UEnhancedInputUserSettings::GetActiveKeyProfile(UEnhancedInputUserSettings *this)

{
  longlong lVar1;
  undefined8 uVar2;
  UEnhancedPlayerMappableKeyProfile *pUVar3;
  
  lVar1 = this->_padding_;
  uVar2 = (**(code **)(lVar1 + 0x348))();
                    /* WARNING: Could not recover jumptable at 0x00014a6de5fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar3 = (UEnhancedPlayerMappableKeyProfile *)(**(code **)(lVar1 + 0x360))(this,uVar2);
  return pUVar3;
}

// GetActiveKeyProfileId @ 14a6de610

FString * __thiscall
UEnhancedInputUserSettings::GetActiveKeyProfileId(UEnhancedInputUserSettings *this)

{
  return &this->CurrentProfileIdentifierString;
}

// GetAllAvailableKeyProfiles @ 14a6de620

TMap<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>_>
* __thiscall
UEnhancedInputUserSettings::GetAllAvailableKeyProfiles(UEnhancedInputUserSettings *this)

{
  return &this->SavedKeyProfilesMap;
}

// GetAllSavedKeyProfiles @ 14a6de8b0

TMap<FGameplayTag,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>_>
* __thiscall UEnhancedInputUserSettings::GetAllSavedKeyProfiles(UEnhancedInputUserSettings *this)

{
  return &this->SavedKeyProfiles;
}

// GetCurrentKeyProfile @ 14a6dec90

UEnhancedPlayerMappableKeyProfile * __thiscall
UEnhancedInputUserSettings::GetCurrentKeyProfile(UEnhancedInputUserSettings *this)

{
  longlong lVar1;
  undefined8 uVar2;
  UEnhancedPlayerMappableKeyProfile *pUVar3;
  
  lVar1 = this->_padding_;
  uVar2 = (**(code **)(lVar1 + 0x348))();
                    /* WARNING: Could not recover jumptable at 0x00014a6decbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar3 = (UEnhancedPlayerMappableKeyProfile *)(**(code **)(lVar1 + 0x360))(this,uVar2);
  return pUVar3;
}

// GetCurrentKeyProfileIdentifier @ 14a6decd0

FGameplayTag * __thiscall
UEnhancedInputUserSettings::GetCurrentKeyProfileIdentifier(UEnhancedInputUserSettings *this)

{
  return &this->CurrentProfileIdentifier;
}

// GetDefaultKeyProfile @ 14a6df170

UEnhancedPlayerMappableKeyProfile * __thiscall
UEnhancedInputUserSettings::GetDefaultKeyProfile(UEnhancedInputUserSettings *this)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  wchar_t *pwVar6;
  
  iVar2 = UE::EnhancedInput::DefaultProfileIdentifierString.Data.ArrayNum;
  pwVar6 = L"";
  if (iVar2 != 0) {
    pwVar6 = (wchar_t *)
             UE::EnhancedInput::DefaultProfileIdentifierString.Data.AllocatorInstance.Data;
  }
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar5 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  iVar2 = TSet<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>,FDefaultSetAllocator>
                      *)&this->SavedKeyProfilesMap,uVar1,
                     &UE::EnhancedInput::DefaultProfileIdentifierString);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->SavedKeyProfilesMap).field_0x0;
    puVar4 = (undefined8 *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 != (undefined8 *)0x0) {
      return (UEnhancedPlayerMappableKeyProfile *)*puVar4;
    }
  }
  return (UEnhancedPlayerMappableKeyProfile *)0x0;
}

// GetKeyProfileWithId @ 14a6df500

UEnhancedPlayerMappableKeyProfile * __thiscall
UEnhancedInputUserSettings::GetKeyProfileWithId(UEnhancedInputUserSettings *this,FString *param_1)

{
  FObjectPtr_u_0 *pFVar1;
  
  pFVar1 = (FObjectPtr_u_0 *)
           TMapBase<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>_>
           ::Find((TMapBase<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>_>
                   *)&this->SavedKeyProfilesMap,param_1);
  if (pFVar1 != (FObjectPtr_u_0 *)0x0) {
    return (UEnhancedPlayerMappableKeyProfile *)(FObjectPtr)pFVar1->Handle;
  }
  return (UEnhancedPlayerMappableKeyProfile *)0x0;
}

// GetKeyProfileWithIdentifier @ 14a6df530

UEnhancedPlayerMappableKeyProfile * __thiscall
UEnhancedInputUserSettings::GetKeyProfileWithIdentifier
          (UEnhancedInputUserSettings *this,FGameplayTag *param_1)

{
  code *pcVar1;
  UEnhancedPlayerMappableKeyProfile *pUVar2;
  FString local_18;
  
  pcVar1 = *(code **)(this->_padding_ + 0x360);
  ::FName::ToString(&param_1->TagName,&local_18);
  pUVar2 = (UEnhancedPlayerMappableKeyProfile *)(*pcVar1)(this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pUVar2;
}

// GetLocalPlayer @ 14a6df5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayer * __thiscall
UEnhancedInputUserSettings::GetLocalPlayer(UEnhancedInputUserSettings *this)

{
  ULocalPlayer *pUVar1;
  
  pUVar1 = (ULocalPlayer *)FWeakObjectPtr::Get(&(this->OwningLocalPlayer).WeakPtr);
  return pUVar1;
}

// GetPrivateStaticClass @ 14a6e0c60

UClass * __cdecl UEnhancedInputUserSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedInputUserSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedInputUserSettings",
               &Z_Registration_Info_UClass_UEnhancedInputUserSettings.InnerSingleton,
               StaticRegisterNativesUEnhancedInputUserSettings,0x1a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"GameUserSettings",InternalConstructor<UEnhancedInputUserSettings>,
               InternalVTableHelperCtorCaller<UEnhancedInputUserSettings>,local_res8,
               USaveGame::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedInputUserSettings.InnerSingleton;
}

// GetRegisteredInputMappingContexts @ 14a6e2600

TSet<TObjectPtr<UInputMappingContext_const_>,DefaultKeyFuncs<TObjectPtr<UInputMappingContext_const_>,0>,FDefaultSetAllocator>
* __thiscall
UEnhancedInputUserSettings::GetRegisteredInputMappingContexts(UEnhancedInputUserSettings *this)

{
  return &this->RegisteredMappingContexts;
}

// GetSaveFilename @ 14a6e2610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __cdecl
UEnhancedInputUserSettings::GetSaveFilename(FString *__return_storage_ptr__,ULocalPlayer *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  UEnhancedInputLocalPlayerSubsystem *pUVar4;
  longlong *plVar5;
  
  if (param_1 == (ULocalPlayer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LP",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\UserSettings\\EnhancedInputUserSettings.cpp"
                       ,0x330,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  pUVar4 = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(param_1);
  plVar5 = (longlong *)(**(code **)(pUVar4->_padding_ + 0x10))(&pUVar4->_padding_);
  if (plVar5 == (longlong *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PlayerInput",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\UserSettings\\EnhancedInputUserSettings.cpp"
                       ,0x333,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  (**(code **)(*plVar5 + 0x338))(plVar5,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HandleSettingsClassChangedOnLoad @ 14a6e3950

void __thiscall
UEnhancedInputUserSettings::HandleSettingsClassChangedOnLoad
          (UEnhancedInputUserSettings *this,UEnhancedInputUserSettings *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (UEnhancedInputUserSettings *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OldSettingsObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\UserSettings\\EnhancedInputUserSettings.cpp"
                       ,0x313,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->_padding_ == this->_padding_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OldSettingsObject->GetClass() != GetClass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\UserSettings\\EnhancedInputUserSettings.cpp"
                       ,0x316,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a6e39ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d0))(this,param_1);
  return;
}

// HandleSettingsClassChangedOnLoad_Impl @ 14a6e39e0

void __thiscall
UEnhancedInputUserSettings::HandleSettingsClassChangedOnLoad_Impl
          (UEnhancedInputUserSettings *this,UEnhancedInputUserSettings *param_1)

{
  int iVar1;
  int iVar2;
  
  (this->CurrentProfileIdentifier).TagName = (param_1->CurrentProfileIdentifier).TagName;
  if (&this->SavedKeyProfiles != &param_1->SavedKeyProfiles) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->SavedKeyProfiles).field_0x38,
               (int *)&(this->SavedKeyProfiles).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->SavedKeyProfiles).field_0x38,
               *(int *)&(param_1->SavedKeyProfiles).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FGameplayTag,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FGameplayTag,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->SavedKeyProfiles,
                (TSparseArray<TSparseSetElement<TTuple<FGameplayTag,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->SavedKeyProfiles);
  }
  iVar1 = (param_1->CurrentProfileIdentifierString).Data.ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  ::FString::AssignRange
            (&this->CurrentProfileIdentifierString,
             (wchar_t *)(param_1->CurrentProfileIdentifierString).Data.AllocatorInstance.Data,iVar2)
  ;
  if (&this->SavedKeyProfilesMap != &param_1->SavedKeyProfilesMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->SavedKeyProfilesMap).field_0x38,
               (int *)&(this->SavedKeyProfilesMap).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->SavedKeyProfilesMap).field_0x38,
               *(int *)&(param_1->SavedKeyProfilesMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->SavedKeyProfilesMap,
                (TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->SavedKeyProfilesMap);
  }
  return;
}

// Initialize @ 14a6e4340

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
UEnhancedInputUserSettings::Initialize(UEnhancedInputUserSettings *this,ULocalPlayer *param_1)

{
  ForAnyElementType _Src;
  TRefCountPtr<ITextData> TVar1;
  bool bVar2;
  ULocalPlayer *pUVar3;
  undefined8 uVar4;
  longlong lVar5;
  UObject *pUVar6;
  int iVar7;
  ULocalPlayer *local_res8;
  FPlayerMappableKeyProfileCreationArgs local_48;
  
  pUVar3 = (ULocalPlayer *)FWeakObjectPtr::Get(&(this->OwningLocalPlayer).WeakPtr);
  if (param_1 != pUVar3) {
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ULocalPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(this->OwningLocalPlayer).WeakPtr,(FObjectPtr)&local_res8);
    bVar2 = FWeakObjectPtr::IsValid(&(this->OwningLocalPlayer).WeakPtr);
    if (!bVar2) {
      `UEnhancedInputUserSettings::Initialize'::__l2::<lambda_1>::operator()(&local_res8);
    }
    lVar5 = this->_padding_;
    uVar4 = (**(code **)(lVar5 + 0x348))(this);
    lVar5 = (**(code **)(lVar5 + 0x360))(this,uVar4);
    if (lVar5 == 0) {
      pUVar6 = FWeakObjectPtr::Get(&(this->OwningLocalPlayer).WeakPtr);
      FPlayerMappableKeyProfileCreationArgs::FPlayerMappableKeyProfileCreationArgs(&local_48);
      _Src = UE::EnhancedInput::DefaultProfileIdentifierString.Data.AllocatorInstance;
      local_48.ProfileIdentifier.TagName =
           UE::EnhancedInput::TAG_DefaultProfileIdentifier.InternalTag.TagName;
      iVar7 = UE::EnhancedInput::DefaultProfileIdentifierString.Data.ArrayNum;
      local_48.ProfileStringIdentifier.Data.ArrayNum = iVar7;
      if (((iVar7 != 0) || (local_48.ProfileStringIdentifier.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar7,local_48.ProfileStringIdentifier.Data.ArrayMax,
                     (ForAnyElementType *)&local_48.ProfileStringIdentifier,iVar7,
                     &local_48.ProfileStringIdentifier.Data.ArrayMax), iVar7 != 0)) {
        memcpy(local_48.ProfileStringIdentifier.Data.AllocatorInstance.Data,_Src.Data,
               (longlong)iVar7 * 2);
      }
      TVar1.Reference = local_48.DisplayName.TextData.Reference;
      if (pUVar6 == (UObject *)0x0) {
        local_48.UserId.InternalId = -1;
      }
      else {
        local_48.UserId.InternalId = *(int *)&pUVar6[7].field_0x4;
      }
      if (local_48.DisplayName.TextData.Reference !=
          UE::EnhancedInput::DefaultProfileDisplayName.TextData.Reference) {
        local_48.DisplayName.TextData.Reference =
             UE::EnhancedInput::DefaultProfileDisplayName.TextData.Reference;
        if (UE::EnhancedInput::DefaultProfileDisplayName.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*UE::EnhancedInput::DefaultProfileDisplayName.TextData.Reference +
                      8))(UE::EnhancedInput::DefaultProfileDisplayName.TextData.Reference,
                          &local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      local_48.bSetAsCurrentProfile = '\x01';
      local_48.DisplayName.Flags = UE::EnhancedInput::DefaultProfileDisplayName.Flags;
      (**(code **)(this->_padding_ + 0x350))(this,&local_48);
      if (local_48.DisplayName.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.DisplayName.TextData.Reference + 0x10))();
      }
      if (local_48.ProfileStringIdentifier.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.ProfileStringIdentifier.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// IsKeyProfileAvailable @ 14a6e5aa0

bool __thiscall
UEnhancedInputUserSettings::IsKeyProfileAvailable(UEnhancedInputUserSettings *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  iVar3 = TSet<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>,FDefaultSetAllocator>
                      *)&this->SavedKeyProfilesMap,uVar2,param_1);
  return iVar3 != -1;
}

// IsMappingContextRegistered @ 14a6e5b00

bool __thiscall
UEnhancedInputUserSettings::IsMappingContextRegistered
          (UEnhancedInputUserSettings *this,UInputMappingContext *param_1)

{
  int iVar1;
  uint uVar2;
  TObjectPtr<UInputMappingContext_const_>_u_0 local_res8;
  
  local_res8.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (param_1 != (UInputMappingContext *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInputMappingContext *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  iVar1 = TSet<TObjectPtr<UInputMappingContext_const_>,DefaultKeyFuncs<TObjectPtr<UInputMappingContext_const_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UInputMappingContext_const_>_>
                    (&this->RegisteredMappingContexts,uVar2 >> 0x10 ^ uVar2,
                     (TObjectPtr<UInputMappingContext_const_> *)&local_res8.ObjectPtr);
  return iVar1 != -1;
}

// LoadOrCreateSettings @ 14a6e6240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UEnhancedInputUserSettings * __cdecl
UEnhancedInputUserSettings::LoadOrCreateSettings(ULocalPlayer *param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UEnhancedInputLocalPlayerSubsystem *pUVar5;
  longlong *plVar6;
  UEnhancedInputUserSettings *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  undefined1 local_res8 [8];
  UClass *local_res10;
  FName local_res18;
  FName local_res20;
  UClass *local_78;
  FString local_70;
  FString local_60;
  FString local_50 [2];
  
  pUVar11 = (UClass *)0x0;
  if (param_1 == (ULocalPlayer *)0x0) {
    if (4 < (byte)LogEnhancedInput._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    }
    return (UEnhancedInputUserSettings *)0x0;
  }
  pUVar5 = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(param_1);
  plVar6 = (longlong *)(**(code **)(pUVar5->_padding_ + 0x10))(&pUVar5->_padding_);
  if ((plVar6 == (longlong *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PlayerInput",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\UserSettings\\EnhancedInputUserSettings.cpp"
                         ,0x333,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar7 = (UEnhancedInputUserSettings *)(*pcVar2)();
    return pUVar7;
  }
  (**(code **)(*plVar6 + 0x338))(plVar6,local_50);
  iVar4 = (**(code **)(param_1->_padding_ + 0x340))(param_1);
  bVar3 = UGameplayStatics::DoesSaveGameExist(local_50,iVar4);
  pUVar8 = pUVar11;
  if (bVar3) {
    iVar4 = (**(code **)(param_1->_padding_ + 0x340))(param_1);
    pUVar8 = (UClass *)UGameplayStatics::LoadGameFromSlot(local_50,iVar4);
    if (pUVar8 != (UClass *)0x0) {
      pUVar9 = StaticClass();
      iVar4 = (int)pUVar9->_padding_;
      if ((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar9->_padding_)) goto LAB_14a6e633f;
    }
    pUVar8 = (UClass *)0x0;
  }
LAB_14a6e633f:
  pUVar9 = UEnhancedInputDeveloperSettings::StaticClass();
  if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar9);
  }
  pUVar1 = (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar9 = TSoftClassPtr<UEnhancedInputUserSettings>::Get
                     ((TSoftClassPtr<UEnhancedInputUserSettings> *)&pUVar1[2].field_0x18);
  if (pUVar9 == (UClass *)0x0) {
    pUVar9 = StaticClass();
  }
  else {
    pUVar9 = (UClass *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar1[2].field_0x18);
    if (pUVar9 != (UClass *)0x0) {
      pUVar10 = Z_Construct_UClass_UClass_NoRegister();
      iVar4 = (int)pUVar10->_padding_;
      if (((iVar4 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar10->_padding_)) && (pUVar10 = StaticClass(), pUVar10 != (UClass *)0x0)) {
        iVar4 = (int)pUVar10->_padding_;
        if (((int)pUVar9->_padding_ < iVar4) ||
           ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar4 * 8) !=
            &pUVar10->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_14a6e63dc;
      }
    }
    pUVar9 = pUVar11;
  }
LAB_14a6e63dc:
  if (pUVar9 == (UClass *)0x0) {
    local_res8[0] = 0;
    bVar3 = `UEnhancedInputUserSettings::LoadOrCreateSettings'::__l27::<lambda_1>::operator()
                      (local_res8);
    if (!bVar3) goto LAB_14a6e6610;
  }
  if (pUVar8 == (UClass *)0x0) {
    local_res10 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    pUVar9 = (UClass *)UGameplayStatics::CreateSaveGameObject((TSubclassOf<USaveGame>)&local_res10);
    if (pUVar9 != (UClass *)0x0) {
      pUVar8 = StaticClass();
      iVar4 = (int)pUVar8->_padding_;
      if ((iVar4 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar8->_padding_)) goto LAB_14a6e65be;
    }
    pUVar9 = pUVar11;
LAB_14a6e65be:
    pUVar8 = pUVar9;
    if (pUVar9 == (UClass *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4874167975445265722>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\UserSettings\\EnhancedInputUserSettings.cpp"
                         ,0x2c6,"Settings");
      pUVar11 = pUVar9;
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar7 = (UEnhancedInputUserSettings *)(*pcVar2)();
        return pUVar7;
      }
      goto LAB_14a6e6610;
    }
  }
  else if ((UClass *)pUVar8->_padding_ != pUVar9) {
    if (4 < (byte)LogEnhancedInput._0_1_) {
      if (pUVar9 == (UClass *)0x0) {
        ::FString::FString(&local_60,L"None");
      }
      else {
        local_res18 = (FName)pUVar9->_padding_;
        ::FName::ToString(&local_res18,&local_60);
      }
      if (pUVar8->_padding_ == 0) {
        ::FString::FString(&local_70,L"None");
      }
      else {
        local_res20 = *(FName *)(pUVar8->_padding_ + 0x18);
        ::FName::ToString(&local_res20,&local_70);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    local_78 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    pUVar9 = (UClass *)UGameplayStatics::CreateSaveGameObject((TSubclassOf<USaveGame>)&local_78);
    if (pUVar9 == (UClass *)0x0) {
LAB_14a6e6579:
      pUVar9 = pUVar11;
    }
    else {
      pUVar10 = StaticClass();
      iVar4 = (int)pUVar10->_padding_;
      if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar10->_padding_)) goto LAB_14a6e6579;
    }
    if ((pUVar8->_padding_ == pUVar9->_padding_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("OldSettingsObject->GetClass() != GetClass()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\UserSettings\\EnhancedInputUserSettings.cpp"
                           ,0x316,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar7 = (UEnhancedInputUserSettings *)(*pcVar2)();
      return pUVar7;
    }
    (**(code **)(pUVar9->_padding_ + 0x2d0))(pUVar9);
    goto LAB_14a6e65be;
  }
  (**(code **)(pUVar8->_padding_ + 0x2b0))(pUVar8,param_1);
  (**(code **)(pUVar8->_padding_ + 0x2b8))(pUVar8);
  pUVar11 = pUVar8;
LAB_14a6e6610:
  if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
  }
  return (UEnhancedInputUserSettings *)pUVar11;
}

// MapPlayerKey @ 14a6e68a0

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
UEnhancedInputUserSettings::MapPlayerKey
          (UEnhancedInputUserSettings *this,FMapPlayerKeyArgs *param_1,
          FGameplayTagContainer *param_2)

{
  int iVar1;
  code *pcVar2;
  FName FVar3;
  ITextData *pIVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  FString *pFVar10;
  longlong *plVar11;
  longlong lVar12;
  UWorld *pUVar13;
  FTimerManager *pFVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  FTimerHandle FVar17;
  TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator> *this_00;
  int *piVar18;
  UInputPlatformSettings *this_01;
  FHardwareDeviceIdentifier *pFVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  int *piVar23;
  ulonglong uVar24;
  FName local_res10 [2];
  UEnhancedInputUserSettings *local_res20;
  undefined1 local_108 [16];
  TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> local_f8;
  undefined1 local_e8 [176];
  
  bVar8 = ::FName::IsWithinBounds((FNameEntryId)(param_1->MappingName).ComparisonIndex.Value);
  if (!bVar8) {
    local_res10[0] = UE::EnhancedInput::TAG_InvalidMappingName.InternalTag.TagName;
    FGameplayTagContainer::AddTag(param_2,(FGameplayTag *)local_res10);
    return;
  }
  pcVar2 = *(code **)(this->_padding_ + 0x360);
  if ((param_1->ProfileIdString).Data.ArrayNum < 2) {
    pFVar10 = (FString *)(**(code **)(this->_padding_ + 0x348))(this);
  }
  else {
    pFVar10 = &param_1->ProfileIdString;
  }
  plVar11 = (longlong *)(*pcVar2)(this,pFVar10);
  if (plVar11 == (longlong *)0x0) {
    local_res10[0] = UE::EnhancedInput::TAG_NoKeyProfile.InternalTag.TagName;
    FGameplayTagContainer::AddTag(param_2,(FGameplayTag *)local_res10);
    return;
  }
  lVar12 = (**(code **)(*plVar11 + 0x2e8))(plVar11,param_1);
  if (lVar12 != 0) {
    if ((param_1->NewKey).KeyName != *(FName *)(lVar12 + 0x48)) {
      *(byte *)(lVar12 + 0x29) = *(byte *)(lVar12 + 0x29) | 1;
    }
    *(FName *)(lVar12 + 0x48) = (param_1->NewKey).KeyName;
    local_108._0_8_ = (param_1->NewKey).KeyDetails.Object;
    local_108._8_8_ = (param_1->NewKey).KeyDetails.SharedReferenceCount.ReferenceController;
    if ((TReferenceControllerBase<1> *)local_108._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_108._8_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_108._8_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = *(TReferenceControllerBase<1> **)(lVar12 + 0x58);
    *(undefined8 *)(lVar12 + 0x50) = local_108._0_8_;
    *(undefined8 *)(lVar12 + 0x58) = local_108._8_8_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    (**(code **)(this->_padding_ + 0x2e0))(this,lVar12,param_1,0);
    if ((param_1->bDeferOnSettingsChangedBroadcast == '\0') ||
       ((this->DeferredSettingsChangedTimerHandle).Handle != 0)) {
      local_res10[0] = (FName)this;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSettingsChanged,
                 local_res10);
      return;
    }
    pUVar13 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    if (pUVar13 == (UWorld *)0x0) {
      return;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res10[0].ComparisonIndex.Value = 0;
    local_res10[0].Number = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)local_res10,(FObjectPtr)&local_res20);
    pFVar14 = UWorld::GetTimerManager(pUVar13);
    FVar3 = local_res10[0];
    local_108._0_8_ = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
    puVar15 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_108);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &
                 ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar16 = FDelegateHandle::GenerateNewID();
      puVar15[2] = uVar16;
      *puVar15 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UEnhancedInputUserSettings::MapPlayerKey'::`17'::<lambda_1>_>
                  ::_vftable_;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar15[3] = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar15 + 3),(FObjectPtr)&local_res20);
      *(FName *)(puVar15 + 4) = FVar3;
    }
    FVar17 = FTimerManager::SetTimerForNextTick(pFVar14,&local_f8);
                    /* WARNING: Load size is inaccurate */
    (this->DeferredSettingsChangedTimerHandle).Handle = *FVar17.Handle;
    if (local_108._8_4_ != 0) {
      if ((ForElementType<TAlignedBytes<16,16>_>)local_108._0_8_ ==
          (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        return;
      }
      (*(code *)**(undefined8 **)local_108._0_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)local_108,0,0,0x10);
      local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
    }
    if ((ForElementType<TAlignedBytes<16,16>_>)local_108._0_8_ ==
        (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      return;
    }
    FMemory::Free((void *)local_108._0_8_);
    return;
  }
  this_00 = &TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
             ::Find((TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
                     *)(plVar11 + 0xb),param_1->MappingName)->Mappings;
  if (this_00 ==
      (TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator> *)0x0) {
    local_res10[0] = UE::EnhancedInput::TAG_NoMappingRowFound.InternalTag.TagName;
    FGameplayTagContainer::AddTag(param_2,(FGameplayTag *)local_res10);
    if ((byte)LogEnhancedInput._0_1_ < 3) {
      return;
    }
    ::FName::ToString(&param_1->MappingName,(FString *)local_108);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    if ((ForElementType<TAlignedBytes<16,16>_>)local_108._0_8_ ==
        (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      return;
    }
    FMemory::Free((void *)local_108._0_8_);
    return;
  }
  iVar1 = *(int *)&(this_00->Elements).field_0x34;
  iVar9 = *(int *)&(this_00->Elements).field_0x8;
  if (param_1->bCreateMatchingSlotIfNeeded == 0) {
    return;
  }
  if (iVar9 - iVar1 < 1) {
    return;
  }
  uVar24 = 0;
  if (iVar1 == 0) {
    iVar9 = iVar9 + -1;
  }
  else {
    piVar23 = *(int **)&(this_00->Elements).field_0x20;
    iVar1 = *(int *)&(this_00->Elements).field_0x28;
    if (piVar23 == (int *)0x0) {
      piVar23 = (int *)&(this_00->Elements).field_0x10;
    }
    uVar20 = iVar1 + 0x1f;
    piVar18 = piVar23;
    uVar22 = uVar24;
    if (uVar20 >> 5 != 0) {
LAB_14a6e6ba0:
      if (*piVar18 == 0) goto code_r0x00014a6e6ba4;
      iVar5 = 0;
      bVar8 = piVar23[uVar22] != 0;
      if (bVar8) {
        for (; ((uint)piVar23[uVar22] >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
        }
      }
      iVar9 = 0x20;
      if (bVar8) {
        iVar9 = iVar5;
      }
      iVar9 = iVar9 + (int)uVar22 * 0x20;
      if (iVar1 <= iVar9) goto LAB_14a6e6bc9;
      goto LAB_14a6e6bce;
    }
LAB_14a6e6bc9:
    iVar9 = -1;
  }
LAB_14a6e6bce:
  if (iVar9 != -1) {
    uVar24 = (longlong)iVar9 * 0xb0 + *(longlong *)&this_00->Elements;
  }
  FPlayerKeyMapping::FPlayerKeyMapping((FPlayerKeyMapping *)local_e8);
  local_e8._0_8_ = param_1->MappingName;
  local_e8[0x29] = local_e8[0x29] | 1;
  local_e8[0x28] = param_1->Slot;
  if ((param_1->HardwareDeviceId != (FName)0x0) &&
     (this_01 = UInputPlatformSettings::Get(), this_01 != (UInputPlatformSettings *)0x0)) {
    pFVar19 = UInputPlatformSettings::GetHardwareDeviceForClassName
                        (this_01,param_1->HardwareDeviceId);
    if (pFVar19 == (FHardwareDeviceIdentifier *)0x0) {
      if (4 < (byte)LogEnhancedInput._0_1_) {
        ::FName::ToString(&param_1->HardwareDeviceId,(FString *)local_108);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
        if ((ForElementType<TAlignedBytes<16,16>_>)local_108._0_8_ !=
            (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_108._0_8_);
        }
      }
    }
    else {
      local_e8._96_8_ = pFVar19->InputClassName;
      local_e8._104_8_ = pFVar19->HardwareDeviceIdentifier;
      local_e8[0x70] = pFVar19->PrimaryDeviceType;
      local_e8._113_3_ = *(undefined3 *)&pFVar19->field_0x11;
      local_e8._116_4_ = pFVar19->SupportedFeaturesMask;
    }
  }
  uVar7 = local_e8._88_8_;
  FVar3 = (param_1->NewKey).KeyName;
  if (FVar3 != (FName)local_e8._72_8_) {
    local_e8[0x29] = local_e8[0x29] | 1;
  }
  local_108._0_8_ = (param_1->NewKey).KeyDetails.Object;
  local_108._8_8_ = (param_1->NewKey).KeyDetails.SharedReferenceCount.ReferenceController;
  if ((TReferenceControllerBase<1> *)local_108._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_108._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_108._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e8._72_8_ = FVar3;
  local_e8._80_8_ = local_108._0_8_;
  local_e8._88_8_ = local_108._8_8_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)uVar7);
  uVar7 = local_e8._8_8_;
  pIVar4 = *(ITextData **)(uVar24 + 8);
  if ((ITextData *)local_e8._8_8_ != pIVar4) {
    local_e8._8_8_ = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res10);
    }
    if ((ITextData *)uVar7 != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)uVar7 + 0x10))(uVar7);
    }
  }
  uVar7 = local_e8._24_8_;
  local_e8._16_4_ = *(uint *)(uVar24 + 0x10);
  pIVar4 = *(ITextData **)(uVar24 + 0x18);
  if ((ITextData *)local_e8._24_8_ != pIVar4) {
    local_e8._24_8_ = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res10);
    }
    if ((ITextData *)uVar7 != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)uVar7 + 0x10))(uVar7);
    }
  }
  local_e8._32_4_ = *(uint *)(uVar24 + 0x20);
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)(local_e8 + 0x80),
             (TPersistentObjectPtr<FSoftObjectPath> *)(uVar24 + 0x80));
  TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator>::
  Emplace<FPlayerKeyMapping_const_&>(this_00,(FPlayerKeyMapping *)local_res10,(bool *)local_e8);
  (**(code **)(this->_padding_ + 0x2e0))
            (this,(longlong)(int)local_res10[0].ComparisonIndex.Value * 0xb0 +
                  *(longlong *)&this_00->Elements,param_1,0);
  if ((param_1->bDeferOnSettingsChangedBroadcast == '\0') ||
     ((this->DeferredSettingsChangedTimerHandle).Handle != 0)) {
    local_res10[0] = (FName)this;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSettingsChanged,
               local_res10);
  }
  else {
    pUVar13 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    if (pUVar13 != (UWorld *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_res10[0].ComparisonIndex.Value = 0;
      local_res10[0].Number = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)local_res10,(FObjectPtr)&local_res20);
      pFVar14 = UWorld::GetTimerManager(pUVar13);
      FVar3 = local_res10[0];
      local_108._0_8_ = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
      puVar15 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_108);
      if (puVar15 != (undefined8 *)0x0) {
        *puVar15 = &
                   ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar16 = FDelegateHandle::GenerateNewID();
        puVar15[2] = uVar16;
        *puVar15 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UEnhancedInputUserSettings::MapPlayerKey'::`61'::<lambda_2>_>
                    ::_vftable_;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar15[3] = 0;
        local_res20 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar15 + 3),(FObjectPtr)&local_res20);
        *(FName *)(puVar15 + 4) = FVar3;
      }
      FVar17 = FTimerManager::SetTimerForNextTick(pFVar14,&local_f8);
                    /* WARNING: Load size is inaccurate */
      (this->DeferredSettingsChangedTimerHandle).Handle = *FVar17.Handle;
      if (local_108._8_4_ != 0) {
        if ((ForElementType<TAlignedBytes<16,16>_>)local_108._0_8_ ==
            (ForElementType<TAlignedBytes<16,16>_>)0x0) goto LAB_14a6e6eda;
        (*(code *)**(undefined8 **)local_108._0_8_)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)local_108,0,0,0x10);
        local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
      }
      if ((ForElementType<TAlignedBytes<16,16>_>)local_108._0_8_ !=
          (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_108._0_8_);
      }
    }
  }
LAB_14a6e6eda:
  if ((void *)local_e8._152_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e8._152_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_e8._88_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_e8._64_8_);
  if ((ITextData *)local_e8._24_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_e8._24_8_ + 0x10))();
  }
  if ((ITextData *)local_e8._8_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_e8._8_8_ + 0x10))();
  }
  return;
code_r0x00014a6e6ba4:
  uVar21 = (int)uVar22 + 1;
  piVar18 = piVar18 + 1;
  uVar22 = (ulonglong)uVar21;
  if ((int)(uVar20 >> 5) <= (int)uVar21) goto LAB_14a6e6bc9;
  goto LAB_14a6e6ba0;
}

// OnAsyncSaveComplete @ 14a6e8f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UEnhancedInputUserSettings::OnAsyncSaveComplete
          (UEnhancedInputUserSettings *this,FString *param_1,int param_2,bool param_3)

{
  if (param_3) {
    if (4 < (byte)LogEnhancedInput._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
      return;
    }
  }
  else if (1 < (byte)LogEnhancedInput._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    return;
  }
  return;
}

// OnKeyMappingRegistered @ 14a6e8f90

void __thiscall
UEnhancedInputUserSettings::OnKeyMappingRegistered
          (UEnhancedInputUserSettings *this,FPlayerKeyMapping *param_1,
          FEnhancedActionKeyMapping *param_2)

{
  return;
}

// OnKeyMappingRegisteredToProfile @ 14a6e8fa0

void __thiscall
UEnhancedInputUserSettings::OnKeyMappingRegisteredToProfile
          (UEnhancedInputUserSettings *this,UEnhancedPlayerMappableKeyProfile *param_1,
          FPlayerKeyMapping *param_2,FEnhancedActionKeyMapping *param_3)

{
  return;
}

// OnKeyMappingUpdated @ 14a6e8fb0

void __thiscall
UEnhancedInputUserSettings::OnKeyMappingUpdated
          (UEnhancedInputUserSettings *this,FPlayerKeyMapping *param_1,FMapPlayerKeyArgs *param_2,
          bool param_3)

{
  return;
}

// RegisterInputMappingContext @ 14a6ef030

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UEnhancedInputUserSettings::RegisterInputMappingContext
          (UEnhancedInputUserSettings *this,UInputMappingContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  TObjectPtr<UInputMappingContext_const_> local_res10;
  TObjectPtr<UInputMappingContext_const_>_u_0 local_res18;
  UInputMappingContext *local_res20;
  
  if (param_1 == (UInputMappingContext *)0x0) {
    if (1 < (byte)LogEnhancedInput._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4874167975445264829>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\UserSettings\\EnhancedInputUserSettings.cpp"
                       ,0x643,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    local_res18.DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
    }
    uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    iVar4 = TSet<TObjectPtr<UInputMappingContext_const_>,DefaultKeyFuncs<TObjectPtr<UInputMappingContext_const_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TObjectPtr<UInputMappingContext_const_>_>
                      (&this->RegisteredMappingContexts,uVar5 >> 0x10 ^ uVar5,
                       (TObjectPtr<UInputMappingContext_const_> *)&local_res18.ObjectPtr);
    if (iVar4 == -1) {
      local_res20 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      TSet<TObjectPtr<UInputMappingContext_const_>,DefaultKeyFuncs<TObjectPtr<UInputMappingContext_const_>,0>,FDefaultSetAllocator>
      ::Emplace<TObjectPtr<UInputMappingContext_const_>_>
                (&this->RegisteredMappingContexts,&local_res10,(bool *)&local_res20);
      bVar2 = RegisterInputMappingContextInternal(this,param_1);
      return bVar2;
    }
  }
  return false;
}

// RegisterInputMappingContextInternal @ 14a6ef150

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UEnhancedInputUserSettings::RegisterInputMappingContextInternal
          (UEnhancedInputUserSettings *this,UInputMappingContext *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  void *_Src;
  code *pcVar3;
  TRefCountPtr<ITextData> TVar4;
  bool bVar5;
  undefined1 uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  UObject *pUVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  int iVar15;
  ForAnyElementType FVar16;
  int iVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  undefined1 *puVar20;
  uint *puVar21;
  TMap<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>_>
  *pTVar22;
  undefined1 local_res18 [8];
  uint local_res20 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_108;
  FScriptContainerElement *local_f8;
  TMap<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>_>
  *local_f0;
  int iStack_e8;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined1 local_b8 [16];
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  FPlatformUserId local_98;
  TRefCountPtr<ITextData> local_90;
  uint local_88;
  byte local_80;
  undefined1 local_78 [8];
  UInputMappingContext *local_70;
  TMap<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (param_1 == (UInputMappingContext *)0x0) {
    if (1 < (byte)LogEnhancedInput._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4874167975445264808>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\UserSettings\\EnhancedInputUserSettings.cpp"
                       ,0x658,"false");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    return false;
  }
  pUVar10 = FWeakObjectPtr::Get(&(this->OwningLocalPlayer).WeakPtr);
  iVar17 = 0;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  TMapBase<FString,FInputMappingContextMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInputMappingContextMappingData,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,FInputMappingContextMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInputMappingContextMappingData,0>_>
              *)&param_1->MappingProfileOverrides,&local_108);
  uVar11 = (ulonglong)local_108.ArrayNum;
  pFVar19 = local_108.AllocatorInstance.Data + uVar11 * 0x10;
  local_res20[0] = local_108.ArrayNum;
  uVar12 = uVar11;
  FVar16.Data = local_108.AllocatorInstance.Data;
  local_f8 = pFVar19;
  while( true ) {
    pTVar22 = &this->SavedKeyProfilesMap;
    if ((int)uVar12 != (int)uVar11) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    local_d0 = 0;
    if (FVar16.Data == pFVar19) break;
    if (*(int *)(FVar16.Data + 8) == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = *(wchar_t **)FVar16.Data;
      local_d0 = *(int *)(FVar16.Data + 8) + -1;
    }
    uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(local_d0,pwVar14);
    iVar9 = TSet<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>,FDefaultSetAllocator>
                        *)pTVar22,uVar8,(FString *)FVar16.Data);
    if (iVar9 == -1) {
      FPlayerMappableKeyProfileCreationArgs::FPlayerMappableKeyProfileCreationArgs
                ((FPlayerMappableKeyProfileCreationArgs *)local_b8);
      if ((FScriptContainerElement *)&local_a8 != FVar16.Data) {
        iVar9 = *(int *)(FVar16.Data + 8);
        _Src = *(void **)FVar16.Data;
        local_a0 = iVar9;
        if ((iVar9 == 0) && (local_9c == 0)) {
          local_9c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar9,local_9c,&local_a8,iVar9,&local_9c);
          if (iVar9 != 0) {
            memcpy(local_a8.Data,_Src,(longlong)iVar9 * 2);
          }
        }
      }
      TVar4.Reference = local_90.Reference;
      if (pUVar10 == (UObject *)0x0) {
        local_98.InternalId = -1;
      }
      else {
        local_98.InternalId = *(int *)&pUVar10[7].field_0x4;
      }
      if (local_90.Reference != UE::EnhancedInput::DefaultProfileDisplayName.TextData.Reference) {
        local_90.Reference = UE::EnhancedInput::DefaultProfileDisplayName.TextData.Reference;
        if (UE::EnhancedInput::DefaultProfileDisplayName.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*UE::EnhancedInput::DefaultProfileDisplayName.TextData.Reference +
                      8))(UE::EnhancedInput::DefaultProfileDisplayName.TextData.Reference,local_78);
        }
        if (TVar4.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar4.Reference + 0x10))(TVar4.Reference);
        }
      }
      local_80 = local_80 & 0xfe;
      local_88 = UE::EnhancedInput::DefaultProfileDisplayName.Flags;
      (**(code **)(this->_padding_ + 0x350))(this,local_b8);
      if (local_90.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_90.Reference + 0x10))();
      }
      pFVar19 = local_f8;
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
        pFVar19 = local_f8;
      }
    }
    uVar12 = local_108._8_8_ & 0xffffffff;
    FVar16.Data = FVar16.Data + 0x10;
    uVar11 = (ulonglong)local_res20[0];
  }
  iVar9 = *(int *)&(this->SavedKeyProfilesMap).field_0x28;
  puVar1 = &(this->SavedKeyProfilesMap).field_0x10;
  uStack_e4 = 1;
  iStack_d4 = local_d0;
  if (iVar9 != 0) {
    puVar21 = *(uint **)&(this->SavedKeyProfilesMap).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar8 = *puVar21;
    local_d0 = 0;
    iVar17 = 0;
    while (uVar8 == 0) {
      lVar13 = (longlong)iVar17;
      local_d0 = local_d0 + 0x20;
      iVar17 = iVar17 + 1;
      iStack_d4 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14a6ef41e;
      uVar8 = puVar21[lVar13 + 1];
    }
    uStack_e4 = -uVar8 & uVar8;
    uVar12 = (ulonglong)uStack_e4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_d4 = local_d0 + -1 + (int)lVar13;
    local_f8 = (FScriptContainerElement *)CONCAT44(local_f8._4_4_,(int)lVar13);
    if (iVar9 < iStack_d4) {
      iStack_d4 = iVar9;
    }
  }
LAB_14a6ef41e:
  iStack_c8 = *(int *)&(this->SavedKeyProfilesMap).field_0x8 -
              *(int *)&(this->SavedKeyProfilesMap).field_0x34;
  uVar8 = *(uint *)&(this->SavedKeyProfilesMap).field_0x28;
  uStack_d8 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_e4,iVar17);
  uVar18 = uVar8 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iStack_d4;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar8 >> 5;
  TStack_60._28_4_ = iStack_d4;
  TStack_60.BaseBitIndex = local_d0;
  uStack_40 = CONCAT44(uStack_c4,iStack_c8);
  local_f0 = pTVar22;
  iStack_e8 = iVar17;
  local_e0 = puVar1;
  iStack_cc = iStack_d4;
  local_68 = pTVar22;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar8 < 0) || (iVar9 < (int)uVar8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  uVar2 = *(uint *)&(this->SavedKeyProfilesMap).field_0x28;
  if (uVar8 != uVar2) {
    puVar20 = *(undefined1 **)&(this->SavedKeyProfilesMap).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar8 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar15 * 4);
    while (uVar8 == 0) {
      lVar13 = (longlong)iVar15;
      uVar18 = uVar18 + 0x20;
      iVar15 = iVar15 + 1;
      uVar8 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14a6ef51b;
      uVar8 = *(uint *)(puVar20 + lVar13 * 4 + 4);
    }
    uVar12 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar8 = (int)lVar13 + -1 + uVar18;
    if ((int)uVar2 < (int)uVar8) {
      uVar8 = uVar2;
    }
  }
LAB_14a6ef51b:
  bVar5 = true;
  while( true ) {
    pTVar22 = local_68;
    if (*(int *)(&local_68->field_0x0 + 8) - *(int *)(&local_68->field_0x0 + 0x34) != (int)uStack_40
       ) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_60.CurrentBitIndex == uVar8) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar22 == &this->SavedKeyProfilesMap)) break;
    bVar7 = (**(code **)(this->_padding_ + 0x378))
                      (this,*(undefined8 *)
                             ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                             *(longlong *)&pTVar22->field_0x0),param_1);
    bVar5 = (bool)(bVar5 & bVar7);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  if (bVar5 != false) {
    local_70 = param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnMappingContextRegistered,&local_70);
  }
  DestructItems<FString,int>((FString *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  return bVar5;
}

// RegisterInputMappingContexts @ 14a6ef600

bool __thiscall
UEnhancedInputUserSettings::RegisterInputMappingContexts
          (UEnhancedInputUserSettings *this,
          TSet<UInputMappingContext_*,DefaultKeyFuncs<UInputMappingContext_*,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar14 = 0;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar11 = *(int *)&(param_1->Elements).field_0x28;
  uVar6 = 1;
  iVar15 = 0;
  iVar10 = 0;
  iVar7 = 0;
  if (iVar11 != 0) {
    puVar16 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar13 = *puVar16;
    while (uVar13 == 0) {
      lVar8 = (longlong)iVar14;
      iVar15 = iVar15 + 0x20;
      iVar14 = iVar14 + 1;
      if ((int)((iVar11 + -1 >> 0x1f & 0x1fU) + iVar11 + -1) >> 5 < iVar14) {
        iVar10 = *(int *)&(param_1->Elements).field_0x28;
        iVar7 = iVar11;
        goto LAB_14a6ef6a6;
      }
      uVar13 = puVar16[lVar8 + 1];
    }
    iVar10 = *(int *)&(param_1->Elements).field_0x28;
    uVar6 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    iVar7 = local_res20 + -1 + iVar15;
    if (iVar10 < iVar7) {
      iVar7 = iVar11;
    }
  }
LAB_14a6ef6a6:
  uVar13 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar14);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar10 < (int)uVar13)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar13 != uVar6) {
    puVar9 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar9 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar8 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar11) goto LAB_14a6ef7a0;
      uVar13 = *(uint *)(puVar9 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar13 = (int)lVar8 + -1 + uVar12;
    if ((int)uVar6 < (int)uVar13) {
      uVar13 = uVar6;
    }
  }
LAB_14a6ef7a0:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<UInputMappingContext_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(this->_padding_ + 0x368))
              (this,*(undefined8 *)
                     (*(longlong *)&param_1->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10))
    ;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return false;
}

// RegisterKeyMappingsToProfile @ 14a6ef830

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UEnhancedInputUserSettings::RegisterKeyMappingsToProfile
          (UEnhancedInputUserSettings *this,UEnhancedPlayerMappableKeyProfile *param_1,
          UInputMappingContext *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UInputAction *pUVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  UPlayerMappableKeySettings *pUVar12;
  FKeyDetails *pFVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  FPlayerKeyMapping *this_00;
  ForAnyElementType FVar17;
  TRefCountPtr<ITextData> TVar18;
  FEnhancedActionKeyMapping *this_01;
  longlong *plVar19;
  FSharedReferencer<1> FVar20;
  undefined1 local_res20 [8];
  undefined1 local_1c8 [8];
  FName local_1c0;
  int local_1b8;
  int local_1b4;
  undefined1 local_1b0 [24];
  TRefCountPtr<ITextData> local_198;
  FInputMappingContextMappingData *local_190;
  FHardwareDeviceIdentifier *local_188;
  FName local_180;
  FKeyDetails *local_178;
  FSharedReferencer<1> local_170;
  FName local_168;
  FHardwareDeviceIdentifier local_160;
  undefined1 local_148 [12];
  uint local_13c;
  TObjectPtr<UInputAction_const_>_u_0 local_138;
  uint local_130;
  int local_12c;
  FKeyDetails *local_118;
  TReferenceControllerBase<1> *pTStack_110;
  FString local_108;
  undefined1 local_f8 [184];
  
  if (param_2 == (UInputMappingContext *)0x0) {
    if (1 < (byte)LogEnhancedInput._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4874167975445264763>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\UserSettings\\EnhancedInputUserSettings.cpp"
                       ,0x685,"false");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    return false;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`UEnhancedInputUserSettings::RegisterKeyMappingsToProfile'::__l2::
           _dynamic_atexit_destructor_for__MappingsPerDeviceTypes__);
    _Init_thread_footer(&::_TSS0);
  }
  TSet<TTuple<FHardwareDeviceIdentifier,TMap<FName,enum_EPlayerMappableKeySlot,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EPlayerMappableKeySlot,0>_>_>,TDefaultMapHashableKeyFuncs<FHardwareDeviceIdentifier,TMap<FName,enum_EPlayerMappableKeySlot,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EPlayerMappableKeySlot,0>_>,0>,FDefaultSetAllocator>
  ::Reset(&MappingsPerDeviceTypes);
  FVar20.ReferenceController = (TReferenceControllerBase<1> *)&param_1->ProfileIdentifierString;
  local_170.ReferenceController = FVar20.ReferenceController;
  local_190 = TMapBase<FString,FInputMappingContextMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInputMappingContextMappingData,0>_>
              ::Find((TMapBase<FString,FInputMappingContextMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInputMappingContextMappingData,0>_>
                      *)&param_2->MappingProfileOverrides,(FString *)FVar20.ReferenceController);
  if (local_190 == (FInputMappingContextMappingData *)0x0) {
    local_190 = &param_2->DefaultKeyMappings;
  }
  local_1b0._4_4_ = (local_190->Mappings).ArrayNum;
  uVar14 = (ulonglong)(int)local_1b0._4_4_;
  this_01 = (FEnhancedActionKeyMapping *)(local_190->Mappings).AllocatorInstance.Data;
  TVar18.Reference = (ITextData *)(this_01 + uVar14);
  local_198.Reference = TVar18.Reference;
  do {
    if ((local_190->Mappings).ArrayNum != (int)uVar14) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (this_01 == (FEnhancedActionKeyMapping *)TVar18.Reference) {
      if (5 < (byte)LogEnhancedInput._0_1_) {
        local_168 = (FName)param_2->_padding_;
        ::FName::ToString(&local_168,&local_108);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
      }
      return true;
    }
    pUVar12 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(this_01);
    if (pUVar12 != (UPlayerMappableKeySettings *)0x0) {
      if (this_01->SettingBehavior == InheritSettingsFromAction) {
        pUVar3 = (this_01->Action).field0_0x0.DebugPtr;
        pUVar12 = (UPlayerMappableKeySettings *)0x0;
        if ((pUVar3 != (UInputAction *)0x0) &&
           (pUVar12 = (pUVar3->PlayerMappableKeySettings).field0_0x0.DebugPtr,
           UE::GC::GIsIncrementalReachabilityPending != false)) {
          if (pUVar12 == (UPlayerMappableKeySettings *)0x0) goto LAB_14a6efa07;
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
LAB_14a6ef9e8:
        if (((pUVar12 != (UPlayerMappableKeySettings *)0x0) &&
            ((pUVar12->SupportedKeyProfileIds).ArrayNum != 0)) &&
           (bVar6 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                              (&pUVar12->SupportedKeyProfileIds,
                               (FString *)FVar20.ReferenceController),
           TVar18.Reference = local_198.Reference, !bVar6)) goto LAB_14a6eff61;
      }
      else if (this_01->SettingBehavior == OverrideSettings) {
        pUVar12 = (this_01->PlayerMappableKeySettings).field0_0x0.DebugPtr;
        goto LAB_14a6ef9e8;
      }
LAB_14a6efa07:
      pUVar12 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(this_01);
      if ((pUVar12 == (UPlayerMappableKeySettings *)0x0) ||
         (pUVar12 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(this_01),
         pUVar12 == (UPlayerMappableKeySettings *)0x0)) {
        local_1c0.ComparisonIndex.Value = 0;
        local_1c0.Number = 0;
      }
      else {
        (**(code **)(pUVar12->_padding_ + 0x2b0))(pUVar12,&local_1c0,this_01);
      }
      uVar11 = local_1c0.Number;
      uVar10 = ::GetTypeHash(local_1c0.ComparisonIndex);
      pFVar13 = (FKeyDetails *)
                TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
                ::FindOrAddImpl<FName_const_&>
                          ((TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
                            *)&param_1->PlayerMappedKeys,uVar10 + uVar11,&local_1c0);
      local_178 = pFVar13;
      (**(code **)(this->_padding_ + 0x380))(this,&local_160,this_01,param_2);
      uVar11 = ::GetTypeHash(&local_160);
      if (MappingsPerDeviceTypes._8_4_ != MappingsPerDeviceTypes._52_4_) {
        lVar16 = 0x154cae958;
        if (MappingsPerDeviceTypes._64_8_ != 0) {
          lVar16 = MappingsPerDeviceTypes._64_8_;
        }
        iVar2 = *(int *)(lVar16 + (ulonglong)(MappingsPerDeviceTypes._72_4_ - 1 & uVar11) * 4);
        while (iVar2 != -1) {
          lVar16 = (longlong)iVar2 * 0x70;
          bVar6 = FHardwareDeviceIdentifier::operator==
                            ((FHardwareDeviceIdentifier *)(MappingsPerDeviceTypes._0_8_ + lVar16),
                             &local_160);
          if (bVar6) {
            lVar16 = MappingsPerDeviceTypes._0_8_ + lVar16;
            if (lVar16 != 0) goto LAB_14a6efb42;
            break;
          }
          iVar2 = *(int *)(lVar16 + 0x68 + MappingsPerDeviceTypes._0_8_);
        }
      }
      local_188 = &local_160;
      TSet<TTuple<FHardwareDeviceIdentifier,TMap<FName,enum_EPlayerMappableKeySlot,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EPlayerMappableKeySlot,0>_>_>,TDefaultMapHashableKeyFuncs<FHardwareDeviceIdentifier,TMap<FName,enum_EPlayerMappableKeySlot,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EPlayerMappableKeySlot,0>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FHardwareDeviceIdentifier_const_&>_>
                (&MappingsPerDeviceTypes,(uint)&local_1b8,
                 (TKeyInitializer<FHardwareDeviceIdentifier_const_&> *)(ulonglong)uVar11,
                 (bool *)&local_188);
      lVar16 = (longlong)local_1b8 * 0x70 + MappingsPerDeviceTypes._0_8_;
LAB_14a6efb42:
      uVar11 = local_1c0.Number;
      uVar10 = ::GetTypeHash(local_1c0.ComparisonIndex);
      if (*(int *)(lVar16 + 0x20) != *(int *)(lVar16 + 0x4c)) {
        lVar15 = lVar16 + 0x50;
        if (*(longlong *)(lVar16 + 0x58) != 0) {
          lVar15 = *(longlong *)(lVar16 + 0x58);
        }
        iVar2 = *(int *)(lVar15 + (ulonglong)(*(int *)(lVar16 + 0x60) - 1U & uVar10 + uVar11) * 4);
        if (iVar2 != -1) {
          do {
            plVar19 = (longlong *)(*(longlong *)(lVar16 + 0x18) + (longlong)iVar2 * 0x14);
            local_1b0._16_8_ = plVar19;
            if (*plVar19 == CONCAT44(local_1c0.Number,local_1c0.ComparisonIndex.Value)) {
              if (plVar19 != (longlong *)0x0) goto LAB_14a6efbf0;
              break;
            }
            iVar2 = *(int *)((longlong)plVar19 + 0xc);
          } while (iVar2 != -1);
        }
      }
      local_180 = (FName)&local_1c0;
      TSet<TTuple<FName,enum_EPlayerMappableKeySlot>,TDefaultMapHashableKeyFuncs<FName,enum_EPlayerMappableKeySlot,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
                ((void *)(lVar16 + 0x18),(uint)&local_1b4,
                 (TKeyInitializer<FName_const_&> *)(ulonglong)(uVar10 + uVar11),(bool *)&local_180);
      plVar19 = (longlong *)(*(longlong *)(lVar16 + 0x18) + (longlong)local_1b4 * 0x14);
LAB_14a6efbf0:
      bVar6 = false;
      local_1b0._16_8_ = plVar19;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        atexit(`UEnhancedInputUserSettings::RegisterKeyMappingsToProfile'::__l27::
               _dynamic_atexit_destructor_for__MappingsRegistered__);
        _Init_thread_footer(&::_TSS2);
      }
      MappingsRegistered.ArrayNum = 0;
      if ((MappingsRegistered.ArrayMax < 0) && (MappingsRegistered.ArrayMax != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&MappingsRegistered.AllocatorInstance,0,&MappingsRegistered.ArrayMax);
      }
      TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator>::TIterator::
      TIterator((TIterator *)local_148,
                (TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator> *
                )pFVar13);
      if (local_12c < (int)(local_138.DebugPtr)->_padding_) {
        do {
          this_00 = (FPlayerKeyMapping *)((longlong)local_12c * 0xb0 + *(longlong *)local_148._0_8_)
          ;
          if ((this_00->Slot == *(EPlayerMappableKeySlot *)(plVar19 + 1)) &&
             ((this_00->HardwareDeviceId).PrimaryDeviceType == local_160.PrimaryDeviceType)) {
            pUVar12 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(this_01);
            if (pUVar12 == (UPlayerMappableKeySettings *)0x0) {
LAB_14a6efd3e:
              bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_4874167975445266132>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\UserSettings\\EnhancedInputUserSettings.cpp"
                                 ,300,
                                 "OriginalMapping.IsPlayerMappable() && OriginalMapping.GetMappingName() == MappingName"
                                );
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
            }
            else {
              pUVar12 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(this_01);
              if ((pUVar12 == (UPlayerMappableKeySettings *)0x0) ||
                 (pUVar12 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(this_01),
                 pUVar12 == (UPlayerMappableKeySettings *)0x0)) {
                local_1b0._8_4_ = 0;
                local_1b0._12_4_ = 0;
              }
              else {
                (**(code **)(pUVar12->_padding_ + 0x2b0))(pUVar12,local_1b0 + 8,this_01);
              }
              if ((FName)local_1b0._8_8_ != this_00->MappingName) goto LAB_14a6efd3e;
            }
            (this_00->DefaultKey).KeyName = (this_01->Key).KeyName;
            pTVar4 = (this_01->Key).KeyDetails.SharedReferenceCount.ReferenceController;
            pFVar13 = (this_01->Key).KeyDetails.Object;
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_118 = (this_00->DefaultKey).KeyDetails.Object;
            pTStack_110 = (this_00->DefaultKey).KeyDetails.SharedReferenceCount.ReferenceController;
            (this_00->DefaultKey).KeyDetails.Object = pFVar13;
            (this_00->DefaultKey).KeyDetails.SharedReferenceCount.ReferenceController = pTVar4;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_110);
            if ((this_00->CurrentKey).KeyName == (this_00->DefaultKey).KeyName) {
              this_00->bIsDirty = '\0';
            }
            bVar6 = true;
          }
          iVar2 = local_12c;
          FPlayerKeyMapping::UpdateMetadataFromActionKeyMapping(this_00,this_01);
          if (MappingsRegistered.ArrayNum == MappingsRegistered.ArrayMax) {
            MappingsRegistered.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&MappingsRegistered.AllocatorInstance,&MappingsRegistered.ArrayMax
                           );
          }
          lVar16 = (longlong)MappingsRegistered.ArrayNum;
          MappingsRegistered.ArrayNum = MappingsRegistered.ArrayNum + 1;
          *(int *)(MappingsRegistered.AllocatorInstance.Data + lVar16 * 4) = iVar2;
          local_130 = local_130 & ~local_13c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_148 + 8));
        } while (local_12c < (int)(local_138.DebugPtr)->_padding_);
        pFVar13 = local_178;
        if (!bVar6) goto LAB_14a6efe22;
      }
      else {
LAB_14a6efe22:
        FPlayerKeyMapping::FPlayerKeyMapping
                  ((FPlayerKeyMapping *)local_f8,this_01,*(EPlayerMappableKeySlot *)(plVar19 + 1),
                   &local_160);
        TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator>::
        Emplace<FPlayerKeyMapping>
                  ((TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator>
                    *)pFVar13,(FPlayerKeyMapping *)local_1b0,(bool *)local_f8);
        if ((void *)local_f8._152_8_ != (void *)0x0) {
          FMemory::Free((void *)local_f8._152_8_);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_f8._88_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_f8._64_8_);
        if ((ITextData *)local_f8._24_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_f8._24_8_ + 0x10))();
        }
        if ((ITextData *)local_f8._8_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_f8._8_8_ + 0x10))();
        }
        if (MappingsRegistered.ArrayNum == MappingsRegistered.ArrayMax) {
          MappingsRegistered.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&MappingsRegistered.AllocatorInstance,&MappingsRegistered.ArrayMax);
        }
        lVar16 = (longlong)MappingsRegistered.ArrayNum;
        MappingsRegistered.ArrayNum = MappingsRegistered.ArrayNum + 1;
        *(undefined4 *)(MappingsRegistered.AllocatorInstance.Data + lVar16 * 4) = local_1b0._0_4_;
      }
      iVar2 = MappingsRegistered.ArrayNum;
      pFVar1 = MappingsRegistered.AllocatorInstance.Data + (longlong)MappingsRegistered.ArrayNum * 4
      ;
      FVar17.Data = MappingsRegistered.AllocatorInstance.Data;
      while( true ) {
        if (MappingsRegistered.ArrayNum != iVar2) {
          local_1c8[0] = 0;
          `TCheckedPointerIterator<FSetElementId,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1c8);
        }
        if (FVar17.Data == pFVar1) break;
        if (*(int *)FVar17.Data != -1) {
          (**(code **)(this->_padding_ + 0x2f0))
                    (this,param_1,(longlong)*(int *)FVar17.Data * 0xb0 + *(longlong *)&pFVar13->Key,
                     this_01);
        }
        FVar17.Data = FVar17.Data + 4;
      }
      bVar8 = (char)*(longlong *)(local_1b0._16_8_ + 8) + 1;
      bVar9 = 8;
      if (bVar8 < 8) {
        bVar9 = bVar8;
      }
      *(byte *)(local_1b0._16_8_ + 8) = bVar9;
      TVar18.Reference = local_198.Reference;
      FVar20.ReferenceController = local_170.ReferenceController;
    }
LAB_14a6eff61:
    this_01 = this_01 + 1;
    uVar14 = (ulonglong)(uint)local_1b0._4_4_;
  } while( true );
}

// ResetAllPlayerKeysInRow @ 14a6f3f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UEnhancedInputUserSettings::ResetAllPlayerKeysInRow
          (UEnhancedInputUserSettings *this,FMapPlayerKeyArgs *param_1,
          FGameplayTagContainer *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 *puVar4;
  FName FVar5;
  TReferenceControllerBase<1> *pTVar6;
  FKeyDetails *pFVar7;
  code *pcVar8;
  FKeyMappingRow *pFVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FString *pFVar13;
  longlong lVar14;
  FKeyMappingRow *pFVar15;
  FPlayerKeyMapping *this_00;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 local_res20 [8];
  undefined4 uStack_bc;
  FName local_b4;
  FName local_ac;
  UEnhancedInputUserSettings *local_a0;
  FName local_98;
  FKeyMappingRow *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  FKeyDetails *local_60;
  TReferenceControllerBase<1> *pTStack_58;
  FString local_50;
  
  bVar10 = ::FName::IsWithinBounds((FNameEntryId)(param_1->MappingName).ComparisonIndex.Value);
  if (!bVar10) {
    local_b4 = UE::EnhancedInput::TAG_InvalidMappingName.InternalTag.TagName;
    FGameplayTagContainer::AddTag(param_2,(FGameplayTag *)&local_b4);
    return;
  }
  pFVar13 = &param_1->ProfileIdString;
  lVar14 = this->_padding_;
  if ((param_1->ProfileIdString).Data.ArrayNum < 2) {
    pFVar13 = (FString *)(**(code **)(lVar14 + 0x348))(this,pFVar13);
  }
  lVar14 = (**(code **)(lVar14 + 0x360))(this,pFVar13);
  if (lVar14 == 0) {
    local_ac = UE::EnhancedInput::TAG_NoKeyProfile.InternalTag.TagName;
    FGameplayTagContainer::AddTag(param_2,(FGameplayTag *)&local_ac);
  }
  else {
    pFVar15 = TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
              ::Find((TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
                      *)(lVar14 + 0x58),param_1->MappingName);
    if (pFVar15 == (FKeyMappingRow *)0x0) {
      local_98 = UE::EnhancedInput::TAG_NoMatchingMappings.InternalTag.TagName;
      FGameplayTagContainer::AddTag(param_2,(FGameplayTag *)&local_98);
    }
    else {
      iVar3 = *(int *)&(pFVar15->Mappings).Elements.field_0x28;
      iVar17 = 0;
      puVar1 = &(pFVar15->Mappings).Elements.field_0x10;
      uVar11 = 1;
      iVar19 = 0;
      iVar12 = 0;
      if (iVar3 != 0) {
        puVar20 = *(uint **)&(pFVar15->Mappings).Elements.field_0x20;
        if (puVar20 == (uint *)0x0) {
          puVar20 = (uint *)puVar1;
        }
        uVar16 = *puVar20;
        while (uVar16 == 0) {
          lVar14 = (longlong)iVar17;
          iVar19 = iVar19 + 0x20;
          iVar17 = iVar17 + 1;
          iVar12 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14a6f40ad;
          uVar16 = puVar20[lVar14 + 1];
        }
        uVar11 = -uVar16 & uVar16;
        uVar2 = (ulonglong)uVar11 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar12 = iVar19 + -1 + (int)lVar14;
        if (iVar3 < iVar12) {
          iVar12 = iVar3;
        }
      }
LAB_14a6f40ad:
      uVar16 = *(uint *)&(pFVar15->Mappings).Elements.field_0x28;
      uVar21 = uVar16 & 0xffffffe0;
      TStack_88._padding_ = CONCAT44(uVar11,iVar17);
      TStack_88.CurrentBitIndex = iVar12;
      TStack_88.UnvisitedBitMask = 0xffffffff;
      iVar17 = (int)uVar16 >> 5;
      TStack_88._28_4_ = iVar12;
      TStack_88.BaseBitIndex = iVar19;
      uStack_68 = CONCAT44(uStack_bc,
                           *(int *)&(pFVar15->Mappings).Elements.field_0x8 -
                           *(int *)&(pFVar15->Mappings).Elements.field_0x34);
      local_90 = pFVar15;
      TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar11 = *(uint *)&(pFVar15->Mappings).Elements.field_0x28;
      if (uVar16 != uVar11) {
        puVar4 = *(undefined1 **)&(pFVar15->Mappings).Elements.field_0x20;
        puVar18 = puVar1;
        if (puVar4 != (undefined1 *)0x0) {
          puVar18 = puVar4;
        }
        uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
        while (uVar16 == 0) {
          lVar14 = (longlong)iVar17;
          uVar21 = uVar21 + 0x20;
          iVar17 = iVar17 + 1;
          uVar16 = uVar11;
          if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_14a6f41b0;
          uVar16 = *(uint *)(puVar18 + lVar14 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar16 = (int)lVar14 + -1 + uVar21;
        if ((int)uVar11 < (int)uVar16) {
          uVar16 = uVar11;
        }
      }
LAB_14a6f41b0:
      while( true ) {
        pFVar9 = local_90;
        if (*(int *)&(local_90->Mappings).Elements.field_0x8 -
            *(int *)&(local_90->Mappings).Elements.field_0x34 != (int)uStack_68) {
          `TSparseArray<TSparseSetElement<FPlayerKeyMapping>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_88.CurrentBitIndex == uVar16) &&
            (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pFVar9 == pFVar15)) break;
        this_00 = (FPlayerKeyMapping *)
                  (*(longlong *)&(pFVar9->Mappings).Elements +
                  (longlong)TStack_88.CurrentBitIndex * 0xb0);
        FVar5 = (this_00->DefaultKey).KeyName;
        if ((this_00->CurrentKey).KeyName != FVar5) {
          this_00->bIsDirty = '\x01';
        }
        (this_00->CurrentKey).KeyName = FVar5;
        pTVar6 = (this_00->DefaultKey).KeyDetails.SharedReferenceCount.ReferenceController;
        pFVar7 = (this_00->DefaultKey).KeyDetails.Object;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_60 = (this_00->CurrentKey).KeyDetails.Object;
        pTStack_58 = (this_00->CurrentKey).KeyDetails.SharedReferenceCount.ReferenceController;
        (this_00->CurrentKey).KeyDetails.Object = pFVar7;
        (this_00->CurrentKey).KeyDetails.SharedReferenceCount.ReferenceController = pTVar6;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_58);
        if (this_00->bIsDirty != 0) {
          (**(code **)(this->_padding_ + 0x2e0))(this,this_00,param_1,1);
          local_a0 = this;
          TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                    ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                     &this->OnSettingsChanged,&local_a0);
        }
        if (5 < (byte)LogEnhancedInput._0_1_) {
          FPlayerKeyMapping::ToString(this_00,&local_50);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
        TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
      }
    }
  }
  return;
}

// ResetKeyProfileIdToDefault @ 14a6f4300

void __thiscall
UEnhancedInputUserSettings::ResetKeyProfileIdToDefault
          (UEnhancedInputUserSettings *this,FString *param_1,FGameplayTagContainer *param_2)

{
  longlong *plVar1;
  FName local_res8;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x360))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2f0))(plVar1);
    local_res8 = (FName)this;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSettingsChanged,
               &local_res8);
    return;
  }
  local_res8 = UE::EnhancedInput::TAG_NoKeyProfile.InternalTag.TagName;
  FGameplayTagContainer::AddTag(param_2,(FGameplayTag *)&local_res8);
  return;
}

// ResetKeyProfileToDefault @ 14a6f4380

void __thiscall
UEnhancedInputUserSettings::ResetKeyProfileToDefault
          (UEnhancedInputUserSettings *this,FGameplayTag *param_1,FGameplayTagContainer *param_2)

{
  code *pcVar1;
  FString local_18;
  
  pcVar1 = *(code **)(this->_padding_ + 0x318);
  ::FName::ToString(&param_1->TagName,&local_18);
  (*pcVar1)(this,&local_18,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SaveSettings @ 14a6f4c50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UEnhancedInputUserSettings::SaveSettings(UEnhancedInputUserSettings *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ULocalPlayer *this_00;
  UEnhancedInputLocalPlayerSubsystem *pUVar4;
  longlong *plVar5;
  FString local_18;
  
  this_00 = (ULocalPlayer *)FWeakObjectPtr::Get(&(this->OwningLocalPlayer).WeakPtr);
  if (this_00 == (ULocalPlayer *)0x0) {
    if (2 < (byte)LogEnhancedInput._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    }
  }
  else {
    iVar3 = (**(code **)(this_00->_padding_ + 0x340))(this_00);
    pUVar4 = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(this_00);
    plVar5 = (longlong *)(**(code **)(pUVar4->_padding_ + 0x10))(&pUVar4->_padding_);
    if (plVar5 == (longlong *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PlayerInput",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\UserSettings\\EnhancedInputUserSettings.cpp"
                         ,0x333,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)(*plVar5 + 0x338))(plVar5,&local_18);
    UGameplayStatics::SaveGameToSlot((USaveGame *)this,&local_18,iVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (5 < (byte)LogEnhancedInput._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
      return;
    }
  }
  return;
}

// Serialize @ 14a6f4d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UEnhancedInputUserSettings::Serialize(UEnhancedInputUserSettings *this,FArchive *param_1)

{
  TMap<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>_>
  *pTVar1;
  int *piVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  TSet<TObjectPtr<UInputMappingContext_const_>,DefaultKeyFuncs<TObjectPtr<UInputMappingContext_const_>,0>,FDefaultSetAllocator>
  *pTVar5;
  longlong *plVar6;
  void *_Src;
  FName FVar7;
  undefined1 *puVar8;
  code *pcVar9;
  UObjectBaseUtility *pUVar10;
  TSet<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>,FDefaultSetAllocator>
  *pTVar11;
  TMap<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>_>
  *pTVar12;
  TSet<TObjectPtr<UInputMappingContext_const_>,DefaultKeyFuncs<TObjectPtr<UInputMappingContext_const_>,0>,FDefaultSetAllocator>
  *pTVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar19;
  size_t sVar20;
  UClass *pUVar21;
  UEnhancedPlayerMappableKeyProfile *pUVar22;
  TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator> *this_00;
  UObject *pUVar23;
  longlong lVar24;
  FKey *this_01;
  longlong lVar25;
  ulonglong uVar26;
  ForAnyElementType FVar27;
  ulonglong uVar28;
  int iVar29;
  FString *pFVar30;
  FScriptContainerElement *this_02;
  FScriptContainerElement *pFVar31;
  uint uVar32;
  TSet<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>,FDefaultSetAllocator>
  *pTVar33;
  longlong lVar34;
  TBitArray<FDefaultBitArrayAllocator> *pTVar35;
  FName *pFVar36;
  uint uVar37;
  int iVar38;
  TBitArray<FDefaultBitArrayAllocator> *pTVar39;
  undefined1 *puVar40;
  uint *puVar41;
  int iVar42;
  FName *pFVar43;
  undefined1 *puVar44;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_468;
  undefined1 local_467;
  undefined1 local_466;
  undefined1 local_465;
  uint local_464;
  TArray<UE::EnhancedInput::FMappableKeysHeader,TSizedDefaultAllocator<32>_> local_460;
  uint local_450;
  TSet<TObjectPtr<UInputMappingContext_const_>,DefaultKeyFuncs<TObjectPtr<UInputMappingContext_const_>,0>,FDefaultSetAllocator>
  *local_448;
  undefined8 uStack_440;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_438;
  uint uStack_430;
  uint uStack_42c;
  uint uStack_428;
  undefined4 uStack_424;
  int local_420;
  undefined4 uStack_41c;
  undefined1 local_418 [4];
  int local_414;
  uint local_410;
  ulonglong local_408;
  TBitArray<FDefaultBitArrayAllocator> *local_400;
  TSet<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>,FDefaultSetAllocator>
  *local_3f8;
  FMappableKeysHeader local_3e8;
  undefined8 local_3a8;
  TBitArray<FDefaultBitArrayAllocator> *local_3a0;
  FString local_398;
  UObjectBaseUtility *local_388;
  FString local_380;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_370;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_350;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined4 local_308;
  int local_304;
  int local_300;
  undefined1 local_2fc [8];
  int local_2f4;
  int local_2f0;
  wchar_t *local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  UEnhancedPlayerMappableKeyProfile *local_2d8;
  int local_2d0;
  TSet<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>,FDefaultSetAllocator>
  *local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c0;
  undefined8 uStack_2a0;
  TMap<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>_>
  *local_298;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_290;
  undefined8 uStack_270;
  TMap<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>_>
  *local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_260;
  undefined8 uStack_240;
  TMap<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>_>
  *local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_230;
  undefined8 uStack_210;
  TSet<TObjectPtr<UInputMappingContext_const_>,DefaultKeyFuncs<TObjectPtr<UInputMappingContext_const_>,0>,FDefaultSetAllocator>
  *local_208;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  undefined8 uStack_1e0;
  FName local_1d8;
  undefined8 local_1d0;
  FSharedReferencer<1> local_1c8;
  FScriptContainerElement *local_1c0;
  UEnhancedPlayerMappableKeyProfile **local_1b8;
  TStringView<wchar_t> local_1a8;
  undefined1 local_198 [152];
  void *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c8;
  undefined4 local_8c;
  undefined4 local_6c;
  undefined4 local_4c;
  
  UObject::Serialize((UObject *)this,param_1);
  bVar14 = UObjectBaseUtility::IsTemplate
                     ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar14) {
    return;
  }
  if ((param_1->field_0x2b & 4) != 0) {
    return;
  }
  local_414 = 2;
  ::operator<<(param_1,&local_414);
  if ((2 < local_414) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_4874167975445265466>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\UserSettings\\EnhancedInputUserSettings.cpp"
                          ,0x3c6,
                          "SaveVersion <= UE::EnhancedInput::FPlayerMappableSaveVersion::Current"),
     bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar18 = 0;
  local_460.ArrayNum = 0;
  local_460.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_460.ArrayMax = 0;
  local_408 = 1;
  uVar32 = 0;
  if ((param_1->field_0x28 & 4) != 0) {
    puVar44 = &(this->SavedKeyProfilesMap).field_0x10;
    local_370._padding_._0_4_ = 0;
    local_370._padding_._4_4_ = 1;
    local_370.UnvisitedBitMask = 0xffffffff;
    local_370.CurrentBitIndex = 0;
    local_370.BaseBitIndex = 0;
    local_370.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar44;
    if (*(int *)&(this->SavedKeyProfilesMap).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_370);
    }
    uStack_440 = CONCAT44(local_370._padding_._4_4_,(undefined4)local_370._padding_);
    uStack_42c = local_370.CurrentBitIndex;
    uStack_430 = local_370.UnvisitedBitMask;
    uStack_424 = local_370._28_4_;
    uStack_428 = local_370.BaseBitIndex;
    local_420 = *(int *)&(this->SavedKeyProfilesMap).field_0x8 -
                *(int *)&(this->SavedKeyProfilesMap).field_0x34;
    pTStack_438 = local_370.Array;
    uStack_240 = CONCAT44(uStack_41c,local_420);
    TStack_260.Array = local_370.Array;
    local_448 = (TSet<TObjectPtr<UInputMappingContext_const_>,DefaultKeyFuncs<TObjectPtr<UInputMappingContext_const_>,0>,FDefaultSetAllocator>
                 *)&this->SavedKeyProfilesMap;
    local_268 = &this->SavedKeyProfilesMap;
    TStack_260._padding_ = uStack_440;
    TStack_260._16_8_ = _uStack_430;
    TStack_260._24_8_ = _uStack_428;
    pTVar19 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_e8,(TBitArray<FDefaultBitArrayAllocator> *)puVar44,
                         *(int *)&(this->SavedKeyProfilesMap).field_0x28);
    uStack_440 = pTVar19->_padding_;
    pTStack_438 = pTVar19->Array;
    uStack_430 = pTVar19->UnvisitedBitMask;
    uStack_42c = pTVar19->CurrentBitIndex;
    uStack_428 = pTVar19->BaseBitIndex;
    uStack_424 = *(undefined4 *)&pTVar19->field_0x1c;
    local_410 = uStack_42c;
    local_400 = pTStack_438;
    while( true ) {
      pTVar1 = local_268;
      uVar17 = local_410;
      if (*(int *)&local_268->field_0x8 - *(int *)&local_268->field_0x34 != (int)uStack_240) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_260.CurrentBitIndex == uVar17) && (TStack_260.Array == local_400)) &&
         (pTVar1 == &this->SavedKeyProfilesMap)) break;
      pFVar30 = (FString *)(*(longlong *)pTVar1 + (longlong)TStack_260.CurrentBitIndex * 0x20);
      ::FString::FString(&local_398,pFVar30);
      local_388 = (UObjectBaseUtility *)pFVar30[1].Data.AllocatorInstance.Data;
      local_3e8.ProfileIdentifierString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
      ;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&local_3e8,
                 (wchar_t *)local_398.Data.AllocatorInstance.Data,local_398.Data.ArrayNum,0);
      UObjectBaseUtility::GetPathName
                (*(UObjectBaseUtility **)&local_388->field_0x10,&local_3e8.ClassPath,(UObject *)0x0)
      ;
      UObjectBaseUtility::GetPathName(local_388,&local_3e8.ObjectPath,(UObject *)this);
      pUVar10 = local_388;
      uVar28 = local_408;
      pTVar33 = (TSet<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>,FDefaultSetAllocator>
                 *)&local_388[2].field_0x8;
      local_3e8.DirtyMappings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3e8.DirtyMappings.ArrayNum = 0;
      local_3e8.DirtyMappings.ArrayMax = 0;
      puVar44 = &local_388[2].field_0x18;
      local_350._padding_._0_4_ = 0;
      local_350._padding_._4_4_ = (undefined4)local_408;
      local_350.UnvisitedBitMask = 0xffffffff;
      local_350.CurrentBitIndex = 0;
      local_350.BaseBitIndex = 0;
      local_3f8 = pTVar33;
      local_350.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar44;
      if (*(int *)&local_388[3].field_0x8 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_350);
      }
      uStack_440 = CONCAT44(local_350._padding_._4_4_,(undefined4)local_350._padding_);
      uStack_42c = local_350.CurrentBitIndex;
      uStack_430 = local_350.UnvisitedBitMask;
      uStack_424 = local_350._28_4_;
      uStack_428 = local_350.BaseBitIndex;
      local_420 = *(int *)&pUVar10[2].field_0x10 - *(int *)&pUVar10[3].field_0x14;
      pTStack_438 = local_350.Array;
      uStack_2a0 = CONCAT44(uStack_41c,local_420);
      TStack_2c0.Array = local_350.Array;
      local_448 = (TSet<TObjectPtr<UInputMappingContext_const_>,DefaultKeyFuncs<TObjectPtr<UInputMappingContext_const_>,0>,FDefaultSetAllocator>
                   *)pTVar33;
      local_2c8 = pTVar33;
      TStack_2c0._padding_ = uStack_440;
      TStack_2c0._16_8_ = _uStack_430;
      TStack_2c0._24_8_ = _uStack_428;
      pTVar19 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_c8,(TBitArray<FDefaultBitArrayAllocator> *)puVar44,
                           *(int *)&pUVar10[3].field_0x8);
      uStack_440 = pTVar19->_padding_;
      pTStack_438 = pTVar19->Array;
      uStack_430 = pTVar19->UnvisitedBitMask;
      uStack_42c = pTVar19->CurrentBitIndex;
      uStack_428 = pTVar19->BaseBitIndex;
      uStack_424 = *(undefined4 *)&pTVar19->field_0x1c;
      local_450 = uStack_42c;
      local_3a0 = pTStack_438;
      while( true ) {
        pTVar11 = local_2c8;
        uVar17 = local_450;
        if (*(int *)&(local_2c8->Elements).field_0x8 - *(int *)&(local_2c8->Elements).field_0x34 !=
            (int)uStack_2a0) {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,FKeyMappingRow>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_2c0.CurrentBitIndex == uVar17) && (TStack_2c0.Array == local_3a0)) &&
           (pTVar11 == pTVar33)) break;
        uVar15 = (uint)uVar28;
        lVar34 = (longlong)TStack_2c0.CurrentBitIndex * 0x60 + *(longlong *)&pTVar11->Elements;
        uVar17 = *(uint *)(lVar34 + 0x30);
        pTVar35 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar34 + 0x18);
        pTVar1 = (TMap<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>_>
                  *)(lVar34 + 8);
        uStack_42c = uVar32;
        uVar37 = 0;
        uStack_428 = uVar32;
        if (uVar17 != 0) {
          pTVar39 = pTVar35;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar34 + 0x28) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar39 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar34 + 0x28);
          }
          uVar16 = *(uint *)(pTVar39->AllocatorInstance).InlineData;
          uVar37 = uVar32;
          while (uVar16 == 0) {
            lVar24 = (longlong)(int)uVar37;
            uStack_428 = uStack_428 + 0x20;
            uVar37 = uVar37 + 1;
            uStack_42c = uVar17;
            if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar37)
            goto LAB_14a6f5130;
            uVar16 = *(uint *)((pTVar39->AllocatorInstance).InlineData + lVar24 * 4 + 4);
          }
          uVar15 = -uVar16 & uVar16;
          uVar28 = (ulonglong)uVar15 * 2 + 1;
          lVar24 = 0x3f;
          if (uVar28 != 0) {
            for (; uVar28 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          local_304 = (int)lVar24;
          uStack_42c = local_304 + -1 + uStack_428;
          if ((int)uVar17 < (int)uStack_42c) {
            uStack_42c = uVar17;
          }
        }
LAB_14a6f5130:
        local_420 = *(int *)(lVar34 + 0x10) - *(int *)(lVar34 + 0x3c);
        uStack_430 = 0xffffffff;
        uVar16 = *(uint *)(lVar34 + 0x30);
        uStack_440 = CONCAT44(uVar15,uVar37);
        uVar37 = uVar16 & 0xffffffe0;
        uStack_424 = local_8c;
        TStack_290._padding_ = uStack_440;
        iVar29 = (int)uVar16 >> 5;
        uStack_270 = CONCAT44(uStack_41c,local_420);
        TStack_290.UnvisitedBitMask = 0xffffffff;
        TStack_290.CurrentBitIndex = uStack_42c;
        TStack_290.BaseBitIndex = uStack_428;
        TStack_290._28_4_ = local_8c;
        local_448 = (TSet<TObjectPtr<UInputMappingContext_const_>,DefaultKeyFuncs<TObjectPtr<UInputMappingContext_const_>,0>,FDefaultSetAllocator>
                     *)pTVar1;
        pTStack_438 = pTVar35;
        local_298 = pTVar1;
        TStack_290.Array = pTVar35;
        if ((((int)uVar16 < 0) || ((int)uVar17 < (int)uVar16)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar17 = *(uint *)(lVar34 + 0x30);
        if (uVar16 != uVar17) {
          pTVar39 = pTVar35;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar34 + 0x28) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar39 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar34 + 0x28);
          }
          uVar15 = -1 << ((byte)uVar16 & 0x1f) &
                   *(uint *)((pTVar39->AllocatorInstance).InlineData + (longlong)iVar29 * 4);
          while (uVar15 == 0) {
            lVar34 = (longlong)iVar29;
            uVar37 = uVar37 + 0x20;
            iVar29 = iVar29 + 1;
            uVar16 = uVar17;
            if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29)
            goto LAB_14a6f5240;
            uVar15 = *(uint *)((pTVar39->AllocatorInstance).InlineData + lVar34 * 4 + 4);
          }
          uVar28 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
          lVar34 = 0x3f;
          if (uVar28 != 0) {
            for (; uVar28 >> lVar34 == 0; lVar34 = lVar34 + -1) {
            }
          }
          local_300 = (int)lVar34;
          uVar16 = local_300 + -1 + uVar37;
          if ((int)uVar17 < (int)uVar16) {
            uVar16 = uVar17;
          }
        }
LAB_14a6f5240:
        while( true ) {
          pTVar12 = local_298;
          if (*(int *)&local_298->field_0x8 - *(int *)&local_298->field_0x34 != (int)uStack_270) {
            local_468 = 0;
            `TSparseArray<TSparseSetElement<FPlayerKeyMapping>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_468);
          }
          if (((TStack_290.CurrentBitIndex == uVar16) && (TStack_290.Array == pTVar35)) &&
             (pTVar12 == pTVar1)) break;
          lVar34 = *(longlong *)pTVar12;
          lVar24 = (longlong)TStack_290.CurrentBitIndex * 0xb0;
          this_01 = (FKey *)(lVar34 + 0x48 + lVar24);
          if (((*(byte *)(lVar24 + 0x29 + lVar34) & 1) != 0) ||
             (this_01->KeyName != *(FName *)(lVar24 + 0x30 + lVar34))) {
            local_330 = *(undefined8 *)(lVar24 + lVar34);
            FKey::GetFName(this_01);
            puVar3 = (undefined8 *)(lVar24 + 0x60 + lVar34);
            local_320 = *puVar3;
            uStack_318 = puVar3[1];
            local_310 = *(undefined8 *)(lVar24 + 0x70 + lVar34);
            local_308 = CONCAT31(local_308._1_3_,*(undefined1 *)(lVar24 + 0x28 + lVar34));
            if ((local_3e8.DirtyMappings.AllocatorInstance.Data <=
                 (FScriptContainerElement *)&local_330) &&
               (((FScriptContainerElement *)&local_330 <
                 local_3e8.DirtyMappings.AllocatorInstance.Data +
                 (longlong)local_3e8.DirtyMappings.ArrayMax * 0x2c &&
                (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar14)))) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar29 = local_3e8.DirtyMappings.ArrayNum;
            if (local_3e8.DirtyMappings.ArrayNum == local_3e8.DirtyMappings.ArrayMax) {
              iVar29 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x42c,&local_3e8.DirtyMappings.AllocatorInstance,
                                  &local_3e8.DirtyMappings.ArrayMax);
            }
            local_3e8.DirtyMappings.ArrayNum = iVar29 + 1;
            lVar25 = (longlong)iVar29 * 0x2c;
            *(undefined8 *)(local_3e8.DirtyMappings.AllocatorInstance.Data + lVar25) = local_330;
            *(undefined8 *)(local_3e8.DirtyMappings.AllocatorInstance.Data + lVar25 + 8) =
                 uStack_328;
            *(undefined8 *)(local_3e8.DirtyMappings.AllocatorInstance.Data + lVar25 + 0x10) =
                 local_320;
            *(undefined8 *)(local_3e8.DirtyMappings.AllocatorInstance.Data + lVar25 + 0x10 + 8) =
                 uStack_318;
            *(undefined8 *)(local_3e8.DirtyMappings.AllocatorInstance.Data + lVar25 + 0x20) =
                 local_310;
            *(undefined4 *)(local_3e8.DirtyMappings.AllocatorInstance.Data + lVar25 + 0x28) =
                 local_308;
            pbVar4 = (byte *)(lVar24 + 0x29 + lVar34);
            *pbVar4 = *pbVar4 & 0xfe;
          }
          TStack_290.UnvisitedBitMask = TStack_290.UnvisitedBitMask & ~TStack_290._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_290);
        }
        TStack_2c0.UnvisitedBitMask = TStack_2c0.UnvisitedBitMask & ~TStack_2c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c0);
        pTVar33 = local_3f8;
        uVar28 = local_408;
      }
      if (((local_460.AllocatorInstance.Data <= &local_3e8) &&
          (&local_3e8 <
           (FMappableKeysHeader *)
           (local_460.AllocatorInstance.Data + (longlong)local_460.ArrayMax * 0x40))) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (local_460.ArrayNum == local_460.ArrayMax) {
        local_460.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x840,&local_460.AllocatorInstance,&local_460.ArrayMax);
      }
      this_02 = local_460.AllocatorInstance.Data + (longlong)local_460.ArrayNum * 0x40;
      local_460.ArrayNum = local_460.ArrayNum + 1;
      ::FString::FString((FString *)this_02,&local_3e8.ProfileIdentifierString);
      ::FString::FString((FString *)(this_02 + 0x10),&local_3e8.ClassPath);
      ::FString::FString((FString *)(this_02 + 0x20),&local_3e8.ObjectPath);
      FVar27.Data = local_3e8.DirtyMappings.AllocatorInstance.Data;
      pFVar31 = this_02 + 0x30;
      *(FScriptContainerElement **)pFVar31 = (FScriptContainerElement *)0x0;
      lVar34 = (longlong)local_3e8.DirtyMappings.ArrayNum;
      *(int *)(this_02 + 0x38) = local_3e8.DirtyMappings.ArrayNum;
      if (local_3e8.DirtyMappings.ArrayNum == 0) {
        *(int *)(this_02 + 0x3c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x2c,4,local_3e8.DirtyMappings.ArrayNum,0,(ForAnyElementType *)pFVar31,
                   local_3e8.DirtyMappings.ArrayNum,(int *)(this_02 + 0x3c));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar31,FVar27.Data,lVar34 * 0x2c);
      }
      if (local_3e8.DirtyMappings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e8.DirtyMappings.AllocatorInstance.Data);
      }
      if (local_3e8.ObjectPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e8.ObjectPath.Data.AllocatorInstance.Data);
      }
      if (local_3e8.ClassPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e8.ClassPath.Data.AllocatorInstance.Data);
      }
      if (local_3e8.ProfileIdentifierString.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e8.ProfileIdentifierString.Data.AllocatorInstance.Data);
      }
      if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_398.Data.AllocatorInstance.Data);
      }
      TStack_260.UnvisitedBitMask = TStack_260.UnvisitedBitMask & ~TStack_260._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_260);
    }
  }
  if (((param_1->field_0x28 & 1) == 0) || (1 < local_414)) {
    plVar6 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      local_464 = local_460.ArrayNum;
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_464,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_464);
      }
    }
    else {
      local_464 = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    if ((param_1->field_0x28 & 1) != 0) {
      lVar34 = (longlong)(int)local_464;
      iVar29 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40,8,local_464,&local_460.AllocatorInstance,&local_460.ArrayNum,
                          &local_460.ArrayMax);
      memset(local_460.AllocatorInstance.Data + (longlong)iVar29 * 0x40,0,lVar34 << 6);
    }
    if (0 < (int)local_464) {
      do {
        uVar17 = uVar32;
        if ((int)uVar18 < local_460.ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar31 = local_460.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x40;
        ::operator<<(param_1,(FString *)(pFVar31 + 0x10));
        ::operator<<(param_1,(FString *)(pFVar31 + 0x20));
        TArrayPrivateFriend::
        Serialize<UE::EnhancedInput::FKeyMappingSaveData,TSizedDefaultAllocator<32>_>
                  (param_1,(TArray<UE::EnhancedInput::FKeyMappingSaveData,TSizedDefaultAllocator<32>_>
                            *)(pFVar31 + 0x30));
        ::operator<<(param_1,(FString *)pFVar31);
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < (int)local_464);
    }
  }
  else {
    TArrayPrivateFriend::
    Serialize<UE::EnhancedInput::FMappableKeysHeader,TSizedDefaultAllocator<32>_>
              (param_1,&local_460);
  }
  if ((param_1->field_0x28 & 1) != 0) {
    pTVar33 = (TSet<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>,FDefaultSetAllocator>
               *)&this->SavedKeyProfilesMap;
    local_3f8 = pTVar33;
    if (*(int *)&(this->SavedKeyProfilesMap).field_0x48 < 2) {
      TSet<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>,FDefaultSetAllocator>
      ::UnhashElements(pTVar33);
      TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)pTVar33,0);
    }
    else {
      TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)pTVar33,0);
      *(int *)&(this->SavedKeyProfilesMap).field_0x48 = (int)local_408;
      TSet<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>,FDefaultSetAllocator>
      ::Rehash(pTVar33);
    }
    uVar26 = (ulonglong)local_460.ArrayNum;
    pTVar35 = (TBitArray<FDefaultBitArrayAllocator> *)
              (local_460.AllocatorInstance.Data + uVar26 * 0x40);
    local_410 = local_460.ArrayNum;
    pFVar31 = local_460.AllocatorInstance.Data + 0x38;
    uVar28 = uVar26;
    local_400 = pTVar35;
    while( true ) {
      if ((int)uVar26 != (int)uVar28) {
        local_467 = 0;
        `TCheckedPointerIterator<UE::EnhancedInput::FMappableKeysHeader,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_467);
      }
      if ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar31 + -0x38) == pTVar35) break;
      iVar29 = 0;
      if (*(int *)(pFVar31 + -0x20) == 0) {
        local_2e8 = L"";
LAB_14a6f57c9:
        sVar20 = wcslen(local_2e8);
        iVar29 = (int)sVar20;
      }
      else {
        local_2e8 = *(wchar_t **)(pFVar31 + -0x28);
        if (local_2e8 != (wchar_t *)0x0) goto LAB_14a6f57c9;
      }
      iStack_2e0 = iVar29;
      pUVar21 = Z_Construct_UClass_UClass_NoRegister();
      local_1a8._12_4_ = uStack_2dc;
      local_1a8.Size = iStack_2e0;
      local_1a8.DataPtr = local_2e8;
      pUVar21 = (UClass *)StaticFindObject(pUVar21,(UObject *)0x0,&local_1a8,None);
      if (pUVar21 != (UClass *)0x0) {
        local_3a8 = 0;
        pUVar22 = NewObject<UEnhancedPlayerMappableKeyProfile>
                            ((UObject *)this,pUVar21,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                             (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        pFVar30 = &pUVar22->ProfileIdentifierString;
        if ((TBitArray<FDefaultBitArrayAllocator> *)pFVar30 !=
            (TBitArray<FDefaultBitArrayAllocator> *)(pFVar31 + -0x38)) {
          iVar29 = *(int *)(pFVar31 + -0x30);
          piVar2 = &(pUVar22->ProfileIdentifierString).Data.ArrayMax;
          _Src = *(void **)(pFVar31 + -0x38);
          iVar42 = *piVar2;
          (pUVar22->ProfileIdentifierString).Data.ArrayNum = iVar29;
          if ((iVar29 == 0) && (iVar42 == 0)) {
            *piVar2 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar29,iVar42,(ForAnyElementType *)pFVar30,iVar29,piVar2);
            if (iVar29 != 0) {
              memcpy((pFVar30->Data).AllocatorInstance.Data,_Src,(longlong)iVar29 * 2);
            }
          }
        }
        local_2d8 = pUVar22;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar22 != (UEnhancedPlayerMappableKeyProfile *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar22);
        }
        local_1c0 = pFVar31 + -0x38;
        local_1b8 = &local_2d8;
        TSet<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FString_const_&,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_&&>_>
                  (pTVar33,(TPairInitializer<FString_const_&,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_&&>
                            *)local_2fc,(bool *)&local_1c0);
        iVar29 = *(int *)pFVar31;
        pFVar36 = (FName *)(((TArray<UE::EnhancedInput::FKeyMappingSaveData,TSizedDefaultAllocator<32>_>
                              *)(pFVar31 + -8))->AllocatorInstance).Data;
        pFVar43 = (FName *)((longlong)pFVar36 + (longlong)iVar29 * 0x2c);
        while( true ) {
          if (*(int *)pFVar31 != iVar29) {
            local_466 = 0;
            `TCheckedPointerIterator<UE::EnhancedInput::FKeyMappingSaveData_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_466);
          }
          if (pFVar36 == pFVar43) break;
          FVar7 = *pFVar36;
          uVar18 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
          this_00 = &TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
                     ::FindOrAddImpl<FName_const_&>
                               ((TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
                                 *)&pUVar22->PlayerMappedKeys,uVar18 + FVar7.Number,pFVar36)->
                     Mappings;
          FPlayerKeyMapping::FPlayerKeyMapping((FPlayerKeyMapping *)local_198);
          local_198._0_8_ = *pFVar36;
          local_1d8 = pFVar36[1];
          local_1c8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_198._80_8_ = (FKeyDetails *)0x0;
          local_1d0 = 0;
          local_198._72_8_ = local_1d8;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(local_198 + 0x58),&local_1c8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1c8.ReferenceController);
          local_198._96_8_ = pFVar36[2];
          local_198._104_8_ = pFVar36[3];
          local_198[0x28] = (EPlayerMappableKeySlot)pFVar36[5].ComparisonIndex.Value;
          local_198._112_8_ = pFVar36[4];
          TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator>::
          Emplace<FPlayerKeyMapping_const_&>
                    (this_00,(FPlayerKeyMapping *)(local_2fc + 4),(bool *)local_198);
          if (local_100 != (void *)0x0) {
            FMemory::Free(local_100);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_198._88_8_);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_198._64_8_);
          if ((ITextData *)local_198._24_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_198._24_8_ + 0x10))();
          }
          if ((ITextData *)local_198._8_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_198._8_8_ + 0x10))();
          }
          pFVar36 = (FName *)&pFVar36[5].Number;
        }
        pUVar23 = FWeakObjectPtr::Get(&(this->OwningLocalPlayer).WeakPtr);
        pTVar35 = local_400;
        pTVar33 = local_3f8;
        if (pUVar23 != (UObject *)0x0) {
          (pUVar22->OwningUserId).InternalId = *(int *)&pUVar23[7].field_0x4;
        }
      }
      uVar26 = (ulonglong)(uint)local_460.ArrayNum;
      pFVar31 = pFVar31 + 0x40;
      uVar28 = (ulonglong)local_410;
    }
  }
  ::FString::FString(&local_380,L"ObjectEnd");
  pTStack_438 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->SavedKeyProfilesMap).field_0x10;
  iVar29 = *(int *)&(this->SavedKeyProfilesMap).field_0x28;
  pTVar1 = &this->SavedKeyProfilesMap;
  iVar42 = 0;
  iVar38 = 0;
  uStack_428 = 0;
  uVar18 = (uint)local_408;
  uStack_42c = 0;
  if (iVar29 != 0) {
    puVar41 = *(uint **)&(this->SavedKeyProfilesMap).field_0x20;
    if (puVar41 == (uint *)0x0) {
      puVar41 = (uint *)pTStack_438;
    }
    uVar32 = *puVar41;
    uStack_428 = 0;
    while (uVar32 == 0) {
      lVar34 = (longlong)iVar38;
      uStack_428 = uStack_428 + 0x20;
      iVar38 = iVar38 + 1;
      uStack_42c = iVar29;
      if ((int)(iVar29 + -1 + (iVar29 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar38) goto LAB_14a6f5b01;
      uVar32 = puVar41[lVar34 + 1];
    }
    uVar18 = -uVar32 & uVar32;
    uVar28 = (ulonglong)uVar18 * 2 + 1;
    lVar34 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar34 == 0; lVar34 = lVar34 + -1) {
      }
    }
    local_2f4 = (int)lVar34;
    uStack_42c = uStack_428 + -1 + local_2f4;
    if (iVar29 < (int)uStack_42c) {
      uStack_42c = iVar29;
    }
  }
LAB_14a6f5b01:
  local_420 = *(int *)&(this->SavedKeyProfilesMap).field_0x8 -
              *(int *)&(this->SavedKeyProfilesMap).field_0x34;
  uStack_430 = 0xffffffff;
  uVar32 = *(uint *)&(this->SavedKeyProfilesMap).field_0x28;
  uStack_440 = CONCAT44(uVar18,iVar38);
  puVar44 = &(this->SavedKeyProfilesMap).field_0x10;
  uStack_424 = local_4c;
  uVar18 = uVar32 & 0xffffffe0;
  TStack_230._padding_ = uStack_440;
  iVar29 = (int)uVar32 >> 5;
  uStack_210 = CONCAT44(uStack_41c,local_420);
  TStack_230.UnvisitedBitMask = 0xffffffff;
  TStack_230.CurrentBitIndex = uStack_42c;
  TStack_230.BaseBitIndex = uStack_428;
  TStack_230._28_4_ = local_4c;
  local_448 = (TSet<TObjectPtr<UInputMappingContext_const_>,DefaultKeyFuncs<TObjectPtr<UInputMappingContext_const_>,0>,FDefaultSetAllocator>
               *)pTVar1;
  local_238 = pTVar1;
  TStack_230.Array = pTStack_438;
  if (((int)uVar32 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar17 = *(uint *)&(this->SavedKeyProfilesMap).field_0x28;
  if (uVar32 != uVar17) {
    puVar8 = *(undefined1 **)&(this->SavedKeyProfilesMap).field_0x20;
    puVar40 = puVar44;
    if (puVar8 != (undefined1 *)0x0) {
      puVar40 = puVar8;
    }
    uVar32 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)(puVar40 + (longlong)iVar29 * 4);
    while (uVar32 == 0) {
      lVar34 = (longlong)iVar29;
      uVar18 = uVar18 + 0x20;
      iVar29 = iVar29 + 1;
      uVar32 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29)
      goto LAB_14a6f5c30;
      uVar32 = *(uint *)(puVar40 + lVar34 * 4 + 4);
    }
    uVar28 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
    lVar34 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar34 == 0; lVar34 = lVar34 + -1) {
      }
    }
    local_2f0 = (int)lVar34;
    uVar32 = (uVar18 - 1) + local_2f0;
    if ((int)uVar17 < (int)uVar32) {
      uVar32 = uVar17;
    }
  }
LAB_14a6f5c30:
  do {
    pTVar12 = local_238;
    if (*(int *)(&local_238->field_0x0 + 8) - *(int *)(&local_238->field_0x0 + 0x34) !=
        (int)uStack_210) {
      local_465 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_465);
    }
    if (((TStack_230.CurrentBitIndex == uVar32) &&
        (TStack_230.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar44)) &&
       (pTVar12 == pTVar1)) goto LAB_14a6f5d1a;
    UObject::Serialize(*(UObject **)
                        ((longlong)TStack_230.CurrentBitIndex * 0x20 + 0x10 +
                        *(longlong *)&pTVar12->field_0x0),param_1);
    ::operator<<(param_1,&local_380);
    FVar27.Data = (FScriptContainerElement *)L"";
    if (local_380.Data.ArrayNum != 0) {
      FVar27.Data = local_380.Data.AllocatorInstance.Data;
    }
    iVar29 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar27.Data,L"ObjectEnd");
    if (iVar29 != 0) break;
    TStack_230.UnvisitedBitMask = TStack_230.UnvisitedBitMask & ~TStack_230._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_230);
  } while( true );
  bVar14 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<_4874167975445265325>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\UserSettings\\EnhancedInputUserSettings.cpp"
                      ,0x453,"SavedObjectTerminator == L\"ObjectEnd\"");
  if (bVar14) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (1 < (byte)LogEnhancedInput._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
  }
LAB_14a6f5d1a:
  if ((param_1->field_0x28 & 1) != 0) {
    uStack_428 = 0;
    pTStack_438 = (TBitArray<FDefaultBitArrayAllocator> *)
                  &(this->RegisteredMappingContexts).Elements.field_0x10;
    iVar29 = *(int *)&(this->RegisteredMappingContexts).Elements.field_0x28;
    pTVar5 = &this->RegisteredMappingContexts;
    uStack_42c = 0;
    if (iVar29 != 0) {
      puVar41 = *(uint **)&(this->RegisteredMappingContexts).Elements.field_0x20;
      if (puVar41 == (uint *)0x0) {
        puVar41 = (uint *)pTStack_438;
      }
      uVar18 = *puVar41;
      while (uVar18 == 0) {
        lVar34 = (longlong)iVar42;
        uStack_428 = uStack_428 + 0x20;
        iVar42 = iVar42 + 1;
        uStack_42c = iVar29;
        if ((int)(iVar29 + -1 + (iVar29 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar42) goto LAB_14a6f5db2;
        uVar18 = puVar41[lVar34 + 1];
      }
      local_408 = (ulonglong)(-uVar18 & uVar18);
      uVar28 = local_408 * 2 + 1;
      lVar34 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar34 == 0; lVar34 = lVar34 + -1) {
        }
      }
      local_2d0 = (int)lVar34;
      uStack_42c = uStack_428 + -1 + local_2d0;
      if (iVar29 < (int)uStack_42c) {
        uStack_42c = iVar29;
      }
    }
LAB_14a6f5db2:
    uVar18 = *(uint *)&(this->RegisteredMappingContexts).Elements.field_0x28;
    puVar44 = &(this->RegisteredMappingContexts).Elements.field_0x10;
    uVar32 = uVar18 & 0xffffffe0;
    local_420 = *(int *)&(this->RegisteredMappingContexts).Elements.field_0x8 -
                *(int *)&(this->RegisteredMappingContexts).Elements.field_0x34;
    uStack_430 = 0xffffffff;
    local_450 = -1 << ((byte)uVar18 & 0x1f);
    uStack_440 = CONCAT44((int)local_408,iVar42);
    uStack_424 = local_6c;
    iVar29 = (int)uVar18 >> 5;
    uStack_1e0 = CONCAT44(uStack_41c,local_420);
    TStack_200.UnvisitedBitMask = 0xffffffff;
    TStack_200.CurrentBitIndex = uStack_42c;
    TStack_200.BaseBitIndex = uStack_428;
    TStack_200._28_4_ = local_6c;
    local_448 = pTVar5;
    local_208 = pTVar5;
    TStack_200._padding_ = uStack_440;
    TStack_200.Array = pTStack_438;
    if (((int)uVar18 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar17 = *(uint *)&(this->RegisteredMappingContexts).Elements.field_0x28;
    if (uVar18 != uVar17) {
      puVar8 = *(undefined1 **)&(this->RegisteredMappingContexts).Elements.field_0x20;
      puVar40 = puVar44;
      if (puVar8 != (undefined1 *)0x0) {
        puVar40 = puVar8;
      }
      uVar18 = local_450 & *(uint *)(puVar40 + (longlong)iVar29 * 4);
      while (uVar18 == 0) {
        lVar34 = (longlong)iVar29;
        uVar32 = uVar32 + 0x20;
        iVar29 = iVar29 + 1;
        uVar18 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29)
        goto LAB_14a6f5ee0;
        uVar18 = *(uint *)(puVar40 + lVar34 * 4 + 4);
      }
      uVar28 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar34 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar34 == 0; lVar34 = lVar34 + -1) {
        }
      }
      uVar18 = (int)lVar34 + -1 + uVar32;
      if ((int)uVar17 < (int)uVar18) {
        uVar18 = uVar17;
      }
    }
LAB_14a6f5ee0:
    while( true ) {
      pTVar13 = local_208;
      if (*(int *)&(local_208->Elements).field_0x8 - *(int *)&(local_208->Elements).field_0x34 !=
          (int)uStack_1e0) {
        `TSparseArray<TSparseSetElement<TObjectPtr<UInputMappingContext_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_418);
      }
      if (((TStack_200.CurrentBitIndex == uVar18) &&
          (TStack_200.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar44)) &&
         (pTVar13 == pTVar5)) break;
      RegisterInputMappingContextInternal
                (this,*(UInputMappingContext **)
                       (*(longlong *)&pTVar13->Elements +
                       (longlong)TStack_200.CurrentBitIndex * 0x10));
      TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
    }
  }
  if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.Data.AllocatorInstance.Data);
  }
  DestructItems<UE::EnhancedInput::FMappableKeysHeader,int>
            ((FMappableKeysHeader *)local_460.AllocatorInstance.Data,local_460.ArrayNum);
  if ((FMappableKeysHeader *)local_460.AllocatorInstance.Data != (FMappableKeysHeader *)0x0) {
    FMemory::Free(local_460.AllocatorInstance.Data);
  }
  return;
}

// Serialize @ 14a6f5fb0

void __thiscall
UEnhancedInputUserSettings::Serialize
          (UEnhancedInputUserSettings *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetActiveKeyProfile @ 14a6f6130

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UEnhancedInputUserSettings::SetActiveKeyProfile(UEnhancedInputUserSettings *this,FString *param_1)

{
  void *_Src;
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  TObjectPtr<UEnhancedPlayerMappableKeyProfile>_u_0 *pTVar5;
  longlong lVar6;
  bool bVar7;
  TObjectPtr<UEnhancedPlayerMappableKeyProfile>_u_0 local_res8;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  puVar2 = (undefined8 *)(**(code **)(this->_padding_ + 0x348))();
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = *(int *)(puVar2 + 1);
  lVar6 = (longlong)local_20;
  _Src = (void *)*puVar2;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,_Src,lVar6 * 2);
  }
  lVar6 = this->_padding_;
  uVar3 = (**(code **)(lVar6 + 0x348))(this);
  plVar4 = (longlong *)(**(code **)(lVar6 + 0x360))(this,uVar3);
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == local_20) {
    if (1 < iVar1) {
      iVar1 = wcscmp((wchar_t *)(param_1->Data).AllocatorInstance.Data,(wchar_t *)local_28.Data);
      bVar7 = iVar1 == 0;
      goto LAB_14a6f6200;
    }
LAB_14a6f62e2:
    if (4 < (byte)LogEnhancedInput._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    }
  }
  else {
    bVar7 = iVar1 + local_20 == 1;
LAB_14a6f6200:
    if (bVar7) goto LAB_14a6f62e2;
    pTVar5 = &TMapBase<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>_>
              ::Find((TMapBase<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>_>
                      *)&this->SavedKeyProfilesMap,param_1)->field0_0x0;
    if (pTVar5 != (TObjectPtr<UEnhancedPlayerMappableKeyProfile>_u_0 *)0x0) {
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x308))(plVar4);
      }
      (**(code **)(pTVar5->DebugPtr->_padding_ + 0x300))();
      ::FString::operator=(&this->CurrentProfileIdentifierString,param_1);
      local_res8.DebugPtr = *(UEnhancedPlayerMappableKeyProfile **)pTVar5;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnKeyProfileChanged,
                 &local_res8);
      if (5 < (byte)LogEnhancedInput._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
      }
      bVar7 = true;
      goto LAB_14a6f6310;
    }
    if (1 < (byte)LogEnhancedInput._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    }
  }
  bVar7 = false;
LAB_14a6f6310:
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return bVar7;
}

// SetKeyProfile @ 14a6f6580

bool __thiscall
UEnhancedInputUserSettings::SetKeyProfile(UEnhancedInputUserSettings *this,FGameplayTag *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  FString local_18;
  
  pcVar1 = *(code **)(this->_padding_ + 0x338);
  ::FName::ToString(&param_1->TagName,&local_18);
  uVar2 = (*pcVar1)(this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (bool)uVar2;
}

// ShowDebugInfo @ 14a6f7870

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UEnhancedInputUserSettings::ShowDebugInfo(UEnhancedInputUserSettings *this,UCanvas *param_1)

{
  FDisplayDebugManager *this_00;
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  UObject *pUVar5;
  UFont *this_01;
  wchar_t *pwVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_res10 [2];
  FName local_res18;
  FString local_58;
  FString local_48 [2];
  
  if (param_1 != (UCanvas *)0x0) {
    this_00 = &param_1->DisplayDebugManager;
    pUVar5 = FWeakObjectPtr::Get(&(this->OwningLocalPlayer).WeakPtr);
    this_01 = UEngine::GetLargeFont();
    if ((this_01 != (UFont *)0x0) &&
       (this_01 != (UFont *)(param_1->DisplayDebugManager).DebugTextItem._padding_)) {
      (param_1->DisplayDebugManager).DebugTextItem._padding_ = (longlong)this_01;
      fVar7 = UFont::GetMaxCharHeight(this_01);
      (param_1->DisplayDebugManager).MaxCharHeight = fVar7;
    }
    fVar7 = __real_3b808081;
    bVar1 = (UE::EnhancedInput::DebugColors::HeaderColor->field0_0x0)._s_0.A;
    fVar9 = (float)(UE::EnhancedInput::DebugColors::HeaderColor->field0_0x0)._s_0.G *
            __real_3b808081;
    fVar8 = (float)(UE::EnhancedInput::DebugColors::HeaderColor->field0_0x0)._s_0.B *
            __real_3b808081;
    *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
         (float)(UE::EnhancedInput::DebugColors::HeaderColor->field0_0x0)._s_0.R * __real_3b808081;
    *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = fVar9;
    *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = fVar8;
    *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         (float)bVar1 * fVar7;
    local_res10[0] = 0.0;
    if (this->_padding_ == 0) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      local_res18 = *(FName *)(this->_padding_ + 0x18);
      ::FName::ToString(&local_res18,&local_58);
    }
    ::FString::PrintfImpl(local_48,L"\n\nInput User Settings (%s)\n------------------------------");
    FDisplayDebugManager::DrawString(this_00,local_48,local_res10);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    bVar1 = (UE::EnhancedInput::DebugColors::TitleColor->field0_0x0)._s_0.G;
    bVar2 = (UE::EnhancedInput::DebugColors::TitleColor->field0_0x0)._s_0.B;
    bVar3 = (UE::EnhancedInput::DebugColors::TitleColor->field0_0x0)._s_0.A;
    *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
         (float)(UE::EnhancedInput::DebugColors::TitleColor->field0_0x0)._s_0.R * fVar7;
    *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         (float)bVar1 * fVar7;
    *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = (float)bVar2 * fVar7;
    *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         (float)bVar3 * fVar7;
    local_res10[0] = 0.0;
    ::FString::FString(local_48,L"\t Local Player:");
    FDisplayDebugManager::DrawString(this_00,local_48,local_res10);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
    if (pUVar5 == (UObject *)0x0) {
      bVar1 = (UE::EnhancedInput::DebugColors::ErrorColor->field0_0x0)._s_0.G;
      bVar2 = (UE::EnhancedInput::DebugColors::ErrorColor->field0_0x0)._s_0.B;
      bVar3 = (UE::EnhancedInput::DebugColors::ErrorColor->field0_0x0)._s_0.A;
      bVar4 = (UE::EnhancedInput::DebugColors::ErrorColor->field0_0x0)._s_0.R;
      pwVar6 = L"Invalid Local Player on the Input User Settings!";
    }
    else {
      bVar1 = (UE::EnhancedInput::DebugColors::NormalColor->field0_0x0)._s_0.G;
      bVar2 = (UE::EnhancedInput::DebugColors::NormalColor->field0_0x0)._s_0.B;
      bVar3 = (UE::EnhancedInput::DebugColors::NormalColor->field0_0x0)._s_0.A;
      *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
           (float)(UE::EnhancedInput::DebugColors::NormalColor->field0_0x0)._s_0.R * fVar7;
      *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
           (float)bVar1 * fVar7;
      *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = (float)bVar2 * fVar7;
      *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
           (float)bVar3 * fVar7;
      local_res18.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
      local_res18.Number = *(uint *)&pUVar5->field_0x1c;
      local_res10[0] = 0.0;
      ::FName::ToString(&local_res18,&local_58);
      ::FString::PrintfImpl(local_48,L"\t \t %s \n \t PlatformUserId: %d");
      FDisplayDebugManager::DrawString(this_00,local_48,local_res10);
      if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      (**(code **)(this->_padding_ + 0x390))(this,param_1);
      pwVar6 = 
      L"----------------------------\n(end of Input User Settings)\n------------------------------\n"
      ;
      bVar1 = (UE::EnhancedInput::DebugColors::HeaderColor->field0_0x0)._s_0.G;
      bVar2 = (UE::EnhancedInput::DebugColors::HeaderColor->field0_0x0)._s_0.B;
      bVar3 = (UE::EnhancedInput::DebugColors::HeaderColor->field0_0x0)._s_0.A;
      bVar4 = (UE::EnhancedInput::DebugColors::HeaderColor->field0_0x0)._s_0.R;
    }
    *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = (float)bVar4 * fVar7;
    *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         (float)bVar1 * fVar7;
    *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = (float)bVar2 * fVar7;
    *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         (float)bVar3 * fVar7;
    local_res10[0] = 0.0;
    ::FString::FString(local_48,pwVar6);
    FDisplayDebugManager::DrawString(this_00,local_48,local_res10);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ShowDebugInfoInternal @ 14a6f7dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UEnhancedInputUserSettings::ShowDebugInfoInternal(UEnhancedInputUserSettings *this,UCanvas *param_1)

{
  FName *pFVar1;
  FDisplayDebugManager *pFVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  code *pcVar8;
  float fVar9;
  FName *pFVar10;
  TMap<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>_>
  *pTVar11;
  bool bVar12;
  undefined8 uVar13;
  longlong lVar14;
  UClass *pUVar15;
  FText *pFVar16;
  byte bVar17;
  longlong lVar18;
  FKey *this_00;
  FKey *pFVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 *puVar23;
  FName FVar24;
  FName FVar25;
  uint *puVar26;
  int iVar27;
  FName *pFVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_b98 [32];
  undefined1 local_b78;
  undefined1 local_b77;
  undefined1 local_b76 [2];
  uint local_b74;
  FName *local_b70;
  int iStack_b68;
  uint uStack_b64;
  FName local_b60;
  undefined4 uStack_b58;
  uint uStack_b54;
  int local_b50;
  undefined4 uStack_b4c;
  int iStack_b48;
  undefined4 uStack_b44;
  float local_b40;
  float local_b3c;
  float local_b38;
  float local_b34;
  float local_b30;
  float local_b2c;
  float local_b28;
  float local_b24;
  float local_b20 [2];
  int local_b18;
  uint uStack_b14;
  FName FStack_b10;
  uint local_b08;
  uint uStack_b04;
  uint uStack_b00;
  undefined4 uStack_afc;
  FName *local_af8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_af0;
  undefined8 local_ad0;
  FString local_ac8;
  FString local_ab8;
  FString local_aa8;
  int local_a98;
  int local_a94;
  FName local_a90;
  FName local_a88;
  UEnum *local_a80;
  FName local_a78;
  FName *local_a70;
  FDisplayDebugManager *local_a68;
  int local_a60;
  int local_a5c;
  int local_a58;
  int local_a54;
  FName *local_a50;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a48;
  undefined8 uStack_a28;
  TMap<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>_>
  *local_a20;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a18;
  undefined8 uStack_9f8;
  FString local_9f0;
  wchar_t *local_9d8;
  int iStack_9d0;
  undefined4 uStack_9cc;
  FString local_9c8;
  FString local_9b8;
  FString local_9a8;
  FString local_998;
  FString local_988;
  FString local_978;
  FString local_968;
  FString local_958;
  TStringView<wchar_t> local_948;
  FString local_938;
  FText local_928;
  FText local_918;
  TMap<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>_>
  *local_908;
  longlong lStack_900;
  FName local_8f8;
  undefined8 uStack_8f0;
  int iStack_8ec;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined4 local_8bc;
  undefined4 local_89c;
  undefined4 local_87c;
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1024];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_b98;
  if ((param_1 == (UCanvas *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Canvas",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\UserSettings\\EnhancedInputUserSettings.cpp"
                          ,0x75c,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar9 = __real_3b808081;
  pFVar2 = &param_1->DisplayDebugManager;
  bVar17 = (UE::EnhancedInput::DebugColors::TitleColor->field0_0x0)._s_0.A;
  fVar30 = (float)(UE::EnhancedInput::DebugColors::TitleColor->field0_0x0)._s_0.G * __real_3b808081;
  fVar29 = (float)(UE::EnhancedInput::DebugColors::TitleColor->field0_0x0)._s_0.B * __real_3b808081;
  *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
       (float)(UE::EnhancedInput::DebugColors::TitleColor->field0_0x0)._s_0.R * __real_3b808081;
  *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = fVar30;
  *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = fVar29;
  *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
       (float)bVar17 * fVar9;
  local_b40 = 0.0;
  local_a68 = pFVar2;
  ::FString::PrintfImpl(&local_978,L"Player Key Profiles");
  FDisplayDebugManager::DrawString(pFVar2,&local_978,&local_b40);
  if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_978.Data.AllocatorInstance.Data);
  }
  bVar17 = (UE::EnhancedInput::DebugColors::NormalColor->field0_0x0)._s_0.G;
  bVar5 = (UE::EnhancedInput::DebugColors::NormalColor->field0_0x0)._s_0.B;
  bVar6 = (UE::EnhancedInput::DebugColors::NormalColor->field0_0x0)._s_0.A;
  *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
       (float)(UE::EnhancedInput::DebugColors::NormalColor->field0_0x0)._s_0.R * fVar9;
  *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
       (float)bVar17 * fVar9;
  *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = (float)bVar5 * fVar9;
  *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
       (float)bVar6 * fVar9;
  local_b3c = 0.0;
  ::FString::PrintfImpl(&local_968,L"\t There are \'%d\' saved key profiles");
  FDisplayDebugManager::DrawString(pFVar2,&local_968,&local_b3c);
  if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_968.Data.AllocatorInstance.Data);
  }
  lVar14 = this->_padding_;
  uVar13 = (**(code **)(lVar14 + 0x348))(this);
  lVar14 = (**(code **)(lVar14 + 0x360))(this,uVar13);
  if (lVar14 == 0) {
    bVar17 = (UE::EnhancedInput::DebugColors::ErrorColor->field0_0x0)._s_0.G;
    bVar5 = (UE::EnhancedInput::DebugColors::ErrorColor->field0_0x0)._s_0.B;
    bVar6 = (UE::EnhancedInput::DebugColors::ErrorColor->field0_0x0)._s_0.A;
    *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
         (float)(UE::EnhancedInput::DebugColors::ErrorColor->field0_0x0)._s_0.R * fVar9;
    *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         (float)bVar17 * fVar9;
    *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = (float)bVar5 * fVar9;
    *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         (float)bVar6 * fVar9;
    local_b34 = 0.0;
    ::FString::FString(&local_9f0,L"There is no currently active profile!");
    FDisplayDebugManager::DrawString(pFVar2,&local_9f0,&local_b34);
  }
  else {
    local_b38 = 0.0;
    if (*(longlong *)(lVar14 + 0x10) == 0) {
      ::FString::FString(&local_ac8,L"None");
    }
    else {
      local_a90 = *(FName *)(*(longlong *)(lVar14 + 0x10) + 0x18);
      ::FName::ToString(&local_a90,&local_ac8);
    }
    ::FString::PrintfImpl(&local_958,L"\t Currently Active Profile: %s (%s)");
    FDisplayDebugManager::DrawString(pFVar2,&local_958,&local_b38);
    local_9f0.Data.AllocatorInstance.Data = local_ac8.Data.AllocatorInstance.Data;
    if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_958.Data.AllocatorInstance.Data);
      local_9f0.Data.AllocatorInstance.Data = local_ac8.Data.AllocatorInstance.Data;
    }
  }
  if (local_9f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9f0.Data.AllocatorInstance.Data);
  }
  puVar3 = &(this->SavedKeyProfilesMap).field_0x10;
  uVar7 = *(uint *)&(this->SavedKeyProfilesMap).field_0x28;
  local_b70 = (FName *)&this->SavedKeyProfilesMap;
  iStack_b68 = 0;
  uStack_b64 = 1;
  local_b50 = 0;
  uStack_b54 = 0;
  if (uVar7 != 0) {
    puVar26 = *(uint **)&(this->SavedKeyProfilesMap).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar3;
    }
    uVar22 = *puVar26;
    local_b50 = 0;
    while (uVar22 == 0) {
      lVar14 = (longlong)iStack_b68;
      local_b50 = local_b50 + 0x20;
      iStack_b68 = iStack_b68 + 1;
      uStack_b54 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_b68)
      goto LAB_14a6f816d;
      uVar22 = (puVar26 + 1)[lVar14];
    }
    uStack_b64 = -uVar22 & uVar22;
    uVar4 = (ulonglong)uStack_b64 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_a60 = (int)lVar14;
    uStack_b54 = local_a60 + -1 + local_b50;
    if ((int)uVar7 < (int)uStack_b54) {
      uStack_b54 = uVar7;
    }
  }
LAB_14a6f816d:
  uVar22 = *(uint *)&(this->SavedKeyProfilesMap).field_0x28;
  uStack_b4c = local_8bc;
  bVar17 = (byte)uVar22 & 0x1f;
  iStack_b48 = *(int *)&(this->SavedKeyProfilesMap).field_0x8 -
               *(int *)&(this->SavedKeyProfilesMap).field_0x34;
  uVar21 = uVar22 & 0xffffffe0;
  iVar27 = (int)uVar22 >> 5;
  uStack_b14 = 1 << bVar17;
  uVar20 = -1 << bVar17;
  uStack_b58 = 0xffffffff;
  TStack_a18._padding_ = CONCAT44(uStack_b64,iStack_b68);
  TStack_a18.CurrentBitIndex = uStack_b54;
  TStack_a18.UnvisitedBitMask = 0xffffffff;
  TStack_a18._28_4_ = local_8bc;
  TStack_a18.BaseBitIndex = local_b50;
  uStack_9f8 = CONCAT44(uStack_b44,iStack_b48);
  local_b60 = (FName)puVar3;
  local_b18 = iVar27;
  FStack_b10 = (FName)puVar3;
  local_b08 = uVar20;
  uStack_b04 = uVar22;
  uStack_b00 = uVar21;
  local_a20 = (TMap<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>_>
               *)local_b70;
  TStack_a18.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar22 < 0) || ((int)uVar7 < (int)uVar22)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar7 = *(uint *)&(this->SavedKeyProfilesMap).field_0x28;
  if (uVar22 != uVar7) {
    puVar23 = *(undefined1 **)&(this->SavedKeyProfilesMap).field_0x20;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = puVar3;
    }
    uVar20 = uVar20 & *(uint *)(puVar23 + (longlong)iVar27 * 4);
    while (uVar20 == 0) {
      uStack_b00 = uVar21 + 0x20;
      local_b18 = iVar27 + 1;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < local_b18)
      goto LAB_14a6f82b8;
      uVar20 = *(uint *)(puVar23 + (longlong)iVar27 * 4 + 4);
      local_b08 = 0xffffffff;
      uVar21 = uStack_b00;
      iVar27 = local_b18;
    }
    uStack_b14 = -uVar20 & uVar20;
    uVar4 = (ulonglong)uStack_b14 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_a5c = (int)lVar14;
    uStack_b04 = local_a5c + -1 + uVar21;
    if ((int)uVar7 < (int)uStack_b04) {
LAB_14a6f82b8:
      uStack_b04 = uVar7;
    }
  }
  TStack_af0._padding_ = CONCAT44(uStack_b14,local_b18);
  local_af8 = (FName *)&this->SavedKeyProfilesMap;
  TStack_af0.CurrentBitIndex = uStack_b04;
  TStack_af0.UnvisitedBitMask = local_b08;
  TStack_af0._28_4_ = uStack_afc;
  TStack_af0.BaseBitIndex = uStack_b00;
  TStack_af0.Array = (TBitArray<FDefaultBitArrayAllocator> *)FStack_b10;
  local_ad0 = CONCAT44(local_ad0._4_4_,
                       *(int *)&(this->SavedKeyProfilesMap).field_0x8 -
                       *(int *)&(this->SavedKeyProfilesMap).field_0x34);
  local_8f8 = FStack_b10;
  uStack_8e0 = local_ad0;
  local_908 = (TMap<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>,0>_>
               *)local_af8;
  lStack_900 = TStack_af0._padding_;
  uStack_8f0 = TStack_af0._16_8_;
  local_8e8 = TStack_af0._24_8_;
  do {
    pTVar11 = local_a20;
    if (*(int *)&local_a20->field_0x8 - *(int *)&local_a20->field_0x34 != (int)uStack_9f8) {
      local_b78 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UEnhancedPlayerMappableKeyProfile>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_b78);
    }
    if (((TStack_a18.CurrentBitIndex == iStack_8ec) && ((FName)TStack_a18.Array == local_8f8)) &&
       (pTVar11 == local_908)) {
      return;
    }
    lVar14 = *(longlong *)
              ((longlong)TStack_a18.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)pTVar11);
    if (lVar14 != 0) {
      local_9d8 = L"/Script/EnhancedInput.EPlayerMappableKeySlot";
      iStack_9d0 = 0x2c;
      pUVar15 = Z_Construct_UClass_UEnum_NoRegister();
      local_948._12_4_ = uStack_9cc;
      local_948.Size = iStack_9d0;
      local_948.DataPtr = local_9d8;
      local_a80 = (UEnum *)StaticFindObjectChecked(pUVar15,(UObject *)0x0,&local_948,None);
      pFVar2 = local_a68;
      bVar17 = (UE::EnhancedInput::DebugColors::TitleColor->field0_0x0)._s_0.G;
      bVar5 = (UE::EnhancedInput::DebugColors::TitleColor->field0_0x0)._s_0.B;
      bVar6 = (UE::EnhancedInput::DebugColors::TitleColor->field0_0x0)._s_0.A;
      *(float *)&(local_a68->DebugTextItem)._padding_ =
           (float)(UE::EnhancedInput::DebugColors::TitleColor->field0_0x0)._s_0.R * fVar9;
      *(float *)((longlong)&(local_a68->DebugTextItem)._padding_ + 4) = (float)bVar17 * fVar9;
      *(float *)&(local_a68->DebugTextItem)._padding_ = (float)bVar5 * fVar9;
      *(float *)((longlong)&(local_a68->DebugTextItem)._padding_ + 4) = (float)bVar6 * fVar9;
      local_b30 = 0.0;
      if (*(longlong *)(lVar14 + 0x10) == 0) {
        ::FString::FString(&local_ab8,L"None");
      }
      else {
        local_a88 = *(FName *)(*(longlong *)(lVar14 + 0x10) + 0x18);
        ::FName::ToString(&local_a88,&local_ab8);
      }
      ::FString::PrintfImpl(&local_9c8,L"Profile: %s (%s)\n");
      FDisplayDebugManager::DrawString(pFVar2,&local_9c8,&local_b30);
      if (local_9c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9c8.Data.AllocatorInstance.Data);
      }
      if (local_ab8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ab8.Data.AllocatorInstance.Data);
      }
      bVar17 = (UE::EnhancedInput::DebugColors::NormalColor->field0_0x0)._s_0.G;
      bVar5 = (UE::EnhancedInput::DebugColors::NormalColor->field0_0x0)._s_0.B;
      bVar6 = (UE::EnhancedInput::DebugColors::NormalColor->field0_0x0)._s_0.A;
      *(float *)&(pFVar2->DebugTextItem)._padding_ =
           (float)(UE::EnhancedInput::DebugColors::NormalColor->field0_0x0)._s_0.R * fVar9;
      *(float *)((longlong)&(pFVar2->DebugTextItem)._padding_ + 4) = (float)bVar17 * fVar9;
      *(float *)&(pFVar2->DebugTextItem)._padding_ = (float)bVar5 * fVar9;
      *(float *)((longlong)&(pFVar2->DebugTextItem)._padding_ + 4) = (float)bVar6 * fVar9;
      local_b2c = 0.0;
      ::FString::FString(&local_9b8,L"\t -------------------- ");
      FDisplayDebugManager::DrawString(pFVar2,&local_9b8,&local_b2c);
      if (local_9b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9b8.Data.AllocatorInstance.Data);
      }
      bVar17 = (UE::EnhancedInput::DebugColors::TitleColor->field0_0x0)._s_0.G;
      bVar5 = (UE::EnhancedInput::DebugColors::TitleColor->field0_0x0)._s_0.B;
      bVar6 = (UE::EnhancedInput::DebugColors::TitleColor->field0_0x0)._s_0.A;
      *(float *)&(pFVar2->DebugTextItem)._padding_ =
           (float)(UE::EnhancedInput::DebugColors::TitleColor->field0_0x0)._s_0.R * fVar9;
      *(float *)((longlong)&(pFVar2->DebugTextItem)._padding_ + 4) = (float)bVar17 * fVar9;
      *(float *)&(pFVar2->DebugTextItem)._padding_ = (float)bVar5 * fVar9;
      *(float *)((longlong)&(pFVar2->DebugTextItem)._padding_ + 4) = (float)bVar6 * fVar9;
      local_b28 = 0.0;
      ::FString::FString(&local_9a8,L"\t Player Key Mappings:\n");
      FDisplayDebugManager::DrawString(pFVar2,&local_9a8,&local_b28);
      if (local_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9a8.Data.AllocatorInstance.Data);
      }
      local_b60 = (FName)(lVar14 + 0x68);
      uVar7 = *(uint *)(lVar14 + 0x80);
      pFVar28 = (FName *)(lVar14 + 0x58);
      iStack_b68 = 0;
      uStack_b64 = 1;
      local_b50 = 0;
      uStack_b54 = 0;
      if (uVar7 != 0) {
        FVar25 = local_b60;
        if (*(FName *)(lVar14 + 0x78) != (FName)0x0) {
          FVar25 = *(FName *)(lVar14 + 0x78);
        }
        uVar22 = *(uint *)FVar25;
        local_b50 = 0;
        while (uVar22 == 0) {
          lVar18 = (longlong)iStack_b68;
          local_b50 = local_b50 + 0x20;
          iStack_b68 = iStack_b68 + 1;
          uStack_b54 = uVar7;
          if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_b68)
          goto LAB_14a6f867f;
          uVar22 = ((uint *)((longlong)FVar25 + 4))[lVar18];
        }
        uStack_b64 = -uVar22 & uVar22;
        uVar4 = (ulonglong)uStack_b64 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_a58 = (int)lVar18;
        uStack_b54 = local_b50 + -1 + local_a58;
        if ((int)uVar7 < (int)uStack_b54) {
          uStack_b54 = uVar7;
        }
      }
LAB_14a6f867f:
      FVar25 = (FName)(lVar14 + 0x68);
      uStack_b4c = local_89c;
      iStack_b48 = *(int *)(lVar14 + 0x60) - *(int *)(lVar14 + 0x8c);
      uVar22 = *(uint *)(lVar14 + 0x80);
      TStack_af0._padding_ = CONCAT44(uStack_b64,iStack_b68);
      uStack_b58 = 0xffffffff;
      uVar20 = uVar22 & 0xffffffe0;
      TStack_af0.CurrentBitIndex = uStack_b54;
      TStack_af0.UnvisitedBitMask = 0xffffffff;
      iVar27 = (int)uVar22 >> 5;
      TStack_af0._28_4_ = local_89c;
      TStack_af0.BaseBitIndex = local_b50;
      local_ad0 = CONCAT44(uStack_b44,iStack_b48);
      local_b74 = uVar22;
      local_b70 = pFVar28;
      local_af8 = pFVar28;
      TStack_af0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b60;
      local_a78 = FVar25;
      local_a70 = pFVar28;
      if ((((int)uVar22 < 0) || ((int)uVar7 < (int)uVar22)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar7 = *(uint *)(lVar14 + 0x80);
      if (uVar22 != uVar7) {
        FVar24 = FVar25;
        if (*(FName *)(lVar14 + 0x78) != (FName)0x0) {
          FVar24 = *(FName *)(lVar14 + 0x78);
        }
        uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)((longlong)FVar24 + (longlong)iVar27 * 4);
        while (uVar22 == 0) {
          lVar14 = (longlong)iVar27;
          uVar20 = uVar20 + 0x20;
          iVar27 = iVar27 + 1;
          uVar22 = uVar7;
          local_b74 = uVar7;
          if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
          goto LAB_14a6f87b1;
          uVar22 = ((uint *)((longlong)FVar24 + 4))[lVar14];
        }
        uVar4 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_a54 = (int)lVar14;
        uVar22 = (uVar20 - 1) + local_a54;
        local_b74 = uVar22;
        if ((int)uVar7 < (int)uVar22) {
          uVar22 = uVar7;
          local_b74 = uVar7;
        }
      }
LAB_14a6f87b1:
      while( true ) {
        pFVar1 = local_af8;
        if (local_af8[1].ComparisonIndex.Value - local_af8[6].Number != (int)local_ad0) {
          local_b77 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,FKeyMappingRow>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_b77);
        }
        if (((TStack_af0.CurrentBitIndex == uVar22) && ((FName)TStack_af0.Array == FVar25)) &&
           (pFVar1 == pFVar28)) break;
        pFVar28 = (FName *)((longlong)TStack_af0.CurrentBitIndex * 0x60 + (longlong)*pFVar1);
        bVar17 = (UE::EnhancedInput::DebugColors::KeyMappingRow->field0_0x0)._s_0.G;
        bVar5 = (UE::EnhancedInput::DebugColors::KeyMappingRow->field0_0x0)._s_0.B;
        bVar6 = (UE::EnhancedInput::DebugColors::KeyMappingRow->field0_0x0)._s_0.A;
        *(float *)&(pFVar2->DebugTextItem)._padding_ =
             (float)(UE::EnhancedInput::DebugColors::KeyMappingRow->field0_0x0)._s_0.R * fVar9;
        *(float *)((longlong)&(pFVar2->DebugTextItem)._padding_ + 4) = (float)bVar17 * fVar9;
        *(float *)&(pFVar2->DebugTextItem)._padding_ = (float)bVar5 * fVar9;
        *(float *)((longlong)&(pFVar2->DebugTextItem)._padding_ + 4) = (float)bVar6 * fVar9;
        local_b24 = 0.0;
        ::FName::ToString(pFVar28,&local_938);
        ::FString::PrintfImpl(&local_998,L"Mapping Row: \'%s\' \t \t has \'%d\' Mappings");
        FDisplayDebugManager::DrawString(pFVar2,&local_998,&local_b24);
        if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_998.Data.AllocatorInstance.Data);
        }
        if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_938.Data.AllocatorInstance.Data);
        }
        uVar7 = pFVar28[6].ComparisonIndex.Value;
        local_b60 = (FName)(pFVar28 + 3);
        pFVar1 = pFVar28 + 1;
        iStack_b68 = 0;
        uStack_b64 = 1;
        local_b50 = 0;
        uStack_b54 = 0;
        if (uVar7 != 0) {
          FVar25 = local_b60;
          if (pFVar28[5] != (FName)0x0) {
            FVar25 = pFVar28[5];
          }
          uVar22 = *(uint *)FVar25;
          local_b50 = 0;
          while (uVar22 == 0) {
            lVar14 = (longlong)iStack_b68;
            local_b50 = local_b50 + 0x20;
            iStack_b68 = iStack_b68 + 1;
            uStack_b54 = uVar7;
            if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_b68)
            goto LAB_14a6f895e;
            uVar22 = ((uint *)((longlong)FVar25 + 4))[lVar14];
          }
          uStack_b64 = -uVar22 & uVar22;
          uVar4 = (ulonglong)uStack_b64 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_a98 = (int)lVar14;
          uStack_b54 = local_b50 + -1 + local_a98;
          if ((int)uVar7 < (int)uStack_b54) {
            uStack_b54 = uVar7;
          }
        }
LAB_14a6f895e:
        uVar22 = pFVar28[6].ComparisonIndex.Value;
        uStack_b4c = local_87c;
        iStack_b48 = pFVar28[2].ComparisonIndex.Value - pFVar28[7].Number;
        uVar20 = uVar22 & 0xffffffe0;
        TStack_a48._padding_ = CONCAT44(uStack_b64,iStack_b68);
        uStack_b58 = 0xffffffff;
        TStack_a48.CurrentBitIndex = uStack_b54;
        TStack_a48.UnvisitedBitMask = 0xffffffff;
        iVar27 = (int)uVar22 >> 5;
        TStack_a48._28_4_ = local_87c;
        TStack_a48.BaseBitIndex = local_b50;
        uStack_a28 = CONCAT44(uStack_b44,iStack_b48);
        local_b70 = pFVar1;
        local_a50 = pFVar1;
        TStack_a48.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b60;
        if ((((int)uVar22 < 0) || ((int)uVar7 < (int)uVar22)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar7 = pFVar28[6].ComparisonIndex.Value;
        if (uVar22 != uVar7) {
          FVar25 = (FName)(pFVar28 + 3);
          if (pFVar28[5] != (FName)0x0) {
            FVar25 = pFVar28[5];
          }
          uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)((longlong)FVar25 + (longlong)iVar27 * 4);
          while (uVar22 == 0) {
            lVar14 = (longlong)iVar27;
            uVar20 = uVar20 + 0x20;
            iVar27 = iVar27 + 1;
            uVar22 = uVar7;
            if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
            goto LAB_14a6f8a70;
            uVar22 = ((uint *)((longlong)FVar25 + 4))[lVar14];
          }
          uVar4 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
          lVar14 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_a94 = (int)lVar14;
          uVar22 = (uVar20 - 1) + local_a94;
          if ((int)uVar7 < (int)uVar22) {
            uVar22 = uVar7;
          }
        }
LAB_14a6f8a70:
        while( true ) {
          pFVar10 = local_a50;
          if (local_a50[1].ComparisonIndex.Value - local_a50[6].Number != (int)uStack_a28) {
            local_b76[0] = 0;
            `TSparseArray<TSparseSetElement<FPlayerKeyMapping>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_b76);
          }
          if (((TStack_a48.CurrentBitIndex == uVar22) &&
              (TStack_a48.Array == (TBitArray<FDefaultBitArrayAllocator> *)(pFVar28 + 3))) &&
             (pFVar10 == pFVar1)) break;
          FVar25 = *pFVar10;
          lVar14 = (longlong)TStack_a48.CurrentBitIndex * 0xb0;
          local_878.Base = local_858;
          local_878.bIsDynamic = false;
          local_878.bIsExternal = false;
          local_878.CurPos = local_858;
          local_878.End = (wchar_t *)local_58;
          if (local_a80 == (UEnum *)0x0) {
            ::FString::FString(&local_aa8,L"Unknown Slot Enum State!");
          }
          else {
            UEnum::GetNameStringByValue
                      (local_a80,&local_aa8,(ulonglong)*(byte *)(lVar14 + 0x28 + (longlong)FVar25));
          }
          TStringBuilderBase<wchar_t>::AppendfImpl(&local_878,L"\t| Slot: %s   \t");
          if (local_aa8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_aa8.Data.AllocatorInstance.Data);
          }
          pFVar19 = (FKey *)((longlong)FVar25 + 0x48 + lVar14);
          this_00 = (FKey *)(lVar14 + (longlong)FVar25 + 0x30);
          if (pFVar19->KeyName != *(FName *)(lVar14 + 0x30 + (longlong)FVar25)) {
            this_00 = pFVar19;
          }
          pFVar16 = FKey::GetDisplayName(this_00,&local_928,true);
          FText::ToString(pFVar16);
          TStringBuilderBase<wchar_t>::AppendfImpl(&local_878,L"\t| Current: %s   \t");
          if (local_928.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_928.TextData.Reference + 0x10))();
          }
          pFVar16 = FKey::GetDisplayName((FKey *)(lVar14 + (longlong)FVar25 + 0x30),&local_918,true)
          ;
          FText::ToString(pFVar16);
          TStringBuilderBase<wchar_t>::AppendfImpl(&local_878,L"\t| Default: %s   \t");
          if (local_918.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_918.TextData.Reference + 0x10))();
          }
          TStringBuilderBase<wchar_t>::AppendfImpl(&local_878,L"\t| Dirty: %s   ");
          bVar17 = (UE::EnhancedInput::DebugColors::KeyMappingColor->field0_0x0)._s_0.G;
          bVar5 = (UE::EnhancedInput::DebugColors::KeyMappingColor->field0_0x0)._s_0.B;
          bVar6 = (UE::EnhancedInput::DebugColors::KeyMappingColor->field0_0x0)._s_0.A;
          *(float *)&(pFVar2->DebugTextItem)._padding_ =
               (float)(UE::EnhancedInput::DebugColors::KeyMappingColor->field0_0x0)._s_0.R * fVar9;
          *(float *)((longlong)&(pFVar2->DebugTextItem)._padding_ + 4) = (float)bVar17 * fVar9;
          *(float *)&(pFVar2->DebugTextItem)._padding_ = (float)bVar5 * fVar9;
          *(float *)((longlong)&(pFVar2->DebugTextItem)._padding_ + 4) = (float)bVar6 * fVar9;
          local_b20[0] = 0.0;
          if (local_878.End < local_878.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_878,1);
          }
          *local_878.CurPos = L'\0';
          ::FString::FString(&local_988,local_878.Base);
          FDisplayDebugManager::DrawString(pFVar2,&local_988,local_b20);
          if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_988.Data.AllocatorInstance.Data);
          }
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
          TStack_a48.UnvisitedBitMask = TStack_a48.UnvisitedBitMask & ~TStack_a48._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a48);
        }
        TStack_af0.UnvisitedBitMask = TStack_af0.UnvisitedBitMask & ~TStack_af0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_af0);
        pFVar28 = local_a70;
        FVar25 = local_a78;
        uVar22 = local_b74;
      }
    }
    TStack_a18.UnvisitedBitMask = TStack_a18.UnvisitedBitMask & ~TStack_a18._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a18);
  } while( true );
}

// StaticRegisterNativesUEnhancedInputUserSettings @ 14a6fb4c0

void __cdecl UEnhancedInputUserSettings::StaticRegisterNativesUEnhancedInputUserSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x13;
  local_18.DataPtr = Z_Construct_UClass_UEnhancedInputUserSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnMapPlayerKey @ 14a6fd8f0

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
UEnhancedInputUserSettings::UnMapPlayerKey
          (UEnhancedInputUserSettings *this,FMapPlayerKeyArgs *param_1,
          FGameplayTagContainer *param_2)

{
  longlong lVar1;
  bool bVar2;
  FString *pFVar3;
  longlong *plVar4;
  FPlayerKeyMapping *this_00;
  UWorld *this_01;
  FTimerManager *this_02;
  undefined8 *puVar5;
  ulong64 uVar6;
  FTimerHandle FVar7;
  FName FVar8;
  FName local_res10 [2];
  UEnhancedInputUserSettings *local_res20;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  
  bVar2 = ::FName::IsWithinBounds((FNameEntryId)(param_1->MappingName).ComparisonIndex.Value);
  if (!bVar2) {
    local_res10[0] = UE::EnhancedInput::TAG_InvalidMappingName.InternalTag.TagName;
    FGameplayTagContainer::AddTag(param_2,(FGameplayTag *)local_res10);
    return;
  }
  pFVar3 = &param_1->ProfileIdString;
  lVar1 = this->_padding_;
  if ((param_1->ProfileIdString).Data.ArrayNum < 2) {
    pFVar3 = (FString *)(**(code **)(lVar1 + 0x348))(this,pFVar3);
  }
  plVar4 = (longlong *)(**(code **)(lVar1 + 0x360))(this,pFVar3);
  FVar8 = UE::EnhancedInput::TAG_NoKeyProfile.InternalTag.TagName;
  if ((plVar4 == (longlong *)0x0) ||
     (this_00 = (FPlayerKeyMapping *)(**(code **)(*plVar4 + 0x2e8))(plVar4,param_1),
     FVar8 = UE::EnhancedInput::TAG_NoMatchingMappings.InternalTag.TagName,
     this_00 == (FPlayerKeyMapping *)0x0)) {
    local_res10[0] = FVar8;
    FGameplayTagContainer::AddTag(param_2,(FGameplayTag *)local_res10);
  }
  else {
    FPlayerKeyMapping::ResetToDefault(this_00);
    if (this_00->bIsDirty != 0) {
      (**(code **)(this->_padding_ + 0x2e0))(this,this_00,param_1,1);
      if ((param_1->bDeferOnSettingsChangedBroadcast == '\0') ||
         ((this->DeferredSettingsChangedTimerHandle).Handle != 0)) {
        local_res10[0] = (FName)this;
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSettingsChanged,
                   local_res10);
      }
      else {
        this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
        if (this_01 != (UWorld *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          local_res10[0].ComparisonIndex.Value = 0;
          local_res10[0].Number = 0;
          local_res20 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)local_res10,(FObjectPtr)&local_res20);
          this_02 = UWorld::GetTimerManager(this_01);
          FVar8 = local_res10[0];
          local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_50.DelegateSize = 0;
          puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = &
                      ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
            ;
            uVar6 = FDelegateHandle::GenerateNewID();
            puVar5[2] = uVar6;
            *puVar5 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UEnhancedInputUserSettings::UnMapPlayerKey'::`20'::<lambda_1>_>
                       ::_vftable_;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar5[3] = 0;
            local_res20 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res20);
            *(FName *)(puVar5 + 4) = FVar8;
          }
          FVar7 = FTimerManager::SetTimerForNextTick
                            (this_02,(TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                                      *)local_58);
                    /* WARNING: Load size is inaccurate */
          (this->DeferredSettingsChangedTimerHandle).Handle = *FVar7.Handle;
          if ((local_50.DelegateSize != 0) &&
             (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_50,0,0,0x10);
            local_50.DelegateSize = 0;
          }
          if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_50.DelegateAllocator);
          }
        }
      }
    }
    if (5 < (byte)LogEnhancedInput._0_1_) {
      FPlayerKeyMapping::ToString(this_00,(FString *)&local_50);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
      if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_50.DelegateAllocator);
      }
    }
  }
  return;
}

// UnregisterInputMappingContext @ 14a6ffc00

bool __thiscall
UEnhancedInputUserSettings::UnregisterInputMappingContext
          (UEnhancedInputUserSettings *this,UInputMappingContext *param_1)

{
  int iVar1;
  uint uVar2;
  TObjectPtr<UInputMappingContext_const_>_u_0 local_res8;
  
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UInputMappingContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  if (*(int *)&(this->RegisteredMappingContexts).Elements.field_0x8 !=
      *(int *)&(this->RegisteredMappingContexts).Elements.field_0x34) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInputMappingContext *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    iVar1 = TSet<TObjectPtr<UInputMappingContext_const_>,DefaultKeyFuncs<TObjectPtr<UInputMappingContext_const_>,0>,FDefaultSetAllocator>
            ::RemoveImpl<TObjectPtr<UInputMappingContext_const_>_>
                      (&this->RegisteredMappingContexts,uVar2 >> 0x10 ^ uVar2,
                       (TObjectPtr<UInputMappingContext_const_> *)&local_res8.ObjectPtr);
    return iVar1 != -1;
  }
  return true;
}

// UnregisterInputMappingContexts @ 14a6ffcb0

bool __thiscall
UEnhancedInputUserSettings::UnregisterInputMappingContexts
          (UEnhancedInputUserSettings *this,
          TSet<UInputMappingContext_*,DefaultKeyFuncs<UInputMappingContext_*,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  byte bVar18;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar15 = 0;
  puVar1 = &(param_1->Elements).field_0x10;
  bVar18 = 0;
  iVar12 = *(int *)&(param_1->Elements).field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar11 = 0;
  iVar8 = 0;
  if (iVar12 != 0) {
    puVar17 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar9 = (longlong)iVar15;
      iVar16 = iVar16 + 0x20;
      iVar15 = iVar15 + 1;
      if ((int)((iVar12 + -1 >> 0x1f & 0x1fU) + iVar12 + -1) >> 5 < iVar15) {
        iVar11 = *(int *)&(param_1->Elements).field_0x28;
        iVar8 = iVar12;
        goto LAB_14a6ffd56;
      }
      uVar14 = puVar17[lVar9 + 1];
    }
    iVar11 = *(int *)&(param_1->Elements).field_0x28;
    uVar7 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iVar8 = local_res20 + -1 + iVar16;
    if (iVar11 < iVar8) {
      iVar8 = iVar12;
    }
  }
LAB_14a6ffd56:
  uVar14 = *(uint *)&(param_1->Elements).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar15);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar11 < (int)uVar14)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar7 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar14 != uVar7) {
    puVar10 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar9 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar7;
      if ((int)(((int)(uVar7 - 1) >> 0x1f & 0x1fU) + (uVar7 - 1)) >> 5 < iVar12) goto LAB_14a6ffe50;
      uVar14 = *(uint *)(puVar10 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar14 = (int)lVar9 + -1 + uVar13;
    if ((int)uVar7 < (int)uVar14) {
      uVar14 = uVar7;
    }
  }
LAB_14a6ffe50:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<UInputMappingContext_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_60.CurrentBitIndex == uVar14) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    bVar6 = (**(code **)(this->_padding_ + 0x370))
                      (this,*(undefined8 *)
                             (*(longlong *)&param_1->Elements +
                             (longlong)TStack_60.CurrentBitIndex * 0x10));
    bVar18 = bVar18 | bVar6;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return (bool)bVar18;
}

// execApplySettings @ 14a703640

void __cdecl
UEnhancedInputUserSettings::execApplySettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014a703658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2b8))();
  return;
}

// execAsyncSaveSettings @ 14a703670

void __cdecl
UEnhancedInputUserSettings::execAsyncSaveSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014a703688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2c8))();
  return;
}

// execCreateNewKeyProfile @ 14a703fc0

void __cdecl
UEnhancedInputUserSettings::execCreateNewKeyProfile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FPlayerMappableKeyProfileCreationArgs *pFVar3;
  FPlayerMappableKeyProfileCreationArgs local_48;
  
  FPlayerMappableKeyProfileCreationArgs::FPlayerMappableKeyProfileCreationArgs(&local_48);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pFVar3 = &local_48;
  if ((FPlayerMappableKeyProfileCreationArgs *)param_2->MostRecentPropertyAddress !=
      (FPlayerMappableKeyProfileCreationArgs *)0x0) {
    pFVar3 = (FPlayerMappableKeyProfileCreationArgs *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x350))(param_1,pFVar3);
  *(undefined8 *)param_3 = uVar2;
  if (local_48.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_48.ProfileStringIdentifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_48.ProfileStringIdentifier.Data.AllocatorInstance.Data);
  }
  return;
}

// execFindMappingsInRow @ 14a704290

void __cdecl
UEnhancedInputUserSettings::execFindMappingsInRow(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator> *pTVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = (TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator> *)
           (**(code **)(*(longlong *)param_1 + 800))(param_1,local_res8);
  TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator>::operator=
            (param_3,pTVar2);
  return;
}

// execGetActiveKeyProfile @ 14a7043d0

void __cdecl
UEnhancedInputUserSettings::execGetActiveKeyProfile(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)param_1;
  uVar2 = (**(code **)(lVar1 + 0x348))();
  uVar2 = (**(code **)(lVar1 + 0x360))(param_1,uVar2);
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execGetActiveKeyProfileId @ 14a704430

void __cdecl
UEnhancedInputUserSettings::execGetActiveKeyProfileId
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = (FString *)(**(code **)(*(longlong *)param_1 + 0x348))();
  ::FString::operator=(param_3,pFVar1);
  return;
}

// execGetKeyProfileWithId @ 14a704a70

void __cdecl
UEnhancedInputUserSettings::execGetKeyProfileWithId(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x360))(param_1,&local_18);
  *(undefined8 *)param_3 = uVar2;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execIsMappingContextRegistered @ 14a7061d0

void __cdecl
UEnhancedInputUserSettings::execIsMappingContextRegistered
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UInputMappingContext *pUVar2;
  int iVar3;
  uint uVar4;
  UInputMappingContext *local_res8;
  TObjectPtr<UInputMappingContext_const_>_u_0 local_res10;
  
  local_res8 = (UInputMappingContext *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10.DebugPtr = local_res8;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_res8 != (UInputMappingContext *)0x0) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UInputMappingContext *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
  uVar4 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar3 = TSet<TObjectPtr<UInputMappingContext_const_>,DefaultKeyFuncs<TObjectPtr<UInputMappingContext_const_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UInputMappingContext_const_>_>
                    ((TSet<TObjectPtr<UInputMappingContext_const_>,DefaultKeyFuncs<TObjectPtr<UInputMappingContext_const_>,0>,FDefaultSetAllocator>
                      *)&param_1[8].field_0x10,uVar4 >> 0x10 ^ uVar4,
                     (TObjectPtr<UInputMappingContext_const_> *)&local_res10.ObjectPtr);
  *(bool *)param_3 = iVar3 != -1;
  return;
}

// execMapPlayerKey @ 14a706790

void __cdecl
UEnhancedInputUserSettings::execMapPlayerKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  void **ppvVar3;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  uchar local_58 [16];
  FName local_48;
  FKeyDetails *local_40;
  TReferenceControllerBase<1> *local_38;
  undefined8 local_30;
  undefined8 local_28;
  void *local_20;
  undefined8 local_18;
  byte local_10;
  
  local_48 = EKeys::Invalid.KeyName;
  local_40 = EKeys::Invalid.KeyDetails.Object;
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  local_58[8] = 7;
  local_38 = EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_30 = 0;
  local_10 = local_10 & 0xfd | 1;
  local_28 = 0;
  local_20 = (void *)0x0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  puVar2 = local_58;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  ppvVar3 = &local_78;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2f8))(param_1,puVar2,ppvVar3);
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// execRegisterInputMappingContext @ 14a7072b0

void __cdecl
UEnhancedInputUserSettings::execRegisterInputMappingContext
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x368))(param_1,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execRegisterInputMappingContexts @ 14a707360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UEnhancedInputUserSettings::execRegisterInputMappingContexts
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  bool bVar3;
  TSet<UInputMappingContext_*,DefaultKeyFuncs<UInputMappingContext_*,0>,FDefaultSetAllocator>
  *pTVar4;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_5c = 0x80;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  pTVar4 = (TSet<UInputMappingContext_*,DefaultKeyFuncs<UInputMappingContext_*,0>,FDefaultSetAllocator>
            *)local_88;
  if ((TSet<UInputMappingContext_*,DefaultKeyFuncs<UInputMappingContext_*,0>,FDefaultSetAllocator> *
      )param_2->MostRecentPropertyAddress !=
      (TSet<UInputMappingContext_*,DefaultKeyFuncs<UInputMappingContext_*,0>,FDefaultSetAllocator> *
      )0x0) {
    pTVar4 = (TSet<UInputMappingContext_*,DefaultKeyFuncs<UInputMappingContext_*,0>,FDefaultSetAllocator>
              *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = RegisterInputMappingContexts((UEnhancedInputUserSettings *)param_1,pTVar4);
  *(bool *)param_3 = bVar3;
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  iVar2 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// execResetAllPlayerKeysInRow @ 14a707b20

void __cdecl
UEnhancedInputUserSettings::execResetAllPlayerKeysInRow
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  void **ppvVar3;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  uchar local_58 [16];
  FName local_48;
  FKeyDetails *local_40;
  TReferenceControllerBase<1> *local_38;
  undefined8 local_30;
  undefined8 local_28;
  void *local_20;
  undefined8 local_18;
  byte local_10;
  
  local_48 = EKeys::Invalid.KeyName;
  local_40 = EKeys::Invalid.KeyDetails.Object;
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  local_58[8] = 7;
  local_38 = EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_30 = 0;
  local_10 = local_10 & 0xfd | 1;
  local_28 = 0;
  local_20 = (void *)0x0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  puVar2 = local_58;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  ppvVar3 = &local_78;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x308))(param_1,puVar2,ppvVar3);
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// execResetKeyProfileIdToDefault @ 14a707cb0

void __cdecl
UEnhancedInputUserSettings::execResetKeyProfileIdToDefault
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_38 = (void *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  ppvVar2 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x318))(param_1,&local_38,ppvVar2);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execResetKeyProfileToDefault @ 14a707de0

void __cdecl
UEnhancedInputUserSettings::execResetKeyProfileToDefault
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName *this;
  void **ppvVar3;
  FName local_res8;
  FString local_48;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_38 = (void *)0x0;
  local_30 = 0;
  this = &local_res8;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    this = (FName *)param_2->MostRecentPropertyAddress;
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  ppvVar3 = &local_38;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x318);
  ::FName::ToString(this,&local_48);
  (*pcVar2)(param_1,&local_48,ppvVar3);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execSaveSettings @ 14a708010

void __cdecl
UEnhancedInputUserSettings::execSaveSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014a708028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2c0))();
  return;
}

// execSetActiveKeyProfile @ 14a708040

void __cdecl
UEnhancedInputUserSettings::execSetActiveKeyProfile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x338))(param_1,&local_18);
  *(undefined1 *)param_3 = uVar2;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execUnMapPlayerKey @ 14a7088b0

void __cdecl
UEnhancedInputUserSettings::execUnMapPlayerKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  void **ppvVar3;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  uchar local_58 [16];
  FName local_48;
  FKeyDetails *local_40;
  TReferenceControllerBase<1> *local_38;
  undefined8 local_30;
  undefined8 local_28;
  void *local_20;
  undefined8 local_18;
  byte local_10;
  
  local_48 = EKeys::Invalid.KeyName;
  local_40 = EKeys::Invalid.KeyDetails.Object;
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  local_58[8] = 7;
  local_38 = EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_30 = 0;
  local_10 = local_10 & 0xfd | 1;
  local_28 = 0;
  local_20 = (void *)0x0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  puVar2 = local_58;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  ppvVar3 = &local_78;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x300))(param_1,puVar2,ppvVar3);
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// execUnregisterInputMappingContext @ 14a708dc0

void __cdecl
UEnhancedInputUserSettings::execUnregisterInputMappingContext
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x370))(param_1,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execUnregisterInputMappingContexts @ 14a708e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UEnhancedInputUserSettings::execUnregisterInputMappingContexts
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  bool bVar3;
  TSet<UInputMappingContext_*,DefaultKeyFuncs<UInputMappingContext_*,0>,FDefaultSetAllocator>
  *pTVar4;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_5c = 0x80;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  pTVar4 = (TSet<UInputMappingContext_*,DefaultKeyFuncs<UInputMappingContext_*,0>,FDefaultSetAllocator>
            *)local_88;
  if ((TSet<UInputMappingContext_*,DefaultKeyFuncs<UInputMappingContext_*,0>,FDefaultSetAllocator> *
      )param_2->MostRecentPropertyAddress !=
      (TSet<UInputMappingContext_*,DefaultKeyFuncs<UInputMappingContext_*,0>,FDefaultSetAllocator> *
      )0x0) {
    pTVar4 = (TSet<UInputMappingContext_*,DefaultKeyFuncs<UInputMappingContext_*,0>,FDefaultSetAllocator>
              *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UnregisterInputMappingContexts((UEnhancedInputUserSettings *)param_1,pTVar4);
  *(bool *)param_3 = bVar3;
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  iVar2 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// operator() @ 150552830

bool __thiscall `UEnhancedInputUserSettings::Initialize'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4874167975445265703>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4874167975445265703>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150552b30

bool __thiscall
`UEnhancedInputUserSettings::LoadOrCreateSettings'::__l27::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4874167975445265753>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4874167975445265753>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

