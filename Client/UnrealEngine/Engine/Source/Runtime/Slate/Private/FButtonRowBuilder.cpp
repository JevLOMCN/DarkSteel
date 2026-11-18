// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// AddButton @ 1427c6c00

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FButtonRowBuilder::AddButton
          (FButtonRowBuilder *this,FText *param_1,FText *param_2,FUIAction *param_3,
          FSlateIcon *param_4,EUserInterfaceActionType param_5)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  uint uVar2;
  FMultiBox *this_00;
  FName FVar3;
  FName FVar4;
  FSharedReferencer<1> FVar5;
  FButtonRowBlock *this_01;
  FButtonRowBlock *pFVar6;
  FButtonRowBlock *pFVar7;
  ulonglong local_res8;
  ITextData *local_b8;
  undefined1 local_a0 [8];
  ForAnyElementType FStack_98;
  ulonglong local_90;
  ITextData *local_88;
  uint local_80;
  bool local_78;
  undefined1 local_70 [8];
  ForAnyElementType FStack_68;
  ulonglong local_60;
  TSharedRef<FButtonRowBlock,1> local_58;
  FDestructionSentinel local_48;
  
  pFVar6 = (FButtonRowBlock *)0x0;
  local_res8 = local_res8 & 0xffffffff00000000;
  (**(code **)(*(longlong *)this + 0x18))();
  this_01 = ::operator_new(0x250);
  pFVar7 = pFVar6;
  if (this_01 != (FButtonRowBlock *)0x0) {
    local_88 = (param_2->TextData).Reference;
    if (local_88 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88 + 8))(local_88,&local_res8);
    }
    local_80 = param_2->Flags;
    local_b8 = (param_1->TextData).Reference;
    local_60 = 0;
    local_78 = true;
    local_70 = (undefined1  [8])0x0;
    FStack_68.Data = (FScriptContainerElement *)0x0;
    if (local_b8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8 + 8))(local_b8,&local_res8);
    }
    uVar2 = param_1->Flags;
    local_90 = 0;
    local_res8 = 0;
    local_a0 = (undefined1  [8])0x0;
    FStack_98.Data = (FScriptContainerElement *)0x0;
    local_58.Object = (FButtonRowBlock *)0x0;
    local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FMultiBlock::FMultiBlock
              ((FMultiBlock *)this_01,param_3,(FName)0x0,ButtonRow,false,
               (TSharedPtr<FUICommandList_const_,1> *)&local_58);
    this_01->_padding_ = (longlong)&___7FButtonRowBlock__6B_;
    (this_01->LabelOverride).Value.TextData.Reference = local_b8;
    if (local_b8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8 + 8))(local_b8,&local_res8);
    }
    pTVar1 = &(this_01->LabelOverride).Getter;
    (this_01->LabelOverride).Value.Flags = uVar2;
    (this_01->LabelOverride).bIsSet = true;
    *(undefined8 *)pTVar1 = 0;
    *(undefined8 *)&(this_01->LabelOverride).Getter.field_0x8 = 0;
    *(undefined4 *)&(this_01->LabelOverride).Getter.field_0x10 = 0;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (pTVar1,(TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_a0);
    (this_01->ToolTipOverride).Value.TextData.Reference = local_88;
    if (local_88 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88 + 8))(local_88,&local_res8);
    }
    pTVar1 = &(this_01->ToolTipOverride).Getter;
    (this_01->ToolTipOverride).Value.Flags = local_80;
    (this_01->ToolTipOverride).bIsSet = local_78;
    *(undefined8 *)pTVar1 = 0;
    *(undefined8 *)&(this_01->ToolTipOverride).Getter.field_0x8 = 0;
    *(undefined4 *)&(this_01->ToolTipOverride).Getter.field_0x10 = 0;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (pTVar1,(TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_70);
    FVar3 = param_4->StyleName;
    (this_01->IconOverride).StyleSetName = param_4->StyleSetName;
    (this_01->IconOverride).StyleName = FVar3;
    FVar3 = param_4->SmallStyleName;
    FVar4 = param_4->StatusOverlayStyleName;
    this_01->UserInterfaceActionTypeOverride = param_5;
    (this_01->IconOverride).SmallStyleName = FVar3;
    (this_01->IconOverride).StatusOverlayStyleName = FVar4;
    pFVar6 = this_01;
    pFVar7 = (FButtonRowBlock *)&DAT_00000003;
  }
  TSharedRef<FButtonRowBlock,1>::TSharedRef<FButtonRowBlock,1><FButtonRowBlock>(&local_58,pFVar6);
  if (((ulonglong)pFVar7 & 2) != 0) {
    pFVar7 = (FButtonRowBlock *)(ulonglong)((uint)pFVar7 & 0xfffffffd);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a0,
               (FWriteAccessScope *)&local_48);
    if (((int)local_90 != 0) && (FStack_98.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_98.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
      local_90 = local_90 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_98.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a0);
    if (local_b8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8 + 0x10))();
    }
  }
  if (((ulonglong)pFVar7 & 1) != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_70,
               (FWriteAccessScope *)&local_48);
    if (((int)local_60 != 0) && (FStack_68.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_68.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_68,0,0,0x10);
      local_60 = local_60 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_68.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_70);
    if (local_88 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88 + 0x10))();
    }
  }
  FVar5.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
  this_00 = *(FMultiBox **)&this->field_0x8;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMultiBox::AddMultiBlock(this_00,(TSharedRef<FMultiBlock_const_,1> *)&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return;
}

