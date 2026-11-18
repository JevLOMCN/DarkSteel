// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 10

// StartupModule @ 146d37fe0

void __thiscall FGameplayDebuggerModule::StartupModule(FGameplayDebuggerModule *this)

{
  code *pcVar1;
  UClass *this_00;
  UGameplayDebuggerConfig *pUVar2;
  FName *pFVar3;
  IModuleInterface *pIVar4;
  FText *pFVar5;
  FText *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FName local_res10;
  UGameplayDebuggerConfig *local_res18;
  FName local_res20;
  FName local_98;
  FName local_90;
  FName local_88;
  undefined1 local_80 [8];
  TReferenceControllerBase<1> *local_78;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  undefined1 local_50 [8];
  FDelegateAllocation local_48;
  
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
  ::AddRaw<FGameplayDebuggerModule>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
              *)&FWorldDelegates::OnPostWorldInitialization,(FGameplayDebuggerModule *)&local_res10,
             (pmf_e9e6aa00)this);
  this_00 = UGameplayDebuggerConfig::StaticClass();
  pUVar2 = UClass::GetDefaultObject<UGameplayDebuggerConfig>(this_00);
  if (pUVar2 != (UGameplayDebuggerConfig *)0x0) {
    pFVar3 = ::FName::FName(&local_88,"Settings");
    pIVar4 = FModuleManager::GetModulePtr_Internal(*pFVar3);
    if (pIVar4 != (IModuleInterface *)0x0) {
      pcVar1 = *(code **)((longlong)*pIVar4 + 0x58);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
      local_res18 = pUVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res10,(FObjectPtr)&local_res18);
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_50,L"GameplayDebuggerModule",L"SettingsDescription",
                          L"Settings for the gameplay debugger tool.");
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_70,L"GameplayDebuggerModule",L"SettingsName",
                          L"Gameplay Debugger");
      ::FName::FName(&local_res20,"GameplayDebugger");
      ::FName::FName(&local_98,"Engine");
      ::FName::FName(&local_90,"Project");
      (*pcVar1)(pIVar4,local_80,&local_90,&local_98,&local_res20,pFVar6,pFVar5,&local_res10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_78);
      if ((longlong *)local_70._0_8_ != (longlong *)0x0) {
        (**(code **)(*(longlong *)local_70._0_8_ + 0x10))();
      }
      if ((atomic<unsigned___int64>)local_50 != (atomic<unsigned___int64>)0x0) {
        (**(code **)((longlong)*(ITextData *)local_50 + 0x10))();
      }
    }
    local_50 = (undefined1  [8])0x0;
    local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_48.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_50,
               (FWriteAccessScope *)&local_70);
    local_58 = &local_48;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_48);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VFGameplayDebuggerExtension___00__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      puVar7[3] = FGameplayDebuggerExtension_HUD::MakeInstance;
      *puVar7 = &
                ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VFGameplayDebuggerExtension___00__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    pFVar3 = ::FName::FName(&local_res10,"GameHUD");
    FGameplayDebuggerAddonManager::RegisterExtension
              (&this->AddonManager,*pFVar3,
               (TDelegate<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *)local_50);
    local_50 = (undefined1  [8])0x0;
    local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_48.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_50,
               (FWriteAccessScope *)&local_70);
    local_58 = &local_48;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_48);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VFGameplayDebuggerExtension___00__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      puVar7[3] = FGameplayDebuggerExtension_Spectator::MakeInstance;
      *puVar7 = &
                ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VFGameplayDebuggerExtension___00__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    pFVar3 = ::FName::FName(&local_res10,"Spectator");
    FGameplayDebuggerAddonManager::RegisterExtension
              (&this->AddonManager,*pFVar3,
               (TDelegate<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *)local_50);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&(this->AddonManager).OnExtensionsChanged);
  }
  return;
}

// ShutdownModule @ 146d382d0

void __thiscall FGameplayDebuggerModule::ShutdownModule(FGameplayDebuggerModule *this)

{
  code *pcVar1;
  FName *pFVar2;
  IModuleInterface *pIVar3;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_18 [2];
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FWorldDelegates::OnPostWorldInitialization,this);
  pFVar2 = ::FName::FName(local_18,"Settings");
  pIVar3 = FModuleManager::GetModulePtr_Internal(*pFVar2);
  if (pIVar3 != (IModuleInterface *)0x0) {
    pcVar1 = *(code **)((longlong)*pIVar3 + 0x70);
    ::FName::FName(&local_res10,"GameplayDebugger");
    ::FName::FName(&local_res18,"Engine");
    ::FName::FName(&local_res20,"Project");
    (*pcVar1)(pIVar3,&local_res20,&local_res18,&local_res10);
  }
  return;
}

