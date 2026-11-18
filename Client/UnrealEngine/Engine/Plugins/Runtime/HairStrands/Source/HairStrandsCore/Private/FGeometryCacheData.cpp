// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 20

// FGeometryCacheData @ 14dfab560

/* WARNING: Enum "Type": Some values do not have unique names */

FGeometryCacheData * __thiscall
GroomBinding_Mesh::FGeometryCacheData::FGeometryCacheData
          (FGeometryCacheData *this,UGeometryCache *param_1)

{
  TArray<GroomBinding_Mesh::FGeometryCacheSection,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<GroomBinding_Mesh::FGeometryCacheData::FRange,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FGeometryCacheData *pFVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  uint local_res10;
  FName local_res18;
  FName local_res20;
  uint local_c8;
  uint uStack_c4;
  TArray<FGeometryCacheMeshData,TSizedDefaultAllocator<32>_> local_c0;
  undefined **local_b0;
  FScriptContainerElement *local_a8;
  int local_a0;
  uint local_9c;
  uint local_98;
  FScriptContainerElement *local_90;
  FName local_88;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  pTVar1 = &this->Sections;
  pTVar2 = &this->SectionRanges;
  this->_padding_ = (longlong)&_vftable__for__GroomBinding_Mesh__IMeshData__;
  this->_padding_ = (longlong)&_vftable__for__GroomBinding_Mesh__IMeshLODData__;
  this->GeometryCache = param_1;
  (this->MeshData).Positions.ArrayNum = 0;
  (this->MeshData).Positions.ArrayMax = 0;
  (this->MeshData).TextureCoordinates.ArrayNum = 0;
  (this->MeshData).TextureCoordinates.ArrayMax = 0;
  (this->MeshData).TangentsX.ArrayNum = 0;
  (this->MeshData).TangentsX.ArrayMax = 0;
  (this->MeshData).TangentsZ.ArrayNum = 0;
  (this->MeshData).TangentsZ.ArrayMax = 0;
  (this->MeshData).Colors.ArrayNum = 0;
  (this->MeshData).Colors.ArrayMax = 0;
  (this->MeshData).ImportedVertexNumbers.ArrayNum = 0;
  (this->MeshData).ImportedVertexNumbers.ArrayMax = 0;
  (this->MeshData).MotionVectors.ArrayNum = 0;
  (this->MeshData).MotionVectors.ArrayMax = 0;
  (this->MeshData).BatchesInfo.ArrayNum = 0;
  (this->MeshData).BatchesInfo.ArrayMax = 0;
  (this->MeshData).Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).TextureCoordinates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).TangentsX.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).TangentsZ.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).Colors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).ImportedVertexNumbers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).MotionVectors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).BatchesInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->MeshData).BoundingBox.Min.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->MeshData).BoundingBox.Min.field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(this->MeshData).BoundingBox.Max.field0_0x0 + 4) = 0;
  (this->MeshData).BoundingBox.IsValid = '\0';
  (this->MeshData).BoundingBox.Pad[0] = '\0';
  (this->MeshData).BoundingBox.Pad[1] = '\0';
  (this->MeshData).BoundingBox.Pad[2] = '\0';
  (this->MeshData).Indices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).Indices.ArrayNum = 0;
  (this->MeshData).Indices.ArrayMax = 0;
  (this->MeshData).VertexInfo.bHasTangentX = false;
  (this->MeshData).VertexInfo.bHasTangentZ = false;
  (this->MeshData).VertexInfo.bHasUV0 = false;
  (this->MeshData).VertexInfo.bHasColor0 = false;
  (this->MeshData).VertexInfo.bHasMotionVectors = false;
  (this->MeshData).VertexInfo.bHasImportedVertexNumbers = false;
  (this->MeshData).VertexInfo.bConstantUV0 = false;
  (this->MeshData).VertexInfo.bConstantColor0 = false;
  (this->MeshData).VertexInfo.bConstantIndices = false;
  (this->MeshData).TempBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).TempBytes.ArrayNum = 0;
  (this->MeshData).TempBytes.ArrayMax = 0;
  (this->MeshData).Hash = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->SectionRanges).ArrayNum = 0;
  (this->SectionRanges).ArrayMax = 0;
  (this->VertexBindingData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexBindingData).ArrayNum = 0;
  (this->VertexBindingData).ArrayMax = 0;
  if (this->GeometryCache == (UGeometryCache *)0x0) {
    return this;
  }
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  UGeometryCache::GetMeshDataAtTime(this->GeometryCache,0.0,&local_c0);
  if (local_c0.ArrayNum < 2) {
    if (local_c0.ArrayNum == 0) {
      if ((byte)LogHairStrands._0_1_ < 3) goto LAB_14dfabaa5;
      local_res20 = (FName)this->GeometryCache->_padding_;
      ::FName::ToString(&local_res20,&local_70);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_GroomBinding_Mesh::FGeometryCacheData::FGeometryCacheData(UGeometryCache*___ptr64)___ptr64'
                  ::__l31::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
      local_80.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
    }
    else {
      if ((local_c0.ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FGeometryCacheData *)(*pcVar4)();
        return pFVar9;
      }
      if (0 < *(int *)(local_c0.AllocatorInstance.Data + 8)) {
        if ((local_c0.ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FGeometryCacheData *)(*pcVar4)();
          return pFVar9;
        }
        FGeometryCacheMeshData::operator=
                  (&this->MeshData,(FGeometryCacheMeshData *)local_c0.AllocatorInstance.Data);
        local_res10 = (this->MeshData).BatchesInfo.ArrayNum;
        uVar10 = (ulonglong)(int)local_res10;
        pFVar13 = (this->MeshData).BatchesInfo.AllocatorInstance.Data;
        local_90 = pFVar13 + uVar10 * 0xc;
        while( true ) {
          pFVar3 = local_90;
          if ((this->MeshData).BatchesInfo.ArrayNum != (int)uVar10) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FGeometryCacheMeshBatchInfo,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (pFVar13 == pFVar3) break;
          uVar12 = *(uint *)pFVar13;
          local_c8 = 0xffffffff;
          uStack_c4 = 0;
          if (uVar12 < *(uint *)(pFVar13 + 4) + uVar12 + *(uint *)(pFVar13 + 4) * 2) {
            do {
              uVar7 = 0;
              if ((int)uVar12 < (this->MeshData).Indices.ArrayNum) {
                uVar7 = ~uVar12 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                pFVar9 = (FGeometryCacheData *)(*pcVar4)();
                return pFVar9;
              }
              uVar7 = *(uint *)((this->MeshData).Indices.AllocatorInstance.Data +
                               (longlong)(int)uVar12 * 4);
              uVar5 = uVar7;
              if (local_c8 < uVar7) {
                uVar5 = local_c8;
              }
              if (uVar7 < uStack_c4) {
                uVar7 = uStack_c4;
              }
              uVar12 = uVar12 + 1;
              local_c8 = uVar5;
              uStack_c4 = uVar7;
            } while (uVar12 < *(uint *)(pFVar13 + 4) * 3 + *(uint *)pFVar13);
          }
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_c8) &&
              ((FScriptContainerElement *)&local_c8 <
               pFVar3 + (longlong)(this->SectionRanges).ArrayMax * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            pFVar9 = (FGeometryCacheData *)(*pcVar4)();
            return pFVar9;
          }
          iVar8 = (this->SectionRanges).ArrayNum;
          if (iVar8 == (this->SectionRanges).ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&pTVar2->AllocatorInstance,&(this->SectionRanges).ArrayMax);
          }
          (this->SectionRanges).ArrayNum = iVar8 + 1;
          local_b0 = &___7FGeometryCacheSection_GroomBinding_Mesh__6B_;
          *(ulonglong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) =
               CONCAT44(uStack_c4,local_c8);
          pFVar3 = (pTVar1->AllocatorInstance).Data;
          local_9c = local_c8;
          local_a0 = (uStack_c4 - local_c8) + 1;
          local_98 = *(uint *)(pFVar13 + 8);
          local_a8 = pFVar13;
          if (((pFVar3 <= (FScriptContainerElement *)&local_b0) &&
              ((FScriptContainerElement *)&local_b0 <
               pFVar3 + (longlong)(this->Sections).ArrayMax * 0x20)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            pFVar9 = (FGeometryCacheData *)(*pcVar4)();
            return pFVar9;
          }
          iVar8 = (this->Sections).ArrayNum;
          if (iVar8 == (this->Sections).ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&pTVar1->AllocatorInstance,&(this->Sections).ArrayMax);
          }
          lVar11 = (longlong)iVar8 * 0x20;
          (this->Sections).ArrayNum = iVar8 + 1;
          pFVar13 = pFVar13 + 0xc;
          pFVar3 = (pTVar1->AllocatorInstance).Data;
          *(undefined ***)(pFVar3 + lVar11) = &___7FGeometryCacheSection_GroomBinding_Mesh__6B_;
          *(FScriptContainerElement **)(pFVar3 + lVar11 + 8) = local_a8;
          *(int *)(pFVar3 + lVar11 + 0x10) = local_a0;
          *(uint *)(pFVar3 + lVar11 + 0x14) = local_9c;
          *(uint *)(pFVar3 + lVar11 + 0x18) = local_98;
          uVar10 = (ulonglong)local_res10;
          local_b0 = &___7IMeshSectionData_GroomBinding_Mesh__6B_;
        }
        goto LAB_14dfabaa5;
      }
      if ((byte)LogHairStrands._0_1_ < 3) goto LAB_14dfabaa5;
      local_88 = (FName)this->GeometryCache->_padding_;
      ::FName::ToString(&local_88,local_60);
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_GroomBinding_Mesh::FGeometryCacheData::FGeometryCacheData(UGeometryCache*___ptr64)___ptr64'
                  ::__l62::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
      local_80.Data.AllocatorInstance.Data = local_60[0].Data.AllocatorInstance.Data;
    }
  }
  else {
    if ((byte)LogHairStrands._0_1_ < 3) goto LAB_14dfabaa5;
    local_res18 = (FName)this->GeometryCache->_padding_;
    ::FName::ToString(&local_res18,&local_80);
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_GroomBinding_Mesh::FGeometryCacheData::FGeometryCacheData(UGeometryCache*___ptr64)___ptr64'
                ::__l9::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
LAB_14dfabaa5:
  DestructItems<FGeometryCacheMeshData,int>
            ((FGeometryCacheMeshData *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
  if ((FGeometryCacheMeshData *)local_c0.AllocatorInstance.Data != (FGeometryCacheMeshData *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  return this;
}

// AllocateVertexBindingData @ 14dfb75b0

void __thiscall
GroomBinding_Mesh::FGeometryCacheData::AllocateVertexBindingData
          (FGeometryCacheData *this,FName param_1)

{
  float local_res8 [8];
  
  local_res8[0] = 1.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&(this->SectionRanges).ArrayNum,local_res8
             ,*(int *)&(this->MeshData).Positions.AllocatorInstance.Data);
  return;
}

// GetIndexBuffer @ 14dfc74d0

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
GroomBinding_Mesh::FGeometryCacheData::GetIndexBuffer(FGeometryCacheData *this)

{
  return (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&(this->MeshData).BoundingBox.IsValid;
}

// GetMeshLODData @ 14dfc7a50

IMeshLODData * __thiscall
GroomBinding_Mesh::FGeometryCacheData::GetMeshLODData(FGeometryCacheData *this,int param_1)

{
  return (IMeshLODData *)&this->_padding_;
}

// GetMeshLODData @ 14dfc7a60

IMeshLODData * __thiscall
GroomBinding_Mesh::FGeometryCacheData::GetMeshLODData(FGeometryCacheData *this,int param_1)

{
  return (IMeshLODData *)&this->_padding_;
}

// GetNumLODs @ 14dfc7c70

int __thiscall GroomBinding_Mesh::FGeometryCacheData::GetNumLODs(FGeometryCacheData *this)

{
  return 1;
}

// GetNumSections @ 14dfc7c90

int __thiscall GroomBinding_Mesh::FGeometryCacheData::GetNumSections(FGeometryCacheData *this)

{
  return *(int *)&(this->Sections).AllocatorInstance.Data;
}

// GetNumVertices @ 14dfc7ea0

uint __thiscall GroomBinding_Mesh::FGeometryCacheData::GetNumVertices(FGeometryCacheData *this)

{
  return *(uint *)&(this->MeshData).Positions.AllocatorInstance.Data;
}

// GetSection @ 14dfc9820

IMeshSectionData * __thiscall
GroomBinding_Mesh::FGeometryCacheData::GetSection(FGeometryCacheData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IMeshSectionData *pIVar4;
  
  uVar3 = 0;
  if ((int)param_1 < *(int *)&(this->Sections).AllocatorInstance.Data) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IMeshSectionData *)(*pcVar1)();
      return pIVar4;
    }
  }
  return (IMeshSectionData *)((longlong)(int)param_1 * 0x20 + (this->MeshData).Hash);
}

// GetSectionFromVertexIndex @ 14dfc9970

int __thiscall
GroomBinding_Mesh::FGeometryCacheData::GetSectionFromVertexIndex
          (FGeometryCacheData *this,uint param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar5 = *(int *)&(this->SectionRanges).AllocatorInstance.Data;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      lVar1 = *(longlong *)&(this->Sections).ArrayNum;
      if ((*(uint *)(lVar7 + lVar1) <= param_1) && (param_1 <= *(uint *)(lVar7 + 4 + lVar1))) {
        return uVar6;
      }
      iVar5 = *(int *)&(this->SectionRanges).AllocatorInstance.Data;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < iVar5);
  }
  return 0;
}

