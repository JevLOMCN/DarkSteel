// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 8

// GetCurveCount @ 14e09b490

uint __thiscall
FHairStrandsClusterBulkData::GetCurveCount(FHairStrandsClusterBulkData *this,float param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar1 = (this->Header).LODInfos.ArrayNum;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  uVar8 = iVar1 - 1;
  uVar5 = (uint)param_1;
  uVar6 = uVar8;
  if ((int)uVar5 < (int)uVar8) {
    uVar6 = uVar5;
  }
  if ((int)(uVar5 + 1) < (int)uVar8) {
    uVar8 = uVar5 + 1;
  }
  uVar7 = 0;
  if ((int)uVar8 < iVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  pFVar2 = (this->Header).LODInfos.AllocatorInstance.Data;
  uVar7 = 0;
  if ((int)uVar6 < (this->Header).LODInfos.ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  return (uint)(longlong)
               ((float)*(uint *)((this->Header).LODInfos.AllocatorInstance.Data +
                                (longlong)(int)uVar6 * 0x14) *
                (__real_3f800000 - (param_1 - (float)(int)uVar5)) +
               (float)*(uint *)(pFVar2 + (longlong)(int)uVar8 * 0x14) *
               (param_1 - (float)(int)uVar5));
}

// GetResourceCount @ 14e09cd10

uint __thiscall FHairStrandsClusterBulkData::GetResourceCount(FHairStrandsClusterBulkData *this)

{
  return 5;
}

// GetResources @ 14e09d060

void __thiscall
FHairStrandsClusterBulkData::GetResources(FHairStrandsClusterBulkData *this,FQuery *param_1)

{
  FHairBulkContainer *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  if ((this->Header).ClusterCount != 0) {
    uVar4 = 0;
    if ((param_1->Type == ReadIO) || (uVar5 = uVar4, (param_1->Type - ReadDDC & 0xfffffffb) == 0)) {
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
      uVar4 = param_1->StreamingRequest->CurveCount;
      if ((this->Header).CurveCount < uVar4) {
        uVar4 = (this->Header).CurveCount;
      }
      if (param_1->StreamingRequest == (FHairStreamingRequest *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("StreamingRequest",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Public\\HairStrandsDatas.h"
                           ,0x1d5,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar5 = param_1->StreamingRequest->PointCount;
      if ((this->Header).PointCount < uVar5) {
        uVar5 = (this->Header).PointCount;
      }
    }
    FHairStrandsBulkCommon::FQuery::Add
              (param_1,&(this->Data).PackedClusterInfos,L"_PackedClusterInfos",(uint *)&this->Data,
               (this->Header).Strides.PackedClusterInfoStride * (this->Header).ClusterCount);
    pFVar1 = &(this->Data).CurveToClusterIds;
    FHairStrandsBulkCommon::FQuery::Add
              (param_1,pFVar1,L"_CurveToClusterIds",&pFVar1->LoadedSize,
               uVar4 * (this->Header).Strides.CurveToClusterIdStride);
    pFVar1 = &(this->Data).PointLODs;
    FHairStrandsBulkCommon::FQuery::Add
              (param_1,pFVar1,L"_PointLODs",&pFVar1->LoadedSize,
               (uVar5 + 7 >> 3) * (this->Header).Strides.PointLODStride);
  }
  return;
}

// GetSize @ 14e09d4f0

uint __thiscall FHairStrandsClusterBulkData::GetSize(FHairStrandsClusterBulkData *this)

{
  long64 lVar1;
  long64 lVar2;
  long64 lVar3;
  
  lVar1 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).PackedClusterInfos.Data);
  lVar2 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).CurveToClusterIds.Data);
  lVar3 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).PointLODs.Data);
  return (int)lVar3 + (int)lVar2 + (int)lVar1;
}

// IsCookedBulkDataLoadedForCPUAccess @ 14e0a94b0

bool __thiscall
FHairStrandsClusterBulkData::IsCookedBulkDataLoadedForCPUAccess(FHairStrandsClusterBulkData *this)

{
  bool bVar1;
  long64 lVar2;
  byte bVar3;
  byte bVar4;
  
  lVar2 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).PackedClusterInfos.Data);
  if (lVar2 == 0) {
LAB_14e0a94e2:
    bVar4 = 1;
  }
  else {
    bVar1 = FBulkData::IsBulkDataLoaded((FBulkData *)&(this->Data).PackedClusterInfos.Data);
    if (bVar1) goto LAB_14e0a94e2;
    bVar4 = 0;
  }
  lVar2 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).CurveToClusterIds.Data);
  if (lVar2 != 0) {
    bVar1 = FBulkData::IsBulkDataLoaded((FBulkData *)&(this->Data).CurveToClusterIds.Data);
    if (!bVar1) {
      bVar3 = 0;
      goto LAB_14e0a950c;
    }
  }
  bVar3 = 1;
