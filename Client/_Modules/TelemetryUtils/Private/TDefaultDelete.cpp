// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TelemetryUtils
// Functions: 1

// operator() @ 142a38e90

void __thiscall
TDefaultDelete<FTelemetryRouter>::operator()
          (TDefaultDelete<FTelemetryRouter> *this,FTelemetryRouter *param_1)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  if (param_1 != (FTelemetryRouter *)0x0) {
    *(undefined4 *)&(param_1->KeyToSinks).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->KeyToSinks).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FGuid,FTelemetryRouter::FSinkSet>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FGuid,FTelemetryRouter::FSinkSet>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FGuid,FTelemetryRouter::FSinkSet>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->KeyToSinks);
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)param_1);
    if (BVar3 != '\0') {
      ReleaseSRWLockExclusive((PSRWLOCK)param_1);
      ::operator_delete(param_1,0x58);
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ::operator_delete(param_1,0x58);
  }
  return;
}

