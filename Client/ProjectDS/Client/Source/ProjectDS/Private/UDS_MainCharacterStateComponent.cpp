// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b4e5900

UClass * __cdecl UDS_MainCharacterStateComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MainCharacterStateComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainCharacterStateComponent",
               &Z_Registration_Info_UClass_UDS_MainCharacterStateComponent.InnerSingleton,
               StaticRegisterNativesUDS_MainCharacterStateComponent,200,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MainCharacterStateComponent>,
               InternalVTableHelperCtorCaller<UDS_MainCharacterStateComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MainCharacterStateComponent.InnerSingleton;
}

// UDS_MainCharacterStateComponent @ 14b4e8e70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDS_MainCharacterStateComponent * __thiscall
UDS_MainCharacterStateComponent::UDS_MainCharacterStateComponent
          (UDS_MainCharacterStateComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->OwnerCharacter).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_MainCharacterStateComponent @ 14b4e9c70

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
UDS_MainCharacterStateComponent::~UDS_MainCharacterStateComponent
          (UDS_MainCharacterStateComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14b4eb990

UClass * __cdecl UDS_MainCharacterStateComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MainCharacterStateComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MainCharacterStateComponent",
               &Z_Registration_Info_UClass_UDS_MainCharacterStateComponent.InnerSingleton,
               StaticRegisterNativesUDS_MainCharacterStateComponent,200,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MainCharacterStateComponent>,
               InternalVTableHelperCtorCaller<UDS_MainCharacterStateComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MainCharacterStateComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_MainCharacterStateComponent @ 14b4ec1d0

void __cdecl
UDS_MainCharacterStateComponent::StaticRegisterNativesUDS_MainCharacterStateComponent(void)

{
  return;
}

// UDS_MainCharacterStateComponent @ 14bbead50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDS_MainCharacterStateComponent * __thiscall
UDS_MainCharacterStateComponent::UDS_MainCharacterStateComponent
          (UDS_MainCharacterStateComponent *this)

{
  byte *pbVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar2);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  (this->OwnerCharacter).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// BeginPlay @ 14bbed040

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_MainCharacterStateComponent::BeginPlay(UDS_MainCharacterStateComponent *this)

{
  int iVar1;
  UClass *pUVar2;
  UObject *local_res8;
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  local_res8 = (UObject *)this->_padding_;
  if (local_res8 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&local_res8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_res8->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14bbed083;
  }
  local_res8 = (UObject *)0x0;
LAB_14bbed083:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&(this->OwnerCharacter).WeakPtr,(FObjectPtr)&local_res8);
  return;
}

// EndPlay @ 14bbf0420

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
UDS_MainCharacterStateComponent::EndPlay(UDS_MainCharacterStateComponent *this,Type param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar3;
  FWeakObjectPtr local_res8;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerCharacter).WeakPtr);
  if (bVar1) {
    FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
    UDS_CharStateData::GetData((ulong64)&local_res8);
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
    }
  }
  bVar1 = UDS_GameInstance::GetIsCCSAIMode();
  if (!bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerCharacter).WeakPtr);
    if (bVar1) {
      FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
      UDS_CharStatusData::GetData((ulong64)&local_res8);
      bVar1 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar1) {
        this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_res8);
        pFVar3 = UDS_CharStatusData::GetStatusInfo(this_00,Hp);
        if (pFVar3 != (FDS_StatusInfo *)0x0) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &pFVar3->ChangeStatusDelegate,this);
        }
      }
    }
  }
  UActorComponent::EndPlay((UActorComponent *)this,param_1);
  return;
}

