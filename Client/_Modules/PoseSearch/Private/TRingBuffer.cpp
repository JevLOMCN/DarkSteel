// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 6

// DestructRange @ 14a8b27d0

void __thiscall
TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::DestructRange
          (TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_> *this,
          uint param_1,uint param_2)

{
  uint uVar1;
  FPoseHistoryEntry *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FPoseHistoryEntry *pFVar6;
  uint uVar7;
  
  uVar1 = this->IndexMask;
  uVar7 = param_2 - param_1;
  if (uVar1 + 1 < uVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x37f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar7 != 0) {
    pFVar2 = (FPoseHistoryEntry *)(this->AllocatorInstance).Data;
    uVar5 = uVar1 & param_1;
    pFVar6 = pFVar2 + uVar5;
    if ((uVar1 & param_2) <= uVar5) {
      DestructItems<UE::PoseSearch::FPoseHistoryEntry,unsigned_int>(pFVar6,(uVar1 + 1) - uVar5);
      pFVar6 = pFVar2;
      uVar7 = uVar1 & param_2;
    }
    DestructItems<UE::PoseSearch::FPoseHistoryEntry,unsigned_int>(pFVar6,uVar7);
  }
  return;
}

// NormalizeCapacity @ 14a8c1c60

uint __thiscall
TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::NormalizeCapacity
          (TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_> *this,
          uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = 1;
  if (param_1 != 0) {
    uVar5 = param_1;
  }
  uVar1 = (ulonglong)(uVar5 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar5 = (uint)(param_1 != 0) << ((byte)lVar2 & 0x1f);
  if (0x7fffffff < uVar5 || uVar5 < param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x39f,L"Integer overflow in TRingBuffer capacity");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  return uVar5;
}

// Reallocate @ 14a8c3b80

void __thiscall
TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::Reallocate
          (TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_> *this,
          uint param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ForAnyElementType local_res8;
  
  uVar12 = this->IndexMask + 1;
  uVar11 = this->AfterBack - this->Front;
  pFVar6 = (this->AllocatorInstance).Data;
  uVar4 = NormalizeCapacity(this,param_1);
  if ((uVar4 != param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NormalizeCapacity(NewCapacity) == NewCapacity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x327,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1 < uVar11) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewCapacity >= SrcNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x328,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1 == 0) || (uVar11 == 0)) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&this->AllocatorInstance,0,param_1,0x48,8);
  }
  else {
    local_res8.Data = (FScriptContainerElement *)0x0;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&local_res8,0,param_1,0x48,8);
    FVar2.Data = local_res8.Data;
    uVar10 = this->IndexMask & this->Front;
    uVar4 = this->IndexMask & this->AfterBack;
    if (uVar10 < uVar4) {
      uVar9 = (ulonglong)(uVar4 - uVar10);
      uVar7 = 0;
      pFVar6 = pFVar6 + (ulonglong)uVar10 * 0x48 + 0x1c;
      do {
        *(undefined8 *)(local_res8.Data + uVar7 * 0x48) = 0;
        *(undefined8 *)(local_res8.Data + uVar7 * 0x48) = *(undefined8 *)(pFVar6 + -0x1c);
        *(undefined8 *)(pFVar6 + -0x1c) = 0;
        *(undefined4 *)(local_res8.Data + uVar7 * 0x48 + 8) = *(undefined4 *)(pFVar6 + -0x14);
        *(undefined4 *)(local_res8.Data + uVar7 * 0x48 + 0xc) = *(undefined4 *)(pFVar6 + -0x10);
        *(undefined8 *)(pFVar6 + -0x14) = 0;
        *(undefined8 *)(local_res8.Data + uVar7 * 0x48 + 0x10) = 0;
        *(undefined8 *)(local_res8.Data + uVar7 * 0x48 + 0x10) = *(undefined8 *)(pFVar6 + -0xc);
        *(undefined8 *)(pFVar6 + -0xc) = 0;
        *(undefined4 *)(local_res8.Data + uVar7 * 0x48 + 0x18) = *(undefined4 *)(pFVar6 + -4);
        *(undefined4 *)(local_res8.Data + uVar7 * 0x48 + 0x1c) = *(undefined4 *)pFVar6;
        *(undefined8 *)(pFVar6 + -4) = 0;
        *(undefined8 *)(local_res8.Data + uVar7 * 0x48 + 0x20) = 0;
        *(undefined8 *)(local_res8.Data + uVar7 * 0x48 + 0x20) = *(undefined8 *)(pFVar6 + 4);
        *(undefined8 *)(pFVar6 + 4) = 0;
        *(undefined4 *)(local_res8.Data + uVar7 * 0x48 + 0x28) = *(undefined4 *)(pFVar6 + 0xc);
        *(undefined4 *)(local_res8.Data + uVar7 * 0x48 + 0x2c) = *(undefined4 *)(pFVar6 + 0x10);
        *(undefined8 *)(pFVar6 + 0xc) = 0;
        *(undefined8 *)(local_res8.Data + uVar7 * 0x48 + 0x30) = 0;
        *(undefined8 *)(local_res8.Data + uVar7 * 0x48 + 0x30) = *(undefined8 *)(pFVar6 + 0x14);
        *(undefined8 *)(pFVar6 + 0x14) = 0;
        *(undefined4 *)(local_res8.Data + uVar7 * 0x48 + 0x38) = *(undefined4 *)(pFVar6 + 0x1c);
        *(undefined4 *)(local_res8.Data + uVar7 * 0x48 + 0x3c) = *(undefined4 *)(pFVar6 + 0x20);
        *(undefined8 *)(pFVar6 + 0x1c) = 0;
        *(undefined4 *)(local_res8.Data + uVar7 * 0x48 + 0x40) = *(undefined4 *)(pFVar6 + 0x24);
        uVar9 = uVar9 - 1;
        uVar7 = (ulonglong)((int)uVar7 + 1);
        pFVar6 = pFVar6 + 0x48;
      } while (uVar9 != 0);
    }
    else {
      uVar7 = 0;
      if (uVar10 < uVar12) {
        uVar8 = (ulonglong)(uVar12 - uVar10);
        pFVar5 = pFVar6 + (ulonglong)uVar10 * 0x48 + 0x1c;
        uVar9 = uVar7;
        do {
          uVar7 = (ulonglong)((int)uVar9 + 1);
          *(undefined8 *)(local_res8.Data + uVar9 * 0x48) = 0;
          *(undefined8 *)(local_res8.Data + uVar9 * 0x48) = *(undefined8 *)(pFVar5 + -0x1c);
          *(undefined8 *)(pFVar5 + -0x1c) = 0;
          *(undefined4 *)(local_res8.Data + uVar9 * 0x48 + 8) = *(undefined4 *)(pFVar5 + -0x14);
          *(undefined4 *)(local_res8.Data + uVar9 * 0x48 + 0xc) = *(undefined4 *)(pFVar5 + -0x10);
          *(undefined8 *)(pFVar5 + -0x14) = 0;
          *(undefined8 *)(local_res8.Data + uVar9 * 0x48 + 0x10) = 0;
          *(undefined8 *)(local_res8.Data + uVar9 * 0x48 + 0x10) = *(undefined8 *)(pFVar5 + -0xc);
          *(undefined8 *)(pFVar5 + -0xc) = 0;
          *(undefined4 *)(local_res8.Data + uVar9 * 0x48 + 0x18) = *(undefined4 *)(pFVar5 + -4);
          *(undefined4 *)(local_res8.Data + uVar9 * 0x48 + 0x1c) = *(undefined4 *)pFVar5;
          *(undefined8 *)(pFVar5 + -4) = 0;
          *(undefined8 *)(local_res8.Data + uVar9 * 0x48 + 0x20) = 0;
          *(undefined8 *)(local_res8.Data + uVar9 * 0x48 + 0x20) = *(undefined8 *)(pFVar5 + 4);
          *(undefined8 *)(pFVar5 + 4) = 0;
          *(undefined4 *)(local_res8.Data + uVar9 * 0x48 + 0x28) = *(undefined4 *)(pFVar5 + 0xc);
          *(undefined4 *)(local_res8.Data + uVar9 * 0x48 + 0x2c) = *(undefined4 *)(pFVar5 + 0x10);
          *(undefined8 *)(pFVar5 + 0xc) = 0;
          *(undefined8 *)(local_res8.Data + uVar9 * 0x48 + 0x30) = 0;
          *(undefined8 *)(local_res8.Data + uVar9 * 0x48 + 0x30) = *(undefined8 *)(pFVar5 + 0x14);
          *(undefined8 *)(pFVar5 + 0x14) = 0;
          *(undefined4 *)(local_res8.Data + uVar9 * 0x48 + 0x38) = *(undefined4 *)(pFVar5 + 0x1c);
          *(undefined4 *)(local_res8.Data + uVar9 * 0x48 + 0x3c) = *(undefined4 *)(pFVar5 + 0x20);
          *(undefined8 *)(pFVar5 + 0x1c) = 0;
          *(undefined4 *)(local_res8.Data + uVar9 * 0x48 + 0x40) = *(undefined4 *)(pFVar5 + 0x24);
          uVar8 = uVar8 - 1;
          pFVar5 = pFVar5 + 0x48;
          uVar9 = uVar7;
        } while (uVar8 != 0);
      }
      DestructRange(this,uVar10,uVar12);
      uVar10 = 0;
      if (uVar4 != 0) {
        uVar9 = (ulonglong)uVar4;
        pFVar6 = pFVar6 + 0x1c;
        do {
          *(undefined8 *)(FVar2.Data + uVar7 * 0x48) = 0;
          *(undefined8 *)(FVar2.Data + uVar7 * 0x48) = *(undefined8 *)(pFVar6 + -0x1c);
          *(undefined8 *)(pFVar6 + -0x1c) = 0;
          *(undefined4 *)(FVar2.Data + uVar7 * 0x48 + 8) = *(undefined4 *)(pFVar6 + -0x14);
          *(undefined4 *)(FVar2.Data + uVar7 * 0x48 + 0xc) = *(undefined4 *)(pFVar6 + -0x10);
          *(undefined8 *)(pFVar6 + -0x14) = 0;
          *(undefined8 *)(FVar2.Data + uVar7 * 0x48 + 0x10) = 0;
          *(undefined8 *)(FVar2.Data + uVar7 * 0x48 + 0x10) = *(undefined8 *)(pFVar6 + -0xc);
          *(undefined8 *)(pFVar6 + -0xc) = 0;
          *(undefined4 *)(FVar2.Data + uVar7 * 0x48 + 0x18) = *(undefined4 *)(pFVar6 + -4);
          *(undefined4 *)(FVar2.Data + uVar7 * 0x48 + 0x1c) = *(undefined4 *)pFVar6;
          *(undefined8 *)(pFVar6 + -4) = 0;
          *(undefined8 *)(FVar2.Data + uVar7 * 0x48 + 0x20) = 0;
          *(undefined8 *)(FVar2.Data + uVar7 * 0x48 + 0x20) = *(undefined8 *)(pFVar6 + 4);
          *(undefined8 *)(pFVar6 + 4) = 0;
          *(undefined4 *)(FVar2.Data + uVar7 * 0x48 + 0x28) = *(undefined4 *)(pFVar6 + 0xc);
          *(undefined4 *)(FVar2.Data + uVar7 * 0x48 + 0x2c) = *(undefined4 *)(pFVar6 + 0x10);
          *(undefined8 *)(pFVar6 + 0xc) = 0;
          *(undefined8 *)(FVar2.Data + uVar7 * 0x48 + 0x30) = 0;
          *(undefined8 *)(FVar2.Data + uVar7 * 0x48 + 0x30) = *(undefined8 *)(pFVar6 + 0x14);
          *(undefined8 *)(pFVar6 + 0x14) = 0;
          *(undefined4 *)(FVar2.Data + uVar7 * 0x48 + 0x38) = *(undefined4 *)(pFVar6 + 0x1c);
          *(undefined4 *)(FVar2.Data + uVar7 * 0x48 + 0x3c) = *(undefined4 *)(pFVar6 + 0x20);
          *(undefined8 *)(pFVar6 + 0x1c) = 0;
          *(undefined4 *)(FVar2.Data + uVar7 * 0x48 + 0x40) = *(undefined4 *)(pFVar6 + 0x24);
          uVar9 = uVar9 - 1;
          pFVar6 = pFVar6 + 0x48;
          uVar7 = (ulonglong)((int)uVar7 + 1);
        } while (uVar9 != 0);
      }
    }
    DestructRange(this,uVar10,uVar4);
    pFVar6 = (this->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (this->AllocatorInstance).Data = local_res8.Data;
  }
  this->Front = 0;
  this->IndexMask = param_1 - 1;
  this->AfterBack = uVar11;
  return;
}

