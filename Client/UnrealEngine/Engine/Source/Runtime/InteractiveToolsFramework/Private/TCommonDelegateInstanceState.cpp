// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 2

// GetHandle @ 1496a2d40

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 1496dd100

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