// OnChangedCharState @ 14bbfa570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MainCharacterStateComponent::OnChangedCharState
          (UDS_MainCharacterStateComponent *this,
          TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,FDS_ChangedCharStateInfo *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_LogManager *pUVar4;
  UDS_CharStateData *pUVar5;
  UDS_EntityData *this_00;
  UObject *pUVar6;
  TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *this_01;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_168;
  FWeakObjectPtr local_160;
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  EDS_CharState local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (param_2->bIsStateTagOn == true) {
    local_150 = param_1.WeakPtr;
    bVar2 = FWeakObjectPtr::IsValid(&(this->OwnerCharacter).WeakPtr);
    if (bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
      UDS_EntityData::GetData((ulong64)&local_168,*(ulong64 *)&pUVar3[0x29].field_0x18);
      bVar2 = FWeakObjectPtr::IsValid(&local_168);
      if (bVar2) {
        pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_150);
        local_148[0] = Abnormal;
        bVar2 = UDS_CharStateData::HasCharState(pUVar5,local_148);
        if (!bVar2) {
          pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_150);
          local_148[1] = 0x800;
          bVar2 = UDS_CharStateData::HasCharState(pUVar5,local_148 + 1);
          if (!bVar2) {
            this_00 = (UDS_EntityData *)FWeakObjectPtr::Get(&local_168);
          }
          else {
            this_00 = (UDS_EntityData *)FWeakObjectPtr::Get(&local_168);
          }
          UDS_EntityData::SetHeightConditionType(this_00,bVar2);
        }
      }
      else {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1110620384593444982>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\Components\\DS_MainCharacterStateComponent.cpp"
                           ,0x76,"ownerEntityData.IsValid()");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_MainCharacterStateComponent::UpdateHeightConditionType",0x3a,
                     Yes);
          UDS_LogManager::PrintLog
                    (pUVar4,1,Warning,local_138.Ptr,0x78,L"ownerEntityData is nullptr.");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
    }
  }
  this_01 = &this->OwnerCharacter;
  bVar2 = FWeakObjectPtr::IsValid(&this_01->WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    (**(code **)(*(longlong *)&pUVar3[0x29].field_0x10 + 0x160))
              (&pUVar3[0x29].field_0x10,&local_160);
    bVar2 = FWeakObjectPtr::IsValid(&local_160);
    if (bVar2) {
      if (param_2->AddedCharDetailState == Mount_DisMount) {
        pUVar3 = FWeakObjectPtr::Get(&local_160);
        (**(code **)(*(longlong *)pUVar3 + 0x788))
                  (pUVar3,::COLLISION_PROFILE_PLAYER_IGNORE_COLLISION,1);
      }
      else if (param_2->RemovedCharDetailState == Mount_DisMount) {
        pUVar3 = FWeakObjectPtr::Get(&local_160);
        pcVar1 = *(code **)(*(longlong *)pUVar3 + 0x788);
        pUVar6 = FWeakObjectPtr::Get(&this_01->WeakPtr);
        (*pcVar1)(pUVar3,*(undefined8 *)&pUVar6[0x2b].field_0x20,1);
      }
    }
  }
  bVar2 = FWeakObjectPtr::IsValid(&this_01->WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    (**(code **)(*(longlong *)&pUVar3[0x29].field_0x10 + 0x160))
              (&pUVar3[0x29].field_0x10,&local_158);
    bVar2 = FWeakObjectPtr::IsValid(&local_158);
    if (bVar2) {
      if ((param_2->AddedCharDetailState == Interaction_NPCTaming_Success) ||
         (param_2->AddedCharDetailState == Interaction_NPCTaming_Fail)) {
        pUVar3 = FWeakObjectPtr::Get(&local_158);
        (**(code **)(*(longlong *)pUVar3 + 0x788))
                  (pUVar3,::COLLISION_PROFILE_PLAYER_IGNORE_COLLISION,1);
      }
      else if ((param_2->RemovedCharDetailState == Interaction_NPCTaming_Success) ||
              (param_2->RemovedCharDetailState == Interaction_NPCTaming_Fail)) {
        pUVar3 = FWeakObjectPtr::Get(&local_158);
        pcVar1 = *(code **)(*(longlong *)pUVar3 + 0x788);
        pUVar6 = FWeakObjectPtr::Get(&this_01->WeakPtr);
        (*pcVar1)(pUVar3,*(undefined8 *)&pUVar6[0x2b].field_0x20,1);
      }
    }
  }
  return;
}

// OnChangedStatus_HP @ 14bbfa890

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MainCharacterStateComponent::OnChangedStatus_HP
          (UDS_MainCharacterStateComponent *this,float param_1,float param_2)

