// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// Construct @ 14271ae30

void __thiscall SDockingTarget::Construct(SDockingTarget *this,FArguments *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  RelativeDirection RVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  SWidget *pSVar6;
  SImage *pSVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  EVerticalAlignment EVar11;
  ISlateStyle *pIVar12;
  FName *pFVar13;
  FSlateBrush *pFVar14;
  FArguments *pFVar15;
  undefined8 *puVar16;
  FArguments *pFVar17;
  TSharedRef<SWidget_const_,1> *pTVar18;
  ulong64 uVar19;
  TSharedRef<SImage,1> *pTVar20;
  char *pcVar21;
  EHorizontalAlignment EVar22;
  TReferenceControllerBase<1> *pTVar23;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FMemScope local_res20;
  longlong lStack_7c0;
  FDestructionSentinel local_7b8;
  FSlateBrush *local_7a0;
  undefined1 local_798;
  undefined1 local_790 [8];
  ForAnyElementType FStack_788;
  ulonglong local_780;
  undefined8 local_778;
  undefined8 uStack_770;
  uint local_768;
  undefined1 local_764;
  undefined1 local_760 [8];
  ForAnyElementType FStack_758;
  ulonglong local_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined1 local_738;
  undefined1 local_730 [8];
  void *pvStack_728;
  undefined8 local_720;
  TSharedRef<SImage,1> local_718;
  FDestructionSentinel local_708;
  undefined1 *local_6f0;
  FName local_6e8;
  FName local_6e0;
  FArguments local_6d8;
  FArguments local_430;
  
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  EVar22 = HAlign_Fill;
  local_res8.ComparisonIndex.Value = 0;
  (this->OwnerNode).Object = (param_1->_OwnerNode).Object;
  pTVar23 = (param_1->_OwnerNode).SharedReferenceCount.ReferenceController;
  if (pTVar23 != (this->OwnerNode).WeakReferenceCount.ReferenceController) {
    if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar23->WeakReferenceCount = (atomic<int>)((int)pTVar23->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->OwnerNode).WeakReferenceCount.ReferenceController;
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
    (this->OwnerNode).WeakReferenceCount.ReferenceController = pTVar23;
  }
  RVar3 = param_1->_DockDirection;
  this->DockDirection = RVar3;
  this->bIsDragHovered = false;
  if (RVar3 == LeftOf) {
    pIVar12 = FAppStyle::Get();
    pcVar5 = *(code **)((longlong)*pIVar12 + 0x50);
    pFVar13 = ::FName::FName(&local_res8,"Docking.Cross.DockLeft");
    pFVar14 = (FSlateBrush *)(*pcVar5)(pIVar12,*pFVar13,0,0);
    this->TargetImage = pFVar14;
    pIVar12 = FAppStyle::Get();
    pcVar21 = "Docking.Cross.DockLeft_Hovered";
  }
  else if (RVar3 == Above) {
    pIVar12 = FAppStyle::Get();
    pcVar5 = *(code **)((longlong)*pIVar12 + 0x50);
    pFVar13 = ::FName::FName(&local_res8,"Docking.Cross.DockTop");
    pFVar14 = (FSlateBrush *)(*pcVar5)(pIVar12,*pFVar13,0,0);
    this->TargetImage = pFVar14;
    pIVar12 = FAppStyle::Get();
    pcVar21 = "Docking.Cross.DockTop_Hovered";
  }
  else if (RVar3 == RightOf) {
    pIVar12 = FAppStyle::Get();
    pcVar5 = *(code **)((longlong)*pIVar12 + 0x50);
    pFVar13 = ::FName::FName(&local_res8,"Docking.Cross.DockRight");
    pFVar14 = (FSlateBrush *)(*pcVar5)(pIVar12,*pFVar13,0,0);
    this->TargetImage = pFVar14;
    pIVar12 = FAppStyle::Get();
    pcVar21 = "Docking.Cross.DockRight_Hovered";
  }
  else if (RVar3 == Below) {
    pIVar12 = FAppStyle::Get();
    pcVar5 = *(code **)((longlong)*pIVar12 + 0x50);
    pFVar13 = ::FName::FName(&local_res8,"Docking.Cross.DockBottom");
    pFVar14 = (FSlateBrush *)(*pcVar5)(pIVar12,*pFVar13,0,0);
    this->TargetImage = pFVar14;
    pIVar12 = FAppStyle::Get();
    pcVar21 = "Docking.Cross.DockBottom_Hovered";
  }
  else {
    pIVar12 = FAppStyle::Get();
    pcVar5 = *(code **)((longlong)*pIVar12 + 0x50);
    pFVar13 = ::FName::FName(&local_res8,"Docking.Cross.DockCenter");
    pFVar14 = (FSlateBrush *)(*pcVar5)(pIVar12,*pFVar13,0,0);
    this->TargetImage = pFVar14;
    pIVar12 = FAppStyle::Get();
    pcVar21 = "Docking.Cross.DockCenter_Hovered";
  }
  pcVar5 = *(code **)((longlong)*pIVar12 + 0x50);
  pFVar13 = ::FName::FName(&local_res8,pcVar21);
  pFVar14 = (FSlateBrush *)(*pcVar5)(pIVar12,*pFVar13,0,0);
  this->TargetImage_Hovered = pFVar14;
  pFVar15 = SBorder::FArguments::FArguments(&local_430);
  pIVar12 = FAppStyle::Get();
  pcVar5 = *(code **)((longlong)*pIVar12 + 0x38);
  pFVar13 = ::FName::FName(&local_6e8,"Docking.Cross.Tint");
  puVar16 = (undefined8 *)(*pcVar5)(pIVar12,*pFVar13,0,&FStyleDefaults::DefaultColor,0);
  local_748 = *puVar16;
  uStack_740 = puVar16[1];
  local_738 = 1;
  local_720 = 0;
  local_730 = (undefined1  [8])0x0;
  pvStack_728 = (void *)0x0;
  *(undefined8 *)&(pFVar15->_ColorAndOpacity).Value.field0_0x0 = local_748;
  *(undefined8 *)((longlong)&(pFVar15->_ColorAndOpacity).Value.field0_0x0 + 8) = uStack_740;
  (pFVar15->_ColorAndOpacity).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_730);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_730);
  if (pvStack_728 != (void *)0x0) {
    FMemory::Free(pvStack_728);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_730);
  pIVar12 = FAppStyle::Get();
  pcVar5 = *(code **)((longlong)*pIVar12 + 0x38);
  pFVar13 = ::FName::FName(&local_6e0,"Docking.Cross.Tint");
  puVar16 = (undefined8 *)(*pcVar5)(pIVar12,*pFVar13,0,&FStyleDefaults::DefaultColor,0);
  local_778 = *puVar16;
  uStack_770 = puVar16[1];
  local_768 = local_768 & 0xffffff00;
  local_764 = 1;
  local_750 = 0;
  local_760 = (undefined1  [8])0x0;
  FStack_758.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar15->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 = local_778;
  *(undefined8 *)((longlong)&(pFVar15->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8)
       = uStack_770;
  (pFVar15->_BorderBackgroundColor).Value.ColorUseRule = (undefined1)local_768;
  (pFVar15->_BorderBackgroundColor).Value.ColorTableId = local_768._1_1_;
  *(undefined2 *)&(pFVar15->_BorderBackgroundColor).Value.field_0x12 = local_768._2_2_;
  (pFVar15->_BorderBackgroundColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_BorderBackgroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_760);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_760,
             (FWriteAccessScope *)&local_7b8);
  if (((int)local_750 != 0) && (FStack_758.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_758.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_758,0,0,0x10);
    local_750 = local_750 & 0xffffffff00000000;
  }
  if (local_7b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7b8.Accessor,&local_7b8);
  }
  if (FStack_758.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_758.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_760);
  RVar3 = param_1->_DockDirection;
  if (RVar3 == LeftOf) {
    pIVar12 = FAppStyle::Get();
    pcVar21 = "Docking.Cross.BorderLeft";
  }
  else if (RVar3 == Above) {
    pIVar12 = FAppStyle::Get();
    pcVar21 = "Docking.Cross.BorderTop";
  }
  else if (RVar3 == RightOf) {
    pIVar12 = FAppStyle::Get();
    pcVar21 = "Docking.Cross.BorderRight";
  }
  else if (RVar3 == Below) {
    pIVar12 = FAppStyle::Get();
    pcVar21 = "Docking.Cross.BorderBottom";
  }
  else {
    pIVar12 = FAppStyle::Get();
    pcVar21 = "Docking.Cross.BorderCenter";
  }
  pcVar5 = *(code **)((longlong)*pIVar12 + 0x50);
  pFVar13 = ::FName::FName(&local_res10,pcVar21);
  local_7a0 = (FSlateBrush *)(*pcVar5)(pIVar12,*pFVar13);
  local_798 = 1;
  local_780 = 0;
  local_790 = (undefined1  [8])0x0;
  FStack_788.Data = (FScriptContainerElement *)0x0;
  (pFVar15->_BorderImage).Value = local_7a0;
  (pFVar15->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_790);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_790,
             (FWriteAccessScope *)&local_7b8);
  if (((int)local_780 != 0) && (FStack_788.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_788.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_788,0,0,0x10);
    local_780 = local_780 & 0xffffffff00000000;
  }
  if (local_7b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7b8.Accessor,&local_7b8);
  }
  if (FStack_788.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_788.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_790);
  if (this->DockDirection == Center) {
    EVar22 = HAlign_Center;
  }
  pFVar15->_HAlign = EVar22;
  EVar11 = VAlign_Fill;
  if (this->DockDirection == Center) {
    EVar11 = VAlign_Center;
  }
  pFVar15->_VAlign = EVar11;
  pFVar17 = SImage::FArguments::FArguments(&local_6d8);
  (pFVar17->_Image).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_Image).Getter,
             (FWriteAccessScope *)&local_708);
  local_6f0 = &(pFVar17->_Image).Getter.field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_6f0);
  if (puVar16 == (undefined8 *)0x0) {
    pTVar23 = (TReferenceControllerBase<1> *)
              CONCAT44(local_res8.Number,local_res8.ComparisonIndex.Value);
  }
  else {
    lStack_7c0 = (ulonglong)local_718.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar18 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget_const_,1> *)&local_7b8);
    pTVar23 = (pTVar18->SharedReferenceCount).ReferenceController;
    pSVar6 = pTVar18->Object;
    if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar19;
    *puVar16 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSDockingTarget___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = pSVar6;
    puVar16[4] = pTVar23;
    if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar23->WeakReferenceCount = (atomic<int>)((int)pTVar23->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar10 = true;
    bVar9 = true;
    bVar8 = true;
    puVar16[5] = GetTargetImage;
    puVar16[6] = lStack_7c0;
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_7b8.Accessor);
  }
  if (local_708.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_708.Accessor,&local_708);
  }
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
            );
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)&local_7b8,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTarget.cpp"
             ,0x46,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res10);
  pTVar20 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)&local_7b8,&local_718,
                       pFVar17);
  pTVar23 = (pTVar20->SharedReferenceCount).ReferenceController;
  pSVar7 = pTVar20->Object;
  if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar15->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar15->_Content).Widget.Object = (SWidget *)pSVar7;
  (pFVar15->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar23;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SBorder::Construct((SBorder *)this,pFVar15);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_718.SharedReferenceCount.ReferenceController._4_4_,
                      local_718.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_7b8.Accessor);
  SImage::FArguments::~FArguments(&local_6d8);
  SBorder::FArguments::~FArguments(&local_430);
  return;
}

