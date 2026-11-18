// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 1

// FProgress @ 144553050

FProgress * __thiscall FUdpPingWorker::FProgress::FProgress(FProgress *this)

{
  (this->Address).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Address).Data.ArrayNum = 0;
  (this->Address).Data.ArrayMax = 0;
  this->Port = 0;
  this->StartTime = 0.0;
  this->TimeoutDuration = 0.0;
  this->EchoId = 0;
  this->SequenceNum = 0;
  (this->Result).ResolvedAddress.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Result).ResolvedAddress.Data.ArrayNum = 0;
  (this->Result).ResolvedAddress.Data.ArrayMax = 0;
  (this->Result).ReplyFrom.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Result).ReplyFrom.Data.ArrayNum = 0;
  (this->Result).ReplyFrom.Data.ArrayMax = 0;
  (this->Result).Time = -1.0;
  this->SocketPtr = (FSocket *)0x0;
  (this->ToAddr).Object = (FInternetAddr *)0x0;
  (this->ToAddr).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Result).Status = InternalError;
  return this;
}

