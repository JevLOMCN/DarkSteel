// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 1

// OnlineTick @ 14ed29b40

void __thiscall FOnlineAsyncTaskManagerNull::OnlineTick(FOnlineAsyncTaskManagerNull *this)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  
  if (this->NullSubsystem == (FOnlineSubsystemNull *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NullSubsystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineAsyncTaskManagerNull.cpp"
                       ,7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DVar3 = GetCurrentThreadId();
  if (DVar3 != (DWORD)this->_padding_) {
    bVar2 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformTLS::GetCurrentThreadId() == OnlineThreadId || !FPlatformProcess::SupportsMultithreading()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineAsyncTaskManagerNull.cpp"
                         ,8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

