// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// TVersionedReader<FMemoryReaderView><TMemoryView<void_const_>_&,bool> @ 148338c80

/* WARNING: Enum "ECustomVersionSerializationFormat": Some values do not have unique names */

TVersionedReader<FMemoryReaderView> * __thiscall
TVersionedReader<FMemoryReaderView>::
TVersionedReader<FMemoryReaderView><TMemoryView<void_const_>_&,bool>
          (TVersionedReader<FMemoryReaderView> *this,TMemoryView<void_const_> *param_1,bool *param_2
          )

{
  undefined1 *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  TVersionedReader<FMemoryReaderView> *pTVar5;
  ulong64 local_res8;
  FCustomVersionContainer local_28;
  void *local_18;
  ulong64 uStack_10;
  
  local_18 = param_1->Data;
  uStack_10 = param_1->Size;
  bVar3 = *param_2;
  this_00 = &this->field_0x98;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&this->field_0xa0 = 0;
  *(undefined8 *)&this->field_0xa8 = 0;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined8 *)&this->field_0xc8 = 0;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0xe8 = 0;
  *(undefined8 *)&this->field_0xf0 = 0;
  *(undefined8 *)&this->field_0xf8 = 0;
  *(undefined8 *)&this->field_0x100 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  FArchiveState::FArchiveState((FArchiveState *)this_00);
  *(undefined ***)this_00 = &___7FMemoryReaderView__6B_;
  *(undefined8 *)&this->field_0x128 = 0;
  *(undefined8 *)&this->field_0x140 = 0x7fffffffffffffff;
  *(void **)&this->field_0x130 = local_18;
  *(ulong64 *)&this->field_0x138 = uStack_10;
  FArchiveState::SetIsLoading((FArchiveState *)this_00,true);
  (**(code **)(*(longlong *)this_00 + 0x108))(this_00,bVar3);
  FArchiveProxy::FArchiveProxy((FArchiveProxy *)this,(FArchive *)this_00);
  plVar1 = *(longlong **)&this->field_0x8;
  *(undefined ***)this = &___7__TVersionedReader_VFMemoryReaderView____6B_;
  local_28.Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Versions.ArrayNum = 0;
  local_28.Versions.ArrayMax = 0;
  local_res8 = 0;
  if ((ulong64 *)plVar1[1] < (ulong64 *)*plVar1 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(**(longlong **)&this->field_0x90 + 0x188))
                (*(longlong **)&this->field_0x90,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_res8);
    }
  }
  else {
    local_res8 = *(ulong64 *)*plVar1;
    *plVar1 = *plVar1 + 8;
  }
  lVar4 = (**(code **)(**(longlong **)&this->field_0x90 + 0x28))();
  if (lVar4 == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReturnOffset != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\VersionedArchive.h"
                       ,0x29,L"Underlying FArchive must support Seek/Tell to use TVersionnedReader")
    ;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TVersionedReader<FMemoryReaderView> *)(*pcVar2)();
      return pTVar5;
    }
  }
  (**(code **)(**(longlong **)&this->field_0x90 + 0x1b8))
            (*(longlong **)&this->field_0x90,local_res8);
  FCustomVersionContainer::Serialize(&local_28,(FArchive *)this,Latest);
  (**(code **)(**(longlong **)&this->field_0x90 + 0x68))(*(longlong **)&this->field_0x90,&local_28);
  (**(code **)(**(longlong **)&this->field_0x90 + 0x1b8))(*(longlong **)&this->field_0x90,lVar4);
  if (local_28.Versions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Versions.AllocatorInstance.Data);
  }
  return this;
}

// TVersionedReader<FBulkDataReader><TBulkData<unsigned_char>_&,bool> @ 148a75350

/* WARNING: Enum "ECustomVersionSerializationFormat": Some values do not have unique names */

