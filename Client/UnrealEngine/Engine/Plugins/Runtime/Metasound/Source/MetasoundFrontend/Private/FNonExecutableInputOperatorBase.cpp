// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 6

// BindInputs @ 14aea6dd0

void __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::BindInputs
          (FNonExecutableInputOperatorBase *this,FInputVertexInterfaceData *param_1)

{
  FInputVertexInterfaceData::BindVertex(param_1,&this->VertexName,&this->DataRef);
  return;
}

// BindOutputs @ 14aea6e00

void __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::BindOutputs
          (FNonExecutableInputOperatorBase *this,FOutputVertexInterfaceData *param_1)

{
  FOutputVertexInterfaceData::BindVertex(param_1,&this->VertexName,&this->DataRef);
  return;
}

// GetExecuteFunction @ 14aea6eb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::GetExecuteFunction
          (FNonExecutableInputOperatorBase *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14aea6ee0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::GetPostExecuteFunction
          (FNonExecutableInputOperatorBase *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14aea6ef0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::GetResetFunction
          (FNonExecutableInputOperatorBase *this)

{
  return (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
}

// FNonExecutableInputOperatorBase @ 14af3d170

FNonExecutableInputOperatorBase * __thiscall
Metasound::MetasoundInputNodePrivate::FNonExecutableInputOperatorBase::
FNonExecutableInputOperatorBase
          (FNonExecutableInputOperatorBase *this,FName *param_1,FAnyDataReference *param_2)

{
  this->_padding_ =
       (longlong)&___7FNonExecutableInputOperatorBase_MetasoundInputNodePrivate_Metasound__6B_;
  this->VertexName = *param_1;
  FAnyDataReference::FAnyDataReference(&this->DataRef,param_2->AccessType,(param_2->DataRefPtr).Ptr)
  ;
  (this->DataRef)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  return this;
}

