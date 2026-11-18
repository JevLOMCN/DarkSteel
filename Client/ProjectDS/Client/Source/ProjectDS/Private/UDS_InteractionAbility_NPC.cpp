// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b4bcac0

UClass * __cdecl UDS_InteractionAbility_NPC::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_NPC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_NPC",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_NPC.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_NPC,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_NPC>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_NPC>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_NPC.InnerSingleton;
}

// UDS_InteractionAbility_NPC @ 14b4c1230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_InteractionAbility_NPC * __thiscall
UDS_InteractionAbility_NPC::UDS_InteractionAbility_NPC
          (UDS_InteractionAbility_NPC *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->InteractionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->InteractionAbilityData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_InteractionAbility_NPC @ 14b4c1280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_InteractionAbility_NPC * __thiscall
UDS_InteractionAbility_NPC::UDS_InteractionAbility_NPC
          (UDS_InteractionAbility_NPC *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->InteractionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->InteractionAbilityData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_InteractionAbility_NPC @ 14b4c2380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_NPC::~UDS_InteractionAbility_NPC(UDS_InteractionAbility_NPC *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetDefaultInputPolicy @ 14b4c3a70

EDS_AbilityInputPolicy __thiscall
UDS_InteractionAbility_NPC::GetDefaultInputPolicy(UDS_InteractionAbility_NPC *this)

{
  return BlockInput;
}

// GetPrivateStaticClass @ 14b4c48a0

UClass * __cdecl UDS_InteractionAbility_NPC::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_NPC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_NPC",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_NPC.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_NPC,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_NPC>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_NPC>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_NPC.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b4c5410

bool __thiscall
UDS_InteractionAbility_NPC::ShouldNotifyChangedCharState(UDS_InteractionAbility_NPC *this)

{
  return true;
}

// StaticRegisterNativesUDS_InteractionAbility_NPC @ 14b4c5660

void __cdecl UDS_InteractionAbility_NPC::StaticRegisterNativesUDS_InteractionAbility_NPC(void)

{
  return;
}

// ClearVariables @ 14b7dc8d0

void __thiscall UDS_InteractionAbility_NPC::ClearVariables(UDS_InteractionAbility_NPC *this)

{
  return;
}

// Deactivate @ 14b7e3660

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __cdecl
UDS_InteractionAbility_NPC::Deactivate(ulong64 *param_1,EDS_AbilityDeactivateType *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_EntityBase *this;
  undefined1 auStackY_188 [32];
  EDS_AbilityTagType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*param_1 == 0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_NPC::Deactivate",0x26,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xc2,L"Invalid parameter.");
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this != (FDS_EntityBase *)0x0) {
      local_148[0] = Interaction_NPC;
      bVar1 = FDS_EntityBase::DeactivateAbility(this,local_148,param_2);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_NPC::Deactivate",0x26,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xc9,L"sourceEntity is nullptr. (%llu)")
    ;
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// DoTalk @ 14b7e4890

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

bool __thiscall UDS_InteractionAbility_NPC::DoTalk(UDS_InteractionAbility_NPC *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_NPC,FWeakObjectPtr> *this_00;
  bool bVar1;
  bool bVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FDS_EntityBase *pFVar6;
  FWeakObjectPtr *this_01;
  UDS_InteractionAbility_NPC *pUVar7;
  UClass *pUVar8;
  UDS_NPCDataSet *this_02;
  UDS_HudManager *this_03;
  UDS_QuestDialogueSceneManager *this_04;
  UDS_WindowManager *this_05;
  undefined8 *puVar9;
  ulong64 uVar10;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar11;
  ADS_NPC *this_06;
  FGameplayTag *pFVar12;
  undefined1 auStackY_218 [32];
  uint uVar13;
  wchar_t *pwVar14;
  EDS_StateTagType local_1d8 [8];
  undefined1 local_1d0 [8];
  FDelegateAllocation local_1c8;
  FWeakObjectPtr local_1b8;
  FWeakObjectPtr local_1b0;
  FDestructionSentinel local_1a8;
  UDS_InteractionAbility_NPC *local_188;
  FDestructionSentinel local_180;
  FDelegateAllocation *local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  this_00 = &this->InteractionAbilityData;
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_NPC,FWeakObjectPtr>::UEOpEquals
                    (this_00,(void *)0x0);
  if (bVar1) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_InteractionAbility_NPC::DoTalk",0x22,Yes);
    pwVar14 = L"InteractionAbilityData is nullptr.";
    uVar13 = 0xd4;
LAB_14b7e4c4b:
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,uVar13,pwVar14);
  }
  else {
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pFVar6 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar5[2].field_0x8);
    if (pFVar6 == (FDS_EntityBase *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar4 = UDS_LogManager::GetInst();
      FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_InteractionAbility_NPC::DoTalk",0x22,Yes);
      pwVar14 = L"targetEntity is nullptr. (%llu)";
      uVar13 = 0xdb;
    }
    else {
      this_01 = (FWeakObjectPtr *)(**(code **)(pFVar6->_padding_ + 0x150))(pFVar6,&local_1a8);
      pUVar7 = (UDS_InteractionAbility_NPC *)FWeakObjectPtr::Get(this_01);
      if (pUVar7 == (UDS_InteractionAbility_NPC *)0x0) {
LAB_14b7e4a0c:
        pUVar7 = (UDS_InteractionAbility_NPC *)0x0;
      }
      else {
        pUVar8 = Z_Construct_UClass_ADS_NPC_NoRegister();
        iVar3 = (int)pUVar8->_padding_;
        if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar3) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar8->_padding_)) goto LAB_14b7e4a0c;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar7 != (UDS_InteractionAbility_NPC *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      local_1b0.ObjectIndex = 0;
      local_1b0.ObjectSerialNumber = 0;
      local_188 = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar7 != (UDS_InteractionAbility_NPC *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      FWeakObjectPtr::operator=(&local_1b0,(FObjectPtr)&local_188);
      bVar1 = TWeakObjectPtr<ADS_NPC,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<ADS_NPC,FWeakObjectPtr> *)&local_1b0,(void *)0x0);
      if (bVar1) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar4 = UDS_LogManager::GetInst();
        FWeakObjectPtr::Get(&this_00->WeakPtr);
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_InteractionAbility_NPC::DoTalk",0x22,Yes);
        pwVar14 = L"targetActor is nullptr. (%llu)";
        uVar13 = 0xe2;
      }
      else {
        TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_1b8);
        bVar1 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_1b8,(void *)0x0);
        if (!bVar1) {
          bVar2 = false;
          this_02 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_1b8);
          bVar1 = UDS_NPCDataSet::HasInteractionFunctionType(this_02,MainQuest);
          if (bVar1) {
            bVar2 = UDS_QuestManager::IsMainQuestCompletable
                              ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>)local_1b8);
          }
          this_03 = UDS_HudManager::GetInst();
          if (this_03 != (UDS_HudManager *)0x0) {
            UDS_HudManager::HideHUD(this_03,HudWindowUpper9);
          }
          if (bVar2 == true) {
            this_04 = UDS_QuestDialogueSceneManager::GetInst();
            if (this_04 != (UDS_QuestDialogueSceneManager *)0x0) {
              iVar3 = UDS_QuestManager::GetProgressMainQuestID();
              UDS_QuestDialogueSceneManager::OpenDialogueScene(this_04,iVar3);
LAB_14b7e4ed0:
              this_06 = (ADS_NPC *)FWeakObjectPtr::Get(&local_1b0);
              ADS_NPC::OnTalkBegin(this_06,bVar2);
              local_1d8[0] = Interaction_NPCTalk;
              pFVar12 = FDS_GameplayTags::GetStateTag(local_1d8);
              UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar12);
              return true;
            }
            pUVar4 = UDS_LogManager::GetInst();
            if (pUVar4 == (UDS_LogManager *)0x0) {
              return false;
            }
            pUVar4 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_InteractionAbility_NPC::DoTalk",0x22,Yes);
            pwVar14 = L"questDialogueSceneMng is nullptr.";
            uVar13 = 0x100;
          }
          else {
            this_05 = UDS_WindowManager::GetInst();
            if (this_05 != (UDS_WindowManager *)0x0) {
              local_1a8.Accessor._0_4_ = 0;
              local_1a8._0_8_ = OnOpenWindow_NpcInteraction;
              local_1d0 = (undefined1  [8])0x0;
              local_1c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_1c8.DelegateSize = 0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d0,
                         (FWriteAccessScope *)&local_180);
              local_168 = &local_1c8;
              puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_1c8);
              if (puVar9 != (undefined8 *)0x0) {
                *puVar9 = &
                          ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_NPCDataSet__UFWeakObjectPtr______6B_
                ;
                *(FWeakObjectPtr *)(puVar9 + 1) = local_1b8;
                uVar10 = FDelegateHandle::GenerateNewID();
                puVar9[2] = uVar10;
                *puVar9 = &
                          ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_NPC____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_NPCDataSet__UFWeakObjectPtr______6B_
                ;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (this != (UDS_InteractionAbility_NPC *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                puVar9[3] = 0;
                local_188 = this;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (this != (UDS_InteractionAbility_NPC *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_188);
                puVar9[4] = local_1a8._0_8_;
                puVar9[5] = CONCAT44(local_1a8.Accessor._4_4_,local_1a8.Accessor._0_4_);
              }
              if (local_180.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
              }
              pTVar11 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                        TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                  ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                    *)&local_1a8,
                                   (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                    *)local_1d0);
              bVar1 = UDS_WindowManager::OpenWindow(this_05,NpcInteraction,pTVar11);
              if (!bVar1) {
                pUVar4 = UDS_LogManager::GetInst();
                if (pUVar4 != (UDS_LogManager *)0x0) {
                  pUVar4 = UDS_LogManager::GetInst();
                  local_158._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_158,"UDS_InteractionAbility_NPC::DoTalk",0x22,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar4,1,Warning,local_158.Ptr,0x113,L"OpenWindow() failed.");
                  if ((void *)local_158._padding_ != (void *)0x0) {
                    FMemory::Free((void *)local_158._padding_);
                  }
                }
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d0,
                           (FWriteAccessScope *)&local_1a8);
                if ((local_1c8.DelegateSize != 0) &&
                   (local_1c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                  (*(code *)**(undefined8 **)local_1c8.DelegateAllocator)();
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            ((ForAnyElementType *)&local_1c8,0,0,0x10);
                  local_1c8.DelegateSize = 0;
                }
                if (local_1a8.bDestroyed == false) {
                  FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                            ((FMRSWRecursiveAccessDetector *)
                             CONCAT44(local_1a8.Accessor._4_4_,local_1a8.Accessor._0_4_),&local_1a8)
                  ;
                }
                if (local_1c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                  FMemory::Free((void *)local_1c8.DelegateAllocator);
                }
                FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                          ((FMRSWRecursiveAccessDetector *)local_1d0);
                return false;
              }
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d0,
                         (FWriteAccessScope *)&local_1a8);
              if ((local_1c8.DelegateSize != 0) &&
                 (local_1c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                (*(code *)**(undefined8 **)local_1c8.DelegateAllocator)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&local_1c8,0,0,0x10);
                local_1c8.DelegateSize = 0;
              }
              if (local_1a8.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                          ((FMRSWRecursiveAccessDetector *)
                           CONCAT44(local_1a8.Accessor._4_4_,local_1a8.Accessor._0_4_),&local_1a8);
              }
              if (local_1c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                FMemory::Free((void *)local_1c8.DelegateAllocator);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                        ((FMRSWRecursiveAccessDetector *)local_1d0);
              goto LAB_14b7e4ed0;
            }
            pUVar4 = UDS_LogManager::GetInst();
            if (pUVar4 == (UDS_LogManager *)0x0) {
              return false;
            }
            pUVar4 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_InteractionAbility_NPC::DoTalk",0x22,Yes);
            pwVar14 = L"windowMng is nullptr.";
            uVar13 = 0x10b;
          }
          goto LAB_14b7e4c4b;
        }
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar4 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_InteractionAbility_NPC::DoTalk",0x22,Yes);
        pwVar14 = L"targetNPCDataSet is nullptr. (%llu)";
        uVar13 = 0xe9;
      }
    }
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,uVar13,pwVar14);
  }
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return false;
}

