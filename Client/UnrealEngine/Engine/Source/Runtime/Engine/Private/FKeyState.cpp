// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FKeyState @ 148907ad0

FKeyState * __thiscall FKeyState::FKeyState(FKeyState *this,FKeyState *param_1)

{
  double dVar1;
  byte bVar2;
  
  dVar1 = (param_1->RawValue).field0_0x0._s_0.Y;
  (this->RawValue).field0_0x0._s_0.X = (param_1->RawValue).field0_0x0._s_0.X;
  (this->RawValue).field0_0x0._s_0.Y = dVar1;
  (this->RawValue).field0_0x0._s_0.Z = (param_1->RawValue).field0_0x0._s_0.Z;
  dVar1 = (param_1->Value).field0_0x0._s_0.Y;
  (this->Value).field0_0x0._s_0.X = (param_1->Value).field0_0x0._s_0.X;
  (this->Value).field0_0x0._s_0.Y = dVar1;
  (this->Value).field0_0x0._s_0.Z = (param_1->Value).field0_0x0._s_0.Z;
  this->LastUpDownTransitionTime = param_1->LastUpDownTransitionTime;
  bVar2 = (this->bDown ^ param_1->bDown) & 1 ^ this->field_0x34;
  this->field_0x34 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x34) & 2 ^ bVar2;
  this->field_0x34 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x34) & 4 ^ bVar2;
  this->field_0x34 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x34) & 8 ^ bVar2;
  this->field_0x34 = bVar2;
  this->field_0x34 = (bVar2 ^ param_1->field_0x34) & 0x70 ^ bVar2;
  this->SampleCountAccumulator = param_1->SampleCountAccumulator;
  this->EventCounts[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EventCounts[0].AllocatorInstance.Data = param_1->EventCounts[0].AllocatorInstance.Data;
  param_1->EventCounts[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EventCounts[0].ArrayNum = param_1->EventCounts[0].ArrayNum;
  this->EventCounts[0].ArrayMax = param_1->EventCounts[0].ArrayMax;
  param_1->EventCounts[0].ArrayNum = 0;
  param_1->EventCounts[0].ArrayMax = 0;
  this->EventCounts[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EventCounts[1].AllocatorInstance.Data = param_1->EventCounts[1].AllocatorInstance.Data;
  param_1->EventCounts[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EventCounts[1].ArrayNum = param_1->EventCounts[1].ArrayNum;
  this->EventCounts[1].ArrayMax = param_1->EventCounts[1].ArrayMax;
  param_1->EventCounts[1].ArrayNum = 0;
  param_1->EventCounts[1].ArrayMax = 0;
  this->EventCounts[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EventCounts[2].AllocatorInstance.Data = param_1->EventCounts[2].AllocatorInstance.Data;
  param_1->EventCounts[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EventCounts[2].ArrayNum = param_1->EventCounts[2].ArrayNum;
  this->EventCounts[2].ArrayMax = param_1->EventCounts[2].ArrayMax;
  param_1->EventCounts[2].ArrayNum = 0;
  param_1->EventCounts[2].ArrayMax = 0;
  this->EventCounts[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EventCounts[3].AllocatorInstance.Data = param_1->EventCounts[3].AllocatorInstance.Data;
  param_1->EventCounts[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EventCounts[3].ArrayNum = param_1->EventCounts[3].ArrayNum;
  this->EventCounts[3].ArrayMax = param_1->EventCounts[3].ArrayMax;
  param_1->EventCounts[3].ArrayNum = 0;
  param_1->EventCounts[3].ArrayMax = 0;
  this->EventCounts[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EventCounts[4].AllocatorInstance.Data = param_1->EventCounts[4].AllocatorInstance.Data;
  param_1->EventCounts[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EventCounts[4].ArrayNum = param_1->EventCounts[4].ArrayNum;
  this->EventCounts[4].ArrayMax = param_1->EventCounts[4].ArrayMax;
  param_1->EventCounts[4].ArrayNum = 0;
  param_1->EventCounts[4].ArrayMax = 0;
  this->EventAccumulator[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EventAccumulator[0].AllocatorInstance.Data =
       param_1->EventAccumulator[0].AllocatorInstance.Data;
  param_1->EventAccumulator[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EventAccumulator[0].ArrayNum = param_1->EventAccumulator[0].ArrayNum;
  this->EventAccumulator[0].ArrayMax = param_1->EventAccumulator[0].ArrayMax;
  param_1->EventAccumulator[0].ArrayNum = 0;
  param_1->EventAccumulator[0].ArrayMax = 0;
  this->EventAccumulator[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EventAccumulator[1].AllocatorInstance.Data =
       param_1->EventAccumulator[1].AllocatorInstance.Data;
  param_1->EventAccumulator[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EventAccumulator[1].ArrayNum = param_1->EventAccumulator[1].ArrayNum;
  this->EventAccumulator[1].ArrayMax = param_1->EventAccumulator[1].ArrayMax;
  param_1->EventAccumulator[1].ArrayNum = 0;
  param_1->EventAccumulator[1].ArrayMax = 0;
  this->EventAccumulator[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EventAccumulator[2].AllocatorInstance.Data =
       param_1->EventAccumulator[2].AllocatorInstance.Data;
  param_1->EventAccumulator[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EventAccumulator[2].ArrayNum = param_1->EventAccumulator[2].ArrayNum;
  this->EventAccumulator[2].ArrayMax = param_1->EventAccumulator[2].ArrayMax;
  param_1->EventAccumulator[2].ArrayNum = 0;
  param_1->EventAccumulator[2].ArrayMax = 0;
  this->EventAccumulator[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EventAccumulator[3].AllocatorInstance.Data =
       param_1->EventAccumulator[3].AllocatorInstance.Data;
  param_1->EventAccumulator[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EventAccumulator[3].ArrayNum = param_1->EventAccumulator[3].ArrayNum;
  this->EventAccumulator[3].ArrayMax = param_1->EventAccumulator[3].ArrayMax;
  param_1->EventAccumulator[3].ArrayNum = 0;
  param_1->EventAccumulator[3].ArrayMax = 0;
  this->EventAccumulator[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EventAccumulator[4].AllocatorInstance.Data =
       param_1->EventAccumulator[4].AllocatorInstance.Data;
  param_1->EventAccumulator[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EventAccumulator[4].ArrayNum = param_1->EventAccumulator[4].ArrayNum;
  this->EventAccumulator[4].ArrayMax = param_1->EventAccumulator[4].ArrayMax;
  param_1->EventAccumulator[4].ArrayNum = 0;
  param_1->EventAccumulator[4].ArrayMax = 0;
  dVar1 = (param_1->RawValueAccumulator).field0_0x0._s_0.Y;
  (this->RawValueAccumulator).field0_0x0._s_0.X = (param_1->RawValueAccumulator).field0_0x0._s_0.X;
  (this->RawValueAccumulator).field0_0x0._s_0.Y = dVar1;
  (this->RawValueAccumulator).field0_0x0._s_0.Z = (param_1->RawValueAccumulator).field0_0x0._s_0.Z;
  return this;
}

// ~FKeyState @ 14890e0a0

void __thiscall FKeyState::~FKeyState(FKeyState *this)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  longlong lVar3;
  TVector<double> *pTVar4;
  longlong lVar5;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar6;
  
  lVar3 = 5;
  pTVar4 = &this->RawValueAccumulator;
  lVar5 = 5;
  do {
    piVar2 = (int *)(pTVar4 + -1);
    pTVar4 = (TVector<double> *)((longlong)(pTVar4 + -1) + 8);
    lVar5 = lVar5 + -1;
    if (*(void **)(piVar2 + 2) != (void *)0x0) {
      FMemory::Free(*(void **)(piVar2 + 2));
    }
  } while (lVar5 != 0);
  pTVar6 = this->EventAccumulator;
  do {
    pFVar1 = pTVar6[-1].AllocatorInstance.Data;
    pTVar6 = pTVar6 + -1;
    lVar3 = lVar3 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar3 != 0);
  return;
}

