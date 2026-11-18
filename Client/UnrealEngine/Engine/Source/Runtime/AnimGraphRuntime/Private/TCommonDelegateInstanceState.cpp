// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 3

// GetHandle @ 14644a920

FDelegateHandle __thiscall
TCommonDelegateInstanceState<float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14644a940

FDelegateHandle __thiscall
TCommonDelegateInstanceState<float___cdecl(float),FDefaultDelegateUserPolicy,float>::GetHandle
          (TCommonDelegateInstanceState<float___cdecl(float),FDefaultDelegateUserPolicy,float> *this
          )

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14644a960

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

