// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b5a76b0

UClass * __cdecl ADS_StuffWarpDevice::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_StuffWarpDevice.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffWarpDevice",
               &Z_Registration_Info_UClass_ADS_StuffWarpDevice.InnerSingleton,
               StaticRegisterNativesADS_StuffWarpDevice,0x738,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_StuffWarpDevice>,
               InternalVTableHelperCtorCaller<ADS_StuffWarpDevice>,local_res8,ADS_Stuff::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_StuffWarpDevice.InnerSingleton;
}

// ADS_StuffWarpDevice @ 14b5a8f50

ADS_StuffWarpDevice * __thiscall
ADS_StuffWarpDevice::ADS_StuffWarpDevice(ADS_StuffWarpDevice *this,FVTableHelper *param_1)

{
  ADS_EntityActorBase::ADS_EntityActorBase((ADS_EntityActorBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  (this->InteractionPrepareUIComponent).field0_0x0.DebugPtr =
       (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->InteractionIconUIComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  return this;
}

// ~ADS_StuffWarpDevice @ 14b5a9760

void __thiscall ADS_StuffWarpDevice::~ADS_StuffWarpDevice(ADS_StuffWarpDevice *this)

{
  this->_padding_ = (longlong)&ADS_Stuff::_vftable__for__AActor__;
  this->_padding_ = (longlong)&ADS_Stuff::_vftable__for__FDS_EntityBase__;
  ADS_EntityActorBase::~ADS_EntityActorBase((ADS_EntityActorBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5aa7a0

UClass * __cdecl ADS_StuffWarpDevice::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_StuffWarpDevice.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffWarpDevice",
               &Z_Registration_Info_UClass_ADS_StuffWarpDevice.InnerSingleton,
               StaticRegisterNativesADS_StuffWarpDevice,0x738,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_StuffWarpDevice>,
               InternalVTableHelperCtorCaller<ADS_StuffWarpDevice>,local_res8,ADS_Stuff::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_StuffWarpDevice.InnerSingleton;
}

// IsMovementCoreTickEnabled @ 14b5aaf60

bool __thiscall ADS_StuffWarpDevice::IsMovementCoreTickEnabled(ADS_StuffWarpDevice *this)

{
  return false;
}

// StaticRegisterNativesADS_StuffWarpDevice @ 14b5aafc0

void __cdecl ADS_StuffWarpDevice::StaticRegisterNativesADS_StuffWarpDevice(void)

{
  return;
}

// ADS_StuffWarpDevice @ 14bc829b0

ADS_StuffWarpDevice * __thiscall
ADS_StuffWarpDevice::ADS_StuffWarpDevice(ADS_StuffWarpDevice *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  ADS_StuffWarpDevice *pAVar5;
  FName *pFVar6;
  UClass *pUVar7;
  UDS_ActorAttachedWidgetComponent *pUVar8;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  
  ADS_Stuff::ADS_Stuff((ADS_Stuff *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  (this->InteractionPrepareUIComponent).field0_0x0.DebugPtr =
       (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->InteractionIconUIComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  if (this->_padding_ == 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8634481885419929566>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Prop\\DS_StuffWarpDevice.cpp"
                       ,0x22,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pAVar5 = (ADS_StuffWarpDevice *)(*pcVar3)();
      return pAVar5;
    }
  }
  else {
    ::FName::FName(&local_res8,L"Prop");
    this->_padding_ = (longlong)local_res8;
    (**(code **)(*(longlong *)this->_padding_ + 0x788))((longlong *)this->_padding_,local_res8,1);
    pFVar6 = ::FName::FName(&local_res18,"InteractionPrepareUIComponent");
    FVar2 = *pFVar6;
    pUVar7 = Z_Construct_UClass_UDS_ActorAttachedWidgetComponent_NoRegister();
    pUVar8 = (UDS_ActorAttachedWidgetComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar7,pUVar7,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->InteractionPrepareUIComponent).field0_0x0.DebugPtr = pUVar8;
    pFVar6 = ::FName::FName(&local_res20,"InteractionIconUIComponent");
    FVar2 = *pFVar6;
    pUVar7 = Z_Construct_UClass_UDS_ActorAttachedWidgetComponent_NoRegister();
    pUVar8 = (UDS_ActorAttachedWidgetComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar7,pUVar7,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->InteractionIconUIComponent).field0_0x0.DebugPtr = pUVar8;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 6;
  }
  return this;
}

// BeginPlay @ 14bc89e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_StuffWarpDevice::BeginPlay(ADS_StuffWarpDevice *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_168 [2];
  undefined1 local_158 [288];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  ADS_Stuff::BeginPlay((ADS_Stuff *)this);
  UDS_StuffWarpDeviceData::GetData((ulong64)local_168);
  bVar1 = TWeakObjectPtr<UDS_StuffWarpDeviceData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffWarpDeviceData,FWeakObjectPtr> *)local_168,(void *)0x0
                    );
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_38 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
                 "ADS_StuffWarpDevice::BeginPlay",0x1e,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_30,0x35,L"stuffWarpDeviceData is nullptr. (%llu)");
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
    }
  }
  else {
    local_158._8_4_ = 0;
    local_158._0_8_ = OnWarpStateChanged;
    local_158._24_8_ = (ulonglong)(uint)local_158._12_4_ << 0x20;
    local_158._16_8_ = OnWarpStateChanged;
    pUVar3 = FWeakObjectPtr::Get(local_168);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_StuffWarpDeviceData,FWeakObjectPtr>,enum_EDS_WarpDeviceState),FDefaultDelegateUserPolicy>
    ::AddUObject<ADS_StuffWarpDevice>
              (&pUVar3[10].field_0x18,(ADS_StuffWarpDevice *)local_158,(pmf_8d9e0c25 *)this);
  }
  return;
}

