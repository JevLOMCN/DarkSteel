// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// ResetFunction @ 14bbdc610

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FDS_MetasoundTimeCenterWeight>::ResetFunction
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
  FDS_MetasoundTimeCenterWeight::UpdateTime((FDS_MetasoundTimeCenterWeight *)param_1);
  return;
}

// ResetFunction @ 14bbdc660

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FDS_MetasoundTimeOfDay>::ResetFunction
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
  FDS_MetasoundTimeOfDay::UpdateTime((FDS_MetasoundTimeOfDay *)param_1);
  return;
}

