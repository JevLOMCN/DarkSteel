// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetAllocatedSize @ 148529030

ulong64 __thiscall FShaderJobCacheStoredOutput::GetAllocatedSize(FShaderJobCacheStoredOutput *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FBufferOwner *pFVar3;
  ulong64 uVar4;
  FScriptContainerElement *pFVar5;
  ulong64 uVar6;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->JobOutput).Owner.Owner;
  if (pFVar3 == (FBufferOwner *)0x0) {
    uVar6 = 0;
  }
  else {
    if (((ulonglong)pFVar3->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar3->_padding_ + 8))(pFVar3);
    }
    uVar6 = pFVar3->Size;
  }
  iVar2 = (this->JobCode).ArrayNum;
  uVar6 = uVar6 + 0x40;
  pFVar5 = (this->JobCode).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->JobCode).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FCompositeBuffer_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    uVar4 = FCompositeBuffer::GetSize((FCompositeBuffer *)pFVar5);
    uVar6 = uVar6 + uVar4;
    pFVar5 = pFVar5 + 0x18;
  }
  iVar2 = (this->JobSymbols).ArrayNum;
  pFVar5 = (this->JobSymbols).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->JobSymbols).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FCompressedBuffer_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    uVar4 = FCompressedBuffer::GetCompressedSize((FCompressedBuffer *)pFVar5);
    uVar6 = uVar6 + uVar4;
    pFVar5 = pFVar5 + 0x18;
  }
  return uVar6;
}

