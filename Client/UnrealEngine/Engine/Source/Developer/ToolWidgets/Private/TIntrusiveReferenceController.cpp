// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 25

// TIntrusiveReferenceController<FSidebarDrawer,1><FSidebarDrawerConfig> @ 142d52d90

TIntrusiveReferenceController<FSidebarDrawer,1> * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSidebarDrawer,1>::
TIntrusiveReferenceController<FSidebarDrawer,1><FSidebarDrawerConfig>
          (TIntrusiveReferenceController<FSidebarDrawer,1> *this,FSidebarDrawerConfig *param_1)

{
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ =
       (longlong)
       &___7__TIntrusiveReferenceController_VFSidebarDrawer___00_SharedPointerInternals__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  *(FName *)(this->ObjectStorage).Pad = param_1->UniqueId;
  FText::FText((FText *)((this->ObjectStorage).Pad + 8),&(param_1->ButtonText).Value);
  (this->ObjectStorage).Pad[0x18] = (param_1->ButtonText).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x20),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->ButtonText).Getter);
  FText::FText((FText *)((this->ObjectStorage).Pad + 0x38),&(param_1->ToolTipText).Value);
  (this->ObjectStorage).Pad[0x48] = (param_1->ToolTipText).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x50),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->ToolTipText).Getter);
  *(FSlateBrush **)((this->ObjectStorage).Pad + 0x68) = (param_1->Icon).Value;
  (this->ObjectStorage).Pad[0x70] = (param_1->Icon).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x78),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Icon).Getter);
  *(FName *)((this->ObjectStorage).Pad + 0x90) = (param_1->InitialState).DrawerId;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
             ((this->ObjectStorage).Pad + 0x98),&(param_1->InitialState).SelectedSections);
  (this->ObjectStorage).Pad[0xe8] = (param_1->InitialState).bIsPinned;
  (this->ObjectStorage).Pad[0xe9] = (param_1->InitialState).bIsDocked;
  *(SWidget **)((this->ObjectStorage).Pad + 0xf0) = (param_1->OverrideContentWidget).Object;
  *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0xf8) =
       (param_1->OverrideContentWidget).SharedReferenceCount.ReferenceController;
  (param_1->OverrideContentWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->OverrideContentWidget).Object = (SWidget *)0x0;
  (this->ObjectStorage).Pad[0x100] = '\0';
  (this->ObjectStorage).Pad[0x101] = '\0';
  (this->ObjectStorage).Pad[0x102] = '\0';
  (this->ObjectStorage).Pad[0x103] = '\0';
  (this->ObjectStorage).Pad[0x104] = '\0';
  (this->ObjectStorage).Pad[0x105] = '\0';
  (this->ObjectStorage).Pad[0x106] = '\0';
  (this->ObjectStorage).Pad[0x107] = '\0';
  (this->ObjectStorage).Pad[0x108] = '\0';
  (this->ObjectStorage).Pad[0x109] = '\0';
  (this->ObjectStorage).Pad[0x10a] = '\0';
  (this->ObjectStorage).Pad[0x10b] = '\0';
  (this->ObjectStorage).Pad[0x10c] = '\0';
  (this->ObjectStorage).Pad[0x10d] = '\0';
  (this->ObjectStorage).Pad[0x10e] = '\0';
  (this->ObjectStorage).Pad[0x10f] = '\0';
  (this->ObjectStorage).Pad[0x110] = '\0';
  (this->ObjectStorage).Pad[0x111] = '\0';
  (this->ObjectStorage).Pad[0x112] = '\0';
  (this->ObjectStorage).Pad[0x113] = '\0';
  (this->ObjectStorage).Pad[0x114] = '\0';
  (this->ObjectStorage).Pad[0x115] = '\0';
  (this->ObjectStorage).Pad[0x116] = '\0';
  (this->ObjectStorage).Pad[0x117] = '\0';
  (this->ObjectStorage).Pad[0x118] = '\0';
  (this->ObjectStorage).Pad[0x119] = '\0';
  (this->ObjectStorage).Pad[0x11a] = '\0';
  (this->ObjectStorage).Pad[0x11b] = '\0';
  (this->ObjectStorage).Pad[0x11c] = '\0';
  (this->ObjectStorage).Pad[0x11d] = '\0';
  (this->ObjectStorage).Pad[0x11e] = '\0';
  (this->ObjectStorage).Pad[0x11f] = '\0';
  (this->ObjectStorage).Pad[0x120] = '\0';
  (this->ObjectStorage).Pad[0x121] = '\0';
  (this->ObjectStorage).Pad[0x122] = '\0';
  (this->ObjectStorage).Pad[0x123] = '\0';
  (this->ObjectStorage).Pad[0x124] = '\0';
  (this->ObjectStorage).Pad[0x125] = '\0';
  (this->ObjectStorage).Pad[0x126] = '\0';
  (this->ObjectStorage).Pad[0x127] = '\0';
  (this->ObjectStorage).Pad[0x128] = '\0';
  (this->ObjectStorage).Pad[0x129] = '\0';
  (this->ObjectStorage).Pad[0x12a] = '\0';
  (this->ObjectStorage).Pad[299] = '\0';
  (this->ObjectStorage).Pad[300] = '\0';
  (this->ObjectStorage).Pad[0x12d] = '\0';
  (this->ObjectStorage).Pad[0x12e] = '\0';
  (this->ObjectStorage).Pad[0x12f] = '\0';
  (this->ObjectStorage).Pad[0x130] = '\0';
  (this->ObjectStorage).Pad[0x131] = '\0';
  (this->ObjectStorage).Pad[0x132] = '\0';
  (this->ObjectStorage).Pad[0x133] = '\0';
  (this->ObjectStorage).Pad[0x134] = '\0';
  (this->ObjectStorage).Pad[0x135] = '\0';
  (this->ObjectStorage).Pad[0x136] = '\0';
  (this->ObjectStorage).Pad[0x137] = '\0';
  (this->ObjectStorage).Pad[0x138] = '\0';
  (this->ObjectStorage).Pad[0x139] = '\0';
  (this->ObjectStorage).Pad[0x13a] = '\0';
  (this->ObjectStorage).Pad[0x13b] = '\0';
  (this->ObjectStorage).Pad[0x13c] = '\0';
  (this->ObjectStorage).Pad[0x13d] = '\0';
  (this->ObjectStorage).Pad[0x13e] = '\0';
  (this->ObjectStorage).Pad[0x13f] = '\0';
  (this->ObjectStorage).Pad[0x150] = '\0';
  (this->ObjectStorage).Pad[0x151] = '\0';
  (this->ObjectStorage).Pad[0x152] = '\0';
  (this->ObjectStorage).Pad[0x153] = '\0';
  (this->ObjectStorage).Pad[0x154] = '\0';
  (this->ObjectStorage).Pad[0x155] = '\0';
  (this->ObjectStorage).Pad[0x156] = '\0';
  (this->ObjectStorage).Pad[0x157] = '\0';
  (this->ObjectStorage).Pad[0x158] = '\0';
  (this->ObjectStorage).Pad[0x159] = '\0';
  (this->ObjectStorage).Pad[0x15a] = '\0';
  (this->ObjectStorage).Pad[0x15b] = '\0';
  (this->ObjectStorage).Pad[0x15c] = 0x80;
  (this->ObjectStorage).Pad[0x15d] = '\0';
  (this->ObjectStorage).Pad[0x15e] = '\0';
  (this->ObjectStorage).Pad[0x15f] = '\0';
  (this->ObjectStorage).Pad[0x160] = 0xff;
  (this->ObjectStorage).Pad[0x161] = 0xff;
  (this->ObjectStorage).Pad[0x162] = 0xff;
  (this->ObjectStorage).Pad[0x163] = 0xff;
  (this->ObjectStorage).Pad[0x164] = '\0';
  (this->ObjectStorage).Pad[0x165] = '\0';
  (this->ObjectStorage).Pad[0x166] = '\0';
  (this->ObjectStorage).Pad[0x167] = '\0';
  (this->ObjectStorage).Pad[0x170] = '\0';
  (this->ObjectStorage).Pad[0x171] = '\0';
  (this->ObjectStorage).Pad[0x172] = '\0';
  (this->ObjectStorage).Pad[0x173] = '\0';
  (this->ObjectStorage).Pad[0x174] = '\0';
  (this->ObjectStorage).Pad[0x175] = '\0';
  (this->ObjectStorage).Pad[0x176] = '\0';
  (this->ObjectStorage).Pad[0x177] = '\0';
  (this->ObjectStorage).Pad[0x178] = '\0';
  (this->ObjectStorage).Pad[0x179] = '\0';
  (this->ObjectStorage).Pad[0x17a] = '\0';
  (this->ObjectStorage).Pad[0x17b] = '\0';
  (this->ObjectStorage).Pad[0x180] = '\0';
  (this->ObjectStorage).Pad[0x181] = '\0';
  (this->ObjectStorage).Pad[0x182] = '\0';
  (this->ObjectStorage).Pad[0x188] = '\0';
  (this->ObjectStorage).Pad[0x189] = '\0';
  (this->ObjectStorage).Pad[0x18a] = '\0';
  (this->ObjectStorage).Pad[0x18b] = '\0';
  (this->ObjectStorage).Pad[0x18c] = '\0';
  (this->ObjectStorage).Pad[0x18d] = '\0';
  (this->ObjectStorage).Pad[0x18e] = '\0';
  (this->ObjectStorage).Pad[399] = '\0';
  (this->ObjectStorage).Pad[400] = '\0';
  (this->ObjectStorage).Pad[0x191] = '\0';
  (this->ObjectStorage).Pad[0x192] = '\0';
  (this->ObjectStorage).Pad[0x193] = '\0';
  (this->ObjectStorage).Pad[0x194] = '\0';
  (this->ObjectStorage).Pad[0x195] = '\0';
  (this->ObjectStorage).Pad[0x196] = '\0';
  (this->ObjectStorage).Pad[0x197] = '\0';
  (this->ObjectStorage).Pad[0x198] = '\0';
  (this->ObjectStorage).Pad[0x199] = '\0';
  (this->ObjectStorage).Pad[0x19a] = '\0';
  (this->ObjectStorage).Pad[0x19b] = '\0';
  (this->ObjectStorage).Pad[0x19c] = '\0';
  (this->ObjectStorage).Pad[0x19d] = '\0';
  (this->ObjectStorage).Pad[0x19e] = '\0';
  (this->ObjectStorage).Pad[0x19f] = '\0';
  (this->ObjectStorage).Pad[0x1b0] = '\0';
  (this->ObjectStorage).Pad[0x1b1] = '\0';
  (this->ObjectStorage).Pad[0x1b2] = '\0';
  (this->ObjectStorage).Pad[0x1b3] = '\0';
  (this->ObjectStorage).Pad[0x1b4] = '\0';
  (this->ObjectStorage).Pad[0x1b5] = '\0';
  (this->ObjectStorage).Pad[0x1b6] = '\0';
  (this->ObjectStorage).Pad[0x1b7] = '\0';
  (this->ObjectStorage).Pad[0x1b8] = '\0';
  (this->ObjectStorage).Pad[0x1b9] = '\0';
  (this->ObjectStorage).Pad[0x1ba] = '\0';
  (this->ObjectStorage).Pad[0x1bb] = '\0';
  (this->ObjectStorage).Pad[0x1bc] = 0x80;
  (this->ObjectStorage).Pad[0x1bd] = '\0';
  (this->ObjectStorage).Pad[0x1be] = '\0';
  (this->ObjectStorage).Pad[0x1bf] = '\0';
  (this->ObjectStorage).Pad[0x1c0] = 0xff;
  (this->ObjectStorage).Pad[0x1c1] = 0xff;
  (this->ObjectStorage).Pad[0x1c2] = 0xff;
  (this->ObjectStorage).Pad[0x1c3] = 0xff;
  (this->ObjectStorage).Pad[0x1c4] = '\0';
  (this->ObjectStorage).Pad[0x1c5] = '\0';
  (this->ObjectStorage).Pad[0x1c6] = '\0';
  (this->ObjectStorage).Pad[0x1c7] = '\0';
  (this->ObjectStorage).Pad[0x1d0] = '\0';
  (this->ObjectStorage).Pad[0x1d1] = '\0';
  (this->ObjectStorage).Pad[0x1d2] = '\0';
  (this->ObjectStorage).Pad[0x1d3] = '\0';
  (this->ObjectStorage).Pad[0x1d4] = '\0';
  (this->ObjectStorage).Pad[0x1d5] = '\0';
  (this->ObjectStorage).Pad[0x1d6] = '\0';
  (this->ObjectStorage).Pad[0x1d7] = '\0';
  (this->ObjectStorage).Pad[0x1d8] = '\0';
  (this->ObjectStorage).Pad[0x1d9] = '\0';
  (this->ObjectStorage).Pad[0x1da] = '\0';
  (this->ObjectStorage).Pad[0x1db] = '\0';
  (this->ObjectStorage).Pad[0x1e0] = '\0';
  (this->ObjectStorage).Pad[0x1e1] = '\0';
  (this->ObjectStorage).Pad[0x1e8] = '\0';
  (this->ObjectStorage).Pad[0x1e9] = '\0';
  (this->ObjectStorage).Pad[0x1ea] = '\0';
  (this->ObjectStorage).Pad[0x1eb] = '\0';
  (this->ObjectStorage).Pad[0x1ec] = '\0';
  (this->ObjectStorage).Pad[0x1ed] = '\0';
  (this->ObjectStorage).Pad[0x1ee] = '\0';
  (this->ObjectStorage).Pad[0x1ef] = '\0';
  (this->ObjectStorage).Pad[0x1f0] = '\0';
  (this->ObjectStorage).Pad[0x1f1] = '\0';
  (this->ObjectStorage).Pad[0x1f2] = '\0';
  (this->ObjectStorage).Pad[499] = '\0';
  (this->ObjectStorage).Pad[500] = '\0';
  (this->ObjectStorage).Pad[0x1f5] = '\0';
  (this->ObjectStorage).Pad[0x1f6] = '\0';
  (this->ObjectStorage).Pad[0x1f7] = '\0';
  (this->ObjectStorage).Pad[0x1f8] = '\0';
  (this->ObjectStorage).Pad[0x1f9] = '\0';
  (this->ObjectStorage).Pad[0x1fa] = '\0';
  (this->ObjectStorage).Pad[0x1fb] = '\0';
  (this->ObjectStorage).Pad[0x200] = '\0';
  (this->ObjectStorage).Pad[0x201] = '\0';
  (this->ObjectStorage).Pad[0x202] = '\0';
  (this->ObjectStorage).Pad[0x203] = '\0';
  (this->ObjectStorage).Pad[0x204] = '\0';
  (this->ObjectStorage).Pad[0x205] = '\0';
  (this->ObjectStorage).Pad[0x206] = '\0';
  (this->ObjectStorage).Pad[0x207] = '\0';
  (this->ObjectStorage).Pad[0x208] = '\0';
  (this->ObjectStorage).Pad[0x209] = '\0';
  (this->ObjectStorage).Pad[0x20a] = '\0';
  (this->ObjectStorage).Pad[0x20b] = '\0';
  (this->ObjectStorage).Pad[0x20c] = '\0';
  (this->ObjectStorage).Pad[0x20d] = '\0';
  (this->ObjectStorage).Pad[0x20e] = '\0';
  (this->ObjectStorage).Pad[0x20f] = '\0';
  (this->ObjectStorage).Pad[0x210] = '\0';
  (this->ObjectStorage).Pad[0x211] = '\0';
  (this->ObjectStorage).Pad[0x212] = '\0';
  (this->ObjectStorage).Pad[0x213] = '\0';
  return this;
}

