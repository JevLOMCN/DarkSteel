// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// Reset @ 14ecf9200

void __thiscall
TUniquePtr<FVoicePacketBuffer,TDefaultDelete<FVoicePacketBuffer>_>::Reset
          (TUniquePtr<FVoicePacketBuffer,TDefaultDelete<FVoicePacketBuffer>_> *this,
          FVoicePacketBuffer *param_1)

{
  FVoicePacketBuffer *pFVar1;
  TNode *pTVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = this->Ptr;
  if ((pFVar1 != param_1) && (this->Ptr = param_1, pFVar1 != (FVoicePacketBuffer *)0x0)) {
    pTVar2 = (pFVar1->FreedIndicesQueue).Tail;
    while (pTVar2 != (TNode *)0x0) {
      (pFVar1->FreedIndicesQueue).Tail = pTVar2->NextNode;
      ::operator_delete(pTVar2,0x10);
      pTVar2 = (pFVar1->FreedIndicesQueue).Tail;
    }
    DestructItems<FSortedVoicePacketNode,int>
              ((FSortedVoicePacketNode *)(pFVar1->PacketBuffer).AllocatorInstance.Data,
               (pFVar1->PacketBuffer).ArrayNum);
    pFVar3 = (pFVar1->PacketBuffer).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar1,0x50);
    return;
  }
  return;
}

