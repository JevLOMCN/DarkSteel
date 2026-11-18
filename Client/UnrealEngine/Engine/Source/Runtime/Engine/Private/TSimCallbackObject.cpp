// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 45

// NewDataHelper<FCharacterMovementComponentAsyncOutput> @ 1476e54d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FCharacterMovementComponentAsyncOutput * __thiscall
Chaos::
TSimCallbackObject<FCharacterMovementComponentAsyncInput,FCharacterMovementComponentAsyncOutput,1>::
NewDataHelper<FCharacterMovementComponentAsyncOutput>
          (TSimCallbackObject<FCharacterMovementComponentAsyncInput,FCharacterMovementComponentAsyncOutput,1>
           *this,TArray<TUniquePtr<FCharacterMovementComponentAsyncOutput,TDefaultDelete<FCharacterMovementComponentAsyncOutput>_>,TSizedDefaultAllocator<32>_>
                 *param_1,
          TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncOutput_*,FMemory> *param_2)

{
  longlong *plVar1;
  atomic<unsigned_char> aVar2;
  FNode *pFVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  FCharacterMovementComponentAsyncOutput *pFVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  bool bVar12;
  longlong local_48 [4];
  undefined4 uStack_28;
  undefined1 uStack_24;
  undefined2 uStack_23;
  undefined1 uStack_21;
  
  LOCK();
  bVar12 = (param_2->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar12) {
    (param_2->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar12) {
    UE::FMutex::LockSlow(&param_2->Mutex);
  }
  pFVar3 = param_2->Tail->Next;
  LOCK();
  aVar2 = (param_2->Mutex).State;
  (param_2->Mutex).State = (atomic<unsigned_char>)((char)(param_2->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&param_2->Mutex);
  }
  if (pFVar3 == (FNode *)0x0) {
    puVar6 = ::operator_new(0x370);
    puVar10 = (undefined8 *)0x0;
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      *(uint *)(puVar6 + 0x26) = *(uint *)(puVar6 + 0x26) & 0xfffffff8;
      *(undefined8 *)((longlong)puVar6 + 0x134) = 0;
      puVar6[2] = 0xbff0000000000000;
      *puVar6 = &___7FCharacterMovementComponentAsyncOutput__6B_;
      memset(puVar6 + 0x28,0,0x100);
      *(undefined4 *)((longlong)puVar6 + 0x1e4) = 0xffffffff;
      plVar1 = puVar6 + 0x6b;
      *(undefined4 *)((longlong)puVar6 + 0x144) = 0x3f800000;
      puVar6[0x3f] = 0;
      puVar6[0x40] = 0;
      uStack_23 = 0;
      local_48[1] = 0;
      local_48[2] = 0;
      uStack_21 = 0;
      local_48[3] = 0;
      uStack_28 = 0xffffffff;
      uStack_24 = 0;
      puVar6[0x41] = 0;
      puVar6[0x42] = 0xffffffff;
      *(undefined1 *)(puVar6 + 0x66) = 0;
      puVar6[0x69] = 0;
      puVar6[0x6a] = 0;
      *plVar1 = 0;
      *(undefined1 *)(puVar6 + 0x6c) = 0;
      puVar7 = ::operator_new(0x38);
      if (puVar7 != (undefined8 *)0x0) {
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        *puVar7 = &___7FCharacterAsyncOutput__6B_;
        puVar10 = puVar7;
      }
      if (plVar1 == local_48) {
        if (puVar10 != (undefined8 *)0x0) {
          (**(code **)*puVar10)(puVar10,1);
        }
      }
      else {
        puVar7 = (undefined8 *)*plVar1;
        *plVar1 = (longlong)puVar10;
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)*puVar7)(puVar7,1);
        }
      }
    }
    iVar5 = param_1->ArrayNum;
    if (iVar5 == param_1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar5 + 1;
    *(undefined8 **)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) = puVar6;
    uVar9 = param_1->ArrayNum - 1;
    uVar11 = 0;
    if ((int)uVar9 < param_1->ArrayNum) {
      uVar11 = ~uVar9 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FCharacterMovementComponentAsyncOutput *)(*pcVar4)();
      return pFVar8;
    }
    pFVar8 = *(FCharacterMovementComponentAsyncOutput **)
              ((param_1->AllocatorInstance).Data + (longlong)param_1->ArrayNum * 8 + -8);
  }
  else {
    pFVar8 = *(FCharacterMovementComponentAsyncOutput **)(pFVar3->Value).Pad;
    LOCK();
    bVar12 = (param_2->Mutex).State == (atomic<unsigned_char>)0x0;
    if (bVar12) {
      (param_2->Mutex).State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar12) {
      UE::FMutex::LockSlow(&param_2->Mutex);
    }
    param_2->Tail = pFVar3;
    LOCK();
    aVar2 = (param_2->Mutex).State;
    (param_2->Mutex).State = (atomic<unsigned_char>)((char)(param_2->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&param_2->Mutex);
    }
  }
  return pFVar8;
}

