// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 8

// ~SListGalleryWidget @ 142f3fa60

void __thiscall SStarshipGallery::SListGalleryWidget::~SListGalleryWidget(SListGalleryWidget *this)

{
  SListView<TSharedPtr<int,1>_> *this_00;
  TSharedPtr<SListView<TSharedPtr<int,1>_>,1> *pTVar1;
  STileView<TSharedPtr<int,1>_> *this_01;
  TSharedPtr<STileView<TSharedPtr<int,1>_>,1> *pTVar2;
  STreeView<TSharedPtr<int,1>_> *this_02;
  TSharedPtr<STreeView<TSharedPtr<int,1>_>,1> *pTVar3;
  TSharedPtr<SListView<TSharedPtr<int,1>_>,1> local_40;
  TSharedPtr<STileView<TSharedPtr<int,1>_>,1> local_30;
  TSharedPtr<STreeView<TSharedPtr<int,1>_>,1> local_20 [2];
  
  this->_padding_ = (longlong)&___7SListGalleryWidget_SStarshipGallery__6B_;
  if ((this->ListView_List).Object != (SListView<TSharedPtr<int,1>_> *)0x0) {
    this_00 = TSharedPtr<SListView<TSharedPtr<int,1>_>,1>::operator->(&this->ListView_List);
    SListView<TSharedPtr<int,1>_>::ClearItemsSource(this_00);
    pTVar1 = TSharedPtr<SListView<TSharedPtr<int,1>_>,1>::
             TSharedPtr<SListView<TSharedPtr<int,1>_>,1>(&local_40,(FNullTag *)0x0);
    TSharedPtr<SListView<TSharedPtr<int,1>_>,1>::operator=(&this->ListView_List,pTVar1);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_40.SharedReferenceCount);
  }
  if ((this->ListView_Tile).Object != (STileView<TSharedPtr<int,1>_> *)0x0) {
    this_01 = TSharedPtr<STileView<TSharedPtr<int,1>_>,1>::operator->(&this->ListView_Tile);
    SListView<TSharedPtr<int,1>_>::ClearItemsSource((SListView<TSharedPtr<int,1>_> *)this_01);
    pTVar2 = TSharedPtr<STileView<TSharedPtr<int,1>_>,1>::
             TSharedPtr<STileView<TSharedPtr<int,1>_>,1>(&local_30,(FNullTag *)0x0);
    TSharedPtr<STileView<TSharedPtr<int,1>_>,1>::operator=(&this->ListView_Tile,pTVar2);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_30.SharedReferenceCount);
  }
  if ((this->ListView_Tree).Object != (STreeView<TSharedPtr<int,1>_> *)0x0) {
    this_02 = TSharedPtr<STreeView<TSharedPtr<int,1>_>,1>::operator->(&this->ListView_Tree);
    STreeView<TSharedPtr<int,1>_>::ClearRootItemsSource(this_02);
    pTVar3 = TSharedPtr<STreeView<TSharedPtr<int,1>_>,1>::
             TSharedPtr<STreeView<TSharedPtr<int,1>_>,1>(local_20,(FNullTag *)0x0);
    TSharedPtr<STreeView<TSharedPtr<int,1>_>,1>::operator=(&this->ListView_Tree,pTVar3);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_20[0].SharedReferenceCount);
  }
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&SNullWidget::NullWidget);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->ListView_Tree).SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->ListView_Tile).SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->ListView_List).SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->SharedListViewItemsInObservableArray).SharedReferenceCount);
  UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>::~TObservableArray<TSharedPtr<int,1>_>
            (&this->ListViewItemsInObservableArray);
  TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>(&this->ListViewItemsInArray);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// operator() @ 142f44b30

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_1>::operator()
          (void *this,FReply *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType *pFVar5;
  TSharedRef<int,1> *pTVar6;
  FReply *pFVar7;
  TObservableArray<TSharedPtr<int,1>_> *this_00;
  int local_118;
  int local_114;
  int local_110 [2];
  TSharedPtr<int,1> *local_108;
  int local_100;
  TSharedPtr<int,1> *local_f8;
  TSharedPtr<int,1> *local_f0;
  TSharedPtr<int,1> *local_e8;
  FScriptContainerElement *local_e0;
  FScriptContainerElement *local_d8;
  FScriptContainerElement *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  FScriptContainerElement *local_c0;
  FScriptContainerElement *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_90;
  FScriptContainerElement *local_88;
  TSharedPtr<int,1> *local_80;
  TObservableArray<TSharedPtr<int,1>_> *local_78;
  TObservableArray<TSharedPtr<int,1>_> *local_70;
  TSharedPtr<int,1> local_68;
  TSharedPtr<int,1> local_58;
  TSharedPtr<int,1> local_48;
  TSharedRef<int,1> local_38;
  TSharedRef<int,1> local_28;
  TSharedRef<int,1> local_18;
  
  lVar1 = *(longlong *)this;
  pFVar5 = (ForAnyElementType *)(lVar1 + 0x2a8);
  local_118 = *(int *)(*(longlong *)this + 0x2b0);
  pTVar6 = MakeShared<int,1,int>(&local_38,&local_118);
  TSharedPtr<int,1>::TSharedPtr<int,1><int>(&local_68,pTVar6);
  local_108 = &local_68;
  local_f8 = (TSharedPtr<int,1> *)pFVar5->Data;
  local_f0 = local_f8;
  local_e8 = local_f8;
  if ((local_f8 <= local_108) &&
     (local_e0 = pFVar5->Data, local_d8 = local_e0, local_d0 = local_e0,
     local_108 < (TSharedPtr<int,1> *)(local_e0 + (longlong)*(int *)(lVar1 + 0x2b4) * 0x10))) {
    local_c8 = 0;
    local_c4 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_a8 = (longlong)*(int *)(lVar1 + 0x2b0);
    local_a0 = (longlong)*(int *)(lVar1 + 0x2b4);
    local_c0 = pFVar5->Data;
    local_b8 = local_c0;
    local_b0 = local_c0;
    local_98 = local_c0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FReply *)(*pcVar2)();
      return pFVar7;
    }
  }
  if (*(int *)(lVar1 + 0x2b0) == *(int *)(lVar1 + 0x2b4)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar5,(int *)(lVar1 + 0x2b4));
    *(int *)(lVar1 + 0x2b0) = iVar4;
  }
  iVar4 = *(int *)(lVar1 + 0x2b0);
  *(int *)(lVar1 + 0x2b0) = *(int *)(lVar1 + 0x2b0) + 1;
  local_90 = pFVar5->Data;
  local_88 = local_90 + (longlong)iVar4 * 0x10;
  local_80 = ::operator_new(0x10,local_88);
  TSharedPtr<int,1>::TSharedPtr<int,1>(local_80,&local_68);
  local_100 = iVar4;
  TSharedPtr<int,1>::~TSharedPtr<int,1>(&local_68);
  TSharedRef<int,1>::~TSharedRef<int,1>(&local_38);
  local_78 = (TObservableArray<TSharedPtr<int,1>_> *)(*(longlong *)this + 0x2b8);
  local_114 = UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>::Num
                        ((TObservableArray<TSharedPtr<int,1>_> *)(*(longlong *)this + 0x2b8));
  pTVar6 = MakeShared<int,1,int>(&local_28,&local_114);
  TSharedPtr<int,1>::TSharedPtr<int,1><int>(&local_58,pTVar6);
  UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>::Add(local_78,&local_58);
  TSharedPtr<int,1>::~TSharedPtr<int,1>(&local_58);
  TSharedRef<int,1>::~TSharedRef<int,1>(&local_28);
  local_70 = TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::operator->
                       ((TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *
                        )(*(longlong *)this + 0x2e8));
  this_00 = TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::operator->
                      ((TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *)
                       (*(longlong *)this + 0x2e8));
  local_110[0] = UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>::Num(this_00);
  pTVar6 = MakeShared<int,1,int>(&local_18,local_110);
  TSharedPtr<int,1>::TSharedPtr<int,1><int>(&local_48,pTVar6);
  UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>::Add(local_70,&local_48);
  TSharedPtr<int,1>::~TSharedPtr<int,1>(&local_48);
  TSharedRef<int,1>::~TSharedRef<int,1>(&local_18);
  FReply::Handled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// operator() @ 142f48ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FReply * __thiscall
