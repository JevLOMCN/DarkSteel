// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 16

// FMenuEntryBlock @ 1427b16b0

FMenuEntryBlock * __thiscall
FMenuEntryBlock::FMenuEntryBlock(FMenuEntryBlock *this,FMenuEntryParams *param_1)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  longlong lVar2;
  ITextData *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  FName FVar5;
  undefined1 local_res8 [8];
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMultiBlock__6B_;
  FUIAction::FUIAction((FUIAction *)&this->_padding_,(FUIAction *)param_1);
  this->_padding_ = param_1->_padding_;
  lVar2 = param_1->_padding_;
  this->_padding_ = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  this->_padding_ = param_1->_padding_;
  lVar2 = param_1->_padding_;
  this->_padding_ = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  this->_padding_ = param_1->_padding_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  *(undefined2 *)&this->_padding_ = 0x19;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  memset(&this->_padding_,0,200);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMenuEntryBlock__6B_;
  (this->LabelOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar3 = (param_1->LabelOverride).Value.TextData.Reference;
  (this->LabelOverride).Value.TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
  }
  pTVar1 = &(this->LabelOverride).Getter;
  (this->LabelOverride).Value.Flags = (param_1->LabelOverride).Value.Flags;
  (this->LabelOverride).bIsSet = (param_1->LabelOverride).bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->LabelOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->LabelOverride).Getter);
  (this->ToolTipOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar3 = (param_1->ToolTipOverride).Value.TextData.Reference;
  (this->ToolTipOverride).Value.TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
  }
  pTVar1 = &(this->ToolTipOverride).Getter;
  (this->ToolTipOverride).Value.Flags = (param_1->ToolTipOverride).Value.Flags;
  (this->ToolTipOverride).bIsSet = (param_1->ToolTipOverride).bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ToolTipOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolTipOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->ToolTipOverride).Getter);
  (this->InputBindingOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar3 = (param_1->InputBindingOverride).Value.TextData.Reference;
  (this->InputBindingOverride).Value.TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
  }
  pTVar1 = &(this->InputBindingOverride).Getter;
  (this->InputBindingOverride).Value.Flags = (param_1->InputBindingOverride).Value.Flags;
  (this->InputBindingOverride).bIsSet = (param_1->InputBindingOverride).bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->InputBindingOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->InputBindingOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->InputBindingOverride).Getter);
  FVar5 = (param_1->IconOverride).StyleName;
  (this->IconOverride).StyleSetName = (param_1->IconOverride).StyleSetName;
  (this->IconOverride).StyleName = FVar5;
  FVar5 = (param_1->IconOverride).StatusOverlayStyleName;
  (this->IconOverride).SmallStyleName = (param_1->IconOverride).SmallStyleName;
  (this->IconOverride).StatusOverlayStyleName = FVar5;
  *(undefined8 *)&this->EntryBuilder = 0;
  *(undefined8 *)&(this->EntryBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->EntryBuilder).field_0x10 = 0;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->EntryBuilder,&param_1->EntryBuilder);
  *(undefined8 *)&this->MenuBuilder = 0;
  *(undefined8 *)&(this->MenuBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->MenuBuilder).field_0x10 = 0;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->MenuBuilder,&param_1->MenuBuilder);
  (this->EntryWidget).Object = (param_1->EntryWidget).Object;
  pTVar4 = (param_1->EntryWidget).SharedReferenceCount.ReferenceController;
  (this->EntryWidget).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bIsSubMenu = param_1->bIsSubMenu;
  this->bIsRecursivelySearchable = param_1->bIsRecursivelySearchable;
  this->bOpenSubMenuOnClick = param_1->bOpenSubMenuOnClick;
  this->UserInterfaceActionType = param_1->UserInterfaceActionType;
  this->bCloseSelfOnly = param_1->bCloseSelfOnly;
  (this->Extender).Object = (param_1->Extender).Object;
  pTVar4 = (param_1->Extender).SharedReferenceCount.ReferenceController;
  (this->Extender).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bShouldCloseWindowAfterMenuSelection = param_1->bShouldCloseWindowAfterMenuSelection;
  (this->CheckBoxStyle).ComparisonIndex = 0;
  (this->CheckBoxStyle).Number = 0;
  return this;
}