// NewDataHelper<FCharacterMovementComponentAsyncInput> @ 147761ae0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FCharacterMovementComponentAsyncInput * __thiscall
Chaos::
TSimCallbackObject<FCharacterMovementComponentAsyncInput,FCharacterMovementComponentAsyncOutput,1>::
NewDataHelper<FCharacterMovementComponentAsyncInput>
          (TSimCallbackObject<FCharacterMovementComponentAsyncInput,FCharacterMovementComponentAsyncOutput,1>
           *this,TArray<TUniquePtr<FCharacterMovementComponentAsyncInput,TDefaultDelete<FCharacterMovementComponentAsyncInput>_>,TSizedDefaultAllocator<32>_>
                 *param_1,
          TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncInput_*,FMemory> *param_2)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined8 *puVar8;
  TStatId TVar9;
  FCharacterMovementComponentAsyncInput *pFVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  LOCK();
  bVar13 = (param_2->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar13) {
    (param_2->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar13) {
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
    puVar8 = ::operator_new(0x420);
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
      memset((void *)((longlong)puVar8 + 0x11),0,399);
      memset(puVar8 + 0x40,0,0x220);
      *(undefined4 *)(puVar8 + 1) = 0;
      *puVar8 = &___7FCharacterMovementComponentAsyncInput__6B_;
      *(undefined1 *)(puVar8 + 2) = 0;
      fVar4 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar5 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar6 = GlobalVectorConstants::Float0001.m128_f32[3];
      puVar8[0x34] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      puVar8[0x35] = (double)fVar4;
      puVar8[0x36] = (double)fVar5;
      puVar8[0x37] = (double)fVar6;
      fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
      fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar6 = GlobalVectorConstants::FloatZero.m128_f32[3];
      puVar8[0x38] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      puVar8[0x39] = (double)fVar4;
      puVar8[0x3a] = (double)fVar5;
      puVar8[0x3b] = (double)fVar6;
      fVar4 = GlobalVectorConstants::Float1110.m128_f32[1];
      fVar5 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar6 = GlobalVectorConstants::Float1110.m128_f32[3];
      puVar8[0x3c] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      puVar8[0x3d] = (double)fVar4;
      puVar8[0x3e] = (double)fVar5;
      puVar8[0x3f] = (double)fVar6;
      FRootMotionAsyncData::Clear((FRootMotionAsyncData *)(puVar8 + 0x28));
      puVar8[0x54] = 0;
      puVar8[0x55] = 0;
      TVar9 = FCollisionQueryParams::GetUnknownStatId();
      FCollisionQueryParams::FCollisionQueryParams
                ((FCollisionQueryParams *)(puVar8 + 0x57),(FName)0x0,(TStatId *)TVar9.StatIdPtr,
                 false,(AActor *)0x0);
      FCollisionEnabledMask::FCollisionEnabledMask((FCollisionEnabledMask *)(puVar8 + 0x68),'\0');
      FCollisionResponseContainer::FCollisionResponseContainer
                ((FCollisionResponseContainer *)(puVar8 + 0x69));
      FCollisionResponseContainer::SetAllChannels
                ((FCollisionResponseContainer *)(puVar8 + 0x69),ECR_Block);
      FCollisionQueryParams::FCollisionQueryParams((FCollisionQueryParams *)(puVar8 + 0x6e));
      puVar8[0x7f] = 0;
      puVar8[0x80] = 0;
      puVar8[0x81] = 0;
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 == param_1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar7 + 1;
    *(undefined8 **)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = puVar8;
    uVar11 = param_1->ArrayNum - 1;
    uVar12 = 0;
    if ((int)uVar11 < param_1->ArrayNum) {
      uVar12 = ~uVar11 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FCharacterMovementComponentAsyncInput *)(*pcVar3)();
      return pFVar10;
    }
    pFVar10 = *(FCharacterMovementComponentAsyncInput **)
               ((param_1->AllocatorInstance).Data + (longlong)param_1->ArrayNum * 8 + -8);
  }
  else {
    pFVar10 = *(FCharacterMovementComponentAsyncInput **)(pFVar2->Value).Pad;
    LOCK();
    bVar13 = (param_2->Mutex).State == (atomic<unsigned_char>)0x0;
    if (bVar13) {
      (param_2->Mutex).State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar13) {
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
  return pFVar10;
}

// ~TSimCallbackObject<FCharacterMovementComponentAsyncInput,FCharacterMovementComponentAsyncOutput,1> @ 1477f29b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
Chaos::
TSimCallbackObject<FCharacterMovementComponentAsyncInput,FCharacterMovementComponentAsyncOutput,1>::
~TSimCallbackObject<FCharacterMovementComponentAsyncInput,FCharacterMovementComponentAsyncOutput,1>
          (TSimCallbackObject<FCharacterMovementComponentAsyncInput,FCharacterMovementComponentAsyncOutput,1>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncOutput_*,FMemory>::
  ~TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncOutput_*,FMemory>
            (&this->OutputQueue);
  DestructItems<TUniquePtr<FCharacterMovementComponentAsyncOutput,TDefaultDelete<FCharacterMovementComponentAsyncOutput>_>,int>
            ((TUniquePtr<FCharacterMovementComponentAsyncOutput,TDefaultDelete<FCharacterMovementComponentAsyncOutput>_>
              *)(this->OutputBacking).AllocatorInstance.Data,(this->OutputBacking).ArrayNum);
  pFVar1 = (this->OutputBacking).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncOutput_*,FMemory>::
  ~TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncOutput_*,FMemory>
            (&this->OutputPool);
  DestructItems<TUniquePtr<FCharacterMovementComponentAsyncInput,TDefaultDelete<FCharacterMovementComponentAsyncInput>_>,int>
            ((TUniquePtr<FCharacterMovementComponentAsyncInput,TDefaultDelete<FCharacterMovementComponentAsyncInput>_>
              *)(this->InputBacking).AllocatorInstance.Data,(this->InputBacking).ArrayNum);
  pFVar1 = (this->InputBacking).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncInput_*,FMemory>::
  ~TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncInput_*,FMemory>(&this->InputPool);
  return;
}

// AllocateInputData_External @ 1478066b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSimCallbackInput * __thiscall
Chaos::
TSimCallbackObject<FCharacterMovementComponentAsyncInput,FCharacterMovementComponentAsyncOutput,1>::
AllocateInputData_External
          (TSimCallbackObject<FCharacterMovementComponentAsyncInput,FCharacterMovementComponentAsyncOutput,1>
           *this)

{
  FCharacterMovementComponentAsyncInput *pFVar1;
  
  pFVar1 = NewDataHelper<FCharacterMovementComponentAsyncInput>
                     (this,&this->InputBacking,&this->InputPool);
  return (FSimCallbackInput *)pFVar1;
}

// FreeInputData_Internal @ 147824410

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
Chaos::
TSimCallbackObject<FCharacterMovementComponentAsyncInput,FCharacterMovementComponentAsyncOutput,1>::
FreeInputData_Internal
          (TSimCallbackObject<FCharacterMovementComponentAsyncInput,FCharacterMovementComponentAsyncOutput,1>
           *this,FSimCallbackInput *param_1)

{
  atomic<unsigned_char> aVar1;
  undefined8 *puVar2;
  FNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNode *pFVar6;
  TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncInput_*,FMemory> *this_00;
  undefined1 local_28 [8];
  FSharedReferencer<1> FStack_20;
  
  *(undefined1 *)&param_1[1]._padding_ = 0;
  puVar2 = *(undefined8 **)&param_1[0x2a].NumSteps;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)&param_1[0x2a].NumSteps = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x2a]._padding_;
  if (puVar2 != (undefined8 *)0x0) {
    param_1[0x2a]._padding_ = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  local_28 = (undefined1  [8])0x0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1 + 0x40 != (FSimCallbackInput *)local_28) {
    param_1[0x40]._padding_ = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&param_1[0x40].NumSteps,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  this_00 = &this->InputPool;
  if ((this_00 ==
       (TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncInput_*,FMemory> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  bVar5 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(&this_00->Mutex);
  }
  pFVar6 = (this->InputPool).First;
  if ((pFVar6 == (this->InputPool).TailCopy) &&
     (pFVar3 = (this->InputPool).Tail, (this->InputPool).TailCopy = pFVar3, pFVar6 == pFVar3)) {
    LOCK();
    aVar1 = (this_00->Mutex).State;
    (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this_00->Mutex);
    }
    pFVar6 = FMemory::Malloc(0x10,8);
    pFVar6->Next = (FNode *)0x0;
  }
  else {
    (this->InputPool).First = pFVar6->Next;
    pFVar6->Next = (FNode *)0x0;
    LOCK();
    aVar1 = (this_00->Mutex).State;
    (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this_00->Mutex);
    }
  }
  *(FSimCallbackInput **)(pFVar6->Value).Pad = param_1;
  LOCK();
  bVar5 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(&this_00->Mutex);
  }
  ((this->InputPool).Head)->Next = pFVar6;
  (this->InputPool).Head = pFVar6;
  LOCK();
  aVar1 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  return;
}

