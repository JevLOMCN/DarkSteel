// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 34

// FVisualLogEntry @ 1489b5350

FVisualLogEntry * __thiscall
FVisualLogEntry::FVisualLogEntry(FVisualLogEntry *this,FVisualLogEntry *param_1)

{
  double dVar1;
  byte bVar2;
  
  this->TimeStamp = param_1->TimeStamp;
  this->WorldTimeStamp = param_1->WorldTimeStamp;
  dVar1 = (param_1->Location).field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar1;
  (this->Location).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  bVar2 = (this->bPassedClassAllowList ^ param_1->bPassedClassAllowList) & 1 ^ this->field_0x28;
  this->field_0x28 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x28) & 2 ^ bVar2;
  this->field_0x28 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x28) & 4 ^ bVar2;
  this->field_0x28 = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x28) & 8 ^ bVar2;
  this->field_0x28 = bVar2;
  this->field_0x28 = (bVar2 ^ param_1->field_0x28) & 0x10 ^ bVar2;
  (this->Events).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Events).AllocatorInstance.Data = (param_1->Events).AllocatorInstance.Data;
  (param_1->Events).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Events).ArrayNum = (param_1->Events).ArrayNum;
  (this->Events).ArrayMax = (param_1->Events).ArrayMax;
  (param_1->Events).ArrayNum = 0;
  (param_1->Events).ArrayMax = 0;
  (this->LogLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LogLines).AllocatorInstance.Data = (param_1->LogLines).AllocatorInstance.Data;
  (param_1->LogLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LogLines).ArrayNum = (param_1->LogLines).ArrayNum;
  (this->LogLines).ArrayMax = (param_1->LogLines).ArrayMax;
  (param_1->LogLines).ArrayNum = 0;
  (param_1->LogLines).ArrayMax = 0;
  (this->Status).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Status).AllocatorInstance.Data = (param_1->Status).AllocatorInstance.Data;
  (param_1->Status).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Status).ArrayNum = (param_1->Status).ArrayNum;
  (this->Status).ArrayMax = (param_1->Status).ArrayMax;
  (param_1->Status).ArrayNum = 0;
  (param_1->Status).ArrayMax = 0;
  (this->ElementsToDraw).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementsToDraw).AllocatorInstance.Data = (param_1->ElementsToDraw).AllocatorInstance.Data;
  (param_1->ElementsToDraw).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementsToDraw).ArrayNum = (param_1->ElementsToDraw).ArrayNum;
  (this->ElementsToDraw).ArrayMax = (param_1->ElementsToDraw).ArrayMax;
  (param_1->ElementsToDraw).ArrayNum = 0;
  (param_1->ElementsToDraw).ArrayMax = 0;
  (this->HistogramSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HistogramSamples).AllocatorInstance.Data =
       (param_1->HistogramSamples).AllocatorInstance.Data;
  (param_1->HistogramSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HistogramSamples).ArrayNum = (param_1->HistogramSamples).ArrayNum;
  (this->HistogramSamples).ArrayMax = (param_1->HistogramSamples).ArrayMax;
  (param_1->HistogramSamples).ArrayNum = 0;
  (param_1->HistogramSamples).ArrayMax = 0;
  (this->DataBlocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataBlocks).AllocatorInstance.Data = (param_1->DataBlocks).AllocatorInstance.Data;
  (param_1->DataBlocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataBlocks).ArrayNum = (param_1->DataBlocks).ArrayNum;
  (this->DataBlocks).ArrayMax = (param_1->DataBlocks).ArrayMax;
  (param_1->DataBlocks).ArrayNum = 0;
  (param_1->DataBlocks).ArrayMax = 0;
  return this;
}

// FVisualLogEntry @ 1489b54d0

FVisualLogEntry * __thiscall
FVisualLogEntry::FVisualLogEntry(FVisualLogEntry *this,FVisualLogEntry *param_1)

{
  TArray<FVisualLogEvent,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FVisualLogLine,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FVisualLogStatusCategory,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FVisualLogShapeElement,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FVisualLogHistogramSample,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FVisualLogDataBlock,TSizedDefaultAllocator<32>_> *pTVar7;
  byte bVar8;
  int iVar9;
  FVisualLogEvent *pFVar10;
  FVisualLogLine *pFVar11;
  FVisualLogStatusCategory *pFVar12;
  FVisualLogShapeElement *pFVar13;
  FScriptContainerElement *_Src;
  FVisualLogDataBlock *pFVar14;
  double dVar15;
  byte bVar16;
  
  this->TimeStamp = param_1->TimeStamp;
  pTVar1 = &this->Events;
  this->WorldTimeStamp = param_1->WorldTimeStamp;
  dVar15 = (param_1->Location).field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar15;
  (this->Location).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  bVar16 = (this->bPassedClassAllowList ^ param_1->bPassedClassAllowList) & 1 ^ this->field_0x28;
  this->field_0x28 = bVar16;
  bVar16 = (bVar16 ^ param_1->field_0x28) & 2 ^ bVar16;
  this->field_0x28 = bVar16;
  bVar16 = (bVar16 ^ param_1->field_0x28) & 4 ^ bVar16;
  this->field_0x28 = bVar16;
  bVar16 = (bVar16 ^ param_1->field_0x28) & 8 ^ bVar16;
  this->field_0x28 = bVar16;
  bVar8 = param_1->field_0x28;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->field_0x28 = (bVar16 ^ bVar8) & 0x10 ^ bVar16;
  piVar2 = &(this->Events).ArrayMax;
  iVar9 = (param_1->Events).ArrayNum;
  pFVar10 = (FVisualLogEvent *)(param_1->Events).AllocatorInstance.Data;
  (this->Events).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,8,iVar9,0,&pTVar1->AllocatorInstance,iVar9,piVar2);
    ConstructItems<FVisualLogEvent,FVisualLogEvent,int>
              ((pTVar1->AllocatorInstance).Data,pFVar10,iVar9);
  }
  pTVar3 = &this->LogLines;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->LogLines).ArrayMax;
  iVar9 = (param_1->LogLines).ArrayNum;
  pFVar11 = (FVisualLogLine *)(param_1->LogLines).AllocatorInstance.Data;
  (this->LogLines).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar9,0,&pTVar3->AllocatorInstance,iVar9,piVar2);
    ConstructItems<FVisualLogLine,FVisualLogLine,int>
              ((pTVar3->AllocatorInstance).Data,pFVar11,iVar9);
  }
  pTVar4 = &this->Status;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Status).ArrayMax;
  iVar9 = (param_1->Status).ArrayNum;
  pFVar12 = (FVisualLogStatusCategory *)(param_1->Status).AllocatorInstance.Data;
  (this->Status).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar9,0,&pTVar4->AllocatorInstance,iVar9,piVar2);
    ConstructItems<FVisualLogStatusCategory,FVisualLogStatusCategory,int>
              ((pTVar4->AllocatorInstance).Data,pFVar12,iVar9);
  }
  pTVar5 = &this->ElementsToDraw;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ElementsToDraw).ArrayMax;
  iVar9 = (param_1->ElementsToDraw).ArrayNum;
  pFVar13 = (FVisualLogShapeElement *)(param_1->ElementsToDraw).AllocatorInstance.Data;
  (this->ElementsToDraw).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,0x10,iVar9,0,&pTVar5->AllocatorInstance,iVar9,piVar2);
    ConstructItems<FVisualLogShapeElement,FVisualLogShapeElement,int>
              ((pTVar5->AllocatorInstance).Data,pFVar13,iVar9);
  }
  pTVar6 = &this->HistogramSamples;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->HistogramSamples).ArrayMax;
  iVar9 = (param_1->HistogramSamples).ArrayNum;
  _Src = (param_1->HistogramSamples).AllocatorInstance.Data;
  (this->HistogramSamples).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar9,0,&pTVar6->AllocatorInstance,iVar9,piVar2);
    memcpy((pTVar6->AllocatorInstance).Data,_Src,(longlong)iVar9 * 0x38);
  }
  pTVar7 = &this->DataBlocks;
  (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->DataBlocks).ArrayMax;
  iVar9 = (param_1->DataBlocks).ArrayNum;
  pFVar14 = (FVisualLogDataBlock *)(param_1->DataBlocks).AllocatorInstance.Data;
  (this->DataBlocks).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar9,0,&pTVar7->AllocatorInstance,iVar9,piVar2);
    ConstructItems<FVisualLogDataBlock,FVisualLogDataBlock,int>
              ((pTVar7->AllocatorInstance).Data,pFVar14,iVar9);
  }
  return this;
}

// ~FVisualLogEntry @ 1489ba1f0

void __thiscall FVisualLogEntry::~FVisualLogEntry(FVisualLogEntry *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FVisualLogDataBlock,int>
            ((FVisualLogDataBlock *)(this->DataBlocks).AllocatorInstance.Data,
             (this->DataBlocks).ArrayNum);
  pFVar1 = (this->DataBlocks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HistogramSamples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FVisualLogShapeElement,int>
            ((FVisualLogShapeElement *)(this->ElementsToDraw).AllocatorInstance.Data,
             (this->ElementsToDraw).ArrayNum);
  pFVar1 = (this->ElementsToDraw).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FVisualLogStatusCategory,int>
            ((FVisualLogStatusCategory *)(this->Status).AllocatorInstance.Data,
             (this->Status).ArrayNum);
  pFVar1 = (this->Status).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FVisualLogLine,int>
            ((FVisualLogLine *)(this->LogLines).AllocatorInstance.Data,(this->LogLines).ArrayNum);
  pFVar1 = (this->LogLines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FVisualLogEvent,int>
            ((FVisualLogEvent *)(this->Events).AllocatorInstance.Data,(this->Events).ArrayNum);
  pFVar1 = (this->Events).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 1489bbbf0

FVisualLogEntry * __thiscall
FVisualLogEntry::operator=(FVisualLogEntry *this,FVisualLogEntry *param_1)

{
  TArray<FVisualLogEvent,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FVisualLogLine,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FVisualLogStatusCategory,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FVisualLogShapeElement,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FVisualLogHistogramSample,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FVisualLogDataBlock,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  FVisualLogEvent *pFVar9;
  FVisualLogLine *pFVar10;
  FVisualLogStatusCategory *pFVar11;
  FVisualLogShapeElement *pFVar12;
  FScriptContainerElement *_Src;
  FVisualLogDataBlock *pFVar13;
  double dVar14;
  byte bVar15;
  
  this->TimeStamp = param_1->TimeStamp;
  this->WorldTimeStamp = param_1->WorldTimeStamp;
  dVar14 = (param_1->Location).field0_0x0._s_0.Y;
  pTVar1 = &this->Events;
  (this->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar14;
  (this->Location).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  bVar15 = (this->bPassedClassAllowList ^ param_1->bPassedClassAllowList) & 1 ^ this->field_0x28;
  this->field_0x28 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x28) & 2 ^ bVar15;
  this->field_0x28 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x28) & 4 ^ bVar15;
  this->field_0x28 = bVar15;
  bVar15 = (bVar15 ^ param_1->field_0x28) & 8 ^ bVar15;
  this->field_0x28 = bVar15;
  this->field_0x28 = (bVar15 ^ param_1->field_0x28) & 0x10 ^ bVar15;
  if (pTVar1 != &param_1->Events) {
    DestructItems<FVisualLogEvent,int>
              ((FVisualLogEvent *)(pTVar1->AllocatorInstance).Data,(this->Events).ArrayNum);
    iVar8 = (param_1->Events).ArrayNum;
    piVar2 = &(this->Events).ArrayMax;
    pFVar9 = (FVisualLogEvent *)(param_1->Events).AllocatorInstance.Data;
    (this->Events).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x90,8,iVar8,*piVar2,&pTVar1->AllocatorInstance,iVar8,piVar2);
      ConstructItems<FVisualLogEvent,FVisualLogEvent,int>
                ((pTVar1->AllocatorInstance).Data,pFVar9,iVar8);
    }
  }
  pTVar3 = &this->LogLines;
  if (pTVar3 != &param_1->LogLines) {
    DestructItems<FVisualLogLine,int>
              ((FVisualLogLine *)(pTVar3->AllocatorInstance).Data,(this->LogLines).ArrayNum);
    iVar8 = (param_1->LogLines).ArrayNum;
    piVar2 = &(this->LogLines).ArrayMax;
    pFVar10 = (FVisualLogLine *)(param_1->LogLines).AllocatorInstance.Data;
    (this->LogLines).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar8,*piVar2,&pTVar3->AllocatorInstance,iVar8,piVar2);
      ConstructItems<FVisualLogLine,FVisualLogLine,int>
                ((pTVar3->AllocatorInstance).Data,pFVar10,iVar8);
    }
  }
  pTVar4 = &this->Status;
  if (pTVar4 != &param_1->Status) {
    DestructItems<FVisualLogStatusCategory,int>
              ((FVisualLogStatusCategory *)(pTVar4->AllocatorInstance).Data,(this->Status).ArrayNum)
    ;
    iVar8 = (param_1->Status).ArrayNum;
    piVar2 = &(this->Status).ArrayMax;
    pFVar11 = (FVisualLogStatusCategory *)(param_1->Status).AllocatorInstance.Data;
    (this->Status).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar8,*piVar2,&pTVar4->AllocatorInstance,iVar8,piVar2);
      ConstructItems<FVisualLogStatusCategory,FVisualLogStatusCategory,int>
                ((pTVar4->AllocatorInstance).Data,pFVar11,iVar8);
    }
  }
  pTVar5 = &this->ElementsToDraw;
  if (pTVar5 != &param_1->ElementsToDraw) {
    DestructItems<FVisualLogShapeElement,int>
              ((FVisualLogShapeElement *)(pTVar5->AllocatorInstance).Data,
               (this->ElementsToDraw).ArrayNum);
    iVar8 = (param_1->ElementsToDraw).ArrayNum;
    piVar2 = &(this->ElementsToDraw).ArrayMax;
    pFVar12 = (FVisualLogShapeElement *)(param_1->ElementsToDraw).AllocatorInstance.Data;
    (this->ElementsToDraw).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc0,0x10,iVar8,*piVar2,&pTVar5->AllocatorInstance,iVar8,piVar2);
      ConstructItems<FVisualLogShapeElement,FVisualLogShapeElement,int>
                ((pTVar5->AllocatorInstance).Data,pFVar12,iVar8);
    }
  }
  pTVar6 = &this->HistogramSamples;
  if (pTVar6 != &param_1->HistogramSamples) {
    iVar8 = (param_1->HistogramSamples).ArrayNum;
    piVar2 = &(this->HistogramSamples).ArrayMax;
    _Src = (param_1->HistogramSamples).AllocatorInstance.Data;
    (this->HistogramSamples).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar8,*piVar2,&pTVar6->AllocatorInstance,iVar8,piVar2);
      if (iVar8 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data,_Src,(longlong)iVar8 * 0x38);
      }
    }
  }
  pTVar7 = &this->DataBlocks;
  if (pTVar7 != &param_1->DataBlocks) {
    DestructItems<FVisualLogDataBlock,int>
              ((FVisualLogDataBlock *)(pTVar7->AllocatorInstance).Data,(this->DataBlocks).ArrayNum);
    iVar8 = (param_1->DataBlocks).ArrayNum;
    piVar2 = &(this->DataBlocks).ArrayMax;
    pFVar13 = (FVisualLogDataBlock *)(param_1->DataBlocks).AllocatorInstance.Data;
    (this->DataBlocks).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar8,*piVar2,&pTVar7->AllocatorInstance,iVar8,piVar2);
      ConstructItems<FVisualLogDataBlock,FVisualLogDataBlock,int>
                ((pTVar7->AllocatorInstance).Data,pFVar13,iVar8);
    }
  }
  return this;
}

