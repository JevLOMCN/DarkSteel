// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Remove @ 1414ad5d0

void __thiscall
TIntrusiveTwoWayList<UE::FIoFileBlockRequest,TIntrusiveTwoWayListTraits<UE::FIoFileBlockRequest>_>::
Remove(TIntrusiveTwoWayList<UE::FIoFileBlockRequest,TIntrusiveTwoWayListTraits<UE::FIoFileBlockRequest>_>
       *this,FIoFileBlockRequest *param_1)

{
  FIoFileBlockRequest *pFVar1;
  FIoFileBlockRequest *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (FIoFileBlockRequest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Element != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                       ,0x18c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->Head == param_1) {
    if (this->Tail != param_1) {
      if (param_1->Prev != (FIoFileBlockRequest *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeTraits::GetPrev(Element) == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                           ,0x197,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar1 = param_1->Next;
      this->Head = pFVar1;
      pFVar1->Prev = (FIoFileBlockRequest *)0x0;
      param_1->Next = (FIoFileBlockRequest *)0x0;
      return;
    }
    if (param_1->Next != (FIoFileBlockRequest *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeTraits::GetNext(Element) == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                         ,400,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (param_1->Prev != (FIoFileBlockRequest *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeTraits::GetPrev(Element) == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                         ,0x191,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this->Tail = (FIoFileBlockRequest *)0x0;
    this->Head = (FIoFileBlockRequest *)0x0;
    return;
  }
  if (this->Tail != param_1) {
    pFVar1 = param_1->Next;
    pFVar2 = param_1->Prev;
    pFVar1->Prev = pFVar2;
    pFVar2->Next = pFVar1;
    param_1->Prev = (FIoFileBlockRequest *)0x0;
    param_1->Next = (FIoFileBlockRequest *)0x0;
    return;
  }
  if (param_1->Next != (FIoFileBlockRequest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Element->Next == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                       ,0x19f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = param_1->Prev;
  this->Tail = pFVar1;
  pFVar1->Next = (FIoFileBlockRequest *)0x0;
  param_1->Prev = (FIoFileBlockRequest *)0x0;
  return;
}

