// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 17

// FMultiBlock @ 1427b34f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMultiBlock * __thiscall
FMultiBlock::FMultiBlock
          (FMultiBlock *this,FUIAction *param_1,FName param_2,EMultiBlockType param_3,bool param_4,
          TSharedPtr<FUICommandList_const_,1> *param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMultiBlock__6B_;
  FUIAction::FUIAction(&this->DirectActions,param_1);
  (this->Action).Object = (FUICommandInfo *)0x0;
  (this->Action).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ActionList).Object = param_5->Object;
  pTVar1 = (param_5->SharedReferenceCount).ReferenceController;
  (this->ActionList).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->ExtensionHook = param_2;
  this->Type = param_3;
  (this->TutorialHighlightName).ComparisonIndex = 0;
  (this->TutorialHighlightName).Number = 0;
  (this->StyleNameOverride).ComparisonIndex = 0;
  (this->StyleNameOverride).Number = 0;
  this->bSearchable = true;
  this->bIsPartOfHeading = param_4;
  (this->VisibilityOverride).Value = (TEnumAsByte<EVisibility::Private>)0x19;
  (this->VisibilityOverride).bIsSet = false;
  *(undefined8 *)&(this->VisibilityOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->VisibilityOverride).Getter = 0;
  *(undefined8 *)&(this->VisibilityOverride).Getter.field_0x8 = 0;
  memset(&this->ResizeParams,0,200);
  (this->ResizeParams).bIsSet = false;
  *(undefined8 *)&(this->ResizeParams).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ResizeParams).Getter = 0;
  *(undefined8 *)&(this->ResizeParams).Getter.field_0x8 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  return this;
}

// FMultiBlock @ 1427b3610

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMultiBlock * __thiscall
FMultiBlock::FMultiBlock
          (FMultiBlock *this,TSharedPtr<FUICommandInfo_const_,1> *param_1,
          TSharedPtr<FUICommandList_const_,1> *param_2,FName param_3,EMultiBlockType param_4,
          bool param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMultiBlock__6B_;
  FUIAction::FUIAction(&this->DirectActions);
  (this->Action).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Action).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ActionList).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->ActionList).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->Type = param_4;
  this->ExtensionHook = param_3;
  (this->TutorialHighlightName).ComparisonIndex = 0;
  (this->TutorialHighlightName).Number = 0;
  this->bIsPartOfHeading = param_5;
  (this->StyleNameOverride).ComparisonIndex = 0;
  (this->StyleNameOverride).Number = 0;
  this->bSearchable = true;
  (this->VisibilityOverride).Value = (TEnumAsByte<EVisibility::Private>)0x19;
  (this->VisibilityOverride).bIsSet = false;
  *(undefined8 *)&(this->VisibilityOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->VisibilityOverride).Getter = 0;
  *(undefined8 *)&(this->VisibilityOverride).Getter.field_0x8 = 0;
  memset(&this->ResizeParams,0,200);
  (this->ResizeParams).bIsSet = false;
  *(undefined8 *)&(this->ResizeParams).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ResizeParams).Getter = 0;
  *(undefined8 *)&(this->ResizeParams).Getter.field_0x8 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FMultiBlock @ 1427b93c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FMultiBlock::~FMultiBlock(FMultiBlock *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FMultiBlock__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ResizeParams).Getter);
  pvVar3 = *(void **)&(this->ResizeParams).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ResizeParams).Getter);
  FMenuEntryResizeParams::~FMenuEntryResizeParams(&(this->ResizeParams).Value);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->VisibilityOverride).Getter);
  pvVar3 = *(void **)&(this->VisibilityOverride).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->VisibilityOverride).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActionList).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Action).SharedReferenceCount.ReferenceController);
  FUIAction::~FUIAction(&this->DirectActions);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// CreateMenuEntry @ 1427fdd00

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FMultiBlock::CreateMenuEntry(FMultiBlock *this,FMenuBuilder *param_1)

{
  return;
}

// GetAction @ 14280d050

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedPtr<FUICommandInfo_const_,1> * __thiscall
FMultiBlock::GetAction
          (FMultiBlock *this,TSharedPtr<FUICommandInfo_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Action).Object;
  pTVar1 = (this->Action).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetAlignmentOverrides @ 14280d0e0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall FMultiBlock::GetAlignmentOverrides(FMultiBlock *this,FMenuEntryStyleParams *param_1)

{
  return false;
}

// GetAlignmentOverrides @ 14280d0f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
FMultiBlock::GetAlignmentOverrides
          (FMultiBlock *this,EHorizontalAlignment *param_1,EVerticalAlignment *param_2,bool *param_3
          )

{
  return false;
}

