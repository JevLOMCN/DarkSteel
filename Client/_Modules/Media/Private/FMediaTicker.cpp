// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Media
// Functions: 9

// FMediaTicker @ 146bee020

FMediaTicker * __thiscall FMediaTicker::FMediaTicker(FMediaTicker *this)

{
  FEvent *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__IMediaTicker__;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  this->Stopping = (TAtomic<bool>)0x0;
  (this->Tickables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tickables).ArrayNum = 0;
  (this->Tickables).ArrayMax = 0;
  (this->TickablesCopy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TickablesCopy).ArrayNum = 0;
  (this->TickablesCopy).ArrayMax = 0;
  pFVar1 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  this->WakeupEvent = pFVar1;
  return this;
}

// ~FMediaTicker @ 146bee100

void __thiscall FMediaTicker::~FMediaTicker(FMediaTicker *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__IMediaTicker__;
  FGenericPlatformProcess::ReturnSynchEventToPool(this->WakeupEvent);
  this->WakeupEvent = (FEvent *)0x0;
  DestructItems<TWeakPtr<IMediaTickable,1>,int>
            ((TWeakPtr<IMediaTickable,1> *)(this->TickablesCopy).AllocatorInstance.Data,
             (this->TickablesCopy).ArrayNum);
  pFVar1 = (this->TickablesCopy).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TWeakPtr<IMediaTickable,1>,int>
            ((TWeakPtr<IMediaTickable,1> *)(this->Tickables).AllocatorInstance.Data,
             (this->Tickables).ArrayNum);
  pFVar1 = (this->Tickables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  this->_padding_ = (longlong)&___7IMediaTicker__6B_;
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// AddTickable @ 146bee400

void __thiscall FMediaTicker::AddTickable(FMediaTicker *this,TSharedRef<IMediaTickable,1> *param_1)

{
  longlong *lpCriticalSection;
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TWeakPtr<IMediaTickable,1> local_18;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
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
    TArray<TWeakPtr<IMediaTickable,1>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TWeakPtr<IMediaTickable,1>_>
              ((TArray<TWeakPtr<IMediaTickable,1>,TSizedDefaultAllocator<32>_> *)&this->Stopping,
               &local_18);
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
    (**(code **)(**(longlong **)&(this->TickablesCopy).ArrayNum + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000146bee48f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Exit @ 146bee5d0

void __thiscall FMediaTicker::Exit(FMediaTicker *this)

{
  return;
}

// Init @ 146bee700

bool __thiscall FMediaTicker::Init(FMediaTicker *this)

{
  return true;
}

// RemoveTickable @ 146beecc0

void __thiscall
FMediaTicker::RemoveTickable(FMediaTicker *this,TSharedRef<IMediaTickable,1> *param_1)

{
  longlong *lpCriticalSection;
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TWeakPtr<IMediaTickable,1> *this_00;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  TWeakPtr<IMediaTickable,1> local_38;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_38.Object = param_1->Object;
  local_38.WeakReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((*(TWeakPtr<IMediaTickable,1> **)&this->Stopping <= &local_38) &&
      (&local_38 <
       *(TWeakPtr<IMediaTickable,1> **)&this->Stopping +
       *(int *)((longlong)&(this->Tickables).AllocatorInstance.Data + 4))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar3 = *(int *)&(this->Tickables).AllocatorInstance.Data;
  if (iVar3 != 0) {
    iVar9 = 0;
    this_00 = *(TWeakPtr<IMediaTickable,1> **)&this->Stopping;
    bVar6 = TWeakPtr<IMediaTickable,1>::UEOpEquals<IMediaTickable>(this_00,&local_38);
    bVar6 = !bVar6;
    iVar8 = 0;
    do {
      iVar5 = iVar8;
      do {
        iVar5 = iVar5 + 1;
        if (iVar3 <= iVar5) break;
        bVar7 = TWeakPtr<IMediaTickable,1>::UEOpEquals<IMediaTickable>(this_00 + iVar5,&local_38);
      } while (bVar6 == !bVar7);
      iVar10 = iVar5 - iVar8;
      if (bVar6 == false) {
        DestructItems<TWeakPtr<IMediaTickable,1>,int>(this_00 + iVar8,iVar10);
      }
      else {
        if (iVar9 != iVar8) {
          memmove(this_00 + iVar9,this_00 + iVar8,(longlong)iVar10 << 4);
        }
        iVar9 = iVar9 + iVar10;
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar8 = iVar5;
    } while (iVar5 < iVar3);
    *(int *)&(this->Tickables).AllocatorInstance.Data = iVar9;
  }
  if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_38.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_38.WeakReferenceCount.ReferenceController,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146beee9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Run @ 146beeeb0

uint __thiscall FMediaTicker::Run(FMediaTicker *this)

{
  float fVar1;
  char cVar2;
  
  fVar1 = __real_3ba3d70a;
  while (this->Stopping == (TAtomic<bool>)0x0) {
    cVar2 = (**(code **)(this->WakeupEvent->_padding_ + 0x20))(this->WakeupEvent,0xffffffff,0);
    if ((cVar2 != '\0') && (this->Stopping == (TAtomic<bool>)0x0)) {
      TickTickables(this);
      if (this->Stopping == (TAtomic<bool>)0x0) {
        FWindowsPlatformProcess::Sleep(fVar1);
      }
    }
  }
  return 0;
}

// Stop @ 146beef20

void __thiscall FMediaTicker::Stop(FMediaTicker *this)

{
  LOCK();
  this->Stopping = (TAtomic<bool>)0x1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000146beef2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->WakeupEvent->_padding_ + 0x10))();
  return;
}

// TickTickables @ 146bef540

void __thiscall FMediaTicker::TickTickables(FMediaTicker *this)

{
  TArray<TWeakPtr<IMediaTickable,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<TWeakPtr<IMediaTickable,1>,TSizedDefaultAllocator<32>_> *this_00;
  TWeakPtr<IMediaTickable,1> *pTVar3;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  atomic<int> aVar7;
  bool bVar8;
  uint uVar9;
  atomic<int> aVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  uint uVar15;
  TReferenceControllerBase<1> *pTVar16;
  uint uVar17;
  longlong lVar18;
  TReferenceControllerBase<1> *pTVar19;
  longlong local_48;
  TReferenceControllerBase<1> *local_40;
  
  iVar11 = (this->TickablesCopy).ArrayNum;
  pTVar1 = &this->TickablesCopy;
  piVar2 = &(this->TickablesCopy).ArrayMax;
  pTVar3 = (TWeakPtr<IMediaTickable,1> *)(pTVar1->AllocatorInstance).Data;
  if ((this->TickablesCopy).ArrayMax < 0) {
    DestructItems<TWeakPtr<IMediaTickable,1>,int>(pTVar3,iVar11);
    (this->TickablesCopy).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<TWeakPtr<IMediaTickable,1>,int>(pTVar3,iVar11);
    (this->TickablesCopy).ArrayNum = 0;
  }
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar15 = (this->Tickables).ArrayNum - 1;
  uVar9 = 0;
  if (-1 < (int)uVar15) {
    lVar18 = (longlong)(int)uVar15 << 4;
    this_00 = &this->Tickables;
    do {
      uVar17 = uVar9;
      if ((int)uVar15 < (this->Tickables).ArrayNum) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar12 = (this_00->AllocatorInstance).Data + lVar18;
      pTVar16 = *(TReferenceControllerBase<1> **)(pFVar12 + 8);
      pTVar19 = pTVar16;
      if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
LAB_146bef677:
        uVar17 = uVar9;
        if ((int)uVar15 < (this->Tickables).ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TArray<TWeakPtr<IMediaTickable,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (this_00,uVar15);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,(this->Tickables).ArrayNum,
                   &(this->Tickables).ArrayMax);
        pTVar16 = pTVar19;
      }
      else {
        aVar7 = pTVar16->SharedReferenceCount;
        do {
          pTVar19 = pTVar14;
          if (aVar7 == (atomic<int>)0x0) goto LAB_146bef677;
          LOCK();
          aVar10 = pTVar16->SharedReferenceCount;
          bVar8 = aVar7 == aVar10;
          if (bVar8) {
            pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
            aVar10 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar10;
        } while (!bVar8);
        lVar4 = *(longlong *)pFVar12;
        pTVar19 = pTVar16;
        if (lVar4 == 0) goto LAB_146bef677;
        LOCK();
        pTVar16->WeakReferenceCount = (atomic<int>)((int)pTVar16->WeakReferenceCount + 1);
        UNLOCK();
        pFVar12 = (pTVar1->AllocatorInstance).Data;
        local_48 = lVar4;
        local_40 = pTVar16;
        if (((pFVar12 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 < pFVar12 + (longlong)*piVar2 * 0x10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar11 = (this->TickablesCopy).ArrayNum;
        if (iVar11 == *piVar2) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->TickablesCopy).ArrayNum = iVar11 + 1;
        pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
        *(longlong *)pFVar12 = local_48;
        *(TReferenceControllerBase<1> **)(pFVar12 + 8) = local_40;
        local_40 = (TReferenceControllerBase<1> *)0x0;
        local_48 = 0;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
      lVar18 = lVar18 + -0x10;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  if ((this->Tickables).ArrayNum == 0) {
    (**(code **)(this->WakeupEvent->_padding_ + 0x18))();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar16 = pTVar14;
  pTVar19 = pTVar14;
  if (0 < (this->TickablesCopy).ArrayNum) {
    do {
      uVar17 = (uint)pTVar19;
      uVar15 = uVar9;
      if ((int)uVar17 < (this->TickablesCopy).ArrayNum) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar12 = (pTVar1->AllocatorInstance).Data;
      pTVar19 = *(TReferenceControllerBase<1> **)(pFVar12 + 8 + (longlong)pTVar16);
      pTVar13 = pTVar19;
      if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
        aVar7 = pTVar19->SharedReferenceCount;
        do {
          pTVar13 = pTVar14;
          if (aVar7 == (atomic<int>)0x0) goto LAB_146bef7c5;
          LOCK();
          aVar10 = pTVar19->SharedReferenceCount;
          bVar8 = aVar7 == aVar10;
          if (bVar8) {
            pTVar19->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
            aVar10 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar10;
        } while (!bVar8);
        puVar5 = *(undefined8 **)(pFVar12 + (longlong)pTVar16);
        pTVar13 = pTVar19;
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)();
        }
      }
LAB_146bef7c5:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      pTVar16 = pTVar16 + 1;
      pTVar19 = (TReferenceControllerBase<1> *)(ulonglong)(uVar17 + 1);
    } while ((int)(uVar17 + 1) < (this->TickablesCopy).ArrayNum);
  }
  return;
}