{
  bool bVar1;
  UDS_WindowManager *this_00;
  float fVar2;
  float local_res18 [2];
  UDS_WindowManager *local_res20;
  FWeakObjectPtr local_38;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_30;
  
  if (__real_322bcc77 < (float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar2 = DS_CommonDataHelper::CharHpLackPer();
    fVar2 = fVar2 * __real_358637bd;
    local_res20 = UDS_WindowManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res20 != (UDS_WindowManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    local_38.ObjectIndex = 0;
    local_38.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res20 != (UDS_WindowManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_res20);
    bVar1 = FWeakObjectPtr::IsValid(&local_38);
    if (bVar1) {
      this_00 = (UDS_WindowManager *)FWeakObjectPtr::Get(&local_38);
      if (param_1 / param_2 < fVar2) {
        local_30._0_8_ = 0;
        local_30._8_8_ = 0;
        local_30._16_4_ = 0;
        UDS_WindowManager::OpenWindow(this_00,HUDCharHpLack,&local_30);
        return;
      }
      local_res18[0] = 0.0;
      local_res20 = (UDS_WindowManager *)((ulonglong)local_res20 & 0xffffffff00000000);
      UDS_WindowManager::CloseWindow(this_00,HUDCharHpLack,(uint *)&local_res20,local_res18);
    }
  }
  return;
}

// RegisterCharStateDelegate @ 14bc0cc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_MainCharacterStateComponent::RegisterCharStateDelegate
          (UDS_MainCharacterStateComponent *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_168 [2];
  undefined1 local_158 [288];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  UDS_CharStateData::GetData((ulong64)local_168);
  bVar2 = FWeakObjectPtr::IsValid(local_168);
  if (bVar2) {
    local_158._8_4_ = 0;
    local_158._0_8_ = OnChangedCharState;
    local_158._24_8_ = (ulonglong)(uint)local_158._12_4_ << 0x20;
    local_158._16_8_ = OnChangedCharState;
    pUVar5 = FWeakObjectPtr::Get(local_168);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_MainCharacterStateComponent>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                *)&pUVar5[7].field_0x20,(UDS_MainCharacterStateComponent *)local_158,
               (pmf_8970d098 *)this);
    bVar2 = true;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1110620384593444898>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\Components\\DS_MainCharacterStateComponent.cpp"
                       ,0x22,"charStateData.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_38 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
                 "UDS_MainCharacterStateComponent::RegisterCharStateDelegate",0x3a,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_30,0x24,L"charStateData is nullptr. (%llu)");
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}

// RegisterCharStatusDelegate @ 14bc0cd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_MainCharacterStateComponent::RegisterCharStatusDelegate
          (UDS_MainCharacterStateComponent *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar5;
  void *pvVar6;
  undefined1 auStackY_2c8 [32];
  FWeakObjectPtr local_288 [2];
  undefined1 local_278 [288];
  void *local_158;
  wchar_t *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  bVar2 = UDS_GameInstance::GetIsCCSAIMode();
  if (bVar2) {
    return true;
  }
  UDS_CharStatusData::GetData((ulong64)local_288);
  bVar2 = FWeakObjectPtr::IsValid(local_288);
  if (bVar2) {
    this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(local_288);
    pFVar5 = UDS_CharStatusData::GetStatusInfo(this_00,Hp);
    if (pFVar5 != (FDS_StatusInfo *)0x0) {
      local_278._8_4_ = 0;
      local_278._0_8_ = OnChangedStatus_HP;
      local_278._24_8_ = (ulonglong)(uint)local_278._12_4_ << 0x20;
      local_278._16_8_ = OnChangedStatus_HP;
      TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_MainCharacterStateComponent>
                ((TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>
                  *)&pFVar5->ChangeStatusDelegate,(UDS_MainCharacterStateComponent *)local_278,
                 (pmf_d7e1f273 *)this);
      OnChangedStatus_HP(this,(float)pFVar5->CurrentValue,pFVar5->MaxValue);
      return true;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1110620384593444923>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\Components\\DS_MainCharacterStateComponent.cpp"
                       ,0x3b,"statusInfo");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_MainCharacterStateComponent::RegisterCharStatusDelegate",0x3b,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x3d,L"statusInfo is nullptr.");
    pvVar6 = (void *)local_138._padding_;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1110620384593444916>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\Components\\DS_MainCharacterStateComponent.cpp"
                       ,0x34,"charStatusData.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_158 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_278 + 0x20),
               "UDS_MainCharacterStateComponent::RegisterCharStatusDelegate",0x3b,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_150,0x36,L"charStatusData is nullptr. (%llu)");
    pvVar6 = local_158;
  }
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  return false;
}

// UnregisterCharStateDelegate @ 14bc20b90

void __thiscall
UDS_MainCharacterStateComponent::UnregisterCharStateDelegate(UDS_MainCharacterStateComponent *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerCharacter).WeakPtr);
  if (bVar1) {
    FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
    UDS_CharStateData::GetData((ulong64)&local_res8);
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
    }
  }
  return;
}

// UnregisterCharStatusDelegate @ 14bc20c10

void __thiscall
UDS_MainCharacterStateComponent::UnregisterCharStatusDelegate(UDS_MainCharacterStateComponent *this)

{
  bool bVar1;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar2;
  FWeakObjectPtr local_res10 [3];
  
  bVar1 = UDS_GameInstance::GetIsCCSAIMode();
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerCharacter).WeakPtr), bVar1)) {
    FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
    UDS_CharStatusData::GetData((ulong64)local_res10);
    bVar1 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar1) {
      this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(local_res10);
      pFVar2 = UDS_CharStatusData::GetStatusInfo(this_00,Hp);
      if (pFVar2 != (FDS_StatusInfo *)0x0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pFVar2->ChangeStatusDelegate,this);
      }
    }
  }
  return;
}

