// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 18

// ~FMultiBoxBuilder @ 142700ee0

void __thiscall FMultiBoxBuilder::~FMultiBoxBuilder(FMultiBoxBuilder *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FMultiBoxBuilder__6B_;
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)(this->ExtenderStack).AllocatorInstance.Data,
             (this->ExtenderStack).ArrayNum);
  pFVar1 = (this->ExtenderStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FUICommandList_const_,1>,int>
            ((TSharedPtr<FUICommandList_const_,1> *)(this->CommandListStack).AllocatorInstance.Data,
             (this->CommandListStack).ArrayNum);
  pFVar1 = (this->CommandListStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MultiBox).SharedReferenceCount.ReferenceController);
  return;
}

// ApplySectionBeginning @ 14270d2c0

void __thiscall FMultiBoxBuilder::ApplySectionBeginning(FMultiBoxBuilder *this)

{
  return;
}

// FMultiBoxBuilder @ 1427b3830

FMultiBoxBuilder * __thiscall
FMultiBoxBuilder::FMultiBoxBuilder
          (FMultiBoxBuilder *this,EMultiBoxType param_1,FMultiBoxCustomization param_2,bool param_3,
          TSharedPtr<FUICommandList_const_,1> *param_4,TSharedPtr<FExtender,1> *param_5,
          FName param_6,FName param_7)

{
  TSharedPtr<FUICommandList_const_,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<FExtender,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMultiBox *pFVar7;
  ISlateStyle *pIVar8;
  FMultiBoxBuilder *pFVar9;
  FScriptContainerElement *pFVar10;
  FName local_res8;
  TRawPtrProxy<FMultiBox> local_28 [2];
  
  this->_padding_ = (longlong)&___7FMultiBoxBuilder__6B_;
  pFVar7 = ::operator_new(0x98);
  if (pFVar7 == (FMultiBox *)0x0) {
    pFVar7 = (FMultiBox *)0x0;
  }
  else {
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = (longlong)&___7FMultiBox__6B_;
    *(undefined8 *)&pFVar7->ModifyBlockWidgetAfterMake = 0;
    *(undefined8 *)&(pFVar7->ModifyBlockWidgetAfterMake).field_0x8 = 0;
    *(undefined4 *)&(pFVar7->ModifyBlockWidgetAfterMake).field_0x10 = 0;
    (pFVar7->WeakToolMenu).WeakPtr = (FWeakObjectPtr)0x0;
    pFVar7->bHasSearchWidget = false;
    pFVar7->bIsFocusable = true;
    (pFVar7->bAllowWrapButton).bIsSet = false;
    (pFVar7->CommandLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->CommandLists).ArrayNum = 0;
    (pFVar7->CommandLists).ArrayMax = 0;
    (pFVar7->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Blocks).ArrayNum = 0;
    (pFVar7->Blocks).ArrayMax = 0;
    pIVar8 = FAppStyle::Get();
    pFVar7->StyleSet = pIVar8;
    ::FName::FName(&pFVar7->StyleName,"ToolBar");
    pFVar7->Type = param_1;
    *(undefined8 *)&pFVar7->EditSelectionChanged = 0;
    *(undefined8 *)&(pFVar7->EditSelectionChanged).field_0x8 = 0;
    *(undefined4 *)&(pFVar7->EditSelectionChanged).field_0x10 = 0;
    pFVar7->bShouldCloseWindowAfterMenuSelection = param_3;
    pFVar7->LastSelectedCommandIndex = -1;
    if ((param_1 - SlimHorizontalToolBar & 0xfb) == 0) {
      ::FName::FName(&local_res8,"SlimToolBar");
      pFVar7->StyleName = local_res8;
    }
    if (((pFVar7->_padding_ != 0) && (pFVar7->_padding_ != 0)) &&
       (0 < *(int *)(pFVar7->_padding_ + 8))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FMultiBoxBuilder *)(*pcVar4)();
        return pFVar9;
      }
    }
  }
  local_28[0].Object = pFVar7;
  TSharedRef<FMultiBox,1>::TSharedRef<FMultiBox,1><FMultiBox>(&this->MultiBox,local_28);
  (this->CommandListStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtenderStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandListStack).ArrayNum = 0;
  (this->CommandListStack).ArrayMax = 0;
  (this->ExtenderStack).ArrayNum = 0;
  (this->ExtenderStack).ArrayMax = 0;
  this->TutorialHighlightName = param_6;
  this->MenuName = param_7;
  (this->CheckBoxStyle).ComparisonIndex = 0;
  (this->CheckBoxStyle).Number = 0;
  this->bExtendersEnabled = true;
  pTVar1 = (TSharedPtr<FUICommandList_const_,1> *)(this->CommandListStack).AllocatorInstance.Data;
  if ((pTVar1 <= param_4) && (param_4 < pTVar1 + (this->CommandListStack).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FMultiBoxBuilder *)(*pcVar4)();
      return pFVar9;
    }
  }
  iVar6 = (this->CommandListStack).ArrayNum;
  if (iVar6 == (this->CommandListStack).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->CommandListStack).AllocatorInstance,
                       &(this->CommandListStack).ArrayMax);
  }
  (this->CommandListStack).ArrayNum = iVar6 + 1;
  pFVar10 = (this->CommandListStack).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(FUICommandList **)pFVar10 = param_4->Object;
  pTVar2 = (param_4->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (TSharedPtr<FExtender,1> *)(this->ExtenderStack).AllocatorInstance.Data;
  if ((pTVar3 <= param_5) && (param_5 < pTVar3 + (this->ExtenderStack).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FMultiBoxBuilder *)(*pcVar4)();
      return pFVar9;
    }
  }
  iVar6 = (this->ExtenderStack).ArrayNum;
  if (iVar6 == (this->ExtenderStack).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->ExtenderStack).AllocatorInstance,
                       &(this->ExtenderStack).ArrayMax);
  }
  (this->ExtenderStack).ArrayNum = iVar6 + 1;
  pFVar10 = (this->ExtenderStack).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(FExtender **)pFVar10 = param_5->Object;
  pTVar2 = (param_5->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  return this;
}