// RegisterCategory @ 146d38370

void __thiscall
FGameplayDebuggerModule::RegisterCategory
          (FGameplayDebuggerModule *this,FName param_1,
          TDelegate<TSharedRef<FGameplayDebuggerCategory,1>___cdecl(void),FDefaultDelegateUserPolicy>
          *param_2,EGameplayDebuggerCategoryState param_3,int param_4)

{
  int iVar1;
  UClass *this_00;
  UGameplayDebuggerConfig *this_01;
  ForAnyElementType FVar2;
  FName local_res8;
  undefined8 local_res10;
  EGameplayDebuggerCategoryState local_res20 [8];
  FDestructionSentinel local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a0;
  ForAnyElementType local_98;
  int local_90;
  undefined1 local_88 [8];
  ForAnyElementType local_80;
  int local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_70;
  ForAnyElementType local_68;
  int local_60;
  EGameplayDebuggerCategoryState local_58;
  EGameplayDebuggerCategoryState local_57;
  int local_54;
  undefined1 local_50 [8];
  TReferenceControllerBase<1> *local_48;
  
  local_88 = (undefined1  [8])0x0;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  TDelegate<TSharedRef<FGameplayDebuggerCategory,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<TSharedRef<FGameplayDebuggerCategory,1>___cdecl(void),FDefaultDelegateUserPolicy>
              *)local_88,param_2);
  local_70.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_res8 = param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FReadAccessScope *)&local_b8);
  if ((local_78 != 0) && (local_80.Data != (FScriptContainerElement *)0x0)) {
    (**(code **)(*(longlong *)local_80.Data + 0x50))(local_80.Data,&local_a0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a0,(FWriteAccessScope *)&local_b8);
  iVar1 = local_90;
  FVar2.Data = local_98.Data;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_70,(FWriteAccessScope *)&local_b8);
  if (local_60 != 0) {
    if (local_68.Data == (FScriptContainerElement *)0x0) goto LAB_146d38478;
    (*(code *)**(undefined8 **)local_68.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,0x10);
    local_60 = 0;
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
LAB_146d38478:
  local_68.Data = FVar2.Data;
  local_60 = iVar1;
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a0,(FWriteAccessScope *)&local_b8);
  if ((local_90 != 0) && (local_98.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,0x10);
    local_90 = 0;
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  local_58 = param_3;
  this_00 = UGameplayDebuggerConfig::StaticClass();
  this_01 = UClass::GetDefaultObject<UGameplayDebuggerConfig>(this_00);
  local_res20[0] = param_3;
  UGameplayDebuggerConfig::UpdateCategoryConfig(this_01,local_res8,&param_4,local_res20);
  local_57 = local_res20[0];
  local_54 = param_4;
  local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)&local_res8;
  local_98.Data = (FScriptContainerElement *)&local_70;
  TSet<TTuple<FName,FGameplayDebuggerCategoryInfo>,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerCategoryInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FGameplayDebuggerCategoryInfo_const_&>_>
            ((TSet<TTuple<FName,FGameplayDebuggerCategoryInfo>,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerCategoryInfo,0>,FDefaultSetAllocator>
              *)&(this->AddonManager).CategoryMap,
             (TPairInitializer<FName_const_&,FGameplayDebuggerCategoryInfo_const_&> *)local_res20,
             (bool *)&local_a0);
  FGameplayDebuggerInputHandlerConfig::CurrentCategoryName = local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FReadAccessScope *)&local_b8);
  FVar2.Data = (FScriptContainerElement *)0x0;
  if (local_78 != 0) {
    FVar2.Data = local_80.Data;
  }
  (**(code **)(*(longlong *)FVar2.Data + 0x60))(FVar2.Data,local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_b8);
  FGameplayDebuggerInputHandlerConfig::CurrentCategoryName.ComparisonIndex.Value = 0;
  FGameplayDebuggerInputHandlerConfig::CurrentCategoryName.Number = 0;
  local_res10 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_70,(FWriteAccessScope *)&local_b8);
  if ((local_60 != 0) && (local_68.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_68.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,0x10);
    local_60 = 0;
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_b8);
  if ((local_78 != 0) && (local_80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_80,0,0,0x10);
    local_78 = 0;
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_88);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// UnregisterCategory @ 146d386b0

void __thiscall
FGameplayDebuggerModule::UnregisterCategory(FGameplayDebuggerModule *this,FName param_1)

{
  uint uVar1;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->AddonManager).CategoryMap.field_0x8 !=
      *(int *)&(this->AddonManager).CategoryMap.field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,FGameplayDebuggerCategoryInfo>,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerCategoryInfo,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FGameplayDebuggerCategoryInfo>,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerCategoryInfo,0>,FDefaultSetAllocator>
                         *)&(this->AddonManager).CategoryMap,local_res10.Number + uVar1,&local_res8)
    ;
  }
  return;
}

