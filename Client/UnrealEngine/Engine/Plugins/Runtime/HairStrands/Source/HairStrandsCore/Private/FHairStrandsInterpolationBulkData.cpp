// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 8

// FHairStrandsInterpolationBulkData @ 14dfadfb0

FHairStrandsInterpolationBulkData * __thiscall
FHairStrandsInterpolationBulkData::FHairStrandsInterpolationBulkData
          (FHairStrandsInterpolationBulkData *this,FHairStrandsInterpolationBulkData *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  this->_padding_ = (longlong)&___7FHairStrandsInterpolationBulkData__6B_;
  uVar1 = (param_1->Header).PointCount;
  uVar2 = (param_1->Header).CurveCount;
  uVar3 = (param_1->Header).Strides.CurveInterpolationStride;
  (this->Header).Flags = (param_1->Header).Flags;
  (this->Header).PointCount = uVar1;
  (this->Header).CurveCount = uVar2;
  (this->Header).Strides.CurveInterpolationStride = uVar3;
  (this->Header).Strides.PointInterpolationStride =
       (param_1->Header).Strides.PointInterpolationStride;
  (this->Data).CurveInterpolation.LoadedSize = (param_1->Data).CurveInterpolation.LoadedSize;
  FBulkData::FBulkData
            ((FBulkData *)&(this->Data).CurveInterpolation.Data,
             (FBulkData *)&(param_1->Data).CurveInterpolation.Data);
  (this->Data).CurveInterpolation.ChunkRequest = (param_1->Data).CurveInterpolation.ChunkRequest;
  (this->Data).PointInterpolation.LoadedSize = (param_1->Data).PointInterpolation.LoadedSize;
  FBulkData::FBulkData
            ((FBulkData *)&(this->Data).PointInterpolation.Data,
             (FBulkData *)&(param_1->Data).PointInterpolation.Data);
  (this->Data).PointInterpolation.ChunkRequest = (param_1->Data).PointInterpolation.ChunkRequest;
  return this;
}

// GetResourceCount @ 14e09cd20

uint __thiscall
FHairStrandsInterpolationBulkData::GetResourceCount(FHairStrandsInterpolationBulkData *this)

{
  return ((this->Header).Flags & 1) * 2;
}

// GetResources @ 14e09d1a0

void __thiscall
FHairStrandsInterpolationBulkData::GetResources
          (FHairStrandsInterpolationBulkData *this,FQuery *param_1)

{
  FHairBulkContainer *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (this->Header).Flags;
  if ((uVar4 & 1) != 0) {
    uVar5 = 0;
    if ((param_1->Type == ReadIO) || (uVar6 = 0, (param_1->Type - ReadDDC & 0xfffffffb) == 0)) {
      if ((uVar4 & 2) == 0) {
        uVar6 = FHairStrandsBulkCommon::FQuery::GetPointCount(param_1);
      }
      else {
        uVar4 = FHairStrandsBulkCommon::FQuery::GetPointCount(param_1);
        uVar6 = uVar4 + 1 & 0xfffffffe;
      }
      if (param_1->StreamingRequest == (FHairStreamingRequest *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("StreamingRequest",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Public\\HairStrandsDatas.h"
                           ,0x1d4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar5 = param_1->StreamingRequest->CurveCount;
      if ((this->Header).CurveCount < uVar5) {
        uVar5 = (this->Header).CurveCount;
      }
      if ((this->Header).PointCount < uVar6) {
        uVar6 = (this->Header).PointCount;
      }
    }
    FHairStrandsBulkCommon::FQuery::Add
              (param_1,&(this->Data).CurveInterpolation,L"_CurveInterpolation",(uint *)&this->Data,
               uVar5 * (this->Header).Strides.CurveInterpolationStride);
    pFVar1 = &(this->Data).PointInterpolation;
    FHairStrandsBulkCommon::FQuery::Add
              (param_1,pFVar1,L"_PointInterpolation",&pFVar1->LoadedSize,
               uVar6 * (this->Header).Strides.PointInterpolationStride);
  }
  return;
}

// GetSize @ 14e09d550

uint __thiscall FHairStrandsInterpolationBulkData::GetSize(FHairStrandsInterpolationBulkData *this)

{
  long64 lVar1;
  long64 lVar2;
  
  lVar1 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).CurveInterpolation.Data);
  lVar2 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).PointInterpolation.Data);
  return (int)lVar2 + (int)lVar1;
}

// IsCookedBulkDataLoadedForCPUAccess @ 14e0a9560

bool __thiscall
FHairStrandsInterpolationBulkData::IsCookedBulkDataLoadedForCPUAccess
          (FHairStrandsInterpolationBulkData *this)

{
  bool bVar1;
  bool bVar2;
  long64 lVar3;
  
  lVar3 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).CurveInterpolation.Data);
  if (lVar3 != 0) {
    bVar1 = FBulkData::IsBulkDataLoaded((FBulkData *)&(this->Data).CurveInterpolation.Data);
    if (!bVar1) {
      bVar1 = false;
      goto LAB_14e0a958e;
    }
  }
  bVar1 = true;
LAB_14e0a958e:
  lVar3 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).PointInterpolation.Data);
  if (lVar3 != 0) {
    bVar2 = FBulkData::IsBulkDataLoaded((FBulkData *)&(this->Data).PointInterpolation.Data);
    if (!bVar2) {
      return false;
    }
  }
  return bVar1;
}

