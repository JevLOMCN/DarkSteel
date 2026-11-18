// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// GetHandle @ 14e1c8510

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(IMeshDeformerProducer_*),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14e1c8530

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>::GetHandle
          (TCommonDelegateInstanceState<void___cdecl(UOptimusDeformer_*),FDefaultDelegateUserPolicy>
           *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14e1c8550

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(TSoftObjectPtr<UObject>,FOptimusValueContainerStruct_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

