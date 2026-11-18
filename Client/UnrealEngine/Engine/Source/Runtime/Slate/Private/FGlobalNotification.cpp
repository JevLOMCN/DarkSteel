// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// BeginNotification @ 1429cab90

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SNotificationItem,1> * __thiscall
FGlobalNotification::BeginNotification
          (FGlobalNotification *this,TSharedPtr<SNotificationItem,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SNotificationItem *pSVar5;
  code *pcVar6;
  atomic<int> aVar7;
  FText *pFVar8;
  FSlateNotificationManager *this_00;
  TSharedPtr<SNotificationItem,1> *pTVar9;
  bool bVar10;
  TAttribute<EVisibility> local_1c8;
  TSharedPtr<SNotificationItem,1> local_1a8;
  undefined8 local_198 [2];
  FNotificationInfo local_188;
  
  __return_storage_ptr__->Object = (SNotificationItem *)0x0;
  pTVar3 = (this->NotificationPtr).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar3->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar7 = pTVar3->SharedReferenceCount;
      bVar10 = aVar2 == aVar7;
      if (bVar10) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar7;
    } while (!bVar10);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (this->NotificationPtr).Object;
  }
  if ((__return_storage_ptr__->Object != (SNotificationItem *)0x0) &&
     ((**(code **)(*(longlong *)__return_storage_ptr__->Object + 0x288))(),
     &this->NotificationPtr != (TWeakPtr<SNotificationItem,1> *)local_198)) {
    pTVar3 = (this->NotificationPtr).WeakReferenceCount.ReferenceController;
    (this->NotificationPtr).Object = (SNotificationItem *)0x0;
    (this->NotificationPtr).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
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
  }
  pFVar8 = FText::GetEmpty();
  FNotificationInfo::FNotificationInfo(&local_188,pFVar8);
  local_188.bFireAndForget = false;
  local_188.FadeOutDuration = 0.0;
  local_188.ExpireDuration = 0.0;
  this_00 = FSlateNotificationManager::Get();
  pTVar9 = FSlateNotificationManager::AddNotification(this_00,&local_1a8,&local_188);
  if (__return_storage_ptr__ != pTVar9) {
    __return_storage_ptr__->Object = pTVar9->Object;
    pTVar9->Object = (SNotificationItem *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&pTVar9->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.SharedReferenceCount.ReferenceController);
  (this->NotificationPtr).Object = __return_storage_ptr__->Object;
  pTVar3 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->NotificationPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->NotificationPtr).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->NotificationPtr).WeakReferenceCount.ReferenceController = pTVar3;
  }
  pSVar5 = __return_storage_ptr__->Object;
  if (pSVar5 != (SNotificationItem *)0x0) {
    (**(code **)(*(longlong *)pSVar5 + 0x280))(pSVar5,1);
    if ((__return_storage_ptr__->Object == (SNotificationItem *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedPtr<SNotificationItem,1> *)(*pcVar6)();
      return pTVar9;
    }
    local_1c8.Value = (EVisibility)EVisibility::HitTestInvisible.Value.Value;
    local_1c8.Getter._16_8_ = 0;
    local_1c8.bIsSet = true;
    local_1c8.Getter._0_8_ = 0;
    local_1c8.Getter._8_8_ = 0;
    SCompoundWidget::SetVisibility((SCompoundWidget *)__return_storage_ptr__->Object,&local_1c8);
  }
  FNotificationInfo::~FNotificationInfo(&local_188);
  return __return_storage_ptr__;
}

// EndNotification @ 1429e48e0

void __thiscall FGlobalNotification::EndNotification(FGlobalNotification *this)

