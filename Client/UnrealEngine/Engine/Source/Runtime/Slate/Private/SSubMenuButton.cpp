// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// Construct @ 1427ef5e0

void __thiscall SSubMenuButton::Construct(SSubMenuButton *this,FArguments *param_1)

{
  byte *pbVar1;
  SWidget *pSVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar7;
  undefined8 *puVar8;
  TSharedRef<SWidget_const_,1> *pTVar9;
  ulong64 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined1 local_5d8 [8];
  undefined1 auStack_5d0 [8];
  bool local_5c8;
  undefined7 uStack_5c7;
  undefined1 local_5c0 [8];
  ForAnyElementType FStack_5b8;
  ulonglong local_5b0;
  FDestructionSentinel local_5a8;
  code *local_588;
  undefined8 uStack_580;
  bool local_578;
  undefined1 local_568 [552];
  atomic<unsigned___int64> aStack_340;
  bool local_338;
  TDelegateBase<FNotThreadSafeDelegateMode> local_330 [5];
  FText local_2b8;
  bool local_2a8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_2a0 [13];
  Type local_168;
  bool local_b4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  FDelegateAllocation local_a8 [8];
  
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  local_res8 = 0;
  this->bHovered = false;
  (this->ShouldAppearHovered).Value = (param_1->_ShouldAppearHovered).Value;
  (this->ShouldAppearHovered).bIsSet = (param_1->_ShouldAppearHovered).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ShouldAppearHovered).Getter,&(param_1->_ShouldAppearHovered).Getter);
  uStack_580 = (FMRSWRecursiveAccessDetector *)((ulonglong)uStack_580._4_4_ << 0x20);
  local_588 = HandleShouldAppearHovered;
  pTVar7 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SSubMenuButton>
                     ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&local_5a8,this,
                      (pmf_fe49d50a *)&local_588);
  local_5d8._0_2_ = 0x100;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_5d0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar7);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_5a8,
             (FWriteAccessScope *)&local_588);
  puVar8 = (undefined8 *)CONCAT44(local_5a8.Accessor._4_4_,local_5a8.Accessor._0_4_);
  if ((local_5a8._16_4_ != 0) && (puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_5a8.Accessor,0,0,0x10);
    puVar8 = (undefined8 *)CONCAT44(local_5a8.Accessor._4_4_,local_5a8.Accessor._0_4_);
    local_5a8._16_4_ = 0;
  }
  if (local_578 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(uStack_580,(FDestructionSentinel *)&local_588);
    puVar8 = (undefined8 *)CONCAT44(local_5a8.Accessor._4_4_,local_5a8.Accessor._0_4_);
  }
  if (puVar8 != (undefined8 *)0x0) {
    FMemory::Free(puVar8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_5a8);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 ^ (local_5d8[1] << 3 ^ *(byte *)((longlong)&this->_padding_ + 1)) & 8;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)((longlong)&this->_padding_ + 3),(SWidget *)this,(TAttribute<bool> *)local_5d8,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_5d0);
  if ((void *)CONCAT71(uStack_5c7,local_5c8) != (void *)0x0) {
    FMemory::Free((void *)CONCAT71(uStack_5c7,local_5c8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_5d0);
  SButton::FArguments::FArguments((FArguments *)local_568);
  local_5d8 = (undefined1  [8])(param_1->_Label).Value.TextData.Reference;
  if (local_5d8 != (undefined1  [8])0x0) {
    (**(code **)((longlong)*(ITextData *)local_5d8 + 8))(local_5d8,&local_res8);
  }
  auStack_5d0._0_4_ = (param_1->_Label).Value.Flags;
  local_5c8 = (param_1->_Label).bIsSet;
  local_5c0 = (undefined1  [8])0x0;
  FStack_5b8.Data = (FScriptContainerElement *)0x0;
  local_5b0._0_4_ = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_5c0,
             &(param_1->_Label).Getter);
  FText::operator=(&local_2b8,(FText *)local_5d8);
  local_2a8 = local_5c8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            (local_2a0,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_5c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5c0,
             (FWriteAccessScope *)&local_5a8);
  if (((int)local_5b0 != 0) && (FStack_5b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_5b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5b8,0,0,0x10);
    local_5b0._0_4_ = 0;
  }
  if (local_5a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)
               CONCAT44(local_5a8.Accessor._4_4_,local_5a8.Accessor._0_4_),&local_5a8);
  }
  if (FStack_5b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5c0);
  if (local_5d8 != (undefined1  [8])0x0) {
    (**(code **)((longlong)*(ITextData *)local_5d8 + 0x10))();
  }
  local_b4 = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b0,(FWriteAccessScope *)local_5d8);
  local_5c0 = (undefined1  [8])local_a8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x38,local_a8);
  if (puVar8 == (undefined8 *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_588 = InvertOnHover;
    uStack_580 = (FMRSWRecursiveAccessDetector *)((ulonglong)local_5a8.Accessor._4_4_ << 0x20);
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget_const_,1> *)&local_5a8);
    pTVar11 = (pTVar9->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar9->Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSubMenuButton___00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar8[3] = pSVar2;
    puVar8[4] = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    puVar8[5] = local_588;
    puVar8[6] = uStack_580;
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_5a8.Accessor._4_4_,local_5a8.Accessor._0_4_));
  }
  if (local_5c8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)auStack_5d0,(FDestructionSentinel *)local_5d8);
  }
  local_5d8 = *(undefined1 (*) [8])&param_1->_ContentPadding;
  auStack_5d0 = *(undefined1 (*) [8])&(param_1->_ContentPadding).Right;
  local_568._536_4_ = HAlign_Fill;
  local_568._540_4_ = VAlign_Fill;
  local_5c8 = true;
  local_5b0 = 0;
  local_338 = true;
  local_5c0 = (undefined1  [8])0x0;
  FStack_5b8.Data = (FScriptContainerElement *)0x0;
  local_568._544_8_ = local_5d8;
  aStack_340 = (atomic<unsigned___int64>)auStack_5d0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            (local_330,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_5c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5c0,
             (FWriteAccessScope *)&local_5a8);
  if (((int)local_5b0 != 0) && (FStack_5b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_5b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5b8,0,0,0x10);
    local_5b0 = local_5b0 & 0xffffffff00000000;
  }
  if (local_5a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)
               CONCAT44(local_5a8.Accessor._4_4_,local_5a8.Accessor._0_4_),&local_5a8);
  }
  if (FStack_5b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5c0);
  if (param_1->_ButtonStyle != (FButtonStyle *)0x0) {
    local_568._520_8_ = param_1->_ButtonStyle;
  }
  SButton::FArguments::OnClicked((FArguments *)local_568,&param_1->_OnClicked);
  uVar6 = local_568._512_8_;
  local_568._512_8_ = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  local_568._504_8_ = (param_1->_Content).Widget.Object;
  local_168 = MouseDown;
  if ((TReferenceControllerBase<1> *)local_568._512_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_568._512_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_568._512_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)uVar6);
  SButton::Construct((SButton *)this,(FArguments *)local_568);
  SButton::FArguments::~FArguments((FArguments *)local_568);
  return;
}

