// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 6

// NewDataHelper<FChaosSceneCallbackInput> @ 14413f090

FChaosSceneCallbackInput * __thiscall
Chaos::TSimCallbackObject<FChaosSceneCallbackInput,Chaos::FSimCallbackNoOutput,1>::
NewDataHelper<FChaosSceneCallbackInput>
          (TSimCallbackObject<FChaosSceneCallbackInput,Chaos::FSimCallbackNoOutput,1> *this,
          TArray<TUniquePtr<FChaosSceneCallbackInput,TDefaultDelete<FChaosSceneCallbackInput>_>,TSizedDefaultAllocator<32>_>
          *param_1,TTransactionallySafeSpscQueue<FChaosSceneCallbackInput_*,FMemory> *param_2)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  FChaosSceneCallbackInput *pFVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  bool bVar10;
  
  LOCK();
  bVar10 = (param_2->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar10) {
    (param_2->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar10) {
    UE::FMutex::LockSlow(&param_2->Mutex);
  }
  pFVar2 = param_2->Tail->Next;
  LOCK();
  aVar1 = (param_2->Mutex).State;
  (param_2->Mutex).State = (atomic<unsigned_char>)((char)(param_2->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&param_2->Mutex);
  }
  if (pFVar2 == (FNode *)0x0) {
    puVar5 = ::operator_new(0x28);
    puVar8 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined8 *)((longlong)puVar5 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x1c) = 0;
      *(undefined4 *)((longlong)puVar5 + 0x24) = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *puVar5 = &___7FChaosSceneCallbackInput__6B_;
      puVar8 = puVar5;
    }
    iVar4 = param_1->ArrayNum;
    if (iVar4 == param_1->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar4 + 1;
    *(undefined8 **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = puVar8;
    uVar7 = param_1->ArrayNum - 1;
    uVar9 = 0;
    if ((int)uVar7 < param_1->ArrayNum) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FChaosSceneCallbackInput *)(*pcVar3)();
      return pFVar6;
    }
    pFVar6 = *(FChaosSceneCallbackInput **)
              ((param_1->AllocatorInstance).Data + (longlong)param_1->ArrayNum * 8 + -8);
  }
  else {
    pFVar6 = *(FChaosSceneCallbackInput **)(pFVar2->Value).Pad;
    LOCK();
    bVar10 = (param_2->Mutex).State == (atomic<unsigned_char>)0x0;
    if (bVar10) {
      (param_2->Mutex).State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar10) {
      UE::FMutex::LockSlow(&param_2->Mutex);
    }
    param_2->Tail = pFVar2;
    LOCK();
    aVar1 = (param_2->Mutex).State;
    (param_2->Mutex).State = (atomic<unsigned_char>)((char)(param_2->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&param_2->Mutex);
    }
  }
  return pFVar6;
}

// ~TSimCallbackObject<FChaosSceneCallbackInput,Chaos::FSimCallbackNoOutput,1> @ 1441a1480

void __thiscall
Chaos::TSimCallbackObject<FChaosSceneCallbackInput,Chaos::FSimCallbackNoOutput,1>::
~TSimCallbackObject<FChaosSceneCallbackInput,Chaos::FSimCallbackNoOutput,1>
          (TSimCallbackObject<FChaosSceneCallbackInput,Chaos::FSimCallbackNoOutput,1> *this)

{
  FScriptContainerElement *pFVar1;
  
  TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoOutput_*,FMemory>::
  ~TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoOutput_*,FMemory>(&this->OutputQueue);
  DestructItems<TUniquePtr<Chaos::FSimCallbackNoOutput,TDefaultDelete<Chaos::FSimCallbackNoOutput>_>,int>
            ((TUniquePtr<Chaos::FSimCallbackNoOutput,TDefaultDelete<Chaos::FSimCallbackNoOutput>_> *
             )(this->OutputBacking).AllocatorInstance.Data,(this->OutputBacking).ArrayNum);
  pFVar1 = (this->OutputBacking).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoOutput_*,FMemory>::
  ~TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoOutput_*,FMemory>(&this->OutputPool);
  DestructItems<TUniquePtr<FChaosSceneCallbackInput,TDefaultDelete<FChaosSceneCallbackInput>_>,int>
            ((TUniquePtr<FChaosSceneCallbackInput,TDefaultDelete<FChaosSceneCallbackInput>_> *)
             (this->InputBacking).AllocatorInstance.Data,(this->InputBacking).ArrayNum);
  pFVar1 = (this->InputBacking).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TTransactionallySafeSpscQueue<FChaosSceneCallbackInput_*,FMemory>::
  ~TTransactionallySafeSpscQueue<FChaosSceneCallbackInput_*,FMemory>(&this->InputPool);
  return;
}