// FMenuEntryBlock @ 1427b19f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMenuEntryBlock * __thiscall
FMenuEntryBlock::FMenuEntryBlock
          (FMenuEntryBlock *this,FName *param_1,FUIAction *param_2,TAttribute<FText> *param_3,
          TAttribute<FText> *param_4,
          TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *param_5,
          TSharedPtr<FExtender,1> *param_6,bool param_7,bool param_8,bool param_9,
          FSlateIcon *param_10,bool param_11)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  ITextData *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  TAttribute<FText> *pTVar5;
  undefined1 local_res8 [8];
  TSharedPtr<FUICommandList_const_,1> local_18;
  
  local_18.Object = (FUICommandList *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMultiBlock::FMultiBlock((FMultiBlock *)this,param_2,*param_1,MenuEntry,false,&local_18);
  this->_padding_ = (longlong)&___7FMenuEntryBlock__6B_;
  (this->LabelOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_3->Value).TextData.Reference;
  (this->LabelOverride).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  pTVar1 = &(this->LabelOverride).Getter;
  (this->LabelOverride).Value.Flags = (param_3->Value).Flags;
  (this->LabelOverride).bIsSet = param_3->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->LabelOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_3->Getter);
  pTVar5 = param_4;
  (this->ToolTipOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_4->Value).TextData.Reference;
  (this->ToolTipOverride).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&param_4);
  }
  pTVar1 = &(this->ToolTipOverride).Getter;
  (this->ToolTipOverride).Value.Flags = (pTVar5->Value).Flags;
  (this->ToolTipOverride).bIsSet = pTVar5->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ToolTipOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolTipOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&pTVar5->Getter);
  FText::FText(&(this->InputBindingOverride).Value);
  (this->InputBindingOverride).bIsSet = false;
  *(undefined8 *)&(this->InputBindingOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->InputBindingOverride).Getter = 0;
  *(undefined8 *)&(this->InputBindingOverride).Getter.field_0x8 = 0;
  FVar4 = param_10->StyleName;
  (this->IconOverride).StyleSetName = param_10->StyleSetName;
  (this->IconOverride).StyleName = FVar4;
  FVar4 = param_10->StatusOverlayStyleName;
  (this->IconOverride).SmallStyleName = param_10->SmallStyleName;
  (this->IconOverride).StatusOverlayStyleName = FVar4;
  *(undefined8 *)&this->EntryBuilder = 0;
  *(undefined8 *)&(this->EntryBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->EntryBuilder).field_0x10 = 0;
  *(undefined8 *)&this->MenuBuilder = 0;
  *(undefined8 *)&(this->MenuBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->MenuBuilder).field_0x10 = 0;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->MenuBuilder,param_5);
  this->bIsSubMenu = param_7;
  this->bOpenSubMenuOnClick = param_8;
  this->bCloseSelfOnly = param_9;
  (this->EntryWidget).Object = (SWidget *)0x0;
  (this->EntryWidget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bIsRecursivelySearchable = true;
  this->UserInterfaceActionType = Button;
  (this->Extender).Object = param_6->Object;
  pTVar3 = (param_6->SharedReferenceCount).ReferenceController;
  (this->Extender).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bShouldCloseWindowAfterMenuSelection = param_11;
  (this->CheckBoxStyle).ComparisonIndex = 0;
  (this->CheckBoxStyle).Number = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_6->SharedReferenceCount).ReferenceController);
  return this;
}

// FMenuEntryBlock @ 1427b1c00

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMenuEntryBlock * __thiscall
FMenuEntryBlock::FMenuEntryBlock
          (FMenuEntryBlock *this,FName *param_1,FUIAction *param_2,TSharedRef<SWidget,1> *param_3,
          TAttribute<FText> *param_4,EUserInterfaceActionType param_5,bool param_6,bool param_7)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  ITextData *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  TAttribute<FText> *pTVar3;
  TSharedPtr<FUICommandList_const_,1> local_18;
  
  local_18.Object = (FUICommandList *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMultiBlock::FMultiBlock((FMultiBlock *)this,param_2,*param_1,MenuEntry,false,&local_18);
  this->_padding_ = (longlong)&___7FMenuEntryBlock__6B_;
  FText::FText(&(this->LabelOverride).Value);
  pTVar3 = param_4;
  (this->LabelOverride).bIsSet = false;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->LabelOverride).Getter = 0;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x8 = 0;
  (this->ToolTipOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_4->Value).TextData.Reference;
  (this->ToolTipOverride).Value.TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&param_4);
  }
  this_00 = &(this->ToolTipOverride).Getter;
  (this->ToolTipOverride).Value.Flags = (pTVar3->Value).Flags;
  (this->ToolTipOverride).bIsSet = pTVar3->bIsSet;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ToolTipOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolTipOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (this_00,&pTVar3->Getter);
  FText::FText(&(this->InputBindingOverride).Value);
  (this->InputBindingOverride).bIsSet = false;
  *(undefined8 *)&(this->InputBindingOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->InputBindingOverride).Getter = 0;
  *(undefined8 *)&(this->InputBindingOverride).Getter.field_0x8 = 0;
  FSlateIcon::FSlateIcon(&this->IconOverride);
  *(undefined8 *)&this->EntryBuilder = 0;
  *(undefined8 *)&(this->EntryBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->EntryBuilder).field_0x10 = 0;
  *(undefined8 *)&this->MenuBuilder = 0;
  *(undefined8 *)&(this->MenuBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->MenuBuilder).field_0x10 = 0;
  (this->EntryWidget).Object = param_3->Object;
  pTVar2 = (param_3->SharedReferenceCount).ReferenceController;
  (this->EntryWidget).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->UserInterfaceActionType = param_5;
  this->bCloseSelfOnly = param_6;
  this->bShouldCloseWindowAfterMenuSelection = param_7;
  this->bIsSubMenu = false;
  this->bIsRecursivelySearchable = true;
  this->bOpenSubMenuOnClick = false;
  (this->Extender).Object = (FExtender *)0x0;
  (this->Extender).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->CheckBoxStyle).ComparisonIndex = 0;
  (this->CheckBoxStyle).Number = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// FMenuEntryBlock @ 1427b1dc0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMenuEntryBlock * __thiscall
FMenuEntryBlock::FMenuEntryBlock
          (FMenuEntryBlock *this,FName *param_1,FUIAction *param_2,TSharedRef<SWidget,1> *param_3,
          TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *param_4,
          TSharedPtr<FExtender,1> *param_5,bool param_6,TSharedPtr<FUICommandList_const_,1> *param_7
          ,bool param_8,bool param_9)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FUICommandList_const_,1> local_18;
  
  local_18.Object = (FUICommandList *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMultiBlock::FMultiBlock((FMultiBlock *)this,param_2,*param_1,MenuEntry,false,&local_18);
  this->_padding_ = (longlong)&___7FMenuEntryBlock__6B_;
  FText::FText(&(this->LabelOverride).Value);
  (this->LabelOverride).bIsSet = false;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->LabelOverride).Getter = 0;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x8 = 0;
  FText::FText(&(this->ToolTipOverride).Value);
  (this->ToolTipOverride).bIsSet = false;
  *(undefined8 *)&(this->ToolTipOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ToolTipOverride).Getter = 0;
  *(undefined8 *)&(this->ToolTipOverride).Getter.field_0x8 = 0;
  FText::FText(&(this->InputBindingOverride).Value);
  (this->InputBindingOverride).bIsSet = false;
  *(undefined8 *)&(this->InputBindingOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->InputBindingOverride).Getter = 0;
  *(undefined8 *)&(this->InputBindingOverride).Getter.field_0x8 = 0;
  FSlateIcon::FSlateIcon(&this->IconOverride);
  *(undefined8 *)&this->EntryBuilder = 0;
  *(undefined8 *)&(this->EntryBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->EntryBuilder).field_0x10 = 0;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->EntryBuilder,param_4);
  *(undefined8 *)&this->MenuBuilder = 0;
  *(undefined8 *)&(this->MenuBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->MenuBuilder).field_0x10 = 0;
  (this->EntryWidget).Object = param_3->Object;
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  (this->EntryWidget).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bIsSubMenu = param_6;
  this->bCloseSelfOnly = param_8;
  this->bIsRecursivelySearchable = true;
  this->bOpenSubMenuOnClick = false;
  this->UserInterfaceActionType = Button;
  (this->Extender).Object = param_5->Object;
  pTVar1 = (param_5->SharedReferenceCount).ReferenceController;
  (this->Extender).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bShouldCloseWindowAfterMenuSelection = param_9;
  (this->CheckBoxStyle).ComparisonIndex = 0;
  (this->CheckBoxStyle).Number = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_7->SharedReferenceCount).ReferenceController);
  return this;
}

