// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 3

// GetHandle @ 146b18040

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146b18060

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
::GetHandle(void *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)((longlong)this + 0x10);
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146b18080

FDelegateHandle __thiscall
TCommonDelegateInstanceState<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
::GetHandle(TCommonDelegateInstanceState<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