// OnAbilityRetryActivate @ 14b7f46d0

void __thiscall UDS_InteractionAbility_NPC::OnAbilityRetryActivate(UDS_InteractionAbility_NPC *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1390080407461953664>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_InteractionAbility_NPC.cpp"
                     ,0x80,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnCanActivate @ 14b7f6370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_InteractionAbility_NPC::OnCanActivate(UDS_InteractionAbility_NPC *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_NPC,FWeakObjectPtr> *this_00;
  int iVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_InteractionAbilityData_NPC,FWeakObjectPtr> TVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_178 [32];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar2 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar2) {
    this_00 = &this->InteractionAbilityData;
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_NPC,FWeakObjectPtr>::UEOpEquals
                      (this_00,(void *)0x0);
    if (bVar2) {
      TVar3 = UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPC>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      this_00->WeakPtr = *TVar3.WeakPtr;
    }
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_NPC,FWeakObjectPtr>::UEOpEquals
                      (this_00,(void *)0x0);
    if (bVar2) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_NPC::OnCanActivate",0x29,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_138.Ptr,0x2b,L"InteractionAbilityData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      iVar1 = *(int *)&pUVar5[2].field_0x10;
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      bVar2 = DS_AbilityUtil_Interaction::IsAbleInteraction_SourceEntity
                        ((ulong64 *)&this->_padding_,(ulong64 *)&pUVar5[2].field_0x8,iVar1,true);
      if (bVar2) {
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        iVar1 = *(int *)&pUVar5[2].field_0x10;
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        bVar2 = DS_AbilityUtil_Interaction::IsAbleInteraction_TargetEntity
                          ((ulong64 *)&pUVar5[2].field_0x8,iVar1,0);
        return bVar2;
      }
    }
  }
  return false;
}

