// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 9

// GetInterpolatedNormal @ 14c9d2580

TVector<float> * __thiscall
UE::PlanarCut::FGeomMesh::GetInterpolatedNormal
          (FGeomMesh *this,TVector<float> *__return_storage_ptr__,int param_1,
          TVector<double> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  int iVar5;
  FGeometryCollection *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  TVector<float> *pTVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int local_78;
  int iStack_74;
  
  pFVar6 = this->Collection;
  uVar13 = 0;
  if (param_1 < *(int *)&(pFVar6->Indices).field_0x18) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pTVar10 = (TVector<float> *)(*pcVar8)();
      return pTVar10;
    }
  }
  lVar11 = *(longlong *)&(pFVar6->Indices).field_0x10;
  lVar4 = *(longlong *)(lVar11 + (longlong)param_1 * 0xc);
  iVar5 = *(int *)(lVar11 + 8 + (longlong)param_1 * 0xc);
  lVar14 = (longlong)iVar5;
  local_78 = (int)lVar4;
  lVar11 = (longlong)local_78;
  if (local_78 < 0 || (this->GlobalNormals).ArrayNum <= local_78) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pTVar10 = (TVector<float> *)(*pcVar8)();
      return pTVar10;
    }
  }
  pFVar7 = (this->GlobalNormals).AllocatorInstance.Data;
  iStack_74 = (int)((ulonglong)lVar4 >> 0x20);
  lVar12 = (longlong)iStack_74;
  fVar20 = (float)(param_2->field0_0x0)._s_0.X;
  fVar15 = *(float *)(pFVar7 + lVar11 * 0xc);
  fVar17 = *(float *)(pFVar7 + lVar11 * 0xc + 4);
  fVar1 = *(float *)(pFVar7 + lVar11 * 0xc + 8);
  if (lVar4 < 0 || (this->GlobalNormals).ArrayNum <= iStack_74) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pTVar10 = (TVector<float> *)(*pcVar8)();
      return pTVar10;
    }
  }
  pFVar7 = (this->GlobalNormals).AllocatorInstance.Data;
  fVar21 = (float)(param_2->field0_0x0)._s_0.Y;
  fVar18 = *(float *)(pFVar7 + lVar12 * 0xc);
  fVar2 = *(float *)(pFVar7 + lVar12 * 0xc + 4);
  fVar3 = *(float *)(pFVar7 + lVar12 * 0xc + 8);
  if (iVar5 < 0 || (this->GlobalNormals).ArrayNum <= iVar5) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pTVar10 = (TVector<float> *)(*pcVar8)();
      return pTVar10;
    }
  }
  pFVar7 = (this->GlobalNormals).AllocatorInstance.Data;
  fVar16 = (float)(param_2->field0_0x0)._s_0.Z;
  fVar19 = fVar16 * *(float *)(pFVar7 + lVar14 * 0xc) + fVar21 * fVar18 + fVar20 * fVar15;
  fVar18 = fVar16 * *(float *)(pFVar7 + lVar14 * 0xc + 4) + fVar21 * fVar2 + fVar20 * fVar17;
  fVar17 = fVar16 * *(float *)(pFVar7 + lVar14 * 0xc + 8) + fVar21 * fVar3 + fVar20 * fVar1;
  fVar15 = SQRT(fVar18 * fVar18 + fVar19 * fVar19 + fVar17 * fVar17);
  if (fVar15 <= 0.0) {
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
  }
  else {
    fVar15 = __real_3f800000 / fVar15;
    fVar17 = fVar17 * fVar15;
    fVar18 = fVar18 * fVar15;
    fVar19 = fVar19 * fVar15;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar19;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar18;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar17;
  return __return_storage_ptr__;
}

// GetTriVertices @ 14c9d2f00

