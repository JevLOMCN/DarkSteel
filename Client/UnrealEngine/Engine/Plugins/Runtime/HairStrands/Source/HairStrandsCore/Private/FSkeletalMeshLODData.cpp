// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 15

// AllocateVertexBindingData @ 14dfb75e0

void __thiscall
GroomBinding_Mesh::FSkeletalMeshLODData::AllocateVertexBindingData
          (FSkeletalMeshLODData *this,FName param_1)

{
  int iVar1;
  FSkeletalMeshRenderData *pFVar2;
  FSkeletalMeshVertexDataInterface *pFVar3;
  code *pcVar4;
  float fVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FSkeletalMeshAttributeVertexBuffer *pFVar11;
  longlong lVar12;
  float *pfVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float local_res8 [2];
  float local_res18 [4];
  
  cVar6 = (**(code **)(this->_padding_ + 0x50))();
  uVar15 = 0;
  iVar14 = 0;
  if (cVar6 != '\0') {
    if ((this->MeshData == (FSkeletalMeshRenderData *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("MeshData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                           ,0x1cc,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((this->LODIndex < 0) || ((this->MeshData->LODRenderData).Array.ArrayNum <= this->LODIndex))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("MeshData->LODRenderData.IsValidIndex(LODIndex)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                              ,0x1cd,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar16 = this->LODIndex;
    pFVar2 = this->MeshData;
    uVar9 = 0;
    if ((int)uVar16 < (pFVar2->LODRenderData).Array.ArrayNum) {
      uVar9 = ~uVar16 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar11 = FSkeletalMeshVertexAttributeRenderData::GetAttributeBuffer
                        ((FSkeletalMeshVertexAttributeRenderData *)
                         (*(longlong *)
                           ((pFVar2->LODRenderData).Array.AllocatorInstance.Data +
                           (longlong)(int)uVar16 * 8) + 0x438),param_1);
    if (pFVar11 != (FSkeletalMeshAttributeVertexBuffer *)0x0) {
      iVar1 = pFVar11->PixelFormat;
      pFVar3 = pFVar11->ValueData;
      if ((pFVar3 != (FSkeletalMeshVertexDataInterface *)0x0) &&
         (iVar8 = (**(code **)((longlong)*pFVar3 + 0x20))(pFVar3), iVar8 != 0)) {
        uVar9 = (**(code **)((longlong)*pFVar3 + 0x20))(pFVar3);
        local_res8[0] = 0.0;
        TArray<float,TSizedDefaultAllocator<32>_>::Init(&this->VertexBindingData,local_res8,uVar9);
        fVar5 = __real_3b808081;
        uVar16 = uVar15;
        if (uVar9 != 0) {
          do {
            iVar8 = (**(code **)((longlong)*pFVar3 + 0x10))(pFVar3);
            lVar12 = (**(code **)((longlong)*pFVar3 + 0x18))(pFVar3);
            pfVar13 = (float *)(lVar12 + (ulonglong)(iVar8 * uVar16));
            if (iVar1 == 0xd) {
              fVar17 = *pfVar13;
LAB_14dfb77ae:
              uVar10 = uVar15;
              if ((int)uVar16 < (this->VertexBindingData).ArrayNum) {
                uVar10 = ~uVar16 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              *(float *)((this->VertexBindingData).AllocatorInstance.Data +
                        (longlong)(int)uVar16 * 4) = fVar17;
            }
            else {
              if (iVar1 == 0x15) {
                fVar17 = FGenericPlatformMath::LoadHalf((ushort *)pfVar13);
                goto LAB_14dfb77ae;
              }
              if (iVar1 == 0x47) {
                fVar17 = (float)*(byte *)pfVar13 * fVar5;
                goto LAB_14dfb77ae;
              }
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar9);
        }
      }
    }
  }
  pFVar2 = this->MeshData;
  if (pFVar2 != (FSkeletalMeshRenderData *)0x0) {
    uVar16 = this->LODIndex;
    if ((int)uVar16 < (pFVar2->LODRenderData).Array.ArrayNum) {
      uVar15 = ~uVar16 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar14 = *(int *)(*(longlong *)
                       ((pFVar2->LODRenderData).Array.AllocatorInstance.Data +
                       (longlong)(int)uVar16 * 8) + 300);
  }
  if ((this->VertexBindingData).ArrayNum != iVar14) {
    local_res18[0] = 1.0;
    TArray<float,TSizedDefaultAllocator<32>_>::Init(&this->VertexBindingData,local_res18,iVar14);
  }
  return;
}

// GetIndexBuffer @ 14dfc74e0

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
GroomBinding_Mesh::FSkeletalMeshLODData::GetIndexBuffer(FSkeletalMeshLODData *this)

{
  return &this->IndexBuffer;
}

// GetNumSections @ 14dfc7ca0

int __thiscall GroomBinding_Mesh::FSkeletalMeshLODData::GetNumSections(FSkeletalMeshLODData *this)

{
  return (this->Sections).ArrayNum;
}

// GetNumVertices @ 14dfc7ec0

uint __thiscall GroomBinding_Mesh::FSkeletalMeshLODData::GetNumVertices(FSkeletalMeshLODData *this)

{
  FSkeletalMeshRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  if (this->MeshData == (FSkeletalMeshRenderData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,0x178,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  if ((this->LODIndex < 0) || ((this->MeshData->LODRenderData).Array.ArrayNum <= this->LODIndex)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshData->LODRenderData.IsValidIndex(LODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,0x179,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  uVar4 = this->LODIndex;
  pFVar1 = this->MeshData;
  uVar5 = 0;
  if ((int)uVar4 < (pFVar1->LODRenderData).Array.ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return *(uint *)(*(longlong *)
                    ((pFVar1->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar4 * 8
                    ) + 300);
}

// GetSection @ 14dfc98a0

IMeshSectionData * __thiscall
GroomBinding_Mesh::FSkeletalMeshLODData::GetSection(FSkeletalMeshLODData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IMeshSectionData *pIVar4;
  
  if (this->MeshData == (FSkeletalMeshRenderData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,0x189,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IMeshSectionData *)(*pcVar1)();
      return pIVar4;
    }
  }
  if (((int)param_1 < 0) || ((this->Sections).ArrayNum <= (int)param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sections.IsValidIndex(InSectionIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,0x18a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IMeshSectionData *)(*pcVar1)();
      return pIVar4;
    }
  }
  uVar3 = 0;
  if ((int)param_1 < (this->Sections).ArrayNum) {
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
  return (IMeshSectionData *)
         ((this->Sections).AllocatorInstance.Data + (longlong)(int)param_1 * 0x18);
}

// GetSectionFromVertexIndex @ 14dfc9a30

int __thiscall
GroomBinding_Mesh::FSkeletalMeshLODData::GetSectionFromVertexIndex
          (FSkeletalMeshLODData *this,uint param_1)

{
  uint uVar1;
  FSkeletalMeshRenderData *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int local_res8 [2];
  int local_res18 [4];
  
  local_res8[0] = 0;
  if (this->MeshData == (FSkeletalMeshRenderData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,0x1ae,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  if ((this->LODIndex < 0) || ((this->MeshData->LODRenderData).Array.ArrayNum <= this->LODIndex)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshData->LODRenderData.IsValidIndex(LODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,0x1af,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  uVar1 = this->LODIndex;
  pFVar2 = this->MeshData;
  local_res18[0] = 0;
  uVar6 = 0;
  if ((int)uVar1 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  FSkeletalMeshLODRenderData::GetSectionFromVertexIndex
            (*(FSkeletalMeshLODRenderData **)
              ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar1 * 8),
             param_1,local_res8,local_res18);
  return local_res8[0];
}

// GetVertexBinding @ 14dfca410

float __thiscall
GroomBinding_Mesh::FSkeletalMeshLODData::GetVertexBinding(FSkeletalMeshLODData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  if (((int)param_1 < 0) || ((this->VertexBindingData).ArrayNum <= (int)param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexBindingData.IsValidIndex(InVertexIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,0x1fa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  uVar3 = 0;
  if ((int)param_1 < (this->VertexBindingData).ArrayNum) {
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
  return *(float *)((this->VertexBindingData).AllocatorInstance.Data + (longlong)(int)param_1 * 4);
}

// GetVertexNormal @ 14dfca550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<float> * __thiscall
GroomBinding_Mesh::FSkeletalMeshLODData::GetVertexNormal
          (FSkeletalMeshLODData *this,TVector<float> *__return_storage_ptr__,uint param_1)

{
  ulonglong uVar1;
  uint uVar2;
  FSkeletalMeshRenderData *pFVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TVector<float> *pTVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar11 = (ulonglong)param_1;
  if (this->MeshData == (FSkeletalMeshRenderData *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,0x1a6,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TVector<float> *)(*pcVar6)();
      return pTVar9;
    }
  }
  if ((this->LODIndex < 0) || ((this->MeshData->LODRenderData).Array.ArrayNum <= this->LODIndex)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshData->LODRenderData.IsValidIndex(LODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,0x1a7,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TVector<float> *)(*pcVar6)();
      return pTVar9;
    }
  }
  uVar2 = this->LODIndex;
  pFVar3 = this->MeshData;
  uVar8 = 0;
  if ((int)uVar2 < (pFVar3->LODRenderData).Array.ArrayNum) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TVector<float> *)(*pcVar6)();
      return pTVar9;
    }
  }
  lVar4 = *(longlong *)
           ((pFVar3->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar2 * 8);
  lVar5 = *(longlong *)(lVar4 + 0xc0);
  pcVar6 = *(code **)(**(longlong **)(lVar4 + 0xa0) + 0x50);
  if (*(char *)(lVar4 + 0xe1) == '\0') {
    uVar1 = lVar5 + uVar11 * 8;
    lVar10 = (*pcVar6)();
    if ((ulonglong)(lVar10 + lVar5) < uVar1 + 8) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x104,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TVector<float> *)(*pcVar6)();
        return pTVar9;
      }
    }
    if (uVar1 < *(ulonglong *)(lVar4 + 0xc0)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x105,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TVector<float> *)(*pcVar6)();
        return pTVar9;
      }
    }
    auVar12 = pmovsxbd(in_XMM1,*(undefined4 *)(lVar5 + 4 + uVar11 * 8));
    fVar13 = (float)auVar12._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
    fVar14 = (float)auVar12._4_4_ * _UNK_151040074;
    fVar15 = (float)auVar12._8_4_ * _UNK_151040078;
  }
  else {
    uVar11 = uVar11 * 0x10 + lVar5;
    lVar10 = (*pcVar6)();
    if ((ulonglong)(lVar10 + lVar5) < uVar11 + 0x10) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x104,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TVector<float> *)(*pcVar6)();
        return pTVar9;
      }
    }
    if (uVar11 < *(ulonglong *)(lVar4 + 0xc0)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x105,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TVector<float> *)(*pcVar6)();
        return pTVar9;
      }
    }
    auVar12 = pmovsxwd(in_XMM1,*(undefined8 *)(uVar11 + 8));
    fVar13 = (float)auVar12._0_4_ * ___xmm_38000100380001003800010038000100;
    fVar14 = (float)auVar12._4_4_ * _UNK_150d565e4;
    fVar15 = (float)auVar12._8_4_ * _UNK_150d565e8;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar13;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar15;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar14;
  return __return_storage_ptr__;
}

// GetVertexPosition @ 14dfca810

TVector<float> * __thiscall
GroomBinding_Mesh::FSkeletalMeshLODData::GetVertexPosition(FSkeletalMeshLODData *this,uint param_1)

{
  uint uVar1;
  FSkeletalMeshRenderData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<float> *pTVar7;
  
  if (this->MeshData == (FSkeletalMeshRenderData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,0x198,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<float> *)(*pcVar4)();
      return pTVar7;
    }
  }
  if ((this->LODIndex < 0) || ((this->MeshData->LODRenderData).Array.ArrayNum <= this->LODIndex)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshData->LODRenderData.IsValidIndex(LODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,0x199,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<float> *)(*pcVar4)();
      return pTVar7;
    }
  }
  uVar1 = this->LODIndex;
  pFVar2 = this->MeshData;
  uVar6 = 0;
  if ((int)uVar1 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<float> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)
           ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  return (TVector<float> *)
         ((ulonglong)(param_1 * *(int *)(lVar3 + 0x128)) + *(longlong *)(lVar3 + 0x120));
}

// GetVertexUV @ 14dfca9a0

TVector2<float> __thiscall
GroomBinding_Mesh::FSkeletalMeshLODData::GetVertexUV
          (FSkeletalMeshLODData *this,uint param_1,uint param_2)

{
  ulonglong uVar1;
  ushort *puVar2;
  uint uVar3;
  FSkeletalMeshRenderData *pFVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  TVector2<float> TVar10;
  longlong lVar11;
  undefined4 in_register_00000014;
  TVector2<float>_u_0 TVar12;
  longlong lVar13;
  uint in_R9D;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  
  TVar12._s_0.Y = (float)in_register_00000014;
  TVar12._s_0.X = (float)param_1;
  uVar14 = (ulonglong)in_R9D;
  if (this->MeshData == (FSkeletalMeshRenderData *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,0x19f,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      TVar10.field0_0x0 = (TVector2<float>_u_0)(*pcVar7)();
      return (TVector2<float>)TVar10.field0_0x0;
    }
  }
  if ((this->LODIndex < 0) || ((this->MeshData->LODRenderData).Array.ArrayNum <= this->LODIndex)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshData->LODRenderData.IsValidIndex(LODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,0x1a0,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      TVar10.field0_0x0 = (TVector2<float>_u_0)(*pcVar7)();
      return (TVector2<float>)TVar10.field0_0x0;
    }
  }
  uVar3 = this->LODIndex;
  pFVar4 = this->MeshData;
  uVar9 = 0;
  if ((int)uVar3 < (pFVar4->LODRenderData).Array.ArrayNum) {
    uVar9 = ~uVar3 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      TVar10.field0_0x0 = (TVector2<float>_u_0)(*pcVar7)();
      return (TVector2<float>)TVar10.field0_0x0;
    }
  }
  lVar5 = *(longlong *)
           ((pFVar4->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
  lVar6 = *(longlong *)(lVar5 + 200);
  lVar13 = (ulonglong)*(uint *)(lVar5 + 0xd8) * (ulonglong)param_2;
  pcVar7 = *(code **)(**(longlong **)(lVar5 + 0xb0) + 0x50);
  if (*(char *)(lVar5 + 0xe0) == '\0') {
    puVar2 = (ushort *)(lVar6 + (uVar14 + lVar13) * 4);
    lVar13 = (*pcVar7)();
    if ((ushort *)(lVar13 + lVar6) < puVar2 + 2) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x17b,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        TVar10.field0_0x0 = (TVector2<float>_u_0)(*pcVar7)();
        return (TVector2<float>)TVar10.field0_0x0;
      }
    }
    if (puVar2 < *(ushort **)(lVar5 + 200)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x17c,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        TVar10.field0_0x0 = (TVector2<float>_u_0)(*pcVar7)();
        return (TVector2<float>)TVar10.field0_0x0;
      }
    }
    fVar15 = FGenericPlatformMath::LoadHalf(puVar2 + 1);
    fVar16 = FGenericPlatformMath::LoadHalf(puVar2);
    *(float *)((longlong)TVar12 + 4) = fVar15;
    *(float *)TVar12 = fVar16;
  }
  else {
    lVar13 = lVar6 + lVar13 * 8;
    uVar1 = lVar13 + uVar14 * 8;
    lVar11 = (*pcVar7)();
    if ((ulonglong)(lVar11 + lVar6) < uVar1 + 8) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x17b,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        TVar10.field0_0x0 = (TVector2<float>_u_0)(*pcVar7)();
        return (TVector2<float>)TVar10.field0_0x0;
      }
    }
    if (uVar1 < *(ulonglong *)(lVar5 + 200)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x17c,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        TVar10.field0_0x0 = (TVector2<float>_u_0)(*pcVar7)();
        return (TVector2<float>)TVar10.field0_0x0;
      }
    }
    *(undefined8 *)TVar12 = *(undefined8 *)(lVar13 + uVar14 * 8);
  }
  return (TVector2<float>)TVar12;
}

// GetVerticesBuffer @ 14dfcac00

TVector<float> * __thiscall
GroomBinding_Mesh::FSkeletalMeshLODData::GetVerticesBuffer(FSkeletalMeshLODData *this)

{
  uint uVar1;
  FSkeletalMeshRenderData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<float> *pTVar6;
  
  if (this->MeshData == (FSkeletalMeshRenderData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,0x171,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<float> *)(*pcVar3)();
      return pTVar6;
    }
  }
  if ((this->LODIndex < 0) || ((this->MeshData->LODRenderData).Array.ArrayNum <= this->LODIndex)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshData->LODRenderData.IsValidIndex(LODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,0x172,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<float> *)(*pcVar3)();
      return pTVar6;
    }
  }
  uVar1 = this->LODIndex;
  pFVar2 = this->MeshData;
  uVar5 = 0;
  if ((int)uVar1 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<float> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return *(TVector<float> **)
          (*(longlong *)
            ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar1 * 8) +
          0x120);
}

