// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 3

// GetHandle @ 147222d90

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(UE::Mass::FTypeManager_&),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 147222db0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 147222dd0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

