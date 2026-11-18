// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 3

// ~TQueue<TUniquePtr<AVEncoder::FVideoDecoderMPEG4_Impl::FInDecoderData,TDefaultDelete<AVEncoder::FVideoDecoderMPEG4_Impl::FInDecoderData>_>,1> @ 148d00ff0

void __thiscall
TQueue<TUniquePtr<AVEncoder::FVideoDecoderMPEG4_Impl::FInDecoderData,TDefaultDelete<AVEncoder::FVideoDecoderMPEG4_Impl::FInDecoderData>_>,1>
::
~TQueue<TUniquePtr<AVEncoder::FVideoDecoderMPEG4_Impl::FInDecoderData,TDefaultDelete<AVEncoder::FVideoDecoderMPEG4_Impl::FInDecoderData>_>,1>
          (TQueue<TUniquePtr<AVEncoder::FVideoDecoderMPEG4_Impl::FInDecoderData,TDefaultDelete<AVEncoder::FVideoDecoderMPEG4_Impl::FInDecoderData>_>,1>
           *this)

{
  TNode *pTVar1;
  FInDecoderData *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    pFVar2 = (pTVar1->Item).Ptr;
    if (pFVar2 != (FInDecoderData *)0x0) {
      pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      ::operator_delete(pFVar2,0x28);
    }
    ::operator_delete(pTVar1,0x10);
    pTVar1 = this->Tail;
  }
  return;
}

// ~TQueue<TUniquePtr<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode,TDefaultDelete<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode>_>,1> @ 148d01070

void __thiscall
TQueue<TUniquePtr<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode,TDefaultDelete<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode>_>,1>
::
~TQueue<TUniquePtr<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode,TDefaultDelete<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode>_>,1>
          (TQueue<TUniquePtr<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode,TDefaultDelete<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode>_>,1>
           *this)

{
  TNode *pTVar1;
  FInputToDecode *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    pFVar2 = (pTVar1->Item).Ptr;
    if (pFVar2 != (FInputToDecode *)0x0) {
      pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      ::operator_delete(pFVar2,0x28);
    }
    ::operator_delete(pTVar1,0x10);
    pTVar1 = this->Tail;
  }
  return;
}

// Empty @ 148d09a00

void __thiscall
TQueue<TUniquePtr<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode,TDefaultDelete<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode>_>,1>
::Empty(TQueue<TUniquePtr<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode,TDefaultDelete<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode>_>,1>
        *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  FInputToDecode *pFVar3;
  FScriptContainerElement *pFVar4;
  TUniquePtr<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode,TDefaultDelete<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode>_>
  *pTVar5;
  undefined8 local_18 [2];
  
  while (pTVar1 = this->Tail->NextNode, pTVar1 != (TNode *)0x0) {
    pTVar2 = this->Tail;
    this->Tail = pTVar1;
    pTVar5 = &pTVar1->Item;
    if (pTVar5 != (TUniquePtr<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode,TDefaultDelete<AVEncoder::FVideoDecoderH264_WindowsImpl::FInputToDecode>_>
                   *)local_18) {
      pFVar3 = pTVar5->Ptr;
      pTVar5->Ptr = (FInputToDecode *)0x0;
      if (pFVar3 != (FInputToDecode *)0x0) {
        pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        ::operator_delete(pFVar3,0x28);
      }
    }
    if (pTVar2 != (TNode *)0x0) {
      pFVar3 = (pTVar2->Item).Ptr;
      if (pFVar3 != (FInputToDecode *)0x0) {
        pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        ::operator_delete(pFVar3,0x28);
      }
      ::operator_delete(pTVar2,0x10);
    }
  }
  return;
}

