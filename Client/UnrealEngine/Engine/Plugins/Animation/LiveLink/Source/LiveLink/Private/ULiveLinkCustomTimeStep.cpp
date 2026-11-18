// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 27

// StaticClass @ 14cff3a80

UClass * __cdecl ULiveLinkCustomTimeStep::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkCustomTimeStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkCustomTimeStep",
               &Z_Registration_Info_UClass_ULiveLinkCustomTimeStep.InnerSingleton,
               StaticRegisterNativesULiveLinkCustomTimeStep,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkCustomTimeStep>,
               InternalVTableHelperCtorCaller<ULiveLinkCustomTimeStep>,local_res8,
               UGenlockedCustomTimeStep::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkCustomTimeStep.InnerSingleton;
}

// ULiveLinkCustomTimeStep @ 14d0137f0

ULiveLinkCustomTimeStep * __thiscall
ULiveLinkCustomTimeStep::ULiveLinkCustomTimeStep
          (ULiveLinkCustomTimeStep *this,FVTableHelper *param_1)

{
  UGenlockedCustomTimeStep::UGenlockedCustomTimeStep((UGenlockedCustomTimeStep *)this,param_1);
  this->bLockStepMode = true;
  this->FrameRateDivider = 1;
  this->_padding_ = (longlong)&___7ULiveLinkCustomTimeStep__6B_;
  (this->LiveLinkDataRate).Numerator = 0x3c;
  *(undefined8 *)&(this->LiveLinkDataRate).Denominator = 1;
  (this->SubjectKey).Source.B = 0;
  (this->SubjectKey).Source.C = 0;
  *(undefined8 *)&(this->SubjectKey).Source.D = 0;
  (this->SubjectKey).SubjectName.Name.Number = 0;
  (this->RegisteredSubjectKey).Source.A = 0;
  (this->RegisteredSubjectKey).Source.B = 0;
  (this->RegisteredSubjectKey).Source.C = 0;
  (this->RegisteredSubjectKey).Source.D = 0;
  (this->RegisteredSubjectKey).SubjectName.Name = (FName)0x0;
  (this->RegisterForFrameDataReceivedHandle).ID = 0;
  this->State = (atomic<ECustomTimeStepSynchronizationState>)0x0;
  this->TimeoutInSeconds = 1.0;
  FEventRef::FEventRef(&this->EventLiveLink,AutoReset);
  FEventRef::FEventRef(&this->EventWaitForSync,AutoReset);
  this->LastFrameId = (atomic<int>)0x0;
  this->SyncCount = (atomic<unsigned_int>)0x0;
  this->LastSyncCountDelta = 0;
  this->bLockStepModeAnyThread = (atomic<bool>)0x1;
  this->FrameRateDividerAnyThread = (atomic<unsigned_int>)0x1;
  this->TimeoutInSecondsAnyThread = (atomic<double>)0x3ff0000000000000;
  return this;
}

// ULiveLinkCustomTimeStep @ 14d0138c0

ULiveLinkCustomTimeStep * __thiscall
ULiveLinkCustomTimeStep::ULiveLinkCustomTimeStep
          (ULiveLinkCustomTimeStep *this,FObjectInitializer *param_1)

{
  UGenlockedCustomTimeStep::UGenlockedCustomTimeStep((UGenlockedCustomTimeStep *)this,param_1);
  this->bLockStepMode = true;
  this->FrameRateDivider = 1;
  this->_padding_ = (longlong)&___7ULiveLinkCustomTimeStep__6B_;
  (this->LiveLinkDataRate).Numerator = 0x3c;
  *(undefined8 *)&(this->LiveLinkDataRate).Denominator = 1;
  (this->SubjectKey).Source.B = 0;
  (this->SubjectKey).Source.C = 0;
  *(undefined8 *)&(this->SubjectKey).Source.D = 0;
  (this->SubjectKey).SubjectName.Name.Number = 0;
  (this->RegisteredSubjectKey).Source.A = 0;
  (this->RegisteredSubjectKey).Source.B = 0;
  (this->RegisteredSubjectKey).Source.C = 0;
  (this->RegisteredSubjectKey).Source.D = 0;
  (this->RegisteredSubjectKey).SubjectName.Name = (FName)0x0;
  (this->RegisterForFrameDataReceivedHandle).ID = 0;
  this->State = (atomic<ECustomTimeStepSynchronizationState>)0x0;
  this->TimeoutInSeconds = 1.0;
  FEventRef::FEventRef(&this->EventLiveLink,AutoReset);
  FEventRef::FEventRef(&this->EventWaitForSync,AutoReset);
  this->LastFrameId = (atomic<int>)0x0;
  this->SyncCount = (atomic<unsigned_int>)0x0;
  this->LastSyncCountDelta = 0;
  this->bLockStepModeAnyThread = (atomic<bool>)0x1;
  this->FrameRateDividerAnyThread = (atomic<unsigned_int>)0x1;
  this->TimeoutInSecondsAnyThread = (atomic<double>)0x3ff0000000000000;
  return this;
}