// DestroyObject @ 142d9de70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FActionButtonStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FActionButtonStyle,1> *this)

{
  FActionButtonStyle::~FActionButtonStyle((FActionButtonStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142d9de80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<CheckBoxList::FItemPair,1>::DestroyObject
          (TIntrusiveReferenceController<CheckBoxList::FItemPair,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 142d9de90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SListView<TSharedPtr<FText,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<SListView<TSharedPtr<FText,1>_>,1> *this)

{
  SListView<TSharedPtr<FText,1>_>::~SListView<TSharedPtr<FText,1>_>
            ((SListView<TSharedPtr<FText,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142d9dea0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedRef<CheckBoxList::FItemPair,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<SListView<TSharedRef<CheckBoxList::FItemPair,1>_>,1> *this)

{
  SListView<TSharedRef<CheckBoxList::FItemPair,1>_>::
  ~SListView<TSharedRef<CheckBoxList::FItemPair,1>_>
            ((SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142d9deb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STableRow<TSharedPtr<FText,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<STableRow<TSharedPtr<FText,1>_>,1> *this)

{
  STableRow<TSharedPtr<FText,1>_>::~STableRow<TSharedPtr<FText,1>_>
            ((STableRow<TSharedPtr<FText,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142d9dec0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>,1> *this)

{
  STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::
  ~STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>
            ((STableRow<TSharedRef<CheckBoxList::FItemPair,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142d9ded0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FText,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FText,1>_>,1> *this)

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

// DestroyObject @ 142d9df20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<CheckBoxList::FItemPair,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<CheckBoxList::FItemPair,1>_>,1>
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

// DestroyObject @ 142d9df70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::ToolWidgets::DraggableBoxDetail::FDraggableBoxUIDragOperation,1>::
DestroyObject(TIntrusiveReferenceController<UE::ToolWidgets::DraggableBoxDetail::FDraggableBoxUIDragOperation,1>
              *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x48);
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
  FDragDropOperation::~FDragDropOperation((FDragDropOperation *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142d9dfb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSidebarDrawer,1>::DestroyObject
          (TIntrusiveReferenceController<FSidebarDrawer,1> *this)

{
  FSidebarDrawer::~FSidebarDrawer((FSidebarDrawer *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142d9dfc0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FText,1>::DestroyObject
          (TIntrusiveReferenceController<FText,1> *this)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(this->ObjectStorage).Pad;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d9dfcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// DestroyObject @ 142d9dfe0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SActionButton,1>::DestroyObject
          (TIntrusiveReferenceController<SActionButton,1> *this)

{
  SActionButton::~SActionButton((SActionButton *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142d9dff0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::ToolWidgets::SDraggableBox,1>::
DestroyObject(TIntrusiveReferenceController<UE::ToolWidgets::SDraggableBox,1> *this)

{
  UE::ToolWidgets::SDraggableBox::~SDraggableBox((SDraggableBox *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142d9e000

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDrawerOverlay,1>::DestroyObject
          (TIntrusiveReferenceController<SDrawerOverlay,1> *this)

{
  SDrawerOverlay::~SDrawerOverlay((SDrawerOverlay *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142d9e010

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SFilterSearchBoxImpl,1>::DestroyObject
          (TIntrusiveReferenceController<SFilterSearchBoxImpl,1> *this)

{
  SFilterSearchBoxImpl::~SFilterSearchBoxImpl((SFilterSearchBoxImpl *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142d9e020

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<CheckBoxList::SItemPair,1>::DestroyObject
          (TIntrusiveReferenceController<CheckBoxList::SItemPair,1> *this)

{
  CheckBoxList::SItemPair::~SItemPair((SItemPair *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142d9e030

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SPrimaryButton,1>::DestroyObject
          (TIntrusiveReferenceController<SPrimaryButton,1> *this)

{
  SButton::~SButton((SButton *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142d9e040

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SRichTextBlock,1>::DestroyObject
          (TIntrusiveReferenceController<SRichTextBlock,1> *this)

{
  SRichTextBlock::~SRichTextBlock((SRichTextBlock *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142d9e050

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSidebarButton,1>::DestroyObject
          (TIntrusiveReferenceController<SSidebarButton,1> *this)

{
  SSidebarButton::~SSidebarButton((SSidebarButton *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142d9e060

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSidebarButtonText,1>::DestroyObject
          (TIntrusiveReferenceController<SSidebarButtonText,1> *this)

{
  SSidebarButtonText::~SSidebarButtonText((SSidebarButtonText *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142d9e070

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSidebarDrawer,1>::DestroyObject
          (TIntrusiveReferenceController<SSidebarDrawer,1> *this)

{
  SSidebarDrawer::~SSidebarDrawer((SSidebarDrawer *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142d9e080

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSidebarDrawerContent,1>::DestroyObject
          (TIntrusiveReferenceController<SSidebarDrawerContent,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2d0));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2c0));
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x2b0);
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
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142d9e0e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWidgetSwitcher,1>::DestroyObject
          (TIntrusiveReferenceController<SWidgetSwitcher,1> *this)

{
  SWidgetSwitcher::~SWidgetSwitcher((SWidgetSwitcher *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142d9e0f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWrapBox,1>::DestroyObject
          (TIntrusiveReferenceController<SWrapBox,1> *this)

{
  SWrapBox::~SWrapBox((SWrapBox *)&this->ObjectStorage);
  return;
}