void __thiscall
UE::PlanarCut::FGeomMesh::GetTriVertices
          (FGeomMesh *this,int param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  FGeometryCollection *pFVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  int local_28;
  int iStack_24;
  
  pFVar4 = this->Collection;
  uVar10 = 0;
  if (param_1 < *(int *)&(pFVar4->Indices).field_0x18) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar5 = *(longlong *)&(pFVar4->Indices).field_0x10;
  lVar2 = *(longlong *)(lVar5 + (longlong)param_1 * 0xc);
  iVar3 = *(int *)(lVar5 + 8 + (longlong)param_1 * 0xc);
  local_28 = (int)lVar2;
  if (local_28 < 0 || (this->GlobalVertices).ArrayNum <= local_28) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = (this->GlobalVertices).AllocatorInstance.Data;
  iStack_24 = (int)((ulonglong)lVar2 >> 0x20);
  pFVar1 = pFVar6 + (longlong)local_28 * 0x18;
  dVar8 = *(double *)(pFVar1 + 8);
  (param_2->field0_0x0)._s_0.X = *(double *)pFVar1;
  (param_2->field0_0x0)._s_0.Y = dVar8;
  (param_2->field0_0x0)._s_0.Z = *(double *)(pFVar6 + (longlong)local_28 * 0x18 + 0x10);
  if (lVar2 < 0 || (this->GlobalVertices).ArrayNum <= iStack_24) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = (this->GlobalVertices).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iStack_24 * 0x18;
  dVar8 = *(double *)(pFVar1 + 8);
  (param_3->field0_0x0)._s_0.X = *(double *)pFVar1;
  (param_3->field0_0x0)._s_0.Y = dVar8;
  (param_3->field0_0x0)._s_0.Z = *(double *)(pFVar6 + (longlong)iStack_24 * 0x18 + 0x10);
  if (iVar3 < 0 || (this->GlobalVertices).ArrayNum <= iVar3) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = (this->GlobalVertices).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar3 * 0x18;
  dVar8 = *(double *)(pFVar1 + 8);
  (param_4->field0_0x0)._s_0.X = *(double *)pFVar1;
  (param_4->field0_0x0)._s_0.Y = dVar8;
  (param_4->field0_0x0)._s_0.Z = *(double *)(pFVar6 + (longlong)iVar3 * 0x18 + 0x10);
  return;
}

// GetTriangle @ 14c9d3100

FIndex3i * __thiscall
UE::PlanarCut::FGeomMesh::GetTriangle(FGeomMesh *this,FIndex3i *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  FGeometryCollection *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FIndex3i *pFVar7;
  
  pFVar2 = this->Collection;
  uVar6 = 0;
  if (param_1 < *(int *)&(pFVar2->Indices).field_0x18) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FIndex3i *)(*pcVar4)();
      return pFVar7;
    }
  }
  lVar3 = *(longlong *)&(pFVar2->Indices).field_0x10;
  lVar1 = lVar3 + (longlong)param_1 * 0xc;
  (__return_storage_ptr__->field0_0x0)._s_0.A = *(int *)(lVar3 + (longlong)param_1 * 0xc);
  (__return_storage_ptr__->field0_0x0)._s_0.B = *(int *)(lVar1 + 4);
  (__return_storage_ptr__->field0_0x0)._s_0.C = *(int *)(lVar1 + 8);
  return __return_storage_ptr__;
}

// GetUV @ 14c9d32f0

TVector2<float> __thiscall UE::PlanarCut::FGeomMesh::GetUV(FGeomMesh *this,int param_1)

{
  TManagedArray<UE::Math::TVector2<float>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TVector2<float> TVar5;
  undefined4 in_register_00000014;
  TVector2<float>_u_0 TVar6;
  uint in_R8D;
  
  TVar6._s_0.Y = (float)in_register_00000014;
  TVar6._s_0.X = (float)param_1;
  pTVar1 = this->CollectionUVs;
  uVar4 = 0;
  if ((int)in_R8D < *(int *)&pTVar1->field_0x18) {
    uVar4 = ~in_R8D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar5.field0_0x0 = (TVector2<float>_u_0)(*pcVar2)();
      return (TVector2<float>)TVar5.field0_0x0;
    }
  }
  *(undefined8 *)TVar6 =
       *(undefined8 *)(*(longlong *)&pTVar1->field_0x10 + (longlong)(int)in_R8D * 8);
  return (TVector2<float>)TVar6;
}

