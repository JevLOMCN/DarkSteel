// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// FQuartzTickableObject @ 14733fb30

FQuartzTickableObject * __thiscall
FQuartzTickableObject::FQuartzTickableObject(FQuartzTickableObject *this)

{
  FMetronomeDelegateGameThreadData *pFVar1;
  longlong lVar2;
  
  lVar2 = 0x12;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
  ;
  this->_padding_ = (longlong)&_vftable__for__Audio__Quartz__IMetronomeEventListener__;
  this->_padding_ = (longlong)&_vftable__for__Audio__Quartz__ICommandListener__;
  this->_padding_ = (longlong)&_vftable__for__Audio__Quartz__IQueueCommandListener__;
  pFVar1 = this->MetronomeDelegates;
  do {
    *(undefined8 *)&pFVar1->MulticastDelegate = 0;
    *(undefined8 *)&(pFVar1->MulticastDelegate).field_0x8 = 0;
    *(undefined8 *)&(pFVar1->MulticastDelegate).field_0x10 = 0;
    pFVar1 = pFVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  (this->QuantizedCommandDelegates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuantizedCommandDelegates).ArrayNum = 0;
  (this->QuantizedCommandDelegates).ArrayMax = 0;
  (this->TempCommandQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TempCommandQueue).ArrayNum = 0;
  (this->TempCommandQueue).ArrayMax = 0;
  (this->NotificationOffset).OffsetInMilliseconds.TypedValue = 0.0;
  (this->NotificationOffset).OffsetInMilliseconds.bIsSet = true;
  (this->NotificationOffset).OffsetAsDuration.bIsSet = false;
  (this->CommandQueuePtr).Object =
       (TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
        *)0x0;
  (this->CommandQueuePtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->QuartzSubscriptionToken).SubscribingObject = (FQuartzTickableObject *)0x0;
  (this->QuartzSubscriptionToken).TickableObjectManagerPtr.Object =
       (FQuartzTickableObjectsManager *)0x0;
  (this->QuartzSubscriptionToken).TickableObjectManagerPtr.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FQuartzTickableObject @ 147341c90

void __thiscall FQuartzTickableObject::~FQuartzTickableObject(FQuartzTickableObject *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  FMetronomeDelegateGameThreadData *this_00;
  longlong lVar6;
  
  this->_padding_ =
       (longlong)
       &
       _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
  ;
  this->_padding_ = (longlong)&_vftable__for__Audio__Quartz__IMetronomeEventListener__;
  this->_padding_ = (longlong)&_vftable__for__Audio__Quartz__ICommandListener__;
  this->_padding_ = (longlong)&_vftable__for__Audio__Quartz__IQueueCommandListener__;
  FQuartzSubscriptionToken::Unsubscribe(&this->QuartzSubscriptionToken);
  FQuartzSubscriptionToken::Unsubscribe(&this->QuartzSubscriptionToken);
  pTVar3 = (this->QuartzSubscriptionToken).TickableObjectManagerPtr.WeakReferenceCount.
           ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CommandQueuePtr).SharedReferenceCount.ReferenceController);
  DestructItems<TFunction<void___cdecl(FQuartzTickableObject_*)>,int>
            ((TFunction<void___cdecl(FQuartzTickableObject_*)> *)
             (this->TempCommandQueue).AllocatorInstance.Data,(this->TempCommandQueue).ArrayNum);
  pFVar4 = (this->TempCommandQueue).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this_00 = (FMetronomeDelegateGameThreadData *)&this->QuantizedCommandDelegates;
  DestructItems<FQuartzTickableObject::FCommandDelegateGameThreadData,int>
            ((FCommandDelegateGameThreadData *)
             (((TArray<FQuartzTickableObject::FCommandDelegateGameThreadData,TSizedDefaultAllocator<32>_>
                *)this_00)->AllocatorInstance).Data,(this->QuantizedCommandDelegates).ArrayNum);
  pFVar4 = (((TArray<FQuartzTickableObject::FCommandDelegateGameThreadData,TSizedDefaultAllocator<32>_>
              *)this_00)->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  lVar6 = 0x12;
  do {
    pvVar5 = *(void **)&this_00[-1].MulticastDelegate.field_0x8;
    this_00 = this_00 + -1;
    lVar6 = lVar6 + -1;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_00);
  } while (lVar6 != 0);
  return;
}

