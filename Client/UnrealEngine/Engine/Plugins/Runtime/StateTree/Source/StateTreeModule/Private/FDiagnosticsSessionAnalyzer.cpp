// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// OnAnalysisBegin @ 14d4c5510

void __thiscall
UE::StateTreeDebugger::FDiagnosticsSessionAnalyzer::OnAnalysisBegin
          (FDiagnosticsSessionAnalyzer *this,FOnAnalysisContext *param_1)

{
  (**(code **)*param_1->InterfaceBuilder)(param_1->InterfaceBuilder,0,"Diagnostics","Session2",0);
  return;
}

// OnEvent @ 14d4c58b0

bool __thiscall
UE::StateTreeDebugger::FDiagnosticsSessionAnalyzer::OnEvent
          (FDiagnosticsSessionAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  FEventData *this_00;
  EBuildConfiguration EVar1;
  EBuildTargetType EVar2;
  uint uVar3;
  
  this_00 = param_3->EventData;
  if (param_1 != 0) {
    return true;
  }
  Trace::IAnalyzer::FEventData::GetString(this_00,"Platform",&(this->SessionInfo).Platform);
  Trace::IAnalyzer::FEventData::GetString(this_00,"AppName",&(this->SessionInfo).AppName);
  Trace::IAnalyzer::FEventData::GetString(this_00,"CommandLine",&(this->SessionInfo).CommandLine);
  Trace::IAnalyzer::FEventData::GetString(this_00,"Branch",&(this->SessionInfo).Branch);
  Trace::IAnalyzer::FEventData::GetString(this_00,"BuildVersion",&(this->SessionInfo).BuildVersion);
  uVar3 = Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"Changelist",0);
  (this->SessionInfo).Changelist = uVar3;
  EVar1 = Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"ConfigurationType",'\0');
  (this->SessionInfo).ConfigurationType = EVar1;
  EVar2 = Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"TargetType",'\0');
  (this->SessionInfo).TargetType = EVar2;
  return false;
}

