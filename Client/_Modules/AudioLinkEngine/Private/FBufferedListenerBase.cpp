// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioLinkEngine
// Functions: 15

// FBufferedListenerBase @ 1464cb9e0

FBufferedListenerBase * __thiscall
FBufferedListenerBase::FBufferedListenerBase(FBufferedListenerBase *this,int param_1)

{
  this->_padding_ = (longlong)&___7FBufferedListenerBase__6B_;
  (this->CircularBuffer).Read = 0;
  (this->CircularBuffer).Write = 0;
  (this->CircularBuffer).Mask = 0;
  (this->CircularBuffer).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CircularBuffer).Buffer.ArrayNum = 0;
  (this->CircularBuffer).Buffer.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->CircularBuffer).CS,4000);
  FLockingCircularSampleBuffer::SetCapacity(&this->CircularBuffer,param_1);
  (this->FormatKnownRwLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->KnownFormat).bIsSet = false;
  *(undefined8 *)&this->OnFormatKnown = 0;
  *(undefined8 *)&(this->OnFormatKnown).field_0x8 = 0;
  *(undefined4 *)&(this->OnFormatKnown).field_0x10 = 0;
  this->bStarted = (atomic<bool>)0x0;
  this->bStopping = (atomic<bool>)0x0;
  FLockingCircularSampleBuffer::SetCapacity(&this->CircularBuffer,param_1);
  return this;
}

// ~FBufferedListenerBase @ 1464cbe80

void __thiscall FBufferedListenerBase::~FBufferedListenerBase(FBufferedListenerBase *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnFormatKnown);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->FormatKnownRwLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->FormatKnownRwLock);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->CircularBuffer).CS);
  pFVar1 = (this->CircularBuffer).Buffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// GetFormat @ 1464cd130

bool __thiscall FBufferedListenerBase::GetFormat(FBufferedListenerBase *this,FBufferFormat *param_1)

{
  int iVar1;
  bool bVar2;
  
  AcquireSRWLockShared((PSRWLOCK)&this->FormatKnownRwLock);
  bVar2 = (this->KnownFormat).bIsSet != false;
  if (bVar2) {
    iVar1 = (this->KnownFormat).TypedValue.NumChannels;
    param_1->NumSamplesPerBlock = (this->KnownFormat).TypedValue.NumSamplesPerBlock;
    param_1->NumChannels = iVar1;
    param_1->NumSamplesPerSec = (this->KnownFormat).TypedValue.NumSamplesPerSec;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->FormatKnownRwLock);
  return bVar2;
}

// IsStartedNonAtomic @ 1464cd440

bool __thiscall FBufferedListenerBase::IsStartedNonAtomic(FBufferedListenerBase *this)

{
  return (bool)this->bStarted;
}

// OnBufferReceived @ 1464cd470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBufferedListenerBase::OnBufferReceived
          (FBufferedListenerBase *this,FBufferFormat *param_1,TArrayView<float_const_,int> *param_2)

