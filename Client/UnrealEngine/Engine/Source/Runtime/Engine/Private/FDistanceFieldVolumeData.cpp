// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FDistanceFieldVolumeData @ 147abbaa0

FDistanceFieldVolumeData * __thiscall
FDistanceFieldVolumeData::FDistanceFieldVolumeData(FDistanceFieldVolumeData *this)

{
  FDistanceFieldVolumeData *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  atomic<unsigned___int64> aVar9;
  TVector<float> *pTVar10;
  TStaticArray<FSparseDistanceFieldMip,3,4294967295> *pTVar11;
  longlong lVar12;
  
  this->_padding_ = (longlong)&___7FDistanceFieldVolumeData__6B_;
  *(undefined8 *)&(this->LocalSpaceMeshBounds).Min.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->LocalSpaceMeshBounds).Min.field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(this->LocalSpaceMeshBounds).Max.field0_0x0 + 4) = 0;
  lVar12 = 3;
  (this->LocalSpaceMeshBounds).IsValid = '\0';
  *(undefined4 *)(this->LocalSpaceMeshBounds).Pad = 0;
  this->bAsyncBuilding = false;
  pTVar11 = &this->Mips;
  pFVar1 = this;
  do {
    pTVar10 = &(pFVar1->Mips).Elements[0].VolumeToVirtualUVScale;
    *(undefined8 *)&pTVar11->Elements[0].IndirectionDimensions.field0_0x0 =
         UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    pTVar11->Elements[0].IndirectionDimensions.field0_0x0._s_0.Z =
         UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    (pFVar1->Mips).Elements[0].NumDistanceFieldBricks = 0;
    *(undefined8 *)&pTVar10->field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (pFVar1->Mips).Elements[0].VolumeToVirtualUVScale.field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)&(pFVar1->Mips).Elements[0].VolumeToVirtualUVAdd.field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (pFVar1->Mips).Elements[0].VolumeToVirtualUVAdd.field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    (pFVar1->Mips).Elements[0].DistanceFieldToVolumeScaleBias.field0_0x0._s_0 =
         (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    (pFVar1->Mips).Elements[0].BulkOffset = 0;
    (pFVar1->Mips).Elements[0].BulkSize = 0;
    lVar12 = lVar12 + -1;
    pTVar11 = (TStaticArray<FSparseDistanceFieldMip,3,4294967295> *)(pTVar11->Elements + 1);
    pFVar1 = (FDistanceFieldVolumeData *)pTVar10;
  } while (lVar12 != 0);
  (this->AlwaysLoadedMip).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AlwaysLoadedMip).ArrayNum = 0;
  (this->AlwaysLoadedMip).ArrayMax = 0;
  *(undefined8 *)&this->StreamableMips = 0;
  *(undefined8 *)&(this->StreamableMips).field_0x8 = 0;
  *(undefined8 *)&(this->StreamableMips).field_0x10 = 0;
  *(undefined4 *)&(this->StreamableMips).field_0xd = 0xffffffff;
  (this->StreamableMips).field_0x11 = 0xff;
  uVar2 = FIoChunkId::InvalidChunkId.Id[1];
  uVar3 = FIoChunkId::InvalidChunkId.Id[2];
  uVar4 = FIoChunkId::InvalidChunkId.Id[3];
  uVar5 = FIoChunkId::InvalidChunkId.Id[4];
  uVar6 = FIoChunkId::InvalidChunkId.Id[5];
  uVar7 = FIoChunkId::InvalidChunkId.Id[6];
  uVar8 = FIoChunkId::InvalidChunkId.Id[7];
  (this->StreamableMips).field_0x18 = FIoChunkId::InvalidChunkId.Id[0];
  (this->StreamableMips).field_0x19 = uVar2;
  (this->StreamableMips).field_0x1a = uVar3;
  (this->StreamableMips).field_0x1b = uVar4;
  (this->StreamableMips).field_0x1c = uVar5;
  (this->StreamableMips).field_0x1d = uVar6;
  (this->StreamableMips).field_0x1e = uVar7;
  (this->StreamableMips).field_0x1f = uVar8;
  uVar2 = FIoChunkId::InvalidChunkId.Id[9];
  uVar3 = FIoChunkId::InvalidChunkId.Id[10];
  uVar4 = FIoChunkId::InvalidChunkId.Id[0xb];
  (this->StreamableMips).field_0x20 = FIoChunkId::InvalidChunkId.Id[8];
  (this->StreamableMips).field_0x21 = uVar2;
  (this->StreamableMips).field_0x22 = uVar3;
  (this->StreamableMips).field_0x23 = uVar4;
  (this->AssetName).ComparisonIndex = 0;
  (this->AssetName).Number = 0;
  LOCK();
  UNLOCK();
  aVar9 = (atomic<unsigned___int64>)((longlong)NextDistanceFieldVolumeDataId + 1);
  this->Id = (ulong64)NextDistanceFieldVolumeDataId;
  NextDistanceFieldVolumeDataId = aVar9;
  return this;
}

// Serialize @ 147b10ae0

void __thiscall
FDistanceFieldVolumeData::Serialize
          (FDistanceFieldVolumeData *this,FArchive *param_1,UObject *param_2)

{
  uchar *puVar1;
  uchar *puVar2;
  FArchive *pFVar3;
  
  puVar1 = &(this->LocalSpaceMeshBounds).IsValid;
  pFVar3 = UE::Math::operator<<(param_1,&(this->LocalSpaceMeshBounds).Min);
  pFVar3 = UE::Math::operator<<(pFVar3,&(this->LocalSpaceMeshBounds).Max);
  puVar2 = (uchar *)**(undefined8 **)&pFVar3->field_0x8;
  if ((uchar *)(*(undefined8 **)&pFVar3->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,puVar1,1);
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 1;
  }
  pFVar3 = ::operator<<(pFVar3,&this->bMostlyTwoSided);
  pFVar3 = operator<<<FSparseDistanceFieldMip,3,4294967295>(pFVar3,&this->Mips);
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
            (pFVar3,&this->AlwaysLoadedMip);
  FBulkData::Serialize((FBulkData *)&this->StreamableMips,param_1,param_2,false,1,None);
  return;
}

