// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// Push @ 14208c610

void __thiscall
TExpandingChunkedList<FUObjectItem_*,64>::Push
          (TExpandingChunkedList<FUObjectItem_*,64> *this,FUObjectItem *param_1)

{
  int *piVar1;
  atomic<bool> aVar2;
  FChunk *pFVar3;
  FChunk *pFVar4;
  FChunk *pFVar5;
  
  LOCK();
  aVar2 = (this->Lock).bFlag;
  (this->Lock).bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar2 != (atomic<bool>)0x0) {
    aVar2 = (this->Lock).bFlag;
    while (aVar2 != (atomic<bool>)0x0) {
      aVar2 = (this->Lock).bFlag;
    }
    LOCK();
    aVar2 = (this->Lock).bFlag;
    (this->Lock).bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  pFVar3 = this->Head;
  if ((pFVar3 != (FChunk *)0x0) && (pFVar3->NumItems < 0x40)) {
    pFVar3->Items[pFVar3->NumItems] = param_1;
    piVar1 = &this->Head->NumItems;
    *piVar1 = *piVar1 + 1;
    (this->Lock).bFlag = (atomic<bool>)0x0;
    return;
  }
  (this->Lock).bFlag = (atomic<bool>)0x0;
  pFVar5 = FMemory::Malloc(0x210,0x40);
  memset(&pFVar5->field_0xc,0,0x204);
  pFVar5->Next = (FChunk *)0x0;
  pFVar5->NumItems = 0;
  LOCK();
  aVar2 = (this->Lock).bFlag;
  (this->Lock).bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar2 != (atomic<bool>)0x0) {
    aVar2 = (this->Lock).bFlag;
    while (aVar2 != (atomic<bool>)0x0) {
      aVar2 = (this->Lock).bFlag;
    }
    LOCK();
    aVar2 = (this->Lock).bFlag;
    (this->Lock).bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  pFVar4 = this->Head;
  if (((pFVar4 == (FChunk *)0x0) || (pFVar3 == pFVar4)) || (0x3f < pFVar4->NumItems)) {
    pFVar5->Next = pFVar4;
    this->Head = pFVar5;
    pFVar5->Items[pFVar5->NumItems] = param_1;
    piVar1 = &this->Head->NumItems;
    *piVar1 = *piVar1 + 1;
    (this->Lock).bFlag = (atomic<bool>)0x0;
  }
  else {
    pFVar4->Items[pFVar4->NumItems] = param_1;
    piVar1 = &this->Head->NumItems;
    *piVar1 = *piVar1 + 1;
    (this->Lock).bFlag = (atomic<bool>)0x0;
    FMemory::Free(pFVar5);
  }
  return;
}

// Push @ 14208c750

void __thiscall
TExpandingChunkedList<UObject_*,64>::Push
          (TExpandingChunkedList<UObject_*,64> *this,UObject *param_1)

{
  int *piVar1;
  atomic<bool> aVar2;
  FChunk *pFVar3;
  FChunk *pFVar4;
  FChunk *pFVar5;
  
  LOCK();
  aVar2 = (this->Lock).bFlag;
  (this->Lock).bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar2 != (atomic<bool>)0x0) {
    aVar2 = (this->Lock).bFlag;
    while (aVar2 != (atomic<bool>)0x0) {
      aVar2 = (this->Lock).bFlag;
    }
    LOCK();
    aVar2 = (this->Lock).bFlag;
    (this->Lock).bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  pFVar3 = this->Head;
  if ((pFVar3 != (FChunk *)0x0) && (pFVar3->NumItems < 0x40)) {
    pFVar3->Items[pFVar3->NumItems] = param_1;
    piVar1 = &this->Head->NumItems;
    *piVar1 = *piVar1 + 1;
    (this->Lock).bFlag = (atomic<bool>)0x0;
    return;
  }
  (this->Lock).bFlag = (atomic<bool>)0x0;
  pFVar5 = FMemory::Malloc(0x210,0x40);
  memset(&pFVar5->field_0xc,0,0x204);
  pFVar5->Next = (FChunk *)0x0;
  pFVar5->NumItems = 0;
  LOCK();
  aVar2 = (this->Lock).bFlag;
  (this->Lock).bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar2 != (atomic<bool>)0x0) {
    aVar2 = (this->Lock).bFlag;
    while (aVar2 != (atomic<bool>)0x0) {
      aVar2 = (this->Lock).bFlag;
    }
    LOCK();
    aVar2 = (this->Lock).bFlag;
    (this->Lock).bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  pFVar4 = this->Head;
  if (((pFVar4 == (FChunk *)0x0) || (pFVar3 == pFVar4)) || (0x3f < pFVar4->NumItems)) {
    pFVar5->Next = pFVar4;
    this->Head = pFVar5;
    pFVar5->Items[pFVar5->NumItems] = param_1;
    piVar1 = &this->Head->NumItems;
    *piVar1 = *piVar1 + 1;
    (this->Lock).bFlag = (atomic<bool>)0x0;
  }
  else {
    pFVar4->Items[pFVar4->NumItems] = param_1;
    piVar1 = &this->Head->NumItems;
    *piVar1 = *piVar1 + 1;
    (this->Lock).bFlag = (atomic<bool>)0x0;
    FMemory::Free(pFVar5);
  }
  return;
}

