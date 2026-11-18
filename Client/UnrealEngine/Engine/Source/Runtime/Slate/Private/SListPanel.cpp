// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 27

// SListPanel @ 142a180d0

SListPanel * __thiscall SListPanel::SListPanel(SListPanel *this)

{
  TSlateAttribute<EListItemAlignment,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar1;
  TSlateAttribute<int,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_01;
  code *pcVar2;
  double _X;
  bool bVar3;
  int iVar4;
  SListPanel *pSVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_38;
  undefined1 local_37 [23];
  
  SPanel::SPanel((SPanel *)this);
  this->_padding_ = (longlong)&___7SListPanel__6B_;
  (this->Children)._padding_ = (longlong)this;
  (this->Children)._padding_ = (longlong)&___7FChildren__6B_;
  ::FName::FName((FName *)&(this->Children)._padding_,"Children");
  *(undefined2 *)&(this->Children)._padding_ = 0xdc00;
  this_00 = &this->ItemAlignmentAttribute;
  (this->Children)._padding_ = (longlong)&___7__TPanelChildren_VFSlot_SListPanel____6B_;
  pSVar5 = this + 1;
  (this->Children).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).Children.ArrayNum = 0;
  (this->Children).Children.ArrayMax = 0;
  this->FirstLineScrollOffset = 0.0;
  this->OverscrollAmount = 0.0;
  this->PreferredNumLines = 1;
  this->bIsRefreshPending = false;
  this_00->field_0x0 = 0;
  if ((this_00 < this) || (pSVar5 <= this_00)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SListPanel *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_00,(SWidget *)this);
  if (!bVar3) {
    local_res8[0] = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<enum_EListItemAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SListPanel,void>'::__l2::<lambda_1>::operator()(local_res8);
  }
  _X = __real_4030000000000000;
  pTVar1 = &this->ItemWidthAttribute;
  *(undefined4 *)&pTVar1->field_0x0 = 0x41800000;
  iVar4 = _finite(_X);
  if (iVar4 == 0) {
    local_res10[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res10);
  }
  if ((pTVar1 < this) || (pSVar5 <= pTVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SListPanel *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar1,(SWidget *)this);
  if (!bVar3) {
    local_res18[0] = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SListPanel,void>'::__l2::<lambda_1>::operator()(local_res18);
  }
  pTVar1 = &this->ItemHeightAttribute;
  *(undefined4 *)&pTVar1->field_0x0 = 0;
  iVar4 = _finite(0.0);
  if (iVar4 == 0) {
    local_res20[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res20);
  }
  if ((pTVar1 < this) || (pSVar5 <= pTVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SListPanel *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar1,(SWidget *)this);
  if (!bVar3) {
    local_38 = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SListPanel,void>'::__l2::<lambda_1>::operator()(&local_38);
  }
  this_01 = &this->NumDesiredItemsAttribute;
  *(undefined4 *)&this_01->field_0x0 = 0;
  if ((this_01 < this) || (pSVar5 <= this_01)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SListPanel *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_01,(SWidget *)this);
  if (!bVar3) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SListPanel,void>'::__l2::<lambda_1>::operator()(local_37);
  }
  return this;
}

// ~SListPanel @ 142a18e00

void __thiscall SListPanel::~SListPanel(SListPanel *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7SListPanel__6B_;
  DestructItems<TUniquePtr<SListPanel::FSlot,TDefaultDelete<SListPanel::FSlot>_>,int>
            ((TUniquePtr<SListPanel::FSlot,TDefaultDelete<SListPanel::FSlot>_> *)
             (this->Children).Children.AllocatorInstance.Data,(this->Children).Children.ArrayNum);
  pFVar1 = (this->Children).Children.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FChildren::~FChildren((FChildren *)&this->Children);
  SPanel::~SPanel((SPanel *)this);
  return;
}

// AddSlot @ 142a1ad60

FScopedWidgetSlotArguments * __thiscall
SListPanel::AddSlot(SListPanel *this,FScopedWidgetSlotArguments *__return_storage_ptr__,int param_1)

