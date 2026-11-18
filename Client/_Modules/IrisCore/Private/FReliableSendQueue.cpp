// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// ProcessPacketDeliveryStatus @ 144214810

void __thiscall
UE::Net::Private::FNetObjectAttachmentSendQueue::FReliableSendQueue::ProcessPacketDeliveryStatus
          (FReliableSendQueue *this,EPacketDeliveryStatus param_1,FReplicationRecord *param_2)

{
  int *piVar1;
  TArray<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  
  FReliableNetBlobQueue::ProcessPacketDeliveryStatus(&this->ReliableQueue,param_1,param_2);
  if ((param_1 == Delivered) &&
     (0x3ff < (ushort)((ushort)param_2->Sequences[3] | (ushort)param_2->Sequences[2] |
                       (ushort)param_2->Sequences[1] | (ushort)param_2->Sequences[0]))) {
    piVar1 = &(this->PreQueue).ArrayNum;
    iVar9 = *piVar1;
    if (iVar9 != 0) {
      uVar10 = 0;
      pTVar2 = &this->PreQueue;
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar3 = (this->PreQueue).ArrayNum;
      (this->PreQueue).ArrayNum = 0;
      (this->PreQueue).ArrayMax = 0;
      if ((iVar3 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar8 = pFVar4;
      while ((pFVar8 != pFVar4 + (longlong)iVar3 * 8 &&
             (bVar6 = FReliableNetBlobQueue::Enqueue
                                (&this->ReliableQueue,(TRefCountPtr<UE::Net::FNetBlob> *)pFVar8),
             bVar6))) {
        uVar10 = uVar10 + 1;
        pFVar8 = pFVar8 + 8;
      }
      iVar9 = iVar9 - uVar10;
      if (iVar9 != 0) {
        if (((pFVar4 + (ulonglong)uVar10 * 8 == (FScriptContainerElement *)0x0) && (iVar9 != 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar9,&pTVar2->AllocatorInstance,piVar1,&(this->PreQueue).ArrayMax);
        ConstructItems<TRefCountPtr<UE::Net::FNetBlob>,TRefCountPtr<UE::Net::FNetBlob>,int>
                  ((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8,
                   (TRefCountPtr<UE::Net::FNetBlob> *)(pFVar4 + (ulonglong)uVar10 * 8),iVar9);
      }
      DestructItems<TRefCountPtr<UE::Net::FNetBlob>,int>
                ((TRefCountPtr<UE::Net::FNetBlob> *)pFVar4,iVar3);
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
    }
  }
  return;
}