// FMenuEntryBlock @ 1427b1f90

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMenuEntryBlock * __thiscall
FMenuEntryBlock::FMenuEntryBlock
          (FMenuEntryBlock *this,FName *param_1,TAttribute<FText> *param_2,
          TAttribute<FText> *param_3,FSlateIcon *param_4,FUIAction *param_5,
          EUserInterfaceActionType param_6,bool param_7,bool param_8,TAttribute<FText> *param_9)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  ITextData *pIVar2;
  FName FVar3;
  FName FVar4;
  TAttribute<FText> *pTVar5;
  undefined1 local_res8 [8];
  TSharedPtr<FUICommandList_const_,1> local_18;
  
  local_18.Object = (FUICommandList *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMultiBlock::FMultiBlock((FMultiBlock *)this,param_5,*param_1,MenuEntry,false,&local_18);
  this->_padding_ = (longlong)&___7FMenuEntryBlock__6B_;
  (this->LabelOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_2->Value).TextData.Reference;
  (this->LabelOverride).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  pTVar1 = &(this->LabelOverride).Getter;
  (this->LabelOverride).Value.Flags = (param_2->Value).Flags;
  (this->LabelOverride).bIsSet = param_2->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->LabelOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_2->Getter);
  (this->ToolTipOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_3->Value).TextData.Reference;
  (this->ToolTipOverride).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  pTVar1 = &(this->ToolTipOverride).Getter;
  (this->ToolTipOverride).Value.Flags = (param_3->Value).Flags;
  (this->ToolTipOverride).bIsSet = param_3->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ToolTipOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolTipOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_3->Getter);
  pTVar5 = param_9;
  (this->InputBindingOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_9->Value).TextData.Reference;
  (this->InputBindingOverride).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&param_9);
  }
  pTVar1 = &(this->InputBindingOverride).Getter;
  (this->InputBindingOverride).Value.Flags = (pTVar5->Value).Flags;
  (this->InputBindingOverride).bIsSet = pTVar5->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->InputBindingOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->InputBindingOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&pTVar5->Getter);
  FVar3 = param_4->StyleName;
  (this->IconOverride).StyleSetName = param_4->StyleSetName;
  (this->IconOverride).StyleName = FVar3;
  FVar3 = param_4->SmallStyleName;
  FVar4 = param_4->StatusOverlayStyleName;
  this->UserInterfaceActionType = param_6;
  (this->IconOverride).SmallStyleName = FVar3;
  (this->IconOverride).StatusOverlayStyleName = FVar4;
  this->bCloseSelfOnly = param_7;
  this->bShouldCloseWindowAfterMenuSelection = param_8;
  *(undefined8 *)&this->EntryBuilder = 0;
  *(undefined8 *)&(this->EntryBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->EntryBuilder).field_0x10 = 0;
  *(undefined8 *)&this->MenuBuilder = 0;
  *(undefined8 *)&(this->MenuBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->MenuBuilder).field_0x10 = 0;
  (this->EntryWidget).Object = (SWidget *)0x0;
  (this->EntryWidget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bOpenSubMenuOnClick = false;
  (this->Extender).Object = (FExtender *)0x0;
  (this->Extender).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bIsSubMenu = false;
  this->bIsRecursivelySearchable = true;
  (this->CheckBoxStyle).ComparisonIndex = 0;
  (this->CheckBoxStyle).Number = 0;
  return this;
}