`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_2>::operator()
          (void *this,FReply *__return_storage_ptr__)

{
  int iVar1;
  TObservableArray<TSharedPtr<int,1>_> *this_00;
  float fVar2;
  int local_68;
  int local_64;
  
  iVar1 = *(int *)(*(longlong *)this + 0x2b0);
  if (iVar1 < 1) {
    local_64 = 0;
  }
  else {
    fVar2 = FGenericPlatformMath::FRand();
    local_68 = iVar1 + -1;
    if ((int)(fVar2 * (float)iVar1) < local_68) {
      local_68 = (int)(fVar2 * (float)iVar1);
    }
    local_64 = local_68;
  }
  TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *)(*(longlong *)this + 0x2a8),
             local_64,Default);
  UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>::RemoveAt
            ((TObservableArray<TSharedPtr<int,1>_> *)(*(longlong *)this + 0x2b8),local_64,Default);
  this_00 = TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::operator->
                      ((TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *)
                       (*(longlong *)this + 0x2e8));
  UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>::RemoveAt(this_00,local_64,Default);
  FReply::Handled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// operator() @ 142f4aae0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedRef<STableRow<TSharedPtr<int,1>_>,1> * __thiscall
`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_3>::operator()
          (void *this,TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *__return_storage_ptr__,
          TSharedPtr<int,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> TVar1;
  TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *this_00;
  STableRow<TSharedPtr<int,1>_> *pSVar2;
  FText *pFVar3;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<STextBlock,1> *pTVar4;
  T0RequiredArgs local_968 [8];
  longlong *local_960;
  FArguments *local_958;
  int *local_950;
  TAttribute<FText> *local_948;
  TAttribute<FText> *local_940;
  FArguments *local_938;
  FArguments *local_930;
  TSharedRef<SWidget,1> *local_928;
  TSharedRef<SWidget,1> *local_920;
  code *local_918;
  TSharedPtr<FCulture,1> local_910;
  TSharedRef<STableViewBase,1> local_900;
  TSharedRef<STextBlock,1> local_8f0;
  FText local_8e0;
  TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_8d0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8b8;
  TSharedRef<SWidget,1> local_8a0;
  TAttribute<FText> local_890;
  FArguments local_860;
  FArguments local_568;
  
  local_958 = STableRow<TSharedPtr<int,1>_>::FArguments::FArguments(&local_860);
  TVar1 = RequiredArgs::MakeRequiredArgs<TSharedRef<STableViewBase,1>_const_&>(&local_900);
  this_00 = MakeTDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                      (&local_8d0,"RowType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x627,(T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *)TVar1.Arg0);
  local_900.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)
       TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       ::operator<<=(this_00,__return_storage_ptr__,local_958);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_8d0._Widget.SharedReferenceCount);
  STableRow<TSharedPtr<int,1>_>::FArguments::~FArguments(&local_860);
  pSVar2 = TSharedRef<STableRow<TSharedPtr<int,1>_>,1>::operator->(__return_storage_ptr__);
  local_960 = &pSVar2->_padding_;
  local_918 = *(code **)(*local_960 + 0x248);
  local_928 = &local_8a0;
  local_938 = STextBlock::FArguments::FArguments(&local_568);
  local_948 = &local_890;
  TSharedPtr<FCulture,1>::TSharedPtr<FCulture,1>(&local_910,(FNullTag *)0x0);
  local_950 = param_1->Object;
  pFVar3 = FText::AsNumber(&local_8e0,*local_950,(FNumberFormattingOptions *)0x0,&local_910);
  local_940 = TAttribute<FText>::TAttribute<FText>(local_948,pFVar3);
  local_930 = STextBlock::FArguments::Text(local_938,local_940);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_968);
  this_01 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_8b8,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x628,local_968);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_8f0,local_930);
  local_920 = TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(local_928,pTVar4);
  (*local_918)(local_960,local_920);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_8f0);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_8b8);
  FText::~FText(&local_8e0);
  TSharedPtr<FCulture,1>::~TSharedPtr<FCulture,1>(&local_910);
  STextBlock::FArguments::~FArguments(&local_568);
  TSharedPtr<int,1>::~TSharedPtr<int,1>(param_1);
  return __return_storage_ptr__;
}