// NotifyCategoriesChanged @ 146d38700

void __thiscall FGameplayDebuggerModule::NotifyCategoriesChanged(FGameplayDebuggerModule *this)

{
  FGameplayDebuggerAddonManager::NotifyCategoriesChanged(&this->AddonManager);
  return;
}

// RegisterExtension @ 146d38710

void __thiscall
FGameplayDebuggerModule::RegisterExtension
          (FGameplayDebuggerModule *this,FName param_1,
          TDelegate<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
          *param_2)

{
  TDelegate<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
  local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  TDelegate<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&local_28,param_2);
  FGameplayDebuggerAddonManager::RegisterExtension(&this->AddonManager,param_1,&local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// UnregisterExtension @ 146d38790

void __thiscall
FGameplayDebuggerModule::UnregisterExtension(FGameplayDebuggerModule *this,FName param_1)

{
  uint uVar1;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->AddonManager).ExtensionMap.field_0x8 !=
      *(int *)&(this->AddonManager).ExtensionMap.field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,FGameplayDebuggerExtensionInfo>,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerExtensionInfo,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FGameplayDebuggerExtensionInfo>,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerExtensionInfo,0>,FDefaultSetAllocator>
                         *)&(this->AddonManager).ExtensionMap,local_res10.Number + uVar1,&local_res8
                       );
  }
  return;
}

// NotifyExtensionsChanged @ 146d387e0

void __thiscall FGameplayDebuggerModule::NotifyExtensionsChanged(FGameplayDebuggerModule *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&(this->AddonManager).OnExtensionsChanged);
  return;
}

// GetPlayerManager @ 146d4d330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AGameplayDebuggerPlayerManager * __thiscall
FGameplayDebuggerModule::GetPlayerManager(FGameplayDebuggerModule *this,UWorld *param_1)

