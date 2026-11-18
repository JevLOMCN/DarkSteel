// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Media
// Functions: 12

// FMediaClock @ 146bedfc0

FMediaClock * __thiscall FMediaClock::FMediaClock(FMediaClock *this)

{
  this->_padding_ = (longlong)&___7FMediaClock__6B_;
  (this->DeltaTime).Ticks = 0;
  (this->Sinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sinks).ArrayNum = 0;
  (this->Sinks).ArrayMax = 0;
  (this->SinksToAdd).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SinksToAdd).ArrayNum = 0;
  (this->SinksToAdd).ArrayMax = 0;
  (this->SinksToRemove).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SinksToRemove).ArrayNum = 0;
  (this->SinksToRemove).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SinkCriticalSection,4000);
  (this->Timecode).Ticks = -0x8000000000000000;
  return this;
}

// ~FMediaClock @ 146bee080

void __thiscall FMediaClock::~FMediaClock(FMediaClock *this)

{
  FScriptContainerElement *pFVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SinkCriticalSection);
  DestructItems<TWeakPtr<IMediaClockSink,1>,int>
            ((TWeakPtr<IMediaClockSink,1> *)(this->SinksToRemove).AllocatorInstance.Data,
             (this->SinksToRemove).ArrayNum);
  pFVar1 = (this->SinksToRemove).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TWeakPtr<IMediaClockSink,1>,int>
            ((TWeakPtr<IMediaClockSink,1> *)(this->SinksToAdd).AllocatorInstance.Data,
             (this->SinksToAdd).ArrayNum);
  pFVar1 = (this->SinksToAdd).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TWeakPtr<IMediaClockSink,1>,int>
            ((TWeakPtr<IMediaClockSink,1> *)(this->Sinks).AllocatorInstance.Data,
             (this->Sinks).ArrayNum);
  pFVar1 = (this->Sinks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMediaClock__6B_;
  return;
}

// AddSink @ 146bee300

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FMediaClock::AddSink(FMediaClock *this,TSharedRef<IMediaClockSink,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> *paVar1;
  atomic<int> aVar2;
  bool bVar3;
  TWeakPtr<IMediaClockSink,1> local_18;
  
  lpCriticalSection = &this->SinkCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18.Object = param_1->Object;
    local_18.WeakReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TWeakPtr<IMediaClockSink,1>_>(&this->SinksToAdd,&local_18);
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.WeakReferenceCount.ReferenceController,1);
      }
    }
    bVar3 = TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_>::
            Contains<TSharedRef<IMediaClockSink,1>_>(&this->SinksToRemove,param_1);
    if (bVar3) {
      local_18.Object = param_1->Object;
      local_18.WeakReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_>::RemoveSwap
                (&this->SinksToRemove,&local_18,Default);
      if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_18.WeakReferenceCount.ReferenceController,1);
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000146bee3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetTimecode @ 146bee6e0

FTimespan __thiscall FMediaClock::GetTimecode(FMediaClock *this)

{
  long64 *in_RDX;
  
  *in_RDX = (this->Timecode).Ticks;
  return (FTimespan)(long64)in_RDX;
}

// IsTimecodeLocked @ 146bee880

bool __thiscall FMediaClock::IsTimecodeLocked(FMediaClock *this)

{
  return this->TimecodeLocked;
}

// RemoveSink @ 146bee9f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FMediaClock::RemoveSink(FMediaClock *this,TSharedRef<IMediaClockSink,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> *paVar1;
  atomic<int> aVar2;
  bool bVar3;
  TWeakPtr<IMediaClockSink,1> local_18;
  
  lpCriticalSection = &this->SinkCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18.Object = param_1->Object;
    local_18.WeakReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TWeakPtr<IMediaClockSink,1>_>(&this->SinksToRemove,&local_18);
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.WeakReferenceCount.ReferenceController,1);
      }
    }
    bVar3 = TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_>::
            Contains<TSharedRef<IMediaClockSink,1>_>(&this->SinksToAdd,param_1);
    if (bVar3) {
      local_18.Object = param_1->Object;
      local_18.WeakReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_>::RemoveSwap
                (&this->SinksToAdd,&local_18,Default);
      if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_18.WeakReferenceCount.ReferenceController,1);
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000146beeadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// TickFetch @ 146beef40

void __thiscall FMediaClock::TickFetch(FMediaClock *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uVar9;
  longlong lVar10;
  
  UpdateSinkArray(this);
  uVar9 = (this->Sinks).ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->Sinks).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->Sinks).AllocatorInstance.Data;
      pTVar8 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar10 + 8);
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_146beeff4:
        uVar7 = 0;
        if ((int)uVar9 < (this->Sinks).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->Sinks,uVar9);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->Sinks).AllocatorInstance,(this->Sinks).ArrayNum,
                   &(this->Sinks).ArrayMax);
      }
      else {
        aVar4 = pTVar8->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pTVar8 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146beeff4;
          }
          LOCK();
          aVar6 = pTVar8->SharedReferenceCount;
          bVar5 = aVar4 == aVar6;
          if (bVar5) {
            pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar6 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar6;
        } while (!bVar5);
        puVar2 = *(undefined8 **)(pFVar1 + lVar10);
        if (puVar2 == (undefined8 *)0x0) goto LAB_146beeff4;
        (**(code **)*puVar2)(puVar2,(this->DeltaTime).Ticks,(this->Timecode).Ticks);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  return;
}

