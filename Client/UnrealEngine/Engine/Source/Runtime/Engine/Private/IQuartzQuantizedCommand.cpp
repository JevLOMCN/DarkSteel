// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// IQuartzQuantizedCommand @ 147340b30

IQuartzQuantizedCommand * __thiscall
Audio::IQuartzQuantizedCommand::IQuartzQuantizedCommand(IQuartzQuantizedCommand *this)

{
  LARGE_INTEGER local_res8 [4];
  
  this->_padding_ = -1;
  this->_padding_ = -1;
  this->_padding_ = -1;
  this->_padding_ = -1;
  QueryPerformanceCounter(local_res8);
  this->_padding_ = (longlong)local_res8[0];
  this->_padding_ = (longlong)&___7IQuartzQuantizedCommand_Audio__6B_;
  (this->GameThreadSubscribers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameThreadSubscribers).ArrayNum = 0;
  (this->GameThreadSubscribers).ArrayMax = 0;
  this->GameThreadDelegateID = -1;
  return this;
}

// ~IQuartzQuantizedCommand @ 147342190

void __thiscall
Audio::IQuartzQuantizedCommand::~IQuartzQuantizedCommand(IQuartzQuantizedCommand *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7IQuartzQuantizedCommand_Audio__6B_;
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)(this->GameThreadSubscribers).AllocatorInstance.Data,
             (this->GameThreadSubscribers).ArrayNum);
  pFVar1 = (this->GameThreadSubscribers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AboutToStart @ 147344e10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::IQuartzQuantizedCommand::AboutToStart(IQuartzQuantizedCommand *this)

{
  int iVar1;
  FName *this_00;
  FQuartzGameThreadSubscriber *pFVar2;
  FQuartzGameThreadSubscriber *this_01;
  bool bVar3;
  LARGE_INTEGER local_res8;
  FString local_58;
  FQuartzQuantizedCommandDelegateData local_48;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId574,"QuartzQuantizedCommand::AboutToStart",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzQuantizationUtilities.cpp"
               ,0x23e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId574);
  }
  local_48._padding_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_48._padding_ = _UNK_15060db28;
  local_48._padding_ = -1;
  QueryPerformanceCounter(&local_res8);
  local_48._padding_ = (longlong)local_res8;
  local_48.CommandType = (**(code **)(this->_padding_ + 0x38))(this);
  iVar1 = (this->GameThreadSubscribers).ArrayNum;
  this_01 = (FQuartzGameThreadSubscriber *)(this->GameThreadSubscribers).AllocatorInstance.Data;
  pFVar2 = this_01 + iVar1;
  local_48.DelegateID = this->GameThreadDelegateID;
  local_48.DelegateSubType = CommandOnAboutToStart;
  while( true ) {
    if ((this->GameThreadSubscribers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Audio::FQuartzGameThreadSubscriber,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (this_01 == pFVar2) break;
    if (this_01->bHasBeenNotifiedOfAboutToStart == false) {
      FQuartzGameThreadSubscriber::PushEvent(this_01,&local_48);
    }
    this_01 = this_01 + 1;
  }
  if (5 < (byte)LogAudioQuartz._0_1_) {
    this_00 = (FName *)(**(code **)(this->_padding_ + 0x30))(this,&local_res8);
    ::FName::ToString(this_00,&local_58);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(this->_padding_ + 0x50))(this);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// AddSubscriber @ 147345fe0

void __thiscall
Audio::IQuartzQuantizedCommand::AddSubscriber
          (IQuartzQuantizedCommand *this,FQuartzGameThreadSubscriber *param_1)

{
  TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<Audio::FQuartzGameThreadSubscriber_const_&>(&this->GameThreadSubscribers,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Queue).SharedReferenceCount.ReferenceController);
  return;
}

// Cancel @ 1473474e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::IQuartzQuantizedCommand::Cancel(IQuartzQuantizedCommand *this)

{
  int iVar1;
  FName *this_00;
  FQuartzGameThreadSubscriber *pFVar2;
  FQuartzGameThreadSubscriber *this_01;
  bool bVar3;
  LARGE_INTEGER local_res8;
  FString local_58;
  FQuartzQuantizedCommandDelegateData local_48;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId631,"QuartzQuantizedCommand::Cancel",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzQuantizationUtilities.cpp"
               ,0x277);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId631);
  }
  local_48._padding_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_48._padding_ = _UNK_15060db28;
  local_48._padding_ = -1;
  QueryPerformanceCounter(&local_res8);
  local_48._padding_ = (longlong)local_res8;
  local_48.CommandType = (**(code **)(this->_padding_ + 0x38))(this);
  iVar1 = (this->GameThreadSubscribers).ArrayNum;
  this_01 = (FQuartzGameThreadSubscriber *)(this->GameThreadSubscribers).AllocatorInstance.Data;
  pFVar2 = this_01 + iVar1;
  local_48.DelegateID = this->GameThreadDelegateID;
  local_48.DelegateSubType = CommandOnCanceled;
  while( true ) {
    if ((this->GameThreadSubscribers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Audio::FQuartzGameThreadSubscriber,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (this_01 == pFVar2) break;
    FQuartzGameThreadSubscriber::PushEvent(this_01,&local_48);
    this_01 = this_01 + 1;
  }
  if (5 < (byte)LogAudioQuartz._0_1_) {
    this_00 = (FName *)(**(code **)(this->_padding_ + 0x30))(this,&local_res8);
    ::FName::ToString(this_00,&local_58);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(this->_padding_ + 0x70))(this);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FailedToQueue @ 14734ce90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::IQuartzQuantizedCommand::FailedToQueue
          (IQuartzQuantizedCommand *this,FQuartzQuantizedRequestData *param_1)

{
  int iVar1;
  FName *this_00;
  FQuartzGameThreadSubscriber *pFVar2;
  FQuartzGameThreadSubscriber *this_01;
  bool bVar3;
  LARGE_INTEGER local_res8;
  FString local_58;
  FQuartzQuantizedCommandDelegateData local_48;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId550,"QuartzQuantizedCommand::FailedToQueue",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzQuantizationUtilities.cpp"
               ,0x226);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId550);
  }
  TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_>::
  Append<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_>
            (&this->GameThreadSubscribers,&param_1->GameThreadSubscribers);
  iVar1 = (this->GameThreadSubscribers).ArrayNum;
  this->GameThreadDelegateID = param_1->GameThreadDelegateID;
  if (iVar1 != 0) {
    local_48._padding_ = ___xmm_ffffffffffffffffffffffffffffffff;
    local_48._padding_ = _UNK_15060db28;
    local_48._padding_ = -1;
    QueryPerformanceCounter(&local_res8);
    local_48._padding_ = (longlong)local_res8;
    local_48.CommandType = (**(code **)(this->_padding_ + 0x38))(this);
    iVar1 = (this->GameThreadSubscribers).ArrayNum;
    this_01 = (FQuartzGameThreadSubscriber *)(this->GameThreadSubscribers).AllocatorInstance.Data;
    pFVar2 = this_01 + iVar1;
    local_48.DelegateID = this->GameThreadDelegateID;
    local_48.DelegateSubType = CommandOnFailedToQueue;
    while( true ) {
      if ((this->GameThreadSubscribers).ArrayNum != iVar1) {
        `TCheckedPointerIterator<Audio::FQuartzGameThreadSubscriber,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (this_01 == pFVar2) break;
      FQuartzGameThreadSubscriber::PushEvent(this_01,&local_48);
      this_01 = this_01 + 1;
    }
  }
  if (5 < (byte)LogAudioQuartz._0_1_) {
    this_00 = (FName *)(**(code **)(this->_padding_ + 0x30))(this,&local_res8);
    ::FName::ToString(this_00,&local_58);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(this->_padding_ + 0x48))(this);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// GetDeepCopyOfDerivedObject @ 14734ee40

TSharedPtr<Audio::IQuartzQuantizedCommand,1> * __thiscall
Audio::IQuartzQuantizedCommand::GetDeepCopyOfDerivedObject
          (IQuartzQuantizedCommand *this,
          TSharedPtr<Audio::IQuartzQuantizedCommand,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IQuartzQuantizedCommand *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// OnClockPaused @ 147352500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::IQuartzQuantizedCommand::OnClockPaused(IQuartzQuantizedCommand *this)

{
  FName *this_00;
  bool bVar1;
  undefined1 local_res8 [8];
  FString local_18;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId617,"QuartzQuantizedCommand::OnClockPaused",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzQuantizationUtilities.cpp"
               ,0x269);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId617);
  }
  if (5 < (byte)LogAudioQuartz._0_1_) {
    this_00 = (FName *)(**(code **)(this->_padding_ + 0x30))(this,local_res8);
    ::FName::ToString(this_00,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(this->_padding_ + 0x60))(this);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnClockStarted @ 1473525d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::IQuartzQuantizedCommand::OnClockStarted(IQuartzQuantizedCommand *this)

{
  FName *this_00;
  bool bVar1;
  undefined1 local_res8 [8];
  FString local_18;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId624,"QuartzQuantizedCommand::OnClockStarted",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzQuantizationUtilities.cpp"
               ,0x270);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId624);
  }
  if (5 < (byte)LogAudioQuartz._0_1_) {
    this_00 = (FName *)(**(code **)(this->_padding_ + 0x30))(this,local_res8);
    ::FName::ToString(this_00,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(this->_padding_ + 0x68))(this);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnFinalCallback @ 147352990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::IQuartzQuantizedCommand::OnFinalCallback(IQuartzQuantizedCommand *this,int param_1)

{
  int iVar1;
  FName *this_00;
  FQuartzGameThreadSubscriber *pFVar2;
  FQuartzGameThreadSubscriber *this_01;
  bool bVar3;
  LARGE_INTEGER local_res8;
  FString local_58;
  FQuartzQuantizedCommandDelegateData local_48;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId596,"QuartzQuantizedCommand::OnFinalCallback",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzQuantizationUtilities.cpp"
               ,0x254);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId596);
  }
  if ((this->GameThreadSubscribers).ArrayNum != 0) {
    local_48._padding_ = ___xmm_ffffffffffffffffffffffffffffffff;
    local_48._padding_ = _UNK_15060db28;
    local_48._padding_ = -1;
    QueryPerformanceCounter(&local_res8);
    local_48._padding_ = (longlong)local_res8;
    local_48.CommandType = (**(code **)(this->_padding_ + 0x38))(this);
    iVar1 = (this->GameThreadSubscribers).ArrayNum;
    this_01 = (FQuartzGameThreadSubscriber *)(this->GameThreadSubscribers).AllocatorInstance.Data;
    pFVar2 = this_01 + iVar1;
    local_48.DelegateID = this->GameThreadDelegateID;
    local_48.DelegateSubType = CommandOnStarted;
    while( true ) {
      if ((this->GameThreadSubscribers).ArrayNum != iVar1) {
        `TCheckedPointerIterator<Audio::FQuartzGameThreadSubscriber,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (this_01 == pFVar2) break;
      FQuartzGameThreadSubscriber::PushEvent(this_01,&local_48);
      this_01 = this_01 + 1;
    }
  }
  if (5 < (byte)LogAudioQuartz._0_1_) {
    this_00 = (FName *)(**(code **)(this->_padding_ + 0x30))(this,&local_res8);
    ::FName::ToString(this_00,&local_58);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(this->_padding_ + 0x58))(this,param_1);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// OnQueued @ 147352cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::IQuartzQuantizedCommand::OnQueued
          (IQuartzQuantizedCommand *this,FQuartzQuantizedCommandInitInfo *param_1)

{
  FQuartzClockManager *this_00;
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FMixerDevice *pFVar5;
  undefined8 *puVar6;
  FName *this_01;
  FQuartzGameThreadSubscriber *pFVar7;
  FQuartzGameThreadSubscriber *this_02;
  bool bVar8;
  double dVar9;
  undefined1 local_res8 [8];
  LARGE_INTEGER local_res10;
  undefined1 local_res18 [8];
  FString local_88;
  FQuartzQuantizedCommandDelegateData local_78;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId491,"QuartzQuantizedCommand::OnQueued",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzQuantizationUtilities.cpp"
               ,0x1eb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId491);
  }
  if (((param_1->OwningClockPointer).Object == (FQuartzClock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = FQuartzClock::GetMixerDevice((param_1->OwningClockPointer).Object);
  if (pFVar5 != (FMixerDevice *)0x0) {
    this_00 = &pFVar5->QuantizedEventClockManager;
    dVar9 = FQuartzCrossThreadMessage::RequestReceived
                      ((FQuartzCrossThreadMessage *)&this->_padding_);
    puVar6 = ::operator_new(0x10);
    if (puVar6 != (undefined8 *)0x0) {
      *(float *)(puVar6 + 1) = (float)dVar9;
      *puVar6 = 0;
      if (((ulonglong)this_00 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      puVar1 = (undefined8 *)this_00->_padding_;
      this_00->_padding_ = (longlong)puVar6;
      UNLOCK();
      if (((ulonglong)puVar1 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      *puVar1 = puVar6;
      UNLOCK();
    }
    bVar4 = IsInGameThread();
    if (bVar4) {
      FQuartLatencyTracker::DigestQueue((FQuartLatencyTracker *)this_00);
    }
  }
  TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_>::
  Append<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_>
            (&this->GameThreadSubscribers,&param_1->GameThreadSubscribers);
  iVar2 = (this->GameThreadSubscribers).ArrayNum;
  this->GameThreadDelegateID = param_1->GameThreadDelegateID;
  if (iVar2 != 0) {
    local_78._padding_ = ___xmm_ffffffffffffffffffffffffffffffff;
    local_78._padding_ = _UNK_15060db28;
    local_78._padding_ = -1;
    QueryPerformanceCounter(&local_res10);
    local_78._padding_ = (longlong)local_res10;
    local_78.CommandType = (**(code **)(this->_padding_ + 0x38))(this);
    iVar2 = (this->GameThreadSubscribers).ArrayNum;
    this_02 = (FQuartzGameThreadSubscriber *)(this->GameThreadSubscribers).AllocatorInstance.Data;
    pFVar7 = this_02 + iVar2;
    local_78.DelegateID = this->GameThreadDelegateID;
    local_78.DelegateSubType = CommandOnQueued;
    while( true ) {
      if ((this->GameThreadSubscribers).ArrayNum != iVar2) {
        `TCheckedPointerIterator<Audio::FQuartzGameThreadSubscriber,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (this_02 == pFVar7) break;
      FQuartzGameThreadSubscriber::PushEvent(this_02,&local_78);
      this_02 = this_02 + 1;
    }
  }
  if (5 < (byte)LogAudioQuartz._0_1_) {
    this_01 = (FName *)(**(code **)(this->_padding_ + 0x30))(this,local_res18);
    ::FName::ToString(this_01,&local_88);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(this->_padding_ + 0x40))(this,param_1);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnScheduled @ 147352f70

void __thiscall
Audio::IQuartzQuantizedCommand::OnScheduled
          (IQuartzQuantizedCommand *this,FQuartzClockTickRate *param_1)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  double dVar8;
  undefined1 local_res8 [8];
  
  dVar4 = __real_408f400000000000;
  iVar1 = (this->GameThreadSubscribers).ArrayNum;
  pFVar6 = (this->GameThreadSubscribers).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x40;
LAB_147352fc0:
  do {
    if ((this->GameThreadSubscribers).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Audio::FQuartzGameThreadSubscriber,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) {
      return;
    }
    pFVar6[0x38] = (FScriptContainerElement)0x1;
    if (pFVar6[8] != (FScriptContainerElement)0x0) {
      if (pFVar6[0x20] != (FScriptContainerElement)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(OffsetInMilliseconds.IsSet() && OffsetAsDuration.IsSet())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzSubscription.cpp"
                           ,0xd4,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (pFVar6[8] != (FScriptContainerElement)0x0) {
        *(int *)(pFVar6 + 0x3c) = (int)(*(double *)pFVar6 * dVar4 * param_1->SampleRate);
        pFVar6 = pFVar6 + 0x40;
        goto LAB_147352fc0;
      }
    }
    if (pFVar6[0x20] == (FScriptContainerElement)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2677017514612883689>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzSubscription.cpp"
                         ,0xe9,"false");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      dVar3 = *(double *)(pFVar6 + 0x18);
      if (SUB81(*(double *)(pFVar6 + 0x10),0) != None) {
        dVar8 = FQuartzClockTickRate::GetFramesPerDuration
                          (param_1,SUB81(*(double *)(pFVar6 + 0x10),0));
        *(int *)(pFVar6 + 0x3c) = (int)(dVar8 * dVar3);
        pFVar6 = pFVar6 + 0x40;
        goto LAB_147352fc0;
      }
    }
    *(undefined4 *)(pFVar6 + 0x3c) = 0;
    pFVar6 = pFVar6 + 0x40;
  } while( true );
}

// Update @ 14735b1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Audio::IQuartzQuantizedCommand::Update(IQuartzQuantizedCommand *this,int param_1)

{
  int iVar1;
  FQuartzGameThreadSubscriber *pFVar2;
  FQuartzGameThreadSubscriber *this_00;
  bool bVar3;
  LARGE_INTEGER local_res8;
  FQuartzQuantizedCommandDelegateData local_48;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId529,"QuartzQuantizedCommand::Countdown",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzQuantizationUtilities.cpp"
               ,0x211);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId529);
  }
  local_48._padding_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_48._padding_ = _UNK_15060db28;
  local_48._padding_ = -1;
  QueryPerformanceCounter(&local_res8);
  local_48._padding_ = (longlong)local_res8;
  local_48.CommandType = (**(code **)(this->_padding_ + 0x38))(this);
  iVar1 = (this->GameThreadSubscribers).ArrayNum;
  this_00 = (FQuartzGameThreadSubscriber *)(this->GameThreadSubscribers).AllocatorInstance.Data;
  pFVar2 = this_00 + iVar1;
  local_48.DelegateID = this->GameThreadDelegateID;
  local_48.DelegateSubType = CommandOnAboutToStart;
  while( true ) {
    if ((this->GameThreadSubscribers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Audio::FQuartzGameThreadSubscriber,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (this_00 == pFVar2) break;
    if (this_00->bOffsetConvertedToFrames == false) {
      `Audio::FQuartzGameThreadSubscriber::GetOffsetAsAudioFrames'::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if ((this_00->bHasBeenNotifiedOfAboutToStart == false) &&
       (param_1 <= this_00->OffsetInAudioFrames)) {
      FQuartzGameThreadSubscriber::PushEvent(this_00,&local_48);
    }
    this_00 = this_00 + 1;
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

