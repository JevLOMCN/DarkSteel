// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b4bcb80

UClass * __cdecl UDS_InteractionAbility_ObjectHandling::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_ObjectHandling.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_ObjectHandling",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_ObjectHandling.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_ObjectHandling,0x1b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_ObjectHandling>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_ObjectHandling>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_ObjectHandling.InnerSingleton;
}

// UDS_InteractionAbility_ObjectHandling @ 14b4c1890

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

UDS_InteractionAbility_ObjectHandling * __thiscall
UDS_InteractionAbility_ObjectHandling::UDS_InteractionAbility_ObjectHandling
          (UDS_InteractionAbility_ObjectHandling *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->TargetEntityID = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res8 = 0;
  (this->TargetSpawnLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetSpawnLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetSpawnLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->OverRangeMessageTimer).Handle = 0;
  (this->OverRangeCloseTimer).Handle = 0;
  this->ActionHandlingTable = (FDS_ActionHandlingTableRow *)0x0;
  this->ActivityRange = 0.0;
  (this->OverRangeBlockingBox).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OverRangeBlockingBox).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->NC_RangeEffect).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NC_RangeEffect).WeakPtr,(FObjectPtr)&local_res8);
  (this->AsyncLoadHandle_RangeEffect).Object = (FStreamableHandle *)0x0;
  (this->AsyncLoadHandle_RangeEffect).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UDS_InteractionAbility_ObjectHandling @ 14b4c1950

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

UDS_InteractionAbility_ObjectHandling * __thiscall
UDS_InteractionAbility_ObjectHandling::UDS_InteractionAbility_ObjectHandling
          (UDS_InteractionAbility_ObjectHandling *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->TargetEntityID = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res8 = 0;
  (this->TargetSpawnLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetSpawnLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetSpawnLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->OverRangeMessageTimer).Handle = 0;
  (this->OverRangeCloseTimer).Handle = 0;
  this->ActionHandlingTable = (FDS_ActionHandlingTableRow *)0x0;
  this->ActivityRange = 0.0;
  (this->OverRangeBlockingBox).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OverRangeBlockingBox).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->NC_RangeEffect).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NC_RangeEffect).WeakPtr,(FObjectPtr)&local_res8);
  (this->AsyncLoadHandle_RangeEffect).Object = (FStreamableHandle *)0x0;
  (this->AsyncLoadHandle_RangeEffect).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UDS_InteractionAbility_ObjectHandling @ 14b4c24b0

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
UDS_InteractionAbility_ObjectHandling::~UDS_InteractionAbility_ObjectHandling
          (UDS_InteractionAbility_ObjectHandling *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncLoadHandle_RangeEffect).SharedReferenceCount.ReferenceController);
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4c4de0

UClass * __cdecl UDS_InteractionAbility_ObjectHandling::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_ObjectHandling.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_ObjectHandling",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_ObjectHandling.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_ObjectHandling,0x1b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_ObjectHandling>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_ObjectHandling>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_ObjectHandling.InnerSingleton;
}

// ShouldTickComponent @ 14b4c5500

bool __thiscall
UDS_InteractionAbility_ObjectHandling::ShouldTickComponent
          (UDS_InteractionAbility_ObjectHandling *this)

{
  return true;
}

// StaticRegisterNativesUDS_InteractionAbility_ObjectHandling @ 14b4c56d0

void __cdecl
UDS_InteractionAbility_ObjectHandling::StaticRegisterNativesUDS_InteractionAbility_ObjectHandling
          (void)

{
  return;
}

// CheckActivityRange @ 14b7dbf10

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
UDS_InteractionAbility_ObjectHandling::CheckActivityRange
          (UDS_InteractionAbility_ObjectHandling *this)