// TickInput @ 146bef0c0

void __thiscall FMediaClock::TickInput(FMediaClock *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uVar9;
  longlong lVar10;
  
  UpdateSinkArray(this);
  uVar9 = (this->Sinks).ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->Sinks).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->Sinks).AllocatorInstance.Data;
      pTVar8 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar10 + 8);
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_146bef174:
        uVar7 = 0;
        if ((int)uVar9 < (this->Sinks).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->Sinks,uVar9);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->Sinks).AllocatorInstance,(this->Sinks).ArrayNum,
                   &(this->Sinks).ArrayMax);
      }
      else {
        aVar4 = pTVar8->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pTVar8 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146bef174;
          }
          LOCK();
          aVar6 = pTVar8->SharedReferenceCount;
          bVar5 = aVar4 == aVar6;
          if (bVar5) {
            pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar6 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar6;
        } while (!bVar5);
        plVar2 = *(longlong **)(pFVar1 + lVar10);
        if (plVar2 == (longlong *)0x0) goto LAB_146bef174;
        (**(code **)(*plVar2 + 8))(plVar2,(this->DeltaTime).Ticks,(this->Timecode).Ticks);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  return;
}

// TickOutput @ 146bef240

void __thiscall FMediaClock::TickOutput(FMediaClock *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uVar9;
  longlong lVar10;
  
  UpdateSinkArray(this);
  uVar9 = (this->Sinks).ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->Sinks).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->Sinks).AllocatorInstance.Data;
      pTVar8 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar10 + 8);
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_146bef2f4:
        uVar7 = 0;
        if ((int)uVar9 < (this->Sinks).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->Sinks,uVar9);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->Sinks).AllocatorInstance,(this->Sinks).ArrayNum,
                   &(this->Sinks).ArrayMax);
      }
      else {
        aVar4 = pTVar8->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pTVar8 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146bef2f4;
          }
          LOCK();
          aVar6 = pTVar8->SharedReferenceCount;
          bVar5 = aVar4 == aVar6;
          if (bVar5) {
            pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar6 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar6;
        } while (!bVar5);
        plVar2 = *(longlong **)(pFVar1 + lVar10);
        if (plVar2 == (longlong *)0x0) goto LAB_146bef2f4;
        (**(code **)(*plVar2 + 0x10))(plVar2,(this->DeltaTime).Ticks,(this->Timecode).Ticks);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  return;
}

// TickRender @ 146bef3c0

void __thiscall FMediaClock::TickRender(FMediaClock *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uVar9;
  longlong lVar10;
  
  UpdateSinkArray(this);
  uVar9 = (this->Sinks).ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->Sinks).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->Sinks).AllocatorInstance.Data;
      pTVar8 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar10 + 8);
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_146bef474:
        uVar7 = 0;
        if ((int)uVar9 < (this->Sinks).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->Sinks,uVar9);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->Sinks).AllocatorInstance,(this->Sinks).ArrayNum,
                   &(this->Sinks).ArrayMax);
      }
      else {
        aVar4 = pTVar8->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pTVar8 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146bef474;
          }
          LOCK();
          aVar6 = pTVar8->SharedReferenceCount;
          bVar5 = aVar4 == aVar6;
          if (bVar5) {
            pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar6 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar6;
        } while (!bVar5);
        plVar2 = *(longlong **)(pFVar1 + lVar10);
        if (plVar2 == (longlong *)0x0) goto LAB_146bef474;
        (**(code **)(*plVar2 + 0x18))(plVar2,(this->DeltaTime).Ticks,(this->Timecode).Ticks);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  return;
}

// UpdateSinkArray @ 146bef8f0

