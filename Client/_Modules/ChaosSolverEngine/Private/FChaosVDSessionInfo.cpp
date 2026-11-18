// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 7

// ~FChaosVDSessionInfo @ 14630b0b0

void __thiscall FChaosVDSessionInfo::~FChaosVDSessionInfo(FChaosVDSessionInfo *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->LastKnownConnectionDetails).CertAuth.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LastKnownConnectionDetails).TraceTarget.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->DataChannelsStatesByName).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DataChannelsStatesByName).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FChaosVDDataChannelState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FChaosVDDataChannelState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FChaosVDDataChannelState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DataChannelsStatesByName);
  pFVar1 = (this->LastKnownRecordingState).TraceDetails.CertAuth.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LastKnownRecordingState).TraceDetails.TraceTarget.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SessionName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// GetConnectionDetails @ 146312380

FChaosVDTraceDetails * __thiscall
FChaosVDSessionInfo::GetConnectionDetails(FChaosVDSessionInfo *this)

{
  return &this->LastKnownConnectionDetails;
}

// GetLastRequestedRecordingMode @ 146312fa0

EChaosVDRecordingMode __thiscall
FChaosVDSessionInfo::GetLastRequestedRecordingMode(FChaosVDSessionInfo *this)

{
  return this->LastRequestedRecordingMode;
}

// GetRecordingMode @ 146313b90

EChaosVDRecordingMode __thiscall FChaosVDSessionInfo::GetRecordingMode(FChaosVDSessionInfo *this)

{
  if ((this->LastKnownConnectionDetails).bIsValid != false) {
    return (this->LastKnownConnectionDetails).Mode;
  }
  return this->LastRequestedRecordingMode;
}

// IsConnected @ 146318840

bool __thiscall FChaosVDSessionInfo::IsConnected(FChaosVDSessionInfo *this)

{
  return false;
}

// IsRecording @ 146318880

bool __thiscall FChaosVDSessionInfo::IsRecording(FChaosVDSessionInfo *this)

{
  return (this->LastKnownRecordingState).bIsRecording;
}

// SetLastRequestedRecordingMode @ 14631f860

void __thiscall
FChaosVDSessionInfo::SetLastRequestedRecordingMode
          (FChaosVDSessionInfo *this,EChaosVDRecordingMode param_1)

{
  this->LastRequestedRecordingMode = param_1;
  return;
}

