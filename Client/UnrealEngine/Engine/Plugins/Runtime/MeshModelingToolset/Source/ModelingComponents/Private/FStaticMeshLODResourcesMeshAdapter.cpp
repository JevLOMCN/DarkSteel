// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// GetNormal @ 14cb11550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<float> * __thiscall
FStaticMeshLODResourcesMeshAdapter::GetNormal
          (FStaticMeshLODResourcesMeshAdapter *this,TVector<float> *__return_storage_ptr__,
          int param_1)

{
  uchar *puVar1;
  FStaticMeshLODResources *pFVar2;
  uchar *puVar3;
  FStaticMeshVertexDataInterface FVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  TVector<float> *pTVar8;
  float *pfVar9;
  float fVar10;
  undefined1 in_XMM1 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float local_28 [4];
  float fStack_18;
  float local_14;
  
  pFVar2 = this->Mesh;
  puVar3 = (pFVar2->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr;
  FVar4 = *(pFVar2->VertexBuffers).StaticMeshVertexBuffer.TangentsData;
  if ((pFVar2->VertexBuffers).StaticMeshVertexBuffer.bUseHighPrecisionTangentBasis == false) {
    puVar1 = puVar3 + (ulonglong)(uint)param_1 * 8;
    lVar7 = (**(code **)((longlong)FVar4 + 0x50))();
    if (puVar3 + lVar7 < puVar1 + 8) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x104,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TVector<float> *)(*pcVar5)();
        return pTVar8;
      }
    }
    if (puVar1 < (pFVar2->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x105,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TVector<float> *)(*pcVar5)();
        return pTVar8;
      }
    }
    auVar11 = pmovsxbd(in_XMM1,*(undefined4 *)(puVar1 + 4));
    local_28[3] = (float)auVar11._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
    fStack_18 = (float)auVar11._4_4_ * _UNK_151040074;
    local_14 = (float)auVar11._8_4_ * _UNK_151040078;
  }
  else {
    puVar1 = puVar3 + (ulonglong)(uint)param_1 * 0x10;
    lVar7 = (**(code **)((longlong)FVar4 + 0x50))();
    if (puVar3 + lVar7 < puVar1 + 0x10) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x104,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TVector<float> *)(*pcVar5)();
        return pTVar8;
      }
    }
    if (puVar1 < (pFVar2->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x105,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TVector<float> *)(*pcVar5)();
        return pTVar8;
      }
    }
    auVar11 = pmovsxwd(in_XMM1,*(undefined8 *)(puVar1 + 8));
    local_28[3] = (float)auVar11._0_4_ * ___xmm_38000100380001003800010038000100;
    fStack_18 = (float)auVar11._4_4_ * _UNK_150d565e4;
    local_14 = (float)auVar11._8_4_ * _UNK_150d565e8;
  }
  if (this->bScaleNormals == false) {
    pfVar9 = local_28 + 3;
  }
  else {
    fVar12 = (float)((double)local_28[3] * (this->InvBuildScale).field0_0x0._s_0.X);
    fVar13 = (float)((double)fStack_18 * (this->InvBuildScale).field0_0x0._s_0.Y);
    fVar14 = (float)((double)local_14 * (this->InvBuildScale).field0_0x0._s_0.Z);
    fVar10 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar14 * fVar14);
    if (fVar10 <= 0.0) {
      local_28[0] = 0.0;
      local_28[1] = 0.0;
      local_28[2] = 0.0;
    }
    else {
      fVar10 = __real_3f800000 / fVar10;
      local_28[1] = fVar10 * fVar13;
      local_28[0] = fVar10 * fVar12;
      local_28[2] = fVar10 * fVar14;
    }
    pfVar9 = local_28;
  }
  fVar10 = pfVar9[2];
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)pfVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar10;
  return __return_storage_ptr__;
}

// GetTriVertices @ 14cb14b60

