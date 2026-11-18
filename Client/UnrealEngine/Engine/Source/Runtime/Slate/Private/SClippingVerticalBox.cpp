// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 10

// ~SClippingVerticalBox @ 1427ba4c0

void __thiscall SClippingVerticalBox::~SClippingVerticalBox(SClippingVerticalBox *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->ClippedIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TWeakPtr<SWidget,1>,int>
            ((TWeakPtr<SWidget,1> *)(this->ClippedWidgets).AllocatorInstance.Data,
             (this->ClippedWidgets).ArrayNum);
  pFVar1 = (this->ClippedWidgets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SelectedIndex).Getter);
  pvVar2 = *(void **)&(this->SelectedIndex).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SelectedIndex).Getter);
  FButtonStyle::~FButtonStyle(&this->SelectedStyle);
  FButtonStyle::~FButtonStyle(&this->Style);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WrapButtonOpenTimer).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnWrapButtonClicked);
  pvVar2 = *(void **)&(this->OnWrapButtonClicked).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWrapButtonClicked);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelectedWrapButton).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WrapButton).SharedReferenceCount.ReferenceController);
  SBoxPanel::~SBoxPanel((SBoxPanel *)this);
  return;
}

// operator() @ 1427bc660

EVisibility __thiscall
`SClippingVerticalBox::InitializeWrapButton'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  int *piVar4;
  EVisibility EVar5;
  uchar *in_RDX;
  int *piVar6;
  
  lVar2 = *(longlong *)this;
  piVar4 = TAttribute<int>::Get((TAttribute<int> *)(lVar2 + 0x9d0));
  piVar6 = *(int **)(lVar2 + 0xa10);
  piVar1 = piVar6 + *(int *)(lVar2 + 0xa18);
  if (piVar6 != piVar1) {
    do {
      if (*piVar6 == *piVar4) {
        bVar3 = true;
        goto LAB_1427bc6b0;
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != piVar1);
  }
  bVar3 = false;
LAB_1427bc6b0:
  EVar5 = EVisibility::Collapsed;
  if (*(char *)((longlong)this + 8) == '\0') {
    if (!bVar3) {
      EVar5 = EVisibility::Visible;
    }
  }
  else if (bVar3) {
    EVar5 = EVisibility::Visible;
  }
  *in_RDX = (uchar)EVar5.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// AddWrapButton @ 1427cfb80

void __thiscall SClippingVerticalBox::AddWrapButton(SClippingVerticalBox *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SComboButton *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FSlot *pFVar7;
  FSlotArguments *pFVar8;
  FArguments *pFVar9;
  FSlotArguments *pFVar10;
  TSharedRef<SVerticalBox,1> *pTVar11;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FSlot *local_res18;
  FSlot *local_res20;
  SComboButton *local_598;
  FSharedReferencer<1> local_590;
  SComboButton *local_588;
  FSharedReferencer<1> local_580;
  SVerticalBox *local_578;
  FSharedReferencer<1> local_570;
  FSlot *local_568;
  FName local_560;
  FMemScope local_558;
  TSharedRef<SVerticalBox,1> local_550;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_540;
  undefined **local_528;
  undefined8 *local_520 [2];
  TReferenceControllerBase<1> *local_510;
  undefined1 local_508 [24];
  undefined1 local_4f0 [40];
  FSlotArgumentsMixin local_4c8;
  TPanelChildren<SBoxPanel::FSlot> *local_438;
  int local_430;
  undefined8 *local_428 [2];
  TReferenceControllerBase<1> *local_418;
  undefined1 local_410 [24];
  undefined1 local_3f8 [40];
  FSlotArgumentsMixin local_3d0;
  undefined8 *local_340 [2];
  TReferenceControllerBase<1> *local_330;
  undefined1 local_328 [24];
  undefined1 local_310 [40];
  FSlotArgumentsMixin local_2e8;
  FArguments local_258;
  
  InitializeWrapButton(this,&this->WrapButton,false);
  InitializeWrapButton(this,&this->SelectedWrapButton,true);
  pFVar7 = ::operator_new(0x58);
  local_res18 = (FSlot *)0x0;
  if (pFVar7 != (FSlot *)0x0) {
    *(undefined8 *)pFVar7 = 0;
    *(undefined8 *)&pFVar7->field_0x8 = 0;
    *(undefined8 *)&pFVar7->field_0x10 = 0;
    *(undefined8 *)&pFVar7->field_0x18 = 0;
    *(undefined8 *)&pFVar7->field_0x20 = 0;
    *(undefined8 *)&pFVar7->field_0x28 = 0;
    *(undefined8 *)&pFVar7->field_0x30 = 0;
    *(undefined8 *)&pFVar7->field_0x38 = 0;
    *(undefined8 *)&pFVar7->field_0x40 = 0;
    *(undefined8 *)&pFVar7->field_0x48 = 0;
    *(undefined8 *)&pFVar7->field_0x50 = 0;
    local_res18 = SVerticalBox::FSlot::FSlot(pFVar7);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_520,(FSlot *)&local_res18);
  local_430 = -1;
  local_528 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  local_438 = (TPanelChildren<SBoxPanel::FSlot> *)&this->_padding_;
  pFVar8 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_508,0.0);
  pFVar9 = SVerticalBox::FArguments::FArguments(&local_258);
  pFVar7 = ::operator_new(0x58);
  local_res20 = (FSlot *)0x0;
  if (pFVar7 != (FSlot *)0x0) {
    *(undefined8 *)pFVar7 = 0;
    *(undefined8 *)&pFVar7->field_0x8 = 0;
    *(undefined8 *)&pFVar7->field_0x10 = 0;
    *(undefined8 *)&pFVar7->field_0x18 = 0;
    *(undefined8 *)&pFVar7->field_0x20 = 0;
    *(undefined8 *)&pFVar7->field_0x28 = 0;
    *(undefined8 *)&pFVar7->field_0x30 = 0;
    *(undefined8 *)&pFVar7->field_0x38 = 0;
    *(undefined8 *)&pFVar7->field_0x40 = 0;
    *(undefined8 *)&pFVar7->field_0x48 = 0;
    *(undefined8 *)&pFVar7->field_0x50 = 0;
    local_res20 = SVerticalBox::FSlot::FSlot(pFVar7);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_340,(FSlot *)&local_res20);
  pFVar10 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)local_328,0.0);
  if ((this->WrapButton).Object == (SComboButton *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar1 = (this->WrapButton).SharedReferenceCount.ReferenceController;
  pSVar2 = (this->WrapButton).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SComboButton *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
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
  local_598 = pSVar2;
  local_590.ReferenceController = pTVar1;
  if ((SComboButton **)&pFVar10->field_0x8 != &local_598) {
    *(SComboButton **)&pFVar10->field_0x8 = pSVar2;
    local_598 = (SComboButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar10->field_0x10,&local_590);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_590.ReferenceController);
  pFVar9 = SVerticalBox::FArguments::operator+(pFVar9,pFVar10);
  pFVar7 = ::operator_new(0x58);
  local_568 = (FSlot *)0x0;
  if (pFVar7 != (FSlot *)0x0) {
    *(undefined8 *)pFVar7 = 0;
    *(undefined8 *)&pFVar7->field_0x8 = 0;
    *(undefined8 *)&pFVar7->field_0x10 = 0;
    *(undefined8 *)&pFVar7->field_0x18 = 0;
    *(undefined8 *)&pFVar7->field_0x20 = 0;
    *(undefined8 *)&pFVar7->field_0x28 = 0;
    *(undefined8 *)&pFVar7->field_0x30 = 0;
    *(undefined8 *)&pFVar7->field_0x38 = 0;
    *(undefined8 *)&pFVar7->field_0x40 = 0;
    *(undefined8 *)&pFVar7->field_0x48 = 0;
    *(undefined8 *)&pFVar7->field_0x50 = 0;
    local_568 = SVerticalBox::FSlot::FSlot(pFVar7);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_428,(FSlot *)&local_568);
  pFVar10 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)local_410,0.0);
  if ((this->SelectedWrapButton).Object == (SComboButton *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pSVar2 = (this->SelectedWrapButton).Object;
  pTVar3 = (this->SelectedWrapButton).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SComboButton *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
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
  local_588 = pSVar2;
  local_580.ReferenceController = pTVar3;
  if ((SComboButton **)&pFVar10->field_0x8 != &local_588) {
    *(SComboButton **)&pFVar10->field_0x8 = pSVar2;
    local_588 = (SComboButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar10->field_0x10,&local_580);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_580.ReferenceController);
  pFVar9 = SVerticalBox::FArguments::operator+(pFVar9,pFVar10);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_560 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_558,&local_560,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_540,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SClippingVerticalBox.cpp"
             ,0x6a,local_res8);
  FMemScope::~FMemScope(&local_558);
  FLLMScope::~FLLMScope(local_res10);
  pTVar11 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_540,&local_550,pFVar9);
  pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
  local_578 = pTVar11->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_570.ReferenceController = pTVar4;
  if ((SVerticalBox **)&pFVar8->field_0x8 != &local_578) {
    *(SVerticalBox **)&pFVar8->field_0x8 = local_578;
    local_578 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar8->field_0x10,&local_570);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_570.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_550.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_540._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
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
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_258._Slots.AllocatorInstance.Data,local_258._Slots.ArrayNum);
  if ((FSlotArguments *)local_258._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_258._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_258);
  local_528 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  if (local_520[0] != (undefined8 *)0x0) {
    if (local_430 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_438,(FSlotArguments *)local_520);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot(local_438,(FSlotArguments *)local_520,local_430);
    }
  }
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_4c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4f0);
  if ((void *)local_4f0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_4f0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_510);
  if (local_520[0] != (undefined8 *)0x0) {
    (**(code **)*local_520[0])(local_520[0],1);
  }
  return;
}

// ComputeDesiredSize @ 1427ecfc0

TVector2<double> * __thiscall
SClippingVerticalBox::ComputeDesiredSize
          (SClippingVerticalBox *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  FSlot *pFVar1;
  FDeprecateSlateVector2D FVar2;
  
  SBoxPanel::ComputeDesiredSize((SBoxPanel *)this,__return_storage_ptr__,param_1);
  pFVar1 = TPanelChildren<SBoxPanel::FSlot>::operator[]
                     ((TPanelChildren<SBoxPanel::FSlot> *)&this->_padding_,(int)this->_padding_ + -1
                     );
  FVar2 = SWidget::GetDesiredSize(*(SWidget **)&pFVar1->field_0x10);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (__return_storage_ptr__->field0_0x0)._s_0.Y - (double)*(float *)((longlong)FVar2 + 4);
  return __return_storage_ptr__;
}

// Construct @ 1427eec30

void __thiscall SClippingVerticalBox::Construct(SClippingVerticalBox *this,FArguments *param_1)

{
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnWrapButtonClicked,&param_1->_OnWrapButtonClicked);
  this->StyleSet = param_1->_StyleSet;
  this->StyleName = param_1->_StyleName;
  this->bIsFocusable = param_1->_IsFocusable;
  (this->SelectedIndex).Value = (param_1->_SelectedIndex).Value;
  (this->SelectedIndex).bIsSet = (param_1->_SelectedIndex).bIsSet;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->SelectedIndex).Getter,&(param_1->_SelectedIndex).Getter);
  return;
}

// InitializeWrapButton @ 14281ace0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SClippingVerticalBox::InitializeWrapButton
          (SClippingVerticalBox *this,TSharedPtr<SComboButton,1> *param_1,bool param_2)

{
  undefined1 *puVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  FToolBarStyle *pFVar10;
  FArguments *pFVar11;
  FSlateBrush *pFVar12;
  FArguments *this_00;
  undefined8 *puVar13;
  ulong64 uVar14;
  FText *pFVar15;
  TSharedRef<SWidget,1> *pTVar16;
  FArguments *pFVar17;
  FSlot *pFVar18;
  longlong lVar19;
  FSlotArguments *pFVar20;
  atomic<int> *paVar21;
  FSlotArguments *pFVar22;
  FSizeParam *pFVar23;
  FArguments *pFVar24;
  ISlateStyle *pIVar25;
  FTextBlockStyle *pFVar26;
  TSharedRef<STextBlock,1> *pTVar27;
  TSharedRef<SVerticalBox,1> *pTVar28;
  TSharedRef<SComboButton,1> *pTVar29;
  undefined ***pppuVar30;
  FSlotArguments *pFVar31;
  FButtonStyle *pFVar32;
  TReferenceControllerBase<1> *pTVar33;
  undefined1 auStackY_14d8 [32];
  T0RequiredArgs local_14a8;
  T0RequiredArgs local_14a7;
  T0RequiredArgs local_14a6;
  T0RequiredArgs local_14a5;
  undefined4 local_14a4;
  FLLMScope local_14a0;
  FLLMScope local_149c;
  FLLMScope local_1498 [2];
  uchar local_1490;
  undefined1 local_148f;
  undefined1 local_1488 [8];
  ForAnyElementType FStack_1480;
  ulonglong local_1478;
  uchar local_1470;
  undefined1 local_146f;
  undefined1 local_1468 [8];
  ForAnyElementType FStack_1460;
  ulonglong local_1458;
  undefined4 local_1450;
  undefined1 local_144c;
  undefined1 local_1448;
  undefined1 local_1440 [8];
  ForAnyElementType FStack_1438;
  ulonglong local_1430;
  FSlateBrush *local_1428;
  undefined1 local_1420;
  undefined1 local_1418 [8];
  ForAnyElementType FStack_1410;
  ulonglong local_1408;
  FText local_1400;
  undefined1 local_13f0;
  undefined1 local_13e8 [8];
  ForAnyElementType FStack_13e0;
  ulonglong local_13d8;
  undefined1 local_13d0 [8];
  FSharedReferencer<1> local_13c8;
  TReferenceControllerBase<1> *local_13c0;
  FName local_13b8;
  undefined4 uStack_13b0;
  undefined4 uStack_13ac;
  undefined8 local_13a8;
  undefined8 uStack_13a0;
  undefined1 local_1398;
  undefined1 local_1390 [8];
  ForAnyElementType FStack_1388;
  ulonglong local_1380;
  undefined8 local_1378;
  undefined8 uStack_1370;
  undefined1 local_1368;
  undefined1 local_1360 [8];
  ForAnyElementType FStack_1358;
  ulonglong local_1350;
  SImage *local_1348;
  FSharedReferencer<1> FStack_1340;
  undefined8 local_1338;
  FSharedReferencer<1> local_1330;
  SVerticalBox *local_1328;
  TReferenceControllerBase<1> *pTStack_1320;
  FName local_1318;
  FMemScope local_1310;
  FMemScope local_1308;
  FName local_1300;
  FSlotArguments *local_12f8;
  FSlotArguments *local_12f0;
  TVector2<float>_u_0 local_12e8;
  FMemScope local_12e0;
  FName local_12d8;
  undefined4 local_12d0 [2];
  FMemScope local_12c8 [2];
  undefined4 local_12b7;
  undefined2 local_12b3;
  undefined1 local_12b1;
  TSharedRef<SImage,1> local_12a8;
  FText local_1298;
  FDestructionSentinel local_1288;
  FDestructionSentinel local_1270;
  FDestructionSentinel local_1258;
  FDestructionSentinel local_1240;
  FDestructionSentinel local_1228;
  FDestructionSentinel local_1210;
  FDestructionSentinel local_11f8;
  FDestructionSentinel local_11e0;
  longlong *local_11c8;
  FDestructionSentinel local_11c0;
  undefined1 *local_11a8;
  FDestructionSentinel local_11a0;
  undefined1 *local_1188;
  TAttribute<FText> local_1180;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1150;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> local_1138;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1120;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1108;
  TSharedRef<SVerticalBox,1> local_10f0;
  TSharedRef<SComboButton,1> local_10e0;
  TSharedRef<SWidget,1> local_10d0;
  FLinearColor_u_0 local_10c0;
  FName local_10b0;
  TSharedRef<STextBlock,1> local_10a8;
  FText local_1098;
  undefined1 local_1088 [16];
  undefined1 local_1078 [32];
  undefined1 local_1058 [24];
  undefined8 *local_1040;
  STextBlock *local_1038;
  FSharedReferencer<1> local_1030 [4];
  undefined1 local_1010 [24];
  undefined4 local_ff8;
  undefined1 local_ff4;
  FSlotArgumentsMixin local_fe8;
  undefined8 *local_f58 [2];
  TReferenceControllerBase<1> *local_f48;
  undefined8 local_f40;
  undefined8 uStack_f38;
  undefined1 local_f30;
  undefined1 local_f28 [40];
  FSlotArgumentsMixin local_f00;
  undefined **local_e68 [20];
  TReferenceControllerBase<1> *local_dc8;
  FArguments local_db8;
  FArguments local_bb0;
  FArguments local_908;
  FArguments local_5d0;
  code *local_78;
  undefined **local_68;
  SClippingVerticalBox *local_60;
  undefined1 local_58;
  undefined4 local_57;
  undefined2 local_53;
  undefined1 local_51;
  undefined ***local_50;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14281ad02;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_14d8;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  local_14a4 = 0;
  local_13c0 = (TReferenceControllerBase<1> *)param_1;
  pFVar10 = (FToolBarStyle *)
            (**(code **)((longlong)*this->StyleSet + 0xa0))(this->StyleSet,FToolBarStyle::TypeName);
  if (pFVar10 == (FToolBarStyle *)0x0) {
    pFVar10 = FToolBarStyle::GetDefault();
  }
  pFVar11 = SImage::FArguments::FArguments(&local_bb0);
  local_1490 = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_148f = 1;
  local_1478 = 0;
  local_1488 = (undefined1  [8])0x0;
  FStack_1480.Data = (FScriptContainerElement *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar11->_padding_ =
       EVisibility::HitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar11->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar11->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1488);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1488,
             (FWriteAccessScope *)&local_11f8);
  if (((int)local_1478 != 0) && (FStack_1480.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1480.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1480,0,0,0x10);
    local_1478 = local_1478 & 0xffffffff00000000;
  }
  if (local_11f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_11f8.Accessor,&local_11f8);
  }
  if (FStack_1480.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1480.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1488);
  local_1428 = &(pFVar10->WrapButtonStyle).ExpandBrush;
  local_1420 = 1;
  local_1408 = 0;
  local_1418 = (undefined1  [8])0x0;
  FStack_1410.Data = (FScriptContainerElement *)0x0;
  (pFVar11->_Image).Value = local_1428;
  (pFVar11->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1418);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1418,
             (FWriteAccessScope *)&local_1288);
  if (((int)local_1408 != 0) && (FStack_1410.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1410.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1410,0,0,0x10);
    local_1408 = local_1408 & 0xffffffff00000000;
  }
  if (local_1288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1288.Accessor,&local_1288);
  }
  if (FStack_1410.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1410.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1418);
  FLLMScope::FLLMScope(&local_14a0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_12d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_12e0,&local_12d8,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_1150,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SClippingVerticalBox.cpp"
             ,0x7e,&local_14a8);
  FMemScope::~FMemScope(&local_12e0);
  FLLMScope::~FLLMScope(&local_14a0);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=(&local_1150,&local_12a8,pFVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1150._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_bb0);
  FButtonStyle::operator=(&this->Style,&pFVar10->ButtonStyle);
  (this->Style).NormalPadding.Left = 0.0;
  (this->Style).NormalPadding.Top = 0.0;
  (this->Style).NormalPadding.Right = 0.0;
  (this->Style).NormalPadding.Bottom = 0.0;
  (this->Style).PressedPadding.Left = 0.0;
  (this->Style).PressedPadding.Top = 0.0;
  (this->Style).PressedPadding.Right = 0.0;
  (this->Style).PressedPadding.Bottom = 0.0;
  FButtonStyle::operator=(&this->SelectedStyle,&pFVar10->ButtonStyle);
  (this->SelectedStyle).NormalPadding.Left = 0.0;
  (this->SelectedStyle).NormalPadding.Top = 0.0;
  (this->SelectedStyle).NormalPadding.Right = 0.0;
  (this->SelectedStyle).NormalPadding.Bottom = 0.0;
  (this->SelectedStyle).PressedPadding.Left = 0.0;
  (this->SelectedStyle).PressedPadding.Top = 0.0;
  (this->SelectedStyle).PressedPadding.Right = 0.0;
  (this->SelectedStyle).PressedPadding.Bottom = 0.0;
  local_12e8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_10c0._0_8_ = ___xmm_3f4ccccd000000000000000000000000;
  local_10c0._8_8_ = _UNK_1509579d8;
  pFVar12 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FLinearColor,float>
                      ((FSlateRoundedBoxBrush *)local_e68,&FStyleColors::Primary,__real_40800000,
                       (FLinearColor *)&local_10c0._s_0,__real_3f000000,
                       (FDeprecateVector2DParameter *)&local_12e8._s_0);
  FSlateBrush::operator=(&(this->SelectedStyle).Normal,pFVar12);
  local_e68[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_dc8);
  this_00 = SComboButton::FArguments::FArguments(&local_908);
  this_00->_HasDownArrow = false;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`SClippingVerticalBox::InitializeWrapButton'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_50 = (undefined ***)0x0;
  local_57 = local_12b7;
  local_53 = local_12b3;
  local_51 = local_12b1;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`SClippingVerticalBox::InitializeWrapButton'::__l2::<lambda_1>,EVisibility>
             ::Call;
  *(undefined1 *)((longlong)&this_00->_padding_ + 1) = 1;
  local_60 = this;
  local_58 = param_2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_00->_padding_,
             (FWriteAccessScope *)&local_11e0);
  local_11c8 = &this_00->_padding_;
  puVar13 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_11c8);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar13[2] = uVar14;
    *puVar13 = &
               ___7__TBaseFunctorDelegateInstance___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUEVisibility__XZ____V__6B_
    ;
    puVar13[4] = local_78;
    puVar13[9] = 0;
    if (local_78 != (code *)0x0) {
      pppuVar30 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar30 = local_50;
      }
      (*(code *)**pppuVar30)();
    }
  }
  if (local_11e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_11e0.Accessor,&local_11e0);
  }
  uStack_13a0 = _UNK_1509579f8;
  local_13a8 = ___xmm_41000000400000004100000040000000;
  pFVar32 = &this->Style;
  if (param_2) {
    pFVar32 = &this->SelectedStyle;
  }
  this_00->_ButtonStyle = pFVar32;
  uVar9 = ___xmm_41000000400000004100000040000000;
  pFVar22 = (FSlotArguments *)0x0;
  local_1398 = 1;
  local_1380 = 0;
  local_1390 = (undefined1  [8])0x0;
  FStack_1388.Data = (FScriptContainerElement *)0x0;
  ___xmm_41000000400000004100000040000000 = (undefined4)local_13a8;
  _UNK_1509579f4 = SUB84(local_13a8,4);
  uVar8 = _UNK_1509579f4;
  (this_00->_ContentPadding).Value.Left = (float)___xmm_41000000400000004100000040000000;
  ___xmm_41000000400000004100000040000000 = uVar9;
  uVar9 = _UNK_1509579f8;
  (this_00->_ContentPadding).Value.Top = (float)uVar8;
  _UNK_1509579f8 = (undefined4)uStack_13a0;
  _UNK_1509579fc = SUB84(uStack_13a0,4);
  uVar8 = _UNK_1509579fc;
  (this_00->_ContentPadding).Value.Right = (float)_UNK_1509579f8;
  _UNK_1509579f8 = uVar9;
  (this_00->_ContentPadding).Value.Bottom = (float)uVar8;
  (this_00->_ContentPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_00->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1390);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1390,
             (FWriteAccessScope *)&local_1270);
  if (((int)local_1380 != 0) && (FStack_1388.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1388.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1388,0,0,0x10);
    local_1380 = local_1380 & 0xffffffff00000000;
  }
  if (local_1270.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1270.Accessor,&local_1270);
  }
  if (FStack_1388.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1388.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1390);
  pFVar15 = FText::AsLocalizable_Advanced_LocText
                      (&local_1298,L"Slate",L"ExpandToolbar",L"Click to expand toolbar");
  FText::FText(&local_1400,pFVar15);
  local_13f0 = 1;
  local_13d8 = 0;
  local_13e8 = (undefined1  [8])0x0;
  FStack_13e0.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)this_00,&local_1400);
  *(undefined1 *)&this_00->_padding_ = local_13f0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_13e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_13e8,
             (FWriteAccessScope *)&local_1258);
  if (((int)local_13d8 != 0) && (FStack_13e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_13e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_13e0,0,0,0x10);
    local_13d8 = local_13d8 & 0xffffffff00000000;
  }
  if (local_1258.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1258.Accessor,&local_1258);
  }
  if (FStack_13e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_13e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_13e8);
  if (local_1400.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1400.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_00->_OnGetMenuContent,
             (FWriteAccessScope *)&local_11c0);
  local_11a8 = &(this_00->_OnGetMenuContent).field_0x8;
  puVar13 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_11a8);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar13[2] = uVar14;
    *puVar13 = &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`SClippingVerticalBox::InitializeWrapButton'::`2'::<lambda_2>_>
                ::_vftable_;
    puVar13[3] = this;
  }
  if (local_11c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_11c0.Accessor,&local_11c0);
  }
  local_1450 = 1;
  local_1430 = 0;
  local_144c = 1;
  local_1448 = 1;
  local_1440 = (undefined1  [8])0x0;
  FStack_1438.Data = (FScriptContainerElement *)0x0;
  if ((longlong *)&local_1450 != &this_00->_padding_) {
    *(undefined4 *)&this_00->_padding_ = 1;
    *(undefined1 *)((longlong)&this_00->_padding_ + 4) = 1;
  }
  *(undefined1 *)&this_00->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1440);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1440,
             (FWriteAccessScope *)&local_1240);
  if (((int)local_1430 != 0) && (FStack_1438.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1438.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1438,0,0,0x10);
    local_1430 = local_1430 & 0xffffffff00000000;
  }
  if (local_1240.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1240.Accessor,&local_1240);
  }
  if (FStack_1438.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1438.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1440);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_00->_OnMenuOpenChanged,
             (FWriteAccessScope *)&local_11a0);
  local_1188 = &(this_00->_OnMenuOpenChanged).field_0x8;
  puVar13 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1188);
  pTVar33 = local_13c0;
  if (puVar13 != (undefined8 *)0x0) {
    uStack_13ac = local_1298._12_4_;
    local_13b8 = (FName)OnWrapButtonOpenChanged;
    uStack_13b0 = 0;
    pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_10d0);
    pTVar33 = (pTVar16->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar16->Object;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar13 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar13[2] = uVar14;
    *puVar13 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSClippingVerticalBox___00__A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar13[3] = pSVar2;
    puVar13[4] = pTVar33;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->WeakReferenceCount = (atomic<int>)((int)pTVar33->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    *(FName *)(puVar13 + 5) = local_13b8;
    puVar13[6] = CONCAT44(uStack_13ac,uStack_13b0);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10d0.SharedReferenceCount.ReferenceController);
  }
  if (local_11a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_11a0.Accessor,&local_11a0);
  }
  this_00->_IsFocusable = true;
  pFVar17 = SVerticalBox::FArguments::FArguments(&local_db8);
  pFVar18 = ::operator_new(0x58);
  local_12f0 = pFVar22;
  if (pFVar18 != (FSlot *)0x0) {
    *(undefined8 *)pFVar18 = 0;
    *(undefined8 *)&pFVar18->field_0x8 = 0;
    *(undefined8 *)&pFVar18->field_0x10 = 0;
    *(undefined8 *)&pFVar18->field_0x18 = 0;
    *(undefined8 *)&pFVar18->field_0x20 = 0;
    *(undefined8 *)&pFVar18->field_0x28 = 0;
    *(undefined8 *)&pFVar18->field_0x30 = 0;
    *(undefined8 *)&pFVar18->field_0x38 = 0;
    *(undefined8 *)&pFVar18->field_0x40 = 0;
    *(undefined8 *)&pFVar18->field_0x48 = 0;
    *(undefined8 *)&pFVar18->field_0x50 = 0;
    local_12f0 = (FSlotArguments *)SVerticalBox::FSlot::FSlot(pFVar18);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_f58,(FSlot *)&local_12f0);
  local_1368 = 1;
  local_f30 = 1;
  lVar19 = 0x3ed0;
  if (pFVar10->bShowLabels == false) {
    lVar19 = 0x361c;
  }
  local_1360 = (undefined1  [8])0x0;
  FStack_1358.Data = (FScriptContainerElement *)0x0;
  local_1378 = *(undefined8 *)(&pFVar10->field_0x0 + lVar19);
  uStack_1370 = *(undefined8 *)((longlong)(&pFVar10->field_0x0 + lVar19) + 8);
  local_1350 = 0;
  local_f40 = local_1378;
  uStack_f38 = uStack_1370;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f28,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1360);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1360,
             (FWriteAccessScope *)&local_1228);
  if (((int)local_1350 != 0) && (FStack_1358.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1358.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1358,0,0,0x10);
    local_1350 = local_1350 & 0xffffffff00000000;
  }
  if (local_1228.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1228.Accessor,&local_1228);
  }
  if (FStack_1358.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1358.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1360);
  pFVar20 = SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)local_f58);
  puVar1 = &pFVar20->field_0x48;
  if (local_12d0 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 2;
    pFVar20->field_0x4c = 1;
  }
  pFVar31 = pFVar22;
  if (puVar1 != (undefined1 *)0x0) {
    pFVar31 = pFVar20;
  }
  if (local_12a8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    paVar21 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar21 = &(local_12a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar21 = (atomic<int>)((int)*paVar21 + 1);
    UNLOCK();
  }
  local_1348 = local_12a8.Object;
  FStack_1340.ReferenceController = local_12a8.SharedReferenceCount.ReferenceController;
  if (local_12a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar21 = (atomic<int>)((int)*paVar21 + 1);
    UNLOCK();
  }
  if ((SImage **)&pFVar31->field_0x8 != &local_1348) {
    *(SImage **)&pFVar31->field_0x8 = local_12a8.Object;
    local_1348 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar31->field_0x10,&FStack_1340);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1340.ReferenceController);
  pFVar17 = SVerticalBox::FArguments::operator+(pFVar17,pFVar31);
  pFVar18 = ::operator_new(0x58);
  if (pFVar18 != (FSlot *)0x0) {
    *(undefined8 *)pFVar18 = 0;
    *(undefined8 *)&pFVar18->field_0x8 = 0;
    *(undefined8 *)&pFVar18->field_0x10 = 0;
    *(undefined8 *)&pFVar18->field_0x18 = 0;
    *(undefined8 *)&pFVar18->field_0x20 = 0;
    *(undefined8 *)&pFVar18->field_0x28 = 0;
    *(undefined8 *)&pFVar18->field_0x30 = 0;
    *(undefined8 *)&pFVar18->field_0x38 = 0;
    *(undefined8 *)&pFVar18->field_0x40 = 0;
    *(undefined8 *)&pFVar18->field_0x48 = 0;
    *(undefined8 *)&pFVar18->field_0x50 = 0;
    pFVar22 = (FSlotArguments *)SVerticalBox::FSlot::FSlot(pFVar18);
  }
  local_12f8 = pFVar22;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_1040,(FSlot *)&local_12f8);
  pFVar23 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1088);
  TOptional<FSizeParam>::operator=(&local_fe8._SizeParam,pFVar23);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1058);
  if ((void *)local_1058._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1058._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1058);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1078);
  if ((void *)local_1078._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1078._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1078);
  local_ff8 = 2;
  local_ff4 = 1;
  pFVar24 = STextBlock::FArguments::FArguments(&local_5d0);
  local_146f = 1;
  local_1470 = (uchar)EVisibility::Collapsed;
  if (pFVar10->bShowLabels != false) {
    local_1470 = (uchar)EVisibility::Visible;
  }
  local_1458 = 0;
  local_1468 = (undefined1  [8])0x0;
  FStack_1460.Data = (FScriptContainerElement *)0x0;
  *(uchar *)&pFVar24->_padding_ = local_1470;
  *(undefined1 *)((longlong)&pFVar24->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar24->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1468);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1468,
             (FWriteAccessScope *)&local_1210);
  if (((int)local_1458 != 0) && (FStack_1460.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1460.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1460,0,0,0x10);
    local_1458 = local_1458 & 0xffffffff00000000;
  }
  if (local_1210.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1210.Accessor,&local_1210);
  }
  if (FStack_1460.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1460.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1468);
  pFVar15 = FText::AsLocalizable_Advanced_LocText
                      (&local_1098,L"ClippingVerticalBox",L"ClippingVerticalBox.Icon.More",L"More");
  FText::FText(&local_1180.Value,pFVar15);
  local_1180.bIsSet = true;
  local_1180.Getter._16_8_ = 0;
  local_1180.Getter._0_8_ = 0;
  local_1180.Getter._8_8_ = 0;
  pFVar24 = STextBlock::FArguments::Text(pFVar24,&local_1180);
  pIVar25 = FAppStyle::Get();
  ::FName::FName(&local_10b0,"SmallText");
  pFVar26 = (FTextBlockStyle *)
            (**(code **)((longlong)*pIVar25 + 0xa0))(pIVar25,FTextBlockStyle::TypeName);
  if (pFVar26 == (FTextBlockStyle *)0x0) {
    pFVar26 = FTextBlockStyle::GetDefault();
  }
  pFVar24->_TextStyle = pFVar26;
  FLLMScope::FLLMScope(&local_149c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1300 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1308,&local_1300,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1108,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SClippingVerticalBox.cpp"
             ,0xb5,&local_14a7);
  FMemScope::~FMemScope(&local_1308);
  FLLMScope::~FLLMScope(&local_149c);
  pTVar27 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1108,&local_10a8,pFVar24);
  pTVar33 = (pTVar27->SharedReferenceCount).ReferenceController;
  local_1038 = pTVar27->Object;
  if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1338 = 0;
  local_1330.ReferenceController = pTVar33;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1030,&local_1330);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1330.ReferenceController);
  pFVar17 = SVerticalBox::FArguments::operator+(pFVar17,(FSlotArguments *)&local_1040);
  FLLMScope::FLLMScope(local_1498,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1318 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(local_12c8,&local_1318,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_1120,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SClippingVerticalBox.cpp"
             ,0xa9,&local_14a6);
  FMemScope::~FMemScope(local_12c8);
  FLLMScope::~FLLMScope(local_1498);
  pTVar28 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1120,&local_10f0,pFVar17);
  pTVar3 = (pTVar28->SharedReferenceCount).ReferenceController;
  local_1328 = pTVar28->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this_00->_ButtonContent).Widget.SharedReferenceCount.ReferenceController;
  (this_00->_ButtonContent).Widget.Object = (SWidget *)local_1328;
  (this_00->_ButtonContent).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  pTStack_1320 = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_14a4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_13b8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1310,&local_13b8,true);
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>
            (&local_1138,"SComboButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SClippingVerticalBox.cpp"
             ,0x91,&local_14a5);
  FMemScope::~FMemScope(&local_1310);
  FLLMScope::~FLLMScope((FLLMScope *)&local_14a4);
  pTVar29 = TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1138,&local_10e0,this_00);
  local_13c8.ReferenceController = (pTVar29->SharedReferenceCount).ReferenceController;
  local_13d0 = (undefined1  [8])pTVar29->Object;
  if (local_13c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_13c8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_13c8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_13c0 != (TReferenceControllerBase<1> *)local_13d0) {
    local_13c0->_padding_ = (longlong)local_13d0;
    local_13d0 = (undefined1  [8])0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_13c0->SharedReferenceCount,&local_13c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13c8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10e0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1138._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1120._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1108._Widget.SharedReferenceCount.ReferenceController);
  if (local_1098.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1098.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_5d0);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_fe8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1010);
  if ((void *)local_1010._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1010._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1010);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1030[0].ReferenceController);
  if (local_1040 != (undefined8 *)0x0) {
    (**(code **)*local_1040)(local_1040,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_12a8.SharedReferenceCount.ReferenceController);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_f00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f28);
  if ((void *)local_f28._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f28._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f48);
  if (local_f58[0] != (undefined8 *)0x0) {
    (**(code **)*local_f58[0])(local_f58[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_db8._Slots.AllocatorInstance.Data,local_db8._Slots.ArrayNum);
  if ((FSlotArguments *)local_db8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_db8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_db8);
  if (local_1298.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1298.TextData.Reference + 0x10))();
  }
  if (local_78 != (code *)0x0) {
    pppuVar30 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar30 = local_50;
    }
    (*(code *)(*pppuVar30)[2])();
  }
  SComboButton::FArguments::~FArguments(&local_908);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_12a8.SharedReferenceCount.ReferenceController);
  return;
}

