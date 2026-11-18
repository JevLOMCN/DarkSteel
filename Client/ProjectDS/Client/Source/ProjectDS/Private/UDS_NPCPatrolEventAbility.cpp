// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b547360

UClass * __cdecl UDS_NPCPatrolEventAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCPatrolEventAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCPatrolEventAbility",
               &Z_Registration_Info_UClass_UDS_NPCPatrolEventAbility.InnerSingleton,
               StaticRegisterNativesUDS_NPCPatrolEventAbility,0x158,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_NPCPatrolEventAbility>,
               InternalVTableHelperCtorCaller<UDS_NPCPatrolEventAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCPatrolEventAbility.InnerSingleton;
}

// UDS_NPCPatrolEventAbility @ 14b54a830

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

UDS_NPCPatrolEventAbility * __thiscall
UDS_NPCPatrolEventAbility::UDS_NPCPatrolEventAbility
          (UDS_NPCPatrolEventAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UDS_NPCPatrolEventAbility @ 14b54a870

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

UDS_NPCPatrolEventAbility * __thiscall
UDS_NPCPatrolEventAbility::UDS_NPCPatrolEventAbility
          (UDS_NPCPatrolEventAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UDS_NPCPatrolEventAbility @ 14b54b4f0

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
UDS_NPCPatrolEventAbility::~UDS_NPCPatrolEventAbility(UDS_NPCPatrolEventAbility *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b54cb00

UClass * __cdecl UDS_NPCPatrolEventAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCPatrolEventAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCPatrolEventAbility",
               &Z_Registration_Info_UClass_UDS_NPCPatrolEventAbility.InnerSingleton,
               StaticRegisterNativesUDS_NPCPatrolEventAbility,0x158,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_NPCPatrolEventAbility>,
               InternalVTableHelperCtorCaller<UDS_NPCPatrolEventAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCPatrolEventAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_NPCPatrolEventAbility @ 14b54d780

void __cdecl UDS_NPCPatrolEventAbility::StaticRegisterNativesUDS_NPCPatrolEventAbility(void)

{
  return;
}

// OnAbilityAdded @ 14b837640

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

void __thiscall UDS_NPCPatrolEventAbility::OnAbilityAdded(UDS_NPCPatrolEventAbility *this)

{
  int iVar1;
  TWeakObjectPtr<AActor,FWeakObjectPtr> TVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  UClass *pUVar6;
  UDS_LogManager *pUVar7;
  UObject *pUVar8;
  FDS_EntityBase *pFVar9;
  undefined8 *puVar10;
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
  auStack_878._32_8_ = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x34);
  if ((UObject *)auStack_878._32_8_ == (UObject *)0x0) {
LAB_14b7f3c68:
    auStack_878._32_8_ = (UObject *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_AbilitySystemComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&((UObject *)auStack_878._32_8_)->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&((UObject *)auStack_878._32_8_)->field_0x10 + 0x30) +
         (longlong)iVar1 * 8) != &pUVar6->_padding_)) goto LAB_14b7f3c68;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)auStack_878._32_8_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)auStack_878._32_8_);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&this->field_0xb8,(FObjectPtr)((longlong)auStack_878 + 0x20));
  bVar4 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)&this->field_0xb8,
                     (void *)0x0);
  if (bVar4) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      TStack_808._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_808,"UDS_GameplayAbility::OnAbilityAdded",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,TStack_808.Ptr,0x161,L"OwnerASC is nullptr.");
      if ((void *)TStack_808._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_808._padding_);
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6447389177137856158>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_GameplayAbility.cpp"
                       ,0x162,"false");
    if (bVar4) {
code_r0x00014b7f4316:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xb8);
    auStack_878._40_8_ = *(undefined8 *)&pUVar8[4].field_0x8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)auStack_878._40_8_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)auStack_878._40_8_);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&this->field_0xc0,(FObjectPtr)((longlong)auStack_878 + 0x28));
    bVar4 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&this->field_0xc0,(void *)0x0);
    if (bVar4) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        TStack_6e8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_6e8,"UDS_GameplayAbility::OnAbilityAdded",0x23,Yes);
        UDS_LogManager::PrintLog(pUVar7,1,Warning,TStack_6e8.Ptr,0x169,L"OwnerActor is nullptr.");
        if ((void *)TStack_6e8._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_6e8._padding_);
        }
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6447389177137856150>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_GameplayAbility.cpp"
                         ,0x16a,"false");
      if (bVar4) goto code_r0x00014b7f4316;
    }
    else {
      TVar2.WeakPtr.ObjectIndex = *(int *)&this->field_0xc0;
      TVar2.WeakPtr.ObjectSerialNumber = *(int *)&this->field_0xc4;
      pFVar9 = FDS_EntityBase::GetEntityBaseFromActor(TVar2);
      *(FDS_EntityBase **)&this->field_0xc8 = pFVar9;
      if (pFVar9 == (FDS_EntityBase *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          TStack_5c8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_5c8,"UDS_GameplayAbility::OnAbilityAdded",0x23,Yes);
          UDS_LogManager::PrintLog(pUVar7,1,Warning,TStack_5c8.Ptr,0x171,L"OwnerEntity is nullptr.")
          ;
          if ((void *)TStack_5c8._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_5c8._padding_);
          }
        }
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6447389177137856142>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_GameplayAbility.cpp"
                           ,0x172,"false");
        if (bVar4) goto code_r0x00014b7f4316;
      }
      else {
        puVar10 = (undefined8 *)(**(code **)(pFVar9->_padding_ + 0x78))(pFVar9);
        *(undefined8 *)&this->field_0xd0 = *puVar10;
        bVar4 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&this->field_0xd0,
                           (void *)0x0);
        if (bVar4) {
          pUVar7 = UDS_LogManager::GetInst();
          if (pUVar7 != (UDS_LogManager *)0x0) {
            pUVar7 = UDS_LogManager::GetInst();
            TStack_4a8._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&TStack_4a8,"UDS_GameplayAbility::OnAbilityAdded",0x23,Yes);
            UDS_LogManager::PrintLog
                      (pUVar7,1,Warning,TStack_4a8.Ptr,0x179,L"OwnerMovementCore is nullptr.");
            if ((void *)TStack_4a8._padding_ != (void *)0x0) {
              FMemory::Free((void *)TStack_4a8._padding_);
            }
          }
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6447389177137856134>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_GameplayAbility.cpp"
                             ,0x17a,"false");
          if (bVar4) goto code_r0x00014b7f4316;
        }
        else {
          puVar10 = (undefined8 *)(**(code **)(**(longlong **)&this->field_0xc8 + 0x1b8))();
          *(undefined8 *)&this->field_0xd8 = *puVar10;
          bVar4 = TWeakObjectPtr<UDS_InputData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_InputData,FWeakObjectPtr> *)&this->field_0xd8,
                             (void *)0x0);
          if (bVar4) {
            pUVar7 = UDS_LogManager::GetInst();
            if (pUVar7 != (UDS_LogManager *)0x0) {
              pUVar7 = UDS_LogManager::GetInst();
              TStack_388._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&TStack_388,"UDS_GameplayAbility::OnAbilityAdded",0x23,Yes);
              UDS_LogManager::PrintLog
                        (pUVar7,1,Warning,TStack_388.Ptr,0x181,L"OwnerInputData is nullptr.");
              if ((void *)TStack_388._padding_ != (void *)0x0) {
                FMemory::Free((void *)TStack_388._padding_);
              }
            }
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6447389177137856126>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_GameplayAbility.cpp"
                               ,0x182,"false");
            if (bVar4) goto code_r0x00014b7f4316;
          }
          else {
            *(undefined8 *)&this->field_0xe0 = *(undefined8 *)(*(longlong *)&this->field_0xc8 + 8);
            cVar5 = *(char *)(*(longlong *)&this->field_0xc8 + 0x10);
            this->field_0xe8 = cVar5;
            this->field_0xe9 = cVar5 == '\x02';
            cVar5 = (**(code **)(*(longlong *)this + 0x380))(this);
            if ((cVar5 == '\x01') &&
               (cVar5 = (**(code **)(*(longlong *)this + 0x388))(this), cVar5 == '\x01')) {
              UDS_CharStateData::GetData((ulong64)(auStack_878 + 0x10));
              bVar4 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)
                                 (auStack_878 + 0x10),(void *)0x0);
              if (bVar4) {
                pUVar7 = UDS_LogManager::GetInst();
                if (pUVar7 != (UDS_LogManager *)0x0) {
                  pUVar7 = UDS_LogManager::GetInst();
                  TStack_268._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_268,"UDS_GameplayAbility::OnAbilityAdded",0x23,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar7,1,Warning,TStack_268.Ptr,400,L"charStateData is nullptr.");
                  if ((void *)TStack_268._padding_ != (void *)0x0) {
                    FMemory::Free((void *)TStack_268._padding_);
                  }
                }
                bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_6447389177137856111>,false,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_GameplayAbility.cpp"
                                   ,0x191,"false");
                if (!bVar4) {
                  return;
                }
                goto code_r0x00014b7f4316;
              }
              auStack_878._8_4_ = 0;
              auStack_878._0_8_ = UDS_GameplayAbility::_vcall__912__flat______;
              lStack_820 = (ulonglong)(uint)auStack_878._12_4_ << 0x20;
              pcStack_828 = UDS_GameplayAbility::_vcall__912__flat______;
              pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(auStack_878 + 0x10));
              TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
              ::AddUObject<UDS_GameplayAbility>
                        ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                          *)&pUVar8[7].field_0x20,(UDS_GameplayAbility *)(auStack_878 + 0x40),
                         (pmf_b1dc7540 *)this);
            }
            cVar5 = (**(code **)(*(longlong *)this + 0x398))(this);
            if ((cVar5 == '\x01') &&
               (cVar5 = (**(code **)(*(longlong *)this + 0x3a0))(this), cVar5 == '\x01')) {
              UDS_CharBuffData::GetData((ulong64)(auStack_878 + 0x18));
              bVar4 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)
                                 (auStack_878 + 0x18),(void *)0x0);
              if (bVar4) {
                pUVar7 = UDS_LogManager::GetInst();
                if (pUVar7 != (UDS_LogManager *)0x0) {
                  pUVar7 = UDS_LogManager::GetInst();
                  TStack_148._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&TStack_148,"UDS_GameplayAbility::OnAbilityAdded",0x23,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar7,1,Warning,TStack_148.Ptr,0x19e,L"charBuffData is nullptr.");
                  if ((void *)TStack_148._padding_ != (void *)0x0) {
                    FMemory::Free((void *)TStack_148._padding_);
                  }
                }
                bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_6447389177137856097>,false,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_GameplayAbility.cpp"
                                   ,0x19f,"false");
                if (!bVar4) {
                  return;
                }
                goto code_r0x00014b7f4316;
              }
              auStack_878._8_4_ = 0;
              auStack_878._0_8_ = UDS_GameplayAbility::_vcall__936__flat______;
              lStack_810 = (ulonglong)(uint)auStack_878._12_4_ << 0x20;
              pcStack_818 = UDS_GameplayAbility::_vcall__936__flat______;
              pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(auStack_878 + 0x18));
              TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,enum_EDS_SpecialBuffType_const_&,bool_const_&),FDefaultDelegateUserPolicy>
              ::AddUObject<UDS_GameplayAbility>
                        (pUVar8 + 7,(UDS_GameplayAbility *)auStack_878,(pmf_b503c32f *)this);
            }
            (**(code **)(*(longlong *)this + 0x3b0))(this);
          }
        }
      }
    }
  }
  return;
}

