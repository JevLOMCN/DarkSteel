// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 10

// FQuartzClockProxy @ 14653d600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FQuartzClockProxy * __thiscall
Audio::FQuartzClockProxy::FQuartzClockProxy
          (FQuartzClockProxy *this,TSharedPtr<Audio::FQuartzClock,1> *param_1)

{
  FQuartzClock *pFVar1;
  code *pcVar2;
  bool bVar3;
  FQuartzClockProxy *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IQuartzClock>,1> *pTVar6
  ;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *local_28;
  FSharedReferencer<1> FStack_20;
  
  if (param_1->Object == (FQuartzClock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FQuartzClockProxy *)(*pcVar2)();
      return pFVar4;
    }
  }
  this->ClockId = param_1->Object->Name;
  if (param_1->Object == (FQuartzClock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FQuartzClockProxy *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = param_1->Object;
  pTVar6 = &pFVar1->PreTickCommands;
  if (pTVar6->Object == (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)0x0) {
    pTVar5 = ::operator_new(0x18);
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      local_28 = ___xmm_00000000000000000000000000000010;
      pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_20.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar5->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7 = pTVar5 + 1;
      pTVar5->WeakReferenceCount = (atomic<int>)0x1;
      pTVar5->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TQuartzCommandQueue_VIQuartzClock_Quartz_Audio___PrivateDefs_Quartz_Audio___00_SharedPointerInternals__6B_
      ;
      pTVar5[1]._padding_ = 0;
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FQuartzClockProxy *)(*pcVar2)();
          return pFVar4;
        }
      }
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      FStack_20.ReferenceController = pTVar5;
      local_28 = pTVar7;
    }
    if (pTVar6 != (TSharedPtr<Audio::Quartz::PrivateDefs::TQuartzCommandQueue<Audio::Quartz::IQuartzClock>,1>
                   *)&local_28) {
      pTVar6->Object = (TQuartzCommandQueue<Audio::Quartz::IQuartzClock> *)pTVar7;
      local_28 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar1->PreTickCommands).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  (this->SharedQueue).Object = pTVar6->Object;
  pTVar5 = (pFVar1->PreTickCommands).SharedReferenceCount.ReferenceController;
  (this->SharedQueue).WeakReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->ClockWeakPtr).Object = param_1->Object;
  pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ClockWeakPtr).WeakReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// DoesClockExist @ 1465529f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FQuartzClockProxy::DoesClockExist(FQuartzClockProxy *this)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = (this->SharedQueue).WeakReferenceCount.ReferenceController;
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar4 = pTVar5;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146552a21;
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
    pTVar5 = (TReferenceControllerBase<1> *)(this->SharedQueue).Object;
    pTVar4 = pTVar1;
  }
LAB_146552a21:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return pTVar5 != (TReferenceControllerBase<1> *)0x0;
}

// GetBeatProgressPercent @ 146555400

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
Audio::FQuartzClockProxy::GetBeatProgressPercent
          (FQuartzClockProxy *this,EQuartzCommandQuantization *param_1)

{
  float fVar1;
  FQuartzClock *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  float fVar7;
  LARGE_INTEGER local_res8;
  
  pTVar5 = (this->ClockWeakPtr).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146555432;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar3 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar6);
    pFVar2 = (this->ClockWeakPtr).Object;
    if (pFVar2 != (FQuartzClock *)0x0) {
      fVar7 = (pFVar2->CachedClockState).MusicalDurationPhases[*param_1];
      if ((pFVar2->CachedClockState).LastCacheTickDeltaCpuCycles64 != 0) {
        fVar1 = (pFVar2->CachedClockState).MusicalDurationPhaseDeltas[*param_1];
        QueryPerformanceCounter(&local_res8);
        fVar7 = ((float)(local_res8.QuadPart - (pFVar2->CachedClockState).LastCacheTickCpuCycles64)
                / (float)(pFVar2->CachedClockState).LastCacheTickDeltaCpuCycles64) * fVar1 + fVar7;
      }
      goto LAB_146555435;
    }
  }
LAB_146555432:
  fVar7 = 0.0;
