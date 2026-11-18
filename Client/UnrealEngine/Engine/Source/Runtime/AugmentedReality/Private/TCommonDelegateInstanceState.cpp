// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 3

// GetHandle @ 14cf51250

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(AARActor_*),FDefaultDelegateUserPolicy>::GetHandle
          (TCommonDelegateInstanceState<void___cdecl(AARActor_*),FDefaultDelegateUserPolicy> *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14cf51270

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14cf51290

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UClass_*,FGuid),FDefaultDelegateUserPolicy>::GetHandle
          (TCommonDelegateInstanceState<void___cdecl(UClass_*,FGuid),FDefaultDelegateUserPolicy>
           *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

