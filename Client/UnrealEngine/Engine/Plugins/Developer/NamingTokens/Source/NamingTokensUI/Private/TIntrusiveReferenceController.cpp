// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 12

// TIntrusiveReferenceController<SNamingTokenDataTreeView,1><> @ 14d0e86a0

TIntrusiveReferenceController<SNamingTokenDataTreeView,1> * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNamingTokenDataTreeView,1>::
TIntrusiveReferenceController<SNamingTokenDataTreeView,1><>
          (TIntrusiveReferenceController<SNamingTokenDataTreeView,1> *this)

{
  uchar *puVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *local_res8;
  
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ =
       (longlong)
       &
       ___7__TIntrusiveReferenceController_VSNamingTokenDataTreeView___00_SharedPointerInternals__6B_
  ;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  memset(&this->ObjectStorage,0,0xb10);
  SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::
  SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>
            ((SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)&this->ObjectStorage,Tree);
  puVar1 = (this->ObjectStorage).Pad + 0xa98;
  *(undefined ***)(this->ObjectStorage).Pad =
       &STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::_vftable__for__SCompoundWidget__;
  *(undefined ***)((this->ObjectStorage).Pad + 0x2a8) =
       &STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::_vftable__for__IScrollableWidget__;
  *(undefined ***)((this->ObjectStorage).Pad + 0x588) =
       &___7__STreeView_V__TSharedPtr_UFNamingTokenDataTreeItem___00____6B_;
  (this->ObjectStorage).Pad[0xa00] = '\0';
  (this->ObjectStorage).Pad[0xa01] = '\0';
  (this->ObjectStorage).Pad[0xa02] = '\0';
  (this->ObjectStorage).Pad[0xa03] = '\0';
  (this->ObjectStorage).Pad[0xa04] = '\0';
  (this->ObjectStorage).Pad[0xa05] = '\0';
  (this->ObjectStorage).Pad[0xa06] = '\0';
  (this->ObjectStorage).Pad[0xa07] = '\0';
  (this->ObjectStorage).Pad[0xa08] = '\0';
  (this->ObjectStorage).Pad[0xa09] = '\0';
  (this->ObjectStorage).Pad[0xa0a] = '\0';
  (this->ObjectStorage).Pad[0xa0b] = '\0';
  (this->ObjectStorage).Pad[0xa0c] = '\0';
  (this->ObjectStorage).Pad[0xa0d] = '\0';
  (this->ObjectStorage).Pad[0xa0e] = '\0';
  (this->ObjectStorage).Pad[0xa0f] = '\0';
  (this->ObjectStorage).Pad[0xa10] = '\0';
  (this->ObjectStorage).Pad[0xa11] = '\0';
  (this->ObjectStorage).Pad[0xa12] = '\0';
  (this->ObjectStorage).Pad[0xa13] = '\0';
  (this->ObjectStorage).Pad[0xa18] = '\0';
  (this->ObjectStorage).Pad[0xa19] = '\0';
  (this->ObjectStorage).Pad[0xa1a] = '\0';
  (this->ObjectStorage).Pad[0xa1b] = '\0';
  (this->ObjectStorage).Pad[0xa1c] = '\0';
  (this->ObjectStorage).Pad[0xa1d] = '\0';
  (this->ObjectStorage).Pad[0xa1e] = '\0';
  (this->ObjectStorage).Pad[0xa1f] = '\0';
  (this->ObjectStorage).Pad[0xa20] = '\0';
  (this->ObjectStorage).Pad[0xa21] = '\0';
  (this->ObjectStorage).Pad[0xa22] = '\0';
  (this->ObjectStorage).Pad[0xa23] = '\0';
  (this->ObjectStorage).Pad[0xa24] = '\0';
  (this->ObjectStorage).Pad[0xa25] = '\0';
  (this->ObjectStorage).Pad[0xa26] = '\0';
  (this->ObjectStorage).Pad[0xa27] = '\0';
  (this->ObjectStorage).Pad[0xa28] = '\0';
  (this->ObjectStorage).Pad[0xa29] = '\0';
  (this->ObjectStorage).Pad[0xa2a] = '\0';
  (this->ObjectStorage).Pad[0xa2b] = '\0';
  (this->ObjectStorage).Pad[0xa38] = '\0';
  (this->ObjectStorage).Pad[0xa39] = '\0';
  (this->ObjectStorage).Pad[0xa3a] = '\0';
  (this->ObjectStorage).Pad[0xa3b] = '\0';
  (this->ObjectStorage).Pad[0xa3c] = '\0';
  (this->ObjectStorage).Pad[0xa3d] = '\0';
  (this->ObjectStorage).Pad[0xa3e] = '\0';
  (this->ObjectStorage).Pad[0xa3f] = '\0';
  (this->ObjectStorage).Pad[0xa40] = '\0';
  (this->ObjectStorage).Pad[0xa41] = '\0';
  (this->ObjectStorage).Pad[0xa42] = '\0';
  (this->ObjectStorage).Pad[0xa43] = '\0';
  (this->ObjectStorage).Pad[0xa44] = '\0';
  (this->ObjectStorage).Pad[0xa45] = '\0';
  (this->ObjectStorage).Pad[0xa46] = '\0';
  (this->ObjectStorage).Pad[0xa47] = '\0';
  (this->ObjectStorage).Pad[0xa58] = '\0';
  (this->ObjectStorage).Pad[0xa59] = '\0';
  (this->ObjectStorage).Pad[0xa5a] = '\0';
  (this->ObjectStorage).Pad[0xa5b] = '\0';
  (this->ObjectStorage).Pad[0xa5c] = '\0';
  (this->ObjectStorage).Pad[0xa5d] = '\0';
  (this->ObjectStorage).Pad[0xa5e] = '\0';
  (this->ObjectStorage).Pad[0xa5f] = '\0';
  (this->ObjectStorage).Pad[0xa60] = '\0';
  (this->ObjectStorage).Pad[0xa61] = '\0';
  (this->ObjectStorage).Pad[0xa62] = '\0';
  (this->ObjectStorage).Pad[0xa63] = '\0';
  (this->ObjectStorage).Pad[0xa64] = 0x80;
  (this->ObjectStorage).Pad[0xa65] = '\0';
  (this->ObjectStorage).Pad[0xa66] = '\0';
  (this->ObjectStorage).Pad[0xa67] = '\0';
  (this->ObjectStorage).Pad[0xa68] = 0xff;
  (this->ObjectStorage).Pad[0xa69] = 0xff;
  (this->ObjectStorage).Pad[0xa6a] = 0xff;
  (this->ObjectStorage).Pad[0xa6b] = 0xff;
  (this->ObjectStorage).Pad[0xa6c] = '\0';
  (this->ObjectStorage).Pad[0xa6d] = '\0';
  (this->ObjectStorage).Pad[0xa6e] = '\0';
  (this->ObjectStorage).Pad[0xa6f] = '\0';
  (this->ObjectStorage).Pad[0xa78] = '\0';
  (this->ObjectStorage).Pad[0xa79] = '\0';
  (this->ObjectStorage).Pad[0xa7a] = '\0';
  (this->ObjectStorage).Pad[0xa7b] = '\0';
  (this->ObjectStorage).Pad[0xa7c] = '\0';
  (this->ObjectStorage).Pad[0xa7d] = '\0';
  (this->ObjectStorage).Pad[0xa7e] = '\0';
  (this->ObjectStorage).Pad[0xa7f] = '\0';
  (this->ObjectStorage).Pad[0xa80] = '\0';
  (this->ObjectStorage).Pad[0xa81] = '\0';
  (this->ObjectStorage).Pad[0xa82] = '\0';
  (this->ObjectStorage).Pad[0xa83] = '\0';
  (this->ObjectStorage).Pad[0xa88] = '\0';
  (this->ObjectStorage).Pad[0xa89] = '\0';
  (this->ObjectStorage).Pad[0xa8a] = '\0';
  (this->ObjectStorage).Pad[0xa8b] = '\0';
  (this->ObjectStorage).Pad[0xa8c] = '\0';
  (this->ObjectStorage).Pad[0xa8d] = '\0';
  (this->ObjectStorage).Pad[0xa8e] = '\0';
  (this->ObjectStorage).Pad[0xa8f] = '\0';
  (this->ObjectStorage).Pad[0xa90] = '\0';
  (this->ObjectStorage).Pad[0xa91] = '\0';
  (this->ObjectStorage).Pad[0xa92] = '\0';
  (this->ObjectStorage).Pad[0xa93] = '\0';
  (this->ObjectStorage).Pad[0xa94] = '\0';
  (this->ObjectStorage).Pad[0xa95] = '\0';
  (this->ObjectStorage).Pad[0xa96] = '\0';
  (this->ObjectStorage).Pad[0xa97] = '\0';
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  (this->ObjectStorage).Pad[0xaa0] = '\0';
  (this->ObjectStorage).Pad[0xaa1] = '\0';
  (this->ObjectStorage).Pad[0xaa2] = '\0';
  (this->ObjectStorage).Pad[0xaa3] = '\0';
  (this->ObjectStorage).Pad[0xaa4] = '\0';
  (this->ObjectStorage).Pad[0xaa5] = '\0';
  (this->ObjectStorage).Pad[0xaa6] = '\0';
  (this->ObjectStorage).Pad[0xaa7] = '\0';
  (this->ObjectStorage).Pad[0xaa8] = '\0';
  (this->ObjectStorage).Pad[0xaa9] = '\0';
  (this->ObjectStorage).Pad[0xaaa] = '\0';
  (this->ObjectStorage).Pad[0xaab] = '\0';
  (this->ObjectStorage).Pad[0xaac] = '\0';
  (this->ObjectStorage).Pad[0xaad] = '\0';
  (this->ObjectStorage).Pad[0xaae] = '\0';
  (this->ObjectStorage).Pad[0xaaf] = '\0';
  (this->ObjectStorage).Pad[0xab0] = '\0';
  (this->ObjectStorage).Pad[0xab1] = '\0';
  (this->ObjectStorage).Pad[0xab2] = '\0';
  (this->ObjectStorage).Pad[0xab3] = '\0';
  (this->ObjectStorage).Pad[0xab4] = '\0';
  (this->ObjectStorage).Pad[0xab5] = '\0';
  (this->ObjectStorage).Pad[0xab6] = '\0';
  (this->ObjectStorage).Pad[0xab7] = '\0';
  (this->ObjectStorage).Pad[0xab8] = '\0';
  (this->ObjectStorage).Pad[0xab9] = '\0';
  (this->ObjectStorage).Pad[0xaba] = '\0';
  (this->ObjectStorage).Pad[0xabb] = '\0';
  (this->ObjectStorage).Pad[0xac8] = '\0';
  (this->ObjectStorage).Pad[0xac9] = '\0';
  (this->ObjectStorage).Pad[0xaca] = '\0';
  (this->ObjectStorage).Pad[0xacb] = '\0';
  (this->ObjectStorage).Pad[0xacc] = '\0';
  (this->ObjectStorage).Pad[0xacd] = '\0';
  (this->ObjectStorage).Pad[0xace] = '\0';
  (this->ObjectStorage).Pad[0xacf] = '\0';
  (this->ObjectStorage).Pad[0xad0] = '\x01';
  (this->ObjectStorage).Pad[0xad1] = '\0';
  (this->ObjectStorage).Pad[0xad2] = '\0';
  (this->ObjectStorage).Pad[0xad8] = '\0';
  (this->ObjectStorage).Pad[0xad9] = '\x01';
  (this->ObjectStorage).Pad[0xaf0] = '\0';
  (this->ObjectStorage).Pad[0xaf1] = '\0';
  (this->ObjectStorage).Pad[0xaf2] = '\0';
  (this->ObjectStorage).Pad[0xaf3] = '\0';
  (this->ObjectStorage).Pad[0xaf4] = '\0';
  (this->ObjectStorage).Pad[0xaf5] = '\0';
  (this->ObjectStorage).Pad[0xaf6] = '\0';
  (this->ObjectStorage).Pad[0xaf7] = '\0';
  (this->ObjectStorage).Pad[0xae0] = '\0';
  (this->ObjectStorage).Pad[0xae1] = '\0';
  (this->ObjectStorage).Pad[0xae2] = '\0';
  (this->ObjectStorage).Pad[0xae3] = '\0';
  (this->ObjectStorage).Pad[0xae4] = '\0';
  (this->ObjectStorage).Pad[0xae5] = '\0';
  (this->ObjectStorage).Pad[0xae6] = '\0';
  (this->ObjectStorage).Pad[0xae7] = '\0';
  (this->ObjectStorage).Pad[0xae8] = '\0';
  (this->ObjectStorage).Pad[0xae9] = '\0';
  (this->ObjectStorage).Pad[0xaea] = '\0';
  (this->ObjectStorage).Pad[0xaeb] = '\0';
  (this->ObjectStorage).Pad[0xaec] = '\0';
  (this->ObjectStorage).Pad[0xaed] = '\0';
  (this->ObjectStorage).Pad[0xaee] = '\0';
  (this->ObjectStorage).Pad[0xaef] = '\0';
  if (puVar1 == (uchar *)0x0) {
    `SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SetItemsSource'::__l2::<lambda_1>::
    operator()(&local_res8);
  }
  plVar2 = *(longlong **)((this->ObjectStorage).Pad + 0x9f8);
  if (plVar2 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,puVar1);
    if (cVar3 != '\0') goto LAB_14d0e8854;
  }
  if (puVar1 == (uchar *)0x0) {
    local_res8 = (undefined8 *)0x0;
  }
  else {
    local_res8 = ::operator_new(0x10);
    if (local_res8 == (undefined8 *)0x0) {
      local_res8 = (undefined8 *)0x0;
    }
    else {
      local_res8[1] = puVar1;
      *local_res8 = &
                    ___7__FArrayPointer_V__TSharedPtr_UFNamingTokenDataTreeItem___00___ItemsSource_Slate_UE__6B_
      ;
    }
  }
  SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SetItemsSource
            ((SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)&this->ObjectStorage,
             (IItemsSource<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)&local_res8);
LAB_14d0e8854:
  *(undefined ***)(this->ObjectStorage).Pad =
       &SNamingTokenDataTreeView::_vftable__for__SCompoundWidget__;
  *(undefined ***)((this->ObjectStorage).Pad + 0x2a8) =
       &SNamingTokenDataTreeView::_vftable__for__IScrollableWidget__;
  *(undefined ***)((this->ObjectStorage).Pad + 0x588) = &___7SNamingTokenDataTreeView__6B_;
  (this->ObjectStorage).Pad[0xaf8] = '\0';
  (this->ObjectStorage).Pad[0xaf9] = '\0';
  (this->ObjectStorage).Pad[0xafa] = '\0';
  (this->ObjectStorage).Pad[0xafb] = '\0';
  (this->ObjectStorage).Pad[0xafc] = '\0';
  (this->ObjectStorage).Pad[0xafd] = '\0';
  (this->ObjectStorage).Pad[0xafe] = '\0';
  (this->ObjectStorage).Pad[0xaff] = '\0';
  (this->ObjectStorage).Pad[0xb00] = '\0';
  (this->ObjectStorage).Pad[0xb01] = '\0';
  (this->ObjectStorage).Pad[0xb02] = '\0';
  (this->ObjectStorage).Pad[0xb03] = '\0';
  (this->ObjectStorage).Pad[0xb04] = '\0';
  (this->ObjectStorage).Pad[0xb05] = '\0';
  (this->ObjectStorage).Pad[0xb06] = '\0';
  (this->ObjectStorage).Pad[0xb07] = '\0';
  return this;
}

// DestroyObject @ 14d0fefc0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SNamingTokensEditableTextBox::FCursorTokenData,1>::DestroyObject
          (TIntrusiveReferenceController<SNamingTokensEditableTextBox::FCursorTokenData,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 14d0fefe0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNamingTokenData,1>::DestroyObject
          (TIntrusiveReferenceController<FNamingTokenData,1> *this)

{
  FNamingTokenData::~FNamingTokenData((FNamingTokenData *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d0feff0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNamingTokenDataTreeItem,1>::DestroyObject
          (TIntrusiveReferenceController<FNamingTokenDataTreeItem,1> *this)

{
  FNamingTokenDataTreeItem::~FNamingTokenDataTreeItem
            ((FNamingTokenDataTreeItem *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d0ff000

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1> *this
          )

{
  STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>::
  ~STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>
            ((STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d0ff010

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>
              *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
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
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 14d0ff060

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FNamingTokensStringSyntaxHighlighterMarshaller,1>::DestroyObject
          (TIntrusiveReferenceController<FNamingTokensStringSyntaxHighlighterMarshaller,1> *this)

{
  FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)((this->ObjectStorage).Pad + 0x330));
  FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)((this->ObjectStorage).Pad + 0x50));
  FSyntaxHighlighterTextLayoutMarshaller::~FSyntaxHighlighterTextLayoutMarshaller
            ((FSyntaxHighlighterTextLayoutMarshaller *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d0ff0a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget,1>
::DestroyObject(TIntrusiveReferenceController<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget,1>
                *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2c0));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2b0));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d0ff0e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNamingTokenDataTreeView,1>::DestroyObject
          (TIntrusiveReferenceController<SNamingTokenDataTreeView,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0xb00);
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
  STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::
  ~STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>
            ((STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d0ff130

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNamingTokenDataTreeViewRow,1>::DestroyObject
          (TIntrusiveReferenceController<SNamingTokenDataTreeViewRow,1> *this)

{
  SNamingTokenDataTreeViewRow::~SNamingTokenDataTreeViewRow
            ((SNamingTokenDataTreeViewRow *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d0ff140

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNamingTokenDataTreeViewWidget,1>::
DestroyObject(TIntrusiveReferenceController<SNamingTokenDataTreeViewWidget,1> *this)

{
  SNamingTokenDataTreeViewWidget::~SNamingTokenDataTreeViewWidget
            ((SNamingTokenDataTreeViewWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d0ff150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNamingTokensEditableTextBox,1>::DestroyObject
          (TIntrusiveReferenceController<SNamingTokensEditableTextBox,1> *this)

{
  SNamingTokensEditableTextBox::~SNamingTokensEditableTextBox
            ((SNamingTokensEditableTextBox *)&this->ObjectStorage);
  return;
}