{
  TOptional<IBufferedAudioOutput::FBufferFormat> *pTVar1;
  float fVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float *pfVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FWindowsRecursiveMutex *pFVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined8 local_78;
  int local_70;
  FReadAccessScope local_68 [2];
  
  AcquireSRWLockShared((PSRWLOCK)&this->FormatKnownRwLock);
  pTVar1 = &this->KnownFormat;
  if ((this->KnownFormat).bIsSet == false) {
    ReleaseSRWLockShared((PSRWLOCK)&this->FormatKnownRwLock);
    AcquireSRWLockExclusive((PSRWLOCK)&this->FormatKnownRwLock);
    if ((TOptional<IBufferedAudioOutput::FBufferFormat> *)param_1 != pTVar1) {
      iVar13 = param_1->NumChannels;
      (pTVar1->TypedValue).NumSamplesPerBlock = param_1->NumSamplesPerBlock;
      (pTVar1->TypedValue).NumChannels = iVar13;
      (this->KnownFormat).TypedValue.NumSamplesPerSec = param_1->NumSamplesPerSec;
      (this->KnownFormat).bIsSet = true;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->FormatKnownRwLock);
    uVar3._0_4_ = param_1->NumSamplesPerBlock;
    uVar3._4_4_ = param_1->NumChannels;
    iVar13 = param_1->NumSamplesPerSec;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnFormatKnown,
               local_68);
    if ((*(int *)&(this->OnFormatKnown).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(this->OnFormatKnown).field_0x8, plVar4 != (longlong *)0x0)) {
      local_78 = uVar3;
      local_70 = iVar13;
      (**(code **)(*plVar4 + 0x68))(plVar4,&local_78);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_68);
  }
  else {
    if (((((this->KnownFormat).TypedValue.NumChannels != param_1->NumChannels) ||
         ((pTVar1->TypedValue).NumSamplesPerBlock != param_1->NumSamplesPerBlock)) ||
        ((this->KnownFormat).TypedValue.NumSamplesPerSec != param_1->NumSamplesPerSec)) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2986677492649033797>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioLink\\AudioLinkEngine\\Private\\BufferedListenerBase.cpp"
                           ,0x45,"InFormat == *KnownFormat"), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->FormatKnownRwLock);
  }
  pFVar10 = &(this->CircularBuffer).CS;
  if (pFVar10 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar10);
    pfVar5 = param_2->DataPtr;
    pFVar10 = &(this->CircularBuffer).CS;
    iVar13 = param_2->ArrayNum;
    if (pFVar10 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar10);
      iVar8 = FLockingCircularSampleBuffer::Remainder(&this->CircularBuffer);
      if (iVar8 < iVar13) {
        iVar13 = iVar8;
      }
      if (0 < iVar13) {
        lVar11 = 0;
        do {
          uVar9 = (this->CircularBuffer).Write;
          fVar2 = pfVar5[lVar11];
          uVar12 = uVar9 & (this->CircularBuffer).Mask;
          (this->CircularBuffer).Write = uVar9 + 1;
          uVar9 = 0;
          if ((int)uVar12 < (this->CircularBuffer).Buffer.ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar11 = lVar11 + 1;
          *(float *)((this->CircularBuffer).Buffer.AllocatorInstance.Data +
                    (longlong)(int)uVar12 * 4) = fVar2;
        } while (lVar11 < iVar13);
      }
      pFVar10 = &(this->CircularBuffer).CS;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar10);
      if (6 < (byte)LogAudioLink._0_1_) {
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar10);
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar10);
        FLockingCircularSampleBuffer::Remainder(&this->CircularBuffer);
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar10);
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar10);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAudioLink);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar10);
      if (((iVar13 < param_2->ArrayNum) && (5 < (byte)LogAudioLink._0_1_)) &&
         (iVar13 = LogPacifier + 1, bVar7 = LogPacifier == (LogPacifier / 100) * 100,
         LogPacifier = iVar13, bVar7)) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioLink);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PopBuffer @ 1464cda80

