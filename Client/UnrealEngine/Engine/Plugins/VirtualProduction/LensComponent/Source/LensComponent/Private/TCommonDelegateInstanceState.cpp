// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LensComponent
// Functions: 3

// GetHandle @ 14d751f30

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TSubclassOf<ULensModel>_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(TSubclassOf<ULensModel>_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14d751f50

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(ULiveLinkComponentController_*),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(ULiveLinkComponentController_*),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14d751f70

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(ULiveLinkComponentController_const_*,FLiveLinkSubjectFrameData_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(ULiveLinkComponentController_const_*,FLiveLinkSubjectFrameData_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

