// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ARUtilities
// Functions: 2

// GetHandle @ 14cfc8df0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14cfc8e10

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>::GetHandle
          (TCommonDelegateInstanceState<void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
           *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

