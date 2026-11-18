// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 3

// GetHandle @ 14daf7f50

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14daf7f70

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14daf7f90

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

