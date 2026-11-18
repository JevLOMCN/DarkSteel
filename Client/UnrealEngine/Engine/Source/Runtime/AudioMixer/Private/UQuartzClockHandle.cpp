// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 75

// StaticClass @ 146536790

UClass * __cdecl UQuartzClockHandle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UQuartzClockHandle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"QuartzClockHandle",
               &Z_Registration_Info_UClass_UQuartzClockHandle.InnerSingleton,
               StaticRegisterNativesUQuartzClockHandle,0x298,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UQuartzClockHandle>,
               InternalVTableHelperCtorCaller<UQuartzClockHandle>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UQuartzClockHandle.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 146536860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`UQuartzClockHandle::PauseClock'::__l2::<lambda_1>::<lambda_invoker_cdecl>(FQuartzClock *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146536868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x10))(&param_1->_padding_);
  return;
}

// <lambda_invoker_cdecl> @ 146536890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`UQuartzClockHandle::ResumeClock'::__l2::<lambda_1>::<lambda_invoker_cdecl>(FQuartzClock *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146536898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 8))(&param_1->_padding_);
  return;
}

// UQuartzClockHandle @ 14653e7b0

/* WARNING: Enum "Type": Some values do not have unique names */

UQuartzClockHandle * __thiscall
UQuartzClockHandle::UQuartzClockHandle(UQuartzClockHandle *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  FQuartzTickableObject::FQuartzTickableObject((FQuartzTickableObject *)&this->_padding_);
  this->_padding_ = (longlong)&___7UQuartzClockHandle__6B_;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
  ;
  this->_padding_ = (longlong)&_vftable__for__Audio__Quartz__IMetronomeEventListener__;
  this->_padding_ = (longlong)&_vftable__for__Audio__Quartz__ICommandListener__;
  this->_padding_ = (longlong)&_vftable__for__Audio__Quartz__IQueueCommandListener__;
  (this->RawHandle).ClockId.ComparisonIndex = 0;
  (this->RawHandle).ClockId.Number = 0;
  (this->RawHandle).SharedQueue.Object = (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0;
  (this->RawHandle).SharedQueue.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->RawHandle).ClockWeakPtr.Object = (FQuartzClock *)0x0;
  (this->RawHandle).ClockWeakPtr.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CurrentClockId).ComparisonIndex = 0;
  (this->CurrentClockId).Number = 0;
  return this;
}

// UQuartzClockHandle @ 14653e850

/* WARNING: Enum "Type": Some values do not have unique names */

UQuartzClockHandle * __thiscall UQuartzClockHandle::UQuartzClockHandle(UQuartzClockHandle *this)

{
  UObject::UObject((UObject *)this);
  FQuartzTickableObject::FQuartzTickableObject((FQuartzTickableObject *)&this->_padding_);
  this->_padding_ = (longlong)&___7UQuartzClockHandle__6B_;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
  ;
  this->_padding_ = (longlong)&_vftable__for__Audio__Quartz__IMetronomeEventListener__;
  this->_padding_ = (longlong)&_vftable__for__Audio__Quartz__ICommandListener__;
  this->_padding_ = (longlong)&_vftable__for__Audio__Quartz__IQueueCommandListener__;
  (this->RawHandle).ClockId.ComparisonIndex = 0;
  (this->RawHandle).ClockId.Number = 0;
  (this->RawHandle).SharedQueue.Object = (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0;
  (this->RawHandle).SharedQueue.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->RawHandle).ClockWeakPtr.Object = (FQuartzClock *)0x0;
  (this->RawHandle).ClockWeakPtr.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CurrentClockId).ComparisonIndex = 0;
  (this->CurrentClockId).Number = 0;
  return this;
}

// ~UQuartzClockHandle @ 146541370

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UQuartzClockHandle::~UQuartzClockHandle(UQuartzClockHandle *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7UQuartzClockHandle__6B_;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
  ;
  this->_padding_ = (longlong)&_vftable__for__Audio__Quartz__IMetronomeEventListener__;
  this->_padding_ = (longlong)&_vftable__for__Audio__Quartz__ICommandListener__;
  this->_padding_ = (longlong)&_vftable__for__Audio__Quartz__IQueueCommandListener__;
  pTVar3 = (this->RawHandle).ClockWeakPtr.WeakReferenceCount.ReferenceController;
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
  pTVar3 = (this->RawHandle).SharedQueue.WeakReferenceCount.ReferenceController;
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
  FQuartzTickableObject::~FQuartzTickableObject((FQuartzTickableObject *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 146542990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UQuartzClockHandle::BeginDestroy'::__l2::<lambda_1>::operator()(void *this,FQuartzClock *param_1)

{
  code *pcVar1;
  undefined8 local_48;
  char local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  char local_28;
  undefined8 local_20;
  longlong local_18;
  undefined1 local_10;
  undefined1 local_f;
  undefined4 local_c;
  
  pcVar1 = *(code **)(param_1->_padding_ + 0x40);
  local_40 = *(char *)((longlong)this + 8);
  if (local_40 != '\0') {
    local_48 = *(undefined8 *)this;
  }
  local_28 = *(char *)((longlong)this + 0x20);
  if (local_28 != '\0') {
    local_38 = *(undefined8 *)((longlong)this + 0x10);
    uStack_30 = *(undefined8 *)((longlong)this + 0x18);
  }
  local_20 = *(undefined8 *)((longlong)this + 0x28);
  local_18 = *(longlong *)((longlong)this + 0x30);
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  local_10 = *(undefined1 *)((longlong)this + 0x38);
  local_f = *(undefined1 *)((longlong)this + 0x39);
  local_c = *(undefined4 *)((longlong)this + 0x3c);
  (*pcVar1)(&param_1->_padding_,&local_48);
  return;
}

// operator() @ 146542b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UQuartzClockHandle::SubscribeToAllQuantizationEvents'::__l2::<lambda_1>::operator()
          (void *this,FQuartzClock *param_1)

{
  code *pcVar1;
  undefined8 local_48;
  char local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  char local_28;
  undefined8 local_20;
  longlong local_18;
  undefined1 local_10;
  undefined1 local_f;
  undefined4 local_c;
  
  pcVar1 = *(code **)(param_1->_padding_ + 0x30);
  local_40 = *(char *)((longlong)this + 8);
  if (local_40 != '\0') {
    local_48 = *(undefined8 *)this;
  }
  local_28 = *(char *)((longlong)this + 0x20);
  if (local_28 != '\0') {
    local_38 = *(undefined8 *)((longlong)this + 0x10);
    uStack_30 = *(undefined8 *)((longlong)this + 0x18);
  }
  local_20 = *(undefined8 *)((longlong)this + 0x28);
  local_18 = *(longlong *)((longlong)this + 0x30);
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  local_10 = *(undefined1 *)((longlong)this + 0x38);
  local_f = *(undefined1 *)((longlong)this + 0x39);
  local_c = *(undefined4 *)((longlong)this + 0x3c);
  (*pcVar1)(&param_1->_padding_,&local_48);
  return;
}

// operator() @ 146542ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UQuartzClockHandle::SubscribeToQuantizationEvent'::__l2::<lambda_1>::operator()
          (void *this,FQuartzClock *param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined8 local_48;
  char local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  char local_28;
  undefined8 local_20;
  longlong local_18;
  undefined1 local_10;
  undefined1 local_f;
  undefined4 local_c;
  
  uVar1 = *(undefined1 *)((longlong)this + 0x40);
  pcVar2 = *(code **)(param_1->_padding_ + 0x28);
  local_40 = *(char *)((longlong)this + 8);
  if (local_40 != '\0') {
    local_48 = *(undefined8 *)this;
  }
  local_28 = *(char *)((longlong)this + 0x20);
  if (local_28 != '\0') {
    local_38 = *(undefined8 *)((longlong)this + 0x10);
    uStack_30 = *(undefined8 *)((longlong)this + 0x18);
  }
  local_20 = *(undefined8 *)((longlong)this + 0x28);
  local_18 = *(longlong *)((longlong)this + 0x30);
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  local_10 = *(undefined1 *)((longlong)this + 0x38);
  local_f = *(undefined1 *)((longlong)this + 0x39);
  local_c = *(undefined4 *)((longlong)this + 0x3c);
  (*pcVar2)(&param_1->_padding_,&local_48,uVar1);
  return;
}

// operator() @ 146542cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UQuartzClockHandle::UnsubscribeFromAllTimeDivisions'::__l2::<lambda_1>::operator()
          (void *this,FQuartzClock *param_1)

{
  code *pcVar1;
  undefined8 local_48;
  char local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  char local_28;
  undefined8 local_20;
  longlong local_18;
  undefined1 local_10;
  undefined1 local_f;
  undefined4 local_c;
  
  pcVar1 = *(code **)(param_1->_padding_ + 0x40);
  local_40 = *(char *)((longlong)this + 8);
  if (local_40 != '\0') {
    local_48 = *(undefined8 *)this;
  }
  local_28 = *(char *)((longlong)this + 0x20);
  if (local_28 != '\0') {
    local_38 = *(undefined8 *)((longlong)this + 0x10);
    uStack_30 = *(undefined8 *)((longlong)this + 0x18);
  }
  local_20 = *(undefined8 *)((longlong)this + 0x28);
  local_18 = *(longlong *)((longlong)this + 0x30);
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  local_10 = *(undefined1 *)((longlong)this + 0x38);
  local_f = *(undefined1 *)((longlong)this + 0x39);
  local_c = *(undefined4 *)((longlong)this + 0x3c);
  (*pcVar1)(&param_1->_padding_,&local_48);
  return;
}

// operator() @ 146542d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UQuartzClockHandle::UnsubscribeFromTimeDivision'::__l2::<lambda_1>::operator()
          (void *this,FQuartzClock *param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined8 local_48;
  char local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  char local_28;
  undefined8 local_20;
  longlong local_18;
  undefined1 local_10;
  undefined1 local_f;
  undefined4 local_c;
  
  uVar1 = *(undefined1 *)((longlong)this + 0x40);
  pcVar2 = *(code **)(param_1->_padding_ + 0x38);
  local_40 = *(char *)((longlong)this + 8);
  if (local_40 != '\0') {
    local_48 = *(undefined8 *)this;
  }
  local_28 = *(char *)((longlong)this + 0x20);
  if (local_28 != '\0') {
    local_38 = *(undefined8 *)((longlong)this + 0x10);
    uStack_30 = *(undefined8 *)((longlong)this + 0x18);
  }
  local_20 = *(undefined8 *)((longlong)this + 0x28);
  local_18 = *(longlong *)((longlong)this + 0x30);
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  local_10 = *(undefined1 *)((longlong)this + 0x38);
  local_f = *(undefined1 *)((longlong)this + 0x39);
  local_c = *(undefined4 *)((longlong)this + 0x3c);
  (*pcVar2)(&param_1->_padding_,&local_48,uVar1);
  return;
}

// BeginDestroy @ 1465475a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UQuartzClockHandle::BeginDestroy(UQuartzClockHandle *this)

{
  FSharedReferencer<1> FVar1;
  code *local_b8 [5];
  undefined8 *local_90;
  FQuartzGameThreadSubscriber local_88;
  
  UObject::BeginDestroy((UObject *)this);
  FQuartzTickableObject::GetQuartzSubscriber((FQuartzTickableObject *)&this->_padding_,&local_88);
  FVar1.ReferenceController = local_88.Queue.SharedReferenceCount.ReferenceController;
  if (local_88.Queue.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_88.Queue.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.Queue.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8[0] = (code *)0x0;
  local_90 = FMemory::Malloc(0x48,8);
  *(bool *)(local_90 + 2) = local_88.Offset.OffsetInMilliseconds.bIsSet;
  *local_90 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UQuartzClockHandle::BeginDestroy'::`2'::<lambda_1>,0,1>::
               _vftable_;
  if (local_88.Offset.OffsetInMilliseconds.bIsSet != false) {
    local_90[1] = local_88.Offset.OffsetInMilliseconds.TypedValue;
  }
  *(bool *)(local_90 + 5) = local_88.Offset.OffsetAsDuration.bIsSet;
  if (local_88.Offset.OffsetAsDuration.bIsSet != false) {
    *(undefined4 *)(local_90 + 3) = local_88.Offset.OffsetAsDuration.TypedValue._0_4_;
    *(undefined4 *)((longlong)local_90 + 0x1c) = local_88.Offset.OffsetAsDuration.TypedValue._4_4_;
    *(undefined4 *)(local_90 + 4) = local_88.Offset.OffsetAsDuration.TypedValue._8_4_;
    *(undefined4 *)((longlong)local_90 + 0x24) = local_88.Offset.OffsetAsDuration.TypedValue._12_4_;
  }
  local_90[6] = local_88.Queue.Object;
  local_90[7] = FVar1.ReferenceController;
  *(bool *)(local_90 + 8) = local_88.bOffsetConvertedToFrames;
  *(bool *)((longlong)local_90 + 0x41) = local_88.bHasBeenNotifiedOfAboutToStart;
  *(int *)((longlong)local_90 + 0x44) = local_88.OffsetInAudioFrames;
  if ((double *)(local_90 + 1) != (double *)0x0) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UQuartzClockHandle::BeginDestroy'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
                  ::Call;
  }
  Audio::FQuartzClockProxy::SendCommandToClock
            (&this->RawHandle,(TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.Queue.SharedReferenceCount.ReferenceController);
  return;
}

// GetBeatProgressPercent @ 146555500

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UQuartzClockHandle::GetBeatProgressPercent
          (UQuartzClockHandle *this,EQuartzCommandQuantization param_1,float param_2,float param_3)

{
  float fVar1;
  FQuartzClock *pFVar2;
  atomic<int> aVar3;
  float fVar4;
  atomic<int> aVar5;
  TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  float fVar9;
  LARGE_INTEGER local_res8;
  EQuartzCommandQuantization local_res10 [8];
  
  pTVar7 = (this->RawHandle).SharedQueue.WeakReferenceCount.ReferenceController;
  pTVar6 = (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0;
  local_res10[0] = param_1;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar7->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return 0.0;
      }
      LOCK();
      aVar5 = pTVar7->SharedReferenceCount;
      bVar8 = aVar3 == aVar5;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar8);
    pTVar6 = (this->RawHandle).SharedQueue.Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  fVar4 = __real_3f800000;
  if ((pTVar6 == (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0) || (param_1 == None)) {
    return 0.0;
  }
  pTVar7 = (this->RawHandle).ClockWeakPtr.WeakReferenceCount.ReferenceController;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
LAB_1465555e5:
    fVar9 = 0.0;
  }
  else {
    aVar3 = pTVar7->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1465555e5;
      }
      LOCK();
      aVar5 = pTVar7->SharedReferenceCount;
      bVar8 = aVar3 == aVar5;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar8);
    pFVar2 = (this->RawHandle).ClockWeakPtr.Object;
    if (pFVar2 == (FQuartzClock *)0x0) goto LAB_1465555e5;
    fVar9 = Audio::FQuartzClock::GetDurationOfQuantizationTypeInSeconds(pFVar2,local_res10,fVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__real_322bcc77 <
      (float)((uint)(fVar9 * __real_447a0000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    param_2 = param_2 + param_3 / (fVar9 * __real_447a0000);
  }
  pTVar7 = (this->RawHandle).ClockWeakPtr.WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar7->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146555640;
      }
      LOCK();
      aVar5 = pTVar7->SharedReferenceCount;
      bVar8 = aVar3 == aVar5;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar8);
    pFVar2 = (this->RawHandle).ClockWeakPtr.Object;
    if (pFVar2 != (FQuartzClock *)0x0) {
      if ((pFVar2->CachedClockState).LastCacheTickDeltaCpuCycles64 == 0) {
        fVar9 = (pFVar2->CachedClockState).MusicalDurationPhases[param_1];
      }
      else {
        fVar9 = (pFVar2->CachedClockState).MusicalDurationPhases[param_1];
        fVar1 = (pFVar2->CachedClockState).MusicalDurationPhaseDeltas[param_1];
        QueryPerformanceCounter(&local_res8);
        fVar9 = ((float)(local_res8.QuadPart - (pFVar2->CachedClockState).LastCacheTickCpuCycles64)
                / (float)(pFVar2->CachedClockState).LastCacheTickDeltaCpuCycles64) * fVar1 + fVar9;
      }
      goto LAB_146555644;
    }
  }
LAB_146555640:
  fVar9 = 0.0;
LAB_146555644:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  fVar9 = fVar9 + param_2;
  if (0.0 <= fVar9) {
    if ((fVar4 < fVar9) && (fVar9 = FGenericPlatformMath::Fmod(fVar9 - fVar4,fVar4), fVar9 == 0.0))
    {
      fVar9 = fVar4;
    }
  }
  else {
    fVar9 = FGenericPlatformMath::Fmod
                      ((float)((uint)fVar9 ^ __xmm_80000000800000008000000080000000),fVar4);
    if (fVar9 == 0.0) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = fVar4 - fVar9;
    }
  }
  return fVar9;
}