// FMenuEntryBlock @ 1427b21a0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMenuEntryBlock * __thiscall
FMenuEntryBlock::FMenuEntryBlock
          (FMenuEntryBlock *this,FName *param_1,TAttribute<FText> *param_2,
          TAttribute<FText> *param_3,
          TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *param_4,
          TSharedPtr<FExtender,1> *param_5,bool param_6,bool param_7,
          TSharedPtr<FUICommandList_const_,1> *param_8,bool param_9,FSlateIcon *param_10,
          bool param_11)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  FName FVar2;
  ITextData *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FUICommandList_const_,1> *pTVar5;
  TSharedPtr<FUICommandList_const_,1> local_28;
  TSharedPtr<FUICommandInfo_const_,1> local_18;
  
  pTVar5 = param_8;
  FVar2 = *param_1;
  local_28.Object = param_8->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_8->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = (FUICommandInfo *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMultiBlock::FMultiBlock((FMultiBlock *)this,&local_18,&local_28,FVar2,MenuEntry,false);
  this->_padding_ = (longlong)&___7FMenuEntryBlock__6B_;
  (this->LabelOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar3 = (param_2->Value).TextData.Reference;
  (this->LabelOverride).Value.TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&param_8);
  }
  pTVar1 = &(this->LabelOverride).Getter;
  (this->LabelOverride).Value.Flags = (param_2->Value).Flags;
  (this->LabelOverride).bIsSet = param_2->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->LabelOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_2->Getter);
  (this->ToolTipOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar3 = (param_3->Value).TextData.Reference;
  (this->ToolTipOverride).Value.TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&param_8);
  }
  pTVar1 = &(this->ToolTipOverride).Getter;
  (this->ToolTipOverride).Value.Flags = (param_3->Value).Flags;
  (this->ToolTipOverride).bIsSet = param_3->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ToolTipOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolTipOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_3->Getter);
  FText::FText(&(this->InputBindingOverride).Value);
  (this->InputBindingOverride).bIsSet = false;
  *(undefined8 *)&(this->InputBindingOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->InputBindingOverride).Getter = 0;
  *(undefined8 *)&(this->InputBindingOverride).Getter.field_0x8 = 0;
  FVar2 = param_10->StyleName;
  (this->IconOverride).StyleSetName = param_10->StyleSetName;
  (this->IconOverride).StyleName = FVar2;
  FVar2 = param_10->StatusOverlayStyleName;
  (this->IconOverride).SmallStyleName = param_10->SmallStyleName;
  (this->IconOverride).StatusOverlayStyleName = FVar2;
  *(undefined8 *)&this->EntryBuilder = 0;
  *(undefined8 *)&(this->EntryBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->EntryBuilder).field_0x10 = 0;
  *(undefined8 *)&this->MenuBuilder = 0;
  *(undefined8 *)&(this->MenuBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->MenuBuilder).field_0x10 = 0;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->MenuBuilder,param_4);
  this->bIsSubMenu = param_6;
  this->bOpenSubMenuOnClick = param_7;
  this->bCloseSelfOnly = param_9;
  (this->EntryWidget).Object = (SWidget *)0x0;
  (this->EntryWidget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bIsRecursivelySearchable = true;
  this->UserInterfaceActionType = Button;
  (this->Extender).Object = param_5->Object;
  pTVar4 = (param_5->SharedReferenceCount).ReferenceController;
  (this->Extender).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bShouldCloseWindowAfterMenuSelection = param_11;
  (this->CheckBoxStyle).ComparisonIndex = 0;
  (this->CheckBoxStyle).Number = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar5->SharedReferenceCount).ReferenceController);
  return this;
}

// FMenuEntryBlock @ 1427b23f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMenuEntryBlock * __thiscall
FMenuEntryBlock::FMenuEntryBlock
          (FMenuEntryBlock *this,FName *param_1,TAttribute<FText> *param_2,
          TAttribute<FText> *param_3,
          TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *param_4,
          TSharedPtr<FExtender,1> *param_5,bool param_6,bool param_7,FSlateIcon *param_8,
          FUIAction *param_9,EUserInterfaceActionType param_10,bool param_11,bool param_12,
          TSharedPtr<FUICommandList_const_,1> *param_13,TAttribute<FText> *param_14)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  ITextData *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  TSharedPtr<FUICommandList_const_,1> *pTVar5;
  TAttribute<FText> *pTVar6;
  TSharedPtr<FUICommandList_const_,1> local_18;
  
  pTVar5 = param_13;
  local_18.Object = param_13->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_13->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMultiBlock::FMultiBlock((FMultiBlock *)this,param_9,*param_1,MenuEntry,false,&local_18);
  this->_padding_ = (longlong)&___7FMenuEntryBlock__6B_;
  (this->LabelOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_2->Value).TextData.Reference;
  (this->LabelOverride).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&param_13);
  }
  pTVar1 = &(this->LabelOverride).Getter;
  (this->LabelOverride).Value.Flags = (param_2->Value).Flags;
  (this->LabelOverride).bIsSet = param_2->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->LabelOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_2->Getter);
  (this->ToolTipOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_3->Value).TextData.Reference;
  (this->ToolTipOverride).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&param_13);
  }
  pTVar1 = &(this->ToolTipOverride).Getter;
  (this->ToolTipOverride).Value.Flags = (param_3->Value).Flags;
  (this->ToolTipOverride).bIsSet = param_3->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ToolTipOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolTipOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_3->Getter);
  pTVar6 = param_14;
  (this->InputBindingOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_14->Value).TextData.Reference;
  (this->InputBindingOverride).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&param_13);
  }
  pTVar1 = &(this->InputBindingOverride).Getter;
  (this->InputBindingOverride).Value.Flags = (pTVar6->Value).Flags;
  (this->InputBindingOverride).bIsSet = pTVar6->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->InputBindingOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->InputBindingOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&pTVar6->Getter);
  FVar4 = param_8->StyleName;
  (this->IconOverride).StyleSetName = param_8->StyleSetName;
  (this->IconOverride).StyleName = FVar4;
  FVar4 = param_8->StatusOverlayStyleName;
  (this->IconOverride).SmallStyleName = param_8->SmallStyleName;
  (this->IconOverride).StatusOverlayStyleName = FVar4;
  *(undefined8 *)&this->EntryBuilder = 0;
  *(undefined8 *)&(this->EntryBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->EntryBuilder).field_0x10 = 0;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->EntryBuilder,param_4);
  this->bIsSubMenu = param_6;
  this->bOpenSubMenuOnClick = param_7;
  this->UserInterfaceActionType = param_10;
  this->bCloseSelfOnly = param_11;
  *(undefined8 *)&this->MenuBuilder = 0;
  *(undefined8 *)&(this->MenuBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->MenuBuilder).field_0x10 = 0;
  (this->EntryWidget).Object = (SWidget *)0x0;
  (this->EntryWidget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bIsRecursivelySearchable = true;
  (this->Extender).Object = param_5->Object;
  pTVar3 = (param_5->SharedReferenceCount).ReferenceController;
  (this->Extender).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bShouldCloseWindowAfterMenuSelection = param_12;
  (this->CheckBoxStyle).ComparisonIndex = 0;
  (this->CheckBoxStyle).Number = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar5->SharedReferenceCount).ReferenceController);
  return this;
}

