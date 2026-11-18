// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 7

// BindInputs @ 14ae98260

void __thiscall
Metasound::MetasoundInputNodePrivate::TPostExecutableInputOperator<Metasound::FTrigger>::BindInputs
          (TPostExecutableInputOperator<Metasound::FTrigger> *this,
          FInputVertexInterfaceData *param_1)

{
  FInputVertexInterfaceData::BindVertex(param_1,&this->DataReferenceName,&this->DataRef);
  return;
}

// BindOutputs @ 14ae982b0

void __thiscall
Metasound::MetasoundInputNodePrivate::TPostExecutableInputOperator<Metasound::FTrigger>::BindOutputs
          (TPostExecutableInputOperator<Metasound::FTrigger> *this,
          FOutputVertexInterfaceData *param_1)

{
  FAnyDataReference *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FName *pFVar5;
  FAnyDataReference *local_res8;
  FName *local_res18 [2];
  code *local_38;
  FAnyDataReference **local_30;
  code *local_28;
  FName **local_20;
  
  pFVar1 = &this->DataRef;
  pFVar4 = GetMetasoundDataTypeName<Metasound::FTrigger>();
  pFVar5 = (FName *)(**(code **)(pFVar1->_padding_ + 8))(pFVar1);
  if (*pFVar5 != *pFVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOutDataReference.GetDataTypeName() == GetMetasoundDataTypeName<DataType>()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x45d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_30 = &local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_2>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res8 = pFVar1;
  local_res18[0] = &this->DataReferenceName;
  FOutputVertexInterfaceData::Apply
            (param_1,&this->DataReferenceName,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  return;
}

// GetExecuteFunction @ 14ae98520

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundInputNodePrivate::TPostExecutableInputOperator<Metasound::FTrigger>::
GetExecuteFunction(TPostExecutableInputOperator<Metasound::FTrigger> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14ae98530

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::MetasoundInputNodePrivate::TPostExecutableInputOperator<Metasound::FTrigger>::
GetPostExecuteFunction(TPostExecutableInputOperator<Metasound::FTrigger> *this)

{
  code *pcVar1;
  
  pcVar1 = (_func___cdecl_void_IOperator_ptr *)0x0;
  if ((this->DataRef).AccessType == Write) {
    pcVar1 = PostExecute;
  }
  return pcVar1;
}

// GetResetFunction @ 14ae985e0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::MetasoundInputNodePrivate::TPostExecutableInputOperator<Metasound::FTrigger>::
GetResetFunction(TPostExecutableInputOperator<Metasound::FTrigger> *this)

{
  code *pcVar1;
  
  pcVar1 = (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
  if ((this->DataRef).AccessType == Write) {
    pcVar1 = NoOpReset;
  }
  return pcVar1;
}

// NoOpReset @ 14afb0530

void __cdecl
Metasound::MetasoundInputNodePrivate::TPostExecutableInputOperator<Metasound::FTrigger>::NoOpReset
          (IOperator *param_1,FResetParams *param_2)

{
  return;
}

// PostExecute @ 14afb1200

void __cdecl
Metasound::MetasoundInputNodePrivate::TPostExecutableInputOperator<Metasound::FTrigger>::PostExecute
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  FTrigger *this;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundInputNode.h"
                       ,0x9a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = FAnyDataReference::GetWritableValue<Metasound::FTrigger>
                   ((FAnyDataReference *)(param_1 + 2));
  if (this == (FTrigger *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1743643824665657187>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundInputNode.h"
                       ,0x9d,"Value != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    return;
  }
  FTrigger::Advance(this,this->NumFramesPerBlock);
  return;
}