{
  EDS_ActivityRangeType EVar1;
  float fVar2;
  bool bVar3;
  FDS_EntityBase *pFVar4;
  UDS_LogManager *pUVar5;
  ADS_BlockingBox *pAVar6;
  bool *pbVar7;
  UDS_MovementCore *pUVar8;
  UObject *pUVar9;
  FTimerManager *pFVar10;
  float fVar11;
  undefined1 auStackY_1f8 [32];
  uint uVar12;
  wchar_t *pwVar13;
  bool local_1b8 [16];
  undefined1 local_1a8 [16];
  FWeakObjectPtr local_198;
  TVector<double> local_190;
  TVector<double> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pFVar4 = FDS_EntityBase::GetEntityBase(&this->TargetEntityID);
  if (pFVar4 == (FDS_EntityBase *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_InteractionAbility_ObjectHandling::CheckActivityRange",0x39,Yes);
    pwVar13 = L"targetEntity is nullptr.";
    uVar12 = 0x8c;
  }
  else {
    UDS_MovementCore::GetMovementCore((ulong64)&local_198);
    bVar3 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_198,(void *)0x0);
    if (bVar3) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_InteractionAbility_ObjectHandling::CheckActivityRange",0x39,Yes);
      pwVar13 = L"targetMovementCore is nullptr.";
      uVar12 = 0x94;
    }
    else if (this->ActionHandlingTable == (FDS_ActionHandlingTableRow *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_InteractionAbility_ObjectHandling::CheckActivityRange",0x39,Yes);
      pwVar13 = L"ActionHandlingTable is nullptr.";
      uVar12 = 0x9b;
    }
    else {
      EVar1 = this->ActionHandlingTable->ActivityRangeType;
      if (EVar1 == TimedRelease) {
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        (**(code **)(*(longlong *)pUVar9 + 0x338))(pUVar9,&local_190);
        bVar3 = DS_Util::IsCloseDist(&local_190,&this->TargetSpawnLocation,&this->ActivityRange);
        fVar2 = __real_bf800000;
        if (bVar3) {
          pFVar10 = FDS_TimerManager::Get((UObject *)0x0);
          FTimerManager::ClearTimer(pFVar10,&this->OverRangeMessageTimer);
          pFVar10 = FDS_TimerManager::Get((UObject *)0x0);
          FTimerManager::ClearTimer(pFVar10,&this->OverRangeCloseTimer);
          return;
        }
        if ((this->OverRangeMessageTimer).Handle == 0) {
          ExecuteOverRangeMessage(this);
          pFVar10 = FDS_TimerManager::Get((UObject *)0x0);
          local_1a8._8_4_ = 0;
          local_1a8._0_8_ = ExecuteOverRangeMessage;
          FTimerManager::SetTimer<UDS_InteractionAbility_ObjectHandling>
                    (pFVar10,&this->OverRangeMessageTimer,this,(pmf_32c3de5c *)local_1a8,
                     __real_40400000,true,fVar2);
        }
        if ((this->OverRangeCloseTimer).Handle != 0) {
          return;
        }
        pFVar10 = FDS_TimerManager::Get((UObject *)0x0);
        fVar11 = DS_CommonDataHelper::HandlingOutOfBoundsDespawnDelay();
        local_1a8._8_4_ = 0;
        local_1a8._0_8_ = ExecuteOverRangeClose;
        FTimerManager::SetTimer<UDS_InteractionAbility_ObjectHandling>
                  (pFVar10,&this->OverRangeCloseTimer,this,(pmf_32c3de5c *)local_1a8,fVar11,false,
                   fVar2);
        return;
      }
      if (EVar1 != Blocked) {
        return;
      }
      bVar3 = TWeakObjectPtr<ADS_BlockingBox,FWeakObjectPtr>::UEOpEquals
                        (&this->OverRangeBlockingBox,(void *)0x0);
      if (!bVar3) {
        pAVar6 = (ADS_BlockingBox *)FWeakObjectPtr::Get(&(this->OverRangeBlockingBox).WeakPtr);
        pbVar7 = ADS_BlockingBox::GetIsActivated(pAVar6);
        if (*pbVar7 != false) {
          return;
        }
        local_1a8 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
        pUVar8 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        UDS_MovementCore::GetActorLocation(pUVar8,&local_178);
        pUVar8 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_198);
        UDS_MovementCore::GetActorLocation(pUVar8,&local_190);
        local_1a8._8_8_ =
             local_190.field0_0x0._s_0.Z - (this->TargetSpawnLocation).field0_0x0._s_0.Z;
        pAVar6 = (ADS_BlockingBox *)FWeakObjectPtr::Get(&(this->OverRangeBlockingBox).WeakPtr);
        ADS_BlockingBox::InitBlockingBox
                  (pAVar6,&this->TargetSpawnLocation,&this->ActivityRange,
                   (TVector2<double> *)local_1a8);
        pAVar6 = (ADS_BlockingBox *)FWeakObjectPtr::Get(&(this->OverRangeBlockingBox).WeakPtr);
        local_1b8[0] = true;
        ADS_BlockingBox::SetIsActivated(pAVar6,local_1b8);
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_InteractionAbility_ObjectHandling::CheckActivityRange",0x39,Yes);
      pwVar13 = L"OverRangeBlockingBox is nullptr.";
      uVar12 = 0xc2;
    }
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,uVar12,pwVar13);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return;
}

