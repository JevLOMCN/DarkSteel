// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// AddPullDownMenu @ 1427c8d10

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FMenuBarBuilder::AddPullDownMenu
          (FMenuBarBuilder *this,TAttribute<FText> *param_1,TAttribute<FText> *param_2,
          TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *param_3,
          FName param_4,FName param_5)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FMultiBox *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FMenuEntryBlock *pFVar7;
  FSlateIcon *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FName FVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  TSharedPtr<FUICommandList_const_,1> local_88;
  TSharedPtr<FExtender,1> local_78;
  TSharedRef<FMultiBlock_const_,1> local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  FSlateIcon local_48;
  
  (**(code **)(*(longlong *)this + 0x18))();
  (**(code **)(*(longlong *)this + 0x10))(this,param_4,0);
  pFVar7 = ::operator_new(0x2e0);
  if (pFVar7 == (FMenuEntryBlock *)0x0) {
    pFVar7 = (FMenuEntryBlock *)0x0;
  }
  else {
    pFVar8 = FSlateIcon::FSlateIcon(&local_48);
    uVar11 = *(int *)&this->field_0x20 - 1;
    uVar6 = 0;
    if ((int)uVar11 < *(int *)&this->field_0x20) {
      uVar6 = ~uVar11 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar12 = (longlong)*(int *)&this->field_0x20 * 0x10 + *(longlong *)&this->field_0x18;
    local_88.Object = *(FUICommandList **)(lVar12 + -0x10);
    local_88.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(lVar12 + -8);
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar11 = *(int *)&this->field_0x30 - 1;
    uVar6 = 0;
    if ((int)uVar11 < *(int *)&this->field_0x30) {
      uVar6 = ~uVar11 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar12 = (longlong)*(int *)&this->field_0x30 * 0x10 + *(longlong *)&this->field_0x28;
    local_78.Object = *(FExtender **)(lVar12 + -0x10);
    local_78.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(lVar12 + -8);
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar7 = FMenuEntryBlock::FMenuEntryBlock
                       (pFVar7,&param_4,param_1,param_2,param_3,&local_78,false,false,&local_88,
                        false,pFVar8,true);
  }
  pTVar9 = ::operator_new(0x18);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMenuEntryBlock__U__DefaultDeleter_VFMenuEntryBlock___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar9[1]._padding_ = (longlong)pFVar7;
  }
  if (pFVar7 == (FMenuEntryBlock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (((pFVar7->_padding_ == 0) || (pFVar7->_padding_ == 0)) ||
          (*(int *)(pFVar7->_padding_ + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar7->_padding_ = (longlong)pFVar7;
    if (pTVar9 != (TReferenceControllerBase<1> *)pFVar7->_padding_) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar7->_padding_;
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
      pFVar7->_padding_ = (longlong)pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  FVar10.ComparisonIndex.Value = *(uint *)&this->field_0x38;
  FVar10.Number = *(uint *)&this->field_0x3c;
  local_58 = 0;
  uStack_50 = 0;
  FVar10 = GenerateTutorialIdentifierName
                     ((FName)local_res8,FVar10,(TSharedPtr<FUICommandInfo_const_,1> *)param_5,
                      (int)&local_58);
  *(undefined8 *)((longlong)&pFVar7->_padding_ + 4) = *(undefined8 *)FVar10;
  this_00 = *(FMultiBox **)&this->field_0x8;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68.Object = (FMultiBlock *)pFVar7;
  local_68.SharedReferenceCount.ReferenceController = pTVar9;
  FMultiBox::AddMultiBlock(this_00,&local_68);
  (**(code **)(*(longlong *)this + 0x10))(this,param_4,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// AddPullDownMenu @ 1427c9040

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FMenuBarBuilder::AddPullDownMenu
          (FMenuBarBuilder *this,TAttribute<FText> *param_1,TAttribute<FText> *param_2,
          TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *param_3,FName param_4,
          FName param_5)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FMultiBox *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FMenuEntryBlock *pFVar7;
  FSlateIcon *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FName FVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  TSharedPtr<FUICommandList_const_,1> local_88;
  TSharedPtr<FExtender,1> local_78;
  TSharedRef<FMultiBlock_const_,1> local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  FSlateIcon local_48;
  
  (**(code **)(*(longlong *)this + 0x18))();
  (**(code **)(*(longlong *)this + 0x10))(this,param_4,0);
  pFVar7 = ::operator_new(0x2e0);
  if (pFVar7 == (FMenuEntryBlock *)0x0) {
    pFVar7 = (FMenuEntryBlock *)0x0;
  }
  else {
    pFVar8 = FSlateIcon::FSlateIcon(&local_48);
    uVar11 = *(int *)&this->field_0x20 - 1;
    uVar6 = 0;
    if ((int)uVar11 < *(int *)&this->field_0x20) {
      uVar6 = ~uVar11 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar12 = (longlong)*(int *)&this->field_0x20 * 0x10 + *(longlong *)&this->field_0x18;
    local_88.Object = *(FUICommandList **)(lVar12 + -0x10);
    local_88.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(lVar12 + -8);
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar11 = *(int *)&this->field_0x30 - 1;
    uVar6 = 0;
    if ((int)uVar11 < *(int *)&this->field_0x30) {
      uVar6 = ~uVar11 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar12 = (longlong)*(int *)&this->field_0x30 * 0x10 + *(longlong *)&this->field_0x28;
    local_78.Object = *(FExtender **)(lVar12 + -0x10);
    local_78.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(lVar12 + -8);
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar7 = FMenuEntryBlock::FMenuEntryBlock
                       (pFVar7,&param_4,param_1,param_2,param_3,&local_78,false,false,&local_88,
                        false,pFVar8,true);
  }
  pTVar9 = ::operator_new(0x18);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMenuEntryBlock__U__DefaultDeleter_VFMenuEntryBlock___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar9[1]._padding_ = (longlong)pFVar7;
  }
  if (pFVar7 == (FMenuEntryBlock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (((pFVar7->_padding_ == 0) || (pFVar7->_padding_ == 0)) ||
          (*(int *)(pFVar7->_padding_ + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar7->_padding_ = (longlong)pFVar7;
    if (pTVar9 != (TReferenceControllerBase<1> *)pFVar7->_padding_) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar7->_padding_;
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
      pFVar7->_padding_ = (longlong)pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  FVar10.ComparisonIndex.Value = *(uint *)&this->field_0x38;
  FVar10.Number = *(uint *)&this->field_0x3c;
  local_58 = 0;
  uStack_50 = 0;
  FVar10 = GenerateTutorialIdentifierName
                     ((FName)local_res8,FVar10,(TSharedPtr<FUICommandInfo_const_,1> *)param_5,
                      (int)&local_58);
  *(undefined8 *)((longlong)&pFVar7->_padding_ + 4) = *(undefined8 *)FVar10;
  this_00 = *(FMultiBox **)&this->field_0x8;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68.Object = (FMultiBlock *)pFVar7;
  local_68.SharedReferenceCount.ReferenceController = pTVar9;
  FMultiBox::AddMultiBlock(this_00,&local_68);
  (**(code **)(*(longlong *)this + 0x10))(this,param_4,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// ApplyHook @ 1427d15e0

void __thiscall FMenuBarBuilder::ApplyHook(FMenuBarBuilder *this,FName param_1,Position param_2)

{
  FExtender *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  if (this->field_0x50 != '\0') {
    uVar4 = *(int *)&this->field_0x30 - 1;
    uVar3 = 0;
    if ((int)uVar4 < *(int *)&this->field_0x30) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((param_1 != (FName)0x0) &&
       (this_00 = *(FExtender **)
                   (*(longlong *)&this->field_0x28 + -0x10 +
                   (longlong)*(int *)&this->field_0x30 * 0x10), this_00 != (FExtender *)0x0)) {
      FExtender::Apply(this_00,param_1,param_2,this);
    }
  }
  return;
}

