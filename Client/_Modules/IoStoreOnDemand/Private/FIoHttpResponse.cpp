// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 1

// ~FIoHttpResponse @ 1445a87a0

void __thiscall UE::FIoHttpResponse::~FIoHttpResponse(FIoHttpResponse *this)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  FScriptContainerElement *pFVar3;
  
  this_00 = (this->Body).CorePtr.Reference;
  if (this_00 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
    }
  }
  DestructItems<FAnsiString,int>
            ((FAnsiString *)(this->Headers).Headers.AllocatorInstance.Data,
             (this->Headers).Headers.ArrayNum);
  pFVar3 = (this->Headers).Headers.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