// FMenuEntryBlock @ 1427b2670

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMenuEntryBlock * __thiscall
FMenuEntryBlock::FMenuEntryBlock
          (FMenuEntryBlock *this,FName *param_1,TAttribute<FText> *param_2,
          TAttribute<FText> *param_3,
          TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *param_4,
          TSharedPtr<FExtender,1> *param_5,bool param_6,bool param_7,
          TSharedPtr<FUICommandList_const_,1> *param_8,bool param_9,FSlateIcon *param_10,
          bool param_11)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  FName FVar2;
  ITextData *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FUICommandList_const_,1> *pTVar5;
  TSharedPtr<FUICommandList_const_,1> local_28;
  TSharedPtr<FUICommandInfo_const_,1> local_18;
  
  pTVar5 = param_8;
  FVar2 = *param_1;
  local_28.Object = param_8->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_8->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = (FUICommandInfo *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMultiBlock::FMultiBlock((FMultiBlock *)this,&local_18,&local_28,FVar2,MenuEntry,false);
  this->_padding_ = (longlong)&___7FMenuEntryBlock__6B_;
  (this->LabelOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar3 = (param_2->Value).TextData.Reference;
  (this->LabelOverride).Value.TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&param_8);
  }
  pTVar1 = &(this->LabelOverride).Getter;
  (this->LabelOverride).Value.Flags = (param_2->Value).Flags;
  (this->LabelOverride).bIsSet = param_2->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->LabelOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_2->Getter);
  (this->ToolTipOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar3 = (param_3->Value).TextData.Reference;
  (this->ToolTipOverride).Value.TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&param_8);
  }
  pTVar1 = &(this->ToolTipOverride).Getter;
  (this->ToolTipOverride).Value.Flags = (param_3->Value).Flags;
  (this->ToolTipOverride).bIsSet = param_3->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ToolTipOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolTipOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_3->Getter);
  FText::FText(&(this->InputBindingOverride).Value);
  (this->InputBindingOverride).bIsSet = false;
  *(undefined8 *)&(this->InputBindingOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->InputBindingOverride).Getter = 0;
  *(undefined8 *)&(this->InputBindingOverride).Getter.field_0x8 = 0;
  FVar2 = param_10->StyleName;
  (this->IconOverride).StyleSetName = param_10->StyleSetName;
  (this->IconOverride).StyleName = FVar2;
  FVar2 = param_10->StatusOverlayStyleName;
  (this->IconOverride).SmallStyleName = param_10->SmallStyleName;
  (this->IconOverride).StatusOverlayStyleName = FVar2;
  *(undefined8 *)&this->EntryBuilder = 0;
  *(undefined8 *)&(this->EntryBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->EntryBuilder).field_0x10 = 0;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->EntryBuilder,param_4);
  this->bIsSubMenu = param_6;
  this->bOpenSubMenuOnClick = param_7;
  this->bCloseSelfOnly = param_9;
  *(undefined8 *)&this->MenuBuilder = 0;
  *(undefined8 *)&(this->MenuBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->MenuBuilder).field_0x10 = 0;
  (this->EntryWidget).Object = (SWidget *)0x0;
  (this->EntryWidget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bIsRecursivelySearchable = true;
  this->UserInterfaceActionType = Button;
  (this->Extender).Object = param_5->Object;
  pTVar4 = (param_5->SharedReferenceCount).ReferenceController;
  (this->Extender).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bShouldCloseWindowAfterMenuSelection = param_11;
  (this->CheckBoxStyle).ComparisonIndex = 0;
  (this->CheckBoxStyle).Number = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar5->SharedReferenceCount).ReferenceController);
  return this;
}

// FMenuEntryBlock @ 1427b28c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMenuEntryBlock * __thiscall
FMenuEntryBlock::FMenuEntryBlock
          (FMenuEntryBlock *this,FName *param_1,TAttribute<FText> *param_2,
          TAttribute<FText> *param_3,TSharedPtr<SWidget,1> *param_4,TSharedPtr<FExtender,1> *param_5
          ,bool param_6,bool param_7,TSharedPtr<FUICommandList_const_,1> *param_8,bool param_9,
          FSlateIcon *param_10,bool param_11)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  FName FVar2;
  ITextData *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FUICommandList_const_,1> *pTVar5;
  TSharedPtr<FUICommandList_const_,1> local_28;
  TSharedPtr<FUICommandInfo_const_,1> local_18;
  
  pTVar5 = param_8;
  FVar2 = *param_1;
  local_28.Object = param_8->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_8->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = (FUICommandInfo *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMultiBlock::FMultiBlock((FMultiBlock *)this,&local_18,&local_28,FVar2,MenuEntry,false);
  this->_padding_ = (longlong)&___7FMenuEntryBlock__6B_;
  (this->LabelOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar3 = (param_2->Value).TextData.Reference;
  (this->LabelOverride).Value.TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&param_8);
  }
  pTVar1 = &(this->LabelOverride).Getter;
  (this->LabelOverride).Value.Flags = (param_2->Value).Flags;
  (this->LabelOverride).bIsSet = param_2->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->LabelOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_2->Getter);
  (this->ToolTipOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar3 = (param_3->Value).TextData.Reference;
  (this->ToolTipOverride).Value.TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&param_8);
  }
  pTVar1 = &(this->ToolTipOverride).Getter;
  (this->ToolTipOverride).Value.Flags = (param_3->Value).Flags;
  (this->ToolTipOverride).bIsSet = param_3->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ToolTipOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolTipOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_3->Getter);
  FText::FText(&(this->InputBindingOverride).Value);
  (this->InputBindingOverride).bIsSet = false;
  *(undefined8 *)&(this->InputBindingOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->InputBindingOverride).Getter = 0;
  *(undefined8 *)&(this->InputBindingOverride).Getter.field_0x8 = 0;
  FVar2 = param_10->StyleName;
  (this->IconOverride).StyleSetName = param_10->StyleSetName;
  (this->IconOverride).StyleName = FVar2;
  FVar2 = param_10->StatusOverlayStyleName;
  (this->IconOverride).SmallStyleName = param_10->SmallStyleName;
  (this->IconOverride).StatusOverlayStyleName = FVar2;
  *(undefined8 *)&this->EntryBuilder = 0;
  *(undefined8 *)&(this->EntryBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->EntryBuilder).field_0x10 = 0;
  *(undefined8 *)&this->MenuBuilder = 0;
  *(undefined8 *)&(this->MenuBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->MenuBuilder).field_0x10 = 0;
  (this->EntryWidget).Object = param_4->Object;
  pTVar4 = (param_4->SharedReferenceCount).ReferenceController;
  (this->EntryWidget).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bIsSubMenu = param_6;
  this->bOpenSubMenuOnClick = param_7;
  this->bCloseSelfOnly = param_9;
  this->bIsRecursivelySearchable = true;
  this->UserInterfaceActionType = Button;
  (this->Extender).Object = param_5->Object;
  pTVar4 = (param_5->SharedReferenceCount).ReferenceController;
  (this->Extender).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bShouldCloseWindowAfterMenuSelection = param_11;
  (this->CheckBoxStyle).ComparisonIndex = 0;
  (this->CheckBoxStyle).Number = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar5->SharedReferenceCount).ReferenceController);
  return this;
}

