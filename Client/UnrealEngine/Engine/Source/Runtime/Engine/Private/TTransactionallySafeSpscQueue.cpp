// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// ~TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncInput_*,FMemory> @ 1477f2cb0

void __thiscall
TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncInput_*,FMemory>::
~TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncInput_*,FMemory>
          (TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncInput_*,FMemory> *this)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  FNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNode *pFVar6;
  
  if ((this == (TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncInput_*,FMemory> *)0x0
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mutex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                               ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  bVar5 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  pFVar6 = this->First;
  do {
    pFVar2 = pFVar6->Next;
    pFVar3 = this->Tail;
    FMemory::Free(pFVar6);
    bVar5 = pFVar6 != pFVar3;
    pFVar6 = pFVar2;
  } while (bVar5);
  while (pFVar2 != (FNode *)0x0) {
    pFVar6 = pFVar2->Next;
    FMemory::Free(pFVar2);
    pFVar2 = pFVar6;
  }
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  return;
}

// ~TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncOutput_*,FMemory> @ 1477f2d80

void __thiscall
TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncOutput_*,FMemory>::
~TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncOutput_*,FMemory>
          (TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncOutput_*,FMemory> *this)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  FNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNode *pFVar6;
  
  if ((this == (TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncOutput_*,FMemory> *)
               0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  bVar5 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  pFVar6 = this->First;
  do {
    pFVar2 = pFVar6->Next;
    pFVar3 = this->Tail;
    FMemory::Free(pFVar6);
    bVar5 = pFVar6 != pFVar3;
    pFVar6 = pFVar2;
  } while (bVar5);
  while (pFVar2 != (FNode *)0x0) {
    pFVar6 = pFVar2->Next;
    FMemory::Free(pFVar2);
    pFVar2 = pFVar6;
  }
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  return;
}

// AllocNode @ 1478065d0

FNode * __thiscall
TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncOutput_*,FMemory>::AllocNode
          (TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncOutput_*,FMemory> *this)

{
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  FNode *pFVar4;
  
  if ((this == (TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncOutput_*,FMemory> *)
               0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FNode *)(*pcVar2)();
    return pFVar4;
  }
  LOCK();
  bVar3 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  pFVar4 = this->First;
  if ((pFVar4 == this->TailCopy) && (this->TailCopy = this->Tail, pFVar4 == this->Tail)) {
    LOCK();
    aVar1 = (this->Mutex).State;
    (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this->Mutex);
    }
    pFVar4 = FMemory::Malloc(0x10,8);
    *(undefined8 *)(pFVar4->Value).Pad = 0;
    pFVar4->Next = (FNode *)0x0;
    return pFVar4;
  }
  this->First = pFVar4->Next;
  pFVar4->Next = (FNode *)0x0;
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  return pFVar4;
}

// ~TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoInput_*,FMemory> @ 148252650

void __thiscall
TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoInput_*,FMemory>::
~TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoInput_*,FMemory>
          (TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoInput_*,FMemory> *this)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  FNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNode *pFVar6;
  
  if ((this == (TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoInput_*,FMemory> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  bVar5 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  pFVar6 = this->First;
  do {
    pFVar2 = pFVar6->Next;
    pFVar3 = this->Tail;
    FMemory::Free(pFVar6);
    bVar5 = pFVar6 != pFVar3;
    pFVar6 = pFVar2;
  } while (bVar5);
  while (pFVar2 != (FNode *)0x0) {
    pFVar6 = pFVar2->Next;
    FMemory::Free(pFVar2);
    pFVar2 = pFVar6;
  }
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  return;
}

// ~TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentInput_*,FMemory> @ 1482dd310

void __thiscall
TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentInput_*,FMemory>::
~TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentInput_*,FMemory>
          (TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentInput_*,FMemory> *this)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  FNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNode *pFVar6;
  
  if ((this == (TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentInput_*,FMemory> *)0x0)
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  bVar5 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  pFVar6 = this->First;
  do {
    pFVar2 = pFVar6->Next;
    pFVar3 = this->Tail;
    FMemory::Free(pFVar6);
    bVar5 = pFVar6 != pFVar3;
    pFVar6 = pFVar2;
  } while (bVar5);
  while (pFVar2 != (FNode *)0x0) {
    pFVar6 = pFVar2->Next;
    FMemory::Free(pFVar2);
    pFVar2 = pFVar6;
  }
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  return;
}

// ~TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory> @ 1482dd3e0

void __thiscall
TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory>::
~TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory>
          (TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory> *this)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  FNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNode *pFVar6;
  
  if ((this == (TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory> *)0x0)
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  bVar5 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  pFVar6 = this->First;
  do {
    pFVar2 = pFVar6->Next;
    pFVar3 = this->Tail;
    FMemory::Free(pFVar6);
    bVar5 = pFVar6 != pFVar3;
    pFVar6 = pFVar2;
  } while (bVar5);
  while (pFVar2 != (FNode *)0x0) {
    pFVar6 = pFVar2->Next;
    FMemory::Free(pFVar2);
    pFVar2 = pFVar6;
  }
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  return;
}

// ~TTransactionallySafeSpscQueue<FNetworkPhysicsSettingsAsyncInput_*,FMemory> @ 1482dd4b0

void __thiscall
TTransactionallySafeSpscQueue<FNetworkPhysicsSettingsAsyncInput_*,FMemory>::
~TTransactionallySafeSpscQueue<FNetworkPhysicsSettingsAsyncInput_*,FMemory>
          (TTransactionallySafeSpscQueue<FNetworkPhysicsSettingsAsyncInput_*,FMemory> *this)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  FNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNode *pFVar6;
  
  if ((this == (TTransactionallySafeSpscQueue<FNetworkPhysicsSettingsAsyncInput_*,FMemory> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  bVar5 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  pFVar6 = this->First;
  do {
    pFVar2 = pFVar6->Next;
    pFVar3 = this->Tail;
    FMemory::Free(pFVar6);
    bVar5 = pFVar6 != pFVar3;
    pFVar6 = pFVar2;
  } while (bVar5);
  while (pFVar2 != (FNode *)0x0) {
    pFVar6 = pFVar2->Next;
    FMemory::Free(pFVar2);
    pFVar2 = pFVar6;
  }
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  return;
}

// ~TTransactionallySafeSpscQueue<FPhysicsReplicationAsyncInput_*,FMemory> @ 1482dd580

void __thiscall
TTransactionallySafeSpscQueue<FPhysicsReplicationAsyncInput_*,FMemory>::
~TTransactionallySafeSpscQueue<FPhysicsReplicationAsyncInput_*,FMemory>
          (TTransactionallySafeSpscQueue<FPhysicsReplicationAsyncInput_*,FMemory> *this)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  FNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNode *pFVar6;
  
  if ((this == (TTransactionallySafeSpscQueue<FPhysicsReplicationAsyncInput_*,FMemory> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  bVar5 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  pFVar6 = this->First;
  do {
    pFVar2 = pFVar6->Next;
    pFVar3 = this->Tail;
    FMemory::Free(pFVar6);
    bVar5 = pFVar6 != pFVar3;
    pFVar6 = pFVar2;
  } while (bVar5);
  while (pFVar2 != (FNode *)0x0) {
    pFVar6 = pFVar2->Next;
    FMemory::Free(pFVar2);
    pFVar2 = pFVar6;
  }
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  return;
}

// ~TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncInput_*,FMemory> @ 1482dd650

void __thiscall
TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncInput_*,FMemory>::
~TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncInput_*,FMemory>
          (TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncInput_*,FMemory> *this)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  FNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNode *pFVar6;
  
  if ((this == (TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncInput_*,FMemory> *)0x0)
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  bVar5 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  pFVar6 = this->First;
  do {
    pFVar2 = pFVar6->Next;
    pFVar3 = this->Tail;
    FMemory::Free(pFVar6);
    bVar5 = pFVar6 != pFVar3;
    pFVar6 = pFVar2;
  } while (bVar5);
  while (pFVar2 != (FNode *)0x0) {
    pFVar6 = pFVar2->Next;
    FMemory::Free(pFVar2);
    pFVar2 = pFVar6;
  }
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  return;
}

// ~TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory> @ 1482dd720

void __thiscall
TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory>::
~TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory>
          (TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory> *this)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  FNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNode *pFVar6;
  
  if ((this == (TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory> *)0x0)
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  bVar5 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  pFVar6 = this->First;
  do {
    pFVar2 = pFVar6->Next;
    pFVar3 = this->Tail;
    FMemory::Free(pFVar6);
    bVar5 = pFVar6 != pFVar3;
    pFVar6 = pFVar2;
  } while (bVar5);
  while (pFVar2 != (FNode *)0x0) {
    pFVar6 = pFVar2->Next;
    FMemory::Free(pFVar2);
    pFVar2 = pFVar6;
  }
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  return;
}

// ~TTransactionallySafeSpscQueue<FPhysicsReplicationLODAsyncInput_*,FMemory> @ 1482dd7f0

void __thiscall
TTransactionallySafeSpscQueue<FPhysicsReplicationLODAsyncInput_*,FMemory>::
~TTransactionallySafeSpscQueue<FPhysicsReplicationLODAsyncInput_*,FMemory>
          (TTransactionallySafeSpscQueue<FPhysicsReplicationLODAsyncInput_*,FMemory> *this)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  FNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNode *pFVar6;
  
  if ((this == (TTransactionallySafeSpscQueue<FPhysicsReplicationLODAsyncInput_*,FMemory> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  bVar5 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  pFVar6 = this->First;
  do {
    pFVar2 = pFVar6->Next;
    pFVar3 = this->Tail;
    FMemory::Free(pFVar6);
    bVar5 = pFVar6 != pFVar3;
    pFVar6 = pFVar2;
  } while (bVar5);
  while (pFVar2 != (FNode *)0x0) {
    pFVar6 = pFVar2->Next;
    FMemory::Free(pFVar2);
    pFVar2 = pFVar6;
  }
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  return;
}

// AllocNode @ 1482e7110

FNode * __thiscall
TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory>::AllocNode
          (TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory> *this)

{
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  FNode *pFVar4;
  
  if ((this == (TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory> *)0x0)
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FNode *)(*pcVar2)();
    return pFVar4;
  }
  LOCK();
  bVar3 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  pFVar4 = this->First;
  if ((pFVar4 == this->TailCopy) && (this->TailCopy = this->Tail, pFVar4 == this->Tail)) {
    LOCK();
    aVar1 = (this->Mutex).State;
    (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this->Mutex);
    }
    pFVar4 = FMemory::Malloc(0x10,8);
    *(undefined8 *)(pFVar4->Value).Pad = 0;
    pFVar4->Next = (FNode *)0x0;
    return pFVar4;
  }
  this->First = pFVar4->Next;
  pFVar4->Next = (FNode *)0x0;
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  return pFVar4;
}

// AllocNode @ 1482e71f0

FNode * __thiscall
TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory>::AllocNode
          (TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory> *this)

{
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  FNode *pFVar4;
  
  if ((this == (TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory> *)0x0)
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FNode *)(*pcVar2)();
    return pFVar4;
  }
  LOCK();
  bVar3 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  pFVar4 = this->First;
  if ((pFVar4 == this->TailCopy) && (this->TailCopy = this->Tail, pFVar4 == this->Tail)) {
    LOCK();
    aVar1 = (this->Mutex).State;
    (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this->Mutex);
    }
    pFVar4 = FMemory::Malloc(0x10,8);
    *(undefined8 *)(pFVar4->Value).Pad = 0;
    pFVar4->Next = (FNode *)0x0;
    return pFVar4;
  }
  this->First = pFVar4->Next;
  pFVar4->Next = (FNode *)0x0;
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  return pFVar4;
}

// Dequeue @ 1482f4250

bool __thiscall
TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory>::Dequeue
          (TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory> *this,
          FAsyncNetworkPhysicsComponentOutput **param_1)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  FAsyncNetworkPhysicsComponentOutput *pFVar3;
  bool bVar4;
  
  LOCK();
  bVar4 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar4) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  pFVar2 = this->Tail->Next;
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  if (pFVar2 == (FNode *)0x0) {
    bVar4 = false;
  }
  else {
    pFVar3 = *(FAsyncNetworkPhysicsComponentOutput **)(pFVar2->Value).Pad;
    LOCK();
    bVar4 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
    if (bVar4) {
      (this->Mutex).State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar4) {
      UE::FMutex::LockSlow(&this->Mutex);
    }
    this->Tail = pFVar2;
    LOCK();
    aVar1 = (this->Mutex).State;
    (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this->Mutex);
    }
    *param_1 = pFVar3;
    bVar4 = true;
  }
  return bVar4;
}

// Dequeue @ 1482f4300

bool __thiscall
TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory>::Dequeue
          (TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory> *this,
          FPhysicsReplicationCacheAsyncOutput **param_1)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  FPhysicsReplicationCacheAsyncOutput *pFVar3;
  bool bVar4;
  
  LOCK();
  bVar4 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar4) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  pFVar2 = this->Tail->Next;
  LOCK();
  aVar1 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  if (pFVar2 == (FNode *)0x0) {
    bVar4 = false;
  }
  else {
    pFVar3 = *(FPhysicsReplicationCacheAsyncOutput **)(pFVar2->Value).Pad;
    LOCK();
    bVar4 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
    if (bVar4) {
      (this->Mutex).State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar4) {
      UE::FMutex::LockSlow(&this->Mutex);
    }
    this->Tail = pFVar2;
    LOCK();
    aVar1 = (this->Mutex).State;
    (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this->Mutex);
    }
    *param_1 = pFVar3;
    bVar4 = true;
  }
  return bVar4;
}