// AddButton @ 1427c6f20

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FButtonRowBuilder::AddButton
          (FButtonRowBuilder *this,TSharedPtr<FUICommandInfo_const_,1> *param_1,
          TAttribute<FText> *param_2,TAttribute<FText> *param_3,FSlateIcon *param_4)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FUICommandList *pFVar3;
  FUICommandInfo *pFVar4;
  ITextData *pIVar5;
  FMultiBox *this_00;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  uint uVar9;
  FButtonRowBlock *pFVar10;
  uint uVar11;
  FButtonRowBlock *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined1 local_res10 [8];
  TSharedPtr<FUICommandList_const_,1> local_78;
  TSharedPtr<FUICommandInfo_const_,1> local_68;
  TSharedRef<FButtonRowBlock,1> local_58;
  TSharedRef<FMultiBlock_const_,1> local_48;
  
  pFVar12 = (FButtonRowBlock *)0x0;
  local_res8 = 0;
  (**(code **)(*(longlong *)this + 0x18))();
  pFVar10 = ::operator_new(0x250);
  if (pFVar10 == (FButtonRowBlock *)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    pFVar10 = pFVar12;
  }
  else {
    uVar11 = *(int *)&this->field_0x20 - 1;
    uVar9 = 0;
    if ((int)uVar11 < *(int *)&this->field_0x20) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pTVar2 = *(TReferenceControllerBase<1> **)
              (*(longlong *)&this->field_0x18 + -8 + (longlong)*(int *)&this->field_0x20 * 0x10);
    pFVar3 = *(FUICommandList **)
              (*(longlong *)&this->field_0x18 + -0x10 + (longlong)*(int *)&this->field_0x20 * 0x10);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (param_1->Object == (FUICommandInfo *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pTVar13 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar4 = param_1->Object;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar4 == (FUICommandInfo *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78.Object = pFVar3;
    local_78.SharedReferenceCount.ReferenceController = pTVar2;
    local_68.Object = pFVar4;
    local_68.SharedReferenceCount.ReferenceController = pTVar13;
    FMultiBlock::FMultiBlock((FMultiBlock *)pFVar10,&local_68,&local_78,(FName)0x0,ButtonRow,false);
    pFVar10->_padding_ = (longlong)&___7FButtonRowBlock__6B_;
    (pFVar10->LabelOverride).Value.TextData.Reference = (ITextData *)0x0;
    pIVar5 = (param_2->Value).TextData.Reference;
    (pFVar10->LabelOverride).Value.TextData.Reference = pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,&local_res8);
    }
    pTVar1 = &(pFVar10->LabelOverride).Getter;
    (pFVar10->LabelOverride).Value.Flags = (param_2->Value).Flags;
    (pFVar10->LabelOverride).bIsSet = param_2->bIsSet;
    *(undefined8 *)pTVar1 = 0;
    *(undefined8 *)&(pFVar10->LabelOverride).Getter.field_0x8 = 0;
    *(undefined4 *)&(pFVar10->LabelOverride).Getter.field_0x10 = 0;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (pTVar1,&param_2->Getter);
    (pFVar10->ToolTipOverride).Value.TextData.Reference = (ITextData *)0x0;
    pIVar5 = (param_3->Value).TextData.Reference;
    (pFVar10->ToolTipOverride).Value.TextData.Reference = pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_res10);
    }
    pTVar1 = &(pFVar10->ToolTipOverride).Getter;
    (pFVar10->ToolTipOverride).Value.Flags = (param_3->Value).Flags;
    (pFVar10->ToolTipOverride).bIsSet = param_3->bIsSet;
    *(undefined8 *)pTVar1 = 0;
    *(undefined8 *)&(pFVar10->ToolTipOverride).Getter.field_0x8 = 0;
    *(undefined4 *)&(pFVar10->ToolTipOverride).Getter.field_0x10 = 0;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (pTVar1,&param_3->Getter);
    FVar7 = param_4->StyleName;
    (pFVar10->IconOverride).StyleSetName = param_4->StyleSetName;
    (pFVar10->IconOverride).StyleName = FVar7;
    FVar7 = param_4->StatusOverlayStyleName;
    (pFVar10->IconOverride).SmallStyleName = param_4->SmallStyleName;
    (pFVar10->IconOverride).StatusOverlayStyleName = FVar7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar12 = pFVar10;
    pFVar10 = (FButtonRowBlock *)&DAT_00000001;
  }
  TSharedRef<FButtonRowBlock,1>::TSharedRef<FButtonRowBlock,1><FButtonRowBlock>(&local_58,pFVar12);
  if (pFVar10 != (FButtonRowBlock *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  this_00 = *(FMultiBox **)&this->field_0x8;
  local_48.Object = (FMultiBlock *)local_58.Object;
  local_48.SharedReferenceCount.ReferenceController =
       local_58.SharedReferenceCount.ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMultiBox::AddMultiBlock(this_00,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