// EndPlay @ 14bc97140

void __thiscall ADS_StuffWarpDevice::EndPlay(ADS_StuffWarpDevice *this,Type param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  
  UDS_StuffWarpDeviceData::GetData((ulong64)&local_res8);
  bVar1 = TWeakObjectPtr<UDS_StuffWarpDeviceData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffWarpDeviceData,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[10].field_0x18,this);
  }
  ADS_EntityActorBase::EndPlay((ADS_EntityActorBase *)this,param_1);
  return;
}

// InitWidgets @ 14bca6660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_StuffWarpDevice::InitWidgets(ADS_StuffWarpDevice *this)

{
  UDS_ActorAttachedWidgetComponent *pUVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  FDS_UniqueBpTableRow *pFVar6;
  FDS_ResourceEtcTableRow *pFVar7;
  FName *pFVar8;
  UObject *pUVar9;
  undefined1 auStackY_198 [32];
  uint uVar10;
  wchar_t *pwVar11;
  FWeakObjectPtr local_168;
  TWeakObjectPtr<UDS_ActivateWarpDeviceData,FWeakObjectPtr> local_160;
  FName local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_ActivateWarpDeviceData::GetData((ulong64)&local_160,UDS_PlayerData::MainPlayerEntityID,false);
  bVar4 = TWeakObjectPtr<UDS_ActivateWarpDeviceData,FWeakObjectPtr>::UEOpEquals
                    (&local_160,(void *)0x0);
  if (bVar4) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"ADS_StuffWarpDevice::InitWidgets",0x20,Yes);
    pwVar11 = L"MainPlayer\'s activateWarpDeviceData is nullptr.";
    uVar10 = 0x75;
  }
  else {
    (**(code **)(this->_padding_ + 0x80))();
    bVar4 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_168,
                       (void *)0x0);
    if (!bVar4) {
      if ((this->InteractionPrepareUIComponent).field0_0x0.DebugPtr !=
          (UDS_ActorAttachedWidgetComponent *)0x0) {
        pFVar6 = FDS_UniqueBpTableRow::GetRef(0xb,true);
        pFVar7 = FDS_UniqueBpTableRow::ID_BpLinkTable(pFVar6);
        pUVar1 = (this->InteractionPrepareUIComponent).field0_0x0.DebugPtr;
        pcVar2 = *(code **)(*(longlong *)pUVar1 + 0x508);
        pFVar8 = ::FName::FName(local_158,"Interaction");
        FVar3 = *pFVar8;
        pUVar9 = FWeakObjectPtr::Get(&local_168);
        (*pcVar2)(pUVar1,pUVar9,&FAttachmentTransformRules::KeepRelativeTransform,FVar3);
        UDS_ActorAttachedWidgetComponent::Init
                  ((this->InteractionPrepareUIComponent).field0_0x0.DebugPtr,&pFVar7->ResourcePath);
      }
      if ((this->InteractionIconUIComponent).field0_0x0.DebugPtr ==
          (UDS_ActorAttachedWidgetComponent *)0x0) {
        return;
      }
      pFVar6 = FDS_UniqueBpTableRow::GetRef(0xc,true);
      pFVar7 = FDS_UniqueBpTableRow::ID_BpLinkTable(pFVar6);
      pUVar1 = (this->InteractionIconUIComponent).field0_0x0.DebugPtr;
      pcVar2 = *(code **)(*(longlong *)pUVar1 + 0x508);
      pFVar8 = ::FName::FName(local_158,"Interaction");
      FVar3 = *pFVar8;
      pUVar9 = FWeakObjectPtr::Get(&local_168);
      (*pcVar2)(pUVar1,pUVar9,&FAttachmentTransformRules::KeepRelativeTransform,FVar3);
      UDS_ActorAttachedWidgetComponent::Init
                ((this->InteractionIconUIComponent).field0_0x0.DebugPtr,&pFVar7->ResourcePath);
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"ADS_StuffWarpDevice::InitWidgets",0x20,Yes);
    pwVar11 = L"skm is nullptr.";
    uVar10 = 0x7c;
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,uVar10,pwVar11);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// IsInteractingWithMainCharacter @ 14bca7af0

