// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 2

// FDialogCommands @ 142d625a0

FDialogCommands * __thiscall FDialogCommands::FDialogCommands(FDialogCommands *this)

{
  longlong lVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  FName FVar5;
  FText *pFVar6;
  FName *pFVar7;
  FDialogCommands *pFVar8;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  FName local_res20;
  FText local_38;
  
  FVar5 = FAppStyle::GetAppStyleSetName();
  local_res10 = 0;
  lVar1 = *(longlong *)FVar5;
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"Contexts",L"DialogCommands",L"Dialog Commands");
  pFVar7 = ::FName::FName(&local_res20,L"Dialogs");
  FVar5 = *pFVar7;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)FVar5;
  this->_padding_ = 0;
  this->_padding_ = 0;
  pIVar2 = (pFVar6->TextData).Reference;
  this->_padding_ = (longlong)pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  *(uint *)&this->_padding_ = pFVar6->Flags;
  this->_padding_ = lVar1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  if (lVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStyleSetName.IsNone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Commands\\UICommandInfo.h"
                       ,0x65,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FDialogCommands *)(*pcVar3)();
      return pFVar8;
    }
  }
  this->_padding_ = (longlong)&___7__TCommands_VFDialogCommands____6B_;
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  this->_padding_ = (longlong)&___7FDialogCommands__6B_;
  (this->Cancel).Object = (FUICommandInfo *)0x0;
  (this->Cancel).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Confirm).Object = (FUICommandInfo *)0x0;
  (this->Confirm).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// RegisterCommands @ 142dd1fa0

void __thiscall FDialogCommands::RegisterCommands(FDialogCommands *this)

{
  FInputChord *pFVar1;
  FBindingContext *pFVar2;
  FInputChord local_48;
  FInputChord local_28;
  
  pFVar1 = FInputChord::FInputChord(&local_28);
  local_48.Key.KeyDetails.SharedReferenceCount = EKeys::Escape.KeyDetails.SharedReferenceCount;
  local_48.Key.KeyDetails.Object = EKeys::Escape.KeyDetails.Object;
  local_48.Key.KeyName = EKeys::Escape.KeyName;
  if (EKeys::Escape.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Escape.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Escape.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.bCmd = 0;
  local_48.bAlt = 0;
  local_48.bCtrl = 0;
  local_48.bShift = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  pFVar2 = (FBindingContext *)&this->_padding_;
  if (this == (FDialogCommands *)0x0) {
    pFVar2 = (FBindingContext *)0x0;
  }
  MakeUICommand_InternalUseOnly
            (pFVar2,&this->Cancel,L"CustomDialogCommands",L"Cancel",L"Cancel_ToolTip",".Cancel",
             L"Cancel",L"Cancel the current dialog",Button,&local_48,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  pFVar1 = FInputChord::FInputChord(&local_28);
  local_48.Key.KeyDetails.SharedReferenceCount = EKeys::Enter.KeyDetails.SharedReferenceCount;
  local_48.Key.KeyDetails.Object = EKeys::Enter.KeyDetails.Object;
  local_48.Key.KeyName = EKeys::Enter.KeyName;
  if (EKeys::Enter.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Enter.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Enter.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.bCmd = 0;
  local_48.bAlt = 0;
  local_48.bCtrl = 0;
  local_48.bShift = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  pFVar2 = (FBindingContext *)&this->_padding_;
  if (this == (FDialogCommands *)0x0) {
    pFVar2 = (FBindingContext *)0x0;
  }
  MakeUICommand_InternalUseOnly
            (pFVar2,&this->Confirm,L"CustomDialogCommands",L"Confirm",L"Confirm_ToolTip",".Confirm",
             L"Confirm",L"Confirm the current dialog",Button,&local_48,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