// AllocateInputData_External @ 1441a6ee0

FSimCallbackInput * __thiscall
Chaos::TSimCallbackObject<FChaosSceneCallbackInput,Chaos::FSimCallbackNoOutput,1>::
AllocateInputData_External
          (TSimCallbackObject<FChaosSceneCallbackInput,Chaos::FSimCallbackNoOutput,1> *this)

{
  FChaosSceneCallbackInput *pFVar1;
  
  pFVar1 = NewDataHelper<FChaosSceneCallbackInput>(this,&this->InputBacking,&this->InputPool);
  return (FSimCallbackInput *)pFVar1;
}

// FreeInputData_Internal @ 1441acc90

void __thiscall
Chaos::TSimCallbackObject<FChaosSceneCallbackInput,Chaos::FSimCallbackNoOutput,1>::
FreeInputData_Internal
          (TSimCallbackObject<FChaosSceneCallbackInput,Chaos::FSimCallbackNoOutput,1> *this,
          FSimCallbackInput *param_1)

{
  TTransactionallySafeSpscQueue<FChaosSceneCallbackInput_*,FMemory> *this_00;
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  code *pcVar3;
  bool bVar4;
  FNode *pFVar5;
  
  this_00 = &this->InputPool;
  if ((this_00 == (TTransactionallySafeSpscQueue<FChaosSceneCallbackInput_*,FMemory> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  LOCK();
  bVar4 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar4) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    UE::FMutex::LockSlow(&this_00->Mutex);
  }
  pFVar5 = (this->InputPool).First;
  if ((pFVar5 == (this->InputPool).TailCopy) &&
     (pFVar2 = (this->InputPool).Tail, (this->InputPool).TailCopy = pFVar2, pFVar5 == pFVar2)) {
    LOCK();
    aVar1 = (this_00->Mutex).State;
    (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this_00->Mutex);
    }
    pFVar5 = FMemory::Malloc(0x10,8);
    pFVar5->Next = (FNode *)0x0;
  }
  else {
    (this->InputPool).First = pFVar5->Next;
    pFVar5->Next = (FNode *)0x0;
    LOCK();
    aVar1 = (this_00->Mutex).State;
    (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this_00->Mutex);
    }
  }
  *(FSimCallbackInput **)(pFVar5->Value).Pad = param_1;
  LOCK();
  bVar4 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar4) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    UE::FMutex::LockSlow(&this_00->Mutex);
  }
  ((this->InputPool).Head)->Next = pFVar5;
  (this->InputPool).Head = pFVar5;
  LOCK();
  aVar1 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  return;
}

// FreeOutputData_External @ 1441acda0

void __thiscall
Chaos::TSimCallbackObject<FChaosSceneCallbackInput,Chaos::FSimCallbackNoOutput,1>::
FreeOutputData_External
          (TSimCallbackObject<FChaosSceneCallbackInput,Chaos::FSimCallbackNoOutput,1> *this,
          FSimCallbackOutput *param_1)

{
  TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoOutput_*,FMemory> *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  FNode *pFVar4;
  
  this_00 = &this->OutputPool;
  pFVar4 = TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoOutput_*,FMemory>::AllocNode(this_00);
  *(FSimCallbackOutput **)(pFVar4->Value).Pad = param_1;
  if ((this_00 == (TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoOutput_*,FMemory> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  LOCK();
  bVar3 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow(&this_00->Mutex);
  }
  ((this->OutputPool).Head)->Next = pFVar4;
  (this->OutputPool).Head = pFVar4;
  LOCK();
  aVar1 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  return;
}

// OnFinalizeOutputData_Internal @ 1441b2020

void __thiscall
Chaos::TSimCallbackObject<FChaosSceneCallbackInput,Chaos::FSimCallbackNoOutput,1>::
OnFinalizeOutputData_Internal
          (TSimCallbackObject<FChaosSceneCallbackInput,Chaos::FSimCallbackNoOutput,1> *this,
          FSimCallbackOutput *param_1)

{
  TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoOutput_*,FMemory> *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  FNode *pFVar4;
  
  this_00 = &this->OutputQueue;
  pFVar4 = TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoOutput_*,FMemory>::AllocNode(this_00);
  *(FSimCallbackOutput **)(pFVar4->Value).Pad = param_1;
  if ((this_00 == (TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoOutput_*,FMemory> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  LOCK();
  bVar3 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow(&this_00->Mutex);
  }
  ((this->OutputQueue).Head)->Next = pFVar4;
  (this->OutputQueue).Head = pFVar4;
  LOCK();
  aVar1 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  return;
}

