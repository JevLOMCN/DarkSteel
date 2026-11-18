// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 4

// GetHandle @ 1441f38f0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14427a6b0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UObject_const_*,unsigned_short,enum_ELifetimeCondition),FDefaultDelegateUserPolicy>
::GetHandle(void *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)((longlong)this + 0x10);
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14427a6d0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UObject_const_*,unsigned_short,bool),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(UObject_const_*,unsigned_short,bool),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 1443039b0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

