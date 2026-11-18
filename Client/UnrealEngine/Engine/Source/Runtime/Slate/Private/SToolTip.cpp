// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 13

// ~SToolTip @ 1426aba70

void __thiscall SToolTip::~SToolTip(SToolTip *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  ITextData *pIVar5;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnSetInteractiveWindowLocationDelegate);
  pvVar3 = *(void **)&(this->OnSetInteractiveWindowLocationDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSetInteractiveWindowLocationDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bIsInteractive).Getter);
  pvVar3 = *(void **)&(this->bIsInteractive).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bIsInteractive).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BorderImage).Getter);
  pvVar3 = *(void **)&(this->BorderImage).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BorderImage).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TextMargin).Getter);
  pvVar3 = *(void **)&(this->TextMargin).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->TextMargin).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Font).Getter);
  pvVar3 = *(void **)&(this->Font).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Font).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Font).Value.CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ToolTipContent).SharedReferenceCount.ReferenceController);
  pTVar4 = (this->WidgetContent).WeakReferenceCount.ReferenceController;
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
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TextContent).Getter);
  pvVar3 = *(void **)&(this->TextContent).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->TextContent).Getter);
  pIVar5 = (this->TextContent).Value.TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IToolTip__6B_;
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// AsWidget @ 1426b1900

TSharedRef<SWidget,1> * __thiscall
SToolTip::AsWidget(SToolTip *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedFromThis<SWidget,1>::AsShared
            ((TSharedFromThis<SWidget,1> *)&this[-1]._padding_,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetContentWidget @ 1426bcb20

TSharedRef<SWidget,1> * __thiscall
SToolTip::GetContentWidget(SToolTip *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<SWidget,1>::ToSharedRef
            ((TSharedPtr<SWidget,1> *)&this->_padding_,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTextTooltip @ 1426bf390

FText * __thiscall SToolTip::GetTextTooltip(SToolTip *this)

{
  FText *pFVar1;
  
  pFVar1 = TAttribute<FText>::Get(&this->TextContent);
  return pFVar1;
}

// OnClosed @ 1426c50c0

void __thiscall SToolTip::OnClosed(SToolTip *this)

{
  return;
}

// OnOpening @ 1426c8740

void __thiscall SToolTip::OnOpening(SToolTip *this)

{
  return;
}

// Construct @ 1429d8b90

void __thiscall SToolTip::Construct(SToolTip *this,FArguments *param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  TAttribute<FText>::operator=(&this->TextContent,&param_1->_Text);
  (this->bIsInteractive).Value = (param_1->_IsInteractive).Value;
  (this->bIsInteractive).bIsSet = (param_1->_IsInteractive).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bIsInteractive).Getter,&(param_1->_IsInteractive).Getter);
  FSlateFontInfo::operator=(&(this->Font).Value,&(param_1->_Font).Value);
  (this->Font).bIsSet = (param_1->_Font).bIsSet;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->Font).Getter,&(param_1->_Font).Getter);
  fVar2 = (param_1->_TextMargin).Value.Top;
  fVar3 = (param_1->_TextMargin).Value.Right;
  fVar4 = (param_1->_TextMargin).Value.Bottom;
  (this->TextMargin).Value.Left = (param_1->_TextMargin).Value.Left;
  (this->TextMargin).Value.Top = fVar2;
  (this->TextMargin).Value.Right = fVar3;
  (this->TextMargin).Value.Bottom = fVar4;
  (this->TextMargin).bIsSet = (param_1->_TextMargin).bIsSet;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->TextMargin).Getter,&(param_1->_TextMargin).Getter);
  (this->BorderImage).Value = (param_1->_BorderImage).Value;
  (this->BorderImage).bIsSet = (param_1->_BorderImage).bIsSet;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->BorderImage).Getter,&(param_1->_BorderImage).Getter);
  if (&param_1->_OnSetInteractiveWindowLocation != &this->OnSetInteractiveWindowLocationDelegate) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnSetInteractiveWindowLocation,(FReadAccessScope *)&local_20);
    if ((*(int *)&(param_1->_OnSetInteractiveWindowLocation).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->_OnSetInteractiveWindowLocation).field_0x8,
       plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &this->OnSetInteractiveWindowLocationDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d8d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(&this->_padding_,&param_1->_Content);
  return;
}

// GetToolTipWrapWidth @ 1429ef6d0

float __cdecl SToolTip::GetToolTipWrapWidth(void)

