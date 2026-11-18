// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ScreenShotComparisonTools
// Functions: 1

// FComparisonReport @ 148c3d390

FComparisonReport * __thiscall
FComparisonReport::FComparisonReport(FComparisonReport *this,FString *param_1,FString *param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_28;
  
  pFVar1 = &this->ReportPath;
  (this->ReportRootDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReportRootDirectory).Data.ArrayNum = 0;
  (this->ReportRootDirectory).Data.ArrayMax = 0;
  (this->ReportFile).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReportFile).Data.ArrayNum = 0;
  (this->ReportFile).Data.ArrayMax = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReportPath).Data.ArrayNum = 0;
  (this->ReportPath).Data.ArrayMax = 0;
  FImageComparisonResult::FImageComparisonResult(&this->Comparison);
  ::FString::operator=(&this->ReportRootDirectory,param_1);
  ::FString::operator=(&this->ReportFile,param_2);
  pFVar3 = FPaths::GetPath(&local_28,param_2);
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ReportPath).Data.ArrayNum = (pFVar3->Data).ArrayNum;
    (this->ReportPath).Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return this;
}

