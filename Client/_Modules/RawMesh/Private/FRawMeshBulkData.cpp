// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RawMesh
// Functions: 8

// FRawMeshBulkData @ 14435dc60

FRawMeshBulkData * __thiscall FRawMeshBulkData::FRawMeshBulkData(FRawMeshBulkData *this)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  
  *(undefined8 *)&this->BulkData = 0;
  *(undefined8 *)&(this->BulkData).field_0x8 = 0;
  *(undefined8 *)&(this->BulkData).field_0x10 = 0;
  *(undefined4 *)&(this->BulkData).field_0xd = 0xffffffff;
  (this->BulkData).field_0x11 = 0xff;
  uVar1 = FIoChunkId::InvalidChunkId.Id[1];
  uVar2 = FIoChunkId::InvalidChunkId.Id[2];
  uVar3 = FIoChunkId::InvalidChunkId.Id[3];
  uVar4 = FIoChunkId::InvalidChunkId.Id[4];
  uVar5 = FIoChunkId::InvalidChunkId.Id[5];
  uVar6 = FIoChunkId::InvalidChunkId.Id[6];
  uVar7 = FIoChunkId::InvalidChunkId.Id[7];
  (this->BulkData).field_0x18 = FIoChunkId::InvalidChunkId.Id[0];
  (this->BulkData).field_0x19 = uVar1;
  (this->BulkData).field_0x1a = uVar2;
  (this->BulkData).field_0x1b = uVar3;
  (this->BulkData).field_0x1c = uVar4;
  (this->BulkData).field_0x1d = uVar5;
  (this->BulkData).field_0x1e = uVar6;
  (this->BulkData).field_0x1f = uVar7;
  uVar1 = FIoChunkId::InvalidChunkId.Id[9];
  uVar2 = FIoChunkId::InvalidChunkId.Id[10];
  uVar3 = FIoChunkId::InvalidChunkId.Id[0xb];
  (this->BulkData).field_0x20 = FIoChunkId::InvalidChunkId.Id[8];
  (this->BulkData).field_0x21 = uVar1;
  (this->BulkData).field_0x22 = uVar2;
  (this->BulkData).field_0x23 = uVar3;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  this->bGuidIsHash = false;
  return this;
}

// Empty @ 14435e900

void __thiscall FRawMeshBulkData::Empty(FRawMeshBulkData *this)

{
  FBulkData::RemoveBulkData((FBulkData *)this);
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  this->bGuidIsHash = false;
  return;
}

// GetBulkData @ 14435e990

TBulkData<unsigned_char> * __thiscall FRawMeshBulkData::GetBulkData(FRawMeshBulkData *this)

{
  return &this->BulkData;
}

// GetIdString @ 14435e9a0

FString * __thiscall
FRawMeshBulkData::GetIdString(FRawMeshBulkData *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  FGuid::AppendString(&this->Guid,__return_storage_ptr__,Digits);
  if (this->bGuidIsHash != false) {
    ::FString::AppendChars(__return_storage_ptr__,L"X",1);
  }
  return __return_storage_ptr__;
}

// LoadRawMesh @ 14435ee40

void __thiscall FRawMeshBulkData::LoadRawMesh(FRawMeshBulkData *this,FRawMesh *param_1)

{
  long64 lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  FArchiveState local_c8;
  void *local_38;
  undefined8 local_30;
  long64 local_28;
  char local_20;
  FRawMeshBulkData *local_18;
  
  FRawMesh::Empty(param_1);
  lVar1 = FBulkData::GetBulkDataSize((FBulkData *)this);
  if (0 < lVar1) {
    lVar1 = FBulkData::GetBulkDataSize((FBulkData *)this);
    uVar3 = 0;
    pvVar2 = FBulkData::Lock((FBulkData *)this,1);
    FArchiveState::FArchiveState(&local_c8);
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    local_c8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    local_30 = 0;
    local_20 = '\0';
    local_38 = pvVar2;
    local_28 = lVar1;
    FArchiveState::SetIsLoading(&local_c8,true);
    (**(code **)(local_c8._padding_ + 0x108))(&local_c8,CONCAT71(uVar4,1));
    local_c8._padding_ = (longlong)&___7FBulkDataReader__6B_;
    local_18 = this;
    ::operator<<((FArchive *)&local_c8,param_1);
    local_c8._padding_ = (longlong)&___7FBulkDataReader__6B_;
    FBulkData::Unlock((FBulkData *)local_18);
    if (local_20 != '\0') {
      FMemory::Free(local_38);
      local_38 = (void *)0x0;
    }
    local_c8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)&local_c8);
  }
  return;
}

// SaveRawMesh @ 14435ef90