{
  TConsoleVariableData<float> *pTVar1;
  bool bVar2;
  
  pTVar1 = StaticToolTipWrapWidth.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

// IsEmpty @ 1429f5550

bool __thiscall SToolTip::IsEmpty(SToolTip *this)

{
  bool bVar1;
  FText *this_00;
  
  if (((this->_padding_ == 0) || (this->_padding_ == 0)) || (*(int *)(this->_padding_ + 8) < 1)) {
    this_00 = TAttribute<FText>::Get((TAttribute<FText> *)&this->_padding_);
    bVar1 = FText::IsEmpty(this_00);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IsInteractive @ 1429f5bb0

bool __thiscall SToolTip::IsInteractive(SToolTip *this)

{
  bool *pbVar1;
  
  pbVar1 = TAttribute<bool>::Get((TAttribute<bool> *)&this->_padding_);
  return *pbVar1;
}

// OnSetInteractiveWindowLocation @ 142a01770

void __thiscall SToolTip::OnSetInteractiveWindowLocation(SToolTip *this,TVector2<double> *param_1)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_28);
  if (((int)this->_padding_ != 0) && ((longlong *)this->_padding_ != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                 &local_28);
      if ((int)this->_padding_ == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)this->_padding_;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// ResetContentWidget @ 142a06200

void __thiscall SToolTip::ResetContentWidget(SToolTip *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 local_18 [2];
  
  if (&this->_padding_ != local_18) {
    plVar3 = (longlong *)this->_padding_;
    this->_padding_ = 0;
    this->_padding_ = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142a06255. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this,&SNullWidget::NullWidget);
  return;
}

// SetContentWidget @ 142a07d80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SToolTip::SetContentWidget(SToolTip *this,TSharedRef<SWidget,1> *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  SBorder *pSVar7;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  atomic<int> aVar10;
  atomic<int> aVar11;
  FArguments *pFVar12;
  TAttribute<FText> *pTVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  TSharedRef<STextBlock,1> *pTVar16;
  FArguments *pFVar17;
  ISlateStyle *pIVar18;
  FName *pFVar19;
  TSharedRef<SBorder,1> *pTVar20;
  undefined1 *puVar21;
  TReferenceControllerBase<1> *pTVar22;
  TReferenceControllerBase<1> *pTVar23;
  bool bVar24;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  FLLMScope local_1028;
  FLLMScope local_1024;
  STextBlock *local_1020;
  FSharedReferencer<1> local_1018;
  SBorder *local_1010;
  TReferenceControllerBase<1> *pTStack_1008;
  SBorder *local_1000;
  TReferenceControllerBase<1> *pTStack_ff8;
  FName local_ff0;
  FMemScope local_fe8;
  FName local_fe0;
  FMemScope local_fd8;
  FName local_fd0;
  FMemScope local_fc8;
  TAttribute<FSlateBrush_const_*> local_fc0;
  FLinearColor_u_0 local_f98;
  undefined1 local_f88;
  undefined1 local_f84;
  undefined8 local_f80;
  undefined8 uStack_f78;
  undefined8 local_f70;
  FDestructionSentinel local_f68;
  undefined1 *local_f50;
  TAttribute<FSlateBrush_const_*> local_f48;
  TAttribute<FMargin> local_f20;
  FName local_ef0;
  longlong local_ee8;
  TReferenceControllerBase<1> *pTStack_ee0;
  SWidget *local_ed8;
  TReferenceControllerBase<1> *pTStack_ed0;
  TSharedRef<SBorder,1> local_ec8;
  TSharedRef<STextBlock,1> local_eb8;
  SWidget *local_ea8;
  TReferenceControllerBase<1> *pTStack_ea0;
  TSharedRef<SBorder,1> local_e98;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_e88;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_e70;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_e58;
  TAttribute<FMargin> local_e40;
  TAttribute<FSlateFontInfo> local_e10;
  TAttribute<FText> local_d90;
  FArguments local_d60;
  FArguments local_980;
  FArguments local_5a0;
  
  if (param_1->Object != SNullWidget::NullWidget.Object) {
    this->_padding_ = (longlong)param_1->Object;
    pTVar23 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar23 != (TReferenceControllerBase<1> *)this->_padding_) {
      if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar23->WeakReferenceCount = (atomic<int>)((int)pTVar23->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)this->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      this->_padding_ = (longlong)pTVar23;
    }
  }
  pTVar23 = (TReferenceControllerBase<1> *)this->_padding_;
  pTVar22 = pTVar23;
  if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
    aVar10 = pTVar23->SharedReferenceCount;
    do {
      pTVar22 = (TReferenceControllerBase<1> *)0x0;
      if (aVar10 == (atomic<int>)0x0) goto LAB_142a07e26;
      LOCK();
      aVar11 = pTVar23->SharedReferenceCount;
      bVar24 = aVar10 == aVar11;
      if (bVar24) {
        pTVar23->SharedReferenceCount = (atomic<int>)((int)aVar10 + 1);
        aVar11 = aVar10;
      }
      UNLOCK();
      aVar10 = aVar11;
    } while (!bVar24);
    lVar8 = this->_padding_;
    pTVar22 = pTVar23;
    if (lVar8 != 0) {
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
      local_ee8 = this->_padding_;
      pTStack_ee0 = (TReferenceControllerBase<1> *)this->_padding_;
      this->_padding_ = lVar8;
      this->_padding_ = (longlong)pTVar23;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_ee0);
      pFVar17 = SBorder::FArguments::FArguments(&local_d60);
      local_f48.Value = (FSlateBrush *)this->_padding_;
      local_f48.bIsSet = SUB81(this->_padding_,0);
      local_f48.Getter._0_8_ = 0;
      local_f48.Getter._8_8_ = 0;
      local_f48.Getter._16_4_ = 0;
      TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                (&local_f48.Getter,
                 (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &this->_padding_);
      pFVar17 = SBorder::FArguments::BorderImage(pFVar17,&local_f48);
      local_e40.Value._0_8_ = this->_padding_;
      local_e40.Value._8_8_ = this->_padding_;
      local_e40.bIsSet = SUB81(this->_padding_,0);
      local_e40.Getter._16_4_ = 0;
      local_e40.Getter._0_8_ = 0;
      local_e40.Getter._8_8_ = 0;
      TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                (&local_e40.Getter,
                 (TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
      pFVar17 = SBorder::FArguments::Padding(pFVar17,&local_e40);
      if ((this->_padding_ == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar24)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar22 = (TReferenceControllerBase<1> *)this->_padding_;
      pSVar5 = (SWidget *)this->_padding_;
      if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pSVar5 == (SWidget *)0x0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar24)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_ed8 = (pFVar17->_Content).Widget.Object;
      pTStack_ed0 = (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController;
      (pFVar17->_Content).Widget.Object = pSVar5;
      (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar22;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_ed0);
      FLLMScope::FLLMScope
                (local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_ff0 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_fe8,&local_ff0,true);
      TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
                (&local_e88,"SBorder",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\SToolTip.cpp"
                 ,0x34,local_res8);
      FMemScope::~FMemScope(&local_fe8);
      FLLMScope::~FLLMScope(local_res20);
      pTVar20 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                          (&local_e88,&local_ec8,pFVar17);
      puVar21 = &this[-1].TextMargin.Getter.field_0x8;
      pTVar6 = (pTVar20->SharedReferenceCount).ReferenceController;
      pSVar7 = pTVar20->Object;
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        FSlotBase::DetatchParentFromContent((FSlotBase *)puVar21);
      }
      else {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        FSlotBase::DetatchParentFromContent((FSlotBase *)puVar21);
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar9 = *(TReferenceControllerBase<1> **)&this[-1].BorderImage.bIsSet;
      this[-1].BorderImage.Value = (FSlateBrush *)pSVar7;
      *(TReferenceControllerBase<1> **)&this[-1].BorderImage.bIsSet = pTVar6;
      local_1010 = pSVar7;
      pTStack_1008 = pTVar6;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)puVar21);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_ec8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e88._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
      pFVar17 = &local_d60;
      goto LAB_142a0852e;
    }
  }
LAB_142a07e26:
  pFVar12 = STextBlock::FArguments::FArguments(&local_5a0);
  pTVar13 = TAttribute<FText>::TAttribute<FText>(&local_d90,(TAttribute<FText> *)&this->_padding_);
  pFVar12 = STextBlock::FArguments::Text(pFVar12,pTVar13);
  FSlateFontInfo::FSlateFontInfo(&local_e10.Value,(FSlateFontInfo *)&this->_padding_);
  local_e10.bIsSet = SUB81(this->_padding_,0);
  local_e10.Getter._16_4_ = 0;
  local_e10.Getter._0_8_ = 0;
  local_e10.Getter._8_8_ = 0;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&local_e10.Getter,
             (TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_)
  ;
  pFVar12 = STextBlock::FArguments::Font(pFVar12,&local_e10);
  local_f88 = 0;
  local_f84 = 1;
  local_f70 = 0;
  local_f98 = FLinearColor::Black.field0_0x0;
  local_f80 = 0;
  uStack_f78 = 0;
  pFVar12 = STextBlock::FArguments::ColorAndOpacity
                      (pFVar12,(TAttribute<FSlateColor> *)&local_f98._s_0);
  (pFVar12->_WrapTextAt).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar12->_WrapTextAt).Getter,(FWriteAccessScope *)&local_f68);
  local_f50 = &(pFVar12->_WrapTextAt).Getter.field_0x8;
  puVar14 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_f50);
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar15 = FDelegateHandle::GenerateNewID();
    puVar14[2] = uVar15;
    *puVar14 = &___7__TBaseStaticDelegateInstance___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar14[3] = GetToolTipWrapWidth;
  }
  if (local_f68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f68.Accessor,&local_f68);
  }
  FLLMScope::FLLMScope(&local_1028,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_fe0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_fd8,&local_fe0,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_e70,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\SToolTip.cpp"
             ,0x40,local_res10);
  FMemScope::~FMemScope(&local_fd8);
  FLLMScope::~FLLMScope(&local_1028);
  pTVar16 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_e70,&local_eb8,pFVar12);
  local_1018.ReferenceController = (pTVar16->SharedReferenceCount).ReferenceController;
  local_1020 = pTVar16->Object;
  if (local_1018.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1018.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1018.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  plVar3 = &this->_padding_;
  if ((STextBlock **)plVar3 != &local_1020) {
    *plVar3 = (longlong)local_1020;
    local_1020 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_1018);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1018.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_eb8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e70._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_5a0);
  pFVar17 = SBorder::FArguments::FArguments(&local_980);
  pIVar18 = FAppStyle::Get();
  pcVar4 = *(code **)((longlong)*pIVar18 + 0x50);
  pFVar19 = ::FName::FName(&local_ef0,"ToolTip.BrightBackground");
  local_fc0.Value = (FSlateBrush *)(*pcVar4)(pIVar18,*pFVar19);
  local_fc0.bIsSet = true;
  local_fc0.Getter._16_8_ = 0;
  local_fc0.Getter._0_8_ = 0;
  local_fc0.Getter._8_8_ = 0;
  pFVar17 = SBorder::FArguments::BorderImage(pFVar17,&local_fc0);
  local_f20.bIsSet = true;
  local_f20.Getter._16_8_ = 0;
  local_f20.Value.Left = ___xmm_41300000413000004130000041300000;
  local_f20.Value.Top = _UNK_150978c04;
  local_f20.Value.Right = _UNK_150978c08;
  local_f20.Value.Bottom = _UNK_150978c0c;
  local_f20.Getter._0_8_ = 0;
  local_f20.Getter._8_8_ = 0;
  pFVar17 = SBorder::FArguments::Padding(pFVar17,&local_f20);
  if ((*plVar3 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar24)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar23 = (TReferenceControllerBase<1> *)this->_padding_;
  pSVar5 = (SWidget *)*plVar3;
  if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar5 == (SWidget *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar24)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_ea8 = (pFVar17->_Content).Widget.Object;
  pTStack_ea0 = (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar17->_Content).Widget.Object = pSVar5;
  (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar23;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_ea0);
  FLLMScope::FLLMScope(&local_1024,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_fd0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_fc8,&local_fd0,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_e58,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\SToolTip.cpp"
             ,0x4a,local_res18);
  FMemScope::~FMemScope(&local_fc8);
  FLLMScope::~FLLMScope(&local_1024);
  pTVar20 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_e58,&local_e98,pFVar17);
  puVar21 = &this[-1].TextMargin.Getter.field_0x8;
  pTVar6 = (pTVar20->SharedReferenceCount).ReferenceController;
  pSVar7 = pTVar20->Object;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)puVar21);
  }
  else {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)puVar21);
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = *(TReferenceControllerBase<1> **)&this[-1].BorderImage.bIsSet;
  this[-1].BorderImage.Value = (FSlateBrush *)pSVar7;
  *(TReferenceControllerBase<1> **)&this[-1].BorderImage.bIsSet = pTVar6;
  local_1000 = pSVar7;
  pTStack_ff8 = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)puVar21);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e58._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  pFVar17 = &local_980;
  pTVar23 = pTVar22;
LAB_142a0852e:
  SBorder::FArguments::~FArguments(pFVar17);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  return;
}

