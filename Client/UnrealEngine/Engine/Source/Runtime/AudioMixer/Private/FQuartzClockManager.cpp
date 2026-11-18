// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 34

// FQuartzClockManager @ 14653d5b0

/* WARNING: Enum "Type": Some values do not have unique names */

FQuartzClockManager * __thiscall
Audio::FQuartzClockManager::FQuartzClockManager(FQuartzClockManager *this,FMixerDevice *param_1)

{
  FQuartLatencyTracker::FQuartLatencyTracker((FQuartLatencyTracker *)this);
  this->MixerDevice = param_1;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ActiveClockCritSec,4000);
  (this->ActiveClocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveClocks).ArrayNum = 0;
  (this->ActiveClocks).ArrayMax = 0;
  (this->LastClockTickedIndex).Counter = 0;
  this->LastUpdateSizeInFrames = 0;
  return this;
}

// ~FQuartzClockManager @ 146540cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FQuartzClockManager::~FQuartzClockManager(FQuartzClockManager *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  
  if (((this->ActiveClocks).ArrayNum != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveClocks.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\AudioMixerClockManager.cpp"
                         ,0x11,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  DestructItems<TSharedPtr<Audio::FQuartzClock,1>,int>
            ((TSharedPtr<Audio::FQuartzClock,1> *)(this->ActiveClocks).AllocatorInstance.Data,
             (this->ActiveClocks).ArrayNum);
  pFVar1 = (this->ActiveClocks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ActiveClockCritSec);
  plVar2 = (longlong *)this->_padding_;
  while (plVar2 != (longlong *)0x0) {
    this->_padding_ = *plVar2;
    ::operator_delete(plVar2,0x10);
    plVar2 = (longlong *)this->_padding_;
  }
  return;
}

// operator() @ 146542e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Audio::FQuartzClockManager::SubscribeToAllTimeDivisions'::__l5::<lambda_1>::operator()(void *this)

{
  FQuartzClockManager *this_00;
  TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
  local_18;
  
  local_18.Object =
       *(TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
         **)((longlong)this + 0x10);
  this_00 = *(FQuartzClockManager **)this;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  Audio::FQuartzClockManager::SubscribeToAllTimeDivisions
            (this_00,*(FName *)((longlong)this + 8),&local_18);
  return;
}

// operator() @ 146542e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Audio::FQuartzClockManager::SubscribeToTimeDivision'::__l5::<lambda_1>::operator()(void *this)

{
  EQuartzCommandQuantization EVar1;
  FQuartzClockManager *this_00;
  TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
  local_18;
  
  local_18.Object =
       *(TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
         **)((longlong)this + 0x10);
  this_00 = *(FQuartzClockManager **)this;
  EVar1 = *(EQuartzCommandQuantization *)((longlong)this + 0x20);
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  Audio::FQuartzClockManager::SubscribeToTimeDivision
            (this_00,*(FName *)((longlong)this + 8),&local_18,EVar1);
  return;
}

// operator() @ 146542ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Audio::FQuartzClockManager::UnsubscribeFromAllTimeDivisions'::__l5::<lambda_1>::operator()
          (void *this)

{
  FQuartzClockManager *this_00;
  TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
  local_18;
  
  local_18.Object =
       *(TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
         **)((longlong)this + 0x10);
  this_00 = *(FQuartzClockManager **)this;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  Audio::FQuartzClockManager::UnsubscribeFromAllTimeDivisions
            (this_00,*(FName *)((longlong)this + 8),&local_18);
  return;
}

// operator() @ 146542ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Audio::FQuartzClockManager::UnsubscribeFromTimeDivision'::__l5::<lambda_1>::operator()(void *this)

{
  EQuartzCommandQuantization EVar1;
  FQuartzClockManager *this_00;
  TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
  local_18;
  
  local_18.Object =
       *(TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
         **)((longlong)this + 0x10);
  this_00 = *(FQuartzClockManager **)this;
  EVar1 = *(EQuartzCommandQuantization *)((longlong)this + 0x20);
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  Audio::FQuartzClockManager::UnsubscribeFromTimeDivision
            (this_00,*(FName *)((longlong)this + 8),&local_18,EVar1);
  return;
}

// AddCommandToClock @ 146545a80

/* WARNING: Enum "Type": Some values do not have unique names */

FQuartzQuantizedCommandHandle * __thiscall
Audio::FQuartzClockManager::AddCommandToClock
          (FQuartzClockManager *this,FQuartzQuantizedCommandHandle *__return_storage_ptr__,
          FQuartzQuantizedCommandInitInfo *param_1)

{
  TSharedPtr<Audio::IQuartzQuantizedCommand,1> *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  FMixerDevice *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  FQuartzQuantizedCommandHandle *pFVar7;
  IQuartzQuantizedCommand *pIVar8;
  FQuartzQuantizationBoundary *pFVar9;
  TSharedPtr<Audio::FQuartzClock,1> local_78;
  IQuartzQuantizedCommand *local_68;
  TReferenceControllerBase<1> *local_60;
  TSharedPtr<Audio::FQuartzClock,1> local_58;
  FQuartzQuantizationBoundary local_48;
  
  this_00 = &param_1->QuantizedCommandPtr;
  if ((param_1->QuantizedCommandPtr).Object == (IQuartzQuantizedCommand *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4429057424816602824>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\AudioMixerClockManager.cpp"
                       ,0x138,"InQuantizationCommandInitInfo.QuantizedCommandPtr");
    if (!bVar5) {
      (__return_storage_ptr__->OwningClockName).ComparisonIndex = 0;
      (__return_storage_ptr__->OwningClockName).Number = 0;
      (__return_storage_ptr__->CommandPtr).Object = (IQuartzQuantizedCommand *)0x0;
      (__return_storage_ptr__->CommandPtr).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      __return_storage_ptr__->MixerDevice = (FMixerDevice *)0x0;
      return __return_storage_ptr__;
    }
    pcVar4 = (code *)swi(3);
    pFVar7 = (FQuartzQuantizedCommandHandle *)(*pcVar4)();
    return pFVar7;
  }
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->MixerDevice == (FMixerDevice *)0x0) {
    if ((this_00->Object == (IQuartzQuantizedCommand *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FQuartzQuantizedCommandHandle *)(*pcVar4)();
      return pFVar7;
    }
    cVar6 = (**(code **)(this_00->Object->_padding_ + 0x28))();
    if (cVar6 != '\0') {
      pIVar8 = TSharedPtr<Audio::IQuartzQuantizedCommand,1>::operator->(this_00);
      IQuartzQuantizedCommand::Cancel(pIVar8);
      goto LAB_146545cdb;
    }
  }
  FindClock(this,&local_78,&param_1->ClockName);
  if (local_78.Object != (FQuartzClock *)0x0) {
    local_58.Object = local_78.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_78.SharedReferenceCount.ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FQuartzQuantizedCommandInitInfo::SetOwningClockPtr(param_1,&local_58);
    if ((this_00->Object == (IQuartzQuantizedCommand *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FQuartzQuantizedCommandHandle *)(*pcVar4)();
      return pFVar7;
    }
    IQuartzQuantizedCommand::OnQueued(this_00->Object,param_1);
    if ((local_78.Object == (FQuartzClock *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FQuartzQuantizedCommandHandle *)(*pcVar4)();
      return pFVar7;
    }
    pcVar4 = *(code **)((local_78.Object)->_padding_ + 0x48);
    local_68 = this_00->Object;
    local_60 = (param_1->QuantizedCommandPtr).SharedReferenceCount.ReferenceController;
    if (local_60 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9 = FQuartzQuantizationBoundary::FQuartzQuantizationBoundary
                       (&local_48,&param_1->QuantizationBoundary);
    (*pcVar4)(&(local_78.Object)->_padding_,pFVar9,&local_68);
    FVar1 = param_1->ClockName;
    pIVar8 = this_00->Object;
    pTVar2 = (param_1->QuantizedCommandPtr).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar3 = this->MixerDevice;
    __return_storage_ptr__->OwningClockName = FVar1;
    (__return_storage_ptr__->CommandPtr).Object = pIVar8;
    (__return_storage_ptr__->CommandPtr).SharedReferenceCount.ReferenceController = pTVar2;
    __return_storage_ptr__->MixerDevice = pFVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
LAB_146545cdb:
  (__return_storage_ptr__->OwningClockName).ComparisonIndex = 0;
  (__return_storage_ptr__->OwningClockName).Number = 0;
  (__return_storage_ptr__->CommandPtr).Object = (IQuartzQuantizedCommand *)0x0;
  (__return_storage_ptr__->CommandPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->MixerDevice = (FMixerDevice *)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// CancelCommandOnClock @ 146548ee0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FQuartzClockManager::CancelCommandOnClock
          (FQuartzClockManager *this,FName param_1,
          TSharedPtr<Audio::IQuartzQuantizedCommand,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName local_res10;
  TSharedPtr<Audio::FQuartzClock,1> local_28;
  TSharedPtr<Audio::IQuartzQuantizedCommand,1> local_18;
  
  local_res10 = param_1;
  if (this->MixerDevice != (FMixerDevice *)0x0) {
    bVar2 = FMixerDevice::IsAudioRenderingThread(this->MixerDevice);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MixerDevice->IsAudioRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\AudioMixerClockManager.cpp"
                         ,0x1b1,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FindClock(this,&local_28,&local_res10);
    if ((local_28.Object != (FQuartzClock *)0x0) &&
       (param_2->Object != (IQuartzQuantizedCommand *)0x0)) {
      if (local_28.Object == (FQuartzClock *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      local_18.Object = param_2->Object;
      local_18.SharedReferenceCount.ReferenceController =
           (param_2->SharedReferenceCount).ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar2 = FQuartzClock::CancelQuantizedCommand(local_28.Object,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
      return bVar2;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return false;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// DoesClockExist @ 146552980

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FQuartzClockManager::DoesClockExist(FQuartzClockManager *this,FName *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FQuartzClock *pFVar1;
  TSharedPtr<Audio::FQuartzClock,1> *pTVar2;
  TSharedPtr<Audio::FQuartzClock,1> local_18;
  
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar2 = FindClock(this,&local_18,param_1);
    pFVar1 = pTVar2->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return pFVar1 != (FQuartzClock *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FindClock @ 146553cf0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<Audio::FQuartzClock,1> * __thiscall
Audio::FQuartzClockManager::FindClock
          (FQuartzClockManager *this,TSharedPtr<Audio::FQuartzClock,1> *__return_storage_ptr__,
          FName *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<Audio::FQuartzClock,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->ActiveClocks).ArrayNum;
  pFVar6 = (this->ActiveClocks).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ActiveClocks).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<Audio::FQuartzClock,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) {
      __return_storage_ptr__->Object = (FQuartzClock *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_146553dbb;
    }
    if (*(longlong *)pFVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TSharedPtr<Audio::FQuartzClock,1> *)(*pcVar3)();
        return pTVar5;
      }
    }
    if ((*(FQuartzClock **)pFVar6)->Name == *param_1) break;
    pFVar6 = pFVar6 + 0x10;
  }
  __return_storage_ptr__->Object = *(FQuartzClock **)pFVar6;
  pTVar2 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_146553dbb:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// Flush @ 146554690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FQuartzClockManager::Flush(FQuartzClockManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar5 = (this->ActiveClocks).ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 << 4;
    do {
      if (this->MixerDevice == (FMixerDevice *)0x0) {
LAB_146554770:
        uVar4 = 0;
        if ((int)uVar5 < (this->ActiveClocks).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<TSharedPtr<Audio::FQuartzClock,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->ActiveClocks,uVar5);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->ActiveClocks).AllocatorInstance,(this->ActiveClocks).ArrayNum,
                   &(this->ActiveClocks).ArrayMax);
      }
      else {
        uVar4 = 0;
        if ((int)uVar5 < (this->ActiveClocks).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->ActiveClocks).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar1 + lVar6) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(char *)(*(longlong *)(pFVar1 + lVar6) + 0x55c) == '\0') goto LAB_146554770;
      }
      lVar6 = lVar6 + -0x10;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x000146554814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetClock @ 146555860

/* WARNING: Enum "Type": Some values do not have unique names */

FQuartzClockProxy * __thiscall
Audio::FQuartzClockManager::GetClock
          (FQuartzClockManager *this,FQuartzClockProxy *__return_storage_ptr__,FName *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FQuartzClockProxy *pFVar3;
  FName local_res8;
  TSharedPtr<Audio::FQuartzClock,1> local_38;
  TSharedPtr<Audio::FQuartzClock,1> local_28;
  FString local_18;
  
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FindClock(this,&local_38,param_1);
  if (local_38.Object == (FQuartzClock *)0x0) {
    if (2 < (byte)LogAudioQuartz._0_1_) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FQuartzClockProxy *)(*pcVar1)();
        return pFVar3;
      }
      local_res8 = FRam0000000000000518;
      ::FName::ToString(&local_res8,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    (__return_storage_ptr__->ClockId).ComparisonIndex = 0;
    (__return_storage_ptr__->ClockId).Number = 0;
    (__return_storage_ptr__->SharedQueue).Object =
         (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0;
    (__return_storage_ptr__->SharedQueue).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->ClockWeakPtr).Object = (FQuartzClock *)0x0;
    (__return_storage_ptr__->ClockWeakPtr).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_28.Object = local_38.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FQuartzClockProxy::FQuartzClockProxy(__return_storage_ptr__,&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// GetCurrentTimestamp @ 1465560b0

/* WARNING: Enum "Type": Some values do not have unique names */

FQuartzTransportTimeStamp * __thiscall
Audio::FQuartzClockManager::GetCurrentTimestamp
          (FQuartzClockManager *this,FQuartzTransportTimeStamp *__return_storage_ptr__,
          FName *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  code *pcVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  FQuartzTransportTimeStamp *pFVar6;
  TSharedPtr<Audio::FQuartzClock,1> local_18;
  
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FindClock(this,&local_18,param_1);
    if (local_18.Object == (FQuartzClock *)0x0) {
      __return_storage_ptr__->Bars = 0;
      __return_storage_ptr__->Beat = 0;
      __return_storage_ptr__->BeatFraction = 0.0;
      __return_storage_ptr__->Seconds = 0.0;
    }
    else {
      if (local_18.Object == (FQuartzClock *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FQuartzTransportTimeStamp *)(*pcVar1)();
          return pFVar6;
        }
      }
      lpCriticalSection_00 = &(local_18.Object)->CachedClockStateCritSec;
      if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) goto LAB_14655618a;
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      iVar2 = ((local_18.Object)->CachedClockState).TimeStamp.Beat;
      fVar3 = ((local_18.Object)->CachedClockState).TimeStamp.BeatFraction;
      fVar4 = ((local_18.Object)->CachedClockState).TimeStamp.Seconds;
      __return_storage_ptr__->Bars = ((local_18.Object)->CachedClockState).TimeStamp.Bars;
      __return_storage_ptr__->Beat = iVar2;
      __return_storage_ptr__->BeatFraction = fVar3;
      __return_storage_ptr__->Seconds = fVar4;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
LAB_14655618a:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetDurationOfQuantizationTypeInSeconds @ 146557660

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
Audio::FQuartzClockManager::GetDurationOfQuantizationTypeInSeconds
          (FQuartzClockManager *this,FName *param_1,EQuartzCommandQuantization *param_2,
          float param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  float fVar3;
  TSharedPtr<Audio::FQuartzClock,1> local_28 [2];
  
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FindClock(this,local_28,param_1);
  fVar3 = __real_bf800000;
  if (local_28[0].Object != (FQuartzClock *)0x0) {
    if ((local_28[0].Object == (FQuartzClock *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
    fVar3 = FQuartzClock::GetDurationOfQuantizationTypeInSeconds(local_28[0].Object,param_2,param_3)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return fVar3;
}

// GetEstimatedRunTime @ 146557ad0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
Audio::FQuartzClockManager::GetEstimatedRunTime(FQuartzClockManager *this,FName *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  code *pcVar1;
  bool bVar2;
  float fVar3;
  TSharedPtr<Audio::FQuartzClock,1> local_28 [2];
  
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
LAB_146557ba4:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FindClock(this,local_28,param_1);
  fVar3 = __real_bf800000;
  if (local_28[0].Object != (FQuartzClock *)0x0) {
    if ((local_28[0].Object == (FQuartzClock *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
    lpCriticalSection_00 = &(local_28[0].Object)->CachedClockStateCritSec;
    if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) goto LAB_146557ba4;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    fVar3 = ((local_28[0].Object)->CachedClockState).RunTimeInSeconds;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return fVar3;
}

// GetMixerDevice @ 146558f10

/* WARNING: Enum "Type": Some values do not have unique names */

FMixerDevice * __thiscall Audio::FQuartzClockManager::GetMixerDevice(FQuartzClockManager *this)

{
  return this->MixerDevice;
}

// GetOrCreateClock @ 1465599d0

/* WARNING: Enum "Type": Some values do not have unique names */

FQuartzClockProxy * __thiscall
Audio::FQuartzClockManager::GetOrCreateClock
          (FQuartzClockManager *this,FQuartzClockProxy *__return_storage_ptr__,FName *param_1,
          FQuartzClockSettings *param_2,bool param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  FQuartzClock *this_00;
  bool bVar3;
  int iVar4;
  FQuartzClockProxy *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FScriptContainerElement *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  FName local_res8;
  TSharedPtr<Audio::FQuartzClock,1> local_78;
  TSharedPtr<Audio::FQuartzClock,1> local_68;
  FString local_58;
  TSharedPtr<Audio::FQuartzClock,1> local_48;
  FQuartzClockSettings local_38;
  
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FQuartzTimeSignature::FQuartzTimeSignature(&local_38.TimeSignature,&param_2->TimeSignature);
  local_38.bIgnoreLevelChange = param_2->bIgnoreLevelChange;
  FindClock(this,&local_78,param_1);
  this_00 = local_78.Object;
  if (local_78.Object == (FQuartzClock *)0x0) {
    pTVar6 = ::operator_new(0x578);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFQuartzClock_Audio___00_SharedPointerInternals__6B_
      ;
      FQuartzClock::FQuartzClock((FQuartzClock *)(pTVar6 + 1),param_1,&local_38,this);
      pTVar8 = pTVar6 + 1;
      if ((pTVar8 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FQuartzClockProxy *)(*pcVar2)();
        return pFVar5;
      }
    }
    iVar4 = (this->ActiveClocks).ArrayNum;
    piVar1 = &(this->ActiveClocks).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->ActiveClocks).AllocatorInstance,piVar1);
    }
    (this->ActiveClocks).ArrayNum = iVar4 + 1;
    pFVar7 = (this->ActiveClocks).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
    *(TReferenceControllerBase<1> **)pFVar7 = pTVar8;
    *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68.Object = *(FQuartzClock **)pFVar7;
    local_68.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar7 + 8);
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FQuartzClockProxy::FQuartzClockProxy(__return_storage_ptr__,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  else {
    if (param_3) {
      if ((local_78.Object == (FQuartzClock *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FQuartzClockProxy *)(*pcVar2)();
        return pFVar5;
      }
      bVar3 = FQuartzTimeSignature::operator==
                        (&(this_00->Metronome).CurrentTimeSignature,&local_38.TimeSignature);
      if (!bVar3) {
        if (3 < (byte)LogAudioQuartz._0_1_) {
          if ((this_00 == (FQuartzClock *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar5 = (FQuartzClockProxy *)(*pcVar2)();
            return pFVar5;
          }
          local_res8 = this_00->Name;
          ::FName::ToString(&local_res8,&local_58);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        if ((this_00 == (FQuartzClock *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FQuartzClockProxy *)(*pcVar2)();
          return pFVar5;
        }
        FQuartzTimeSignature::operator=
                  (&(this_00->Metronome).CurrentTimeSignature,&local_38.TimeSignature);
        FQuartzMetronome::RecalculateDurations(&this_00->Metronome);
        FQuartzClock::UpdateCachedState(this_00);
      }
    }
    local_48.Object = local_78.Object;
    local_48.SharedReferenceCount.ReferenceController =
         local_78.SharedReferenceCount.ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FQuartzClockProxy::FQuartzClockProxy(__return_storage_ptr__,&local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  if (local_38.TimeSignature.OptionalPulseOverride.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.TimeSignature.OptionalPulseOverride.AllocatorInstance.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// GetTickRateForClock @ 14655b9a0

/* WARNING: Enum "Type": Some values do not have unique names */

FQuartzClockTickRate * __thiscall
Audio::FQuartzClockManager::GetTickRateForClock
          (FQuartzClockManager *this,FQuartzClockTickRate *__return_storage_ptr__,FName *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FQuartzClockTickRate *pFVar3;
  TSharedPtr<Audio::FQuartzClock,1> local_18;
  
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FindClock(this,&local_18,param_1);
  if (local_18.Object == (FQuartzClock *)0x0) {
    FQuartzClockTickRate::FQuartzClockTickRate(__return_storage_ptr__);
  }
  else {
    if (local_18.Object == (FQuartzClock *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FQuartzClockTickRate *)(*pcVar1)();
        return pFVar3;
      }
    }
    FQuartzClock::GetTickRate(local_18.Object,__return_storage_ptr__);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// HasClockBeenTickedThisUpdate @ 14655c390

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FQuartzClockManager::HasClockBeenTickedThisUpdate(FQuartzClockManager *this,FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar9 = (longlong)(this->ActiveClocks).ArrayNum;
  uVar10 = 0;
  if (0 < lVar9) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < (this->ActiveClocks).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      pFVar2 = (this->ActiveClocks).AllocatorInstance.Data;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar12 + 8);
      lVar4 = *(longlong *)(pFVar2 + lVar12);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (lVar4 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ClockPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\AudioMixerClockManager.cpp"
                           ,0x1c7,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (*(FName *)(lVar4 + 0x518) == param_1) {
        iVar1 = (this->LastClockTickedIndex).Counter;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        bVar6 = (int)uVar10 < iVar1;
        goto LAB_14655c4c8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + 0x10;
    } while (lVar11 < lVar9);
  }
  bVar6 = false;
LAB_14655c4c8:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar6;
}

// IsClockRunning @ 146560eb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FQuartzClockManager::IsClockRunning(FQuartzClockManager *this,FName *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<Audio::FQuartzClock,1> local_18;
  
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FindClock(this,&local_18,param_1);
  bVar2 = false;
  if (local_18.Object != (FQuartzClock *)0x0) {
    if (local_18.Object == (FQuartzClock *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = (local_18.Object)->bIsRunning != (FThreadSafeBool)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar2;
}

// LowResoultionUpdate @ 146562160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuartzClockManager::LowResoultionUpdate(FQuartzClockManager *this,float param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FQuartzClock *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  FString local_48 [2];
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId35,"QuartzClockManager::Update_LowRes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\AudioMixerClockManager.cpp"
               ,0x23);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId35);
  }
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->ActiveClocks).ArrayNum;
  pFVar6 = (this->ActiveClocks).AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ActiveClocks).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<Audio::FQuartzClock,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar5) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    if ((*(longlong *)pFVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = *(FQuartzClock **)pFVar6;
    bVar3 = -1 < CpuChannel->Enabled;
    if (bVar3) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId282,"QuartzClock::Tick_LowRes",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\AudioMixerClock.cpp"
                 ,0x11a);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId282);
    }
    if (5 < (byte)LogAudioQuartz._0_1_) {
      ::FName::ToString(&this_00->Name,local_48);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
      if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      }
    }
    if (((this_00->PreTickCommands).Object ==
         (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) break;
    Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IQuartzClock>::PumpCommandQueue
              ((this_00->PreTickCommands).Object,(IListenerBase *)this_00);
    FQuartzClock::Tick(this_00,(int)((double)param_1 *
                                    (this_00->Metronome).CurrentTickRate.SampleRate));
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    pFVar6 = pFVar6 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// PauseClock @ 1465663b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FQuartzClockManager::PauseClock(FQuartzClockManager *this,FName *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  TSharedPtr<Audio::FQuartzClock,1> local_48;
  code *local_38 [2];
  undefined **local_28;
  FQuartzClockManager *local_20;
  FName local_18;
  undefined8 local_10;
  
  if (this->MixerDevice != (FMixerDevice *)0x0) {
    bVar2 = FMixerDevice::IsAudioRenderingThread(this->MixerDevice);
    if (!bVar2) {
      local_28 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`Audio::FQuartzClockManager::PauseClock'::`5'::<lambda_1>,0,0>
                  ::_vftable_;
      local_18 = *param_1;
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FQuartzClockManager::PauseClock'::__l5::<lambda_1>,void>
                    ::Call;
      local_10 = 0;
      local_20 = this;
      FMixerDevice::AudioRenderThreadCommand
                (this->MixerDevice,(TFunction<void___cdecl(void)> *)local_38);
      return;
    }
  }
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FindClock(this,&local_48,param_1);
    if (local_48.Object != (FQuartzClock *)0x0) {
      if (local_48.Object == (FQuartzClock *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (**(code **)((local_48.Object)->_padding_ + 0x10))(&(local_48.Object)->_padding_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x0001465664aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RemoveClock @ 14656cf90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuartzClockManager::RemoveClock(FQuartzClockManager *this,FName *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<TSharedPtr<Audio::FQuartzClock,1>,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  FString local_68;
  code *local_58 [2];
  undefined **local_48;
  FQuartzClockManager *local_40;
  FName local_38;
  undefined8 local_30;
  
  if (((!param_2) && (this->MixerDevice != (FMixerDevice *)0x0)) &&
     (bVar3 = FMixerDevice::IsAudioRenderingThread(this->MixerDevice), !bVar3)) {
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Audio::FQuartzClockManager::RemoveClock'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_38 = *param_1;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Audio::FQuartzClockManager::RemoveClock'::__l5::<lambda_1>,void>
                  ::Call;
    local_30 = 0;
    local_40 = this;
    FMixerDevice::AudioRenderThreadCommand
              (this->MixerDevice,(TFunction<void___cdecl(void)> *)local_58);
    return;
  }
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar5 = (this->ActiveClocks).ArrayNum - 1;
  if (-1 < (int)uVar5) {
    this_00 = &this->ActiveClocks;
    lVar6 = (longlong)(int)uVar5 << 4;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->ActiveClocks).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this_00->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar1 + lVar6) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(FName *)(*(longlong *)(pFVar1 + lVar6) + 0x518) == *param_1) {
        if (5 < (byte)LogAudioQuartz._0_1_) {
          ::FName::ToString(param_1,&local_68);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
        uVar4 = 0;
        if ((int)uVar5 < (this->ActiveClocks).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<TSharedPtr<Audio::FQuartzClock,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (this_00,uVar5);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,(this->ActiveClocks).ArrayNum,
                   &(this->ActiveClocks).ArrayMax);
      }
      lVar6 = lVar6 + -0x10;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00014656d1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ResumeClock @ 146570430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuartzClockManager::ResumeClock(FQuartzClockManager *this,FName *param_1,int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  TSharedPtr<Audio::FQuartzClock,1> local_48;
  code *local_38 [2];
  undefined **local_28;
  FQuartzClockManager *local_20;
  FName local_18;
  undefined8 local_10;
  
  if (this->MixerDevice != (FMixerDevice *)0x0) {
    bVar2 = FMixerDevice::IsAudioRenderingThread(this->MixerDevice);
    if (!bVar2) {
      local_28 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`Audio::FQuartzClockManager::ResumeClock'::`5'::<lambda_1>,0,0>
                  ::_vftable_;
      local_18 = *param_1;
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FQuartzClockManager::ResumeClock'::__l5::<lambda_1>,void>
                    ::Call;
      local_10 = 0;
      local_20 = this;
      FMixerDevice::AudioRenderThreadCommand
                (this->MixerDevice,(TFunction<void___cdecl(void)> *)local_38);
      return;
    }
  }
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FindClock(this,&local_48,param_1);
    if (local_48.Object != (FQuartzClock *)0x0) {
      if (local_48.Object == (FQuartzClock *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (local_48.Object)->TickDelayLengthInFrames =
           (local_48.Object)->TickDelayLengthInFrames + param_2;
      (**(code **)((local_48.Object)->_padding_ + 8))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x000146570547. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetTickRateForClock @ 146575030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuartzClockManager::SetTickRateForClock
          (FQuartzClockManager *this,FQuartzClockTickRate *param_1,FName *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FMixerDevice *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedPtr<Audio::FQuartzClock,1> local_b8;
  FQuartzClockManager *local_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  FName local_70;
  code *local_68 [5];
  undefined8 *local_40;
  FQuartzClockTickRate local_38;
  
  if ((this->MixerDevice != (FMixerDevice *)0x0) &&
     (bVar2 = FMixerDevice::IsAudioRenderingThread(this->MixerDevice), !bVar2)) {
    dStack_a0 = param_1->FramesPerTick;
    dStack_98 = param_1->MillisecondsPerTick;
    local_70 = *param_2;
    dStack_90 = param_1->SecondsPerTick;
    dStack_88 = param_1->ThirtySecondNotesPerMinute;
    this_00 = this->MixerDevice;
    local_80 = param_1->BeatsPerMinute;
    dStack_78 = param_1->SampleRate;
    local_68[0] = (code *)0x0;
    local_a8 = this;
    local_40 = FMemory::Malloc(0x48,8);
    *local_40 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FQuartzClockManager::SetTickRateForClock'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    local_40[1] = local_a8;
    local_40[2] = dStack_a0;
    local_40[3] = dStack_98;
    local_40[4] = dStack_90;
    local_40[5] = dStack_88;
    local_40[6] = local_80;
    local_40[7] = dStack_78;
    *(FName *)(local_40 + 8) = local_70;
    if (local_40 + 1 != (undefined8 *)0x0) {
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FQuartzClockManager::SetTickRateForClock'::__l5::<lambda_1>,void>
                    ::Call;
    }
    FMixerDevice::AudioRenderThreadCommand(this_00,(TFunction<void___cdecl(void)> *)local_68);
    return;
  }
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FindClock(this,&local_b8,param_2);
  if (local_b8.Object != (FQuartzClock *)0x0) {
    if ((local_b8.Object == (FQuartzClock *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_38.FramesPerTick = param_1->FramesPerTick;
    local_38.MillisecondsPerTick = param_1->MillisecondsPerTick;
    local_38.SecondsPerTick = param_1->SecondsPerTick;
    local_38.ThirtySecondNotesPerMinute = param_1->ThirtySecondNotesPerMinute;
    local_38.BeatsPerMinute = param_1->BeatsPerMinute;
    local_38.SampleRate = param_1->SampleRate;
    FQuartzClock::ChangeTickRate(local_b8.Object,&local_38,0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Shutdown @ 1465766a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FQuartzClockManager::Shutdown(FQuartzClockManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  TSharedPtr<Audio::FQuartzClock,1> *pTVar3;
  
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    piVar1 = &(this->ActiveClocks).ArrayMax;
    pTVar3 = (TSharedPtr<Audio::FQuartzClock,1> *)(this->ActiveClocks).AllocatorInstance.Data;
    iVar2 = (this->ActiveClocks).ArrayNum;
    if ((this->ActiveClocks).ArrayMax < 0) {
      DestructItems<TSharedPtr<Audio::FQuartzClock,1>,int>(pTVar3,iVar2);
      (this->ActiveClocks).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->ActiveClocks).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TSharedPtr<Audio::FQuartzClock,1>,int>(pTVar3,iVar2);
      (this->ActiveClocks).ArrayNum = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x000146576720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StopClock @ 146577d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuartzClockManager::StopClock(FQuartzClockManager *this,FName *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FMixerDevice *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedPtr<Audio::FQuartzClock,1> local_68;
  FQuartzClockManager *local_58;
  FName FStack_50;
  undefined1 local_48;
  undefined7 uStack_47;
  code *local_38 [5];
  undefined8 *local_10;
  
  if ((this->MixerDevice != (FMixerDevice *)0x0) &&
     (bVar2 = FMixerDevice::IsAudioRenderingThread(this->MixerDevice), !bVar2)) {
    FStack_50 = *param_1;
    this_00 = this->MixerDevice;
    local_38[0] = (code *)0x0;
    local_58 = this;
    local_48 = param_2;
    local_10 = FMemory::Malloc(0x20,8);
    *local_10 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FQuartzClockManager::StopClock'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    local_10[1] = local_58;
    *(FName *)(local_10 + 2) = FStack_50;
    local_10[3] = CONCAT71(uStack_47,local_48);
    if (local_10 + 1 != (undefined8 *)0x0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FQuartzClockManager::StopClock'::__l5::<lambda_1>,void>
                    ::Call;
    }
    FMixerDevice::AudioRenderThreadCommand(this_00,(TFunction<void___cdecl(void)> *)local_38);
    return;
  }
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FindClock(this,&local_68,param_1);
  if (local_68.Object != (FQuartzClock *)0x0) {
    if ((local_68.Object == (FQuartzClock *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)((local_68.Object)->_padding_ + 0x20))(&(local_68.Object)->_padding_,param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SubscribeToAllTimeDivisions @ 146578400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuartzClockManager::SubscribeToAllTimeDivisions
          (FQuartzClockManager *this,FName param_1,
          TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  FMixerDevice *this_00;
  TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  FName local_res10;
  TSharedPtr<Audio::FQuartzClock,1> local_98;
  code *local_88 [5];
  undefined8 *local_60;
  FQuartzOffset local_58;
  TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
  *local_30;
  TReferenceControllerBase<1> *local_28;
  undefined2 local_20;
  undefined4 local_1c;
  
  local_res10 = param_1;
  if ((this->MixerDevice != (FMixerDevice *)0x0) &&
     (bVar4 = FMixerDevice::IsAudioRenderingThread(this->MixerDevice), !bVar4)) {
    pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
    this_00 = this->MixerDevice;
    pTVar2 = param_2->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_88[0] = (code *)0x0;
    local_60 = FMemory::Malloc(0x28,8);
    local_60[1] = this;
    *local_60 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FQuartzClockManager::SubscribeToAllTimeDivisions'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    *(FName *)(local_60 + 2) = param_1;
    local_60[3] = pTVar2;
    local_60[4] = pTVar1;
    if (local_60 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FQuartzClockManager::SubscribeToAllTimeDivisions'::__l5::<lambda_1>,void>
                    ::Call;
    }
    FMixerDevice::AudioRenderThreadCommand(this_00,(TFunction<void___cdecl(void)> *)local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return;
  }
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FindClock(this,&local_98,&local_res10);
  if (local_98.Object != (FQuartzClock *)0x0) {
    if ((local_98.Object == (FQuartzClock *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = *(code **)((local_98.Object)->_padding_ + 0x30);
    FQuartzOffset::FQuartzOffset(&local_58,0.0);
    local_30 = param_2->Object;
    local_28 = (param_2->SharedReferenceCount).ReferenceController;
    if (local_28 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_28->SharedReferenceCount = (atomic<int>)((int)local_28->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_20 = 0;
    local_1c = 0;
    (*pcVar3)(&(local_98.Object)->_padding_,&local_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SubscribeToTimeDivision @ 146578ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuartzClockManager::SubscribeToTimeDivision
          (FQuartzClockManager *this,FName param_1,
          TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
          *param_2,EQuartzCommandQuantization param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  FMixerDevice *this_00;
  TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  FName local_res10;
  TSharedPtr<Audio::FQuartzClock,1> local_a8;
  code *local_98 [5];
  undefined8 *local_70;
  FQuartzOffset local_68;
  TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
  *local_40;
  TReferenceControllerBase<1> *local_38;
  undefined2 local_30;
  undefined4 local_2c;
  
  local_res10 = param_1;
  if (this->MixerDevice != (FMixerDevice *)0x0) {
    bVar4 = FMixerDevice::IsAudioRenderingThread(this->MixerDevice);
    if (!bVar4) {
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      this_00 = this->MixerDevice;
      pTVar2 = param_2->Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_98[0] = (code *)0x0;
      local_70 = FMemory::Malloc(0x30,8);
      local_70[1] = this;
      *local_70 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Audio::FQuartzClockManager::SubscribeToTimeDivision'::`5'::<lambda_1>,0,1>
                   ::_vftable_;
      *(FName *)(local_70 + 2) = param_1;
      local_70[3] = pTVar2;
      local_70[4] = pTVar1;
      *(EQuartzCommandQuantization *)(local_70 + 5) = param_3;
      if (local_70 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_98[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`Audio::FQuartzClockManager::SubscribeToTimeDivision'::__l5::<lambda_1>,void>
                      ::Call;
      }
      FMixerDevice::AudioRenderThreadCommand(this_00,(TFunction<void___cdecl(void)> *)local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
      return;
    }
  }
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FindClock(this,&local_a8,&local_res10);
    if (local_a8.Object != (FQuartzClock *)0x0) {
      if (local_a8.Object == (FQuartzClock *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pcVar3 = *(code **)((local_a8.Object)->_padding_ + 0x28);
      FQuartzOffset::FQuartzOffset(&local_68,0.0);
      local_40 = param_2->Object;
      local_38 = (param_2->SharedReferenceCount).ReferenceController;
      if (local_38 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_38->SharedReferenceCount = (atomic<int>)((int)local_38->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_30 = 0;
      local_2c = 0;
      (*pcVar3)(&(local_a8.Object)->_padding_,&local_68,param_3);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// TickClocks @ 146579a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FQuartzClockManager::TickClocks(FQuartzClockManager *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  int *piVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId480,"QuartzClockManager::TickClocks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\AudioMixerClockManager.cpp"
               ,0x1e0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId480);
  }
  iVar8 = 0;
  if (((this->MixerDevice != (FMixerDevice *)0x0) &&
      (bVar3 = FMixerDevice::IsAudioRenderingThread(this->MixerDevice), !bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MixerDevice->IsAudioRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\AudioMixerClockManager.cpp"
                         ,0x1e6,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->ActiveClocks).ArrayNum;
  pFVar6 = (this->ActiveClocks).AllocatorInstance.Data;
  pFVar9 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ActiveClocks).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<Audio::FQuartzClock,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar9) {
      piVar7 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c);
      if ((*piVar7 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        __TraceCounter497.CounterId._0_2_ =
             FCountersTrace::OutputInitCounter
                       (L"QuartzClockManager::NumActiveClocks",TraceCounterType_Int,
                        TraceCounterDisplayHint_None);
        LOCK();
        __TraceCounter497.CounterId._2_2_ = 0;
        UNLOCK();
        atexit(`Audio::FQuartzClockManager::TickClocks'::__l2::
               _dynamic_atexit_destructor_for____TraceCounter497__);
        _Init_thread_footer(&::_TSS1);
      }
      lVar5 = (longlong)(this->ActiveClocks).ArrayNum;
      if ((__TraceCounter497.Value != lVar5) &&
         (__TraceCounter497.Value = lVar5, -1 < CountersChannel->Enabled)) {
        if (__TraceCounter497.CounterId == (atomic<unsigned_int>)0x0) {
          uVar4 = FCountersTrace::OutputInitCounter
                            (__TraceCounter497.CounterName,TraceCounterType_Int,
                             __TraceCounter497.CounterFlags & 0xf);
          LOCK();
          if (__TraceCounter497.CounterId == (atomic<unsigned_int>)0x0) {
            __TraceCounter497.CounterId._2_2_ = 0;
            __TraceCounter497.CounterId._0_2_ = uVar4;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue(__TraceCounter497.CounterId._0_2_,__TraceCounter497.Value);
      }
      if ((*piVar7 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        __TraceCounter498.CounterId._0_2_ =
             FCountersTrace::OutputInitCounter
                       (L"QuartzClockManager::NumTotalPendingCommands",TraceCounterType_Int,
                        TraceCounterDisplayHint_None);
        LOCK();
        __TraceCounter498.CounterId._2_2_ = 0;
        UNLOCK();
        atexit(`Audio::FQuartzClockManager::TickClocks'::__l2::
               _dynamic_atexit_destructor_for____TraceCounter498__);
        _Init_thread_footer(&::_TSS2);
      }
      lVar5 = (longlong)iVar8;
      if ((__TraceCounter498.Value != lVar5) &&
         (__TraceCounter498.Value = lVar5, -1 < CountersChannel->Enabled)) {
        if (__TraceCounter498.CounterId == (atomic<unsigned_int>)0x0) {
          uVar4 = FCountersTrace::OutputInitCounter
                            (__TraceCounter498.CounterName,TraceCounterType_Int,
                             __TraceCounter498.CounterFlags & 0xf);
          LOCK();
          if (__TraceCounter498.CounterId == (atomic<unsigned_int>)0x0) {
            __TraceCounter498.CounterId._2_2_ = 0;
            __TraceCounter498.CounterId._0_2_ = uVar4;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue(__TraceCounter498.CounterId._0_2_,__TraceCounter498.Value);
      }
      LOCK();
      (this->LastClockTickedIndex).Counter = 0;
      UNLOCK();
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    if ((*(longlong *)pFVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar5 = *(longlong *)pFVar6;
    iVar8 = iVar8 + *(int *)(lVar5 + 0x550) + *(int *)(lVar5 + 0x540);
    if ((lVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) break;
    FQuartzClock::Tick(*(FQuartzClock **)pFVar6,param_1);
    LOCK();
    (this->LastClockTickedIndex).Counter = (this->LastClockTickedIndex).Counter + 1;
    UNLOCK();
    pFVar6 = pFVar6 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// UnsubscribeFromAllTimeDivisions @ 14657ae90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuartzClockManager::UnsubscribeFromAllTimeDivisions
          (FQuartzClockManager *this,FName param_1,
          TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  FMixerDevice *this_00;
  TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  FName local_res10;
  TSharedPtr<Audio::FQuartzClock,1> local_98;
  code *local_88 [5];
  undefined8 *local_60;
  FQuartzOffset local_58;
  TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
  *local_30;
  TReferenceControllerBase<1> *local_28;
  undefined2 local_20;
  undefined4 local_1c;
  
  local_res10 = param_1;
  if ((this->MixerDevice != (FMixerDevice *)0x0) &&
     (bVar4 = FMixerDevice::IsAudioRenderingThread(this->MixerDevice), !bVar4)) {
    pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
    this_00 = this->MixerDevice;
    pTVar2 = param_2->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_88[0] = (code *)0x0;
    local_60 = FMemory::Malloc(0x28,8);
    local_60[1] = this;
    *local_60 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Audio::FQuartzClockManager::UnsubscribeFromAllTimeDivisions'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    *(FName *)(local_60 + 2) = param_1;
    local_60[3] = pTVar2;
    local_60[4] = pTVar1;
    if (local_60 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Audio::FQuartzClockManager::UnsubscribeFromAllTimeDivisions'::__l5::<lambda_1>,void>
                    ::Call;
    }
    FMixerDevice::AudioRenderThreadCommand(this_00,(TFunction<void___cdecl(void)> *)local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return;
  }
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FindClock(this,&local_98,&local_res10);
  if (local_98.Object != (FQuartzClock *)0x0) {
    if ((local_98.Object == (FQuartzClock *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = *(code **)((local_98.Object)->_padding_ + 0x40);
    FQuartzOffset::FQuartzOffset(&local_58,0.0);
    local_30 = param_2->Object;
    local_28 = (param_2->SharedReferenceCount).ReferenceController;
    if (local_28 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_28->SharedReferenceCount = (atomic<int>)((int)local_28->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_20 = 0;
    local_1c = 0;
    (*pcVar3)(&(local_98.Object)->_padding_,&local_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// UnsubscribeFromTimeDivision @ 14657b6b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuartzClockManager::UnsubscribeFromTimeDivision
          (FQuartzClockManager *this,FName param_1,
          TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>,1>
          *param_2,EQuartzCommandQuantization param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  FMixerDevice *this_00;
  TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  FName local_res10;
  TSharedPtr<Audio::FQuartzClock,1> local_a8;
  code *local_98 [5];
  undefined8 *local_70;
  FQuartzOffset local_68;
  TQuartzCommandQueue<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>
  *local_40;
  TReferenceControllerBase<1> *local_38;
  undefined2 local_30;
  undefined4 local_2c;
  
  local_res10 = param_1;
  if (this->MixerDevice != (FMixerDevice *)0x0) {
    bVar4 = FMixerDevice::IsAudioRenderingThread(this->MixerDevice);
    if (!bVar4) {
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      this_00 = this->MixerDevice;
      pTVar2 = param_2->Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_98[0] = (code *)0x0;
      local_70 = FMemory::Malloc(0x30,8);
      local_70[1] = this;
      *local_70 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Audio::FQuartzClockManager::UnsubscribeFromTimeDivision'::`5'::<lambda_1>,0,1>
                   ::_vftable_;
      *(FName *)(local_70 + 2) = param_1;
      local_70[3] = pTVar2;
      local_70[4] = pTVar1;
      *(EQuartzCommandQuantization *)(local_70 + 5) = param_3;
      if (local_70 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_98[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`Audio::FQuartzClockManager::UnsubscribeFromTimeDivision'::__l5::<lambda_1>,void>
                      ::Call;
      }
      FMixerDevice::AudioRenderThreadCommand(this_00,(TFunction<void___cdecl(void)> *)local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
      return;
    }
  }
  lpCriticalSection = &this->ActiveClockCritSec;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FindClock(this,&local_a8,&local_res10);
    if (local_a8.Object != (FQuartzClock *)0x0) {
      if (local_a8.Object == (FQuartzClock *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pcVar3 = *(code **)((local_a8.Object)->_padding_ + 0x38);
      FQuartzOffset::FQuartzOffset(&local_68,0.0);
      local_40 = param_2->Object;
      local_38 = (param_2->SharedReferenceCount).ReferenceController;
      if (local_38 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_38->SharedReferenceCount = (atomic<int>)((int)local_38->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_30 = 0;
      local_2c = 0;
      (*pcVar3)(&(local_a8.Object)->_padding_,&local_68,param_3);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Update @ 14657bb70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FQuartzClockManager::Update(FQuartzClockManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId23,"QuartzClockManager::Update",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\AudioMixerClockManager.cpp"
               ,0x17);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId23);
  }
  if (((this->MixerDevice != (FMixerDevice *)0x0) &&
      (bVar2 = FMixerDevice::IsAudioRenderingThread(this->MixerDevice), !bVar2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MixerDevice->IsAudioRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\AudioMixerClockManager.cpp"
                         ,0x1a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->LastUpdateSizeInFrames = param_1;
  TickClocks(this,param_1);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateClock @ 14657bdb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuartzClockManager::UpdateClock(FQuartzClockManager *this,FName param_1,int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FName local_res10;
  TSharedPtr<Audio::FQuartzClock,1> local_18;
  
  lpCriticalSection = &this->ActiveClockCritSec;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FindClock(this,&local_18,&local_res10);
  if (local_18.Object != (FQuartzClock *)0x0) {
    if (local_18.Object == (FQuartzClock *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FQuartzClock::Tick(local_18.Object,param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x00014657be57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