// OnArrangeChildren @ 142823260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SClippingVerticalBox::OnArrangeChildren
          (SClippingVerticalBox *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this_00;
  undefined1 *puVar3;
  TArray<TWeakPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  ForElementType<FArrangedWidget> FVar6;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  float fVar10;
  FArrangedChildren *pFVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FToolBarStyle *pFVar15;
  longlong lVar16;
  FArrangedWidget *this_01;
  ForElementType<FArrangedWidget> FVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStackY_168 [32];
  uint local_118;
  int local_114;
  FArrangedChildren *local_110;
  undefined8 local_108;
  longlong local_100;
  int local_f8;
  float local_f4;
  float fStack_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  float local_dc;
  float fStack_d8;
  undefined8 local_d4;
  float local_cc;
  float fStack_c8;
  FGeometry *local_c0;
  undefined8 local_b8;
  float local_b0;
  float local_ac;
  FSlateLayoutTransform local_a8;
  undefined8 local_9c;
  FDeprecateSlateVector2D local_94;
  FSlateLayoutTransform local_8c;
  FGeometry local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_110 = param_2;
  local_c0 = param_1;
  if (((this->WrapButton).Object == (SComboButton *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("WrapButton.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SClippingVerticalBox.cpp"
                          ,0x17,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar4 = &this->ClippedWidgets;
  DestructItems<TWeakPtr<SWidget,1>,int>
            ((TWeakPtr<SWidget,1> *)(pTVar4->AllocatorInstance).Data,(this->ClippedWidgets).ArrayNum
            );
  piVar1 = &(this->ClippedWidgets).ArrayMax;
  (this->ClippedWidgets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar4->AllocatorInstance,0,piVar1);
  }
  pTVar5 = &this->ClippedIndices;
  piVar2 = &(this->ClippedIndices).ArrayMax;
  (this->ClippedIndices).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar5->AllocatorInstance,0,piVar2);
  }
  pFVar15 = (FToolBarStyle *)
            (**(code **)((longlong)*this->StyleSet + 0xa0))
                      (this->StyleSet,FToolBarStyle::TypeName,this->StyleName,0);
  if (pFVar15 == (FToolBarStyle *)0x0) {
    pFVar15 = FToolBarStyle::GetDefault();
  }
  SBoxPanel::OnArrangeChildren((SBoxPanel *)this,param_1,local_110);
  pFVar11 = local_110;
  iVar14 = (local_110->Array).ArrayNum;
  local_f8 = iVar14 + -1;
  uVar18 = iVar14 - 2;
  this->LastToolBarButtonIndex = uVar18;
  local_114 = (int)pFVar15->ButtonContentMaxWidth;
  local_118 = uVar18;
  if (-1 < (int)uVar18) {
    this_00 = &local_110->Array;
    uVar19 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar20 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
    do {
      uVar13 = 0;
      if ((int)uVar18 < (pFVar11->Array).ArrayNum) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      local_118 = uVar18;
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar19 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y,
         uVar20 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X, bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar6 = (pFVar11->Array).AllocatorInstance.SecondaryData;
      fStack_f0 = (float)(double)uVar19;
      FVar17 = (ForElementType<FArrangedWidget>)this_00;
      if (FVar6 != (ForElementType<FArrangedWidget>)0x0) {
        FVar17 = FVar6;
      }
      lVar16 = (longlong)(int)uVar18;
      uVar7 = *(undefined8 *)((longlong)FVar17 + lVar16 * 0x48);
      local_f4 = (float)(double)uVar20;
      local_ec = CONCAT44(fStack_f0,local_f4);
      local_e4._0_4_ = (float)uVar7;
      local_dc = local_f4 * (float)local_e4;
      local_e4._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
      fStack_d8 = fStack_f0 * local_e4._4_4_;
      local_d4 = CONCAT44(fStack_d8,local_dc);
      fStack_c8 = fStack_d8 + *(float *)((uchar *)((longlong)FVar17 + 0x18) + lVar16 * 0x48);
      local_cc = local_dc + *(float *)((uchar *)((longlong)FVar17 + 0x14) + lVar16 * 0x48);
      local_9c = CONCAT44(fStack_c8,local_cc);
      fVar10 = *(float *)((uchar *)((longlong)FVar17 + 4) + lVar16 * 0x48) + fStack_c8;
      if (this->LastToolBarButtonIndex != local_118) {
        fVar10 = (float)local_114 + fVar10;
      }
      puVar3 = &(local_c0->Size).field_0x4;
      local_e4 = uVar7;
      if ((float)(int)fVar10 < *(float *)puVar3 || (float)(int)fVar10 == *(float *)puVar3) {
        if (this->LastToolBarButtonIndex == local_118) {
          FArrangedChildren::Remove(local_110,local_f8,1);
          return;
        }
      }
      else {
        local_108 = *(undefined8 *)((uchar *)((longlong)FVar17 + 0x38) + lVar16 * 0x48);
        local_100 = *(longlong *)((uchar *)((longlong)FVar17 + 0x40) + lVar16 * 0x48);
        if (local_100 != 0) {
          LOCK();
          *(int *)(local_100 + 0xc) = *(int *)(local_100 + 0xc) + 1;
          UNLOCK();
        }
        pFVar8 = (pTVar4->AllocatorInstance).Data;
        if (((pFVar8 <= (FScriptContainerElement *)&local_108) &&
            ((FScriptContainerElement *)&local_108 < pFVar8 + (longlong)*piVar1 * 0x10)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar14 = (this->ClippedWidgets).ArrayNum;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar4->AllocatorInstance,piVar1);
        }
        pFVar8 = (pTVar4->AllocatorInstance).Data;
        (this->ClippedWidgets).ArrayNum = iVar14 + 1;
        memmove(pFVar8 + 0x10,pFVar8,(longlong)iVar14 << 4);
        pFVar8 = (pTVar4->AllocatorInstance).Data;
        *(undefined8 *)pFVar8 = local_108;
        *(longlong *)(pFVar8 + 8) = local_100;
        pFVar8 = (pTVar5->AllocatorInstance).Data;
        local_100 = 0;
        local_108 = 0;
        if (((pFVar8 <= (FScriptContainerElement *)&local_118) &&
            ((FScriptContainerElement *)&local_118 < pFVar8 + (longlong)*piVar2 * 4)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar14 = (this->ClippedIndices).ArrayNum;
        if (iVar14 == *piVar2) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar5->AllocatorInstance,piVar2);
        }
        uVar18 = local_118;
        (this->ClippedIndices).ArrayNum = iVar14 + 1;
        *(uint *)((pTVar5->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_118;
        uVar13 = 0;
        if ((int)(local_118 + 1) <= (pFVar11->Array).ArrayNum) {
          uVar13 = ~local_118 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
        RemoveAtImpl(this_00,uVar18,1);
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                  (0x48,8,&this_00->AllocatorInstance,(pFVar11->Array).ArrayNum,
                   &(pFVar11->Array).ArrayMax);
        uVar19 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar20 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
      }
      uVar18 = local_118 - 1;
      param_1 = local_c0;
      local_118 = uVar18;
    } while (-1 < (int)uVar18);
  }
  this_01 = FArrangedChildren::operator[](local_110,(local_110->Array).ArrayNum + -1);
  local_ac = (float)local_114;
  local_a8.Scale = 1.0;
  local_94 = (this_01->Geometry).Size;
  local_8c.Translation.field0_0x0 = (param_1->AbsolutePosition).field0_0x0;
  local_b8 = param_1->Size;
  local_a8.Translation.field0_0x0._s_0.Y = local_b8._4_4_ - local_ac;
  local_a8.Translation.field0_0x0._s_0.X = (float)local_b8 - (float)local_94._0_4_;
  local_b0 = (float)local_94._0_4_;
  local_8c.Scale = param_1->Scale;
  FGeometry::FGeometry
            (&local_80,(FDeprecateVector2DParameter *)&local_b0,&local_a8,&local_8c,
             &param_1->AccumulatedRenderTransform,param_1->bHasRenderTransform);
  FGeometry::operator=(&this_01->Geometry,&local_80);
  return;
}

// OnPaint @ 14282af30

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SClippingVerticalBox::OnPaint
          (SClippingVerticalBox *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  int iVar1;
  
  iVar1 = SPanel::OnPaint((SPanel *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}

// OnWrapButtonOpenChanged @ 14282c2a0

void __thiscall
SClippingVerticalBox::OnWrapButtonOpenChanged(SClippingVerticalBox *this,bool param_1)

{
  TSharedPtr<FActiveTimerHandle,1> *pTVar1;
  FActiveTimerHandle *pFVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  TSharedRef<SWidget,1> *pTVar9;
  ulong64 uVar10;
  TSharedRef<FActiveTimerHandle,1> *pTVar11;
  FSharedReferencer<1> FVar12;
  TReferenceControllerBase<1> *local_res18;
  TSharedRef<FActiveTimerHandle,1> local_c8;
  FActiveTimerHandle *local_b8;
  FSharedReferencer<1> local_b0;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  longlong local_90;
  FSharedReferencer<1> FStack_88;
  TSharedRef<FActiveTimerHandle,1> local_80;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  TSharedRef<SWidget,1> local_50;
  
  bVar6 = false;
  bVar5 = false;
  bVar7 = false;
  pTVar1 = &this->WrapButtonOpenTimer;
  pFVar2 = pTVar1->Object;
  if (param_1) {
    if (pFVar2 != (FActiveTimerHandle *)0x0) {
      return;
    }
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_70);
    local_58 = &local_a0;
    puVar8 = UE::Core::Private::DelegateAllocate(0x38,&local_a0);
    if (puVar8 != (undefined8 *)0x0) {
      local_c8.Object = (FActiveTimerHandle *)UpdateWrapButtonStatus;
      local_c8.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           ((ulonglong)local_80.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_50);
      local_res18 = (pTVar9->SharedReferenceCount).ReferenceController;
      pSVar3 = pTVar9->Object;
      if (local_res18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_res18->SharedReferenceCount =
             (atomic<int>)((int)local_res18->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        local_res18->SharedReferenceCount =
             (atomic<int>)((int)local_res18->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar10;
      *puVar8 = &
                ___7__TBaseSPMethodDelegateInstance__0A_VSClippingVerticalBox___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar8[3] = pSVar3;
      puVar8[4] = local_res18;
      if (local_res18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_res18->WeakReferenceCount = (atomic<int>)((int)local_res18->WeakReferenceCount + 1);
        UNLOCK();
      }
      bVar6 = true;
      bVar5 = true;
      bVar7 = true;
      puVar8[5] = local_c8.Object;
      puVar8[6] = local_c8.SharedReferenceCount.ReferenceController;
    }
    if (bVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_res18);
    }
    if (bVar5) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_res18);
    }
    if (bVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50.SharedReferenceCount.ReferenceController);
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    pTVar11 = SWidget::RegisterActiveTimer
                        ((SWidget *)this,&local_80,0.0,
                         (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                          *)local_a8);
    local_b0.ReferenceController = (pTVar11->SharedReferenceCount).ReferenceController;
    local_b8 = pTVar11->Object;
    if (local_b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_b0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FActiveTimerHandle,1> *)&local_b8) {
      pTVar1->Object = local_b8;
      local_b8 = (FActiveTimerHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->WrapButtonOpenTimer).SharedReferenceCount,&local_b0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.ReferenceController);
    FVar12.ReferenceController =
         (TReferenceControllerBase<1> *)
         CONCAT44(local_80.SharedReferenceCount.ReferenceController._4_4_,
                  local_80.SharedReferenceCount.ReferenceController._0_4_);
  }
  else {
    if (pFVar2 == (FActiveTimerHandle *)0x0) {
      return;
    }
    local_c8.SharedReferenceCount.ReferenceController =
         (this->WrapButtonOpenTimer).SharedReferenceCount.ReferenceController;
    if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8.Object = pFVar2;
    if ((pFVar2 == (FActiveTimerHandle *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SWidget::UnRegisterActiveTimer((SWidget *)this,&local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    local_90 = 0;
    FStack_88.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FVar12.ReferenceController = FStack_88.ReferenceController;
    if (pTVar1 != (TSharedPtr<FActiveTimerHandle,1> *)&local_90) {
      pTVar1->Object = (FActiveTimerHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->WrapButtonOpenTimer).SharedReferenceCount,&FStack_88);
      FVar12.ReferenceController = FStack_88.ReferenceController;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  return;
}

// UpdateWrapButtonStatus @ 14283ad50

/* WARNING: Enum "Type": Some values do not have unique names */

EActiveTimerReturnType __thiscall
SClippingVerticalBox::UpdateWrapButtonStatus
          (SClippingVerticalBox *this,double param_1,float param_2)

{
  SComboButton *pSVar1;
  code *pcVar2;
  bool bVar3;
  EActiveTimerReturnType EVar4;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if ((this->WrapButton).Object == (SComboButton *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  bVar3 = SMenuAnchor::IsOpen((SMenuAnchor *)(this->WrapButton).Object);
  if (!bVar3) {
    if ((this->WrapButton).Object == (SComboButton *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
    }
    pSVar1 = (this->WrapButton).Object;
    (**(code **)(pSVar1->_padding_ + 0x250))(pSVar1,0,1,0);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->WrapButtonOpenTimer != (TSharedPtr<FActiveTimerHandle,1> *)&local_18) {
      (this->WrapButtonOpenTimer).Object = (FActiveTimerHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->WrapButtonOpenTimer).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    return Stop;
  }
  return Continue;
}