// AddCommandDelegate @ 147344f80

int __thiscall
FQuartzTickableObject::AddCommandDelegate
          (FQuartzTickableObject *this,FOnQuartzCommandEventBP *param_1)

{
  int *piVar1;
  TArray<FQuartzTickableObject::FCommandDelegateGameThreadData,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *this_00;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_01;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  FReadAccessScope local_48;
  
  lVar8 = (longlong)(this->QuantizedCommandDelegates).ArrayNum;
  pTVar2 = &this->QuantizedCommandDelegates;
  uVar7 = 0;
  if (0 < lVar8) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->QuantizedCommandDelegates).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      this_00 = (pTVar2->AllocatorInstance).Data + lVar10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_48);
      iVar6 = *(int *)(this_00 + 0x10);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      if (iVar6 < 1) {
        uVar5 = 0;
        if ((int)uVar7 < (this->QuantizedCommandDelegates).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        this_01 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                  ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x20);
        goto LAB_147345096;
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + 0x20;
    } while (lVar9 < lVar8);
  }
  iVar6 = (this->QuantizedCommandDelegates).ArrayNum;
  piVar1 = &(this->QuantizedCommandDelegates).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar2->AllocatorInstance,piVar1);
    (this->QuantizedCommandDelegates).ArrayNum = iVar6;
  }
  this_01 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
            ((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x20);
  (this->QuantizedCommandDelegates).ArrayNum = iVar6 + 1;
  DefaultConstructItems<FQuartzTickableObject::FCommandDelegateGameThreadData,int>(this_01,1);
LAB_147345096:
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddUnique
            (this_01,(TScriptDelegate<FNotThreadSafeDelegateMode> *)param_1);
  return uVar7;
}

// AddMetronomeBpDelegate @ 147345350