// GetBeatsPerMinute @ 1465557b0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UQuartzClockHandle::GetBeatsPerMinute(UQuartzClockHandle *this,UObject *param_1)

{
  bool bVar1;
  FQuartzClockTickRate local_38;
  
  Audio::FQuartzClockTickRate::FQuartzClockTickRate(&local_38);
  bVar1 = GetCurrentTickRate(this,param_1,&local_38);
  if (bVar1) {
    return (float)local_38.BeatsPerMinute;
  }
  return 0.0;
}

// GetCurrentTickRate @ 146555ef0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UQuartzClockHandle::GetCurrentTickRate
          (UQuartzClockHandle *this,UObject *param_1,FQuartzClockTickRate *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FQuartzClock *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *pTVar5;
  bool bVar6;
  FQuartzClockTickRate local_38;
  
  pTVar4 = (this->RawHandle).SharedQueue.WeakReferenceCount.ReferenceController;
  pTVar5 = (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146555f34;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar5 = (this->RawHandle).SharedQueue.Object;
  }
LAB_146555f34:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (pTVar5 == (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0) {
    Audio::FQuartzClockTickRate::FQuartzClockTickRate(&local_38);
    param_2->FramesPerTick = local_38.FramesPerTick;
    param_2->MillisecondsPerTick = local_38.MillisecondsPerTick;
    param_2->SecondsPerTick =
         (double)CONCAT44(local_38.SecondsPerTick._4_4_,local_38.SecondsPerTick._0_4_);
    param_2->ThirtySecondNotesPerMinute =
         (double)CONCAT44(local_38.ThirtySecondNotesPerMinute._4_4_,
                          local_38.ThirtySecondNotesPerMinute._0_4_);
    param_2->BeatsPerMinute =
         (double)CONCAT44(local_38.BeatsPerMinute._4_4_,local_38.BeatsPerMinute._0_4_);
    param_2->SampleRate = (double)CONCAT44(local_38.SampleRate._4_4_,local_38.SampleRate._0_4_);
    return false;
  }
  pTVar4 = (this->RawHandle).ClockWeakPtr.WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146555f70;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar1 = (this->RawHandle).ClockWeakPtr.Object;
    if (pFVar1 != (FQuartzClock *)0x0) {
      lpCriticalSection = &pFVar1->CachedClockStateCritSec;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_38.FramesPerTick = (pFVar1->CachedClockState).TickRate.FramesPerTick;
      local_38.MillisecondsPerTick = (pFVar1->CachedClockState).TickRate.MillisecondsPerTick;
      local_38.SecondsPerTick._0_4_ =
           *(undefined4 *)&(pFVar1->CachedClockState).TickRate.SecondsPerTick;
      local_38.SecondsPerTick._4_4_ =
           *(undefined4 *)((longlong)&(pFVar1->CachedClockState).TickRate.SecondsPerTick + 4);
      local_38.ThirtySecondNotesPerMinute._0_4_ =
           *(undefined4 *)&(pFVar1->CachedClockState).TickRate.ThirtySecondNotesPerMinute;
      local_38.ThirtySecondNotesPerMinute._4_4_ =
           *(undefined4 *)
            ((longlong)&(pFVar1->CachedClockState).TickRate.ThirtySecondNotesPerMinute + 4);
      local_38.BeatsPerMinute._0_4_ =
           *(undefined4 *)&(pFVar1->CachedClockState).TickRate.BeatsPerMinute;
      local_38.BeatsPerMinute._4_4_ =
           *(undefined4 *)((longlong)&(pFVar1->CachedClockState).TickRate.BeatsPerMinute + 4);
      local_38.SampleRate._0_4_ = *(undefined4 *)&(pFVar1->CachedClockState).TickRate.SampleRate;
      local_38.SampleRate._4_4_ =
           *(undefined4 *)((longlong)&(pFVar1->CachedClockState).TickRate.SampleRate + 4);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_146555f7a;
    }
  }
LAB_146555f70:
  Audio::FQuartzClockTickRate::FQuartzClockTickRate(&local_38);
LAB_146555f7a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  param_2->FramesPerTick = local_38.FramesPerTick;
  param_2->MillisecondsPerTick = local_38.MillisecondsPerTick;
  param_2->SecondsPerTick =
       (double)CONCAT44(local_38.SecondsPerTick._4_4_,local_38.SecondsPerTick._0_4_);
  param_2->ThirtySecondNotesPerMinute =
       (double)CONCAT44(local_38.ThirtySecondNotesPerMinute._4_4_,
                        local_38.ThirtySecondNotesPerMinute._0_4_);
  param_2->BeatsPerMinute =
       (double)CONCAT44(local_38.BeatsPerMinute._4_4_,local_38.BeatsPerMinute._0_4_);
  param_2->SampleRate = (double)CONCAT44(local_38.SampleRate._4_4_,local_38.SampleRate._0_4_);
  return true;
}

// GetCurrentTimestamp @ 1465561a0

/* WARNING: Enum "Type": Some values do not have unique names */

FQuartzTransportTimeStamp * __thiscall
UQuartzClockHandle::GetCurrentTimestamp
          (UQuartzClockHandle *this,FQuartzTransportTimeStamp *__return_storage_ptr__,
          UObject *param_1)

{
  Audio::FQuartzClockProxy::GetCurrentClockTimestamp(&this->RawHandle,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetDurationOfQuantizationTypeInSeconds @ 1465577c0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UQuartzClockHandle::GetDurationOfQuantizationTypeInSeconds
          (UQuartzClockHandle *this,UObject *param_1,EQuartzCommandQuantization *param_2,
          float param_3)

{
  FQuartzClock *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  float fVar5;
  
  pTVar3 = (this->RawHandle).ClockWeakPtr.WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1465577f1;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->RawHandle).ClockWeakPtr.Object;
    if (this_00 != (FQuartzClock *)0x0) {
      fVar5 = Audio::FQuartzClock::GetDurationOfQuantizationTypeInSeconds(this_00,param_2,param_3);
      goto LAB_1465577f4;
    }
  }
LAB_1465577f1:
  fVar5 = 0.0;
LAB_1465577f4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return fVar5;
}

// GetEstimatedRunTime @ 146557bb0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UQuartzClockHandle::GetEstimatedRunTime(UQuartzClockHandle *this,UObject *param_1)

{
  float fVar1;
  
  fVar1 = Audio::FQuartzClockProxy::GetEstimatedClockRunTimeSeconds(&this->RawHandle);
  return fVar1;
}

// GetMillisecondsPerTick @ 146558e90

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UQuartzClockHandle::GetMillisecondsPerTick(UQuartzClockHandle *this,UObject *param_1)

{
  bool bVar1;
  FQuartzClockTickRate local_38;
  
  Audio::FQuartzClockTickRate::FQuartzClockTickRate(&local_38);
  bVar1 = GetCurrentTickRate(this,param_1,&local_38);
  if (bVar1) {
    return (float)local_38.MillisecondsPerTick;
  }
  return 0.0;
}

// GetPrivateStaticClass @ 14655a0b0

UClass * __cdecl UQuartzClockHandle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UQuartzClockHandle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"QuartzClockHandle",
               &Z_Registration_Info_UClass_UQuartzClockHandle.InnerSingleton,
               StaticRegisterNativesUQuartzClockHandle,0x298,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UQuartzClockHandle>,
               InternalVTableHelperCtorCaller<UQuartzClockHandle>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UQuartzClockHandle.InnerSingleton;
}

// GetSecondsPerTick @ 14655a8a0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UQuartzClockHandle::GetSecondsPerTick(UQuartzClockHandle *this,UObject *param_1)

{
  bool bVar1;
  FQuartzClockTickRate local_38;
  
  Audio::FQuartzClockTickRate::FQuartzClockTickRate(&local_38);
  bVar1 = GetCurrentTickRate(this,param_1,&local_38);
  if (bVar1) {
    return (float)local_38.SecondsPerTick;
  }
  return 0.0;
}

// GetThirtySecondNotesPerMinute @ 14655b800

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UQuartzClockHandle::GetThirtySecondNotesPerMinute(UQuartzClockHandle *this,UObject *param_1)

{
  bool bVar1;
  FQuartzClockTickRate local_38;
  
  Audio::FQuartzClockTickRate::FQuartzClockTickRate(&local_38);
  bVar1 = GetCurrentTickRate(this,param_1,&local_38);
  if (bVar1) {
    return (float)local_38.ThirtySecondNotesPerMinute;
  }
  return 0.0;
}

// GetTicksPerSecond @ 14655baa0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UQuartzClockHandle::GetTicksPerSecond(UQuartzClockHandle *this,UObject *param_1)

