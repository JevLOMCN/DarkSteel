// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// ExecuteTask @ 1442bfe00

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Net::Private::FObjectPoller::PollAndCopyObjects'::__l13::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FReplicationPollTask local_28;
  
  local_28.Poller = *(FObjectPoller **)((longlong)this + 0xd8);
  local_28.ReplicationSystemInternal = (local_28.Poller)->ReplicationSystemInternal;
  local_28.PollTaskData = *(FReplicationPollTaskData **)((longlong)this + 0xe0);
  Net::Private::FReplicationPollTask::DoTask(&local_28);
  return;
}

