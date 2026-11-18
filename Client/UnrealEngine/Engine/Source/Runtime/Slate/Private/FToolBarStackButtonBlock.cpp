// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// FToolBarStackButtonBlock @ 1427b5740

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolBarStackButtonBlock * __thiscall
FToolBarStackButtonBlock::FToolBarStackButtonBlock
          (FToolBarStackButtonBlock *this,TSharedRef<FUICommandInfo_const_,1> *param_1,
          TSharedPtr<FUICommandList_const_,1> *param_2,bool param_3)

{
  TSharedPtr<FUICommandList_const_,1> local_38;
  TSharedPtr<FUICommandInfo_const_,1> local_28;
  
  local_38.Object = param_2->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMultiBlock::FMultiBlock((FMultiBlock *)this,&local_28,&local_38,(FName)0x0,None,false);
  this->bSimpleComboBox = param_3;
  this->_padding_ = (longlong)&___7FToolBarStackButtonBlock__6B_;
  *(undefined8 *)&this->MenuContentGenerator = 0;
  *(undefined8 *)&(this->MenuContentGenerator).field_0x8 = 0;
  *(undefined4 *)&(this->MenuContentGenerator).field_0x10 = 0;
  (this->LabelVisibility).bIsSet = false;
  (this->CachedStackIdentifier).Object = (FUIIdentifierContext *)0x0;
  (this->CachedStackIdentifier).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CachedStackContent).Object = (FUIContentContext *)0x0;
  (this->CachedStackContent).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ConstructWidget @ 1427f3f40

TSharedRef<IMultiBlockBaseWidget,1> * __thiscall
FToolBarStackButtonBlock::ConstructWidget
          (FToolBarStackButtonBlock *this,
          TSharedRef<IMultiBlockBaseWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FArguments *pFVar2;
  TSlateDecl<SToolBarStackButtonBlock,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SToolBarStackButtonBlock,1> *pTVar3;
  bool bVar4;
  T0RequiredArgs local_res8 [8];
  TEnumAsByte<EVisibility::Private> local_278 [8];
  undefined4 local_270;
  undefined1 local_26c;
  undefined1 local_268;
  undefined1 local_260 [8];
  ForAnyElementType FStack_258;
  ulonglong local_250;
  FDestructionSentinel local_248;
  TSharedRef<SToolBarStackButtonBlock,1> local_230;
  TSlateDecl<SToolBarStackButtonBlock,RequiredArgs::T0RequiredArgs> local_220;
  FArguments local_208;
  
  pFVar2 = SToolBarStackButtonBlock::FArguments::FArguments(&local_208);
  bVar4 = (this->LabelVisibility).bIsSet == false;
  if (!bVar4) {
    local_278[0].Value = (this->LabelVisibility).TypedValue.Value.Value;
  }
  if ((TOptional<EVisibility> *)local_278 != &pFVar2->_LabelVisibility) {
    if (bVar4) {
      if ((pFVar2->_LabelVisibility).bIsSet != false) {
        (pFVar2->_LabelVisibility).bIsSet = false;
      }
    }
    else {
      (pFVar2->_LabelVisibility).TypedValue.Value.Value = local_278[0].Value;
      (pFVar2->_LabelVisibility).bIsSet = true;
    }
  }
  pFVar2->_ForceSmallIcons = this->bForceSmallIcons;
  local_270 = 1;
  local_26c = 1;
  local_268 = 1;
  local_250 = 0;
  local_260 = (undefined1  [8])0x0;
  FStack_258.Data = (FScriptContainerElement *)0x0;
  if ((longlong *)&local_270 != &pFVar2->_padding_) {
    *(undefined4 *)&pFVar2->_padding_ = 1;
    *(undefined1 *)((longlong)&pFVar2->_padding_ + 4) = 1;
  }
  *(undefined1 *)&pFVar2->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar2->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_260);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_260,
             (FWriteAccessScope *)&local_248);
  if (((int)local_250 != 0) && (FStack_258.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_258.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_258,0,0,0x10);
    local_250 = local_250 & 0xffffffff00000000;
  }
  if (local_248.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_248.Accessor,&local_248);
  }
  if (FStack_258.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_258.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_260);
  this_00 = MakeTDecl<SToolBarStackButtonBlock,RequiredArgs::T0RequiredArgs>
                      (&local_220,"SToolBarStackButtonBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarStackButtonBlock.cpp"
                       ,0xa4,local_res8);
  pTVar3 = TSlateDecl<SToolBarStackButtonBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_230,pFVar2);
  __return_storage_ptr__->Object = (IMultiBlockBaseWidget *)pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_230.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_220._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_208);
  return __return_storage_ptr__;
}

// CreateMenuEntry @ 1427fe550

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FToolBarStackButtonBlock::CreateMenuEntry(FToolBarStackButtonBlock *this,FMenuBuilder *param_1)

