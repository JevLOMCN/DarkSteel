// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// FInternalFrameAggregationEntry @ 14d421b70

FInternalFrameAggregationEntry * __thiscall
TraceServices::FTimelineStatistics::FInternalFrameAggregationEntry::FInternalFrameAggregationEntry
          (FInternalFrameAggregationEntry *this,FInternalFrameAggregationEntry *param_1)

{
  undefined8 uVar1;
  FInternalFrameAggregationEntry *pFVar2;
  FInternalFrameAggregationEntry *pFVar3;
  FInternalFrameAggregationEntry *pFVar4;
  FInternalFrameAggregationEntry *pFVar5;
  longlong lVar6;
  
  lVar6 = 7;
  pFVar2 = param_1;
  pFVar3 = this;
  do {
    pFVar5 = pFVar3;
    pFVar4 = pFVar2;
    pFVar3 = (FInternalFrameAggregationEntry *)((pFVar5->Inner).InclHistogram + 0x20);
    uVar1 = *(undefined8 *)((pFVar4->Inner).InclHistogram + 2);
    pFVar2 = (FInternalFrameAggregationEntry *)((pFVar4->Inner).InclHistogram + 0x20);
    *(undefined8 *)(pFVar5->Inner).InclHistogram = *(undefined8 *)(pFVar4->Inner).InclHistogram;
    *(undefined8 *)((pFVar5->Inner).InclHistogram + 2) = uVar1;
    uVar1 = *(undefined8 *)((pFVar4->Inner).InclHistogram + 6);
    *(undefined8 *)((pFVar5->Inner).InclHistogram + 4) =
         *(undefined8 *)((pFVar4->Inner).InclHistogram + 4);
    *(undefined8 *)((pFVar5->Inner).InclHistogram + 6) = uVar1;
    uVar1 = *(undefined8 *)((pFVar4->Inner).InclHistogram + 10);
    *(undefined8 *)((pFVar5->Inner).InclHistogram + 8) =
         *(undefined8 *)((pFVar4->Inner).InclHistogram + 8);
    *(undefined8 *)((pFVar5->Inner).InclHistogram + 10) = uVar1;
    uVar1 = *(undefined8 *)((pFVar4->Inner).InclHistogram + 0xe);
    *(undefined8 *)((pFVar5->Inner).InclHistogram + 0xc) =
         *(undefined8 *)((pFVar4->Inner).InclHistogram + 0xc);
    *(undefined8 *)((pFVar5->Inner).InclHistogram + 0xe) = uVar1;
    uVar1 = *(undefined8 *)((pFVar4->Inner).InclHistogram + 0x12);
    *(undefined8 *)((pFVar5->Inner).InclHistogram + 0x10) =
         *(undefined8 *)((pFVar4->Inner).InclHistogram + 0x10);
    *(undefined8 *)((pFVar5->Inner).InclHistogram + 0x12) = uVar1;
    uVar1 = *(undefined8 *)((pFVar4->Inner).InclHistogram + 0x16);
    *(undefined8 *)((pFVar5->Inner).InclHistogram + 0x14) =
         *(undefined8 *)((pFVar4->Inner).InclHistogram + 0x14);
    *(undefined8 *)((pFVar5->Inner).InclHistogram + 0x16) = uVar1;
    uVar1 = *(undefined8 *)((pFVar4->Inner).InclHistogram + 0x1a);
    *(undefined8 *)((pFVar5->Inner).InclHistogram + 0x18) =
         *(undefined8 *)((pFVar4->Inner).InclHistogram + 0x18);
    *(undefined8 *)((pFVar5->Inner).InclHistogram + 0x1a) = uVar1;
    uVar1 = *(undefined8 *)((pFVar4->Inner).InclHistogram + 0x1e);
    *(undefined8 *)((pFVar5->Inner).InclHistogram + 0x1c) =
         *(undefined8 *)((pFVar4->Inner).InclHistogram + 0x1c);
    *(undefined8 *)((pFVar5->Inner).InclHistogram + 0x1e) = uVar1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  uVar1 = *(undefined8 *)((pFVar4->Inner).InclHistogram + 0x22);
  *(undefined8 *)(pFVar3->Inner).InclHistogram = *(undefined8 *)(pFVar2->Inner).InclHistogram;
  *(undefined8 *)((pFVar5->Inner).InclHistogram + 0x22) = uVar1;
  (this->FrameInclusiveTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameInclusiveTimes).AllocatorInstance.Data =
       (param_1->FrameInclusiveTimes).AllocatorInstance.Data;
  (param_1->FrameInclusiveTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameInclusiveTimes).ArrayNum = (param_1->FrameInclusiveTimes).ArrayNum;
  (this->FrameInclusiveTimes).ArrayMax = (param_1->FrameInclusiveTimes).ArrayMax;
  (param_1->FrameInclusiveTimes).ArrayNum = 0;
  (param_1->FrameInclusiveTimes).ArrayMax = 0;
  (this->FrameExclusiveTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameExclusiveTimes).AllocatorInstance.Data =
       (param_1->FrameExclusiveTimes).AllocatorInstance.Data;
  (param_1->FrameExclusiveTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameExclusiveTimes).ArrayNum = (param_1->FrameExclusiveTimes).ArrayNum;
  (this->FrameExclusiveTimes).ArrayMax = (param_1->FrameExclusiveTimes).ArrayMax;
  (param_1->FrameExclusiveTimes).ArrayNum = 0;
  (param_1->FrameExclusiveTimes).ArrayMax = 0;
  return this;
}