// ~ULiveLinkCustomTimeStep @ 14d017010

void __thiscall ULiveLinkCustomTimeStep::~ULiveLinkCustomTimeStep(ULiveLinkCustomTimeStep *this)

{
  this->_padding_ = (longlong)&___7ULiveLinkCustomTimeStep__6B_;
  FEventRef::~FEventRef(&this->EventWaitForSync);
  FEventRef::~FEventRef(&this->EventLiveLink);
  UGenlockedCustomTimeStep::~UGenlockedCustomTimeStep((UGenlockedCustomTimeStep *)this);
  return;
}

// BeginDestroy @ 14d023e60

void __thiscall ULiveLinkCustomTimeStep::BeginDestroy(ULiveLinkCustomTimeStep *this)

{
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar1;
  
  if (this->LiveLinkClient != (ILiveLinkClient *)0x0) {
    UnregisterLiveLinkSubject(this);
    pTVar1 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             (**(code **)((longlong)*this->LiveLinkClient + 0x1f8))();
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar1,this);
    pTVar1 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             (**(code **)((longlong)*this->LiveLinkClient + 0x200))();
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar1,this);
    this->LiveLinkClient = (ILiveLinkClient *)0x0;
    LOCK();
    this->State = (atomic<ECustomTimeStepSynchronizationState>)0x0;
    UNLOCK();
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// GetDisplayName @ 14d04b550

FString * __thiscall
ULiveLinkCustomTimeStep::GetDisplayName
          (ULiveLinkCustomTimeStep *this,FString *__return_storage_ptr__)

{
  FLiveLinkSubjectName *this_00;
  bool bVar1;
  bool bVar2;
  FFrameRate *this_01;
  int iVar3;
  ForAnyElementType FVar4;
  FName local_res8;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FString local_58;
  FString local_48;
  FText local_38;
  
  local_res8 = (FName)this->_padding_;
  ::FName::GetPlainNameString(&local_res8,&local_48);
  this_01 = (FFrameRate *)(**(code **)(this->_padding_ + 0x2d8))(this,&local_res8);
  FFrameRate::ToPrettyText(this_01,&local_38);
  FVar4 = LiveLinkCustomTimeStepUtils::NoSubjectSelected.Data.AllocatorInstance;
  this_00 = &(this->SubjectKey).SubjectName;
  if (this_00->Name == (FName)0x0) {
    local_78.Data = (FScriptContainerElement *)0x0;
    iVar3 = LiveLinkCustomTimeStepUtils::NoSubjectSelected.Data.ArrayNum;
    local_70 = iVar3;
    if (iVar3 == 0) {
      local_6c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,0,&local_78,iVar3,&local_6c);
      memcpy(local_78.Data,FVar4.Data,(longlong)iVar3 * 2);
    }
    bVar2 = false;
    bVar1 = true;
    FVar4.Data = local_78.Data;
    local_58.Data.ArrayNum = local_70;
  }
  else {
    ::FName::ToString(&this_00->Name,&local_58);
    bVar2 = true;
    bVar1 = false;
    FVar4.Data = local_58.Data.AllocatorInstance.Data;
  }
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = local_58.Data.ArrayNum;
  if (local_58.Data.ArrayNum == 0) {
    local_5c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,&local_68,local_58.Data.ArrayNum,&local_5c);
    memcpy(local_68.Data,FVar4.Data,(longlong)local_58.Data.ArrayNum * 2);
  }
  if ((bVar1) && (local_78.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data);
  }
  if ((bVar2) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FText::ToString(&local_38);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s %s - %s (%d)");
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetExpectedSyncCountDelta @ 14d04b930

uint __thiscall ULiveLinkCustomTimeStep::GetExpectedSyncCountDelta(ULiveLinkCustomTimeStep *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined1 auStackX_8 [8];
  undefined1 auStackX_10 [8];
  
  puVar2 = (undefined8 *)(**(code **)(this->_padding_ + 0x2d8))(this,auStackX_8);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)(**(code **)(this->_padding_ + 0x2e8))(this,auStackX_10);
  dVar3 = (double)((int)((ulonglong)uVar1 >> 0x20) * (int)*puVar2);
  return (int)ROUND((dVar3 + dVar3) / (double)((int)((ulonglong)*puVar2 >> 0x20) * (int)uVar1) +
                    __real_3fe0000000000000) >> 1;
}