// OnChangedCharState @ 14b7f8770

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_NPC::OnChangedCharState
          (UDS_InteractionAbility_NPC *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1
          ,FDS_ChangedCharStateInfo *param_2)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_AbilitySystemComponent *pUVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_1a8 [32];
  EDS_AbilityDeactivateType local_178 [16];
  FDS_ChangedCharStateInfo local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_168.StateTag.TagName = (param_2->StateTag).TagName;
  local_168.bIsStateTagOn = param_2->bIsStateTagOn;
  local_168._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_168.AddedCharState = param_2->AddedCharState;
  local_168.RemovedCharState = param_2->RemovedCharState;
  local_168.AddedCharDetailState = param_2->AddedCharDetailState;
  local_168.RemovedCharDetailState = param_2->RemovedCharDetailState;
  local_res10 = param_1.WeakPtr;
  UDS_GameplayAbility::OnChangedCharState((UDS_GameplayAbility *)this,param_1,&local_168);
  bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_NPC::OnChangedCharState",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x8e,L"InCharStateData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_178[0] = Cancel;
    pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar4,(FGameplayTag *)&this->_padding_,local_178);
  }
  else {
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_NPC,FWeakObjectPtr>::UEOpEquals
                      (&this->InteractionAbilityData,(void *)0x0);
    if (bVar2) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_NPC::OnChangedCharState",0x2e,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0x95,L"InteractionAbilityData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pUVar5 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      iVar1 = *(int *)&pUVar5[2].field_0x10;
      pUVar5 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      bVar2 = DS_AbilityUtil_Interaction::IsAbleInteraction_SourceEntity
                        ((ulong64 *)&this->_padding_,(ulong64 *)&pUVar5[2].field_0x8,iVar1,true);
      if (bVar2) {
        return;
      }
    }
    local_178[0] = Cancel;
    pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar4,(FGameplayTag *)&this->_padding_,local_178);
  }
  return;
}