// AddEditableText @ 1427c7560

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FMultiBoxBuilder::AddEditableText
          (FMultiBoxBuilder *this,FText *param_1,FText *param_2,FSlateIcon *param_3,
          TAttribute<FText> *param_4,
          TDelegate<void___cdecl(FText_const_&,ETextCommit::Type),FDefaultDelegateUserPolicy>
          *param_5,TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> *param_6,
          bool param_7)

{
  FMultiBox *this_00;
  code *pcVar1;
  bool bVar2;
  FEditableTextBlock *pFVar3;
  TSharedRef<FMultiBlock_const_,1> *pTVar4;
  bool bVar5;
  TRawPtrProxy<FEditableTextBlock> local_res8;
  TSharedRef<FMultiBlock_const_,1> local_58;
  undefined1 local_48 [8];
  ForAnyElementType local_40;
  ulonglong local_38;
  FDestructionSentinel local_30;
  
  bVar5 = false;
  local_res8.Object = local_res8.Object & 0xffffffff00000000;
  this_00 = (this->MultiBox).Object;
  pFVar3 = ::operator_new(0x2c8);
  if (pFVar3 == (FEditableTextBlock *)0x0) {
    pFVar3 = (FEditableTextBlock *)0x0;
  }
  else {
    local_38 = 0;
    local_48 = (undefined1  [8])0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    pFVar3 = FEditableTextBlock::FEditableTextBlock
                       (pFVar3,param_1,param_2,param_3,param_4,param_7,param_5,param_6,
                        (TDelegate<bool___cdecl(FText_const_&,FText_&),FDefaultDelegateUserPolicy> *
                        )local_48);
    bVar5 = true;
    if ((((pFVar3 != (FEditableTextBlock *)0x0) && (pFVar3->_padding_ != 0)) &&
        (pFVar3->_padding_ != 0)) && (0 < *(int *)(pFVar3->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_res8.Object = pFVar3;
  pTVar4 = TSharedRef<FMultiBlock_const_,1>::TSharedRef<FMultiBlock_const_,1><FEditableTextBlock>
                     (&local_58,&local_res8);
  FMultiBox::AddMultiBlock(this_00,pTVar4);
  if (bVar5) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    if (((int)local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = local_38 & 0xffffffff00000000;
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
  return;
}

// AddVerifiedEditableText @ 1427cd230

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FMultiBoxBuilder::AddVerifiedEditableText
          (FMultiBoxBuilder *this,FText *param_1,FText *param_2,FSlateIcon *param_3,
          TAttribute<FText> *param_4,
          TDelegate<bool___cdecl(FText_const_&,FText_&),FDefaultDelegateUserPolicy> *param_5,
          TDelegate<void___cdecl(FText_const_&,ETextCommit::Type),FDefaultDelegateUserPolicy>
          *param_6,TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> *param_7,
          bool param_8)

{
  FMultiBox *this_00;
  code *pcVar1;
  bool bVar2;
  FEditableTextBlock *this_01;
  TSharedRef<FMultiBlock_const_,1> *pTVar3;
  TRawPtrProxy<FEditableTextBlock> local_res8;
  TSharedRef<FMultiBlock_const_,1> local_18;
  
  this_00 = (this->MultiBox).Object;
  this_01 = ::operator_new(0x2c8);
  if (this_01 == (FEditableTextBlock *)0x0) {
    local_res8.Object = (FEditableTextBlock *)0x0;
  }
  else {
    local_res8.Object =
         FEditableTextBlock::FEditableTextBlock
                   (this_01,param_1,param_2,param_3,param_4,param_8,param_6,param_7,param_5);
    if ((((local_res8.Object != (FEditableTextBlock *)0x0) && ((local_res8.Object)->_padding_ != 0))
        && ((local_res8.Object)->_padding_ != 0)) &&
       (0 < *(int *)((local_res8.Object)->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pTVar3 = TSharedRef<FMultiBlock_const_,1>::TSharedRef<FMultiBlock_const_,1><FEditableTextBlock>
                     (&local_18,&local_res8);
  FMultiBox::AddMultiBlock(this_00,pTVar3);
  return;
}

// GetCustomization @ 14280ef90

FMultiBoxCustomization __thiscall FMultiBoxBuilder::GetCustomization(FMultiBoxBuilder *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return (FMultiBoxCustomization)in_RDX;
}

// GetMultiBox @ 142811220

TSharedRef<FMultiBox,1> * __thiscall
FMultiBoxBuilder::GetMultiBox
          (FMultiBoxBuilder *this,TSharedRef<FMultiBox,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->MultiBox).Object;
  pTVar1 = (this->MultiBox).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetStyleName @ 142815c70

FName * __thiscall FMultiBoxBuilder::GetStyleName(FMultiBoxBuilder *this)

{
  return &((this->MultiBox).Object)->StyleName;
}

// GetStyleSet @ 142815c80

ISlateStyle * __thiscall FMultiBoxBuilder::GetStyleSet(FMultiBoxBuilder *this)

{
  return ((this->MultiBox).Object)->StyleSet;
}

// GetTopCommandList @ 142815d70

TSharedPtr<FUICommandList_const_,1> * __thiscall
FMultiBoxBuilder::GetTopCommandList
          (FMultiBoxBuilder *this,TSharedPtr<FUICommandList_const_,1> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FUICommandList *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TSharedPtr<FUICommandList_const_,1> *pTVar8;
  longlong lVar9;
  
  iVar1 = (this->CommandListStack).ArrayNum;
  if (iVar1 < 1) {
    __return_storage_ptr__->Object = (FUICommandList *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    uVar7 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar7 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedPtr<FUICommandList_const_,1> *)(*pcVar5)();
        return pTVar8;
      }
    }
    pFVar2 = (this->CommandListStack).AllocatorInstance.Data;
    lVar9 = (longlong)(this->CommandListStack).ArrayNum;
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar9 * 0x10 + -8);
    pFVar4 = *(FUICommandList **)(pFVar2 + lVar9 * 0x10 + -0x10);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pFVar4;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// MakeWidget @ 1428217c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
FMultiBoxBuilder::MakeWidget
          (FMultiBoxBuilder *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<SMultiBoxWidget,1> *pTVar2;
  TSharedRef<SMultiBoxWidget,1> local_38;
  TAttribute<float> local_28;
  
  local_28.Getter._16_8_ = 0;
  local_28.Value = 0.0;
  local_28.bIsSet = false;
  local_28.Getter._0_8_ = 0;
  local_28.Getter._8_8_ = 0;
  pTVar2 = FMultiBox::MakeWidget((this->MultiBox).Object,&local_38,false,param_1,&local_28);
  __return_storage_ptr__->Object = (SWidget *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// PopCommandList @ 14282d0a0

void __thiscall FMultiBoxBuilder::PopCommandList(FMultiBoxBuilder *this)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  
  if ((this->CommandListStack).ArrayNum < 2) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7896416863981141875>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBoxBuilder.cpp"
                       ,0x8d,"CommandListStack.Num() > 1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar7 = (this->CommandListStack).AllocatorInstance.Data;
    lVar6 = (longlong)(this->CommandListStack).ArrayNum;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar7 + lVar6 * 0x10 + -8);
    *(undefined8 *)(pFVar7 + lVar6 * 0x10 + -8) = 0;
    *(undefined8 *)(pFVar7 + lVar6 * 0x10 + -0x10) = 0;
    iVar5 = (this->CommandListStack).ArrayNum;
    pFVar7 = (this->CommandListStack).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(pFVar7 + -8));
    iVar5 = (this->CommandListStack).ArrayNum - iVar5;
    if (iVar5 != 0) {
      memmove(pFVar7 + -0x10,pFVar7,(longlong)iVar5 << 4);
    }
    piVar1 = &(this->CommandListStack).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->CommandListStack).AllocatorInstance,(this->CommandListStack).ArrayNum,
               &(this->CommandListStack).ArrayMax);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

// PopExtender @ 14282d190

void __thiscall FMultiBoxBuilder::PopExtender(FMultiBoxBuilder *this)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  
  if ((this->ExtenderStack).ArrayNum < 2) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7896416863981141856>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBoxBuilder.cpp"
                       ,0xa0,"ExtenderStack.Num() > 1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar7 = (this->ExtenderStack).AllocatorInstance.Data;
    lVar6 = (longlong)(this->ExtenderStack).ArrayNum;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar7 + lVar6 * 0x10 + -8);
    *(undefined8 *)(pFVar7 + lVar6 * 0x10 + -8) = 0;
    *(undefined8 *)(pFVar7 + lVar6 * 0x10 + -0x10) = 0;
    iVar5 = (this->ExtenderStack).ArrayNum;
    pFVar7 = (this->ExtenderStack).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(pFVar7 + -8));
    iVar5 = (this->ExtenderStack).ArrayNum - iVar5;
    if (iVar5 != 0) {
      memmove(pFVar7 + -0x10,pFVar7,(longlong)iVar5 << 4);
    }
    piVar1 = &(this->ExtenderStack).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->ExtenderStack).AllocatorInstance,(this->ExtenderStack).ArrayNum,
               &(this->ExtenderStack).ArrayMax);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

// PushCommandList @ 14282f850

void __thiscall
FMultiBoxBuilder::PushCommandList
          (FMultiBoxBuilder *this,TSharedRef<FUICommandList_const_,1> *param_1)

{
  TArray<TSharedPtr<FUICommandList_const_,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FUICommandList *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_18 = param_1->Object;
  pTVar1 = &this->CommandListStack;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar6 + (longlong)(this->CommandListStack).ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->CommandListStack).ArrayNum;
  piVar2 = &(this->CommandListStack).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->CommandListStack).ArrayNum = iVar5 + 1;
  pFVar6 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(FUICommandList **)pFVar6 = local_18;
  *(TReferenceControllerBase<1> **)(pFVar6 + 8) = local_10;
  local_10 = (TReferenceControllerBase<1> *)0x0;
  local_18 = (FUICommandList *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// PushExtender @ 14282f960

void __thiscall
FMultiBoxBuilder::PushExtender(FMultiBoxBuilder *this,TSharedRef<FExtender,1> *param_1)

{
  TArray<TSharedPtr<FExtender,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FExtender *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_18 = param_1->Object;
  pTVar1 = &this->ExtenderStack;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar6 + (longlong)(this->ExtenderStack).ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->ExtenderStack).ArrayNum;
  piVar2 = &(this->ExtenderStack).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->ExtenderStack).ArrayNum = iVar5 + 1;
  pFVar6 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(FExtender **)pFVar6 = local_18;
  *(TReferenceControllerBase<1> **)(pFVar6 + 8) = local_10;
  local_10 = (TReferenceControllerBase<1> *)0x0;
  local_18 = (FExtender *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetCheckBoxStyle @ 142834de0

void __thiscall FMultiBoxBuilder::SetCheckBoxStyle(FMultiBoxBuilder *this,FName param_1)

{
  this->CheckBoxStyle = param_1;
  return;
}

// SetLastSelectedCommandIndex @ 142835110

void __thiscall FMultiBoxBuilder::SetLastSelectedCommandIndex(FMultiBoxBuilder *this,int param_1)

{
  ((this->MultiBox).Object)->LastSelectedCommandIndex = param_1;
  return;
}

// SetStyle @ 142835a30

void __thiscall
FMultiBoxBuilder::SetStyle(FMultiBoxBuilder *this,ISlateStyle *param_1,FName *param_2)

{
  FMultiBox *pFVar1;
  
  pFVar1 = (this->MultiBox).Object;
  pFVar1->StyleSet = param_1;
  pFVar1->StyleName = *param_2;
  return;
}

