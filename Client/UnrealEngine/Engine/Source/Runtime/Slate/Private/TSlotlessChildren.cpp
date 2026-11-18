// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 22

// operator[] @ 142703230

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
TSlotlessChildren<SDockTab>::operator[](TSlotlessChildren<SDockTab> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedRef<SDockTab,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedRef<SDockTab,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TSharedRef<SDockTab,1> *)
         ((this->Children).AllocatorInstance.Data + (longlong)param_1 * 0x10);
}

// operator[] @ 1427032b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
TSlotlessChildren<SDockTab>::operator[](TSlotlessChildren<SDockTab> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedRef<SDockTab,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedRef<SDockTab,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TSharedRef<SDockTab,1> *)
         ((this->Children).AllocatorInstance.Data + (longlong)param_1 * 0x10);
}

// Add @ 14270a0a0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
TSlotlessChildren<SDockTab>::Add(TSlotlessChildren<SDockTab> *this,TSharedRef<SDockTab,1> *param_1)

{
  int *piVar1;
  TSharedRef<SDockTab,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  SDockTab *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<SWidget,1> *pTVar7;
  FScriptContainerElement *pFVar8;
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
  pTVar2 = (TSharedRef<SDockTab,1> *)(this->Children).AllocatorInstance.Data;
  if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->Children).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  iVar6 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Children).AllocatorInstance,piVar1);
  }
  (this->Children).ArrayNum = iVar6 + 1;
  pFVar8 = (this->Children).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(SDockTab **)pFVar8 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = param_1->Object;
  if (this_00 != (SDockTab *)SNullWidget::NullWidget.Object) {
    if (*(char *)((longlong)&this->_padding_ + 1) != -0x24) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)(this->_padding_ + 8),&local_18);
    local_28.Object = pTVar7->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SWidget::AssignParentWidget((SWidget *)this_00,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return iVar6;
}

// AsArrayCopy @ 14270d370

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> * __thiscall
TSlotlessChildren<SDockTab>::AsArrayCopy
          (TSlotlessChildren<SDockTab> *this,
          TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  TSharedRef<SDockTab,1> *pTVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->Children).ArrayNum;
  pTVar2 = (TSharedRef<SDockTab,1> *)(this->Children).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<TSharedRef<SDockTab,1>,TSharedRef<SDockTab,1>,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pTVar2,iVar1);
  return __return_storage_ptr__;
}

// GetChildAt @ 14273b810