LAB_146555435:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return fVar7;
}

// GetCurrentClockTimestamp @ 146555d90

/* WARNING: Enum "Type": Some values do not have unique names */

FQuartzTransportTimeStamp * __thiscall
Audio::FQuartzClockProxy::GetCurrentClockTimestamp
          (FQuartzClockProxy *this,FQuartzTransportTimeStamp *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  FQuartzClock *pFVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  pTVar1 = (this->ClockWeakPtr).WeakReferenceCount.ReferenceController;
  pTVar8 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar1->SharedReferenceCount;
    do {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      if (aVar6 == (atomic<int>)0x0) goto LAB_146555dd1;
      LOCK();
      aVar7 = pTVar1->SharedReferenceCount;
      bVar9 = aVar6 == aVar7;
      if (bVar9) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar9);
    pFVar2 = (this->ClockWeakPtr).Object;
    pTVar8 = pTVar1;
    if (pFVar2 != (FQuartzClock *)0x0) {
      lpCriticalSection = &pFVar2->CachedClockStateCritSec;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      iVar3 = (pFVar2->CachedClockState).TimeStamp.Beat;
      fVar4 = (pFVar2->CachedClockState).TimeStamp.BeatFraction;
      fVar5 = (pFVar2->CachedClockState).TimeStamp.Seconds;
      __return_storage_ptr__->Bars = (pFVar2->CachedClockState).TimeStamp.Bars;
      __return_storage_ptr__->Beat = iVar3;
      __return_storage_ptr__->BeatFraction = fVar4;
      __return_storage_ptr__->Seconds = fVar5;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return __return_storage_ptr__;
    }
  }
LAB_146555dd1:
  __return_storage_ptr__->Bars = 0;
  __return_storage_ptr__->Beat = 0;
  __return_storage_ptr__->BeatFraction = 0.0;
  __return_storage_ptr__->Seconds = 0.0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

// GetDurationOfQuantizationTypeInSeconds @ 146557750

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
Audio::FQuartzClockProxy::GetDurationOfQuantizationTypeInSeconds
          (FQuartzClockProxy *this,EQuartzCommandQuantization *param_1,float param_2)

{
  FQuartzClock *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  float fVar5;
  
  pTVar3 = (this->ClockWeakPtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146557780;
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
    this_00 = (this->ClockWeakPtr).Object;
    if (this_00 != (FQuartzClock *)0x0) {
      fVar5 = FQuartzClock::GetDurationOfQuantizationTypeInSeconds(this_00,param_1,param_2);
      goto LAB_146557783;
    }
  }
LAB_146557780:
  fVar5 = 0.0;
LAB_146557783:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return fVar5;
}

// GetEstimatedClockRunTimeSeconds @ 1465579d0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall Audio::FQuartzClockProxy::GetEstimatedClockRunTimeSeconds(FQuartzClockProxy *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FQuartzClock *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  float fVar6;
  
  pTVar4 = (this->ClockWeakPtr).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146557a10;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pFVar1 = (this->ClockWeakPtr).Object;
    if (pFVar1 != (FQuartzClock *)0x0) {
      lpCriticalSection = &pFVar1->CachedClockStateCritSec;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      fVar6 = (pFVar1->CachedClockState).RunTimeInSeconds;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_146557a13;
    }
  }
LAB_146557a10:
  fVar6 = 0.0;
LAB_146557a13:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return fVar6;
}

// GetTickRate @ 14655b8d0

/* WARNING: Enum "Type": Some values do not have unique names */