{
  bool bVar1;
  FQuartzClockTickRate local_38;
  
  Audio::FQuartzClockTickRate::FQuartzClockTickRate(&local_38);
  bVar1 = GetCurrentTickRate(this,param_1,&local_38);
  if ((bVar1) &&
     (__real_322bcc77 <
      (float)((uint)(float)local_38.SecondsPerTick & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    return __real_3f800000 / (float)local_38.SecondsPerTick;
  }
  return 0.0;
}

// IsClockRunning @ 146560fe0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UQuartzClockHandle::IsClockRunning(UQuartzClockHandle *this,UObject *param_1)

{
  bool bVar1;
  
  bVar1 = Audio::FQuartzClockProxy::IsClockRunning(&this->RawHandle);
  return bVar1;
}

// NotifyOnQuantizationBoundary @ 146562a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzClockHandle::NotifyOnQuantizationBoundary
          (UQuartzClockHandle *this,UObject *param_1,FQuartzQuantizationBoundary *param_2,
          FOnQuartzCommandEventBP *param_3,float param_4)

{
  FScriptContainerElement *pFVar1;
  FQuartzQuantizedRequestData local_f8;
  code *local_98 [5];
  undefined8 *local_70;
  FQuartzQuantizedRequestData local_68;
  
  UQuartzSubsystem::CreateRequestDataForQuantizedNotify(&local_68,this,param_2,param_3,param_4);
  Audio::FQuartzQuantizedRequestData::FQuartzQuantizedRequestData(&local_f8,&local_68);
  local_98[0] = (code *)0x0;
  local_70 = FMemory::Malloc(0x60,8);
  *local_70 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UQuartzClockHandle::NotifyOnQuantizationBoundary'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  *(FName *)(local_70 + 1) = local_f8.ClockName;
  *(FName *)(local_70 + 2) = local_f8.OtherClockName;
  local_70[3] = local_f8.QuantizedCommandPtr.Object;
  local_70[4] = local_f8.QuantizedCommandPtr.SharedReferenceCount.ReferenceController;
  local_f8.QuantizedCommandPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_f8.QuantizedCommandPtr.Object = (IQuartzQuantizedCommand *)0x0;
  *(EQuartzCommandQuantization *)(local_70 + 5) = local_f8.QuantizationBoundary.Quantization;
  *(float *)((longlong)local_70 + 0x2c) = local_f8.QuantizationBoundary.Multiplier;
  *(EQuarztQuantizationReference *)(local_70 + 6) =
       local_f8.QuantizationBoundary.CountingReferencePoint;
  *(bool *)((longlong)local_70 + 0x31) = local_f8.QuantizationBoundary.bFireOnClockStart;
  *(bool *)((longlong)local_70 + 0x32) =
       local_f8.QuantizationBoundary.bCancelCommandIfClockIsNotRunning;
  *(bool *)((longlong)local_70 + 0x33) = local_f8.QuantizationBoundary.bResetClockOnQueued;
  local_70[7] = 0;
  *(bool *)((longlong)local_70 + 0x34) = local_f8.QuantizationBoundary.bResumeClockOnQueued;
  local_70[7] = local_f8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data;
  local_f8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(int *)(local_70 + 8) = local_f8.QuantizationBoundary.GameThreadSubscribers.ArrayNum;
  *(int *)((longlong)local_70 + 0x44) = local_f8.QuantizationBoundary.GameThreadSubscribers.ArrayMax
  ;
  local_f8.QuantizationBoundary.GameThreadSubscribers.ArrayNum = 0;
  local_f8.QuantizationBoundary.GameThreadSubscribers.ArrayMax = 0;
  local_70[9] = 0;
  local_70[9] = local_f8.GameThreadSubscribers.AllocatorInstance.Data;
  local_f8.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_70 + 10) = local_f8.GameThreadSubscribers.ArrayNum;
  *(int *)((longlong)local_70 + 0x54) = local_f8.GameThreadSubscribers.ArrayMax;
  local_f8.GameThreadSubscribers.ArrayNum = 0;
  local_f8.GameThreadSubscribers.ArrayMax = 0;
  *(int *)(local_70 + 0xb) = local_f8.GameThreadDelegateID;
  if ((FName *)(local_70 + 1) != (FName *)0x0) {
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UQuartzClockHandle::NotifyOnQuantizationBoundary'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
                  ::Call;
  }
  Audio::FQuartzClockProxy::SendCommandToClock
            (&this->RawHandle,(TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_98);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_f8.GameThreadSubscribers.AllocatorInstance.Data,
             local_f8.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)local_f8.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_f8.GameThreadSubscribers.AllocatorInstance.Data);
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             local_f8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data,
             local_f8.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)
      local_f8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_f8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.QuantizedCommandPtr.SharedReferenceCount.ReferenceController);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_68.GameThreadSubscribers.AllocatorInstance.Data,
             local_68.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)local_68.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_68.GameThreadSubscribers.AllocatorInstance.Data);
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             local_68.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data,
             local_68.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)
      local_68.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_68.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.QuantizedCommandPtr.SharedReferenceCount.ReferenceController);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)(param_2->GameThreadSubscribers).AllocatorInstance.Data,
             (param_2->GameThreadSubscribers).ArrayNum);
  pFVar1 = (param_2->GameThreadSubscribers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// PauseClock @ 1465664c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzClockHandle::PauseClock
          (UQuartzClockHandle *this,UObject *param_1,UQuartzClockHandle **param_2)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  *param_2 = this;
  local_28 = &
             ___7__TFunction_OwnedObject_P6AXPEAVFQuartzClock_Audio___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_10 = 0;
  local_20 = `UQuartzClockHandle::PauseClock'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(Audio::FQuartzClock_*),void,Audio::FQuartzClock_*>
                ::Call;
  Audio::FQuartzClockProxy::SendCommandToClock
            (&this->RawHandle,(TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_38);
  return;
}

// ProcessCommand @ 146569d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzClockHandle::ProcessCommand(UQuartzClockHandle *this,FQuartzMetronomeDelegateData *param_1)

{
  return;
}

// ProcessCommand @ 146569d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzClockHandle::ProcessCommand
          (UQuartzClockHandle *this,FQuartzQuantizedCommandDelegateData *param_1)

{
  return;
}

// QueueQuantizedSound @ 14656a580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzClockHandle::QueueQuantizedSound
          (UQuartzClockHandle *this,UObject *param_1,UQuartzClockHandle **param_2,
          FAudioComponentCommandInfo *param_3,FOnQuartzCommandEventBP *param_4,
          FQuartzQuantizationBoundary *param_5)

{
  TOptional<TTuple<EQuartzCommandQuantization,double>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
  *pTVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  int iVar9;
  IQuartzQuantizedCommand *pIVar10;
  FQuartzQuantizationBoundary local_128;
  ForAnyElementType local_108;
  undefined8 local_100;
  int local_f8;
  undefined8 local_f0;
  FSharedReferencer<1> local_e8;
  undefined8 local_e0;
  FSharedReferencer<1> local_d8 [2];
  FQuartzQuantizedRequestData local_c8;
  undefined8 local_68;
  TReferenceControllerBase<1> *pTStack_60;
  code *local_58 [5];
  undefined8 *local_30;
  
  *param_2 = this;
  pTVar8 = ::operator_new(200);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pIVar10 = (IQuartzQuantizedCommand *)&DAT_00000010;
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFQuantizedQueueCommand_Audio___00_SharedPointerInternals__6B_
    ;
    Audio::IQuartzQuantizedCommand::IQuartzQuantizedCommand((IQuartzQuantizedCommand *)(pTVar8 + 1))
    ;
    pTVar8[1]._padding_ = (longlong)&___7FQuantizedQueueCommand_Audio__6B_;
    pTVar8[5]._padding_ = 0;
    pTVar8[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[5].WeakReferenceCount = (atomic<int>)0x0;
    Audio::FQuartzOffset::FQuartzOffset((FQuartzOffset *)(pTVar8 + 6),0.0);
    pTVar8[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[8].WeakReferenceCount = (atomic<int>)0x0;
    pIVar10 = (IQuartzQuantizedCommand *)(pTVar8 + 1);
    pTVar8[9]._padding_ = 0;
    *(undefined2 *)&pTVar8[9].SharedReferenceCount = 0;
    pTVar8[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar8[10]._padding_ = 0x13;
    *(undefined4 *)((longlong)&pTVar8[10]._padding_ + 4) = 0x3f800000;
    pTVar8[10].SharedReferenceCount = (atomic<int>)0x100;
    *(undefined1 *)&pTVar8[10].WeakReferenceCount = 0;
    pTVar8[0xb]._padding_ = 0;
    pTVar8[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0xb].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar8[0xc]._padding_ = 0xffffffff;
    if (pIVar10 == (IQuartzQuantizedCommand *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    if (pIVar10 == (IQuartzQuantizedCommand *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  if (param_3 != (FAudioComponentCommandInfo *)&pIVar10[1]._padding_) {
    if ((param_3->Subscriber).Offset.OffsetInMilliseconds.bIsSet == false) {
      if ((char)pIVar10[1]._padding_ != '\0') {
        *(undefined1 *)&pIVar10[1]._padding_ = 0;
      }
    }
    else {
      pIVar10[1]._padding_ = (longlong)(param_3->Subscriber).Offset.OffsetInMilliseconds.TypedValue;
      *(undefined1 *)&pIVar10[1]._padding_ = 1;
    }
  }
  pTVar1 = &(param_3->Subscriber).Offset.OffsetAsDuration;
  if (pTVar1 != (TOptional<TTuple<EQuartzCommandQuantization,double>_> *)&pIVar10[1]._padding_) {
    if ((param_3->Subscriber).Offset.OffsetAsDuration.bIsSet == false) {
      if ((char)pIVar10[1].GameThreadSubscribers.ArrayNum != '\0') {
        *(undefined1 *)&pIVar10[1].GameThreadSubscribers.ArrayNum = 0;
      }
    }
    else {
      pFVar5 = *(FScriptContainerElement **)
                &(param_3->Subscriber).Offset.OffsetAsDuration.TypedValue.field_0x8;
      pIVar10[1]._padding_ = *(longlong *)&pTVar1->TypedValue;
      pIVar10[1].GameThreadSubscribers.AllocatorInstance.Data = pFVar5;
      *(undefined1 *)&pIVar10[1].GameThreadSubscribers.ArrayNum = 1;
    }
  }
  pTVar2 = (param_3->Subscriber).Queue.SharedReferenceCount.ReferenceController;
  pTVar3 = (param_3->Subscriber).Queue.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68 = *(undefined8 *)&pIVar10[1].GameThreadDelegateID;
  pTStack_60 = (TReferenceControllerBase<1> *)pIVar10[2]._padding_;
  *(TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
    **)&pIVar10[1].GameThreadDelegateID = pTVar3;
  pIVar10[2]._padding_ = (longlong)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  *(bool *)&pIVar10[2]._padding_ = (param_3->Subscriber).bOffsetConvertedToFrames;
  ((atomic<int> *)&pIVar10[2]._padding_)->field_0x1 =
       (param_3->Subscriber).bHasBeenNotifiedOfAboutToStart;
  ((atomic<int> *)&pIVar10[2]._padding_)[1] = (atomic<int>)(param_3->Subscriber).OffsetInAudioFrames
  ;
  FQuartzQuantizationBoundary::operator=
            ((FQuartzQuantizationBoundary *)&pIVar10[2]._padding_,&param_3->AnticipatoryBoundary);
  pIVar10[2].GameThreadSubscribers.ArrayNum = param_3->CommandID;
  UQuartzSubsystem::CreateRequestDataForSchedulePlaySound(&local_c8,*param_2,param_4,param_5);
  local_e8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_c8.QuantizedCommandPtr.Object = (IQuartzQuantizedCommand *)0x0;
  local_f0 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_c8.QuantizedCommandPtr.SharedReferenceCount,&local_e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.ReferenceController);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e0 = 0;
  local_d8[0].ReferenceController = pTVar8;
  local_c8.QuantizedCommandPtr.Object = pIVar10;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_c8.QuantizedCommandPtr.SharedReferenceCount,local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8[0].ReferenceController);
  FVar6.ReferenceController = local_c8.QuantizedCommandPtr.SharedReferenceCount.ReferenceController;
  pIVar10 = local_c8.QuantizedCommandPtr.Object;
  if (local_c8.QuantizedCommandPtr.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.QuantizedCommandPtr.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.QuantizedCommandPtr.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FQuartzQuantizationBoundary::FQuartzQuantizationBoundary
            (&local_128,&local_c8.QuantizationBoundary);
  local_108.Data = (FScriptContainerElement *)0x0;
  iVar9 = local_c8.GameThreadSubscribers.ArrayNum;
  local_100 = CONCAT44(local_100._4_4_,iVar9);
  if (iVar9 == 0) {
    local_100 = local_c8.GameThreadSubscribers._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar9,0,&local_108,iVar9,(int *)((longlong)&local_100 + 4));
    ConstructItems<Audio::FQuartzGameThreadSubscriber,Audio::FQuartzGameThreadSubscriber,int>
              (local_108.Data,
               (FQuartzGameThreadSubscriber *)local_c8.GameThreadSubscribers.AllocatorInstance.Data,
               iVar9);
  }
  local_f8 = local_c8.GameThreadDelegateID;
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x60,8);
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UQuartzClockHandle::QueueQuantizedSound'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  *(FName *)(local_30 + 1) = local_c8.ClockName;
  *(FName *)(local_30 + 2) = local_c8.OtherClockName;
  local_30[3] = pIVar10;
  local_30[4] = FVar6.ReferenceController;
  *(EQuartzCommandQuantization *)(local_30 + 5) = local_128.Quantization;
  *(float *)((longlong)local_30 + 0x2c) = local_128.Multiplier;
  *(EQuarztQuantizationReference *)(local_30 + 6) = local_128.CountingReferencePoint;
  *(bool *)((longlong)local_30 + 0x31) = local_128.bFireOnClockStart;
  *(bool *)((longlong)local_30 + 0x32) = local_128.bCancelCommandIfClockIsNotRunning;
  *(bool *)((longlong)local_30 + 0x33) = local_128.bResetClockOnQueued;
  local_30[7] = 0;
  *(bool *)((longlong)local_30 + 0x34) = local_128.bResumeClockOnQueued;
  local_30[7] = local_128.GameThreadSubscribers.AllocatorInstance.Data;
  local_128.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_30 + 8) = local_128.GameThreadSubscribers.ArrayNum;
  *(int *)((longlong)local_30 + 0x44) = local_128.GameThreadSubscribers.ArrayMax;
  local_128.GameThreadSubscribers.ArrayNum = 0;
  local_128.GameThreadSubscribers.ArrayMax = 0;
  local_30[9] = 0;
  local_30[9] = local_108.Data;
  local_108.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_30 + 10) = (int)local_100;
  *(undefined4 *)((longlong)local_30 + 0x54) = local_100._4_4_;
  local_100 = 0;
  *(int *)(local_30 + 0xb) = local_f8;
  if ((FName *)(local_30 + 1) != (FName *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UQuartzClockHandle::QueueQuantizedSound'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
                  ::Call;
  }
  Audio::FQuartzClockProxy::SendCommandToClock
            (&this->RawHandle,(TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_58);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_108.Data,(int)local_100);
  if ((FQuartzGameThreadSubscriber *)local_108.Data != (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_108.Data);
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_128.GameThreadSubscribers.AllocatorInstance.Data,
             local_128.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)local_128.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_128.GameThreadSubscribers.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_c8.GameThreadSubscribers.AllocatorInstance.Data,
             iVar9);
  if ((FQuartzGameThreadSubscriber *)local_c8.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_c8.GameThreadSubscribers.AllocatorInstance.Data);
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             local_c8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data,
             local_c8.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)
      local_c8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_c8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.QuantizedCommandPtr.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// ResetTransport @ 14656fe10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzClockHandle::ResetTransport
          (UQuartzClockHandle *this,UObject *param_1,FOnQuartzCommandEventBP *param_2)

{
  ForAnyElementType FVar1;
  FQuartzQuantizedRequestData local_f8;
  undefined1 local_98 [8];
  undefined4 local_90;
  bool local_8c;
  ForAnyElementType local_88;
  undefined8 local_80;
  undefined8 *local_70;
  FQuartzQuantizedRequestData local_68;
  
  local_98._0_4_ = local_98._0_4_ & 0xffffff00;
  local_98._4_4_ = 1.0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0;
  local_90 = 0x100;
  local_8c = false;
  UQuartzSubsystem::CreateRequestDataForTransportReset
            (&local_68,this,(FQuartzQuantizationBoundary *)local_98,param_2);
  FVar1.Data = local_88.Data;
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_88.Data,(int)local_80);
  if ((FQuartzGameThreadSubscriber *)FVar1.Data != (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  Audio::FQuartzQuantizedRequestData::FQuartzQuantizedRequestData(&local_f8,&local_68);
  local_98 = (undefined1  [8])0x0;
  local_70 = FMemory::Malloc(0x60,8);
  *local_70 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UQuartzClockHandle::ResetTransport'::`2'::<lambda_1>,0,1>::
               _vftable_;
  *(FName *)(local_70 + 1) = local_f8.ClockName;
  *(FName *)(local_70 + 2) = local_f8.OtherClockName;
  local_70[3] = local_f8.QuantizedCommandPtr.Object;
  local_70[4] = local_f8.QuantizedCommandPtr.SharedReferenceCount.ReferenceController;
  local_f8.QuantizedCommandPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_f8.QuantizedCommandPtr.Object = (IQuartzQuantizedCommand *)0x0;
  *(EQuartzCommandQuantization *)(local_70 + 5) = local_f8.QuantizationBoundary.Quantization;
  *(float *)((longlong)local_70 + 0x2c) = local_f8.QuantizationBoundary.Multiplier;
  *(EQuarztQuantizationReference *)(local_70 + 6) =
       local_f8.QuantizationBoundary.CountingReferencePoint;
  *(bool *)((longlong)local_70 + 0x31) = local_f8.QuantizationBoundary.bFireOnClockStart;
  *(bool *)((longlong)local_70 + 0x32) =
       local_f8.QuantizationBoundary.bCancelCommandIfClockIsNotRunning;
  *(bool *)((longlong)local_70 + 0x33) = local_f8.QuantizationBoundary.bResetClockOnQueued;
  local_70[7] = 0;
  *(bool *)((longlong)local_70 + 0x34) = local_f8.QuantizationBoundary.bResumeClockOnQueued;
  local_70[7] = local_f8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data;
  local_f8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(int *)(local_70 + 8) = local_f8.QuantizationBoundary.GameThreadSubscribers.ArrayNum;
  *(int *)((longlong)local_70 + 0x44) = local_f8.QuantizationBoundary.GameThreadSubscribers.ArrayMax
  ;
  local_f8.QuantizationBoundary.GameThreadSubscribers.ArrayNum = 0;
  local_f8.QuantizationBoundary.GameThreadSubscribers.ArrayMax = 0;
  local_70[9] = 0;
  local_70[9] = local_f8.GameThreadSubscribers.AllocatorInstance.Data;
  local_f8.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_70 + 10) = local_f8.GameThreadSubscribers.ArrayNum;
  *(int *)((longlong)local_70 + 0x54) = local_f8.GameThreadSubscribers.ArrayMax;
  local_f8.GameThreadSubscribers.ArrayNum = 0;
  local_f8.GameThreadSubscribers.ArrayMax = 0;
  *(int *)(local_70 + 0xb) = local_f8.GameThreadDelegateID;
  if ((FName *)(local_70 + 1) != (FName *)0x0) {
    local_98 = (undefined1  [8])
               UE::Core::Private::Function::
               TFunctionRefCaller<`UQuartzClockHandle::ResetTransport'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
               ::Call;
  }
  Audio::FQuartzClockProxy::SendCommandToClock
            (&this->RawHandle,(TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_98);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_f8.GameThreadSubscribers.AllocatorInstance.Data,
             local_f8.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)local_f8.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_f8.GameThreadSubscribers.AllocatorInstance.Data);
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             local_f8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data,
             local_f8.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)
      local_f8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_f8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.QuantizedCommandPtr.SharedReferenceCount.ReferenceController);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_68.GameThreadSubscribers.AllocatorInstance.Data,
             local_68.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)local_68.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_68.GameThreadSubscribers.AllocatorInstance.Data);
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             local_68.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data,
             local_68.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)
      local_68.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_68.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.QuantizedCommandPtr.SharedReferenceCount.ReferenceController);
  return;
}

// ResetTransportQuantized @ 146570040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzClockHandle::ResetTransportQuantized
          (UQuartzClockHandle *this,UObject *param_1,FQuartzQuantizationBoundary *param_2,
          FOnQuartzCommandEventBP *param_3,UQuartzClockHandle **param_4)

{
  FScriptContainerElement *pFVar1;
  FQuartzQuantizedRequestData local_f8;
  code *local_98 [5];
  undefined8 *local_70;
  FQuartzQuantizedRequestData local_68;
  
  *param_4 = this;
  UQuartzSubsystem::CreateRequestDataForTransportReset(&local_68,this,param_2,param_3);
  Audio::FQuartzQuantizedRequestData::FQuartzQuantizedRequestData(&local_f8,&local_68);
  local_98[0] = (code *)0x0;
  local_70 = FMemory::Malloc(0x60,8);
  *local_70 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UQuartzClockHandle::ResetTransportQuantized'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  *(FName *)(local_70 + 1) = local_f8.ClockName;
  *(FName *)(local_70 + 2) = local_f8.OtherClockName;
  local_70[3] = local_f8.QuantizedCommandPtr.Object;
  local_70[4] = local_f8.QuantizedCommandPtr.SharedReferenceCount.ReferenceController;
  local_f8.QuantizedCommandPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_f8.QuantizedCommandPtr.Object = (IQuartzQuantizedCommand *)0x0;
  *(EQuartzCommandQuantization *)(local_70 + 5) = local_f8.QuantizationBoundary.Quantization;
  *(float *)((longlong)local_70 + 0x2c) = local_f8.QuantizationBoundary.Multiplier;
  *(EQuarztQuantizationReference *)(local_70 + 6) =
       local_f8.QuantizationBoundary.CountingReferencePoint;
  *(bool *)((longlong)local_70 + 0x31) = local_f8.QuantizationBoundary.bFireOnClockStart;
  *(bool *)((longlong)local_70 + 0x32) =
       local_f8.QuantizationBoundary.bCancelCommandIfClockIsNotRunning;
  *(bool *)((longlong)local_70 + 0x33) = local_f8.QuantizationBoundary.bResetClockOnQueued;
  local_70[7] = 0;
  *(bool *)((longlong)local_70 + 0x34) = local_f8.QuantizationBoundary.bResumeClockOnQueued;
  local_70[7] = local_f8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data;
  local_f8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(int *)(local_70 + 8) = local_f8.QuantizationBoundary.GameThreadSubscribers.ArrayNum;
  *(int *)((longlong)local_70 + 0x44) = local_f8.QuantizationBoundary.GameThreadSubscribers.ArrayMax
  ;
  local_f8.QuantizationBoundary.GameThreadSubscribers.ArrayNum = 0;
  local_f8.QuantizationBoundary.GameThreadSubscribers.ArrayMax = 0;
  local_70[9] = 0;
  local_70[9] = local_f8.GameThreadSubscribers.AllocatorInstance.Data;
  local_f8.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_70 + 10) = local_f8.GameThreadSubscribers.ArrayNum;
  *(int *)((longlong)local_70 + 0x54) = local_f8.GameThreadSubscribers.ArrayMax;
  local_f8.GameThreadSubscribers.ArrayNum = 0;
  local_f8.GameThreadSubscribers.ArrayMax = 0;
  *(int *)(local_70 + 0xb) = local_f8.GameThreadDelegateID;
  if ((FName *)(local_70 + 1) != (FName *)0x0) {
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UQuartzClockHandle::ResetTransportQuantized'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
                  ::Call;
  }
  Audio::FQuartzClockProxy::SendCommandToClock
            (&this->RawHandle,(TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_98);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_f8.GameThreadSubscribers.AllocatorInstance.Data,
             local_f8.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)local_f8.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_f8.GameThreadSubscribers.AllocatorInstance.Data);
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             local_f8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data,
             local_f8.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)
      local_f8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_f8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.QuantizedCommandPtr.SharedReferenceCount.ReferenceController);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_68.GameThreadSubscribers.AllocatorInstance.Data,
             local_68.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)local_68.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_68.GameThreadSubscribers.AllocatorInstance.Data);
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             local_68.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data,
             local_68.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)
      local_68.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_68.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.QuantizedCommandPtr.SharedReferenceCount.ReferenceController);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)(param_2->GameThreadSubscribers).AllocatorInstance.Data,
             (param_2->GameThreadSubscribers).ArrayNum);
  pFVar1 = (param_2->GameThreadSubscribers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ResumeClock @ 146570560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzClockHandle::ResumeClock
          (UQuartzClockHandle *this,UObject *param_1,UQuartzClockHandle **param_2)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  *param_2 = this;
  local_28 = &
             ___7__TFunction_OwnedObject_P6AXPEAVFQuartzClock_Audio___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_10 = 0;
  local_20 = `UQuartzClockHandle::ResumeClock'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(Audio::FQuartzClock_*),void,Audio::FQuartzClock_*>
                ::Call;
  Audio::FQuartzClockProxy::SendCommandToClock
            (&this->RawHandle,(TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_38);
  return;
}

// SetBeatsPerMinute @ 146572980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzClockHandle::SetBeatsPerMinute
          (UQuartzClockHandle *this,UObject *param_1,FQuartzQuantizationBoundary *param_2,
          FOnQuartzCommandEventBP *param_3,UQuartzClockHandle **param_4,float param_5)

{
  FString local_58;
  FQuartzClockTickRate local_48;
  
  *param_4 = this;
  if ((param_5 < 0.0) ||
     ((float)((uint)param_5 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    if (2 < (byte)LogAudioQuartz._0_1_) {
      ::FName::ToString(&this->CurrentClockId,&local_58);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    Audio::FQuartzClockTickRate::FQuartzClockTickRate(&local_48);
    Audio::FQuartzClockTickRate::SetBeatsPerMinute(&local_48,(double)param_5);
    SetTickRateInternal(this,param_2,param_3,&local_48);
  }
  return;
}

// SetMillisecondsPerTick @ 146573170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzClockHandle::SetMillisecondsPerTick
          (UQuartzClockHandle *this,UObject *param_1,FQuartzQuantizationBoundary *param_2,
          FOnQuartzCommandEventBP *param_3,UQuartzClockHandle **param_4,float param_5)

{
  FString local_58;
  FQuartzClockTickRate local_48;
  
  *param_4 = this;
  if ((param_5 < 0.0) ||
     ((float)((uint)param_5 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    if (2 < (byte)LogAudioQuartz._0_1_) {
      ::FName::ToString(&this->CurrentClockId,&local_58);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    Audio::FQuartzClockTickRate::FQuartzClockTickRate(&local_48);
    Audio::FQuartzClockTickRate::SetMillisecondsPerTick(&local_48,(double)param_5);
    SetTickRateInternal(this,param_2,param_3,&local_48);
  }
  return;
}

// SetSecondsPerTick @ 146574420

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzClockHandle::SetSecondsPerTick
          (UQuartzClockHandle *this,UObject *param_1,FQuartzQuantizationBoundary *param_2,
          FOnQuartzCommandEventBP *param_3,UQuartzClockHandle **param_4,float param_5)

{
  FString local_58;
  FQuartzClockTickRate local_48;
  
  *param_4 = this;
  if ((param_5 < 0.0) ||
     ((float)((uint)param_5 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    if (2 < (byte)LogAudioQuartz._0_1_) {
      ::FName::ToString(&this->CurrentClockId,&local_58);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    Audio::FQuartzClockTickRate::FQuartzClockTickRate(&local_48);
    Audio::FQuartzClockTickRate::SetSecondsPerTick(&local_48,(double)param_5);
    SetTickRateInternal(this,param_2,param_3,&local_48);
  }
  return;
}

// SetThirtySecondNotesPerMinute @ 146574e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzClockHandle::SetThirtySecondNotesPerMinute
          (UQuartzClockHandle *this,UObject *param_1,FQuartzQuantizationBoundary *param_2,
          FOnQuartzCommandEventBP *param_3,UQuartzClockHandle **param_4,float param_5)

{
  FString local_58;
  FQuartzClockTickRate local_48;
  
  *param_4 = this;
  if ((param_5 < 0.0) ||
     ((float)((uint)param_5 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    if (2 < (byte)LogAudioQuartz._0_1_) {
      ::FName::ToString(&this->CurrentClockId,&local_58);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    Audio::FQuartzClockTickRate::FQuartzClockTickRate(&local_48);
    Audio::FQuartzClockTickRate::SetThirtySecondNotesPerMinute(&local_48,(double)param_5);
    SetTickRateInternal(this,param_2,param_3,&local_48);
  }
  return;
}

// SetTickRateInternal @ 1465751e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzClockHandle::SetTickRateInternal
          (UQuartzClockHandle *this,FQuartzQuantizationBoundary *param_1,
          FOnQuartzCommandEventBP *param_2,FQuartzClockTickRate *param_3)

{
  FQuartzQuantizedRequestData local_f8;
  code *local_98 [5];
  undefined8 *local_70;
  FQuartzQuantizedRequestData local_68;
  
  UQuartzSubsystem::CreateRequestDataForTickRateChange(&local_68,this,param_2,param_3,param_1);
  Audio::FQuartzQuantizedRequestData::FQuartzQuantizedRequestData(&local_f8,&local_68);
  local_98[0] = (code *)0x0;
  local_70 = FMemory::Malloc(0x60,8);
  *local_70 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UQuartzClockHandle::SetTickRateInternal'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  *(FName *)(local_70 + 1) = local_f8.ClockName;
  *(FName *)(local_70 + 2) = local_f8.OtherClockName;
  local_70[3] = local_f8.QuantizedCommandPtr.Object;
  local_70[4] = local_f8.QuantizedCommandPtr.SharedReferenceCount.ReferenceController;
  local_f8.QuantizedCommandPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_f8.QuantizedCommandPtr.Object = (IQuartzQuantizedCommand *)0x0;
  *(EQuartzCommandQuantization *)(local_70 + 5) = local_f8.QuantizationBoundary.Quantization;
  *(float *)((longlong)local_70 + 0x2c) = local_f8.QuantizationBoundary.Multiplier;
  *(EQuarztQuantizationReference *)(local_70 + 6) =
       local_f8.QuantizationBoundary.CountingReferencePoint;
  *(bool *)((longlong)local_70 + 0x31) = local_f8.QuantizationBoundary.bFireOnClockStart;
  *(bool *)((longlong)local_70 + 0x32) =
       local_f8.QuantizationBoundary.bCancelCommandIfClockIsNotRunning;
  *(bool *)((longlong)local_70 + 0x33) = local_f8.QuantizationBoundary.bResetClockOnQueued;
  local_70[7] = 0;
  *(bool *)((longlong)local_70 + 0x34) = local_f8.QuantizationBoundary.bResumeClockOnQueued;
  local_70[7] = local_f8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data;
  local_f8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(int *)(local_70 + 8) = local_f8.QuantizationBoundary.GameThreadSubscribers.ArrayNum;
  *(int *)((longlong)local_70 + 0x44) = local_f8.QuantizationBoundary.GameThreadSubscribers.ArrayMax
  ;
  local_f8.QuantizationBoundary.GameThreadSubscribers.ArrayNum = 0;
  local_f8.QuantizationBoundary.GameThreadSubscribers.ArrayMax = 0;
  local_70[9] = 0;
  local_70[9] = local_f8.GameThreadSubscribers.AllocatorInstance.Data;
  local_f8.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_70 + 10) = local_f8.GameThreadSubscribers.ArrayNum;
  *(int *)((longlong)local_70 + 0x54) = local_f8.GameThreadSubscribers.ArrayMax;
  local_f8.GameThreadSubscribers.ArrayNum = 0;
  local_f8.GameThreadSubscribers.ArrayMax = 0;
  *(int *)(local_70 + 0xb) = local_f8.GameThreadDelegateID;
  if ((FName *)(local_70 + 1) != (FName *)0x0) {
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UQuartzClockHandle::SetTickRateInternal'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
                  ::Call;
  }
  Audio::FQuartzClockProxy::SendCommandToClock
            (&this->RawHandle,(TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_98);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_f8.GameThreadSubscribers.AllocatorInstance.Data,
             local_f8.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)local_f8.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_f8.GameThreadSubscribers.AllocatorInstance.Data);
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             local_f8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data,
             local_f8.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)
      local_f8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_f8.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.QuantizedCommandPtr.SharedReferenceCount.ReferenceController);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_68.GameThreadSubscribers.AllocatorInstance.Data,
             local_68.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)local_68.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_68.GameThreadSubscribers.AllocatorInstance.Data);
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             local_68.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data,
             local_68.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)
      local_68.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_68.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.QuantizedCommandPtr.SharedReferenceCount.ReferenceController);
  return;
}

// SetTicksPerSecond @ 1465753c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzClockHandle::SetTicksPerSecond
          (UQuartzClockHandle *this,UObject *param_1,FQuartzQuantizationBoundary *param_2,
          FOnQuartzCommandEventBP *param_3,UQuartzClockHandle **param_4,float param_5)

{
  FString local_58;
  FQuartzClockTickRate local_48;
  
  *param_4 = this;
  if ((param_5 < 0.0) ||
     ((float)((uint)param_5 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    if (2 < (byte)LogAudioQuartz._0_1_) {
      ::FName::ToString(&this->CurrentClockId,&local_58);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    Audio::FQuartzClockTickRate::FQuartzClockTickRate(&local_48);
    Audio::FQuartzClockTickRate::SetSecondsPerTick(&local_48,(double)(__real_3f800000 / param_5));
    SetTickRateInternal(this,param_2,param_3,&local_48);
  }
  return;
}

// ShouldUnsubscribe @ 1465764a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UQuartzClockHandle::ShouldUnsubscribe(UQuartzClockHandle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar4 = pTVar5;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1465764d1;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar5 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar4 = pTVar1;
  }
LAB_1465764d1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return pTVar5 == (TReferenceControllerBase<1> *)0x0;
}

// StartClock @ 146576da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzClockHandle::StartClock
          (UQuartzClockHandle *this,UObject *param_1,UQuartzClockHandle **param_2)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  *param_2 = this;
  local_28 = &
             ___7__TFunction_OwnedObject_P6AXPEAVFQuartzClock_Audio___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_10 = 0;
  local_20 = `UQuartzClockHandle::ResumeClock'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(Audio::FQuartzClock_*),void,Audio::FQuartzClock_*>
                ::Call;
  Audio::FQuartzClockProxy::SendCommandToClock
            (&this->RawHandle,(TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_38);
  return;
}

// StartOtherClock @ 146576fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzClockHandle::StartOtherClock
          (UQuartzClockHandle *this,UObject *param_1,FName param_2,
          FQuartzQuantizationBoundary *param_3,FOnQuartzCommandEventBP *param_4)

{
  FScriptContainerElement *pFVar1;
  FQuartzQuantizedRequestData local_108;
  FString local_b0;
  code *local_98 [5];
  undefined8 *local_70;
  FQuartzQuantizedRequestData local_68;
  
  if (param_2 == this->CurrentClockId) {
    if (2 < (byte)LogAudioQuartz._0_1_) {
      ::FName::ToString(&this->CurrentClockId,&local_b0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    UQuartzSubsystem::CreateRequestDataForStartOtherClock(&local_68,this,param_2,param_3,param_4);
    Audio::FQuartzQuantizedRequestData::FQuartzQuantizedRequestData(&local_108,&local_68);
    local_98[0] = (code *)0x0;
    local_70 = FMemory::Malloc(0x60,8);
    *local_70 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UQuartzClockHandle::StartOtherClock'::`2'::<lambda_1>,0,1>::
                 _vftable_;
    *(FName *)(local_70 + 1) = local_108.ClockName;
    *(FName *)(local_70 + 2) = local_108.OtherClockName;
    local_70[3] = local_108.QuantizedCommandPtr.Object;
    local_70[4] = local_108.QuantizedCommandPtr.SharedReferenceCount.ReferenceController;
    local_108.QuantizedCommandPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_108.QuantizedCommandPtr.Object = (IQuartzQuantizedCommand *)0x0;
    *(EQuartzCommandQuantization *)(local_70 + 5) = local_108.QuantizationBoundary.Quantization;
    *(float *)((longlong)local_70 + 0x2c) = local_108.QuantizationBoundary.Multiplier;
    *(EQuarztQuantizationReference *)(local_70 + 6) =
         local_108.QuantizationBoundary.CountingReferencePoint;
    *(bool *)((longlong)local_70 + 0x31) = local_108.QuantizationBoundary.bFireOnClockStart;
    *(bool *)((longlong)local_70 + 0x32) =
         local_108.QuantizationBoundary.bCancelCommandIfClockIsNotRunning;
    *(bool *)((longlong)local_70 + 0x33) = local_108.QuantizationBoundary.bResetClockOnQueued;
    local_70[7] = 0;
    *(bool *)((longlong)local_70 + 0x34) = local_108.QuantizationBoundary.bResumeClockOnQueued;
    local_70[7] = local_108.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data;
    local_108.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(int *)(local_70 + 8) = local_108.QuantizationBoundary.GameThreadSubscribers.ArrayNum;
    *(int *)((longlong)local_70 + 0x44) =
         local_108.QuantizationBoundary.GameThreadSubscribers.ArrayMax;
    local_108.QuantizationBoundary.GameThreadSubscribers.ArrayNum = 0;
    local_108.QuantizationBoundary.GameThreadSubscribers.ArrayMax = 0;
    local_70[9] = 0;
    local_70[9] = local_108.GameThreadSubscribers.AllocatorInstance.Data;
    local_108.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_70 + 10) = local_108.GameThreadSubscribers.ArrayNum;
    *(int *)((longlong)local_70 + 0x54) = local_108.GameThreadSubscribers.ArrayMax;
    local_108.GameThreadSubscribers.ArrayNum = 0;
    local_108.GameThreadSubscribers.ArrayMax = 0;
    *(int *)(local_70 + 0xb) = local_108.GameThreadDelegateID;
    if ((FName *)(local_70 + 1) != (FName *)0x0) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UQuartzClockHandle::StartOtherClock'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
                    ::Call;
    }
    Audio::FQuartzClockProxy::SendCommandToClock
              (&this->RawHandle,(TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_98);
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>
              ((FQuartzGameThreadSubscriber *)local_108.GameThreadSubscribers.AllocatorInstance.Data
               ,local_108.GameThreadSubscribers.ArrayNum);
    if ((FQuartzGameThreadSubscriber *)local_108.GameThreadSubscribers.AllocatorInstance.Data !=
        (FQuartzGameThreadSubscriber *)0x0) {
      FMemory::Free(local_108.GameThreadSubscribers.AllocatorInstance.Data);
    }
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>
              ((FQuartzGameThreadSubscriber *)
               local_108.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data,
               local_108.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
    if ((FQuartzGameThreadSubscriber *)
        local_108.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data !=
        (FQuartzGameThreadSubscriber *)0x0) {
      FMemory::Free(local_108.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.QuantizedCommandPtr.SharedReferenceCount.ReferenceController);
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>
              ((FQuartzGameThreadSubscriber *)local_68.GameThreadSubscribers.AllocatorInstance.Data,
               local_68.GameThreadSubscribers.ArrayNum);
    if ((FQuartzGameThreadSubscriber *)local_68.GameThreadSubscribers.AllocatorInstance.Data !=
        (FQuartzGameThreadSubscriber *)0x0) {
      FMemory::Free(local_68.GameThreadSubscribers.AllocatorInstance.Data);
    }
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>
              ((FQuartzGameThreadSubscriber *)
               local_68.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data,
               local_68.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
    if ((FQuartzGameThreadSubscriber *)
        local_68.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data !=
        (FQuartzGameThreadSubscriber *)0x0) {
      FMemory::Free(local_68.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.QuantizedCommandPtr.SharedReferenceCount.ReferenceController);
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)(param_3->GameThreadSubscribers).AllocatorInstance.Data,
             (param_3->GameThreadSubscribers).ArrayNum);
  pFVar1 = (param_3->GameThreadSubscribers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// StaticRegisterNativesUQuartzClockHandle @ 1465778c0

void __cdecl UQuartzClockHandle::StaticRegisterNativesUQuartzClockHandle(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1b;
  local_18.DataPtr = Z_Construct_UClass_UQuartzClockHandle_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopClock @ 146577ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzClockHandle::StopClock
          (UQuartzClockHandle *this,UObject *param_1,bool param_2,UQuartzClockHandle **param_3)

{
  code *local_38 [2];
  undefined **local_28;
  undefined1 local_20;
  undefined8 local_10;
  
  *param_3 = this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UQuartzClockHandle::StopClock'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UQuartzClockHandle::StopClock'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
                ::Call;
  local_20 = param_2;
  Audio::FQuartzClockProxy::SendCommandToClock
            (&this->RawHandle,(TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_38);
  return;
}

// SubscribeToAllQuantizationEvents @ 1465781a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzClockHandle::SubscribeToAllQuantizationEvents
          (UQuartzClockHandle *this,UObject *param_1,FOnQuartzMetronomeEventBP *param_2,
          UQuartzClockHandle **param_3)

{
  FSharedReferencer<1> FVar1;
  int iVar2;
  code *local_b8 [5];
  undefined8 *local_90;
  FQuartzGameThreadSubscriber local_88;
  
  iVar2 = 0;
  *param_3 = this;
  do {
    FQuartzTickableObject::AddMetronomeBpDelegate
              ((FQuartzTickableObject *)&this->_padding_,(EQuartzCommandQuantization)iVar2,param_2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x11);
  FQuartzTickableObject::GetQuartzSubscriber((FQuartzTickableObject *)&this->_padding_,&local_88);
  FVar1.ReferenceController = local_88.Queue.SharedReferenceCount.ReferenceController;
  if (local_88.Queue.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_88.Queue.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.Queue.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8[0] = (code *)0x0;
  local_90 = FMemory::Malloc(0x48,8);
  *(bool *)(local_90 + 2) = local_88.Offset.OffsetInMilliseconds.bIsSet;
  *local_90 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UQuartzClockHandle::SubscribeToAllQuantizationEvents'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  if (local_88.Offset.OffsetInMilliseconds.bIsSet != false) {
    local_90[1] = local_88.Offset.OffsetInMilliseconds.TypedValue;
  }
  *(bool *)(local_90 + 5) = local_88.Offset.OffsetAsDuration.bIsSet;
  if (local_88.Offset.OffsetAsDuration.bIsSet != false) {
    *(undefined4 *)(local_90 + 3) = local_88.Offset.OffsetAsDuration.TypedValue._0_4_;
    *(undefined4 *)((longlong)local_90 + 0x1c) = local_88.Offset.OffsetAsDuration.TypedValue._4_4_;
    *(undefined4 *)(local_90 + 4) = local_88.Offset.OffsetAsDuration.TypedValue._8_4_;
    *(undefined4 *)((longlong)local_90 + 0x24) = local_88.Offset.OffsetAsDuration.TypedValue._12_4_;
  }
  local_90[6] = local_88.Queue.Object;
  local_90[7] = FVar1.ReferenceController;
  *(bool *)(local_90 + 8) = local_88.bOffsetConvertedToFrames;
  *(bool *)((longlong)local_90 + 0x41) = local_88.bHasBeenNotifiedOfAboutToStart;
  *(int *)((longlong)local_90 + 0x44) = local_88.OffsetInAudioFrames;
  if ((double *)(local_90 + 1) != (double *)0x0) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UQuartzClockHandle::SubscribeToAllQuantizationEvents'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
                  ::Call;
  }
  Audio::FQuartzClockProxy::SendCommandToClock
            (&this->RawHandle,(TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.Queue.SharedReferenceCount.ReferenceController);
  return;
}

// SubscribeToClock @ 146578660

/* WARNING: Enum "Type": Some values do not have unique names */

UQuartzClockHandle * __thiscall
UQuartzClockHandle::SubscribeToClock
          (UQuartzClockHandle *this,UObject *param_1,FName param_2,FQuartzClockProxy *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *pTVar4;
  FQuartzClock *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  this->CurrentClockId = param_2;
  if (param_3 != (FQuartzClockProxy *)0x0) {
    (this->RawHandle).ClockId = param_3->ClockId;
    pTVar3 = (param_3->SharedQueue).WeakReferenceCount.ReferenceController;
    pTVar4 = (param_3->SharedQueue).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (this->RawHandle).SharedQueue.WeakReferenceCount.ReferenceController;
    (this->RawHandle).SharedQueue.Object = pTVar4;
    (this->RawHandle).SharedQueue.WeakReferenceCount.ReferenceController = pTVar3;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar6->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
    pTVar3 = (param_3->ClockWeakPtr).WeakReferenceCount.ReferenceController;
    pFVar5 = (param_3->ClockWeakPtr).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (this->RawHandle).ClockWeakPtr.WeakReferenceCount.ReferenceController;
    (this->RawHandle).ClockWeakPtr.Object = pFVar5;
    (this->RawHandle).ClockWeakPtr.WeakReferenceCount.ReferenceController = pTVar3;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar6->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
    return this;
  }
  return this;
}

// SubscribeToQuantizationEvent @ 146578750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzClockHandle::SubscribeToQuantizationEvent
          (UQuartzClockHandle *this,UObject *param_1,EQuartzCommandQuantization param_2,
          FOnQuartzMetronomeEventBP *param_3,UQuartzClockHandle **param_4)

{
  FSharedReferencer<1> FVar1;
  FQuartzGameThreadSubscriber local_d8;
  FString local_88;
  code *local_78 [5];
  undefined8 *local_50;
  
  *param_4 = this;
  if (param_2 == None) {
    if (2 < (byte)LogAudioQuartz._0_1_) {
      ::FName::ToString(&this->CurrentClockId,&local_88);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    FQuartzTickableObject::AddMetronomeBpDelegate
              ((FQuartzTickableObject *)&this->_padding_,param_2,param_3);
    FQuartzTickableObject::GetQuartzSubscriber((FQuartzTickableObject *)&this->_padding_,&local_d8);
    FVar1.ReferenceController = local_d8.Queue.SharedReferenceCount.ReferenceController;
    if (local_d8.Queue.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d8.Queue.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_d8.Queue.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
           );
      UNLOCK();
    }
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x50,8);
    *(bool *)(local_50 + 2) = local_d8.Offset.OffsetInMilliseconds.bIsSet;
    *local_50 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UQuartzClockHandle::SubscribeToQuantizationEvent'::`2'::<lambda_1>,0,1>
                 ::_vftable_;
    if (local_d8.Offset.OffsetInMilliseconds.bIsSet != false) {
      local_50[1] = local_d8.Offset.OffsetInMilliseconds.TypedValue;
    }
    *(bool *)(local_50 + 5) = local_d8.Offset.OffsetAsDuration.bIsSet;
    if (local_d8.Offset.OffsetAsDuration.bIsSet != false) {
      *(undefined4 *)(local_50 + 3) = local_d8.Offset.OffsetAsDuration.TypedValue._0_4_;
      *(undefined4 *)((longlong)local_50 + 0x1c) = local_d8.Offset.OffsetAsDuration.TypedValue._4_4_
      ;
      *(undefined4 *)(local_50 + 4) = local_d8.Offset.OffsetAsDuration.TypedValue._8_4_;
      *(undefined4 *)((longlong)local_50 + 0x24) =
           local_d8.Offset.OffsetAsDuration.TypedValue._12_4_;
    }
    local_50[6] = local_d8.Queue.Object;
    local_50[7] = FVar1.ReferenceController;
    *(bool *)(local_50 + 8) = local_d8.bOffsetConvertedToFrames;
    *(bool *)((longlong)local_50 + 0x41) = local_d8.bHasBeenNotifiedOfAboutToStart;
    *(int *)((longlong)local_50 + 0x44) = local_d8.OffsetInAudioFrames;
    *(EQuartzCommandQuantization *)(local_50 + 9) = param_2;
    if ((double *)(local_50 + 1) != (double *)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UQuartzClockHandle::SubscribeToQuantizationEvent'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
                    ::Call;
    }
    Audio::FQuartzClockProxy::SendCommandToClock
              (&this->RawHandle,(TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.Queue.SharedReferenceCount.ReferenceController);
  }
  return;
}

// UnsubscribeFromAllTimeDivisions @ 14657b1c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzClockHandle::UnsubscribeFromAllTimeDivisions
          (UQuartzClockHandle *this,UObject *param_1,UQuartzClockHandle **param_2)

{
  FSharedReferencer<1> FVar1;
  code *local_b8 [5];
  undefined8 *local_90;
  FQuartzGameThreadSubscriber local_88;
  
  *param_2 = this;
  FQuartzTickableObject::GetQuartzSubscriber((FQuartzTickableObject *)&this->_padding_,&local_88);
  FVar1.ReferenceController = local_88.Queue.SharedReferenceCount.ReferenceController;
  if (local_88.Queue.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_88.Queue.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.Queue.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8[0] = (code *)0x0;
  local_90 = FMemory::Malloc(0x48,8);
  *(bool *)(local_90 + 2) = local_88.Offset.OffsetInMilliseconds.bIsSet;
  *local_90 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UQuartzClockHandle::UnsubscribeFromAllTimeDivisions'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  if (local_88.Offset.OffsetInMilliseconds.bIsSet != false) {
    local_90[1] = local_88.Offset.OffsetInMilliseconds.TypedValue;
  }
  *(bool *)(local_90 + 5) = local_88.Offset.OffsetAsDuration.bIsSet;
  if (local_88.Offset.OffsetAsDuration.bIsSet != false) {
    *(undefined4 *)(local_90 + 3) = local_88.Offset.OffsetAsDuration.TypedValue._0_4_;
    *(undefined4 *)((longlong)local_90 + 0x1c) = local_88.Offset.OffsetAsDuration.TypedValue._4_4_;
    *(undefined4 *)(local_90 + 4) = local_88.Offset.OffsetAsDuration.TypedValue._8_4_;
    *(undefined4 *)((longlong)local_90 + 0x24) = local_88.Offset.OffsetAsDuration.TypedValue._12_4_;
  }
  local_90[6] = local_88.Queue.Object;
  local_90[7] = FVar1.ReferenceController;
  *(bool *)(local_90 + 8) = local_88.bOffsetConvertedToFrames;
  *(bool *)((longlong)local_90 + 0x41) = local_88.bHasBeenNotifiedOfAboutToStart;
  *(int *)((longlong)local_90 + 0x44) = local_88.OffsetInAudioFrames;
  if ((double *)(local_90 + 1) != (double *)0x0) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UQuartzClockHandle::UnsubscribeFromAllTimeDivisions'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
                  ::Call;
  }
  Audio::FQuartzClockProxy::SendCommandToClock
            (&this->RawHandle,(TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.Queue.SharedReferenceCount.ReferenceController);
  return;
}

// UnsubscribeFromTimeDivision @ 14657b900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UQuartzClockHandle::UnsubscribeFromTimeDivision
          (UQuartzClockHandle *this,UObject *param_1,EQuartzCommandQuantization param_2,
          UQuartzClockHandle **param_3)

{
  FSharedReferencer<1> FVar1;
  code *local_c8 [5];
  undefined8 *local_a0;
  FQuartzGameThreadSubscriber local_98;
  
  *param_3 = this;
  FQuartzTickableObject::GetQuartzSubscriber((FQuartzTickableObject *)&this->_padding_,&local_98);
  FVar1.ReferenceController = local_98.Queue.SharedReferenceCount.ReferenceController;
  if (local_98.Queue.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_98.Queue.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.Queue.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c8[0] = (code *)0x0;
  local_a0 = FMemory::Malloc(0x50,8);
  *(bool *)(local_a0 + 2) = local_98.Offset.OffsetInMilliseconds.bIsSet;
  *local_a0 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UQuartzClockHandle::UnsubscribeFromTimeDivision'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  if (local_98.Offset.OffsetInMilliseconds.bIsSet != false) {
    local_a0[1] = local_98.Offset.OffsetInMilliseconds.TypedValue;
  }
  *(bool *)(local_a0 + 5) = local_98.Offset.OffsetAsDuration.bIsSet;
  if (local_98.Offset.OffsetAsDuration.bIsSet != false) {
    *(undefined4 *)(local_a0 + 3) = local_98.Offset.OffsetAsDuration.TypedValue._0_4_;
    *(undefined4 *)((longlong)local_a0 + 0x1c) = local_98.Offset.OffsetAsDuration.TypedValue._4_4_;
    *(undefined4 *)(local_a0 + 4) = local_98.Offset.OffsetAsDuration.TypedValue._8_4_;
    *(undefined4 *)((longlong)local_a0 + 0x24) = local_98.Offset.OffsetAsDuration.TypedValue._12_4_;
  }
  local_a0[6] = local_98.Queue.Object;
  local_a0[7] = FVar1.ReferenceController;
  *(bool *)(local_a0 + 8) = local_98.bOffsetConvertedToFrames;
  *(bool *)((longlong)local_a0 + 0x41) = local_98.bHasBeenNotifiedOfAboutToStart;
  *(int *)((longlong)local_a0 + 0x44) = local_98.OffsetInAudioFrames;
  *(EQuartzCommandQuantization *)(local_a0 + 9) = param_2;
  if ((double *)(local_a0 + 1) != (double *)0x0) {
    local_c8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UQuartzClockHandle::UnsubscribeFromTimeDivision'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
                  ::Call;
  }
  Audio::FQuartzClockProxy::SendCommandToClock
            (&this->RawHandle,(TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.Queue.SharedReferenceCount.ReferenceController);
  return;
}

// execGetBeatProgressPercent @ 14657ef30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzClockHandle::execGetBeatProgressPercent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  EQuartzCommandQuantization local_res10 [8];
  float local_res18 [2];
  float local_res20 [2];
  
  local_res10[0] = Bar;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = GetBeatProgressPercent
                    ((UQuartzClockHandle *)param_1,local_res10[0],local_res20[0],local_res18[0]);
  *(float *)param_3 = fVar2;
  return;
}

// execGetBeatsPerMinute @ 14657f050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzClockHandle::execGetBeatsPerMinute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  bool bVar3;
  float fVar4;
  UObject *local_res10;
  FQuartzClockTickRate local_38;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Audio::FQuartzClockTickRate::FQuartzClockTickRate(&local_38);
  bVar3 = GetCurrentTickRate((UQuartzClockHandle *)param_1,pUVar2,&local_38);
  if (bVar3) {
    fVar4 = (float)local_38.BeatsPerMinute;
  }
  else {
    fVar4 = 0.0;
  }
  *(float *)param_3 = fVar4;
  return;
}

// execGetCurrentTimestamp @ 14657f270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzClockHandle::execGetCurrentTimestamp(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  FQuartzTransportTimeStamp local_18;
  
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
  Audio::FQuartzClockProxy::GetCurrentClockTimestamp
            ((FQuartzClockProxy *)&param_1[0xf].field_0x10,&local_18);
  *(undefined8 *)param_3 = local_18._0_8_;
  *(undefined8 *)((longlong)param_3 + 8) = local_18._8_8_;
  return;
}

// execGetDurationOfQuantizationTypeInSeconds @ 14657f320

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzClockHandle::execGetDurationOfQuantizationTypeInSeconds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  EQuartzCommandQuantization *pEVar6;
  bool bVar7;
  float fVar8;
  EQuartzCommandQuantization local_res8 [8];
  float local_res10 [2];
  undefined8 local_res18;
  
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res8[0] = Bar;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0.0;
  fVar8 = 0.0;
  pEVar6 = local_res8;
  if (param_2->MostRecentPropertyAddress != (EQuartzCommandQuantization *)0x0) {
    pEVar6 = param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar5 = *(TReferenceControllerBase<1> **)&param_1[0x10].field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14657f450;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    if (*(FQuartzClock **)(param_1 + 0x10) != (FQuartzClock *)0x0) {
      fVar8 = Audio::FQuartzClock::GetDurationOfQuantizationTypeInSeconds
                        (*(FQuartzClock **)(param_1 + 0x10),pEVar6,local_res10[0]);
    }
  }
LAB_14657f450:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(float *)param_3 = fVar8;
  return;
}

// execGetEstimatedRunTime @ 14657f7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzClockHandle::execGetEstimatedRunTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
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
  fVar2 = Audio::FQuartzClockProxy::GetEstimatedClockRunTimeSeconds
                    ((FQuartzClockProxy *)&param_1[0xf].field_0x10);
  *(float *)param_3 = fVar2;
  return;
}

// execGetMillisecondsPerTick @ 14657fb80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzClockHandle::execGetMillisecondsPerTick(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  bool bVar3;
  float fVar4;
  UObject *local_res10;
  FQuartzClockTickRate local_38;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Audio::FQuartzClockTickRate::FQuartzClockTickRate(&local_38);
  bVar3 = GetCurrentTickRate((UQuartzClockHandle *)param_1,pUVar2,&local_38);
  if (bVar3) {
    fVar4 = (float)local_38.MillisecondsPerTick;
  }
  else {
    fVar4 = 0.0;
  }
  *(float *)param_3 = fVar4;
  return;
}

// execGetSecondsPerTick @ 146580140

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzClockHandle::execGetSecondsPerTick(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  bool bVar3;
  float fVar4;
  UObject *local_res10;
  FQuartzClockTickRate local_38;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Audio::FQuartzClockTickRate::FQuartzClockTickRate(&local_38);
  bVar3 = GetCurrentTickRate((UQuartzClockHandle *)param_1,pUVar2,&local_38);
  if (bVar3) {
    fVar4 = (float)local_38.SecondsPerTick;
  }
  else {
    fVar4 = 0.0;
  }
  *(float *)param_3 = fVar4;
  return;
}

// execGetThirtySecondNotesPerMinute @ 146580210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzClockHandle::execGetThirtySecondNotesPerMinute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  bool bVar3;
  float fVar4;
  UObject *local_res10;
  FQuartzClockTickRate local_38;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Audio::FQuartzClockTickRate::FQuartzClockTickRate(&local_38);
  bVar3 = GetCurrentTickRate((UQuartzClockHandle *)param_1,pUVar2,&local_38);
  if (bVar3) {
    fVar4 = (float)local_38.ThirtySecondNotesPerMinute;
  }
  else {
    fVar4 = 0.0;
  }
  *(float *)param_3 = fVar4;
  return;
}

// execGetTicksPerSecond @ 1465802e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzClockHandle::execGetTicksPerSecond(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  bool bVar3;
  float fVar4;
  UObject *local_res10;
  FQuartzClockTickRate local_38;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Audio::FQuartzClockTickRate::FQuartzClockTickRate(&local_38);
  bVar3 = GetCurrentTickRate((UQuartzClockHandle *)param_1,pUVar2,&local_38);
  if ((!bVar3) ||
     ((float)((uint)(float)local_38.SecondsPerTick & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_322bcc77)) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = __real_3f800000 / (float)local_38.SecondsPerTick;
  }
  *(float *)param_3 = fVar4;
  return;
}

// execIsClockRunning @ 1465803c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UQuartzClockHandle::execIsClockRunning(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
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
  bVar2 = Audio::FQuartzClockProxy::IsClockRunning((FQuartzClockProxy *)&param_1[0xf].field_0x10);
  *(bool *)param_3 = bVar2;
  return;
}

// execNotifyOnQuantizationBoundary @ 146580620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzClockHandle::execNotifyOnQuantizationBoundary(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  FQuartzGameThreadSubscriber *pFVar3;
  int iVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  float local_res8 [2];
  undefined8 local_res10;
  EQuartzCommandQuantization local_188 [4];
  float local_184;
  undefined4 local_180;
  undefined1 local_17c;
  FQuartzGameThreadSubscriber *local_178;
  undefined8 local_170;
  FQuartzQuantizationBoundary local_168;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  undefined8 local_140;
  undefined8 local_138;
  FQuartzQuantizedRequestData local_130;
  undefined1 local_d8 [16];
  atomic<unsigned___int64> local_c8;
  undefined1 local_b8 [48];
  FQuartzQuantizedRequestData local_88;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_188[0] = None;
  local_184 = 1.0;
  local_180 = 0x100;
  local_17c = 0;
  local_178 = (FQuartzGameThreadSubscriber *)0x0;
  local_170 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_188);
  }
  local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_140 = 0;
  local_138 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_res8[0] = 0.0;
  this = &local_148;
  if ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2->MostRecentPropertyAddress
      != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar2 = local_res8[0];
  local_d8._0_8_ = (atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (this,(FReadAccessScope *)local_b8);
  local_d8._8_8_ = this[1].AccessDetector.State;
  local_c8 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_b8);
  pFVar3 = local_178;
  iVar4 = (int)local_170;
  local_168.Quantization = local_188[0];
  local_168.CountingReferencePoint = (EQuarztQuantizationReference)local_180;
  local_168.bFireOnClockStart = (bool)local_180._1_1_;
  local_168.bCancelCommandIfClockIsNotRunning = (bool)local_180._2_1_;
  local_168.bResetClockOnQueued = (bool)local_180._3_1_;
  local_168.bResumeClockOnQueued = (bool)local_17c;
  local_168.Multiplier = local_184;
  local_168.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.GameThreadSubscribers.ArrayNum = (int)local_170;
  if ((int)local_170 == 0) {
    local_168.GameThreadSubscribers.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,(int)local_170,0,&local_168.GameThreadSubscribers.AllocatorInstance,
               (int)local_170,&local_168.GameThreadSubscribers.ArrayMax);
    ConstructItems<Audio::FQuartzGameThreadSubscriber,Audio::FQuartzGameThreadSubscriber,int>
              (local_168.GameThreadSubscribers.AllocatorInstance.Data,pFVar3,iVar4);
  }
  UQuartzSubsystem::CreateRequestDataForQuantizedNotify
            (&local_88,(UQuartzClockHandle *)param_1,&local_168,(FOnQuartzCommandEventBP *)local_d8,
             fVar2);
  Audio::FQuartzQuantizedRequestData::FQuartzQuantizedRequestData(&local_130,&local_88);
  local_b8._0_8_ = (code *)0x0;
  local_b8._40_8_ = FMemory::Malloc(0x60,8);
  *(undefined ***)local_b8._40_8_ =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UQuartzClockHandle::NotifyOnQuantizationBoundary'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  *(FName *)(local_b8._40_8_ + 8) = local_130.ClockName;
  *(FName *)(local_b8._40_8_ + 0x10) = local_130.OtherClockName;
  *(IQuartzQuantizedCommand **)(local_b8._40_8_ + 0x18) = local_130.QuantizedCommandPtr.Object;
  *(TReferenceControllerBase<1> **)(local_b8._40_8_ + 0x20) =
       local_130.QuantizedCommandPtr.SharedReferenceCount.ReferenceController;
  local_130.QuantizedCommandPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_130.QuantizedCommandPtr.Object = (IQuartzQuantizedCommand *)0x0;
  *(EQuartzCommandQuantization *)(local_b8._40_8_ + 0x28) =
       local_130.QuantizationBoundary.Quantization;
  *(float *)(local_b8._40_8_ + 0x2c) = local_130.QuantizationBoundary.Multiplier;
  *(EQuarztQuantizationReference *)(local_b8._40_8_ + 0x30) =
       local_130.QuantizationBoundary.CountingReferencePoint;
  *(bool *)(local_b8._40_8_ + 0x31) = local_130.QuantizationBoundary.bFireOnClockStart;
  *(bool *)(local_b8._40_8_ + 0x32) =
       local_130.QuantizationBoundary.bCancelCommandIfClockIsNotRunning;
  *(bool *)(local_b8._40_8_ + 0x33) = local_130.QuantizationBoundary.bResetClockOnQueued;
  *(undefined8 *)(local_b8._40_8_ + 0x38) = 0;
  *(bool *)(local_b8._40_8_ + 0x34) = local_130.QuantizationBoundary.bResumeClockOnQueued;
  *(FScriptContainerElement **)(local_b8._40_8_ + 0x38) =
       local_130.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data;
  local_130.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(int *)(local_b8._40_8_ + 0x40) = local_130.QuantizationBoundary.GameThreadSubscribers.ArrayNum;
  *(int *)(local_b8._40_8_ + 0x44) = local_130.QuantizationBoundary.GameThreadSubscribers.ArrayMax;
  local_130.QuantizationBoundary.GameThreadSubscribers.ArrayNum = 0;
  local_130.QuantizationBoundary.GameThreadSubscribers.ArrayMax = 0;
  *(undefined8 *)(local_b8._40_8_ + 0x48) = 0;
  *(FScriptContainerElement **)(local_b8._40_8_ + 0x48) =
       local_130.GameThreadSubscribers.AllocatorInstance.Data;
  local_130.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_b8._40_8_ + 0x50) = local_130.GameThreadSubscribers.ArrayNum;
  *(int *)(local_b8._40_8_ + 0x54) = local_130.GameThreadSubscribers.ArrayMax;
  local_130.GameThreadSubscribers.ArrayNum = 0;
  local_130.GameThreadSubscribers.ArrayMax = 0;
  *(int *)(local_b8._40_8_ + 0x58) = local_130.GameThreadDelegateID;
  if ((FName *)(local_b8._40_8_ + 8) != (FName *)0x0) {
    local_b8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UQuartzClockHandle::NotifyOnQuantizationBoundary'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
         ::Call;
  }
  Audio::FQuartzClockProxy::SendCommandToClock
            ((FQuartzClockProxy *)&param_1[0xf].field_0x10,
             (TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_b8);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_130.GameThreadSubscribers.AllocatorInstance.Data,
             local_130.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)local_130.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_130.GameThreadSubscribers.AllocatorInstance.Data);
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             local_130.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data,
             local_130.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)
      local_130.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_130.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_130.QuantizedCommandPtr.SharedReferenceCount.ReferenceController);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_88.GameThreadSubscribers.AllocatorInstance.Data,
             local_88.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)local_88.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_88.GameThreadSubscribers.AllocatorInstance.Data);
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             local_88.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data,
             local_88.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)
      local_88.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_88.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.QuantizedCommandPtr.SharedReferenceCount.ReferenceController);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_168.GameThreadSubscribers.AllocatorInstance.Data,
             local_168.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)local_168.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_168.GameThreadSubscribers.AllocatorInstance.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d8);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>(local_178,(int)local_170);
  if (local_178 != (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_178);
  }
  return;
}

