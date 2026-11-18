// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsET
// Functions: 2

// ~FDummyAnalyticsSummarySender @ 1431940d0

void __thiscall
FDummyAnalyticsSummarySender::~FDummyAnalyticsSummarySender(FDummyAnalyticsSummarySender *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)(this->Properties).AllocatorInstance.Data,
             (this->Properties).ArrayNum);
  pFVar1 = (this->Properties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SessionId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AppVersion).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AppId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UserId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// SendSessionSummary @ 1431a30e0

bool __thiscall
FDummyAnalyticsSummarySender::SendSessionSummary
          (FDummyAnalyticsSummarySender *this,FString *param_1,FString *param_2,FString *param_3,
          FString *param_4,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_5)

{
  ::FString::operator=(&this->UserId,param_1);
  ::FString::operator=(&this->AppId,param_2);
  ::FString::operator=(&this->AppVersion,param_3);
  ::FString::operator=(&this->SessionId,param_4);
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>::operator=(&this->Properties,param_5)
  ;
  this->bReportSent = true;
  return true;
}

