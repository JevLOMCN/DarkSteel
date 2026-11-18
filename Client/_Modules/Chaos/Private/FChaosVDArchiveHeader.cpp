// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// Current @ 14375c4d0

FChaosVDArchiveHeader * __cdecl
Chaos::VisualDebugger::FChaosVDArchiveHeader::Current(FChaosVDArchiveHeader *__return_storage_ptr__)

{
  FCustomVersionContainer *pFVar1;
  FScriptContainerElement *pFVar2;
  FEngineVersion *pFVar3;
  FCustomVersionContainer *pFVar4;
  FCustomVersionContainer local_18;
  
  pFVar1 = &__return_storage_ptr__->CustomVersionContainer;
  *(undefined4 *)&(__return_storage_ptr__->EngineVersion)._padding_ = 0;
  *(undefined2 *)((longlong)&(__return_storage_ptr__->EngineVersion)._padding_ + 4) = 0;
  *(undefined4 *)&(__return_storage_ptr__->EngineVersion)._padding_ = 0;
  (__return_storage_ptr__->EngineVersion).Branch.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->EngineVersion).Branch.Data.ArrayNum = 0;
  (__return_storage_ptr__->EngineVersion).Branch.Data.ArrayMax = 0;
  (pFVar1->Versions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->CustomVersionContainer).Versions.ArrayNum = 0;
  (__return_storage_ptr__->CustomVersionContainer).Versions.ArrayMax = 0;
  pFVar3 = FEngineVersion::Current();
  (__return_storage_ptr__->EngineVersion)._padding_ = pFVar3->_padding_;
  *(int *)&(__return_storage_ptr__->EngineVersion)._padding_ = (int)pFVar3->_padding_;
  ::FString::operator=(&(__return_storage_ptr__->EngineVersion).Branch,&pFVar3->Branch);
  pFVar4 = FCurrentCustomVersions::GetAll(&local_18);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Versions).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Versions).AllocatorInstance.Data = (pFVar4->Versions).AllocatorInstance.Data;
    (pFVar4->Versions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->CustomVersionContainer).Versions.ArrayNum = (pFVar4->Versions).ArrayNum
    ;
    (__return_storage_ptr__->CustomVersionContainer).Versions.ArrayMax = (pFVar4->Versions).ArrayMax
    ;
    (pFVar4->Versions).ArrayNum = 0;
    (pFVar4->Versions).ArrayMax = 0;
  }
  if (local_18.Versions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Versions.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Serialize @ 1437ab450

/* WARNING: Enum "ECustomVersionSerializationFormat": Some values do not have unique names */

bool __thiscall
Chaos::VisualDebugger::FChaosVDArchiveHeader::Serialize
          (FChaosVDArchiveHeader *this,FArchive *param_1)

{
  longlong *plVar1;
  ECustomVersionSerializationFormat local_res8 [8];
  
  ::operator<<(param_1,&this->EngineVersion);
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = Latest;
  if ((ECustomVersionSerializationFormat *)plVar1[1] <
      (ECustomVersionSerializationFormat *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(ECustomVersionSerializationFormat *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  FCustomVersionContainer::Serialize(&this->CustomVersionContainer,param_1,local_res8[0]);
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

