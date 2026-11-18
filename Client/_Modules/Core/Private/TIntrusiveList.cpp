// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// AddTail @ 1414858b0

void __thiscall
TIntrusiveList<UE::FIoEncodedBlockRequest>::AddTail
          (TIntrusiveList<UE::FIoEncodedBlockRequest> *this,FIoEncodedBlockRequest *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 == (FIoEncodedBlockRequest *)0x0) || (param_1->Next != (FIoEncodedBlockRequest *)0x0)
     ) {
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
  if (this->Tail != (FIoEncodedBlockRequest *)0x0) {
    if (this->Head == (FIoEncodedBlockRequest *)0x0) {
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
    this->Tail->Next = param_1;
    this->Tail = param_1;
    return;
  }
  if (this->Head != (FIoEncodedBlockRequest *)0x0) {
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

// AddTail @ 141485990

void __thiscall
TIntrusiveList<UE::FIoFileBlockRequest>::AddTail
          (TIntrusiveList<UE::FIoFileBlockRequest> *this,FIoFileBlockRequest *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 == (FIoFileBlockRequest *)0x0) || (param_1->Next != (FIoFileBlockRequest *)0x0)) {
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
  if (this->Tail != (FIoFileBlockRequest *)0x0) {
    if (this->Head == (FIoFileBlockRequest *)0x0) {
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
    this->Tail->Next = param_1;
    this->Tail = param_1;
    return;
  }
  if (this->Head != (FIoFileBlockRequest *)0x0) {
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

// AddTail @ 1417b3420

void __thiscall
TIntrusiveList<UE::Private::FIoRequestListTraits>::AddTail
          (TIntrusiveList<UE::Private::FIoRequestListTraits> *this,FIoRequestImpl *param_1,
          FIoRequestImpl *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 == (FIoRequestImpl *)0x0) || (param_2 == (FIoRequestImpl *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("First && Last",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                       ,0x83,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1->NextRequest == (FIoRequestImpl *)0x0) && (param_1 != param_2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeTraits::GetNext(First) != nullptr || First == Last",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->Tail == (FIoRequestImpl *)0x0) {
    if (this->Head != (FIoRequestImpl *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Head == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                         ,0x8e,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->Head = param_1;
  }
  else {
    if (this->Head == (FIoRequestImpl *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Head != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                         ,0x88,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->Tail->NextRequest = param_1;
  }
  this->Tail = param_2;
  return;
}

// AddTail @ 1417b3530

void __thiscall
TIntrusiveList<UE::FIoDispatcherChunkBlockDecoder::FQueueEntry>::AddTail
          (TIntrusiveList<UE::FIoDispatcherChunkBlockDecoder::FQueueEntry> *this,
          FQueueEntry *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 == (FQueueEntry *)0x0) || (param_1->Next != (FQueueEntry *)0x0)) {
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
  if (this->Tail != (FQueueEntry *)0x0) {
    if (this->Head == (FQueueEntry *)0x0) {
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
    this->Tail->Next = param_1;
    this->Tail = param_1;
    return;
  }
  if (this->Head != (FQueueEntry *)0x0) {
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