// Emplace<UE::PoseSearch::FPoseHistoryEntry> @ 14a8d87a0

int __thiscall
TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::
Emplace<UE::PoseSearch::FPoseHistoryEntry>
          (TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_> *this,
          FPoseHistoryEntry *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar3) {
    Reallocate(this,uVar3);
  }
  uVar3 = this->AfterBack;
  uVar1 = this->Front;
  uVar4 = (ulonglong)(this->IndexMask & uVar3);
  pFVar2 = (this->AllocatorInstance).Data;
  this->AfterBack = uVar3 + 1;
  *(undefined8 *)(pFVar2 + uVar4 * 0x48) = 0;
  *(FScriptContainerElement **)(pFVar2 + uVar4 * 0x48) =
       (param_1->ComponentSpaceRotations).AllocatorInstance.Data;
  (param_1->ComponentSpaceRotations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + uVar4 * 0x48 + 8) = (param_1->ComponentSpaceRotations).ArrayNum;
  *(int *)(pFVar2 + uVar4 * 0x48 + 0xc) = (param_1->ComponentSpaceRotations).ArrayMax;
  (param_1->ComponentSpaceRotations).ArrayNum = 0;
  (param_1->ComponentSpaceRotations).ArrayMax = 0;
  *(undefined8 *)(pFVar2 + uVar4 * 0x48 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar2 + uVar4 * 0x48 + 0x10) =
       (param_1->ComponentSpacePositions).AllocatorInstance.Data;
  (param_1->ComponentSpacePositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + uVar4 * 0x48 + 0x18) = (param_1->ComponentSpacePositions).ArrayNum;
  *(int *)(pFVar2 + uVar4 * 0x48 + 0x1c) = (param_1->ComponentSpacePositions).ArrayMax;
  (param_1->ComponentSpacePositions).ArrayNum = 0;
  (param_1->ComponentSpacePositions).ArrayMax = 0;
  *(undefined8 *)(pFVar2 + uVar4 * 0x48 + 0x20) = 0;
  *(FScriptContainerElement **)(pFVar2 + uVar4 * 0x48 + 0x20) =
       (param_1->ComponentSpaceScales).AllocatorInstance.Data;
  (param_1->ComponentSpaceScales).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + uVar4 * 0x48 + 0x28) = (param_1->ComponentSpaceScales).ArrayNum;
  *(int *)(pFVar2 + uVar4 * 0x48 + 0x2c) = (param_1->ComponentSpaceScales).ArrayMax;
  (param_1->ComponentSpaceScales).ArrayNum = 0;
  (param_1->ComponentSpaceScales).ArrayMax = 0;
  *(undefined8 *)(pFVar2 + uVar4 * 0x48 + 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + uVar4 * 0x48 + 0x30) =
       (param_1->CurveValues).AllocatorInstance.Data;
  (param_1->CurveValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + uVar4 * 0x48 + 0x38) = (param_1->CurveValues).ArrayNum;
  *(int *)(pFVar2 + uVar4 * 0x48 + 0x3c) = (param_1->CurveValues).ArrayMax;
  (param_1->CurveValues).ArrayNum = 0;
  (param_1->CurveValues).ArrayMax = 0;
  *(float *)(pFVar2 + uVar4 * 0x48 + 0x40) = param_1->AccumulatedSeconds;
  return uVar3 - uVar1;
}

// operator[] @ 14a8e4f60

FPoseHistoryEntry * __thiscall
TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::operator[]
          (TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPoseHistoryEntry *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (int)(this->AfterBack - this->Front)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPoseHistoryEntry *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPoseHistoryEntry *)
         ((this->AllocatorInstance).Data +
         (ulonglong)(this->Front + param_1 & this->IndexMask) * 0x48);
}

// operator[] @ 14a8e4fe0

FPoseHistoryEntry * __thiscall
TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::operator[]
          (TRingBuffer<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPoseHistoryEntry *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (int)(this->AfterBack - this->Front)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPoseHistoryEntry *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPoseHistoryEntry *)
         ((this->AllocatorInstance).Data +
         (ulonglong)(this->Front + param_1 & this->IndexMask) * 0x48);
}