void __thiscall
FStaticMeshLODResourcesMeshAdapter::GetTriVertices
          (FStaticMeshLODResourcesMeshAdapter *this,int param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  uchar *puVar5;
  ulonglong uVar6;
  FIndex3i_u_0 local_18;
  
  GetTriangle(this,(FIndex3i *)&local_18._s_0,param_1);
  puVar5 = (this->Mesh->VertexBuffers).PositionVertexBuffer.Data;
  uVar6 = (ulonglong)(local_18._s_0.A * (this->Mesh->VertexBuffers).PositionVertexBuffer.Stride);
  fVar1 = *(float *)(puVar5 + uVar6 + 4);
  fVar2 = *(float *)(puVar5 + uVar6 + 8);
  dVar3 = (this->BuildScale).field0_0x0._s_0.Y;
  dVar4 = (this->BuildScale).field0_0x0._s_0.Z;
  (param_2->field0_0x0)._s_0.X =
       (double)*(float *)(puVar5 + uVar6) * (this->BuildScale).field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = (double)fVar1 * dVar3;
  (param_2->field0_0x0)._s_0.Z = (double)fVar2 * dVar4;
  uVar6 = (ulonglong)(local_18._s_0.B * (this->Mesh->VertexBuffers).PositionVertexBuffer.Stride);
  puVar5 = (this->Mesh->VertexBuffers).PositionVertexBuffer.Data;
  fVar1 = *(float *)(puVar5 + uVar6 + 4);
  fVar2 = *(float *)(puVar5 + uVar6 + 8);
  dVar3 = (this->BuildScale).field0_0x0._s_0.Y;
  dVar4 = (this->BuildScale).field0_0x0._s_0.Z;
  (param_3->field0_0x0)._s_0.X =
       (double)*(float *)(puVar5 + uVar6) * (this->BuildScale).field0_0x0._s_0.X;
  (param_3->field0_0x0)._s_0.Y = (double)fVar1 * dVar3;
  (param_3->field0_0x0)._s_0.Z = (double)fVar2 * dVar4;
  puVar5 = (this->Mesh->VertexBuffers).PositionVertexBuffer.Data;
  uVar6 = (ulonglong)(local_18._s_0.C * (this->Mesh->VertexBuffers).PositionVertexBuffer.Stride);
  fVar1 = *(float *)(puVar5 + uVar6 + 4);
  fVar2 = *(float *)(puVar5 + uVar6 + 8);
  dVar3 = (this->BuildScale).field0_0x0._s_0.Y;
  dVar4 = (this->BuildScale).field0_0x0._s_0.Z;
  (param_4->field0_0x0)._s_0.X =
       (double)*(float *)(puVar5 + uVar6) * (this->BuildScale).field0_0x0._s_0.X;
  (param_4->field0_0x0)._s_0.Y = (double)fVar1 * dVar3;
  (param_4->field0_0x0)._s_0.Z = (double)fVar2 * dVar4;
  return;
}

// GetTriangle @ 14cb14df0

FIndex3i * __thiscall
FStaticMeshLODResourcesMeshAdapter::GetTriangle
          (FStaticMeshLODResourcesMeshAdapter *this,FIndex3i *__return_storage_ptr__,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FIndex3i *pFVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FIndexArrayView local_28;
  
  uVar8 = (this->TriangleOffsetArray).ArrayNum;
  iVar9 = 0;
  uVar7 = uVar8;
  iVar10 = 0;
  if (0 < (int)uVar8) {
    do {
      iVar1 = (uVar7 >> 1) + iVar10;
      iVar9 = iVar10;
      if (*(int *)((this->TriangleOffsetArray).AllocatorInstance.Data + (longlong)iVar1 * 4) <=
          param_1) {
        iVar9 = iVar1 + (uVar7 & 1);
      }
      uVar5 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
      iVar10 = iVar9;
    } while (uVar5 != 0);
  }
  uVar7 = iVar9 - 1;
  uVar5 = 0;
  if ((int)uVar7 < (int)uVar8) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FIndex3i *)(*pcVar2)();
    return pFVar4;
  }
  iVar10 = *(int *)((this->TriangleOffsetArray).AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
  uVar8 = 0;
  if ((int)uVar7 < (this->ValidSections).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FIndex3i *)(*pcVar2)();
    return pFVar4;
  }
  lVar6 = *(longlong *)((this->ValidSections).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
  FRawStaticIndexBuffer::GetArrayView(&this->Mesh->IndexBuffer,&local_28);
  lVar6 = (longlong)(*(int *)(lVar6 + 4) + (param_1 - iVar10) * 3);
  if (local_28.b32Bit == false) {
    uVar8 = (uint)*(ushort *)((longlong)local_28.UntypedIndexData + lVar6 * 2 + 4);
    uVar7 = (uint)*(ushort *)((longlong)local_28.UntypedIndexData + lVar6 * 2 + 2);
    uVar5 = (uint)*(ushort *)((longlong)local_28.UntypedIndexData + lVar6 * 2);
  }
  else {
    uVar8 = *(uint *)((longlong)local_28.UntypedIndexData + lVar6 * 4 + 8);
    uVar7 = *(uint *)((longlong)local_28.UntypedIndexData + lVar6 * 4 + 4);
    uVar5 = *(uint *)((longlong)local_28.UntypedIndexData + lVar6 * 4);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.A = uVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.B = uVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.C = uVar8;
  return __return_storage_ptr__;
}

// GetUV @ 14cb153a0

TVector2<float> __thiscall
FStaticMeshLODResourcesMeshAdapter::GetUV
          (FStaticMeshLODResourcesMeshAdapter *this,int param_1,int param_2)

{
  uchar *puVar1;
  ushort *puVar2;
  FStaticMeshLODResources *pFVar3;
  uchar *puVar4;
  FStaticMeshVertexDataInterface FVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  TVector2<float> TVar9;
  undefined4 in_register_00000014;
  TVector2<float>_u_0 TVar10;
  uint in_R9D;
  float fVar11;
  float fVar12;
  
  TVar10._s_0.Y = (float)in_register_00000014;
  TVar10._s_0.X = (float)param_1;
  pFVar3 = this->Mesh;
  puVar4 = (pFVar3->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
  FVar5 = *(pFVar3->VertexBuffers).StaticMeshVertexBuffer.TexcoordData;
  lVar8 = (ulonglong)(pFVar3->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
          (ulonglong)(uint)param_2 + (ulonglong)in_R9D;
  if ((pFVar3->VertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
    puVar2 = (ushort *)(puVar4 + lVar8 * 4);
    lVar8 = (**(code **)((longlong)FVar5 + 0x50))();
    if (puVar4 + lVar8 < puVar2 + 2) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x17b,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        TVar9.field0_0x0 = (TVector2<float>_u_0)(*pcVar6)();
        return (TVector2<float>)TVar9.field0_0x0;
      }
    }
    if (puVar2 < (pFVar3->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x17c,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        TVar9.field0_0x0 = (TVector2<float>_u_0)(*pcVar6)();
        return (TVector2<float>)TVar9.field0_0x0;
      }
    }
    fVar11 = FGenericPlatformMath::LoadHalf(puVar2 + 1);
    fVar12 = FGenericPlatformMath::LoadHalf(puVar2);
    *(float *)((longlong)TVar10 + 4) = fVar11;
    *(float *)TVar10 = fVar12;
  }
  else {
    puVar1 = puVar4 + lVar8 * 8;
    lVar8 = (**(code **)((longlong)FVar5 + 0x50))();
    if (puVar4 + lVar8 < puVar1 + 8) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x17b,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        TVar9.field0_0x0 = (TVector2<float>_u_0)(*pcVar6)();
        return (TVector2<float>)TVar9.field0_0x0;
      }
    }
    if (puVar1 < (pFVar3->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x17c,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        TVar9.field0_0x0 = (TVector2<float>_u_0)(*pcVar6)();
        return (TVector2<float>)TVar9.field0_0x0;
      }
    }
    *(undefined8 *)TVar10 = *(undefined8 *)puVar1;
  }
  return (TVector2<float>)TVar10;
}

