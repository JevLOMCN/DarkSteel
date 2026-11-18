// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 2

// GetHandle @ 14a751e60

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14a751e80

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