// OnAbilityRetryActivate @ 14b837ac0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_NPCPatrolEventAbility::OnAbilityRetryActivate(UDS_NPCPatrolEventAbility *this)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  EDS_AbilityDeactivateType aEStack_b8 [8];
  FWeakObjectPtr FStack_b0;
  UObject *pUStack_a8;
  FWeakObjectPtr FStack_a0;
  undefined1 auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar3 = *(UObject **)&this->field_0x40;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar3 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
  }
  FStack_a0.ObjectIndex = 0;
  FStack_a0.ObjectSerialNumber = 0;
  pUStack_a8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&FStack_a0,(FObjectPtr)&pUStack_a8);
  pUVar3 = FWeakObjectPtr::Get(&FStack_a0);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_PatrolEventAbilityContext_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14b859d57;
  }
  pUVar3 = (UObject *)0x0;
LAB_14b859d57:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FStack_b0.ObjectIndex = 0;
  FStack_b0.ObjectSerialNumber = 0;
  pUStack_a8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&FStack_b0,(FObjectPtr)&pUStack_a8);
  bVar2 = TWeakObjectPtr<UDS_PatrolEventAbilityContext,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PatrolEventAbilityContext,FWeakObjectPtr> *)&FStack_b0,
                     (void *)0x0);
  if (bVar2) {
    aEStack_b8[0] = Cancel;
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&FStack_b0);
    if (*(int *)(pUVar3 + 1) == 4) {
      pUVar3 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar3,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar4 = Z_Construct_UClass_UDS_EventAnimationAbilityContext_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)auStack_98,pUVar4);
      auStack_98._8_8_ = pUVar3;
      pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_98);
      if (auStack_98._64_8_ != 0) {
        plVar6 = (longlong *)(auStack_98 + 0x50);
        if ((longlong *)auStack_98._104_8_ != (longlong *)0x0) {
          plVar6 = (longlong *)auStack_98._104_8_;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      pUVar5 = FWeakObjectPtr::Get(&FStack_b0);
      *(undefined4 *)(pUVar3 + 1) = *(undefined4 *)&pUVar5[1].field_0x4;
      pUVar5 = FWeakObjectPtr::Get(&FStack_b0);
      *(undefined4 *)&pUVar3[1].field_0x4 = *(undefined4 *)&pUVar5[1].field_0x8;
      pUStack_a8 = pUVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      aEStack_b8[0] = 0x6c;
      UDS_GameplayAbility::TryActivateAbility
                ((UDS_GameplayAbility *)this,aEStack_b8,(TObjectPtr<UWN_AbilityContext>)&pUStack_a8)
      ;
      return;
    }
    aEStack_b8[0] = Success;
  }
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,aEStack_b8);
  return;
}

