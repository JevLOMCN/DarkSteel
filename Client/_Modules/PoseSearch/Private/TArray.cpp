// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 41

// AddUniqueImpl<int_const_&> @ 14a89fc20

int __thiscall
TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_>::AddUniqueImpl<int_const_&>
          (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *this,int *param_1)

{
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *pTVar1;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *pTVar6;
  TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *pTVar7;
  
  pTVar2 = (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
           (this->AllocatorInstance).SecondaryData.Data;
  pTVar7 = this;
  if (pTVar2 != (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar7 = pTVar2;
  }
  pTVar1 = (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
           ((pTVar7->AllocatorInstance).InlineData + (longlong)this->ArrayNum * 4);
  if (pTVar7 != pTVar1) {
    pTVar6 = pTVar7;
    do {
      if (*(int *)(pTVar6->AllocatorInstance).InlineData == *param_1) {
        iVar5 = (int)((longlong)pTVar6 - (longlong)pTVar7 >> 2);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pTVar6 = (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
               ((pTVar6->AllocatorInstance).InlineData + 4);
    } while (pTVar6 != pTVar1);
  }
  pTVar7 = this;
  if (pTVar2 != (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar7 = pTVar2;
  }
  if (pTVar7 <= param_1) {
    pTVar7 = this;
    if (pTVar2 != (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)0x0) {
      pTVar7 = pTVar2;
    }
    if ((param_1 < (pTVar7->AllocatorInstance).InlineData + (longlong)this->ArrayMax * 4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>::ForElementType<int>_>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  pTVar2 = (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)
           (this->AllocatorInstance).SecondaryData.Data;
  if (pTVar2 != (TArray<int,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>_> *)0x0) {
    this = pTVar2;
  }
  *(int *)((this->AllocatorInstance).InlineData + (longlong)iVar5 * 4) = *param_1;
  return iVar5;
}

// AddUniqueImpl<TObjectPtr<UPoseSearchDatabase_const_>_> @ 14a89fd40

int __thiscall
TArray<TObjectPtr<UPoseSearchDatabase_const_>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TObjectPtr<UPoseSearchDatabase_const_>_>
          (TArray<TObjectPtr<UPoseSearchDatabase_const_>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UPoseSearchDatabase_const_> *param_1)

{
  FScriptContainerElement *pFVar1;
  UPoseSearchDatabase *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(UPoseSearchDatabase **)pFVar6 == (param_1->field0_0x0).DebugPtr) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  *(UPoseSearchDatabase **)(pFVar1 + (longlong)iVar5 * 8) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UPoseSearchDatabase *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return iVar5;
}

// HeapPop<UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidateHeapCompare> @ 14a8a60f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::PoseSearch::FSearchContext::FPoseCandidate,TSizedDefaultAllocator<32>_>::
HeapPop<UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidateHeapCompare>
          (TArray<UE::PoseSearch::FSearchContext::FPoseCandidate,TSizedDefaultAllocator<32>_> *this,
          FPoseCandidate *param_1,FPoseCandidateHeapCompare *param_2,EAllowShrinking param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar9 = 0;
  if ((this->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->AllocatorInstance).Data;
  uVar1 = *(undefined8 *)pFVar3;
  param_1->PoseIdx = (int)uVar1;
  param_1->Cost = (FPoseSearchCost)(int)((ulonglong)uVar1 >> 0x20);
  param_1->PoseCandidateFlags = *(EPoseCandidateFlags *)(pFVar3 + 8);
  if ((this->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->AllocatorInstance).Data;
  iVar11 = this->ArrayNum + -1;
  if (1 < iVar11) {
    iVar11 = 1;
  }
  if (iVar11 != 0) {
    memmove(pFVar3,pFVar3 + (longlong)(this->ArrayNum - iVar11) * 0xc,(longlong)iVar11 * 0xc);
  }
  iVar11 = this->ArrayNum + -1;
  this->ArrayNum = iVar11;
  if (param_3 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,&this->AllocatorInstance,iVar11,&this->ArrayMax);
  }
  iVar11 = this->ArrayNum;
  pFVar3 = (this->AllocatorInstance).Data;
  if (1 < iVar11) {
    do {
      iVar5 = iVar9 * 2;
      iVar10 = iVar5 + 1;
      if (iVar5 + 2 < iVar11) {
        if (*(float *)(pFVar3 + (longlong)iVar5 * 0xc + 0x1c) <=
            *(float *)(pFVar3 + (longlong)iVar10 * 0xc + 4) &&
            *(float *)(pFVar3 + (longlong)iVar10 * 0xc + 4) !=
            *(float *)(pFVar3 + (longlong)iVar5 * 0xc + 0x1c)) {
          iVar10 = iVar5;
        }
        iVar10 = iVar10 + 1;
      }
      lVar7 = (longlong)iVar10;
      lVar8 = (longlong)iVar9;
      if (*(float *)(pFVar3 + lVar7 * 0xc + 4) <= *(float *)(pFVar3 + lVar8 * 0xc + 4)) {
        return;
      }
      uVar1 = *(undefined8 *)(pFVar3 + lVar8 * 0xc);
      uVar2 = *(undefined4 *)(pFVar3 + lVar8 * 0xc + 8);
      *(undefined8 *)(pFVar3 + lVar8 * 0xc) = *(undefined8 *)(pFVar3 + lVar7 * 0xc);
      *(undefined4 *)(pFVar3 + lVar8 * 0xc + 8) = *(undefined4 *)(pFVar3 + lVar7 * 0xc + 8);
      *(undefined8 *)(pFVar3 + lVar7 * 0xc) = uVar1;
      *(undefined4 *)(pFVar3 + lVar7 * 0xc + 8) = uVar2;
      iVar9 = iVar10;
    } while (iVar10 * 2 + 1 < iVar11);
  }
  return;
}

// HeapPop<UE::PoseSearch::FVPTreeResultSet::HeapCompare> @ 14a8a62c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::PoseSearch::FIndexDistance,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
HeapPop<UE::PoseSearch::FVPTreeResultSet::HeapCompare>
          (TArray<UE::PoseSearch::FIndexDistance,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
           *this,FIndexDistance *param_1,HeapCompare *param_2,EAllowShrinking param_3)

{
  ForElementType<UE::PoseSearch::FIndexDistance> FVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  ForElementType<UE::PoseSearch::FIndexDistance> FVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  
  if ((this->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<UE::PoseSearch::FIndexDistance>)this;
  if (FVar1 != (ForElementType<UE::PoseSearch::FIndexDistance>)0x0) {
    FVar6 = FVar1;
  }
  *param_1 = *(FIndexDistance *)FVar6;
  if ((this->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<UE::PoseSearch::FIndexDistance>)this;
  if (FVar1 != (ForElementType<UE::PoseSearch::FIndexDistance>)0x0) {
    FVar6 = FVar1;
  }
  iVar10 = this->ArrayNum + -1;
  if (1 < iVar10) {
    iVar10 = 1;
  }
  if (iVar10 != 0) {
    memmove((void *)FVar6,(void *)((longlong)FVar6 + (longlong)(this->ArrayNum - iVar10) * 8),
            (longlong)iVar10 << 3);
  }
  iVar10 = this->ArrayNum + -1;
  this->ArrayNum = iVar10;
  if (param_3 == Default) {
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PoseSearch::FIndexDistance>_>
              (8,4,&this->AllocatorInstance,iVar10,&this->ArrayMax);
  }
  FVar1 = (this->AllocatorInstance).SecondaryData;
  iVar10 = this->ArrayNum;
  if (FVar1 != (ForElementType<UE::PoseSearch::FIndexDistance>)0x0) {
    this = (TArray<UE::PoseSearch::FIndexDistance,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  iVar8 = 0;
  if (1 < iVar10) {
    do {
      iVar4 = iVar8 * 2;
      iVar7 = iVar4 + 1;
      if (iVar4 + 2 < iVar10) {
        if (*(float *)((uchar *)((longlong)this + 0x14) + (longlong)iVar4 * 8) <=
            *(float *)((uchar *)((longlong)this + 4) + (longlong)iVar7 * 8) &&
            *(float *)((uchar *)((longlong)this + 4) + (longlong)iVar7 * 8) !=
            *(float *)((uchar *)((longlong)this + 0x14) + (longlong)iVar4 * 8)) {
          iVar7 = iVar4;
        }
        iVar7 = iVar7 + 1;
      }
      lVar11 = (longlong)iVar8;
      lVar9 = (longlong)iVar7;
      if (*(float *)((uchar *)((longlong)this + 4) + lVar9 * 8) <=
          *(float *)((uchar *)((longlong)this + 4) + lVar11 * 8)) {
        return;
      }
      uVar2 = *(undefined8 *)((longlong)this + lVar11 * 8);
      *(undefined8 *)((longlong)this + lVar11 * 8) = *(undefined8 *)((longlong)this + lVar9 * 8);
      *(undefined8 *)((longlong)this + lVar9 * 8) = uVar2;
      iVar8 = iVar7;
    } while (iVar7 * 2 + 1 < iVar10);
  }
  return;
}

// HeapPush<UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidateHeapCompare> @ 14a8a6480

int __thiscall
TArray<UE::PoseSearch::FSearchContext::FPoseCandidate,TSizedDefaultAllocator<32>_>::
HeapPush<UE::PoseSearch::FSearchContext::FBestPoseCandidates::FPoseCandidateHeapCompare>
          (TArray<UE::PoseSearch::FSearchContext::FPoseCandidate,TSizedDefaultAllocator<32>_> *this,
          FPoseCandidate *param_1,FPoseCandidateHeapCompare *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  FPoseCandidate *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  pFVar3 = (FPoseCandidate *)(this->AllocatorInstance).Data;
  if (((pFVar3 <= param_1) && (param_1 < pFVar3 + this->ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  iVar7 = this->ArrayNum;
  if (iVar7 == this->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar7 + 1;
  pFVar4 = (this->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0xc) = *(undefined8 *)param_1;
  *(EPoseCandidateFlags *)(pFVar4 + (longlong)iVar7 * 0xc + 8) = param_1->PoseCandidateFlags;
  pFVar4 = (this->AllocatorInstance).Data;
  iVar7 = this->ArrayNum + -1;
  while( true ) {
    if (iVar7 < 1) {
      return iVar7;
    }
    lVar9 = (longlong)iVar7;
    iVar8 = (iVar7 + -1) / 2;
    lVar10 = (longlong)iVar8;
    if (*(float *)(pFVar4 + lVar9 * 0xc + 4) <= *(float *)(pFVar4 + lVar10 * 0xc + 4)) break;
    uVar1 = *(undefined8 *)(pFVar4 + lVar9 * 0xc);
    uVar2 = *(undefined4 *)(pFVar4 + lVar9 * 0xc + 8);
    *(undefined8 *)(pFVar4 + lVar9 * 0xc) = *(undefined8 *)(pFVar4 + lVar10 * 0xc);
    *(undefined4 *)(pFVar4 + lVar9 * 0xc + 8) = *(undefined4 *)(pFVar4 + lVar10 * 0xc + 8);
    *(undefined8 *)(pFVar4 + lVar10 * 0xc) = uVar1;
    *(undefined4 *)(pFVar4 + lVar10 * 0xc + 8) = uVar2;
    iVar7 = iVar8;
  }
  return iVar7;
}

// HeapPush<UE::PoseSearch::FVPTreeResultSet::HeapCompare> @ 14a8a65b0

int __thiscall
TArray<UE::PoseSearch::FIndexDistance,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::
HeapPush<UE::PoseSearch::FVPTreeResultSet::HeapCompare>
          (TArray<UE::PoseSearch::FIndexDistance,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
           *this,FIndexDistance *param_1,HeapCompare *param_2)

{
  ForElementType<UE::PoseSearch::FIndexDistance> FVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<UE::PoseSearch::FIndexDistance> FVar7;
  longlong lVar8;
  longlong lVar9;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<UE::PoseSearch::FIndexDistance>)this;
  if (FVar1 != (ForElementType<UE::PoseSearch::FIndexDistance>)0x0) {
    FVar7 = FVar1;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<UE::PoseSearch::FIndexDistance>)this;
    if (FVar1 != (ForElementType<UE::PoseSearch::FIndexDistance>)0x0) {
      FVar7 = FVar1;
    }
    if ((param_1 < (FIndexDistance *)((longlong)FVar7 + (longlong)this->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PoseSearch::FIndexDistance>_>
                      (0x408,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<UE::PoseSearch::FIndexDistance>)this;
  if (FVar1 != (ForElementType<UE::PoseSearch::FIndexDistance>)0x0) {
    FVar7 = FVar1;
  }
  *(FIndexDistance *)((longlong)FVar7 + (longlong)iVar5 * 8) = *param_1;
  FVar1 = (this->AllocatorInstance).SecondaryData;
  iVar5 = this->ArrayNum + -1;
  if (FVar1 != (ForElementType<UE::PoseSearch::FIndexDistance>)0x0) {
    this = (TArray<UE::PoseSearch::FIndexDistance,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  if (0 < iVar5) {
    while( true ) {
      lVar8 = (longlong)iVar5;
      iVar6 = (iVar5 + -1) / 2;
      lVar9 = (longlong)iVar6;
      if (*(float *)((uchar *)((longlong)this + 4) + lVar8 * 8) <=
          *(float *)((uchar *)((longlong)this + 4) + lVar9 * 8)) break;
      uVar2 = *(undefined8 *)((longlong)this + lVar8 * 8);
      *(undefined8 *)((longlong)this + lVar8 * 8) = *(undefined8 *)((longlong)this + lVar9 * 8);
      *(undefined8 *)((longlong)this + lVar9 * 8) = uVar2;
      iVar5 = iVar6;
      if (iVar6 < 1) {
        return iVar6;
      }
    }
  }
  return iVar5;
}

// operator= @ 14a8ae1a0

TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_> *this,
          TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FPoseSearchInteractionAvailability *pFVar3;
  
  if (this != param_1) {
    DestructItems<FPoseSearchInteractionAvailability,int>
              ((FPoseSearchInteractionAvailability *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FPoseSearchInteractionAvailability *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FPoseSearchInteractionAvailability,FPoseSearchInteractionAvailability,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// SetNumZeroed @ 14a8cd6c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<float,TMemStackAllocator<16>_>::SetNumZeroed
          (TArray<float,TMemStackAllocator<16>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  float *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<0,TMemStackAllocator<16>::ForElementType<float>_>
                      (4,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + iVar4,0,(longlong)(param_1 - iVar5) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5 << 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<0,TMemStackAllocator<16>::ForElementType<float>_>
                    (4,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// operator=<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> @ 14a8d7c30

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::
operator=<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *this,
          TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int iVar1;
  ForElementType<UE::Math::TTransform<double>_> FVar2;
  int *piVar3;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  iVar1 = param_1->ArrayNum;
  piVar3 = &this->ArrayMax;
  if (FVar2 != (ForElementType<UE::Math::TTransform<double>_>)0x0) {
    param_1 = (TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)FVar2;
  }
  this->ArrayNum = iVar1;
  if ((iVar1 == 0) && (*piVar3 == 0)) {
    *piVar3 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x60,0x10,iVar1,*piVar3,&this->AllocatorInstance,iVar1,piVar3);
  if (iVar1 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)iVar1 * 0x60);
  }
  return this;
}

// AddUniqueImpl<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> @ 14a8d7db0

int __thiscall
TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
          (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this,
          TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&this->AllocatorInstance,&this->ArrayMax);
    }
    pFVar1 = (this->AllocatorInstance).Data;
    this->ArrayNum = iVar4 + 1;
    *(FWeakObjectPtr *)(pFVar1 + (longlong)iVar4 * 8) = param_1->WeakPtr;
  }
  return iVar4;
}

// AddUniqueImpl<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_> @ 14a8d7e70

int __thiscall
TArray<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_>
          (TArray<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this,
          TWeakObjectPtr<UActorComponent,FWeakObjectPtr> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&this->AllocatorInstance,&this->ArrayMax);
    }
    pFVar1 = (this->AllocatorInstance).Data;
    this->ArrayNum = iVar4 + 1;
    *(FWeakObjectPtr *)(pFVar1 + (longlong)iVar4 * 8) = param_1->WeakPtr;
  }
  return iVar4;
}

// Empty @ 14a8f3c50

void __thiscall
TArray<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>::
Empty(TArray<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
      *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
              ((TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a8f3cc0

void __thiscall
TArray<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<UE::PoseSearch::FPoseHistoryEntry,int>
              ((FPoseHistoryEntry *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a8f3d30

void __thiscall
TArray<UE::PoseSearch::FPoseMetadata,TAlignedHeapAllocator<16>_>::Empty
          (TArray<UE::PoseSearch::FPoseMetadata,TAlignedHeapAllocator<16>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0xc,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a8f3d80

void __thiscall
TArray<UE::PoseSearch::FSearchIndexAsset,TAlignedHeapAllocator<16>_>::Empty
          (TArray<UE::PoseSearch::FSearchIndexAsset,TAlignedHeapAllocator<16>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x24,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Find @ 14a8f7b50

int __thiscall
TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this,
          TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FScriptContainerElement *this_00;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == pFVar2 + (longlong)iVar1 * 8) {
      return -1;
    }
    bVar3 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject_const_,bool>
                      ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 8;
  }
  return (int)((longlong)this_00 - (longlong)pFVar2 >> 3);
}

// Find @ 14a8f7bd0

int __thiscall
TArray<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this,
          TWeakObjectPtr<UActorComponent,FWeakObjectPtr> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FScriptContainerElement *this_00;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == pFVar2 + (longlong)iVar1 * 8) {
      return -1;
    }
    bVar3 = TWeakObjectPtr<UActorComponent,FWeakObjectPtr>::UEOpEquals<UActorComponent,bool>
                      ((TWeakObjectPtr<UActorComponent,FWeakObjectPtr> *)this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 8;
  }
  return (int)((longlong)this_00 - (longlong)pFVar2 >> 3);
}

// InsertDefaulted_GetRef @ 14a901930

FPoseHistoryEntry * __thiscall
TArray<UE::PoseSearch::FPoseHistoryEntry,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>::
InsertDefaulted_GetRef
          (TArray<UE::PoseSearch::FPoseHistoryEntry,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
           *this,int param_1)

{
  uchar *_Src;
  TArray<UE::PoseSearch::FPoseHistoryEntry,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
  *pTVar1;
  int iVar2;
  FPoseHistoryEntry *pFVar3;
  TArray<UE::PoseSearch::FPoseHistoryEntry,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
  *pTVar4;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FPoseHistoryEntry>_>
                    (0x48,8,1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  pTVar1 = (TArray<UE::PoseSearch::FPoseHistoryEntry,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
            *)(this->AllocatorInstance).SecondaryData.Data;
  pTVar4 = this;
  if (pTVar1 != (TArray<UE::PoseSearch::FPoseHistoryEntry,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                 *)0x0) {
    pTVar4 = pTVar1;
  }
  _Src = (pTVar4->AllocatorInstance).InlineData + (longlong)param_1 * 0x48;
  memmove(_Src + 0x48,_Src,(longlong)(iVar2 - param_1) * 0x48);
  pTVar1 = (TArray<UE::PoseSearch::FPoseHistoryEntry,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
            *)(this->AllocatorInstance).SecondaryData.Data;
  if (pTVar1 != (TArray<UE::PoseSearch::FPoseHistoryEntry,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                 *)0x0) {
    this = pTVar1;
  }
  pFVar3 = (FPoseHistoryEntry *)((this->AllocatorInstance).InlineData + (longlong)param_1 * 0x48);
  DefaultConstructItems<UE::PoseSearch::FPoseHistoryEntry,int>(pFVar3,1);
  return pFVar3;
}

// RemoveAtImpl @ 14a906b10

void __thiscall
TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>::
RemoveAtImpl(TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
             *this,int param_1,int param_2)

{
  ForElementType<UE::Math::TTransform<double>_> FVar1;
  int iVar2;
  void *_Dst;
  ForElementType<UE::Math::TTransform<double>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<UE::Math::TTransform<double>_>)this;
  if (FVar1 != (ForElementType<UE::Math::TTransform<double>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (void *)((longlong)param_1 * 0x60 + (longlong)FVar3);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_2 * 0x60 + (longlong)_Dst),(longlong)iVar2 * 0x60);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14a906b80

void __thiscall
TArray<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FPoseHistoryEntry *_Dst;
  int iVar1;
  
  _Dst = (FPoseHistoryEntry *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x48);
  DestructItems<UE::PoseSearch::FPoseHistoryEntry,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x48);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14a908030

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14a908170

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>::
SetNum(TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
       *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::Math::TTransform<double>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_>
                      (0x60,0x10,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar3 = (this->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<UE::Math::TTransform<double>_>)0x0) {
      this = (TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
              *)FVar3;
    }
    DefaultConstructItems<UE::Math::TTransform<double>,int>
              ((void *)((longlong)iVar6 * 0x60 + (longlong)this),param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar7 = iVar2 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((uVar7 != 0) && (RemoveAtImpl(this,param_1,uVar7), param_2 == Default)) {
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_>
                  (0x60,0x10,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNumZeroed @ 14a9085b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::PoseSearch::FPoseMetadata,TAlignedHeapAllocator<16>_>::SetNumZeroed
          (TArray<UE::PoseSearch::FPoseMetadata,TAlignedHeapAllocator<16>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (0xc,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 0xc,0,
           (longlong)(param_1 - iVar5) * 0xc);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0xc;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0xc,(longlong)iVar5 * 0xc);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (0xc,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// operator=<UE::PoseSearch::IPoseHistory_const_*,int> @ 14a90eee0

TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_> *
__thiscall
TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>::
operator=<UE::PoseSearch::IPoseHistory_const_*,int>
          (TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
           *this,TArrayView<UE::PoseSearch::IPoseHistory_const_*,int> *param_1)

{
  int *piVar1;
  int iVar2;
  IPoseHistory **_Src;
  TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
  *pTVar3;
  TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
  *_Dst;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 4;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::IPoseHistory_const_*>_>
            (8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  pTVar3 = (TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
            *)(this->AllocatorInstance).SecondaryData.Data;
  _Dst = this;
  if (pTVar3 != (TArray<UE::PoseSearch::IPoseHistory_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                 *)0x0) {
    _Dst = pTVar3;
  }
  if (iVar2 != 0) {
    memcpy(_Dst,_Src,(longlong)iVar2 << 3);
  }
  return this;
}

// AddUniqueImpl<FBoneReference_const_&> @ 14a90f260

int __thiscall
TArray<FBoneReference,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FBoneReference_const_&>
          (TArray<FBoneReference,TSizedDefaultAllocator<32>_> *this,FBoneReference *param_1)

{
  FName *pFVar1;
  FBoneReference *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  FCompactPoseBoneIndex FVar5;
  bool bVar6;
  int iVar7;
  FBoneReference *pFVar8;
  
  pFVar2 = (FBoneReference *)(this->AllocatorInstance).Data;
  if (pFVar2 != pFVar2 + this->ArrayNum) {
    pFVar8 = pFVar2;
    do {
      if (pFVar8->BoneName == param_1->BoneName) {
        iVar7 = (int)((longlong)pFVar8 - (longlong)pFVar2 >> 4);
        if (iVar7 != -1) {
          return iVar7;
        }
        break;
      }
      pFVar8 = pFVar8 + 1;
    } while (pFVar8 != pFVar2 + this->ArrayNum);
  }
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + this->ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    iVar7 = (*pcVar3)();
    return iVar7;
  }
  iVar7 = this->ArrayNum;
  if (iVar7 == this->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar7;
  }
  this->ArrayNum = iVar7 + 1;
  uVar4 = *(undefined4 *)&param_1->field_0x8;
  FVar5 = param_1->CachedCompactPoseIndex;
  pFVar1 = (FName *)((this->AllocatorInstance).Data + (longlong)iVar7 * 0x10);
  *pFVar1 = param_1->BoneName;
  pFVar1[1].ComparisonIndex = (FNameEntryId)uVar4;
  pFVar1[1].Number = (uint)FVar5;
  return iVar7;
}

// AddUniqueImpl<FPoseSearchInteractionAvailabilityEx_const_&> @ 14a90f370

int __thiscall
TArray<FPoseSearchInteractionAvailabilityEx,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FPoseSearchInteractionAvailabilityEx_const_&>
          (TArray<FPoseSearchInteractionAvailabilityEx,TSizedDefaultAllocator<32>_> *this,
          FPoseSearchInteractionAvailabilityEx *param_1)

{
  FPoseSearchInteractionAvailabilityEx *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPoseSearchInteractionAvailability *this_00;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (FPoseSearchInteractionAvailabilityEx *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    this_00 = (FPoseSearchInteractionAvailability *)
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x40);
    FPoseSearchInteractionAvailability::FPoseSearchInteractionAvailability
              (this_00,(FPoseSearchInteractionAvailability *)param_1);
    this_00[1].Database.field0_0x0 =
         *(TObjectPtr<UPoseSearchDatabase>_u_0 *)&param_1->PoseHistoryName;
    this_00[1].Tag = (FName)param_1->PoseHistory;
  }
  return iVar4;
}

// AddUniqueImpl<UPoseSearchDatabase_const_*> @ 14a90f460

int __thiscall
TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>::
AddUniqueImpl<UPoseSearchDatabase_const_*>
          (TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>
           *this,UPoseSearchDatabase **param_1)

{
  TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_> *pTVar1;
  TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_> *pTVar6;
  TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_> *pTVar7;
  
  pTVar2 = (TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>
            *)(this->AllocatorInstance).SecondaryData.Data;
  pTVar7 = this;
  if (pTVar2 != (TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>
                 *)0x0) {
    pTVar7 = pTVar2;
  }
  pTVar1 = (TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>
            *)((pTVar7->AllocatorInstance).InlineData + (longlong)this->ArrayNum * 8);
  if (pTVar7 != pTVar1) {
    pTVar6 = pTVar7;
    do {
      if (*(UPoseSearchDatabase **)(pTVar6->AllocatorInstance).InlineData == *param_1) {
        iVar5 = (int)((longlong)pTVar6 - (longlong)pTVar7 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pTVar6 = (TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>
                *)((pTVar6->AllocatorInstance).InlineData + 8);
    } while (pTVar6 != pTVar1);
  }
  pTVar7 = this;
  if (pTVar2 != (TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>
                 *)0x0) {
    pTVar7 = pTVar2;
  }
  if (pTVar7 <= param_1) {
    pTVar7 = this;
    if (pTVar2 != (TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>
                   *)0x0) {
      pTVar7 = pTVar2;
    }
    if ((param_1 < (pTVar7->AllocatorInstance).InlineData + (longlong)this->ArrayMax * 8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>::ForElementType<UPoseSearchDatabase_const_*>_>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  pTVar2 = (TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>
            *)(this->AllocatorInstance).SecondaryData.Data;
  if (pTVar2 != (TArray<UPoseSearchDatabase_const_*,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>_>
                 *)0x0) {
    this = pTVar2;
  }
  *(UPoseSearchDatabase **)((this->AllocatorInstance).InlineData + (longlong)iVar5 * 8) = *param_1;
  return iVar5;
}

// AddDefaulted_GetRef @ 14a921910

TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
* __thiscall
TArray<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>_>
::AddDefaulted_GetRef
          (TArray<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>_>
           *this)

{
  TArray<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>_>
  *pTVar1;
  int iVar2;
  TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
  *pTVar3;
  
  iVar2 = this->ArrayNum;
  if (iVar2 == this->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>_>_>
                      (0x8d8,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar2 + 1;
  pTVar1 = (TArray<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>_>
            *)(this->AllocatorInstance).SecondaryData.Data;
  if (pTVar1 != (TArray<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>_>
                 *)0x0) {
    this = pTVar1;
  }
  pTVar3 = (TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
            *)((this->AllocatorInstance).InlineData + (longlong)iVar2 * 0xd8);
  DefaultConstructItems<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>,int>
            (pTVar3,1);
  return pTVar3;
}

// Empty @ 14a927fb0

void __thiscall
TArray<UE::PoseSearch::FArchivedPoseHistory,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::PoseSearch::FArchivedPoseHistory,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    DestructItems<UE::PoseSearch::FArchivedPoseHistory,int>
              ((FArchivedPoseHistory *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x98,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a928020

void __thiscall
TArray<FPoseSearchQueryTrajectorySample,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FPoseSearchQueryTrajectorySample,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a928070

void __thiscall
TArray<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,int>
              ((FTraceMotionMatchingStateDatabaseEntry *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a9280e0

void __thiscall
TArray<UE::PoseSearch::FTraceMotionMatchingStatePoseEntry,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::PoseSearch::FTraceMotionMatchingStatePoseEntry,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14a928130

void __thiscall
TArray<UE::PoseSearch::FVPTreeNode,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::PoseSearch::FVPTreeNode,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Find @ 14a928a60

int __thiscall
TArray<FPoseSearchInteractionAvailabilityEx,TSizedDefaultAllocator<32>_>::Find
          (TArray<FPoseSearchInteractionAvailabilityEx,TSizedDefaultAllocator<32>_> *this,
          FPoseSearchInteractionAvailabilityEx *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  if (pFVar2 != pFVar2 + (longlong)iVar1 * 0x40) {
    lVar3 = param_1->_padding_;
    pFVar5 = pFVar2;
    do {
      if (((((*(longlong *)pFVar5 == lVar3) && (*(longlong *)(pFVar5 + 8) == param_1->_padding_)) &&
           (*(int *)(pFVar5 + 0x18) == (int)param_1->_padding_)) &&
          ((bVar4 = CompareItems<FName,int>
                              (*(FName **)(pFVar5 + 0x10),(FName *)param_1->_padding_,
                               *(int *)(pFVar5 + 0x18)), bVar4 &&
           (*(float *)&param_1->_padding_ == *(float *)(pFVar5 + 0x20))))) &&
         ((*(float *)((longlong)&param_1->_padding_ + 4) == *(float *)(pFVar5 + 0x24) &&
          ((pFVar5[0x28] == *(FScriptContainerElement *)&param_1->_padding_ &&
           (*(int *)(pFVar5 + 0x2c) == *(int *)((longlong)&param_1->_padding_ + 4))))))) {
        return (int)((longlong)pFVar5 - (longlong)pFVar2 >> 6);
      }
      pFVar5 = pFVar5 + 0x40;
    } while (pFVar5 != pFVar2 + (longlong)iVar1 * 0x40);
  }
  return -1;
}

// Find @ 14a928b30

int __thiscall
TArray<`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfo,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
::Find(void *this,FRoledAnimContextInfo *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = this;
  if (*(longlong **)((longlong)this + 0xa0) != (longlong *)0x0) {
    plVar2 = *(longlong **)((longlong)this + 0xa0);
  }
  if (plVar2 != plVar2 + (longlong)*(int *)((longlong)this + 0xa8) * 5) {
    plVar1 = plVar2;
    do {
      if (((((FPoseSearchInteractionAvailabilityEx *)*plVar1 == param_1->Availability) &&
           ((FAnimContextInfo *)plVar1[1] == param_1->AnimContextInfo)) &&
          (*(FName *)(plVar1 + 2) == param_1->Role)) &&
         (((IPoseHistory *)plVar1[3] == param_1->PoseHistory &&
          ((UPoseSearchDatabase *)plVar1[4] == param_1->Database)))) {
        return (int)(((longlong)plVar1 - (longlong)plVar2) / 0x28);
      }
      plVar1 = plVar1 + 5;
    } while (plVar1 != plVar2 + (longlong)*(int *)((longlong)this + 0xa8) * 5);
  }
  return -1;
}

// RemoveAtImpl @ 14a9396a0

void __thiscall
TArray<UE::PoseSearch::FArchivedPoseHistory,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UE::PoseSearch::FArchivedPoseHistory,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FArchivedPoseHistory *_Dst;
  
  _Dst = (FArchivedPoseHistory *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x98);
  DestructItems<UE::PoseSearch::FArchivedPoseHistory,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x98);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14a939720

void __thiscall
TArray<FChooserEvaluationContext,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
RemoveAtImpl(TArray<FChooserEvaluationContext,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
             *this,int param_1,int param_2)

{
  ForElementType<FChooserEvaluationContext> FVar1;
  int iVar2;
  FChooserEvaluationContext *_Dst;
  ForElementType<FChooserEvaluationContext> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FChooserEvaluationContext>)this;
  if (FVar1 != (ForElementType<FChooserEvaluationContext>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (FChooserEvaluationContext *)((longlong)param_1 * 0x88 + (longlong)FVar3);
  DestructItems<FChooserEvaluationContext,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 * 0x88);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14a9397b0

void __thiscall
TArray<FPoseSearchInteractionAnimContextAvailabilities,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FPoseSearchInteractionAnimContextAvailabilities,TSizedDefaultAllocator<32>_> *this
          ,int param_1,int param_2)

{
  FPoseSearchInteractionAnimContextAvailabilities *_Dst;
  int iVar1;
  
  _Dst = (FPoseSearchInteractionAnimContextAvailabilities *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DestructItems<FPoseSearchInteractionAnimContextAvailabilities,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14a939830

void __thiscall
TArray<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  FTraceMotionMatchingStateDatabaseEntry *_Dst;
  int iVar1;
  
  _Dst = (FTraceMotionMatchingStateDatabaseEntry *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x28);
  DestructItems<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x28);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14a93d8c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UMirrorDataTable_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>::SetNum
          (TArray<UMirrorDataTable_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  uchar *_Dst;
  TArray<UMirrorDataTable_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TArray<UMirrorDataTable_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_> *pTVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UMirrorDataTable_const_*>_>
                      (8,8,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    pTVar2 = (TArray<UMirrorDataTable_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_> *
             )(this->AllocatorInstance).SecondaryData.Data;
    if (pTVar2 != (TArray<UMirrorDataTable_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                   *)0x0) {
      this = pTVar2;
    }
    memset((this->AllocatorInstance).InlineData + (longlong)iVar5 * 8,0,
           (longlong)(param_1 - iVar6) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        pTVar2 = (TArray<UMirrorDataTable_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                  *)(this->AllocatorInstance).SecondaryData.Data;
        pTVar7 = this;
        if (pTVar2 != (TArray<UMirrorDataTable_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                       *)0x0) {
          pTVar7 = pTVar2;
        }
        _Dst = (pTVar7->AllocatorInstance).InlineData + (longlong)param_1 * 8;
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar8 * 8,(longlong)iVar6 << 3);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UMirrorDataTable_const_*>_>
                    (8,8,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14a93da10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FChooserEvaluationContext,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<FChooserEvaluationContext,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FChooserEvaluationContext> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FChooserEvaluationContext>_>
                      (0x88,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar3 = (this->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<FChooserEvaluationContext>)0x0) {
      this = (TArray<FChooserEvaluationContext,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)FVar3;
    }
    DefaultConstructItems<FChooserEvaluationContext,int>
              ((void *)((longlong)iVar6 * 0x88 + (longlong)this),param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar7 = iVar2 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((uVar7 != 0) && (RemoveAtImpl(this,param_1,uVar7), param_2 == Default)) {
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FChooserEvaluationContext>_>
                  (0x88,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