// AddArrow @ 1489c2460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualLogEntry::AddArrow
          (FVisualLogEntry *this,TVector<double> *param_1,TVector<double> *param_2,FName *param_3,
          Type param_4,FColor *param_5,FString *param_6,ushort param_7)

{
  int iVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  code *pcVar5;
  double dVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_158 [32];
  FString local_108;
  FName local_f8;
  Type local_f0;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined4 local_58;
  FScriptContainerElement local_54;
  FScriptContainerElement local_53;
  ushort local_52;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_f8 = *param_3;
  local_e0._0_4_ = 0;
  local_d8 = UE::Math::TMatrix<double>::Identity.M[0][0];
  dStack_d0 = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_c8 = UE::Math::TMatrix<double>::Identity.M[0][2];
  dStack_c0 = UE::Math::TMatrix<double>::Identity.M[0][3];
  uVar4 = (param_5->field0_0x0).Bits;
  local_b8 = UE::Math::TMatrix<double>::Identity.M[1][0];
  dStack_b0 = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_a8 = UE::Math::TMatrix<double>::Identity.M[1][2];
  dStack_a0 = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_98 = UE::Math::TMatrix<double>::Identity.M[2][0];
  dStack_90 = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_88 = UE::Math::TMatrix<double>::Identity.M[2][2];
  dStack_80 = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_53 = (FScriptContainerElement)
             ((byte)(uVar4 >> 0x18) & 0xc0 | (byte)(uVar4 >> 0x12) & 0x30 |
              (byte)(uVar4 >> 0xc) & 0xc | (byte)(uVar4 >> 6) & 3);
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  local_f0 = 7;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  local_78 = UE::Math::TMatrix<double>::Identity.M[3][0];
  dStack_70 = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_68 = UE::Math::TMatrix<double>::Identity.M[3][2];
  dStack_60 = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_58 = 0xffffffff;
  local_54 = (FScriptContainerElement)0x11;
  local_52 = 0;
  if (&local_108 != param_6) {
    uVar4 = (param_6->Data).ArrayNum;
    pFVar11 = (param_6->Data).AllocatorInstance.Data;
    local_108.Data.ArrayMax = 0;
    local_108.Data.ArrayNum = uVar4;
    if (uVar4 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar4,0,(ForAnyElementType *)&local_108,uVar4,&local_108.Data.ArrayMax);
      memcpy(local_108.Data.AllocatorInstance.Data,pFVar11,(longlong)(int)uVar4 * 2);
      if (1 < local_e0._4_4_) goto LAB_1489c25dd;
    }
  }
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,2,&local_e8,(int)local_e0,(int *)((longlong)&local_e0 + 4));
LAB_1489c25dd:
  if (((local_e8.Data <= param_1) && (param_1 < local_e8.Data + (longlong)local_e0._4_4_ * 0x18)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = (int)local_e0;
  if ((int)local_e0 == local_e0._4_4_) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&local_e8,(int *)((longlong)&local_e0 + 4));
  }
  dVar6 = (param_1->field0_0x0)._s_0.Y;
  iVar1 = iVar9 + 1;
  *(double *)(local_e8.Data + (longlong)iVar9 * 0x18) = (param_1->field0_0x0)._s_0.X;
  *(double *)(local_e8.Data + (longlong)iVar9 * 0x18 + 8) = dVar6;
  *(double *)(local_e8.Data + (longlong)iVar9 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  local_e0._0_4_ = iVar1;
  if (((local_e8.Data <= param_2) && (param_2 < local_e8.Data + (longlong)local_e0._4_4_ * 0x18)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((int)local_e0 == local_e0._4_4_) {
    local_e0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_e8,(int *)((longlong)&local_e0 + 4));
  }
  dVar6 = (param_2->field0_0x0)._s_0.Y;
  lVar10 = (longlong)(int)local_e0;
  local_e0 = CONCAT44(local_e0._4_4_,(int)local_e0 + 1);
  *(double *)(local_e8.Data + lVar10 * 0x18) = (param_2->field0_0x0)._s_0.X;
  *(double *)(local_e8.Data + lVar10 * 0x18 + 8) = dVar6;
  *(double *)(local_e8.Data + lVar10 * 0x18 + 0x10) = (param_2->field0_0x0)._s_0.Z;
  pFVar11 = (this->ElementsToDraw).AllocatorInstance.Data;
  local_f0 = param_4;
  local_52 = param_7;
  if (((pFVar11 <= (FScriptContainerElement *)&local_108) &&
      ((FScriptContainerElement *)&local_108 <
       pFVar11 + (longlong)(this->ElementsToDraw).ArrayMax * 0xc0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = (this->ElementsToDraw).ArrayNum;
  piVar2 = &(this->ElementsToDraw).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10c0,&(this->ElementsToDraw).AllocatorInstance,piVar2);
  }
  FVar7.Data = local_108.Data.AllocatorInstance.Data;
  pFVar11 = (this->ElementsToDraw).AllocatorInstance.Data;
  (this->ElementsToDraw).ArrayNum = iVar9 + 1;
  pFVar11 = pFVar11 + (longlong)iVar9 * 0xc0;
  *(undefined8 *)&pFVar11->field_0x0 = 0;
  lVar10 = (longlong)local_108.Data.ArrayNum;
  *(int *)&pFVar11[8].field_0x0 = local_108.Data.ArrayNum;
  if (local_108.Data.ArrayNum == 0) {
    *(int *)(pFVar11 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_108.Data.ArrayNum,0,(ForAnyElementType *)pFVar11,local_108.Data.ArrayNum,
               (int *)(pFVar11 + 0xc));
    memcpy(*(void **)&pFVar11->field_0x0,FVar7.Data,lVar10 * 2);
  }
  FVar7.Data = local_e8.Data;
  pFVar3 = pFVar11 + 0x20;
  *(FName *)(pFVar11 + 0x10) = local_f8;
  pFVar11[0x18].field_0x0 = local_f0;
  *(FScriptContainerElement **)&pFVar3->field_0x0 = (FScriptContainerElement *)0x0;
  lVar10 = (longlong)(int)local_e0;
  *(int *)&pFVar11[0x28].field_0x0 = (int)local_e0;
  if ((int)local_e0 == 0) {
    *(int *)(pFVar11 + 0x2c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(int)local_e0,0,(ForAnyElementType *)pFVar3,(int)local_e0,
               (int *)(pFVar11 + 0x2c));
    memcpy(*(FScriptContainerElement **)&pFVar3->field_0x0,FVar7.Data,lVar10 * 0x18);
  }
  *(double *)&pFVar11[0x30].field_0x0 = local_d8;
  *(double *)&pFVar11[0x38].field_0x0 = dStack_d0;
  *(double *)&pFVar11[0x40].field_0x0 = local_c8;
  *(double *)&pFVar11[0x48].field_0x0 = dStack_c0;
  *(double *)&pFVar11[0x50].field_0x0 = local_b8;
  *(double *)&pFVar11[0x58].field_0x0 = dStack_b0;
  *(double *)&pFVar11[0x60].field_0x0 = local_a8;
  *(double *)&pFVar11[0x68].field_0x0 = dStack_a0;
  *(double *)&pFVar11[0x70].field_0x0 = local_98;
  *(double *)&pFVar11[0x78].field_0x0 = dStack_90;
  *(double *)&pFVar11[0x80].field_0x0 = local_88;
  *(double *)&pFVar11[0x88].field_0x0 = dStack_80;
  *(double *)&pFVar11[0x90].field_0x0 = local_78;
  *(double *)&pFVar11[0x98].field_0x0 = dStack_70;
  *(double *)&pFVar11[0xa0].field_0x0 = local_68;
  *(double *)&pFVar11[0xa8].field_0x0 = dStack_60;
  *(undefined4 *)&pFVar11[0xb0].field_0x0 = local_58;
  pFVar11[0xb4] = local_54;
  pFVar11[0xb5] = local_53;
  *(ushort *)(pFVar11 + 0xb6) = local_52;
  *(ushort *)(pFVar11 + 0xb6) = local_52;
  *(ushort *)(pFVar11 + 0xb6) = local_52;
  *(ushort *)(pFVar11 + 0xb6) = local_52;
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  return;
}

// AddBox @ 1489c2980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualLogEntry::AddBox
          (FVisualLogEntry *this,TBox<double> *param_1,TMatrix<double> *param_2,FName *param_3,
          Type param_4,FColor *param_5,FString *param_6,ushort param_7,bool param_8)

{
  int *piVar1;
  FVisualLogShapeElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TVector<double> *pTVar7;
  undefined1 auStackY_138 [32];
  FVisualLogShapeElement local_e8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVisualLogShapeElement::FVisualLogShapeElement(&local_e8,param_6,param_5,param_7,param_3);
  if (local_e8.Points.ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,2,&local_e8.Points.AllocatorInstance,local_e8.Points.ArrayNum,
               &local_e8.Points.ArrayMax);
  }
  if (((local_e8.Points.AllocatorInstance.Data <= param_1) &&
      (param_1 < (TBox<double> *)
                 (local_e8.Points.AllocatorInstance.Data + (longlong)local_e8.Points.ArrayMax * 0x18
                 ))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_e8.Points.ArrayNum == local_e8.Points.ArrayMax) {
    local_e8.Points.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_e8.Points.AllocatorInstance,&local_e8.Points.ArrayMax);
  }
  dVar4 = (param_1->Min).field0_0x0._s_0.Y;
  iVar6 = local_e8.Points.ArrayNum + 1;
  *(double *)(local_e8.Points.AllocatorInstance.Data + (longlong)local_e8.Points.ArrayNum * 0x18) =
       (param_1->Min).field0_0x0._s_0.X;
  *(double *)
   (local_e8.Points.AllocatorInstance.Data + (longlong)local_e8.Points.ArrayNum * 0x18 + 8) = dVar4;
  pTVar7 = &param_1->Max;
  *(double *)
   (local_e8.Points.AllocatorInstance.Data + (longlong)local_e8.Points.ArrayNum * 0x18 + 0x10) =
       (param_1->Min).field0_0x0._s_0.Z;
  local_e8.Points.ArrayNum = iVar6;
  if (((local_e8.Points.AllocatorInstance.Data <= pTVar7) &&
      (pTVar7 < local_e8.Points.AllocatorInstance.Data + (longlong)local_e8.Points.ArrayMax * 0x18))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_e8.Points.ArrayNum == local_e8.Points.ArrayMax) {
    local_e8.Points.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_e8.Points.AllocatorInstance,&local_e8.Points.ArrayMax);
  }
  dVar4 = (param_1->Max).field0_0x0._s_0.Y;
  iVar6 = local_e8.Points.ArrayNum + 1;
  *(double *)(local_e8.Points.AllocatorInstance.Data + (longlong)local_e8.Points.ArrayNum * 0x18) =
       (pTVar7->field0_0x0)._s_0.X;
  *(double *)
   (local_e8.Points.AllocatorInstance.Data + (longlong)local_e8.Points.ArrayNum * 0x18 + 8) = dVar4;
  local_e8.Type = param_8 + Box;
  *(double *)
   (local_e8.Points.AllocatorInstance.Data + (longlong)local_e8.Points.ArrayNum * 0x18 + 0x10) =
       (param_1->Max).field0_0x0._s_0.Z;
  local_e8.TransformationMatrix.M[0][0] = param_2->M[0][0];
  local_e8.TransformationMatrix.M[0][1] = param_2->M[0][1];
  local_e8.TransformationMatrix.M[0][2] = param_2->M[0][2];
  local_e8.TransformationMatrix.M[0][3] = param_2->M[0][3];
  pFVar2 = (FVisualLogShapeElement *)(this->ElementsToDraw).AllocatorInstance.Data;
  local_e8.TransformationMatrix.M[1][0] = param_2->M[1][0];
  local_e8.TransformationMatrix.M[1][1] = param_2->M[1][1];
  local_e8.TransformationMatrix.M[1][2] = param_2->M[1][2];
  local_e8.TransformationMatrix.M[1][3] = param_2->M[1][3];
  local_e8.TransformationMatrix.M[2][0] = param_2->M[2][0];
  local_e8.TransformationMatrix.M[2][1] = param_2->M[2][1];
  local_e8.TransformationMatrix.M[2][2] = param_2->M[2][2];
  local_e8.TransformationMatrix.M[2][3] = param_2->M[2][3];
  local_e8.Verbosity.Value = param_4;
  local_e8.TransformationMatrix.M[3][0] = param_2->M[3][0];
  local_e8.TransformationMatrix.M[3][1] = param_2->M[3][1];
  local_e8.TransformationMatrix.M[3][2] = param_2->M[3][2];
  local_e8.TransformationMatrix.M[3][3] = param_2->M[3][3];
  local_e8.Points.ArrayNum = iVar6;
  if (((pFVar2 <= &local_e8) && (&local_e8 < pFVar2 + (this->ElementsToDraw).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (this->ElementsToDraw).ArrayNum;
  piVar1 = &(this->ElementsToDraw).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10c0,&(this->ElementsToDraw).AllocatorInstance,piVar1);
  }
  (this->ElementsToDraw).ArrayNum = iVar6 + 1;
  FVisualLogShapeElement::FVisualLogShapeElement
            ((FVisualLogShapeElement *)
             ((this->ElementsToDraw).AllocatorInstance.Data + (longlong)iVar6 * 0xc0),&local_e8);
  if ((TBox<double> *)local_e8.Points.AllocatorInstance.Data != (TBox<double> *)0x0) {
    FMemory::Free(local_e8.Points.AllocatorInstance.Data);
  }
  if (local_e8.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Description.Data.AllocatorInstance.Data);
  }
  return;
}