// OnCanActivate @ 14b839580

bool __thiscall UDS_NPCPatrolEventAbility::OnCanActivate(UDS_NPCPatrolEventAbility *this)

{
  bool bVar1;
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  return bVar1;
}

// OnDeactivateAbility @ 14b83f3d0

void __thiscall
UDS_NPCPatrolEventAbility::OnDeactivateAbility(UDS_NPCPatrolEventAbility *this,bool *param_1)

{
  return;
}

// OnPostActivateAbility @ 14b843f10

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_NPCPatrolEventAbility::OnPostActivateAbility(UDS_NPCPatrolEventAbility *this)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  EDS_AbilityDeactivateType aEStack_b8 [8];
  FWeakObjectPtr FStack_b0;
  UObject *pUStack_a8;
  FWeakObjectPtr FStack_a0;
  undefined1 auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar3 = *(UObject **)&this->field_0x40;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar3 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
  }
  FStack_a0.ObjectIndex = 0;
  FStack_a0.ObjectSerialNumber = 0;
  pUStack_a8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&FStack_a0,(FObjectPtr)&pUStack_a8);
  pUVar3 = FWeakObjectPtr::Get(&FStack_a0);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_PatrolEventAbilityContext_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14b859d57;
  }
  pUVar3 = (UObject *)0x0;
