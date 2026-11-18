// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// FNavCollisionDataReader @ 146d73880

FNavCollisionDataReader * __thiscall
FNavCollisionDataReader::FNavCollisionDataReader
          (FNavCollisionDataReader *this,TBulkData<unsigned_char> *param_1,
          FNavCollisionConvex *param_2,FNavCollisionConvex *param_3,TNavStatArray<int> *param_4,
          TBox<double> *param_5)

{
  TBox<double> *pTVar1;
  uchar *puVar2;
  void *pvVar3;
  long64 lVar4;
  FArchive *pFVar5;
  undefined8 uVar6;
  undefined7 uVar7;
  FBufferReaderBase local_c8;
  
  this->ConvexShapeIndices = param_4;
  uVar6 = 0;
  this->Bounds = param_5;
  this->TriMeshCollision = param_2;
  this->ConvexCollision = param_3;
  pvVar3 = FBulkData::Lock((FBulkData *)param_1,1);
  lVar4 = FBulkData::GetBulkDataSize((FBulkData *)param_1);
  FArchiveState::FArchiveState((FArchiveState *)&local_c8);
  uVar7 = (undefined7)((ulonglong)uVar6 >> 8);
  local_c8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
  local_c8.ReaderPos = 0;
  local_c8.bFreeOnClose = false;
  local_c8.ReaderData = pvVar3;
  local_c8.ReaderSize = lVar4;
  FArchiveState::SetIsLoading((FArchiveState *)&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,CONCAT71(uVar7,1));
  local_c8._padding_ = (longlong)&___7FBufferReader__6B_;
  param_4._0_1_ = '\x01';
  if (*(char **)(local_c8._padding_ + 8) < *(char **)local_c8._padding_ + 1) {
    FBufferReaderBase::Serialize(&local_c8,&param_4,1);
  }
  else {
    param_4._0_1_ = **(char **)local_c8._padding_;
    *(longlong *)local_c8._padding_ = *(longlong *)local_c8._padding_ + 1;
  }
  local_c8._padding_._2_1_ = (char)param_4 == '\0' | local_c8._padding_._2_1_ & 0xfe;
  TArrayPrivateFriend::Serialize<UE::Math::TVector<double>,NavMeshMemory::FNavigationMemoryStat>
            ((FArchive *)&local_c8,
             (TArray<UE::Math::TVector<double>,NavMeshMemory::FNavigationMemoryStat> *)
             this->TriMeshCollision);
  TArrayPrivateFriend::Serialize<int,NavMeshMemory::FNavigationMemoryStat>
            ((FArchive *)&local_c8,
             (TArray<int,NavMeshMemory::FNavigationMemoryStat> *)
             &this->TriMeshCollision->IndexBuffer);
  TArrayPrivateFriend::Serialize<UE::Math::TVector<double>,NavMeshMemory::FNavigationMemoryStat>
            ((FArchive *)&local_c8,
             (TArray<UE::Math::TVector<double>,NavMeshMemory::FNavigationMemoryStat> *)
             this->ConvexCollision);
  TArrayPrivateFriend::Serialize<int,NavMeshMemory::FNavigationMemoryStat>
            ((FArchive *)&local_c8,
             (TArray<int,NavMeshMemory::FNavigationMemoryStat> *)&this->ConvexCollision->IndexBuffer
            );
  TArrayPrivateFriend::Serialize<int,NavMeshMemory::FNavigationMemoryStat>
            ((FArchive *)&local_c8,
             (TArray<int,NavMeshMemory::FNavigationMemoryStat> *)this->ConvexShapeIndices);
  pTVar1 = this->Bounds;
  pFVar5 = UE::Math::operator<<((FArchive *)&local_c8,&pTVar1->Min);
  pFVar5 = UE::Math::operator<<(pFVar5,&pTVar1->Max);
  puVar2 = (uchar *)**(undefined8 **)&pFVar5->field_0x8;
  if ((uchar *)(*(undefined8 **)&pFVar5->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,&pTVar1->IsValid,1);
  }
  else {
    pTVar1->IsValid = *puVar2;
    **(longlong **)&pFVar5->field_0x8 = **(longlong **)&pFVar5->field_0x8 + 1;
  }
  FBulkData::Unlock((FBulkData *)param_1);
  local_c8._padding_ = (longlong)&___7FBufferReader__6B_;
  if (local_c8.bFreeOnClose != false) {
    FMemory::Free(local_c8.ReaderData);
    local_c8.ReaderData = (void *)0x0;
  }
  local_c8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
  FArchive::~FArchive((FArchive *)&local_c8);
  return this;
}

