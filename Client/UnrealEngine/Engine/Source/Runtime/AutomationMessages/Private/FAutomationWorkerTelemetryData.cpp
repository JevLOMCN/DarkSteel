// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationMessages
// Functions: 2

// StaticStruct @ 148bfb1a0

UScriptStruct * __cdecl FAutomationWorkerTelemetryData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAutomationWorkerTelemetryData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AutomationMessages();
    Z_Registration_Info_UScriptStruct_FAutomationWorkerTelemetryData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerTelemetryData,(UObject *)pUVar1,
                         L"AutomationWorkerTelemetryData");
  }
  return Z_Registration_Info_UScriptStruct_FAutomationWorkerTelemetryData.OuterSingleton;
}

// ~FAutomationWorkerTelemetryData @ 148bfc760

void __thiscall
FAutomationWorkerTelemetryData::~FAutomationWorkerTelemetryData
          (FAutomationWorkerTelemetryData *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FAutomationWorkerTelemetryItem,int>
            ((FAutomationWorkerTelemetryItem *)(this->Items).AllocatorInstance.Data,
             (this->Items).ArrayNum);
  pFVar1 = (this->Items).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TestName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Platform).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Configuration).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Storage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

