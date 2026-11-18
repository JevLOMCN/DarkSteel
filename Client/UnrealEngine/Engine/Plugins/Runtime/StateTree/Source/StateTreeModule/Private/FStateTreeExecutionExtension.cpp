// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 7

// StaticStruct @ 14d4d9870

UScriptStruct * __cdecl FStateTreeExecutionExtension::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeExecutionExtension,(UObject *)pUVar1,
                         L"StateTreeExecutionExtension");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeExecutionExtension.OuterSingleton;
}

// GetInstanceDescription @ 14d4d98b0

FString * __thiscall
FStateTreeExecutionExtension::GetInstanceDescription
          (FStateTreeExecutionExtension *this,FString *__return_storage_ptr__,
          FContextParameters *param_1)

{
  FName local_res10 [3];
  
  local_res10[0].ComparisonIndex.Value = *(uint *)&param_1->Owner->field_0x18;
  local_res10[0].Number = *(uint *)&param_1->Owner->field_0x1c;
  ::FName::ToString(local_res10,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ScheduleNextTick @ 14d4d98e0

void __thiscall
FStateTreeExecutionExtension::ScheduleNextTick
          (FStateTreeExecutionExtension *this,FContextParameters *param_1,
          FNextTickArguments *param_2)

{
  return;
}

// ScheduleNextTick @ 14d4d98f0

void __thiscall
FStateTreeExecutionExtension::ScheduleNextTick
          (FStateTreeExecutionExtension *this,FContextParameters *param_1)

{
  return;
}

// OnLinkedStateTreeOverridesSet @ 14d4d9900

void __thiscall
FStateTreeExecutionExtension::OnLinkedStateTreeOverridesSet
          (FStateTreeExecutionExtension *this,FContextParameters *param_1,
          FStateTreeReferenceOverrides *param_2)

{
  return;
}

// OnBeginApplyTransition @ 14d4d9910

void __thiscall
FStateTreeExecutionExtension::OnBeginApplyTransition
          (FStateTreeExecutionExtension *this,FContextParameters *param_1,
          FStateTreeTransitionResult *param_2)

{
  return;
}

// ~FStateTreeExecutionExtension @ 14d4ec7a0

void __thiscall
FStateTreeExecutionExtension::~FStateTreeExecutionExtension(FStateTreeExecutionExtension *this)

{
  return;
}

