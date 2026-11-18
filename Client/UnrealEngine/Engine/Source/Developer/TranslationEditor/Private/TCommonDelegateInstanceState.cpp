// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 4

// GetHandle @ 146bacef0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146bacf10

FDelegateHandle __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146bacf30

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<ILocalizationServiceOperation,1>_const_&,enum_ELocalizationServiceOperationCommandResult::Type),FDefaultDelegateUserPolicy>
::GetHandle(void *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)((longlong)this + 0x10);
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146bacf50

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTranslationPickerTextItem,1>_>),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTranslationPickerTextItem,1>_>),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

