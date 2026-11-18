// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// StaticStruct @ 14d4da2d0

UScriptStruct * __cdecl FStateTreeTransitionSource::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeTransitionSource.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeTransitionSource.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTransitionSource,(UObject *)pUVar1,
                         L"StateTreeTransitionSource");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeTransitionSource.OuterSingleton;
}

// FStateTreeTransitionSource @ 14d4ec160

FStateTreeTransitionSource * __thiscall
FStateTreeTransitionSource::FStateTreeTransitionSource
          (FStateTreeTransitionSource *this,UStateTree *param_1,
          EStateTreeTransitionSourceType param_2,FStateTreeIndex16 param_3,
          FStateTreeStateHandle param_4,EStateTreeTransitionPriority param_5)

{
  UStateTree *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UStateTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Asset).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UStateTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  (this->TargetState).Index = param_4.Index;
  this->Priority = param_5;
  this->SourceType = param_2;
  (this->TransitionIndex).Value = param_3.Value;
  return this;
}

// FStateTreeTransitionSource @ 14d4ec200

FStateTreeTransitionSource * __thiscall
FStateTreeTransitionSource::FStateTreeTransitionSource
          (FStateTreeTransitionSource *this,UStateTree *param_1,
          EStateTreeTransitionSourceType param_2,FStateTreeStateHandle param_3,
          EStateTreeTransitionPriority param_4)

{
  FStateTreeIndex16 FVar1;
  UStateTree *local_res8;
  
  FVar1.Value = FStateTreeIndex16::Invalid.Value;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UStateTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Asset).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UStateTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  this->Priority = param_4;
  (this->TargetState).Index = param_3.Index;
  this->SourceType = param_2;
  (this->TransitionIndex).Value = FVar1.Value;
  return this;
}

