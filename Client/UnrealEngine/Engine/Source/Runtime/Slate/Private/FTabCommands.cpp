// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// ~FTabCommands @ 1426ab7f0

void __thiscall FTabCommands::~FTabCommands(FTabCommands *this)

{
  this->_padding_ = (longlong)&___7FTabCommands__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CloseFocusedTab).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CloseMinorTab).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CloseMajorTab).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7__TCommands_VFTabCommands____6B_;
  FBindingContext::~FBindingContext((FBindingContext *)&this->_padding_);
  return;
}

// RegisterCommands @ 1427775d0

void __thiscall FTabCommands::RegisterCommands(FTabCommands *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  FBindingContext *pFVar3;
  FBindingContext *pFVar4;
  FBindingContext *pFVar5;
  FInputChord local_48;
  FInputChord local_28;
  
  local_28.Key.KeyName = EKeys::Invalid.KeyName;
  local_28.Key.KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController =
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
  FVar2.ReferenceController = EKeys::W.KeyDetails.SharedReferenceCount.ReferenceController;
  local_28.bCmd = 0;
  local_28.bAlt = 0;
  local_28.bCtrl = 0;
  local_28.bShift = 0;
  local_48.Key.KeyName = EKeys::W.KeyName;
  local_48.Key.KeyDetails.Object = EKeys::W.KeyDetails.Object;
  local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::W.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::W.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::W.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::W.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_48.bCmd = 0;
  local_48.bAlt = 0;
  local_48.bCtrl = 1;
  local_48.bShift = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  pFVar4 = (FBindingContext *)0x0;
  pFVar5 = (FBindingContext *)&this->_padding_;
  pFVar3 = pFVar5;
  if (this == (FTabCommands *)0x0) {
    pFVar3 = pFVar4;
  }
  MakeUICommand_InternalUseOnly
            (pFVar3,&this->CloseMajorTab,L"TabCommands",L"CloseMajorTab",L"CloseMajorTab_ToolTip",
             ".CloseMajorTab",L"Close Major Tab",L"Closes the focused major tab",Button,&local_48,
             &local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController);
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
  local_28.Key.KeyName = EKeys::Invalid.KeyName;
  local_28.Key.KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController =
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
  local_28.bCmd = 0;
  local_28.bAlt = 0;
  local_28.bCtrl = 0;
  local_28.bShift = 0;
  pFVar3 = pFVar5;
  if (this == (FTabCommands *)0x0) {
    pFVar3 = pFVar4;
  }
  MakeUICommand_InternalUseOnly
            (pFVar3,&this->CloseMinorTab,L"TabCommands",L"CloseMinorTab",L"CloseMinorTab_ToolTip",
             ".CloseMinorTab",L"Close Minor Tab",L"Closes the current window\'s active minor tab",
             Button,&local_28,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController);
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
  local_48.bCmd = 0;
  local_48.bAlt = 0;
  local_48.bCtrl = 0;
  local_48.bShift = 0;
  local_28.Key.KeyName = EKeys::Invalid.KeyName;
  local_28.Key.KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController =
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
  local_28.bCmd = 0;
  local_28.bAlt = 0;
  local_28.bCtrl = 0;
  local_28.bShift = 0;
  if (this == (FTabCommands *)0x0) {
    pFVar5 = pFVar4;
  }
  MakeUICommand_InternalUseOnly
            (pFVar5,&this->CloseFocusedTab,L"TabCommands",L"CloseFocusedTab",
             L"CloseFocusedTab_ToolTip",".CloseFocusedTab",L"Close Focused Tab",
             L"Closes the focused tab, prioritizing minor tabs over major tabs",Button,&local_28,
             &local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

