// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// StaticStruct @ 14d4da470

UScriptStruct * __cdecl FStateTreeTransitionDelayedState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeTransitionDelayedState.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeTransitionDelayedState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTransitionDelayedState,
                         (UObject *)pUVar1,L"StateTreeTransitionDelayedState");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeTransitionDelayedState.OuterSingleton;
}

// FStateTreeTransitionDelayedState @ 14d4ebf40

FStateTreeTransitionDelayedState * __thiscall
FStateTreeTransitionDelayedState::FStateTreeTransitionDelayedState
          (FStateTreeTransitionDelayedState *this,FStateTreeTransitionDelayedState *param_1)

{
  UStateTree *pUVar1;
  
  (this->StateID).Value = (param_1->StateID).Value;
  pUVar1 = (param_1->StateTree).field0_0x0.DebugPtr;
  (this->StateTree).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStateTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->CapturedEvent).Event.Object = (param_1->CapturedEvent).Event.Object;
  (this->CapturedEvent).Event.SharedReferenceCount.ReferenceController =
       (param_1->CapturedEvent).Event.SharedReferenceCount.ReferenceController;
  (param_1->CapturedEvent).Event.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->CapturedEvent).Event.Object = (FStateTreeEvent *)0x0;
  this->TimeLeft = param_1->TimeLeft;
  this->CapturedEventHash = param_1->CapturedEventHash;
  (this->StateHandle).Index = (param_1->StateHandle).Index;
  (this->TransitionIndex).Value = (param_1->TransitionIndex).Value;
  return this;
}