// execPauseClock @ 146580a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UQuartzClockHandle::execPauseClock(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_res8 [8];
  undefined8 local_res10;
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined8 local_20;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_20 = 0;
  puVar2 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  local_38 = &
             ___7__TFunction_OwnedObject_P6AXPEAVFQuartzClock_Audio___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_30 = `UQuartzClockHandle::PauseClock'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(Audio::FQuartzClock_*),void,Audio::FQuartzClock_*>
                ::Call;
  *(UObject **)puVar2 = param_1;
  Audio::FQuartzClockProxy::SendCommandToClock
            ((FQuartzClockProxy *)&param_1[0xf].field_0x10,
             (TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_48);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar2);
  }
  return;
}

// execResetTransport @ 146580c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UQuartzClockHandle::execResetTransport(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  UObject *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  atomic<unsigned___int64> local_30;
  FReadAccessScope local_28;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50 = 0;
  local_48 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_40._0_8_ = (atomic<unsigned___int64>)0x0;
  this = &local_58;
  if ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2->MostRecentPropertyAddress
      != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  local_40._8_8_ = this[1].AccessDetector.State;
  local_30 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  ResetTransport((UQuartzClockHandle *)param_1,local_res10,(FOnQuartzCommandEventBP *)local_40);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  return;
}

// execResetTransportQuantized @ 146580d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzClockHandle::execResetTransportQuantized(UObject *param_1,FFrame *param_2,void *param_3)

{
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar1;
  FProperty *pFVar2;
  FQuartzGameThreadSubscriber *pFVar3;
  int iVar4;
  uchar *puVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  uchar local_res8 [8];
  undefined8 local_res10;
  EQuartzCommandQuantization local_188 [4];
  float local_184;
  undefined4 local_180;
  undefined1 local_17c;
  FQuartzGameThreadSubscriber *local_178;
  undefined8 local_170;
  FQuartzQuantizationBoundary local_168;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  undefined8 local_140;
  undefined8 local_138;
  FQuartzQuantizedRequestData local_130;
  undefined1 local_d8 [16];
  atomic<unsigned___int64> local_c8;
  undefined1 local_b8 [48];
  FQuartzQuantizedRequestData local_88;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_188[0] = None;
  local_184 = 1.0;
  local_180 = 0x100;
  local_17c = 0;
  local_178 = (FQuartzGameThreadSubscriber *)0x0;
  local_170 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_188,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_188);
  }
  local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_140 = 0;
  local_138 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  pTVar1 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_148;
  if (pTVar1 != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_d8._0_8_ = (atomic<unsigned___int64>)0x0;
  puVar5 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (this,(FReadAccessScope *)local_b8);
  local_d8._8_8_ = this[1].AccessDetector.State;
  local_c8 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_b8);
  pFVar3 = local_178;
  iVar4 = (int)local_170;
  local_168.Quantization = local_188[0];
  local_168.CountingReferencePoint = (EQuarztQuantizationReference)local_180;
  local_168.bFireOnClockStart = (bool)local_180._1_1_;
  local_168.bCancelCommandIfClockIsNotRunning = (bool)local_180._2_1_;
  local_168.bResetClockOnQueued = (bool)local_180._3_1_;
  local_168.bResumeClockOnQueued = (bool)local_17c;
  local_168.Multiplier = local_184;
  local_168.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.GameThreadSubscribers.ArrayNum = (int)local_170;
  if ((int)local_170 == 0) {
    local_168.GameThreadSubscribers.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,(int)local_170,0,&local_168.GameThreadSubscribers.AllocatorInstance,
               (int)local_170,&local_168.GameThreadSubscribers.ArrayMax);
    ConstructItems<Audio::FQuartzGameThreadSubscriber,Audio::FQuartzGameThreadSubscriber,int>
              (local_168.GameThreadSubscribers.AllocatorInstance.Data,pFVar3,iVar4);
  }
  *(UObject **)puVar5 = param_1;
  UQuartzSubsystem::CreateRequestDataForTransportReset
            (&local_88,(UQuartzClockHandle *)param_1,&local_168,(FOnQuartzCommandEventBP *)local_d8)
  ;
  Audio::FQuartzQuantizedRequestData::FQuartzQuantizedRequestData(&local_130,&local_88);
  local_b8._0_8_ = (code *)0x0;
  local_b8._40_8_ = FMemory::Malloc(0x60,8);
  *(undefined ***)local_b8._40_8_ =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UQuartzClockHandle::ResetTransportQuantized'::`2'::<lambda_1>,0,1>::
        _vftable_;
  *(FName *)(local_b8._40_8_ + 8) = local_130.ClockName;
  *(FName *)(local_b8._40_8_ + 0x10) = local_130.OtherClockName;
  *(IQuartzQuantizedCommand **)(local_b8._40_8_ + 0x18) = local_130.QuantizedCommandPtr.Object;
  *(TReferenceControllerBase<1> **)(local_b8._40_8_ + 0x20) =
       local_130.QuantizedCommandPtr.SharedReferenceCount.ReferenceController;
  local_130.QuantizedCommandPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_130.QuantizedCommandPtr.Object = (IQuartzQuantizedCommand *)0x0;
  *(EQuartzCommandQuantization *)(local_b8._40_8_ + 0x28) =
       local_130.QuantizationBoundary.Quantization;
  *(float *)(local_b8._40_8_ + 0x2c) = local_130.QuantizationBoundary.Multiplier;
  *(EQuarztQuantizationReference *)(local_b8._40_8_ + 0x30) =
       local_130.QuantizationBoundary.CountingReferencePoint;
  *(bool *)(local_b8._40_8_ + 0x31) = local_130.QuantizationBoundary.bFireOnClockStart;
  *(bool *)(local_b8._40_8_ + 0x32) =
       local_130.QuantizationBoundary.bCancelCommandIfClockIsNotRunning;
  *(bool *)(local_b8._40_8_ + 0x33) = local_130.QuantizationBoundary.bResetClockOnQueued;
  *(undefined8 *)(local_b8._40_8_ + 0x38) = 0;
  *(bool *)(local_b8._40_8_ + 0x34) = local_130.QuantizationBoundary.bResumeClockOnQueued;
  *(FScriptContainerElement **)(local_b8._40_8_ + 0x38) =
       local_130.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data;
  local_130.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(int *)(local_b8._40_8_ + 0x40) = local_130.QuantizationBoundary.GameThreadSubscribers.ArrayNum;
  *(int *)(local_b8._40_8_ + 0x44) = local_130.QuantizationBoundary.GameThreadSubscribers.ArrayMax;
  local_130.QuantizationBoundary.GameThreadSubscribers.ArrayNum = 0;
  local_130.QuantizationBoundary.GameThreadSubscribers.ArrayMax = 0;
  *(undefined8 *)(local_b8._40_8_ + 0x48) = 0;
  *(FScriptContainerElement **)(local_b8._40_8_ + 0x48) =
       local_130.GameThreadSubscribers.AllocatorInstance.Data;
  local_130.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_b8._40_8_ + 0x50) = local_130.GameThreadSubscribers.ArrayNum;
  *(int *)(local_b8._40_8_ + 0x54) = local_130.GameThreadSubscribers.ArrayMax;
  local_130.GameThreadSubscribers.ArrayNum = 0;
  local_130.GameThreadSubscribers.ArrayMax = 0;
  *(int *)(local_b8._40_8_ + 0x58) = local_130.GameThreadDelegateID;
  if ((FName *)(local_b8._40_8_ + 8) != (FName *)0x0) {
    local_b8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UQuartzClockHandle::ResetTransportQuantized'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
         ::Call;
  }
  Audio::FQuartzClockProxy::SendCommandToClock
            ((FQuartzClockProxy *)&param_1[0xf].field_0x10,
             (TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_b8);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_130.GameThreadSubscribers.AllocatorInstance.Data,
             local_130.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)local_130.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_130.GameThreadSubscribers.AllocatorInstance.Data);
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             local_130.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data,
             local_130.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)
      local_130.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_130.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_130.QuantizedCommandPtr.SharedReferenceCount.ReferenceController);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_88.GameThreadSubscribers.AllocatorInstance.Data,
             local_88.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)local_88.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_88.GameThreadSubscribers.AllocatorInstance.Data);
  }
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)
             local_88.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data,
             local_88.QuantizationBoundary.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)
      local_88.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_88.QuantizationBoundary.GameThreadSubscribers.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.QuantizedCommandPtr.SharedReferenceCount.ReferenceController);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_168.GameThreadSubscribers.AllocatorInstance.Data,
             local_168.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)local_168.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_168.GameThreadSubscribers.AllocatorInstance.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>(local_178,(int)local_170);
  if (local_178 != (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_178);
  }
  return;
}