// GetDockDirection @ 14273dcf0

RelativeDirection __thiscall SDockingTarget::GetDockDirection(SDockingTarget *this)

{
  return this->DockDirection;
}

// GetOwner @ 142742100

TSharedPtr<SDockingNode,1> * __thiscall
SDockingTarget::GetOwner(SDockingTarget *this,TSharedPtr<SDockingNode,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  __return_storage_ptr__->Object = (SDockingNode *)0x0;
  pTVar1 = (this->OwnerNode).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (this->OwnerNode).Object;
  }
  return __return_storage_ptr__;
}

// GetTargetImage @ 142744df0

FSlateBrush * __thiscall SDockingTarget::GetTargetImage(SDockingTarget *this)

{
  if (this->bIsDragHovered != false) {
    return this->TargetImage_Hovered;
  }
  return this->TargetImage;
}

// OnDragEnter @ 142762070

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingTarget::OnDragEnter(SDockingTarget *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDragDropOperation *pFVar3;
  code *pcVar4;
  FDockingDragOperation *this_00;
  undefined8 uVar5;
  char cVar6;
  atomic<int> aVar7;
  FString *pFVar8;
  ISlateStyle *pIVar9;
  FName *pFVar10;
  undefined8 *puVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  FName local_res18;
  FLinearColor_u_0 local_48;
  RelativeDirection local_38;
  undefined1 local_30 [8];
  void *pvStack_28;
  undefined8 local_20;
  
  pFVar3 = (param_2->Content).Object;
  if (pFVar3 != (FDragDropOperation *)0x0) {
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
    pFVar8 = FDockingDragOperation::GetTypeId();
    cVar6 = (*pcVar4)(pFVar3,pFVar8);
    if (cVar6 != '\0') {
      pTVar12 = (param_2->Content).SharedReferenceCount.ReferenceController;
      this_00 = (FDockingDragOperation *)(param_2->Content).Object;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this_00 != (FDockingDragOperation *)0x0) {
        this->bIsDragHovered = true;
        pIVar9 = FAppStyle::Get();
        pcVar4 = *(code **)((longlong)*pIVar9 + 0x38);
        pFVar10 = ::FName::FName(&local_res18,L"Docking.Cross.HoveredTint");
        puVar11 = (undefined8 *)(*pcVar4)(pIVar9,*pFVar10,0,&FStyleDefaults::DefaultColor,0);
        local_48._0_8_ = *puVar11;
        local_48._8_8_ = puVar11[1];
        local_38 = CONCAT31(local_38._1_3_,1);
        local_20 = 0;
        local_30 = (undefined1  [8])0x0;
        pvStack_28 = (void *)0x0;
        SlateAttributePrivate::
        TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                  *)&this->_padding_,(SWidget *)this,(TAttribute<FLinearColor> *)&local_48._s_0,None
                );
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_30);
        if (pvStack_28 != (void *)0x0) {
          FMemory::Free(pvStack_28);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_30);
        local_48._8_8_ = (this->OwnerNode).WeakReferenceCount.ReferenceController;
        local_38 = this->DockDirection;
        if ((TReferenceControllerBase<1> *)local_48._8_8_ == (TReferenceControllerBase<1> *)0x0) {
          local_48._0_8_ = (SDockingNode *)0x0;
        }
        else {
          aVar2 = ((TReferenceControllerBase<1> *)local_48._8_8_)->SharedReferenceCount;
          do {
            if (aVar2 == (atomic<int>)0x0) {
              local_48._0_8_ = (SDockingNode *)0x0;
              local_48._8_8_ = (TReferenceControllerBase<1> *)0x0;
              goto LAB_1427621d6;
            }
            LOCK();
            aVar7 = ((TReferenceControllerBase<1> *)local_48._8_8_)->SharedReferenceCount;
            bVar13 = aVar2 == aVar7;
            if (bVar13) {
              ((TReferenceControllerBase<1> *)local_48._8_8_)->SharedReferenceCount =
                   (atomic<int>)((int)aVar2 + 1);
              aVar7 = aVar2;
            }
            UNLOCK();
            aVar2 = aVar7;
          } while (!bVar13);
          local_48._0_8_ = (this->OwnerNode).Object;
          LOCK();
          ((TReferenceControllerBase<1> *)local_48._8_8_)->WeakReferenceCount =
               (atomic<int>)
               ((int)((TReferenceControllerBase<1> *)local_48._8_8_)->WeakReferenceCount + 1);
          UNLOCK();
        }