// HasNormals @ 14cb1aa50

bool __thiscall
FStaticMeshLODResourcesMeshAdapter::HasNormals(FStaticMeshLODResourcesMeshAdapter *this)

{
  FStaticMeshLODResources *pFVar1;
  FStaticMeshVertexDataInterface *pFVar2;
  char cVar3;
  
  pFVar1 = this->Mesh;
  if (((pFVar1 != (FStaticMeshLODResources *)0x0) &&
      (pFVar2 = (pFVar1->VertexBuffers).StaticMeshVertexBuffer.TangentsData,
      pFVar2 != (FStaticMeshVertexDataInterface *)0x0)) &&
     ((pFVar1->VertexBuffers).StaticMeshVertexBuffer.TexcoordData !=
      (FStaticMeshVertexDataInterface *)0x0)) {
    cVar3 = (**(code **)((longlong)*pFVar2 + 0x58))();
    if (cVar3 != '\0') {
      cVar3 = (**(code **)((longlong)*(pFVar1->VertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                          0x58))();
      if ((cVar3 != '\0') &&
         ((this->Mesh->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr != (uchar *)0x0)) {
        return true;
      }
    }
  }
  return false;
}

// HasUVs @ 14cb1b100

bool __thiscall
FStaticMeshLODResourcesMeshAdapter::HasUVs(FStaticMeshLODResourcesMeshAdapter *this,int param_1)

{
  FStaticMeshLODResources *pFVar1;
  FStaticMeshVertexDataInterface *pFVar2;
  char cVar3;
  
  pFVar1 = this->Mesh;
  if (((pFVar1 != (FStaticMeshLODResources *)0x0) &&
      (pFVar2 = (pFVar1->VertexBuffers).StaticMeshVertexBuffer.TangentsData,
      pFVar2 != (FStaticMeshVertexDataInterface *)0x0)) &&
     ((pFVar1->VertexBuffers).StaticMeshVertexBuffer.TexcoordData !=
      (FStaticMeshVertexDataInterface *)0x0)) {
    cVar3 = (**(code **)((longlong)*pFVar2 + 0x58))();
    if (cVar3 != '\0') {
      cVar3 = (**(code **)((longlong)*(pFVar1->VertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                          0x58))();
      if (((cVar3 != '\0') &&
          ((this->Mesh->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr != (uchar *)0x0)) &&
         ((param_1 < (int)(this->Mesh->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords &&
          (-1 < param_1)))) {
        return true;
      }
    }
  }
  return false;
}