// execResumeClock @ 1465811d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UQuartzClockHandle::execResumeClock(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_res8 [8];
  undefined8 local_res10;
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined8 local_20;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_20 = 0;
  puVar2 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  local_38 = &
             ___7__TFunction_OwnedObject_P6AXPEAVFQuartzClock_Audio___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_30 = `UQuartzClockHandle::ResumeClock'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(Audio::FQuartzClock_*),void,Audio::FQuartzClock_*>
                ::Call;
  *(UObject **)puVar2 = param_1;
  Audio::FQuartzClockProxy::SendCommandToClock
            ((FQuartzClockProxy *)&param_1[0xf].field_0x10,
             (TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_48);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar2);
  }
  return;
}

// execSetBeatsPerMinute @ 146581600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzClockHandle::execSetBeatsPerMinute(UObject *param_1,FFrame *param_2,void *param_3)

{
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar1;
  FProperty *pFVar2;
  float fVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  uchar *puVar4;
  FQuartzQuantizationBoundary *pFVar5;
  float local_res8 [2];
  uchar local_res10 [16];
  undefined8 local_res20;
  FQuartzQuantizationBoundary local_f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [16];
  atomic<unsigned___int64> local_b0;
  FReadAccessScope local_a8;
  FQuartzClockTickRate local_90;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_f8.Quantization = None;
  local_f8.Multiplier = 1.0;
  local_f8.CountingReferencePoint = BarRelative;
  local_f8.bFireOnClockStart = true;
  local_f8.bCancelCommandIfClockIsNotRunning = false;
  local_f8.bResetClockOnQueued = false;
  local_f8.bResumeClockOnQueued = false;
  local_f8.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.GameThreadSubscribers.ArrayNum = 0;
  local_f8.GameThreadSubscribers.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0 = 0;
  pFVar5 = &local_f8;
  if ((FQuartzQuantizationBoundary *)param_2->MostRecentPropertyAddress !=
      (FQuartzQuantizationBoundary *)0x0) {
    pFVar5 = (FQuartzQuantizationBoundary *)param_2->MostRecentPropertyAddress;
  }
  local_c8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  pTVar1 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_d8;
  if (pTVar1 != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0.0;
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar3 = local_res8[0];
  local_c0._0_8_ = (atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_a8);
  local_c0._8_8_ = this[1].AccessDetector.State;
  local_b0 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
  *(UObject **)puVar4 = param_1;
  if ((fVar3 < 0.0) ||
     ((float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    if (2 < (byte)LogAudioQuartz._0_1_) {
      ::FName::ToString((FName *)&param_1[0x10].field_0x10,(FString *)&local_a8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
      if ((void *)local_a8.DestructionSentinel._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_a8.DestructionSentinel._0_8_);
      }
    }
  }
  else {
    Audio::FQuartzClockTickRate::FQuartzClockTickRate(&local_90);
    Audio::FQuartzClockTickRate::SetBeatsPerMinute(&local_90,(double)fVar3);
    SetTickRateInternal((UQuartzClockHandle *)param_1,pFVar5,(FOnQuartzCommandEventBP *)local_c0,
                        &local_90);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_f8.GameThreadSubscribers.AllocatorInstance.Data,
             local_f8.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)local_f8.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_f8.GameThreadSubscribers.AllocatorInstance.Data);
  }
  return;
}

// execSetMillisecondsPerTick @ 146581d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzClockHandle::execSetMillisecondsPerTick(UObject *param_1,FFrame *param_2,void *param_3)

{
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar1;
  FProperty *pFVar2;
  float fVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  uchar *puVar4;
  FQuartzQuantizationBoundary *pFVar5;
  float local_res8 [2];
  uchar local_res10 [16];
  undefined8 local_res20;
  FQuartzQuantizationBoundary local_f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [16];
  atomic<unsigned___int64> local_b0;
  FReadAccessScope local_a8;
  FQuartzClockTickRate local_90;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_f8.Quantization = None;
  local_f8.Multiplier = 1.0;
  local_f8.CountingReferencePoint = BarRelative;
  local_f8.bFireOnClockStart = true;
  local_f8.bCancelCommandIfClockIsNotRunning = false;
  local_f8.bResetClockOnQueued = false;
  local_f8.bResumeClockOnQueued = false;
  local_f8.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.GameThreadSubscribers.ArrayNum = 0;
  local_f8.GameThreadSubscribers.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0 = 0;
  pFVar5 = &local_f8;
  if ((FQuartzQuantizationBoundary *)param_2->MostRecentPropertyAddress !=
      (FQuartzQuantizationBoundary *)0x0) {
    pFVar5 = (FQuartzQuantizationBoundary *)param_2->MostRecentPropertyAddress;
  }
  local_c8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  pTVar1 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_d8;
  if (pTVar1 != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0.0;
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar3 = local_res8[0];
  local_c0._0_8_ = (atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_a8);
  local_c0._8_8_ = this[1].AccessDetector.State;
  local_b0 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
  *(UObject **)puVar4 = param_1;
  if ((fVar3 < 0.0) ||
     ((float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    if (2 < (byte)LogAudioQuartz._0_1_) {
      ::FName::ToString((FName *)&param_1[0x10].field_0x10,(FString *)&local_a8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
      if ((void *)local_a8.DestructionSentinel._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_a8.DestructionSentinel._0_8_);
      }
    }
  }
  else {
    Audio::FQuartzClockTickRate::FQuartzClockTickRate(&local_90);
    Audio::FQuartzClockTickRate::SetMillisecondsPerTick(&local_90,(double)fVar3);
    SetTickRateInternal((UQuartzClockHandle *)param_1,pFVar5,(FOnQuartzCommandEventBP *)local_c0,
                        &local_90);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_f8.GameThreadSubscribers.AllocatorInstance.Data,
             local_f8.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)local_f8.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_f8.GameThreadSubscribers.AllocatorInstance.Data);
  }
  return;
}

// execSetSecondsPerTick @ 1465824a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzClockHandle::execSetSecondsPerTick(UObject *param_1,FFrame *param_2,void *param_3)

{
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar1;
  FProperty *pFVar2;
  float fVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  uchar *puVar4;
  FQuartzQuantizationBoundary *pFVar5;
  float local_res8 [2];
  uchar local_res10 [16];
  undefined8 local_res20;
  FQuartzQuantizationBoundary local_f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [16];
  atomic<unsigned___int64> local_b0;
  FReadAccessScope local_a8;
  FQuartzClockTickRate local_90;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_f8.Quantization = None;
  local_f8.Multiplier = 1.0;
  local_f8.CountingReferencePoint = BarRelative;
  local_f8.bFireOnClockStart = true;
  local_f8.bCancelCommandIfClockIsNotRunning = false;
  local_f8.bResetClockOnQueued = false;
  local_f8.bResumeClockOnQueued = false;
  local_f8.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.GameThreadSubscribers.ArrayNum = 0;
  local_f8.GameThreadSubscribers.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0 = 0;
  pFVar5 = &local_f8;
  if ((FQuartzQuantizationBoundary *)param_2->MostRecentPropertyAddress !=
      (FQuartzQuantizationBoundary *)0x0) {
    pFVar5 = (FQuartzQuantizationBoundary *)param_2->MostRecentPropertyAddress;
  }
  local_c8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  pTVar1 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_d8;
  if (pTVar1 != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0.0;
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar3 = local_res8[0];
  local_c0._0_8_ = (atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_a8);
  local_c0._8_8_ = this[1].AccessDetector.State;
  local_b0 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
  *(UObject **)puVar4 = param_1;
  if ((fVar3 < 0.0) ||
     ((float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    if (2 < (byte)LogAudioQuartz._0_1_) {
      ::FName::ToString((FName *)&param_1[0x10].field_0x10,(FString *)&local_a8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
      if ((void *)local_a8.DestructionSentinel._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_a8.DestructionSentinel._0_8_);
      }
    }
  }
  else {
    Audio::FQuartzClockTickRate::FQuartzClockTickRate(&local_90);
    Audio::FQuartzClockTickRate::SetSecondsPerTick(&local_90,(double)fVar3);
    SetTickRateInternal((UQuartzClockHandle *)param_1,pFVar5,(FOnQuartzCommandEventBP *)local_c0,
                        &local_90);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_f8.GameThreadSubscribers.AllocatorInstance.Data,
             local_f8.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)local_f8.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_f8.GameThreadSubscribers.AllocatorInstance.Data);
  }
  return;
}

// execSetThirtySecondNotesPerMinute @ 146583050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzClockHandle::execSetThirtySecondNotesPerMinute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar1;
  FProperty *pFVar2;
  float fVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  uchar *puVar4;
  FQuartzQuantizationBoundary *pFVar5;
  float local_res8 [2];
  uchar local_res10 [16];
  undefined8 local_res20;
  FQuartzQuantizationBoundary local_f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [16];
  atomic<unsigned___int64> local_b0;
  FReadAccessScope local_a8;
  FQuartzClockTickRate local_90;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_f8.Quantization = None;
  local_f8.Multiplier = 1.0;
  local_f8.CountingReferencePoint = BarRelative;
  local_f8.bFireOnClockStart = true;
  local_f8.bCancelCommandIfClockIsNotRunning = false;
  local_f8.bResetClockOnQueued = false;
  local_f8.bResumeClockOnQueued = false;
  local_f8.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.GameThreadSubscribers.ArrayNum = 0;
  local_f8.GameThreadSubscribers.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0 = 0;
  pFVar5 = &local_f8;
  if ((FQuartzQuantizationBoundary *)param_2->MostRecentPropertyAddress !=
      (FQuartzQuantizationBoundary *)0x0) {
    pFVar5 = (FQuartzQuantizationBoundary *)param_2->MostRecentPropertyAddress;
  }
  local_c8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  pTVar1 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_d8;
  if (pTVar1 != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0.0;
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar3 = local_res8[0];
  local_c0._0_8_ = (atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_a8);
  local_c0._8_8_ = this[1].AccessDetector.State;
  local_b0 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
  *(UObject **)puVar4 = param_1;
  if ((fVar3 < 0.0) ||
     ((float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    if (2 < (byte)LogAudioQuartz._0_1_) {
      ::FName::ToString((FName *)&param_1[0x10].field_0x10,(FString *)&local_a8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
      if ((void *)local_a8.DestructionSentinel._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_a8.DestructionSentinel._0_8_);
      }
    }
  }
  else {
    Audio::FQuartzClockTickRate::FQuartzClockTickRate(&local_90);
    Audio::FQuartzClockTickRate::SetThirtySecondNotesPerMinute(&local_90,(double)fVar3);
    SetTickRateInternal((UQuartzClockHandle *)param_1,pFVar5,(FOnQuartzCommandEventBP *)local_c0,
                        &local_90);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_f8.GameThreadSubscribers.AllocatorInstance.Data,
             local_f8.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)local_f8.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_f8.GameThreadSubscribers.AllocatorInstance.Data);
  }
  return;
}

// execSetTicksPerSecond @ 146583360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzClockHandle::execSetTicksPerSecond(UObject *param_1,FFrame *param_2,void *param_3)

{
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar1;
  FProperty *pFVar2;
  float fVar3;
  float fVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  uchar *puVar5;
  FQuartzQuantizationBoundary *pFVar6;
  float local_res8 [2];
  uchar local_res10 [16];
  undefined8 local_res20;
  FQuartzQuantizationBoundary local_108;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  atomic<unsigned___int64> local_c0;
  FReadAccessScope local_b8;
  FQuartzClockTickRate local_a0 [2];
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  fVar3 = __real_3f800000;
  local_108.Quantization = None;
  local_108.Multiplier = 1.0;
  local_108.CountingReferencePoint = BarRelative;
  local_108.bFireOnClockStart = true;
  local_108.bCancelCommandIfClockIsNotRunning = false;
  local_108.bResetClockOnQueued = false;
  local_108.bResumeClockOnQueued = false;
  local_108.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.GameThreadSubscribers.ArrayNum = 0;
  local_108.GameThreadSubscribers.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_e0 = 0;
  pFVar6 = &local_108;
  if ((FQuartzQuantizationBoundary *)param_2->MostRecentPropertyAddress !=
      (FQuartzQuantizationBoundary *)0x0) {
    pFVar6 = (FQuartzQuantizationBoundary *)param_2->MostRecentPropertyAddress;
  }
  local_d8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  pTVar1 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_e8;
  if (pTVar1 != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0.0;
  puVar5 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar4 = local_res8[0];
  local_d0._0_8_ = (atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_b8);
  local_d0._8_8_ = this[1].AccessDetector.State;
  local_c0 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_b8);
  *(UObject **)puVar5 = param_1;
  if ((fVar4 < 0.0) ||
     ((float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    if (2 < (byte)LogAudioQuartz._0_1_) {
      ::FName::ToString((FName *)&param_1[0x10].field_0x10,(FString *)&local_b8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
      if ((void *)local_b8.DestructionSentinel._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b8.DestructionSentinel._0_8_);
      }
    }
  }
  else {
    Audio::FQuartzClockTickRate::FQuartzClockTickRate(local_a0);
    Audio::FQuartzClockTickRate::SetSecondsPerTick(local_a0,(double)(fVar3 / fVar4));
    SetTickRateInternal((UQuartzClockHandle *)param_1,pFVar6,(FOnQuartzCommandEventBP *)local_d0,
                        local_a0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)local_108.GameThreadSubscribers.AllocatorInstance.Data,
             local_108.GameThreadSubscribers.ArrayNum);
  if ((FQuartzGameThreadSubscriber *)local_108.GameThreadSubscribers.AllocatorInstance.Data !=
      (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_108.GameThreadSubscribers.AllocatorInstance.Data);
  }
  return;
}

// execStartClock @ 146583730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UQuartzClockHandle::execStartClock(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_res8 [8];
  undefined8 local_res10;
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined8 local_20;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_20 = 0;
  puVar2 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  local_38 = &
             ___7__TFunction_OwnedObject_P6AXPEAVFQuartzClock_Audio___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_30 = `UQuartzClockHandle::ResumeClock'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(Audio::FQuartzClock_*),void,Audio::FQuartzClock_*>
                ::Call;
  *(UObject **)puVar2 = param_1;
  Audio::FQuartzClockProxy::SendCommandToClock
            ((FQuartzClockProxy *)&param_1[0xf].field_0x10,
             (TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_48);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar2);
  }
  return;
}

