// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// Remove @ 142a97000

void __thiscall
FFileIoStoreReadRequestList::Remove
          (FFileIoStoreReadRequestList *this,FFileIoStoreReadRequest *param_1)

{
  FFileIoStoreReadRequest **ppFVar1;
  FFileIoStoreReadRequest *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  if (this->Head != param_1) {
    if (this->Tail == param_1) {
      if ((param_1->Next != (FFileIoStoreReadRequest *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Request->Next == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                             ,0x1d6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = param_1->Previous;
      this->Tail = pFVar2;
      pFVar2->Next = (FFileIoStoreReadRequest *)0x0;
      param_1->Previous = (FFileIoStoreReadRequest *)0x0;
      return;
    }
    ppFVar1 = &param_1->Previous;
    if (((param_1->Next == (FFileIoStoreReadRequest *)0x0) ||
        (*ppFVar1 == (FFileIoStoreReadRequest *)0x0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Request->Next != nullptr && Request->Previous != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                           ,0x1de,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_1->Next->Previous = *ppFVar1;
    (*ppFVar1)->Next = param_1->Next;
    param_1->Next = (FFileIoStoreReadRequest *)0x0;
    *ppFVar1 = (FFileIoStoreReadRequest *)0x0;
    return;
  }
  if (this->Tail != param_1) {
    if ((param_1->Previous != (FFileIoStoreReadRequest *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Request->Previous == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                           ,0x1ce,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = param_1->Next;
    this->Head = pFVar2;
    pFVar2->Previous = (FFileIoStoreReadRequest *)0x0;
    param_1->Next = (FFileIoStoreReadRequest *)0x0;
    return;
  }
  if ((param_1->Next != (FFileIoStoreReadRequest *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Request->Next == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                         ,0x1c7,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1->Previous != (FFileIoStoreReadRequest *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Request->Previous == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                         ,0x1c8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->Tail = (FFileIoStoreReadRequest *)0x0;
  this->Head = (FFileIoStoreReadRequest *)0x0;
  return;
}

