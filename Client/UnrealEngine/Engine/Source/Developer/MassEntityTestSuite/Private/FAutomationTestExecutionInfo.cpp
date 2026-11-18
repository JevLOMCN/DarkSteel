// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// FAutomationTestExecutionInfo @ 1470f2d30

FAutomationTestExecutionInfo * __thiscall
FAutomationTestExecutionInfo::FAutomationTestExecutionInfo(FAutomationTestExecutionInfo *this)

{
  this->bSuccessful = false;
  (this->AnalyticsItems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnalyticsItems).ArrayNum = 0;
  (this->AnalyticsItems).ArrayMax = 0;
  (this->TelemetryItems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TelemetryItems).ArrayNum = 0;
  (this->TelemetryItems).ArrayMax = 0;
  (this->TelemetryStorage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TelemetryStorage).Data.ArrayNum = 0;
  (this->TelemetryStorage).Data.ArrayMax = 0;
  this->Duration = 0.0;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  this->Errors = 0;
  this->Warnings = 0;
  (this->ContextStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextStack).ArrayNum = 0;
  (this->ContextStack).ArrayMax = 0;
  return this;
}

// GetWarningTotal @ 1471221d0

int __thiscall FAutomationTestExecutionInfo::GetWarningTotal(FAutomationTestExecutionInfo *this)

{
  return this->Warnings;
}