// ClearRangeEffect @ 14b7dc660

void __thiscall
UDS_InteractionAbility_ObjectHandling::ClearRangeEffect(UDS_InteractionAbility_ObjectHandling *this)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->AsyncLoadHandle_RangeEffect;
  if (pTVar1->Object != (FStreamableHandle *)0x0) {
    FStreamableHandle::CancelHandle(pTVar1->Object);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FStreamableHandle,1> *)&local_18) {
      pTVar1->Object = (FStreamableHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AsyncLoadHandle_RangeEffect).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  bVar2 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->NC_RangeEffect,(void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->NC_RangeEffect).WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x4a0))(pUVar3,0);
    (this->NC_RangeEffect).WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// ExecuteOverRangeClose @ 14b7ea7a0

void __thiscall
UDS_InteractionAbility_ObjectHandling::ExecuteOverRangeClose
          (UDS_InteractionAbility_ObjectHandling *this)

{
  return;
}

// ExecuteOverRangeMessage @ 14b7ea7b0

void __thiscall
UDS_InteractionAbility_ObjectHandling::ExecuteOverRangeMessage
          (UDS_InteractionAbility_ObjectHandling *this)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x61a82,Alert_None_01,&local_28);
  return;
}

// InitObjectHandlingVariables @ 14b7f1cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_ObjectHandling::InitObjectHandlingVariables
          (UDS_InteractionAbility_ObjectHandling *this)

