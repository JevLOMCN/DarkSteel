// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 2

// GetHandle @ 1494a09f0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FTraceHandle_const_&,FOverlapDatum_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(FTraceHandle_const_&,FOverlapDatum_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 1494a0a10

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FWN_CurlHttpStream_const_*),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(FWN_CurlHttpStream_const_*),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