FQuartzClockTickRate * __thiscall
Audio::FQuartzClockProxy::GetTickRate
          (FQuartzClockProxy *this,FQuartzClockTickRate *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FQuartzClock *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  pTVar8 = (this->ClockWeakPtr).WeakReferenceCount.ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar8->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14655b905;
      }
      LOCK();
      aVar7 = pTVar8->SharedReferenceCount;
      bVar9 = aVar6 == aVar7;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar9);
    pFVar1 = (this->ClockWeakPtr).Object;
    if (pFVar1 != (FQuartzClock *)0x0) {
      lpCriticalSection = &pFVar1->CachedClockStateCritSec;
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        dVar5 = (pFVar1->CachedClockState).TickRate.MillisecondsPerTick;
        __return_storage_ptr__->FramesPerTick = (pFVar1->CachedClockState).TickRate.FramesPerTick;
        __return_storage_ptr__->MillisecondsPerTick = dVar5;
        uVar2 = *(undefined4 *)((longlong)&(pFVar1->CachedClockState).TickRate.SecondsPerTick + 4);
        uVar3 = *(undefined4 *)&(pFVar1->CachedClockState).TickRate.ThirtySecondNotesPerMinute;
        uVar4 = *(undefined4 *)
                 ((longlong)&(pFVar1->CachedClockState).TickRate.ThirtySecondNotesPerMinute + 4);
        *(undefined4 *)&__return_storage_ptr__->SecondsPerTick =
             *(undefined4 *)&(pFVar1->CachedClockState).TickRate.SecondsPerTick;
        *(undefined4 *)((longlong)&__return_storage_ptr__->SecondsPerTick + 4) = uVar2;
        *(undefined4 *)&__return_storage_ptr__->ThirtySecondNotesPerMinute = uVar3;
        *(undefined4 *)((longlong)&__return_storage_ptr__->ThirtySecondNotesPerMinute + 4) = uVar4;
        uVar2 = *(undefined4 *)((longlong)&(pFVar1->CachedClockState).TickRate.BeatsPerMinute + 4);
        uVar3 = *(undefined4 *)&(pFVar1->CachedClockState).TickRate.SampleRate;
        uVar4 = *(undefined4 *)((longlong)&(pFVar1->CachedClockState).TickRate.SampleRate + 4);
        *(undefined4 *)&__return_storage_ptr__->BeatsPerMinute =
             *(undefined4 *)&(pFVar1->CachedClockState).TickRate.BeatsPerMinute;
        *(undefined4 *)((longlong)&__return_storage_ptr__->BeatsPerMinute + 4) = uVar2;
        *(undefined4 *)&__return_storage_ptr__->SampleRate = uVar3;
        *(undefined4 *)((longlong)&__return_storage_ptr__->SampleRate + 4) = uVar4;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
        return __return_storage_ptr__;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
  }
LAB_14655b905:
  FQuartzClockTickRate::FQuartzClockTickRate(__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

// IsClockRunning @ 146560f70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FQuartzClockProxy::IsClockRunning(FQuartzClockProxy *this)

{
  FThreadSafeBool FVar1;
  FQuartzClock *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (this->ClockWeakPtr).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146560fa0;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar3 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar6);
    pFVar2 = (this->ClockWeakPtr).Object;
    if (pFVar2 != (FQuartzClock *)0x0) {
      FVar1 = pFVar2->bIsRunning;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      return FVar1 != (FThreadSafeBool)0x0;
    }
  }
LAB_146560fa0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return false;
}

// IsValid @ 146561e60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FQuartzClockProxy::IsValid(FQuartzClockProxy *this)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = (this->SharedQueue).WeakReferenceCount.ReferenceController;
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar4 = pTVar5;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146561e91;
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
    pTVar5 = (TReferenceControllerBase<1> *)(this->SharedQueue).Object;
    pTVar4 = pTVar1;
  }
LAB_146561e91:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return pTVar5 != (TReferenceControllerBase<1> *)0x0;
}

// SendCommandToClock @ 1465723a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FQuartzClockProxy::SendCommandToClock
          (FQuartzClockProxy *this,TFunction<void___cdecl(Audio::FQuartzClock_*)> *param_1)

