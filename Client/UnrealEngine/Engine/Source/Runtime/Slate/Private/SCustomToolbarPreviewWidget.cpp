// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// ~SCustomToolbarPreviewWidget @ 1427ba680

void __thiscall
SCustomToolbarPreviewWidget::~SCustomToolbarPreviewWidget(SCustomToolbarPreviewWidget *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Content).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
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
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->_padding_);
  return;
}

// BuildMultiBlockWidget @ 1427d92e0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SCustomToolbarPreviewWidget::BuildMultiBlockWidget
          (SCustomToolbarPreviewWidget *this,ISlateStyle *param_1,FName *param_2)

{
  longlong *this_00;
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  SBorder *pSVar5;
  atomic<int> aVar6;
  bool bVar7;
  atomic<int> aVar8;
  FArguments *pFVar9;
  ISlateStyle *pIVar10;
  FName *pFVar11;
  FSlateBrush *pFVar12;
  TSharedRef<SBorder,1> *pTVar13;
  FText *pFVar14;
  undefined8 *puVar15;
  SMultiBoxWidget *pSVar16;
  SMultiBoxWidget *pSVar17;
  SMultiBoxWidget *this_01;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res20 [2];
  undefined1 local_4d8 [8];
  ForAnyElementType FStack_4d0;
  ulonglong local_4c8;
  longlong local_4c0;
  TReferenceControllerBase<1> *pTStack_4b8;
  undefined1 local_4b0 [4];
  FName local_4ac;
  FMemScope local_4a0;
  FText local_498;
  TSharedPtr<SWidget,1> local_488;
  FDestructionSentinel local_478;
  FName local_460;
  SWidget *local_458;
  TReferenceControllerBase<1> *pTStack_450;
  TSharedRef<SBorder,1> local_448;
  undefined1 local_438 [8];
  TReferenceControllerBase<1> *local_430;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_428;
  FArguments local_410;
  
  pFVar9 = SBorder::FArguments::FArguments(&local_410);
  pFVar9 = SBorder::FArguments::Padding(pFVar9,0.0);
  pIVar10 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar10 + 0x50);
  pFVar11 = ::FName::FName(&local_460,"NoBorder");
  pFVar12 = (FSlateBrush *)(*pcVar1)(pIVar10,*pFVar11);
  local_4d8 = (undefined1  [8])0x0;
  FStack_4d0.Data = (FScriptContainerElement *)0x0;
  this_01 = (SMultiBoxWidget *)0x0;
  local_4c8 = 0;
  (pFVar9->_BorderImage).Value = pFVar12;
  (pFVar9->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4d8,
             (FWriteAccessScope *)&local_478);
  if (((int)local_4c8 != 0) && (FStack_4d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4d0,0,0,0x10);
    local_4c8 = local_4c8 & 0xffffffff00000000;
  }
  if (local_478.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_478.Accessor,&local_478);
  }
  if (FStack_4d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4d8);
  pFVar9->_HAlign = HAlign_Center;
  pFVar9->_VAlign = VAlign_Center;
  if (((this->Content).Object == (SWidget *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar2 = (this->Content).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->Content).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar3 == (SWidget *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_458 = (pFVar9->_Content).Widget.Object;
  pTStack_450 = (pFVar9->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar9->_Content).Widget.Object = pSVar3;
  (pFVar9->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_450);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4ac = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4a0,&local_4ac,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_428,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBoxCustomization.cpp"
             ,0x12,local_res8);
  FMemScope::~FMemScope(&local_4a0);
  FLLMScope::~FLLMScope(local_res20);
  pTVar13 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_428,&local_448,pFVar9);
  this_00 = &this->_padding_;
  pTVar4 = (pTVar13->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar13->Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4c0 = this->_padding_;
  pTStack_4b8 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar5;
  this->_padding_ = (longlong)pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_4b8);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_448.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_428._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SBorder::FArguments::~FArguments(&local_410);
  pSVar17 = (SMultiBoxWidget *)this->_padding_;
  pSVar16 = pSVar17;
  if (pSVar17 != (SMultiBoxWidget *)0x0) {
    aVar6 = *(atomic<int> *)&pSVar17->_padding_;
    do {
      pSVar16 = this_01;
      if (aVar6 == (atomic<int>)0x0) goto LAB_1427d95f5;
      LOCK();
      aVar8 = *(atomic<int> *)&pSVar17->_padding_;
      bVar7 = aVar6 == aVar8;
      if (bVar7) {
        *(atomic<int> *)&pSVar17->_padding_ = (atomic<int>)((int)aVar6 + 1);
        aVar8 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar8;
    } while (!bVar7);
    this_01 = (SMultiBoxWidget *)this->_padding_;
    pSVar16 = pSVar17;
    if (this_01 != (SMultiBoxWidget *)0x0) goto LAB_1427d961b;
  }
LAB_1427d95f5:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar17 = pSVar16;
  if (bVar7) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1427d961b:
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar7 = *(bool *)(this->_padding_ + 0xbc);
  pFVar14 = FText::GetEmpty();
  local_498.TextData.Reference = (pFVar14->TextData).Reference;
  if (local_498.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_498.TextData.Reference + 8))
              (local_498.TextData.Reference,local_4b0);
  }
  local_498.Flags = pFVar14->Flags;
  puVar15 = (undefined8 *)(**(code **)(this->_padding_ + 8))(this,local_438);
  local_488.Object = (SWidget *)*puVar15;
  local_488.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar15[1];
  if (local_488.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_488.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_488.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SMultiBoxWidget::AddElement(this_01,&local_488,&local_498,bVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_430);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar17);
  return;
}

// Construct @ 1427eecc0

void __thiscall
SCustomToolbarPreviewWidget::Construct(SCustomToolbarPreviewWidget *this,FArguments *param_1)

{
  SWidget *local_18;
  FSharedReferencer<1> local_10 [2];
  
  local_18 = (param_1->_Content).Widget.Object;
  local_10[0].ReferenceController =
       (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  if (local_10[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->Content != (TSharedPtr<SWidget,1> *)&local_18) {
    (this->Content).Object = local_18;
    local_18 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Content).SharedReferenceCount,local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10[0].ReferenceController);
  return;
}

