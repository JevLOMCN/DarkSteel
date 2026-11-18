// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// Construct @ 1427eefa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SMenuEntryButton::Construct(SMenuEntryButton *this,FArguments *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined4 uVar4;
  FArguments *pFVar5;
  FSharedReferencer<1> FStack_590;
  undefined1 local_588;
  undefined3 uStack_587;
  undefined1 local_584;
  undefined1 local_580 [8];
  ForAnyElementType FStack_578;
  ulonglong local_570;
  FDestructionSentinel local_568;
  undefined1 local_550 [520];
  FButtonStyle *local_348;
  undefined1 local_330 [16];
  bool local_320;
  TDelegateBase<FNotThreadSafeDelegateMode> local_318 [19];
  Type local_150;
  FLinearColor_u_0 local_b0;
  bool local_a0;
  undefined3 uStack_9f;
  bool local_9c;
  TDelegateBase<FNotThreadSafeDelegateMode> local_98 [6];
  
  SButton::FArguments::FArguments((FArguments *)local_550);
  local_348 = param_1->_ButtonStyle;
  local_150 = param_1->_ClickMethod;
  local_550._48_8_ = param_1->_padding_;
  FStack_590.ReferenceController = (TReferenceControllerBase<1> *)param_1->_padding_;
  if (FStack_590.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_590.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_590.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  _local_588 = CONCAT31(uStack_587,(char)param_1->_padding_);
  TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy> *)local_580
             ,(TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
              &param_1->_padding_);
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)(local_550 + 0x38),&FStack_590);
  local_550[0x40] = local_588;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_550 + 0x48),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_580);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_580);
  if (FStack_578.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_578.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_580);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_590.ReferenceController);
  local_330._0_4_ = (param_1->_ContentPadding).Left;
  local_330._4_4_ = (param_1->_ContentPadding).Top;
  FStack_590.ReferenceController =
       *(TReferenceControllerBase<1> **)&(param_1->_ContentPadding).Right;
  _local_588 = CONCAT31(uStack_587,1);
  local_570 = 0;
  local_320 = true;
  local_580 = (undefined1  [8])0x0;
  FStack_578.Data = (FScriptContainerElement *)0x0;
  local_330._8_8_ = FStack_590.ReferenceController;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            (local_318,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_580);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_580,
             (FWriteAccessScope *)&local_568);
  if (((int)local_570 != 0) && (FStack_578.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_578.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_578,0,0,0x10);
    local_570 = local_570 & 0xffffffff00000000;
  }
  if (local_568.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_568.Accessor,&local_568);
  }
  if (FStack_578.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_578.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_580);
  local_568._16_2_ = 4;
  uVar4 = local_568._16_4_;
  FStack_590.ReferenceController = _UNK_15090c6d8;
  local_568.bDestroyed = SUB21(4,0);
  local_568._17_3_ = SUB43(uVar4,1);
  local_588 = local_568.bDestroyed;
  uStack_587 = local_568._17_3_;
  local_584 = 1;
  local_580 = (undefined1  [8])0x0;
  FStack_578.Data = (FScriptContainerElement *)0x0;
  local_570 = 0;
  local_b0._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_b0._8_8_ = _UNK_15090c6d8;
  local_568.bDestroyed = SUB21(4,0);
  local_568._17_3_ = SUB43(uVar4,1);
  local_a0 = local_568.bDestroyed;
  uStack_9f = local_568._17_3_;
  local_9c = true;
  local_568._16_4_ = uVar4;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            (local_98,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_580);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_580,
             (FWriteAccessScope *)&local_568);
  if (((int)local_570 != 0) && (FStack_578.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_578.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_578,0,0,0x10);
    local_570 = local_570 & 0xffffffff00000000;
  }
  if (local_568.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_568.Accessor,&local_568);
  }
  if (FStack_578.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_578.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_580);
  pFVar5 = SButton::FArguments::OnClicked((FArguments *)local_550,&param_1->_OnClicked);
  pTVar1 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar2 = (param_1->_Content).Widget.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar5->_Content).Widget.Object = pSVar2;
  (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SButton::Construct((SButton *)this,(FArguments *)local_550);
  this->ResponseToMouseUp = Undetermined;
  SButton::FArguments::~FArguments((FArguments *)local_550);
  return;
}

// OnMouseButtonUp @ 142829d90

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMenuEntryButton::OnMouseButtonUp
          (SMenuEntryButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  if ((this->ResponseToMouseUp == Handle) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
    (**(code **)(this->_padding_ + 0x250))();
  }
  SButton::OnMouseButtonUp((SButton *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseLeave @ 14282a550

void __thiscall SMenuEntryButton::OnMouseLeave(SMenuEntryButton *this,FPointerEvent *param_1)

{
  if (this->ResponseToMouseUp == DoNotHandle) {
    this->ResponseToMouseUp = Handle;
  }
  (**(code **)(this->_padding_ + 600))();
  SButton::OnMouseLeave((SButton *)this,param_1);
  return;
}

// Tick @ 142836e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMenuEntryButton::Tick(SMenuEntryButton *this,FGeometry *param_1,double param_2,float param_3)

{
  FDeprecateVector2DParameter FVar1;
  bool bVar2;
  FSlateApplication *pFVar3;
  FDeprecateVector2DParameter *pFVar4;
  FDeprecateSlateVector2D local_res8;
  TVector2<float>_u_0 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  FSlateRotatedRect local_48 [2];
  
  if (this->ResponseToMouseUp == Undetermined) {
    pFVar3 = FSlateApplication::Get();
    pFVar4 = (FDeprecateVector2DParameter *)
             (**(code **)(*(longlong *)pFVar3 + 0x68))(pFVar3,&local_res8);
    local_60 = (TVector2<float>_u_0)0x0;
    local_54 = 0;
    FVar1 = *pFVar4;
    local_res8 = param_1->Size;
    local_58 = local_res8._0_4_;
    local_4c = local_res8._4_4_;
    TransformRect<TTransform2<float>_>
              (local_48,&param_1->AccumulatedRenderTransform,(FSlateRotatedRect *)&local_60._s_0);
    bVar2 = FSlateRotatedRect::IsUnderLocation(local_48,FVar1);
    this->ResponseToMouseUp = bVar2 + Handle;
  }
  SWidget::Tick((SWidget *)this,param_1,param_2,param_3);
  return;
}