// execStartOtherClock @ 146583860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UQuartzClockHandle::execStartOtherClock(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FQuartzGameThreadSubscriber *pFVar2;
  int iVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  FName local_res10;
  UObject *local_res20;
  EQuartzCommandQuantization local_a8 [4];
  float local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  FQuartzGameThreadSubscriber *local_98;
  undefined8 local_90;
  FQuartzQuantizationBoundary local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  atomic<unsigned___int64> local_40;
  FReadAccessScope local_38;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_a8[0] = None;
  local_a4 = 1.0;
  local_a0 = 0x100;
  local_9c = 0;
  local_98 = (FQuartzGameThreadSubscriber *)0x0;
  local_90 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60 = 0;
  local_58 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_50._0_8_ = (atomic<unsigned___int64>)0x0;
  this = &local_68;
  if ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2->MostRecentPropertyAddress
      != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_38);
  local_50._8_8_ = this[1].AccessDetector.State;
  local_40 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  pFVar2 = local_98;
  iVar3 = (int)local_90;
  local_88.Quantization = local_a8[0];
  local_88.CountingReferencePoint = (EQuarztQuantizationReference)local_a0;
  local_88.bFireOnClockStart = (bool)local_a0._1_1_;
  local_88.bCancelCommandIfClockIsNotRunning = (bool)local_a0._2_1_;
  local_88.bResetClockOnQueued = (bool)local_a0._3_1_;
  local_88.bResumeClockOnQueued = (bool)local_9c;
  local_88.Multiplier = local_a4;
  local_88.GameThreadSubscribers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.GameThreadSubscribers.ArrayNum = (int)local_90;
  if ((int)local_90 == 0) {
    local_88.GameThreadSubscribers.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,(int)local_90,0,&local_88.GameThreadSubscribers.AllocatorInstance,
               (int)local_90,&local_88.GameThreadSubscribers.ArrayMax);
    ConstructItems<Audio::FQuartzGameThreadSubscriber,Audio::FQuartzGameThreadSubscriber,int>
              (local_88.GameThreadSubscribers.AllocatorInstance.Data,pFVar2,iVar3);
  }
  StartOtherClock((UQuartzClockHandle *)param_1,local_res20,local_res10,&local_88,
                  (FOnQuartzCommandEventBP *)local_50);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_50);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>(local_98,(int)local_90);
  if (local_98 != (FQuartzGameThreadSubscriber *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}

// execStopClock @ 146583b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UQuartzClockHandle::execStopClock(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  bool bVar3;
  int local_res8 [2];
  uchar local_res10 [16];
  undefined8 local_res20;
  code *local_58 [2];
  undefined **local_48;
  undefined1 local_40;
  undefined8 local_30;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_30 = 0;
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UQuartzClockHandle::StopClock'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UQuartzClockHandle::StopClock'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
                ::Call;
  *(UObject **)puVar2 = param_1;
  local_40 = bVar3;
  Audio::FQuartzClockProxy::SendCommandToClock
            ((FQuartzClockProxy *)&param_1[0xf].field_0x10,
             (TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_58);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar2);
  }
  return;
}