TSharedRef<SWidget,1> * __thiscall
TSlotlessChildren<SDockTab>::GetChildAt
          (TSlotlessChildren<SDockTab> *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSharedRef<SWidget,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  
  uVar4 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar6 = (this->Children).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  __return_storage_ptr__->Object = *(SWidget **)pFVar6;
  pTVar1 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 14273b8b0

TSharedRef<SWidget_const_,1> * __thiscall
TSlotlessChildren<SDockTab>::GetChildAt
          (TSlotlessChildren<SDockTab> *this,TSharedRef<SWidget_const_,1> *__return_storage_ptr__,
          int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSharedRef<SWidget_const_,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  
  uVar4 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SWidget_const_,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar6 = (this->Children).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  __return_storage_ptr__->Object = *(SWidget **)pFVar6;
  pTVar1 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14273bbf0

FWidgetRef * __thiscall
TSlotlessChildren<SDockTab>::GetChildRefAt
          (TSlotlessChildren<SDockTab> *this,FWidgetRef *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14273bc90

FConstWidgetRef * __thiscall
TSlotlessChildren<SDockTab>::GetChildRefAt
          (TSlotlessChildren<SDockTab> *this,FConstWidgetRef *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConstWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConstWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetSlotAt @ 142743e70

FSlotBase * __thiscall
TSlotlessChildren<SDockTab>::GetSlotAt(TSlotlessChildren<SDockTab> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSlotBase *pFVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_virtual_class_FSlotBase_const&___ptr64___cdecl_TSlotlessChildren<SDockTab>::GetSlotAt(int)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_TSlotlessChildren<SDockTab>::GetSlotAt(int)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_TSlotlessChildren<SDockTab>::GetSlotAt(int)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FSlotBase::FSlotBase
                ((FSlotBase *)
                 &`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_TSlotlessChildren<SDockTab>::GetSlotAt(int)const___ptr64'
                  ::__l2::NullSlot);
      atexit(`TSlotlessChildren<SDockTab>::GetSlotAt'::__l2::
             _dynamic_atexit_destructor_for__NullSlot__);
      _Init_thread_footer(&`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_TSlotlessChildren<SDockTab>::GetSlotAt(int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                     ,0x351,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSlotBase *)(*pcVar1)();
    return pFVar3;
  }
  return (FSlotBase *)
         &`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_TSlotlessChildren<SDockTab>::GetSlotAt(int)const___ptr64'
          ::__l2::NullSlot;
}

// Insert @ 142749520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSlotlessChildren<SDockTab>::Insert
          (TSlotlessChildren<SDockTab> *this,TSharedRef<SDockTab,1> *param_1,int param_2)

{
  int *piVar1;
  TSharedRef<SDockTab,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  SDockTab *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<SWidget,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
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
  pTVar2 = (TSharedRef<SDockTab,1> *)(this->Children).AllocatorInstance.Data;
  if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->Children).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Children).AllocatorInstance,piVar1);
  }
  pFVar8 = (this->Children).AllocatorInstance.Data;
  (this->Children).ArrayNum = iVar6 + 1;
  lVar9 = (longlong)param_2 * 0x10;
  pFVar8 = pFVar8 + lVar9;
  memmove(pFVar8 + 0x10,pFVar8,(longlong)(iVar6 - param_2) << 4);
  pFVar8 = (this->Children).AllocatorInstance.Data;
  *(SDockTab **)(pFVar8 + lVar9) = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar8 + lVar9 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = param_1->Object;
  if (this_00 != (SDockTab *)SNullWidget::NullWidget.Object) {
    if (*(char *)((longlong)&this->_padding_ + 1) != -0x24) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)(this->_padding_ + 8),&local_18);
    local_28.Object = pTVar7->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SWidget::AssignParentWidget((SWidget *)this_00,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// Num @ 142760ad0

int __thiscall TSlotlessChildren<SDockTab>::Num(TSlotlessChildren<SDockTab> *this)

{
  return (this->Children).ArrayNum;
}

// NumSlot @ 142760ae0

int __thiscall TSlotlessChildren<SDockTab>::NumSlot(TSlotlessChildren<SDockTab> *this)

{
  return 0;
}

// Remove @ 14277ada0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
TSlotlessChildren<SDockTab>::Remove
          (TSlotlessChildren<SDockTab> *this,TSharedRef<SDockTab,1> *param_1)

{
  SDockTab *this_00;
  TSharedRef<SDockTab,1> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  this_00 = param_1->Object;
  if (this_00 != (SDockTab *)SNullWidget::NullWidget.Object) {
    if (*(char *)((longlong)&this->_padding_ + 1) != -0x24) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    SWidget::ConditionallyDetatchParentWidget((SWidget *)this_00,(SWidget *)this->_padding_);
  }
  pTVar1 = (TSharedRef<SDockTab,1> *)(this->Children).AllocatorInstance.Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + (this->Children).ArrayMax)) {
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
  lVar6 = (longlong)iVar5;
  if (iVar5 == 0) {
    return 0;
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  iVar12 = 0;
  bVar4 = *(SDockTab **)pFVar2 != param_1->Object;
  lVar8 = 0;
  iVar10 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar11 = iVar10 + 1;
    if (lVar8 < lVar6) {
      pFVar7 = pFVar2 + lVar8 * 0x10;
      do {
        if (bVar4 != (*(SDockTab **)pFVar7 != param_1->Object)) break;
        iVar11 = iVar11 + 1;
        lVar8 = lVar8 + 1;
        pFVar7 = pFVar7 + 0x10;
      } while (lVar8 < lVar6);
    }
    iVar9 = iVar11 - iVar10;
    if (bVar4 == false) {
      DestructItems<TSharedRef<SDockTab,1>,int>
                ((TSharedRef<SDockTab,1> *)(pFVar2 + (longlong)iVar10 * 0x10),iVar9);
    }
    else {
      if (iVar12 != iVar10) {
        memmove(pFVar2 + (longlong)iVar12 * 0x10,pFVar2 + (longlong)iVar10 * 0x10,
                (longlong)iVar9 << 4);
      }
      iVar12 = iVar12 + iVar9;
    }
    bVar4 = (bool)(bVar4 ^ 1);
    iVar10 = iVar11;
    if (lVar6 <= lVar8) {
      (this->Children).ArrayNum = iVar12;
      return iVar5 - iVar12;
    }
  } while( true );
}

// RemoveAt @ 14277b5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TSlotlessChildren<SDockTab>::RemoveAt(TSlotlessChildren<SDockTab> *this,int param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  
  uVar7 = (uint)~param_1 >> 0x1f;
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = uVar7;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = (this->Children).AllocatorInstance.Data;
  lVar9 = (longlong)param_1 * 0x10;
  pTVar2 = *(TReferenceControllerBase<1> **)(pFVar8 + lVar9 + 8);
  this_00 = *(SWidget **)(pFVar8 + lVar9);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 != SNullWidget::NullWidget.Object) {
    if (*(char *)((longlong)&this->_padding_ + 1) != -0x24) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    SWidget::ConditionallyDetatchParentWidget(this_00,(SWidget *)this->_padding_);
  }
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = uVar7;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = (this->Children).AllocatorInstance.Data + lVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(pFVar8 + 8));
  iVar6 = (this->Children).ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(pFVar8,pFVar8 + 0x10,(longlong)iVar6 << 4);
  }
  piVar1 = &(this->Children).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,&(this->Children).AllocatorInstance,(this->Children).ArrayNum,
             &(this->Children).ArrayMax);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// Empty @ 14286ec20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TSlotlessChildren<SWidget>::Empty(TSlotlessChildren<SWidget> *this,int param_1)

