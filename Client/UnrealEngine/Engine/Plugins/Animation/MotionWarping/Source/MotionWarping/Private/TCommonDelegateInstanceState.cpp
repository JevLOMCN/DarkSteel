// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 2

// GetHandle @ 14cf0f3a0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14cf0f3c0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