// UpdateCollisionForMountState @ 14bc20d50

void __thiscall
UDS_MainCharacterStateComponent::UpdateCollisionForMountState
          (UDS_MainCharacterStateComponent *this,FDS_ChangedCharStateInfo *param_1)

{
  TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  
  this_00 = &this->OwnerCharacter;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    (**(code **)(*(longlong *)&pUVar3[0x29].field_0x10 + 0x160))
              (&pUVar3[0x29].field_0x10,&local_res8);
    bVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar2) {
      if (param_1->AddedCharDetailState == Mount_DisMount) {
        pUVar3 = FWeakObjectPtr::Get(&local_res8);
        (**(code **)(*(longlong *)pUVar3 + 0x788))
                  (pUVar3,::COLLISION_PROFILE_PLAYER_IGNORE_COLLISION,1);
        return;
      }
      if (param_1->RemovedCharDetailState == Mount_DisMount) {
        pUVar3 = FWeakObjectPtr::Get(&local_res8);
        pcVar1 = *(code **)(*(longlong *)pUVar3 + 0x788);
        pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        (*pcVar1)(pUVar3,*(undefined8 *)&pUVar4[0x2b].field_0x20,1);
      }
    }
  }
  return;
}

// UpdateCollisionForTamingState @ 14bc20e30

void __thiscall
UDS_MainCharacterStateComponent::UpdateCollisionForTamingState
          (UDS_MainCharacterStateComponent *this,FDS_ChangedCharStateInfo *param_1)

{
  TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  
  this_00 = &this->OwnerCharacter;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    (**(code **)(*(longlong *)&pUVar3[0x29].field_0x10 + 0x160))
              (&pUVar3[0x29].field_0x10,&local_res8);
    bVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar2) {
      if ((param_1->AddedCharDetailState == Interaction_NPCTaming_Success) ||
         (param_1->AddedCharDetailState == Interaction_NPCTaming_Fail)) {
        pUVar3 = FWeakObjectPtr::Get(&local_res8);
        (**(code **)(*(longlong *)pUVar3 + 0x788))
                  (pUVar3,::COLLISION_PROFILE_PLAYER_IGNORE_COLLISION,1);
      }
      else if ((param_1->RemovedCharDetailState == Interaction_NPCTaming_Success) ||
              (param_1->RemovedCharDetailState == Interaction_NPCTaming_Fail)) {
        pUVar3 = FWeakObjectPtr::Get(&local_res8);
        pcVar1 = *(code **)(*(longlong *)pUVar3 + 0x788);
        pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        (*pcVar1)(pUVar3,*(undefined8 *)&pUVar4[0x2b].field_0x20,1);
        return;
      }
    }
  }
  return;
}

// UpdateHeightConditionType @ 14bc20f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MainCharacterStateComponent::UpdateHeightConditionType
          (UDS_MainCharacterStateComponent *this,
          TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_LogManager *pUVar4;
  UDS_CharStateData *pUVar5;
  UDS_EntityData *this_00;
  FWeakObjectPtr local_res10 [3];
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  EDS_CharState local_150 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_res10[0] = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&(this->OwnerCharacter).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
    UDS_EntityData::GetData((ulong64)&local_158,*(ulong64 *)&pUVar3[0x29].field_0x18);
    bVar2 = FWeakObjectPtr::IsValid(&local_158);
    if (bVar2) {
      pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
      local_150[0] = Abnormal;
      bVar2 = UDS_CharStateData::HasCharState(pUVar5,local_150);
      if (!bVar2) {
        pUVar5 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
        local_150[1] = 0x800;
        bVar2 = UDS_CharStateData::HasCharState(pUVar5,local_150 + 1);
        if (!bVar2) {
          this_00 = (UDS_EntityData *)FWeakObjectPtr::Get(&local_158);
        }
        else {
          this_00 = (UDS_EntityData *)FWeakObjectPtr::Get(&local_158);
        }
        UDS_EntityData::SetHeightConditionType(this_00,bVar2);
      }
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1110620384593444982>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Character\\Components\\DS_MainCharacterStateComponent.cpp"
                         ,0x76,"ownerEntityData.IsValid()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_MainCharacterStateComponent::UpdateHeightConditionType",0x3a,Yes)
        ;
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x78,L"ownerEntityData is nullptr.")
        ;
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return;
}

