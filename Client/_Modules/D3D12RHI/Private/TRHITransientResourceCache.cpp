// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// ~TRHITransientResourceCache<FRHITransientBuffer> @ 145a93e20

void __thiscall
TRHITransientResourceCache<FRHITransientBuffer>::~TRHITransientResourceCache<FRHITransientBuffer>
          (TRHITransientResourceCache<FRHITransientBuffer> *this)

{
  int iVar1;
  FRHITransientBuffer *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Cache).AllocatorInstance.Data;
  iVar1 = (this->Cache).ArrayNum;
  pFVar3 = pFVar4 + (longlong)iVar1 * 0x18;
  while( true ) {
    if ((this->Cache).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TRHITransientResourceCache<FRHITransientBuffer>::FCacheItem,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    pFVar2 = *(FRHITransientBuffer **)pFVar4;
    if (pFVar2 != (FRHITransientBuffer *)0x0) {
      FRHITransientBuffer::~FRHITransientBuffer(pFVar2);
      ::operator_delete(pFVar2,0x110);
    }
    pFVar4 = pFVar4 + 0x18;
  }
  pFVar4 = (this->Allocated).AllocatorInstance.Data;
  iVar1 = (this->Allocated).ArrayNum;
  pFVar3 = pFVar4 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Allocated).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRHITransientBuffer_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    pFVar2 = *(FRHITransientBuffer **)pFVar4;
    if (pFVar2 != (FRHITransientBuffer *)0x0) {
      FRHITransientBuffer::~FRHITransientBuffer(pFVar2);
      ::operator_delete(pFVar2,0x110);
    }
    pFVar4 = pFVar4 + 8;
  }
  pFVar3 = (this->Allocated).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Cache).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// ~TRHITransientResourceCache<FRHITransientTexture> @ 145a93f20

void __thiscall
TRHITransientResourceCache<FRHITransientTexture>::~TRHITransientResourceCache<FRHITransientTexture>
          (TRHITransientResourceCache<FRHITransientTexture> *this)

{
  int iVar1;
  FRHITransientTexture *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Cache).AllocatorInstance.Data;
  iVar1 = (this->Cache).ArrayNum;
  pFVar3 = pFVar4 + (longlong)iVar1 * 0x18;
  while( true ) {
    if ((this->Cache).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TRHITransientResourceCache<FRHITransientTexture>::FCacheItem,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    pFVar2 = *(FRHITransientTexture **)pFVar4;
    if (pFVar2 != (FRHITransientTexture *)0x0) {
      FRHITransientTexture::~FRHITransientTexture(pFVar2);
      ::operator_delete(pFVar2,0x150);
    }
    pFVar4 = pFVar4 + 0x18;
  }
  pFVar4 = (this->Allocated).AllocatorInstance.Data;
  iVar1 = (this->Allocated).ArrayNum;
  pFVar3 = pFVar4 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Allocated).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRHITransientTexture_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    pFVar2 = *(FRHITransientTexture **)pFVar4;
    if (pFVar2 != (FRHITransientTexture *)0x0) {
      FRHITransientTexture::~FRHITransientTexture(pFVar2);
      ::operator_delete(pFVar2,0x150);
    }
    pFVar4 = pFVar4 + 8;
  }
  pFVar3 = (this->Allocated).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Cache).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

