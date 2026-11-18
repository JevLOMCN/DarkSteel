// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 41

// operator[] @ 14254eb80

FSlot * __thiscall
TPanelChildren<UE::Slate::Private::SContainerAttribute::FSlot>::operator[]
          (TPanelChildren<UE::Slate::Private::SContainerAttribute::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlot *pFVar4;
  
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
      pFVar4 = (FSlot *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetChildAt @ 14257ed60

TSharedRef<SWidget,1> * __thiscall
TPanelChildren<UE::Slate::Private::SContainerAttribute::FSlot>::GetChildAt
          (TPanelChildren<UE::Slate::Private::SContainerAttribute::FSlot> *this,
          TSharedRef<SWidget,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 14257ee00

TSharedRef<SWidget_const_,1> * __thiscall
TPanelChildren<UE::Slate::Private::SContainerAttribute::FSlot>::GetChildAt
          (TPanelChildren<UE::Slate::Private::SContainerAttribute::FSlot> *this,
          TSharedRef<SWidget_const_,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14257eea0

FWidgetRef * __thiscall
TPanelChildren<UE::Slate::Private::SContainerAttribute::FSlot>::GetChildRefAt
          (TPanelChildren<UE::Slate::Private::SContainerAttribute::FSlot> *this,
          FWidgetRef *__return_storage_ptr__,int param_1)

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
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14257ef40

FConstWidgetRef * __thiscall
TPanelChildren<UE::Slate::Private::SContainerAttribute::FSlot>::GetChildRefAt
          (TPanelChildren<UE::Slate::Private::SContainerAttribute::FSlot> *this,
          FConstWidgetRef *__return_storage_ptr__,int param_1)

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
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetSlotAt @ 1425889c0

FSlotBase * __thiscall
TPanelChildren<UE::Slate::Private::SContainerAttribute::FSlot>::GetSlotAt
          (TPanelChildren<UE::Slate::Private::SContainerAttribute::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlotBase *pFVar4;
  
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
      pFVar4 = (FSlotBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlotBase **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// Move @ 14258cd50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TPanelChildren<UE::Slate::Private::SContainerAttribute::FSlot>::Move
          (TPanelChildren<UE::Slate::Private::SContainerAttribute::FSlot> *this,int param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TUniquePtr<UE::Slate::Private::SContainerAttribute::FSlot,TDefaultDelete<UE::Slate::Private::SContainerAttribute::FSlot>_>
  local_res8;
  undefined1 local_res10 [8];
  
  uVar6 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar1 = (this->Children).AllocatorInstance.Data;
  local_res8.Ptr = *(FSlot **)(pFVar1 + (longlong)param_1 * 8);
  *(undefined8 *)(pFVar1 + (longlong)param_1 * 8) = 0;
  TArray<TUniquePtr<UE::Slate::Private::SContainerAttribute::FSlot,TDefaultDelete<UE::Slate::Private::SContainerAttribute::FSlot>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAt(&this->Children,param_1,Default);
  TArray<TUniquePtr<UE::Slate::Private::SContainerAttribute::FSlot,TDefaultDelete<UE::Slate::Private::SContainerAttribute::FSlot>_>,TSizedDefaultAllocator<32>_>
  ::Insert(&this->Children,&local_res8,param_2);
  if ((this->Children).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Children.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this->Children).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = *(longlong *)(this->Children).AllocatorInstance.Data;
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x19) != -0x24) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    if (*(SWidget **)(lVar3 + 8) != (SWidget *)0x0) {
      SlateAttributePrivate::ISlateAttributeContainer::UpdateContainerSortOrder
                ((ISlateAttributeContainer *)(lVar2 + 0x20),*(SWidget **)(lVar3 + 8));
      goto LAB_14258ce91;
    }
  }
  `TWidgetSlotWithAttributeSupport<UE::Slate::Private::SContainerAttribute::FSlot>::
  RequestSortAttribute'::__l2::<lambda_1>::operator()(local_res10);
LAB_14258ce91:
  if (local_res8.Ptr != (FSlot *)0x0) {
    (**(code **)(local_res8.Ptr)->_padding_)(local_res8.Ptr,1);
  }
  if (*(char *)((longlong)&this->_padding_ + 1) != -0x24) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  SWidget::Invalidate((SWidget *)this->_padding_,ChildOrder);
  return;
}

// Num @ 14258cee0

int __thiscall
TPanelChildren<UE::Slate::Private::SContainerAttribute::FSlot>::Num
          (TPanelChildren<UE::Slate::Private::SContainerAttribute::FSlot> *this)

{
  return (this->Children).ArrayNum;
}

// SupportSlotWithSlateAttribute @ 1425a8e20

bool __thiscall
TPanelChildren<UE::Slate::Private::SContainerAttribute::FSlot>::SupportSlotWithSlateAttribute
          (TPanelChildren<UE::Slate::Private::SContainerAttribute::FSlot> *this)

{
  return true;
}

// operator[] @ 1425c3050

FOverlaySlot * __thiscall
TPanelChildren<SOverlay::FOverlaySlot>::operator[]
          (TPanelChildren<SOverlay::FOverlaySlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FOverlaySlot *pFVar4;
  
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
      pFVar4 = (FOverlaySlot *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FOverlaySlot **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// operator[] @ 1425c30d0

FSlot * __thiscall
TPanelChildren<SBoxPanel::FSlot>::operator[](TPanelChildren<SBoxPanel::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlot *pFVar4;
  
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
      pFVar4 = (FSlot *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// operator[] @ 1425c3150

FSlot * __thiscall
TPanelChildren<SBoxPanel::FSlot>::operator[](TPanelChildren<SBoxPanel::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlot *pFVar4;
  
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
      pFVar4 = (FSlot *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// AddSlot @ 1425c91a0

int __thiscall
TPanelChildren<SOverlay::FOverlaySlot>::AddSlot
          (TPanelChildren<SOverlay::FOverlaySlot> *this,FSlotArguments *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)param_1->_padding_;
  param_1->_padding_ = 0;
  if (local_28[0] == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewSlot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x1fd,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Children).ArrayMax * 8)) {
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
  uVar6 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (uVar6 == *piVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Children).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  (this->Children).ArrayNum = uVar6 + 1;
  *(undefined8 **)(pFVar2 + (longlong)(int)uVar6 * 8) = local_28[0];
  local_28[0] = (undefined8 *)0x0;
  uVar7 = 0;
  if ((int)uVar6 < (this->Children).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  SOverlay::FOverlaySlot::Construct
            (*(FOverlaySlot **)((this->Children).AllocatorInstance.Data + (longlong)(int)uVar6 * 8),
             (FChildren *)this,param_1);
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return uVar6;
}

// AddSlot @ 1425c9330

int __thiscall
TPanelChildren<SBoxPanel::FSlot>::AddSlot
          (TPanelChildren<SBoxPanel::FSlot> *this,FSlotArguments *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *local_28 [2];
  
  local_28[0] = *(undefined8 **)param_1;
  *(undefined8 *)param_1 = 0;
  if (local_28[0] == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewSlot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x1fd,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Children).ArrayMax * 8)) {
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
  uVar6 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (uVar6 == *piVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Children).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  (this->Children).ArrayNum = uVar6 + 1;
  *(undefined8 **)(pFVar2 + (longlong)(int)uVar6 * 8) = local_28[0];
  local_28[0] = (undefined8 *)0x0;
  uVar7 = 0;
  if ((int)uVar6 < (this->Children).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  SBoxPanel::TSlot<SBoxPanel::FSlot>::Construct
            (*(TSlot<SBoxPanel::FSlot> **)
              ((this->Children).AllocatorInstance.Data + (longlong)(int)uVar6 * 8),(FChildren *)this
             ,param_1);
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return uVar6;
}

// AddSlots @ 1425c99f0

void __thiscall
TPanelChildren<FPopupLayerSlot>::AddSlots
          (TPanelChildren<FPopupLayerSlot> *this,
          TArray<FPopupLayerSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlotArguments *pFVar7;
  uint uVar8;
  FSlotArguments *pFVar9;
  undefined1 local_res8 [8];
  undefined8 *local_38 [2];
  
  iVar2 = (this->Children).ArrayNum;
  uVar8 = param_1->ArrayNum + iVar2;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar1 = &(this->Children).ArrayMax;
  if (*piVar1 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar8,&(this->Children).AllocatorInstance,iVar2,piVar1);
  }
  iVar2 = param_1->ArrayNum;
  pFVar7 = (FSlotArguments *)(param_1->AllocatorInstance).Data;
  pFVar9 = pFVar7 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPopupLayerSlot::FSlotArguments,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar7 == pFVar9) break;
    local_38[0] = (undefined8 *)pFVar7->_padding_;
    pFVar7->_padding_ = 0;
    if (local_38[0] == (undefined8 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewSlot.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                         ,0x1fd,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->Children).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 8)) {
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
    uVar8 = (this->Children).ArrayNum;
    if (uVar8 == *piVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Children).AllocatorInstance,piVar1);
    }
    pFVar3 = (this->Children).AllocatorInstance.Data;
    (this->Children).ArrayNum = uVar8 + 1;
    *(undefined8 **)(pFVar3 + (longlong)(int)uVar8 * 8) = local_38[0];
    local_38[0] = (undefined8 *)0x0;
    uVar6 = 0;
    if ((int)uVar8 < (this->Children).ArrayNum) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FPopupLayerSlot::Construct
              (*(FPopupLayerSlot **)
                ((this->Children).AllocatorInstance.Data + (longlong)(int)uVar8 * 8),
               (FChildren *)this,pFVar7);
    if (local_38[0] != (undefined8 *)0x0) {
      (**(code **)*local_38[0])(local_38[0],1);
    }
    pFVar7 = pFVar7 + 1;
  }
  DestructItems<FPopupLayerSlot::FSlotArguments,int>
            ((FSlotArguments *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// AddSlots @ 1425c9c40

void __thiscall
TPanelChildren<SOverlay::FOverlaySlot>::AddSlots
          (TPanelChildren<SOverlay::FOverlaySlot> *this,
          TArray<SOverlay::FOverlaySlot::FSlotArguments,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlotArguments *pFVar7;
  uint uVar8;
  FSlotArguments *pFVar9;
  undefined1 local_res8 [8];
  undefined8 *local_38 [2];
  
  iVar2 = (this->Children).ArrayNum;
  uVar8 = param_1->ArrayNum + iVar2;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar1 = &(this->Children).ArrayMax;
  if (*piVar1 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar8,&(this->Children).AllocatorInstance,iVar2,piVar1);
  }
  iVar2 = param_1->ArrayNum;
  pFVar7 = (FSlotArguments *)(param_1->AllocatorInstance).Data;
  pFVar9 = pFVar7 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<SOverlay::FOverlaySlot::FSlotArguments,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar9) break;
    local_38[0] = (undefined8 *)pFVar7->_padding_;
    pFVar7->_padding_ = 0;
    if (local_38[0] == (undefined8 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewSlot.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                         ,0x1fd,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->Children).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 8)) {
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
    uVar8 = (this->Children).ArrayNum;
    if (uVar8 == *piVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Children).AllocatorInstance,piVar1);
    }
    pFVar3 = (this->Children).AllocatorInstance.Data;
    (this->Children).ArrayNum = uVar8 + 1;
    *(undefined8 **)(pFVar3 + (longlong)(int)uVar8 * 8) = local_38[0];
    local_38[0] = (undefined8 *)0x0;
    uVar6 = 0;
    if ((int)uVar8 < (this->Children).ArrayNum) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    SOverlay::FOverlaySlot::Construct
              (*(FOverlaySlot **)
                ((this->Children).AllocatorInstance.Data + (longlong)(int)uVar8 * 8),
               (FChildren *)this,pFVar7);
    if (local_38[0] != (undefined8 *)0x0) {
      (**(code **)*local_38[0])(local_38[0],1);
    }
    pFVar7 = pFVar7 + 1;
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// GetChildAt @ 1425de550

TSharedRef<SWidget,1> * __thiscall
TPanelChildren<FPopupLayerSlot>::GetChildAt
          (TPanelChildren<FPopupLayerSlot> *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 1425de5f0

TSharedRef<SWidget_const_,1> * __thiscall
TPanelChildren<FPopupLayerSlot>::GetChildAt
          (TPanelChildren<FPopupLayerSlot> *this,
          TSharedRef<SWidget_const_,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 1425de690

TSharedRef<SWidget,1> * __thiscall
TPanelChildren<SOverlay::FOverlaySlot>::GetChildAt
          (TPanelChildren<SOverlay::FOverlaySlot> *this,
          TSharedRef<SWidget,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 1425de730

TSharedRef<SWidget_const_,1> * __thiscall
TPanelChildren<SOverlay::FOverlaySlot>::GetChildAt
          (TPanelChildren<SOverlay::FOverlaySlot> *this,
          TSharedRef<SWidget_const_,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 1425de7d0

TSharedRef<SWidget,1> * __thiscall
TPanelChildren<SBoxPanel::FSlot>::GetChildAt
          (TPanelChildren<SBoxPanel::FSlot> *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 1425de870

TSharedRef<SWidget_const_,1> * __thiscall
TPanelChildren<SBoxPanel::FSlot>::GetChildAt
          (TPanelChildren<SBoxPanel::FSlot> *this,
          TSharedRef<SWidget_const_,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildRefAt @ 1425df390

FWidgetRef * __thiscall
TPanelChildren<FPopupLayerSlot>::GetChildRefAt
          (TPanelChildren<FPopupLayerSlot> *this,FWidgetRef *__return_storage_ptr__,int param_1)

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
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 1425df430

FConstWidgetRef * __thiscall
TPanelChildren<FPopupLayerSlot>::GetChildRefAt
          (TPanelChildren<FPopupLayerSlot> *this,FConstWidgetRef *__return_storage_ptr__,int param_1
          )

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
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 1425df4d0

FWidgetRef * __thiscall
TPanelChildren<SOverlay::FOverlaySlot>::GetChildRefAt
          (TPanelChildren<SOverlay::FOverlaySlot> *this,FWidgetRef *__return_storage_ptr__,
          int param_1)

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
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 1425df570

FConstWidgetRef * __thiscall
TPanelChildren<SOverlay::FOverlaySlot>::GetChildRefAt
          (TPanelChildren<SOverlay::FOverlaySlot> *this,FConstWidgetRef *__return_storage_ptr__,
          int param_1)

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
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 1425df610

FWidgetRef * __thiscall
TPanelChildren<SBoxPanel::FSlot>::GetChildRefAt
          (TPanelChildren<SBoxPanel::FSlot> *this,FWidgetRef *__return_storage_ptr__,int param_1)

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
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 1425df6b0

FConstWidgetRef * __thiscall
TPanelChildren<SBoxPanel::FSlot>::GetChildRefAt
          (TPanelChildren<SBoxPanel::FSlot> *this,FConstWidgetRef *__return_storage_ptr__,
          int param_1)

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
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetSlotAt @ 1425e3520

FSlotBase * __thiscall
TPanelChildren<FPopupLayerSlot>::GetSlotAt(TPanelChildren<FPopupLayerSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlotBase *pFVar4;
  
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
      pFVar4 = (FSlotBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlotBase **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetSlotAt @ 1425e35a0

FSlotBase * __thiscall
TPanelChildren<SOverlay::FOverlaySlot>::GetSlotAt
          (TPanelChildren<SOverlay::FOverlaySlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlotBase *pFVar4;
  
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
      pFVar4 = (FSlotBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlotBase **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetSlotAt @ 1425e3620

FSlotBase * __thiscall
TPanelChildren<SBoxPanel::FSlot>::GetSlotAt(TPanelChildren<SBoxPanel::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlotBase *pFVar4;
  
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
      pFVar4 = (FSlotBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlotBase **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// InsertSlot @ 1425e8400

void __thiscall
TPanelChildren<SBoxPanel::FSlot>::InsertSlot
          (TPanelChildren<SBoxPanel::FSlot> *this,FSlotArguments *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_> local_res8;
  
  local_res8.Ptr = *(FSlot **)param_1;
  *(undefined8 *)param_1 = 0;
  if (local_res8.Ptr == (FSlot *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewSlot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x23c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_>,TSizedDefaultAllocator<32>_>
  ::Insert(&this->Children,&local_res8,param_2);
  uVar3 = 0;
  if (param_2 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SBoxPanel::TSlot<SBoxPanel::FSlot>::Construct
            (*(TSlot<SBoxPanel::FSlot> **)
              ((this->Children).AllocatorInstance.Data + (longlong)param_2 * 8),(FChildren *)this,
             param_1);
  if (local_res8.Ptr != (FSlot *)0x0) {
    (*(code *)**(undefined8 **)local_res8.Ptr)(local_res8.Ptr,1);
  }
  return;
}

// Move @ 1425eb000

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TPanelChildren<SOverlay::FOverlaySlot>::Move
          (TPanelChildren<SOverlay::FOverlaySlot> *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  SWidget *pSVar4;
  FSlateAttributeMetaData *pFVar5;
  uint uVar6;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar7;
  undefined1 local_res8 [8];
  FIdentityFunctor local_res10 [8];
  TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_> local_res20;
  
  uVar6 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Children).AllocatorInstance.Data;
  local_res20.Ptr = *(FOverlaySlot **)(pFVar1 + (longlong)param_1 * 8);
  *(undefined8 *)(pFVar1 + (longlong)param_1 * 8) = 0;
  TArray<TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAt(&this->Children,param_1,Default);
  TArray<TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_>,TSizedDefaultAllocator<32>_>
  ::Insert(&this->Children,&local_res20,param_2);
  if ((this->Children).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Children.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x249,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->Children).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar4 = FSlotBase::GetOwnerWidget(*(FSlotBase **)(this->Children).AllocatorInstance.Data);
  if (pSVar4 == (SWidget *)0x0) {
    `TWidgetSlotWithAttributeSupport<SOverlay::FOverlaySlot>::RequestSortAttribute'::__l2::
    <lambda_1>::operator()(local_res10);
  }
  else {
    pFVar5 = FSlateAttributeMetaData::FindMetaData(pSVar4);
    if (pFVar5 != (FSlateAttributeMetaData *)0x0) {
      FVar7 = (pFVar5->Attributes).AllocatorInstance.SecondaryData;
      if (FVar7 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
        FVar7 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar5->Attributes;
      }
      AlgoImpl::
      IntroSortInternal<FSlateAttributeMetaData::FGetterItem,int,FIdentityFunctor,TDereferenceWrapper<FSlateAttributeMetaData::FGetterItem,TLess<void>_>_>
                ((FGetterItem *)FVar7,(pFVar5->Attributes).ArrayNum,local_res10[0],
                 (TLess<void> *)local_res8);
    }
  }
  if (local_res20.Ptr != (FOverlaySlot *)0x0) {
    (**(code **)(local_res20.Ptr)->_padding_)(local_res20.Ptr,1);
  }
  if (*(char *)((longlong)&this->_padding_ + 1) != -0x24) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  SWidget::Invalidate((SWidget *)this->_padding_,ChildOrder);
  return;
}

// Move @ 1425eb1a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TPanelChildren<SBoxPanel::FSlot>::Move
          (TPanelChildren<SBoxPanel::FSlot> *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  SWidget *pSVar4;
  FSlateAttributeMetaData *pFVar5;
  uint uVar6;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar7;
  undefined1 local_res8 [8];
  FIdentityFunctor local_res10 [8];
  TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_> local_res20;
  
  uVar6 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Children).AllocatorInstance.Data;
  local_res20.Ptr = *(FSlot **)(pFVar1 + (longlong)param_1 * 8);
  *(undefined8 *)(pFVar1 + (longlong)param_1 * 8) = 0;
  TArray<TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAt(&this->Children,param_1,Default);
  TArray<TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_>,TSizedDefaultAllocator<32>_>
  ::Insert(&this->Children,&local_res20,param_2);
  if ((this->Children).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Children.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x249,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->Children).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar4 = FSlotBase::GetOwnerWidget(*(FSlotBase **)(this->Children).AllocatorInstance.Data);
  if (pSVar4 == (SWidget *)0x0) {
    `TWidgetSlotWithAttributeSupport<SBoxPanel::FSlot>::RequestSortAttribute'::__l2::<lambda_1>::
    operator()(local_res10);
  }
  else {
    pFVar5 = FSlateAttributeMetaData::FindMetaData(pSVar4);
    if (pFVar5 != (FSlateAttributeMetaData *)0x0) {
      FVar7 = (pFVar5->Attributes).AllocatorInstance.SecondaryData;
      if (FVar7 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
        FVar7 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar5->Attributes;
      }
      AlgoImpl::
      IntroSortInternal<FSlateAttributeMetaData::FGetterItem,int,FIdentityFunctor,TDereferenceWrapper<FSlateAttributeMetaData::FGetterItem,TLess<void>_>_>
                ((FGetterItem *)FVar7,(pFVar5->Attributes).ArrayNum,local_res10[0],
                 (TLess<void> *)local_res8);
    }
  }
  if (local_res20.Ptr != (FSlot *)0x0) {
    (*(code *)**(undefined8 **)local_res20.Ptr)(local_res20.Ptr,1);
  }
  if (*(char *)((longlong)&this->_padding_ + 1) != -0x24) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  SWidget::Invalidate((SWidget *)this->_padding_,ChildOrder);
  return;
}

// Num @ 1425eb860

int __thiscall TPanelChildren<FPopupLayerSlot>::Num(TPanelChildren<FPopupLayerSlot> *this)

{
  return (this->Children).ArrayNum;
}

// Num @ 1425eb870

int __thiscall
TPanelChildren<SOverlay::FOverlaySlot>::Num(TPanelChildren<SOverlay::FOverlaySlot> *this)

{
  return (this->Children).ArrayNum;
}

// Num @ 1425eb880

int __thiscall TPanelChildren<SBoxPanel::FSlot>::Num(TPanelChildren<SBoxPanel::FSlot> *this)

{
  return (this->Children).ArrayNum;
}

// RemoveAt @ 1425f80f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TPanelChildren<SOverlay::FOverlaySlot>::RemoveAt
          (TPanelChildren<SOverlay::FOverlaySlot> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
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
  pFVar1 = (this->Children).AllocatorInstance.Data;
  puVar2 = *(undefined8 **)(pFVar1 + (longlong)param_1 * 8);
  *(undefined8 *)(pFVar1 + (longlong)param_1 * 8) = 0;
  TArray<TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAt(&this->Children,param_1,Default);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return;
}

// SupportSlotWithSlateAttribute @ 142600a40

bool __thiscall
TPanelChildren<FPopupLayerSlot>::SupportSlotWithSlateAttribute
          (TPanelChildren<FPopupLayerSlot> *this)

{
  return false;
}

// SupportSlotWithSlateAttribute @ 142600a50

bool __thiscall
TPanelChildren<SOverlay::FOverlaySlot>::SupportSlotWithSlateAttribute
          (TPanelChildren<SOverlay::FOverlaySlot> *this)

{
  return true;
}

// SupportSlotWithSlateAttribute @ 142600a60

bool __thiscall
TPanelChildren<SBoxPanel::FSlot>::SupportSlotWithSlateAttribute
          (TPanelChildren<SBoxPanel::FSlot> *this)

{
  return true;
}

