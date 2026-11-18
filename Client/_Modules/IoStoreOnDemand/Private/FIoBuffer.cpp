// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 1

// operator= @ 1445a9d00

FIoBuffer * __thiscall FIoBuffer::operator=(FIoBuffer *this,FIoBuffer *param_1)

{
  int *piVar1;
  int iVar2;
  BufCore *pBVar3;
  BufCore *this_00;
  
  pBVar3 = (param_1->CorePtr).Reference;
  this_00 = (this->CorePtr).Reference;
  if (this_00 != pBVar3) {
    (this->CorePtr).Reference = pBVar3;
    if (pBVar3 != (BufCore *)0x0) {
      LOCK();
      pBVar3->NumRefs = pBVar3->NumRefs + 1;
      UNLOCK();
    }
    if (this_00 != (BufCore *)0x0) {
      BufCore::CheckRefCount(this_00);
      LOCK();
      piVar1 = &this_00->NumRefs;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        BufCore::~BufCore(this_00);
        ::operator_delete(this_00,0x20);
      }
    }
  }
  return this;
}

