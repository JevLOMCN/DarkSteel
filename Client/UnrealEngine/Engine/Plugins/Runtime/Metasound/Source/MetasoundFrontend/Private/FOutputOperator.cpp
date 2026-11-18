// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 4

// FOutputOperator @ 14af3d4e0

FOutputOperator * __thiscall
Metasound::OutputNodePrivate::FOutputOperator::FOutputOperator
          (FOutputOperator *this,FName *param_1,FAnyDataReference *param_2)

{
  this->_padding_ = (longlong)&___7FOutputOperator_OutputNodePrivate_Metasound__6B_;
  this->VertexName = *param_1;
  FAnyDataReference::FAnyDataReference
            (&this->DataReference,param_2->AccessType,(param_2->DataRefPtr).Ptr);
  (this->DataReference)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  return this;
}

// ~FOutputOperator @ 14af42d60

void __thiscall
Metasound::OutputNodePrivate::FOutputOperator::~FOutputOperator(FOutputOperator *this)

{
  IDataReference *pIVar1;
  
  pIVar1 = (this->DataReference).DataRefPtr.Ptr;
  if (pIVar1 != (IDataReference *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// BindInputs @ 14af4fae0

void __thiscall
Metasound::OutputNodePrivate::FOutputOperator::BindInputs
          (FOutputOperator *this,FInputVertexInterfaceData *param_1)

{
  FInputVertexInterfaceData::BindVertex(param_1,&this->VertexName,&this->DataReference);
  return;
}

// BindOutputs @ 14af4fb00

void __thiscall
Metasound::OutputNodePrivate::FOutputOperator::BindOutputs
          (FOutputOperator *this,FOutputVertexInterfaceData *param_1)

{
  FOutputVertexInterfaceData::BindVertex(param_1,&this->VertexName,&this->DataReference);
  return;
}

