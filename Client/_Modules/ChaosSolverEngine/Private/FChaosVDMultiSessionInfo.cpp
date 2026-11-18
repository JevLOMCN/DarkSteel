// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 3

// ~FChaosVDMultiSessionInfo @ 14630ae50

void __thiscall FChaosVDMultiSessionInfo::~FChaosVDMultiSessionInfo(FChaosVDMultiSessionInfo *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->InnerSessionsByInstanceID).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InnerSessionsByInstanceID).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InnerSessionsByInstanceID);
  FChaosVDSessionInfo::~FChaosVDSessionInfo((FChaosVDSessionInfo *)this);
  return;
}

// GetRecordingMode @ 146313b60

EChaosVDRecordingMode __thiscall
FChaosVDMultiSessionInfo::GetRecordingMode(FChaosVDMultiSessionInfo *this)

{
  EChaosVDRecordingMode local_res10 [8];
  <lambda_1> local_res18 [2];
  
  local_res18[0].FirstValidInstanceRecordingMode = local_res10;
  local_res10[0] = Invalid;
  EnumerateInnerSessions<_FChaosVDMultiSessionInfo::GetRecordingMode_::__l2::<lambda_1>_>
            (this,local_res18);
  return local_res10[0];
}

// IsRecording @ 146318850

bool __thiscall FChaosVDMultiSessionInfo::IsRecording(FChaosVDMultiSessionInfo *this)

{
  bool local_res10 [8];
  <lambda_1> local_res18 [2];
  
  local_res18[0].bIsRecording = local_res10;
  local_res10[0] = false;
  EnumerateInnerSessions<_FChaosVDMultiSessionInfo::IsRecording_::__l2::<lambda_1>_>
            (this,local_res18);
  return local_res10[0];
}

