// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 3

// ResetFunction @ 14ad62a10

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::DynamicGraph::FAudioFadeOperatorWrapper>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1[5] != (IOperator)0x0) {
    (*(code *)param_1[5])(param_1[2],param_2);
  }
  param_1[0x12].field_0x1 = *(undefined1 *)(param_1 + 0x12);
  return;
}

// ResetFunction @ 14ad62a80

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FGraphOperator>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

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
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 6);
  IVar4 = param_1[5];
  IVar5 = (IOperator)((longlong)iVar1 * 0x10 + (longlong)IVar4);
  while( true ) {
    if (*(int *)(param_1 + 6) != iVar1) {
      `TCheckedPointerIterator<Metasound::FGraphOperator::FResetEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (IVar4 == IVar5) break;
    (**(code **)((longlong)IVar4 + 8))(*(undefined8 *)IVar4,param_2);
    IVar4 = (IOperator)((longlong)IVar4 + 0x10);
  }
  return;
}

// ResetFunction @ 14ad62b20

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FRebindableGraphOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

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
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 0x37);
  IVar4 = param_1[0x36];
  IVar5 = (IOperator)((longlong)iVar1 * 0x20 + (longlong)IVar4);
  while( true ) {
    if (*(int *)(param_1 + 0x37) != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::DynamicGraph::FResetEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (IVar4 == IVar5) break;
    if (*(longlong *)((longlong)IVar4 + 0x10) == 0) {
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
    if (*(longlong *)((longlong)IVar4 + 0x18) == 0) {
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
    (**(code **)((longlong)IVar4 + 0x18))(*(undefined8 *)((longlong)IVar4 + 0x10),param_2);
    IVar4 = (IOperator)((longlong)IVar4 + 0x20);
  }
  return;
}