// GetFixedFrameRate @ 14d04b940

FFrameRate __thiscall ULiveLinkCustomTimeStep::GetFixedFrameRate(ULiveLinkCustomTimeStep *this)

{
  uint uVar1;
  FFrameRate FVar2;
  FFrameRate in_RDX;
  
  FVar2 = this->LiveLinkDataRate;
  uVar1 = this->FrameRateDivider;
  *(FFrameRate *)in_RDX = FVar2;
  if (1 < uVar1) {
    *(uint *)((longlong)in_RDX + 4) = FVar2.Denominator * uVar1;
  }
  return in_RDX;
}

// GetLastSyncCountDelta @ 14d04e2c0

uint __thiscall ULiveLinkCustomTimeStep::GetLastSyncCountDelta(ULiveLinkCustomTimeStep *this)

{
  return this->LastSyncCountDelta;
}

// GetPrivateStaticClass @ 14d052370

UClass * __cdecl ULiveLinkCustomTimeStep::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkCustomTimeStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkCustomTimeStep",
               &Z_Registration_Info_UClass_ULiveLinkCustomTimeStep.InnerSingleton,
               StaticRegisterNativesULiveLinkCustomTimeStep,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkCustomTimeStep>,
               InternalVTableHelperCtorCaller<ULiveLinkCustomTimeStep>,local_res8,
               UGenlockedCustomTimeStep::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkCustomTimeStep.InnerSingleton;
}

// GetSyncRate @ 14d057190

FFrameRate __thiscall ULiveLinkCustomTimeStep::GetSyncRate(ULiveLinkCustomTimeStep *this)

{
  FFrameRate in_RDX;
  
  *(FFrameRate *)in_RDX = this->LiveLinkDataRate;
  return in_RDX;
}

// GetSynchronizationState @ 14d0571b0

ECustomTimeStepSynchronizationState __thiscall
ULiveLinkCustomTimeStep::GetSynchronizationState(ULiveLinkCustomTimeStep *this)

{
  return (ECustomTimeStepSynchronizationState)this->State;
}

// InitLiveLinkClient @ 14d05ad70

void __thiscall ULiveLinkCustomTimeStep::InitLiveLinkClient(ULiveLinkCustomTimeStep *this)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
  *pTVar4;
  ILiveLinkClient *pIVar5;
  
  pIVar2 = IModularFeatures::Get();
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar1) {
    pIVar2 = IModularFeatures::Get();
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,ILiveLinkClient::ModularFeatureName,0);
    pIVar5 = (ILiveLinkClient *)(lVar3 + -8);
    if (lVar3 == 0) {
      pIVar5 = (ILiveLinkClient *)0x0;
    }
    this->LiveLinkClient = pIVar5;
    pTVar4 = (TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
              *)(**(code **)((longlong)*pIVar5 + 0x1f8))();
    TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>::
    AddUObject<ULiveLinkCustomTimeStep>
              (pTVar4,(ULiveLinkCustomTimeStep *)&stack0x00000010,(pmf_89d7b50e)this);
    pTVar4 = (TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
              *)(**(code **)((longlong)*this->LiveLinkClient + 0x200))();
    TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>::
    AddUObject<ULiveLinkCustomTimeStep>
              (pTVar4,(ULiveLinkCustomTimeStep *)&stack0x00000010,(pmf_89d7b50e)this);
    lVar3 = (**(code **)((longlong)*this->LiveLinkClient + 0x170))
                      (this->LiveLinkClient,&this->SubjectKey);
    if ((lVar3 != 0) && ((this->SubjectKey).SubjectName.Name == (this->SubjectKey).SubjectName.Name)
       ) {
      RegisterLiveLinkSubject(this);
    }
  }
  return;
}

