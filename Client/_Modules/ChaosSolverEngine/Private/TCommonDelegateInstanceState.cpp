// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 2

// GetHandle @ 1463123b0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 1463123d0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TWeakPtr<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1>),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(TWeakPtr<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1>),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

