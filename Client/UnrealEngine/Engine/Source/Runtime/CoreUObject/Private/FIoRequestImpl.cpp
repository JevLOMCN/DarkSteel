// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// SetResult @ 1421512b0

void __thiscall FIoRequestImpl::SetResult(FIoRequestImpl *this,FIoBuffer param_1)

{
  int *piVar1;
  int iVar2;
  BufCore *pBVar3;
  
  if (((this->Buffer).bIsSet != false) &&
     (pBVar3 = (this->Buffer).TypedValue.CorePtr.Reference, pBVar3 != (BufCore *)0x0)) {
    FIoBuffer::BufCore::CheckRefCount(pBVar3);
    LOCK();
    piVar1 = &pBVar3->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(pBVar3);
      ::operator_delete(pBVar3,0x20);
    }
  }
  (this->Buffer).TypedValue.CorePtr.Reference = (BufCore *)0x0;
  pBVar3 = *(BufCore **)param_1.CorePtr.Reference;
  (this->Buffer).TypedValue.CorePtr.Reference = pBVar3;
  if (pBVar3 != (BufCore *)0x0) {
    LOCK();
    pBVar3->NumRefs = pBVar3->NumRefs + 1;
    UNLOCK();
  }
  (this->Buffer).bIsSet = true;
  pBVar3 = *(BufCore **)param_1.CorePtr.Reference;
  if (pBVar3 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(pBVar3);
    LOCK();
    piVar1 = &pBVar3->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(pBVar3);
      ::operator_delete(pBVar3,0x20);
    }
  }
  return;
}

