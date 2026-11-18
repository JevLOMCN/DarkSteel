// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 8

// GetHandle @ 14a7e26b0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(UPanelSlot_*),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14a7e26d0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14a7e26f0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(UCommonActivatableWidget_&),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14a7e2710

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(UCommonUIVisibilitySubsystem_*),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14a7e2730

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>::
GetHandle(void *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)((longlong)this + 0x10);
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14a7e2750

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,UCommonActivatableWidget_*>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14a7e2770

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FActivatableTreeRoot,1>_>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 14a7e2790

FDelegateHandle __thiscall
TCommonDelegateInstanceState<bool___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>::GetHandle
          (void *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)((longlong)this + 0x10);
  return (FDelegateHandle)(ulong64)in_RDX;
}