// Initialize @ 14d05b910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall ULiveLinkCustomTimeStep::Initialize(ULiveLinkCustomTimeStep *this,UEngine *param_1)

{
  IModularFeatures *pIVar1;
  TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
  *pTVar2;
  
  LOCK();
  this->State = (atomic<ECustomTimeStepSynchronizationState>)0x3;
  UNLOCK();
  (**(code **)(((this->EventLiveLink).Event)->_padding_ + 0x18))();
  pIVar1 = IModularFeatures::Get();
  pTVar2 = (TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
            *)(**(code **)((longlong)*pIVar1 + 0x38))(pIVar1);
  TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
  ::AddUObject<ULiveLinkCustomTimeStep>
            (pTVar2,(ULiveLinkCustomTimeStep *)&stack0x00000008,(pmf_bdbd9f6e)this);
  pTVar2 = (TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
            *)(**(code **)((longlong)*pIVar1 + 0x40))(pIVar1);
  TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
  ::AddUObject<ULiveLinkCustomTimeStep>
            (pTVar2,(ULiveLinkCustomTimeStep *)&stack0x00000008,(pmf_bdbd9f6e)this);
  InitLiveLinkClient(this);
  return true;
}

// IsLastSyncDataValid @ 14d05f810

bool __thiscall ULiveLinkCustomTimeStep::IsLastSyncDataValid(ULiveLinkCustomTimeStep *this)

{
  return true;
}

// OnLiveLinkClientRegistered @ 14d0660c0

void __thiscall
ULiveLinkCustomTimeStep::OnLiveLinkClientRegistered
          (ULiveLinkCustomTimeStep *this,FName *param_1,IModularFeature *param_2)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
  *pTVar4;
  ILiveLinkClient *pIVar5;
  
  if ((*param_1 == ILiveLinkClient::ModularFeatureName) &&
     (this->LiveLinkClient == (ILiveLinkClient *)0x0)) {
    pIVar2 = IModularFeatures::Get();
    iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,ILiveLinkClient::ModularFeatureName);
    if (0 < iVar1) {
      pIVar2 = IModularFeatures::Get();
      lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,ILiveLinkClient::ModularFeatureName,0);
      pIVar5 = (ILiveLinkClient *)(lVar3 + -8);
      if (lVar3 == 0) {
        pIVar5 = (ILiveLinkClient *)0x0;
      }
      this->LiveLinkClient = pIVar5;
      pTVar4 = (TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
                *)(**(code **)((longlong)*pIVar5 + 0x1f8))();
      TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
      ::AddUObject<ULiveLinkCustomTimeStep>
                (pTVar4,(ULiveLinkCustomTimeStep *)&stack0x00000010,(pmf_89d7b50e)this);
      pTVar4 = (TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
                *)(**(code **)((longlong)*this->LiveLinkClient + 0x200))();
      TMulticastDelegateRegistration<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
      ::AddUObject<ULiveLinkCustomTimeStep>
                (pTVar4,(ULiveLinkCustomTimeStep *)&stack0x00000010,(pmf_89d7b50e)this);
      lVar3 = (**(code **)((longlong)*this->LiveLinkClient + 0x170))
                        (this->LiveLinkClient,&this->SubjectKey);
      if ((lVar3 != 0) &&
         ((this->SubjectKey).SubjectName.Name == (this->SubjectKey).SubjectName.Name)) {
        RegisterLiveLinkSubject(this);
      }
    }
    return;
  }
  return;
}

// OnLiveLinkClientUnregistered @ 14d066100

void __thiscall
ULiveLinkCustomTimeStep::OnLiveLinkClientUnregistered
          (ULiveLinkCustomTimeStep *this,FName *param_1,IModularFeature *param_2)

{
  ILiveLinkClient *pIVar1;
  
  if (*param_1 == ILiveLinkClient::ModularFeatureName) {
    pIVar1 = this->LiveLinkClient + 1;
    if (this->LiveLinkClient == (ILiveLinkClient *)0x0) {
      pIVar1 = (ILiveLinkClient *)0x0;
    }
    if ((ILiveLinkClient *)param_2 == pIVar1) {
      UninitLiveLinkClient(this);
      InitLiveLinkClient(this);
      return;
    }
  }
  return;
}