LAB_1427621d6:
        uVar5 = local_48._8_8_;
        FDockingDragOperation::SetHoveredTarget
                  (this_00,(FDockTarget *)&local_48._s_0,(FInputEvent *)param_2);
        if ((TReferenceControllerBase<1> *)local_48._8_8_ != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = (atomic<int> *)(local_48._8_8_ + 0xc);
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(*(longlong *)local_48._8_8_ + 8))(local_48._8_8_,1);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)uVar5);
      }
      goto LAB_14276221a;
    }
  }
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
LAB_14276221a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// OnDragLeave @ 1427628b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTarget::OnDragLeave(SDockingTarget *this,FDragDropEvent *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDragDropOperation *pFVar3;
  code *pcVar4;
  FDockingDragOperation *this_00;
  char cVar5;
  FString *pFVar6;
  ISlateStyle *pIVar7;
  FName *pFVar8;
  undefined8 *puVar9;
  TReferenceControllerBase<1> *pTVar10;
  FName local_res10;
  SDockingNode *local_78;
  FWeakReferencer<1> FStack_70;
  RelativeDirection local_68;
  FLinearColor_u_0 local_60;
  undefined1 local_50;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType FStack_40;
  ulonglong local_38;
  
  pFVar3 = (param_1->Content).Object;
  if (pFVar3 != (FDragDropOperation *)0x0) {
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
    pFVar6 = FDockingDragOperation::GetTypeId();
    cVar5 = (*pcVar4)(pFVar3,pFVar6);
    if (cVar5 != '\0') {
      pTVar10 = (param_1->Content).SharedReferenceCount.ReferenceController;
      this_00 = (FDockingDragOperation *)(param_1->Content).Object;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this_00 != (FDockingDragOperation *)0x0) {
        this->bIsDragHovered = false;
        pIVar7 = FAppStyle::Get();
        pcVar4 = *(code **)((longlong)*pIVar7 + 0x38);
        pFVar8 = ::FName::FName(&local_res10,L"Docking.Cross.Tint");
        puVar9 = (undefined8 *)(*pcVar4)(pIVar7,*pFVar8,0,&FStyleDefaults::DefaultColor,0);
        local_60._0_8_ = *puVar9;
        local_60._8_8_ = puVar9[1];
        local_50 = 1;
        local_38 = 0;
        local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        FStack_40.Data = (FScriptContainerElement *)0x0;
        SlateAttributePrivate::
        TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                  *)&this->_padding_,(SWidget *)this,(TAttribute<FLinearColor> *)&local_60._s_0,None
                );
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_48,(FWriteAccessScope *)&local_78);
        if (((int)local_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_40.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
          local_38 = local_38 & 0xffffffff00000000;
        }
        if ((bool)(undefined1)local_68 == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)FStack_70.ReferenceController,
                     (FDestructionSentinel *)&local_78);
        }
        if (FStack_40.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_40.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
        local_68 = LeftOf;
        local_78 = (SDockingNode *)0x0;
        FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        FDockingDragOperation::SetHoveredTarget
                  (this_00,(FDockTarget *)&local_78,(FInputEvent *)param_1);
        if (FStack_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(FStack_70.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((longlong)
                         *(atomic<unsigned___int64> *)&(FStack_70.ReferenceController)->_padding_ +
                        8))(FStack_70.ReferenceController,1);
          }
        }
      }
      goto LAB_142762a43;
    }
  }
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
LAB_142762a43:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// OnDrop @ 142763cb0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockingTarget::OnDrop
          (SDockingTarget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> aVar4;
  char cVar5;
  atomic<int> aVar6;
  FReply *pFVar7;
  SDockingNode *pSVar8;
  SDockingNode *pSVar9;
  SDockingNode *pSVar10;
  bool bVar11;
  
  pFVar1 = (param_2->Content).Object;
  if (pFVar1 != (FDragDropOperation *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    FDockingDragOperation::GetTypeId();
    cVar5 = (*pcVar2)();
    if (cVar5 != '\0') {
      pTVar3 = (param_2->Content).SharedReferenceCount.ReferenceController;
      pFVar1 = (param_2->Content).Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (pFVar1 != (FDragDropOperation *)0x0) {
        pSVar9 = (SDockingNode *)(this->OwnerNode).WeakReferenceCount.ReferenceController;
        pSVar10 = (SDockingNode *)0x0;
        pSVar8 = pSVar9;
        if (pSVar9 != (SDockingNode *)0x0) {
          aVar4 = *(atomic<int> *)&pSVar9->_padding_;
          do {
            pSVar8 = pSVar10;
            if (aVar4 == (atomic<int>)0x0) goto LAB_142763d51;
            LOCK();
            aVar6 = *(atomic<int> *)&pSVar9->_padding_;
            bVar11 = aVar4 == aVar6;
            if (bVar11) {
              *(atomic<int> *)&pSVar9->_padding_ = (atomic<int>)((int)aVar4 + 1);
              aVar6 = aVar4;
            }
            UNLOCK();
            aVar4 = aVar6;
          } while (!bVar11);
          pSVar10 = (this->OwnerNode).Object;
          pSVar8 = pSVar9;
          if (pSVar10 != (SDockingNode *)0x0) goto LAB_142763d77;
        }
LAB_142763d51:
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        pSVar9 = pSVar8;
        if (bVar11) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FReply *)(*pcVar2)();
          return pFVar7;
        }
LAB_142763d77:
        (**(code **)(pSVar10->_padding_ + 0x278))
                  (pSVar10,__return_storage_ptr__,this->DockDirection,param_2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar9);
        return __return_storage_ptr__;
      }
      goto LAB_142763daf;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
LAB_142763daf:
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

