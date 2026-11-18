// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b497750

UClass * __cdecl UDS_EventAnimationAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EventAnimationAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EventAnimationAbility",
               &Z_Registration_Info_UClass_UDS_EventAnimationAbility.InnerSingleton,
               StaticRegisterNativesUDS_EventAnimationAbility,0x170,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_EventAnimationAbility>,
               InternalVTableHelperCtorCaller<UDS_EventAnimationAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EventAnimationAbility.InnerSingleton;
}

// UDS_EventAnimationAbility @ 14b499fb0

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

UDS_EventAnimationAbility * __thiscall
UDS_EventAnimationAbility::UDS_EventAnimationAbility
          (UDS_EventAnimationAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->AniIndexList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AniIndexList).ArrayNum = 0;
  (this->AniIndexList).ArrayMax = 0;
  (this->TimerHandle).Handle = 0;
  return this;
}

// UDS_EventAnimationAbility @ 14b49a000

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

UDS_EventAnimationAbility * __thiscall
UDS_EventAnimationAbility::UDS_EventAnimationAbility
          (UDS_EventAnimationAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->AniIndexList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AniIndexList).ArrayNum = 0;
  (this->AniIndexList).ArrayMax = 0;
  (this->TimerHandle).Handle = 0;
  return this;
}

// ~UDS_EventAnimationAbility @ 14b49aab0

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
UDS_EventAnimationAbility::~UDS_EventAnimationAbility(UDS_EventAnimationAbility *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->AniIndexList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b49ba30

UClass * __cdecl UDS_EventAnimationAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EventAnimationAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EventAnimationAbility",
               &Z_Registration_Info_UClass_UDS_EventAnimationAbility.InnerSingleton,
               StaticRegisterNativesUDS_EventAnimationAbility,0x170,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_EventAnimationAbility>,
               InternalVTableHelperCtorCaller<UDS_EventAnimationAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EventAnimationAbility.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b49c010

bool __thiscall
UDS_EventAnimationAbility::ShouldNotifyChangedCharState(UDS_EventAnimationAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_EventAnimationAbility @ 14b49c020

void __cdecl UDS_EventAnimationAbility::StaticRegisterNativesUDS_EventAnimationAbility(void)

{
  return;
}

// OnAbilityAdded @ 14b7b3b50

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

void __thiscall UDS_EventAnimationAbility::OnAbilityAdded(UDS_EventAnimationAbility *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UClass *pUVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  FDS_EntityBase *pFVar8;
  longlong *plVar9;
  undefined1 auStackY_8a8 [32];
  undefined1 auStack_878 [80];
  code *pcStack_828;
  longlong lStack_820;
  code *pcStack_818;
  longlong lStack_810;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_808;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_6e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_5c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_4a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_8a8;
  auStack_878._32_8_ = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if ((UObject *)auStack_878._32_8_ == (UObject *)0x0) {
LAB_14b7f3c68:
    auStack_878._32_8_ = (UObject *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_AbilitySystemComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&((UObject *)auStack_878._32_8_)->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&((UObject *)auStack_878._32_8_)->field_0x10 + 0x30) +
         (longlong)iVar1 * 8) != &pUVar5->_padding_)) goto LAB_14b7f3c68;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)auStack_878._32_8_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)auStack_878._32_8_);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)((longlong)auStack_878 + 0x20));
  bVar3 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (bVar3) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      TStack_808._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_808,"UDS_GameplayAbility::OnAbilityAdded",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,TStack_808.Ptr,0x161,L"OwnerASC is nullptr.");
      if ((void *)TStack_808._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_808._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6447389177137856158>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_GameplayAbility.cpp"
                       ,0x162,"false");
    if (bVar3) {
code_r0x00014b7f4316:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    auStack_878._40_8_ = *(undefined8 *)&pUVar7[4].field_0x8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)auStack_878._40_8_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)auStack_878._40_8_);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)((longlong)auStack_878 + 0x28));
    bVar3 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&this->_padding_,(void *)0x0);
    if (bVar3) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        TStack_6e8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_6e8,"UDS_GameplayAbility::OnAbilityAdded",0x23,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,TStack_6e8.Ptr,0x169,L"OwnerActor is nullptr.");
        if ((void *)TStack_6e8._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_6e8._padding_);
        }
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6447389177137856150>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_GameplayAbility.cpp"
                         ,0x16a,"false");
      if (bVar3) goto code_r0x00014b7f4316;
    }
    else {
      pFVar8 = FDS_EntityBase::GetEntityBaseFromActor
                         ((TWeakObjectPtr<AActor,FWeakObjectPtr>)this->_padding_);
      this->_padding_ = (longlong)pFVar8;
      if (pFVar8 == (FDS_EntityBase *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          TStack_5c8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_5c8,"UDS_GameplayAbility::OnAbilityAdded",0x23,Yes);
          UDS_LogManager::PrintLog(pUVar6,1,Warning,TStack_5c8.Ptr,0x171,L"OwnerEntity is nullptr.")
          ;
          if ((void *)TStack_5c8._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_5c8._padding_);
          }
        }
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6447389177137856142>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_GameplayAbility.cpp"
                           ,0x172,"false");
        if (bVar3) goto code_r0x00014b7f4316;
      }
      else {
        plVar9 = (longlong *)(**(code **)(pFVar8->_padding_ + 0x78))(pFVar8);
        this->_padding_ = *plVar9;
        bVar3 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&this->_padding_,
                           (void *)0x0);
        if (bVar3) {
          pUVar6 = UDS_LogManager::GetInst();
          if (pUVar6 != (UDS_LogManager *)0x0) {
            pUVar6 = UDS_LogManager::GetInst();
            TStack_4a8._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&TStack_4a8,"UDS_GameplayAbility::OnAbilityAdded",0x23,Yes);
            UDS_LogManager::PrintLog
                      (pUVar6,1,Warning,TStack_4a8.Ptr,0x179,L"OwnerMovementCore is nullptr.");
            if ((void *)TStack_4a8._padding_ != (void *)0x0) {
              FMemory::Free((void *)TStack_4a8._padding_);
            }
          }
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6447389177137856134>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_GameplayAbility.cpp"
                             ,0x17a,"false");
          if (bVar3) goto code_r0x00014b7f4316;
        }
        else {
          plVar9 = (longlong *)(**(code **)(*(longlong *)this->_padding_ + 0x1b8))();
          this->_padding_ = *plVar9;
          bVar3 = TWeakObjectPtr<UDS_InputData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_InputData,FWeakObjectPtr> *)&this->_padding_,
                             (void *)0x0);
          if (bVar3) {
            pUVar6 = UDS_LogManager::GetInst();
            if (pUVar6 != (UDS_LogManager *)0x0) {
              pUVar6 = UDS_LogManager::GetInst();
              TStack_388._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&TStack_388,"UDS_GameplayAbility::OnAbilityAdded",0x23,Yes);
              UDS_LogManager::PrintLog
                        (pUVar6,1,Warning,TStack_388.Ptr,0x181,L"OwnerInputData is nullptr.");
              if ((void *)TStack_388._padding_ != (void *)0x0) {
                FMemory::Free((void *)TStack_388._padding_);
              }
            }
            bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6447389177137856126>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_GameplayAbility.cpp"
                               ,0x182,"false");
            if (bVar3) goto code_r0x00014b7f4316;
          }
          else {
            this->_padding_ = *(longlong *)(this->_padding_ + 8);
            cVar4 = *(char *)(this->_padding_ + 0x10);
            *(char *)&this->_padding_ = cVar4;
            *(bool *)((longlong)&this->_padding_ + 1) = cVar4 == '\x02';
            cVar4 = (**(code **)(this->_padding_ + 0x380))(this);
            if ((cVar4 == '\x01') &&
               (cVar4 = (**(code **)(this->_padding_ + 0x388))(this), cVar4 == '\x01')) {
              UDS_CharStateData::GetData((ulong64)(auStack_878 + 0x10));
              bVar3 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)
                                 (auStack_878 + 0x10),(void *)0x0);
              if (bVar3) {
                pUVar6 = UDS_LogManager::GetInst();
                if (pUVar6 != (UDS_LogManager *)0x0) {
                  pUVar6 = UDS_LogManager::GetInst();
                  TStack_268._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_268,"UDS_GameplayAbility::OnAbilityAdded",0x23,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar6,1,Warning,TStack_268.Ptr,400,L"charStateData is nullptr.");
                  if ((void *)TStack_268._padding_ != (void *)0x0) {
                    FMemory::Free((void *)TStack_268._padding_);
                  }
                }
                bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_6447389177137856111>,false,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_GameplayAbility.cpp"
                                   ,0x191,"false");
                if (!bVar3) {
                  return;
                }
                goto code_r0x00014b7f4316;
              }
              auStack_878._8_4_ = 0;
              auStack_878._0_8_ = UDS_GameplayAbility::_vcall__912__flat______;
              lStack_820 = (ulonglong)(uint)auStack_878._12_4_ << 0x20;
              pcStack_828 = UDS_GameplayAbility::_vcall__912__flat______;
              pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(auStack_878 + 0x10));
              TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
              ::AddUObject<UDS_GameplayAbility>
                        ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                          *)&pUVar7[7].field_0x20,(UDS_GameplayAbility *)(auStack_878 + 0x40),
                         (pmf_b1dc7540 *)this);
            }
            cVar4 = (**(code **)(this->_padding_ + 0x398))(this);
            if ((cVar4 == '\x01') &&
               (cVar4 = (**(code **)(this->_padding_ + 0x3a0))(this), cVar4 == '\x01')) {
              UDS_CharBuffData::GetData((ulong64)(auStack_878 + 0x18));
              bVar3 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)
                                 (auStack_878 + 0x18),(void *)0x0);
              if (bVar3) {
                pUVar6 = UDS_LogManager::GetInst();
                if (pUVar6 != (UDS_LogManager *)0x0) {
                  pUVar6 = UDS_LogManager::GetInst();
                  TStack_148._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_148,"UDS_GameplayAbility::OnAbilityAdded",0x23,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar6,1,Warning,TStack_148.Ptr,0x19e,L"charBuffData is nullptr.");
                  if ((void *)TStack_148._padding_ != (void *)0x0) {
                    FMemory::Free((void *)TStack_148._padding_);
                  }
                }
                bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_6447389177137856097>,false,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_GameplayAbility.cpp"
                                   ,0x19f,"false");
                if (!bVar3) {
                  return;
                }
                goto code_r0x00014b7f4316;
              }
              auStack_878._8_4_ = 0;
              auStack_878._0_8_ = UDS_GameplayAbility::_vcall__936__flat______;
              lStack_810 = (ulonglong)(uint)auStack_878._12_4_ << 0x20;
              pcStack_818 = UDS_GameplayAbility::_vcall__936__flat______;
              pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(auStack_878 + 0x18));
              TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,enum_EDS_SpecialBuffType_const_&,bool_const_&),FDefaultDelegateUserPolicy>
              ::AddUObject<UDS_GameplayAbility>
                        (pUVar7 + 7,(UDS_GameplayAbility *)auStack_878,(pmf_b503c32f *)this);
            }
            (**(code **)(this->_padding_ + 0x3b0))(this);
          }
        }
      }
    }
  }
  return;
}