{
  FDS_ActionHandlingTableRow *pFVar1;
  float fVar2;
  UDS_LogManager *pUVar3;
  float fVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  fVar2 = __real_43480000;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar1 = this->ActionHandlingTable;
  if (pFVar1 == (FDS_ActionHandlingTableRow *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_ObjectHandling::InitObjectHandlingVariables",
                 0x42,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x75,L"ActionHandlingTable is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    fVar4 = (float)pFVar1->ActivityRange;
    this->ActivityRange = fVar4;
    if (pFVar1->ActivityRangeType == Blocked) {
      fVar4 = fVar4 - fVar2;
      this->ActivityRange = fVar4;
    }
    if (fVar4 < fVar2) {
      this->ActivityRange = 200.0;
    }
  }
  return;
}

// OnDeactivateAbility @ 14b7fc610

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
UDS_InteractionAbility_ObjectHandling::OnDeactivateAbility
          (UDS_InteractionAbility_ObjectHandling *this,bool *param_1)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  bool bVar2;
  FTimerManager *pFVar3;
  FTimerData *pFVar4;
  AActor *this_00;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  
  if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
    pFVar3 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar4 = FTimerManager::FindTimer(pFVar3,&this->OverRangeMessageTimer);
    if (pFVar4 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar3,(FTimerHandle)(this->OverRangeMessageTimer).Handle);
    }
    (this->OverRangeMessageTimer).Handle = 0;
    pFVar3 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar4 = FTimerManager::FindTimer(pFVar3,&this->OverRangeCloseTimer);
    if (pFVar4 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar3,(FTimerHandle)(this->OverRangeCloseTimer).Handle);
    }
    (this->OverRangeCloseTimer).Handle = 0;
    bVar2 = TWeakObjectPtr<ADS_BlockingBox,FWeakObjectPtr>::UEOpEquals
                      (&this->OverRangeBlockingBox,(void *)0x0);
    if (!bVar2) {
      this_00 = (AActor *)FWeakObjectPtr::Get(&(this->OverRangeBlockingBox).WeakPtr);
      AActor::Destroy(this_00,false,true);
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res18[0] = 0;
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
      (this->OverRangeBlockingBox).WeakPtr = local_res8;
    }
    pTVar1 = &this->AsyncLoadHandle_RangeEffect;
    if (pTVar1->Object != (FStreamableHandle *)0x0) {
      FStreamableHandle::CancelHandle(pTVar1->Object);
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar1 != (TSharedPtr<FStreamableHandle,1> *)&local_28) {
        pTVar1->Object = (FStreamableHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->AsyncLoadHandle_RangeEffect).SharedReferenceCount,&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
    }
    bVar2 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                      (&this->NC_RangeEffect,(void *)0x0);
    if (!bVar2) {
      pUVar5 = FWeakObjectPtr::Get(&(this->NC_RangeEffect).WeakPtr);
      (**(code **)(*(longlong *)pUVar5 + 0x4a0))(pUVar5,0);
      (this->NC_RangeEffect).WeakPtr = (FWeakObjectPtr)0x0;
    }
  }
  return;
}

// OnPostActivateAbility @ 14b804bb0

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
UDS_InteractionAbility_ObjectHandling::OnPostActivateAbility
          (UDS_InteractionAbility_ObjectHandling *this)

{
  int iVar1;
  bool bVar2;
  UWorld *this_00;
  UClass *pUVar3;
  AActor *pAVar4;
  UDS_LogManager *pUVar5;
  ADS_BlockingBox *this_01;
  longlong *plVar6;
  undefined1 auStackY_1e8 [32];
  uint uVar7;
  wchar_t *pwVar8;
  bool local_1b8 [8];
  AActor *local_1b0;
  undefined1 local_1a8 [112];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  (**(code **)(this->_padding_ + 0x3d8))();
  if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
    return;
  }
  bVar2 = TWeakObjectPtr<ADS_BlockingBox,FWeakObjectPtr>::UEOpEquals
                    (&this->OverRangeBlockingBox,(void *)0x0);
  if (!bVar2) goto LAB_14b804ced;
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  pUVar3 = Z_Construct_UClass_ADS_BlockingBox_NoRegister();
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_1a8);
  local_1a8[0x32] = local_1a8[0x32] | 4;
  local_1a8._16_8_ = (AActor *)0x0;
  local_1a8._24_8_ = (APawn *)0x0;
  local_1a8[0x30] = AlwaysSpawn;
  local_1a8[0x31] = MultiplyWithRoot;
  if ((pUVar3 == (UClass *)0x0) ||
     (pAVar4 = UWorld::SpawnActor(this_00,pUVar3,&UE::Math::TTransform<double>::Identity,
                                  (FActorSpawnParameters *)local_1a8), pAVar4 == (AActor *)0x0)) {
LAB_14b804c8f:
    pAVar4 = (AActor *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_ADS_BlockingBox_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pAVar4->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) goto LAB_14b804c8f;
  }
  if (local_1a8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1a8 + 0x50);
    if ((longlong *)local_1a8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1a8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  local_1b0 = pAVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar4 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar4);
  }
  FWeakObjectPtr::operator=(&(this->OverRangeBlockingBox).WeakPtr,(FObjectPtr)&local_1b0);
