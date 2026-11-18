// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 5

// BindInputs @ 14ad47f80

void __thiscall Metasound::FExecuter::BindInputs(FExecuter *this,FInputVertexInterfaceData *param_1)

{
  IOperator *pIVar1;
  
  pIVar1 = (this->Operator).Ptr;
  if (pIVar1 != (IOperator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ad47f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x20))();
    return;
  }
  return;
}

// BindOutputs @ 14ad48400

void __thiscall
Metasound::FExecuter::BindOutputs(FExecuter *this,FOutputVertexInterfaceData *param_1)

{
  IOperator *pIVar1;
  
  pIVar1 = (this->Operator).Ptr;
  if (pIVar1 != (IOperator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ad4840c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x28))();
    return;
  }
  return;
}

// GetExecuteFunction @ 14ad55cf0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::FExecuter::GetExecuteFunction(FExecuter *this)

{
  return this->ExecuteFunction;
}

// GetPostExecuteFunction @ 14ad566c0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::FExecuter::GetPostExecuteFunction(FExecuter *this)

{
  return this->PostExecuteFunction;
}

// GetResetFunction @ 14ad567b0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::FExecuter::GetResetFunction(FExecuter *this)

{
  return this->ResetFunction;
}

