// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationWorker
// Functions: 2

// GetHandle @ 148c02a10

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 148c02a30

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