// GetVertexBinding @ 14dfca360

float __thiscall
GroomBinding_Mesh::FGeometryCacheData::GetVertexBinding(FGeometryCacheData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  if (((int)param_1 < 0) ||
     (*(int *)&(this->VertexBindingData).AllocatorInstance.Data <= (int)param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexBindingData.IsValidIndex(InVertexIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,0x30b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  uVar3 = 0;
  if ((int)param_1 < *(int *)&(this->VertexBindingData).AllocatorInstance.Data) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return *(float *)(*(longlong *)&(this->SectionRanges).ArrayNum + (longlong)(int)param_1 * 4);
}

// GetVertexNormal @ 14dfca4b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<float> * __thiscall
GroomBinding_Mesh::FGeometryCacheData::GetVertexNormal
          (FGeometryCacheData *this,TVector<float> *__return_storage_ptr__,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float> *pTVar4;
  undefined1 in_XMM1 [16];
  undefined1 auVar5 [16];
  float fVar6;
  
  uVar3 = 0;
  if ((int)param_1 < *(int *)&(this->MeshData).TangentsZ.AllocatorInstance.Data) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  auVar5 = pmovsxbd(in_XMM1,*(undefined4 *)
                             (*(longlong *)&(this->MeshData).TangentsX.ArrayNum +
                             (longlong)(int)param_1 * 4));
  fVar6 = (float)auVar5._8_4_ * _UNK_151040078;
  *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
       CONCAT44((float)auVar5._4_4_ * _UNK_151040074,
                (float)auVar5._0_4_ * ___xmm_3c0102043c0102043c0102043c010204);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar6;
  return __return_storage_ptr__;
}

// GetVertexPosition @ 14dfca790

TVector<float> * __thiscall
GroomBinding_Mesh::FGeometryCacheData::GetVertexPosition(FGeometryCacheData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float> *pTVar4;
  
  uVar3 = 0;
  if ((int)param_1 < *(int *)&(this->MeshData).Positions.AllocatorInstance.Data) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<float> *)
         ((longlong)&this->GeometryCache->_padding_ + (longlong)(int)param_1 * 0xc);
}

// GetVertexUV @ 14dfca910

TVector2<float> __thiscall
GroomBinding_Mesh::FGeometryCacheData::GetVertexUV
          (FGeometryCacheData *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector2<float> TVar4;
  undefined4 in_register_00000014;
  TVector2<float>_u_0 TVar5;
  
  TVar5._s_0.Y = (float)in_register_00000014;
  TVar5._s_0.X = (float)param_1;
  uVar3 = 0;
  if ((int)param_2 < *(int *)&(this->MeshData).TextureCoordinates.AllocatorInstance.Data) {
    uVar3 = ~param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4.field0_0x0 = (TVector2<float>_u_0)(*pcVar1)();
      return (TVector2<float>)TVar4.field0_0x0;
    }
  }
  *(undefined8 *)TVar5 =
       *(undefined8 *)
        (*(longlong *)&(this->MeshData).Positions.ArrayNum + (longlong)(int)param_2 * 8);
  return (TVector2<float>)TVar5;
}

// GetVerticesBuffer @ 14dfcabf0

TVector<float> * __thiscall
GroomBinding_Mesh::FGeometryCacheData::GetVerticesBuffer(FGeometryCacheData *this)

{
  return (TVector<float> *)this->GeometryCache;
}

// HasVertexAttribute @ 14dfcb180

bool __thiscall
GroomBinding_Mesh::FGeometryCacheData::HasVertexAttribute(FGeometryCacheData *this,FName param_1)

{
  return false;
}

// IsLODValid @ 14dfcfd00

bool __thiscall
GroomBinding_Mesh::FGeometryCacheData::IsLODValid(FGeometryCacheData *this,int param_1)

{
  return param_1 == 0;
}

// IsSectionValid @ 14dfcffa0

bool __thiscall
GroomBinding_Mesh::FGeometryCacheData::IsSectionValid(FGeometryCacheData *this,uint param_1)

{
  return true;
}

// IsValid @ 14dfd0700

bool __thiscall GroomBinding_Mesh::FGeometryCacheData::IsValid(FGeometryCacheData *this)

{
  if ((this->GeometryCache != (UGeometryCache *)0x0) && (0 < (this->Sections).ArrayNum)) {
    return true;
  }
  return false;
}

// SetVertexBinding @ 14dfd8660

void __thiscall
GroomBinding_Mesh::FGeometryCacheData::SetVertexBinding
          (FGeometryCacheData *this,uint param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (((int)param_1 < 0) ||
     (*(int *)&(this->VertexBindingData).AllocatorInstance.Data <= (int)param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexBindingData.IsValidIndex(InVertexIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,0x305,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if ((int)param_1 < *(int *)&(this->VertexBindingData).AllocatorInstance.Data) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(float *)(*(longlong *)&(this->SectionRanges).ArrayNum + (longlong)(int)param_1 * 4) = param_2;
  return;
}