// operator() @ 142f4aea0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedRef<STableRow<TSharedPtr<int,1>_>,1> * __thiscall
`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_4>::operator()
          (void *this,TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *__return_storage_ptr__,
          TSharedPtr<int,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> TVar1;
  TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *this_00;
  STableRow<TSharedPtr<int,1>_> *pSVar2;
  FText *pFVar3;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<STextBlock,1> *pTVar4;
  T0RequiredArgs local_968 [8];
  longlong *local_960;
  FArguments *local_958;
  int *local_950;
  TAttribute<FText> *local_948;
  TAttribute<FText> *local_940;
  FArguments *local_938;
  FArguments *local_930;
  TSharedRef<SWidget,1> *local_928;
  TSharedRef<SWidget,1> *local_920;
  code *local_918;
  TSharedPtr<FCulture,1> local_910;
  TSharedRef<STableViewBase,1> local_900;
  TSharedRef<STextBlock,1> local_8f0;
  FText local_8e0;
  TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_8d0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8b8;
  TSharedRef<SWidget,1> local_8a0;
  TAttribute<FText> local_890;
  FArguments local_860;
  FArguments local_568;
  
  local_958 = STableRow<TSharedPtr<int,1>_>::FArguments::FArguments(&local_860);
  TVar1 = RequiredArgs::MakeRequiredArgs<TSharedRef<STableViewBase,1>_const_&>(&local_900);
  this_00 = MakeTDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                      (&local_8d0,"RowType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x637,(T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *)TVar1.Arg0);
  local_900.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)
       TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       ::operator<<=(this_00,__return_storage_ptr__,local_958);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_8d0._Widget.SharedReferenceCount);
  STableRow<TSharedPtr<int,1>_>::FArguments::~FArguments(&local_860);
  pSVar2 = TSharedRef<STableRow<TSharedPtr<int,1>_>,1>::operator->(__return_storage_ptr__);
  local_960 = &pSVar2->_padding_;
  local_918 = *(code **)(*local_960 + 0x248);
  local_928 = &local_8a0;
  local_938 = STextBlock::FArguments::FArguments(&local_568);
  local_948 = &local_890;
  TSharedPtr<FCulture,1>::TSharedPtr<FCulture,1>(&local_910,(FNullTag *)0x0);
  local_950 = param_1->Object;
  pFVar3 = FText::AsNumber(&local_8e0,*local_950,(FNumberFormattingOptions *)0x0,&local_910);
  local_940 = TAttribute<FText>::TAttribute<FText>(local_948,pFVar3);
  local_930 = STextBlock::FArguments::Text(local_938,local_940);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_968);
  this_01 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_8b8,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x638,local_968);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_8f0,local_930);
  local_920 = TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(local_928,pTVar4);
  (*local_918)(local_960,local_920);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_8f0);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_8b8);
  FText::~FText(&local_8e0);
  TSharedPtr<FCulture,1>::~TSharedPtr<FCulture,1>(&local_910);
  STextBlock::FArguments::~FArguments(&local_568);
  TSharedPtr<int,1>::~TSharedPtr<int,1>(param_1);
  return __return_storage_ptr__;
}

// operator() @ 142f4b480

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedRef<STableRow<TSharedPtr<int,1>_>,1> * __thiscall
`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_5>::operator()
          (void *this,TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *__return_storage_ptr__,
          TSharedPtr<int,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> TVar1;
  TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *this_00;
  STableRow<TSharedPtr<int,1>_> *pSVar2;
  FText *pFVar3;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<STextBlock,1> *pTVar4;
  T0RequiredArgs local_968 [8];
  longlong *local_960;
  FArguments *local_958;
  int *local_950;
  TAttribute<FText> *local_948;
  TAttribute<FText> *local_940;
  FArguments *local_938;
  FArguments *local_930;
  TSharedRef<SWidget,1> *local_928;
  TSharedRef<SWidget,1> *local_920;
  code *local_918;
  TSharedPtr<FCulture,1> local_910;
  TSharedRef<STableViewBase,1> local_900;
  TSharedRef<STextBlock,1> local_8f0;
  FText local_8e0;
  TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_8d0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8b8;
  TSharedRef<SWidget,1> local_8a0;
  TAttribute<FText> local_890;
  FArguments local_860;
  FArguments local_568;
  
  local_958 = STableRow<TSharedPtr<int,1>_>::FArguments::FArguments(&local_860);
  TVar1 = RequiredArgs::MakeRequiredArgs<TSharedRef<STableViewBase,1>_const_&>(&local_900);
  this_00 = MakeTDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                      (&local_8d0,"RowType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x647,(T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *)TVar1.Arg0);
  local_900.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)
       TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       ::operator<<=(this_00,__return_storage_ptr__,local_958);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_8d0._Widget.SharedReferenceCount);
  STableRow<TSharedPtr<int,1>_>::FArguments::~FArguments(&local_860);
  pSVar2 = TSharedRef<STableRow<TSharedPtr<int,1>_>,1>::operator->(__return_storage_ptr__);
  local_960 = &pSVar2->_padding_;
  local_918 = *(code **)(*local_960 + 0x248);
  local_928 = &local_8a0;
  local_938 = STextBlock::FArguments::FArguments(&local_568);
  local_948 = &local_890;
  TSharedPtr<FCulture,1>::TSharedPtr<FCulture,1>(&local_910,(FNullTag *)0x0);
  local_950 = param_1->Object;
  pFVar3 = FText::AsNumber(&local_8e0,*local_950,(FNumberFormattingOptions *)0x0,&local_910);
  local_940 = TAttribute<FText>::TAttribute<FText>(local_948,pFVar3);
  local_930 = STextBlock::FArguments::Text(local_938,local_940);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_968);
  this_01 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_8b8,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x648,local_968);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_8f0,local_930);
  local_920 = TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(local_928,pTVar4);
  (*local_918)(local_960,local_920);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_8f0);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_8b8);
  FText::~FText(&local_8e0);
  TSharedPtr<FCulture,1>::~TSharedPtr<FCulture,1>(&local_910);
  STextBlock::FArguments::~FArguments(&local_568);
  TSharedPtr<int,1>::~TSharedPtr<int,1>(param_1);
  return __return_storage_ptr__;
}

