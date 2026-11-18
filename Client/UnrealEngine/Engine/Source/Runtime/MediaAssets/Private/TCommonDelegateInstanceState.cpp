// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 2

// GetHandle @ 146c14130

FDelegateHandle __thiscall
TCommonDelegateInstanceState<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146c28ca0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>::GetHandle
          (void *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)((longlong)this + 0x10);
  return (FDelegateHandle)(ulong64)in_RDX;
}

