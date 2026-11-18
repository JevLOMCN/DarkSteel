// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 1

// GetBodyAs<UE::ZenCookOnTheFly::Messaging::FCompletedPackages> @ 148cb06c0

FCompletedPackages * __thiscall
UE::Cook::FCookOnTheFlyMessage::GetBodyAs<UE::ZenCookOnTheFly::Messaging::FCompletedPackages>
          (FCookOnTheFlyMessage *this,FCompletedPackages *__return_storage_ptr__)

{
  FCompletedPackages local_d8;
  FArchiveState local_b8;
  undefined8 local_28;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_20;
  undefined8 local_18;
  
  local_d8.CookedPackages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.CookedPackages.ArrayNum = 0;
  local_d8.CookedPackages.ArrayMax = 0;
  local_d8.FailedPackages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.FailedPackages.ArrayNum = 0;
  local_d8.FailedPackages.ArrayMax = 0;
  local_b8._padding_ = 0;
  local_b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_b8._40_8_ = 0;
  local_b8.ArSerializingDefaults = 0;
  local_b8.ArPortFlags = 0;
  local_b8.ArMaxSerializeSize = 0;
  local_b8.ArUEVer.FileVersionUE4 = 0;
  local_b8.ArUEVer.FileVersionUE5 = 0;
  local_b8.ArLicenseeUEVer = 0;
  local_b8.ArEngineVer.Major = 0;
  local_b8.ArEngineVer.Minor = 0;
  local_b8.ArEngineVer.Patch = 0;
  local_b8.ArEngineVer._6_2_ = 0;
  local_b8.ArEngineVer.Changelist = 0;
  local_b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_b8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_b8.SerializedProperty = (FProperty *)0x0;
  local_b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_b8.bCustomVersionsAreReset = false;
  local_b8._129_7_ = 0;
  local_b8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_b8);
  local_28 = 0;
  local_b8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_20 = &this->Body;
  local_18 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_b8,true);
  (**(code **)(local_b8._padding_ + 0x108))(&local_b8,0);
  ZenCookOnTheFly::Messaging::operator<<((FArchive *)&local_b8,&local_d8);
  (__return_storage_ptr__->CookedPackages).AllocatorInstance.Data =
       local_d8.CookedPackages.AllocatorInstance.Data;
  (__return_storage_ptr__->CookedPackages).ArrayNum = local_d8.CookedPackages.ArrayNum;
  (__return_storage_ptr__->CookedPackages).ArrayMax = local_d8.CookedPackages.ArrayMax;
  (__return_storage_ptr__->FailedPackages).AllocatorInstance.Data =
       local_d8.FailedPackages.AllocatorInstance.Data;
  (__return_storage_ptr__->FailedPackages).ArrayNum = local_d8.FailedPackages.ArrayNum;
  (__return_storage_ptr__->FailedPackages).ArrayMax = local_d8.FailedPackages.ArrayMax;
  local_d8.FailedPackages.ArrayNum = 0;
  local_d8.FailedPackages.ArrayMax = 0;
  local_d8.CookedPackages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.CookedPackages.ArrayNum = 0;
  local_d8.CookedPackages.ArrayMax = 0;
  local_d8.FailedPackages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FArchive::~FArchive((FArchive *)&local_b8);
  if (local_d8.FailedPackages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.FailedPackages.AllocatorInstance.Data);
  }
  DestructItems<FPackageStoreEntryResource,int>
            ((FPackageStoreEntryResource *)local_d8.CookedPackages.AllocatorInstance.Data,
             local_d8.CookedPackages.ArrayNum);
  if ((FPackageStoreEntryResource *)local_d8.CookedPackages.AllocatorInstance.Data !=
      (FPackageStoreEntryResource *)0x0) {
    FMemory::Free(local_d8.CookedPackages.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