LAB_14b859d57:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FStack_b0.ObjectIndex = 0;
  FStack_b0.ObjectSerialNumber = 0;
  pUStack_a8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&FStack_b0,(FObjectPtr)&pUStack_a8);
  bVar2 = TWeakObjectPtr<UDS_PatrolEventAbilityContext,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PatrolEventAbilityContext,FWeakObjectPtr> *)&FStack_b0,
                     (void *)0x0);
  if (bVar2) {
    aEStack_b8[0] = Cancel;
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&FStack_b0);
    if (*(int *)(pUVar3 + 1) == 4) {
      pUVar3 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar3,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar4 = Z_Construct_UClass_UDS_EventAnimationAbilityContext_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)auStack_98,pUVar4);
      auStack_98._8_8_ = pUVar3;
      pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_98);
      if (auStack_98._64_8_ != 0) {
        plVar6 = (longlong *)(auStack_98 + 0x50);
        if ((longlong *)auStack_98._104_8_ != (longlong *)0x0) {
          plVar6 = (longlong *)auStack_98._104_8_;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      pUVar5 = FWeakObjectPtr::Get(&FStack_b0);
      *(undefined4 *)(pUVar3 + 1) = *(undefined4 *)&pUVar5[1].field_0x4;
      pUVar5 = FWeakObjectPtr::Get(&FStack_b0);
      *(undefined4 *)&pUVar3[1].field_0x4 = *(undefined4 *)&pUVar5[1].field_0x8;
      pUStack_a8 = pUVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      aEStack_b8[0] = 0x6c;
      UDS_GameplayAbility::TryActivateAbility
                ((UDS_GameplayAbility *)this,aEStack_b8,(TObjectPtr<UWN_AbilityContext>)&pUStack_a8)
      ;
      return;
    }
    aEStack_b8[0] = Success;
  }
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,aEStack_b8);
  return;
}