LAB_14e0a950c:
  lVar2 = FBulkData::GetBulkDataSize((FBulkData *)&(this->Data).PointLODs.Data);
  if (lVar2 != 0) {
    bVar1 = FBulkData::IsBulkDataLoaded((FBulkData *)&(this->Data).PointLODs.Data);
    if (!bVar1) {
      return false;
    }
  }
  return (bool)(bVar3 & bVar4);
}

// Reset @ 14e0aa440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FHairStrandsClusterBulkData::Reset(FHairStrandsClusterBulkData *this)

{
  int *piVar1;
  undefined1 auStackY_f8 [32];
  FAllocation local_c0;
  undefined5 local_b8;
  undefined4 uStack_b3;
  undefined1 uStack_af;
  undefined6 uStack_ae;
  uchar local_a8 [8];
  uchar local_a0 [4];
  undefined4 local_9c;
  FChunk *local_98;
  undefined8 local_90;
  FAllocation local_88;
  undefined5 local_80;
  undefined4 uStack_7b;
  undefined1 uStack_77;
  undefined6 uStack_76;
  uchar local_70 [8];
  uchar local_68 [4];
  undefined4 local_64;
  FChunk *local_60;
  undefined8 local_58;
  FAllocation local_50;
  undefined5 local_48;
  undefined4 uStack_43;
  undefined1 uStack_3f;
  undefined6 uStack_3e;
  uchar local_38 [8];
  uchar local_30 [4];
  undefined4 local_2c;
  FChunk *local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  (this->Header).ClusterCount = 0;
  (this->Header).ClusterScale = 0.0;
  piVar1 = &(this->Header).LODInfos.ArrayMax;
  (this->Header).PointCount = 0;
  (this->Header).CurveCount = 0;
  *(undefined8 *)&(this->Header).ClusterInfoParameters.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Header).ClusterInfoParameters.field0_0x0 + 8) = 0;
  (this->Header).LODInfos.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)&this->Header,0,piVar1);
  }
  FBulkData::RemoveBulkData((FBulkData *)&(this->Data).CurveToClusterIds.Data);
  FBulkData::RemoveBulkData((FBulkData *)&(this->Data).PackedClusterInfos.Data);
  FBulkData::RemoveBulkData((FBulkData *)&(this->Data).PointLODs.Data);
  local_b8 = 0;
  uStack_ae = 0;
  local_9c = 0;
  local_a8[0] = FIoChunkId::InvalidChunkId.Id[0];
  local_a8[1] = FIoChunkId::InvalidChunkId.Id[1];
  local_a8[2] = FIoChunkId::InvalidChunkId.Id[2];
  local_a8[3] = FIoChunkId::InvalidChunkId.Id[3];
  local_a8[4] = FIoChunkId::InvalidChunkId.Id[4];
  local_a8[5] = FIoChunkId::InvalidChunkId.Id[5];
  local_a8[6] = FIoChunkId::InvalidChunkId.Id[6];
  local_a8[7] = FIoChunkId::InvalidChunkId.Id[7];
  local_c0.RawData = (void *)0x0;
  uStack_b3 = 0xffffffff;
  uStack_af = 0xff;
  local_a0[0] = FIoChunkId::InvalidChunkId.Id[8];
  local_a0[1] = FIoChunkId::InvalidChunkId.Id[9];
  local_a0[2] = FIoChunkId::InvalidChunkId.Id[10];
  local_a0[3] = FIoChunkId::InvalidChunkId.Id[0xb];
  local_98 = (FChunk *)0x0;
  (this->Data).CurveToClusterIds.LoadedSize = 0;
  FBulkData::operator=((FBulkData *)&(this->Data).CurveToClusterIds.Data,(FBulkData *)&local_c0);
  (this->Data).CurveToClusterIds.ChunkRequest = local_98;
  FBulkData::~FBulkData((FBulkData *)&local_c0);
  local_90 = 0;
  local_80 = 0;
  uStack_76 = 0;
  local_64 = 0;
  local_70[0] = FIoChunkId::InvalidChunkId.Id[0];
  local_70[1] = FIoChunkId::InvalidChunkId.Id[1];
  local_70[2] = FIoChunkId::InvalidChunkId.Id[2];
  local_70[3] = FIoChunkId::InvalidChunkId.Id[3];
  local_70[4] = FIoChunkId::InvalidChunkId.Id[4];
  local_70[5] = FIoChunkId::InvalidChunkId.Id[5];
  local_70[6] = FIoChunkId::InvalidChunkId.Id[6];
  local_70[7] = FIoChunkId::InvalidChunkId.Id[7];
  local_88.RawData = (void *)0x0;
  uStack_7b = 0xffffffff;
  uStack_77 = 0xff;
  local_68[0] = FIoChunkId::InvalidChunkId.Id[8];
  local_68[1] = FIoChunkId::InvalidChunkId.Id[9];
  local_68[2] = FIoChunkId::InvalidChunkId.Id[10];
  local_68[3] = FIoChunkId::InvalidChunkId.Id[0xb];
  local_60 = (FChunk *)0x0;
  (this->Data).PackedClusterInfos.LoadedSize = 0;
  FBulkData::operator=((FBulkData *)&(this->Data).PackedClusterInfos.Data,(FBulkData *)&local_88);
  (this->Data).PackedClusterInfos.ChunkRequest = local_60;
  FBulkData::~FBulkData((FBulkData *)&local_88);
  local_58 = 0;
  local_48 = 0;
  uStack_3e = 0;
  local_2c = 0;
  local_38[0] = FIoChunkId::InvalidChunkId.Id[0];
  local_38[1] = FIoChunkId::InvalidChunkId.Id[1];
  local_38[2] = FIoChunkId::InvalidChunkId.Id[2];
  local_38[3] = FIoChunkId::InvalidChunkId.Id[3];
  local_38[4] = FIoChunkId::InvalidChunkId.Id[4];
  local_38[5] = FIoChunkId::InvalidChunkId.Id[5];
  local_38[6] = FIoChunkId::InvalidChunkId.Id[6];
  local_38[7] = FIoChunkId::InvalidChunkId.Id[7];
  local_50.RawData = (void *)0x0;
  uStack_43 = 0xffffffff;
  uStack_3f = 0xff;
  local_30[0] = FIoChunkId::InvalidChunkId.Id[8];
  local_30[1] = FIoChunkId::InvalidChunkId.Id[9];
  local_30[2] = FIoChunkId::InvalidChunkId.Id[10];
  local_30[3] = FIoChunkId::InvalidChunkId.Id[0xb];
  local_28 = (FChunk *)0x0;
  (this->Data).PointLODs.LoadedSize = 0;
  FBulkData::operator=((FBulkData *)&(this->Data).PointLODs.Data,(FBulkData *)&local_50);
  (this->Data).PointLODs.ChunkRequest = local_28;
  FBulkData::~FBulkData((FBulkData *)&local_50);
  return;
}

