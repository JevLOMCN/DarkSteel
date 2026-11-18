// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 22

// ~SAudioVectorscopePanelWidget @ 14d8c0e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioVectorscopePanelWidget::~SAudioVectorscopePanelWidget(SAudioVectorscopePanelWidget *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ScaleKnob).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DisplayPersistenceKnob).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ValueGridOverlayYAxis).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ValueGridOverlayXAxis).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SequenceVectorViewer).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackgroundBorder).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDisplayPersistenceValueChanged).field_0x8,
             *(int *)&(this->OnDisplayPersistenceValueChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnDisplayPersistenceValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDisplayPersistenceValueChanged);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// operator() @ 14d8c53d0

void __thiscall
`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_1>::operator()
          (void *this,float param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x318) != 0) {
    if (*(char *)(lVar1 + 0x350) == '\0') {
      *(undefined1 *)(lVar1 + 0x350) = 1;
    }
    lVar1 = *(longlong *)this;
    if (*(longlong *)(lVar1 + 0x318) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    plVar2 = *(longlong **)(lVar1 + 0x318);
    fVar5 = (float)(**(code **)(*plVar2 + 0x248))(plVar2,param_1);
    if (fVar5 != *(float *)(*(longlong *)this + 0x354)) {
      *(float *)(*(longlong *)this + 0x354) = fVar5;
      TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)
                 (*(longlong *)this + 0x2b0),*(float *)(*(longlong *)this + 0x354));
    }
  }
  return;
}

// operator() @ 14d8c5d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<SVerticalBox,1> * __thiscall
`SAudioVectorscopePanelWidget::CreateLayout'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<SVerticalBox,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SOverlay *this_00;
  longlong lVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  SVerticalBox *pSVar5;
  code *pcVar6;
  bool bVar7;
  FArguments *pFVar8;
  TSharedRef<SOverlay,1> *pTVar9;
  TSharedPtr<SVerticalBox,1> *pTVar10;
  FScopedWidgetSlotArguments *pFVar11;
  FArguments *pFVar12;
  TSharedRef<SVerticalBox,1> *pTVar13;
  FSlot *this_01;
  undefined1 auStackY_8d8 [32];
  T0RequiredArgs local_8a8;
  T0RequiredArgs local_8a7 [3];
  FLLMScope local_8a4;
  FLLMScope local_8a0 [2];
  longlong local_898;
  FSharedReferencer<1> local_890;
  longlong local_888;
  FSharedReferencer<1> local_880;
  longlong local_878;
  FSharedReferencer<1> local_870;
  longlong local_868;
  FSharedReferencer<1> local_860;
  undefined8 local_858;
  FSharedReferencer<1> local_850;
  FName local_848;
  FMemScope local_840;
  FName local_838;
  FMemScope local_830;
  FSlot *local_828;
  TSharedRef<SOverlay,1> local_820;
  TSharedRef<SVerticalBox,1> local_810;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_800;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_7e8;
  undefined1 local_7d0 [16];
  SOverlay *local_7c0;
  FSharedReferencer<1> local_7b8 [27];
  TPanelChildren<SBoxPanel::FSlot> *local_6e0;
  int local_6d8;
  FArguments local_6d0;
  FArguments local_4c8;
  FScopedWidgetSlotArguments local_2b8;
  FScopedWidgetSlotArguments local_218;
  FScopedWidgetSlotArguments local_178;
  FScopedWidgetSlotArguments local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_8d8;
  pFVar8 = SOverlay::FArguments::FArguments(&local_6d0);
  FLLMScope::FLLMScope(&local_8a4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_848 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_840,&local_848,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_800,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioVectorscopePanelWidget.cpp"
             ,0x40,&local_8a8);
  FMemScope::~FMemScope(&local_840);
  FLLMScope::~FLLMScope(&local_8a4);
  pTVar9 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_800,&local_820,pFVar8);
  pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
  this_00 = pTVar9->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_820.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_800._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_6d0._Slots.AllocatorInstance.Data,local_6d0._Slots.ArrayNum);
  if ((FSlotArguments *)local_6d0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_6d0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_6d0);
  if (this_00 == (SOverlay *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedPtr<SVerticalBox,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pFVar11 = SOverlay::AddSlot(this_00,&local_2b8,-1);
  lVar2 = *(longlong *)this;
  if (*(longlong *)(lVar2 + 0x2d8) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedPtr<SVerticalBox,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  lVar3 = *(longlong *)(lVar2 + 0x2d8);
  pTVar4 = *(TReferenceControllerBase<1> **)(lVar2 + 0x2e0);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar3 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedPtr<SVerticalBox,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_898 = lVar3;
  local_890.ReferenceController = pTVar4;
  if (&pFVar11->_padding_ != &local_898) {
    pFVar11->_padding_ = lVar3;
    local_898 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar11->_padding_,&local_890);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_890.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_2b8);
  if (*(char *)(*(longlong *)this + 0x378) == '\0') {
    if (this_00 == (SOverlay *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TSharedPtr<SVerticalBox,1> *)(*pcVar6)();
        return pTVar10;
      }
    }
    pFVar11 = SOverlay::AddSlot(this_00,&local_218,-1);
    lVar2 = *(longlong *)this;
    if (*(longlong *)(lVar2 + 0x2f8) == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TSharedPtr<SVerticalBox,1> *)(*pcVar6)();
        return pTVar10;
      }
    }
    lVar3 = *(longlong *)(lVar2 + 0x2f8);
    pTVar4 = *(TReferenceControllerBase<1> **)(lVar2 + 0x300);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar3 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TSharedPtr<SVerticalBox,1> *)(*pcVar6)();
        return pTVar10;
      }
    }
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_888 = lVar3;
    local_880.ReferenceController = pTVar4;
    if (&pFVar11->_padding_ != &local_888) {
      pFVar11->_padding_ = lVar3;
      local_888 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar11->_padding_,&local_880);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_880.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_218);
    if (this_00 == (SOverlay *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TSharedPtr<SVerticalBox,1> *)(*pcVar6)();
        return pTVar10;
      }
    }
    pFVar11 = SOverlay::AddSlot(this_00,&local_178,-1);
    lVar2 = *(longlong *)this;
    if (*(longlong *)(lVar2 + 0x308) == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TSharedPtr<SVerticalBox,1> *)(*pcVar6)();
        return pTVar10;
      }
    }
    lVar3 = *(longlong *)(lVar2 + 0x308);
    pTVar4 = *(TReferenceControllerBase<1> **)(lVar2 + 0x310);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar3 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TSharedPtr<SVerticalBox,1> *)(*pcVar6)();
        return pTVar10;
      }
    }
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_878 = lVar3;
    local_870.ReferenceController = pTVar4;
    if (&pFVar11->_padding_ != &local_878) {
      pFVar11->_padding_ = lVar3;
      local_878 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar11->_padding_,&local_870);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_870.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_178);
  }
  if (this_00 == (SOverlay *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedPtr<SVerticalBox,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pFVar11 = SOverlay::AddSlot(this_00,&local_d8,-1);
  lVar2 = *(longlong *)this;
  if (*(longlong *)(lVar2 + 0x2e8) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedPtr<SVerticalBox,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  lVar3 = *(longlong *)(lVar2 + 0x2e8);
  pTVar4 = *(TReferenceControllerBase<1> **)(lVar2 + 0x2f0);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar3 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedPtr<SVerticalBox,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_868 = lVar3;
  local_860.ReferenceController = pTVar4;
  if (&pFVar11->_padding_ != &local_868) {
    pFVar11->_padding_ = lVar3;
    local_868 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar11->_padding_,&local_860);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_860.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_d8);
  pFVar12 = SVerticalBox::FArguments::FArguments(&local_4c8);
  FLLMScope::FLLMScope(local_8a0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_838 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_830,&local_838,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_7e8,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioVectorscopePanelWidget.cpp"
             ,0x59,local_8a7);
  FMemScope::~FMemScope(&local_830);
  FLLMScope::~FLLMScope(local_8a0);
  pTVar13 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_7e8,&local_810,pFVar12);
  __return_storage_ptr__->Object = pTVar13->Object;
  pTVar4 = (pTVar13->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_810.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7e8._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_4c8._Slots.AllocatorInstance.Data,local_4c8._Slots.ArrayNum);
  if ((FSlotArguments *)local_4c8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_4c8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_4c8);
  if (__return_storage_ptr__->Object == (SVerticalBox *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedPtr<SVerticalBox,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pSVar5 = __return_storage_ptr__->Object;
  this_01 = ::operator_new(0x58);
  local_828 = (FSlot *)0x0;
  if (this_01 != (FSlot *)0x0) {
    *(undefined8 *)this_01 = 0;
    *(undefined8 *)&this_01->field_0x8 = 0;
    *(undefined8 *)&this_01->field_0x10 = 0;
    *(undefined8 *)&this_01->field_0x18 = 0;
    *(undefined8 *)&this_01->field_0x20 = 0;
    *(undefined8 *)&this_01->field_0x28 = 0;
    *(undefined8 *)&this_01->field_0x30 = 0;
    *(undefined8 *)&this_01->field_0x38 = 0;
    *(undefined8 *)&this_01->field_0x40 = 0;
    *(undefined8 *)&this_01->field_0x48 = 0;
    *(undefined8 *)&this_01->field_0x50 = 0;
    local_828 = SVerticalBox::FSlot::FSlot(this_01);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)(local_7d0 + 8),(FSlot *)&local_828);
  local_6d8 = -1;
  local_7d0._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  local_6e0 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar5->field_0x218;
  if (this_00 == (SOverlay *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedPtr<SVerticalBox,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (SOverlay *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedPtr<SVerticalBox,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_858 = 0;
  local_850.ReferenceController = pTVar1;
  local_7c0 = this_00;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_7b8,&local_850);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_850.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>
            ((FScopedWidgetSlotArguments<SVerticalBox::FSlot> *)local_7d0);
  if (__return_storage_ptr__->Object == (SVerticalBox *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TSharedPtr<SVerticalBox,1> *)(*pcVar6)();
      return pTVar10;
    }
  }
  SWidget::SetClipping((SWidget *)__return_storage_ptr__->Object,ClipToBounds);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// operator() @ 14d8c65d0

void __thiscall
`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_1>::operator()
          (void *this,float param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x328) != 0) {
    if (*(char *)(lVar1 + 0x350) == '\0') {
      *(undefined1 *)(lVar1 + 0x350) = 1;
    }
    lVar1 = *(longlong *)this;
    if ((*(longlong *)(lVar1 + 0x328) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar2 = *(longlong **)(lVar1 + 0x328);
    fVar5 = (float)(**(code **)(*plVar2 + 0x248))(plVar2,param_1);
    if (fVar5 != *(float *)(*(longlong *)this + 0x358)) {
      *(float *)(*(longlong *)this + 0x358) = fVar5;
      lVar1 = *(longlong *)this;
      if ((*(longlong *)(lVar1 + 0x2e8) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)(*(longlong *)(lVar1 + 0x2e8) + 0x270) =
           *(undefined4 *)(*(longlong *)this + 0x358);
    }
  }
  return;
}

// operator() @ 14d8cc480

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SVerticalBox,1> * __thiscall
`SAudioVectorscopePanelWidget::CreateLayout'::__l5::<lambda_2>::operator()
          (void *this,TSharedPtr<SVerticalBox,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  FArguments *pFVar9;
  TSharedRef<SVerticalBox,1> *pTVar10;
  TSharedPtr<SVerticalBox,1> *pTVar11;
  FSlot *pFVar12;
  FSlotArguments *pFVar13;
  FSlot *pFVar14;
  FSlotArguments *pFVar15;
  FArguments *pFVar16;
  FText *pFVar17;
  TSharedRef<STextBlock,1> *pTVar18;
  TSharedRef<SAudioRadialSlider,1> *pTVar19;
  SVerticalBox *pSVar20;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> *pFVar21;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_1df8;
  T0RequiredArgs local_1df7;
  T0RequiredArgs local_1df6 [2];
  FLLMScope local_1df4;
  FLLMScope local_1df0;
  FLLMScope local_1dec;
  FLLMScope local_1de8;
  FLLMScope local_1de4;
  FLLMScope local_1de0 [2];
  undefined4 local_1dd8;
  undefined1 local_1dd4;
  undefined1 local_1dd0 [8];
  ForAnyElementType FStack_1dc8;
  ulonglong local_1dc0;
  undefined4 local_1db8;
  undefined1 local_1db4;
  undefined1 local_1db0 [8];
  ForAnyElementType FStack_1da8;
  ulonglong local_1da0;
  STextBlock *local_1d98;
  FSharedReferencer<1> local_1d90;
  STextBlock *local_1d88;
  FSharedReferencer<1> local_1d80;
  longlong local_1d78;
  FSharedReferencer<1> local_1d70;
  SVerticalBox *local_1d68;
  FSharedReferencer<1> local_1d60;
  SAudioRadialSlider *local_1d58;
  FSharedReferencer<1> local_1d50;
  SVerticalBox *local_1d48;
  FSharedReferencer<1> local_1d40;
  SVerticalBox *local_1d38;
  FSharedReferencer<1> local_1d30;
  FText local_1d28;
  bool local_1d18;
  undefined1 local_1d10 [8];
  ForAnyElementType FStack_1d08;
  ulonglong local_1d00;
  FText local_1cf8;
  bool local_1ce8;
  undefined1 local_1ce0 [8];
  ForAnyElementType FStack_1cd8;
  ulonglong local_1cd0;
  FName local_1cc8;
  FMemScope local_1cc0;
  FSlot *local_1cb8;
  FName local_1cb0;
  FSlot *local_1ca8;
  FName local_1ca0;
  FMemScope local_1c98;
  FName local_1c90;
  FMemScope local_1c88;
  FSlot *local_1c80;
  FMemScope local_1c78;
  FSlot *local_1c70;
  FName local_1c68;
  FMemScope local_1c60;
  FSlot *local_1c58;
  FName local_1c50;
  FMemScope local_1c48;
  FSlot *local_1c40;
  TAttribute<float> local_1c38;
  TAttribute<float> local_1c18;
  TAttribute<float> local_1bf8;
  TAttribute<float> local_1bd8;
  TAttribute<float> local_1bb8;
  TAttribute<float> local_1b98;
  TAttribute<float> local_1b78;
  FDestructionSentinel local_1b58;
  FDestructionSentinel local_1b40;
  FDestructionSentinel local_1b28;
  FDestructionSentinel local_1b10;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1af8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1ae0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1ac8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1ab0;
  TSharedRef<SVerticalBox,1> local_1a98;
  TSharedRef<SAudioRadialSlider,1> local_1a88;
  TSharedRef<STextBlock,1> local_1a78;
  FText local_1a68;
  TSharedRef<SVerticalBox,1> local_1a58;
  TSharedRef<SVerticalBox,1> local_1a48;
  TSharedRef<SVerticalBox,1> local_1a38;
  TSharedRef<STextBlock,1> local_1a28;
  FText local_1a18;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1a08;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_19f0;
  undefined8 *local_19d8 [2];
  TReferenceControllerBase<1> *local_19c8;
  undefined1 local_19a8 [40];
  FSlotArgumentsMixin local_1980;
  undefined8 *local_18f0 [2];
  TReferenceControllerBase<1> *local_18e0;
  undefined1 local_18c0 [40];
  FSlotArgumentsMixin local_1898;
  undefined8 *local_1808 [2];
  TReferenceControllerBase<1> *local_17f8;
  undefined1 local_17d8 [40];
  FSlotArgumentsMixin local_17b0;
  undefined8 *local_1720 [2];
  TReferenceControllerBase<1> *local_1710;
  undefined1 local_16f0 [40];
  FSlotArgumentsMixin local_16c8;
  undefined1 local_1638 [240];
  TPanelChildren<SBoxPanel::FSlot> *local_1548;
  int local_1540;
  undefined1 local_1538 [240];
  TPanelChildren<SBoxPanel::FSlot> *local_1448;
  int local_1440;
  FArguments local_1438;
  FArguments local_1230;
  FArguments local_1028;
  FArguments local_e20;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_c18;
  FArguments local_b18;
  FArguments local_5c0;
  undefined8 uStack_48;
  
  uStack_48 = 0x14d8cc4a3;
  pFVar9 = SVerticalBox::FArguments::FArguments(&local_1438);
  FLLMScope::FLLMScope(&local_1df4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1c90 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1c88,&local_1c90,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_1a08,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioVectorscopePanelWidget.cpp"
             ,0x6a,local_res10);
  FMemScope::~FMemScope(&local_1c88);
  FLLMScope::~FLLMScope(&local_1df4);
  pTVar10 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1a08,&local_1a48,pFVar9);
  __return_storage_ptr__->Object = pTVar10->Object;
  pTVar1 = (pTVar10->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a08._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1438._Slots.AllocatorInstance.Data,local_1438._Slots.ArrayNum);
  if ((FSlotArguments *)local_1438._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1438._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1438);
  if ((__return_storage_ptr__->Object == (SVerticalBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedPtr<SVerticalBox,1> *)(*pcVar6)();
    return pTVar11;
  }
  pSVar20 = __return_storage_ptr__->Object;
  pFVar12 = ::operator_new(0x58);
  pFVar14 = (FSlot *)0x0;
  local_1c80 = pFVar14;
  if (pFVar12 != (FSlot *)0x0) {
    *(undefined8 *)pFVar12 = 0;
    *(undefined8 *)&pFVar12->field_0x8 = 0;
    *(undefined8 *)&pFVar12->field_0x10 = 0;
    *(undefined8 *)&pFVar12->field_0x18 = 0;
    *(undefined8 *)&pFVar12->field_0x20 = 0;
    *(undefined8 *)&pFVar12->field_0x28 = 0;
    *(undefined8 *)&pFVar12->field_0x30 = 0;
    *(undefined8 *)&pFVar12->field_0x38 = 0;
    *(undefined8 *)&pFVar12->field_0x40 = 0;
    *(undefined8 *)&pFVar12->field_0x48 = 0;
    *(undefined8 *)&pFVar12->field_0x50 = 0;
    local_1c80 = SVerticalBox::FSlot::FSlot(pFVar12);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)(local_1638 + 8),(FSlot *)&local_1c80);
  local_1540 = -1;
  local_1638._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  local_1548 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar20->field_0x218;
  local_1c38.Value = 0.2;
  local_1c38.bIsSet = true;
  local_1c38.Getter._16_8_ = 0;
  local_1c38.Getter._0_8_ = 0;
  local_1c38.Getter._8_8_ = 0;
  pFVar13 = SVerticalBox::FSlot::FSlotArguments::FillHeight
                      ((FSlotArguments *)(local_1638 + 8),&local_1c38);
  fVar7 = __real_40a00000;
  pFVar13 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar13->field_0x18,0.0,0.0,0.0,__real_40a00000);
  pFVar9 = SVerticalBox::FArguments::FArguments(&local_1230);
  pFVar12 = ::operator_new(0x58);
  if (pFVar12 != (FSlot *)0x0) {
    *(undefined8 *)pFVar12 = 0;
    *(undefined8 *)&pFVar12->field_0x8 = 0;
    *(undefined8 *)&pFVar12->field_0x10 = 0;
    *(undefined8 *)&pFVar12->field_0x18 = 0;
    *(undefined8 *)&pFVar12->field_0x20 = 0;
    *(undefined8 *)&pFVar12->field_0x28 = 0;
    *(undefined8 *)&pFVar12->field_0x30 = 0;
    *(undefined8 *)&pFVar12->field_0x38 = 0;
    *(undefined8 *)&pFVar12->field_0x40 = 0;
    *(undefined8 *)&pFVar12->field_0x48 = 0;
    *(undefined8 *)&pFVar12->field_0x50 = 0;
    pFVar14 = SVerticalBox::FSlot::FSlot(pFVar12);
  }
  local_1c70 = pFVar14;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_18f0,(FSlot *)&local_1c70);
  local_1c18.Value = 0.2;
  local_1c18.Getter._16_8_ = 0;
  local_1c18.bIsSet = true;
  local_1c18.Getter._0_8_ = 0;
  local_1c18.Getter._8_8_ = 0;
  pFVar15 = SVerticalBox::FSlot::FSlotArguments::FillHeight
                      ((FSlotArguments *)local_18f0,&local_1c18);
  pFVar16 = STextBlock::FArguments::FArguments(&local_b18);
  pFVar17 = FText::AsLocalizable_Advanced_LocText
                      (&local_1a18,L"SAudioVectorscopePanelWidget",
                       L"Vectorscope_DisplayPersistence_Display_Label",L"Persistence");
  FText::FText(&local_1cf8,pFVar17);
  local_1ce8 = true;
  local_1cd0 = 0;
  local_1ce0 = (undefined1  [8])0x0;
  FStack_1cd8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar16->_Text).Value,&local_1cf8);
  (pFVar16->_Text).bIsSet = local_1ce8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ce0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1ce0,
             (FWriteAccessScope *)&local_1b40);
  if (((int)local_1cd0 != 0) && (FStack_1cd8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1cd8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1cd8,0,0,0x10);
    local_1cd0 = local_1cd0 & 0xffffffff00000000;
  }
  if (local_1b40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b40.Accessor,&local_1b40);
  }
  if (FStack_1cd8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1cd8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1ce0);
  if (local_1cf8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1cf8.TextData.Reference + 0x10))();
  }
  local_1dd4 = 1;
  local_1dd8 = 1;
  local_1dc0 = 0;
  local_1dd0 = (undefined1  [8])0x0;
  FStack_1dc8.Data = (FScriptContainerElement *)0x0;
  (pFVar16->_Justification).Value = Center;
  (pFVar16->_Justification).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_Justification).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1dd0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1dd0,
             (FWriteAccessScope *)&local_1b58);
  if (((int)local_1dc0 != 0) && (FStack_1dc8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1dc8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1dc8,0,0,0x10);
    local_1dc0 = local_1dc0 & 0xffffffff00000000;
  }
  if (local_1b58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b58.Accessor,&local_1b58);
  }
  if (FStack_1dc8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1dc8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1dd0);
  FLLMScope::FLLMScope(&local_1df0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1c68 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1c60,&local_1c68,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1af8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioVectorscopePanelWidget.cpp"
             ,0x75,local_res18);
  FMemScope::~FMemScope(&local_1c60);
  FLLMScope::~FLLMScope(&local_1df0);
  pTVar18 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1af8,&local_1a28,pFVar16);
  pTVar1 = (pTVar18->SharedReferenceCount).ReferenceController;
  local_1d88 = pTVar18->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1d80.ReferenceController = pTVar1;
  if ((STextBlock **)&pFVar15->field_0x8 != &local_1d88) {
    *(STextBlock **)&pFVar15->field_0x8 = local_1d88;
    local_1d88 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->field_0x10,&local_1d80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d80.ReferenceController);
  pFVar9 = SVerticalBox::FArguments::operator+(pFVar9,pFVar15);
  pFVar12 = ::operator_new(0x58);
  local_1c58 = (FSlot *)0x0;
  if (pFVar12 != (FSlot *)0x0) {
    *(undefined8 *)pFVar12 = 0;
    *(undefined8 *)&pFVar12->field_0x8 = 0;
    *(undefined8 *)&pFVar12->field_0x10 = 0;
    *(undefined8 *)&pFVar12->field_0x18 = 0;
    *(undefined8 *)&pFVar12->field_0x20 = 0;
    *(undefined8 *)&pFVar12->field_0x28 = 0;
    *(undefined8 *)&pFVar12->field_0x30 = 0;
    *(undefined8 *)&pFVar12->field_0x38 = 0;
    *(undefined8 *)&pFVar12->field_0x40 = 0;
    *(undefined8 *)&pFVar12->field_0x48 = 0;
    *(undefined8 *)&pFVar12->field_0x50 = 0;
    local_1c58 = SVerticalBox::FSlot::FSlot(pFVar12);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_19d8,(FSlot *)&local_1c58);
  local_1bf8.Value = 0.8;
  local_1bf8.Getter._16_8_ = 0;
  local_1bf8.bIsSet = true;
  local_1bf8.Getter._0_8_ = 0;
  local_1bf8.Getter._8_8_ = 0;
  pFVar15 = SVerticalBox::FSlot::FSlotArguments::FillHeight
                      ((FSlotArguments *)local_19d8,&local_1bf8);
  lVar2 = *(longlong *)this;
  if ((*(longlong *)(lVar2 + 0x318) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedPtr<SVerticalBox,1> *)(*pcVar6)();
    return pTVar11;
  }
  lVar3 = *(longlong *)(lVar2 + 0x318);
  pTVar4 = *(TReferenceControllerBase<1> **)(lVar2 + 800);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar3 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedPtr<SVerticalBox,1> *)(*pcVar6)();
    return pTVar11;
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1d78 = lVar3;
  local_1d70.ReferenceController = pTVar4;
  if ((longlong *)&pFVar15->field_0x8 != &local_1d78) {
    *(longlong *)&pFVar15->field_0x8 = lVar3;
    local_1d78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->field_0x10,&local_1d70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d70.ReferenceController);
  pFVar9 = SVerticalBox::FArguments::operator+(pFVar9,pFVar15);
  FLLMScope::FLLMScope(&local_1dec,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1c50 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1c48,&local_1c50,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_19f0,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioVectorscopePanelWidget.cpp"
             ,0x71,local_res20);
  FMemScope::~FMemScope(&local_1c48);
  FLLMScope::~FLLMScope(&local_1dec);
  pTVar10 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_19f0,&local_1a38,pFVar9);
  pTVar5 = (pTVar10->SharedReferenceCount).ReferenceController;
  local_1d68 = pTVar10->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1d60.ReferenceController = pTVar5;
  if ((SVerticalBox **)&pFVar13->field_0x8 != &local_1d68) {
    *(SVerticalBox **)&pFVar13->field_0x8 = local_1d68;
    local_1d68 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar13->field_0x10,&local_1d60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d60.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_19f0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1980);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_19a8);
  if ((void *)local_19a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_19a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_19a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_19c8);
  if (local_19d8[0] != (undefined8 *)0x0) {
    (**(code **)*local_19d8[0])(local_19d8[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1af8._Widget.SharedReferenceCount.ReferenceController);
  if (local_1a18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a18.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_b18);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1898);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_18c0);
  if ((void *)local_18c0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_18c0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_18c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18e0);
  if (local_18f0[0] != (undefined8 *)0x0) {
    (**(code **)*local_18f0[0])(local_18f0[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1230._Slots.AllocatorInstance.Data,local_1230._Slots.ArrayNum);
  if ((FSlotArguments *)local_1230._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1230._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1230);
  SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>
            ((FScopedWidgetSlotArguments<SVerticalBox::FSlot> *)local_1638);
  if ((__return_storage_ptr__->Object == (SVerticalBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TSharedPtr<SVerticalBox,1> *)(*pcVar6)();
    return pTVar11;
  }
  pSVar20 = __return_storage_ptr__->Object;
  pFVar12 = ::operator_new(0x58);
  if (pFVar12 == (FSlot *)0x0) {
    local_1ca8 = (FSlot *)0x0;
  }
  else {
    *(undefined8 *)pFVar12 = 0;
    *(undefined8 *)&pFVar12->field_0x8 = 0;
    *(undefined8 *)&pFVar12->field_0x10 = 0;
    *(undefined8 *)&pFVar12->field_0x18 = 0;
    *(undefined8 *)&pFVar12->field_0x20 = 0;
    *(undefined8 *)&pFVar12->field_0x28 = 0;
    *(undefined8 *)&pFVar12->field_0x30 = 0;
    *(undefined8 *)&pFVar12->field_0x38 = 0;
    *(undefined8 *)&pFVar12->field_0x40 = 0;
    *(undefined8 *)&pFVar12->field_0x48 = 0;
    *(undefined8 *)&pFVar12->field_0x50 = 0;
    local_1ca8 = SVerticalBox::FSlot::FSlot(pFVar12);
  }
  pFVar14 = (FSlot *)0x0;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)(local_1538 + 8),(FSlot *)&local_1ca8);
  local_1440 = -1;
  local_1538._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  local_1448 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar20->field_0x218;
  local_1bd8.Value = 0.2;
  local_1bd8.bIsSet = true;
  local_1bd8.Getter._16_8_ = 0;
  local_1bd8.Getter._0_8_ = 0;
  local_1bd8.Getter._8_8_ = 0;
  pFVar13 = SVerticalBox::FSlot::FSlotArguments::FillHeight
                      ((FSlotArguments *)(local_1538 + 8),&local_1bd8);
  pFVar13 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar13->field_0x18,0.0,0.0,0.0,fVar7);
  pFVar9 = SVerticalBox::FArguments::FArguments(&local_1028);
  pFVar12 = ::operator_new(0x58);
  if (pFVar12 != (FSlot *)0x0) {
    *(undefined8 *)pFVar12 = 0;
    *(undefined8 *)&pFVar12->field_0x8 = 0;
    *(undefined8 *)&pFVar12->field_0x10 = 0;
    *(undefined8 *)&pFVar12->field_0x18 = 0;
    *(undefined8 *)&pFVar12->field_0x20 = 0;
    *(undefined8 *)&pFVar12->field_0x28 = 0;
    *(undefined8 *)&pFVar12->field_0x30 = 0;
    *(undefined8 *)&pFVar12->field_0x38 = 0;
    *(undefined8 *)&pFVar12->field_0x40 = 0;
    *(undefined8 *)&pFVar12->field_0x48 = 0;
    *(undefined8 *)&pFVar12->field_0x50 = 0;
    pFVar14 = SVerticalBox::FSlot::FSlot(pFVar12);
  }
  local_1c40 = pFVar14;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1720,(FSlot *)&local_1c40);
  local_1bb8.Value = 0.2;
  local_1bb8.Getter._16_8_ = 0;
  local_1bb8.bIsSet = true;
  local_1bb8.Getter._0_8_ = 0;
  local_1bb8.Getter._8_8_ = 0;
  pFVar15 = SVerticalBox::FSlot::FSlotArguments::FillHeight
                      ((FSlotArguments *)local_1720,&local_1bb8);
  pFVar16 = STextBlock::FArguments::FArguments(&local_5c0);
  pFVar17 = FText::AsLocalizable_Advanced_LocText
                      (&local_1a68,L"SAudioVectorscopePanelWidget",
                       L"Vectorscope_Scale_Display_Label",L"Scale");
  FText::FText(&local_1d28,pFVar17);
  local_1d18 = true;
  local_1d00 = 0;
  local_1d10 = (undefined1  [8])0x0;
  FStack_1d08.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar16->_Text).Value,&local_1d28);
  (pFVar16->_Text).bIsSet = local_1d18;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d10,
             (FWriteAccessScope *)&local_1b10);
  if (((int)local_1d00 != 0) && (FStack_1d08.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1d08.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1d08,0,0,0x10);
    local_1d00 = local_1d00 & 0xffffffff00000000;
  }
  if (local_1b10.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b10.Accessor,&local_1b10);
  }
  if (FStack_1d08.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1d08.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d10);
  if (local_1d28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1d28.TextData.Reference + 0x10))();
  }
  local_1db4 = 1;
  local_1db8 = 1;
  local_1da0 = 0;
  local_1db0 = (undefined1  [8])0x0;
  FStack_1da8.Data = (FScriptContainerElement *)0x0;
  (pFVar16->_Justification).Value = Center;
  (pFVar16->_Justification).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_Justification).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1db0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1db0,
             (FWriteAccessScope *)&local_1b28);
  if (((int)local_1da0 != 0) && (FStack_1da8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1da8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1da8,0,0,0x10);
    local_1da0 = local_1da0 & 0xffffffff00000000;
  }
  if (local_1b28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b28.Accessor,&local_1b28);
  }
  if (FStack_1da8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1da8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1db0);
  FLLMScope::FLLMScope(&local_1de8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1cc8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1cc0,&local_1cc8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1ac8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioVectorscopePanelWidget.cpp"
             ,0x89,&local_1df8);
  FMemScope::~FMemScope(&local_1cc0);
  FLLMScope::~FLLMScope(&local_1de8);
  pTVar18 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1ac8,&local_1a78,pFVar16);
  pTVar1 = (pTVar18->SharedReferenceCount).ReferenceController;
  local_1d98 = pTVar18->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1d90.ReferenceController = pTVar1;
  if ((STextBlock **)&pFVar15->field_0x8 != &local_1d98) {
    *(STextBlock **)&pFVar15->field_0x8 = local_1d98;
    local_1d98 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->field_0x10,&local_1d90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d90.ReferenceController);
  pFVar9 = SVerticalBox::FArguments::operator+(pFVar9,pFVar15);
  pFVar12 = ::operator_new(0x58);
  if (pFVar12 == (FSlot *)0x0) {
    local_1cb8 = (FSlot *)0x0;
  }
  else {
    *(undefined8 *)pFVar12 = 0;
    *(undefined8 *)&pFVar12->field_0x8 = 0;
    *(undefined8 *)&pFVar12->field_0x10 = 0;
    *(undefined8 *)&pFVar12->field_0x18 = 0;
    *(undefined8 *)&pFVar12->field_0x20 = 0;
    *(undefined8 *)&pFVar12->field_0x28 = 0;
    *(undefined8 *)&pFVar12->field_0x30 = 0;
    *(undefined8 *)&pFVar12->field_0x38 = 0;
    *(undefined8 *)&pFVar12->field_0x40 = 0;
    *(undefined8 *)&pFVar12->field_0x48 = 0;
    *(undefined8 *)&pFVar12->field_0x50 = 0;
    local_1cb8 = SVerticalBox::FSlot::FSlot(pFVar12);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1808,(FSlot *)&local_1cb8);
  local_1b98.Value = 0.8;
  local_1b98.Getter._16_8_ = 0;
  local_1b98.bIsSet = true;
  local_1b98.Getter._0_8_ = 0;
  local_1b98.Getter._8_8_ = 0;
  pFVar15 = SVerticalBox::FSlot::FSlotArguments::FillHeight
                      ((FSlotArguments *)local_1808,&local_1b98);
  pTVar19 = TSharedPtr<SAudioRadialSlider,1>::ToSharedRef
                      ((TSharedPtr<SAudioRadialSlider,1> *)(*(longlong *)this + 0x328),&local_1a88);
  pTVar4 = (pTVar19->SharedReferenceCount).ReferenceController;
  local_1d58 = pTVar19->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1d50.ReferenceController = pTVar4;
  if ((SAudioRadialSlider **)&pFVar15->field_0x8 != &local_1d58) {
    *(SAudioRadialSlider **)&pFVar15->field_0x8 = local_1d58;
    local_1d58 = (SAudioRadialSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->field_0x10,&local_1d50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d50.ReferenceController);
  pFVar9 = SVerticalBox::FArguments::operator+(pFVar9,pFVar15);
  FLLMScope::FLLMScope(&local_1de4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1cb0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1c78,&local_1cb0,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_1ae0,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioVectorscopePanelWidget.cpp"
             ,0x85,&local_1df7);
  FMemScope::~FMemScope(&local_1c78);
  FLLMScope::~FLLMScope(&local_1de4);
  pTVar10 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1ae0,&local_1a98,pFVar9);
  pTVar5 = (pTVar10->SharedReferenceCount).ReferenceController;
  local_1d48 = pTVar10->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1d40.ReferenceController = pTVar5;
  if ((SVerticalBox **)&pFVar13->field_0x8 != &local_1d48) {
    *(SVerticalBox **)&pFVar13->field_0x8 = local_1d48;
    local_1d48 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar13->field_0x10,&local_1d40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ae0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a88.SharedReferenceCount.ReferenceController);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_17b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_17d8);
  if ((void *)local_17d8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_17d8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_17d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_17f8);
  if (local_1808[0] != (undefined8 *)0x0) {
    (**(code **)*local_1808[0])(local_1808[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ac8._Widget.SharedReferenceCount.ReferenceController);
  if (local_1a68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a68.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_5c0);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_16c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_16f0);
  if ((void *)local_16f0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_16f0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_16f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1710);
  if (local_1720[0] != (undefined8 *)0x0) {
    (**(code **)*local_1720[0])(local_1720[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1028._Slots.AllocatorInstance.Data,local_1028._Slots.ArrayNum);
  if ((FSlotArguments *)local_1028._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1028._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1028);
  SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>
            ((FScopedWidgetSlotArguments<SVerticalBox::FSlot> *)local_1538);
  pSVar20 = TSharedPtr<SVerticalBox,1>::operator->(__return_storage_ptr__);
  pFVar21 = SVerticalBox::AddSlot(pSVar20,&local_c18);
  local_1b78.Value = 0.6;
  local_1b78.bIsSet = true;
  local_1b78.Getter._0_8_ = 0;
  local_1b78.Getter._8_8_ = 0;
  local_1b78.Getter._16_8_ = 0;
  pFVar13 = SVerticalBox::FSlot::FSlotArguments::FillHeight
                      ((FSlotArguments *)&pFVar21->_padding_,&local_1b78);
  pFVar9 = SVerticalBox::FArguments::FArguments(&local_e20);
  FLLMScope::FLLMScope(local_1de0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1ca0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1c98,&local_1ca0,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_1ab0,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioVectorscopePanelWidget.cpp"
             ,0x97,local_1df6);
  FMemScope::~FMemScope(&local_1c98);
  FLLMScope::~FLLMScope(local_1de0);
  pTVar10 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1ab0,&local_1a58,pFVar9);
  pTVar1 = (pTVar10->SharedReferenceCount).ReferenceController;
  local_1d38 = pTVar10->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1d30.ReferenceController = pTVar1;
  if ((SVerticalBox **)&pFVar13->field_0x8 != &local_1d38) {
    *(SVerticalBox **)&pFVar13->field_0x8 = local_1d38;
    local_1d38 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar13->field_0x10,&local_1d30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ab0._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_e20._Slots.AllocatorInstance.Data,local_e20._Slots.ArrayNum);
  if ((FSlotArguments *)local_e20._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_e20._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_e20);
  SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_c18);
  return __return_storage_ptr__;
}

