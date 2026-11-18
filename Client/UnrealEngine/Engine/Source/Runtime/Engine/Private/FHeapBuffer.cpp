// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FHeapBuffer @ 1484418c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHeapBuffer * __thiscall Nanite::FStreamingManager::FHeapBuffer::FHeapBuffer(FHeapBuffer *this)

{
  this->TotalUpload = 0;
  FSpanAllocator::FSpanAllocator(&this->Allocator,false);
  (this->UploadBuffer)._padding_ = 0;
  (this->UploadBuffer)._padding_ = 0;
  (this->UploadBuffer)._padding_ = 0;
  *(undefined4 *)&(this->UploadBuffer)._padding_ = 0;
  (this->UploadBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadBuffer).bFloat4Buffer = false;
  (this->DataBuffer).Reference = (FRDGPooledBuffer *)0x0;
  return this;
}

// ~FHeapBuffer @ 148445a00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall Nanite::FStreamingManager::FHeapBuffer::~FHeapBuffer(FHeapBuffer *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar3;
  longlong lVar4;
  
  pFVar2 = (this->DataBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  FRDGScatterUploadBuffer::~FRDGScatterUploadBuffer(&this->UploadBuffer);
  FVar3 = (this->Allocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar3 = (this->Allocator).FreeSpans.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar3);
    return;
  }
  return;
}

// Release @ 1484832a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall Nanite::FStreamingManager::FHeapBuffer::Release(FHeapBuffer *this)

{
  longlong *plVar1;
  TRefCountPtr<FRDGPooledBuffer> *pTVar2;
  longlong lVar3;
  FRDGPooledBuffer *pFVar4;
  undefined8 uStack_2c;
  undefined8 local_20 [3];
  
  pTVar2 = &(this->UploadBuffer).ScatterBuffer;
  uStack_2c = 0;
  (this->UploadBuffer)._padding_ = 0;
  (this->UploadBuffer)._padding_ = 0;
  *(undefined4 *)&(this->UploadBuffer)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->UploadBuffer)._padding_ + 4) = 0;
  *(undefined4 *)&(this->UploadBuffer)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->UploadBuffer)._padding_ + 4) = 0;
  if (pTVar2 != (TRefCountPtr<FRDGPooledBuffer> *)((longlong)&uStack_2c + 4)) {
    pFVar4 = pTVar2->Reference;
    pTVar2->Reference = (FRDGPooledBuffer *)0x0;
    if (pFVar4 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar4->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        if (plVar1 == (longlong *)0x0) {
          pFVar4 = (FRDGPooledBuffer *)0x0;
        }
        if (pFVar4 != (FRDGPooledBuffer *)0x0) {
          (**(code **)pFVar4->_padding_)(0,1);
        }
      }
    }
  }
  pTVar2 = &(this->UploadBuffer).UploadBuffer;
  if (pTVar2 != (TRefCountPtr<FRDGPooledBuffer> *)local_20) {
    pFVar4 = pTVar2->Reference;
    pTVar2->Reference = (FRDGPooledBuffer *)0x0;
    if (pFVar4 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar4->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        if (plVar1 == (longlong *)0x0) {
          pFVar4 = (FRDGPooledBuffer *)0x0;
        }
        if (pFVar4 != (FRDGPooledBuffer *)0x0) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
  }
  (this->UploadBuffer).bFloat4Buffer = false;
  pFVar4 = (this->DataBuffer).Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    (this->DataBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  return;
}

