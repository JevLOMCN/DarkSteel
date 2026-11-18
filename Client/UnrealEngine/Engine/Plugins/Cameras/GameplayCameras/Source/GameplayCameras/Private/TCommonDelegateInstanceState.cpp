// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// GetHandle @ 14d5a8570

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14d5a8590

FDelegateHandle __thiscall
TCommonDelegateInstanceState<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