{
  atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
  *paVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TVisitWithLambda<Audio::Quartz::IQuartzClock> *this_00;
  atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
  aVar4;
  atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
  aVar5;
  TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>
  TVar6;
  TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>
  TVar7;
  longlong *plVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  undefined1 auStack_e8 [32];
  code *local_c8;
  longlong local_b8 [3];
  longlong *local_a0;
  code *local_98 [2];
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pTVar9 = (this->SharedQueue).WeakReferenceCount.ReferenceController;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar9->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1465723f2;
      }
      LOCK();
      aVar3 = pTVar9->SharedReferenceCount;
      bVar10 = aVar2 == aVar3;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar10);
    paVar1 = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
              *)(this->SharedQueue).Object;
    if (paVar1 != (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
                   *)0x0) {
      local_68 = *(longlong *)param_1;
      aVar4 = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
               )0x0;
      local_40 = *(longlong **)&param_1->field_0x28;
      *(undefined8 *)&param_1->field_0x28 = 0;
      local_48 = *(longlong *)&param_1->field_0x20;
      local_58 = *(longlong *)&param_1->field_0x10;
      lStack_50 = *(longlong *)&param_1->field_0x18;
      if (local_68 != 0) {
        *(undefined8 *)param_1 = 0;
      }
      local_c8 = (code *)0x0;
      local_a0 = FMemory::Malloc(0x40,0x10);
      *local_a0 = (longlong)
                  &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Audio::FQuartzClockProxy::SendCommandToClock'::`5'::<lambda_1>,0,1>
                   ::_vftable_;
      plVar8 = local_a0 + 2;
      *plVar8 = local_68;
      local_a0[7] = (longlong)local_40;
      local_40 = (longlong *)0x0;
      local_a0[4] = local_58;
      local_a0[5] = lStack_50;
      local_a0[6] = local_48;
      if (*plVar8 != 0) {
        local_68 = 0;
      }
      if (plVar8 != (longlong *)0x0) {
        local_c8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`Audio::FQuartzClockProxy::SendCommandToClock'::__l5::<lambda_1>,void,Audio::Quartz::IQuartzClock_&>
                   ::Call;
      }
      this_00 = ::operator_new(0x40);
      if (this_00 != (TVisitWithLambda<Audio::Quartz::IQuartzClock> *)0x0) {
        local_98[0] = local_c8;
        local_70 = local_a0;
        local_a0 = (longlong *)0x0;
        local_88 = local_b8[0];
        uStack_80 = local_b8[1];
        local_78 = local_b8[2];
        if (local_c8 != (code *)0x0) {
          local_c8 = (code *)0x0;
        }
        aVar4 = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
                 )Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::
                  TVisitWithLambda<Audio::Quartz::IQuartzClock>::
                  TVisitWithLambda<Audio::Quartz::IQuartzClock>
                            (this_00,(TFunction<void___cdecl(Audio::Quartz::IQuartzClock_&)> *)
                                     local_98);
      }
      aVar5 = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
               )FMemory::Malloc(0x10,8);
      *(atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
        *)((longlong)aVar5 + 8) = aVar4;
      *(atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
        *)aVar5 = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
                   )0x0;
      TVar6.Head = (atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
                    )*(TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>
                       *)paVar1;
      do {
        *(atomic<UE::TConsumeAllMpmcQueue<TUniquePtr<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase,TDefaultDelete<Audio::Quartz::PrivateDefs::TVisitorPatternBase<Audio::Quartz::IQuartzClock>::IVisitorBase>_>,FMemory>::FNode_*>
          *)aVar5 = TVar6.Head;
        LOCK();
        TVar7.Head = *paVar1;
        bVar10 = TVar6.Head == TVar7.Head;
        if (bVar10) {
          *paVar1 = aVar5;
          TVar7.Head = TVar6.Head;
        }
        UNLOCK();
        TVar6.Head = TVar7.Head;
      } while (!bVar10);
      if (local_c8 != (code *)0x0) {
        plVar8 = local_b8;
        if (local_a0 != (longlong *)0x0) {
          plVar8 = local_a0;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      if (local_68 != 0) {
        plVar8 = &local_58;
        if (local_40 != (longlong *)0x0) {
          plVar8 = local_40;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      if (*(longlong *)param_1 != 0) {
        plVar8 = (longlong *)&param_1->field_0x10;
        if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
          plVar8 = *(longlong **)&param_1->field_0x28;
        }
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      return true;
    }
  }
LAB_1465723f2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (*(longlong *)param_1 != 0) {
    plVar8 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return false;
}

