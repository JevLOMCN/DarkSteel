// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationMessages
// Functions: 1

// StaticStruct @ 148bfa830

UScriptStruct * __cdecl FAutomationWorkerStopTestSession::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerStopTestSession.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AutomationMessages();
    Z_Registration_Info_UScriptStruct_FAutomationWorkerStopTestSession.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerStopTestSession,
                         (UObject *)pUVar1,L"AutomationWorkerStopTestSession");
  }
  return Z_Registration_Info_UScriptStruct_FAutomationWorkerStopTestSession.OuterSingleton;
}