bool __thiscall ADS_StuffWarpDevice::IsInteractingWithMainCharacter(ADS_StuffWarpDevice *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res18;
  ulong64 local_res20;
  
  local_res20 = FDS_EntityBase::GetMainPlayerEntityID(true);
  UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_StuffWarpDevice>
            ((ulong64 *)&local_res18,(EDS_AbilityTagType *)&local_res20);
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_InteractionAbilityData_StuffWarpDevice,FWeakObjectPtr> *)
                     &local_res18,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res18);
    return *(longlong *)&pUVar2[2].field_0x8 == this->_padding_;
  }
  return false;
}

// IsInteractionAvailable @ 14bca8030

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

bool __thiscall
ADS_StuffWarpDevice::IsInteractionAvailable(ADS_StuffWarpDevice *this,ulong64 param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_StuffWarpDeviceData *this_00;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar1 = FDS_EntityBase::IsInteractionAvailable((FDS_EntityBase *)this,param_1);
  if (bVar1) {
    UDS_StuffWarpDeviceData::GetData((ulong64)local_148);
    bVar1 = TWeakObjectPtr<UDS_StuffWarpDeviceData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffWarpDeviceData,FWeakObjectPtr> *)local_148,
                       (void *)0x0);
    if (!bVar1) {
      this_00 = (UDS_StuffWarpDeviceData *)FWeakObjectPtr::Get(local_148);
      bVar1 = UDS_StuffWarpDeviceData::IsInteractionAvailable(this_00,param_1);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_StuffWarpDevice::IsInteractionAvailable",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x52,L"stuffWarpDeviceData is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnOpenActivateMessage @ 14bcb7d30

void __thiscall
ADS_StuffWarpDevice::OnOpenActivateMessage(ADS_StuffWarpDevice *this,UDS_UserWidget *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FString *this_00;
  bool bVar4;
  FDS_ViewModelContext *pFVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this_01;
  UObject *pUVar7;
  FDS_StuffWarpDeviceTableRow *pFVar8;
  FDS_ZoneBaseTableRow *this_02;
  FDS_StringWorldTableRow *pFVar9;
  FNumberFormattingOptions *pFVar10;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar11;
  FString *pFVar12;
  uint uVar13;
  uint uVar14;
  FDS_ViewModelContext *pFVar15;
  FDS_ViewModelContext *pFVar16;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FString *local_res20;
  UDS_UserWidget *local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_80;
  TSharedPtr<FDS_ViewModelContext,1> local_70;
  TObjectPtr<UScriptStruct_const_>_u_0 local_60;
  FString *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    pFVar5 = ::operator_new(0x48);
    pFVar15 = (FDS_ViewModelContext *)0x0;
    pFVar16 = pFVar15;
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar5->ViewModelTemplateKey = 0;
      *(undefined2 *)((longlong)&pFVar5[1]._padding_ + 1) = 0;
      *(undefined1 *)((longlong)&pFVar5[1]._padding_ + 3) = 0;
      *(undefined8 *)&pFVar5->DerivedStaticStruct = 0;
      (pFVar5->ViewModelName).ComparisonIndex = 0;
      (pFVar5->ViewModelName).Number = 0;
      pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_PhasingCompleteAlarm__6B_;
      *(undefined1 *)&pFVar5[1]._padding_ = 0;
      *(undefined4 *)((longlong)&pFVar5[1]._padding_ + 4) = 0;
      *(undefined8 *)&pFVar5[1].DerivedStaticStruct = 0;
      pFVar5[1].ViewModelName.ComparisonIndex = 0;
      pFVar5[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar5[1].ViewModelTemplateKey = 0;
      pFVar5[2]._padding_ = 0;
      pFVar16 = pFVar5;
    }
    pFVar5 = ::operator_new(0x20);
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar5->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar5->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar5->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PhasingCompleteAlarm__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar5->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar5->ViewModelTemplateKey = pFVar16;
      pFVar15 = pFVar5;
    }
    if ((pFVar16 == (FDS_ViewModelContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar6 = FDS_ViewModelContext_PhasingCompleteAlarm::StaticStruct();
    *(UScriptStruct **)&pFVar16->DerivedStaticStruct = pUVar6;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar15 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar15->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar15->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_80.Object = pFVar16;
      local_80.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar15;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_80);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_80.SharedReferenceCount.ReferenceController);
    }
    pFVar16->ViewModelTemplateKey = W_Hud_PhasingCompleteAlarm;
    *(undefined1 *)&pFVar16[1]._padding_ = 1;
    *(undefined4 *)((longlong)&pFVar16[1]._padding_ + 4) = 0x41eb1;
    *(undefined8 *)&pFVar16[1].DerivedStaticStruct = 0x1adc2;
    pFVar16[1].ViewModelName.ComparisonIndex = 0x1adba;
    pFVar16[1].ViewModelName.Number = 0;
    UDS_StuffWarpDeviceData::GetData((ulong64)&local_res18);
    bVar4 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar4) {
      pUVar7 = FWeakObjectPtr::Get(&local_res18);
      pFVar8 = FDS_StuffWarpDeviceTableRow::GetRef((longlong)*(int *)&pUVar7[7].field_0x14,true);
      this_02 = FDS_ZoneBaseTableRow::GetRef((longlong)pFVar8->ID_Zone,true);
      pFVar9 = FDS_ZoneBaseTableRow::ID_ZoneNameTable(this_02);
      local_res20 = &pFVar9->Text;
      FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_60.ObjectPtr);
      pFVar10 = FNumberFormattingOptions::DefaultWithGrouping();
      local_50._0_1_ = pFVar10->AlwaysSign;
      local_50._1_1_ = pFVar10->UseGrouping;
      local_50._2_1_ = pFVar10->IndicateNearlyInteger;
      local_50._3_1_ = pFVar10->field_0x3;
      local_50._4_4_ = pFVar10->RoundingMode;
      uStack_48._0_4_ = pFVar10->MinimumIntegralDigits;
      uStack_48._4_4_ = pFVar10->MaximumIntegralDigits;
      local_40._0_4_ = pFVar10->MinimumFractionalDigits;
      local_40._4_4_ = pFVar10->MaximumFractionalDigits;
      TVar11.DebugPtr = FDS_StringFormatArg::StaticStruct();
      pFVar12 = local_58;
      if (TVar11.DebugPtr == local_60.DebugPtr) {
        pFVar2 = (local_58->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
      }
      else {
        FInstancedStruct::Reset((FInstancedStruct *)&local_60.ObjectPtr);
        uVar14 = (uint)*(short *)((longlong)&(TVar11.DebugPtr)->_padding_ + 4);
        uVar13 = (int)(TVar11.DebugPtr)->_padding_ + -1 + uVar14 & -uVar14;
        if ((int)uVar13 < 1) {
          uVar13 = 1;
        }
        pFVar12 = FMemory::Malloc((longlong)(int)uVar13,uVar14);
        local_60.DebugPtr = TVar11.DebugPtr;
        local_58 = pFVar12;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar11.DebugPtr);
        }
      }
      if ((pFVar12 == (FString *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Memory",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                             ,0x74,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = local_58;
      TVar11 = local_60;
      (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar12->Data).ArrayNum = 0;
      (pFVar12->Data).ArrayMax = 0;
      if (((local_58 != (FString *)0x0) && (local_60.DebugPtr != (UScriptStruct *)0x0)) &&
         (pUVar6 = FDS_StringFormatArg::StaticStruct(), pUVar6 != (UScriptStruct *)0x0)) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)(TVar11.DebugPtr)->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)((TVar11.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          ::FString::operator=(this_00,local_res20);
        }
      }
      DestructItems<FDS_TextFormatArg,int>
                (*(FDS_TextFormatArg **)&pFVar16[1].ViewModelTemplateKey,(int)pFVar16[2]._padding_);
      TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_>::CopyToEmpty<FDS_TextFormatArg,int>
                ((TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *)
                 &pFVar16[1].ViewModelTemplateKey,(FDS_TextFormatArg *)&local_60.ObjectPtr,1,
                 *(int *)((longlong)&pFVar16[2]._padding_ + 4));
      FInstancedStruct::Reset((FInstancedStruct *)&local_60.ObjectPtr);
    }
    if (pFVar15 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar15->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar15->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_70.Object = pFVar16;
    local_70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar15;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_88 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_88);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_70,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar15);
  }
  return;
}

