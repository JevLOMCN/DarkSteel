// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 3

// GetHandle @ 1423df340

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FAccessibleEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(FAccessibleEventArgs_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 1423df360

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 1423df380

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(bool,int,int),FDefaultDelegateUserPolicy>::GetHandle
          (TCommonDelegateInstanceState<void___cdecl(bool,int,int),FDefaultDelegateUserPolicy> *this
          )

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

