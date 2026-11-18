// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 5

// StaticStruct @ 14d49f6f0

UScriptStruct * __cdecl FStateTreeConditionBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConditionBase,(UObject *)pUVar1,
                         L"StateTreeConditionBase");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeConditionBase.OuterSingleton;
}

// TestCondition @ 14d49f770

bool __thiscall
FStateTreeConditionBase::TestCondition
          (FStateTreeConditionBase *this,FStateTreeExecutionContext *param_1)

{
  return false;
}

// EnterState @ 14d49f780

void __thiscall
FStateTreeConditionBase::EnterState
          (FStateTreeConditionBase *this,FStateTreeExecutionContext *param_1,
          FStateTreeTransitionResult *param_2)

{
  return;
}

// ExitState @ 14d49f790

void __thiscall
FStateTreeConditionBase::ExitState
          (FStateTreeConditionBase *this,FStateTreeExecutionContext *param_1,
          FStateTreeTransitionResult *param_2)

{
  return;
}

// StateCompleted @ 14d49f7a0

void __thiscall
FStateTreeConditionBase::StateCompleted
          (FStateTreeConditionBase *this,FStateTreeExecutionContext *param_1,
          EStateTreeRunStatus param_2,FStateTreeActiveStates *param_3)

{
  return;
}

