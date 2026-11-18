// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// Add @ 14301cba0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
TSlotlessChildren<SWidget>::Add(TSlotlessChildren<SWidget> *this,TSharedRef<SWidget,1> *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedRef<SWidget,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  TSharedPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  if (this->bChangesInvalidatePrepass != false) {
    if (*(char *)((longlong)&this->_padding_ + 1) != -0x24) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    SWidget::Invalidate((SWidget *)this->_padding_,ChildOrder);
  }
  pTVar6 = (TSharedRef<SWidget,1> *)(this->Children).AllocatorInstance.Data;
  if ((pTVar6 <= param_1) && (param_1 < pTVar6 + (this->Children).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Children).AllocatorInstance,piVar1);
  }
  (this->Children).ArrayNum = iVar5 + 1;
  pFVar7 = (this->Children).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(SWidget **)pFVar7 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = param_1->Object;
  if (this_00 != SNullWidget::NullWidget.Object) {
    if (*(char *)((longlong)&this->_padding_ + 1) != -0x24) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)(this->_padding_ + 8),&local_18);
    local_28.Object = pTVar6->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SWidget::AssignParentWidget(this_00,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return iVar5;
}

