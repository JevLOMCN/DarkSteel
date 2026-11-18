// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// ConstructWidget @ 1427f2090

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<IMultiBlockBaseWidget,1> * __thiscall
FDropPreviewBlock::ConstructWidget
          (FDropPreviewBlock *this,TSharedRef<IMultiBlockBaseWidget,1> *__return_storage_ptr__)

{
  IMultiBlockBaseWidget *pIVar1;
  SWidget *pSVar2;
  code *pcVar3;
  SCustomToolbarPreviewWidget *pSVar4;
  bool bVar5;
  FArguments *pFVar6;
  TSharedRef<IMultiBlockBaseWidget,1> *pTVar7;
  undefined8 *puVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedRef<SCustomToolbarPreviewWidget,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_2e0 [8];
  ForAnyElementType FStack_2d8;
  ulonglong local_2d0;
  TSlateDecl<SCustomToolbarPreviewWidget,RequiredArgs::T0RequiredArgs> local_2c8;
  undefined8 local_2b0;
  FSharedReferencer<1> local_2a8;
  TSharedRef<SCustomToolbarPreviewWidget,1> local_2a0;
  FDestructionSentinel local_290;
  SWidget *local_278;
  TReferenceControllerBase<1> *pTStack_270;
  TSharedRef<SCustomToolbarPreviewWidget,1> local_268;
  undefined1 local_258 [8];
  TReferenceControllerBase<1> *local_250;
  FArguments local_248;
  
  pFVar6 = SCustomToolbarPreviewWidget::FArguments::FArguments(&local_248);
  local_2e0 = (undefined1  [8])0x0;
  FStack_2d8.Data = (FScriptContainerElement *)0x0;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  local_2d0 = 0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar6->_padding_ = EVisibility::Hidden.Value.Value;
  *(undefined1 *)((longlong)&pFVar6->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2e0,
             (FWriteAccessScope *)&local_290);
  if (((int)local_2d0 != 0) && (FStack_2d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2d8,0,0,0x10);
    local_2d0 = local_2d0 & 0xffffffff00000000;
  }
  if (local_290.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_290.Accessor,&local_290);
  }
  if (FStack_2d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2e0);
  if (((this->ActualWidget).Object == (IMultiBlockBaseWidget *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar3)();
    return pTVar7;
  }
  pIVar1 = (this->ActualWidget).Object;
  puVar8 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_258);
  pTVar9 = (TReferenceControllerBase<1> *)puVar8[1];
  pSVar2 = (SWidget *)*puVar8;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_278 = (pFVar6->_Content).Widget.Object;
  pTStack_270 = (pFVar6->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar6->_Content).Widget.Object = pSVar2;
  (pFVar6->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_270);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  local_2c8._RequiredArgs = local_res8;
  local_2c8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = ::operator_new(0x308);
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSCustomToolbarPreviewWidget___00_SharedPointerInternals__6B_
    ;
    memset(pTVar9 + 1,0,0x2f8);
    SMultiBlockBaseWidget::SMultiBlockBaseWidget((SMultiBlockBaseWidget *)(pTVar9 + 1));
    pTVar9[1]._padding_ =
         (longlong)&SCustomToolbarPreviewWidget::_vftable__for__IMultiBlockBaseWidget__;
    *(undefined ***)&pTVar9[1].SharedReferenceCount =
         &SCustomToolbarPreviewWidget::_vftable__for__SCompoundWidget__;
    pTVar9[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[0x30]._padding_ = 0;
    pTVar11 = pTVar9;
  }
  TSharedRef<SCustomToolbarPreviewWidget,1>::TSharedRef<SCustomToolbarPreviewWidget,1>
            (&local_2a0,(SCustomToolbarPreviewWidget *)(pTVar11 + 1),pTVar11);
  local_2a8.ReferenceController = local_2a0.SharedReferenceCount.ReferenceController;
  if (local_2a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2c8._Widget.Object = local_2a0.Object;
  local_2b0 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_2c8._Widget.SharedReferenceCount,&local_2a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a0.SharedReferenceCount.ReferenceController);
  pSVar4 = local_2c8._Widget.Object;
  if ((local_2c8._Widget.Object == (SCustomToolbarPreviewWidget *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar3)();
    return pTVar7;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&pSVar4->_padding_,"SCustomToolbarPreviewWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBoxCustomization.cpp"
             ,0x24,0x2f8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar10 = TSlateDecl<SCustomToolbarPreviewWidget,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2c8,&local_268,pFVar6);
  __return_storage_ptr__->Object = (IMultiBlockBaseWidget *)pTVar10->Object;
  pTVar11 = (pTVar10->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_250);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_248);
  return __return_storage_ptr__;
}

// HasIcon @ 1428184a0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall FDropPreviewBlock::HasIcon(FDropPreviewBlock *this)

{
  FMultiBlock *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  if ((this->ActualBlock).Object == (FMultiBlock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar1 = (this->ActualBlock).Object;
  pTVar2 = (this->ActualBlock).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar1 == (FMultiBlock *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar5 = (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return (bool)uVar5;
}