// Reset @ 14e0aa900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FHairStrandsInterpolationBulkData::Reset(FHairStrandsInterpolationBulkData *this)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  FAllocation local_58;
  undefined5 local_50;
  undefined4 uStack_4b;
  undefined1 uStack_47;
  undefined6 uStack_46;
  uchar local_40 [8];
  uchar local_38 [4];
  undefined4 local_34;
  FChunk *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = 0;
  uStack_70 = 0;
  (this->Header).Flags = 0;
  (this->Header).PointCount = 0;
  (this->Header).CurveCount = 0;
  (this->Header).Strides.CurveInterpolationStride = 0;
  (this->Header).Strides.PointInterpolationStride = 0;
  FBulkData::RemoveBulkData((FBulkData *)&(this->Data).CurveInterpolation.Data);
  FBulkData::RemoveBulkData((FBulkData *)&(this->Data).PointInterpolation.Data);
  local_60 = 0;
  local_50 = 0;
  uStack_46 = 0;
  local_34 = 0;
  local_40[0] = FIoChunkId::InvalidChunkId.Id[0];
  local_40[1] = FIoChunkId::InvalidChunkId.Id[1];
  local_40[2] = FIoChunkId::InvalidChunkId.Id[2];
  local_40[3] = FIoChunkId::InvalidChunkId.Id[3];
  local_40[4] = FIoChunkId::InvalidChunkId.Id[4];
  local_40[5] = FIoChunkId::InvalidChunkId.Id[5];
  local_40[6] = FIoChunkId::InvalidChunkId.Id[6];
  local_40[7] = FIoChunkId::InvalidChunkId.Id[7];
  local_58.RawData = (void *)0x0;
  uStack_4b = 0xffffffff;
  uStack_47 = 0xff;
  local_38[0] = FIoChunkId::InvalidChunkId.Id[8];
  local_38[1] = FIoChunkId::InvalidChunkId.Id[9];
  local_38[2] = FIoChunkId::InvalidChunkId.Id[10];
  local_38[3] = FIoChunkId::InvalidChunkId.Id[0xb];
  local_30 = (FChunk *)0x0;
  (this->Data).CurveInterpolation.LoadedSize = 0;
  FBulkData::operator=((FBulkData *)&(this->Data).CurveInterpolation.Data,(FBulkData *)&local_58);
  (this->Data).CurveInterpolation.ChunkRequest = local_30;
  FBulkData::~FBulkData((FBulkData *)&local_58);
  local_60 = 0;
  local_50 = 0;
  uStack_46 = 0;
  local_34 = 0;
  local_40[0] = FIoChunkId::InvalidChunkId.Id[0];
  local_40[1] = FIoChunkId::InvalidChunkId.Id[1];
  local_40[2] = FIoChunkId::InvalidChunkId.Id[2];
  local_40[3] = FIoChunkId::InvalidChunkId.Id[3];
  local_40[4] = FIoChunkId::InvalidChunkId.Id[4];
  local_40[5] = FIoChunkId::InvalidChunkId.Id[5];
  local_40[6] = FIoChunkId::InvalidChunkId.Id[6];
  local_40[7] = FIoChunkId::InvalidChunkId.Id[7];
  local_58.RawData = (void *)0x0;
  uStack_4b = 0xffffffff;
  uStack_47 = 0xff;
  local_38[0] = FIoChunkId::InvalidChunkId.Id[8];
  local_38[1] = FIoChunkId::InvalidChunkId.Id[9];
  local_38[2] = FIoChunkId::InvalidChunkId.Id[10];
  local_38[3] = FIoChunkId::InvalidChunkId.Id[0xb];
  local_30 = (FChunk *)0x0;
  (this->Data).PointInterpolation.LoadedSize = 0;
  FBulkData::operator=((FBulkData *)&(this->Data).PointInterpolation.Data,(FBulkData *)&local_58);
  (this->Data).PointInterpolation.ChunkRequest = local_30;
  FBulkData::~FBulkData((FBulkData *)&local_58);
  return;
}

// ResetLoadedSize @ 14e0ab200

void __thiscall
FHairStrandsInterpolationBulkData::ResetLoadedSize(FHairStrandsInterpolationBulkData *this)

{
  (this->Data).CurveInterpolation.LoadedSize = 0;
  (this->Data).PointInterpolation.LoadedSize = 0;
  return;
}

// SerializeHeader @ 14e0ad410

void __thiscall
FHairStrandsInterpolationBulkData::SerializeHeader
          (FHairStrandsInterpolationBulkData *this,FArchive *param_1,UObject *param_2)

{
  FHeader *pFVar1;
  FStrides *pFVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  pFVar1 = &this->Header;
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Flags);
    }
  }
  else {
    pFVar1->Flags = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar4 = &(this->Header).PointCount;
  puVar3 = &param_1->field_0x2a;
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar4);
    }
  }
  else {
    *puVar4 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar4 = &(this->Header).CurveCount;
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar4);
    }
  }
  else {
    *puVar4 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pFVar2 = &(this->Header).Strides;
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar2->CurveInterpolationStride);
    }
  }
  else {
    pFVar2->CurveInterpolationStride = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar4 = &(this->Header).Strides.PointInterpolationStride;
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar5 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar4 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((*puVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014e0ad58b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar4,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar4);
  return;
}