// GetUVTriangle @ 14c9d3380

FIndex3i * __thiscall
UE::PlanarCut::FGeomMesh::GetUVTriangle
          (FGeomMesh *this,FIndex3i *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  FGeometryCollection *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FIndex3i *pFVar7;
  
  pFVar2 = this->Collection;
  uVar6 = 0;
  if (param_1 < *(int *)&(pFVar2->Indices).field_0x18) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FIndex3i *)(*pcVar4)();
      return pFVar7;
    }
  }
  lVar3 = *(longlong *)&(pFVar2->Indices).field_0x10;
  lVar1 = lVar3 + (longlong)param_1 * 0xc;
  (__return_storage_ptr__->field0_0x0)._s_0.A = *(int *)(lVar3 + (longlong)param_1 * 0xc);
  (__return_storage_ptr__->field0_0x0)._s_0.B = *(int *)(lVar1 + 4);
  (__return_storage_ptr__->field0_0x0)._s_0.C = *(int *)(lVar1 + 8);
  return __return_storage_ptr__;
}

// GetVertex @ 14c9d3470

TVector<double> * __thiscall
UE::PlanarCut::FGeomMesh::GetVertex
          (FGeomMesh *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  TVector<double> *pTVar8;
  
  uVar7 = 0;
  if (param_1 < (this->GlobalVertices).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pFVar3 = (this->GlobalVertices).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)param_1 * 0x18;
  dVar5 = *(double *)(pFVar1 + 8);
  dVar2 = *(double *)(pFVar3 + (longlong)param_1 * 0x18 + 0x10);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pFVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// InitVertices @ 14c9d4070

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::PlanarCut::FGeomMesh::InitVertices(FGeomMesh *this)

{
  FGeometryCollection *pFVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  double dVar40;
  undefined4 uVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  float fVar49;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_f8;
  undefined1 local_e8 [16];
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined1 local_a0 [16];
  double local_90;
  undefined1 local_88 [16];
  
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  GeometryCollectionAlgo::GlobalMatrices<UE::Math::TTransform<double>,UE::Math::TTransform<float>_>
            ((TManagedArray<UE::Math::TTransform<float>_> *)&this->Collection->_padding_,
             (TManagedArray<int> *)&this->Collection->_padding_,&local_f8);
  iVar8 = (**(code **)(*(longlong *)&this->Collection->Vertex + 0x60))();
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->GlobalVertices,iVar8,Default);
  iVar8 = (**(code **)(*(longlong *)&this->Collection->Vertex + 0x60))();
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->GlobalNormals,iVar8,Default);
  uVar11 = 0;
  if (0 < (this->GlobalVertices).ArrayNum) {
    lVar12 = 0;
    lVar14 = 0;
    lVar16 = 0;
    do {
      pFVar1 = this->Collection;
      uVar13 = ~uVar11 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar11 < *(int *)&(pFVar1->BoneMap).field_0x18) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar9 = *(uint *)(*(longlong *)&(pFVar1->BoneMap).field_0x10 + lVar12 * 4);
      uVar10 = 0;
      if ((int)uVar9 < local_f8.ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = this->Collection;
      pFVar15 = local_f8.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x60;
      uVar9 = 0;
      if ((int)uVar11 < *(int *)&(pFVar1->Normal).field_0x18) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      auVar30 = *(undefined1 (*) [16])(pFVar15 + 0x10);
      dVar22 = auVar30._0_8_;
      lVar2 = *(longlong *)&(pFVar1->Normal).field_0x10;
      dVar35 = *(double *)(pFVar15 + 0x18);
      local_d8 = (double)*(float *)(lVar16 + 8 + lVar2);
      uVar9 = 0;
      if ((int)uVar11 < (this->GlobalNormals).ArrayNum) {
        uVar9 = uVar13;
      }
      dVar25 = (double)*(float *)(lVar16 + 4 + lVar2);
      local_88 = *(undefined1 (*) [16])pFVar15;
      auVar27 = blendpd(local_88,auVar30,2);
      dVar4 = (double)*(float *)(lVar16 + lVar2);
      uVar41 = SUB84(dVar25,0);
      uVar43 = (undefined4)((ulonglong)dVar25 >> 0x20);
      auVar33 = *(undefined1 (*) [16])pFVar15;
      auVar45._8_4_ = uVar41;
      auVar45._0_8_ = dVar4;
      auVar45._12_4_ = uVar43;
      local_e8._8_4_ = uVar41;
      local_e8._0_8_ = dVar4;
      local_e8._12_4_ = uVar43;
      auVar46._0_8_ = auVar45._8_8_ * local_88._0_8_ - local_88._8_8_ * dVar4;
      auVar46._8_8_ = local_d8 * local_88._8_8_ - dVar22 * dVar25;
      auVar26._8_4_ = uVar41;
      auVar26._0_8_ = dVar4;
      auVar26._12_4_ = uVar43;
      auVar36._8_4_ = SUB84(auVar46._8_8_,0);
      auVar36._0_8_ = auVar46._0_8_;
      auVar36._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = local_d8;
      auVar17 = blendpd(auVar26,auVar17,2);
      auVar18._0_8_ = auVar17._0_8_ * dVar22 - auVar27._0_8_ * local_d8;
      auVar18._8_8_ = auVar17._8_8_ * auVar30._8_8_ - auVar27._8_8_ * 0.0;
      auVar17 = blendpd(auVar46,auVar18,2);
      dVar34 = auVar36._8_8_ + auVar36._8_8_;
      dVar40 = auVar18._0_8_ + auVar18._0_8_;
      auVar47._0_8_ = auVar17._0_8_ + auVar17._0_8_;
      auVar47._8_8_ = auVar17._8_8_ + auVar17._8_8_;
      auVar28._8_4_ = SUB84(dVar40,0);
      auVar28._0_8_ = dVar34;
      uVar41 = (undefined4)((ulonglong)dVar40 >> 0x20);
      auVar28._12_4_ = uVar41;
      auVar27._8_4_ = SUB84(dVar40,0);
      auVar27._0_8_ = dVar34;
      auVar27._12_4_ = uVar41;
      auVar17 = blendpd(auVar27,auVar47,2);
      auVar29._0_8_ = auVar28._8_8_ * auVar33._0_8_ - auVar33._8_8_ * dVar34;
      auVar29._8_8_ = auVar47._0_8_ * auVar33._8_8_ - dVar22 * dVar40;
      auVar26 = blendpd(auVar33,auVar30,2);
      auVar33._8_4_ = SUB84(auVar29._8_8_,0);
      auVar33._0_8_ = auVar29._0_8_;
      auVar33._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
      auVar23._0_8_ = auVar17._0_8_ * dVar22 - auVar26._0_8_ * auVar47._0_8_;
      auVar23._8_8_ = auVar17._8_8_ * auVar30._8_8_ - auVar26._8_8_ * auVar47._8_8_;
      local_d0 = dVar34 * dVar35 + dVar4 + auVar33._8_8_;
      dStack_c8 = dVar40 * dVar35 + dVar25 + auVar23._0_8_;
      auVar30 = blendpd(auVar29,auVar23,2);
      local_c0 = auVar47._0_8_ * dVar35 + local_d8 + auVar30._0_8_;
      fVar42 = (float)local_d0;
      fVar49 = (float)dStack_c8;
      fVar44 = (float)local_c0;
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar15 = (this->GlobalNormals).AllocatorInstance.Data;
      *(float *)(pFVar15 + lVar16) = fVar42;
      *(float *)(pFVar15 + lVar16 + 4) = fVar49;
      *(float *)(pFVar15 + lVar16 + 8) = fVar44;
      pFVar1 = this->Collection;
      uVar9 = 0;
      if ((int)uVar11 < *(int *)&(pFVar1->BoneMap).field_0x18) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar9 = *(uint *)(*(longlong *)&(pFVar1->BoneMap).field_0x10 + lVar12 * 4);
      uVar10 = 0;
      if ((int)uVar9 < local_f8.ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = this->Collection;
      pFVar15 = local_f8.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x60;
      uVar9 = 0;
      if ((int)uVar11 < *(int *)&(pFVar1->Vertex).field_0x18) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)&(pFVar1->Vertex).field_0x10;
      auVar30 = *(undefined1 (*) [16])pFVar15;
      dVar35 = *(double *)(pFVar15 + 0x18);
      local_b8 = (double)*(float *)(lVar16 + lVar2);
      uVar9 = 0;
      if ((int)uVar11 < (this->GlobalVertices).ArrayNum) {
        uVar9 = uVar13;
      }
      local_88 = *(undefined1 (*) [16])pFVar15;
      local_a8 = (double)*(float *)(lVar16 + 8 + lVar2);
      dStack_b0 = (double)*(float *)(lVar16 + 4 + lVar2);
      auVar33 = *(undefined1 (*) [16])(pFVar15 + 0x10);
      dVar34 = auVar33._0_8_;
      dVar22 = local_a8 * *(double *)(pFVar15 + 0x50);
      dVar4 = *(double *)(pFVar15 + 0x58) * 0.0;
      auVar26 = blendpd(local_88,auVar33,2);
      dVar40 = local_b8 * *(double *)(pFVar15 + 0x40);
      dVar48 = dStack_b0 * *(double *)(pFVar15 + 0x48);
      auVar37._8_4_ = SUB84(dVar48,0);
      auVar37._0_8_ = dVar40;
      uVar41 = (undefined4)((ulonglong)dVar48 >> 0x20);
      auVar37._12_4_ = uVar41;
      auVar38._0_8_ = auVar37._8_8_ * local_88._0_8_ - local_88._8_8_ * dVar40;
      auVar38._8_8_ = dVar22 * local_88._8_8_ - dVar34 * dVar48;
      auVar19._8_4_ = SUB84(dVar48,0);
      auVar19._0_8_ = dVar40;
      auVar19._12_4_ = uVar41;
      auVar5._8_4_ = SUB84(dVar4,0);
      auVar5._0_8_ = dVar22;
      auVar5._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      auVar17 = blendpd(auVar19,auVar5,2);
      auVar20._0_8_ = auVar17._0_8_ * dVar34 - auVar26._0_8_ * dVar22;
      auVar20._8_8_ = auVar17._8_8_ * auVar33._8_8_ - auVar26._8_8_ * dVar4;
      auVar17 = blendpd(auVar38,auVar20,2);
      dVar4 = auVar38._8_8_ + auVar38._8_8_;
      dVar25 = auVar20._0_8_ + auVar20._0_8_;
      uVar41 = (undefined4)((ulonglong)dVar25 >> 0x20);
      auVar39._0_8_ = auVar17._0_8_ + auVar17._0_8_;
      auVar39._8_8_ = auVar17._8_8_ + auVar17._8_8_;
      auVar31._8_4_ = SUB84(dVar25,0);
      auVar31._0_8_ = dVar4;
      auVar31._12_4_ = uVar41;
      auVar24._8_4_ = SUB84(dVar25,0);
      auVar24._0_8_ = dVar4;
      auVar24._12_4_ = uVar41;
      auVar17 = blendpd(auVar24,auVar39,2);
      auVar32._0_8_ = auVar31._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar4;
      auVar32._8_8_ = auVar39._0_8_ * auVar30._8_8_ - dVar34 * dVar25;
      auVar21._8_4_ = SUB84(auVar32._8_8_,0);
      auVar21._0_8_ = auVar32._0_8_;
      auVar21._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
      auVar26 = blendpd(auVar30,auVar33,2);
      auVar30._0_8_ = auVar17._0_8_ * dVar34 - auVar26._0_8_ * auVar39._0_8_;
      auVar30._8_8_ = auVar17._8_8_ * auVar33._8_8_ - auVar26._8_8_ * auVar39._8_8_;
      auVar33 = blendpd(auVar32,auVar30,2);
      dVar4 = dVar4 * dVar35 + dVar40 + auVar21._8_8_ + *(double *)(pFVar15 + 0x20);
      dVar25 = dVar25 * dVar35 + dVar48 + auVar30._0_8_ + *(double *)(pFVar15 + 0x28);
      uVar41 = SUB84(dVar25,0);
      uVar43 = (undefined4)((ulonglong)dVar25 >> 0x20);
      dVar35 = auVar39._0_8_ * dVar35 + dVar22 + auVar33._0_8_ + *(double *)(pFVar15 + 0x30);
      local_a0._8_4_ = uVar41;
      local_a0._0_8_ = dVar4;
      local_a0._12_4_ = uVar43;
      local_90 = dVar35;
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar15 = (this->GlobalVertices).AllocatorInstance.Data;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 1;
      lVar16 = lVar16 + 0xc;
      auVar6._8_4_ = uVar41;
      auVar6._0_8_ = dVar4;
      auVar6._12_4_ = uVar43;
      *(undefined1 (*) [16])(pFVar15 + lVar14) = auVar6;
      *(double *)(pFVar15 + lVar14 + 0x10) = dVar35;
      lVar14 = lVar14 + 0x18;
    } while ((int)uVar11 < (this->GlobalVertices).ArrayNum);
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return;
}

