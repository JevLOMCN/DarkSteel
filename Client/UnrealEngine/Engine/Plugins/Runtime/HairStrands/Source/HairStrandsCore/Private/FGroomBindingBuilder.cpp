// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 5

// BuildBinding @ 14dfb83c0

bool __cdecl
FGroomBindingBuilder::BuildBinding
          (FInput *param_1,uint param_2,ITargetPlatform *param_3,FHairGroupPlatformData *param_4)

{
  bool bVar1;
  FHairRootGroupData local_68;
  
  local_68.TargetMeshMinLOD = -1;
  local_68.SimRootDatas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.SimRootDatas.ArrayNum = 0;
  local_68.SimRootDatas.ArrayMax = 0;
  local_68.RenRootDatas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.RenRootDatas.ArrayNum = 0;
  local_68.RenRootDatas.ArrayMax = 0;
  local_68.CardsRootDatas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.CardsRootDatas.ArrayNum = 0;
  local_68.CardsRootDatas.ArrayMax = 0;
  local_68.MeshPositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.MeshPositions.ArrayNum = 0;
  local_68.MeshPositions.ArrayMax = 0;
  local_68.MeshPositions_Transferred.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.MeshPositions_Transferred.ArrayNum = 0;
  local_68.MeshPositions_Transferred.ArrayMax = 0;
  bVar1 = BuildHairRootGroupData(param_1,param_2,param_3,&local_68);
  if (bVar1) {
    GroomBinding_BulkCopy::BuildGroupPlatformData(param_4,&local_68);
  }
  DestructItems<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
             local_68.MeshPositions_Transferred.AllocatorInstance.Data,
             local_68.MeshPositions_Transferred.ArrayNum);
  if ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
      local_68.MeshPositions_Transferred.AllocatorInstance.Data !=
      (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_68.MeshPositions_Transferred.AllocatorInstance.Data);
  }
  DestructItems<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
             local_68.MeshPositions.AllocatorInstance.Data,local_68.MeshPositions.ArrayNum);
  if ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
      local_68.MeshPositions.AllocatorInstance.Data !=
      (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_68.MeshPositions.AllocatorInstance.Data);
  }
  DestructItems<TArray<FHairStrandsRootData,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FHairStrandsRootData,TSizedDefaultAllocator<32>_> *)
             local_68.CardsRootDatas.AllocatorInstance.Data,local_68.CardsRootDatas.ArrayNum);
  if ((TArray<FHairStrandsRootData,TSizedDefaultAllocator<32>_> *)
      local_68.CardsRootDatas.AllocatorInstance.Data !=
      (TArray<FHairStrandsRootData,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_68.CardsRootDatas.AllocatorInstance.Data);
  }
  DestructItems<FHairStrandsRootData,int>
            ((FHairStrandsRootData *)local_68.RenRootDatas.AllocatorInstance.Data,
             local_68.RenRootDatas.ArrayNum);
  if ((FHairStrandsRootData *)local_68.RenRootDatas.AllocatorInstance.Data !=
      (FHairStrandsRootData *)0x0) {
    FMemory::Free(local_68.RenRootDatas.AllocatorInstance.Data);
  }
  DestructItems<FHairStrandsRootData,int>
            ((FHairStrandsRootData *)local_68.SimRootDatas.AllocatorInstance.Data,
             local_68.SimRootDatas.ArrayNum);
  if ((FHairStrandsRootData *)local_68.SimRootDatas.AllocatorInstance.Data !=
      (FHairStrandsRootData *)0x0) {
    FMemory::Free(local_68.SimRootDatas.AllocatorInstance.Data);
  }
  return bVar1;
}

// BuildBinding @ 14dfb84d0

bool __cdecl FGroomBindingBuilder::BuildBinding(UGroomBindingAsset *param_1,uint param_2)

{
  return true;
}

// BuildBinding @ 14dfb84e0

bool __cdecl FGroomBindingBuilder::BuildBinding(UGroomBindingAsset *param_1,bool param_2)

{
  return true;
}