// HandleShouldAppearHovered @ 1428176f0

bool __thiscall SSubMenuButton::HandleShouldAppearHovered(SSubMenuButton *this)

{
  bool *pbVar1;
  
  if (this->bHovered == false) {
    pbVar1 = TAttribute<bool>::Get(&this->ShouldAppearHovered);
    if (*pbVar1 == false) {
      return false;
    }
  }
  return true;
}

// InvertOnHover @ 14281cd80

FSlateColor * __thiscall
SSubMenuButton::InvertOnHover(SSubMenuButton *this,FSlateColor *__return_storage_ptr__)

{
  EStyleColor EVar1;
  undefined2 uVar2;
  
  if (*(char *)((longlong)&this->_padding_ + 3) != '\0') {
    (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0 =
         (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
    EVar1 = FStyleColors::ForegroundHover.ColorTableId;
    uVar2 = FStyleColors::ForegroundHover._18_2_;
    __return_storage_ptr__->ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
    __return_storage_ptr__->ColorTableId = EVar1;
    *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar2;
    return __return_storage_ptr__;
  }
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = 0x3f800000;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = 1.0;
  __return_storage_ptr__->ColorUseRule = UseColor_UseStyle;
  __return_storage_ptr__->ColorTableId = Black;
  return __return_storage_ptr__;
}

// OnMouseEnter @ 14282a310

void __thiscall
SSubMenuButton::OnMouseEnter(SSubMenuButton *this,FGeometry *param_1,FPointerEvent *param_2)

{
  this->bHovered = true;
  SButton::OnMouseEnter((SButton *)this,param_1,param_2);
  return;
}

// OnMouseLeave @ 14282a5a0

void __thiscall SSubMenuButton::OnMouseLeave(SSubMenuButton *this,FPointerEvent *param_1)

{
  this->bHovered = false;
  SButton::OnMouseLeave((SButton *)this,param_1);
  return;
}

