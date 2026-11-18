// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 3

// GetHandle @ 144544400

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 144544420

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 144544440

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

