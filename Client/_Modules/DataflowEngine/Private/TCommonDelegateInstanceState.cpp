// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 4

// GetHandle @ 1462dd1b0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(FEdGraphEditAction_const_&),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 1462dd1d0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(UDataflowSubGraph_const_&),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 1462dd1f0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 1462dd210

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UDataflow_const_*,FGuid_const_&,enum_UE::Dataflow::ESubGraphChangedReason),FDefaultDelegateUserPolicy>
::GetHandle(void *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)((longlong)this + 0x10);
  return (FDelegateHandle)(ulong64)in_RDX;
}