// AddBoxes @ 1489c2ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualLogEntry::AddBoxes
          (FVisualLogEntry *this,TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_1
          ,FName *param_2,Type param_3,FColor *param_4)

{
  TArray<FVisualLogShapeElement,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  int iVar6;
  FVisualLogShapeElement *pFVar7;
  longlong lVar8;
  code *pcVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  undefined1 auStackY_168 [32];
  undefined1 local_117 [7];
  FScriptContainerElement *local_110;
  FVisualLogShapeElement local_108;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pTVar1 = &this->ElementsToDraw;
  pFVar7 = (FVisualLogShapeElement *)(pTVar1->AllocatorInstance).Data;
  local_108.TransformationMatrix.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  local_108.TransformationMatrix.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_108.TransformationMatrix.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  local_108.TransformationMatrix.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_108.TransformationMatrix.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  local_108.TransformationMatrix.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_108.TransformationMatrix.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  local_108.TransformationMatrix.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_108.Category = UE::VisualLogger::NAME_UnnamedCategory;
  local_108.TransformationMatrix.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  local_108.TransformationMatrix.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_108.TransformationMatrix.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  local_108.TransformationMatrix.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_108.TransformationMatrix.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  local_108.TransformationMatrix.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_108.TransformationMatrix.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  local_108.TransformationMatrix.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_108.Description.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Description.Data.ArrayNum = 0;
  local_108.Description.Data.ArrayMax = 0;
  local_108.Verbosity.Value = '\a';
  local_108.Points.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Points.ArrayNum = 0;
  local_108.Points.ArrayMax = 0;
  local_108.UniqueId = -1;
  local_108.Type = Box;
  local_108.Color = 0xff;
  local_108.field15_0xb6 = (FVisualLogShapeElement_u_182)0x0;
  if ((pFVar7 <= &local_108) && (&local_108 < pFVar7 + (this->ElementsToDraw).ArrayMax)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  uVar12 = (this->ElementsToDraw).ArrayNum;
  piVar2 = &(this->ElementsToDraw).ArrayMax;
  if (uVar12 == *piVar2) {
    uVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10c0,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->ElementsToDraw).ArrayNum = uVar12 + 1;
  FVisualLogShapeElement::FVisualLogShapeElement
            ((FVisualLogShapeElement *)
             ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar12 * 0xc0),&local_108);
  uVar18 = 0;
  if ((int)uVar12 < (this->ElementsToDraw).ArrayNum) {
    uVar18 = ~uVar12 >> 0x1f;
  }
  if (uVar18 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar14 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar12 * 0xc0;
  local_110 = pFVar14;
  if (local_108.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Points.AllocatorInstance.Data);
  }
  if (local_108.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Description.Data.AllocatorInstance.Data);
  }
  *(FName *)(pFVar14 + 0x10) = *param_2;
  pFVar14[0x18] = (FScriptContainerElement)param_3;
  pFVar15 = pFVar14 + 0x20;
  uVar12 = param_1->ArrayNum * 2;
  if (-1 < (int)uVar12) {
    pFVar3 = pFVar14 + 0x2c;
    if (*(int *)(pFVar14 + 0x2c) < (int)uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar12,(ForAnyElementType *)pFVar15,*(int *)(pFVar14 + 0x28),(int *)pFVar3);
    }
    pFVar16 = (param_1->AllocatorInstance).Data;
    iVar6 = param_1->ArrayNum;
    pFVar17 = pFVar16 + 0x18;
    pFVar19 = pFVar16 + (longlong)iVar6 * 0x38;
    while( true ) {
      if (param_1->ArrayNum != iVar6) {
        local_117[0] = 0;
        `TCheckedPointerIterator<UE::Math::TBox<double>_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_117);
      }
      if (pFVar16 == pFVar19) break;
      if ((*(FScriptContainerElement **)pFVar15 <= pFVar16) &&
         (pFVar16 < *(FScriptContainerElement **)pFVar15 + (longlong)*(int *)pFVar3 * 0x18)) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar13 = *(int *)(pFVar14 + 0x28);
      if (iVar13 == *(int *)pFVar3) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)pFVar15,(int *)pFVar3);
        *(int *)(pFVar14 + 0x28) = iVar13;
      }
      *(int *)(pFVar14 + 0x28) = iVar13 + 1;
      uVar10 = *(undefined8 *)(pFVar16 + 8);
      lVar8 = *(longlong *)pFVar15;
      puVar5 = (undefined8 *)(lVar8 + (longlong)iVar13 * 0x18);
      *puVar5 = *(undefined8 *)pFVar16;
      puVar5[1] = uVar10;
      *(undefined8 *)(lVar8 + 0x10 + (longlong)iVar13 * 0x18) = *(undefined8 *)(pFVar16 + 0x10);
      if ((*(FScriptContainerElement **)pFVar15 <= pFVar17) &&
         (pFVar17 < *(FScriptContainerElement **)pFVar15 + (longlong)*(int *)pFVar3 * 0x18)) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar13 = *(int *)(pFVar14 + 0x28);
      if (iVar13 == *(int *)pFVar3) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)pFVar15,(int *)pFVar3);
        *(int *)(pFVar14 + 0x28) = iVar13;
      }
      pFVar16 = pFVar16 + 0x38;
      *(int *)(pFVar14 + 0x28) = iVar13 + 1;
      uVar10 = *(undefined8 *)(pFVar17 + 8);
      lVar8 = *(longlong *)pFVar15;
      puVar5 = (undefined8 *)(lVar8 + (longlong)iVar13 * 0x18);
      *puVar5 = *(undefined8 *)pFVar17;
      puVar5[1] = uVar10;
      pFVar4 = pFVar17 + 0x10;
      pFVar17 = pFVar17 + 0x38;
      *(undefined8 *)(lVar8 + 0x10 + (longlong)iVar13 * 0x18) = *(undefined8 *)pFVar4;
    }
    local_110[0x18] = (FScriptContainerElement)param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
}

// AddCapsule @ 1489c3090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualLogEntry::AddCapsule
          (FVisualLogEntry *this,TVector<double> *param_1,float param_2,float param_3,
          TQuat<double> *param_4,FName *param_5,Type param_6,FColor *param_7,FString *param_8,
          bool param_9)

{
  TArray<FVisualLogShapeElement,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FVisualLogShapeElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  undefined1 auStackY_178 [32];
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  FVisualLogShapeElement local_f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  FVisualLogShapeElement::FVisualLogShapeElement(&local_f8,param_8,param_7,0,param_5);
  if (local_f8.Points.ArrayMax < 3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,3,&local_f8.Points.AllocatorInstance,local_f8.Points.ArrayNum,
               &local_f8.Points.ArrayMax);
  }
  if (((local_f8.Points.AllocatorInstance.Data <= param_1) &&
      (param_1 < local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayMax * 0x18)
      ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (local_f8.Points.ArrayNum == local_f8.Points.ArrayMax) {
    local_f8.Points.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_f8.Points.AllocatorInstance,&local_f8.Points.ArrayMax);
  }
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  iVar7 = local_f8.Points.ArrayNum + 1;
  *(double *)(local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18) =
       (param_1->field0_0x0)._s_0.X;
  *(double *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 8) = dVar5;
  *(double *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 0x10) =
       (param_1->field0_0x0)._s_0.Z;
  local_128 = (double)param_2;
  dStack_120 = (double)param_3;
  local_118 = param_4->X;
  local_f8.Points.ArrayNum = iVar7;
  if (((local_f8.Points.AllocatorInstance.Data <= (FScriptContainerElement *)&local_128) &&
      ((FScriptContainerElement *)&local_128 <
       local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayMax * 0x18)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (local_f8.Points.ArrayNum == local_f8.Points.ArrayMax) {
    local_f8.Points.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_f8.Points.AllocatorInstance,&local_f8.Points.ArrayMax);
  }
  iVar7 = local_f8.Points.ArrayNum + 1;
  *(double *)(local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18) =
       local_128;
  *(double *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 8) =
       dStack_120;
  *(double *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 0x10) =
       local_118;
  local_110 = param_4->Y;
  dStack_108 = param_4->Z;
  local_100 = param_4->W;
  local_f8.Points.ArrayNum = iVar7;
  if (((local_f8.Points.AllocatorInstance.Data <= (FScriptContainerElement *)&local_110) &&
      ((FScriptContainerElement *)&local_110 <
       local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayMax * 0x18)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (local_f8.Points.ArrayNum == local_f8.Points.ArrayMax) {
    local_f8.Points.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_f8.Points.AllocatorInstance,&local_f8.Points.ArrayMax);
  }
  iVar7 = local_f8.Points.ArrayNum + 1;
  pTVar1 = &this->ElementsToDraw;
  *(double *)(local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18) =
       local_110;
  *(double *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 8) =
       dStack_108;
  local_f8.Type = param_9 + Capsule;
  *(double *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 0x10) =
       local_100;
  pFVar3 = (FVisualLogShapeElement *)(pTVar1->AllocatorInstance).Data;
  local_f8.Verbosity.Value = param_6;
  local_f8.Points.ArrayNum = iVar7;
  if (((pFVar3 <= &local_f8) && (&local_f8 < pFVar3 + (this->ElementsToDraw).ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->ElementsToDraw).ArrayNum;
  piVar2 = &(this->ElementsToDraw).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10c0,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->ElementsToDraw).ArrayNum = iVar7 + 1;
  FVisualLogShapeElement::FVisualLogShapeElement
            ((FVisualLogShapeElement *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0xc0),
             &local_f8);
  if (local_f8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Points.AllocatorInstance.Data);
  }
  if (local_f8.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Description.Data.AllocatorInstance.Data);
  }
  return;
}

// AddCircle @ 1489c3470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualLogEntry::AddCircle
          (FVisualLogEntry *this,TVector<double> *param_1,TVector<double> *param_2,float param_3,
          FName *param_4,Type param_5,FColor *param_6,FString *param_7,ushort param_8,bool param_9)

{
  int iVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  code *pcVar5;
  double dVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_188 [32];
  double local_138;
  double dStack_130;
  undefined8 uStack_128;
  FString local_118;
  FName local_108;
  Type local_100;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined4 local_68;
  FScriptContainerElement local_64;
  FScriptContainerElement local_63;
  ushort local_62;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_e8 = UE::Math::TMatrix<double>::Identity.M[0][0];
  dStack_e0 = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_108 = *param_4;
  local_d8 = UE::Math::TMatrix<double>::Identity.M[0][2];
  dStack_d0 = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_c8 = UE::Math::TMatrix<double>::Identity.M[1][0];
  dStack_c0 = UE::Math::TMatrix<double>::Identity.M[1][1];
  uVar4 = (param_6->field0_0x0).Bits;
  local_b8 = UE::Math::TMatrix<double>::Identity.M[1][2];
  dStack_b0 = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_a8 = UE::Math::TMatrix<double>::Identity.M[2][0];
  dStack_a0 = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_98 = UE::Math::TMatrix<double>::Identity.M[2][2];
  dStack_90 = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_63 = (FScriptContainerElement)
             ((byte)(uVar4 >> 0x18) & 0xc0 | (byte)(uVar4 >> 0x12) & 0x30 |
              (byte)(uVar4 >> 0xc) & 0xc | (byte)(uVar4 >> 6) & 3);
  local_62 = param_8;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  local_100 = 7;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  local_88 = UE::Math::TMatrix<double>::Identity.M[3][0];
  dStack_80 = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_78 = UE::Math::TMatrix<double>::Identity.M[3][2];
  dStack_70 = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_68 = 0xffffffff;
  local_64 = (FScriptContainerElement)0x12;
  local_f0._0_4_ = 0;
  if (&local_118 != param_7) {
    uVar4 = (param_7->Data).ArrayNum;
    pFVar11 = (param_7->Data).AllocatorInstance.Data;
    local_118.Data.ArrayMax = 0;
    local_118.Data.ArrayNum = uVar4;
    local_f0._0_4_ = 0;
    if (uVar4 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar4,0,(ForAnyElementType *)&local_118,uVar4,&local_118.Data.ArrayMax);
      memcpy(local_118.Data.AllocatorInstance.Data,pFVar11,(longlong)(int)uVar4 * 2);
      if (2 < local_f0._4_4_) goto LAB_1489c35fd;
    }
  }
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,3,&local_f8,(int)local_f0,(int *)((longlong)&local_f0 + 4));
LAB_1489c35fd:
  if (((local_f8.Data <= param_1) && (param_1 < local_f8.Data + (longlong)local_f0._4_4_ * 0x18)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = (int)local_f0;
  if ((int)local_f0 == local_f0._4_4_) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&local_f8,(int *)((longlong)&local_f0 + 4));
  }
  dVar6 = (param_1->field0_0x0)._s_0.Y;
  iVar1 = iVar9 + 1;
  *(double *)(local_f8.Data + (longlong)iVar9 * 0x18) = (param_1->field0_0x0)._s_0.X;
  *(double *)(local_f8.Data + (longlong)iVar9 * 0x18 + 8) = dVar6;
  *(double *)(local_f8.Data + (longlong)iVar9 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  local_f0._0_4_ = iVar1;
  if (((local_f8.Data <= param_2) && (param_2 < local_f8.Data + (longlong)local_f0._4_4_ * 0x18)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((int)local_f0 == local_f0._4_4_) {
    local_f0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_f8,(int *)((longlong)&local_f0 + 4));
  }
  dVar6 = (param_2->field0_0x0)._s_0.Y;
  iVar9 = (int)local_f0 + 1;
  *(double *)(local_f8.Data + (longlong)(int)local_f0 * 0x18) = (param_2->field0_0x0)._s_0.X;
  *(double *)(local_f8.Data + (longlong)(int)local_f0 * 0x18 + 8) = dVar6;
  *(double *)(local_f8.Data + (longlong)(int)local_f0 * 0x18 + 0x10) = (param_2->field0_0x0)._s_0.Z;
  local_138 = (double)param_3;
  dStack_130 = 0.0;
  uStack_128 = 0;
  local_f0._0_4_ = iVar9;
  if (((local_f8.Data <= (FScriptContainerElement *)&local_138) &&
      ((FScriptContainerElement *)&local_138 < local_f8.Data + (longlong)local_f0._4_4_ * 0x18)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((int)local_f0 == local_f0._4_4_) {
    local_f0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_f8,(int *)((longlong)&local_f0 + 4));
  }
  lVar10 = (longlong)(int)local_f0;
  local_f0 = CONCAT44(local_f0._4_4_,(int)local_f0 + 1);
  *(double *)(local_f8.Data + lVar10 * 0x18) = local_138;
  *(double *)(local_f8.Data + lVar10 * 0x18 + 8) = dStack_130;
  local_64 = (FScriptContainerElement)(param_9 + '\x12');
  *(undefined8 *)(local_f8.Data + lVar10 * 0x18 + 0x10) = uStack_128;
  pFVar11 = (this->ElementsToDraw).AllocatorInstance.Data;
  local_100 = param_5;
  if (((pFVar11 <= (FScriptContainerElement *)&local_118) &&
      ((FScriptContainerElement *)&local_118 <
       pFVar11 + (longlong)(this->ElementsToDraw).ArrayMax * 0xc0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = (this->ElementsToDraw).ArrayNum;
  piVar2 = &(this->ElementsToDraw).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10c0,&(this->ElementsToDraw).AllocatorInstance,piVar2);
  }
  FVar7.Data = local_118.Data.AllocatorInstance.Data;
  pFVar11 = (this->ElementsToDraw).AllocatorInstance.Data;
  (this->ElementsToDraw).ArrayNum = iVar9 + 1;
  pFVar11 = pFVar11 + (longlong)iVar9 * 0xc0;
  *(undefined8 *)&pFVar11->field_0x0 = 0;
  lVar10 = (longlong)local_118.Data.ArrayNum;
  *(int *)&pFVar11[8].field_0x0 = local_118.Data.ArrayNum;
  if (local_118.Data.ArrayNum == 0) {
    *(int *)(pFVar11 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_118.Data.ArrayNum,0,(ForAnyElementType *)pFVar11,local_118.Data.ArrayNum,
               (int *)(pFVar11 + 0xc));
    memcpy(*(void **)&pFVar11->field_0x0,FVar7.Data,lVar10 * 2);
  }
  FVar7.Data = local_f8.Data;
  pFVar3 = pFVar11 + 0x20;
  *(FName *)(pFVar11 + 0x10) = local_108;
  pFVar11[0x18].field_0x0 = local_100;
  *(FScriptContainerElement **)&pFVar3->field_0x0 = (FScriptContainerElement *)0x0;
  lVar10 = (longlong)(int)local_f0;
  *(int *)&pFVar11[0x28].field_0x0 = (int)local_f0;
  if ((int)local_f0 == 0) {
    *(int *)(pFVar11 + 0x2c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(int)local_f0,0,(ForAnyElementType *)pFVar3,(int)local_f0,
               (int *)(pFVar11 + 0x2c));
    memcpy(*(FScriptContainerElement **)&pFVar3->field_0x0,FVar7.Data,lVar10 * 0x18);
  }
  *(double *)&pFVar11[0x30].field_0x0 = local_e8;
  *(double *)&pFVar11[0x38].field_0x0 = dStack_e0;
  *(double *)&pFVar11[0x40].field_0x0 = local_d8;
  *(double *)&pFVar11[0x48].field_0x0 = dStack_d0;
  *(double *)&pFVar11[0x50].field_0x0 = local_c8;
  *(double *)&pFVar11[0x58].field_0x0 = dStack_c0;
  *(double *)&pFVar11[0x60].field_0x0 = local_b8;
  *(double *)&pFVar11[0x68].field_0x0 = dStack_b0;
  *(double *)&pFVar11[0x70].field_0x0 = local_a8;
  *(double *)&pFVar11[0x78].field_0x0 = dStack_a0;
  *(double *)&pFVar11[0x80].field_0x0 = local_98;
  *(double *)&pFVar11[0x88].field_0x0 = dStack_90;
  *(double *)&pFVar11[0x90].field_0x0 = local_88;
  *(double *)&pFVar11[0x98].field_0x0 = dStack_80;
  *(double *)&pFVar11[0xa0].field_0x0 = local_78;
  *(double *)&pFVar11[0xa8].field_0x0 = dStack_70;
  *(undefined4 *)&pFVar11[0xb0].field_0x0 = local_68;
  pFVar11[0xb4] = local_64;
  pFVar11[0xb5] = local_63;
  *(ushort *)(pFVar11 + 0xb6) = local_62;
  *(ushort *)(pFVar11 + 0xb6) = local_62;
  *(ushort *)(pFVar11 + 0xb6) = local_62;
  *(ushort *)(pFVar11 + 0xb6) = local_62;
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  return;
}

// AddCone @ 1489c3a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualLogEntry::AddCone
          (FVisualLogEntry *this,TVector<double> *param_1,TVector<double> *param_2,float param_3,
          float param_4,float param_5,FName *param_6,Type param_7,FColor *param_8,FString *param_9,
          ushort param_10,bool param_11)

{
  int *piVar1;
  FVisualLogShapeElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  undefined1 auStackY_168 [32];
  double local_118;
  double dStack_110;
  double local_108;
  FVisualLogShapeElement local_f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  FVisualLogShapeElement::FVisualLogShapeElement(&local_f8,param_9,param_8,param_10,param_6);
  if (local_f8.Points.ArrayMax < 3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,3,&local_f8.Points.AllocatorInstance,local_f8.Points.ArrayNum,
               &local_f8.Points.ArrayMax);
  }
  if (((local_f8.Points.AllocatorInstance.Data <= param_1) &&
      (param_1 < local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayMax * 0x18)
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_f8.Points.ArrayNum == local_f8.Points.ArrayMax) {
    local_f8.Points.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_f8.Points.AllocatorInstance,&local_f8.Points.ArrayMax);
  }
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  iVar6 = local_f8.Points.ArrayNum + 1;
  *(double *)(local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18) =
       (param_1->field0_0x0)._s_0.X;
  *(double *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 8) = dVar4;
  *(double *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 0x10) =
       (param_1->field0_0x0)._s_0.Z;
  local_f8.Points.ArrayNum = iVar6;
  if (((local_f8.Points.AllocatorInstance.Data <= param_2) &&
      (param_2 < local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayMax * 0x18)
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_f8.Points.ArrayNum == local_f8.Points.ArrayMax) {
    local_f8.Points.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_f8.Points.AllocatorInstance,&local_f8.Points.ArrayMax);
  }
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  iVar6 = local_f8.Points.ArrayNum + 1;
  *(double *)(local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18) =
       (param_2->field0_0x0)._s_0.X;
  *(double *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 8) = dVar4;
  local_118 = (double)param_3;
  *(double *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 0x10) =
       (param_2->field0_0x0)._s_0.Z;
  local_108 = (double)param_5;
  dStack_110 = (double)param_4;
  local_f8.Points.ArrayNum = iVar6;
  if (((local_f8.Points.AllocatorInstance.Data <= (FScriptContainerElement *)&local_118) &&
      ((FScriptContainerElement *)&local_118 <
       local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayMax * 0x18)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_f8.Points.ArrayNum == local_f8.Points.ArrayMax) {
    local_f8.Points.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_f8.Points.AllocatorInstance,&local_f8.Points.ArrayMax);
  }
  iVar6 = local_f8.Points.ArrayNum + 1;
  *(double *)(local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18) =
       local_118;
  *(double *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 8) =
       dStack_110;
  local_f8.Type = param_11 + Cone;
  *(double *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 0x10) =
       local_108;
  pFVar2 = (FVisualLogShapeElement *)(this->ElementsToDraw).AllocatorInstance.Data;
  local_f8.Verbosity.Value = param_7;
  local_f8.Points.ArrayNum = iVar6;
  if (((pFVar2 <= &local_f8) && (&local_f8 < pFVar2 + (this->ElementsToDraw).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (this->ElementsToDraw).ArrayNum;
  piVar1 = &(this->ElementsToDraw).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10c0,&(this->ElementsToDraw).AllocatorInstance,piVar1);
  }
  (this->ElementsToDraw).ArrayNum = iVar6 + 1;
  FVisualLogShapeElement::FVisualLogShapeElement
            ((FVisualLogShapeElement *)
             ((this->ElementsToDraw).AllocatorInstance.Data + (longlong)iVar6 * 0xc0),&local_f8);
  if (local_f8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Points.AllocatorInstance.Data);
  }
  if (local_f8.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Description.Data.AllocatorInstance.Data);
  }
  return;
}

// AddConvexElement @ 1489c4080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualLogEntry::AddConvexElement
          (FVisualLogEntry *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,FName *param_2,
          Type param_3,FColor *param_4,FString *param_5)

{
  int *piVar1;
  FScriptContainerElement *_Src;
  FVisualLogShapeElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 auStackY_138 [32];
  FVisualLogShapeElement local_e8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVisualLogShapeElement::FVisualLogShapeElement(&local_e8,param_5,param_4,0,param_2);
  if (&local_e8.Points != param_1) {
    iVar5 = param_1->ArrayNum;
    _Src = (param_1->AllocatorInstance).Data;
    local_e8.Points.ArrayNum = iVar5;
    if (((iVar5 != 0) || (local_e8.Points.ArrayMax != 0)) &&
       (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar5,local_e8.Points.ArrayMax,&local_e8.Points.AllocatorInstance,iVar5,
                   &local_e8.Points.ArrayMax), iVar5 != 0)) {
      memcpy(local_e8.Points.AllocatorInstance.Data,_Src,(longlong)iVar5 * 0x18);
    }
  }
  pFVar2 = (FVisualLogShapeElement *)(this->ElementsToDraw).AllocatorInstance.Data;
  local_e8.Type = Polygon;
  local_e8.Verbosity.Value = param_3;
  if (((pFVar2 <= &local_e8) && (&local_e8 < pFVar2 + (this->ElementsToDraw).ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->ElementsToDraw).ArrayNum;
  piVar1 = &(this->ElementsToDraw).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10c0,&(this->ElementsToDraw).AllocatorInstance,piVar1);
  }
  (this->ElementsToDraw).ArrayNum = iVar5 + 1;
  FVisualLogShapeElement::FVisualLogShapeElement
            ((FVisualLogShapeElement *)
             ((this->ElementsToDraw).AllocatorInstance.Data + (longlong)iVar5 * 0xc0),&local_e8);
  if (local_e8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Points.AllocatorInstance.Data);
  }
  if (local_e8.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Description.Data.AllocatorInstance.Data);
  }
  return;
}

// AddCoordinateSystem @ 1489c4240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualLogEntry::AddCoordinateSystem
          (FVisualLogEntry *this,TVector<double> *param_1,TRotator<double> *param_2,float param_3,
          FName *param_4,Type param_5,FColor *param_6,FString *param_7,ushort param_8)

{
  int *piVar1;
  FVisualLogShapeElement *pFVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackY_178 [32];
  double local_128;
  double dStack_120;
  undefined8 uStack_118;
  TVector<double> local_110;
  FVisualLogShapeElement local_f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  FVisualLogShapeElement::FVisualLogShapeElement(&local_f8,param_7,param_6,param_8,param_4);
  local_f8.Verbosity.Value = param_5;
  local_f8.Type = CoordinateSystem;
  if (local_f8.Points.ArrayMax < 3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,3,&local_f8.Points.AllocatorInstance,local_f8.Points.ArrayNum,
               &local_f8.Points.ArrayMax);
  }
  if (((local_f8.Points.AllocatorInstance.Data <= param_1) &&
      (param_1 < local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayMax * 0x18)
      ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_f8.Points.ArrayNum == local_f8.Points.ArrayMax) {
    local_f8.Points.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_f8.Points.AllocatorInstance,&local_f8.Points.ArrayMax);
  }
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  *(double *)(local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18) =
       (param_1->field0_0x0)._s_0.X;
  *(double *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 8) = dVar4;
  *(double *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 0x10) =
       (param_1->field0_0x0)._s_0.Z;
  local_f8.Points.ArrayNum = local_f8.Points.ArrayNum + 1;
  pFVar8 = (FScriptContainerElement *)UE::Math::TRotator<double>::Vector(param_2,&local_110);
  if (((local_f8.Points.AllocatorInstance.Data <= pFVar8) &&
      (pFVar8 < local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayMax * 0x18))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_f8.Points.ArrayNum == local_f8.Points.ArrayMax) {
    local_f8.Points.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_f8.Points.AllocatorInstance,&local_f8.Points.ArrayMax);
  }
  iVar7 = local_f8.Points.ArrayNum + 1;
  uVar5 = *(undefined8 *)(pFVar8 + 8);
  *(undefined8 *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18) =
       *(undefined8 *)pFVar8;
  *(undefined8 *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 8) = uVar5;
  *(undefined8 *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 0x10) =
       *(undefined8 *)(pFVar8 + 0x10);
  local_128 = (double)param_3;
  dStack_120 = 0.0;
  uStack_118 = 0;
  local_f8.Points.ArrayNum = iVar7;
  if (((local_f8.Points.AllocatorInstance.Data <= (FScriptContainerElement *)&local_128) &&
      ((FScriptContainerElement *)&local_128 <
       local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayMax * 0x18)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_f8.Points.ArrayNum == local_f8.Points.ArrayMax) {
    local_f8.Points.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_f8.Points.AllocatorInstance,&local_f8.Points.ArrayMax);
  }
  iVar7 = local_f8.Points.ArrayNum + 1;
  *(double *)(local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18) =
       local_128;
  *(double *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 8) =
       dStack_120;
  *(undefined8 *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 0x10) =
       uStack_118;
  pFVar2 = (FVisualLogShapeElement *)(this->ElementsToDraw).AllocatorInstance.Data;
  local_f8.Points.ArrayNum = iVar7;
  if (((pFVar2 <= &local_f8) && (&local_f8 < pFVar2 + (this->ElementsToDraw).ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar7 = (this->ElementsToDraw).ArrayNum;
  piVar1 = &(this->ElementsToDraw).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10c0,&(this->ElementsToDraw).AllocatorInstance,piVar1);
  }
  (this->ElementsToDraw).ArrayNum = iVar7 + 1;
  FVisualLogShapeElement::FVisualLogShapeElement
            ((FVisualLogShapeElement *)
             ((this->ElementsToDraw).AllocatorInstance.Data + (longlong)iVar7 * 0xc0),&local_f8);
  if (local_f8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Points.AllocatorInstance.Data);
  }
  if (local_f8.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Description.Data.AllocatorInstance.Data);
  }
  return;
}

// AddCylinder @ 1489c45f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualLogEntry::AddCylinder
          (FVisualLogEntry *this,TVector<double> *param_1,TVector<double> *param_2,float param_3,
          FName *param_4,Type param_5,FColor *param_6,FString *param_7,ushort param_8,bool param_9)

{
  int *piVar1;
  FVisualLogShapeElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  undefined1 auStackY_168 [32];
  double local_118;
  double dStack_110;
  undefined8 local_108;
  FVisualLogShapeElement local_f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  FVisualLogShapeElement::FVisualLogShapeElement(&local_f8,param_7,param_6,param_8,param_4);
  if (local_f8.Points.ArrayMax < 3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,3,&local_f8.Points.AllocatorInstance,local_f8.Points.ArrayNum,
               &local_f8.Points.ArrayMax);
  }
  if (((local_f8.Points.AllocatorInstance.Data <= param_1) &&
      (param_1 < local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayMax * 0x18)
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_f8.Points.ArrayNum == local_f8.Points.ArrayMax) {
    local_f8.Points.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_f8.Points.AllocatorInstance,&local_f8.Points.ArrayMax);
  }
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  iVar6 = local_f8.Points.ArrayNum + 1;
  *(double *)(local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18) =
       (param_1->field0_0x0)._s_0.X;
  *(double *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 8) = dVar4;
  *(double *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 0x10) =
       (param_1->field0_0x0)._s_0.Z;
  local_f8.Points.ArrayNum = iVar6;
  if (((local_f8.Points.AllocatorInstance.Data <= param_2) &&
      (param_2 < local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayMax * 0x18)
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_f8.Points.ArrayNum == local_f8.Points.ArrayMax) {
    local_f8.Points.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_f8.Points.AllocatorInstance,&local_f8.Points.ArrayMax);
  }
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  iVar6 = local_f8.Points.ArrayNum + 1;
  *(double *)(local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18) =
       (param_2->field0_0x0)._s_0.X;
  *(double *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 8) = dVar4;
  *(double *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 0x10) =
       (param_2->field0_0x0)._s_0.Z;
  local_118 = (double)param_3;
  dStack_110 = (double)param_8;
  local_108 = 0;
  local_f8.Points.ArrayNum = iVar6;
  if (((local_f8.Points.AllocatorInstance.Data <= (FScriptContainerElement *)&local_118) &&
      ((FScriptContainerElement *)&local_118 <
       local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayMax * 0x18)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_f8.Points.ArrayNum == local_f8.Points.ArrayMax) {
    local_f8.Points.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_f8.Points.AllocatorInstance,&local_f8.Points.ArrayMax);
  }
  iVar6 = local_f8.Points.ArrayNum + 1;
  *(double *)(local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18) =
       local_118;
  *(double *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 8) =
       dStack_110;
  local_f8.Type = param_9 + Cylinder;
  *(undefined8 *)
   (local_f8.Points.AllocatorInstance.Data + (longlong)local_f8.Points.ArrayNum * 0x18 + 0x10) =
       local_108;
  pFVar2 = (FVisualLogShapeElement *)(this->ElementsToDraw).AllocatorInstance.Data;
  local_f8.Verbosity.Value = param_5;
  local_f8.Points.ArrayNum = iVar6;
  if (((pFVar2 <= &local_f8) && (&local_f8 < pFVar2 + (this->ElementsToDraw).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (this->ElementsToDraw).ArrayNum;
  piVar1 = &(this->ElementsToDraw).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10c0,&(this->ElementsToDraw).AllocatorInstance,piVar1);
  }
  (this->ElementsToDraw).ArrayNum = iVar6 + 1;
  FVisualLogShapeElement::FVisualLogShapeElement
            ((FVisualLogShapeElement *)
             ((this->ElementsToDraw).AllocatorInstance.Data + (longlong)iVar6 * 0xc0),&local_f8);
  if (local_f8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Points.AllocatorInstance.Data);
  }
  if (local_f8.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Description.Data.AllocatorInstance.Data);
  }
  return;
}

// AddDataBlock @ 1489c49b0

/* WARNING: Enum "Type": Some values do not have unique names */

FVisualLogDataBlock * __thiscall
FVisualLogEntry::AddDataBlock
          (FVisualLogEntry *this,FString *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,FName *param_3,Type param_4)

{
  int *piVar1;
  TArray<FVisualLogDataBlock,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FName *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FVisualLogDataBlock *pFVar9;
  wchar_t *pwVar10;
  uint uVar11;
  FName *pFVar12;
  size_t _Size;
  FName local_res8;
  FScriptContainerElement *local_res10;
  FName local_68;
  FName local_60;
  Type local_58;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_50;
  uint local_40;
  
  local_60 = *param_3;
  local_58 = 0;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  local_40 = 0xffffffff;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar10);
  local_68 = local_res8;
  if (&local_50 != param_2) {
    iVar3 = param_2->ArrayNum;
    pFVar4 = (param_2->AllocatorInstance).Data;
    local_50.ArrayNum = iVar3;
    if ((iVar3 != 0) || (local_50.ArrayMax != 0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar3,local_50.ArrayMax,&local_50.AllocatorInstance,iVar3,&local_50.ArrayMax);
      if (iVar3 != 0) {
        memcpy(local_50.AllocatorInstance.Data,pFVar4,(longlong)iVar3);
      }
    }
  }
  pTVar2 = &this->DataBlocks;
  pFVar5 = (FName *)(pTVar2->AllocatorInstance).Data;
  local_58 = param_4;
  if ((pFVar5 <= &local_68) && (&local_68 < pFVar5 + (longlong)(this->DataBlocks).ArrayMax * 6)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FVisualLogDataBlock *)(*pcVar6)();
      return pFVar9;
    }
  }
  uVar8 = (this->DataBlocks).ArrayNum;
  piVar1 = &(this->DataBlocks).ArrayMax;
  if (uVar8 == *piVar1) {
    uVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  (this->DataBlocks).ArrayNum = uVar8 + 1;
  pFVar12 = (FName *)(pFVar4 + (longlong)(int)uVar8 * 0x30);
  pFVar5 = pFVar12 + 3;
  *pFVar12 = local_68;
  pFVar12[1] = local_60;
  *(Type *)&pFVar12[2].ComparisonIndex.Value = local_58;
  pFVar5->ComparisonIndex = 0;
  pFVar5->Number = 0;
  _Size = (size_t)local_50.ArrayNum;
  local_res10 = local_50.AllocatorInstance.Data;
  pFVar12[4].ComparisonIndex.Value = local_50.ArrayNum;
  if (local_50.ArrayNum == 0) {
    pFVar12[4].Number = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_50.ArrayNum,0,(ForAnyElementType *)pFVar5,local_50.ArrayNum,
               (int *)&pFVar12[4].Number);
    memcpy((void *)*pFVar5,local_res10,_Size);
  }
  pFVar12[5].ComparisonIndex.Value = local_40;
  uVar11 = 0;
  if ((int)uVar8 < (this->DataBlocks).ArrayNum) {
    uVar11 = ~uVar8 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FVisualLogDataBlock *)(*pcVar6)();
      return pFVar9;
    }
  }
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return (FVisualLogDataBlock *)(pFVar4 + (longlong)(int)uVar8 * 0x30);
}

// AddElement @ 1489c4c10

void __thiscall FVisualLogEntry::AddElement(FVisualLogEntry *this,FVisualLogShapeElement *param_1)

{
  TArray<FVisualLogShapeElement,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FVisualLogShapeElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar1 = &this->ElementsToDraw;
  pFVar3 = (FVisualLogShapeElement *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->ElementsToDraw).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ElementsToDraw).ArrayNum;
  piVar2 = &(this->ElementsToDraw).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10c0,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->ElementsToDraw).ArrayNum = iVar6 + 1;
  FVisualLogShapeElement::FVisualLogShapeElement
            ((FVisualLogShapeElement *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0xc0),
             param_1);
  return;
}

// AddEvent @ 1489c4cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FVisualLogEntry::AddEvent(FVisualLogEntry *this,FVisualLogEventBase *param_1)

{
  TArray<FVisualLogEvent,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ulonglong uVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  undefined1 auStackY_108 [32];
  undefined1 local_b8 [40];
  ForAnyElementType local_90;
  undefined8 local_88;
  TBitArray<FDefaultBitArrayAllocator> local_80;
  undefined8 uStack_60;
  void *local_50;
  undefined4 local_48;
  int local_40;
  long64 local_38;
  FName local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pTVar1 = &this->Events;
  ::FString::FString((FString *)local_b8,&param_1->Name);
  ::FString::FString((FString *)(local_b8 + 0x10),&param_1->FriendlyDesc);
  local_b8[0x20] = param_1->Verbosity;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  local_80.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_80.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_80.MaxBits = _UNK_150631d94;
  uStack_60 = _UNK_150631d98;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = 1;
  local_38 = 0;
  local_30.ComparisonIndex.Value = 0;
  local_30.Number = 0;
  if ((pFVar3 <= (FScriptContainerElement *)local_b8) &&
     ((FScriptContainerElement *)local_b8 < pFVar3 + (longlong)(this->Events).ArrayMax * 0x90)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
  }
  iVar8 = (this->Events).ArrayNum;
  piVar2 = &(this->Events).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x890,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Events).ArrayNum = iVar8 + 1;
  FVisualLogEvent::FVisualLogEvent
            ((FVisualLogEvent *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x90),
             (FVisualLogEvent *)local_b8);
  local_48 = 0;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  uVar5 = local_88 >> 0x20;
  local_88 = local_88 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&local_90,0,(int *)((longlong)&local_88 + 4));
  }
  iVar6 = local_80.MaxBits;
  uStack_60 = 0xffffffff;
  local_80._24_8_ = (ulonglong)(uint)local_80.MaxBits << 0x20;
  if (0x80 < (uint)iVar6) {
    local_80.NumBits = 0;
    local_80.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_80,0);
  }
  if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  if ((FScriptContainerElement *)local_b8._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._16_8_);
  }
  if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  return iVar8;
}

// AddHistogramData @ 1489c4ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualLogEntry::AddHistogramData
          (FVisualLogEntry *this,TVector2<double> *param_1,FName *param_2,Type param_3,
          FName *param_4,FName *param_5)

{
  TArray<FVisualLogHistogramSample,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FName *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  FName local_48;
  FNameEntryId FStack_40;
  FNameEntryId FStack_3c;
  uint uStack_38;
  FNameEntryId FStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  double local_28;
  double dStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_48 = *param_2;
  pTVar1 = &this->HistogramSamples;
  local_28 = (param_1->field0_0x0)._s_0.X;
  dStack_20 = (param_1->field0_0x0)._s_0.Y;
  pFVar3 = (FName *)(pTVar1->AllocatorInstance).Data;
  local_18 = 0xffffffff;
  FStack_3c = (*param_4).ComparisonIndex;
  uStack_38 = (*param_4).Number;
  FStack_34 = (*param_5).ComparisonIndex;
  uStack_30 = (*param_5).Number;
  FStack_40.Value._0_1_ = param_3;
  if ((pFVar3 <= &local_48) &&
     (&local_48 < pFVar3 + (longlong)(this->HistogramSamples).ArrayMax * 7)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->HistogramSamples).ArrayNum;
  piVar2 = &(this->HistogramSamples).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&pTVar1->AllocatorInstance,piVar2);
  }
  FVar6.Number = FStack_3c.Value;
  FVar6.ComparisonIndex.Value = FStack_40.Value;
  (this->HistogramSamples).ArrayNum = iVar8 + 1;
  lVar9 = (longlong)iVar8 * 0x38;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  *(FName *)(pFVar4 + lVar9) = local_48;
  ((FName *)(pFVar4 + lVar9))[1] = FVar6;
  *(ulonglong *)(pFVar4 + lVar9 + 0x10) = CONCAT44(FStack_34.Value,uStack_38);
  *(ulonglong *)(pFVar4 + lVar9 + 0x10 + 8) = CONCAT44(uStack_2c,uStack_30);
  *(double *)(pFVar4 + lVar9 + 0x20) = local_28;
  *(double *)(pFVar4 + lVar9 + 0x20 + 8) = dStack_20;
  *(ulonglong *)(pFVar4 + lVar9 + 0x30) = CONCAT44(uStack_14,local_18);
  return;
}

// AddLocation @ 1489c5110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualLogEntry::AddLocation
          (FVisualLogEntry *this,TVector<double> *param_1,FName *param_2,Type param_3,
          FColor *param_4,FString *param_5,ushort param_6)

{
  int *piVar1;
  FVisualLogShapeElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  undefined1 auStackY_128 [32];
  FVisualLogShapeElement local_d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  FVisualLogShapeElement::FVisualLogShapeElement(&local_d8,param_5,param_4,param_6,param_2);
  if (((local_d8.Points.AllocatorInstance.Data <= param_1) &&
      (param_1 < local_d8.Points.AllocatorInstance.Data + (longlong)local_d8.Points.ArrayMax * 0x18)
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_d8.Points.ArrayNum == local_d8.Points.ArrayMax) {
    local_d8.Points.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_d8.Points.AllocatorInstance,&local_d8.Points.ArrayMax);
  }
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  iVar6 = local_d8.Points.ArrayNum + 1;
  *(double *)(local_d8.Points.AllocatorInstance.Data + (longlong)local_d8.Points.ArrayNum * 0x18) =
       (param_1->field0_0x0)._s_0.X;
  *(double *)
   (local_d8.Points.AllocatorInstance.Data + (longlong)local_d8.Points.ArrayNum * 0x18 + 8) = dVar4;
  *(double *)
   (local_d8.Points.AllocatorInstance.Data + (longlong)local_d8.Points.ArrayNum * 0x18 + 0x10) =
       (param_1->field0_0x0)._s_0.Z;
  pFVar2 = (FVisualLogShapeElement *)(this->ElementsToDraw).AllocatorInstance.Data;
  local_d8.Type = SinglePoint;
  local_d8.Verbosity.Value = param_3;
  local_d8.Points.ArrayNum = iVar6;
  if (((pFVar2 <= &local_d8) && (&local_d8 < pFVar2 + (this->ElementsToDraw).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (this->ElementsToDraw).ArrayNum;
  piVar1 = &(this->ElementsToDraw).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10c0,&(this->ElementsToDraw).AllocatorInstance,piVar1);
  }
  (this->ElementsToDraw).ArrayNum = iVar6 + 1;
  FVisualLogShapeElement::FVisualLogShapeElement
            ((FVisualLogShapeElement *)
             ((this->ElementsToDraw).AllocatorInstance.Data + (longlong)iVar6 * 0xc0),&local_d8);
  if (local_d8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Points.AllocatorInstance.Data);
  }
  if (local_d8.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Description.Data.AllocatorInstance.Data);
  }
  return;
}

// AddMesh @ 1489c5320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualLogEntry::AddMesh
          (FVisualLogEntry *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,FName *param_3,Type param_4,
          FColor *param_5,FString *param_6)

{
  int *piVar1;
  FVisualLogShapeElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  undefined1 auStackY_1a8 [32];
  ForAnyElementType local_158;
  int local_150;
  int iStack_14c;
  double local_148;
  double dStack_140;
  undefined8 local_138;
  double local_130;
  double dStack_128;
  double local_120;
  FVisualLogShapeElement local_118;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  FVisualLogShapeElement::FVisualLogShapeElement(&local_118,param_6,param_5,0,param_3);
  uVar8 = param_2->ArrayNum / 3;
  uVar10 = param_1->ArrayNum + 1 + uVar8;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (local_118.Points.ArrayMax < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar10,&local_118.Points.AllocatorInstance,local_118.Points.ArrayNum,
               &local_118.Points.ArrayMax);
  }
  local_148 = (double)param_1->ArrayNum;
  dStack_140 = (double)uVar8;
  local_138 = 0;
  if (((local_118.Points.AllocatorInstance.Data <= (FScriptContainerElement *)&local_148) &&
      ((FScriptContainerElement *)&local_148 <
       local_118.Points.AllocatorInstance.Data + (longlong)local_118.Points.ArrayMax * 0x18)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_118.Points.ArrayNum == local_118.Points.ArrayMax) {
    local_118.Points.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_118.Points.AllocatorInstance,&local_118.Points.ArrayMax);
  }
  iVar6 = local_118.Points.ArrayNum + 1;
  *(double *)(local_118.Points.AllocatorInstance.Data + (longlong)local_118.Points.ArrayNum * 0x18)
       = local_148;
  *(double *)
   (local_118.Points.AllocatorInstance.Data + (longlong)local_118.Points.ArrayNum * 0x18 + 8) =
       dStack_140;
  *(undefined8 *)
   (local_118.Points.AllocatorInstance.Data + (longlong)local_118.Points.ArrayNum * 0x18 + 0x10) =
       local_138;
  local_118.Points.ArrayNum = iVar6;
  if ((&local_118.Points == param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = param_1->ArrayNum;
  if (iVar6 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar6,&local_118.Points.AllocatorInstance,&local_118.Points.ArrayNum,
                       &local_118.Points.ArrayMax);
    memcpy(local_118.Points.AllocatorInstance.Data + (longlong)iVar5 * 0x18,
           (param_1->AllocatorInstance).Data,(longlong)iVar6 * 0x18);
  }
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = 0;
  iStack_14c = 0;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  if (0 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar8,&local_158,0,&iStack_14c);
  }
  iVar6 = param_2->ArrayNum;
  if (0 < iVar6) {
    lVar9 = 4;
    uVar8 = 1;
    do {
      uVar10 = 0;
      if ((int)(uVar8 + 1) < iVar6) {
        uVar10 = ~(uVar8 + 1) >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar10 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      dVar12 = (double)*(int *)((param_2->AllocatorInstance).Data + lVar9 + 4);
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar10 = 0;
      if ((int)(uVar8 - 1) < param_2->ArrayNum) {
        uVar10 = ~(uVar8 - 1) >> 0x1f;
      }
      dVar11 = (double)*(int *)((param_2->AllocatorInstance).Data + lVar9);
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_130 = (double)*(int *)((param_2->AllocatorInstance).Data + lVar9 + -4);
      dStack_128 = dVar11;
      local_120 = dVar12;
      if (((local_158.Data <= (FScriptContainerElement *)&local_130) &&
          ((FScriptContainerElement *)&local_130 < local_158.Data + (longlong)iStack_14c * 0x18)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_150 == iStack_14c) {
        local_150 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_158,&iStack_14c);
      }
      lVar7 = (longlong)local_150;
      lVar9 = lVar9 + 0xc;
      local_150 = local_150 + 1;
      *(double *)(local_158.Data + lVar7 * 0x18) = local_130;
      *(double *)(local_158.Data + lVar7 * 0x18 + 8) = dStack_128;
      *(double *)(local_158.Data + lVar7 * 0x18 + 0x10) = local_120;
      iVar5 = uVar8 + 2;
      iVar6 = param_2->ArrayNum;
      uVar8 = uVar8 + 3;
    } while (iVar5 < iVar6);
  }
  lVar9 = (longlong)local_150;
  if (local_150 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,local_150,&local_118.Points.AllocatorInstance,
                       &local_118.Points.ArrayNum,&local_118.Points.ArrayMax);
    memcpy(local_118.Points.AllocatorInstance.Data + (longlong)iVar6 * 0x18,local_158.Data,
           lVar9 * 0x18);
  }
  pFVar2 = (FVisualLogShapeElement *)(this->ElementsToDraw).AllocatorInstance.Data;
  local_118.Verbosity.Value = param_4;
  local_118.Type = Mesh;
  if (((pFVar2 <= &local_118) && (&local_118 < pFVar2 + (this->ElementsToDraw).ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (this->ElementsToDraw).ArrayNum;
  piVar1 = &(this->ElementsToDraw).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10c0,&(this->ElementsToDraw).AllocatorInstance,piVar1);
  }
  (this->ElementsToDraw).ArrayNum = iVar6 + 1;
  FVisualLogShapeElement::FVisualLogShapeElement
            ((FVisualLogShapeElement *)
             ((this->ElementsToDraw).AllocatorInstance.Data + (longlong)iVar6 * 0xc0),&local_118);
  if (local_158.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data);
  }
  if (local_118.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Points.AllocatorInstance.Data);
  }
  if (local_118.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Description.Data.AllocatorInstance.Data);
  }
  return;
}

// AddPath @ 1489c6a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualLogEntry::AddPath
          (FVisualLogEntry *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,FName *param_2,
          Type param_3,FColor *param_4,FString *param_5,ushort param_6)

{
  int *piVar1;
  FScriptContainerElement *_Src;
  FVisualLogShapeElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 auStackY_138 [32];
  FVisualLogShapeElement local_e8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVisualLogShapeElement::FVisualLogShapeElement(&local_e8,param_5,param_4,param_6,param_2);
  if (&local_e8.Points != param_1) {
    iVar5 = param_1->ArrayNum;
    _Src = (param_1->AllocatorInstance).Data;
    local_e8.Points.ArrayNum = iVar5;
    if (((iVar5 != 0) || (local_e8.Points.ArrayMax != 0)) &&
       (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar5,local_e8.Points.ArrayMax,&local_e8.Points.AllocatorInstance,iVar5,
                   &local_e8.Points.ArrayMax), iVar5 != 0)) {
      memcpy(local_e8.Points.AllocatorInstance.Data,_Src,(longlong)iVar5 * 0x18);
    }
  }
  pFVar2 = (FVisualLogShapeElement *)(this->ElementsToDraw).AllocatorInstance.Data;
  local_e8.Type = Path;
  local_e8.Verbosity.Value = param_3;
  if (((pFVar2 <= &local_e8) && (&local_e8 < pFVar2 + (this->ElementsToDraw).ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->ElementsToDraw).ArrayNum;
  piVar1 = &(this->ElementsToDraw).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10c0,&(this->ElementsToDraw).AllocatorInstance,piVar1);
  }
  (this->ElementsToDraw).ArrayNum = iVar5 + 1;
  FVisualLogShapeElement::FVisualLogShapeElement
            ((FVisualLogShapeElement *)
             ((this->ElementsToDraw).AllocatorInstance.Data + (longlong)iVar5 * 0xc0),&local_e8);
  if (local_e8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Points.AllocatorInstance.Data);
  }
  if (local_e8.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Description.Data.AllocatorInstance.Data);
  }
  return;
}

// AddPulledConvex @ 1489c6f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualLogEntry::AddPulledConvex
          (FVisualLogEntry *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,double param_2,
          double param_3,FName *param_4,Type param_5,FColor *param_6,FString *param_7)

{
  int *piVar1;
  FVisualLogShapeElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStackY_178 [32];
  double local_128;
  double dStack_120;
  undefined8 local_118;
  FVisualLogShapeElement local_108;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  FVisualLogShapeElement::FVisualLogShapeElement(&local_108,param_7,param_6,0,param_4);
  uVar7 = param_1->ArrayNum + 1;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  if (local_108.Points.ArrayMax < (int)uVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar7,&local_108.Points.AllocatorInstance,local_108.Points.ArrayNum,
               &local_108.Points.ArrayMax);
  }
  local_118 = 0;
  local_128 = param_2;
  dStack_120 = param_3;
  if (((local_108.Points.AllocatorInstance.Data <= (FScriptContainerElement *)&local_128) &&
      ((FScriptContainerElement *)&local_128 <
       local_108.Points.AllocatorInstance.Data + (longlong)local_108.Points.ArrayMax * 0x18)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_108.Points.ArrayNum == local_108.Points.ArrayMax) {
    local_108.Points.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_108.Points.AllocatorInstance,&local_108.Points.ArrayMax);
  }
  iVar6 = local_108.Points.ArrayNum + 1;
  *(double *)(local_108.Points.AllocatorInstance.Data + (longlong)local_108.Points.ArrayNum * 0x18)
       = local_128;
  *(double *)
   (local_108.Points.AllocatorInstance.Data + (longlong)local_108.Points.ArrayNum * 0x18 + 8) =
       dStack_120;
  *(undefined8 *)
   (local_108.Points.AllocatorInstance.Data + (longlong)local_108.Points.ArrayNum * 0x18 + 0x10) =
       local_118;
  local_108.Points.ArrayNum = iVar6;
  if ((&local_108.Points == param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = param_1->ArrayNum;
  if (iVar6 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar6,&local_108.Points.AllocatorInstance,&local_108.Points.ArrayNum,
                       &local_108.Points.ArrayMax);
    memcpy(local_108.Points.AllocatorInstance.Data + (longlong)iVar5 * 0x18,
           (param_1->AllocatorInstance).Data,(longlong)iVar6 * 0x18);
  }
  pFVar2 = (FVisualLogShapeElement *)(this->ElementsToDraw).AllocatorInstance.Data;
  local_108.Verbosity.Value = param_5;
  local_108.Type = NavAreaMesh;
  if (((pFVar2 <= &local_108) && (&local_108 < pFVar2 + (this->ElementsToDraw).ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (this->ElementsToDraw).ArrayNum;
  piVar1 = &(this->ElementsToDraw).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10c0,&(this->ElementsToDraw).AllocatorInstance,piVar1);
  }
  (this->ElementsToDraw).ArrayNum = iVar6 + 1;
  FVisualLogShapeElement::FVisualLogShapeElement
            ((FVisualLogShapeElement *)
             ((this->ElementsToDraw).AllocatorInstance.Data + (longlong)iVar6 * 0xc0),&local_108);
  if (local_108.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Points.AllocatorInstance.Data);
  }
  if (local_108.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Description.Data.AllocatorInstance.Data);
  }
  return;
}

// AddSegment @ 1489c7410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualLogEntry::AddSegment
          (FVisualLogEntry *this,TVector<double> *param_1,TVector<double> *param_2,FName *param_3,
          Type param_4,FColor *param_5,FString *param_6,ushort param_7)

{
  int *piVar1;
  FVisualLogShapeElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  undefined1 auStackY_138 [32];
  FVisualLogShapeElement local_e8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVisualLogShapeElement::FVisualLogShapeElement(&local_e8,param_6,param_5,param_7,param_3);
  if (local_e8.Points.ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,2,&local_e8.Points.AllocatorInstance,local_e8.Points.ArrayNum,
               &local_e8.Points.ArrayMax);
  }
  if (((local_e8.Points.AllocatorInstance.Data <= param_1) &&
      (param_1 < local_e8.Points.AllocatorInstance.Data + (longlong)local_e8.Points.ArrayMax * 0x18)
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_e8.Points.ArrayNum == local_e8.Points.ArrayMax) {
    local_e8.Points.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_e8.Points.AllocatorInstance,&local_e8.Points.ArrayMax);
  }
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  iVar6 = local_e8.Points.ArrayNum + 1;
  *(double *)(local_e8.Points.AllocatorInstance.Data + (longlong)local_e8.Points.ArrayNum * 0x18) =
       (param_1->field0_0x0)._s_0.X;
  *(double *)
   (local_e8.Points.AllocatorInstance.Data + (longlong)local_e8.Points.ArrayNum * 0x18 + 8) = dVar4;
  *(double *)
   (local_e8.Points.AllocatorInstance.Data + (longlong)local_e8.Points.ArrayNum * 0x18 + 0x10) =
       (param_1->field0_0x0)._s_0.Z;
  local_e8.Points.ArrayNum = iVar6;
  if (((local_e8.Points.AllocatorInstance.Data <= param_2) &&
      (param_2 < local_e8.Points.AllocatorInstance.Data + (longlong)local_e8.Points.ArrayMax * 0x18)
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_e8.Points.ArrayNum == local_e8.Points.ArrayMax) {
    local_e8.Points.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_e8.Points.AllocatorInstance,&local_e8.Points.ArrayMax);
  }
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  iVar6 = local_e8.Points.ArrayNum + 1;
  *(double *)(local_e8.Points.AllocatorInstance.Data + (longlong)local_e8.Points.ArrayNum * 0x18) =
       (param_2->field0_0x0)._s_0.X;
  *(double *)
   (local_e8.Points.AllocatorInstance.Data + (longlong)local_e8.Points.ArrayNum * 0x18 + 8) = dVar4;
  *(double *)
   (local_e8.Points.AllocatorInstance.Data + (longlong)local_e8.Points.ArrayNum * 0x18 + 0x10) =
       (param_2->field0_0x0)._s_0.Z;
  pFVar2 = (FVisualLogShapeElement *)(this->ElementsToDraw).AllocatorInstance.Data;
  local_e8.Verbosity.Value = param_4;
  local_e8.Type = Segment;
  local_e8.Points.ArrayNum = iVar6;
  if (((pFVar2 <= &local_e8) && (&local_e8 < pFVar2 + (this->ElementsToDraw).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (this->ElementsToDraw).ArrayNum;
  piVar1 = &(this->ElementsToDraw).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10c0,&(this->ElementsToDraw).AllocatorInstance,piVar1);
  }
  (this->ElementsToDraw).ArrayNum = iVar6 + 1;
  FVisualLogShapeElement::FVisualLogShapeElement
            ((FVisualLogShapeElement *)
             ((this->ElementsToDraw).AllocatorInstance.Data + (longlong)iVar6 * 0xc0),&local_e8);
  if (local_e8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Points.AllocatorInstance.Data);
  }
  if (local_e8.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Description.Data.AllocatorInstance.Data);
  }
  return;
}

// AddSphere @ 1489c76e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualLogEntry::AddSphere
          (FVisualLogEntry *this,TVector<double> *param_1,float param_2,FName *param_3,Type param_4,
          FColor *param_5,FString *param_6,bool param_7)

{
  TArray<FVisualLogShapeElement,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FVisualLogShapeElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  undefined1 auStackY_128 [32];
  FVisualLogShapeElement local_d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  FVisualLogShapeElement::FVisualLogShapeElement
            (&local_d8,param_6,param_5,(ushort)(int)param_2,param_3);
  if (((local_d8.Points.AllocatorInstance.Data <= param_1) &&
      (param_1 < local_d8.Points.AllocatorInstance.Data + (longlong)local_d8.Points.ArrayMax * 0x18)
      ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (local_d8.Points.ArrayNum == local_d8.Points.ArrayMax) {
    local_d8.Points.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_d8.Points.AllocatorInstance,&local_d8.Points.ArrayMax);
  }
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  iVar7 = local_d8.Points.ArrayNum + 1;
  *(double *)(local_d8.Points.AllocatorInstance.Data + (longlong)local_d8.Points.ArrayNum * 0x18) =
       (param_1->field0_0x0)._s_0.X;
  *(double *)
   (local_d8.Points.AllocatorInstance.Data + (longlong)local_d8.Points.ArrayNum * 0x18 + 8) = dVar5;
  local_d8.Type = param_7 + Sphere;
  pTVar1 = &this->ElementsToDraw;
  *(double *)
   (local_d8.Points.AllocatorInstance.Data + (longlong)local_d8.Points.ArrayNum * 0x18 + 0x10) =
       (param_1->field0_0x0)._s_0.Z;
  pFVar3 = (FVisualLogShapeElement *)(pTVar1->AllocatorInstance).Data;
  local_d8.Verbosity.Value = param_4;
  local_d8.Points.ArrayNum = iVar7;
  if (((pFVar3 <= &local_d8) && (&local_d8 < pFVar3 + (this->ElementsToDraw).ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->ElementsToDraw).ArrayNum;
  piVar2 = &(this->ElementsToDraw).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10c0,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->ElementsToDraw).ArrayNum = iVar7 + 1;
  FVisualLogShapeElement::FVisualLogShapeElement
            ((FVisualLogShapeElement *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0xc0),
             &local_d8);
  if (local_d8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Points.AllocatorInstance.Data);
  }
  if (local_d8.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Description.Data.AllocatorInstance.Data);
  }
  return;
}

// AddText @ 1489c7ca0

/* WARNING: Removing unreachable block (ram,0x0001489c7de4) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualLogEntry::AddText(FVisualLogEntry *this,FString *param_1,FName *param_2,Type param_3)

{
  TArray<FVisualLogLine,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FString local_48;
  FName local_38;
  FScriptContainerElement local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  FColor_u_0 local_18;
  FScriptContainerElement local_14;
  
  pTVar1 = &this->LogLines;
  ::FString::FString(&local_48,param_1);
  local_38 = *param_2;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  local_18 = FColor::White.field0_0x0;
  local_2c = 0xffffffff;
  local_28 = 0;
  local_20 = 0;
  local_14 = (FScriptContainerElement)0x0;
  local_30 = (FScriptContainerElement)param_3;
  if (((pFVar6 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 < pFVar6 + (longlong)(this->LogLines).ArrayMax * 0x38))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->LogLines).ArrayNum;
  piVar2 = &(this->LogLines).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->LogLines).ArrayNum = iVar5 + 1;
  pFVar6 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x38;
  *(undefined8 *)pFVar6 = 0;
  *(FScriptContainerElement **)pFVar6 = local_48.Data.AllocatorInstance.Data;
  *(int *)(pFVar6 + 8) = local_48.Data.ArrayNum;
  *(int *)(pFVar6 + 0xc) = local_48.Data.ArrayMax;
  *(FName *)(pFVar6 + 0x10) = local_38;
  pFVar6[0x18] = local_30;
  *(undefined4 *)(pFVar6 + 0x1c) = local_2c;
  *(undefined8 *)(pFVar6 + 0x20) = local_28;
  *(undefined8 *)(pFVar6 + 0x28) = local_20;
  ((FColor_u_0 *)(pFVar6 + 0x30))->_s_0 = (FColor_u_0_s_0)local_18;
  pFVar6[0x34] = local_14;
  return;
}

// InitializeEntry @ 1489f7470

void __thiscall FVisualLogEntry::InitializeEntry(FVisualLogEntry *this,double param_1)

{
  undefined1 auVar1 [16];
  
  Reset(this);
  this->bIsInitialized = '\x01';
  auVar1._8_4_ = SUB84(param_1,0);
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = (int)((ulonglong)param_1 >> 0x20);
  this->TimeStamp = param_1;
  this->WorldTimeStamp = (double)auVar1._8_8_;
  return;
}

// MoveTo @ 1489fcd80

void __thiscall FVisualLogEntry::MoveTo(FVisualLogEntry *this,FVisualLogEntry *param_1)

{
  TArray<FVisualLogEvent,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FVisualLogEvent,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FVisualLogLine,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FVisualLogLine,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FVisualLogStatusCategory,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FVisualLogStatusCategory,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FVisualLogShapeElement,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FVisualLogShapeElement,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FVisualLogHistogramSample,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FVisualLogHistogramSample,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FVisualLogDataBlock,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<FVisualLogDataBlock,TSizedDefaultAllocator<32>_> *pTVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  code *pcVar16;
  bool bVar17;
  int iVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_48 [16];
  
  if ((this->bIsInitialized == '\0') || (param_1->bIsInitialized == '\0')) {
    local_res8[0] = 0;
    `FVisualLogEntry::MoveTo'::__l2::<lambda_1>::operator()(local_res8);
  }
  if (param_1->TimeStamp != this->TimeStamp) {
    local_res10[0] = 0;
    `FVisualLogEntry::MoveTo'::__l2::<lambda_2>::operator()(local_res10);
  }
  if (((param_1->bPassedClassAllowList ^ this->bPassedClassAllowList) & 1) != 0) {
    local_res18[0] = 0;
    `FVisualLogEntry::MoveTo'::__l2::<lambda_3>::operator()(local_res18);
  }
  if (((param_1->field_0x28 ^ this->field_0x28) & 2) != 0) {
    local_res20[0] = 0;
    `FVisualLogEntry::MoveTo'::__l2::<lambda_4>::operator()(local_res20);
  }
  if (((this->field_0x28 ^ param_1->field_0x28) & 4) != 0) {
    local_48[0] = 0;
    `FVisualLogEntry::MoveTo'::__l2::<lambda_5>::operator()(local_48);
  }
  pTVar1 = &param_1->Events;
  piVar2 = &(param_1->Events).ArrayNum;
  pTVar3 = &this->Events;
  if (*piVar2 == 0) {
    if (pTVar1 != pTVar3) {
      DestructItems<FVisualLogEvent,int>((FVisualLogEvent *)(pTVar1->AllocatorInstance).Data,0);
      pFVar15 = (pTVar1->AllocatorInstance).Data;
      if (pFVar15 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar15);
      }
      (pTVar1->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
      (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *piVar2 = (this->Events).ArrayNum;
      (param_1->Events).ArrayMax = (this->Events).ArrayMax;
      (this->Events).ArrayNum = 0;
      (this->Events).ArrayMax = 0;
    }
  }
  else {
    if ((pTVar1 == pTVar3) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x986,L""), bVar17)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    iVar14 = (this->Events).ArrayNum;
    if (iVar14 != 0) {
      iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x90,8,iVar14,&pTVar1->AllocatorInstance,piVar2,
                          &(param_1->Events).ArrayMax);
      memmove((pTVar1->AllocatorInstance).Data + (longlong)iVar18 * 0x90,
              (pTVar3->AllocatorInstance).Data,(longlong)iVar14 * 0x90);
      (this->Events).ArrayNum = 0;
    }
  }
  pTVar4 = &param_1->LogLines;
  piVar2 = &(param_1->LogLines).ArrayNum;
  pTVar5 = &this->LogLines;
  if (*piVar2 == 0) {
    if (pTVar4 != pTVar5) {
      DestructItems<FVisualLogLine,int>((FVisualLogLine *)(pTVar4->AllocatorInstance).Data,0);
      pFVar15 = (pTVar4->AllocatorInstance).Data;
      if (pFVar15 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar15);
      }
      (pTVar4->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
      (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *piVar2 = (this->LogLines).ArrayNum;
      (param_1->LogLines).ArrayMax = (this->LogLines).ArrayMax;
      (this->LogLines).ArrayNum = 0;
      (this->LogLines).ArrayMax = 0;
    }
  }
  else {
    if ((pTVar4 == pTVar5) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x986,L""), bVar17)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    iVar14 = (this->LogLines).ArrayNum;
    if (iVar14 != 0) {
      iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x38,8,iVar14,&pTVar4->AllocatorInstance,piVar2,
                          &(param_1->LogLines).ArrayMax);
      memmove((pTVar4->AllocatorInstance).Data + (longlong)iVar18 * 0x38,
              (pTVar5->AllocatorInstance).Data,(longlong)iVar14 * 0x38);
      (this->LogLines).ArrayNum = 0;
    }
  }
  pTVar6 = &param_1->Status;
  piVar2 = &(param_1->Status).ArrayNum;
  pTVar7 = &this->Status;
  if (*piVar2 == 0) {
    if (pTVar6 != pTVar7) {
      DestructItems<FVisualLogStatusCategory,int>
                ((FVisualLogStatusCategory *)(pTVar6->AllocatorInstance).Data,0);
      pFVar15 = (pTVar6->AllocatorInstance).Data;
      if (pFVar15 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar15);
      }
      (pTVar6->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *piVar2 = (this->Status).ArrayNum;
      (param_1->Status).ArrayMax = (this->Status).ArrayMax;
      (this->Status).ArrayNum = 0;
      (this->Status).ArrayMax = 0;
    }
  }
  else {
    if ((pTVar6 == pTVar7) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x986,L""), bVar17)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    iVar14 = (this->Status).ArrayNum;
    if (iVar14 != 0) {
      iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x38,8,iVar14,&pTVar6->AllocatorInstance,piVar2,
                          &(param_1->Status).ArrayMax);
      memmove((pTVar6->AllocatorInstance).Data + (longlong)iVar18 * 0x38,
              (pTVar7->AllocatorInstance).Data,(longlong)iVar14 * 0x38);
      (this->Status).ArrayNum = 0;
    }
  }
  pTVar8 = &param_1->ElementsToDraw;
  piVar2 = &(param_1->ElementsToDraw).ArrayNum;
  pTVar9 = &this->ElementsToDraw;
  if (*piVar2 == 0) {
    if (pTVar8 != pTVar9) {
      DestructItems<FVisualLogShapeElement,int>
                ((FVisualLogShapeElement *)(pTVar8->AllocatorInstance).Data,0);
      pFVar15 = (pTVar8->AllocatorInstance).Data;
      if (pFVar15 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar15);
      }
      (pTVar8->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *piVar2 = (this->ElementsToDraw).ArrayNum;
      (param_1->ElementsToDraw).ArrayMax = (this->ElementsToDraw).ArrayMax;
      (this->ElementsToDraw).ArrayNum = 0;
      (this->ElementsToDraw).ArrayMax = 0;
    }
  }
  else {
    if ((pTVar8 == pTVar9) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x986,L""), bVar17)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    iVar14 = (this->ElementsToDraw).ArrayNum;
    if (iVar14 != 0) {
      iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0xc0,0x10,iVar14,&pTVar8->AllocatorInstance,piVar2,
                          &(param_1->ElementsToDraw).ArrayMax);
      memmove((pTVar8->AllocatorInstance).Data + (longlong)iVar18 * 0xc0,
              (pTVar9->AllocatorInstance).Data,(longlong)iVar14 * 0xc0);
      (this->ElementsToDraw).ArrayNum = 0;
    }
  }
  pTVar10 = &param_1->HistogramSamples;
  piVar2 = &(param_1->HistogramSamples).ArrayNum;
  pTVar11 = &this->HistogramSamples;
  if (*piVar2 == 0) {
    if (pTVar10 != pTVar11) {
      pFVar15 = (pTVar10->AllocatorInstance).Data;
      if (pFVar15 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar15);
      }
      (pTVar10->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
      (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *piVar2 = (this->HistogramSamples).ArrayNum;
      (param_1->HistogramSamples).ArrayMax = (this->HistogramSamples).ArrayMax;
      (this->HistogramSamples).ArrayNum = 0;
      (this->HistogramSamples).ArrayMax = 0;
    }
  }
  else {
    if ((pTVar10 == pTVar11) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x986,L""), bVar17)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    iVar14 = (this->HistogramSamples).ArrayNum;
    if (iVar14 != 0) {
      iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x38,8,iVar14,&pTVar10->AllocatorInstance,piVar2,
                          &(param_1->HistogramSamples).ArrayMax);
      memmove((pTVar10->AllocatorInstance).Data + (longlong)iVar18 * 0x38,
              (pTVar11->AllocatorInstance).Data,(longlong)iVar14 * 0x38);
      (this->HistogramSamples).ArrayNum = 0;
    }
  }
  pTVar12 = &param_1->DataBlocks;
  piVar2 = &(param_1->DataBlocks).ArrayNum;
  pTVar13 = &this->DataBlocks;
  if (*piVar2 == 0) {
    if (pTVar12 != pTVar13) {
      DestructItems<FVisualLogDataBlock,int>
                ((FVisualLogDataBlock *)(pTVar12->AllocatorInstance).Data,0);
      pFVar15 = (pTVar12->AllocatorInstance).Data;
      if (pFVar15 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar15);
      }
      (pTVar12->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
      (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *piVar2 = (this->DataBlocks).ArrayNum;
      (param_1->DataBlocks).ArrayMax = (this->DataBlocks).ArrayMax;
      (this->DataBlocks).ArrayNum = 0;
      (this->DataBlocks).ArrayMax = 0;
    }
  }
  else {
    if ((pTVar12 == pTVar13) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x986,L""), bVar17)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    iVar14 = (this->DataBlocks).ArrayNum;
    if (iVar14 != 0) {
      iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x30,8,iVar14,&pTVar12->AllocatorInstance,piVar2,
                          &(param_1->DataBlocks).ArrayMax);
      memmove((pTVar12->AllocatorInstance).Data + (longlong)iVar18 * 0x30,
              (pTVar13->AllocatorInstance).Data,(longlong)iVar14 * 0x30);
      (this->DataBlocks).ArrayNum = 0;
    }
  }
  Reset(this);
  return;
}

