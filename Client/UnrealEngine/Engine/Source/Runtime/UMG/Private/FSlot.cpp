// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 6

// GetOffset @ 1469200c0

FMargin * __thiscall
SConstraintCanvas::FSlot::GetOffset(FSlot *this,FMargin *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong *plVar5;
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->OffsetAttr).Getter,
             (FReadAccessScope *)&local_38);
  if ((*(int *)&(this->OffsetAttr).Getter.field_0x10 != 0) &&
     (plVar5 = *(longlong **)&(this->OffsetAttr).Getter.field_0x8, plVar5 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*plVar5 + 0x38))();
    if (cVar4 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(this->OffsetAttr).Getter,&local_20);
      if (*(int *)&(this->OffsetAttr).Getter.field_0x10 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)&(this->OffsetAttr).Getter.field_0x8;
      }
      (**(code **)(*plVar5 + 0x60))(plVar5,&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      (this->OffsetAttr).Value.Left = (float)local_38.AccessType;
      (this->OffsetAttr).Value.Top = (float)local_38._4_4_;
      *(FMRSWRecursiveAccessDetector **)&(this->OffsetAttr).Value.Right = local_38.Accessor;
      goto LAB_14692014c;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_38);
LAB_14692014c:
  fVar1 = (this->OffsetAttr).Value.Top;
  fVar2 = (this->OffsetAttr).Value.Right;
  fVar3 = (this->OffsetAttr).Value.Bottom;
  __return_storage_ptr__->Left = (this->OffsetAttr).Value.Left;
  __return_storage_ptr__->Top = fVar1;
  __return_storage_ptr__->Right = fVar2;
  __return_storage_ptr__->Bottom = fVar3;
  return __return_storage_ptr__;
}

// SetAlignment @ 1469419e0

void __thiscall
SConstraintCanvas::FSlot::SetAlignment(FSlot *this,TAttribute<UE::Math::TVector2<double>_> *param_1)

{
  TAttribute<UE::Math::TVector2<double>_> *this_00;
  longlong *plVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  undefined1 local_48 [8];
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  this_00 = &this->AlignmentAttr;
  bVar3 = TAttribute<UE::Math::TVector2<double>_>::IdenticalTo(this_00,param_1);
  if (!bVar3) {
    bVar3 = TAttribute<UE::Math::TVector2<double>_>::IsBound(this_00);
    bVar4 = TAttribute<UE::Math::TVector2<double>_>::IsBound(param_1);
    dVar2 = (param_1->Value).field0_0x0._s_0.Y;
    (this_00->Value).field0_0x0._s_0.X = (param_1->Value).field0_0x0._s_0.X;
    (this->AlignmentAttr).Value.field0_0x0._s_0.Y = dVar2;
    (this->AlignmentAttr).bIsSet = param_1->bIsSet;
    this_01 = &(this->AlignmentAttr).Getter;
    if (&param_1->Getter != this_01) {
      local_48 = (undefined1  [8])0x0;
      local_40.Data = (FScriptContainerElement *)0x0;
      local_38 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
                 (FReadAccessScope *)&local_30);
      if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
         (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x50))(plVar1,local_48);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_30);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
                 (FWriteAccessScope *)&local_30);
      if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_40.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
        local_38 = 0;
      }
      if (local_30.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
      }
      if (local_40.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_48);
    }
    FSlotBase::Invalidate((FSlotBase *)this,(bVar4 != bVar3) * '\x04' + Layout);
  }
  return;
}

// SetAnchors @ 146941cb0

void __thiscall SConstraintCanvas::FSlot::SetAnchors(FSlot *this,TAttribute<FAnchors> *param_1)

{
  TAttribute<FAnchors> *this_00;
  longlong *plVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  TDelegate<FAnchors___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  undefined1 local_48 [8];
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  this_00 = &this->AnchorsAttr;
  bVar3 = TAttribute<FAnchors>::IdenticalTo(this_00,param_1);
  if (!bVar3) {
    bVar3 = TAttribute<FAnchors>::IsBound(this_00);
    bVar4 = TAttribute<FAnchors>::IsBound(param_1);
    dVar2 = (param_1->Value).Minimum.field0_0x0._s_0.Y;
    (this_00->Value).Minimum.field0_0x0._s_0.X = (param_1->Value).Minimum.field0_0x0._s_0.X;
    (this->AnchorsAttr).Value.Minimum.field0_0x0._s_0.Y = dVar2;
    dVar2 = (param_1->Value).Maximum.field0_0x0._s_0.Y;
    (this->AnchorsAttr).Value.Maximum.field0_0x0._s_0.X = (param_1->Value).Maximum.field0_0x0._s_0.X
    ;
    (this->AnchorsAttr).Value.Maximum.field0_0x0._s_0.Y = dVar2;
    (this->AnchorsAttr).bIsSet = param_1->bIsSet;
    this_01 = &(this->AnchorsAttr).Getter;
    if (&param_1->Getter != this_01) {
      local_48 = (undefined1  [8])0x0;
      local_40.Data = (FScriptContainerElement *)0x0;
      local_38 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
                 (FReadAccessScope *)&local_30);
      if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
         (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x50))(plVar1,local_48);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_30);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
                 (FWriteAccessScope *)&local_30);
      if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_40.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
        local_38 = 0;
      }
      if (local_30.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
      }
      if (local_40.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_48);
    }
    FSlotBase::Invalidate((FSlotBase *)this,(bVar4 != bVar3) * '\x04' + Layout);
  }
  return;
}

