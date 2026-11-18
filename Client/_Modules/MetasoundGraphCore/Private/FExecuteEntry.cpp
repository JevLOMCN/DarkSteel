// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 3

// FExecuteEntry @ 14ad39610

FExecuteEntry * __thiscall
Metasound::DynamicGraph::FExecuteEntry::FExecuteEntry
          (FExecuteEntry *this,int param_1,ulong64 param_2,IOperator *param_3,
          _func___cdecl_void_IOperator_ptr *param_4)

{
  this->Function = param_4;
  this->Ordinal = param_1;
  this->OperatorID = param_2;
  this->Operator = param_3;
  return this;
}

// FExecuteEntry @ 14ad39630

FExecuteEntry * __thiscall
Metasound::FGraphOperator::FExecuteEntry::FExecuteEntry
          (FExecuteEntry *this,IOperator *param_1,_func___cdecl_void_IOperator_ptr *param_2)

{
  code *pcVar1;
  bool bVar2;
  FExecuteEntry *pFVar3;
  
  this->Operator = param_1;
  this->Function = param_2;
  if (param_2 == (_func___cdecl_void_IOperator_ptr *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Function",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundGraphOperator.cpp"
                       ,0xd1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FExecuteEntry *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// Execute @ 14ad4fbc0

void __thiscall Metasound::FGraphOperator::FExecuteEntry::Execute(FExecuteEntry *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ad4fbc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->Function)(this->Operator);
  return;
}

