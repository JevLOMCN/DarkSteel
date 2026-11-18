// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 3

// GetHandle @ 144556720

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 144556740

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 144556760

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EIcmpEchoManyStatus),FDefaultDelegateUserPolicy>::
GetHandle(void *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)((longlong)this + 0x10);
  return (FDelegateHandle)(ulong64)in_RDX;
}

