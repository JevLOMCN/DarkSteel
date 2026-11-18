// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 8

// AsWidget @ 1429c8690

TSharedRef<SWidget,1> * __thiscall
SErrorHint::AsWidget(SErrorHint *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TSharedRef<SWidget,1> *pTVar3;
  TSharedRef<SWidget,1> local_18;
  
  pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this[-1]._padding_,&local_18);
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar3->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->Object = pSVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->Object = pSVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// Construct @ 1429d0960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SErrorHint::Construct(SErrorHint *this,FArguments *param_1)

{
  int *piVar1;
  longlong *this_00;
  FSlotBase *this_01;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  SImage *pSVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *pTVar12;
  FCurveSequence *pFVar13;
  TSlateMemberAttributeRef<SWidget::TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
  *this_02;
  TAttribute<EVisibility> *pTVar14;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *pTVar15;
  SWidget *pSVar16;
  FArguments *pFVar17;
  ISlateStyle *pIVar18;
  FName *pFVar19;
  undefined8 *puVar20;
  TSharedRef<SWidget_const_,1> *pTVar21;
  ulong64 uVar22;
  TSharedRef<SImage,1> *pTVar23;
  longlong *plVar24;
  longlong *plVar25;
  longlong *plVar26;
  FArguments *pFVar27;
  undefined4 local_res8 [2];
  FArguments *local_res10;
  FLLMScope local_res18 [2];
  FName local_res20;
  code *local_5a8;
  ulonglong uStack_5a0;
  FSlateBrush *local_598;
  undefined1 local_590;
  undefined1 local_588 [8];
  ForAnyElementType FStack_580;
  ulonglong local_578;
  undefined1 local_570 [8];
  ForAnyElementType local_568;
  int local_560;
  undefined1 local_558 [8];
  ForAnyElementType local_550;
  int local_548;
  SImage *local_540;
  FSharedReferencer<1> local_538;
  FMargin local_530;
  undefined1 local_520;
  undefined1 local_518 [8];
  ForAnyElementType FStack_510;
  ulonglong local_508;
  SImage *local_500;
  TReferenceControllerBase<1> *pTStack_4f8;
  FMemScope local_4f0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_4e8;
  TSharedRef<SImage,1> local_4d0;
  FDestructionSentinel local_4c0;
  FDestructionSentinel local_4a8;
  FDestructionSentinel local_490;
  FDestructionSentinel local_478;
  FDestructionSentinel local_460;
  longlong *local_448;
  TVector2<double>_u_0 local_440;
  undefined1 local_430;
  undefined1 local_428 [24];
  undefined1 local_410 [24];
  undefined1 local_3f8 [24];
  FName local_3e0;
  code *local_3d8;
  ulonglong uStack_3d0;
  TSharedRef<SWidget_const_,1> local_3c8;
  undefined1 local_3b8 [8];
  undefined1 local_3b0 [24];
  TAttribute<EVisibility> local_398;
  undefined1 local_378 [24];
  FCurveSequence local_360;
  FArguments local_2f0;
  
  plVar26 = (longlong *)0x0;
  local_res8[0] = 0;
  local_5a8 = GetDesiredSizeScale;
  uStack_5a0 = uStack_5a0 & 0xffffffff00000000;
  local_3d8 = GetDesiredSizeScale;
  uStack_3d0 = uStack_5a0;
  local_res10 = param_1;
  pTVar12 = TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<SErrorHint>
                      ((TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
                        *)local_570,this,(pmf_49c8259a *)&local_3d8);
  local_430 = 1;
  local_440._s_0.X = 0.0;
  local_440._s_0.Y = 0.0;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_428,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar12);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_570,
             (FWriteAccessScope *)&local_4c0);
  if ((local_560 != 0) && (local_568.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_568.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_568,0,0,0x10);
    local_560 = 0;
  }
  if (local_4c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4c0.Accessor,&local_4c0);
  }
  if (local_568.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_568.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_570);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->_padding_,(SWidget *)this,
           (TAttribute<UE::Math::TVector2<double>_> *)&local_440._s_0,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_428);
  if ((void *)local_428._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_428._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_428);
  pFVar13 = FCurveSequence::FCurveSequence(&local_360,0.0,__real_3e19999a,Linear);
  FCurveSequence::operator=(&this->ExpandAnimation,pFVar13);
  FCurveSequence::~FCurveSequence(&local_360);
  this_02 = (TSlateMemberAttributeRef<SWidget::TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
             *)SWidget::GetVisibilityAttribute
                         ((SWidget *)this,
                          (TSlateAttributeRef<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                           *)local_378);
  pTVar14 = SlateAttributePrivate::
            TSlateMemberAttributeRef<SWidget::TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
            ::ToAttribute(this_02,(TAttribute<EVisibility> *)local_3b8);
  (this->CustomVisibility).Value.Value.Value = (pTVar14->Value).Value.Value;
  (this->CustomVisibility).bIsSet = pTVar14->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CustomVisibility).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar14->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3b0);
  if ((void *)local_3b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3b0);
  if ((longlong *)local_378._8_8_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(local_378._8_8_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)local_378._8_8_ + 8))(local_378._8_8_,1);
    }
  }
  uStack_5a0 = uStack_5a0 & 0xffffffff00000000;
  local_5a8 = MyVisibility;
  pTVar15 = TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SErrorHint>
                      ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_558,
                       this,(pmf_26774077 *)&local_5a8);
  local_398.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
  local_398.bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_398.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar15);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_558,
             (FWriteAccessScope *)&local_4a8);
  if ((local_548 != 0) && (local_550.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_550.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_550,0,0,0x10);
    local_548 = 0;
  }
  if (local_4a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4a8.Accessor,&local_4a8);
  }
  if (local_550.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_550.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_558);
  SCompoundWidget::SetVisibility((SCompoundWidget *)this,&local_398);
  uVar9 = _UNK_150978bd8;
  uVar7 = ___xmm_00000000404000000000000040400000;
  *(undefined4 *)&this->_padding_ = 2;
  local_520 = 1;
  plVar25 = &this->_padding_;
  if (&this->_padding_ == (longlong *)0x0) {
    plVar25 = plVar26;
  }
  local_410[0x10] = true;
  local_508 = 0;
  *(undefined4 *)((longlong)plVar25 + 0x54) = 2;
  uVar10 = _UNK_150978bd8;
  uVar8 = ___xmm_00000000404000000000000040400000;
  this_00 = plVar25 + 8;
  ___xmm_00000000404000000000000040400000 = (float)uVar7;
  _UNK_150978bd4 = SUB84(uVar7,4);
  local_530.Left = ___xmm_00000000404000000000000040400000;
  local_530.Top = _UNK_150978bd4;
  _UNK_150978bd8 = (float)uVar9;
  _UNK_150978bdc = SUB84(uVar9,4);
  local_530.Right = _UNK_150978bd8;
  local_530.Bottom = _UNK_150978bdc;
  local_518 = (undefined1  [8])0x0;
  FStack_510.Data = (FScriptContainerElement *)0x0;
  ___xmm_00000000404000000000000040400000 = (float)uVar7;
  _UNK_150978bd4 = SUB84(uVar7,4);
  local_410._0_4_ = ___xmm_00000000404000000000000040400000;
  local_410._4_4_ = _UNK_150978bd4;
  _UNK_150978bd8 = (float)uVar9;
  _UNK_150978bdc = SUB84(uVar9,4);
  local_410._8_4_ = _UNK_150978bd8;
  local_410._12_4_ = _UNK_150978bdc;
  ___xmm_00000000404000000000000040400000 = uVar8;
  _UNK_150978bd8 = uVar10;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f8,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_518);
  plVar24 = plVar25;
  if (this_00 == (longlong *)0x0) {
    plVar24 = plVar26;
  }
  pSVar16 = FSlotBase::GetOwnerWidget((FSlotBase *)(plVar24 + 4));
  if ((pSVar16 == (SWidget *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("OwnerWidget",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\BasicLayoutWidgetSlot.h"
                          ,0x170,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)this_00,pSVar16,(TAttribute<FMargin> *)local_410,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f8);
  if ((void *)local_3f8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3f8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3f8);
  plVar24 = plVar26;
  if (this_00 != (longlong *)0x0) {
    plVar24 = plVar25;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_518,
             (FWriteAccessScope *)&local_490);
  if (((int)local_508 != 0) && (FStack_510.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_510.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_510,0,0,0x10);
    local_508 = local_508 & 0xffffffff00000000;
  }
  if (local_490.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_490.Accessor,&local_490);
  }
  if (FStack_510.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_510.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_518);
  pFVar17 = SImage::FArguments::FArguments(&local_2f0);
  pIVar18 = FAppStyle::Get();
  pcVar5 = *(code **)((longlong)*pIVar18 + 0x50);
  pFVar19 = ::FName::FName(&local_3e0,"Icons.Error");
  local_598 = (FSlateBrush *)(*pcVar5)(pIVar18,*pFVar19);
  local_590 = 1;
  local_588 = (undefined1  [8])0x0;
  FStack_580.Data = (FScriptContainerElement *)0x0;
  local_578 = 0;
  (pFVar17->_Image).Value = local_598;
  (pFVar17->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_588);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_588,
             (FWriteAccessScope *)&local_478);
  if (((int)local_578 != 0) && (FStack_580.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_580.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_580,0,0,0x10);
    local_578 = local_578 & 0xffffffff00000000;
  }
  if (local_478.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_478.Accessor,&local_478);
  }
  if (FStack_580.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_580.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_588);
  *(undefined1 *)&pFVar17->_padding_ = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar17->_padding_,
             (FWriteAccessScope *)&local_460);
  local_448 = &pFVar17->_padding_;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_448);
  pFVar27 = local_res10;
  if (puVar20 != (undefined8 *)0x0) {
    local_5a8 = GetErrorText;
    uStack_5a0 = (ulonglong)local_4d0.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3c8);
    pFVar27 = (FArguments *)(pTVar21->SharedReferenceCount).ReferenceController;
    pSVar16 = pTVar21->Object;
    if (pFVar27 != (FArguments *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar27->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar27->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pFVar27->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar27->_padding_ + 1);
      UNLOCK();
    }
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSErrorHint___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = pSVar16;
    puVar20[4] = pFVar27;
    if (pFVar27 != (FArguments *)0x0) {
      LOCK();
      ((atomic<int> *)&pFVar27->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pFVar27->_padding_)[1] + 1);
      UNLOCK();
    }
    plVar26 = (longlong *)&DAT_00000007;
    puVar20[5] = local_5a8;
    puVar20[6] = uStack_5a0;
  }
  if (((ulonglong)plVar26 & 4) != 0) {
    plVar26 = (longlong *)(ulonglong)((uint)plVar26 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar27);
  }
  if (((ulonglong)plVar26 & 2) != 0) {
    plVar26 = (longlong *)(ulonglong)((uint)plVar26 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar27);
  }
  if (((ulonglong)plVar26 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3c8.SharedReferenceCount.ReferenceController);
  }
  if (local_460.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_460.Accessor,&local_460);
  }
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4f0,&local_res20,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_4e8,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SErrorHint.cpp"
             ,0x15,(T0RequiredArgs *)local_res8);
  FMemScope::~FMemScope(&local_4f0);
  FLLMScope::~FLLMScope(local_res18);
  local_540 = local_4e8._Widget.Object;
  local_538.ReferenceController = local_4e8._Widget.SharedReferenceCount.ReferenceController;
  if (local_4e8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4e8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_4e8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  if (&this->ImageWidget != (TSharedPtr<SWidget,1> *)&local_540) {
    (this->ImageWidget).Object = (SWidget *)local_4e8._Widget.Object;
    local_540 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ImageWidget).SharedReferenceCount,&local_538);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_538.ReferenceController);
  pTVar23 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4e8,&local_4d0,pFVar17);
  this_01 = (FSlotBase *)(plVar24 + 4);
  pTVar3 = (pTVar23->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar23->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent(this_01);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent(this_01);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (TReferenceControllerBase<1> *)plVar24[7];
  plVar24[6] = (longlong)pSVar4;
  plVar24[7] = (longlong)pTVar3;
  local_500 = pSVar4;
  pTStack_4f8 = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FSlotBase::AfterContentOrOwnerAssigned(this_01);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_4d0.SharedReferenceCount.ReferenceController._4_4_,
                      local_4d0.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4e8._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_2f0);
                    /* WARNING: Could not recover jumptable at 0x0001429d10e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)this->_padding_)(&this->_padding_,&local_res10->_ErrorText);
  return;
}

// GetDesiredSizeScale @ 1429eb510

TVector2<double> * __thiscall
SErrorHint::GetDesiredSizeScale(SErrorHint *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  
  fVar1 = FCurveSequence::GetLerp(&this->ExpandAnimation);
  (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  return __return_storage_ptr__;
}

// GetErrorText @ 1429eb6c0

FText * __thiscall SErrorHint::GetErrorText(SErrorHint *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->ErrorText).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->ErrorText).Flags;
  return __return_storage_ptr__;
}

// HasError @ 1429f3180

bool __thiscall SErrorHint::HasError(SErrorHint *this)

{
  bool bVar1;
  
  bVar1 = FText::IsEmpty((FText *)&this->_padding_);
  return !bVar1;
}

// MyVisibility @ 1429f7c40

/* WARNING: Type propagation algorithm not settling */

