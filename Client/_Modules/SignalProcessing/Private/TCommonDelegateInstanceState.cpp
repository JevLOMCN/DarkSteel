// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 1

// GetHandle @ 14449a020

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

