// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 10

// AddSlot @ 142f58320

int __thiscall
TPanelChildren<SSegmentedControl<int>::FSlot>::AddSlot
          (TPanelChildren<SSegmentedControl<int>::FSlot> *this,FSlotArguments *param_1)

{
  int *piVar1;
  longlong *plVar2;
  TAttribute<TSharedPtr<IToolTip,1>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  SWidget *pSVar5;
  FSlotBase *this_00;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FSlotBase *pFVar12;
  longlong *plVar13;
  undefined8 *local_38;
  SWidget *local_30;
  TReferenceControllerBase<1> *pTStack_28;
  
  local_38 = (undefined8 *)param_1->_padding_;
  param_1->_padding_ = 0;
  if (local_38 == (undefined8 *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewSlot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x1fd,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      iVar9 = (*pcVar7)();
      return iVar9;
    }
  }
  pFVar4 = (this->Children).AllocatorInstance.Data;
  if ((pFVar4 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar4 + (longlong)(this->Children).ArrayMax * 8)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      iVar9 = (*pcVar7)();
      return iVar9;
    }
  }
  uVar10 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (uVar10 == *piVar1) {
    uVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(this->Children).AllocatorInstance,piVar1);
  }
  pFVar4 = (this->Children).AllocatorInstance.Data;
  (this->Children).ArrayNum = uVar10 + 1;
  *(undefined8 **)(pFVar4 + (longlong)(int)uVar10 * 8) = local_38;
  local_38 = (undefined8 *)0x0;
  uVar11 = 0;
  if ((int)uVar10 < (this->Children).ArrayNum) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      iVar9 = (*pcVar7)();
      return iVar9;
    }
  }
  pSVar5 = (SWidget *)param_1->_padding_;
  this_00 = *(FSlotBase **)((this->Children).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
  if (pSVar5 != (SWidget *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)param_1->_padding_;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlotBase::DetatchParentFromContent(this_00);
    local_30 = (this_00->Widget).Object;
    pTStack_28 = (this_00->Widget).SharedReferenceCount.ReferenceController;
    (this_00->Widget).Object = pSVar5;
    (this_00->Widget).SharedReferenceCount.ReferenceController = pTVar6;
    FSlotBase::AfterContentOrOwnerAssigned(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
  }
  FSlotBase::SetOwner(this_00,(FChildren *)this);
  plVar2 = (longlong *)((longlong)&this_00[1]._padding_ + 4);
  pFVar12 = (FSlotBase *)&param_1->_padding_;
  if (*(char *)((longlong)&param_1->_padding_ + 4) == '\0') {
    pFVar12 = this_00 + 1;
  }
  *(int *)&this_00[1]._padding_ = (int)pFVar12->_padding_;
  plVar13 = &param_1->_padding_;
  if (*(char *)((longlong)&param_1->_padding_ + 4) == '\0') {
    plVar13 = plVar2;
  }
  *(int *)plVar2 = (int)*plVar13;
  if ((param_1->_Text).bIsSet != false) {
    FText::operator=((FText *)&this_00[1].Owner,&(param_1->_Text).Value);
    *(bool *)&this_00[1].Widget.SharedReferenceCount.ReferenceController = (param_1->_Text).bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(this_00 + 2),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_Text).Getter);
  }
  if ((param_1->_ToolTip).bIsSet != false) {
    FText::operator=((FText *)&this_00[2].Widget.SharedReferenceCount,&(param_1->_ToolTip).Value);
    *(bool *)&this_00[3].Owner = (param_1->_ToolTip).bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00[3].Widget,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_ToolTip).Getter);
  }
  if ((param_1->_ToolTipWidget).bIsSet != false) {
    pTVar3 = &param_1->_ToolTipWidget;
    if ((TAttribute<TSharedPtr<IToolTip,1>_> *)&this_00[4].Owner != pTVar3) {
      this_00[4].Owner = (FChildren *)(pTVar3->Value).Object;
      (pTVar3->Value).Object = (IToolTip *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this_00[4].Widget,
                 &(param_1->_ToolTipWidget).Value.SharedReferenceCount);
    }
    *(bool *)&this_00[4].Widget.SharedReferenceCount.ReferenceController =
         (param_1->_ToolTipWidget).bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(this_00 + 5),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_ToolTipWidget).Getter);
  }
  if ((param_1->_Icon).bIsSet != false) {
    this_00[5].Widget.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)(param_1->_Icon).Value;
    *(bool *)&this_00[6]._padding_ = (param_1->_Icon).bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00[6].Owner,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_Icon).Getter);
  }
  if ((param_1->_Value).bIsSet != false) {
    *(int *)&this_00[7]._padding_ = (param_1->_Value).TypedValue;
  }
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  return uVar10;
}