// OnAbilityRetryActivate @ 14b7b4190

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

void __thiscall UDS_EventAnimationAbility::OnAbilityRetryActivate(UDS_EventAnimationAbility *this)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  FWeakObjectPtr FStackX_8;
  FWeakObjectPtr FStackX_10;
  UObject *apUStackX_18 [2];
  
  pUVar4 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar4 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
  }
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  apUStackX_18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)apUStackX_18);
  pUVar4 = FWeakObjectPtr::Get(&FStackX_8);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_EventAnimationAbilityContext_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7c0282;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7c0282:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FStackX_10.ObjectIndex = 0;
  FStackX_10.ObjectSerialNumber = 0;
  apUStackX_18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&FStackX_10,(FObjectPtr)apUStackX_18);
  bVar3 = TWeakObjectPtr<UDS_EventAnimationAbilityContext,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_EventAnimationAbilityContext,FWeakObjectPtr> *)&FStackX_10,
                     (void *)0x0);
  if (bVar3) {
    FStackX_8.ObjectIndex._0_1_ = 2;
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)&FStackX_8);
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&FStackX_10);
  if (0 < *(int *)(pUVar4 + 1)) {
    pUVar4 = FWeakObjectPtr::Get(&FStackX_10);
    fVar1 = *(float *)&pUVar4[1].field_0x4;
    pUVar4 = FWeakObjectPtr::Get(&FStackX_10);
    StartEventAnimation(this,*(int *)(pUVar4 + 1),fVar1);
    return;
  }
  FStackX_8.ObjectIndex._0_1_ = 1;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)&FStackX_8);
  return;
}