// Reset @ 148a0f750

void __thiscall FVisualLogEntry::Reset(FVisualLogEntry *this)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  byte bVar4;
  
  uVar2 = this->field_0x28;
  (this->Location).field0_0x0._s_0.X = 0.0;
  (this->Location).field0_0x0._s_0.Y = 0.0;
  (this->Location).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&this->field_0x28 = 0;
  (this->Events).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Events).ArrayNum = 0;
  (this->Events).ArrayMax = 0;
  (this->LogLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LogLines).ArrayNum = 0;
  (this->LogLines).ArrayMax = 0;
  (this->Status).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Status).ArrayNum = 0;
  (this->Status).ArrayMax = 0;
  (this->ElementsToDraw).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementsToDraw).ArrayNum = 0;
  (this->ElementsToDraw).ArrayMax = 0;
  (this->HistogramSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HistogramSamples).ArrayNum = 0;
  (this->HistogramSamples).ArrayMax = 0;
  (this->DataBlocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataBlocks).ArrayNum = 0;
  (this->DataBlocks).ArrayMax = 0;
  this->TimeStamp = -1.0;
  this->WorldTimeStamp = -1.0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = (double)uVar3;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bPassedClassAllowList = '\0';
  this->bIsInitialized = '\0';
  this->bIsLocationValid = '\0';
  this->bIsAllowedToLog = '\0';
  this->bPassedObjectAllowList = '\0';
  (this->Location).field0_0x0._s_0.Z = (double)uVar3;
  (this->Events).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Events).ArrayNum = 0;
  (this->Events).ArrayMax = 0;
  (this->LogLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LogLines).ArrayNum = 0;
  (this->LogLines).ArrayMax = 0;
  (this->Status).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Status).ArrayNum = 0;
  (this->Status).ArrayMax = 0;
  (this->ElementsToDraw).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementsToDraw).ArrayNum = 0;
  (this->ElementsToDraw).ArrayMax = 0;
  (this->HistogramSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HistogramSamples).ArrayNum = 0;
  (this->HistogramSamples).ArrayMax = 0;
  (this->DataBlocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataBlocks).ArrayNum = 0;
  (this->DataBlocks).ArrayMax = 0;
  bVar4 = (this->bPassedClassAllowList ^ this->bPassedClassAllowList) & 1 ^ this->field_0x28;
  bVar4 = (bVar4 ^ uVar2) & 2 ^ bVar4;
  this->field_0x28 = (bVar4 ^ uVar2) & 4 ^ bVar4;
  return;
}

