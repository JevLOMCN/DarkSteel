// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 1

// operator<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>_TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress> @ 14454ea40

TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress> * __thiscall
TPairInitializer<FUdpPingWorker::FProgressKey_const_&,FUdpPingWorker::FProgress_const_&>::
operator<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>_TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>
          (TPairInitializer<FUdpPingWorker::FProgressKey_const_&,FUdpPingWorker::FProgress_const_&>
           *this,TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>
                 *__return_storage_ptr__)

{
  FProgressKey *pFVar1;
  FProgress *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pFVar1 = this->Key;
  pFVar2 = this->Value;
  ::FString::FString((FString *)__return_storage_ptr__,&pFVar1->Address);
  *(int *)&__return_storage_ptr__->field_0x10 = pFVar1->UniqueId;
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x18,&pFVar2->Address);
  *(int *)&__return_storage_ptr__->field_0x28 = pFVar2->Port;
  *(double *)&__return_storage_ptr__->field_0x30 = pFVar2->StartTime;
  *(double *)&__return_storage_ptr__->field_0x38 = pFVar2->TimeoutDuration;
  *(ushort *)&__return_storage_ptr__->field_0x40 = pFVar2->EchoId;
  *(ushort *)&__return_storage_ptr__->field_0x42 = pFVar2->SequenceNum;
  *(EIcmpResponseStatus *)&__return_storage_ptr__->field_0x48 = (pFVar2->Result).Status;
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x50,
                     &(pFVar2->Result).ResolvedAddress);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x60,&(pFVar2->Result).ReplyFrom);
  *(float *)&__return_storage_ptr__->field_0x70 = (pFVar2->Result).Time;
  *(FSocket **)&__return_storage_ptr__->field_0x78 = pFVar2->SocketPtr;
  *(FInternetAddr **)&__return_storage_ptr__->field_0x80 = (pFVar2->ToAddr).Object;
  pTVar3 = (pFVar2->ToAddr).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x88 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

