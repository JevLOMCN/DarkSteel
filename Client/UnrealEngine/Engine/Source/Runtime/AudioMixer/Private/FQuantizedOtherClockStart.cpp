// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 7

// GetCommandName @ 146555b50

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall Audio::FQuantizedOtherClockStart::GetCommandName(FQuantizedOtherClockStart *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = StartOtherClockName;
  return in_RDX;
}

// GetCommandType @ 146555d40

/* WARNING: Enum "Type": Some values do not have unique names */

EQuartzCommandType __thiscall
Audio::FQuantizedOtherClockStart::GetCommandType(FQuantizedOtherClockStart *this)

{
  return StartOtherClock;
}

// GetDeepCopyOfDerivedObject @ 146556390

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<Audio::IQuartzQuantizedCommand,1> * __thiscall
Audio::FQuantizedOtherClockStart::GetDeepCopyOfDerivedObject
          (FQuantizedOtherClockStart *this,
          TSharedPtr<Audio::IQuartzQuantizedCommand,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FQuantizedOtherClockStart *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FQuartzClock *pFVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  TSharedRef<Audio::FQuantizedOtherClockStart,1> *pTVar8;
  TSharedPtr<Audio::IQuartzQuantizedCommand,1> *pTVar9;
  TSharedRef<Audio::FQuantizedOtherClockStart,1> local_28;
  FQuartzClock *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  pTVar8 = MakeShared<Audio::FQuantizedOtherClockStart,1>(&local_28);
  pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar8->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (pFVar2 == (FQuantizedOtherClockStart *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedPtr<Audio::IQuartzQuantizedCommand,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pTVar3 = (this->OwningClockPtr).SharedReferenceCount.ReferenceController;
  pFVar4 = (this->OwningClockPtr).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = (pFVar2->OwningClockPtr).Object;
  pTStack_10 = (pFVar2->OwningClockPtr).SharedReferenceCount.ReferenceController;
  (pFVar2->OwningClockPtr).Object = pFVar4;
  (pFVar2->OwningClockPtr).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  FVar5 = this->NameOfClockToStart;
  if (pFVar2 == (FQuantizedOtherClockStart *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedPtr<Audio::IQuartzQuantizedCommand,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar2->NameOfClockToStart = FVar5;
  __return_storage_ptr__->Object = (IQuartzQuantizedCommand *)pFVar2;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// IsClockAltering @ 146560e70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FQuantizedOtherClockStart::IsClockAltering(FQuantizedOtherClockStart *this)

{
  return true;
}

// OnFinalCallbackCustom @ 146563180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuantizedOtherClockStart::OnFinalCallbackCustom(FQuantizedOtherClockStart *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName *pFVar1;
  FThreadSafeBool FVar2;
  int iVar3;
  FQuartzClockManager *this_00;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  FName local_68;
  TSharedPtr<Audio::FQuartzClock,1> local_60;
  TSharedPtr<Audio::FQuartzClock,1> local_50;
  
  if ((this->OwningClockPtr).Object == (FQuartzClock *)0x0) {
    local_res8[0] = 0;
    bVar9 = `Audio::FQuantizedOtherClockStart::OnFinalCallbackCustom'::__l3::<lambda_1>::operator()
                      (local_res8);
    if (!bVar9) {
      return;
    }
  }
  if (((this->OwningClockPtr).Object == (FQuartzClock *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = ((this->OwningClockPtr).Object)->OwningClockManagerPtr;
  if (this_00 != (FQuartzClockManager *)0x0) {
    lpCriticalSection = &this_00->ActiveClockCritSec;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = &this->NameOfClockToStart;
    FQuartzClockManager::FindClock(this_00,&local_60,pFVar1);
    if (local_60.Object == (FQuartzClock *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60.SharedReferenceCount.ReferenceController);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    else {
      if ((local_60.Object == (FQuartzClock *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar2 = (local_60.Object)->bIsRunning;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60.SharedReferenceCount.ReferenceController);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (FVar2 != (FThreadSafeBool)0x0) {
        return;
      }
    }
    FQuartzClockManager::ResumeClock(this_00,pFVar1,param_1);
    FVar4 = *pFVar1;
    EnterCriticalSection((LPCRITICAL_SECTION)&this_00->ActiveClockCritSec);
    lVar11 = (longlong)(this_00->ActiveClocks).ArrayNum;
    uVar12 = 0;
    if (0 < lVar11) {
      lVar14 = 0;
      lVar13 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar12 < (this_00->ActiveClocks).ArrayNum) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar5 = (this_00->ActiveClocks).AllocatorInstance.Data;
        pTVar6 = *(TReferenceControllerBase<1> **)(pFVar5 + lVar13 + 8);
        lVar7 = *(longlong *)(pFVar5 + lVar13);
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (lVar7 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ClockPtr.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\AudioMixerClockManager.cpp"
                             ,0x1c7,L"");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        if (*(FName *)(lVar7 + 0x518) == FVar4) {
          if ((int)uVar12 < (this_00->LastClockTickedIndex).Counter) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar6);
            LeaveCriticalSection((LPCRITICAL_SECTION)&this_00->ActiveClockCritSec);
            local_68 = this->NameOfClockToStart;
            iVar3 = this_00->LastUpdateSizeInFrames;
            EnterCriticalSection((LPCRITICAL_SECTION)&this_00->ActiveClockCritSec);
            FQuartzClockManager::FindClock(this_00,&local_50,&local_68);
            if (local_50.Object == (FQuartzClock *)0x0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_50.SharedReferenceCount.ReferenceController);
              if (&this_00->ActiveClockCritSec == (FWindowsRecursiveMutex *)0x0) {
                return;
              }
            }
            else {
              if ((local_50.Object == (FQuartzClock *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FQuartzClock::Tick(local_50.Object,iVar3);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_50.SharedReferenceCount.ReferenceController);
            }
          }
          else {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar6);
          }
          break;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 0x10;
      } while (lVar14 < lVar11);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this_00->ActiveClockCritSec);
  }
  return;
}

// OnQueuedCustom @ 146565ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuantizedOtherClockStart::OnQueuedCustom
          (FQuantizedOtherClockStart *this,FQuartzQuantizedCommandInitInfo *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FQuartzClock *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar1 = (param_1->OwningClockPointer).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->OwningClockPointer).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->OwningClockPtr).SharedReferenceCount.ReferenceController;
  (this->OwningClockPtr).Object = pFVar2;
  (this->OwningClockPtr).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((this->OwningClockPtr).Object == (FQuartzClock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwningClockPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Quartz\\AudioMixerQuantizedCommands.cpp"
                       ,0xe7,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->NameOfClockToStart = param_1->OtherClockName;
  return;
}

// operator() @ 1504ed7d0

bool __thiscall
`Audio::FQuantizedOtherClockStart::OnFinalCallbackCustom'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6476347362770944238>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6476347362770944238>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