// SetPassedObjectAllowList @ 148a16310

void __thiscall FVisualLogEntry::SetPassedObjectAllowList(FVisualLogEntry *this,bool param_1)

{
  this->field_0x28 =
       -(this->bPassedClassAllowList != 0 || param_1) & 4U |
       this->field_0x28 & 0xf9 | param_1 * '\x02';
  return;
}

// UpdateAllowedToLog @ 148a1df10

void __thiscall FVisualLogEntry::UpdateAllowedToLog(FVisualLogEntry *this)

{
  undefined1 uVar1;
  
  this->bIsAllowedToLog =
       (byte)-(this->bPassedClassAllowList != '\0' || this->bPassedObjectAllowList != '\0') >> 2;
  return;
}

// operator() @ 150534770

bool __thiscall `FVisualLogEntry::MoveTo'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<570859925970878584>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<570859925970878584>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150534840

bool __thiscall `FVisualLogEntry::MoveTo'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<570859925970878585>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<570859925970878585>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505349d0

bool __thiscall `FVisualLogEntry::MoveTo'::__l2::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<570859925970878586>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<570859925970878586>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150534a10

bool __thiscall `FVisualLogEntry::MoveTo'::__l2::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<570859925970878587>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<570859925970878587>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150534a50

bool __thiscall `FVisualLogEntry::MoveTo'::__l2::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<570859925970878588>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<570859925970878588>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