// GetResizeParams @ 1428140c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TAttribute<FMenuEntryResizeParams> * __thiscall FMultiBlock::GetResizeParams(FMultiBlock *this)

{
  return &this->ResizeParams;
}

// GetSearchable @ 142814540

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall FMultiBlock::GetSearchable(FMultiBlock *this)

{
  return this->bSearchable;
}

// GetVisibilityOverride @ 142817080

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TAttribute<EVisibility> * __thiscall
FMultiBlock::GetVisibilityOverride
          (FMultiBlock *this,TAttribute<EVisibility> *__return_storage_ptr__)

{
  (__return_storage_ptr__->Value).Value.Value = (this->VisibilityOverride).Value.Value.Value;
  __return_storage_ptr__->bIsSet = (this->VisibilityOverride).bIsSet;
  *(undefined8 *)&__return_storage_ptr__->Getter = 0;
  *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&__return_storage_ptr__->Getter,&(this->VisibilityOverride).Getter);
  return __return_storage_ptr__;
}

// HasIcon @ 142818790

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall FMultiBlock::HasIcon(FMultiBlock *this)

{
  return false;
}

// IsGroupEndBlock @ 14281e0f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall FMultiBlock::IsGroupEndBlock(FMultiBlock *this)

{
  return false;
}

// IsGroupStartBlock @ 14281e110

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall FMultiBlock::IsGroupStartBlock(FMultiBlock *this)

{
  return false;
}

// MakeWidget @ 142821210

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<IMultiBlockBaseWidget,1> * __thiscall
FMultiBlock::MakeWidget
          (FMultiBlock *this,TSharedRef<IMultiBlockBaseWidget,1> *__return_storage_ptr__,
          TSharedRef<SMultiBoxWidget,1> *param_1,Type param_2,bool param_3,
          TSharedPtr<SWidget,1> *param_4)

{
  IMultiBlockBaseWidget *pIVar1;
  code *pcVar2;
  SMultiBoxWidget *pSVar3;
  ISlateStyle *pIVar4;
  bool bVar5;
  TSharedRef<FMultiBlock_const_,1> *pTVar6;
  TSharedRef<IMultiBlockBaseWidget,1> *pTVar7;
  FName local_res8;
  SMultiBoxWidget *local_58;
  TReferenceControllerBase<1> *local_50;
  SWidget *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedRef<FMultiBlock_const_,1> local_38;
  
  (**(code **)(this->_padding_ + 0x28))();
  pIVar1 = __return_storage_ptr__->Object;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x10);
  local_58 = param_1->Object;
  local_50 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar2)(pIVar1,&local_58);
  pIVar1 = __return_storage_ptr__->Object;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x18);
  pTVar6 = TSharedFromThis<FMultiBlock,1>::AsShared
                     ((TSharedFromThis<FMultiBlock,1> *)&this->_padding_,&local_38);
  (*pcVar2)(pIVar1,pTVar6);
  pIVar1 = __return_storage_ptr__->Object;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x20);
  local_48 = param_4->Object;
  local_40 = (param_4->SharedReferenceCount).ReferenceController;
  if (local_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar2)(pIVar1,&local_48);
  (**(code **)((longlong)*__return_storage_ptr__->Object + 0x30))
            (__return_storage_ptr__->Object,param_2,param_3);
  pSVar3 = param_1->Object;
  if ((pSVar3->MultiBox).Object == (FMultiBox *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pIVar4 = ((pSVar3->MultiBox).Object)->StyleSet;
  local_res8 = this->StyleNameOverride;
  if (local_res8 == (FName)0x0) {
    pSVar3 = param_1->Object;
    if ((pSVar3->MultiBox).Object == (FMultiBox *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar2)();
        return pTVar7;
      }
    }
    local_res8 = ((pSVar3->MultiBox).Object)->StyleName;
  }
  (**(code **)((longlong)*__return_storage_ptr__->Object + 0x28))
            (__return_storage_ptr__->Object,pIVar4,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// SetResizeParams @ 1428357e0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FMultiBlock::SetResizeParams(FMultiBlock *this,TAttribute<FMenuEntryResizeParams> *param_1)

{
  TAttribute<FMenuEntryResizeParams>::operator=(&this->ResizeParams,param_1);
  return;
}

// SetSearchable @ 1428359a0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FMultiBlock::SetSearchable(FMultiBlock *this,bool param_1)

{
  this->bSearchable = param_1;
  return;
}

// SetVisibilityOverride @ 142835c00

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FMultiBlock::SetVisibilityOverride(FMultiBlock *this,TAttribute<EVisibility> *param_1)

{
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->VisibilityOverride).Value.Value.Value = (param_1->Value).Value.Value;
  (this->VisibilityOverride).bIsSet = param_1->bIsSet;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->VisibilityOverride).Getter,this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

