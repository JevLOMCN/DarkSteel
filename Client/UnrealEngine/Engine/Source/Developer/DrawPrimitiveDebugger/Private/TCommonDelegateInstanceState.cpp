// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 6

// GetHandle @ 146d1e590

FDelegateHandle __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146d1e5b0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146d1e5d0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146d1e5f0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::GetHandle(void *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)((longlong)this + 0x10);
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146d1e610

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
::GetHandle(void *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)((longlong)this + 0x18);
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146d1e630

FDelegateHandle __thiscall
TCommonDelegateInstanceState<bool___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
::GetHandle(TCommonDelegateInstanceState<bool___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