// FMenuEntryBlock @ 1427b2b20

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMenuEntryBlock * __thiscall
FMenuEntryBlock::FMenuEntryBlock
          (FMenuEntryBlock *this,FName *param_1,TSharedPtr<FUICommandInfo_const_,1> *param_2,
          TSharedPtr<FUICommandList_const_,1> *param_3,TAttribute<FText> *param_4,
          TAttribute<FText> *param_5,FSlateIcon *param_6,bool param_7,bool param_8)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  FName FVar2;
  ITextData *pIVar3;
  FName FVar4;
  TAttribute<FText> *pTVar5;
  TSharedPtr<FUICommandList_const_,1> local_28;
  TSharedPtr<FUICommandInfo_const_,1> local_18;
  
  FVar2 = *param_1;
  local_28.Object = param_3->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMultiBlock::FMultiBlock((FMultiBlock *)this,&local_18,&local_28,FVar2,MenuEntry,false);
  pTVar5 = param_4;
  this->_padding_ = (longlong)&___7FMenuEntryBlock__6B_;
  (this->LabelOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar3 = (param_4->Value).TextData.Reference;
  (this->LabelOverride).Value.TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&param_4);
  }
  pTVar1 = &(this->LabelOverride).Getter;
  (this->LabelOverride).Value.Flags = (pTVar5->Value).Flags;
  (this->LabelOverride).bIsSet = pTVar5->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->LabelOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&pTVar5->Getter);
  pTVar5 = param_5;
  (this->ToolTipOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar3 = (param_5->Value).TextData.Reference;
  (this->ToolTipOverride).Value.TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&param_4);
  }
  pTVar1 = &(this->ToolTipOverride).Getter;
  (this->ToolTipOverride).Value.Flags = (pTVar5->Value).Flags;
  (this->ToolTipOverride).bIsSet = pTVar5->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ToolTipOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolTipOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&pTVar5->Getter);
  FText::FText(&(this->InputBindingOverride).Value);
  (this->InputBindingOverride).bIsSet = false;
  *(undefined8 *)&(this->InputBindingOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->InputBindingOverride).Getter = 0;
  *(undefined8 *)&(this->InputBindingOverride).Getter.field_0x8 = 0;
  FVar2 = param_6->StyleName;
  (this->IconOverride).StyleSetName = param_6->StyleSetName;
  (this->IconOverride).StyleName = FVar2;
  FVar2 = param_6->SmallStyleName;
  FVar4 = param_6->StatusOverlayStyleName;
  this->bCloseSelfOnly = param_7;
  (this->IconOverride).SmallStyleName = FVar2;
  (this->IconOverride).StatusOverlayStyleName = FVar4;
  this->bShouldCloseWindowAfterMenuSelection = param_8;
  *(undefined8 *)&this->EntryBuilder = 0;
  *(undefined8 *)&(this->EntryBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->EntryBuilder).field_0x10 = 0;
  *(undefined8 *)&this->MenuBuilder = 0;
  *(undefined8 *)&(this->MenuBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->MenuBuilder).field_0x10 = 0;
  (this->EntryWidget).Object = (SWidget *)0x0;
  (this->EntryWidget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bIsSubMenu = false;
  this->bIsRecursivelySearchable = true;
  this->bOpenSubMenuOnClick = false;
  this->UserInterfaceActionType = Button;
  (this->Extender).Object = (FExtender *)0x0;
  (this->Extender).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->CheckBoxStyle).ComparisonIndex = 0;
  (this->CheckBoxStyle).Number = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// FMenuEntryBlock @ 1427b2d40

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMenuEntryBlock * __thiscall
FMenuEntryBlock::FMenuEntryBlock
          (FMenuEntryBlock *this,FName *param_1,TSharedRef<SWidget,1> *param_2,
          TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *param_3,
          TSharedPtr<FExtender,1> *param_4,bool param_5,bool param_6,
          TSharedPtr<FUICommandList_const_,1> *param_7,bool param_8,bool param_9)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<FUICommandList_const_,1> local_38;
  TSharedPtr<FUICommandInfo_const_,1> local_28;
  
  FVar1 = *param_1;
  local_38.Object = param_7->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_7->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = (FUICommandInfo *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMultiBlock::FMultiBlock((FMultiBlock *)this,&local_28,&local_38,FVar1,MenuEntry,false);
  this->_padding_ = (longlong)&___7FMenuEntryBlock__6B_;
  FText::FText(&(this->LabelOverride).Value);
  (this->LabelOverride).bIsSet = false;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->LabelOverride).Getter = 0;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x8 = 0;
  FText::FText(&(this->ToolTipOverride).Value);
  (this->ToolTipOverride).bIsSet = false;
  *(undefined8 *)&(this->ToolTipOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ToolTipOverride).Getter = 0;
  *(undefined8 *)&(this->ToolTipOverride).Getter.field_0x8 = 0;
  FText::FText(&(this->InputBindingOverride).Value);
  (this->InputBindingOverride).bIsSet = false;
  *(undefined8 *)&(this->InputBindingOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->InputBindingOverride).Getter = 0;
  *(undefined8 *)&(this->InputBindingOverride).Getter.field_0x8 = 0;
  FSlateIcon::FSlateIcon(&this->IconOverride);
  *(undefined8 *)&this->EntryBuilder = 0;
  *(undefined8 *)&(this->EntryBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->EntryBuilder).field_0x10 = 0;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->EntryBuilder,param_3);
  *(undefined8 *)&this->MenuBuilder = 0;
  *(undefined8 *)&(this->MenuBuilder).field_0x8 = 0;
  *(undefined4 *)&(this->MenuBuilder).field_0x10 = 0;
  (this->EntryWidget).Object = param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  (this->EntryWidget).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bIsSubMenu = param_5;
  this->bOpenSubMenuOnClick = param_6;
  this->bCloseSelfOnly = param_8;
  this->bIsRecursivelySearchable = true;
  this->UserInterfaceActionType = Button;
  (this->Extender).Object = param_4->Object;
  pTVar2 = (param_4->SharedReferenceCount).ReferenceController;
  (this->Extender).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bShouldCloseWindowAfterMenuSelection = param_9;
  (this->CheckBoxStyle).ComparisonIndex = 0;
  (this->CheckBoxStyle).Number = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_7->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FMenuEntryBlock @ 1427b91d0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FMenuEntryBlock::~FMenuEntryBlock(FMenuEntryBlock *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Extender).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EntryWidget).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MenuBuilder);
  pvVar1 = *(void **)&(this->MenuBuilder).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MenuBuilder);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->EntryBuilder);
  pvVar1 = *(void **)&(this->EntryBuilder).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->EntryBuilder);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->InputBindingOverride).Getter);
  pvVar1 = *(void **)&(this->InputBindingOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->InputBindingOverride).Getter);
  pIVar2 = (this->InputBindingOverride).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ToolTipOverride).Getter);
  pvVar1 = *(void **)&(this->ToolTipOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ToolTipOverride).Getter);
  pIVar2 = (this->ToolTipOverride).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LabelOverride).Getter);
  pvVar1 = *(void **)&(this->LabelOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->LabelOverride).Getter);
  pIVar2 = (this->LabelOverride).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  FMultiBlock::~FMultiBlock((FMultiBlock *)this);
  return;
}

