// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// StaticStruct @ 14d52a210

UScriptStruct * __cdecl FStateTreeRunParallelStateTreeExecutionExtension::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeExecutionExtension.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeExecutionExtension.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeRunParallelStateTreeExecutionExtension,
                         (UObject *)pUVar1,L"StateTreeRunParallelStateTreeExecutionExtension");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeRunParallelStateTreeExecutionExtension.
         OuterSingleton;
}

// ScheduleNextTick @ 14d533440

void __thiscall
FStateTreeRunParallelStateTreeExecutionExtension::ScheduleNextTick
          (FStateTreeRunParallelStateTreeExecutionExtension *this,FContextParameters *param_1,
          FNextTickArguments *param_2)

{
  FStateTreeScheduledTick local_res10;
  FStateTreeMinimalExecutionContext local_58;
  
  if ((param_1->StateTree != (UStateTree *)0x0) && (param_1->Owner != (UObject *)0x0)) {
    FStateTreeMinimalExecutionContext::FStateTreeMinimalExecutionContext
              (&local_58,param_1->Owner,param_1->StateTree,param_1->InstanceData);
    FStateTreeReadOnlyExecutionContext::GetNextScheduledTick
              ((FStateTreeReadOnlyExecutionContext *)&local_58);
    FStateTreeWeakExecutionContext::UpdateScheduledTickRequest
              (&this->WeakExecutionContext,(FScheduledTickHandle)(this->ScheduledTickHandle).Value,
               local_res10);
    FStateTreeMinimalExecutionContext::~FStateTreeMinimalExecutionContext(&local_58);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