{
  FUIContentContext *pFVar1;
  code *pcVar2;
  bool bVar3;
  FSlateIcon *pFVar4;
  TSharedPtr<FUIContentContext,1> *pTVar5;
  FText *pFVar6;
  FText *pFVar7;
  TSharedPtr<FUIContentContext,1> local_38;
  FSlateIcon local_28;
  
  pFVar4 = FSlateIcon::FSlateIcon(&local_28);
  pTVar5 = GetStackContent(this,&local_38);
  if (pTVar5->Object == (FUIContentContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = pTVar5->Object;
  pFVar6 = FText::GetEmpty();
  pFVar7 = FText::GetEmpty();
  FMenuBuilder::AddWrapperSubMenu
            (param_1,pFVar7,pFVar6,&pFVar1->OnGetContent,pFVar4,(FUIAction *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return;
}

// GetStackContent @ 1428158d0

TSharedPtr<FUIContentContext,1> * __thiscall
FToolBarStackButtonBlock::GetStackContent
          (FToolBarStackButtonBlock *this,TSharedPtr<FUIContentContext,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FUICommandList *this_00;
  FUIContentContext *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  atomic<int> aVar7;
  TSharedPtr<FUIContentContext,1> *pTVar8;
  FUIActionContext *this_01;
  TSharedPtr<IUIActionContextBase,1> *pTVar9;
  bool bVar10;
  TSharedPtr<FUICommandInfo_const_,1> local_28;
  TSharedPtr<IUIActionContextBase,1> local_18;
  
  if ((((this->CachedStackContent).Object == (FUIContentContext *)0x0) ||
      (pTVar3 = (this->CachedStackContent).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    this_00 = (FUICommandList *)this->_padding_;
    pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this_00 == (FUICommandList *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FUIContentContext,1> *)(*pcVar6)();
      return pTVar8;
    }
    local_28.Object = (FUICommandInfo *)this->_padding_;
    local_28.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)this->_padding_;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_01 = FUICommandList::GetContextForCommand(this_00,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (this_01 != (FUIActionContext *)0x0) {
      pTVar9 = FUIActionContext::FindContext(this_01,&local_18,FUIContentContext::ContextName);
      pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
      pFVar4 = (FUIContentContext *)pTVar9->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      if (pFVar4 != (FUIContentContext *)0x0) {
        (this->CachedStackContent).Object = pFVar4;
        if (pTVar3 != (this->CachedStackContent).WeakReferenceCount.ReferenceController) {
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
            UNLOCK();
          }
          pTVar5 = (this->CachedStackContent).WeakReferenceCount.ReferenceController;
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &pTVar5->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
            }
          }
          (this->CachedStackContent).WeakReferenceCount.ReferenceController = pTVar3;
        }
        __return_storage_ptr__->Object = pFVar4;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return __return_storage_ptr__;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    __return_storage_ptr__->Object = (FUIContentContext *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = (FUIContentContext *)0x0;
    pTVar3 = (this->CachedStackContent).WeakReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar3->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar7 = pTVar3->SharedReferenceCount;
        bVar10 = aVar2 == aVar7;
        if (bVar10) {
          pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar7 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar7;
      } while (!bVar10);
    }
    if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = (this->CachedStackContent).Object;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetStackIdentifier @ 142815aa0

TSharedPtr<FUIIdentifierContext,1> * __thiscall
FToolBarStackButtonBlock::GetStackIdentifier
          (FToolBarStackButtonBlock *this,TSharedPtr<FUIIdentifierContext,1> *__return_storage_ptr__
          )

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FUICommandList *this_00;
  FUIIdentifierContext *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  atomic<int> aVar7;
  TSharedPtr<FUIIdentifierContext,1> *pTVar8;
  FUIActionContext *this_01;
  TSharedPtr<IUIActionContextBase,1> *pTVar9;
  bool bVar10;
  TSharedPtr<FUICommandInfo_const_,1> local_28;
  TSharedPtr<IUIActionContextBase,1> local_18;
  
  if ((((this->CachedStackIdentifier).Object == (FUIIdentifierContext *)0x0) ||
      (pTVar3 = (this->CachedStackIdentifier).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    this_00 = (FUICommandList *)this->_padding_;
    pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this_00 == (FUICommandList *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FUIIdentifierContext,1> *)(*pcVar6)();
      return pTVar8;
    }
    local_28.Object = (FUICommandInfo *)this->_padding_;
    local_28.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)this->_padding_;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_01 = FUICommandList::GetContextForCommand(this_00,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (this_01 != (FUIActionContext *)0x0) {
      pTVar9 = FUIActionContext::FindContext(this_01,&local_18,FUIIdentifierContext::ContextName);
      pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
      pFVar4 = (FUIIdentifierContext *)pTVar9->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      if (pFVar4 != (FUIIdentifierContext *)0x0) {
        (this->CachedStackIdentifier).Object = pFVar4;
        if (pTVar3 != (this->CachedStackIdentifier).WeakReferenceCount.ReferenceController) {
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
            UNLOCK();
          }
          pTVar5 = (this->CachedStackIdentifier).WeakReferenceCount.ReferenceController;
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &pTVar5->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
            }
          }
          (this->CachedStackIdentifier).WeakReferenceCount.ReferenceController = pTVar3;
        }
        __return_storage_ptr__->Object = pFVar4;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return __return_storage_ptr__;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    __return_storage_ptr__->Object = (FUIIdentifierContext *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = (FUIIdentifierContext *)0x0;
    pTVar3 = (this->CachedStackIdentifier).WeakReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar3->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar7 = pTVar3->SharedReferenceCount;
        bVar10 = aVar2 == aVar7;
        if (bVar10) {
          pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar7 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar7;
      } while (!bVar10);
    }
    if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = (this->CachedStackIdentifier).Object;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