// OnCanActivate @ 14b7b64b0

bool __thiscall UDS_EventAnimationAbility::OnCanActivate(UDS_EventAnimationAbility *this)

{
  bool bVar1;
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  return bVar1;
}

// OnChangedCharState @ 14b7b6ef0

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
UDS_EventAnimationAbility::OnChangedCharState
          (UDS_EventAnimationAbility *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  FWeakObjectPtr local_res10;
  EDS_CharState local_res18 [2];
  FDS_ChangedCharStateInfo local_38;
  
  local_38.StateTag.TagName = (param_2->StateTag).TagName;
  local_38.bIsStateTagOn = param_2->bIsStateTagOn;
  local_38._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_38.AddedCharState = param_2->AddedCharState;
  local_38.RemovedCharState = param_2->RemovedCharState;
  local_38.AddedCharDetailState = param_2->AddedCharDetailState;
  local_38.RemovedCharDetailState = param_2->RemovedCharDetailState;
  local_res10 = param_1.WeakPtr;
  UDS_GameplayAbility::OnChangedCharState((UDS_GameplayAbility *)this,param_1,&local_38);
  if (((param_2->AddedCharDetailState != MoveStart) && (param_2->AddedCharState != Abnormal)) &&
     (param_2->AddedCharState != Abnormal_NonControl)) {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res18[0] = Dead;
    bVar1 = UDS_CharStateData::HasCharState(this_00,local_res18);
    if (!bVar1) {
      return;
    }
  }
  local_res18[0] = CONCAT71(local_res18[0]._1_7_,1);
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)local_res18);
  return;
}

