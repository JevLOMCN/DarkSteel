// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationMessages
// Functions: 2

// StaticStruct @ 148bfae80

UScriptStruct * __cdecl FAutomationWorkerImageComparisonResults::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerImageComparisonResults.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AutomationMessages();
    Z_Registration_Info_UScriptStruct_FAutomationWorkerImageComparisonResults.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults,
                         (UObject *)pUVar1,L"AutomationWorkerImageComparisonResults");
  }
  return Z_Registration_Info_UScriptStruct_FAutomationWorkerImageComparisonResults.OuterSingleton;
}

// ~FAutomationWorkerImageComparisonResults @ 148bfc650

void __thiscall
FAutomationWorkerImageComparisonResults::~FAutomationWorkerImageComparisonResults
          (FAutomationWorkerImageComparisonResults *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ReportIncomingFilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReportApprovedFilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReportComparisonFilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IncomingFilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ErrorMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScreenshotPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

