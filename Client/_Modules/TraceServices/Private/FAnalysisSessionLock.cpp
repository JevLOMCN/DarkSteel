// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 6

// BeginEdit @ 14d3d5500

void __thiscall TraceServices::FAnalysisSessionLock::BeginEdit(FAnalysisSessionLock *this)

{
  int iVar1;
  FAnalysisSessionLock *pFVar2;
  longlong lVar3;
  code *pcVar4;
  ulong uVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar5 = _tls_index;
  uVar7 = (ulonglong)_tls_index;
  pFVar2 = *(FAnalysisSessionLock **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9b68);
  if ((pFVar2 != (FAnalysisSessionLock *)0x0) && (pFVar2 != this)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GThreadCurrentSessionLock || GThreadCurrentSessionLock == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisService.cpp"
                       ,0x6a,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9b64) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("GThreadCurrentReadLockCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisService.cpp"
                       ,0x6b,L"Trying to lock for edit while holding read access");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar5 * 8);
  iVar1 = *(int *)(lVar3 + 0x9b60);
  *(int *)(lVar3 + 0x9b60) = iVar1 + 1;
  if (iVar1 == 0) {
    *(FAnalysisSessionLock **)(lVar3 + 0x9b68) = this;
    AcquireSRWLockExclusive((PSRWLOCK)this);
  }
  return;
}

// BeginRead @ 14d3d5a80

void __thiscall TraceServices::FAnalysisSessionLock::BeginRead(FAnalysisSessionLock *this)

{
  int iVar1;
  FAnalysisSessionLock *pFVar2;
  longlong lVar3;
  code *pcVar4;
  ulong uVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar5 = _tls_index;
  uVar7 = (ulonglong)_tls_index;
  pFVar2 = *(FAnalysisSessionLock **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9b68);
  if ((pFVar2 != (FAnalysisSessionLock *)0x0) && (pFVar2 != this)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GThreadCurrentSessionLock || GThreadCurrentSessionLock == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisService.cpp"
                       ,0x55,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9b60) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("GThreadCurrentWriteLockCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisService.cpp"
                       ,0x56,L"Trying to lock for read while holding write access");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar5 * 8);
  iVar1 = *(int *)(lVar3 + 0x9b64);
  *(int *)(lVar3 + 0x9b64) = iVar1 + 1;
  if (iVar1 == 0) {
    *(FAnalysisSessionLock **)(lVar3 + 0x9b68) = this;
    AcquireSRWLockShared((PSRWLOCK)this);
  }
  return;
}

// EndEdit @ 14d3db3d0

void __thiscall TraceServices::FAnalysisSessionLock::EndEdit(FAnalysisSessionLock *this)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)_tls_index;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0x9b60) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GThreadCurrentWriteLockCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisService.cpp"
                       ,0x75,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8);
  piVar1 = (int *)(lVar2 + 0x9b60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    *(undefined8 *)(lVar2 + 0x9b68) = 0;
  }
  return;
}

// EndRead @ 14d3dbb30

void __thiscall TraceServices::FAnalysisSessionLock::EndRead(FAnalysisSessionLock *this)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)_tls_index;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0x9b64) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GThreadCurrentReadLockCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisService.cpp"
                       ,0x60,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8);
  piVar1 = (int *)(lVar2 + 0x9b64);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    ReleaseSRWLockShared((PSRWLOCK)this);
    *(undefined8 *)(lVar2 + 0x9b68) = 0;
  }
  return;
}

// ReadAccessCheck @ 14d3fcf10

void __thiscall TraceServices::FAnalysisSessionLock::ReadAccessCheck(FAnalysisSessionLock *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(FAnalysisSessionLock **)(lVar1 + 0x9b68) != this) ||
     ((*(int *)(lVar1 + 0x9b64) < 1 && (*(int *)(lVar1 + 0x9b60) < 1)))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GThreadCurrentSessionLock == this && (GThreadCurrentReadLockCount > 0 || GThreadCurrentWriteLockCount > 0)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisService.cpp"
                       ,0x4b,L"Trying to read from session outside of a ReadScope");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// WriteAccessCheck @ 14d4066c0

void __thiscall TraceServices::FAnalysisSessionLock::WriteAccessCheck(FAnalysisSessionLock *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(FAnalysisSessionLock **)(lVar1 + 0x9b68) != this) || (*(int *)(lVar1 + 0x9b60) < 1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GThreadCurrentSessionLock == this && GThreadCurrentWriteLockCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisService.cpp"
                       ,0x50,L"Trying to write to session outside of an EditScope");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