{
  TWeakPtr<SNotificationItem,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  SNotificationItem *pSVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  atomic<int> aVar7;
  FText *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  longlong local_78 [2];
  FDestructionSentinel local_68;
  ITextData *local_50;
  uint local_48;
  undefined1 local_40;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  pTVar9 = (this->NotificationPtr).WeakReferenceCount.ReferenceController;
  pTVar1 = &this->NotificationPtr;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar9->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1429e492a;
      }
      LOCK();
      aVar7 = pTVar9->SharedReferenceCount;
      bVar10 = aVar3 == aVar7;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar7 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar7;
    } while (!bVar10);
    pSVar4 = pTVar1->Object;
    if (pSVar4 != (SNotificationItem *)0x0) {
      pcVar5 = *(code **)(*(longlong *)pSVar4 + 0x248);
      pFVar8 = FText::GetEmpty();
      local_50 = (pFVar8->TextData).Reference;
      if (local_50 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_50 + 8))(local_50,local_res8);
      }
      local_48 = pFVar8->Flags;
      local_40 = 1;
      local_28 = 0;
      local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_30.Data = (FScriptContainerElement *)0x0;
      (*pcVar5)(pSVar4,&local_50);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_38,(FWriteAccessScope *)&local_68);
      if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_30.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
        local_28 = local_28 & 0xffffffff00000000;
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      if (FStack_30.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_30.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
      if (local_50 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_50 + 0x10))();
      }
      (**(code **)(*(longlong *)pSVar4 + 0x280))(pSVar4,2);
      (**(code **)(*(longlong *)pSVar4 + 0x288))(pSVar4);
      if (pTVar1 != (TWeakPtr<SNotificationItem,1> *)local_78) {
        pTVar6 = (this->NotificationPtr).WeakReferenceCount.ReferenceController;
        pTVar1->Object = (SNotificationItem *)0x0;
        (this->NotificationPtr).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &pTVar6->WeakReferenceCount;
          aVar3 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
          }
        }
      }
    }
  }
LAB_1429e492a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// TickNotification @ 142a10000

void __thiscall FGlobalNotification::TickNotification(FGlobalNotification *this,float param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  int iVar5;
  TSharedPtr<SNotificationItem,1> *pTVar6;
  char cVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  LARGE_INTEGER local_res8;
  TSharedPtr<SNotificationItem,1> local_28;
  TSharedPtr<SNotificationItem,1> local_18;
  
  local_28.Object = (SNotificationItem *)0x0;
  local_28.SharedReferenceCount.ReferenceController =
       (this->NotificationPtr).WeakReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142a10066;
      }
      LOCK();
      aVar4 = (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar8 = aVar2 == aVar4;
      if (bVar8) {
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar8);
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      local_28.Object = (this->NotificationPtr).Object;
    }
  }
LAB_142a10066:
  if (local_28.Object != (SNotificationItem *)0x0) {
    if ((local_28.Object == (SNotificationItem *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar5 = (**(code **)(*(longlong *)local_28.Object + 0x278))();
    if (iVar5 == 1) {
      cVar7 = '\x01';
      goto LAB_142a100b6;
    }
  }
  cVar7 = '\0';
LAB_142a100b6:
  cVar3 = (**(code **)(this->_padding_ + 8))(this,cVar7);
  QueryPerformanceCounter(&local_res8);
  dVar10 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  if (cVar3 == '\0') {
    if (cVar7 != '\0') {
      EndNotification(this);
    }
    this->NextEnableTimeInSeconds = 0.0;
  }
  else {
    if (cVar7 == '\0') {
      dVar9 = this->NextEnableTimeInSeconds;
      if (dVar9 == 0.0) {
        dVar9 = dVar10 + this->EnableDelayInSeconds;
        this->NextEnableTimeInSeconds = dVar9;
      }
      if (dVar9 <= dVar10) {
        pTVar6 = BeginNotification(this,&local_18);
        if (&local_28 != pTVar6) {
          local_28.Object = pTVar6->Object;
          pTVar6->Object = (SNotificationItem *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_28.SharedReferenceCount,&pTVar6->SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
      }
    }
    if (local_28.Object != (SNotificationItem *)0x0) {
      (**(code **)(this->_padding_ + 0x10))(this,&local_28);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

