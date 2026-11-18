// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 8

// ~FLiveLinkBroadcastSource @ 14d015de0

void __thiscall FLiveLinkBroadcastSource::~FLiveLinkBroadcastSource(FLiveLinkBroadcastSource *this)

{
  this->_padding_ = (longlong)&___7ILiveLinkSource__6B_;
  return;
}

// CanBeDisplayedInUI @ 14d029340

bool __thiscall FLiveLinkBroadcastSource::CanBeDisplayedInUI(FLiveLinkBroadcastSource *this)

{
  return true;
}

// GetSourceMachineName @ 14d0554d0

FText * __thiscall
FLiveLinkBroadcastSource::GetSourceMachineName
          (FLiveLinkBroadcastSource *this,FText *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FText local_18;
  
  FText::FText(&local_18);
  pwVar1 = FWindowsPlatformProcess::ComputerName();
  FText::FromString(__return_storage_ptr__,pwVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetSourceStatus @ 14d055d60

FText * __thiscall
FLiveLinkBroadcastSource::GetSourceStatus
          (FLiveLinkBroadcastSource *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"LiveLinkBroadcastSource",L"BroadcastSourceStatus",L"Active");
  return __return_storage_ptr__;
}

// GetSourceType @ 14d0561a0

FText * __thiscall
FLiveLinkBroadcastSource::GetSourceType
          (FLiveLinkBroadcastSource *this,FText *__return_storage_ptr__)

{
  FText::FromName(__return_storage_ptr__,&this->SourceName);
  return __return_storage_ptr__;
}

// IsSourceStillValid @ 14d0603a0

bool __thiscall FLiveLinkBroadcastSource::IsSourceStillValid(FLiveLinkBroadcastSource *this)

{
  return true;
}

// ReceiveClient @ 14d074d10

void __thiscall
FLiveLinkBroadcastSource::ReceiveClient
          (FLiveLinkBroadcastSource *this,ILiveLinkClient *param_1,FGuid *param_2)

{
  return;
}

// RequestSourceShutdown @ 14d07a500

bool __thiscall FLiveLinkBroadcastSource::RequestSourceShutdown(FLiveLinkBroadcastSource *this)

{
  return true;
}