// BuildWidget @ 14d8e4530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioVectorscopePanelWidget::BuildWidget
          (SAudioVectorscopePanelWidget *this,FFixedSampledSequenceView *param_1,
          EAudioPanelLayoutType param_2)

{
  FAudioVectorscopePanelStyle *pFVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  TSharedPtr<SSampledSequenceValueGridOverlay,1> *pTVar5;
  FArguments *pFVar6;
  TSharedRef<SFixedSampledSequenceVectorViewer,1> *pTVar7;
  FName local_res8;
  FMemScope local_res10;
  FLLMScope local_res18 [2];
  T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&> local_298;
  SFixedSampledSequenceVectorViewer *local_288;
  FSharedReferencer<1> local_280;
  TSharedRef<SFixedSampledSequenceVectorViewer,1> local_278;
  TSlateDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_>
  local_268;
  FArguments local_250;
  
  iVar2 = (param_1->SampleData).ArrayNum;
  uVar3 = *(undefined4 *)&(param_1->SampleData).field_0xc;
  (this->DataView).SampleData.DataPtr = (param_1->SampleData).DataPtr;
  (this->DataView).SampleData.ArrayNum = iVar2;
  *(undefined4 *)&(this->DataView).SampleData.field_0xc = uVar3;
  uVar4 = param_1->SampleRate;
  pFVar1 = this->PanelStyle;
  (this->DataView).NumDimensions = param_1->NumDimensions;
  (this->DataView).SampleRate = uVar4;
  this->PanelLayoutType = param_2;
  CreateBackground(this,&pFVar1->VectorViewerStyle);
  pTVar5 = CreateValueGridOverlay
                     (this,(TSharedPtr<SSampledSequenceValueGridOverlay,1> *)&local_298,
                      this->ValueGridMaxDivisionParameter,MidSplit,&this->PanelStyle->ValueGridStyle
                      ,Horizontal);
  if (&this->ValueGridOverlayXAxis != pTVar5) {
    (this->ValueGridOverlayXAxis).Object = pTVar5->Object;
    pTVar5->Object = (SSampledSequenceValueGridOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ValueGridOverlayXAxis).SharedReferenceCount,&pTVar5->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_298.Arg1);
  pTVar5 = CreateValueGridOverlay
                     (this,(TSharedPtr<SSampledSequenceValueGridOverlay,1> *)&local_298,
                      this->ValueGridMaxDivisionParameter,MidSplit,&this->PanelStyle->ValueGridStyle
                      ,Vertical);
  if (&this->ValueGridOverlayYAxis != pTVar5) {
    (this->ValueGridOverlayYAxis).Object = pTVar5->Object;
    pTVar5->Object = (SSampledSequenceValueGridOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ValueGridOverlayYAxis).SharedReferenceCount,&pTVar5->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_298.Arg1);
  pFVar1 = this->PanelStyle;
  pFVar6 = SFixedSampledSequenceVectorViewer::FArguments::FArguments(&local_250);
  local_298.Arg1 = &(this->DataView).NumDimensions;
  pFVar6->_Style = &pFVar1->VectorViewerStyle;
  (pFVar6->_SequenceDrawingParams).MaxDisplayedValue = 1.0;
  (pFVar6->_SequenceDrawingParams).DimensionSlotMargin = 2.0;
  (pFVar6->_SequenceDrawingParams).MaxSequenceHeightRatio = 0.95;
  (pFVar6->_SequenceDrawingParams).MinSequenceHeightRatio = 0.1;
  (pFVar6->_SequenceDrawingParams).MinScaledBinValue = 0.1;
  (pFVar6->_SequenceDrawingParams).VerticalZoomFactor = 1.0;
  (pFVar6->_SequenceDrawingParams).Orientation = Horizontal;
  local_298.Arg0 = &(this->DataView).SampleData;
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res10,&local_res8,true);
  TSlateDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_>
  ::
  TSlateDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_>
            (&local_268,"SFixedSampledSequenceVectorViewer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioVectorscopePanelWidget.cpp"
             ,0xd3,&local_298);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res18);
  pTVar7 = TSlateDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_>
           ::operator<<=(&local_268,&local_278,pFVar6);
  local_280.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
  local_288 = pTVar7->Object;
  if (local_280.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_280.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_280.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->SequenceVectorViewer != (TSharedPtr<SFixedSampledSequenceVectorViewer,1> *)&local_288)
  {
    (this->SequenceVectorViewer).Object = local_288;
    local_288 = (SFixedSampledSequenceVectorViewer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SequenceVectorViewer).SharedReferenceCount,&local_280);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_280.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_278.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_250);
  if (this->PanelLayoutType == Advanced) {
    CreateDisplayPersistenceKnob(this);
    CreateScaleKnob(this);
  }
  CreateLayout(this);
  return;
}