// OnPartsSystemComplete @ 14bcb9ea0

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

void __thiscall ADS_StuffWarpDevice::OnPartsSystemComplete(ADS_StuffWarpDevice *this)

{
  bool local_res8 [8];
  
  local_res8[0] = false;
  ADS_Stuff::InitTriggers((ADS_Stuff *)&this[-1]._padding_,local_res8);
  InitWidgets((ADS_StuffWarpDevice *)&this[-1]._padding_);
  FDS_EntityBase::OnPartsSystemComplete((FDS_EntityBase *)this);
  return;
}

// OnWarpStateChanged @ 14bcbcaf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_StuffWarpDevice::OnWarpStateChanged
          (ADS_StuffWarpDevice *this,TWeakObjectPtr<UDS_StuffWarpDeviceData,FWeakObjectPtr> param_1,
          EDS_WarpDeviceState param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_WindowManager *this_00;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar4;
  FWeakObjectPtr local_res20;
  ADS_StuffWarpDevice *local_88 [2];
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  if (param_2 == Active) {
    local_88[0] = (ADS_StuffWarpDevice *)UDS_WindowManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_88[0] != (ADS_StuffWarpDevice *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_88[0]);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_88[0] != (ADS_StuffWarpDevice *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_88[0]);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_88);
    bVar1 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar1) {
      uStack_70 = 0;
      local_78 = OnOpenActivateMessage;
      local_58 = (undefined1  [8])0x0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_50.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      local_28 = &local_50;
      puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_StuffWarpDevice____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (ADS_StuffWarpDevice *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar2[3] = 0;
        local_88[0] = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (ADS_StuffWarpDevice *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)local_88);
        puVar2[4] = local_78;
        puVar2[5] = CONCAT44(uStack_6c,uStack_70);
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      this_00 = (UDS_WindowManager *)FWeakObjectPtr::Get(&local_res20);
      pTVar4 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          &local_78,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          local_58);
      UDS_WindowManager::OpenWindow(this_00,HUDPhasingComplete,pTVar4);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_78);
      if ((local_50.DelegateSize != 0) &&
         (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_50,0,0,0x10);
        local_50.DelegateSize = 0;
      }
      if (local_68 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,uStack_70),
                   (FDestructionSentinel *)&local_78);
      }
      if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_50.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_58);
    }
  }
  return;
}

