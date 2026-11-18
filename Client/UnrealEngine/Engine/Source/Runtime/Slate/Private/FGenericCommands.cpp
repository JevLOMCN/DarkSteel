// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// ~FGenericCommands @ 1426aaa10

void __thiscall FGenericCommands::~FGenericCommands(FGenericCommands *this)

{
  this->_padding_ = (longlong)&___7FGenericCommands__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelectAll).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Rename).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Delete).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Redo).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Undo).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Duplicate).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Paste).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Copy).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Cut).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7__TCommands_VFGenericCommands____6B_;
  FBindingContext::~FBindingContext((FBindingContext *)&this->_padding_);
  return;
}

// RegisterCommands @ 142776d90

void __thiscall FGenericCommands::RegisterCommands(FGenericCommands *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  FInputChord *pFVar3;
  FBindingContext *pFVar4;
  FBindingContext *pFVar5;
  FBindingContext *pFVar6;
  FInputChord local_68;
  FInputChord local_48;
  FInputChord local_28;
  
  local_48.Key.KeyName = EKeys::Invalid.KeyName;
  local_48.Key.KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar2.ReferenceController = EKeys::X.KeyDetails.SharedReferenceCount.ReferenceController;
  local_48.bCmd = 0;
  local_48.bAlt = 0;
  local_48.bCtrl = 0;
  local_48.bShift = 0;
  local_68.Key.KeyName = EKeys::X.KeyName;
  local_68.Key.KeyDetails.Object = EKeys::X.KeyDetails.Object;
  local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::X.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::X.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::X.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::X.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_68.bCmd = 0;
  local_68.bAlt = 0;
  local_68.bCtrl = 1;
  local_68.bShift = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  pFVar5 = (FBindingContext *)0x0;
  pFVar6 = (FBindingContext *)&this->_padding_;
  pFVar4 = pFVar6;
  if (this == (FGenericCommands *)0x0) {
    pFVar4 = pFVar5;
  }
  MakeUICommand_InternalUseOnly
            (pFVar4,&this->Cut,L"GenericCommands",L"Cut",L"Cut_ToolTip",".Cut",L"Cut",
             L"Cut selection",Button,&local_68,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  local_48.Key.KeyName = EKeys::Invalid.KeyName;
  local_48.Key.KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar2.ReferenceController = EKeys::C.KeyDetails.SharedReferenceCount.ReferenceController;
  local_48.bCmd = 0;
  local_48.bAlt = 0;
  local_48.bCtrl = 0;
  local_48.bShift = 0;
  local_68.Key.KeyName = EKeys::C.KeyName;
  local_68.Key.KeyDetails.Object = EKeys::C.KeyDetails.Object;
  local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::C.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::C.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::C.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::C.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_68.bCmd = 0;
  local_68.bAlt = 0;
  local_68.bCtrl = 1;
  local_68.bShift = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  pFVar4 = pFVar6;
  if (this == (FGenericCommands *)0x0) {
    pFVar4 = pFVar5;
  }
  MakeUICommand_InternalUseOnly
            (pFVar4,&this->Copy,L"GenericCommands",L"Copy",L"Copy_ToolTip",".Copy",L"Copy",
             L"Copy selection",Button,&local_68,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  local_48.Key.KeyName = EKeys::Invalid.KeyName;
  local_48.Key.KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar2.ReferenceController = EKeys::V.KeyDetails.SharedReferenceCount.ReferenceController;
  local_48.bCmd = 0;
  local_48.bAlt = 0;
  local_48.bCtrl = 0;
  local_48.bShift = 0;
  local_68.Key.KeyName = EKeys::V.KeyName;
  local_68.Key.KeyDetails.Object = EKeys::V.KeyDetails.Object;
  local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::V.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::V.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::V.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::V.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_68.bCmd = 0;
  local_68.bAlt = 0;
  local_68.bCtrl = 1;
  local_68.bShift = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  pFVar4 = pFVar6;
  if (this == (FGenericCommands *)0x0) {
    pFVar4 = pFVar5;
  }
  MakeUICommand_InternalUseOnly
            (pFVar4,&this->Paste,L"GenericCommands",L"Paste",L"Paste_ToolTip",".Paste",L"Paste",
             L"Paste clipboard contents",Button,&local_68,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  local_48.Key.KeyName = EKeys::Invalid.KeyName;
  local_48.Key.KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar2.ReferenceController = EKeys::D.KeyDetails.SharedReferenceCount.ReferenceController;
  local_48.bCmd = 0;
  local_48.bAlt = 0;
  local_48.bCtrl = 0;
  local_48.bShift = 0;
  local_68.Key.KeyName = EKeys::D.KeyName;
  local_68.Key.KeyDetails.Object = EKeys::D.KeyDetails.Object;
  local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::D.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::D.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::D.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::D.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_68.bCmd = 0;
  local_68.bAlt = 0;
  local_68.bCtrl = 1;
  local_68.bShift = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  pFVar4 = pFVar6;
  if (this == (FGenericCommands *)0x0) {
    pFVar4 = pFVar5;
  }
  MakeUICommand_InternalUseOnly
            (pFVar4,&this->Duplicate,L"GenericCommands",L"Duplicate",L"Duplicate_ToolTip",
             ".Duplicate",L"Duplicate",L"Duplicate selection",Button,&local_68,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  local_48.Key.KeyName = EKeys::Invalid.KeyName;
  local_48.Key.KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar2.ReferenceController = EKeys::Z.KeyDetails.SharedReferenceCount.ReferenceController;
  local_48.bCmd = 0;
  local_48.bAlt = 0;
  local_48.bCtrl = 0;
  local_48.bShift = 0;
  local_68.Key.KeyName = EKeys::Z.KeyName;
  local_68.Key.KeyDetails.Object = EKeys::Z.KeyDetails.Object;
  local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Z.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::Z.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Z.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Z.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_68.bCmd = 0;
  local_68.bAlt = 0;
  local_68.bCtrl = 1;
  local_68.bShift = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  pFVar4 = pFVar6;
  if (this == (FGenericCommands *)0x0) {
    pFVar4 = pFVar5;
  }
  MakeUICommand_InternalUseOnly
            (pFVar4,&this->Undo,L"GenericCommands",L"Undo",L"Undo_ToolTip",".Undo",L"Undo",
             L"Undo last action",Button,&local_68,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  local_48.Key.KeyName = EKeys::Invalid.KeyName;
  local_48.Key.KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar2.ReferenceController = EKeys::Y.KeyDetails.SharedReferenceCount.ReferenceController;
  local_48.bCmd = 0;
  local_48.bAlt = 0;
  local_48.bCtrl = 0;
  local_48.bShift = 0;
  local_68.Key.KeyName = EKeys::Y.KeyName;
  local_68.Key.KeyDetails.Object = EKeys::Y.KeyDetails.Object;
  local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Y.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::Y.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Y.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Y.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_68.bCmd = 0;
  local_68.bAlt = 0;
  local_68.bCtrl = 1;
  local_68.bShift = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  pFVar4 = pFVar6;
  if (this == (FGenericCommands *)0x0) {
    pFVar4 = pFVar5;
  }
  MakeUICommand_InternalUseOnly
            (pFVar4,&this->Redo,L"GenericCommands",L"Redo",L"Redo_ToolTip",".Redo",L"Redo",
             L"Redo last action",Button,&local_68,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  FVar2 = EKeys::BackSpace.KeyDetails.SharedReferenceCount;
  local_48.Key.KeyName = EKeys::BackSpace.KeyName;
  local_48.Key.KeyDetails.Object = EKeys::BackSpace.KeyDetails.Object;
  local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::BackSpace.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::BackSpace.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::BackSpace.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::BackSpace.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_48.bCmd = 0;
  local_48.bAlt = 0;
  local_48.bCtrl = 0;
  local_48.bShift = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  FVar2 = EKeys::Delete.KeyDetails.SharedReferenceCount;
  local_68.Key.KeyName = EKeys::Delete.KeyName;
  local_68.Key.KeyDetails.Object = EKeys::Delete.KeyDetails.Object;
  local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Delete.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::Delete.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Delete.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Delete.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_68.bCmd = 0;
  local_68.bAlt = 0;
  local_68.bCtrl = 0;
  local_68.bShift = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  pFVar4 = pFVar6;
  if (this == (FGenericCommands *)0x0) {
    pFVar4 = pFVar5;
  }
  MakeUICommand_InternalUseOnly
            (pFVar4,&this->Delete,L"GenericCommands",L"Delete",L"Delete_ToolTip",".Delete",L"Delete"
             ,L"Delete current selection",Button,&local_68,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  local_68.Key.KeyName = EKeys::Invalid.KeyName;
  local_68.Key.KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar2.ReferenceController = EKeys::F2.KeyDetails.SharedReferenceCount.ReferenceController;
  local_68.bCmd = 0;
  local_68.bAlt = 0;
  local_68.bCtrl = 0;
  local_68.bShift = 0;
  local_48.Key.KeyName = EKeys::F2.KeyName;
  local_48.Key.KeyDetails.Object = EKeys::F2.KeyDetails.Object;
  local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::F2.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::F2.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::F2.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::F2.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_48.bCmd = 0;
  local_48.bAlt = 0;
  local_48.bCtrl = 0;
  local_48.bShift = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  pFVar4 = pFVar6;
  if (this == (FGenericCommands *)0x0) {
    pFVar4 = pFVar5;
  }
  MakeUICommand_InternalUseOnly
            (pFVar4,&this->Rename,L"GenericCommands",L"Rename",L"Rename_ToolTip",".Rename",L"Rename"
             ,L"Rename current selection",Button,&local_48,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  local_48.Key.KeyName = EKeys::Invalid.KeyName;
  local_48.Key.KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.bCmd = 0;
  local_48.bAlt = 0;
  local_48.bCtrl = 0;
  local_48.bShift = 0;
  local_68.Key.KeyName = EKeys::A.KeyName;
  local_68.Key.KeyDetails.Object = EKeys::A.KeyDetails.Object;
  local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::A.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::A.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::A.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::A.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  pFVar3 = FInputChord::FInputChord(&local_28,'\x01',&local_68.Key);
  if (this == (FGenericCommands *)0x0) {
    pFVar6 = pFVar5;
  }
  MakeUICommand_InternalUseOnly
            (pFVar6,&this->SelectAll,L"GenericCommands",L"SelectAll",L"SelectAll_ToolTip",
             ".SelectAll",L"Select All",L"Select everything in the current scope",Button,pFVar3,
             &local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

