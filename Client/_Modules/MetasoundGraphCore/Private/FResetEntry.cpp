// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 3

// FResetEntry @ 14ad3c620

FResetEntry * __thiscall
Metasound::DynamicGraph::FResetEntry::FResetEntry
          (FResetEntry *this,int param_1,ulong64 param_2,IOperator *param_3,
          _func___cdecl_void_IOperator_ptr_FResetParams_ptr *param_4)

{
  this->Function = param_4;
  this->Ordinal = param_1;
  this->OperatorID = param_2;
  this->Operator = param_3;
  return this;
}

// FResetEntry @ 14ad3c640

FResetEntry * __thiscall
Metasound::FGraphOperator::FResetEntry::FResetEntry
          (FResetEntry *this,IOperator *param_1,
          _func___cdecl_void_IOperator_ptr_FResetParams_ptr *param_2)

{
  code *pcVar1;
  bool bVar2;
  FResetEntry *pFVar3;
  
  this->Operator = param_1;
  this->Function = param_2;
  if (param_2 == (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Function",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundGraphOperator.cpp"
                       ,0xe9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FResetEntry *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// Reset @ 14ad62a00

void __thiscall
Metasound::FGraphOperator::FResetEntry::Reset(FResetEntry *this,FResetParams *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014ad62a07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->Function)(this->Operator,param_1);
  return;
}