// FreeOutputData_External @ 147824700

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
Chaos::
TSimCallbackObject<FCharacterMovementComponentAsyncInput,FCharacterMovementComponentAsyncOutput,1>::
FreeOutputData_External
          (TSimCallbackObject<FCharacterMovementComponentAsyncInput,FCharacterMovementComponentAsyncOutput,1>
           *this,FSimCallbackOutput *param_1)

{
  TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncOutput_*,FMemory> *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  FNode *pFVar4;
  FSimCallbackOutput *pFVar5;
  
  this_00 = &this->OutputPool;
  pFVar5 = param_1 + -2;
  if (param_1 == (FSimCallbackOutput *)0x0) {
    pFVar5 = (FSimCallbackOutput *)0x0;
  }
  *(undefined1 *)&pFVar5[0x6c].InternalTime = 0;
  pFVar4 = TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncOutput_*,FMemory>::
           AllocNode(this_00);
  *(FSimCallbackOutput **)(pFVar4->Value).Pad = pFVar5;
  if ((this_00 ==
       (TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncOutput_*,FMemory> *)0x0) &&
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

// OnFinalizeOutputData_Internal @ 147845c90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
Chaos::
TSimCallbackObject<FCharacterMovementComponentAsyncInput,FCharacterMovementComponentAsyncOutput,1>::
OnFinalizeOutputData_Internal
          (TSimCallbackObject<FCharacterMovementComponentAsyncInput,FCharacterMovementComponentAsyncOutput,1>
           *this,FSimCallbackOutput *param_1)

{
  TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncOutput_*,FMemory> *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  FNode *pFVar4;
  FSimCallbackOutput *pFVar5;
  
  this_00 = &this->OutputQueue;
  pFVar4 = TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncOutput_*,FMemory>::
           AllocNode(this_00);
  pFVar5 = param_1 + -2;
  if (param_1 == (FSimCallbackOutput *)0x0) {
    pFVar5 = (FSimCallbackOutput *)0x0;
  }
  *(FSimCallbackOutput **)(pFVar4->Value).Pad = pFVar5;
  if ((this_00 ==
       (TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncOutput_*,FMemory> *)0x0) &&
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

// NewDataHelper<Chaos::FSimCallbackNoInput> @ 148242300

FSimCallbackNoInput * __thiscall
Chaos::TSimCallbackObject<Chaos::FSimCallbackNoInput,Chaos::FSimCallbackNoOutput,257>::
NewDataHelper<Chaos::FSimCallbackNoInput>
          (TSimCallbackObject<Chaos::FSimCallbackNoInput,Chaos::FSimCallbackNoOutput,257> *this,
          TArray<TUniquePtr<Chaos::FSimCallbackNoInput,TDefaultDelete<Chaos::FSimCallbackNoInput>_>,TSizedDefaultAllocator<32>_>
          *param_1,TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoInput_*,FMemory> *param_2)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  FSimCallbackNoInput *pFVar6;
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
    puVar5 = ::operator_new(0x10);
    puVar8 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = 0;
      *puVar5 = &___7FSimCallbackNoInput_Chaos__6B_;
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
      pFVar6 = (FSimCallbackNoInput *)(*pcVar3)();
      return pFVar6;
    }
    pFVar6 = *(FSimCallbackNoInput **)
              ((param_1->AllocatorInstance).Data + (longlong)param_1->ArrayNum * 8 + -8);
  }
  else {
    pFVar6 = *(FSimCallbackNoInput **)(pFVar2->Value).Pad;
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

// ~TSimCallbackObject<Chaos::FSimCallbackNoInput,Chaos::FSimCallbackNoOutput,257> @ 148251e50

void __thiscall
Chaos::TSimCallbackObject<Chaos::FSimCallbackNoInput,Chaos::FSimCallbackNoOutput,257>::
~TSimCallbackObject<Chaos::FSimCallbackNoInput,Chaos::FSimCallbackNoOutput,257>
          (TSimCallbackObject<Chaos::FSimCallbackNoInput,Chaos::FSimCallbackNoOutput,257> *this)

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
  DestructItems<TUniquePtr<Chaos::FSimCallbackNoInput,TDefaultDelete<Chaos::FSimCallbackNoInput>_>,int>
            ((TUniquePtr<Chaos::FSimCallbackNoInput,TDefaultDelete<Chaos::FSimCallbackNoInput>_> *)
             (this->InputBacking).AllocatorInstance.Data,(this->InputBacking).ArrayNum);
  pFVar1 = (this->InputBacking).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoInput_*,FMemory>::
  ~TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoInput_*,FMemory>(&this->InputPool);
  return;
}

// AllocateInputData_External @ 148266950

FSimCallbackInput * __thiscall
Chaos::TSimCallbackObject<Chaos::FSimCallbackNoInput,Chaos::FSimCallbackNoOutput,257>::
AllocateInputData_External
          (TSimCallbackObject<Chaos::FSimCallbackNoInput,Chaos::FSimCallbackNoOutput,257> *this)

{
  FSimCallbackInput *pFVar1;
  
  pFVar1 = (FSimCallbackInput *)
           NewDataHelper<Chaos::FSimCallbackNoInput>(this,&this->InputBacking,&this->InputPool);
  return pFVar1;
}

// FreeInputData_Internal @ 148283510

void __thiscall
Chaos::TSimCallbackObject<Chaos::FSimCallbackNoInput,Chaos::FSimCallbackNoOutput,257>::
FreeInputData_Internal
          (TSimCallbackObject<Chaos::FSimCallbackNoInput,Chaos::FSimCallbackNoOutput,257> *this,
          FSimCallbackInput *param_1)

{
  TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoInput_*,FMemory> *this_00;
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  code *pcVar3;
  bool bVar4;
  FNode *pFVar5;
  
  this_00 = &this->InputPool;
  if ((this_00 == (TTransactionallySafeSpscQueue<Chaos::FSimCallbackNoInput_*,FMemory> *)0x0) &&
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

// FreeOutputData_External @ 148283620

void __thiscall
Chaos::TSimCallbackObject<Chaos::FSimCallbackNoInput,Chaos::FSimCallbackNoOutput,257>::
FreeOutputData_External
          (TSimCallbackObject<Chaos::FSimCallbackNoInput,Chaos::FSimCallbackNoOutput,257> *this,
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

// OnFinalizeOutputData_Internal @ 148297a50

void __thiscall
Chaos::TSimCallbackObject<Chaos::FSimCallbackNoInput,Chaos::FSimCallbackNoOutput,257>::
OnFinalizeOutputData_Internal
          (TSimCallbackObject<Chaos::FSimCallbackNoInput,Chaos::FSimCallbackNoOutput,257> *this,
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

// NewDataHelper<FAsyncNetworkPhysicsComponentInput> @ 1482d6030

FAsyncNetworkPhysicsComponentInput * __thiscall
Chaos::
TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024>::
NewDataHelper<FAsyncNetworkPhysicsComponentInput>
          (TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024>
           *this,TArray<TUniquePtr<FAsyncNetworkPhysicsComponentInput,TDefaultDelete<FAsyncNetworkPhysicsComponentInput>_>,TSizedDefaultAllocator<32>_>
                 *param_1,
          TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentInput_*,FMemory> *param_2)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *_Dst;
  FAsyncNetworkPhysicsComponentInput *pFVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  bool bVar9;
  
  LOCK();
  bVar9 = (param_2->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar9) {
    (param_2->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar9) {
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
    _Dst = ::operator_new(0xe0);
    puVar7 = (undefined8 *)0x0;
    if (_Dst != (undefined8 *)0x0) {
      memset(_Dst,0,0xe0);
      *(undefined4 *)((longlong)_Dst + 0x6c) = 0xffffffff;
      *_Dst = &___7FAsyncNetworkPhysicsComponentInput__6B_;
      _Dst[0x14] = 0xffffffffffffffff;
      puVar7 = _Dst;
    }
    iVar4 = param_1->ArrayNum;
    if (iVar4 == param_1->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar4 + 1;
    *(undefined8 **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = puVar7;
    uVar6 = param_1->ArrayNum - 1;
    uVar8 = 0;
    if ((int)uVar6 < param_1->ArrayNum) {
      uVar8 = ~uVar6 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FAsyncNetworkPhysicsComponentInput *)(*pcVar3)();
      return pFVar5;
    }
    pFVar5 = *(FAsyncNetworkPhysicsComponentInput **)
              ((param_1->AllocatorInstance).Data + (longlong)param_1->ArrayNum * 8 + -8);
  }
  else {
    pFVar5 = *(FAsyncNetworkPhysicsComponentInput **)(pFVar2->Value).Pad;
    LOCK();
    bVar9 = (param_2->Mutex).State == (atomic<unsigned_char>)0x0;
    if (bVar9) {
      (param_2->Mutex).State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar9) {
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
  return pFVar5;
}

// NewDataHelper<FAsyncNetworkPhysicsComponentOutput> @ 1482d6190

FAsyncNetworkPhysicsComponentOutput * __thiscall
Chaos::
TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024>::
NewDataHelper<FAsyncNetworkPhysicsComponentOutput>
          (TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024>
           *this,TArray<TUniquePtr<FAsyncNetworkPhysicsComponentOutput,TDefaultDelete<FAsyncNetworkPhysicsComponentOutput>_>,TSizedDefaultAllocator<32>_>
                 *param_1,
          TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory> *param_2)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  FAsyncNetworkPhysicsComponentOutput *pFVar6;
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
    puVar5 = ::operator_new(0x40);
    puVar8 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined2 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xb) = 0;
      *(undefined1 *)((longlong)puVar5 + 0xf) = 0;
      *puVar5 = 0xbff0000000000000;
      *(undefined1 *)((longlong)puVar5 + 10) = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
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
      pFVar6 = (FAsyncNetworkPhysicsComponentOutput *)(*pcVar3)();
      return pFVar6;
    }
    pFVar6 = *(FAsyncNetworkPhysicsComponentOutput **)
              ((param_1->AllocatorInstance).Data + (longlong)param_1->ArrayNum * 8 + -8);
  }
  else {
    pFVar6 = *(FAsyncNetworkPhysicsComponentOutput **)(pFVar2->Value).Pad;
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

// NewDataHelper<FNetworkPhysicsSettingsAsyncInput> @ 1482d6300

FNetworkPhysicsSettingsAsyncInput * __thiscall
Chaos::TSimCallbackObject<FNetworkPhysicsSettingsAsyncInput,Chaos::FSimCallbackNoOutput,1>::
NewDataHelper<FNetworkPhysicsSettingsAsyncInput>
          (TSimCallbackObject<FNetworkPhysicsSettingsAsyncInput,Chaos::FSimCallbackNoOutput,1> *this
          ,TArray<TUniquePtr<FNetworkPhysicsSettingsAsyncInput,TDefaultDelete<FNetworkPhysicsSettingsAsyncInput>_>,TSizedDefaultAllocator<32>_>
           *param_1,
          TTransactionallySafeSpscQueue<FNetworkPhysicsSettingsAsyncInput_*,FMemory> *param_2)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *_Dst;
  FNetworkPhysicsSettingsAsyncInput *pFVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  bool bVar9;
  
  LOCK();
  bVar9 = (param_2->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar9) {
    (param_2->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar9) {
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
    _Dst = ::operator_new(0x180);
    puVar7 = (undefined8 *)0x0;
    if (_Dst != (undefined8 *)0x0) {
      memset(_Dst,0,0x180);
      _Dst[4] = 0xffffffffffffffff;
      *_Dst = &___7FNetworkPhysicsSettingsAsyncInput__6B_;
      puVar7 = _Dst;
    }
    iVar4 = param_1->ArrayNum;
    if (iVar4 == param_1->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar4 + 1;
    *(undefined8 **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = puVar7;
    uVar6 = param_1->ArrayNum - 1;
    uVar8 = 0;
    if ((int)uVar6 < param_1->ArrayNum) {
      uVar8 = ~uVar6 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FNetworkPhysicsSettingsAsyncInput *)(*pcVar3)();
      return pFVar5;
    }
    pFVar5 = *(FNetworkPhysicsSettingsAsyncInput **)
              ((param_1->AllocatorInstance).Data + (longlong)param_1->ArrayNum * 8 + -8);
  }
  else {
    pFVar5 = *(FNetworkPhysicsSettingsAsyncInput **)(pFVar2->Value).Pad;
    LOCK();
    bVar9 = (param_2->Mutex).State == (atomic<unsigned_char>)0x0;
    if (bVar9) {
      (param_2->Mutex).State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar9) {
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
  return pFVar5;
}

// NewDataHelper<FPhysicsReplicationAsyncInput> @ 1482d6460

FPhysicsReplicationAsyncInput * __thiscall
Chaos::TSimCallbackObject<FPhysicsReplicationAsyncInput,Chaos::FSimCallbackNoOutput,1025>::
NewDataHelper<FPhysicsReplicationAsyncInput>
          (TSimCallbackObject<FPhysicsReplicationAsyncInput,Chaos::FSimCallbackNoOutput,1025> *this,
          TArray<TUniquePtr<FPhysicsReplicationAsyncInput,TDefaultDelete<FPhysicsReplicationAsyncInput>_>,TSizedDefaultAllocator<32>_>
          *param_1,TTransactionallySafeSpscQueue<FPhysicsReplicationAsyncInput_*,FMemory> *param_2)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  FPhysicsReplicationAsyncInput *pFVar6;
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
    puVar5 = ::operator_new(0x30);
    puVar8 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined8 *)((longlong)puVar5 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x14) = 0;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *puVar5 = &___7FPhysicsReplicationAsyncInput__6B_;
      puVar5[4] = 0;
      puVar5[5] = 0;
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
      pFVar6 = (FPhysicsReplicationAsyncInput *)(*pcVar3)();
      return pFVar6;
    }
    pFVar6 = *(FPhysicsReplicationAsyncInput **)
              ((param_1->AllocatorInstance).Data + (longlong)param_1->ArrayNum * 8 + -8);
  }
  else {
    pFVar6 = *(FPhysicsReplicationAsyncInput **)(pFVar2->Value).Pad;
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

// NewDataHelper<FPhysicsReplicationCacheAsyncInput> @ 1482d65c0

FPhysicsReplicationCacheAsyncInput * __thiscall
Chaos::
TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>::
NewDataHelper<FPhysicsReplicationCacheAsyncInput>
          (TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>
           *this,TArray<TUniquePtr<FPhysicsReplicationCacheAsyncInput,TDefaultDelete<FPhysicsReplicationCacheAsyncInput>_>,TSizedDefaultAllocator<32>_>
                 *param_1,
          TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncInput_*,FMemory> *param_2)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  FPhysicsReplicationCacheAsyncInput *pFVar6;
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
    puVar5 = ::operator_new(0x30);
    puVar8 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = 0;
      *puVar5 = &___7FPhysicsReplicationCacheAsyncInput__6B_;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
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
      pFVar6 = (FPhysicsReplicationCacheAsyncInput *)(*pcVar3)();
      return pFVar6;
    }
    pFVar6 = *(FPhysicsReplicationCacheAsyncInput **)
              ((param_1->AllocatorInstance).Data + (longlong)param_1->ArrayNum * 8 + -8);
  }
  else {
    pFVar6 = *(FPhysicsReplicationCacheAsyncInput **)(pFVar2->Value).Pad;
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

// NewDataHelper<FPhysicsReplicationCacheAsyncOutput> @ 1482d6720

FPhysicsReplicationCacheAsyncOutput * __thiscall
Chaos::
TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>::
NewDataHelper<FPhysicsReplicationCacheAsyncOutput>
          (TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>
           *this,TArray<TUniquePtr<FPhysicsReplicationCacheAsyncOutput,TDefaultDelete<FPhysicsReplicationCacheAsyncOutput>_>,TSizedDefaultAllocator<32>_>
                 *param_1,
          TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory> *param_2)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  FPhysicsReplicationCacheAsyncOutput *pFVar6;
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
    puVar5 = ::operator_new(0x30);
    puVar8 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = 0;
      *puVar5 = 0xbff0000000000000;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
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
      pFVar6 = (FPhysicsReplicationCacheAsyncOutput *)(*pcVar3)();
      return pFVar6;
    }
    pFVar6 = *(FPhysicsReplicationCacheAsyncOutput **)
              ((param_1->AllocatorInstance).Data + (longlong)param_1->ArrayNum * 8 + -8);
  }
  else {
    pFVar6 = *(FPhysicsReplicationCacheAsyncOutput **)(pFVar2->Value).Pad;
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

// NewDataHelper<FPhysicsReplicationLODAsyncInput> @ 1482d6880

FPhysicsReplicationLODAsyncInput * __thiscall
Chaos::TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>::
NewDataHelper<FPhysicsReplicationLODAsyncInput>
          (TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>
           *this,TArray<TUniquePtr<FPhysicsReplicationLODAsyncInput,TDefaultDelete<FPhysicsReplicationLODAsyncInput>_>,TSizedDefaultAllocator<32>_>
                 *param_1,
          TTransactionallySafeSpscQueue<FPhysicsReplicationLODAsyncInput_*,FMemory> *param_2)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  FPhysicsReplicationLODAsyncInput *pFVar6;
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
    puVar5 = ::operator_new(0x38);
    puVar8 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *(undefined1 *)(puVar5 + 2) = 0;
      *(undefined4 *)((longlong)puVar5 + 0x12) = 0;
      *(undefined2 *)((longlong)puVar5 + 0x16) = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *puVar5 = &___7FPhysicsReplicationLODAsyncInput__6B_;
      *(undefined1 *)((longlong)puVar5 + 0x11) = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
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
      pFVar6 = (FPhysicsReplicationLODAsyncInput *)(*pcVar3)();
      return pFVar6;
    }
    pFVar6 = *(FPhysicsReplicationLODAsyncInput **)
              ((param_1->AllocatorInstance).Data + (longlong)param_1->ArrayNum * 8 + -8);
  }
  else {
    pFVar6 = *(FPhysicsReplicationLODAsyncInput **)(pFVar2->Value).Pad;
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

// ~TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024> @ 1482dcb90

void __thiscall
Chaos::
TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024>::
~TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024>
          (TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory>::
  ~TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory>(&this->OutputQueue);
  DestructItems<TUniquePtr<FAsyncNetworkPhysicsComponentOutput,TDefaultDelete<FAsyncNetworkPhysicsComponentOutput>_>,int>
            ((TUniquePtr<FAsyncNetworkPhysicsComponentOutput,TDefaultDelete<FAsyncNetworkPhysicsComponentOutput>_>
              *)(this->OutputBacking).AllocatorInstance.Data,(this->OutputBacking).ArrayNum);
  pFVar1 = (this->OutputBacking).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory>::
  ~TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory>(&this->OutputPool);
  DestructItems<TUniquePtr<FAsyncNetworkPhysicsComponentInput,TDefaultDelete<FAsyncNetworkPhysicsComponentInput>_>,int>
            ((TUniquePtr<FAsyncNetworkPhysicsComponentInput,TDefaultDelete<FAsyncNetworkPhysicsComponentInput>_>
              *)(this->InputBacking).AllocatorInstance.Data,(this->InputBacking).ArrayNum);
  pFVar1 = (this->InputBacking).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentInput_*,FMemory>::
  ~TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentInput_*,FMemory>(&this->InputPool);
  return;
}

// ~TSimCallbackObject<FNetworkPhysicsSettingsAsyncInput,Chaos::FSimCallbackNoOutput,1> @ 1482dcc10

void __thiscall
Chaos::TSimCallbackObject<FNetworkPhysicsSettingsAsyncInput,Chaos::FSimCallbackNoOutput,1>::
~TSimCallbackObject<FNetworkPhysicsSettingsAsyncInput,Chaos::FSimCallbackNoOutput,1>
          (TSimCallbackObject<FNetworkPhysicsSettingsAsyncInput,Chaos::FSimCallbackNoOutput,1> *this
          )

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
  DestructItems<TUniquePtr<FNetworkPhysicsSettingsAsyncInput,TDefaultDelete<FNetworkPhysicsSettingsAsyncInput>_>,int>
            ((TUniquePtr<FNetworkPhysicsSettingsAsyncInput,TDefaultDelete<FNetworkPhysicsSettingsAsyncInput>_>
              *)(this->InputBacking).AllocatorInstance.Data,(this->InputBacking).ArrayNum);
  pFVar1 = (this->InputBacking).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TTransactionallySafeSpscQueue<FNetworkPhysicsSettingsAsyncInput_*,FMemory>::
  ~TTransactionallySafeSpscQueue<FNetworkPhysicsSettingsAsyncInput_*,FMemory>(&this->InputPool);
  return;
}

// ~TSimCallbackObject<FPhysicsReplicationAsyncInput,Chaos::FSimCallbackNoOutput,1025> @ 1482dcc90

void __thiscall
Chaos::TSimCallbackObject<FPhysicsReplicationAsyncInput,Chaos::FSimCallbackNoOutput,1025>::
~TSimCallbackObject<FPhysicsReplicationAsyncInput,Chaos::FSimCallbackNoOutput,1025>
          (TSimCallbackObject<FPhysicsReplicationAsyncInput,Chaos::FSimCallbackNoOutput,1025> *this)

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
  DestructItems<TUniquePtr<FPhysicsReplicationAsyncInput,TDefaultDelete<FPhysicsReplicationAsyncInput>_>,int>
            ((TUniquePtr<FPhysicsReplicationAsyncInput,TDefaultDelete<FPhysicsReplicationAsyncInput>_>
              *)(this->InputBacking).AllocatorInstance.Data,(this->InputBacking).ArrayNum);
  pFVar1 = (this->InputBacking).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TTransactionallySafeSpscQueue<FPhysicsReplicationAsyncInput_*,FMemory>::
  ~TTransactionallySafeSpscQueue<FPhysicsReplicationAsyncInput_*,FMemory>(&this->InputPool);
  return;
}

// ~TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409> @ 1482dcd10

void __thiscall
Chaos::
TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>::
~TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>
          (TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory>::
  ~TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory>(&this->OutputQueue);
  DestructItems<TUniquePtr<FPhysicsReplicationCacheAsyncOutput,TDefaultDelete<FPhysicsReplicationCacheAsyncOutput>_>,int>
            ((TUniquePtr<FPhysicsReplicationCacheAsyncOutput,TDefaultDelete<FPhysicsReplicationCacheAsyncOutput>_>
              *)(this->OutputBacking).AllocatorInstance.Data,(this->OutputBacking).ArrayNum);
  pFVar1 = (this->OutputBacking).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory>::
  ~TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory>(&this->OutputPool);
  DestructItems<TUniquePtr<FPhysicsReplicationCacheAsyncInput,TDefaultDelete<FPhysicsReplicationCacheAsyncInput>_>,int>
            ((TUniquePtr<FPhysicsReplicationCacheAsyncInput,TDefaultDelete<FPhysicsReplicationCacheAsyncInput>_>
              *)(this->InputBacking).AllocatorInstance.Data,(this->InputBacking).ArrayNum);
  pFVar1 = (this->InputBacking).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncInput_*,FMemory>::
  ~TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncInput_*,FMemory>(&this->InputPool);
  return;
}

// ~TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537> @ 1482dcd90

void __thiscall
Chaos::TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>::
~TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>
          (TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>
           *this)

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
  DestructItems<TUniquePtr<FPhysicsReplicationLODAsyncInput,TDefaultDelete<FPhysicsReplicationLODAsyncInput>_>,int>
            ((TUniquePtr<FPhysicsReplicationLODAsyncInput,TDefaultDelete<FPhysicsReplicationLODAsyncInput>_>
              *)(this->InputBacking).AllocatorInstance.Data,(this->InputBacking).ArrayNum);
  pFVar1 = (this->InputBacking).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TTransactionallySafeSpscQueue<FPhysicsReplicationLODAsyncInput_*,FMemory>::
  ~TTransactionallySafeSpscQueue<FPhysicsReplicationLODAsyncInput_*,FMemory>(&this->InputPool);
  return;
}

// AllocateInputData_External @ 1482e7610

FSimCallbackInput * __thiscall
Chaos::
TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024>::
AllocateInputData_External
          (TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024>
           *this)

{
  FAsyncNetworkPhysicsComponentInput *pFVar1;
  
  pFVar1 = NewDataHelper<FAsyncNetworkPhysicsComponentInput>
                     (this,&this->InputBacking,&this->InputPool);
  return (FSimCallbackInput *)pFVar1;
}

// AllocateInputData_External @ 1482e7630

FSimCallbackInput * __thiscall
Chaos::TSimCallbackObject<FNetworkPhysicsSettingsAsyncInput,Chaos::FSimCallbackNoOutput,1>::
AllocateInputData_External
          (TSimCallbackObject<FNetworkPhysicsSettingsAsyncInput,Chaos::FSimCallbackNoOutput,1> *this
          )

{
  FNetworkPhysicsSettingsAsyncInput *pFVar1;
  
  pFVar1 = NewDataHelper<FNetworkPhysicsSettingsAsyncInput>
                     (this,&this->InputBacking,&this->InputPool);
  return (FSimCallbackInput *)pFVar1;
}

// AllocateInputData_External @ 1482e7650

FSimCallbackInput * __thiscall
Chaos::TSimCallbackObject<FPhysicsReplicationAsyncInput,Chaos::FSimCallbackNoOutput,1025>::
AllocateInputData_External
          (TSimCallbackObject<FPhysicsReplicationAsyncInput,Chaos::FSimCallbackNoOutput,1025> *this)

{
  FPhysicsReplicationAsyncInput *pFVar1;
  
  pFVar1 = NewDataHelper<FPhysicsReplicationAsyncInput>(this,&this->InputBacking,&this->InputPool);
  return (FSimCallbackInput *)pFVar1;
}

// AllocateInputData_External @ 1482e7670

FSimCallbackInput * __thiscall
Chaos::
TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>::
AllocateInputData_External
          (TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>
           *this)

{
  FPhysicsReplicationCacheAsyncInput *pFVar1;
  
  pFVar1 = NewDataHelper<FPhysicsReplicationCacheAsyncInput>
                     (this,&this->InputBacking,&this->InputPool);
  return (FSimCallbackInput *)pFVar1;
}

// AllocateInputData_External @ 1482e7690

FSimCallbackInput * __thiscall
Chaos::TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>::
AllocateInputData_External
          (TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>
           *this)

{
  FPhysicsReplicationLODAsyncInput *pFVar1;
  
  pFVar1 = NewDataHelper<FPhysicsReplicationLODAsyncInput>
                     (this,&this->InputBacking,&this->InputPool);
  return (FSimCallbackInput *)pFVar1;
}

// FreeInputData_Internal @ 148304000

void __thiscall
Chaos::
TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024>::
FreeInputData_Internal
          (TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024>
           *this,FSimCallbackInput *param_1)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  code *pcVar3;
  bool bVar4;
  FNode *pFVar5;
  TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentInput_*,FMemory> *this_00;
  
  FAsyncNetworkPhysicsComponentInput::Reset((FAsyncNetworkPhysicsComponentInput *)param_1);
  this_00 = &this->InputPool;
  if ((this_00 == (TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentInput_*,FMemory> *)0x0
      ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
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

// FreeInputData_Internal @ 148304120

void __thiscall
Chaos::TSimCallbackObject<FNetworkPhysicsSettingsAsyncInput,Chaos::FSimCallbackNoOutput,1>::
FreeInputData_Internal
          (TSimCallbackObject<FNetworkPhysicsSettingsAsyncInput,Chaos::FSimCallbackNoOutput,1> *this
          ,FSimCallbackInput *param_1)

{
  int *piVar1;
  TTransactionallySafeSpscQueue<FNetworkPhysicsSettingsAsyncInput_*,FMemory> *this_00;
  atomic<unsigned_char> aVar2;
  int iVar3;
  longlong *plVar4;
  FNode *pFVar5;
  code *pcVar6;
  bool bVar7;
  FNode *pFVar8;
  
  if ((char)param_1[1].NumSteps != '\0') {
    *(undefined1 *)&param_1[1].NumSteps = 0;
  }
  if (param_1[2]._padding_ != -1) {
    plVar4 = *(longlong **)&param_1[2].NumSteps;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    param_1[2]._padding_ = -1;
    *(undefined8 *)&param_1[2].NumSteps = 0;
  }
  if ((char)param_1[0x17].NumSteps != '\0') {
    FNetworkPhysicsSettingsAsync::~FNetworkPhysicsSettingsAsync
              ((FNetworkPhysicsSettingsAsync *)(param_1 + 3));
    *(undefined1 *)&param_1[0x17].NumSteps = 0;
  }
  this_00 = &this->InputPool;
  if ((this_00 == (TTransactionallySafeSpscQueue<FNetworkPhysicsSettingsAsyncInput_*,FMemory> *)0x0)
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  LOCK();
  bVar7 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    UE::FMutex::LockSlow(&this_00->Mutex);
  }
  pFVar8 = (this->InputPool).First;
  if ((pFVar8 == (this->InputPool).TailCopy) &&
     (pFVar5 = (this->InputPool).Tail, (this->InputPool).TailCopy = pFVar5, pFVar8 == pFVar5)) {
    LOCK();
    aVar2 = (this_00->Mutex).State;
    (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this_00->Mutex);
    }
    pFVar8 = FMemory::Malloc(0x10,8);
    pFVar8->Next = (FNode *)0x0;
  }
  else {
    (this->InputPool).First = pFVar8->Next;
    pFVar8->Next = (FNode *)0x0;
    LOCK();
    aVar2 = (this_00->Mutex).State;
    (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this_00->Mutex);
    }
  }
  *(FSimCallbackInput **)(pFVar8->Value).Pad = param_1;
  LOCK();
  bVar7 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    UE::FMutex::LockSlow(&this_00->Mutex);
  }
  ((this->InputPool).Head)->Next = pFVar8;
  (this->InputPool).Head = pFVar8;
  LOCK();
  aVar2 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  return;
}

// FreeInputData_Internal @ 148304290

void __thiscall
Chaos::TSimCallbackObject<FPhysicsReplicationAsyncInput,Chaos::FSimCallbackNoOutput,1025>::
FreeInputData_Internal
          (TSimCallbackObject<FPhysicsReplicationAsyncInput,Chaos::FSimCallbackNoOutput,1025> *this,
          FSimCallbackInput *param_1)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  code *pcVar3;
  bool bVar4;
  FNode *pFVar5;
  TTransactionallySafeSpscQueue<FPhysicsReplicationAsyncInput_*,FMemory> *this_00;
  
  param_1[2].NumSteps = 0;
  if (*(int *)&param_1[2].field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,0x10,0,(ForAnyElementType *)(param_1 + 2),0,(int *)&param_1[2].field_0xc);
  }
  this_00 = &this->InputPool;
  if ((this_00 == (TTransactionallySafeSpscQueue<FPhysicsReplicationAsyncInput_*,FMemory> *)0x0) &&
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

// FreeInputData_Internal @ 1483043e0

void __thiscall
Chaos::
TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>::
FreeInputData_Internal
          (TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>
           *this,FSimCallbackInput *param_1)

{
  atomic<unsigned_char> aVar1;
  FNode *pFVar2;
  code *pcVar3;
  bool bVar4;
  FNode *pFVar5;
  TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncInput_*,FMemory> *this_00;
  
  param_1[1].NumSteps = 0;
  if (*(int *)&param_1[1].field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)(param_1 + 1),0,(int *)&param_1[1].field_0xc);
  }
  param_1[2].NumSteps = 0;
  if (*(int *)&param_1[2].field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)(param_1 + 2),0,(int *)&param_1[2].field_0xc);
  }
  this_00 = &this->InputPool;
  if ((this_00 == (TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncInput_*,FMemory> *)0x0
      ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
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

// FreeInputData_Internal @ 148304560

void __thiscall
Chaos::TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>::
FreeInputData_Internal
          (TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>
           *this,FSimCallbackInput *param_1)

{
  atomic<unsigned_char> aVar1;
  int iVar2;
  FNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNode *pFVar6;
  TTransactionallySafeSpscQueue<FPhysicsReplicationLODAsyncInput_*,FMemory> *this_00;
  
  if (*(char *)((longlong)&param_1[1]._padding_ + 1) != '\0') {
    *(undefined1 *)((longlong)&param_1[1]._padding_ + 1) = 0;
  }
  iVar2 = *(int *)((longlong)&param_1[2]._padding_ + 4);
  *(undefined4 *)&param_1[2]._padding_ = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&param_1[1].NumSteps,0,
               (int *)((longlong)&param_1[2]._padding_ + 4));
  }
  iVar2 = *(int *)((longlong)&param_1[3]._padding_ + 4);
  *(undefined4 *)&param_1[3]._padding_ = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&param_1[2].NumSteps,0,
               (int *)((longlong)&param_1[3]._padding_ + 4));
  }
  this_00 = &this->InputPool;
  if ((this_00 == (TTransactionallySafeSpscQueue<FPhysicsReplicationLODAsyncInput_*,FMemory> *)0x0)
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  bVar5 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(&this_00->Mutex);
  }
  pFVar6 = (this->InputPool).First;
  if ((pFVar6 == (this->InputPool).TailCopy) &&
     (pFVar3 = (this->InputPool).Tail, (this->InputPool).TailCopy = pFVar3, pFVar6 == pFVar3)) {
    LOCK();
    aVar1 = (this_00->Mutex).State;
    (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this_00->Mutex);
    }
    pFVar6 = FMemory::Malloc(0x10,8);
    pFVar6->Next = (FNode *)0x0;
  }
  else {
    (this->InputPool).First = pFVar6->Next;
    pFVar6->Next = (FNode *)0x0;
    LOCK();
    aVar1 = (this_00->Mutex).State;
    (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this_00->Mutex);
    }
  }
  *(FSimCallbackInput **)(pFVar6->Value).Pad = param_1;
  LOCK();
  bVar5 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(&this_00->Mutex);
  }
  ((this->InputPool).Head)->Next = pFVar6;
  (this->InputPool).Head = pFVar6;
  LOCK();
  aVar1 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  return;
}