// OnDeactivateAbility @ 14b7fba80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_NPC::OnDeactivateAbility(UDS_InteractionAbility_NPC *this,bool *param_1)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_NPC,FWeakObjectPtr> *this_00;
  int iVar1;
  bool bVar2;
  UDS_HudManager *this_01;
  UDS_InteractionEvent *pUVar3;
  FGameplayTag *pFVar4;
  UObject *pUVar5;
  FDS_EntityBase *pFVar6;
  FWeakObjectPtr *this_02;
  UClass *pUVar7;
  ADS_NPC *this_03;
  FWeakObjectPtr local_res8;
  UObject *local_res18;
  undefined1 local_res20 [8];
  
  this_01 = UDS_HudManager::GetInst();
  if (this_01 != (UDS_HudManager *)0x0) {
    UDS_HudManager::ShowHUD(this_01,HudWindowUpper9);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &UDS_SyncSendComponent::ChangedMainPlayerMoveModeDelegate,this);
  pUVar3 = UDS_InteractionEvent::GetEvent();
  if (pUVar3 != (UDS_InteractionEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->InteractionNpcTalkStartDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->InteractionNpcTalkCancelDelegate,this);
  }
  local_res8.ObjectIndex._0_1_ = 0x4b;
  pFVar4 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)&local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar4);
  this_00 = &this->InteractionAbilityData;
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_NPC,FWeakObjectPtr>::UEOpEquals
                    (this_00,(void *)0x0);
  if (bVar2) {
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  pFVar6 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar5[2].field_0x8);
  if (pFVar6 == (FDS_EntityBase *)0x0) goto LAB_14b7fbbde;
  this_02 = (FWeakObjectPtr *)(**(code **)(pFVar6->_padding_ + 0x150))(pFVar6,local_res20);
  pUVar5 = FWeakObjectPtr::Get(this_02);
  if (pUVar5 == (UObject *)0x0) {
LAB_14b7fbb6d:
    pUVar5 = (UObject *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_ADS_NPC_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) goto LAB_14b7fbb6d;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  bVar2 = TWeakObjectPtr<ADS_NPC,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_NPC,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if (!bVar2) {
    this_03 = (ADS_NPC *)FWeakObjectPtr::Get(&local_res8);
    ADS_NPC::OnTalkEnd(this_03);
  }
LAB_14b7fbbde:
  pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  (**(code **)(*(longlong *)pUVar5 + 0x2c8))(pUVar5);
  return;
}

