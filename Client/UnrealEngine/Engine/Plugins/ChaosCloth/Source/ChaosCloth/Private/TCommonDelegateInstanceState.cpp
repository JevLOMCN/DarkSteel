// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 3

// GetHandle @ 14dbfc380

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(Chaos::FClothingSimulation_*,FClothingSimulationContextCommon_const_*),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14dbfc3a0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14dbfc3c0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

