// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FDistanceFieldObjectBuffers @ 14485b6f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FDistanceFieldObjectBuffers * __thiscall
FDistanceFieldObjectBuffers::FDistanceFieldObjectBuffers(FDistanceFieldObjectBuffers *this)

{
  (this->Bounds).Reference = (FRDGPooledBuffer *)0x0;
  (this->Data).Reference = (FRDGPooledBuffer *)0x0;
  return this;
}

// ~FDistanceFieldObjectBuffers @ 14485dc30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FDistanceFieldObjectBuffers::~FDistanceFieldObjectBuffers(FDistanceFieldObjectBuffers *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->Data).Reference;
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
  pFVar2 = (this->Bounds).Reference;
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

// GetSizeBytes @ 14487d9e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ulong64 __thiscall FDistanceFieldObjectBuffers::GetSizeBytes(FDistanceFieldObjectBuffers *this)

{
  FRDGPooledBuffer *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  
  pFVar1 = (this->Bounds).Reference;
  uVar2 = 0;
  if (pFVar1 == (FRDGPooledBuffer *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  pFVar1 = (this->Data).Reference;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    uVar2 = (ulonglong)((pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement);
  }
  return uVar2 + uVar3;
}

// Initialize @ 144887a40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FDistanceFieldObjectBuffers::Initialize(FDistanceFieldObjectBuffers *this)

{
  return;
}

// Release @ 1448910c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FDistanceFieldObjectBuffers::Release(FDistanceFieldObjectBuffers *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->Bounds).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    (this->Bounds).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar2 = (this->Data).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    (this->Data).Reference = (FRDGPooledBuffer *)0x0;
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