TVersionedReader<FBulkDataReader> * __thiscall
TVersionedReader<FBulkDataReader>::
TVersionedReader<FBulkDataReader><TBulkData<unsigned_char>_&,bool>
          (TVersionedReader<FBulkDataReader> *this,TBulkData<unsigned_char> *param_1,bool *param_2)

{
  undefined1 *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  long64 lVar4;
  void *pvVar5;
  longlong lVar6;
  TVersionedReader<FBulkDataReader> *pTVar7;
  ulong64 local_res8;
  FCustomVersionContainer local_28;
  
  bVar3 = *param_2;
  this_00 = &this->field_0x98;
  lVar4 = FBulkData::GetBulkDataSize((FBulkData *)param_1);
  pvVar5 = FBulkData::Lock((FBulkData *)param_1,1);
  FArchiveState::FArchiveState((FArchiveState *)this_00);
  *(void **)&this->field_0x128 = pvVar5;
  *(undefined ***)this_00 = &___7FBufferReaderBase__6B_;
  *(undefined8 *)&this->field_0x130 = 0;
  this->field_0x140 = 0;
  *(long64 *)&this->field_0x138 = lVar4;
  FArchiveState::SetIsLoading((FArchiveState *)this_00,true);
  (**(code **)(*(longlong *)this_00 + 0x108))(this_00,bVar3);
  *(TBulkData<unsigned_char> **)&this->field_0x148 = param_1;
  *(undefined ***)this_00 = &___7FBulkDataReader__6B_;
  FArchiveProxy::FArchiveProxy((FArchiveProxy *)this,(FArchive *)this_00);
  plVar1 = *(longlong **)&this->field_0x8;
  *(undefined ***)this = &___7__TVersionedReader_VFBulkDataReader____6B_;
  local_28.Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Versions.ArrayNum = 0;
  local_28.Versions.ArrayMax = 0;
  local_res8 = 0;
  if ((ulong64 *)plVar1[1] < (ulong64 *)*plVar1 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(**(longlong **)&this->field_0x90 + 0x188))
                (*(longlong **)&this->field_0x90,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_res8);
    }
  }
  else {
    local_res8 = *(ulong64 *)*plVar1;
    *plVar1 = *plVar1 + 8;
  }
  lVar6 = (**(code **)(**(longlong **)&this->field_0x90 + 0x28))();
  if (lVar6 == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReturnOffset != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\VersionedArchive.h"
                       ,0x29,L"Underlying FArchive must support Seek/Tell to use TVersionnedReader")
    ;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TVersionedReader<FBulkDataReader> *)(*pcVar2)();
      return pTVar7;
    }
  }
  (**(code **)(**(longlong **)&this->field_0x90 + 0x1b8))
            (*(longlong **)&this->field_0x90,local_res8);
  FCustomVersionContainer::Serialize(&local_28,(FArchive *)this,Latest);
  (**(code **)(**(longlong **)&this->field_0x90 + 0x68))(*(longlong **)&this->field_0x90,&local_28);
  (**(code **)(**(longlong **)&this->field_0x90 + 0x1b8))(*(longlong **)&this->field_0x90,lVar6);
  if (local_28.Versions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Versions.AllocatorInstance.Data);
  }
  return this;
}

// ~TVersionedReader<FBulkDataReader> @ 148a815b0

void __thiscall
TVersionedReader<FBulkDataReader>::~TVersionedReader<FBulkDataReader>
          (TVersionedReader<FBulkDataReader> *this)

{
  undefined1 *this_00;
  
  FArchiveProxy::~FArchiveProxy((FArchiveProxy *)this);
  this_00 = &this->field_0x98;
  *(undefined ***)this_00 = &___7FBulkDataReader__6B_;
  FBulkData::Unlock(*(FBulkData **)&this->field_0x148);
  if (this->field_0x140 != '\0') {
    FMemory::Free(*(void **)&this->field_0x128);
    *(undefined8 *)&this->field_0x128 = 0;
  }
  *(undefined ***)this_00 = &___7FBufferReaderBase__6B_;
  FArchive::~FArchive((FArchive *)this_00);
  return;
}

