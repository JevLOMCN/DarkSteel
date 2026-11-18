// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BackChannel
// Functions: 1

// Call @ 14e7f4870

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBackChannelThreadedListener::Run'::__l4::<lambda_1>,bool,TSharedRef<IBackChannelSocketConnection,1>_>
::Call(void *param_1,TSharedRef<IBackChannelSocketConnection,1> *param_2)

{
  bool bVar1;
  TSharedRef<IBackChannelSocketConnection,1> local_18;
  
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = `FBackChannelThreadedListener::Run'::__l4::<lambda_1>::operator()(param_1,&local_18);
  return bVar1;
}

