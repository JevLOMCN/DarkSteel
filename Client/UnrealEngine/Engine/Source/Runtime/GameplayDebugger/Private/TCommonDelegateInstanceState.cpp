// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 3

// GetHandle @ 146d4c780

FDelegateHandle __thiscall
TCommonDelegateInstanceState<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146d4c7a0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(AGameModeBase_*,AController_*),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146d4c7c0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,int,int>::GetHandle
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,int,int> *this
          )

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

