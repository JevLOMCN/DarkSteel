// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// operator() @ 1415a6810

void __thiscall TDefaultDelete<FString>::operator()(TDefaultDelete<FString> *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (param_1 != (FString *)0x0) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(param_1,0x10);
  }
  return;
}

// operator() @ 1417aed90

void __thiscall
TDefaultDelete<FIoStoreReaderImpl::FContainerFileAccess>::operator()
          (TDefaultDelete<FIoStoreReaderImpl::FContainerFileAccess> *this,
          FContainerFileAccess *param_1)

{
  IFileHandle *pIVar1;
  longlong lVar2;
  longlong lVar3;
  IFileHandle **ppIVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 != (FContainerFileAccess *)0x0) {
    lVar2 = 0xc;
    lVar3 = 0xc;
    lpCriticalSection = (LPCRITICAL_SECTION)param_1->Handle;
    ppIVar4 = (IFileHandle **)lpCriticalSection;
    do {
      pIVar1 = *ppIVar4;
      if (pIVar1 != (IFileHandle *)0x0) {
        (**(code **)*pIVar1)(pIVar1,1);
        *ppIVar4 = (IFileHandle *)0x0;
      }
      ppIVar4 = ppIVar4 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    do {
      lpCriticalSection = lpCriticalSection + -1;
      DeleteCriticalSection(lpCriticalSection);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    ::operator_delete(param_1,0x248);
  }
  return;
}