void __thiscall FRawMeshBulkData::SaveRawMesh(FRawMeshBulkData *this,FRawMesh *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  longlong lVar4;
  undefined7 uVar5;
  longlong lVar6;
  bool bVar7;
  FArchiveState local_c8;
  void *local_38;
  longlong local_30;
  longlong local_28;
  undefined2 local_20;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId254,"FRawMeshBulkData::SaveRawMesh",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RawMesh\\Private\\RawMesh.cpp"
               ,0xfe);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId254);
  }
  lVar6 = (ulonglong)(uint)((param_1->FaceMaterialIndices).ArrayNum << 2) + 0x4c +
          (ulonglong)(uint)((param_1->MaterialIndexToImportIndex).ArrayNum << 2) +
          (ulonglong)(uint)((param_1->WedgeColors).ArrayNum << 2) +
          (ulonglong)(uint)(param_1->WedgeTexCoords[7].ArrayNum << 3) +
          (ulonglong)(uint)(param_1->WedgeTexCoords[6].ArrayNum << 3) +
          (ulonglong)(uint)(param_1->WedgeTexCoords[5].ArrayNum << 3) +
          (ulonglong)(uint)(param_1->WedgeTexCoords[4].ArrayNum << 3) +
          (ulonglong)(uint)(param_1->WedgeTexCoords[3].ArrayNum << 3) +
          (ulonglong)(uint)(param_1->WedgeTexCoords[2].ArrayNum << 3) +
          (ulonglong)(uint)(param_1->WedgeTexCoords[1].ArrayNum << 3) +
          (ulonglong)(uint)(param_1->WedgeTexCoords[0].ArrayNum << 3) +
          (ulonglong)(uint)((param_1->WedgeTangentZ).ArrayNum * 0xc) +
          (ulonglong)(uint)((param_1->WedgeTangentY).ArrayNum * 0xc) +
          (ulonglong)(uint)((param_1->WedgeTangentX).ArrayNum * 0xc) +
          (ulonglong)(uint)((param_1->WedgeIndices).ArrayNum << 2) +
          (ulonglong)(uint)((param_1->VertexPositions).ArrayNum * 0xc) +
          (ulonglong)(uint)((param_1->FaceSmoothingMasks).ArrayNum << 2);
  FBulkData::Lock((FBulkData *)this,2);
  lVar4 = lVar6;
  pvVar3 = FBulkData::Realloc((FBulkData *)this,lVar6,1);
  FArchiveState::FArchiveState(&local_c8);
  uVar5 = (undefined7)((ulonglong)lVar4 >> 8);
  local_c8._padding_ = (longlong)&___7FBufferWriter__6B_;
  local_30 = 0;
  local_20 = 0;
  local_38 = pvVar3;
  local_28 = lVar6;
  FArchiveState::SetIsSaving(&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,CONCAT71(uVar5,1));
  ::operator<<((FArchive *)&local_c8,param_1);
  if ((local_30 < local_28) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.AtEnd()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RawMesh\\Private\\RawMesh.cpp"
                         ,0x106,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((pvVar3 != local_38) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest == Ar.GetWriterData()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RawMesh\\Private\\RawMesh.cpp"
                         ,0x107,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FBulkData::Unlock((FBulkData *)this);
  FWindowsPlatformMisc::CreateGuid(&this->Guid);
  local_c8._padding_ = (longlong)&___7FBufferWriter__6B_;
  if ((char)local_20 != '\0') {
    FMemory::Free(local_38);
    local_38 = (void *)0x0;
  }
  FArchive::~FArchive((FArchive *)&local_c8);
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Serialize @ 14435f450

void __thiscall
FRawMeshBulkData::Serialize(FRawMeshBulkData *this,FArchive *param_1,UObject *param_2)

{
  int *piVar1;
  uint local_res8 [2];
  
  FBulkData::Serialize((FBulkData *)this,param_1,param_2,false,1,None);
  ::operator<<(param_1,&this->Guid);
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar1 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    this->bGuidIsHash = *piVar1 != 0;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = (uint)(this->bGuidIsHash != false);
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
  if (1 < local_res8[0]) {
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  if ((param_1->field_0x28 & 1) != 0) {
    this->bGuidIsHash = local_res8[0] != 0;
  }
  return;
}

// UseHashAsGuid @ 14435f530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FRawMeshBulkData::UseHashAsGuid(FRawMeshBulkData *this,UObject *param_1)

{
  FScriptContainerElement *_Src;
  FString *pFVar1;
  long64 lVar2;
  uchar *puVar3;
  ulong64 uVar4;
  longlong lVar5;
  undefined1 auStackY_118 [32];
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  FString local_c8;
  FSHA1 local_b8;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_118;
  FSHA1::FSHA1(&local_b8);
  pFVar1 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_c8,(UObject *)0x0);
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = (pFVar1->Data).ArrayNum;
  lVar5 = (longlong)local_d0;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (local_d0 == 0) {
    local_cc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_d0,0,&local_d8,local_d0,&local_cc);
    memcpy(local_d8.Data,_Src,lVar5 * 2);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  FSHA1::Update(&local_b8,(uchar *)local_d8.Data,(ulonglong)(uint)(local_d0 * 2));
  lVar2 = FBulkData::GetBulkDataSize((FBulkData *)this);
  if (0 < lVar2) {
    puVar3 = FBulkData::Lock((FBulkData *)this,1);
    uVar4 = FBulkData::GetBulkDataSize((FBulkData *)this);
    FSHA1::Update(&local_b8,puVar3,uVar4);
    FBulkData::Unlock((FBulkData *)this);
  }
  FSHA1::Final(&local_b8);
  FSHA1::GetHash(&local_b8,(uchar *)&local_28);
  (this->Guid).A = local_28 ^ local_18;
  (this->Guid).B = local_24;
  (this->Guid).C = local_20;
  (this->Guid).D = local_1c;
  this->bGuidIsHash = true;
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  FSHA1::~FSHA1(&local_b8);
  return;
}

