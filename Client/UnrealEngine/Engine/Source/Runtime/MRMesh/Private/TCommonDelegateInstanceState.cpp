// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MRMesh
// Functions: 2

// GetHandle @ 146c6b980

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146c6b9a0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>::GetHandle
          (TCommonDelegateInstanceState<void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
           *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

