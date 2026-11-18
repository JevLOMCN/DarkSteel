// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationMessages
// Functions: 1

// StaticStruct @ 148bfaf00

UScriptStruct * __cdecl FAutomationWorkerTestDataResponse::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerTestDataResponse.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AutomationMessages();
    Z_Registration_Info_UScriptStruct_FAutomationWorkerTestDataResponse.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse,
                         (UObject *)pUVar1,L"AutomationWorkerTestDataResponse");
  }
  return Z_Registration_Info_UScriptStruct_FAutomationWorkerTestDataResponse.OuterSingleton;
}