// HasVertexAttribute @ 14dfcb190

bool __thiscall
GroomBinding_Mesh::FSkeletalMeshLODData::HasVertexAttribute
          (FSkeletalMeshLODData *this,FName param_1)

{
  uint uVar1;
  FSkeletalMeshRenderData *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FSkeletalMeshAttributeVertexBuffer *pFVar7;
  
  if (this->MeshData == (FSkeletalMeshRenderData *)0x0) {
    return false;
  }
  if ((this->LODIndex < 0) || ((this->MeshData->LODRenderData).Array.ArrayNum <= this->LODIndex)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshData->LODRenderData.IsValidIndex(LODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,0x1c1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar1 = this->LODIndex;
  pFVar2 = this->MeshData;
  uVar6 = 0;
  if ((int)uVar1 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar7 = FSkeletalMeshVertexAttributeRenderData::GetAttributeBuffer
                     ((FSkeletalMeshVertexAttributeRenderData *)
                      (*(longlong *)
                        ((pFVar2->LODRenderData).Array.AllocatorInstance.Data +
                        (longlong)(int)uVar1 * 8) + 0x438),param_1);
  return pFVar7 != (FSkeletalMeshAttributeVertexBuffer *)0x0;
}

// IsSectionValid @ 14dfcffb0

bool __thiscall
GroomBinding_Mesh::FSkeletalMeshLODData::IsSectionValid(FSkeletalMeshLODData *this,uint param_1)

{
  FSkeletalMeshRenderData *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  
  if (this->MeshData == (FSkeletalMeshRenderData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,400,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if ((this->LODIndex < 0) || ((this->MeshData->LODRenderData).Array.ArrayNum <= this->LODIndex)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshData->LODRenderData.IsValidIndex(LODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,0x191,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar7 = this->LODIndex;
  pFVar1 = this->MeshData;
  uVar6 = 0;
  if ((int)uVar7 < (pFVar1->LODRenderData).Array.ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (((int)param_1 < 0) ||
     (*(int *)(*(longlong *)
                ((pFVar1->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar7 * 8) +
              0x18) <= (int)param_1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshData->LODRenderData[LODIndex].RenderSections.IsValidIndex(SectionIndex)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,0x192,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar7 = this->LODIndex;
  pFVar1 = this->MeshData;
  uVar6 = 0;
  if ((int)uVar7 < (pFVar1->LODRenderData).Array.ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  lVar2 = *(longlong *)
           ((pFVar1->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
  uVar7 = 0;
  if ((int)param_1 < *(int *)(lVar2 + 0x18)) {
    uVar7 = ~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return *(char *)((longlong)(int)param_1 * 0x118 + 0x110 + *(longlong *)(lVar2 + 0x10)) == '\0';
}

// IsSourceGeometryAvailable @ 14dfd0670

bool __thiscall
GroomBinding_Mesh::FSkeletalMeshLODData::IsSourceGeometryAvailable(FSkeletalMeshLODData *this)

{
  int iVar1;
  FSkeletalMeshRenderData *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  pFVar2 = this->MeshData;
  if (pFVar2 != (FSkeletalMeshRenderData *)0x0) {
    iVar1 = this->LODIndex;
    if ((-1 < iVar1) && (iVar1 < (pFVar2->LODRenderData).Array.ArrayNum)) {
      if (iVar1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      if (*(longlong *)
           (*(longlong *)
             ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)iVar1 * 8) + 0x120)
          != 0) {
        return true;
      }
    }
  }
  return false;
}

// SetVertexBinding @ 14dfd8720

void __thiscall
GroomBinding_Mesh::FSkeletalMeshLODData::SetVertexBinding
          (FSkeletalMeshLODData *this,uint param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (((int)param_1 < 0) || ((this->VertexBindingData).ArrayNum <= (int)param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexBindingData.IsValidIndex(InVertexIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,500,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if ((int)param_1 < (this->VertexBindingData).ArrayNum) {
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
  *(float *)((this->VertexBindingData).AllocatorInstance.Data + (longlong)(int)param_1 * 4) =
       param_2;
  return;
}

