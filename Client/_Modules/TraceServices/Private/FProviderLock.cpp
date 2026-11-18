// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 6

// BeginRead @ 14d3d5b80

void __thiscall
TraceServices::FProviderLock::BeginRead(FProviderLock *this,FThreadLocalState *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_1->Lock != (FProviderLock *)0x0) && (param_1->Lock != this)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!State.Lock || State.Lock == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\ProviderLock.cpp"
                       ,0x16,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1->WriteLockCount != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.WriteLockCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\ProviderLock.cpp"
                       ,0x17,L"Trying to lock provider for READ while holding EDIT/WRITE access");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ReadLockCount;
  param_1->ReadLockCount = iVar1 + 1;
  if (iVar1 == 0) {
    param_1->Lock = this;
    AcquireSRWLockShared((PSRWLOCK)this);
  }
  return;
}

// BeginWrite @ 14d3d5cc0

void __thiscall
TraceServices::FProviderLock::BeginWrite(FProviderLock *this,FThreadLocalState *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_1->Lock != (FProviderLock *)0x0) && (param_1->Lock != this)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!State.Lock || State.Lock == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\ProviderLock.cpp"
                       ,0x2c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1->ReadLockCount != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.ReadLockCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\ProviderLock.cpp"
                       ,0x2d,L"Trying to lock provider for EDIT/WRITE while holding READ access");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->WriteLockCount;
  param_1->WriteLockCount = iVar1 + 1;
  if (iVar1 == 0) {
    param_1->Lock = this;
    AcquireSRWLockExclusive((PSRWLOCK)this);
  }
  return;
}

// EndRead @ 14d3dbbd0

void __thiscall
TraceServices::FProviderLock::EndRead(FProviderLock *this,FThreadLocalState *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1->Lock != this) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.Lock == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\ProviderLock.cpp"
                       ,0x21,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1->ReadLockCount < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.ReadLockCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\ProviderLock.cpp"
                       ,0x22,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  piVar1 = &param_1->ReadLockCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    ReleaseSRWLockShared((PSRWLOCK)this);
    param_1->Lock = (FProviderLock *)0x0;
  }
  return;
}

// EndWrite @ 14d3dbd00

void __thiscall
TraceServices::FProviderLock::EndWrite(FProviderLock *this,FThreadLocalState *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1->Lock != this) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.Lock == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\ProviderLock.cpp"
                       ,0x37,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1->WriteLockCount < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.WriteLockCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\ProviderLock.cpp"
                       ,0x38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  piVar1 = &param_1->WriteLockCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    param_1->Lock = (FProviderLock *)0x0;
  }
  return;
}

// ReadAccessCheck @ 14d3fcf80

void __thiscall
TraceServices::FProviderLock::ReadAccessCheck(FProviderLock *this,FThreadLocalState *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1->Lock != this) || ((param_1->ReadLockCount < 1 && (param_1->WriteLockCount < 1)))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.Lock == this && (State.ReadLockCount > 0 || State.WriteLockCount > 0)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\ProviderLock.cpp"
                       ,0xb,L"Trying to READ from provider outside of a READ scope");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// WriteAccessCheck @ 14d406720

void __thiscall
TraceServices::FProviderLock::WriteAccessCheck(FProviderLock *this,FThreadLocalState *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1->Lock != this) || (param_1->WriteLockCount < 1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.Lock == this && (State.WriteLockCount > 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Common\\ProviderLock.cpp"
                       ,0x11,L"Trying to WRITE to provider outside of an EDIT/WRITE scope");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

