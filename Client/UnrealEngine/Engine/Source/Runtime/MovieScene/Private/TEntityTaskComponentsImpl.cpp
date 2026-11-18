// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// HasAnyWork @ 14613d7e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  FComponentMask *pFVar4;
  byte bVar5;
  byte bVar6;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x4;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x6;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  return (bool)(bVar3 & bVar6 & bVar5 & bVar2);
}

// HasAnyWork @ 14613d910

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar4);
}

// HasAnyWork @ 14613d9d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  FComponentMask *pFVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x2;
  pFVar3 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  return (bool)(bVar2 & bVar4);
}

// PreLockComponentHeaders @ 146149e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,4,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4,4);
  uVar5 = 0;
  if ((int)uVar7 < *piVar1) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,
             *(FEntityAllocation **)
              (*(longlong *)&param_1->Manager->EntityAllocations +
              (longlong)param_1->AllocationIndex * 8),
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar7 * 4));
  uVar6 = uVar7 + 1;
  uVar5 = 0;
  if ((int)uVar6 < *piVar1) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,
             *(FEntityAllocation **)
              (*(longlong *)&param_1->Manager->EntityAllocations +
              (longlong)param_1->AllocationIndex * 8),
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 4));
  uVar6 = uVar7 + 2;
  uVar5 = 0;
  if ((int)uVar6 < *piVar1) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x4,
             *(FEntityAllocation **)
              (*(longlong *)&param_1->Manager->EntityAllocations +
              (longlong)param_1->AllocationIndex * 8),
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 4));
  uVar7 = uVar7 + 3;
  uVar5 = 0;
  if ((int)uVar7 < *piVar1) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x6,
             *(FEntityAllocation **)
              (*(longlong *)&param_1->Manager->EntityAllocations +
              (longlong)param_1->AllocationIndex * 8),
             (TRelativePtr<void,unsigned_int> *)
             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar7 * 4));
  return;
}