// ConstructWidget @ 1427f2c60

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<IMultiBlockBaseWidget,1> * __thiscall
FMenuEntryBlock::ConstructWidget
          (FMenuEntryBlock *this,TSharedRef<IMultiBlockBaseWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  FSlateBaseNamedArgs *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<IMultiBlockBaseWidget,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined1 local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  FSharedReferencer<1> local_260;
  undefined1 *local_258;
  FMemScope local_250;
  undefined8 local_248;
  FSharedReferencer<1> local_240;
  TSharedRef<SMenuEntryBlock,1> local_238;
  FSlateBaseNamedArgs local_228;
  
  pFVar7 = (FSlateBaseNamedArgs *)SMenuEntryBlock::FArguments::FArguments((FArguments *)&local_228);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_250,&local_res20,true);
  local_258 = local_res10;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  local_260.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = ::operator_new(0x330);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSMenuEntryBlock___00_SharedPointerInternals__6B_;
    memset(pTVar8 + 1,0,800);
    SMultiBlockBaseWidget::SMultiBlockBaseWidget((SMultiBlockBaseWidget *)(pTVar8 + 1));
    pTVar8[1]._padding_ = (longlong)&SMenuEntryBlock::_vftable__for__IMultiBlockBaseWidget__;
    *(undefined ***)&pTVar8[1].SharedReferenceCount =
         &SMenuEntryBlock::_vftable__for__SCompoundWidget__;
    pTVar8[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[0x30]._padding_ = 0;
    pTVar8[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0x31].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[0x32]._padding_ = 0;
    pTVar10 = pTVar8;
  }
  TSharedRef<SMenuEntryBlock,1>::TSharedRef<SMenuEntryBlock,1>
            (&local_238,(SMenuEntryBlock *)(pTVar10 + 1),pTVar10);
  local_240.ReferenceController = local_238.SharedReferenceCount.ReferenceController;
  if (local_238.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_248 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_260,&local_240);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_240.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238.SharedReferenceCount.ReferenceController);
  if ((local_238.Object == (SMenuEntryBlock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar9 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar2)();
    return pTVar9;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&(local_238.Object)->_padding_,"SMenuEntryBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuEntryBlock.cpp"
             ,0xe0,800);
  FMemScope::~FMemScope(&local_250);
  FLLMScope::~FLLMScope(local_res18);
  if ((local_238.Object == (SMenuEntryBlock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar9 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar2)();
    return pTVar9;
  }
  SWidget::SWidgetConstruct((SWidget *)&(local_238.Object)->_padding_,pFVar7);
  SMenuEntryBlock::Construct(local_238.Object,(FArguments *)pFVar7);
  if ((local_238.Object == (SMenuEntryBlock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar9 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar2)();
    return pTVar9;
  }
  if (((local_238.Object)->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)((local_238.Object)->_padding_ + 0x228))(&(local_238.Object)->_padding_);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_1427f2eb4;
  }
  bVar6 = 0x20;
LAB_1427f2eb4:
  *(byte *)&(local_238.Object)->_padding_ = (byte)(local_238.Object)->_padding_ & 0xdf;
  *(byte *)&(local_238.Object)->_padding_ = (byte)(local_238.Object)->_padding_ | bVar6;
  if ((local_238.Object == (SMenuEntryBlock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar9 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar2)();
    return pTVar9;
  }
  pbVar1 = (byte *)((longlong)&(local_238.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_238.Object == (SMenuEntryBlock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar9 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar2)();
    return pTVar9;
  }
  FVar3.ReferenceController = local_260.ReferenceController;
  local_260.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((local_238.Object == (SMenuEntryBlock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar9 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar2)();
    return pTVar9;
  }
  __return_storage_ptr__->Object = (IMultiBlockBaseWidget *)local_238.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar3.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar3.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar3.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_228);
  return __return_storage_ptr__;
}

// CreateMenuEntry @ 1427fda80

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FMenuEntryBlock::CreateMenuEntry(FMenuEntryBlock *this,FMenuBuilder *param_1)

{
  FText *pFVar1;
  undefined1 local_res8 [16];
  FName local_res18;
  FName local_res20;
  FDestructionSentinel local_c8;
  undefined1 local_b0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  ForAnyElementType FStack_a0;
  ulonglong local_98;
  undefined1 local_90 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  ForAnyElementType FStack_70;
  ulonglong local_68;
  undefined1 local_60 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType FStack_40;
  ulonglong local_38;
  
  local_b0[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_b0[1] = false;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_98 = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_a0.Data = (FScriptContainerElement *)0x0;
  pFVar1 = TAttribute<FText>::Get(&this->ToolTipOverride);
  local_60._0_8_ = (pFVar1->TextData).Reference;
  if ((ITextData *)local_60._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_60._0_8_ + 8))(local_60._0_8_,local_res8);
  }
  local_60._8_4_ = pFVar1->Flags;
  local_60[0x10] = true;
  local_38 = 0;
  local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  pFVar1 = TAttribute<FText>::Get(&this->LabelOverride);
  local_90._0_8_ = (pFVar1->TextData).Reference;
  if ((ITextData *)local_90._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_90._0_8_ + 8))(local_90._0_8_,local_res8);
  }
  local_90._8_4_ = pFVar1->Flags;
  local_90[0x10] = true;
  local_68 = 0;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_70.Data = (FScriptContainerElement *)0x0;
  FMenuBuilder::AddSubMenu
            (param_1,(TAttribute<FText> *)local_90,(TAttribute<FText> *)local_60,&this->EntryBuilder
             ,false,&this->IconOverride,true,local_res20,local_res18,
             (TAttribute<EVisibility> *)local_b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_c8);
  if (((int)local_68 != 0) && (FStack_70.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_70,0,0,0x10);
    local_68 = local_68 & 0xffffffff00000000;
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  if (FStack_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  if ((ITextData *)local_90._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_90._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_c8);
  if (((int)local_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
    local_38 = local_38 & 0xffffffff00000000;
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  if (FStack_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  if ((ITextData *)local_60._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_60._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_c8);
  if (((int)local_98 != 0) && (FStack_a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a0,0,0,0x10);
    local_98 = local_98 & 0xffffffff00000000;
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  if (FStack_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  return;
}

// HasIcon @ 142818620

bool __thiscall FMenuEntryBlock::HasIcon(FMenuEntryBlock *this)

{
  TReferenceControllerBase<1> *pTVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FSlateIcon *pFVar6;
  FSlateBrush *pFVar7;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  uint uStackX_c;
  FSlateIcon local_68;
  FSlateIcon local_48;
  FSlateIcon local_28;
  
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  bVar4 = false;
  lVar8 = this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar8 == 0) {
    pFVar6 = FSlateIcon::FSlateIcon(&local_28);
    pTVar9 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar9 = (TReferenceControllerBase<1> *)this->_padding_;
    lVar8 = this->_padding_;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    pFVar6 = &local_48;
    bVar4 = true;
    local_48.StyleSetName = *(FName *)(lVar8 + 0x40);
    local_48.StyleName = *(FName *)(lVar8 + 0x48);
    local_48.SmallStyleName = *(FName *)(lVar8 + 0x50);
    local_48.StatusOverlayStyleName = *(FName *)(lVar8 + 0x58);
  }
  local_68.StyleSetName = pFVar6->StyleSetName;
  local_68.StyleName = pFVar6->StyleName;
  local_68.SmallStyleName = pFVar6->SmallStyleName;
  local_68.StatusOverlayStyleName = pFVar6->StatusOverlayStyleName;
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar6 = &this->IconOverride;
  if (((pFVar6->StyleSetName == (FName)0x0) || ((this->IconOverride).StyleName == (FName)0x0)) &&
     ((pFVar6 = &local_68, local_68.StyleSetName == (FName)0x0 || (local_68.StyleName == (FName)0x0)
      ))) {
    return false;
  }
  pFVar7 = FSlateIcon::GetIcon(pFVar6);
  bVar4 = false;
  if (pFVar7->ResourceName == (FName)0x0) {
    pUVar2 = (pFVar7->ResourceObject).field0_0x0.DebugPtr;
    lVar8 = 0;
    if (pUVar2 != (UObject *)0x0) {
      lVar8 = *(longlong *)&pUVar2->field_0x18;
    }
    bVar4 = lVar8 == 0;
  }
  return !bVar4;
}

// SetCheckBoxStyle @ 142834dd0

void __thiscall FMenuEntryBlock::SetCheckBoxStyle(FMenuEntryBlock *this,FName param_1)

{
  this->CheckBoxStyle = param_1;
  return;
}