{
  FSlotBase *local_res8;
  
  local_res8 = ::operator_new(0x20);
  if (local_res8 == (FSlotBase *)0x0) {
    local_res8 = (FSlotBase *)0x0;
  }
  else {
    local_res8->_padding_ = 0;
    local_res8->Owner = (FChildren *)0x0;
    (local_res8->Widget).Object = (SWidget *)0x0;
    (local_res8->Widget).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FSlotBase::FSlotBase(local_res8);
    local_res8->_padding_ = (longlong)&___7FSlot_SListPanel__6B_;
  }
  TSlotBase<SListPanel::FSlot>::FSlotArguments::FSlotArguments
            ((FSlotArguments *)__return_storage_ptr__,(FSlot *)&local_res8);
  __return_storage_ptr__->Children = &this->Children;
  __return_storage_ptr__->Index = param_1;
  *(undefined8 *)&__return_storage_ptr__->Added = 0;
  *(undefined8 *)&(__return_storage_ptr__->Added).field_0x28 = 0;
  return __return_storage_ptr__;
}

// ClearItems @ 142a1bb90

void __thiscall SListPanel::ClearItems(SListPanel *this)

{
  int *piVar1;
  TArray<TUniquePtr<SListPanel::FSlot,TDefaultDelete<SListPanel::FSlot>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  int iVar5;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  pTVar2 = &(this->Children).Children;
  local_18.Data = (pTVar2->AllocatorInstance).Data;
  piVar1 = &(this->Children).Children.ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_10._0_4_ = (this->Children).Children.ArrayNum;
  local_10._4_4_ = (this->Children).Children.ArrayMax;
  *piVar1 = 0;
  (this->Children).Children.ArrayNum = 0;
  DestructItems<TUniquePtr<SListPanel::FSlot,TDefaultDelete<SListPanel::FSlot>_>,int>
            ((TUniquePtr<SListPanel::FSlot,TDefaultDelete<SListPanel::FSlot>_> *)
             (pTVar2->AllocatorInstance).Data,0);
  (this->Children).Children.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  DestructItems<TUniquePtr<SListPanel::FSlot,TDefaultDelete<SListPanel::FSlot>_>,int>
            ((TUniquePtr<SListPanel::FSlot,TDefaultDelete<SListPanel::FSlot>_> *)local_18.Data,
             (int)local_10);
  uVar4 = local_10 >> 0x20;
  local_10 = local_10 & 0xffffffff00000000;
  iVar5 = 0;
  if ((int)uVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_18,0,(int *)((longlong)&local_10 + 4));
    iVar5 = (int)local_10;
  }
  if (pTVar2 != (TArray<TUniquePtr<SListPanel::FSlot,TDefaultDelete<SListPanel::FSlot>_>,TSizedDefaultAllocator<32>_>
                 *)&local_18) {
    DestructItems<TUniquePtr<SListPanel::FSlot,TDefaultDelete<SListPanel::FSlot>_>,int>
              ((TUniquePtr<SListPanel::FSlot,TDefaultDelete<SListPanel::FSlot>_> *)
               (pTVar2->AllocatorInstance).Data,(this->Children).Children.ArrayNum);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = local_18.Data;
    (this->Children).Children.ArrayNum = (int)local_10;
    *piVar1 = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
    iVar5 = 0;
  }
  DestructItems<TUniquePtr<SListPanel::FSlot,TDefaultDelete<SListPanel::FSlot>_>,int>
            ((TUniquePtr<SListPanel::FSlot,TDefaultDelete<SListPanel::FSlot>_> *)local_18.Data,iVar5
            );
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// ComputeDesiredSize @ 142a1be30