void __thiscall
FQuartzTickableObject::AddMetronomeBpDelegate
          (FQuartzTickableObject *this,EQuartzCommandQuantization param_1,
          FOnQuartzMetronomeEventBP *param_2)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddUnique
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             (this->MetronomeDelegates + param_1),
             (TScriptDelegate<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// GetQuartzSubscriber @ 147350610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FQuartzGameThreadSubscriber * __thiscall
FQuartzTickableObject::GetQuartzSubscriber
          (FQuartzTickableObject *this,FQuartzGameThreadSubscriber *__return_storage_ptr__)

{
  TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
  *pTVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  FQuartzGameThreadSubscriber *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  double local_res8;
  TReferenceControllerBase<1> *local_58;
  FSharedReferencer<1> aFStack_50 [3];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pTVar1 = &this->CommandQueuePtr;
  if (pTVar1->Object ==
      (TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
       *)0x0) {
    pTVar5 = ::operator_new(0x18);
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      local_58 = ___xmm_00000000000000000000000000000010;
      pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000010;
      aFStack_50[0].ReferenceController = _UNK_150651568;
    }
    else {
      pTVar5->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7 = pTVar5 + 1;
      pTVar5->WeakReferenceCount = (atomic<int>)0x1;
      pTVar5->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TQuartzCommandQueue_VIMetronomeEventListener_Quartz_Audio__VICommandListener_23_VIQueueCommandListener_23__PrivateDefs_Quartz_Audio___00_SharedPointerInternals__6B_
      ;
      pTVar5[1]._padding_ = 0;
      if ((pTVar7 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FQuartzGameThreadSubscriber *)(*pcVar3)();
        return pFVar6;
      }
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      aFStack_50[0].ReferenceController = pTVar5;
      local_58 = pTVar7;
    }
    if (pTVar1 != (TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
                   *)&local_58) {
      pTVar1->Object =
           (TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
            *)pTVar7;
      local_58 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CommandQueuePtr).SharedReferenceCount,aFStack_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (aFStack_50[0].ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  bVar4 = (this->NotificationOffset).OffsetInMilliseconds.bIsSet;
  if (bVar4 != false) {
    local_res8 = (this->NotificationOffset).OffsetInMilliseconds.TypedValue;
  }
  bVar2 = (this->NotificationOffset).OffsetAsDuration.bIsSet;
  if (bVar2 != false) {
    local_38 = *(undefined4 *)&(this->NotificationOffset).OffsetAsDuration.TypedValue;
    uStack_34 = *(undefined4 *)&(this->NotificationOffset).OffsetAsDuration.TypedValue.field_0x4;
    uStack_30 = *(undefined4 *)&(this->NotificationOffset).OffsetAsDuration.TypedValue.field_0x8;
    uStack_2c = *(undefined4 *)&(this->NotificationOffset).OffsetAsDuration.TypedValue.field_0xc;
  }
  (__return_storage_ptr__->Offset).OffsetInMilliseconds.bIsSet = bVar4;
  if (bVar4 != false) {
    (__return_storage_ptr__->Offset).OffsetInMilliseconds.TypedValue = local_res8;
  }
  (__return_storage_ptr__->Offset).OffsetAsDuration.bIsSet = bVar2;
  if (bVar2 != false) {
    *(undefined4 *)&(__return_storage_ptr__->Offset).OffsetAsDuration.TypedValue = local_38;
    *(undefined4 *)&(__return_storage_ptr__->Offset).OffsetAsDuration.TypedValue.field_0x4 =
         uStack_34;
    *(undefined4 *)&(__return_storage_ptr__->Offset).OffsetAsDuration.TypedValue.field_0x8 =
         uStack_30;
    *(undefined4 *)&(__return_storage_ptr__->Offset).OffsetAsDuration.TypedValue.field_0xc =
         uStack_2c;
  }
  (__return_storage_ptr__->Queue).Object = pTVar1->Object;
  pTVar5 = (this->CommandQueuePtr).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->Queue).SharedReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  __return_storage_ptr__->bOffsetConvertedToFrames = false;
  __return_storage_ptr__->bHasBeenNotifiedOfAboutToStart = false;
  __return_storage_ptr__->OffsetInAudioFrames = 0;
  return __return_storage_ptr__;
}

// Init @ 147351690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FQuartzTickableObject * __thiscall
FQuartzTickableObject::Init(FQuartzTickableObject *this,UWorld *param_1)

{
  TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  FQuartzTickableObject *pFVar4;
  TSharedRef<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
  *pTVar5;
  UQuartzSubsystem *pUVar6;
  TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
  *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
  local_18;
  
  if (param_1 == (UWorld *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2677017514612883483>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzSubscription.cpp"
                       ,0x1b,"InWorldPtr");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FQuartzTickableObject *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    pTVar1 = &this->CommandQueuePtr;
    if (pTVar1->Object ==
        (TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
         *)0x0) {
      pTVar5 = MakeShared<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
                         (&local_18);
      local_20.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
      local_28 = pTVar5->Object;
      if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_20.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pTVar1 != (TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
                     *)&local_28) {
        pTVar1->Object = local_28;
        local_28 = (TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
                    *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->CommandQueuePtr).SharedReferenceCount,&local_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_20.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    pUVar6 = UQuartzSubsystem::Get(param_1);
    FQuartzSubscriptionToken::Subscribe(&this->QuartzSubscriptionToken,this,pUVar6);
  }
  return this;
}

// OnCommandEvent @ 1473526a0

void __thiscall
FQuartzTickableObject::OnCommandEvent
          (FQuartzTickableObject *this,FQuartzQuantizedCommandDelegateData *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTVar1;
  int *piVar2;
  TNode *pTVar3;
  uint uVar4;
  int iVar5;
  FQuartzTickableObject *pFVar6;
  FQuartLatencyTracker *this_00;
  code *pcVar7;
  longlong lVar8;
  int iVar9;
  FName *pFVar10;
  TNode *pTVar11;
  uint uVar12;
  FQuartzTickableObject *pFVar13;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_01;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_02;
  bool bVar14;
  double dVar15;
  FName local_res8;
  EQuartzCommandDelegateSubType local_78 [4];
  FName local_74;
  FDestructionSentinel local_68;
  FReadAccessScope local_50;
  
  pFVar6 = (this->QuartzSubscriptionToken).SubscribingObject;
  pFVar13 = pFVar6;
  if (pFVar6 != (FQuartzTickableObject *)0x0) {
    iVar5 = (int)pFVar6->_padding_;
    do {
      pFVar13 = (FQuartzTickableObject *)0x0;
      if (iVar5 == 0) goto LAB_1473526f5;
      LOCK();
      iVar9 = (int)pFVar6->_padding_;
      bVar14 = iVar5 == iVar9;
      if (bVar14) {
        *(int *)&pFVar6->_padding_ = iVar5 + 1;
        iVar9 = iVar5;
      }
      UNLOCK();
      iVar5 = iVar9;
    } while (!bVar14);
    this_00 = (FQuartLatencyTracker *)
              (this->CommandQueuePtr).SharedReferenceCount.ReferenceController;
    pFVar13 = pFVar6;
    if (this_00 != (FQuartLatencyTracker *)0x0) {
      dVar15 = Audio::FQuartzCrossThreadMessage::RequestReceived
                         ((FQuartzCrossThreadMessage *)param_1);
      pTVar11 = ::operator_new(0x10);
      if (pTVar11 != (TNode *)0x0) {
        pTVar11->Item = (float)dVar15;
        pTVar11->NextNode = (TNode *)0x0;
        if (((ulonglong)this_00 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
        }
        LOCK();
        pTVar3 = (this_00->ResultQueue).Head;
        (this_00->ResultQueue).Head = pTVar11;
        UNLOCK();
        if (((ulonglong)pTVar3 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
        }
        LOCK();
        pTVar3->NextNode = pTVar11;
        UNLOCK();
      }
      bVar14 = IsInGameThread();
      if (bVar14) {
        FQuartLatencyTracker::DigestQueue(this_00);
      }
    }
  }
LAB_1473526f5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar13);
  uVar4 = param_1->DelegateID;
  if ((-1 < (int)uVar4) &&
     ((int)uVar4 < *(int *)&this->MetronomeDelegates[0x11].MulticastDelegate.field_0x10)) {
    uVar12 = 0;
    if ((int)uVar4 < *(int *)&this->MetronomeDelegates[0x11].MulticastDelegate.field_0x10) {
      uVar12 = ~uVar4 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_01 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
              ((longlong)(int)uVar4 * 0x20 +
              *(longlong *)&this->MetronomeDelegates[0x11].MulticastDelegate.field_0x8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_01,&local_50);
    iVar5 = *(int *)&this_01[2].AccessDetector.State;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    if (0 < iVar5) {
      uVar4 = param_1->DelegateID;
      uVar12 = 0;
      if ((int)uVar4 < *(int *)&this->MetronomeDelegates[0x11].MulticastDelegate.field_0x10) {
        uVar12 = ~uVar4 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this_02 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                ((longlong)(int)uVar4 * 0x20 +
                *(longlong *)&this->MetronomeDelegates[0x11].MulticastDelegate.field_0x8);
      pFVar10 = ::FName::FName(&local_res8,"Quartz Event");
      local_78[0] = param_1->DelegateSubType;
      local_74 = *pFVar10;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                (this_02,local_78);
      if (param_1->DelegateSubType == CommandOnQueued) {
        LOCK();
        *(int *)&this_02[1]._padding_ = (int)this_02[1]._padding_ + 1;
        UNLOCK();
      }
      if (((DecrementSlotIndexOnStartedCvar != 0) && (param_1->DelegateSubType == CommandOnStarted))
         || (param_1->DelegateSubType == CommandOnCanceled)) {
        LOCK();
        pTVar1 = this_02 + 1;
        lVar8 = pTVar1->_padding_;
        *(int *)&pTVar1->_padding_ = (int)pTVar1->_padding_ + -1;
        UNLOCK();
        if ((int)lVar8 < 2) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_02,
                     (FWriteAccessScope *)&local_68);
          piVar2 = &(this_02->InvocationList).ArrayMax;
          (this_02->InvocationList).ArrayNum = 0;
          if (*piVar2 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,0,&(this_02->InvocationList).AllocatorInstance,0,piVar2);
          }
          if (local_68.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
          }
          LOCK();
          *(undefined4 *)&this_02[1]._padding_ = 0;
          UNLOCK();
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001473528c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(this[-1].QuartzSubscriptionToken.TickableObjectManagerPtr.Object)->_padding_)
            (&this[-1].QuartzSubscriptionToken.TickableObjectManagerPtr,param_1);
  return;
}

// OnMetronomeEvent @ 147352b40

void __thiscall
FQuartzTickableObject::OnMetronomeEvent
          (FQuartzTickableObject *this,FQuartzMetronomeDelegateData *param_1)

{
  TNode *pTVar1;
  FQuartzTickableObject *this_00;
  int iVar2;
  int iVar3;
  TNode *pTVar4;
  FQuartzTickableObjectsManager *pFVar5;
  bool bVar6;
  double dVar7;
  FName local_48;
  EQuartzCommandQuantization local_40;
  int local_3c;
  int local_38;
  float local_34;
  
  pFVar5 = (this->QuartzSubscriptionToken).TickableObjectManagerPtr.Object;
  if (pFVar5 != (FQuartzTickableObjectsManager *)0x0) {
    iVar2 = (int)pFVar5->_padding_;
    do {
      if (iVar2 == 0) {
        pFVar5 = (FQuartzTickableObjectsManager *)0x0;
        goto LAB_147352b80;
      }
      LOCK();
      iVar3 = (int)pFVar5->_padding_;
      bVar6 = iVar2 == iVar3;
      if (bVar6) {
        *(int *)&pFVar5->_padding_ = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar6);
    this_00 = (this->QuartzSubscriptionToken).SubscribingObject;
    if (this_00 != (FQuartzTickableObject *)0x0) {
      dVar7 = Audio::FQuartzCrossThreadMessage::RequestReceived
                        ((FQuartzCrossThreadMessage *)param_1);
      pTVar4 = ::operator_new(0x10);
      if (pTVar4 != (TNode *)0x0) {
        pTVar4->Item = (float)dVar7;
        pTVar4->NextNode = (TNode *)0x0;
        if (((ulonglong)this_00 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
        }
        LOCK();
        pTVar1 = ((TQueue<float,0> *)&this_00->_padding_)->Head;
        ((TQueue<float,0> *)&this_00->_padding_)->Head = pTVar4;
        UNLOCK();
        if (((ulonglong)pTVar1 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
        }
        LOCK();
        pTVar1->NextNode = pTVar4;
        UNLOCK();
      }
      bVar6 = IsInGameThread();
      if (bVar6) {
        FQuartLatencyTracker::DigestQueue((FQuartLatencyTracker *)this_00);
      }
    }
  }
LAB_147352b80:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  local_48 = param_1->ClockName;
  local_40 = param_1->Quantization;
  local_34 = param_1->BeatFraction;
  local_3c = param_1->Bar;
  local_38 = param_1->Beat;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->MetronomeDelegates[(ulonglong)local_40 - 1].MulticastDelegate.field_0x10,
             &local_48);
                    /* WARNING: Could not recover jumptable at 0x000147352be7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)&this[-1].QuartzSubscriptionToken.TickableObjectManagerPtr.WeakReferenceCount.
               ReferenceController[1].SharedReferenceCount)
            (&this[-1].QuartzSubscriptionToken.TickableObjectManagerPtr.WeakReferenceCount,param_1);
  return;
}

// OnQueueCommandEvent @ 147352ca0

void __thiscall
FQuartzTickableObject::OnQueueCommandEvent
          (FQuartzTickableObject *this,FQuartzQueueCommandData *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147352ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(this[-1].QuartzSubscriptionToken.SubscribingObject)->_padding_)
            (&this[-1].QuartzSubscriptionToken);
  return;
}

// ProcessCommand @ 147353130

void __thiscall
FQuartzTickableObject::ProcessCommand
          (FQuartzTickableObject *this,FQuartzMetronomeDelegateData *param_1)

{
  return;
}

// ProcessCommand @ 147353140

void __thiscall
FQuartzTickableObject::ProcessCommand
          (FQuartzTickableObject *this,FQuartzQuantizedCommandDelegateData *param_1)

{
  return;
}

// QuartzIsTickable @ 147353970

bool __thiscall FQuartzTickableObject::QuartzIsTickable(FQuartzTickableObject *this)

{
  return (this->CommandQueuePtr).Object !=
         (TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
          *)0x0;
}

// QuartzTick @ 147353990

void __thiscall FQuartzTickableObject::QuartzTick(FQuartzTickableObject *this,float param_1)

{
  TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>
  TVar1;
  atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
  *paVar2;
  atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
  aVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>
  TVar8;
  TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>
  TVar9;
  
  if (((this->CommandQueuePtr).Object ==
       (TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
        *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  paVar2 = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
            *)(this->CommandQueuePtr).Object;
  TVar8.Head = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
                )0x0;
  LOCK();
  TVar1.Head = *paVar2;
  *paVar2 = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
             )0x0;
  UNLOCK();
  if (TVar1.Head !=
      (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
       )0x0) {
    do {
      TVar9.Head = TVar1.Head;
                    /* WARNING: Load size is inaccurate */
      LOCK();
      TVar1.Head = *TVar9.Head;
      *(atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
        *)TVar9.Head = TVar8.Head;
      UNLOCK();
      TVar8.Head = TVar9.Head;
    } while (TVar1.Head !=
             (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
              )0x0);
    while (TVar9.Head !=
           (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>::IVisitorBase>_>,FMemory>::FNode_*>
            )0x0) {
                    /* WARNING: Load size is inaccurate */
      aVar3 = *TVar9.Head;
      puVar4 = *(undefined8 **)((longlong)TVar9.Head + 8);
      *(longlong *)((longlong)TVar9.Head + 8) = 0;
      (**(code **)(this->_padding_ + 8))(this,puVar4);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      puVar4 = *(undefined8 **)((longlong)TVar9.Head + 8);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      FMemory::Free((void *)TVar9.Head);
      TVar9.Head = aVar3;
    }
  }
  cVar7 = (**(code **)(this->_padding_ + 0x28))(this);
  if (cVar7 == '\0') {
    return;
  }
  FQuartzSubscriptionToken::Unsubscribe(&this->QuartzSubscriptionToken);
  return;
}

// QuartzUnsubscribe @ 147353aa0

void __thiscall FQuartzTickableObject::QuartzUnsubscribe(FQuartzTickableObject *this)

{
  FQuartzSubscriptionToken::Unsubscribe(&this->QuartzSubscriptionToken);
  return;
}

// SetNotificationAnticipationAmountMilliseconds @ 147357bf0

void __thiscall
FQuartzTickableObject::SetNotificationAnticipationAmountMilliseconds
          (FQuartzTickableObject *this,double param_1)

{
  if ((this->NotificationOffset).OffsetAsDuration.bIsSet != false) {
    (this->NotificationOffset).OffsetAsDuration.bIsSet = false;
  }
  (this->NotificationOffset).OffsetInMilliseconds.TypedValue = param_1;
  (this->NotificationOffset).OffsetInMilliseconds.bIsSet = true;
  return;
}

// SetNotificationAnticipationAmountMusicalDuration @ 147357c20

void __thiscall
FQuartzTickableObject::SetNotificationAnticipationAmountMusicalDuration
          (FQuartzTickableObject *this,EQuartzCommandQuantization param_1,double param_2)

{
  if ((this->NotificationOffset).OffsetInMilliseconds.bIsSet != false) {
    (this->NotificationOffset).OffsetInMilliseconds.bIsSet = false;
  }
  *(EQuartzCommandQuantization *)&(this->NotificationOffset).OffsetAsDuration.TypedValue = param_1;
  (this->NotificationOffset).OffsetAsDuration.bIsSet = true;
  *(double *)&(this->NotificationOffset).OffsetAsDuration.TypedValue.field_0x8 =
       (double)(float)param_2;
  return;
}

// ShouldUnsubscribe @ 1473587f0

bool __thiscall FQuartzTickableObject::ShouldUnsubscribe(FQuartzTickableObject *this)

{
  return false;
}

