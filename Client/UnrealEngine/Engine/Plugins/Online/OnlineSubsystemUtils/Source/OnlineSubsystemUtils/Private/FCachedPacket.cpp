// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// operator= @ 14ec57d50

FCachedPacket * __thiscall
FPacketIterator::FCachedPacket::operator=(FCachedPacket *this,FCachedPacket *param_1)

{
  TArray<unsigned_char,TFixedAllocator<1024>_> *_Dst;
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FInternetAddr *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  _Dst = &this->Data;
  this->bRecvSuccess = param_1->bRecvSuccess;
  if (_Dst != &param_1->Data) {
    piVar1 = &(this->Data).ArrayMax;
    iVar2 = (param_1->Data).ArrayNum;
    (this->Data).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0x400;
    }
    else {
      UE::Core::Private::ReallocForCopy<0,TFixedAllocator<1024>::ForElementType<unsigned_char>_>
                (1,1,iVar2,*piVar1,&_Dst->AllocatorInstance,iVar2,piVar1);
      if (iVar2 != 0) {
        memcpy(_Dst,&param_1->Data,(longlong)iVar2);
      }
    }
  }
  pTVar3 = (param_1->Address).SharedReferenceCount.ReferenceController;
  pFVar4 = (param_1->Address).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->Address).SharedReferenceCount.ReferenceController;
  (this->Address).Object = pFVar4;
  (this->Address).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  this->PacketTimestamp = param_1->PacketTimestamp;
  this->Error = param_1->Error;
  return this;
}