bool __thiscall
FBufferedListenerBase::PopBuffer
          (FBufferedListenerBase *this,float *param_1,int param_2,int *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  lpCriticalSection = &(this->CircularBuffer).CS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00 = &(this->CircularBuffer).CS;
    if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      iVar5 = (this->CircularBuffer).Write - (this->CircularBuffer).Read;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      if (iVar5 < param_2) {
        param_2 = iVar5;
      }
      if (0 < param_2) {
        lVar6 = 0;
        do {
          uVar4 = (this->CircularBuffer).Read;
          uVar7 = uVar4 & (this->CircularBuffer).Mask;
          (this->CircularBuffer).Read = uVar4 + 1;
          uVar4 = 0;
          if ((int)uVar7 < (this->CircularBuffer).Buffer.ArrayNum) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          param_1[lVar6] =
               *(float *)((this->CircularBuffer).Buffer.AllocatorInstance.Data +
                         (longlong)(int)uVar7 * 4);
          lVar6 = lVar6 + 1;
        } while (lVar6 < param_2);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      *param_3 = param_2;
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      uVar4 = (this->CircularBuffer).Write;
      uVar7 = (this->CircularBuffer).Read;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      if (((this->bStopping == (atomic<bool>)0x0) || ((int)(uVar4 - uVar7) < 1)) &&
         (this->bStarted == (atomic<bool>)0x0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return bVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PushSilence @ 1464cdc40

void __thiscall FBufferedListenerBase::PushSilence(FBufferedListenerBase *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  lpCriticalSection = &(this->CircularBuffer).CS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar3 = (this->CircularBuffer).Buffer.ArrayNum;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((int)uVar3 < param_1) {
    param_1 = uVar3;
  }
  uVar4 = (ulonglong)(uint)param_1;
  if (0 < param_1) {
    do {
      uVar3 = (this->CircularBuffer).Write;
      uVar5 = uVar3 & (this->CircularBuffer).Mask;
      (this->CircularBuffer).Write = uVar3 + 1;
      uVar3 = 0;
      if ((int)uVar5 < (this->CircularBuffer).Buffer.ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined4 *)
       ((this->CircularBuffer).Buffer.AllocatorInstance.Data + (longlong)(int)uVar5 * 4) = 0;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001464cdd23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Reserve @ 1464cde50

void __thiscall FBufferedListenerBase::Reserve(FBufferedListenerBase *this,int param_1,int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  FLockingCircularSampleBuffer::SetCapacity(&this->CircularBuffer,param_1);
  if (0 < param_2) {
    lpCriticalSection = &(this->CircularBuffer).CS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar3 = (this->CircularBuffer).Buffer.ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((int)uVar3 < param_2) {
      param_2 = uVar3;
    }
    uVar4 = (ulonglong)(uint)param_2;
    if (0 < param_2) {
      do {
        uVar3 = (this->CircularBuffer).Write;
        uVar5 = uVar3 & (this->CircularBuffer).Mask;
        (this->CircularBuffer).Write = uVar3 + 1;
        uVar3 = 0;
        if ((int)uVar5 < (this->CircularBuffer).Buffer.ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(undefined4 *)
         ((this->CircularBuffer).Buffer.AllocatorInstance.Data + (longlong)(int)uVar5 * 4) = 0;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// ResetFormat @ 1464cdf60

void __thiscall FBufferedListenerBase::ResetFormat(FBufferedListenerBase *this)

{
  AcquireSRWLockExclusive((PSRWLOCK)&this->FormatKnownRwLock);
  if ((this->KnownFormat).bIsSet != false) {
    (this->KnownFormat).bIsSet = false;
  }
                    /* WARNING: Could not recover jumptable at 0x0001464cdf8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->FormatKnownRwLock);
  return;
}

// SetBufferStreamEndDelegate @ 1464cdfa0

void __thiscall
FBufferedListenerBase::SetBufferStreamEndDelegate
          (FBufferedListenerBase *this,
          TDelegate<void___cdecl(IBufferedAudioOutput::FBufferStreamEnd),FDefaultDelegateUserPolicy>
          *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return;
}

// SetFormat @ 1464ce2a0

void __thiscall FBufferedListenerBase::SetFormat(FBufferedListenerBase *this,FBufferFormat *param_1)

{
  int iVar1;
  TOptional<IBufferedAudioOutput::FBufferFormat> *pTVar2;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->FormatKnownRwLock);
  pTVar2 = &this->KnownFormat;
  if ((TOptional<IBufferedAudioOutput::FBufferFormat> *)param_1 != pTVar2) {
    iVar1 = param_1->NumChannels;
    (pTVar2->TypedValue).NumSamplesPerBlock = param_1->NumSamplesPerBlock;
    (pTVar2->TypedValue).NumChannels = iVar1;
    (this->KnownFormat).TypedValue.NumSamplesPerSec = param_1->NumSamplesPerSec;
    (this->KnownFormat).bIsSet = true;
  }
                    /* WARNING: Could not recover jumptable at 0x0001464ce2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->FormatKnownRwLock);
  return;
}

// SetFormatKnownDelegate @ 1464ce300

void __thiscall
FBufferedListenerBase::SetFormatKnownDelegate
          (FBufferedListenerBase *this,
          TDelegate<void___cdecl(IBufferedAudioOutput::FBufferFormat),FDefaultDelegateUserPolicy>
          *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != &this->OnFormatKnown) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnFormatKnown,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return;
}

// TrySetStartedFlag @ 1464ce6a0

bool __thiscall FBufferedListenerBase::TrySetStartedFlag(FBufferedListenerBase *this)

{
  bool bVar1;
  
  LOCK();
  bVar1 = this->bStarted == (atomic<bool>)0x0;
  if (bVar1) {
    this->bStarted = (atomic<bool>)0x1;
  }
  UNLOCK();
  return bVar1;
}

// TrySetStoppingFlag @ 1464ce6c0

bool __thiscall FBufferedListenerBase::TrySetStoppingFlag(FBufferedListenerBase *this)

{
  bool bVar1;
  
  LOCK();
  bVar1 = this->bStopping == (atomic<bool>)0x0;
  if (bVar1) {
    this->bStopping = (atomic<bool>)0x1;
  }
  UNLOCK();
  return bVar1;
}

// TryUnsetStartedFlag @ 1464ce6e0

bool __thiscall FBufferedListenerBase::TryUnsetStartedFlag(FBufferedListenerBase *this)

{
  bool bVar1;
  
  LOCK();
  bVar1 = this->bStarted == (atomic<bool>)0x1;
  if (bVar1) {
    this->bStarted = (atomic<bool>)0x0;
  }
  UNLOCK();
  return bVar1;
}