// ResetLoadedSize @ 14e0ab1e0

void __thiscall FHairStrandsClusterBulkData::ResetLoadedSize(FHairStrandsClusterBulkData *this)

{
  (this->Data).CurveToClusterIds.LoadedSize = 0;
  (this->Data).PackedClusterInfos.LoadedSize = 0;
  (this->Data).PointLODs.LoadedSize = 0;
  return;
}

// SerializeHeader @ 14e0acd20

void __thiscall
FHairStrandsClusterBulkData::SerializeHeader
          (FHairStrandsClusterBulkData *this,FArchive *param_1,UObject *param_2)

{
  float *pfVar1;
  FStrides *pFVar2;
  undefined1 *puVar3;
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  int *piVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  uint local_res8 [2];
  uint local_res10 [2];
  
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    puVar4 = &(this->Header).ClusterCount;
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar4);
    }
  }
  else {
    (this->Header).ClusterCount = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &(this->Header).ClusterScale;
  puVar3 = &param_1->field_0x2a;
  pfVar5 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar5 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar4 = &(this->Header).PointCount;
  puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar4);
    }
  }
  else {
    *puVar4 = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar4 = &(this->Header).CurveCount;
  puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar4);
    }
  }
  else {
    *puVar4 = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&(this->Header).ClusterInfoParameters);
  plVar7 = *(longlong **)&param_1->field_0x8;
  piVar9 = &(this->Header).LODInfos.ArrayNum;
  local_res8[0] = *piVar9;
  if ((uint *)plVar7[1] < (uint *)*plVar7 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar7;
    *plVar7 = *plVar7 + 4;
  }
  uVar15 = local_res8[0];
  if ((param_1->field_0x28 & 1) != 0) {
    lVar18 = (longlong)(int)local_res8[0];
    iVar16 = (this->Header).LODInfos.ArrayNum;
    if (iVar16 < (int)local_res8[0]) {
      iVar16 = local_res8[0] - iVar16;
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x14,4,iVar16,(ForAnyElementType *)&this->Header,piVar9,
                          &(this->Header).LODInfos.ArrayMax);
      DefaultConstructItems<FHairLODInfo,int>
                ((this->Header).LODInfos.AllocatorInstance.Data + (longlong)iVar12 * 0x14,iVar16);
    }
    else {
      if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
      }
      if ((int)local_res8[0] < iVar16) {
        uVar14 = iVar16 - local_res8[0];
        if (((int)(local_res8[0] | uVar14) < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (uVar14 != 0) {
          pFVar13 = (this->Header).LODInfos.AllocatorInstance.Data + lVar18 * 0x14;
          iVar16 = ((this->Header).LODInfos.ArrayNum - uVar15) - uVar14;
          if (iVar16 != 0) {
            memmove(pFVar13,pFVar13 + (longlong)(int)uVar14 * 0x14,(longlong)iVar16 * 0x14);
          }
          piVar9 = &(this->Header).LODInfos.ArrayNum;
          *piVar9 = *piVar9 - uVar14;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x14,4,(ForAnyElementType *)&this->Header,(this->Header).LODInfos.ArrayNum,
                     &(this->Header).LODInfos.ArrayMax);
        }
      }
    }
  }
  uVar15 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar17 = ~uVar15 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar15 < (this->Header).LODInfos.ArrayNum) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      puVar8 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
      lVar18 = (longlong)(int)uVar15 * 0x14;
      pFVar13 = (this->Header).LODInfos.AllocatorInstance.Data + lVar18;
      if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar13,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar13);
        }
      }
      else {
        *(undefined4 *)pFVar13 = *puVar8;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      uVar14 = 0;
      if ((int)uVar15 < (this->Header).LODInfos.ArrayNum) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar13 = (this->Header).LODInfos.AllocatorInstance.Data + lVar18 + 4;
      puVar8 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
      if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar13,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar13);
        }
      }
      else {
        *(undefined4 *)pFVar13 = *puVar8;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      uVar14 = 0;
      if ((int)uVar15 < (this->Header).LODInfos.ArrayNum) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar13 = (this->Header).LODInfos.AllocatorInstance.Data + lVar18 + 8;
      puVar8 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
      if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar13,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar13);
        }
      }
      else {
        *(undefined4 *)pFVar13 = *puVar8;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      uVar14 = 0;
      if ((int)uVar15 < (this->Header).LODInfos.ArrayNum) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar13 = (this->Header).LODInfos.AllocatorInstance.Data + lVar18 + 0xc;
      puVar8 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
      if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar13,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar13);
        }
      }
      else {
        *(undefined4 *)pFVar13 = *puVar8;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      uVar14 = 0;
      if ((int)uVar15 < (this->Header).LODInfos.ArrayNum) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar13 = (this->Header).LODInfos.AllocatorInstance.Data;
      piVar9 = (int *)**(undefined8 **)&param_1->field_0x8;
      if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar9 + 1) {
        local_res10[0] = 0;
        if ((param_1->field_0x28 & 1) == 0) {
          local_res10[0] = (uint)(pFVar13[lVar18 + 0x10] != (FScriptContainerElement)0x0);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
        if (1 < local_res10[0]) {
          FArchiveState::SetError((FArchiveState *)param_1);
        }
        if ((param_1->field_0x28 & 1) != 0) {
          pFVar13[lVar18 + 0x10] = (FScriptContainerElement)(local_res10[0] != 0);
        }
      }
      else {
        pFVar13[lVar18 + 0x10] = (FScriptContainerElement)(*piVar9 != 0);
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < local_res8[0]);
  }
  pFVar2 = &(this->Header).Strides;
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar2->PackedClusterInfoStride);
    }
  }
  else {
    pFVar2->PackedClusterInfoStride = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar4 = &(this->Header).Strides.CurveToClusterIdStride;
  puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar4);
    }
  }
  else {
    *puVar4 = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar4 = &(this->Header).Strides.PointLODStride;
  puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar4);
    }
  }
  else {
    *puVar4 = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  return;
}