// OnLiveLinkFrameDataReceived_AnyThread @ 14d0661a0

void __thiscall
ULiveLinkCustomTimeStep::OnLiveLinkFrameDataReceived_AnyThread
          (ULiveLinkCustomTimeStep *this,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FEvent *pFVar3;
  bool bVar4;
  longlong lVar5;
  bool bVar6;
  FTimespan local_res8;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId275,
               "ULiveLinkCustomTimeStep::OnLiveLinkFrameDataReceived_AnyThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkCustomTimeStep.cpp"
               ,0x113);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId275);
  }
  lVar5 = (**(code **)((param_1->WrappedStruct)._padding_ + 0x10))(param_1);
  aVar2 = *(atomic<int> *)(lVar5 + 0x98);
  if (this->State != (atomic<ECustomTimeStepSynchronizationState>)0x2) {
    LOCK();
    this->State = (atomic<ECustomTimeStepSynchronizationState>)0x2;
    UNLOCK();
    LOCK();
    this->LastFrameId = (atomic<int>)((int)aVar2 + -1);
    UNLOCK();
  }
  if ((int)this->LastFrameId < (int)aVar2) {
    LOCK();
    this->SyncCount =
         (atomic<unsigned_int>)((int)this->SyncCount + ((int)aVar2 - (int)this->LastFrameId));
    UNLOCK();
  }
  else {
    LOCK();
    this->SyncCount = (atomic<unsigned_int>)((int)this->SyncCount + 1);
    UNLOCK();
  }
  LOCK();
  aVar1 = this->LastFrameId;
  this->LastFrameId = aVar2;
  UNLOCK();
  if ((((uint)this->FrameRateDividerAnyThread <= (uint)this->SyncCount) &&
      (pFVar3 = (this->EventLiveLink).Event, (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,aVar1),
      this->bLockStepModeAnyThread != (atomic<bool>)0x0)) && (bVar4 = IsInGameThread(), !bVar4)) {
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId319,"ULiveLinkCustomTimeStep::EventWaitForSync->Wait",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkCustomTimeStep.cpp"
                 ,0x13f);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId319);
    }
    local_res8.Ticks =
         (long64)((double)this->TimeoutInSecondsAnyThread * __real_3fe0000000000000 *
                 __real_416312d000000000);
    FEvent::Wait((this->EventWaitForSync).Event,&local_res8,false);
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnLiveLinkSubjectAdded @ 14d066650

void __thiscall
ULiveLinkCustomTimeStep::OnLiveLinkSubjectAdded
          (ULiveLinkCustomTimeStep *this,FLiveLinkSubjectKey *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_1->SubjectName).Name == (this->SubjectKey).SubjectName.Name) {
    uVar2 = (param_1->Source).B;
    uVar3 = (param_1->Source).C;
    uVar4 = (param_1->Source).D;
    FVar1 = (param_1->SubjectName).Name;
    (this->SubjectKey).Source.A = (param_1->Source).A;
    (this->SubjectKey).Source.B = uVar2;
    (this->SubjectKey).Source.C = uVar3;
    (this->SubjectKey).Source.D = uVar4;
    (this->SubjectKey).SubjectName.Name = FVar1;
    RegisterLiveLinkSubject(this);
    return;
  }
  return;
}

// OnLiveLinkSubjectRemoved @ 14d0666f0

void __thiscall
ULiveLinkCustomTimeStep::OnLiveLinkSubjectRemoved
          (ULiveLinkCustomTimeStep *this,FLiveLinkSubjectKey *param_1)

{
  if ((param_1->SubjectName).Name == (this->RegisteredSubjectKey).SubjectName.Name) {
    LOCK();
    this->State = (atomic<ECustomTimeStepSynchronizationState>)0x1;
    UNLOCK();
    UnregisterLiveLinkSubject(this);
    return;
  }
  return;
}

// RegisterLiveLinkSubject @ 14d075820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall ULiveLinkCustomTimeStep::RegisterLiveLinkSubject(ULiveLinkCustomTimeStep *this)

