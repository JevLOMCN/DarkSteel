// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// ~FScopeCoreRedirectsWriteLockedContext @ 141fbfe30

void __thiscall
FScopeCoreRedirectsWriteLockedContext::~FScopeCoreRedirectsWriteLockedContext
          (FScopeCoreRedirectsWriteLockedContext *this)

{
  int *piVar1;
  DWORD DVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  DWORD DVar6;
  
  lVar3 = *(longlong *)this;
  DVar2 = *(DWORD *)(lVar3 + 200);
  DVar6 = GetCurrentThreadId();
  if (DVar2 != DVar6) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8878926057831399629>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreRedirectsContext.cpp"
                       ,0xcd,
                       "LoadWriteLockOwnerThreadIdRelaxed() == FPlatformTLS::GetCurrentThreadId()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)(lVar3 + 0xcc) < 1) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8878926057831399630>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreRedirectsContext.cpp"
                       ,0xce,"RecursionCount > 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  piVar1 = (int *)(lVar3 + 0xcc);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(lVar3 + 200) = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xc0));
  }
  FScopeCoreRedirectsReadLockedContext::~FScopeCoreRedirectsReadLockedContext
            ((FScopeCoreRedirectsReadLockedContext *)this);
  return;
}