// GetRootData @ 14dfc9810

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FGroomBindingBuilder::GetRootData(FHairStrandsRootData *param_1,FHairStrandsRootBulkData *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  void *pvVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> TStack_38;
  
  param_1->RootCount = (param_2->Header).RootCount;
  param_1->PointCount = (param_2->Header).PointCount;
  uVar10 = (param_2->Header).SampleCount;
  param_1->LODIndex = (param_2->Header).LODIndex;
  uVar7 = 0;
  if (uVar10 != 0) {
    uVar7 = (param_2->Header).SampleCount;
  }
  param_1->SampleCount = uVar7;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            (&param_1->UniqueSectionIds,&(param_2->Header).UniqueSectionIndices);
  param_1->MeshSectionCount = (param_2->Header).MeshSectionCount;
  bVar6 = FBulkData::IsBulkDataLoaded((FBulkData *)&(param_2->Data).UniqueTriangleIndexBuffer.Data);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("In.IsBulkDataLoaded()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                         ,0x9e4,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = FBulkData::GetBulkDataSize((FBulkData *)&(param_2->Data).UniqueTriangleIndexBuffer.Data);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum
            (&param_1->UniqueTriangleIndexBuffer,(uint)(uVar8 >> 2) & 0x3fffffff,Default);
  pvVar9 = FBulkData::LockReadOnly((FBulkData *)&(param_2->Data).UniqueTriangleIndexBuffer.Data);
  memcpy((param_1->UniqueTriangleIndexBuffer).AllocatorInstance.Data,pvVar9,uVar8 & 0xffffffff);
  FBulkData::Unlock((FBulkData *)&(param_2->Data).UniqueTriangleIndexBuffer.Data);
  bVar6 = FBulkData::IsBulkDataLoaded
                    ((FBulkData *)&(param_2->Data).RootToUniqueTriangleIndexBuffer.Data);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("In.IsBulkDataLoaded()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                         ,0x9e4,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = FBulkData::GetBulkDataSize
                    ((FBulkData *)&(param_2->Data).RootToUniqueTriangleIndexBuffer.Data);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum
            (&param_1->RootToUniqueTriangleIndexBuffer,(uint)(uVar8 >> 2) & 0x3fffffff,Default);
  pvVar9 = FBulkData::LockReadOnly
                     ((FBulkData *)&(param_2->Data).RootToUniqueTriangleIndexBuffer.Data);
  memcpy((param_1->RootToUniqueTriangleIndexBuffer).AllocatorInstance.Data,pvVar9,uVar8 & 0xffffffff
        );
  FBulkData::Unlock((FBulkData *)&(param_2->Data).RootToUniqueTriangleIndexBuffer.Data);
  bVar6 = FBulkData::IsBulkDataLoaded((FBulkData *)&(param_2->Data).RootBarycentricBuffer.Data);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("In.IsBulkDataLoaded()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                         ,0x9e4,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = FBulkData::GetBulkDataSize((FBulkData *)&(param_2->Data).RootBarycentricBuffer.Data);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum
            (&param_1->RootBarycentricBuffer,(uint)(uVar8 >> 2) & 0x3fffffff,Default);
  pvVar9 = FBulkData::LockReadOnly((FBulkData *)&(param_2->Data).RootBarycentricBuffer.Data);
  memcpy((param_1->RootBarycentricBuffer).AllocatorInstance.Data,pvVar9,uVar8 & 0xffffffff);
  FBulkData::Unlock((FBulkData *)&(param_2->Data).RootBarycentricBuffer.Data);
  GroomBinding_BulkCopy::CopyFromBulkData<FHairStrandsMeshTrianglePositionFormat>
            (&param_1->RestUniqueTrianglePositionBuffer,
             &(param_2->Data).RestUniqueTrianglePositionBuffer);
  if (uVar10 == 0) {
    piVar1 = &(param_1->MeshInterpolationWeightsBuffer).ArrayMax;
    (param_1->MeshInterpolationWeightsBuffer).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(param_1->MeshInterpolationWeightsBuffer).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(param_1->MeshSampleIndicesBuffer).ArrayMax;
    (param_1->MeshSampleIndicesBuffer).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(param_1->MeshSampleIndicesBuffer).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(param_1->MeshSampleSectionsBuffer).ArrayMax;
    (param_1->MeshSampleSectionsBuffer).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(param_1->MeshSampleSectionsBuffer).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(param_1->RestSamplePositionsBuffer).ArrayMax;
    (param_1->RestSamplePositionsBuffer).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,0,&(param_1->RestSamplePositionsBuffer).AllocatorInstance,0,piVar1);
    }
  }
  else {
    TStack_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_38.ArrayNum = 0;
    TStack_38.ArrayMax = 0;
    bVar6 = FBulkData::IsBulkDataLoaded
                      ((FBulkData *)&(param_2->Data).MeshInterpolationWeightsBuffer.Data);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("In.IsBulkDataLoaded()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                           ,0x9e4,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = FBulkData::GetBulkDataSize
                      ((FBulkData *)&(param_2->Data).MeshInterpolationWeightsBuffer.Data);
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum
              (&param_1->MeshInterpolationWeightsBuffer,(uint)(uVar8 >> 2) & 0x3fffffff,Default);
    pvVar9 = FBulkData::LockReadOnly
                       ((FBulkData *)&(param_2->Data).MeshInterpolationWeightsBuffer.Data);
    memcpy((param_1->MeshInterpolationWeightsBuffer).AllocatorInstance.Data,pvVar9,
           uVar8 & 0xffffffff);
    FBulkData::Unlock((FBulkData *)&(param_2->Data).MeshInterpolationWeightsBuffer.Data);
    bVar6 = FBulkData::IsBulkDataLoaded
                      ((FBulkData *)&(param_2->Data).MeshSampleIndicesAndSectionsBuffer.Data);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("In.IsBulkDataLoaded()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                           ,0x9e4,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = FBulkData::GetBulkDataSize
                      ((FBulkData *)&(param_2->Data).MeshSampleIndicesAndSectionsBuffer.Data);
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum
              (&TStack_38,(uint)(uVar8 >> 2) & 0x3fffffff,Default);
    pvVar9 = FBulkData::LockReadOnly
                       ((FBulkData *)&(param_2->Data).MeshSampleIndicesAndSectionsBuffer.Data);
    memcpy(TStack_38.AllocatorInstance.Data,pvVar9,uVar8 & 0xffffffff);
    FBulkData::Unlock((FBulkData *)&(param_2->Data).MeshSampleIndicesAndSectionsBuffer.Data);
    GroomBinding_BulkCopy::CopyFromBulkData<FHairStrandsMeshTrianglePositionFormat>
              (&param_1->RestSamplePositionsBuffer,&(param_2->Data).RestSamplePositionsBuffer);
    iVar5 = TStack_38.ArrayNum;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum
              (&param_1->MeshSampleIndicesBuffer,TStack_38.ArrayNum,Default);
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum
              (&param_1->MeshSampleSectionsBuffer,iVar5,Default);
    uVar10 = 0;
    if (iVar5 != 0) {
      do {
        uVar12 = ~uVar10 >> 0x1f;
        uVar7 = 0;
        if ((int)uVar10 < (param_1->MeshSampleSectionsBuffer).ArrayNum) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (param_1->MeshSampleSectionsBuffer).AllocatorInstance.Data;
        lVar11 = (longlong)(int)uVar10;
        uVar7 = 0;
        if ((int)uVar10 < (param_1->MeshSampleIndicesBuffer).ArrayNum) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_1->MeshSampleIndicesBuffer).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar10 < TStack_38.ArrayNum) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar10 = uVar10 + 1;
        uVar7 = *(uint *)(TStack_38.AllocatorInstance.Data + lVar11 * 4);
        *(uint *)(pFVar2 + lVar11 * 4) = uVar7 >> 0x18;
        *(uint *)(pFVar3 + lVar11 * 4) = uVar7 & 0xffffff;
      } while (uVar10 < (uint)iVar5);
    }
    if (TStack_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_38.AllocatorInstance.Data);
    }
  }
  return;
}

// GetVersion @ 14dfca330

FString * __cdecl FGroomBindingBuilder::GetVersion(FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"6d");
  return __return_storage_ptr__;
}

