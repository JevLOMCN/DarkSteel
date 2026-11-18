// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Reset @ 1487548b0

void __thiscall UE::SVT::FStreamingManager::FPendingRequest::Reset(FPendingRequest *this)

{
  FIoBuffer *pFVar1;
  int *piVar2;
  FBulkDataBatchRequest FVar3;
  BufCore *this_00;
  FIoBuffer this_01;
  int iVar4;
  FIoBuffer local_28 [2];
  
  this->SVTHandle = 0xffff;
  this->FrameIndex = 0xffff;
  this->TileOffset = 0xffffffff;
  this->TileCount = 0xffffffff;
  if ((this->Request != (FBulkDataBatchRequest)0x0) &&
     (iVar4 = (**(code **)(*(longlong *)this->Request + 0x20))(), iVar4 == 1)) {
    if (this->Request != (FBulkDataBatchRequest)0x0) {
      (**(code **)(*(longlong *)this->Request + 0x28))();
    }
    FBulkDataBatchRequest::Wait(&this->Request);
  }
  FVar3 = this->Request;
  if (FVar3 != (FBulkDataBatchRequest)0x0) {
    this->Request = (FBulkDataBatchRequest)0x0;
    (**(code **)(*(longlong *)FVar3 + 0x10))();
  }
  FIoBuffer::FIoBuffer(local_28);
  pFVar1 = &this->RequestBuffer;
  if (pFVar1 != local_28) {
    this_00 = (pFVar1->CorePtr).Reference;
    (pFVar1->CorePtr).Reference = (BufCore *)local_28[0].CorePtr.Reference;
    local_28[0].CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
    if (this_00 != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount(this_00);
      LOCK();
      piVar2 = &this_00->NumRefs;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        FIoBuffer::BufCore::~BufCore(this_00);
        ::operator_delete(this_00,0x20);
      }
    }
  }
  this_01.CorePtr.Reference = local_28[0].CorePtr.Reference;
  if (local_28[0].CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_28[0].CorePtr.Reference);
    LOCK();
    piVar2 = (int *)((longlong)this_01.CorePtr.Reference + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)this_01.CorePtr.Reference);
      ::operator_delete((void *)this_01.CorePtr.Reference,0x20);
    }
  }
  this->IssuedInFrame = 0;
  this->bBlocking = false;
  return;
}

