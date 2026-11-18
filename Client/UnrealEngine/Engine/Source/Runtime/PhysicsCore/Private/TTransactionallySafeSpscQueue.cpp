// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 3

// ~TTransactionallySafeSpscQueue<FChaosSceneCallbackInput_*,FMemory> @ 1441a15a0

void __thiscall
TTransactionallySafeSpscQueue<FChaosSceneCallbackInput_*,FMemory>::
~TTransactionallySafeSpscQueue<FChaosSceneCallbackInput_*,FMemory>
          (TTransactionallySafeSpscQueue<FChaosSceneCallbackInput_*,FMemory> *this)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  FNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNode *pFVar6;
  
  if ((this == (TTransactionallySafeSpscQueue<FChaosSceneCallbackInput_*,FMemory> *)0x0) &&
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

// ~TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoOutput_*,FMemory> @ 1441a1670

void __thiscall
TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoOutput_*,FMemory>::
~TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoOutput_*,FMemory>
          (TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoOutput_*,FMemory> *this)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  FNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNode *pFVar6;
  
  if ((this == (TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoOutput_*,FMemory> *)0x0) &&
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

// AllocNode @ 1441a6e00

FNode * __thiscall
TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoOutput_*,FMemory>::AllocNode
          (TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoOutput_*,FMemory> *this)

{
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  FNode *pFVar4;
  
  if ((this == (TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoOutput_*,FMemory> *)0x0) &&
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

