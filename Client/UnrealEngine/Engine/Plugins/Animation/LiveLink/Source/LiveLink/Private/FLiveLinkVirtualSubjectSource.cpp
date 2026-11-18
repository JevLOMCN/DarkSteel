// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 9

// ~FLiveLinkVirtualSubjectSource @ 14d0168b0

void __thiscall
FLiveLinkVirtualSubjectSource::~FLiveLinkVirtualSubjectSource(FLiveLinkVirtualSubjectSource *this)

{
  this->_padding_ = (longlong)&___7ILiveLinkSource__6B_;
  return;
}

// CanBeDisplayedInUI @ 14d029360

bool __thiscall
FLiveLinkVirtualSubjectSource::CanBeDisplayedInUI(FLiveLinkVirtualSubjectSource *this)

{
  return true;
}

// GetSourceMachineName @ 14d055690

FText * __thiscall
FLiveLinkVirtualSubjectSource::GetSourceMachineName
          (FLiveLinkVirtualSubjectSource *this,FText *__return_storage_ptr__)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSourceStatus @ 14d055f30

FText * __thiscall
FLiveLinkVirtualSubjectSource::GetSourceStatus
          (FLiveLinkVirtualSubjectSource *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"LiveLinkVirtualSubjectSource",L"VirtualSubjectSourceStatus",
             L"Active");
  return __return_storage_ptr__;
}

// GetSourceType @ 14d056340

FText * __thiscall
FLiveLinkVirtualSubjectSource::GetSourceType
          (FLiveLinkVirtualSubjectSource *this,FText *__return_storage_ptr__)

{
  FText::FromName(__return_storage_ptr__,&this->SourceName);
  return __return_storage_ptr__;
}

// InitializeSettings @ 14d05cb70

void __thiscall
FLiveLinkVirtualSubjectSource::InitializeSettings
          (FLiveLinkVirtualSubjectSource *this,ULiveLinkSourceSettings *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  UClass *pUVar5;
  
  if (param_1 != (ULiveLinkSourceSettings *)0x0) {
    pUVar5 = ULiveLinkVirtualSubjectSourceSettings::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14d05cbd0;
  }
  param_1 = (ULiveLinkSourceSettings *)0x0;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("VirtualSettings",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkVirtualSource.cpp"
                     ,0x19,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d05cbd0:
  uVar3 = *(undefined4 *)((longlong)&param_1[1]._padding_ + 4);
  (this->SourceName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1[1]._padding_;
  (this->SourceName).Number = uVar3;
  return;
}

// IsSourceStillValid @ 14d0604e0

bool __thiscall
FLiveLinkVirtualSubjectSource::IsSourceStillValid(FLiveLinkVirtualSubjectSource *this)

{
  return true;
}

// ReceiveClient @ 14d074d40

void __thiscall
FLiveLinkVirtualSubjectSource::ReceiveClient
          (FLiveLinkVirtualSubjectSource *this,ILiveLinkClient *param_1,FGuid *param_2)

{
  return;
}

// RequestSourceShutdown @ 14d07a760

bool __thiscall
FLiveLinkVirtualSubjectSource::RequestSourceShutdown(FLiveLinkVirtualSubjectSource *this)

{
  return true;
}