EVisibility __thiscall SErrorHint::MyVisibility(SErrorHint *this)

{
  char cVar1;
  EVisibility EVar2;
  EVisibility *pEVar3;
  TEnumAsByte<EVisibility::Private> *in_RDX;
  
  cVar1 = (**(code **)(this->_padding_ + 0x10))();
  EVar2.Value.Value = SUB81(in_RDX,0);
  if (cVar1 == '\0') {
    in_RDX->Value = (uchar)EVisibility::Hidden.Value.Value;
    return (EVisibility)EVar2.Value.Value;
  }
  if ((this->CustomVisibility).bIsSet != false) {
    pEVar3 = TAttribute<EVisibility>::Get(&this->CustomVisibility);
    in_RDX->Value = (pEVar3->Value).Value;
    return (EVisibility)EVar2.Value.Value;
  }
  in_RDX->Value = (uchar)EVisibility::Visible.Value.Value;
  return (EVisibility)EVar2.Value.Value;
}

// SetError @ 142a093c0

void __thiscall SErrorHint::SetError(SErrorHint *this,FString *param_1)

{
  code *pcVar1;
  FText *pFVar2;
  FText local_18;
  
  pcVar1 = *(code **)this->_padding_;
  pFVar2 = FText::FromString(&local_18,param_1);
  (*pcVar1)(this,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetError @ 142a09410

void __thiscall SErrorHint::SetError(SErrorHint *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  bool bVar3;
  TSharedRef<SWidget,1> *pTVar4;
  undefined1 local_res8 [8];
  TSharedRef<SWidget,1> local_18;
  
  bVar3 = FText::IsEmpty((FText *)&this->_padding_);
  if (bVar3) {
    bVar3 = FText::IsEmpty(param_1);
    if (!bVar3) {
      pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this[-1]._padding_,&local_18);
      FCurveSequence::Play((FCurveSequence *)&this->_padding_,pTVar4,false,0.0,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (ITextData *)this->_padding_;
  if (pIVar2 != pIVar1) {
    this->_padding_ = (longlong)pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  *(uint *)&this->_padding_ = param_1->Flags;
  SWidget::SetToolTipText((SWidget *)&this[-1]._padding_,(FText *)&this->_padding_);
  return;
}