// OnDeactivateAbility @ 14b7b88c0

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
UDS_EventAnimationAbility::OnDeactivateAbility(UDS_EventAnimationAbility *this,bool *param_1)

{
  bool bVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  EDS_StateTagType aEStackX_8 [8];
  
  if ((this->TimerHandle).Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(this_00,&this->TimerHandle);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->TimerHandle).Handle);
    }
    (this->TimerHandle).Handle = 0;
  }
  aEStackX_8[0] = EventAnim;
  bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,aEStackX_8);
  if (bVar1) {
    aEStackX_8[0] = EventAnim;
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,aEStackX_8);
  }
  return;
}

// OnPostActivateAbility @ 14b7bc600

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

void __thiscall UDS_EventAnimationAbility::OnPostActivateAbility(UDS_EventAnimationAbility *this)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  FWeakObjectPtr FStackX_8;
  FWeakObjectPtr FStackX_10;
  UObject *apUStackX_18 [2];
  
  pUVar4 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar4 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
  }
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  apUStackX_18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)apUStackX_18);
  pUVar4 = FWeakObjectPtr::Get(&FStackX_8);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_EventAnimationAbilityContext_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7c0282;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7c0282:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FStackX_10.ObjectIndex = 0;
  FStackX_10.ObjectSerialNumber = 0;
  apUStackX_18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&FStackX_10,(FObjectPtr)apUStackX_18);
  bVar3 = TWeakObjectPtr<UDS_EventAnimationAbilityContext,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_EventAnimationAbilityContext,FWeakObjectPtr> *)&FStackX_10,
                     (void *)0x0);
  if (bVar3) {
    FStackX_8.ObjectIndex._0_1_ = 2;
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)&FStackX_8);
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&FStackX_10);
  if (0 < *(int *)(pUVar4 + 1)) {
    pUVar4 = FWeakObjectPtr::Get(&FStackX_10);
    fVar1 = *(float *)&pUVar4[1].field_0x4;
    pUVar4 = FWeakObjectPtr::Get(&FStackX_10);
    StartEventAnimation(this,*(int *)(pUVar4 + 1),fVar1);
    return;
  }
  FStackX_8.ObjectIndex._0_1_ = 1;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)&FStackX_8);
  return;
}

// OnTimerEndEvent @ 14b7becd0

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

void __thiscall UDS_EventAnimationAbility::OnTimerEndEvent(UDS_EventAnimationAbility *this)

