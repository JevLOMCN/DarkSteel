// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 15

// FSlateAccessibleMessageHandler @ 1425bd910

FSlateAccessibleMessageHandler * __thiscall
FSlateAccessibleMessageHandler::FSlateAccessibleMessageHandler(FSlateAccessibleMessageHandler *this)

{
  FGenericAccessibleMessageHandler::FGenericAccessibleMessageHandler
            ((FGenericAccessibleMessageHandler *)this);
  this->_padding_ = (longlong)&___7FSlateAccessibleMessageHandler__6B_;
  (this->ToProcess).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ToProcess).ArrayNum = 0;
  (this->ToProcess).ArrayMax = 0;
  (this->AccessibleTaskStorageQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccessibleTaskStorageQueue).ArrayNum = 0;
  (this->AccessibleTaskStorageQueue).ArrayMax = 0;
  (this->AccessibleTaskProcessingQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccessibleTaskProcessingQueue).ArrayNum = 0;
  (this->AccessibleTaskProcessingQueue).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->QueueCriticalSection,4000);
  this->bDirty = false;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// EnqueueAccessibleTask @ 1425dad30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateAccessibleMessageHandler::EnqueueAccessibleTask
          (FSlateAccessibleMessageHandler *this,FSlateAccessibleTask *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FSlateAccessibleTask *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateEnqueueAccessibleTask> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  undefined8 *puVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FScriptContainerElement *pFVar16;
  FColor_u_0 local_res8 [4];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_50;
  
  FVar11 = StatPtr_STAT_AccessibilitySlateEnqueueAccessibleTask;
  if (StatPtr_STAT_AccessibilitySlateEnqueueAccessibleTask ==
      (FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateEnqueueAccessibleTask>)0x0) {
    pFVar10 = ::FName::FName(&local_68,"STAT_AccessibilitySlateEnqueueAccessibleTask");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateEnqueueAccessibleTask>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_AccessibilitySlateEnqueueAccessibleTask,*pFVar10,
                        L"Slate Accessibility: Enqueue Accessible Task","STATGROUP_Accessibility",
                        "STATCAT_Advanced",L"Accessibility",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar12 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar14.Value;
        local_res18.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\Accessibility\\SlateAccessibleMessageHandler.cpp"
                   ,0x68);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar14.Value;
      local_res20.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_1425dae86;
    }
  }
  bVar6 = false;
  FVar15 = local_60;
LAB_1425dae86:
  lpCriticalSection = &this->QueueCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (FSlateAccessibleTask *)(this->AccessibleTaskStorageQueue).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->AccessibleTaskStorageQueue).ArrayMax)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar9 = (this->AccessibleTaskStorageQueue).ArrayNum;
  piVar1 = &(this->AccessibleTaskStorageQueue).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->AccessibleTaskStorageQueue).AllocatorInstance,piVar1);
  }
  pFVar16 = (this->AccessibleTaskStorageQueue).AllocatorInstance.Data;
  (this->AccessibleTaskStorageQueue).ArrayNum = iVar9 + 1;
  pFVar16 = pFVar16 + (longlong)iVar9 * 0x40;
  *(longlong *)pFVar16 = *(longlong *)&param_1->Task;
  *(longlong *)(pFVar16 + 0x28) = 0;
  if (*(longlong *)pFVar16 != 0) {
    puVar3 = *(undefined8 **)&(param_1->Task).field_0x28;
    puVar13 = (undefined8 *)&(param_1->Task).field_0x10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar13 = puVar3;
    }
    (**(code **)*puVar13)();
  }
  *(FEvent **)(pFVar16 + 0x30) = param_1->CompletionEvent;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// GetAccessibleWidgetFromId @ 1425dd970

TSharedPtr<IAccessibleWidget,1> * __thiscall
FSlateAccessibleMessageHandler::GetAccessibleWidgetFromId
          (FSlateAccessibleMessageHandler *this,
          TSharedPtr<IAccessibleWidget,1> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  IAccessibleWidget *pIVar2;
  int *piVar3;
  IAccessibleWidget *pIVar4;
  longlong lVar5;
  IAccessibleWidget *pIVar6;
  
  pIVar4 = (IAccessibleWidget *)0x0;
  pIVar6 = pIVar4;
  if (FSlateAccessibleWidgetCache::AccessibleIdMap._8_4_ !=
      FSlateAccessibleWidgetCache::AccessibleIdMap._52_4_) {
    lVar5 = 0x154ba7ec8;
    if (FSlateAccessibleWidgetCache::AccessibleIdMap._64_8_ != 0) {
      lVar5 = FSlateAccessibleWidgetCache::AccessibleIdMap._64_8_;
    }
    iVar1 = *(int *)(lVar5 + (ulonglong)
                             (FSlateAccessibleWidgetCache::AccessibleIdMap._72_4_ - 1 & param_1) * 4
                    );
    while (iVar1 != -1) {
      piVar3 = (int *)((longlong)iVar1 * 0x20 + FSlateAccessibleWidgetCache::AccessibleIdMap._0_8_);
      if (*piVar3 == param_1) {
        pIVar2 = (IAccessibleWidget *)(piVar3 + 2);
        if (piVar3 == (int *)0x0) {
          pIVar2 = pIVar4;
        }
        if (pIVar2 != (IAccessibleWidget *)0x0) {
          pIVar6 = *(IAccessibleWidget **)&pIVar2->field_0x8;
          pIVar4 = *(IAccessibleWidget **)&pIVar2->field_0x0;
          if (pIVar6 != (IAccessibleWidget *)0x0) {
            LOCK();
            *(int *)&pIVar6->field_0x8 = *(int *)&pIVar6->field_0x8 + 1;
            UNLOCK();
          }
        }
        break;
      }
      iVar1 = piVar3[6];
    }
  }
  __return_storage_ptr__->Object = pIVar4;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pIVar6;
  if (pIVar6 != (IAccessibleWidget *)0x0) {
    LOCK();
    *(int *)&pIVar6->field_0x8 = *(int *)&pIVar6->field_0x8 + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pIVar6);
  return __return_storage_ptr__;
}