LAB_14b804ced:
  bVar2 = TWeakObjectPtr<ADS_BlockingBox,FWeakObjectPtr>::UEOpEquals
                    (&this->OverRangeBlockingBox,(void *)0x0);
  if (bVar2) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_ObjectHandling::OnPostActivateAbility",0x3c,Yes);
    pwVar8 = L"OverRangeBlockingBox is nullptr.";
    uVar7 = 0x3a;
  }
  else {
    this_01 = (ADS_BlockingBox *)FWeakObjectPtr::Get(&(this->OverRangeBlockingBox).WeakPtr);
    local_1b8[0] = false;
    ADS_BlockingBox::SetIsActivated(this_01,local_1b8);
    pAVar4 = (AActor *)FWeakObjectPtr::Get(&(this->OverRangeBlockingBox).WeakPtr);
    UGameplayStatics::FinishSpawningActor
              (pAVar4,&UE::Math::TTransform<double>::Identity,MultiplyWithRoot);
    bVar2 = SpawnRangeEffect(this);
    if (bVar2) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_ObjectHandling::OnPostActivateAbility",0x3c,Yes);
    pwVar8 = L"Failed to SpawnRangeEffect().";
    uVar7 = 0x44;
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,uVar7,pwVar8);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnRangeEffectSpawnComplete @ 14b808540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_ObjectHandling::OnRangeEffectSpawnComplete
          (UDS_InteractionAbility_ObjectHandling *this,FDS_EffectSpawnCompleteInfo param_1)

{
  double dVar1;
  UDS_LogManager *pUVar2;
  USceneComponent *this_00;
  UNiagaraComponent *this_01;
  FName *pFVar3;
  undefined1 auStackY_1a8 [32];
  FName local_178 [2];
  TVector<double>_u_0 local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (param_1.NiagaraComponent == (UNiagaraComponent *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_InteractionAbility_ObjectHandling::OnRangeEffectSpawnComplete",0x41
                 ,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,0xfe,L"InSpawnInfo.NiagaraComponent is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    local_178[0] = (FName)param_1.NiagaraComponent;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1.NiagaraComponent);
    }
    FWeakObjectPtr::operator=(&(this->NC_RangeEffect).WeakPtr,(FObjectPtr)local_178);
    this_00 = (USceneComponent *)FWeakObjectPtr::Get(&(this->NC_RangeEffect).WeakPtr);
    local_168._s_0.X = (this->TargetSpawnLocation).field0_0x0._s_0.X;
    local_168._8_16_ = *(undefined1 (*) [16])((longlong)&(this->TargetSpawnLocation).field0_0x0 + 8)
    ;
    USceneComponent::SetWorldLocation
              (this_00,(TVector<double> *)&local_168._s_0,false,(FHitResult *)0x0,None);
    dVar1 = (double)(this->ActivityRange * __real_40800000);
    this_01 = (UNiagaraComponent *)FWeakObjectPtr::Get(&(this->NC_RangeEffect).WeakPtr);
    pFVar3 = ::FName::FName(local_178,L"User_DecalSize");
    local_168._s_0.X = __real_408f400000000000;
    local_168._16_4_ = SUB84(dVar1,0);
    local_168._8_8_ = dVar1;
    local_168._20_4_ = (int)((ulonglong)dVar1 >> 0x20);
    UNiagaraComponent::SetVariableVec3(this_01,*pFVar3,(TVector<double> *)&local_168._s_0);
  }
  return;
}

// OnTickComponent @ 14b80b250

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
UDS_InteractionAbility_ObjectHandling::OnTickComponent
          (UDS_InteractionAbility_ObjectHandling *this,float param_1)

