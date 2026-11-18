// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 3

// FPostExecuteEntry @ 14ad3c240

FPostExecuteEntry * __thiscall
Metasound::DynamicGraph::FPostExecuteEntry::FPostExecuteEntry
          (FPostExecuteEntry *this,int param_1,ulong64 param_2,IOperator *param_3,
          _func___cdecl_void_IOperator_ptr *param_4)

{
  this->Function = param_4;
  this->Ordinal = param_1;
  this->OperatorID = param_2;
  this->Operator = param_3;
  return this;
}

// FPostExecuteEntry @ 14ad3c260

FPostExecuteEntry * __thiscall
Metasound::FGraphOperator::FPostExecuteEntry::FPostExecuteEntry
          (FPostExecuteEntry *this,IOperator *param_1,_func___cdecl_void_IOperator_ptr *param_2)

{
  code *pcVar1;
  bool bVar2;
  FPostExecuteEntry *pFVar3;
  
  this->Operator = param_1;
  this->Function = param_2;
  if (param_2 == (_func___cdecl_void_IOperator_ptr *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Function",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundGraphOperator.cpp"
                       ,0xdd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPostExecuteEntry *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// PostExecute @ 14ad5b9d0

void __thiscall Metasound::FGraphOperator::FPostExecuteEntry::PostExecute(FPostExecuteEntry *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ad5b9d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->Function)(this->Operator);
  return;
}

