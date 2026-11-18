// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// HasAnyWork @ 14a41c860

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>
::HasAnyWork(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>
             *this,FEntityManager *param_1)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  FComponentMask *pFVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  
  uVar1 = *(ushort *)&this->Accessors;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x6;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x8;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar7 = 0;
  }
  else {
    bVar7 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0xe;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  uVar1 = *(ushort *)&(this->Accessors).field_0x10;
  pFVar4 = FEntityManager::GetAccumulatedMask(param_1);
  if (((uVar1 == 0xffff) || ((pFVar4->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(pFVar4->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  return (bool)(bVar3 & bVar7 & bVar5 & bVar6 & bVar2);
}

// PreLockComponentHeaders @ 14a4343e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TReadAccess<UE::MovieScene::FAccumulatedControlEntryIndex>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TOptionalReadAccess<FMovieSceneControlRigSpaceBaseKey>,UE::MovieScene::TOptionalReadAccess<bool>,UE::MovieScene::TOptionalReadAccess<unsigned_char>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>,UE::MovieScene::TReadAccess<UE::MovieScene::FAccumulatedControlEntryIndex>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TOptionalReadAccess<FMovieSceneControlRigSpaceBaseKey>,UE::MovieScene::TOptionalReadAccess<bool>,UE::MovieScene::TOptionalReadAccess<unsigned_char>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_f8;
  FEntityAllocationProxy local_e8;
  FEntityAllocationProxy local_d8;
  FEntityAllocationProxy local_c8;
  FEntityAllocationProxy local_b8;
  FEntityAllocationProxy local_a8;
  FEntityAllocationProxy local_98;
  FEntityAllocationProxy local_88;
  FEntityAllocationProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationProxy local_48;
  FEntityAllocationProxy local_38;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0xf,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,0xf);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 2;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_f8.Manager = param_1->Manager;
  local_f8.AllocationIndex = param_1->AllocationIndex;
  local_f8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_f8);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x6,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_f8);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x4) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 3;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_e8.Manager = param_1->Manager;
  local_e8.AllocationIndex = param_1->AllocationIndex;
  local_e8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_e8);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0xa,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_e8);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x8) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 4;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_d8.Manager = param_1->Manager;
  local_d8.AllocationIndex = param_1->AllocationIndex;
  local_d8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_d8);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0xe,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_d8);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0xc) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 5;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_c8.Manager = param_1->Manager;
  local_c8.AllocationIndex = param_1->AllocationIndex;
  local_c8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_c8);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x12,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_c8);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x10) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 6;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_b8.Manager = param_1->Manager;
  local_b8.AllocationIndex = param_1->AllocationIndex;
  local_b8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_b8);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x16,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_b8);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x14) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 7;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_a8.Manager = param_1->Manager;
  local_a8.AllocationIndex = param_1->AllocationIndex;
  local_a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_a8);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x1a,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_a8);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x18) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 8;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_98.Manager = param_1->Manager;
  local_98.AllocationIndex = param_1->AllocationIndex;
  local_98._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_98);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x1e,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_98);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x1c) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 9;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_88.Manager = param_1->Manager;
  local_88.AllocationIndex = param_1->AllocationIndex;
  local_88._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_88);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x22,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_88);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x20) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 10;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_78.Manager = param_1->Manager;
  local_78.AllocationIndex = param_1->AllocationIndex;
  local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_78);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x26,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_78);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x24) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 0xb;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_68.Manager = param_1->Manager;
  local_68.AllocationIndex = param_1->AllocationIndex;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_68);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x2a,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_68);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x28) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 0xc;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_58.Manager = param_1->Manager;
  local_58.AllocationIndex = param_1->AllocationIndex;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_58);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x2e,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_58);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x2c) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 0xd;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_48.Manager = param_1->Manager;
  local_48.AllocationIndex = param_1->AllocationIndex;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_48);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x32,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_48);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x30) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar11 = uVar11 + 0xe;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_38);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x36,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_38);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x34) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        return;
      }
    }
  }
  return;
}

// PreLockComponentHeaders @ 14a434f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FComponentMask *pFVar7;
  uint uVar8;
  FComponentHeader *pFVar9;
  uint uVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  FEntityAllocationProxy local_48;
  FEntityAllocationProxy local_38;
  
  uVar11 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,7,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,7);
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  uVar10 = uVar11 + 1;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_48.Manager = param_1->Manager;
  local_48.AllocationIndex = param_1->AllocationIndex;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_48);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0x4,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_48);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0x2) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 2;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x6,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 3;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x8,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar10 = uVar11 + 4;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar7 = FEntityAllocationProxy::GetAllocationType(&local_38);
  bVar4 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&(this->Accessors).field_0xc,pFVar7);
  if (bVar4) {
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_38);
    pFVar12 = pFVar6->ComponentHeaders;
    pFVar9 = pFVar12 + pFVar6->NumComponents;
    for (; pFVar12 != pFVar9; pFVar12 = pFVar12 + 1) {
      if ((pFVar12->ComponentType).Value == *(ushort *)&(this->Accessors).field_0xa) {
        TRelativePtr<void,unsigned_int>::Reset
                  ((TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4),
                   pFVar6->ComponentData,pFVar12->Components);
        break;
      }
    }
  }
  uVar10 = uVar11 + 5;
  uVar8 = 0;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0xe,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar10 * 4));
  uVar11 = uVar11 + 6;
  uVar8 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x10,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar11 * 4));
  return;
}

// PreLockComponentHeaders @ 14a435350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::TWriteAccess<FMovieSceneControlRigSpaceBaseKey>_>
::PreLockComponentHeaders
          (TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::TWriteAccess<FMovieSceneControlRigSpaceBaseKey>_>
           *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,3,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,3);
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)this,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  uVar8 = uVar9 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x2,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar9 = uVar9 + 2;
  uVar7 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FComponentAccess::PreLockComponentData
            ((FComponentAccess *)&(this->Accessors).field_0x4,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar9 * 4));
  return;
}

