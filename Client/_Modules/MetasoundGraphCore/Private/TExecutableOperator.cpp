// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 15

// ~TExecutableOperator<Metasound::DynamicGraph::FAudioFadeOperatorWrapper> @ 14ad3d0a0

void __thiscall
Metasound::TExecutableOperator<Metasound::DynamicGraph::FAudioFadeOperatorWrapper>::
~TExecutableOperator<Metasound::DynamicGraph::FAudioFadeOperatorWrapper>
          (TExecutableOperator<Metasound::DynamicGraph::FAudioFadeOperatorWrapper> *this)

{
  *this = (TExecutableOperator<Metasound::DynamicGraph::FAudioFadeOperatorWrapper>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FGraphOperator> @ 14ad3d0c0

void __thiscall
Metasound::TExecutableOperator<Metasound::FGraphOperator>::
~TExecutableOperator<Metasound::FGraphOperator>
          (TExecutableOperator<Metasound::FGraphOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FGraphOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FRebindableGraphOperator> @ 14ad3d0e0

void __thiscall
Metasound::TExecutableOperator<Metasound::FRebindableGraphOperator>::
~TExecutableOperator<Metasound::FRebindableGraphOperator>
          (TExecutableOperator<Metasound::FRebindableGraphOperator> *this)

{
  *this = (TExecutableOperator<Metasound::FRebindableGraphOperator>)&___7IOperator_Metasound__6B_;
  return;
}

// ExecuteFunction @ 14ad4fd20

void __cdecl
Metasound::TExecutableOperator<Metasound::DynamicGraph::FAudioFadeOperatorWrapper>::ExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DynamicGraph::FAudioFadeOperatorWrapper::FadeBuffers
            ((FAudioFadeOperatorWrapper *)param_1,
             (TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
              *)(param_1 + 10),
             (TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
              *)(param_1 + 0xc));
  if (param_1[3] != (IOperator)0x0) {
    (*(code *)param_1[3])(param_1[2]);
  }
  DynamicGraph::FAudioFadeOperatorWrapper::FadeBuffers
            ((FAudioFadeOperatorWrapper *)param_1,
             (TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
              *)(param_1 + 0xe),
             (TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
              *)(param_1 + 0x10));
  if (param_1[0x12].field_0x1 == '\x02') {
    param_1[0x12].field_0x1 = 3;
    return;
  }
  if (param_1[0x12].field_0x1 == '\x01') {
    param_1[0x12].field_0x1 = 0;
  }
  return;
}

// ExecuteFunction @ 14ad4fdc0

void __cdecl
Metasound::TExecutableOperator<Metasound::FGraphOperator>::ExecuteFunction(IOperator *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  IOperator IVar4;
  IOperator IVar5;
  undefined1 local_res8 [8];
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 2);
  IVar4 = param_1[1];
  IVar5 = (IOperator)((longlong)iVar1 * 0x10 + (longlong)IVar4);
  while( true ) {
    if (*(int *)(param_1 + 2) != iVar1) {
      `TCheckedPointerIterator<Metasound::FGraphOperator::FExecuteEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (IVar4 == IVar5) break;
    (**(code **)((longlong)IVar4 + 8))(*(undefined8 *)IVar4);
    IVar4 = (IOperator)((longlong)IVar4 + 0x10);
  }
  return;
}

// ExecuteFunction @ 14ad4fe60

void __cdecl
Metasound::TExecutableOperator<Metasound::FRebindableGraphOperator>::ExecuteFunction
          (IOperator *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  IOperator IVar4;
  IOperator IVar5;
  undefined1 local_res8 [8];
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0xd5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 0x33);
  IVar4 = param_1[0x32];
  IVar5 = (IOperator)((longlong)iVar1 * 0x20 + (longlong)IVar4);
  while( true ) {
    if (*(int *)(param_1 + 0x33) != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::DynamicGraph::FExecuteEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (IVar4 == IVar5) break;
    if (*(longlong *)((longlong)IVar4 + 0x10) == 0) {
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
    if (*(longlong *)((longlong)IVar4 + 0x18) == 0) {
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
    (**(code **)((longlong)IVar4 + 0x18))(*(undefined8 *)((longlong)IVar4 + 0x10));
    IVar4 = (IOperator)((longlong)IVar4 + 0x20);
  }
  return;
}

// GetExecuteFunction @ 14ad55cb0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::DynamicGraph::FAudioFadeOperatorWrapper>::
GetExecuteFunction(TExecutableOperator<Metasound::DynamicGraph::FAudioFadeOperatorWrapper> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14ad55cc0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FGraphOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FGraphOperator> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14ad55cd0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FRebindableGraphOperator>::GetExecuteFunction
          (TExecutableOperator<Metasound::FRebindableGraphOperator> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14ad56680

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::DynamicGraph::FAudioFadeOperatorWrapper>::
GetPostExecuteFunction
          (TExecutableOperator<Metasound::DynamicGraph::FAudioFadeOperatorWrapper> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TPostExecuteFunctionAdapter<Metasound::DynamicGraph::FAudioFadeOperatorWrapper>::
         PostExecuteFunction;
}

// GetPostExecuteFunction @ 14ad56690

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FGraphOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FGraphOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TPostExecuteFunctionAdapter<Metasound::FGraphOperator>
         ::PostExecuteFunction;
}

// GetPostExecuteFunction @ 14ad566a0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FRebindableGraphOperator>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FRebindableGraphOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TPostExecuteFunctionAdapter<Metasound::FRebindableGraphOperator>::PostExecuteFunction;
}

// GetResetFunction @ 14ad56770

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::DynamicGraph::FAudioFadeOperatorWrapper>::GetResetFunction
          (TExecutableOperator<Metasound::DynamicGraph::FAudioFadeOperatorWrapper> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::DynamicGraph::FAudioFadeOperatorWrapper>::ResetFunction;
}

// GetResetFunction @ 14ad56780

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FGraphOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FGraphOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FGraphOperator>::
         ResetFunction;
}

// GetResetFunction @ 14ad56790

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FRebindableGraphOperator>::GetResetFunction
          (TExecutableOperator<Metasound::FRebindableGraphOperator> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FRebindableGraphOperator>::ResetFunction;
}