// OnOpenWindow_NpcInteraction @ 14b800e70

void __thiscall
UDS_InteractionAbility_NPC::OnOpenWindow_NpcInteraction
          (UDS_InteractionAbility_NPC *this,UDS_UserWidget *param_1,
          TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> param_2)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  UScriptStruct *pUVar4;
  UDS_ViewModelContextManager *this_00;
  UDS_DataSetBase *this_01;
  ulong64 uVar5;
  UObject *pUVar6;
  UDS_AbilitySystemComponent *this_02;
  FDS_ViewModelContext *pFVar7;
  FDS_ViewModelContext *pFVar8;
  EDS_AbilityDeactivateType local_res10 [8];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UDS_UserWidget *local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_50;
  TSharedPtr<FDS_ViewModelContext,1> local_40;
  
  local_res18 = param_2.WeakPtr;
  if ((param_1 == (UDS_UserWidget *)0x0) ||
     (bVar2 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_res18,(void *)0x0),
     bVar2)) {
    local_res10[0] = Cancel;
    this_02 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (this_02,(FGameplayTag *)&this->_padding_,local_res10);
    return;
  }
  pFVar3 = ::operator_new(0x30);
  pFVar8 = (FDS_ViewModelContext *)0x0;
  pFVar7 = pFVar8;
  if (pFVar3 != (FDS_ViewModelContext *)0x0) {
    *(undefined8 *)&pFVar3->field_0x1c = 0;
    *(undefined8 *)((longlong)&pFVar3[1]._padding_ + 4) = 0;
    ((atomic<int> *)&pFVar3[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
    *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
    (pFVar3->ViewModelName).ComparisonIndex = 0;
    (pFVar3->ViewModelName).Number = 0;
    pFVar3->ViewModelTemplateKey = None;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_NpcFunction__6B_;
    pFVar7 = pFVar3;
  }
  pFVar3 = ::operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext *)0x0) {
    *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
    *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_NpcFunction__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar7;
    pFVar8 = pFVar3;
  }
  if ((pFVar7 == (FDS_ViewModelContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar4 = FDS_ViewModelContext_NpcFunction::StaticStruct();
  *(UScriptStruct **)&pFVar7->DerivedStaticStruct = pUVar4;
  this_00 = UDS_ViewModelContextManager::GetInst();
  if (this_00 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar8->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_50.Object = pFVar7;
    local_50.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
    UDS_ViewModelContextManager::RegisterContext(this_00,&local_50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
  }
  pFVar7->ViewModelTemplateKey = NpcFunctionMain;
  this_01 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
  uVar5 = UDS_DataSetBase::GetEntityID(this_01);
  pFVar7[1]._padding_ = uVar5;
  pUVar6 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
  *(atomic<int> *)&pFVar7[1].DerivedStaticStruct = *(atomic<int> *)&pUVar6[2].field_0x10;
  if (pFVar8 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar8->DerivedStaticStruct =
         (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
    UNLOCK();
  }
  local_40.Object = pFVar7;
  local_40.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_58 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_58);
  DS_ViewModelTemplateUtil::BindViewModel
            ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res20,&local_40,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar8);
  return;
}

// OnPostActivateAbility @ 14b8033f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_InteractionAbility_NPC::OnPostActivateAbility(UDS_InteractionAbility_NPC *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_InteractionEvent *pUVar3;
  UDS_AbilitySystemComponent *this_00;
  undefined1 auStackY_198 [32];
  EDS_AbilityDeactivateType local_168 [16];
  undefined1 local_158 [288];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_NPC,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_38 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
                 "UDS_InteractionAbility_NPC::OnPostActivateAbility",0x31,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_30,0x44,L"InteractionAbilityData is nullptr.")
      ;
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
    }
  }
  else {
    pUVar3 = UDS_InteractionEvent::GetEvent();
    if (pUVar3 != (UDS_InteractionEvent *)0x0) {
      local_158._8_4_ = 0;
      local_158._0_8_ = OnTalkCancel;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar3->InteractionNpcTalkCancelDelegate,this);
      local_158._24_8_ = CONCAT44(local_158._12_4_,local_158._8_4_);
      local_158._16_8_ = local_158._0_8_;
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_InteractionAbility_NPC>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &pUVar3->InteractionNpcTalkCancelDelegate,(UDS_InteractionAbility_NPC *)local_158,
                 (pmf_6e8e8b07 *)this);
    }
    bVar1 = DoTalk(this);
    if (bVar1) {
      return;
    }
  }
  local_168[0] = Cancel;
  this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_00,(FGameplayTag *)&this->_padding_,local_168);
  return;
}

