// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// operator= @ 14ec57fe0

FReceivedPacket * __thiscall
UIpNetDriver::FReceivedPacket::operator=(FReceivedPacket *this,FReceivedPacket *param_1)

{
  TSharedPtr<FInternetAddr,1> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (this->PacketBytes).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->PacketBytes).AllocatorInstance.Data = (param_1->PacketBytes).AllocatorInstance.Data;
    (param_1->PacketBytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PacketBytes).ArrayNum = (param_1->PacketBytes).ArrayNum;
    (this->PacketBytes).ArrayMax = (param_1->PacketBytes).ArrayMax;
    (param_1->PacketBytes).ArrayNum = 0;
    (param_1->PacketBytes).ArrayMax = 0;
  }
  pTVar1 = &param_1->FromAddress;
  if (&this->FromAddress != pTVar1) {
    (this->FromAddress).Object = pTVar1->Object;
    pTVar1->Object = (FInternetAddr *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->FromAddress).SharedReferenceCount,
               &(param_1->FromAddress).SharedReferenceCount);
  }
  this->Error = param_1->Error;
  this->PlatformTimeSeconds = param_1->PlatformTimeSeconds;
  return this;
}

