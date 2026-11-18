// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 4

// HeapPopDiscard<UE::Trace::FProtocol5Stage::FSerialDistancePredicate> @ 14d388df0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Trace::FProtocol5Stage::FEventDescStream,TSizedDefaultAllocator<32>_>::
HeapPopDiscard<UE::Trace::FProtocol5Stage::FSerialDistancePredicate>
          (TArray<UE::Trace::FProtocol5Stage::FEventDescStream,TSizedDefaultAllocator<32>_> *this,
          FSerialDistancePredicate *param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  
  iVar10 = 0;
  if ((this->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar8 = this->ArrayNum + -1;
  if (1 < iVar8) {
    iVar8 = 1;
  }
  if (iVar8 != 0) {
    memmove(pFVar1,pFVar1 + (longlong)(this->ArrayNum - iVar8) * 0x10,(longlong)iVar8 << 4);
  }
  iVar8 = this->ArrayNum + -1;
  this->ArrayNum = iVar8;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,&this->AllocatorInstance,iVar8,&this->ArrayMax);
  }
  iVar8 = this->ArrayNum;
  pFVar1 = (this->AllocatorInstance).Data;
  iVar7 = iVar10;
  if (1 < iVar8) {
    do {
      iVar9 = iVar10;
      if ((iVar10 + 2 < iVar8) &&
         (iVar9 = iVar10 + 1,
         **(int **)(pFVar1 + (longlong)(iVar10 + 1) * 0x10 + 8) - param_1->Origin <
         **(int **)(pFVar1 + (longlong)iVar10 * 0x10 + 0x28) - param_1->Origin)) {
        iVar9 = iVar10;
      }
      lVar11 = (longlong)iVar9 + 1;
      lVar12 = (longlong)iVar7;
      if (**(int **)(pFVar1 + lVar12 * 0x10 + 8) - param_1->Origin <=
          **(int **)(pFVar1 + lVar11 * 0x10 + 8) - param_1->Origin) {
        return;
      }
      uVar3 = *(undefined8 *)(pFVar1 + lVar11 * 0x10 + 8);
      uVar4 = *(undefined8 *)(pFVar1 + lVar12 * 0x10);
      uVar5 = *(undefined8 *)(pFVar1 + lVar12 * 0x10 + 8);
      *(undefined8 *)(pFVar1 + lVar12 * 0x10) = *(undefined8 *)(pFVar1 + lVar11 * 0x10);
      *(undefined8 *)(pFVar1 + lVar12 * 0x10 + 8) = uVar3;
      *(undefined8 *)(pFVar1 + lVar11 * 0x10) = uVar4;
      *(undefined8 *)(pFVar1 + lVar11 * 0x10 + 8) = uVar5;
      iVar10 = (iVar9 + 1) * 2;
      iVar7 = iVar9 + 1;
    } while (iVar10 + 1 < iVar8);
  }
  return;
}

// HeapPush<UE::Trace::FProtocol5Stage::FSerialDistancePredicate> @ 14d388f70

int __thiscall
TArray<UE::Trace::FProtocol5Stage::FEventDescStream,TSizedDefaultAllocator<32>_>::
HeapPush<UE::Trace::FProtocol5Stage::FSerialDistancePredicate>
          (TArray<UE::Trace::FProtocol5Stage::FEventDescStream,TSizedDefaultAllocator<32>_> *this,
          FEventDescStream *param_1,FSerialDistancePredicate *param_2)

{
  FScriptContainerElement *pFVar1;
  FEventDescStream *pFVar2;
  code *pcVar3;
  FEventDescStream_u_8 FVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  
  pFVar2 = (FEventDescStream *)(this->AllocatorInstance).Data;
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + this->ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar3 = (code *)swi(3);
    iVar9 = (*pcVar3)();
    return iVar9;
  }
  iVar9 = this->ArrayNum;
  if (iVar9 == this->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1010,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar9 + 1;
  FVar4 = param_1->field2_0x8;
  pFVar1 = (this->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
  *(undefined8 *)pFVar1 = *(undefined8 *)param_1;
  *(FEventDescStream_u_8 *)(pFVar1 + 8) = FVar4;
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = this->ArrayNum + -1;
  while( true ) {
    if (iVar9 < 1) {
      return iVar9;
    }
    lVar11 = (longlong)iVar9;
    iVar10 = (iVar9 + -1) / 2;
    lVar12 = (longlong)iVar10;
    if (**(int **)(pFVar1 + lVar12 * 0x10 + 8) - param_2->Origin <=
        **(int **)(pFVar1 + lVar11 * 0x10 + 8) - param_2->Origin) break;
    uVar5 = *(undefined8 *)(pFVar1 + lVar12 * 0x10 + 8);
    uVar6 = *(undefined8 *)(pFVar1 + lVar11 * 0x10);
    uVar7 = *(undefined8 *)(pFVar1 + lVar11 * 0x10 + 8);
    *(undefined8 *)(pFVar1 + lVar11 * 0x10) = *(undefined8 *)(pFVar1 + lVar12 * 0x10);
    *(undefined8 *)(pFVar1 + lVar11 * 0x10 + 8) = uVar5;
    *(undefined8 *)(pFVar1 + lVar12 * 0x10) = uVar6;
    *(undefined8 *)(pFVar1 + lVar12 * 0x10 + 8) = uVar7;
    iVar9 = iVar10;
  }
  return iVar9;
}

// Insert @ 14d3a04b0

int __thiscall
TArray<UE::Trace::FAnalysisMachine::FStage_*,TSizedDefaultAllocator<32>_>::Insert
          (TArray<UE::Trace::FAnalysisMachine::FStage_*,TSizedDefaultAllocator<32>_> *this,
          FStage **param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->AllocatorInstance).Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (longlong)this->ArrayMax * 8)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = this->ArrayNum;
  if (iVar3 == this->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar4 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar3 + 1;
  pFVar4 = pFVar4 + (longlong)param_2 * 8;
  memmove(pFVar4 + 8,pFVar4,(longlong)(iVar3 - param_2) << 3);
  *(FStage **)((this->AllocatorInstance).Data + (longlong)param_2 * 8) = *param_1;
  return param_2;
}

// SetNumZeroed @ 14d3a7d80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_short,TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
          (TArray<unsigned_short,TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<unsigned_short> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<unsigned_short> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                      (2,2,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_short>)0x0) {
      this = (TArray<unsigned_short,TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>_> *)
             FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 2),0,(longlong)(param_1 - iVar6) * 2);
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
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<unsigned_short>)this;
        if (FVar2 != (ForElementType<unsigned_short>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 2);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 2),(longlong)iVar6 * 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                    (2,2,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