// execSubscribeToAllQuantizationEvents @ 146583c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzClockHandle::execSubscribeToAllQuantizationEvents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar1;
  FProperty *pFVar2;
  FSharedReferencer<1> FVar3;
  int iVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  uchar *puVar5;
  uchar local_res20 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  atomic<unsigned___int64> local_d8;
  FQuartzGameThreadSubscriber local_c8;
  undefined1 local_88 [80];
  
  iVar4 = 0;
  local_f0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_100 = 0;
  local_f8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  pTVar1 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  local_res20[4] = '\0';
  local_res20[5] = '\0';
  local_res20[6] = '\0';
  local_res20[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_108;
  if (pTVar1 != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_e8._0_8_ = (atomic<unsigned___int64>)0x0;
  puVar5 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (this,(FReadAccessScope *)local_88);
  local_e8._8_8_ = this[1].AccessDetector.State;
  local_d8 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_88);
  *(UObject **)puVar5 = param_1;
  do {
    FQuartzTickableObject::AddMetronomeBpDelegate
              ((FQuartzTickableObject *)(param_1 + 1),(EQuartzCommandQuantization)iVar4,
               (FOnQuartzMetronomeEventBP *)local_e8);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x11);
  FQuartzTickableObject::GetQuartzSubscriber((FQuartzTickableObject *)(param_1 + 1),&local_c8);
  FVar3.ReferenceController = local_c8.Queue.SharedReferenceCount.ReferenceController;
  if (local_c8.Queue.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_c8.Queue.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.Queue.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88._0_8_ = (code *)0x0;
  local_88._40_8_ = FMemory::Malloc(0x48,8);
  *(bool *)(local_88._40_8_ + 0x10) = local_c8.Offset.OffsetInMilliseconds.bIsSet;
  *(undefined ***)local_88._40_8_ =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UQuartzClockHandle::SubscribeToAllQuantizationEvents'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (local_c8.Offset.OffsetInMilliseconds.bIsSet != false) {
    *(double *)(local_88._40_8_ + 8) = local_c8.Offset.OffsetInMilliseconds.TypedValue;
  }
  *(bool *)(local_88._40_8_ + 0x28) = local_c8.Offset.OffsetAsDuration.bIsSet;
  if (local_c8.Offset.OffsetAsDuration.bIsSet != false) {
    *(undefined4 *)(local_88._40_8_ + 0x18) = local_c8.Offset.OffsetAsDuration.TypedValue._0_4_;
    *(undefined4 *)(local_88._40_8_ + 0x1c) = local_c8.Offset.OffsetAsDuration.TypedValue._4_4_;
    *(undefined4 *)(local_88._40_8_ + 0x20) = local_c8.Offset.OffsetAsDuration.TypedValue._8_4_;
    *(undefined4 *)(local_88._40_8_ + 0x24) = local_c8.Offset.OffsetAsDuration.TypedValue._12_4_;
  }
  *(bool *)(local_88._40_8_ + 0x41) = local_c8.bHasBeenNotifiedOfAboutToStart;
  *(TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
    **)(local_88._40_8_ + 0x30) = local_c8.Queue.Object;
  *(TReferenceControllerBase<1> **)(local_88._40_8_ + 0x38) = FVar3.ReferenceController;
  *(bool *)(local_88._40_8_ + 0x40) = local_c8.bOffsetConvertedToFrames;
  *(int *)(local_88._40_8_ + 0x44) = local_c8.OffsetInAudioFrames;
  if ((double *)(local_88._40_8_ + 8) != (double *)0x0) {
    local_88._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UQuartzClockHandle::SubscribeToAllQuantizationEvents'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
         ::Call;
  }
  Audio::FQuartzClockProxy::SendCommandToClock
            ((FQuartzClockProxy *)&param_1[0xf].field_0x10,
             (TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.Queue.SharedReferenceCount.ReferenceController);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108.AccessDetector);
  return;
}