// SetUV @ 14c9e0b30

void __thiscall UE::PlanarCut::FGeomMesh::SetUV(FGeomMesh *this,int param_1,TVector2<float> param_2)

{
  TManagedArray<UE::Math::TVector2<float>_> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  
  pTVar1 = this->CollectionUVs;
  uVar5 = 0;
  if (param_1 < *(int *)&pTVar1->field_0x18) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)&pTVar1->field_0x10;
  local_res18 = param_2.field0_0x0._0_4_;
  uStackX_1c = param_2.field0_0x0._4_4_;
  *(undefined4 *)(lVar2 + (longlong)param_1 * 8) = local_res18;
  *(undefined4 *)(lVar2 + 4 + (longlong)param_1 * 8) = uStackX_1c;
  return;
}

// ValidateUVLayer @ 14c9f1be0

void __thiscall UE::PlanarCut::FGeomMesh::ValidateUVLayer(FGeomMesh *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar5;
  
  if (-1 < this->UVLayer) {
    iVar3 = FGeometryCollection::NumUVLayers(this->Collection);
    if (this->UVLayer < iVar3) goto LAB_14c9f1c6d;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3583510206845288702>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\FractureAutoUV.cpp"
                     ,0xfe,"UVLayer >= 0 && UVLayer < Collection->NumUVLayers()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = FGeometryCollection::NumUVLayers(this->Collection);
  iVar3 = iVar4 + -1;
  if (this->UVLayer < iVar4 + -1) {
    iVar3 = this->UVLayer;
  }
  iVar4 = 0;
  if (0 < iVar3) {
    iVar4 = iVar3;
  }
  this->UVLayer = iVar4;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector2<float>_>
                     ((FManagedArrayCollection *)this->Collection,
                      GeometryCollection::UV::UVLayerNames[iVar4],
                      GeometryCollection::UV::VerticesGroupName);
  this->CollectionUVs = pTVar5;
LAB_14c9f1c6d:
  if (this->CollectionUVs == (TManagedArray<UE::Math::TVector2<float>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CollectionUVs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\FractureAutoUV.cpp"
                       ,0x103,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

