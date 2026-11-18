// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ~FRDGScatterUploadBuffer @ 14485e170

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRDGScatterUploadBuffer::~FRDGScatterUploadBuffer(FRDGScatterUploadBuffer *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->UploadBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar2 = (this->ScatterBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  return;
}