// OnTalkCancel @ 14b808c40

void __thiscall UDS_InteractionAbility_NPC::OnTalkCancel(UDS_InteractionAbility_NPC *this)

{
  UDS_AbilitySystemComponent *this_00;
  EDS_AbilityDeactivateType local_res8 [32];
  
  local_res8[0] = Cancel;
  this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_00,(FGameplayTag *)&this->_padding_,local_res8);
  return;
}

// TryActivate @ 14b813df0

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __cdecl UDS_InteractionAbility_NPC::TryActivate(ulong64 *param_1,ulong64 *param_2,int param_3)

{
  bool bVar1;
  FDS_EntityBase *this;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_198 [32];
  uint uVar4;
  wchar_t *pwVar5;
  EDS_AbilityTagType local_158 [8];
  FWeakObjectPtr local_150;
  undefined8 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((*param_1 == 0) || (*param_2 == 0)) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_NPC::TryActivate",0x27,Yes);
    pwVar5 = L"Invalid parameter.";
    uVar4 = 0xa6;
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)this;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_NPC::TryActivate",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0xad,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b813fe3;
    }
    local_158[0] = Interaction_NPC;
    UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPC>
              ((ulong64 *)&local_150,(EDS_AbilityTagType *)param_1);
    bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_NPC,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_InteractionAbilityData_NPC,FWeakObjectPtr> *)&local_150,
                       (void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      *(ulong64 *)&pUVar3[2].field_0x8 = *param_2;
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      local_148[0] = 0;
      local_158[0] = Interaction_NPC;
      *(int *)&pUVar3[2].field_0x10 = param_3;
      bVar1 = FDS_EntityBase::TryActivateAbility
                        (this,local_158,(TObjectPtr<UWN_AbilityContext>)local_148);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_NPC::TryActivate",0x27,Yes);
    pwVar5 = L"abilityData is nullptr.";
    uVar4 = 0xb4;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
LAB_14b813fe3:
  if ((FDS_EntityBase *)local_138._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