{
  char cVar1;
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  if ((*(char *)((longlong)&this->_padding_ + 1) == '\x01') && ((char)this->_padding_ == '\0')) {
    cVar1 = (**(code **)(this->_padding_ + 0x3c8))(this);
    if (cVar1 == '\0') {
      CheckActivityRange(this);
      return;
    }
  }
  return;
}

// SpawnRangeEffect @ 14b811f90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UDS_InteractionAbility_ObjectHandling::SpawnRangeEffect(UDS_InteractionAbility_ObjectHandling *this)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  undefined1 local_158 [16];
  int local_148;
  code *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  bool local_128;
  FDestructionSentinel local_118;
  undefined1 *local_100;
  undefined1 local_f8 [200];
  ForAnyElementType local_30;
  int local_28;
  
  FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_f8);
  local_f8._40_8_ = this->_padding_;
  local_f8._0_4_ = 0xe67a;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  local_f8._52_4_ = local_res8.ObjectIndex;
  local_f8._56_4_ = local_res8.ObjectSerialNumber;
  uStack_130 = 0;
  local_138 = OnRangeEffectSpawnComplete;
  local_158._0_8_ = (atomic<unsigned___int64>)0x0;
  local_158._8_8_ = (FScriptContainerElement *)0x0;
  local_148 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,
             (FWriteAccessScope *)&local_118);
  local_100 = local_158 + 8;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)(local_158 + 8));
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_ObjectHandling____A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[3] = 0;
    local_res8 = (FWeakObjectPtr)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = local_138;
    puVar4[5] = CONCAT44(uStack_12c,uStack_130);
  }
  if (local_118.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,
             (FWriteAccessScope *)&local_138);
  iVar3 = local_148;
  uVar2 = local_158._8_8_;
  local_158._8_8_ = (atomic<unsigned___int64> *)0x0;
  local_148 = 0;
  if (local_128 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_12c,uStack_130),
               (FDestructionSentinel *)&local_138);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_f8 + 0xc0),
             (FWriteAccessScope *)&local_138);
  if (local_28 != 0) {
    if (local_30.Data == (FScriptContainerElement *)0x0) goto LAB_14b81214a;
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
LAB_14b81214a:
  local_30.Data = (FScriptContainerElement *)uVar2;
  local_28 = iVar3;
  if (local_128 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_12c,uStack_130),
               (FDestructionSentinel *)&local_138);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,
             (FWriteAccessScope *)&local_138);
  if ((local_148 != 0) &&
     ((FMRSWRecursiveAccessDetector *)local_158._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
    (**(code **)*(atomic<unsigned___int64> *)local_158._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(local_158 + 8),0,0,0x10);
    local_148 = 0;
  }
  if (local_128 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_12c,uStack_130),
               (FDestructionSentinel *)&local_138);
  }
  if ((FMRSWRecursiveAccessDetector *)local_158._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
    FMemory::Free((void *)local_158._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_158);
  UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_f8);
  if ((TReferenceControllerBase<1> *)local_f8._184_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(local_f8._184_8_ + 8) =
         (atomic<int>)((int)*(atomic<int> *)(local_f8._184_8_ + 8) + 1);
    UNLOCK();
  }
  pTVar1 = (this->AsyncLoadHandle_RangeEffect).SharedReferenceCount.ReferenceController;
  (this->AsyncLoadHandle_RangeEffect).Object = (FStreamableHandle *)local_f8._176_8_;
  (this->AsyncLoadHandle_RangeEffect).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_f8._184_8_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_f8 + 0xc0),
             (FWriteAccessScope *)local_158);
  if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_148._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_158._8_8_,(FDestructionSentinel *)local_158);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_f8 + 0xc0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_f8._184_8_);
  if ((FScriptContainerElement *)local_f8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._24_8_);
  }
  return true;
}