// FreeOutputData_External @ 1483046e0

void __thiscall
Chaos::
TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024>::
FreeOutputData_External
          (TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024>
           *this,FSimCallbackOutput *param_1)

{
  int *piVar1;
  TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory> *this_00;
  atomic<unsigned_char> aVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FNode *pFVar6;
  
  if (*(char *)((longlong)&param_1[1].InternalTime + 2) != '\0') {
    *(undefined1 *)((longlong)&param_1[1].InternalTime + 2) = 0;
  }
  if ((longlong *)param_1[2].InternalTime != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2].InternalTime + 0x110))();
  }
  if ((longlong *)param_1[3].InternalTime != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3].InternalTime + 0x110))();
  }
  piVar1 = (int *)((longlong)&param_1[5].InternalTime + 4);
  if (*(int *)((longlong)&param_1[5].InternalTime + 4) < 0) {
    DestructItems<TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>,int>
              ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *)
               param_1[4].InternalTime,*(int *)&param_1[5].InternalTime);
    *(undefined4 *)&param_1[5].InternalTime = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(param_1 + 4),0,piVar1);
    }
  }
  else {
    DestructItems<TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>,int>
              ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *)
               param_1[4].InternalTime,*(int *)&param_1[5].InternalTime);
    *(undefined4 *)&param_1[5].InternalTime = 0;
  }
  piVar1 = (int *)((longlong)&param_1[7].InternalTime + 4);
  if (*(int *)((longlong)&param_1[7].InternalTime + 4) < 0) {
    DestructItems<TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>,int>
              ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *)
               param_1[6].InternalTime,*(int *)&param_1[7].InternalTime);
    iVar3 = *piVar1;
    *(undefined4 *)&param_1[7].InternalTime = 0;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(param_1 + 6),0,piVar1);
    }
  }
  else {
    DestructItems<TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>,int>
              ((TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *)
               param_1[6].InternalTime,*(int *)&param_1[7].InternalTime);
    *(undefined4 *)&param_1[7].InternalTime = 0;
  }
  this_00 = &this->OutputPool;
  pFVar6 = TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory>::AllocNode
                     (this_00);
  *(FSimCallbackOutput **)(pFVar6->Value).Pad = param_1;
  if ((this_00 ==
       (TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  bVar5 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(&this_00->Mutex);
  }
  ((this->OutputPool).Head)->Next = pFVar6;
  (this->OutputPool).Head = pFVar6;
  LOCK();
  aVar2 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  return;
}

// FreeOutputData_External @ 148304850

void __thiscall
Chaos::TSimCallbackObject<FNetworkPhysicsSettingsAsyncInput,Chaos::FSimCallbackNoOutput,1>::
FreeOutputData_External
          (TSimCallbackObject<FNetworkPhysicsSettingsAsyncInput,Chaos::FSimCallbackNoOutput,1> *this
          ,FSimCallbackOutput *param_1)

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

// FreeOutputData_External @ 1483048f0

void __thiscall
Chaos::TSimCallbackObject<FPhysicsReplicationAsyncInput,Chaos::FSimCallbackNoOutput,1025>::
FreeOutputData_External
          (TSimCallbackObject<FPhysicsReplicationAsyncInput,Chaos::FSimCallbackNoOutput,1025> *this,
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

// FreeOutputData_External @ 148304990

void __thiscall
Chaos::
TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>::
FreeOutputData_External
          (TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>
           *this,FSimCallbackOutput *param_1)

{
  TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory> *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  FNode *pFVar4;
  
  this_00 = &this->OutputPool;
  *(undefined4 *)&param_1[1].InternalTime = 0;
  pFVar4 = TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory>::AllocNode
                     (this_00);
  *(FSimCallbackOutput **)(pFVar4->Value).Pad = param_1;
  if ((this_00 ==
       (TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory> *)0x0) &&
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

// FreeOutputData_External @ 148304a40

void __thiscall
Chaos::TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>::
FreeOutputData_External
          (TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>
           *this,FSimCallbackOutput *param_1)

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

// OnFinalizeOutputData_Internal @ 148312f90

void __thiscall
Chaos::
TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024>::
OnFinalizeOutputData_Internal
          (TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024>
           *this,FSimCallbackOutput *param_1)

{
  TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory> *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  FNode *pFVar4;
  
  this_00 = &this->OutputQueue;
  pFVar4 = TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory>::AllocNode
                     (this_00);
  *(FSimCallbackOutput **)(pFVar4->Value).Pad = param_1;
  if ((this_00 ==
       (TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory> *)0x0) &&
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

// OnFinalizeOutputData_Internal @ 148313030

void __thiscall
Chaos::TSimCallbackObject<FNetworkPhysicsSettingsAsyncInput,Chaos::FSimCallbackNoOutput,1>::
OnFinalizeOutputData_Internal
          (TSimCallbackObject<FNetworkPhysicsSettingsAsyncInput,Chaos::FSimCallbackNoOutput,1> *this
          ,FSimCallbackOutput *param_1)

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

// OnFinalizeOutputData_Internal @ 1483130d0

void __thiscall
Chaos::TSimCallbackObject<FPhysicsReplicationAsyncInput,Chaos::FSimCallbackNoOutput,1025>::
OnFinalizeOutputData_Internal
          (TSimCallbackObject<FPhysicsReplicationAsyncInput,Chaos::FSimCallbackNoOutput,1025> *this,
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

// OnFinalizeOutputData_Internal @ 148313170

void __thiscall
Chaos::
TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>::
OnFinalizeOutputData_Internal
          (TSimCallbackObject<FPhysicsReplicationCacheAsyncInput,FPhysicsReplicationCacheAsyncOutput,17409>
           *this,FSimCallbackOutput *param_1)

{
  TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory> *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  FNode *pFVar4;
  
  this_00 = &this->OutputQueue;
  pFVar4 = TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory>::AllocNode
                     (this_00);
  *(FSimCallbackOutput **)(pFVar4->Value).Pad = param_1;
  if ((this_00 ==
       (TTransactionallySafeSpscQueue<FPhysicsReplicationCacheAsyncOutput_*,FMemory> *)0x0) &&
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

// OnFinalizeOutputData_Internal @ 148313210

void __thiscall
Chaos::TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>::
OnFinalizeOutputData_Internal
          (TSimCallbackObject<FPhysicsReplicationLODAsyncInput,Chaos::FSimCallbackNoOutput,1537>
           *this,FSimCallbackOutput *param_1)

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