{
  FName FVar1;
  ILiveLinkClient *pIVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  FDelegateHandle *local_c0;
  ULiveLinkCustomTimeStep *local_b8;
  undefined8 local_b0;
  _RTL_CRITICAL_SECTION local_a8;
  ForAnyElementType FStack_80;
  ulonglong local_78;
  _RTL_CRITICAL_SECTION local_70;
  FDelegateAllocation local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  uVar4 = (this->SubjectKey).Source.B;
  uVar5 = (this->SubjectKey).Source.C;
  uVar6 = (this->SubjectKey).Source.D;
  FVar1 = (this->SubjectKey).SubjectName.Name;
  (this->RegisteredSubjectKey).Source.A = (this->SubjectKey).Source.A;
  (this->RegisteredSubjectKey).Source.B = uVar4;
  (this->RegisteredSubjectKey).Source.C = uVar5;
  (this->RegisteredSubjectKey).Source.D = uVar6;
  (this->RegisteredSubjectKey).SubjectName.Name = FVar1;
  pIVar2 = this->LiveLinkClient;
  local_b0 = 0;
  pcVar3 = *(code **)((longlong)*pIVar2 + 0x218);
  InitializeCriticalSectionAndSpinCount(&local_70,4000);
  local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48.DelegateSize = 0;
  EnterCriticalSection(&local_70);
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_48);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__FLiveLinkBaseDataStruct_UFLiveLinkBaseFrameData_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULiveLinkCustomTimeStep____A6AXAEBV__FLiveLinkBaseDataStruct_UFLiveLinkBaseFrameData_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar7[3] = 0;
    local_b8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_b8);
    puVar7[4] = OnLiveLinkFrameDataReceived_AnyThread;
  }
  LeaveCriticalSection(&local_70);
  local_a8.DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  local_a8.LockCount = 0;
  local_a8.RecursionCount = 0;
  local_78 = 0;
  local_a8.OwningThread = (HANDLE)0x0;
  local_a8.LockSemaphore = (HANDLE)0x0;
  local_a8.SpinCount = 0;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  InitializeCriticalSectionAndSpinCount(&local_a8,4000);
  local_c0 = &this->RegisterForFrameDataReceivedHandle;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  local_c8 = &local_b0;
  local_78 = local_78 & 0xffffffff00000000;
  (*pcVar3)(pIVar2,&this->RegisteredSubjectKey,&local_a8,&local_70);
  EnterCriticalSection(&local_a8);
  if (((int)local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
    local_78 = local_78 & 0xffffffff00000000;
  }
  LeaveCriticalSection(&local_a8);
  if (FStack_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data);
  }
  DeleteCriticalSection(&local_a8);
  EnterCriticalSection(&local_70);
  if ((local_48.DelegateSize != 0) &&
     (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_48.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_48,0,0,0x10);
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_48.DelegateAllocator);
  }
  DeleteCriticalSection(&local_70);
  return;
}

// Shutdown @ 14d07fad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULiveLinkCustomTimeStep::Shutdown(ULiveLinkCustomTimeStep *this,UEngine *param_1)

{
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar1;
  
  if (this->LiveLinkClient != (ILiveLinkClient *)0x0) {
    UnregisterLiveLinkSubject(this);
    pTVar1 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             (**(code **)((longlong)*this->LiveLinkClient + 0x1f8))();
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar1,this);
    pTVar1 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             (**(code **)((longlong)*this->LiveLinkClient + 0x200))();
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar1,this);
    this->LiveLinkClient = (ILiveLinkClient *)0x0;
    LOCK();
    this->State = (atomic<ECustomTimeStepSynchronizationState>)0x0;
    UNLOCK();
  }
  return;
}

// StaticRegisterNativesULiveLinkCustomTimeStep @ 14d080730

void __cdecl ULiveLinkCustomTimeStep::StaticRegisterNativesULiveLinkCustomTimeStep(void)

{
  return;
}

// UninitLiveLinkClient @ 14d085cb0

void __thiscall ULiveLinkCustomTimeStep::UninitLiveLinkClient(ULiveLinkCustomTimeStep *this)

{
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar1;
  
  if (this->LiveLinkClient != (ILiveLinkClient *)0x0) {
    UnregisterLiveLinkSubject(this);
    pTVar1 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             (**(code **)((longlong)*this->LiveLinkClient + 0x1f8))();
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar1,this);
    pTVar1 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             (**(code **)((longlong)*this->LiveLinkClient + 0x200))();
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar1,this);
    this->LiveLinkClient = (ILiveLinkClient *)0x0;
    LOCK();
    this->State = (atomic<ECustomTimeStepSynchronizationState>)0x0;
    UNLOCK();
  }
  return;
}