void __thiscall FMediaClock::UpdateSinkArray(FMediaClock *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  atomic<int> aVar10;
  ulonglong uVar11;
  TReferenceControllerBase<1> *pTVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_68;
  TReferenceControllerBase<1> *local_60;
  TWeakPtr<IMediaClockSink,1> local_58;
  
  lpCriticalSection = &this->SinkCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar18 = (this->SinksToAdd).ArrayNum;
  pFVar16 = (this->SinksToAdd).AllocatorInstance.Data;
  pFVar14 = pFVar16 + (longlong)iVar18 * 0x10;
  while( true ) {
    if ((this->SinksToAdd).ArrayNum != iVar18) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TWeakPtr<IMediaClockSink,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar16 == pFVar14) break;
    local_58.Object = *(IMediaClockSink **)pFVar16;
    local_58.WeakReferenceCount.ReferenceController = *(TReferenceControllerBase<1> **)(pFVar16 + 8)
    ;
    if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TWeakPtr<IMediaClockSink,1>_const_&>(&this->Sinks,&local_58);
    if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_58.WeakReferenceCount.ReferenceController,1);
      }
    }
    pFVar16 = pFVar16 + 0x10;
  }
  DestructItems<TWeakPtr<IMediaClockSink,1>,int>
            ((TWeakPtr<IMediaClockSink,1> *)(this->SinksToAdd).AllocatorInstance.Data,
             (this->SinksToAdd).ArrayNum);
  piVar2 = &(this->SinksToAdd).ArrayMax;
  (this->SinksToAdd).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->SinksToAdd).AllocatorInstance,0,piVar2);
  }
  uVar4 = (this->SinksToRemove).ArrayNum;
  uVar11 = (ulonglong)(int)uVar4;
  pFVar16 = (this->SinksToRemove).AllocatorInstance.Data;
  pFVar14 = pFVar16 + uVar11 * 0x10;
  do {
    if ((this->SinksToRemove).ArrayNum != (int)uVar11) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TWeakPtr<IMediaClockSink,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar16 == pFVar14) {
      DestructItems<TWeakPtr<IMediaClockSink,1>,int>
                ((TWeakPtr<IMediaClockSink,1> *)(this->SinksToRemove).AllocatorInstance.Data,
                 (this->SinksToRemove).ArrayNum);
      piVar2 = &(this->SinksToRemove).ArrayMax;
      (this->SinksToRemove).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->SinksToRemove).AllocatorInstance,0,piVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x000146befd66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    local_68 = *(longlong *)pFVar16;
    local_60 = *(TReferenceControllerBase<1> **)(pFVar16 + 8);
    if (local_60 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_60->WeakReferenceCount = (atomic<int>)((int)local_60->WeakReferenceCount + 1);
      UNLOCK();
    }
    pFVar5 = (this->Sinks).AllocatorInstance.Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 < pFVar5 + (longlong)(this->Sinks).ArrayMax * 0x10))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar18 = (this->Sinks).ArrayNum;
    uVar13 = 0;
    bVar7 = false;
    if (0 < iVar18) {
      lVar20 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar13 < iVar18) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->Sinks).AllocatorInstance.Data;
        lVar19 = 0;
        pTVar17 = *(TReferenceControllerBase<1> **)(pFVar5 + lVar20 + 8);
        if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
          aVar3 = pTVar17->SharedReferenceCount;
          do {
            if (aVar3 == (atomic<int>)0x0) {
              pTVar17 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_146befb94;
            }
            LOCK();
            aVar10 = pTVar17->SharedReferenceCount;
            bVar8 = aVar3 == aVar10;
            if (bVar8) {
              pTVar17->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
              aVar10 = aVar3;
            }
            UNLOCK();
            aVar3 = aVar10;
          } while (!bVar8);
          lVar19 = *(longlong *)(pFVar5 + lVar20);
        }
LAB_146befb94:
        pTVar12 = local_60;
        lVar15 = 0;
        if (local_60 != (TReferenceControllerBase<1> *)0x0) {
          aVar3 = local_60->SharedReferenceCount;
          do {
            if (aVar3 == (atomic<int>)0x0) {
              pTVar12 = (TReferenceControllerBase<1> *)0x0;
              lVar15 = 0;
              break;
            }
            LOCK();
            aVar10 = local_60->SharedReferenceCount;
            bVar8 = aVar3 == aVar10;
            if (bVar8) {
              local_60->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
              aVar10 = aVar3;
            }
            UNLOCK();
            lVar15 = local_68;
            aVar3 = aVar10;
          } while (!bVar8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17)
        ;
        if (lVar19 == lVar15) {
          lVar20 = lVar20 + -0x10;
          bVar7 = true;
          uVar9 = 0;
          if ((int)uVar13 < (this->Sinks).ArrayNum) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (&this->Sinks,uVar13);
          uVar13 = uVar13 - 1;
        }
        iVar18 = (this->Sinks).ArrayNum;
        uVar13 = uVar13 + 1;
        lVar20 = lVar20 + 0x10;
      } while ((int)uVar13 < iVar18);
      if (bVar7) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->Sinks).AllocatorInstance,iVar18,&(this->Sinks).ArrayMax);
      }
    }
    if (local_60 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &local_60->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(local_60->_padding_ + 8))(local_60,1);
      }
    }
    pFVar16 = pFVar16 + 0x10;
    uVar11 = (ulonglong)uVar4;
  } while( true );
}

// UpdateTimecode @ 146befd80

void __thiscall FMediaClock::UpdateTimecode(FMediaClock *this,FTimespan param_1,bool param_2)

{
  long64 lVar1;
  
  lVar1 = 0;
  if ((this->Timecode).Ticks != -0x8000000000000000) {
    lVar1 = param_1.Ticks - (this->Timecode).Ticks;
  }
  (this->DeltaTime).Ticks = lVar1;
  (this->Timecode).Ticks = param_1.Ticks;
  this->TimecodeLocked = param_2;
  return;
}