// operator() @ 142f4ba90

void __thiscall
`SStarshipGallery::SListGalleryWidget::Construct'::__l2::<lambda_6>::operator()
          (void *this,TSharedPtr<int,1> *param_1,
          TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSharedRef<int,1> *pTVar4;
  int local_c4;
  TSharedPtr<int,1> *local_c0;
  int local_b8;
  TSharedPtr<int,1> *local_b0;
  TSharedPtr<int,1> *local_a8;
  TSharedPtr<int,1> *local_a0;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_90;
  FScriptContainerElement *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  FScriptContainerElement *local_78;
  FScriptContainerElement *local_70;
  FScriptContainerElement *local_68;
  longlong local_60;
  longlong local_58;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48;
  FScriptContainerElement *local_40;
  TSharedPtr<int,1> *local_38;
  TSharedPtr<int,1> local_30;
  TSharedRef<int,1> local_20 [2];
  
  local_c4 = 99;
  pTVar4 = MakeShared<int,1,int>(local_20,&local_c4);
  TSharedPtr<int,1>::TSharedPtr<int,1><int>(&local_30,pTVar4);
  local_c0 = &local_30;
  local_b0 = (TSharedPtr<int,1> *)(param_2->AllocatorInstance).Data;
  local_a8 = local_b0;
  local_a0 = local_b0;
  if ((local_b0 <= local_c0) &&
     (local_98 = (param_2->AllocatorInstance).Data, local_90 = local_98, local_88 = local_98,
     local_c0 < (TSharedPtr<int,1> *)(local_98 + (longlong)param_2->ArrayMax * 0x10))) {
    local_80 = 0;
    local_7c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_60 = (longlong)param_2->ArrayNum;
    local_58 = (longlong)param_2->ArrayMax;
    local_78 = (param_2->AllocatorInstance).Data;
    local_70 = local_78;
    local_68 = local_78;
    local_50 = local_78;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2->ArrayNum == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    param_2->ArrayNum = iVar3;
  }
  iVar3 = param_2->ArrayNum;
  param_2->ArrayNum = param_2->ArrayNum + 1;
  local_48 = (param_2->AllocatorInstance).Data;
  local_40 = local_48 + (longlong)iVar3 * 0x10;
  local_38 = ::operator_new(0x10,local_40);
  TSharedPtr<int,1>::TSharedPtr<int,1>(local_38,&local_30);
  local_b8 = iVar3;
  TSharedPtr<int,1>::~TSharedPtr<int,1>(&local_30);
  TSharedRef<int,1>::~TSharedRef<int,1>(local_20);
  TSharedPtr<int,1>::~TSharedPtr<int,1>(param_1);
  return;
}

// Construct @ 142f737d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
SStarshipGallery::SListGalleryWidget::Construct(SListGalleryWidget *this,FArguments *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *pTVar4;
  TSharedRef<int,1> *pTVar5;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *pFVar6;
  FText *pFVar7;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar8;
  TSharedRef<STextBlock,1> *pTVar9;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar10;
  TSharedRef<SButton,1> *pTVar11;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *pTVar12;
  TSharedRef<SVerticalBox,1> *pTVar13;
  TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SListView<TSharedPtr<int,1>_>,1> *pTVar14;
  TSlateDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<STileView<TSharedPtr<int,1>_>,1> *pTVar15;
  TSlateDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<STreeView<TSharedPtr<int,1>_>,1> *pTVar16;
  T0RequiredArgs local_3688;
  T0RequiredArgs local_3687;
  T0RequiredArgs local_3686;
  T0RequiredArgs local_3685;
  T0RequiredArgs local_3684;
  T0RequiredArgs local_3683;
  T0RequiredArgs local_3682;
  T0RequiredArgs local_3681;
  T0RequiredArgs local_3680;
  T0RequiredArgs local_367f [7];
  TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *local_3678;
  int local_3670;
  <lambda_3> local_366c;
  <lambda_4> local_366b;
  <lambda_5> local_366a;
  <lambda_6> local_3669;
  int local_3668;
  TSharedPtr<int,1> *local_3660;
  TSharedRef<SHorizontalBox,1> local_3658;
  FArguments *local_3648;
  TSharedPtr<int,1> *local_3640;
  TSharedPtr<int,1> *local_3638;
  TSharedPtr<int,1> *local_3630;
  FScriptContainerElement *local_3628;
  FScriptContainerElement *local_3620;
  FScriptContainerElement *local_3618;
  undefined4 local_3610;
  undefined4 local_360c;
  FScriptContainerElement *local_3608;
  FScriptContainerElement *local_3600;
  FScriptContainerElement *local_35f8;
  longlong local_35f0;
  longlong local_35e8;
  FScriptContainerElement *local_35e0;
  FScriptContainerElement *local_35d8;
  FScriptContainerElement *local_35d0;
  TSharedPtr<int,1> *local_35c8;
  TObservableArray<TSharedPtr<int,1>_> *local_35c0;
  TObservableArray<TSharedPtr<int,1>_> *local_35b8;
  SHorizontalBox *local_35b0;
  <lambda_1> local_35a8;
  <lambda_1> *local_35a0;
  <lambda_1> *local_3598;
  FArguments *local_3590;
  FArguments *local_3588;
  TAttribute<FText> *local_3580;
  TAttribute<FText> *local_3578;
  FArguments *local_3570;
  FArguments *local_3568;
  NamedSlotProperty<SButton::FArguments> *local_3560;
  FArguments *local_3558;
  FSlotArguments *local_3550;
  FSlotArguments *local_3548;
  FArguments *local_3540;
  <lambda_2> local_3538;
  <lambda_2> *local_3530;
  <lambda_2> *local_3528;
  FArguments *local_3520;
  FArguments *local_3518;
  TAttribute<FText> *local_3510;
  TAttribute<FText> *local_3508;
  FArguments *local_3500;
  FArguments *local_34f8;
  NamedSlotProperty<SButton::FArguments> *local_34f0;
  FArguments *local_34e8;
  FSlotArguments *local_34e0;
  FSlotArguments *local_34d8;
  FArguments *local_34d0;
  FArguments *local_34c8;
  FSlotArguments *local_34c0;
  SHorizontalBox *local_34b8;
  FArguments *local_34b0;
  FArguments *local_34a8;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *local_34a0;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *local_3498;
  FArguments *local_3490;
  FArguments *local_3488;
  TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *local_3480;
  FArguments *local_3478;
  FSlotArguments *local_3470;
  FSlotArguments *local_3468;
  FArguments *local_3460;
  FArguments *local_3458;
  FArguments *local_3450;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *local_3448;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *local_3440;
  FArguments *local_3438;
  FArguments *local_3430;
  TSlateDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *local_3428;
  FArguments *local_3420;
  FSlotArguments *local_3418;
  FSlotArguments *local_3410;
  FArguments *local_3408;
  FArguments *local_3400;
  FArguments *local_33f8;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *local_33f0;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *local_33e8;
  FArguments *local_33e0;
  FArguments *local_33d8;
  FArguments *local_33d0;
  TSlateDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> *local_33c8;
  FArguments *local_33c0;
  FSlotArguments *local_33b8;
  FSlotArguments *local_33b0;
  FArguments *local_33a8;
  FArguments *local_33a0;
  FSlotArguments *local_3398;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_3390;
  int local_3388;
  TSharedPtr<int,1> local_3380;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> local_3370;
  TSharedPtr<int,1> local_3360;
  TSharedPtr<int,1> local_3350;
  TSharedRef<SWidget,1> local_3340;
  TSharedRef<SWidget,1> local_3330;
  TSharedRef<SWidget,1> local_3320;
  TSharedRef<SWidget,1> local_3310;
  TSharedRef<SWidget,1> local_3300;
  TSharedRef<SWidget,1> local_32f0;
  TSharedRef<SWidget,1> local_32e0;
  TSharedRef<SWidget,1> local_32d0;
  TSharedRef<SWidget,1> local_32c0;
  TSharedRef<SWidget,1> local_32b0;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> local_32a0;
  TSharedRef<int,1> local_3290;
  TSharedRef<int,1> local_3280;
  TSharedRef<int,1> local_3270;
  TSharedRef<SVerticalBox,1> local_3260;
  TSharedRef<SButton,1> local_3250;
  TSharedRef<STextBlock,1> local_3240;
  FText local_3230;
  TSharedRef<SButton,1> local_3220;
  TSharedRef<STextBlock,1> local_3210;
  FText local_3200;
  TSharedRef<SVerticalBox,1> local_31f0;
  TSharedRef<STreeView<TSharedPtr<int,1>_>,1> local_31e0;
  TSharedRef<STileView<TSharedPtr<int,1>_>,1> local_31d0;
  TSharedRef<SListView<TSharedPtr<int,1>_>,1> local_31c0;
  TSlateDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> local_31b0;
  TSlateDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> local_3198;
  TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> local_3180;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3168;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3150;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3138;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3120;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3108;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_30f0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_30d8;
  NamedSlotProperty<SButton::FArguments> local_30c0;
  NamedSlotProperty<SButton::FArguments> local_30b0;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> local_30a0;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> local_3090;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> local_3080;
  TAttribute<FText> local_3070;
  TAttribute<FText> local_3040;
  FSlotArguments local_3010;
  FSlotArguments local_2f28;
  FSlotArguments local_2e40;
  FSlotArguments local_2d58;
  FSlotArguments local_2c70;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_2b88;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_2a88;
  FArguments local_2988;
  FArguments local_2780;
  FArguments local_2578;
  FArguments local_2370;
  FArguments local_1ef0;
  FArguments local_1a18;
  FArguments local_1538;
  FArguments local_ff8;
  FArguments local_ab8;
  FArguments local_560;
  undefined8 uStack_8;
  
  uStack_8 = 0x142f737e4;
  local_3648 = SHorizontalBox::FArguments::FArguments(&local_2988);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3688);
  this_00 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_3150,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x5ea,&local_3688);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
            (this_00,&local_3658,local_3648);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_3150);
  SHorizontalBox::FArguments::~FArguments(&local_2988);
  pTVar4 = MakeShared<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>(&local_32a0);
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1><UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>_>
            (&local_3370,pTVar4);
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::operator=
            (&this->SharedListViewItemsInObservableArray,&local_3370);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3370.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_32a0.SharedReferenceCount);
  local_3670 = 0;
  do {
    if (0xe < local_3670) {
      local_35b0 = TSharedRef<SHorizontalBox,1>::operator->(&local_3658);
      pFVar6 = SHorizontalBox::AddSlot(local_35b0,&local_2b88);
      local_34c0 = (FSlotArguments *)&pFVar6->_padding_;
      local_3540 = SVerticalBox::FArguments::FArguments(&local_2780);
      local_3550 = SVerticalBox::Slot(&local_2f28);
      local_3590 = SButton::FArguments::FArguments(&local_ff8);
      local_35a0 = &local_35a8;
      local_35a8.__this = this;
      local_3598 = local_35a0;
      local_3588 = SButton::FArguments::
                   OnClicked_Lambda<_SStarshipGallery::SListGalleryWidget::Construct_::__l2::<lambda_1>_>
                             (local_3590,local_35a0);
      local_3560 = SButton::FArguments::Content(local_3588,&local_30c0);
      local_3570 = STextBlock::FArguments::FArguments(&local_560);
      local_3580 = &local_3070;
      pFVar7 = FText::AsLocalizable_Advanced_LocText(&local_3200,L"StarshipGallery",L"Add",L"Add");
      local_3578 = TAttribute<FText>::TAttribute<FText>(local_3580,pFVar7);
      local_3568 = STextBlock::FArguments::Text(local_3570,local_3578);
      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3687);
      pTVar8 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                         (&local_3168,"STextBlock",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                          ,0x603,&local_3687);
      pTVar9 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                         (pTVar8,&local_3210,local_3568);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_3300,pTVar9);
      local_3558 = NamedSlotProperty<SButton::FArguments>::operator[](local_3560,&local_3300);
      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3686);
      pTVar10 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                          (&local_30f0,"SButton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                           ,0x5f9,&local_3686);
      pTVar11 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar10,&local_3220,local_3558);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_3310,pTVar11);
      local_3548 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                             ((FSlotArguments *)local_3550,&local_3310);
      local_34d0 = SVerticalBox::FArguments::operator+(local_3540,local_3548);
      local_34e0 = SVerticalBox::Slot(&local_3010);
      local_3520 = SButton::FArguments::FArguments(&local_1538);
      local_3530 = &local_3538;
      local_3538.__this = this;
      local_3528 = local_3530;
      local_3518 = SButton::FArguments::
                   OnClicked_Lambda<_SStarshipGallery::SListGalleryWidget::Construct_::__l2::<lambda_2>_>
                             (local_3520,local_3530);
      local_34f0 = SButton::FArguments::Content(local_3518,&local_30b0);
      local_3500 = STextBlock::FArguments::FArguments(&local_ab8);
      local_3510 = &local_3040;
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_3230,L"StarshipGallery",L"Remove",L"Remove");
      local_3508 = TAttribute<FText>::TAttribute<FText>(local_3510,pFVar7);
      local_34f8 = STextBlock::FArguments::Text(local_3500,local_3508);
      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3685);
      pTVar8 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                         (&local_3108,"STextBlock",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                          ,0x614,&local_3685);
      pTVar9 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                         (pTVar8,&local_3240,local_34f8);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_3320,pTVar9);
      local_34e8 = NamedSlotProperty<SButton::FArguments>::operator[](local_34f0,&local_3320);
      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3684);
      pTVar10 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                          (&local_3120,"SButton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                           ,0x609,&local_3684);
      pTVar11 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar10,&local_3250,local_34e8);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_3330,pTVar11);
      local_34d8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                             ((FSlotArguments *)local_34e0,&local_3330);
      local_34c8 = SVerticalBox::FArguments::operator+(local_34d0,local_34d8);
      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3683);
      pTVar12 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                          (&local_3138,"SVerticalBox",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                           ,0x5f6,&local_3683);
      pTVar13 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar12,&local_3260,local_34c8);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_3340,pTVar13);
      TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[](local_34c0,&local_3340);
      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3340);
      TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_3260);
      TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
      ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_3138);
      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3330);
      TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_3250);
      TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
      ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_3120);
      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3320);
      TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_3240);
      TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
      ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_3108);
      FText::~FText(&local_3230);
      STextBlock::FArguments::~FArguments(&local_ab8);
      SButton::FArguments::~FArguments(&local_1538);
      SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3010);
      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3310);
      TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_3220);
      TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
      ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_30f0);
      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3300);
      TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_3210);
      TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
      ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_3168);
      FText::~FText(&local_3200);
      STextBlock::FArguments::~FArguments(&local_560);
      SButton::FArguments::~FArguments(&local_ff8);
      SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2f28);
      SVerticalBox::FArguments::~FArguments(&local_2780);
      SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_2b88);
      local_34b8 = TSharedRef<SHorizontalBox,1>::operator->(&local_3658);
      pFVar6 = SHorizontalBox::AddSlot(local_34b8,&local_2a88);
      local_3398 = (FSlotArguments *)&pFVar6->_padding_;
      local_3460 = SVerticalBox::FArguments::FArguments(&local_2578);
      local_3470 = SVerticalBox::Slot(&local_2c70);
      local_34b0 = SListView<TSharedPtr<int,1>_>::FArguments::FArguments(&local_1a18);
      local_34a8 = SListView<TSharedPtr<int,1>_>::FArguments::ListItemsSource
                             (local_34b0,&this->ListViewItemsInArray);
      local_3490 = SListView<TSharedPtr<int,1>_>::FArguments::ListItemsSource
                             (local_34a8,&this->ListViewItemsInObservableArray);
      local_34a0 = &local_30a0;
      local_3498 = TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
                   TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>
                             (local_34a0,&this->SharedListViewItemsInObservableArray);
      local_3488 = SListView<TSharedPtr<int,1>_>::FArguments::ListItemsSource(local_3490,local_3498)
      ;
      local_3478 = SListView<TSharedPtr<int,1>_>::FArguments::
                   OnGenerateRow_Lambda<_SStarshipGallery::SListGalleryWidget::Construct_::__l2::<lambda_3>_>
                             (local_3488,&local_366c);
      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3682);
      local_3480 = MakeTDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>
                             (&local_3180,"SListView<TSharedPtr<int32>>",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                              ,0x61f,&local_3682);
      this_01 = TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>::
                Expose<SListView<TSharedPtr<int,1>_>_>(local_3480,&this->ListView_List);
      pTVar14 = TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>::operator<<=
                          (this_01,&local_31c0,local_3478);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SListView<TSharedPtr<int,1>_>_>
                (&local_32c0,pTVar14);
      local_3468 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                             ((FSlotArguments *)local_3470,&local_32c0);
      local_3408 = SVerticalBox::FArguments::operator+(local_3460,local_3468);
      local_3418 = SVerticalBox::Slot(&local_2d58);
      local_3458 = STileView<TSharedPtr<int,1>_>::FArguments::FArguments(&local_2370);
      local_3450 = STileView<TSharedPtr<int,1>_>::FArguments::ListItemsSource
                             (local_3458,&this->ListViewItemsInArray);
      local_3438 = STileView<TSharedPtr<int,1>_>::FArguments::ListItemsSource
                             (local_3450,&this->ListViewItemsInObservableArray);
      local_3448 = &local_3080;
      local_3440 = TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
                   TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>
                             (local_3448,&this->SharedListViewItemsInObservableArray);
      local_3430 = STileView<TSharedPtr<int,1>_>::FArguments::ListItemsSource(local_3438,local_3440)
      ;
      local_3420 = STileView<TSharedPtr<int,1>_>::FArguments::
                   OnGenerateTile_Lambda<_SStarshipGallery::SListGalleryWidget::Construct_::__l2::<lambda_4>_>
                             (local_3430,&local_366b);
      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3681);
      local_3428 = MakeTDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>
                             (&local_3198,"STileView<TSharedPtr<int32>>",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                              ,0x62f,&local_3681);
      this_02 = TSlateDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>::
                Expose<STileView<TSharedPtr<int,1>_>_>(local_3428,&this->ListView_Tile);
      pTVar15 = TSlateDecl<STileView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>::operator<<=
                          (this_02,&local_31d0,local_3420);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STileView<TSharedPtr<int,1>_>_>
                (&local_32d0,pTVar15);
      local_3410 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                             ((FSlotArguments *)local_3418,&local_32d0);
      local_33a8 = SVerticalBox::FArguments::operator+(local_3408,local_3410);
      local_33b8 = SVerticalBox::Slot(&local_2e40);
      local_3400 = STreeView<TSharedPtr<int,1>_>::FArguments::FArguments(&local_1ef0);
      local_33f8 = STreeView<TSharedPtr<int,1>_>::FArguments::TreeItemsSource
                             (local_3400,&this->ListViewItemsInArray);
      local_33e0 = STreeView<TSharedPtr<int,1>_>::FArguments::TreeItemsSource
                             (local_33f8,&this->ListViewItemsInObservableArray);
      local_33f0 = &local_3090;
      local_33e8 = TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
                   TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>
                             (local_33f0,&this->SharedListViewItemsInObservableArray);
      local_33d8 = STreeView<TSharedPtr<int,1>_>::FArguments::TreeItemsSource(local_33e0,local_33e8)
      ;
      local_33d0 = STreeView<TSharedPtr<int,1>_>::FArguments::
                   OnGenerateRow_Lambda<_SStarshipGallery::SListGalleryWidget::Construct_::__l2::<lambda_5>_>
                             (local_33d8,&local_366a);
      local_33c0 = STreeView<TSharedPtr<int,1>_>::FArguments::
                   OnGetChildren_Lambda<_SStarshipGallery::SListGalleryWidget::Construct_::__l2::<lambda_6>_>
                             (local_33d0,&local_3669);
      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3680);
      local_33c8 = MakeTDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>
                             (&local_31b0,"STreeView<TSharedPtr<int32>>",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                              ,0x63f,&local_3680);
      this_03 = TSlateDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>::
                Expose<STreeView<TSharedPtr<int,1>_>_>(local_33c8,&this->ListView_Tree);
      pTVar16 = TSlateDecl<STreeView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>::operator<<=
                          (this_03,&local_31e0,local_33c0);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STreeView<TSharedPtr<int,1>_>_>
                (&local_32e0,pTVar16);
      local_33b0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                             ((FSlotArguments *)local_33b8,&local_32e0);
      local_33a0 = SVerticalBox::FArguments::operator+(local_33a8,local_33b0);
      RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_367f);
      pTVar12 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                          (&local_30d8,"SVerticalBox",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                           ,0x61c,local_367f);
      pTVar13 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar12,&local_31f0,local_33a0);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_32f0,pTVar13);
      TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[](local_3398,&local_32f0);
      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_32f0);
      TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_31f0);
      TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
      ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_30d8);
      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_32e0);
      SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                (&local_31e0.SharedReferenceCount);
      SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                (&local_31b0._Widget.SharedReferenceCount);
      STreeView<TSharedPtr<int,1>_>::FArguments::~FArguments(&local_1ef0);
      SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2e40);
      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_32d0);
      SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                (&local_31d0.SharedReferenceCount);
      SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                (&local_3198._Widget.SharedReferenceCount);
      STileView<TSharedPtr<int,1>_>::FArguments::~FArguments(&local_2370);
      SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2d58);
      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_32c0);
      SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                (&local_31c0.SharedReferenceCount);
      SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                (&local_3180._Widget.SharedReferenceCount);
      SListView<TSharedPtr<int,1>_>::FArguments::~FArguments(&local_1a18);
      SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2c70);
      SVerticalBox::FArguments::~FArguments(&local_2578);
      SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_2a88);
      local_3390 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
                   &this->_padding_;
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_32b0,&local_3658);
      TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
                (local_3390,&local_32b0);
      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_32b0);
      TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_3658);
      return;
    }
    local_3678 = &this->ListViewItemsInArray;
    pTVar5 = MakeShared<int,1,int_&>(&local_3290,&local_3670);
    TSharedPtr<int,1>::TSharedPtr<int,1><int>(&local_3380,pTVar5);
    local_3660 = &local_3380;
    local_3640 = (TSharedPtr<int,1> *)(local_3678->AllocatorInstance).Data;
    local_3638 = local_3640;
    local_3630 = local_3640;
    if ((local_3640 <= local_3660) &&
       (local_3628 = (local_3678->AllocatorInstance).Data, local_3620 = local_3628,
       local_3618 = local_3628,
       local_3660 < (TSharedPtr<int,1> *)(local_3628 + (longlong)local_3678->ArrayMax * 0x10))) {
      local_3610 = 0;
      local_360c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_35f0 = (longlong)local_3678->ArrayNum;
      local_35e8 = (longlong)local_3678->ArrayMax;
      local_3608 = (local_3678->AllocatorInstance).Data;
      local_3600 = local_3608;
      local_35f8 = local_3608;
      local_35e0 = local_3608;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (local_3678->ArrayNum == local_3678->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_3678->AllocatorInstance,&local_3678->ArrayMax);
      local_3678->ArrayNum = iVar3;
    }
    local_3668 = local_3678->ArrayNum;
    local_3678->ArrayNum = local_3678->ArrayNum + 1;
    local_35d8 = (local_3678->AllocatorInstance).Data;
    local_35d0 = local_35d8 + (longlong)local_3668 * 0x10;
    local_35c8 = ::operator_new(0x10,local_35d0);
    TSharedPtr<int,1>::TSharedPtr<int,1>(local_35c8,&local_3380);
    local_3388 = local_3668;
    TSharedPtr<int,1>::~TSharedPtr<int,1>(&local_3380);
    TSharedRef<int,1>::~TSharedRef<int,1>(&local_3290);
    local_35c0 = &this->ListViewItemsInObservableArray;
    pTVar5 = MakeShared<int,1,int_&>(&local_3280,&local_3670);
    TSharedPtr<int,1>::TSharedPtr<int,1><int>(&local_3360,pTVar5);
    UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>::Add(local_35c0,&local_3360);
    TSharedPtr<int,1>::~TSharedPtr<int,1>(&local_3360);
    TSharedRef<int,1>::~TSharedRef<int,1>(&local_3280);
    local_35b8 = TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1>::
                 operator->(&this->SharedListViewItemsInObservableArray);
    pTVar5 = MakeShared<int,1,int_&>(&local_3270,&local_3670);
    TSharedPtr<int,1>::TSharedPtr<int,1><int>(&local_3350,pTVar5);
    UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>::Add(local_35b8,&local_3350);
    TSharedPtr<int,1>::~TSharedPtr<int,1>(&local_3350);
    TSharedRef<int,1>::~TSharedRef<int,1>(&local_3270);
    local_3670 = local_3670 + 1;
  } while( true );
}

