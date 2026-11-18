// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 3

// PostExecuteFunction @ 14ad5bac0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TPostExecuteFunctionAdapter<Metasound::DynamicGraph::FAudioFadeOperatorWrapper>::PostExecuteFunction
          (IOperator *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  IOperator IVar5;
  IOperator IVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0x7f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_1[4] != (IOperator)0x0) {
    (*(code *)param_1[4])(param_1[2]);
  }
  if (param_1[0x12].field_0x1 == '\0') {
    IVar5 = param_1[0xc];
    iVar1 = *(int *)(param_1 + 0xd);
    IVar6 = (IOperator)((longlong)iVar1 * 0x20 + (longlong)IVar5);
    while( true ) {
      if (*(int *)(param_1 + 0xd) != iVar1) {
        `TCheckedPointerIterator<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (IVar5 == IVar6) break;
      iVar2 = *(int *)(*(undefined8 **)((longlong)IVar5 + 8) + 1);
      if (0 < iVar2) {
        memset((void *)**(undefined8 **)((longlong)IVar5 + 8),0,(longlong)iVar2 << 2);
      }
      IVar5 = (IOperator)((longlong)IVar5 + 0x20);
    }
    iVar1 = *(int *)(param_1 + 0x11);
    IVar5 = param_1[0x10];
    IVar6 = (IOperator)((longlong)iVar1 * 0x20 + (longlong)IVar5);
    while( true ) {
      if (*(int *)(param_1 + 0x11) != iVar1) {
        `TCheckedPointerIterator<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (IVar5 == IVar6) break;
      iVar2 = *(int *)(*(undefined8 **)((longlong)IVar5 + 8) + 1);
      if (0 < iVar2) {
        memset((void *)**(undefined8 **)((longlong)IVar5 + 8),0,(longlong)iVar2 << 2);
      }
      IVar5 = (IOperator)((longlong)IVar5 + 0x20);
    }
  }
  return;
}

// PostExecuteFunction @ 14ad5bbe0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TPostExecuteFunctionAdapter<Metasound::FGraphOperator>::PostExecuteFunction(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x7f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FGraphOperator::PostExecute((FGraphOperator *)param_1);
  return;
}

// PostExecuteFunction @ 14ad5bc30

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TPostExecuteFunctionAdapter<Metasound::FRebindableGraphOperator>::PostExecuteFunction
          (IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x7f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRebindableGraphOperator::PostExecute((FRebindableGraphOperator *)param_1);
  return;
}