// GetAccessibleWindow @ 1425ddae0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IAccessibleWidget,1> * __thiscall
FSlateAccessibleMessageHandler::GetAccessibleWindow
          (FSlateAccessibleMessageHandler *this,
          TSharedPtr<IAccessibleWidget,1> *__return_storage_ptr__,
          TSharedRef<FGenericWindow,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSharedReferencer<1> FVar2;
  FSlateApplicationBase *pFVar3;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  TSharedPtr<FSlateAccessibleWidget,1> *pTVar5;
  TSharedPtr<SWidget,1> local_48;
  TSharedPtr<SWindow,1> local_38;
  TSharedPtr<FSlateAccessibleWidget,1> local_28 [2];
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pFVar3 = FSlateApplicationBase::Get();
    pTVar4 = (TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *)
             (**(code **)(*(longlong *)pFVar3 + 0x40))(pFVar3,&local_48);
    FSlateWindowHelper::FindWindowByPlatformWindow(&local_38,pTVar4,param_1);
    DestructItems<TSharedRef<SWindow,1>,int>
              ((TSharedRef<SWindow,1> *)local_48.Object,
               (int)local_48.SharedReferenceCount.ReferenceController);
    if (local_48.Object != (SWidget *)0x0) {
      FMemory::Free(local_48.Object);
    }
    FVar2.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
    local_48.Object = (SWidget *)local_38.Object;
    local_48.SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = FSlateAccessibleWidgetCache::GetAccessibleWidgetChecked(local_28,&local_48);
    __return_storage_ptr__->Object = (IAccessibleWidget *)pTVar5->Object;
    pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28[0].SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetAccessibleWindowId @ 1425ddbe0

int __thiscall
FSlateAccessibleMessageHandler::GetAccessibleWindowId
          (FSlateAccessibleMessageHandler *this,TSharedRef<FGenericWindow,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong *local_18;
  TReferenceControllerBase<1> *local_10;
  
  (**(code **)(this->_padding_ + 8))(this,&local_18,param_1);
  if (local_18 == (longlong *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    return -1;
  }
  if ((local_18 == (longlong *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  iVar3 = (**(code **)(*local_18 + 8))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return iVar3;
}

// HandleAccessibleWidgetFocusChangeEvent @ 1425e58c0

void __thiscall
FSlateAccessibleMessageHandler::HandleAccessibleWidgetFocusChangeEvent
          (FSlateAccessibleMessageHandler *this,TSharedRef<IAccessibleWidget,1> *param_1,
          bool param_2,int param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  FVariant *pFVar10;
  FVariant *pFVar11;
  TSharedPtr<FGenericAccessibleUser,1> local_e8;
  TSharedPtr<IAccessibleWidget,1> local_d8;
  TSharedRef<IAccessibleWidget,1> local_c8;
  IAccessibleWidget *local_b8;
  TReferenceControllerBase<1> *local_b0;
  undefined1 local_a8;
  FVariant local_a0;
  FVariant local_88;
  int local_70;
  FReadAccessScope local_68;
  FVariant local_50;
  FVariant local_38;
  
  bVar8 = FGenericAccessibleUserRegistry::IsUserRegistered
                    ((FGenericAccessibleUserRegistry *)this->_padding_,param_3);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetAccessibleUserRegistry().IsUserRegistered(UserIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\Accessibility\\SlateAccessibleMessageHandler.cpp"
                         ,0xbb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (param_2) {
    FGenericAccessibleUserRegistry::GetUser
              ((FGenericAccessibleUserRegistry *)this->_padding_,&local_e8,param_3);
    cVar9 = (**(code **)(*(longlong *)param_1->Object + 0x98))();
    if ((cVar9 == '\0') &&
       (cVar9 = (**(code **)(*(longlong *)param_1->Object + 0xa0))(), cVar9 != '\0')) {
      if ((local_e8.Object == (FGenericAccessibleUser *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FGenericAccessibleUser::GetFocusedAccessibleWidget(local_e8.Object,&local_d8);
      if ((local_d8.Object != (IAccessibleWidget *)0x0) && (local_d8.Object != param_1->Object)) {
        if ((local_d8.Object == (IAccessibleWidget *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_c8.Object = local_d8.Object;
        local_c8.SharedReferenceCount.ReferenceController =
             local_d8.SharedReferenceCount.ReferenceController;
        if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_d8.Object == (IAccessibleWidget *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        HandleAccessibleWidgetFocusChangeEvent(this,&local_c8,false,param_3);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c8.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
    }
    if ((local_e8.Object == (FGenericAccessibleUser *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    ((local_e8.Object)->FocusedAccessibleWidget).Object = param_1->Object;
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar3 != ((local_e8.Object)->FocusedAccessibleWidget).WeakReferenceCount.
                  ReferenceController) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = ((local_e8.Object)->FocusedAccessibleWidget).WeakReferenceCount.ReferenceController;
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
      ((local_e8.Object)->FocusedAccessibleWidget).WeakReferenceCount.ReferenceController = pTVar3;
    }
  }
  else {
    cVar9 = (**(code **)(*(longlong *)param_1->Object + 0x98))();
    if (cVar9 != '\0') {
      return;
    }
    pFVar10 = FVariant::FVariant<bool>(&local_50,false);
    pFVar11 = FVariant::FVariant<bool>(&local_38,true);
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    local_b8 = param_1->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a8 = 0;
    local_b0 = pTVar3;
    FVariant::FVariant(&local_a0,pFVar11);
    FVariant::FVariant(&local_88,pFVar10);
    local_70 = param_3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pFVar5 = (pFVar11->Value).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    pFVar5 = (pFVar10->Value).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_68)
    ;
    if (((int)this->_padding_ != 0) &&
       (plVar6 = (longlong *)this->_padding_, plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x68))(plVar6,&local_b8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    if (local_88.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Value.AllocatorInstance.Data);
    }
    local_e8.SharedReferenceCount.ReferenceController = local_b0;
    if (local_a0.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Value.AllocatorInstance.Data);
      local_e8.SharedReferenceCount.ReferenceController = local_b0;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  return;
}

// MakeAccessibleAnnouncement @ 1425ea330

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateAccessibleMessageHandler::MakeAccessibleAnnouncement
          (FSlateAccessibleMessageHandler *this,FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  FSlateApplicationBase *pFVar5;
  longlong *plVar6;
  FString *pFVar7;
  FVariant *pFVar8;
  FVariant *pFVar9;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar10;
  FReadAccessScope local_f8;
  FString local_e0;
  FSlateAccessibleWidget *local_d0;
  TReferenceControllerBase<1> *local_c8;
  undefined1 local_c0;
  FVariant local_b8;
  FVariant local_a0;
  undefined4 local_88;
  TSharedRef<FSlateAccessibleWidget,1> local_80;
  FString local_70;
  FVariant local_60;
  FVariant local_48;
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pFVar5 = FSlateApplicationBase::Get();
    plVar6 = (longlong *)(**(code **)(*(longlong *)pFVar5 + 0x30))(pFVar5,&local_f8);
    pTVar1 = (TReferenceControllerBase<1> *)plVar6[1];
    pSVar2 = (SWidget *)*plVar6;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_f8.DestructionSentinel.Accessor);
    if (pSVar2 != (SWidget *)0x0) {
      pFVar7 = ::FString::FString(&local_70,param_1);
      pFVar8 = FVariant::FVariant<FString>(&local_60,pFVar7);
      local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e0.Data.ArrayNum = 0;
      local_e0.Data.ArrayMax = 0;
      pFVar9 = FVariant::FVariant<FString>(&local_48,&local_e0);
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_f8.DestructionSentinel._0_8_ = pSVar2;
      local_f8.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)pTVar1;
      pTVar10 = FSlateAccessibleWidgetCache::GetAccessibleWidget
                          (&local_80,(TSharedRef<SWidget,1> *)&local_f8);
      pTVar3 = (pTVar10->SharedReferenceCount).ReferenceController;
      local_d0 = pTVar10->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_c0 = 2;
      local_c8 = pTVar3;
      FVariant::FVariant(&local_b8,pFVar9);
      FVariant::FVariant(&local_a0,pFVar8);
      local_88 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      pFVar4 = (pFVar9->Value).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (pFVar8->Value).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                 &local_f8);
      if (((int)this->_padding_ != 0) &&
         (plVar6 = (longlong *)this->_padding_, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x68))(plVar6,&local_d0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_f8);
      if (local_a0.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Value.AllocatorInstance.Data);
      }
      if (local_b8.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Value.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_80.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// OnActivate @ 1425eb8f0

void __thiscall FSlateAccessibleMessageHandler::OnActivate(FSlateAccessibleMessageHandler *this)

{
  this->bDirty = true;
  return;
}

// OnDeactivate @ 1425ecee0

void __thiscall FSlateAccessibleMessageHandler::OnDeactivate(FSlateAccessibleMessageHandler *this)

{
  bool bVar1;
  
  bVar1 = 1 < (int)FSlateAccessibleWidgetCache::AccessibleWidgetMap._72_4_;
  if (!bVar1) {
    TSet<TTuple<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
                      *)&FSlateAccessibleWidgetCache::AccessibleWidgetMap);
  }
  TSparseArray<TSparseSetElement<TTuple<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&FSlateAccessibleWidgetCache::AccessibleWidgetMap,0,
                    FSlateAccessibleWidgetCache::AccessibleWidgetMap._8_4_);
  FSlateAccessibleWidgetCache::AccessibleWidgetMap._8_4_ = 0;
  if (FSlateAccessibleWidgetCache::AccessibleWidgetMap._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&FSlateAccessibleWidgetCache::AccessibleWidgetMap,0,
               (int *)&FSlateAccessibleWidgetCache::AccessibleWidgetMap.field_0xc);
  }
  FSlateAccessibleWidgetCache::AccessibleWidgetMap._48_4_ = 0xffffffff;
  FSlateAccessibleWidgetCache::AccessibleWidgetMap._52_4_ = 0;
  FSlateAccessibleWidgetCache::AccessibleWidgetMap._40_4_ = 0;
  if (0x80 < (uint)FSlateAccessibleWidgetCache::AccessibleWidgetMap._44_4_) {
    FSlateAccessibleWidgetCache::AccessibleWidgetMap._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &FSlateAccessibleWidgetCache::AccessibleWidgetMap.field_0x10,0);
  }
  if (bVar1) {
    FSlateAccessibleWidgetCache::AccessibleWidgetMap._72_4_ = 1;
    TSet<TTuple<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
              *)&FSlateAccessibleWidgetCache::AccessibleWidgetMap);
  }
  bVar1 = 1 < (int)FSlateAccessibleWidgetCache::AccessibleIdMap._72_4_;
  if (!bVar1) {
    TSet<TTuple<int,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
                      *)&FSlateAccessibleWidgetCache::AccessibleIdMap);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FSlateAccessibleWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FSlateAccessibleWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&FSlateAccessibleWidgetCache::AccessibleIdMap,0,
                    FSlateAccessibleWidgetCache::AccessibleIdMap._8_4_);
  FSlateAccessibleWidgetCache::AccessibleIdMap._8_4_ = 0;
  if (FSlateAccessibleWidgetCache::AccessibleIdMap._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&FSlateAccessibleWidgetCache::AccessibleIdMap,0,
               (int *)&FSlateAccessibleWidgetCache::AccessibleIdMap.field_0xc);
  }
  FSlateAccessibleWidgetCache::AccessibleIdMap._48_4_ = 0xffffffff;
  FSlateAccessibleWidgetCache::AccessibleIdMap._52_4_ = 0;
  FSlateAccessibleWidgetCache::AccessibleIdMap._40_4_ = 0;
  if (0x80 < (uint)FSlateAccessibleWidgetCache::AccessibleIdMap._44_4_) {
    FSlateAccessibleWidgetCache::AccessibleIdMap._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &FSlateAccessibleWidgetCache::AccessibleIdMap.field_0x10,0);
  }
  if (bVar1) {
    FSlateAccessibleWidgetCache::AccessibleIdMap._72_4_ = 1;
    TSet<TTuple<int,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
              *)&FSlateAccessibleWidgetCache::AccessibleIdMap);
  }
  return;
}

// OnWidgetEventRaised @ 1425f0b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateAccessibleMessageHandler::OnWidgetEventRaised
          (FSlateAccessibleMessageHandler *this,FSlateWidgetAccessibleEventArgs *param_1)

{
  int *piVar1;
  EAccessibleEvent EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateEventRaised> FVar11;
  FVariant *pFVar12;
  FVariant *pFVar13;
  FAccessibleEventArgs *pFVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar15;
  FNameEntryId FVar16;
  FName FVar17;
  TReferenceControllerBase<1> *pTVar18;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  TSharedRef<FSlateAccessibleWidget,1> local_118;
  FStatMessage local_108;
  FName local_f8 [2];
  TSharedRef<IAccessibleWidget,1> local_e8;
  TSharedRef<IAccessibleWidget,1> local_d8;
  FAccessibleEventArgs local_c8;
  FVariant local_78;
  FVariant local_60;
  
  if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
    return;
  }
  bVar7 = FGenericAccessibleUserRegistry::IsUserRegistered
                    ((FGenericAccessibleUserRegistry *)this->_padding_,param_1->SlateUserIndex);
  if (!bVar7) {
    return;
  }
  FVar11 = StatPtr_STAT_AccessibilitySlateEventRaised;
  if (StatPtr_STAT_AccessibilitySlateEventRaised ==
      (FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateEventRaised>)0x0) {
    pFVar10 = ::FName::FName(local_f8,"STAT_AccessibilitySlateEventRaised");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateEventRaised>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AccessibilitySlateEventRaised,
                        *pFVar10,L"Slate Accessibility: Event Raised","STATGROUP_Accessibility",
                        "STATCAT_Advanced",L"Accessibility",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar7 = false;
  bVar6 = false;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar15 = FVar17.Number;
  if ((FVar16.Value == 0) && (uVar15 == 0)) {
LAB_1425f0cc5:
    bVar5 = false;
    FVar17.ComparisonIndex.Value = 0;
    FVar17.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar16.Value;
        local_res18.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\Accessibility\\SlateAccessibleMessageHandler.cpp"
                   ,0xde);
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1425f0cc5;
    local_res20.s.LowPart = FVar16.Value;
    local_res20.s.HighPart = uVar15;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar5 = true;
  }
  bVar8 = SWidget::IsAccessible((param_1->Widget).Object);
  if (!bVar8) goto LAB_1425f0e33;
  FSlateAccessibleWidgetCache::GetAccessibleWidget(&local_118,&param_1->Widget);
  if (param_1->Event == FocusChange) {
    bVar8 = FVariant::GetValue<bool>(&param_1->OldValue);
    bVar9 = FVariant::GetValue<bool>(&param_1->NewValue);
    if ((bVar8 == bVar9) &&
       (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<9017157016157683948>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\Accessibility\\SlateAccessibleMessageHandler.cpp"
                           ,0xec,"Args.OldValue.GetValue<bool>() != Args.NewValue.GetValue<bool>()")
       , bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar8 = FVariant::GetValue<bool>(&param_1->NewValue);
    if (!bVar8) goto LAB_1425f0d93;
    pTVar18 = (TReferenceControllerBase<1> *)
              CONCAT44(local_118.SharedReferenceCount.ReferenceController._4_4_,
                       local_118.SharedReferenceCount.ReferenceController._0_4_);
    iVar3 = param_1->SlateUserIndex;
    if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
      UNLOCK();
    }
    HandleAccessibleWidgetFocusChangeEvent(this,&local_e8,true,iVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  }
  else {
LAB_1425f0d93:
    pTVar18 = (TReferenceControllerBase<1> *)
              CONCAT44(local_118.SharedReferenceCount.ReferenceController._4_4_,
                       local_118.SharedReferenceCount.ReferenceController._0_4_);
  }
  iVar3 = param_1->SlateUserIndex;
  pFVar12 = FVariant::FVariant(&local_78,&param_1->NewValue);
  pFVar13 = FVariant::FVariant(&local_60,&param_1->OldValue);
  EVar2 = param_1->Event;
  if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar14 = FAccessibleEventArgs::FAccessibleEventArgs
                      (&local_c8,&local_d8,EVar2,pFVar13,pFVar12,iVar3);
  FGenericAccessibleMessageHandler::RaiseEvent((FGenericAccessibleMessageHandler *)this,pFVar14);
  if (local_c8.NewValue.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.NewValue.Value.AllocatorInstance.Data);
  }
  if (local_c8.OldValue.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.OldValue.Value.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
LAB_1425f0e33:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_108.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_108.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_108.StatData.Pad[4] = '\0';
      local_108.StatData.Pad[5] = '\0';
      local_108.StatData.Pad[6] = '\0';
      local_108.StatData.Pad[7] = '\0';
      local_108.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_108.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_108.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_108.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_108);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// OnWidgetRemoved @ 1425f0f40

void __thiscall
FSlateAccessibleMessageHandler::OnWidgetRemoved
          (FSlateAccessibleMessageHandler *this,SWidget *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar4;
  uint uVar5;
  FSlateAccessibleWidget *pFVar6;
  atomic<int> *paVar7;
  FSlateAccessibleWidget *pFVar8;
  FSlateAccessibleWidget *pFVar9;
  FSlateAccessibleWidget *pFVar10;
  bool bVar11;
  SWidget *local_res8;
  FVariant local_a8;
  FVariant local_90;
  FSlateAccessibleWidget *local_78;
  FSlateAccessibleWidget *local_70;
  undefined1 local_68;
  FVariant local_60;
  FVariant local_48;
  undefined4 local_30;
  
  pFVar10 = (FSlateAccessibleWidget *)0x0;
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pTVar4 = TMapBase<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,0>_>
             ::Find((TMapBase<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,0>_>
                     *)&FSlateAccessibleWidgetCache::AccessibleWidgetMap,param_1);
    pFVar6 = pFVar10;
    pFVar8 = pFVar10;
    if (pTVar4 != (TSharedRef<FSlateAccessibleWidget,1> *)0x0) {
      pFVar6 = (FSlateAccessibleWidget *)(pTVar4->SharedReferenceCount).ReferenceController;
      pFVar8 = pTVar4->Object;
      if (pFVar6 == (FSlateAccessibleWidget *)0x0) {
        paVar7 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar7 = (atomic<int> *)&pFVar6->_padding_;
        LOCK();
        *paVar7 = (atomic<int>)((int)*paVar7 + 1);
        UNLOCK();
      }
      local_res8 = param_1;
      if (FSlateAccessibleWidgetCache::AccessibleWidgetMap._8_4_ !=
          FSlateAccessibleWidgetCache::AccessibleWidgetMap._52_4_) {
        uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
                -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        TSet<TTuple<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<SWidget_const_*>
                  ((TSet<TTuple<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
                    *)&FSlateAccessibleWidgetCache::AccessibleWidgetMap,uVar5 >> 0x10 ^ uVar5,
                   &local_res8);
      }
      uVar5 = pFVar8->Id;
      local_res8 = (SWidget *)CONCAT44(local_res8._4_4_,uVar5);
      if (FSlateAccessibleWidgetCache::AccessibleIdMap._8_4_ !=
          FSlateAccessibleWidgetCache::AccessibleIdMap._52_4_) {
        TSet<TTuple<int,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,TSharedRef<FSlateAccessibleWidget,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FSlateAccessibleWidget,1>,0>,FDefaultSetAllocator>
                           *)&FSlateAccessibleWidgetCache::AccessibleIdMap,uVar5,(int *)&local_res8)
        ;
      }
      if (pFVar6 != (FSlateAccessibleWidget *)0x0) {
        LOCK();
        *paVar7 = (atomic<int>)((int)*paVar7 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar6);
    }
    if (pFVar8 != (FSlateAccessibleWidget *)0x0) {
      local_a8.Type = Empty;
      local_a8.Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Value.ArrayNum = 0;
      local_a8.Value.ArrayMax = 0;
      local_90.Type = Empty;
      local_90.Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.Value.ArrayNum = 0;
      local_90.Value.ArrayMax = 0;
      if (pFVar6 != (FSlateAccessibleWidget *)0x0) {
        LOCK();
        *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
        UNLOCK();
        LOCK();
        *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
        UNLOCK();
        LOCK();
        *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
        UNLOCK();
      }
      local_68 = 4;
      local_78 = pFVar8;
      local_70 = pFVar6;
      FVariant::FVariant(&local_60,&local_90);
      FVariant::FVariant(&local_48,&local_a8);
      local_30 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar6);
      if (local_90.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Value.AllocatorInstance.Data);
      }
      if (local_a8.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Value.AllocatorInstance.Data);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                 (FReadAccessScope *)&local_a8);
      if (((int)this->_padding_ != 0) &&
         (plVar1 = (longlong *)this->_padding_, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x68))(plVar1,&local_78);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_a8);
      if (local_48.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Value.AllocatorInstance.Data);
      }
      if (local_60.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Value.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_70);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar6);
      pFVar8 = (FSlateAccessibleWidget *)
               (param_1->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
      pFVar9 = pFVar8;
      if (pFVar8 != (FSlateAccessibleWidget *)0x0) {
        iVar2 = (int)pFVar8->_padding_;
        do {
          pFVar9 = pFVar10;
          if (iVar2 == 0) goto LAB_1425f1142;
          LOCK();
          iVar3 = (int)pFVar8->_padding_;
          bVar11 = iVar2 == iVar3;
          if (bVar11) {
            *(int *)&pFVar8->_padding_ = iVar2 + 1;
            iVar3 = iVar2;
          }
          UNLOCK();
          iVar2 = iVar3;
        } while (!bVar11);
        pFVar9 = pFVar8;
        if ((param_1->ParentWidgetPtr).Object != (SWidget *)0x0) {
          `FSlateAccessibleMessageHandler::OnWidgetRemoved'::__l8::<lambda_1>::operator()
                    (&local_res8);
        }
      }
LAB_1425f1142:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar9);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar6);
  }
  return;
}

// ProcessAccessibleTasks @ 1425f4fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateAccessibleMessageHandler::ProcessAccessibleTasks(FSlateAccessibleMessageHandler *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateProcessAccessibleTasks> FVar15;
  undefined8 uVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FScriptContainerElement *pFVar17;
  longlong *plVar18;
  FName FVar19;
  FScriptContainerElement *pFVar20;
  undefined1 auStackY_128 [32];
  FColor_u_0 local_c8 [2];
  FName local_c0;
  FName local_b8;
  FName local_b0;
  LARGE_INTEGER local_a0;
  FStatMessage local_98;
  FName local_88 [2];
  code *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
    return;
  }
  FVar15 = StatPtr_STAT_AccessibilitySlateProcessAccessibleTasks;
  if (StatPtr_STAT_AccessibilitySlateProcessAccessibleTasks ==
      (FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateProcessAccessibleTasks>)0x0) {
    pFVar14 = ::FName::FName(local_88,"STAT_AccessibilitySlateProcessAccessibleTasks");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateProcessAccessibleTasks>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_AccessibilitySlateProcessAccessibleTasks,*pFVar14,
                        L"Slate Accessibility: Process Accessible Tasks","STATGROUP_Accessibility",
                        "STATCAT_Advanced",L"Accessibility",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar19 = *(FName *)FVar15;
  bVar9 = false;
  bVar11 = false;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  if ((FVar19.ComparisonIndex.Value.Value != 0) || (FVar19.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_b8.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b8,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\Accessibility\\SlateAccessibleMessageHandler.cpp"
                   ,0x76);
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c0 = FVar19;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar10 = true;
      goto LAB_1425f512b;
    }
  }
  bVar10 = false;
  local_c0 = local_b0;
  FVar19 = local_b0;
LAB_1425f512b:
  if (((this->AccessibleTaskProcessingQueue).ArrayNum != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("AccessibleTaskProcessingQueue.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\Accessibility\\SlateAccessibleMessageHandler.cpp"
                          ,0x79,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lpCriticalSection = &this->QueueCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar4 = *(undefined4 *)
           ((longlong)&(this->AccessibleTaskProcessingQueue).AllocatorInstance.Data + 4);
  iVar2 = (this->AccessibleTaskProcessingQueue).ArrayNum;
  iVar13 = (this->AccessibleTaskProcessingQueue).ArrayMax;
  uVar5 = *(undefined4 *)&(this->AccessibleTaskStorageQueue).AllocatorInstance.Data;
  uVar6 = *(undefined4 *)((longlong)&(this->AccessibleTaskStorageQueue).AllocatorInstance.Data + 4);
  iVar7 = (this->AccessibleTaskStorageQueue).ArrayNum;
  iVar8 = (this->AccessibleTaskStorageQueue).ArrayMax;
  *(undefined4 *)&(this->AccessibleTaskStorageQueue).AllocatorInstance.Data =
       *(undefined4 *)&(this->AccessibleTaskProcessingQueue).AllocatorInstance.Data;
  *(undefined4 *)((longlong)&(this->AccessibleTaskStorageQueue).AllocatorInstance.Data + 4) = uVar4;
  (this->AccessibleTaskStorageQueue).ArrayNum = iVar2;
  (this->AccessibleTaskStorageQueue).ArrayMax = iVar13;
  *(undefined4 *)&(this->AccessibleTaskProcessingQueue).AllocatorInstance.Data = uVar5;
  *(undefined4 *)((longlong)&(this->AccessibleTaskProcessingQueue).AllocatorInstance.Data + 4) =
       uVar6;
  (this->AccessibleTaskProcessingQueue).ArrayNum = iVar7;
  (this->AccessibleTaskProcessingQueue).ArrayMax = iVar8;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (0 < (this->AccessibleTaskProcessingQueue).ArrayNum) {
    do {
      if (((this->AccessibleTaskProcessingQueue).ArrayNum < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar2 = (this->AccessibleTaskProcessingQueue).ArrayNum;
      pFVar20 = (this->AccessibleTaskProcessingQueue).AllocatorInstance.Data;
      local_78 = *(code **)(pFVar20 + (longlong)iVar2 * 0x40 + -0x40);
      local_50 = *(longlong **)(pFVar20 + (longlong)iVar2 * 0x40 + -0x18);
      *(undefined8 *)(pFVar20 + (longlong)iVar2 * 0x40 + -0x18) = 0;
      local_68 = *(undefined4 *)(pFVar20 + (longlong)iVar2 * 0x40 + -0x30);
      uStack_64 = *(undefined4 *)(pFVar20 + (longlong)iVar2 * 0x40 + -0x2c);
      uStack_60 = *(undefined4 *)(pFVar20 + (longlong)iVar2 * 0x40 + -0x28);
      uStack_5c = *(undefined4 *)(pFVar20 + (longlong)iVar2 * 0x40 + -0x24);
      local_58 = *(undefined8 *)(pFVar20 + (longlong)iVar2 * 0x40 + -0x20);
      if (local_78 != (code *)0x0) {
        *(undefined8 *)(pFVar20 + (longlong)iVar2 * 0x40 + -0x40) = 0;
      }
      iVar13 = (this->AccessibleTaskProcessingQueue).ArrayNum;
      local_48 = *(longlong **)(pFVar20 + (longlong)iVar2 * 0x40 + -0x10);
      pFVar20 = (this->AccessibleTaskProcessingQueue).AllocatorInstance.Data +
                (longlong)iVar13 * 0x40;
      if (*(longlong *)(pFVar20 + -0x40) != 0) {
        pFVar17 = *(FScriptContainerElement **)(pFVar20 + -0x18);
        if (*(FScriptContainerElement **)(pFVar20 + -0x18) == (FScriptContainerElement *)0x0) {
          pFVar17 = pFVar20 + -0x30;
        }
        (**(code **)(*(longlong *)pFVar17 + 0x10))();
      }
      iVar13 = (this->AccessibleTaskProcessingQueue).ArrayNum - iVar13;
      if (iVar13 != 0) {
        memmove(pFVar20 + -0x40,pFVar20,(longlong)iVar13 << 6);
      }
      piVar1 = &(this->AccessibleTaskProcessingQueue).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,&(this->AccessibleTaskProcessingQueue).AllocatorInstance,
                 (this->AccessibleTaskProcessingQueue).ArrayNum,
                 &(this->AccessibleTaskProcessingQueue).ArrayMax);
      if ((local_78 == (code *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Task",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Widgets\\Accessibility\\SlateAccessibleMessageHandler.h"
                              ,0x74,L""), bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UE::Core::Private::Function::CheckCallable(local_78);
      pcVar3 = local_78;
      plVar18 = (longlong *)&local_68;
      if (local_50 != (longlong *)0x0) {
        plVar18 = local_50;
      }
      uVar16 = (**(code **)(*plVar18 + 8))();
      (*pcVar3)(uVar16);
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x10))();
      }
      if (local_78 != (code *)0x0) {
        plVar18 = (longlong *)&local_68;
        if (local_50 != (longlong *)0x0) {
          plVar18 = local_50;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      FVar19 = local_c0;
    } while (0 < (this->AccessibleTaskProcessingQueue).ArrayNum);
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar10) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_98.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_98.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a0);
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_98.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
      local_98.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
      local_98.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
      local_98.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_98);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// RunInThread @ 1425fa020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateAccessibleMessageHandler::RunInThread
          (FSlateAccessibleMessageHandler *this,TFunction<void___cdecl(void)> *param_1,bool param_2,
          Type param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateRunInThread> FVar9;
  FTaskGraphInterface *pFVar10;
  undefined8 uVar11;
  FEvent *pFVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  FNameEntryId FVar16;
  FName FVar17;
  undefined1 auStackY_168 [32];
  FColor_u_0 local_108 [2];
  LARGE_INTEGER local_100;
  FName local_f8;
  FName local_f0;
  FStatMessage local_e0;
  FName local_d0;
  undefined1 local_c8 [40];
  longlong *local_a0;
  FEvent *local_98;
  undefined1 local_88 [40];
  longlong *local_60;
  FEvent *local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
    return;
  }
  FVar9 = StatPtr_STAT_AccessibilitySlateRunInThread;
  if (StatPtr_STAT_AccessibilitySlateRunInThread ==
      (FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateRunInThread>)0x0) {
    pFVar8 = ::FName::FName(&local_d0,"STAT_AccessibilitySlateRunInThread");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateRunInThread>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AccessibilitySlateRunInThread,
                       *pFVar8,L"Slate Accessibility: Run In Thread","STATGROUP_Accessibility",
                       "STATCAT_Advanced",L"Accessibility",true,true,ST_int64,true,false,MCR_Invalid
                      );
  }
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  bVar3 = false;
  bVar5 = false;
  FVar17 = *(FName *)FVar9;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar13 = FVar17.Number;
  if ((FVar16.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_108[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar16.Value;
        local_f8.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\Accessibility\\SlateAccessibleMessageHandler.cpp"
                   ,0x47);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_100.s.LowPart = FVar16.Value;
      local_100.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar4 = true;
      goto LAB_1425fa18c;
    }
  }
  bVar4 = false;
  FVar17 = local_f0;
LAB_1425fa18c:
  if ((param_3 != GameThread) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InThread == ENamedThreads::GameThread",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\Accessibility\\SlateAccessibleMessageHandler.cpp"
                         ,0x49,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(longlong *)param_1 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFunction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\Accessibility\\SlateAccessibleMessageHandler.cpp"
                         ,0x4a,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar10 = FTaskGraphInterface::Get();
  iVar7 = (**(code **)((longlong)*pFVar10 + 0x10))(pFVar10,0);
  if (iVar7 == 1) {
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar2 = *(code **)param_1;
    plVar15 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_1->field_0x28;
    }
    uVar11 = (**(code **)(*plVar15 + 8))();
    (*pcVar2)(uVar11);
  }
  else if (param_2) {
    pFVar12 = FGenericPlatformProcess::GetSynchEventFromPool(false);
    if ((pFVar12 == (FEvent *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CompletionEvent",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\Accessibility\\SlateAccessibleMessageHandler.cpp"
                           ,0x59,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_c8._0_8_ = *(undefined8 *)param_1;
    local_a0 = (longlong *)0x0;
    if (local_c8._0_8_ != 0) {
      puVar14 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar14 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar14)(puVar14,local_c8 + 0x10);
    }
    local_98 = pFVar12;
    if ((local_c8._0_8_ == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Task",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Widgets\\Accessibility\\SlateAccessibleMessageHandler.h"
                           ,0x6d,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnqueueAccessibleTask(this,(FSlateAccessibleTask *)local_c8);
    if (local_c8._0_8_ != 0) {
      plVar15 = (longlong *)(local_c8 + 0x10);
      if (local_a0 != (longlong *)0x0) {
        plVar15 = local_a0;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    (**(code **)(pFVar12->_padding_ + 0x20))(pFVar12,0xffffffff);
    FGenericPlatformProcess::ReturnSynchEventToPool(pFVar12);
  }
  else {
    local_88._0_8_ = *(undefined8 *)param_1;
    local_60 = (longlong *)0x0;
    if (local_88._0_8_ != 0) {
      puVar14 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar14 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar14)(puVar14,local_88 + 0x10);
    }
    local_58 = (FEvent *)0x0;
    if ((local_88._0_8_ == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Task",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Widgets\\Accessibility\\SlateAccessibleMessageHandler.h"
                           ,0x6d,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnqueueAccessibleTask(this,(FSlateAccessibleTask *)local_88);
    if (local_88._0_8_ != 0) {
      plVar15 = (longlong *)(local_88 + 0x10);
      if (local_60 != (longlong *)0x0) {
        plVar15 = local_60;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_e0.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_e0.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_100);
      local_e0.StatData.Pad[4] = '\0';
      local_e0.StatData.Pad[5] = '\0';
      local_e0.StatData.Pad[6] = '\0';
      local_e0.StatData.Pad[7] = '\0';
      local_e0.StatData.Pad[0] = local_100.s.LowPart._0_1_;
      local_e0.StatData.Pad[1] = local_100.s.LowPart._1_1_;
      local_e0.StatData.Pad[2] = local_100.s.LowPart._2_1_;
      local_e0.StatData.Pad[3] = local_100.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_e0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Tick @ 142600e10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateAccessibleMessageHandler::Tick(FSlateAccessibleMessageHandler *this)

{
  TArray<FSlateAccessibleMessageHandler::FWidgetAndParent,TSizedDefaultAllocator<32>_> *pTVar1;
  atomic<int> *paVar2;
  undefined8 *puVar3;
  TVector2<float> *pTVar4;
  atomic<int> aVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  SWidget *pSVar8;
  FSlateAccessibleWidget *pFVar9;
  longlong *plVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  FSlateAccessibleWidget *pFVar14;
  FSharedReferencer<1> FVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  atomic<int> aVar20;
  uint uVar21;
  FName *pFVar22;
  FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateTick> FVar23;
  FSlateApplicationBase *pFVar24;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar25;
  longlong *plVar26;
  longlong lVar27;
  FName FVar28;
  int *piVar29;
  TReferenceControllerBase<1> *pTVar30;
  uint uVar31;
  undefined8 *puVar32;
  ulonglong uVar33;
  uint uVar34;
  ulonglong uVar36;
  uint *puVar37;
  FScriptContainerElement *pFVar38;
  int local_res18;
  FColor_u_0 local_res20 [2];
  ForAnyElementType local_1e8;
  int local_1e0;
  int local_1dc;
  uint local_1d8;
  TReferenceControllerBase<1> *local_1d0;
  FSlateAccessibleWidget *local_1c8;
  TReferenceControllerBase<1> *pTStack_1c0;
  FName local_1b8;
  TReferenceControllerBase<1> *local_1b0;
  FName local_1a8;
  TSharedRef<SWidget,1> local_198;
  FName local_188;
  TSharedRef<FSlateAccessibleWidget,1> local_178;
  TMap<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,0>_>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  TMap<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_*,TSharedRef<FSlateAccessibleWidget,1>,0>_>
  *local_140;
  uint uStack_138;
  uint uStack_134;
  undefined8 local_130;
  undefined4 uStack_128;
  int iStack_124;
  uint local_120;
  undefined4 uStack_11c;
  TSharedRef<SWidget,1> local_110;
  TSharedRef<FSlateAccessibleWidget,1> local_100;
  TWeakPtr<SWidget,1> local_f0;
  TSharedPtr<IAccessibleWidget,1> local_e0;
  TSharedRef<FSlateAccessibleWidget,1> local_d0;
  FName local_c0;
  TSharedRef<FSlateAccessibleWidget,1> local_b8;
  TSharedRef<FSlateAccessibleWidget,1> local_a8;
  TWeakPtr<SWidget,1> local_98;
  TWeakPtr<SWidget,1> local_88 [2];
  undefined4 local_5c;
  ulonglong uVar35;
  
  if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
    return;
  }
  FVar23 = StatPtr_STAT_AccessibilitySlateTick;
  if (StatPtr_STAT_AccessibilitySlateTick ==
      (FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateTick>)0x0) {
    pFVar22 = ::FName::FName(&local_c0,"STAT_AccessibilitySlateTick");
    FVar23 = (FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateTick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AccessibilitySlateTick,*pFVar22,
                        L"Slate Accessibility: Tick","STATGROUP_Accessibility","STATCAT_Advanced",
                        L"Accessibility",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar28 = *(FName *)FVar23;
  bVar13 = false;
  bVar12 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  bVar17 = false;
  bVar16 = false;
  if ((FVar28.ComparisonIndex.Value.Value != 0) || (FVar28.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
      bVar13 = false;
      bVar12 = true;
      bVar17 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
        local_1b8.Number = FVar28.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1b8,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\Accessibility\\SlateAccessibleMessageHandler.cpp"
                   ,0x103);
        bVar13 = true;
        bVar12 = true;
        bVar17 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1a8 = FVar28;
      FThreadStats::AddMessage(FVar28,CycleScopeStart);
      bVar16 = true;
      goto LAB_142600f95;
    }
  }
  bVar13 = bVar17;
  bVar12 = bVar16;
  bVar16 = false;
  local_1a8 = local_188;
  FVar28 = local_188;
LAB_142600f95:
  if ((this->bDirty != false) && ((this->ToProcess).ArrayNum == 0)) {
    this->bDirty = false;
    pFVar24 = FSlateApplicationBase::Get();
    (**(code **)(*(longlong *)pFVar24 + 0x40))(pFVar24,&local_1e8);
    if (0 < local_1e0) {
      do {
        pTVar7 = *(TReferenceControllerBase<1> **)(local_1e8.Data + (longlong)local_1e0 * 0x10 + -8)
        ;
        pSVar8 = *(SWidget **)&local_1e8.Data[(longlong)local_1e0 * 0x10 + -0x10].field_0x0;
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        iVar18 = local_1e0 + -1;
        pFVar38 = local_1e8.Data + (longlong)iVar18 * 0x10;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(pFVar38 + 8));
        iVar18 = (local_1e0 - iVar18) + -1;
        if (iVar18 != 0) {
          memmove(pFVar38,pFVar38 + 0x10,(longlong)iVar18 << 4);
        }
        local_1e0 = local_1e0 + -1;
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_110.Object = pSVar8;
        local_110.SharedReferenceCount.ReferenceController = pTVar7;
        pTVar25 = FSlateAccessibleWidgetCache::GetAccessibleWidget(&local_b8,&local_110);
        iVar18 = (this->ToProcess).ArrayNum;
        if (iVar18 == (this->ToProcess).ArrayMax) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&(this->ToProcess).AllocatorInstance,&(this->ToProcess).ArrayMax
                             );
        }
        (this->ToProcess).ArrayNum = iVar18 + 1;
        local_100.Object = pTVar25->Object;
        pFVar38 = (this->ToProcess).AllocatorInstance.Data;
        local_100.SharedReferenceCount.ReferenceController =
             (pTVar25->SharedReferenceCount).ReferenceController;
        if (local_100.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
          UNLOCK();
        }
        local_f0.Object = pSVar8;
        local_f0.WeakReferenceCount.ReferenceController = pTVar7;
        FWidgetAndParent::FWidgetAndParent
                  ((FWidgetAndParent *)(pFVar38 + (longlong)iVar18 * 0x20),&local_f0,&local_100);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        pTVar4 = &pSVar8[3].PersistentState.InitialClipState.TypedValue.ScissorRect.TypedValue.
                  BottomRight;
        if ((&local_1e8 == (ForAnyElementType *)pTVar4) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar18 = *(int *)&pSVar8[3].PersistentState.InitialClipState.TypedValue.ScissorRect.
                          TypedValue.field_0x20;
        if (iVar18 != 0) {
          iVar19 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,iVar18,&local_1e8,&local_1e0,&local_1dc);
          ConstructItems<TSharedRef<SWindow,1>,TSharedRef<SWindow,1>,int>
                    (local_1e8.Data + (longlong)iVar19 * 0x10,
                     (TSharedRef<SWindow,1> *)pTVar4->field0_0x0,iVar18);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      } while (0 < local_1e0);
    }
    DestructItems<TSharedRef<SWindow,1>,int>((TSharedRef<SWindow,1> *)local_1e8.Data,local_1e0);
    if ((TSharedRef<SWindow,1> *)local_1e8.Data != (TSharedRef<SWindow,1> *)0x0) {
      FMemory::Free(local_1e8.Data);
    }
  }
  iVar18 = (this->ToProcess).ArrayNum;
  if (0 < iVar18) {
    local_res18 = 0;
    local_1d8 = 1;
    do {
      if (GAccessibleWidgetsProcessedPerTick <= local_res18) break;
      pTVar1 = &this->ToProcess;
      if (((this->ToProcess).ArrayNum < 1) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar38 = (pTVar1->AllocatorInstance).Data;
      lVar27 = (longlong)(this->ToProcess).ArrayNum * 0x20;
      local_1d0 = *(TReferenceControllerBase<1> **)(pFVar38 + lVar27 + -0x18);
      plVar26 = *(longlong **)(pFVar38 + lVar27 + -0x20);
      *(undefined8 *)(pFVar38 + lVar27 + -0x18) = 0;
      *(undefined8 *)(pFVar38 + lVar27 + -0x20) = 0;
      pTVar7 = *(TReferenceControllerBase<1> **)(pFVar38 + lVar27 + -8);
      pFVar9 = *(FSlateAccessibleWidget **)(pFVar38 + lVar27 + -0x10);
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar18 = (this->ToProcess).ArrayNum;
      pFVar38 = (pTVar1->AllocatorInstance).Data + (longlong)iVar18 * 0x20;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(pFVar38 + -8));
      plVar10 = *(longlong **)(pFVar38 + -0x18);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar29 = (int *)((longlong)plVar10 + 0xc);
        iVar19 = *piVar29;
        *piVar29 = *piVar29 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,local_1d8);
        }
      }
      iVar18 = (this->ToProcess).ArrayNum - iVar18;
      if (iVar18 != 0) {
        memmove(pFVar38 + -0x20,pFVar38,(longlong)iVar18 << 5);
      }
      pTVar30 = local_1d0;
      piVar29 = &(this->ToProcess).ArrayNum;
      *piVar29 = *piVar29 + -1;
      if (((plVar26 == (longlong *)0x0) || (local_1d0 == (TReferenceControllerBase<1> *)0x0)) ||
         ((int)local_1d0->SharedReferenceCount < 1)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        if (pTVar30 != (TReferenceControllerBase<1> *)0x0) goto LAB_1426015b2;
      }
      else {
        local_1b0 = local_1d0;
        aVar5 = local_1d0->SharedReferenceCount;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            local_1b0 = (TReferenceControllerBase<1> *)0x0;
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L"");
            plVar26 = (longlong *)0x0;
            if (bVar17) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            break;
          }
          LOCK();
          aVar20 = local_1d0->SharedReferenceCount;
          bVar17 = aVar5 == aVar20;
          if (bVar17) {
            local_1d0->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar20 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar20;
        } while (!bVar17);
        if ((*(byte *)((longlong)plVar26 + 0x32) & 4) != 0) {
          plVar26 = (longlong *)(**(code **)(*plVar26 + 0x180))(plVar26);
          iVar19 = 0;
          iVar18 = (**(code **)*plVar26)(plVar26);
          if (0 < iVar18) {
            do {
              piVar29 = &(this->ToProcess).ArrayMax;
              (**(code **)(*plVar26 + 0x10))(plVar26,&local_198,iVar19);
              if ((local_198.Object)->AccessibleBehavior == NotAccessible) {
                iVar18 = (this->ToProcess).ArrayNum;
                if (iVar18 == *piVar29) {
                  iVar18 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,&pTVar1->AllocatorInstance,piVar29);
                }
                (this->ToProcess).ArrayNum = iVar18 + 1;
                pFVar38 = (pTVar1->AllocatorInstance).Data;
                if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar7->SharedReferenceCount =
                       (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_88[0].Object = local_198.Object;
                local_88[0].WeakReferenceCount.ReferenceController =
                     local_198.SharedReferenceCount.ReferenceController;
                if (local_198.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_198.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
                       (atomic<int>)
                       ((int)(local_198.SharedReferenceCount.ReferenceController)->
                             WeakReferenceCount + 1);
                  UNLOCK();
                }
                local_d0.Object = pFVar9;
                local_d0.SharedReferenceCount.ReferenceController = pTVar7;
                FWidgetAndParent::FWidgetAndParent
                          ((FWidgetAndParent *)(pFVar38 + (longlong)iVar18 * 0x20),local_88,
                           &local_d0);
              }
              else {
                FSlateAccessibleWidgetCache::GetAccessibleWidget(&local_178,&local_198);
                (local_178.Object)->SiblingIndex = (pFVar9->ChildrenBuffer).ArrayNum;
                if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar7->SharedReferenceCount =
                       (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_e0.Object = (IAccessibleWidget *)pFVar9;
                local_e0.SharedReferenceCount.ReferenceController = pTVar7;
                FSlateAccessibleWidget::UpdateParent(local_178.Object,&local_e0);
                FVar15.ReferenceController = local_178.SharedReferenceCount.ReferenceController;
                pFVar14 = local_178.Object;
                local_1c8 = local_178.Object;
                pTStack_1c0 = local_178.SharedReferenceCount.ReferenceController;
                if (local_178.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_178.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
                       (atomic<int>)
                       ((int)(local_178.SharedReferenceCount.ReferenceController)->
                             WeakReferenceCount + 1);
                  UNLOCK();
                }
                pFVar38 = (pFVar9->ChildrenBuffer).AllocatorInstance.Data;
                if (((pFVar38 <= (FScriptContainerElement *)&local_1c8) &&
                    ((FScriptContainerElement *)&local_1c8 <
                     pFVar38 + (longlong)(pFVar9->ChildrenBuffer).ArrayMax * 0x10)) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar17)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                iVar18 = (pFVar9->ChildrenBuffer).ArrayNum;
                piVar29 = &(pFVar9->ChildrenBuffer).ArrayMax;
                if (iVar18 == *piVar29) {
                  iVar18 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&(pFVar9->ChildrenBuffer).AllocatorInstance,piVar29);
                }
                (pFVar9->ChildrenBuffer).ArrayNum = iVar18 + 1;
                piVar29 = &(this->ToProcess).ArrayMax;
                pFVar38 = (pFVar9->ChildrenBuffer).AllocatorInstance.Data + (longlong)iVar18 * 0x10;
                *(FSlateAccessibleWidget **)pFVar38 = local_1c8;
                *(TReferenceControllerBase<1> **)(pFVar38 + 8) = pTStack_1c0;
                pTStack_1c0 = (TReferenceControllerBase<1> *)0x0;
                local_1c8 = (FSlateAccessibleWidget *)0x0;
                iVar18 = (this->ToProcess).ArrayNum;
                if (iVar18 == *piVar29) {
                  iVar18 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,&pTVar1->AllocatorInstance,piVar29);
                }
                local_a8.Object = pFVar14;
                local_a8.SharedReferenceCount.ReferenceController = FVar15.ReferenceController;
                (this->ToProcess).ArrayNum = iVar18 + 1;
                pFVar38 = (pTVar1->AllocatorInstance).Data;
                if (FVar15.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (FVar15.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)((int)(FVar15.ReferenceController)->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_98.Object = local_198.Object;
                local_98.WeakReferenceCount.ReferenceController =
                     local_198.SharedReferenceCount.ReferenceController;
                if (local_198.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_198.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
                       (atomic<int>)
                       ((int)(local_198.SharedReferenceCount.ReferenceController)->
                             WeakReferenceCount + 1);
                  UNLOCK();
                }
                FWidgetAndParent::FWidgetAndParent
                          ((FWidgetAndParent *)(pFVar38 + (longlong)iVar18 * 0x20),&local_98,
                           &local_a8);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar15.ReferenceController);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_198.SharedReferenceCount.ReferenceController);
              iVar19 = iVar19 + 1;
              iVar18 = (**(code **)*plVar26)(plVar26);
              pTVar30 = local_1d0;
            } while (iVar19 < iVar18);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1b0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
LAB_1426015b2:
        LOCK();
        paVar2 = &pTVar30->WeakReferenceCount;
        aVar5 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar5 == (atomic<int>)0x1) {
          (**(code **)(pTVar30->_padding_ + 8))(pTVar30,local_1d8);
        }
      }
      local_res18 = local_res18 + 1;
      iVar18 = (this->ToProcess).ArrayNum;
    } while (0 < iVar18);
    FVar28 = local_1a8;
    uVar35 = 0;
    uVar34 = 0;
    if (iVar18 == 0) {
      uVar31 = FSlateAccessibleWidgetCache::AccessibleWidgetMap._40_4_;
      uVar33 = uVar35;
      uStack_134 = local_1d8;
      local_120 = uVar34;
      if (uVar31 != 0) {
        uVar33 = FSlateAccessibleWidgetCache::AccessibleWidgetMap._40_8_ & 0xffffffff;
        puVar37 = (uint *)&FSlateAccessibleWidgetCache::AccessibleWidgetMap.field_0x10;
        if (FSlateAccessibleWidgetCache::AccessibleWidgetMap._32_8_ != 0) {
          puVar37 = (uint *)FSlateAccessibleWidgetCache::AccessibleWidgetMap._32_8_;
        }
        uVar6 = *puVar37;
        uVar36 = uVar35;
        while (uVar6 == 0) {
          iVar18 = (int)uVar35;
          local_120 = (int)uVar36 + 0x20;
          uVar36 = (ulonglong)local_120;
          uVar34 = iVar18 + 1;
          uVar35 = (ulonglong)uVar34;
          if ((int)((uVar31 - 1) + ((int)(uVar31 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar34)
          goto LAB_142601691;
          uVar6 = puVar37[(longlong)iVar18 + 1];
        }
        uVar35 = (ulonglong)(-uVar6 & uVar6) * 2 + 1;
        lVar27 = 0x3f;
        if (uVar35 != 0) {
          for (; uVar35 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        uVar21 = (local_120 - 1) + (int)lVar27;
        if ((int)uVar31 < (int)uVar21) {
          uVar21 = uVar31;
        }
        uVar33 = (ulonglong)uVar21;
        uStack_134 = -uVar6 & uVar6;
      }
LAB_142601691:
      local_140 = &FSlateAccessibleWidgetCache::AccessibleWidgetMap;
      local_130 = 0x154ba7e50;
      uStack_128 = 0xffffffff;
      iStack_124 = (int)uVar33;
      uStack_11c = local_5c;
      TStack_160._padding_ = CONCAT44(uStack_134,uVar34);
      TStack_160.CurrentBitIndex = iStack_124;
      TStack_160.UnvisitedBitMask = 0xffffffff;
      local_168 = &FSlateAccessibleWidgetCache::AccessibleWidgetMap;
      TStack_160._28_4_ = local_5c;
      TStack_160.BaseBitIndex = local_120;
      TStack_160.Array =
           (TBitArray<FDefaultBitArrayAllocator> *)
           &FSlateAccessibleWidgetCache::AccessibleWidgetMap.field_0x10;
      uStack_138 = uVar34;
      if (iStack_124 < (int)uVar31) {
        do {
          lVar27 = (longlong)(int)uVar33 * 0x20;
          pTVar7 = *(TReferenceControllerBase<1> **)(lVar27 + 0x10 + *(longlong *)local_168);
          lVar27 = *(longlong *)(lVar27 + 8 + *(longlong *)local_168);
          if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
            UNLOCK();
          }
          puVar3 = (undefined8 *)(lVar27 + 0x50);
          puVar32 = (undefined8 *)(lVar27 + 0x40);
          if (puVar32 != puVar3) {
            DestructItems<TWeakPtr<FSlateAccessibleWidget,1>,int>
                      ((TWeakPtr<FSlateAccessibleWidget,1> *)*puVar32,*(int *)(lVar27 + 0x48));
            if ((void *)*puVar32 != (void *)0x0) {
              FMemory::Free((void *)*puVar32);
            }
            *puVar32 = *puVar3;
            *puVar3 = 0;
            *(undefined4 *)(lVar27 + 0x48) = *(undefined4 *)(lVar27 + 0x58);
            *(undefined4 *)(lVar27 + 0x4c) = *(undefined4 *)(lVar27 + 0x5c);
            *(undefined8 *)(lVar27 + 0x58) = 0;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar7);
          TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
          uVar33 = (ulonglong)(uint)TStack_160.CurrentBitIndex;
        } while (TStack_160.CurrentBitIndex < (TStack_160.Array)->NumBits);
      }
    }
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(FVar28,CycleScopeEnd);
  }
  return;
}

// operator() @ 150490960

bool __thiscall
`FSlateAccessibleMessageHandler::OnWidgetRemoved'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<9017157016157683891>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<9017157016157683891>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