{
  TMap<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>,0>_>
  *this_00;
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  AGameplayDebuggerPlayerManager *pAVar6;
  FActorSpawnParameters *pFVar7;
  UClass *pUVar8;
  FString *pFVar9;
  AGameplayDebuggerPlayerManager *pAVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  uint uVar14;
  undefined1 auStackY_1c8 [32];
  FWeakObjectPtr local_198;
  FWeakObjectPtr local_190;
  FWeakObjectPtr local_188;
  FWeakObjectPtr local_180;
  longlong *local_178;
  undefined1 auStack_170 [16];
  uint uStack_160;
  int iStack_15c;
  longlong local_158;
  TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_150;
  TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_148;
  undefined2 local_140;
  undefined4 local_138;
  undefined1 local_134 [12];
  FWeakObjectPtr local_128;
  AGameplayDebuggerPlayerManager *local_120;
  UWorld *local_118;
  FWeakObjectPtr *local_110;
  FWeakObjectPtr *local_108;
  undefined1 local_100 [32];
  longlong local_e0;
  TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_d8;
  FString local_d0;
  FString local_c0;
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this_00 = &this->PlayerManagers;
  if (5 < *(int *)&(this->PlayerManagers).field_0x8 - *(int *)&(this->PlayerManagers).field_0x34) {
    TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_100,
               (TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)this_00);
    local_140 = 0;
    stack0xfffffffffffffe98 = local_100._16_16_;
    local_178 = (longlong *)local_100._0_8_;
    auStack_170._0_8_ = local_100._8_8_;
    local_158 = local_e0;
    pTStack_150 = pTStack_d8;
    iVar5 = local_100._28_4_;
    local_148 = (TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                 *)this_00;
    if (iVar5 < *(int *)(local_100._16_8_ + 0x18)) {
      do {
        plVar11 = local_178;
        bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*local_178 + (longlong)iVar5 * 0x18));
        if ((!bVar4) ||
           (bVar4 = FWeakObjectPtr::IsValid
                              ((FWeakObjectPtr *)(*plVar11 + 8 + (longlong)iVar5 * 0x18)), !bVar4))
        {
          TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_150,iVar5);
          local_140 = CONCAT11(local_140._1_1_,1);
        }
        uStack_160 = uStack_160 & ~auStack_170._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_170);
        iVar5 = iStack_15c;
      } while (iStack_15c < *(int *)(auStack_170._8_8_ + 0x18));
      if (((char)local_140 != '\0') && (local_140._1_1_ != '\0')) {
        uVar14 = *(int *)&(local_148->Elements).field_0x8 -
                 *(int *)&(local_148->Elements).field_0x34;
        if (uVar14 < 4) {
          iVar5 = 1;
        }
        else {
          uVar1 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          local_138 = (undefined4)lVar2;
          iVar5 = 1 << ((byte)lVar2 & 0x1f);
        }
        if (((0 < (int)uVar14) && (local_148->HashSize < iVar5)) || (iVar5 < local_148->HashSize)) {
          local_148->HashSize = iVar5;
          TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Rehash(local_148);
        }
      }
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pAVar10 = (AGameplayDebuggerPlayerManager *)0x0;
  local_198.ObjectIndex = 0;
  local_198.ObjectSerialNumber = 0;
  local_134._4_8_ = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_198,(FObjectPtr)((longlong)local_134 + 4));
  local_128 = local_198;
  iVar5 = TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      *)this_00,local_198.ObjectSerialNumber ^ local_198.ObjectIndex,
                     (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_128);
  if ((iVar5 == -1) ||
     (lVar2 = *(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x18, lVar2 == 0)) {
    local_190.ObjectIndex = 0;
    local_190.ObjectSerialNumber = 0;
  }
  else {
    local_190 = *(FWeakObjectPtr *)(lVar2 + 8);
  }
  pAVar6 = (AGameplayDebuggerPlayerManager *)FWeakObjectPtr::Get(&local_190);
  if (pAVar6 == (AGameplayDebuggerPlayerManager *)0x0) {
    pFVar7 = FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_a8);
    pUVar8 = AGameplayDebuggerPlayerManager::StaticClass();
    pAVar6 = (AGameplayDebuggerPlayerManager *)
             UWorld::SpawnActor(param_1,pUVar8,(TVector<double> *)0x0,(TRotator<double> *)0x0,pFVar7
                               );
    if (pAVar6 != (AGameplayDebuggerPlayerManager *)0x0) {
      pUVar8 = AGameplayDebuggerPlayerManager::StaticClass();
      iVar5 = (int)pUVar8->_padding_;
      if ((*(int *)(pAVar6->_padding_ + 0x38) < iVar5) ||
         (pAVar10 = pAVar6,
         (longlong *)*(undefined1 **)(*(longlong *)(pAVar6->_padding_ + 0x30) + (longlong)iVar5 * 8)
         != &pUVar8->_padding_)) {
        pFVar9 = GetTypeName<AGameplayDebuggerPlayerManager>(&local_d0);
        pwVar13 = L"";
        if ((pFVar9->Data).ArrayNum == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
        }
        pFVar9 = GetFullNameForCastLogError<AActor>(&local_c0,(AActor *)pAVar6);
        if ((pFVar9->Data).ArrayNum != 0) {
          pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar13,pwVar12);
      }
    }
    if (local_a8._64_8_ != 0) {
      plVar11 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar10 != (AGameplayDebuggerPlayerManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar10);
    }
    local_180.ObjectIndex = 0;
    local_180.ObjectSerialNumber = 0;
    local_120 = pAVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar10 != (AGameplayDebuggerPlayerManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar10);
    }
    FWeakObjectPtr::operator=(&local_180,(FObjectPtr)&local_120);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_188.ObjectIndex = 0;
    local_188.ObjectSerialNumber = 0;
    local_118 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_118);
    local_110 = &local_188;
    local_108 = &local_180;
    TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TWeakObjectPtr<UWorld,FWeakObjectPtr>_&&,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>_&&>_>
              ((TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)this_00,
               (TPairInitializer<TWeakObjectPtr<UWorld,FWeakObjectPtr>_&&,TWeakObjectPtr<AGameplayDebuggerPlayerManager,FWeakObjectPtr>_&&>
                *)local_134,(bool *)&local_110);
    pAVar6 = pAVar10;
    if ((pAVar10 == (AGameplayDebuggerPlayerManager *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ManagerOb",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayDebugger\\Private\\GameplayDebuggerModule.cpp"
                           ,0x8e,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pAVar10 = (AGameplayDebuggerPlayerManager *)(*pcVar3)();
      return pAVar10;
    }
  }
  return pAVar6;
}

// OnWorldInitialized @ 146d571a0

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
FGameplayDebuggerModule::OnWorldInitialized
          (FGameplayDebuggerModule *this,UWorld *param_1,FWorldInitializationValues *param_2)

{
  bool bVar1;
  
  if (((param_1 != (UWorld *)0x0) && (bAutoCreateGameplayDebuggerManager)) &&
     ((bVar1 = UWorld::IsGameWorld(param_1), bVar1 ||
      (bVar1 = UWorld::IsEditorWorld(param_1), bVar1)))) {
    GetPlayerManager(this,param_1);
  }
  return;
}

