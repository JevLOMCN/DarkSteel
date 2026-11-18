// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// AddTail @ 142a5f350

void __thiscall
TIntrusiveList<UE::Private::FIoRequestListTraits>::AddTail
          (TIntrusiveList<UE::Private::FIoRequestListTraits> *this,FIoRequestImpl *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 == (FIoRequestImpl *)0x0) || (param_1->NextRequest != (FIoRequestImpl *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                       ,0x72,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->Tail != (FIoRequestImpl *)0x0) {
    if (this->Head == (FIoRequestImpl *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Head != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                         ,0x76,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->Tail->NextRequest = param_1;
    this->Tail = param_1;
    return;
  }
  if (this->Head != (FIoRequestImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Head == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                       ,0x7c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Head = param_1;
  this->Tail = param_1;
  return;
}

