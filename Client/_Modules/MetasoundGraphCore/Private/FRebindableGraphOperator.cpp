// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 9

// FRebindableGraphOperator @ 14ad3c440

FRebindableGraphOperator * __thiscall
Metasound::FRebindableGraphOperator::FRebindableGraphOperator
          (FRebindableGraphOperator *this,FOperatorSettings *param_1)

{
  this->_padding_ =
       (longlong)
       &_vftable__for__Metasound__TExecutableOperator<Metasound::FRebindableGraphOperator>__;
  this->_padding_ =
       (longlong)&_vftable__for__Metasound__DynamicGraph__IDynamicGraphInPlaceBuildable__;
  DynamicGraph::FDynamicGraphOperatorData::FDynamicGraphOperatorData
            (&this->GraphOperatorData,param_1);
  return this;
}

// BindInputs @ 14ad48020

void __thiscall
Metasound::FRebindableGraphOperator::BindInputs
          (FRebindableGraphOperator *this,FInputVertexInterfaceData *param_1)

{
  DynamicGraph::RebindGraphInputs(param_1,&this->GraphOperatorData);
  return;
}

// BindOutputs @ 14ad48460

void __thiscall
Metasound::FRebindableGraphOperator::BindOutputs
          (FRebindableGraphOperator *this,FOutputVertexInterfaceData *param_1)

{
  DynamicGraph::RebindGraphOutputs(param_1,&this->GraphOperatorData);
  return;
}

// Execute @ 14ad4fc40

void __thiscall Metasound::FRebindableGraphOperator::Execute(FRebindableGraphOperator *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->GraphOperatorData).ExecuteTable.ArrayNum;
  pFVar4 = (this->GraphOperatorData).ExecuteTable.AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->GraphOperatorData).ExecuteTable.ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::DynamicGraph::FExecuteEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (*(longlong *)(pFVar4 + 0x10) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Operator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.h"
                         ,0x1c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(longlong *)(pFVar4 + 0x18) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Function",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.h"
                         ,0x1d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(pFVar4 + 0x18))(*(undefined8 *)(pFVar4 + 0x10));
    pFVar4 = pFVar4 + 0x20;
  }
  return;
}

// GetDynamicGraphOperatorData @ 14ad55a50

FDynamicGraphOperatorData * __thiscall
Metasound::FRebindableGraphOperator::GetDynamicGraphOperatorData(FRebindableGraphOperator *this)

{
  return (FDynamicGraphOperatorData *)&this->_padding_;
}

// GetPostExecuteFunction @ 14ad56700

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::FRebindableGraphOperator::GetPostExecuteFunction(FRebindableGraphOperator *this)

{
  return StaticPostExecute;
}

// PostExecute @ 14ad5b9e0

void __thiscall Metasound::FRebindableGraphOperator::PostExecute(FRebindableGraphOperator *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->GraphOperatorData).PostExecuteTable.ArrayNum;
  pFVar2 = (this->GraphOperatorData).PostExecuteTable.AllocatorInstance.Data;
  pFVar5 = pFVar2 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->GraphOperatorData).PostExecuteTable.ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::DynamicGraph::FPostExecuteEntry,int,1>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar2) break;
    if (*(longlong *)(pFVar5 + -0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Operator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.h"
                         ,0x2e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(longlong *)(pFVar5 + -8) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Function",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.h"
                         ,0x2f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(pFVar5 + -8))(*(undefined8 *)(pFVar5 + -0x10));
    pFVar5 = pFVar5 + -0x20;
  }
  return;
}

// Reset @ 14ad62920

void __thiscall
Metasound::FRebindableGraphOperator::Reset(FRebindableGraphOperator *this,FResetParams *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->GraphOperatorData).ResetTable.ArrayNum;
  pFVar4 = (this->GraphOperatorData).ResetTable.AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->GraphOperatorData).ResetTable.ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::DynamicGraph::FResetEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (*(longlong *)(pFVar4 + 0x10) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Operator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.h"
                         ,0x40,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(longlong *)(pFVar4 + 0x18) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Function",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.h"
                         ,0x41,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(pFVar4 + 0x18))(*(undefined8 *)(pFVar4 + 0x10),param_1);
    pFVar4 = pFVar4 + 0x20;
  }
  return;
}

// StaticPostExecute @ 14ad65410

void __cdecl Metasound::FRebindableGraphOperator::StaticPostExecute(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundRebindableGraphOperator.cpp"
                       ,0x4d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  PostExecute((FRebindableGraphOperator *)param_1);
  return;
}

