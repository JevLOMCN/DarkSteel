// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 2

// FScopedAuditAccess @ 1441d2620

FScopedAuditAccess * __thiscall
FPacketAudit::FScopedAuditAccess::FScopedAuditAccess(FScopedAuditAccess *this,FPacketAudit *param_1)

{
  FSharedMemoryReader local_168;
  FSharedMemoryReader local_b8;
  
  this->Auditor = param_1;
  (**(code **)param_1->SharedMutex->_padding_)();
  FSharedMemoryReader::FSharedMemoryReader(&local_b8,this->Auditor->SendSharedMemory->Address);
  FSharedMemoryReader::FSharedMemoryReader(&local_168,this->Auditor->ReceiveSharedMemory->Address);
  TSetPrivateFriend::
  Serialize<TTuple<unsigned_int,FPacketAuditData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>,FDefaultSetAllocator>
            ((FArchive *)&local_b8,
             (TSet<TTuple<unsigned_int,FPacketAuditData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>,FDefaultSetAllocator>
              *)&GSendPacketAudits);
  TSetPrivateFriend::
  Serialize<TTuple<unsigned_int,FPacketAuditData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>,FDefaultSetAllocator>
            ((FArchive *)&local_168,
             (TSet<TTuple<unsigned_int,FPacketAuditData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>,FDefaultSetAllocator>
              *)&GReceivePacketAudits);
  FArchive::~FArchive((FArchive *)&local_168);
  FArchive::~FArchive((FArchive *)&local_b8);
  return this;
}

// ~FScopedAuditAccess @ 1441d4270

void __thiscall FPacketAudit::FScopedAuditAccess::~FScopedAuditAccess(FScopedAuditAccess *this)

{
  undefined4 *puVar1;
  FArchiveState local_168;
  undefined8 local_d8;
  undefined4 *local_d0;
  undefined4 *local_c8;
  FArchiveState local_b8;
  undefined8 local_28;
  undefined4 *local_20;
  undefined4 *local_18;
  
  puVar1 = this->Auditor->SendSharedMemory->Address;
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
  local_18 = puVar1 + 1;
  local_28 = 0;
  local_b8._padding_ = (longlong)&___7FSharedMemoryWriter__6B_;
  local_20 = puVar1;
  FArchiveState::SetIsSaving(&local_b8,true);
  *local_20 = 0;
  puVar1 = this->Auditor->ReceiveSharedMemory->Address;
  local_168._padding_ = 0;
  local_168.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_168.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_168.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_168.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_168._40_8_ = 0;
  local_168.ArSerializingDefaults = 0;
  local_168.ArPortFlags = 0;
  local_168.ArMaxSerializeSize = 0;
  local_168.ArUEVer.FileVersionUE4 = 0;
  local_168.ArUEVer.FileVersionUE5 = 0;
  local_168.ArLicenseeUEVer = 0;
  local_168.ArEngineVer.Major = 0;
  local_168.ArEngineVer.Minor = 0;
  local_168.ArEngineVer.Patch = 0;
  local_168.ArEngineVer._6_2_ = 0;
  local_168.ArEngineVer.Changelist = 0;
  local_168.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_168.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_168.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_168.SerializedProperty = (FProperty *)0x0;
  local_168.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_168.bCustomVersionsAreReset = false;
  local_168._129_7_ = 0;
  local_168.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_168);
  local_c8 = puVar1 + 1;
  local_d8 = 0;
  local_168._padding_ = (longlong)&___7FSharedMemoryWriter__6B_;
  local_d0 = puVar1;
  FArchiveState::SetIsSaving(&local_168,true);
  *local_d0 = 0;
  TSetPrivateFriend::
  Serialize<TTuple<unsigned_int,FPacketAuditData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>,FDefaultSetAllocator>
            ((FArchive *)&local_b8,
             (TSet<TTuple<unsigned_int,FPacketAuditData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>,FDefaultSetAllocator>
              *)&GSendPacketAudits);
  TSetPrivateFriend::
  Serialize<TTuple<unsigned_int,FPacketAuditData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>,FDefaultSetAllocator>
            ((FArchive *)&local_168,
             (TSet<TTuple<unsigned_int,FPacketAuditData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>,FDefaultSetAllocator>
              *)&GReceivePacketAudits);
  FArchive::~FArchive((FArchive *)&local_168);
  FArchive::~FArchive((FArchive *)&local_b8);
                    /* WARNING: Could not recover jumptable at 0x0001441d43c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->Auditor->SharedMutex->_padding_ + 0x10))();
  return;
}