{
  TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  uVar9 = 0;
  pTVar1 = &this->Children;
  uVar10 = uVar9;
  if (0 < (this->Children).ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      uVar7 = 0;
      if ((int)uVar8 < (this->Children).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar3 + uVar10 + 8);
      this_00 = *(SWidget **)(pFVar3 + uVar10);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this_00 != SNullWidget::NullWidget.Object) {
        if (*(char *)((longlong)&this->_padding_ + 1) != -0x24) {
          UE::Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)
                     &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::
                      __l3::LOG_Static,(FLogCategoryBase *)&LogSlate);
        }
        SWidget::ConditionallyDetatchParentWidget(this_00,(SWidget *)this->_padding_);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 0x10;
    } while ((int)(uVar8 + 1) < (this->Children).ArrayNum);
  }
  local_38.Data = (pTVar1->AllocatorInstance).Data;
  piVar2 = &(this->Children).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_30 = (this->Children).ArrayNum;
  local_2c = *piVar2;
  *piVar2 = 0;
  (this->Children).ArrayNum = 0;
  DestructItems<TSharedRef<SWidget,1>,int>((TSharedRef<SWidget,1> *)0x0,0);
  (this->Children).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  DestructItems<TSharedRef<SWidget,1>,int>((TSharedRef<SWidget,1> *)local_38.Data,local_30);
  local_30 = 0;
  if (local_2c != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,param_1,&local_38,0,&local_2c);
  }
  if (pTVar1 != (TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> *)&local_38) {
    DestructItems<TSharedRef<SWidget,1>,int>
              ((TSharedRef<SWidget,1> *)(pTVar1->AllocatorInstance).Data,(this->Children).ArrayNum);
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = local_38.Data;
    (this->Children).ArrayNum = local_30;
    (this->Children).ArrayMax = local_2c;
    local_2c = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = 0;
  }
  DestructItems<TSharedRef<SWidget,1>,int>((TSharedRef<SWidget,1> *)local_38.Data,local_30);
  if ((TSharedRef<SWidget,1> *)local_38.Data != (TSharedRef<SWidget,1> *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// GetChildAt @ 1428756b0

TSharedRef<SWidget,1> * __thiscall
TSlotlessChildren<SWidget>::GetChildAt
          (TSlotlessChildren<SWidget> *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSharedRef<SWidget,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  
  uVar4 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar6 = (this->Children).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  __return_storage_ptr__->Object = *(SWidget **)pFVar6;
  pTVar1 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 142875750

TSharedRef<SWidget_const_,1> * __thiscall
TSlotlessChildren<SWidget>::GetChildAt
          (TSlotlessChildren<SWidget> *this,TSharedRef<SWidget_const_,1> *__return_storage_ptr__,
          int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSharedRef<SWidget_const_,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  
  uVar4 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SWidget_const_,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar6 = (this->Children).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  __return_storage_ptr__->Object = *(SWidget **)pFVar6;
  pTVar1 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildRefAt @ 1428757f0

FWidgetRef * __thiscall
TSlotlessChildren<SWidget>::GetChildRefAt
          (TSlotlessChildren<SWidget> *this,FWidgetRef *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 142875890

FConstWidgetRef * __thiscall
TSlotlessChildren<SWidget>::GetChildRefAt
          (TSlotlessChildren<SWidget> *this,FConstWidgetRef *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConstWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConstWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetSlotAt @ 14287ab60

FSlotBase * __thiscall
TSlotlessChildren<SWidget>::GetSlotAt(TSlotlessChildren<SWidget> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSlotBase *pFVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_virtual_class_FSlotBase_const&___ptr64___cdecl_TSlotlessChildren<SWidget>::GetSlotAt(int)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_TSlotlessChildren<SWidget>::GetSlotAt(int)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_TSlotlessChildren<SWidget>::GetSlotAt(int)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FSlotBase::FSlotBase
                ((FSlotBase *)
                 &`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_TSlotlessChildren<SWidget>::GetSlotAt(int)const___ptr64'
                  ::__l2::NullSlot);
      atexit(`TSlotlessChildren<SWidget>::GetSlotAt'::__l2::
             _dynamic_atexit_destructor_for__NullSlot__);
      _Init_thread_footer(&`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_TSlotlessChildren<SWidget>::GetSlotAt(int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                     ,0x351,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSlotBase *)(*pcVar1)();
    return pFVar3;
  }
  return (FSlotBase *)
         &`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_TSlotlessChildren<SWidget>::GetSlotAt(int)const___ptr64'
          ::__l2::NullSlot;
}

// Num @ 142884c90

int __thiscall TSlotlessChildren<SWidget>::Num(TSlotlessChildren<SWidget> *this)

{
  return (this->Children).ArrayNum;
}

// NumSlot @ 142884ca0

int __thiscall TSlotlessChildren<SWidget>::NumSlot(TSlotlessChildren<SWidget> *this)

{
  return 0;
}