// Construct @ 14d8ee1c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioVectorscopePanelWidget::Construct
          (SAudioVectorscopePanelWidget *this,FArguments *param_1,FFixedSampledSequenceView *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  bool *pbVar3;
  
  this->ValueGridMaxDivisionParameter = param_1->_ValueGridMaxDivisionParameter;
  pbVar3 = TAttribute<bool>::Get(&param_1->_HideGrid);
  this->bHideValueGrid = *pbVar3;
  if (param_1->_PanelStyle == (FAudioVectorscopePanelStyle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InArgs._PanelStyle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioVectorscopePanelWidget.cpp"
                       ,0x1a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->PanelStyle = param_1->_PanelStyle;
  BuildWidget(this,param_2,param_1->_PanelLayoutType);
  return;
}

// CreateBackground @ 14d8f1be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioVectorscopePanelWidget::CreateBackground
          (SAudioVectorscopePanelWidget *this,FSampledSequenceVectorViewerStyle *param_1)

{
  FArguments *pFVar1;
  TSharedRef<SBorder,1> *pTVar2;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  FDestructionSentinel local_498;
  FSlateBrush *local_480;
  undefined1 local_478;
  undefined1 local_470 [8];
  ForAnyElementType FStack_468;
  ulonglong local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined4 local_448;
  undefined1 local_444;
  undefined1 local_440 [8];
  ForAnyElementType FStack_438;
  ulonglong local_430;
  SBorder *local_428;
  FSharedReferencer<1> local_420;
  TSharedRef<SBorder,1> local_418;
  FArguments local_408;
  
  pFVar1 = SBorder::FArguments::FArguments(&local_408);
  local_478 = 1;
  local_480 = &param_1->BackgroundBrush;
  local_470 = (undefined1  [8])0x0;
  FStack_468.Data = (FScriptContainerElement *)0x0;
  local_460 = 0;
  (pFVar1->_BorderImage).Value = local_480;
  (pFVar1->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar1->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_470);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_470,
             (FWriteAccessScope *)&local_498);
  if (((int)local_460 != 0) && (FStack_468.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_468.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_468,0,0,0x10);
    local_460 = local_460 & 0xffffffff00000000;
  }
  if (local_498.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_498.Accessor,&local_498);
  }
  if (FStack_468.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_468.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_470);
  local_448._0_1_ = (param_1->BackgroundColor).ColorUseRule;
  local_448._1_1_ = (param_1->BackgroundColor).ColorTableId;
  local_448._2_2_ = *(undefined2 *)&(param_1->BackgroundColor).field_0x12;
  local_458 = *(undefined8 *)&(param_1->BackgroundColor).SpecifiedColor.field0_0x0;
  uStack_450 = *(undefined8 *)((longlong)&(param_1->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  local_444 = 1;
  local_430 = 0;
  local_440 = (undefined1  [8])0x0;
  FStack_438.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar1->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 = local_458;
  *(undefined8 *)((longlong)&(pFVar1->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_450;
  (pFVar1->_BorderBackgroundColor).Value.ColorUseRule = (undefined1)local_448;
  (pFVar1->_BorderBackgroundColor).Value.ColorTableId = local_448._1_1_;
  *(undefined2 *)&(pFVar1->_BorderBackgroundColor).Value.field_0x12 = local_448._2_2_;
  (pFVar1->_BorderBackgroundColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar1->_BorderBackgroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_440);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_440,
             (FWriteAccessScope *)&local_498);
  if (((int)local_430 != 0) && (FStack_438.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_438.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_438,0,0,0x10);
    local_430 = local_430 & 0xffffffff00000000;
  }
  if (local_498.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_498.Accessor,&local_498);
  }
  if (FStack_438.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_438.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_440);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *)&local_498,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioVectorscopePanelWidget.cpp"
             ,0xb9,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar2 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     ((TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *)&local_498,&local_418,
                      pFVar1);
  local_420.ReferenceController = (pTVar2->SharedReferenceCount).ReferenceController;
  local_428 = pTVar2->Object;
  if (local_420.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_420.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_420.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->BackgroundBorder != (TSharedPtr<SBorder,1> *)&local_428) {
    (this->BackgroundBorder).Object = local_428;
    local_428 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->BackgroundBorder).SharedReferenceCount,&local_420);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_420.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_418.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_498.Accessor);
  SBorder::FArguments::~FArguments(&local_408);
  return;
}