TVector2<double> * __thiscall
SListPanel::ComputeDesiredSize
          (SListPanel *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  EOrientation EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TVector2<double> *pTVar5;
  FDeprecateSlateVector2D FVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar10;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar11;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar12;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar13;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar14;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar15;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> local_res8;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TStackX_c;
  
  TVar10 = this->ItemWidthAttribute;
  TVar15 = this->ItemHeightAttribute;
  TVar13 = (TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0;
  TVar14 = (TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0;
  EVar1 = this->Orientation;
  TVar11 = TVar15;
  TVar12 = TVar10;
  if (EVar1 == Orient_Vertical) {
    TVar11 = TVar10;
    TVar12 = TVar15;
  }
  if (((float)TVar11 <= 0.0) || ((float)TVar12 <= 0.0)) {
    iVar7 = (this->Children).Children.ArrayNum;
    TVar15 = TVar14;
    if (0 < iVar7) {
      uVar8 = 0;
      lVar9 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar8 < iVar7) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TVector2<double> *)(*pcVar2)();
          return pTVar5;
        }
        FVar6 = SWidget::GetDesiredSize
                          (*(SWidget **)
                            (*(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar9)
                            + 0x10));
        local_res8 = SUB84(*(undefined8 *)FVar6,0);
        TStackX_c = SUB84((ulonglong)*(undefined8 *)FVar6 >> 0x20,0);
        TVar10 = local_res8;
        if (this->Orientation == Orient_Vertical) {
          TVar10 = TStackX_c;
          TStackX_c = local_res8;
        }
        iVar7 = (this->Children).Children.ArrayNum;
        TVar13 = (TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
                 ((float)TVar13 + (float)TVar10);
        uVar8 = uVar8 + 1;
        if ((float)TVar14 <= (float)TStackX_c) {
          TVar14 = TStackX_c;
        }
        lVar9 = lVar9 + 8;
      } while ((int)uVar8 < iVar7);
      TVar13 = (TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
               ((float)TVar13 / (float)iVar7);
      TVar15 = TVar14;
    }
  }
  else {
    TVar13 = TVar10;
    if (EVar1 == Orient_Vertical) {
      TVar13 = TVar15;
      TVar15 = TVar10;
    }
  }
  TVar13 = (TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
           ((float)TVar13 * (float)this->PreferredNumLines);
  TVar10 = TVar13;
  if (EVar1 == Orient_Vertical) {
    TVar10 = TVar15;
    TVar15 = TVar13;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)TVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(float)TVar15;
  return __return_storage_ptr__;
}

// Construct @ 142a1d7d0

void __thiscall SListPanel::Construct(SListPanel *this,FArguments *param_1)

{
  TArray<TSlotBase<SListPanel::FSlot>::FSlotArguments,TSizedDefaultAllocator<32>_> local_18;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ItemWidthAttribute,(SWidget *)this,&param_1->_ItemWidth,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ItemHeightAttribute,(SWidget *)this,&param_1->_ItemHeight,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->NumDesiredItemsAttribute,(SWidget *)this,&param_1->_NumDesiredItems,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,enum_EListItemAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign(&this->ItemAlignmentAttribute,(SWidget *)this,&param_1->_ItemAlignment,None);
  this->Orientation = param_1->_ListOrientation;
  local_18.AllocatorInstance.Data = (param_1->_Slots).AllocatorInstance.Data;
  (param_1->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = (param_1->_Slots).ArrayNum;
  local_18.ArrayMax = (param_1->_Slots).ArrayMax;
  (param_1->_Slots).ArrayNum = 0;
  (param_1->_Slots).ArrayMax = 0;
  TPanelChildren<SListPanel::FSlot>::AddSlots(&this->Children,&local_18);
  return;
}

// GetAllChildren @ 142a28810

FChildren * __thiscall SListPanel::GetAllChildren(SListPanel *this)

{
  return (FChildren *)&this->Children;
}

// GetChildren @ 142a28c80

FChildren * __thiscall SListPanel::GetChildren(SListPanel *this)

{
  FNoChildren *pFVar1;
  
  pFVar1 = (FNoChildren *)&this->Children;
  if (this->bIsRefreshPending != false) {
    pFVar1 = &FNoChildren::NoChildrenInstance;
  }
  return (FChildren *)pFVar1;
}

// GetDesiredItemDimensions @ 142a28fc0

FTableViewDimensions * __thiscall
SListPanel::GetDesiredItemDimensions(SListPanel *this,FTableViewDimensions *__return_storage_ptr__)

{
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar2;
  EOrientation EVar3;
  
  EVar3 = this->Orientation;
  TVar1 = this->ItemWidthAttribute;
  TVar2 = this->ItemHeightAttribute;
  __return_storage_ptr__->Orientation = EVar3;
  if (EVar3 == Orient_Vertical) {
    __return_storage_ptr__->LineAxis = (float)TVar1;
    __return_storage_ptr__->ScrollAxis = (float)TVar2;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->LineAxis = (float)TVar2;
  __return_storage_ptr__->ScrollAxis = (float)TVar1;
  return __return_storage_ptr__;
}

// GetItemPadding @ 142a29a40

float __thiscall SListPanel::GetItemPadding(SListPanel *this,FGeometry *param_1)

{
  float fVar1;
  
  fVar1 = GetItemPadding(this,param_1,(EListItemAlignment)this->ItemAlignmentAttribute);
  return fVar1;
}

// GetItemPadding @ 142a29a60

float __thiscall
SListPanel::GetItemPadding(SListPanel *this,FGeometry *param_1,EListItemAlignment param_2)

{
  int iVar1;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar2;
  float local_res20;
  float fStackX_24;
  
  if (param_2 == EvenlyDistributed) {
    if (this->Orientation == Orient_Vertical) {
      local_res20 = SUB84(param_1->Size,0);
      TVar2 = this->ItemWidthAttribute;
    }
    else {
      fStackX_24 = SUB84(param_1->Size,4);
      TVar2 = this->ItemHeightAttribute;
      local_res20 = fStackX_24;
    }
    if (((0.0 < (float)TVar2) &&
        (iVar1 = (int)ROUND((local_res20 + local_res20) / (float)TVar2 - __real_3f000000) >> 1,
        0 < iVar1)) && (iVar1 <= (this->Children).Children.ArrayNum)) {
      return ((local_res20 - __real_3a83126f) - (float)iVar1 * (float)TVar2) / (float)iVar1;
    }
  }
  return 0.0;
}

// GetItemSize @ 142a29af0

FTableViewDimensions * __thiscall
SListPanel::GetItemSize
          (SListPanel *this,FTableViewDimensions *__return_storage_ptr__,FGeometry *param_1)

{
  GetItemSize(this,__return_storage_ptr__,param_1,(EListItemAlignment)this->ItemAlignmentAttribute);
  return __return_storage_ptr__;
}

// GetItemSize @ 142a29b20

FTableViewDimensions * __thiscall
SListPanel::GetItemSize
          (SListPanel *this,FTableViewDimensions *__return_storage_ptr__,FGeometry *param_1,
          EListItemAlignment param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar4;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar5;
  float local_res8;
  float fStackX_c;
  
  TVar5 = this->ItemWidthAttribute;
  if (this->Orientation == Orient_Vertical) {
    local_res8 = SUB84(param_1->Size,0);
    TVar4 = TVar5;
    TVar5 = this->ItemHeightAttribute;
  }
  else {
    fStackX_c = SUB84(param_1->Size,4);
    TVar4 = this->ItemHeightAttribute;
    local_res8 = fStackX_c;
  }
  fVar2 = 0.0;
  fVar3 = 0.0;
  if ((((0.0 < (float)TVar4) &&
       (iVar1 = (int)ROUND((local_res8 + local_res8) / (float)TVar4 - __real_3f000000) >> 1,
       0 < iVar1)) && ((param_2 - EvenlySize & 0xfa) == 0)) &&
     ((param_2 != CenterAligned &&
      (fVar2 = (float)iVar1, fVar2 = ((local_res8 - __real_3a83126f) - fVar2 * (float)TVar4) / fVar2
      , param_2 == EvenlySize)))) {
    fVar3 = (fVar2 / (fVar2 + (float)TVar4)) * (float)TVar5;
  }
  __return_storage_ptr__->Orientation = this->Orientation;
  __return_storage_ptr__->ScrollAxis = 0.0;
  __return_storage_ptr__->LineAxis = 0.0;
  __return_storage_ptr__->LineAxis = (float)TVar4 + fVar2;
  __return_storage_ptr__->ScrollAxis = (float)TVar5 + fVar3;
  return __return_storage_ptr__;
}

// GetLinePadding @ 142a29db0

float __thiscall SListPanel::GetLinePadding(SListPanel *this,FGeometry *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float local_res8;
  float fStackX_c;
  FTableViewDimensions local_28 [2];
  
  iVar2 = (this->Children).Children.ArrayNum - param_2;
  if (iVar2 < 1) {
    return 0.0;
  }
  if (this->Orientation == Orient_Vertical) {
    local_res8 = SUB84(param_1->Size,0);
  }
  else {
    fStackX_c = SUB84(param_1->Size,4);
    local_res8 = fStackX_c;
  }
  GetItemSize(this,local_28,param_1,(EListItemAlignment)this->ItemAlignmentAttribute);
  if (local_28[0].LineAxis <= 0.0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)ROUND((__real_3f800000 / local_28[0].LineAxis +
                       __real_3f800000 / local_28[0].LineAxis) * local_res8 - __real_3f000000) >> 1;
  }
  if (iVar2 < iVar1) {
    iVar1 = iVar2;
  }
  return (local_res8 - __real_3a83126f) - (float)iVar1 * local_28[0].LineAxis;
}

// GetPrivateWidgetClass @ 142a2a9f0

FSlateWidgetClassData * __cdecl SListPanel::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"SListPanel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&local_res8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SListPanel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 142a2baf0

FSlateWidgetClassData * __thiscall SListPanel::GetWidgetClass(SListPanel *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(aFStackX_10,"SListPanel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SListPanel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SListPanel::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// IsRefreshPending @ 142a2cde0

bool __thiscall SListPanel::IsRefreshPending(SListPanel *this)

{
  return this->bIsRefreshPending;
}

// OnArrangeChildren @ 142a2d4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SListPanel::OnArrangeChildren(SListPanel *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  float fVar2;
  TSlateAttribute<EListItemAlignment,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar4;
  byte bVar5;
  EOrientation EVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FSlot *pFVar12;
  FDeprecateSlateVector2D FVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  float fVar18;
  undefined1 auVar19 [16];
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar20;
  undefined1 auVar21 [16];
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_238 [32];
  undefined8 local_208;
  float local_200;
  float fStack_1fc;
  FTableViewDimensions local_1f0;
  FArrangedChildren *local_1e0;
  FSlateLayoutTransform local_1d8;
  FSlateLayoutTransform local_1cc;
  FDeprecateVector2DParameter local_1c0;
  FDeprecateVector2DParameter local_1b8;
  FTableViewDimensions local_1b0 [3];
  FArrangedWidget local_188;
  FArrangedWidget local_138;
  ulonglong local_e8;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar3;
  
  fVar26 = __real_3f000000;
  fVar23 = __real_3a83126f;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_238;
  iVar16 = (this->Children).Children.ArrayNum;
  if (iVar16 < 1) {
    return;
  }
  EVar6 = this->Orientation;
  TVar1 = this->ItemWidthAttribute;
  TVar20 = this->ItemHeightAttribute;
  fVar25 = 0.0;
  local_208._0_4_ = SUB84(param_1->Size,0);
  local_208._4_4_ = SUB84(param_1->Size,4);
  TVar22 = TVar1;
  fVar2 = local_208._4_4_;
  TVar3 = TVar20;
  if (EVar6 == Orient_Vertical) {
    TVar22 = TVar20;
    fVar2 = (float)local_208;
    TVar3 = TVar1;
  }
  local_1e0 = param_2;
  if (((float)TVar3 <= 0.0) || ((float)TVar22 <= 0.0)) {
    uVar14 = 0;
    auVar21 = roundps(ZEXT416((uint)TVar1),ZEXT416((uint)this->FirstLineScrollOffset),1);
    fVar23 = 0.0;
    if ((float)iVar16 <= auVar21._0_4_) {
      auVar21._0_4_ = (float)iVar16;
    }
    iVar16 = (int)auVar21._0_4_;
    if (0 < iVar16) {
      lVar17 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar14 < (this->Children).Children.ArrayNum) {
          uVar11 = ~uVar14 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar13 = SWidget::GetDesiredSize
                           (*(SWidget **)
                             (*(longlong *)
                               ((this->Children).Children.AllocatorInstance.Data + lVar17 * 8) +
                             0x10));
        if (this->Orientation == Orient_Vertical) {
          fStack_1fc = (float)((ulonglong)*(undefined8 *)FVar13 >> 0x20);
        }
        else {
          local_200 = (float)*(undefined8 *)FVar13;
          fStack_1fc = local_200;
        }
        uVar14 = uVar14 + 1;
        fVar23 = fVar23 + fStack_1fc;
        lVar17 = lVar17 + 1;
      } while (lVar17 < iVar16);
    }
    if ((-1 < iVar16) && (iVar16 < (this->Children).Children.ArrayNum)) {
      pFVar12 = TPanelChildren<SListPanel::FSlot>::operator[](&this->Children,iVar16);
      FVar13 = SWidget::GetDesiredSize(*(SWidget **)&pFVar12->field_0x10);
      if (this->Orientation == Orient_Vertical) {
        fStack_1fc = (float)((ulonglong)*(undefined8 *)FVar13 >> 0x20);
      }
      else {
        local_200 = (float)*(undefined8 *)FVar13;
        fStack_1fc = local_200;
      }
      fVar26 = this->FirstLineScrollOffset;
      iVar16 = (int)fVar26;
      fVar25 = fVar26;
      if ((iVar16 != -0x80000000) && ((float)iVar16 != fVar26)) {
        auVar19._4_4_ = fVar26;
        auVar19._0_4_ = fVar26;
        auVar19._8_8_ = 0;
        uVar14 = movmskps(FVar13._0_4_,auVar19);
        fVar25 = (float)(int)(iVar16 - (uVar14 & 1));
      }
      fVar23 = fVar23 + (fVar26 - fVar25) * fStack_1fc;
    }
    iVar16 = (this->Children).Children.ArrayNum;
    uVar14 = 0;
    fVar23 = (float)-((int)ROUND((fVar23 + fVar23) - __real_3f000000) >> 1) - this->OverscrollAmount
    ;
    if (iVar16 < 1) {
      return;
    }
    lVar17 = 0;
    while( true ) {
      uVar15 = ~uVar14 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar14 < iVar16) {
        uVar11 = uVar15;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar13 = SWidget::GetDesiredSize
                         (*(SWidget **)
                           (*(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar17)
                           + 0x10));
      if (this->Orientation == Orient_Vertical) {
        fStack_1fc = (float)((ulonglong)*(undefined8 *)FVar13 >> 0x20);
      }
      else {
        local_200 = (float)*(undefined8 *)FVar13;
        fStack_1fc = local_200;
      }
      uVar11 = 0;
      if ((int)uVar14 < (this->Children).Children.ArrayNum) {
        uVar11 = uVar15;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((*(byte *)(*(longlong *)
                      (*(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar17) +
                      0x10) + 0x39) & 0x19) == 0) {
        fStack_1fc = 0.0;
      }
      if (this->Orientation == Orient_Vertical) {
        local_208._4_4_ = fStack_1fc;
        local_208._0_4_ = fVar2;
      }
      else {
        local_208._4_4_ = fVar2;
        local_208._0_4_ = fStack_1fc;
      }
      if (EVar6 == Orient_Vertical) {
        fVar26 = 0.0;
        fVar25 = fVar23;
      }
      else {
        fVar25 = 0.0;
        fVar26 = fVar23;
      }
      uVar11 = 0;
      if ((int)uVar14 < (this->Children).Children.ArrayNum) {
        uVar11 = uVar15;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) break;
      local_1b8 = local_208;
      local_1cc.Scale = 1.0;
      local_1cc.Translation.field0_0x0._s_0.X = fVar26;
      local_1cc.Translation.field0_0x0._s_0.Y = fVar25;
      FGeometry::MakeChild
                (param_1,&local_138,
                 (TSharedRef<SWidget,1> *)
                 (*(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar17) + 0x10),
                 &local_1b8,&local_1cc);
      FArrangedChildren::AddWidget(local_1e0,&local_138);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_138.Widget.SharedReferenceCount.ReferenceController);
      iVar16 = (this->Children).Children.ArrayNum;
      fVar23 = fVar23 + fStack_1fc;
      uVar14 = uVar14 + 1;
      lVar17 = lVar17 + 8;
      if (iVar16 <= (int)uVar14) {
        return;
      }
    }
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  TVar4 = this->ItemAlignmentAttribute;
  if (TVar4 == (TSlateAttribute<EListItemAlignment,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                )0x0) {
    if (EVar6 == Orient_Vertical) {
      local_208._4_4_ = (float)local_208;
      TVar20 = TVar1;
    }
    if (((0.0 < (float)TVar20) &&
        (iVar10 = (int)ROUND((local_208._4_4_ + local_208._4_4_) / (float)TVar20 - __real_3f000000)
                  >> 1, 0 < iVar10)) && (iVar10 <= iVar16)) {
      fVar28 = ((local_208._4_4_ - __real_3a83126f) - (float)iVar10 * (float)TVar20) / (float)iVar10
      ;
      goto LAB_142a2d676;
    }
  }
  fVar28 = 0.0;
LAB_142a2d676:
  fVar29 = fVar28 * __real_3f000000;
  GetItemSize(this,&local_1f0,param_1,(EListItemAlignment)TVar4);
  uVar14 = 0;
  fVar18 = local_1f0.ScrollAxis * this->FirstLineScrollOffset;
  bVar9 = true;
  lVar17 = 0;
  fVar18 = (float)-((int)ROUND((fVar18 + fVar18) - fVar26) >> 1) - this->OverscrollAmount;
  do {
    if (bVar9) {
      if ((byte)((char)TVar4 - RightAligned) < 2) {
        iVar16 = (this->Children).Children.ArrayNum - uVar14;
        if (iVar16 < 1) {
          fVar23 = 0.0;
        }
        else {
          if (this->Orientation == Orient_Vertical) {
            local_200 = SUB84(param_1->Size,0);
          }
          else {
            fStack_1fc = SUB84(param_1->Size,4);
            local_200 = fStack_1fc;
          }
          GetItemSize(this,local_1b0,param_1,(EListItemAlignment)this->ItemAlignmentAttribute);
          if (local_1b0[0].LineAxis <= 0.0) {
            iVar10 = 0;
          }
          else {
            iVar10 = (int)ROUND((__real_3f800000 / local_1b0[0].LineAxis +
                                __real_3f800000 / local_1b0[0].LineAxis) * local_200 - fVar26) >> 1;
          }
          if (iVar16 < iVar10) {
            iVar10 = iVar16;
          }
          fVar23 = (local_200 - fVar23) - (float)iVar10 * local_1b0[0].LineAxis;
        }
        pFVar12 = TPanelChildren<SListPanel::FSlot>::operator[](&this->Children,uVar14);
        bVar5 = *(byte *)(*(longlong *)&pFVar12->field_0x10 + 0x39);
        if (TVar4 == (TSlateAttribute<EListItemAlignment,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                      )0x4) {
          if ((bVar5 & 0x19) == 0) {
LAB_142a2d7ab:
            fVar23 = 0.0;
          }
        }
        else {
          if ((bVar5 & 0x19) == 0) goto LAB_142a2d7ab;
          fVar23 = fVar23 * fVar26;
        }
        fVar25 = fVar25 + fVar23;
      }
      bVar9 = false;
    }
    fVar23 = fVar25 + fVar29;
    if (local_1f0.Orientation == Orient_Vertical) {
      local_208._4_4_ = local_1f0.ScrollAxis;
      local_208._0_4_ = local_1f0.LineAxis;
    }
    else {
      local_208._4_4_ = local_1f0.LineAxis;
      local_208._0_4_ = local_1f0.ScrollAxis;
    }
    fVar24 = fVar23;
    fVar27 = fVar18;
    if (EVar6 == Orient_Vertical) {
      fVar24 = fVar18;
      fVar27 = fVar23;
    }
    uVar11 = 0;
    if ((int)uVar14 < (this->Children).Children.ArrayNum) {
      uVar11 = ~uVar14 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_1c0 = local_208;
    local_1d8.Scale = 1.0;
    local_1d8.Translation.field0_0x0._s_0.X = fVar27;
    local_1d8.Translation.field0_0x0._s_0.Y = fVar24;
    FGeometry::MakeChild
              (param_1,&local_188,
               (TSharedRef<SWidget,1> *)
               (*(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar17) + 0x10),
               &local_1c0,&local_1d8);
    FArrangedChildren::AddWidget(local_1e0,&local_188);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.Widget.SharedReferenceCount.ReferenceController);
    fVar25 = fVar25 + fVar28 + local_1f0.LineAxis;
    if (fVar2 < fVar25 + local_1f0.LineAxis + fVar28) {
      fVar25 = 0.0;
      fVar18 = fVar18 + local_1f0.ScrollAxis;
      bVar9 = true;
    }
    uVar14 = uVar14 + 1;
    lVar17 = lVar17 + 8;
    fVar23 = __real_3a83126f;
    if ((this->Children).Children.ArrayNum <= (int)uVar14) {
      return;
    }
  } while( true );
}

// PrivateRegisterAttributes @ 142a324e0

void __cdecl SListPanel::PrivateRegisterAttributes(FInitializer *param_1)

{
  FName *pFVar1;
  FName local_res10;
  FAttributeEntry local_38;
  undefined1 local_28 [8];
  ForAnyElementType local_20;
  ulonglong uStack_18;
  
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"ItemWidth");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x260,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_142a32567:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_142a32567;
  }
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"ItemHeight");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x264,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_142a325e1:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_142a325e1;
  }
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"NumDesiredItems");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x268,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 != 0) {
    if (local_20.Data == (FScriptContainerElement *)0x0) goto LAB_142a32665;
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
LAB_142a32665:
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"ItemAlignment");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x25c,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 != 0) {
    if (local_20.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  return;
}

// SetFirstLineScrollOffset @ 142a36190

void __thiscall SListPanel::SetFirstLineScrollOffset(SListPanel *this,float param_1)

{
  this->FirstLineScrollOffset = param_1;
  return;
}

// SetItemHeight @ 142a362d0

void __thiscall SListPanel::SetItemHeight(SListPanel *this,TAttribute<float> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ItemHeightAttribute,(SWidget *)this,param_1,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// SetItemWidth @ 142a36460

void __thiscall SListPanel::SetItemWidth(SListPanel *this,TAttribute<float> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ItemWidthAttribute,(SWidget *)this,param_1,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// SetOverscrollAmount @ 142a365f0

void __thiscall SListPanel::SetOverscrollAmount(SListPanel *this,float param_1)

{
  this->OverscrollAmount = param_1;
  return;
}

// SetRefreshPending @ 142a36600

void __thiscall SListPanel::SetRefreshPending(SListPanel *this,bool param_1)

{
  this->bIsRefreshPending = param_1;
  return;
}

// ShouldArrangeAsTiles @ 142a36b30

bool __thiscall SListPanel::ShouldArrangeAsTiles(SListPanel *this)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = 0x264;
  uVar1 = 0x260;
  if (this->Orientation != Orient_Vertical) {
    lVar2 = 0x260;
    uVar1 = 0x264;
  }
  if ((0.0 < *(float *)((longlong)&this->_padding_ + (ulonglong)uVar1)) &&
     (0.0 < *(float *)((longlong)&this->_padding_ + lVar2))) {
    return true;
  }
  return false;
}

// Slot @ 142a36de0

FSlotArguments * __cdecl SListPanel::Slot(FSlotArguments *__return_storage_ptr__)

{
  FSlotBase *local_res8;
  
  local_res8 = ::operator_new(0x20);
  if (local_res8 == (FSlotBase *)0x0) {
    local_res8 = (FSlotBase *)0x0;
  }
  else {
    local_res8->_padding_ = 0;
    local_res8->Owner = (FChildren *)0x0;
    (local_res8->Widget).Object = (SWidget *)0x0;
    (local_res8->Widget).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FSlotBase::FSlotBase(local_res8);
    local_res8->_padding_ = (longlong)&___7FSlot_SListPanel__6B_;
  }
  TSlotBase<SListPanel::FSlot>::FSlotArguments::FSlotArguments
            (__return_storage_ptr__,(FSlot *)&local_res8);
  return __return_storage_ptr__;
}

// Tick @ 142a36f10

void __thiscall SListPanel::Tick(SListPanel *this,FGeometry *param_1,double param_2,float param_3)

{
  TSlateAttribute<int,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  uint uVar2;
  TSlateAttribute<int,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar3;
  TSlateAttribute<int,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar4;
  longlong lVar5;
  float fVar6;
  float local_res8;
  float fStackX_c;
  FTableViewDimensions local_38 [4];
  
  lVar5 = 0x264;
  uVar2 = 0x260;
  if (this->Orientation != Orient_Vertical) {
    lVar5 = 0x260;
    uVar2 = 0x264;
  }
  if ((*(float *)((longlong)&this->_padding_ + (ulonglong)uVar2) <= 0.0) ||
     (*(float *)((longlong)&this->_padding_ + lVar5) <= 0.0)) {
    this->PreferredNumLines = (int)this->NumDesiredItemsAttribute;
    return;
  }
  if (this->Orientation == Orient_Vertical) {
    local_res8 = SUB84(param_1->Size,0);
  }
  else {
    fStackX_c = SUB84(param_1->Size,4);
    local_res8 = fStackX_c;
  }
  GetItemSize(this,local_38,param_1,(EListItemAlignment)this->ItemAlignmentAttribute);
  fVar6 = GetItemPadding(this,param_1,(EListItemAlignment)this->ItemAlignmentAttribute);
  if ((0.0 < fVar6 + local_38[0].LineAxis) &&
     (TVar1 = this->NumDesiredItemsAttribute, 0 < (int)TVar1)) {
    TVar4 = (TSlateAttribute<int,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
            ~((int)ROUND(__real_bf000000 -
                         (local_res8 + local_res8) / (fVar6 + local_38[0].LineAxis)) >> 1);
    TVar3 = TVar1;
    if ((int)TVar4 < (int)TVar1) {
      TVar3 = TVar4;
    }
    TVar4 = (TSlateAttribute<int,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x1;
    if (1 < (int)TVar3) {
      TVar4 = TVar3;
    }
    this->PreferredNumLines =
         -((int)ROUND(__real_bf000000 - ((float)(int)TVar1 + (float)(int)TVar1) / (float)(int)TVar4)
          >> 1);
    return;
  }
  this->PreferredNumLines = 1;
  return;
}