// SetOffset @ 1469437a0

void __thiscall SConstraintCanvas::FSlot::SetOffset(FSlot *this,TAttribute<FMargin> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  
  bVar4 = TAttribute<FMargin>::IdenticalTo(&this->OffsetAttr,param_1);
  if (!bVar4) {
    bVar4 = TAttribute<FMargin>::IsBound(&this->OffsetAttr);
    bVar5 = TAttribute<FMargin>::IsBound(param_1);
    fVar1 = (param_1->Value).Top;
    fVar2 = (param_1->Value).Right;
    fVar3 = (param_1->Value).Bottom;
    (this->OffsetAttr).Value.Left = (param_1->Value).Left;
    (this->OffsetAttr).Value.Top = fVar1;
    (this->OffsetAttr).Value.Right = fVar2;
    (this->OffsetAttr).Value.Bottom = fVar3;
    (this->OffsetAttr).bIsSet = param_1->bIsSet;
    TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&(this->OffsetAttr).Getter,&param_1->Getter);
    FSlotBase::Invalidate((FSlotBase *)this,(bVar5 != bVar4) * '\x04' + Layout);
  }
  return;
}

// FSlot @ 1469882c0

FSlot * __thiscall SStackBox::FSlot::FSlot(FSlot *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FSlot *pFVar4;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  FSlotBase::FSlotBase((FSlotBase *)this);
  puVar1 = &this->field_0x28;
  *(undefined ***)this =
       &TWidgetSlotWithAttributeSupport<SStackBox::FSlot>::
        _vftable__for__TSlotBase<SStackBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &TWidgetSlotWithAttributeSupport<SStackBox::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pFVar4 = this;
  if (puVar1 == (undefined1 *)0x0) {
    pFVar4 = (FSlot *)0x0;
  }
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  if ((puVar1 < pFVar4) || (pFVar4 + 1 <= puVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Container && (UPTRINT)&Self < (UPTRINT)&Container + sizeof(ContainerType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeContained.inl"
                       ,0x1b,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSlot *)(*pcVar2)();
      return pFVar4;
    }
  }
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined ***)this =
       &TBasicLayoutWidgetSlot<SStackBox::FSlot>::_vftable__for__TSlotBase<SStackBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &TBasicLayoutWidgetSlot<SStackBox::FSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  TResizingWidgetSlotMixin<SStackBox::FSlot>::TResizingWidgetSlotMixin<SStackBox::FSlot>
            ((TResizingWidgetSlotMixin<SStackBox::FSlot> *)&this->field_0x40);
  *(undefined ***)this = &_vftable__for__TSlotBase<SStackBox::FSlot>__;
  *(undefined ***)&this->field_0x20 =
       &_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  return this;
}

// NotifySlotChanged @ 1469e5020

void __thiscall SGridPanel::FSlot::NotifySlotChanged(FSlot *this,bool param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SGridPanel *pSVar5;
  SGridPanel *pSVar6;
  SGridPanel *this_00;
  bool bVar7;
  
  if ((this->Panel).Object == (SGridPanel *)0x0) {
    return;
  }
  pTVar1 = (this->Panel).WeakReferenceCount.ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar1->SharedReferenceCount < 1) {
    return;
  }
  pSVar6 = (SGridPanel *)(this->Panel).WeakReferenceCount.ReferenceController;
  this_00 = (SGridPanel *)0x0;
  pSVar5 = pSVar6;
  if (pSVar6 != (SGridPanel *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar6->_padding_;
    do {
      pSVar5 = this_00;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1469e5081;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar6->_padding_;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        *(atomic<int> *)&pSVar6->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    this_00 = (this->Panel).Object;
    pSVar5 = pSVar6;
    if (this_00 != (SGridPanel *)0x0) goto LAB_1469e50a7;
  }
LAB_1469e5081:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar6 = pSVar5;
  if (bVar7) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1469e50a7:
  SGridPanel::NotifySlotChanged(this_00,this,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return;
}