// execSubscribeToQuantizationEvent @ 146583f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzClockHandle::execSubscribeToQuantizationEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar2;
  FProperty *pFVar3;
  EQuartzCommandQuantization EVar4;
  FSharedReferencer<1> FVar5;
  uchar *puVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  EQuartzCommandQuantization local_res8 [8];
  undefined1 local_res10;
  uchar local_120 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [16];
  atomic<unsigned___int64> local_e8;
  FQuartzGameThreadSubscriber local_d8;
  undefined1 local_88 [80];
  
  local_100 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_res8[0] = Bar;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_110 = 0;
  local_108 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  pTVar2 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  local_120[0] = '\0';
  local_120[1] = '\0';
  local_120[2] = '\0';
  local_120[3] = '\0';
  local_120[4] = '\0';
  local_120[5] = '\0';
  local_120[6] = '\0';
  local_120[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_118;
  if (pTVar2 != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = pTVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_120,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_120);
  }
  local_f8._0_8_ = (atomic<unsigned___int64>)0x0;
  puVar6 = local_120;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (this,(FReadAccessScope *)local_88);
  local_f8._8_8_ = this[1].AccessDetector.State;
  local_e8 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_88);
  EVar4 = local_res8[0];
  *(UObject **)puVar6 = param_1;
  if (local_res8[0] == None) {
    if (2 < (byte)LogAudioQuartz._0_1_) {
      ::FName::ToString((FName *)&param_1[0x10].field_0x10,(FString *)local_88);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
      if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
    }
  }
  else {
    FQuartzTickableObject::AddMetronomeBpDelegate
              ((FQuartzTickableObject *)(param_1 + 1),local_res8[0],
               (FOnQuartzMetronomeEventBP *)local_f8);
    FQuartzTickableObject::GetQuartzSubscriber((FQuartzTickableObject *)(param_1 + 1),&local_d8);
    FVar5.ReferenceController = local_d8.Queue.SharedReferenceCount.ReferenceController;
    if (local_d8.Queue.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d8.Queue.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_d8.Queue.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
           );
      UNLOCK();
    }
    local_res10 = local_d8.bOffsetConvertedToFrames;
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._40_8_ = FMemory::Malloc(0x50,8);
    *(bool *)(local_88._40_8_ + 0x10) = local_d8.Offset.OffsetInMilliseconds.bIsSet;
    *(undefined ***)local_88._40_8_ =
         &UE::Core::Private::Function::
          TFunction_OwnedObject<`UQuartzClockHandle::SubscribeToQuantizationEvent'::`2'::<lambda_1>,0,1>
          ::_vftable_;
    if (local_d8.Offset.OffsetInMilliseconds.bIsSet != false) {
      *(double *)(local_88._40_8_ + 8) = local_d8.Offset.OffsetInMilliseconds.TypedValue;
    }
    *(bool *)(local_88._40_8_ + 0x28) = local_d8.Offset.OffsetAsDuration.bIsSet;
    if (local_d8.Offset.OffsetAsDuration.bIsSet != false) {
      *(undefined4 *)(local_88._40_8_ + 0x18) = local_d8.Offset.OffsetAsDuration.TypedValue._0_4_;
      *(undefined4 *)(local_88._40_8_ + 0x1c) = local_d8.Offset.OffsetAsDuration.TypedValue._4_4_;
      *(undefined4 *)(local_88._40_8_ + 0x20) = local_d8.Offset.OffsetAsDuration.TypedValue._8_4_;
      *(undefined4 *)(local_88._40_8_ + 0x24) = local_d8.Offset.OffsetAsDuration.TypedValue._12_4_;
    }
    *(undefined1 *)(local_88._40_8_ + 0x40) = local_res10;
    *(bool *)(local_88._40_8_ + 0x41) = local_d8.bHasBeenNotifiedOfAboutToStart;
    *(int *)(local_88._40_8_ + 0x44) = local_d8.OffsetInAudioFrames;
    *(TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
      **)(local_88._40_8_ + 0x30) = local_d8.Queue.Object;
    *(TReferenceControllerBase<1> **)(local_88._40_8_ + 0x38) = FVar5.ReferenceController;
    *(EQuartzCommandQuantization *)(local_88._40_8_ + 0x48) = EVar4;
    if ((double *)(local_88._40_8_ + 8) != (double *)0x0) {
      local_88._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UQuartzClockHandle::SubscribeToQuantizationEvent'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
           ::Call;
    }
    Audio::FQuartzClockProxy::SendCommandToClock
              ((FQuartzClockProxy *)&param_1[0xf].field_0x10,
               (TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.Queue.SharedReferenceCount.ReferenceController);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_118.AccessDetector);
  return;
}

// execUnsubscribeFromAllTimeDivisions @ 1465842e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzClockHandle::execUnsubscribeFromAllTimeDivisions
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSharedReferencer<1> FVar2;
  uchar *puVar3;
  uchar local_res20 [8];
  undefined8 local_d8 [2];
  code *local_c8 [5];
  undefined8 *local_a0;
  FQuartzGameThreadSubscriber local_98;
  
  local_d8[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d8);
  }
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  local_res20[4] = '\0';
  local_res20[5] = '\0';
  local_res20[6] = '\0';
  local_res20[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar3 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(UObject **)puVar3 = param_1;
  FQuartzTickableObject::GetQuartzSubscriber((FQuartzTickableObject *)(param_1 + 1),&local_98);
  FVar2.ReferenceController = local_98.Queue.SharedReferenceCount.ReferenceController;
  if (local_98.Queue.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_98.Queue.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.Queue.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c8[0] = (code *)0x0;
  local_a0 = FMemory::Malloc(0x48,8);
  *(bool *)(local_a0 + 2) = local_98.Offset.OffsetInMilliseconds.bIsSet;
  *local_a0 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UQuartzClockHandle::UnsubscribeFromAllTimeDivisions'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  if (local_98.Offset.OffsetInMilliseconds.bIsSet != false) {
    local_a0[1] = local_98.Offset.OffsetInMilliseconds.TypedValue;
  }
  *(bool *)(local_a0 + 5) = local_98.Offset.OffsetAsDuration.bIsSet;
  if (local_98.Offset.OffsetAsDuration.bIsSet != false) {
    *(undefined4 *)(local_a0 + 3) = local_98.Offset.OffsetAsDuration.TypedValue._0_4_;
    *(undefined4 *)((longlong)local_a0 + 0x1c) = local_98.Offset.OffsetAsDuration.TypedValue._4_4_;
    *(undefined4 *)(local_a0 + 4) = local_98.Offset.OffsetAsDuration.TypedValue._8_4_;
    *(undefined4 *)((longlong)local_a0 + 0x24) = local_98.Offset.OffsetAsDuration.TypedValue._12_4_;
  }
  *(bool *)((longlong)local_a0 + 0x41) = local_98.bHasBeenNotifiedOfAboutToStart;
  local_a0[6] = local_98.Queue.Object;
  local_a0[7] = FVar2.ReferenceController;
  *(bool *)(local_a0 + 8) = local_98.bOffsetConvertedToFrames;
  *(int *)((longlong)local_a0 + 0x44) = local_98.OffsetInAudioFrames;
  if ((double *)(local_a0 + 1) != (double *)0x0) {
    local_c8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UQuartzClockHandle::UnsubscribeFromAllTimeDivisions'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
                  ::Call;
  }
  Audio::FQuartzClockProxy::SendCommandToClock
            ((FQuartzClockProxy *)&param_1[0xf].field_0x10,
             (TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.Queue.SharedReferenceCount.ReferenceController);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar3);
  }
  return;
}

// execUnsubscribeFromTimeDivision @ 146584500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UQuartzClockHandle::execUnsubscribeFromTimeDivision(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FSharedReferencer<1> FVar3;
  uchar *puVar4;
  undefined1 local_res8 [8];
  undefined1 local_res10;
  uchar local_f0 [8];
  undefined8 local_e8 [2];
  FQuartzGameThreadSubscriber local_d8;
  code *local_88 [5];
  undefined8 *local_60;
  
  local_e8[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_f0[0] = '\0';
  local_f0[1] = '\0';
  local_f0[2] = '\0';
  local_f0[3] = '\0';
  local_f0[4] = '\0';
  local_f0[5] = '\0';
  local_f0[6] = '\0';
  local_f0[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f0);
  }
  uVar2 = local_res8[0];
  puVar4 = local_f0;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(UObject **)puVar4 = param_1;
  FQuartzTickableObject::GetQuartzSubscriber((FQuartzTickableObject *)(param_1 + 1),&local_d8);
  FVar3.ReferenceController = local_d8.Queue.SharedReferenceCount.ReferenceController;
  if (local_d8.Queue.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (local_d8.Queue.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.Queue.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res10 = local_d8.bHasBeenNotifiedOfAboutToStart;
  local_88[0] = (code *)0x0;
  local_60 = FMemory::Malloc(0x50,8);
  *(bool *)(local_60 + 2) = local_d8.Offset.OffsetInMilliseconds.bIsSet;
  *local_60 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UQuartzClockHandle::UnsubscribeFromTimeDivision'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  if (local_d8.Offset.OffsetInMilliseconds.bIsSet != false) {
    local_60[1] = local_d8.Offset.OffsetInMilliseconds.TypedValue;
  }
  *(bool *)(local_60 + 5) = local_d8.Offset.OffsetAsDuration.bIsSet;
  if (local_d8.Offset.OffsetAsDuration.bIsSet != false) {
    *(undefined4 *)(local_60 + 3) = local_d8.Offset.OffsetAsDuration.TypedValue._0_4_;
    *(undefined4 *)((longlong)local_60 + 0x1c) = local_d8.Offset.OffsetAsDuration.TypedValue._4_4_;
    *(undefined4 *)(local_60 + 4) = local_d8.Offset.OffsetAsDuration.TypedValue._8_4_;
    *(undefined4 *)((longlong)local_60 + 0x24) = local_d8.Offset.OffsetAsDuration.TypedValue._12_4_;
  }
  *(undefined1 *)((longlong)local_60 + 0x41) = local_res10;
  local_60[6] = local_d8.Queue.Object;
  local_60[7] = FVar3.ReferenceController;
  *(bool *)(local_60 + 8) = local_d8.bOffsetConvertedToFrames;
  *(int *)((longlong)local_60 + 0x44) = local_d8.OffsetInAudioFrames;
  *(undefined1 *)(local_60 + 9) = uVar2;
  if ((double *)(local_60 + 1) != (double *)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UQuartzClockHandle::UnsubscribeFromTimeDivision'::__l2::<lambda_1>,void,Audio::FQuartzClock_*>
                  ::Call;
  }
  Audio::FQuartzClockProxy::SendCommandToClock
            ((FQuartzClockProxy *)&param_1[0xf].field_0x10,
             (TFunction<void___cdecl(Audio::FQuartzClock_*)> *)local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.Queue.SharedReferenceCount.ReferenceController);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar4);
  }
  return;
}