// CreateDisplayPersistenceKnob @ 14d904df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob(SAudioVectorscopePanelWidget *this)

{
  TSharedPtr<SAudioRadialSlider,1> *pTVar1;
  SAudioRadialSlider *pSVar2;
  code *pcVar3;
  bool bVar4;
  FArguments *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TSharedRef<SAudioRadialSlider,1> *pTVar8;
  FText *pFVar9;
  undefined1 auStackY_568 [32];
  T0RequiredArgs local_538 [4];
  FLLMScope local_534;
  undefined4 local_530;
  undefined1 local_52c;
  undefined1 local_528 [8];
  ForAnyElementType FStack_520;
  ulonglong local_518;
  SAudioRadialSlider *local_510;
  FSharedReferencer<1> local_508;
  FName local_500;
  FMemScope local_4f8;
  FDestructionSentinel local_4f0;
  FDestructionSentinel local_4d8;
  undefined1 *local_4c0;
  FDestructionSentinel local_4b8;
  undefined1 *local_4a0;
  FDestructionSentinel local_498;
  undefined1 *local_480;
  TSharedRef<SAudioRadialSlider,1> local_478;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs> local_458;
  FText local_440;
  FArguments local_430;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_568;
  pFVar5 = SAudioRadialSlider::FArguments::FArguments(&local_430);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnMouseCaptureBegin
             ,(FWriteAccessScope *)&local_4d8);
  local_4c0 = &(pFVar5->_OnMouseCaptureBegin).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_4c0);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar6[3] = this;
  }
  if (local_4d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4d8.Accessor,&local_4d8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnMouseCaptureEnd,
             (FWriteAccessScope *)&local_4b8);
  local_4a0 = &(pFVar5->_OnMouseCaptureEnd).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_4a0);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar6[3] = this;
  }
  if (local_4b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4b8.Accessor,&local_4b8);
  }
  local_52c = 1;
  local_530 = 0;
  local_528 = (undefined1  [8])0x0;
  FStack_520.Data = (FScriptContainerElement *)0x0;
  local_518 = 0;
  (pFVar5->_SliderValue).Value = 0.0;
  (pFVar5->_SliderValue).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_SliderValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_528);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_528,
             (FWriteAccessScope *)&local_4f0);
  if (((int)local_518 != 0) && (FStack_520.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_520.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_520,0,0,0x10);
    local_518 = local_518 & 0xffffffff00000000;
  }
  if (local_4f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4f0.Accessor,&local_4f0);
  }
  if (FStack_520.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_520.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_528);
  FLLMScope::FLLMScope(&local_534,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_500 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4f8,&local_500,true);
  TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>
            (&local_458,"SAudioRadialSlider",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioVectorscopePanelWidget.cpp"
             ,0x113,local_538);
  FMemScope::~FMemScope(&local_4f8);
  FLLMScope::~FLLMScope(&local_534);
  pTVar8 = TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_458,&local_478,pFVar5);
  local_508.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
  local_510 = pTVar8->Object;
  if (local_508.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_508.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_508.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->DisplayPersistenceKnob;
  if (pTVar1 != (TSharedPtr<SAudioRadialSlider,1> *)&local_510) {
    pTVar1->Object = local_510;
    local_510 = (SAudioRadialSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DisplayPersistenceKnob).SharedReferenceCount,&local_508);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_508.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_478.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_458._Widget.SharedReferenceCount.ReferenceController);
  SAudioRadialSlider::FArguments::~FArguments(&local_430);
  if (pTVar1->Object == (SAudioRadialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_468 = *(undefined4 *)&(this->DisplayPersistenceKnobOutputRange).field0_0x0;
  uStack_464 = *(undefined4 *)((longlong)&(this->DisplayPersistenceKnobOutputRange).field0_0x0 + 4);
  uStack_460 = *(undefined4 *)((longlong)&(this->DisplayPersistenceKnobOutputRange).field0_0x0 + 8);
  uStack_45c = *(undefined4 *)
                ((longlong)&(this->DisplayPersistenceKnobOutputRange).field0_0x0 + 0xc);
  (**(code **)(pTVar1->Object->_padding_ + 0x260))(pTVar1->Object,&local_468);
  if (pTVar1->Object == (SAudioRadialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar2 = pTVar1->Object;
  pcVar3 = *(code **)(pSVar2->_padding_ + 0x270);
  pFVar9 = FText::FromString(&local_440,"ms");
  (*pcVar3)(pSVar2,pFVar9);
  if (pTVar1->Object == (SAudioRadialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar2 = pTVar1->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar2->OnValueChanged,
             (FWriteAccessScope *)&local_498);
  local_480 = &(pSVar2->OnValueChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_480);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar6[3] = this;
  }
  if (local_498.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_498.Accessor,&local_498);
  }
  return;
}

// CreateLayout @ 14d906720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioVectorscopePanelWidget::CreateLayout(SAudioVectorscopePanelWidget *this)

{
  SVerticalBox *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SHorizontalBox *pSVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FArguments *pFVar9;
  FSlotArguments *pFVar10;
  TSharedPtr<SVerticalBox,1> *pTVar11;
  TSharedRef<SHorizontalBox,1> *pTVar12;
  longlong *plVar13;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  SAudioVectorscopePanelWidget *local_res18;
  SAudioVectorscopePanelWidget *local_res20;
  SVerticalBox *local_518;
  FSharedReferencer<1> local_510;
  SVerticalBox *local_508;
  FSharedReferencer<1> local_500;
  SHorizontalBox *local_4f8;
  TReferenceControllerBase<1> *pTStack_4f0;
  FArguments *local_4e8;
  FName local_4e0;
  FMemScope local_4d8;
  TAttribute<float> local_4d0;
  TAttribute<float> local_4b0;
  TSharedRef<SHorizontalBox,1> local_490;
  TSharedPtr<SVerticalBox,1> local_480;
  TSharedPtr<SVerticalBox,1> local_470;
  longlong local_460;
  TReferenceControllerBase<1> *pTStack_458;
  TSharedPtr<SVerticalBox,1> local_450;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_440;
  undefined8 *local_428 [2];
  TReferenceControllerBase<1> *local_418;
  undefined1 local_3f8 [40];
  FSlotArgumentsMixin local_3d0;
  undefined8 *local_340 [2];
  TReferenceControllerBase<1> *local_330;
  undefined1 local_310 [40];
  FSlotArgumentsMixin local_2e8;
  FArguments local_258;
  
  local_res18 = this;
  if (this->PanelLayoutType != Advanced) {
    pTVar11 = `SAudioVectorscopePanelWidget::CreateLayout'::__l2::<lambda_1>::operator()
                        (&local_res18,&local_450);
    if (pTVar11->Object == (SVerticalBox *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pSVar1 = pTVar11->Object;
    pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
    (pTVar11->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar11->Object = (SVerticalBox *)0x0;
    if (pSVar1 == (SVerticalBox *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    plVar13 = &this->_padding_;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      FSlotBase::DetatchParentFromContent((FSlotBase *)plVar13);
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      FSlotBase::DetatchParentFromContent((FSlotBase *)plVar13);
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_460 = this->_padding_;
    pTStack_458 = (TReferenceControllerBase<1> *)this->_padding_;
    this->_padding_ = (longlong)pSVar1;
    this->_padding_ = (longlong)pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_458)
    ;
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar13);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_450.SharedReferenceCount.ReferenceController);
    return;
  }
  this->VectorscopeViewProportion = 0.9;
  local_res20 = this;
  pFVar9 = SHorizontalBox::FArguments::FArguments(&local_258);
  pFVar10 = SHorizontalBox::Slot((FSlotArguments *)local_340);
  local_4d0.Value = this->VectorscopeViewProportion;
  local_4d0.bIsSet = true;
  local_4d0.Getter._16_8_ = 0;
  local_4d0.Getter._0_8_ = 0;
  local_4d0.Getter._8_8_ = 0;
  pFVar10 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar10,&local_4d0);
  pTVar11 = `SAudioVectorscopePanelWidget::CreateLayout'::__l2::<lambda_1>::operator()
                      (&local_res18,&local_470);
  if (pTVar11->Object == (SVerticalBox *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pSVar1 = pTVar11->Object;
  pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
  (pTVar11->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar11->Object = (SVerticalBox *)0x0;
  if (pSVar1 == (SVerticalBox *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_518 = pSVar1;
  local_510.ReferenceController = pTVar2;
  if ((SVerticalBox **)&pFVar10->field_0x8 != &local_518) {
    *(SVerticalBox **)&pFVar10->field_0x8 = pSVar1;
    local_518 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar10->field_0x10,&local_510);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_510.ReferenceController);
  local_4e8 = SHorizontalBox::FArguments::operator+(pFVar9,pFVar10);
  pFVar10 = SHorizontalBox::Slot((FSlotArguments *)local_428);
  local_4b0.Value = __real_3f800000 - this->VectorscopeViewProportion;
  local_4b0.bIsSet = true;
  local_4b0.Getter._16_8_ = 0;
  local_4b0.Getter._0_8_ = 0;
  local_4b0.Getter._8_8_ = 0;
  pFVar10 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar10,&local_4b0);
  pTVar11 = `SAudioVectorscopePanelWidget::CreateLayout'::__l5::<lambda_2>::operator()
                      (&local_res20,&local_480);
  if (pTVar11->Object == (SVerticalBox *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pSVar1 = pTVar11->Object;
  pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
  (pTVar11->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar11->Object = (SVerticalBox *)0x0;
  if (pSVar1 == (SVerticalBox *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_508 = pSVar1;
  local_500.ReferenceController = pTVar3;
  if ((SVerticalBox **)&pFVar10->field_0x8 != &local_508) {
    *(SVerticalBox **)&pFVar10->field_0x8 = pSVar1;
    local_508 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar10->field_0x10,&local_500);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_500.ReferenceController);
  pFVar9 = SHorizontalBox::FArguments::operator+(local_4e8,pFVar10);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4d8,&local_4e0,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_440,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioVectorscopePanelWidget.cpp"
             ,0xa1,local_res8);
  FMemScope::~FMemScope(&local_4d8);
  FLLMScope::~FLLMScope(local_res10);
  pTVar12 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_440,&local_490,pFVar9);
  plVar13 = &this->_padding_;
  pTVar4 = (pTVar12->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar12->Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar13);
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar13);
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar5;
  this->_padding_ = (longlong)pTVar4;
  local_4f8 = pSVar5;
  pTStack_4f0 = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_490.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_440._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_480.SharedReferenceCount.ReferenceController);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_3d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f8);
  if ((void *)local_3f8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3f8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_418);
  if (local_428[0] != (undefined8 *)0x0) {
    (**(code **)*local_428[0])(local_428[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_470.SharedReferenceCount.ReferenceController);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_2e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_310);
  if ((void *)local_310._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_310._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_310);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_330);
  if (local_340[0] != (undefined8 *)0x0) {
    (**(code **)*local_340[0])(local_340[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_258._Slots.AllocatorInstance.Data,local_258._Slots.ArrayNum);
  if ((FSlotArguments *)local_258._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_258._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_258);
  return;
}

// CreateScaleKnob @ 14d909df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioVectorscopePanelWidget::CreateScaleKnob(SAudioVectorscopePanelWidget *this)

{
  TSharedPtr<SAudioRadialSlider,1> *pTVar1;
  SAudioRadialSlider *pSVar2;
  code *pcVar3;
  bool bVar4;
  FArguments *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TSharedRef<SAudioRadialSlider,1> *pTVar8;
  undefined1 auStackY_558 [32];
  T0RequiredArgs local_528 [4];
  FLLMScope local_524;
  float local_520;
  undefined1 local_51c;
  undefined1 local_518 [8];
  ForAnyElementType FStack_510;
  ulonglong local_508;
  SAudioRadialSlider *local_500;
  FSharedReferencer<1> local_4f8;
  FName local_4f0;
  FMemScope local_4e8;
  FDestructionSentinel local_4e0;
  FDestructionSentinel local_4c8;
  undefined1 *local_4b0;
  FDestructionSentinel local_4a8;
  undefined1 *local_490;
  FDestructionSentinel local_488;
  undefined1 *local_470;
  TSharedRef<SAudioRadialSlider,1> local_468;
  TVector2<double>_u_0 local_458;
  TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs> local_448;
  FArguments local_430;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_558;
  pFVar5 = SAudioRadialSlider::FArguments::FArguments(&local_430);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnMouseCaptureBegin
             ,(FWriteAccessScope *)&local_4c8);
  local_4b0 = &(pFVar5->_OnMouseCaptureBegin).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_4b0);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar6[3] = this;
  }
  if (local_4c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4c8.Accessor,&local_4c8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnMouseCaptureEnd,
             (FWriteAccessScope *)&local_4a8);
  local_490 = &(pFVar5->_OnMouseCaptureEnd).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_490);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar6[3] = this;
  }
  if (local_4a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4a8.Accessor,&local_4a8);
  }
  local_51c = 1;
  local_520 = __real_3f800000;
  local_518 = (undefined1  [8])0x0;
  FStack_510.Data = (FScriptContainerElement *)0x0;
  local_508 = 0;
  (pFVar5->_SliderValue).Value = __real_3f800000;
  (pFVar5->_SliderValue).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_SliderValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_518);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_518,
             (FWriteAccessScope *)&local_4e0);
  if (((int)local_508 != 0) && (FStack_510.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_510.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_510,0,0,0x10);
    local_508 = local_508 & 0xffffffff00000000;
  }
  if (local_4e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4e0.Accessor,&local_4e0);
  }
  if (FStack_510.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_510.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_518);
  FLLMScope::FLLMScope(&local_524,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4e8,&local_4f0,true);
  TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>
            (&local_448,"SAudioRadialSlider",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioVectorscopePanelWidget.cpp"
             ,0x159,local_528);
  FMemScope::~FMemScope(&local_4e8);
  FLLMScope::~FLLMScope(&local_524);
  pTVar8 = TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_448,&local_468,pFVar5);
  local_4f8.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
  local_500 = pTVar8->Object;
  if (local_4f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4f8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4f8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->ScaleKnob;
  if (pTVar1 != (TSharedPtr<SAudioRadialSlider,1> *)&local_500) {
    pTVar1->Object = local_500;
    local_500 = (SAudioRadialSlider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ScaleKnob).SharedReferenceCount,&local_4f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4f8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_468.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_448._Widget.SharedReferenceCount.ReferenceController);
  SAudioRadialSlider::FArguments::~FArguments(&local_430);
  if (pTVar1->Object == (SAudioRadialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_458 = ScaleFactorOutputKnobRange.field0_0x0;
  (**(code **)(pTVar1->Object->_padding_ + 0x260))(pTVar1->Object,&local_458);
  if (pTVar1->Object == (SAudioRadialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (**(code **)(pTVar1->Object->_padding_ + 0x280))(pTVar1->Object,0);
  if (pTVar1->Object == (SAudioRadialSlider *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar2 = pTVar1->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar2->OnValueChanged,
             (FWriteAccessScope *)&local_488);
  local_470 = &(pSVar2->OnValueChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_470);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar6[3] = this;
  }
  if (local_488.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
  }
  return;
}

// CreateSequenceVectorViewer @ 14d90a530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioVectorscopePanelWidget::CreateSequenceVectorViewer
          (SAudioVectorscopePanelWidget *this,FFixedSampledSequenceView *param_1,
          FSampledSequenceVectorViewerStyle *param_2)

{
  FArguments *pFVar1;
  TSharedRef<SFixedSampledSequenceVectorViewer,1> *pTVar2;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  SFixedSampledSequenceVectorViewer *local_288;
  FSharedReferencer<1> local_280;
  T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&> local_278;
  TSharedRef<SFixedSampledSequenceVectorViewer,1> local_268;
  TSlateDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_>
  local_258;
  FArguments local_240;
  
  pFVar1 = SFixedSampledSequenceVectorViewer::FArguments::FArguments(&local_240);
  local_278.Arg1 = &param_1->NumDimensions;
  pFVar1->_Style = param_2;
  (pFVar1->_SequenceDrawingParams).MaxDisplayedValue = 1.0;
  (pFVar1->_SequenceDrawingParams).DimensionSlotMargin = 2.0;
  (pFVar1->_SequenceDrawingParams).MaxSequenceHeightRatio = 0.95;
  (pFVar1->_SequenceDrawingParams).MinSequenceHeightRatio = 0.1;
  (pFVar1->_SequenceDrawingParams).MinScaledBinValue = 0.1;
  (pFVar1->_SequenceDrawingParams).VerticalZoomFactor = 1.0;
  (pFVar1->_SequenceDrawingParams).Orientation = Horizontal;
  local_278.Arg0 = &param_1->SampleData;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  TSlateDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_>
  ::
  TSlateDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_>
            (&local_258,"SFixedSampledSequenceVectorViewer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioVectorscopePanelWidget.cpp"
             ,0xd3,&local_278);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  pTVar2 = TSlateDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_>
           ::operator<<=(&local_258,&local_268,pFVar1);
  local_280.ReferenceController = (pTVar2->SharedReferenceCount).ReferenceController;
  local_288 = pTVar2->Object;
  if (local_280.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_280.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_280.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->SequenceVectorViewer != (TSharedPtr<SFixedSampledSequenceVectorViewer,1> *)&local_288)
  {
    (this->SequenceVectorViewer).Object = local_288;
    local_288 = (SFixedSampledSequenceVectorViewer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SequenceVectorViewer).SharedReferenceCount,&local_280);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_280.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_240);
  return;
}

// CreateValueGridOverlay @ 14d90c5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SSampledSequenceValueGridOverlay,1> * __thiscall
SAudioVectorscopePanelWidget::CreateValueGridOverlay
          (SAudioVectorscopePanelWidget *this,
          TSharedPtr<SSampledSequenceValueGridOverlay,1> *__return_storage_ptr__,uint param_1,
          EGridDivideMode param_2,FSampledSequenceValueGridOverlayStyle *param_3,
          ESampledSequenceDrawOrientation param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FArguments *pFVar2;
  TSharedRef<SSampledSequenceValueGridOverlay,1> *pTVar3;
  longlong *plVar4;
  undefined1 auStackY_2f8 [32];
  T0RequiredArgs local_2c8 [4];
  FLLMScope local_2c4;
  FName local_2c0;
  FMemScope local_2b8;
  TSharedRef<SSampledSequenceValueGridOverlay,1> local_2b0;
  TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs> local_2a0;
  undefined1 local_288 [624];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  pFVar2 = SSampledSequenceValueGridOverlay::FArguments::FArguments((FArguments *)local_288);
  pFVar2->_MaxDivisionParameter = param_1;
  pFVar2->_DivideMode = param_2;
  pFVar2->_HideLabels = true;
  pFVar2->_Style = param_3;
  (pFVar2->_SequenceDrawingParams).MaxDisplayedValue = 1.0;
  (pFVar2->_SequenceDrawingParams).DimensionSlotMargin = 2.0;
  (pFVar2->_SequenceDrawingParams).MaxSequenceHeightRatio = 0.95;
  (pFVar2->_SequenceDrawingParams).MinSequenceHeightRatio = 0.1;
  (pFVar2->_SequenceDrawingParams).MinScaledBinValue = 0.1;
  (pFVar2->_SequenceDrawingParams).VerticalZoomFactor = 1.0;
  (pFVar2->_SequenceDrawingParams).Orientation = param_4;
  pFVar2->_NumDimensions = 1;
  FLLMScope::FLLMScope(&local_2c4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2c0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2b8,&local_2c0,true);
  TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs>
            (&local_2a0,"SSampledSequenceValueGridOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioVectorscopePanelWidget.cpp"
             ,200,local_2c8);
  FMemScope::~FMemScope(&local_2b8);
  FLLMScope::~FLLMScope(&local_2c4);
  pTVar3 = TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_2a0,&local_2b0,pFVar2);
  __return_storage_ptr__->Object = pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a0._Widget.SharedReferenceCount.ReferenceController);
  if (local_288._560_8_ != 0) {
    plVar4 = (longlong *)(local_288 + 0x240);
    if ((longlong *)local_288._600_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_288._600_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_288);
  return __return_storage_ptr__;
}

// CreateVectorscopeControls @ 14d90ca30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioVectorscopePanelWidget::CreateVectorscopeControls(SAudioVectorscopePanelWidget *this)

{
  CreateDisplayPersistenceKnob(this);
  CreateScaleKnob(this);
  return;
}

// ReceiveSequenceView @ 14d962210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioVectorscopePanelWidget::ReceiveSequenceView
          (SAudioVectorscopePanelWidget *this,FFixedSampledSequenceView *param_1,uint param_2)

{
  longlong lVar1;
  float *pfVar2;
  undefined8 uVar3;
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    pfVar2 = (param_1->SampleData).DataPtr;
    uVar3 = *(undefined8 *)&(param_1->SampleData).ArrayNum;
    *(char *)(lVar1 + 0x250) = (char)param_1->NumDimensions;
    *(float **)(lVar1 + 0x220) = pfVar2;
    *(undefined8 *)(lVar1 + 0x228) = uVar3;
    *(undefined1 *)(lVar1 + 0x218) = 1;
  }
  return;
}

// SetDisplayPersistence @ 14d968c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioVectorscopePanelWidget::SetDisplayPersistence
          (SAudioVectorscopePanelWidget *this,float param_1)

{
  double dVar1;
  double dVar2;
  SAudioRadialSlider *pSVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  
  pSVar3 = (this->DisplayPersistenceKnob).Object;
  if (pSVar3 == (SAudioRadialSlider *)0x0) {
    return;
  }
  dVar1 = (this->DisplayPersistenceKnobOutputRange).field0_0x0._s_0.Y;
  dVar2 = (this->DisplayPersistenceKnobOutputRange).field0_0x0._s_0.X;
  lVar4 = pSVar3->_padding_;
  dVar7 = dVar1 - dVar2;
  uVar5 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar6 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar6,uVar5) < __real_3e45798ee2308c3a ||
      (double)CONCAT44(uVar6,uVar5) == __real_3e45798ee2308c3a) {
    if (dVar1 <= (double)param_1) {
                    /* WARNING: Could not recover jumptable at 0x00014d968cc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 600))
                (pSVar3,CONCAT44((int)((ulonglong)__real_3ff0000000000000 >> 0x20),
                                 (float)__real_3ff0000000000000));
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014d968cd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 600))(pSVar3,0);
    return;
  }
  dVar7 = ((double)param_1 - dVar2) / dVar7;
                    /* WARNING: Could not recover jumptable at 0x00014d968ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 600))(pSVar3,CONCAT44((int)((ulonglong)dVar7 >> 0x20),(float)dVar7));
  return;
}

// SetGridVisibility @ 14d969460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioVectorscopePanelWidget::SetGridVisibility(SAudioVectorscopePanelWidget *this,bool param_1)

{
  SSampledSequenceValueGridOverlay *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->ValueGridOverlayXAxis).Object == (SSampledSequenceValueGridOverlay *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->ValueGridOverlayXAxis).Object;
  pSVar1->bHideGrid = !param_1;
  pSVar1->bForceRedraw = true;
  if ((this->ValueGridOverlayYAxis).Object == (SSampledSequenceValueGridOverlay *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->ValueGridOverlayYAxis).Object;
  pSVar1->bHideGrid = !param_1;
  pSVar1->bForceRedraw = true;
  return;
}

// SetMaxDisplayPersistence @ 14d969de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioVectorscopePanelWidget::SetMaxDisplayPersistence
          (SAudioVectorscopePanelWidget *this,float param_1)

{
  SAudioRadialSlider *pSVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pSVar1 = (this->DisplayPersistenceKnob).Object;
  (this->DisplayPersistenceKnobOutputRange).field0_0x0._s_0.Y = (double)param_1;
  if (pSVar1 != (SAudioRadialSlider *)0x0) {
    local_18 = *(undefined4 *)&(this->DisplayPersistenceKnobOutputRange).field0_0x0;
    uStack_14 = *(undefined4 *)((longlong)&(this->DisplayPersistenceKnobOutputRange).field0_0x0 + 4)
    ;
    uStack_10 = *(undefined4 *)((longlong)&(this->DisplayPersistenceKnobOutputRange).field0_0x0 + 8)
    ;
    uStack_c = *(undefined4 *)
                ((longlong)&(this->DisplayPersistenceKnobOutputRange).field0_0x0 + 0xc);
    (**(code **)(pSVar1->_padding_ + 0x260))(pSVar1,&local_18);
  }
  return;
}

// SetValueGridOverlayMaxNumDivisions @ 14d96f0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioVectorscopePanelWidget::SetValueGridOverlayMaxNumDivisions
          (SAudioVectorscopePanelWidget *this,uint param_1)

{
  SSampledSequenceValueGridOverlay *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->ValueGridOverlayXAxis).Object == (SSampledSequenceValueGridOverlay *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->ValueGridOverlayXAxis).Object;
  pSVar1->MaxDivisionParameter = param_1;
  pSVar1->bForceRedraw = true;
  if ((this->ValueGridOverlayYAxis).Object == (SSampledSequenceValueGridOverlay *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->ValueGridOverlayYAxis).Object;
  pSVar1->MaxDivisionParameter = param_1;
  pSVar1->bForceRedraw = true;
  return;
}

// SetVectorViewerScaleFactor @ 14d96f520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioVectorscopePanelWidget::SetVectorViewerScaleFactor
          (SAudioVectorscopePanelWidget *this,float param_1)

{
  SAudioRadialSlider *pSVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  
  if (((this->SequenceVectorViewer).Object == (SFixedSampledSequenceVectorViewer *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ((this->SequenceVectorViewer).Object)->ScaleFactor = param_1;
  pSVar1 = (this->ScaleKnob).Object;
  if (pSVar1 != (SAudioRadialSlider *)0x0) {
    dVar6 = ScaleFactorOutputKnobRange.field0_0x0._s_0.Y -
            ScaleFactorOutputKnobRange.field0_0x0._s_0.X;
    uVar4 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar5 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar5,uVar4) &&
        (double)CONCAT44(uVar5,uVar4) != __real_3e45798ee2308c3a) {
      dVar6 = ((double)param_1 - ScaleFactorOutputKnobRange.field0_0x0._s_0.X) / dVar6;
    }
    else {
      dVar6 = __real_3ff0000000000000;
      if ((double)param_1 < ScaleFactorOutputKnobRange.field0_0x0._s_0.Y) {
        dVar6 = 0.0;
      }
    }
    (**(code **)(pSVar1->_padding_ + 600))(pSVar1,(float)dVar6);
  }
  return;
}

// UpdateSequenceVectorViewerStyle @ 14d97a700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioVectorscopePanelWidget::UpdateSequenceVectorViewerStyle
          (SAudioVectorscopePanelWidget *this,FSampledSequenceVectorViewerStyle *param_1)

{
  SFixedSampledSequenceVectorViewer *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FLinearColor_u_0 local_128;
  undefined4 local_118;
  undefined1 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  FSlateWidgetStyle local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  FSlateBrush local_d8;
  undefined8 local_28;
  undefined8 uStack_20;
  float local_18;
  
  if ((this->SequenceVectorViewer).Object == (SFixedSampledSequenceVectorViewer *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_f0 = *(undefined8 *)&(param_1->BackgroundColor).SpecifiedColor.field0_0x0;
  uStack_e8 = *(undefined8 *)((longlong)&(param_1->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  pSVar1 = (this->SequenceVectorViewer).Object;
  local_f8 = (FSlateWidgetStyle)&___7FSampledSequenceVectorViewerStyle__6B_;
  local_e0._0_1_ = (param_1->BackgroundColor).ColorUseRule;
  local_e0._1_1_ = (param_1->BackgroundColor).ColorTableId;
  local_e0._2_2_ = *(undefined2 *)&(param_1->BackgroundColor).field_0x12;
  FSlateBrush::FSlateBrush(&local_d8,&param_1->BackgroundBrush);
  local_18 = param_1->LineThickness;
  local_28 = *(undefined8 *)&(param_1->LineColor).field0_0x0;
  uStack_20 = *(undefined8 *)((longlong)&(param_1->LineColor).field0_0x0 + 8);
  *(undefined8 *)&(pSVar1->LineColor).field0_0x0 = local_28;
  *(undefined8 *)((longlong)&(pSVar1->LineColor).field0_0x0 + 8) = uStack_20;
  pSVar1->LineThickness = local_18;
  local_d8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle(&local_f8);
  if ((this->BackgroundBorder).Object == (SBorder *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_118._0_1_ = (param_1->BackgroundColor).ColorUseRule;
  local_118._1_1_ = (param_1->BackgroundColor).ColorTableId;
  local_118._2_2_ = *(undefined2 *)&(param_1->BackgroundColor).field_0x12;
  local_128._0_8_ = *(undefined8 *)&(param_1->BackgroundColor).SpecifiedColor.field0_0x0;
  local_128._8_8_ =
       *(undefined8 *)((longlong)&(param_1->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  local_114 = 1;
  local_100 = 0;
  local_110 = 0;
  uStack_108 = 0;
  SBorder::SetBorderBackgroundColor
            ((this->BackgroundBorder).Object,(TAttribute<FSlateColor> *)&local_128._s_0);
  pTVar2 = (param_1->BackgroundBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (param_1->BackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)param_1);
  return;
}

// UpdateValueGridOverlayStyle @ 14d97afc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioVectorscopePanelWidget::UpdateValueGridOverlayStyle
          (SAudioVectorscopePanelWidget *this,FSampledSequenceValueGridOverlayStyle *param_1)

{
  SSampledSequenceValueGridOverlay *pSVar1;
  code *pcVar2;
  bool bVar3;
  FSampledSequenceValueGridOverlayStyle *pFVar4;
  FSampledSequenceValueGridOverlayStyle local_148;
  FSampledSequenceValueGridOverlayStyle local_a8;
  
  if ((this->ValueGridOverlayXAxis).Object == (SSampledSequenceValueGridOverlay *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->ValueGridOverlayXAxis).Object;
  pFVar4 = FSampledSequenceValueGridOverlayStyle::FSampledSequenceValueGridOverlayStyle
                     (&local_148,param_1);
  SSampledSequenceValueGridOverlay::OnStyleUpdated(pSVar1,pFVar4);
  if ((this->ValueGridOverlayYAxis).Object == (SSampledSequenceValueGridOverlay *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->ValueGridOverlayYAxis).Object;
  pFVar4 = FSampledSequenceValueGridOverlayStyle::FSampledSequenceValueGridOverlayStyle
                     (&local_a8,param_1);
  SSampledSequenceValueGridOverlay::OnStyleUpdated(pSVar1,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->LabelTextFont).CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)param_1);
  return;
}

