// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 1

// FInstallBundleRequestResultInfo @ 148d9c0b0

FInstallBundleRequestResultInfo * __thiscall
FInstallBundleRequestResultInfo::FInstallBundleRequestResultInfo
          (FInstallBundleRequestResultInfo *this,FInstallBundleRequestResultInfo *param_1)

{
  this->BundleName = param_1->BundleName;
  this->Result = param_1->Result;
  this->bIsStartup = param_1->bIsStartup;
  this->bContainsChunks = param_1->bContainsChunks;
  this->bContainsIoStoreOnDemand = param_1->bContainsIoStoreOnDemand;
  this->bContentWasInstalled = param_1->bContentWasInstalled;
  FText::FText(&this->OptionalErrorText,&param_1->OptionalErrorText);
  (this->OptionalErrorCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionalErrorCode).Data.AllocatorInstance.Data =
       (param_1->OptionalErrorCode).Data.AllocatorInstance.Data;
  (param_1->OptionalErrorCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionalErrorCode).Data.ArrayNum = (param_1->OptionalErrorCode).Data.ArrayNum;
  (this->OptionalErrorCode).Data.ArrayMax = (param_1->OptionalErrorCode).Data.ArrayMax;
  (param_1->OptionalErrorCode).Data.ArrayNum = 0;
  (param_1->OptionalErrorCode).Data.ArrayMax = 0;
  return this;
}

