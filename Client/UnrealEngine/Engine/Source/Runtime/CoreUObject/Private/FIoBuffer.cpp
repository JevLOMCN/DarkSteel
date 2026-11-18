// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// operator= @ 141f246d0

FIoBuffer * __thiscall FIoBuffer::operator=(FIoBuffer *this,FIoBuffer *param_1)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  
  if (this != param_1) {
    this_00 = (this->CorePtr).Reference;
    (this->CorePtr).Reference = (param_1->CorePtr).Reference;
    (param_1->CorePtr).Reference = (BufCore *)0x0;
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
    return this;
  }
  return this;
}