// GetChildAt @ 142fd15d0

TSharedRef<SWidget,1> * __thiscall
TPanelChildren<SSegmentedControl<int>::FSlot>::GetChildAt
          (TPanelChildren<SSegmentedControl<int>::FSlot> *this,
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

// GetChildAt @ 142fd1670

TSharedRef<SWidget_const_,1> * __thiscall
TPanelChildren<SSegmentedControl<int>::FSlot>::GetChildAt
          (TPanelChildren<SSegmentedControl<int>::FSlot> *this,
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

// GetChildRefAt @ 142fd1710

FWidgetRef * __thiscall
TPanelChildren<SSegmentedControl<int>::FSlot>::GetChildRefAt
          (TPanelChildren<SSegmentedControl<int>::FSlot> *this,FWidgetRef *__return_storage_ptr__,
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

// GetChildRefAt @ 142fd17b0

FConstWidgetRef * __thiscall
TPanelChildren<SSegmentedControl<int>::FSlot>::GetChildRefAt
          (TPanelChildren<SSegmentedControl<int>::FSlot> *this,
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

// GetSlotAt @ 142fd8fe0

FSlotBase * __thiscall
TPanelChildren<SSegmentedControl<int>::FSlot>::GetSlotAt
          (TPanelChildren<SSegmentedControl<int>::FSlot> *this,int param_1)

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

// Num @ 142fedc50

int __thiscall
TPanelChildren<SSegmentedControl<int>::FSlot>::Num
          (TPanelChildren<SSegmentedControl<int>::FSlot> *this)

{
  return (this->Children).ArrayNum;
}

// SupportSlotWithSlateAttribute @ 14300e7c0

bool __thiscall
TPanelChildren<SSegmentedControl<int>::FSlot>::SupportSlotWithSlateAttribute
          (TPanelChildren<SSegmentedControl<int>::FSlot> *this)

{
  return false;
}

// InsertSlot @ 143037790

void __thiscall
TPanelChildren<FBasicLayoutWidgetSlot>::InsertSlot
          (TPanelChildren<FBasicLayoutWidgetSlot> *this,FSlotArguments *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *local_28 [2];
  
  local_28[0] = *(undefined8 **)param_1;
  lVar7 = (longlong)param_2;
  *(undefined8 *)param_1 = 0;
  if (local_28[0] == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewSlot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x23c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
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
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Children).AllocatorInstance,piVar1);
  }
  (this->Children).ArrayNum = iVar5 + 1;
  pFVar2 = (this->Children).AllocatorInstance.Data + lVar7 * 8;
  memmove(pFVar2 + 8,pFVar2,(longlong)(iVar5 - param_2) << 3);
  *(undefined8 **)((this->Children).AllocatorInstance.Data + lVar7 * 8) = local_28[0];
  local_28[0] = (undefined8 *)0x0;
  uVar6 = 0;
  if (param_2 < (this->Children).ArrayNum) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot>::Construct
            (*(TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot> **)
              ((this->Children).AllocatorInstance.Data + lVar7 * 8),(FChildren *)this,param_1);
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

// InsertSlot @ 1430d2ed0

void __thiscall
TPanelChildren<SResponsiveGridPanel::FSlot>::InsertSlot
          (TPanelChildren<SResponsiveGridPanel::FSlot> *this,FSlotArguments *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)param_1->_padding_;
  lVar7 = (longlong)param_2;
  param_1->_padding_ = 0;
  if (local_28[0] == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewSlot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x23c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
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
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Children).AllocatorInstance,piVar1);
  }
  (this->Children).ArrayNum = iVar5 + 1;
  pFVar2 = (this->Children).AllocatorInstance.Data + lVar7 * 8;
  memmove(pFVar2 + 8,pFVar2,(longlong)(iVar5 - param_2) << 3);
  *(undefined8 **)((this->Children).AllocatorInstance.Data + lVar7 * 8) = local_28[0];
  local_28[0] = (undefined8 *)0x0;
  uVar6 = 0;
  if (param_2 < (this->Children).ArrayNum) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  SResponsiveGridPanel::FSlot::Construct
            (*(FSlot **)((this->Children).AllocatorInstance.Data + lVar7 * 8),(FChildren *)this,
             param_1);
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