// UnregisterLiveLinkSubject @ 14d085fc0

void __thiscall ULiveLinkCustomTimeStep::UnregisterLiveLinkSubject(ULiveLinkCustomTimeStep *this)

{
  if ((this->RegisterForFrameDataReceivedHandle).ID != 0) {
    (**(code **)((longlong)*this->LiveLinkClient + 0x220))
              (this->LiveLinkClient,&this->RegisteredSubjectKey,0);
    (this->RegisterForFrameDataReceivedHandle).ID = 0;
  }
  (this->RegisteredSubjectKey).Source.A = 0;
  (this->RegisteredSubjectKey).Source.B = 0;
  (this->RegisteredSubjectKey).Source.C = 0;
  (this->RegisteredSubjectKey).Source.D = 0;
  (this->RegisteredSubjectKey).SubjectName.Name = (FName)0x0;
  return;
}

// UpdateTimeStep @ 14d088670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
ULiveLinkCustomTimeStep::UpdateTimeStep(ULiveLinkCustomTimeStep *this,UEngine *param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  atomic<double> aVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  atomic<unsigned_int> aVar8;
  double dVar9;
  LARGE_INTEGER local_res8;
  double local_res18;
  double local_res20;
  
  if (this->State != (atomic<ECustomTimeStepSynchronizationState>)0x2) {
    (**(code **)(((this->EventWaitForSync).Event)->_padding_ + 0x10))();
    return true;
  }
  LOCK();
  this->bLockStepModeAnyThread = (atomic<bool>)this->bLockStepMode;
  UNLOCK();
  LOCK();
  this->FrameRateDividerAnyThread = (atomic<unsigned_int>)this->FrameRateDivider;
  UNLOCK();
  LOCK();
  this->TimeoutInSecondsAnyThread = (atomic<double>)this->TimeoutInSeconds;
  UNLOCK();
  UEngineCustomTimeStep::UpdateApplicationLastTime();
  QueryPerformanceCounter(&local_res8);
  dVar9 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  cVar5 = (**(code **)(this->_padding_ + 0x2e0))(this);
  if (cVar5 == '\0') {
    LOCK();
    this->State = (atomic<ECustomTimeStepSynchronizationState>)0x3;
    UNLOCK();
    return true;
  }
  QueryPerformanceCounter(&local_res8);
  aVar8 = this->SyncCount;
  dVar3 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->LastSyncCountDelta = (uint)aVar8;
  if (1 < this->FrameRateDivider) {
    aVar8 = (atomic<unsigned_int>)((int)aVar8 - (uint)aVar8 % this->FrameRateDivider);
    this->LastSyncCountDelta = (uint)aVar8;
  }
  LOCK();
  this->SyncCount = (atomic<unsigned_int>)((int)this->SyncCount - (int)aVar8);
  UNLOCK();
  piVar7 = (int *)(**(code **)(this->_padding_ + 0x2e8))(this,&local_res8);
  aVar4 = FApp::LastTime;
  iVar1 = piVar7[1];
  iVar2 = *piVar7;
  uVar6 = (**(code **)(this->_padding_ + 0x2f0))(this);
  local_res18 = (double)uVar6 * ((double)iVar1 / (double)iVar2) + (double)aVar4;
  local_res20 = local_res18 - (dVar3 - dVar9);
  UGenlockedCustomTimeStep::UpdateAppTimes
            ((UGenlockedCustomTimeStep *)this,&local_res20,&local_res18);
  return false;
}

// WaitForSync @ 14d08a1d0

bool __thiscall ULiveLinkCustomTimeStep::WaitForSync(ULiveLinkCustomTimeStep *this)

{
  bool bVar1;
  bool bVar2;
  FTimespan local_res8;
  
  (**(code **)(((this->EventWaitForSync).Event)->_padding_ + 0x10))();
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId140,"ULiveLinkCustomTimeStep::EventLiveLink->Wait",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkCustomTimeStep.cpp"
               ,0x8c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId140);
  }
  local_res8.Ticks = (long64)(this->TimeoutInSeconds * __real_416312d000000000);
  bVar1 = FEvent::Wait((this->EventLiveLink).Event,&local_res8,false);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar1;
}

