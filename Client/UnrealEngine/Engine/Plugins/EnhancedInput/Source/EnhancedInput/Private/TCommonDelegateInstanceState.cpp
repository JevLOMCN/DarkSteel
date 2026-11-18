// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 1

// GetHandle @ 14a6df330

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