{
  EDS_AbilityDeactivateType local_res10 [24];
  
  local_res10[0] = Success;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
  return;
}

// RefreshEventAnimation @ 14b7c01d0

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

void __thiscall UDS_EventAnimationAbility::RefreshEventAnimation(UDS_EventAnimationAbility *this)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  UObject *local_res18 [2];
  
  pUVar4 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar4 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  pUVar4 = FWeakObjectPtr::Get(&local_res8);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_EventAnimationAbilityContext_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b7c0282;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b7c0282:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  bVar3 = TWeakObjectPtr<UDS_EventAnimationAbilityContext,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_EventAnimationAbilityContext,FWeakObjectPtr> *)&local_res10
                     ,(void *)0x0);
  if (bVar3) {
    local_res8.ObjectIndex._0_1_ = 2;
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)&local_res8);
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_res10);
  if (0 < *(int *)(pUVar4 + 1)) {
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    fVar1 = *(float *)&pUVar4[1].field_0x4;
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    StartEventAnimation(this,*(int *)(pUVar4 + 1),fVar1);
    return;
  }
  local_res8.ObjectIndex._0_1_ = 1;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)&local_res8);
  return;
}

// StartEventAnimation @ 14b7c5010

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
UDS_EventAnimationAbility::StartEventAnimation
          (UDS_EventAnimationAbility *this,int param_1,float param_2)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTimerManager *this_00;
  undefined8 *puVar6;
  ulong64 uVar7;
  FScriptContainerElement *_Dst;
  int iVar8;
  EDS_AbilityDeactivateType local_res18 [8];
  EDS_StateTagType local_res20 [8];
  UDS_EventAnimationAbility *local_68;
  FDelegateAllocation local_60;
  code *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  StopEventAnimation(this);
  if (param_2 <= 0.0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1854957179270856601>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_EventAnimationAbility.cpp"
                       ,0x67,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_res18[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res18);
    return;
  }
  pTVar2 = &this->AniIndexList;
  iVar8 = (this->AniIndexList).ArrayNum;
  piVar1 = &(this->AniIndexList).ArrayNum;
  if (iVar8 < 3) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,3 - iVar8,&pTVar2->AllocatorInstance,piVar1,
                       &(this->AniIndexList).ArrayMax);
    memset((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 4,0,(longlong)(3 - iVar8) << 2);
  }
  else if (3 < iVar8) {
    iVar8 = iVar8 + -3;
    if (iVar8 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (iVar8 == 0) goto LAB_14b7c5191;
    _Dst = (pTVar2->AllocatorInstance).Data + 0xc;
    iVar5 = (*piVar1 - iVar8) + -3;
    if (iVar5 != 0) {
      memmove(_Dst,_Dst + (longlong)iVar8 * 4,(longlong)iVar5 << 2);
    }
    *piVar1 = *piVar1 - iVar8;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&pTVar2->AllocatorInstance,*piVar1,&(this->AniIndexList).ArrayMax);
  }
LAB_14b7c5191:
  if (*piVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res20[0] = EventAnim;
  *(int *)((pTVar2->AllocatorInstance).Data + 4) = param_1;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res20,pTVar2);
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  uStack_40 = 0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48 = OnTimerEndEvent;
  local_60.DelegateSize = 0;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_EventAnimationAbility____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_EventAnimationAbility *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar6[3] = 0;
    local_68 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_EventAnimationAbility *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_68);
    puVar6[4] = local_48;
    puVar6[5] = CONCAT44(uStack_3c,uStack_40);
  }
  FTimerManager::SetTimer
            (this_00,&this->TimerHandle,
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_60,
             param_2,false,__real_bf800000);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  return;
}

// StopEventAnimation @ 14b7c5d40

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

void __thiscall UDS_EventAnimationAbility::StopEventAnimation(UDS_EventAnimationAbility *this)

{
  bool bVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  EDS_StateTagType local_res8 [8];
  
  if ((this->TimerHandle).Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(this_00,&this->TimerHandle);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->TimerHandle).Handle);
    }
    (this->TimerHandle).Handle = 0;
  }
  local_res8[0] = EventAnim;
  bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_res8);
  if (bVar1) {
    local_res8[0] = EventAnim;
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  }
  return;
}