// UpdatePatrolAction @ 14b859c90

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_NPCPatrolEventAbility::UpdatePatrolAction(UDS_NPCPatrolEventAbility *this)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  EDS_AbilityDeactivateType local_b8 [8];
  FWeakObjectPtr local_b0;
  UObject *local_a8;
  FWeakObjectPtr local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar3 = *(UObject **)&this->field_0x40;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar3 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
  }
  local_a0.ObjectIndex = 0;
  local_a0.ObjectSerialNumber = 0;
  local_a8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_a0,(FObjectPtr)&local_a8);
  pUVar3 = FWeakObjectPtr::Get(&local_a0);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_PatrolEventAbilityContext_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14b859d57;
  }
  pUVar3 = (UObject *)0x0;
LAB_14b859d57:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_a8);
  bVar2 = TWeakObjectPtr<UDS_PatrolEventAbilityContext,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PatrolEventAbilityContext,FWeakObjectPtr> *)&local_b0,
                     (void *)0x0);
  if (bVar2) {
    local_b8[0] = Cancel;
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&local_b0);
    if (*(int *)(pUVar3 + 1) == 4) {
      pUVar3 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar3,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar4 = Z_Construct_UClass_UDS_EventAnimationAbilityContext_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar4);
      local_98._8_8_ = pUVar3;
      pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar6 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar6 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      pUVar5 = FWeakObjectPtr::Get(&local_b0);
      *(undefined4 *)(pUVar3 + 1) = *(undefined4 *)&pUVar5[1].field_0x4;
      pUVar5 = FWeakObjectPtr::Get(&local_b0);
      *(undefined4 *)&pUVar3[1].field_0x4 = *(undefined4 *)&pUVar5[1].field_0x8;
      local_a8 = pUVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      local_b8[0] = 0x6c;
      UDS_GameplayAbility::TryActivateAbility
                ((UDS_GameplayAbility *)this,local_b8,(TObjectPtr<UWN_AbilityContext>)&local_a8);
      return;
    }
    local_b8[0] = Success;
  }
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_b8);
  return;
}

