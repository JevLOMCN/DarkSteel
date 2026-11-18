// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// ~TExecutableOperator<Metasound::FDS_MetasoundTimeCenterWeight> @ 14bba9cf0

void __thiscall
Metasound::TExecutableOperator<Metasound::FDS_MetasoundTimeCenterWeight>::
~TExecutableOperator<Metasound::FDS_MetasoundTimeCenterWeight>
          (TExecutableOperator<Metasound::FDS_MetasoundTimeCenterWeight> *this)

{
  *this = (TExecutableOperator<Metasound::FDS_MetasoundTimeCenterWeight>)
          &___7IOperator_Metasound__6B_;
  return;
}

// ~TExecutableOperator<Metasound::FDS_MetasoundTimeOfDay> @ 14bba9d10

void __thiscall
Metasound::TExecutableOperator<Metasound::FDS_MetasoundTimeOfDay>::
~TExecutableOperator<Metasound::FDS_MetasoundTimeOfDay>
          (TExecutableOperator<Metasound::FDS_MetasoundTimeOfDay> *this)

{
  *this = (TExecutableOperator<Metasound::FDS_MetasoundTimeOfDay>)&___7IOperator_Metasound__6B_;
  return;
}

// ExecuteFunction @ 14bbb5a80

void __cdecl
Metasound::TExecutableOperator<Metasound::FDS_MetasoundTimeCenterWeight>::ExecuteFunction
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
  FDS_MetasoundTimeCenterWeight::UpdateTime((FDS_MetasoundTimeCenterWeight *)param_1);
  return;
}

// ExecuteFunction @ 14bbb5ad0

void __cdecl
Metasound::TExecutableOperator<Metasound::FDS_MetasoundTimeOfDay>::ExecuteFunction
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
  FDS_MetasoundTimeOfDay::UpdateTime((FDS_MetasoundTimeOfDay *)param_1);
  return;
}

// GetExecuteFunction @ 14bbbc310

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FDS_MetasoundTimeCenterWeight>::GetExecuteFunction
          (TExecutableOperator<Metasound::FDS_MetasoundTimeCenterWeight> *this)

{
  return ExecuteFunction;
}

// GetExecuteFunction @ 14bbbc320

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FDS_MetasoundTimeOfDay>::GetExecuteFunction
          (TExecutableOperator<Metasound::FDS_MetasoundTimeOfDay> *this)

{
  return ExecuteFunction;
}

// GetPostExecuteFunction @ 14bbbcfd0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FDS_MetasoundTimeCenterWeight>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FDS_MetasoundTimeCenterWeight> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetPostExecuteFunction @ 14bbbcfe0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FDS_MetasoundTimeOfDay>::GetPostExecuteFunction
          (TExecutableOperator<Metasound::FDS_MetasoundTimeOfDay> *this)

{
  return (_func___cdecl_void_IOperator_ptr *)0x0;
}

// GetResetFunction @ 14bbbd000

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FDS_MetasoundTimeCenterWeight>::GetResetFunction
          (TExecutableOperator<Metasound::FDS_MetasoundTimeCenterWeight> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FDS_MetasoundTimeCenterWeight>::ResetFunction;
}

// GetResetFunction @ 14bbbd010

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::TExecutableOperator<Metasound::FDS_MetasoundTimeOfDay>::GetResetFunction
          (TExecutableOperator<Metasound::FDS_MetasoundTimeOfDay> *this)

{
  return MetasoundExecutableOperatorPrivate::
         TResetFunctionAdapter<Metasound::FDS_MetasoundTimeOfDay>::ResetFunction;
}

