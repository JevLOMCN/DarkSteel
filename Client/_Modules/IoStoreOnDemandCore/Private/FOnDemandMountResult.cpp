// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 1

// LogResult @ 144591710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::IoStore::FOnDemandMountResult::LogResult(FOnDemandMountResult *this)

{
  EIoErrorCode EVar1;
  
  EVar1 = (this->Status).ErrorCode;
  if (EVar1 != Ok) {
    if ((1 < (byte)LogIas._0_1_) && (EVar1 != PendingHostGroup)) {
      Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_&,FIoStatus_&>
                ((FLogCategoryBase *)&LogIas,&::LOG_Static,&this->MountId,&this->Status);
    }
    if ((4 < (byte)LogIas._0_1_) && ((this->Status).ErrorCode == PendingHostGroup)) {
      Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_&,FIoStatus_&>
                ((FLogCategoryBase *)&LogIas,&::LOG_Static,&this->MountId,&this->Status);
    }
  }
  return;
}

