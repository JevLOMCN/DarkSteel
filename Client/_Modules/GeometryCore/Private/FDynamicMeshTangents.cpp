// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 5

// FDynamicMeshTangents @ 143452670

FDynamicMeshTangents * __thiscall
UE::Geometry::FDynamicMeshTangents::FDynamicMeshTangents
          (FDynamicMeshTangents *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FDynamicMeshAttributeSet *pFVar6;
  FDynamicMeshTangents *pFVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  
  pFVar9 = (FDynamicMeshAttributeSet *)0x0;
  this->Mesh = param_1;
  this->Normals = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  this->Tangents = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  this->Bitangents = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  if (param_1 == (FDynamicMesh3 *)0x0) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9014265983476432882>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\MeshTangents.cpp"
                       ,0xe,"Mesh");
    if (!bVar5) {
      return this;
    }
  }
  else {
    pFVar8 = (param_1->AttributeSet).Ptr;
    if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
      if (((pFVar8->NormalLayers).Array.ArrayNum < 1) ||
         (pTVar2 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                    (pFVar8->NormalLayers).Array.AllocatorInstance.Data, this->Normals = pTVar2,
         pTVar2 == (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_9014265983476432879>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\MeshTangents.cpp"
                           ,0x11,"Normals");
        if (bVar5) goto code_r0x0001434527ec;
      }
      else {
        pFVar8 = (param_1->AttributeSet).Ptr;
        pFVar6 = pFVar9;
        if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar6 = pFVar8;
        }
        iVar1 = (pFVar6->NormalLayers).Array.ArrayNum;
        if ((((0 < iVar1) &&
             (pFVar3 = (pFVar6->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar3 != 0
             )) && (1 < iVar1)) &&
           (((*(longlong *)(pFVar3 + 8) != 0 && (2 < iVar1)) && (*(longlong *)(pFVar3 + 0x10) != 0))
           )) {
          pFVar6 = pFVar9;
          if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
            pFVar6 = pFVar8;
          }
          pFVar8 = pFVar9;
          if (1 < (pFVar6->NormalLayers).Array.ArrayNum) {
            pFVar8 = *(FDynamicMeshAttributeSet **)
                      ((pFVar6->NormalLayers).Array.AllocatorInstance.Data + 8);
          }
          this->Tangents = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar8;
          pFVar8 = (param_1->AttributeSet).Ptr;
          pFVar6 = pFVar9;
          if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
            pFVar6 = pFVar8;
          }
          if (2 < (pFVar6->NormalLayers).Array.ArrayNum) {
            pFVar9 = *(FDynamicMeshAttributeSet **)
                      ((pFVar6->NormalLayers).Array.AllocatorInstance.Data + 0x10);
          }
          this->Bitangents = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar9;
          return this;
        }
      }
      return this;
    }
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9014265983476432882>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\MeshTangents.cpp"
                       ,0xe,"Mesh->HasAttributes()");
    if (!bVar5) {
      return this;
    }
  }
code_r0x0001434527ec:
  pcVar4 = (code *)swi(3);
  pFVar7 = (FDynamicMeshTangents *)(*pcVar4)();
  return pFVar7;
}

// GetTangentFrame @ 1434c4a90

void __thiscall
UE::Geometry::FDynamicMeshTangents::GetTangentFrame
          (FDynamicMeshTangents *this,int param_1,int param_2,TVector<float> *param_3,
          TVector<float> *param_4,TVector<float> *param_5)

{
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  pTVar1 = this->Normals;
  if (pTVar1 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0) {
    uVar2 = param_1 * 3;
    if (-1 < *(int *)(*(longlong *)(*(longlong *)&pTVar1->field_0x78 + (ulonglong)(uVar2 >> 9) * 8)
                     + (ulonglong)(uVar2 & 0x1ff) * 4)) {
      uVar4 = (ulonglong)(uVar2 + param_2 & 0x1ff);
      uVar5 = (ulonglong)(uVar2 + param_2 >> 9);
      uVar3 = *(int *)(*(longlong *)(*(longlong *)&pTVar1->field_0x78 + uVar5 * 8) + uVar4 * 4) * 3;
      (param_3->field0_0x0)._s_0.X =
           *(float *)(*(longlong *)(*(longlong *)&pTVar1->field_0x48 + (ulonglong)(uVar3 >> 9) * 8)
                     + (ulonglong)(uVar3 & 0x1ff) * 4);
      (param_3->field0_0x0)._s_0.Y =
           *(float *)(*(longlong *)
                       (*(longlong *)&pTVar1->field_0x48 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                     (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
      (param_3->field0_0x0)._s_0.Z =
           *(float *)(*(longlong *)
                       (*(longlong *)&pTVar1->field_0x48 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
                     (ulonglong)(uVar3 + 2 & 0x1ff) * 4);
      pTVar1 = this->Tangents;
      if ((pTVar1 == (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0) ||
         (*(int *)(*(longlong *)(*(longlong *)&pTVar1->field_0x78 + (ulonglong)(uVar2 >> 9) * 8) +
                  (ulonglong)(uVar2 & 0x1ff) * 4) < 0)) {
        VectorUtil::MakePerpVectors<float>(param_3,param_4,param_5);
      }
      else {
        uVar2 = *(int *)(*(longlong *)(*(longlong *)&pTVar1->field_0x78 + uVar5 * 8) + uVar4 * 4) *
                3;
        (param_4->field0_0x0)._s_0.X =
             *(float *)(*(longlong *)
                         (*(longlong *)&pTVar1->field_0x48 + (ulonglong)(uVar2 >> 9) * 8) +
                       (ulonglong)(uVar2 & 0x1ff) * 4);
        (param_4->field0_0x0)._s_0.Y =
             *(float *)(*(longlong *)
                         (*(longlong *)&pTVar1->field_0x48 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                       (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
        (param_4->field0_0x0)._s_0.Z =
             *(float *)(*(longlong *)
                         (*(longlong *)&pTVar1->field_0x48 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                       (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
        TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::GetTriElement
                  (this->Bitangents,param_1,param_2,param_5);
      }
      return;
    }
  }
  *(undefined8 *)&param_3->field0_0x0 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
  (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  *(undefined8 *)&param_4->field0_0x0 = UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
  (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
  *(undefined8 *)&param_5->field0_0x0 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
  (param_5->field0_0x0)._s_0.Z = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  return;
}

// GetTangentVectors @ 1434c4c90

void __thiscall
UE::Geometry::FDynamicMeshTangents::GetTangentVectors
          (FDynamicMeshTangents *this,int param_1,int param_2,TVector<float> *param_3,
          TVector<float> *param_4)

{
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  pTVar1 = this->Tangents;
  if (pTVar1 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0) {
    uVar2 = param_1 * 3;
    if (-1 < *(int *)(*(longlong *)(*(longlong *)&pTVar1->field_0x78 + (ulonglong)(uVar2 >> 9) * 8)
                     + (ulonglong)(uVar2 & 0x1ff) * 4)) {
      uVar4 = (ulonglong)(uVar2 + param_2 & 0x1ff);
      uVar3 = (ulonglong)(uVar2 + param_2 >> 9);
      uVar2 = *(int *)(*(longlong *)(*(longlong *)&pTVar1->field_0x78 + uVar3 * 8) + uVar4 * 4) * 3;
      (param_3->field0_0x0)._s_0.X =
           *(float *)(*(longlong *)(*(longlong *)&pTVar1->field_0x48 + (ulonglong)(uVar2 >> 9) * 8)
                     + (ulonglong)(uVar2 & 0x1ff) * 4);
      (param_3->field0_0x0)._s_0.Y =
           *(float *)(*(longlong *)
                       (*(longlong *)&pTVar1->field_0x48 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                     (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
      (param_3->field0_0x0)._s_0.Z =
           *(float *)(*(longlong *)
                       (*(longlong *)&pTVar1->field_0x48 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                     (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
      pTVar1 = this->Bitangents;
      uVar2 = *(int *)(*(longlong *)(*(longlong *)&pTVar1->field_0x78 + uVar3 * 8) + uVar4 * 4) * 3;
      (param_4->field0_0x0)._s_0.X =
           *(float *)(*(longlong *)(*(longlong *)&pTVar1->field_0x48 + (ulonglong)(uVar2 >> 9) * 8)
                     + (ulonglong)(uVar2 & 0x1ff) * 4);
      (param_4->field0_0x0)._s_0.Y =
           *(float *)(*(longlong *)
                       (*(longlong *)&pTVar1->field_0x48 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                     (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
      (param_4->field0_0x0)._s_0.Z =
           *(float *)(*(longlong *)
                       (*(longlong *)&pTVar1->field_0x48 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                     (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
      return;
    }
  }
  *(undefined8 *)&param_3->field0_0x0 = UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
  (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
  *(undefined8 *)&param_4->field0_0x0 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
  (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  return;
}

// GetTangentVectors @ 1434c4e10

void __thiscall
UE::Geometry::FDynamicMeshTangents::GetTangentVectors
          (FDynamicMeshTangents *this,int param_1,int param_2,TVector<float> *param_3,
          TVector<float> *param_4,TVector<float> *param_5)

{
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  pTVar1 = this->Tangents;
  if (pTVar1 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0) {
    uVar2 = param_1 * 3;
    if (-1 < *(int *)(*(longlong *)(*(longlong *)&pTVar1->field_0x78 + (ulonglong)(uVar2 >> 9) * 8)
                     + (ulonglong)(uVar2 & 0x1ff) * 4)) {
      uVar3 = (ulonglong)(uVar2 + param_2 & 0x1ff);
      uVar4 = (ulonglong)(uVar2 + param_2 >> 9);
      uVar2 = *(int *)(*(longlong *)(*(longlong *)&pTVar1->field_0x78 + uVar4 * 8) + uVar3 * 4) * 3;
      (param_4->field0_0x0)._s_0.X =
           *(float *)(*(longlong *)(*(longlong *)&pTVar1->field_0x48 + (ulonglong)(uVar2 >> 9) * 8)
                     + (ulonglong)(uVar2 & 0x1ff) * 4);
      (param_4->field0_0x0)._s_0.Y =
           *(float *)(*(longlong *)
                       (*(longlong *)&pTVar1->field_0x48 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                     (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
      (param_4->field0_0x0)._s_0.Z =
           *(float *)(*(longlong *)
                       (*(longlong *)&pTVar1->field_0x48 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                     (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
      pTVar1 = this->Bitangents;
      uVar2 = *(int *)(*(longlong *)(*(longlong *)&pTVar1->field_0x78 + uVar4 * 8) + uVar3 * 4) * 3;
      (param_5->field0_0x0)._s_0.X =
           *(float *)(*(longlong *)(*(longlong *)&pTVar1->field_0x48 + (ulonglong)(uVar2 >> 9) * 8)
                     + (ulonglong)(uVar2 & 0x1ff) * 4);
      (param_5->field0_0x0)._s_0.Y =
           *(float *)(*(longlong *)
                       (*(longlong *)&pTVar1->field_0x48 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                     (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
      (param_5->field0_0x0)._s_0.Z =
           *(float *)(*(longlong *)
                       (*(longlong *)&pTVar1->field_0x48 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                     (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
      return;
    }
  }
  VectorUtil::MakePerpVectors<float>(param_3,param_4,param_5);
  return;
}

// HasValidTangents @ 1434ce970

bool __thiscall
UE::Geometry::FDynamicMeshTangents::HasValidTangents(FDynamicMeshTangents *this,bool param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  FDynamicMesh3 *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  uint uVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar13 = __real_38d1b717;
  pFVar8 = this->Mesh;
  if (((pFVar8 == (FDynamicMesh3 *)0x0) ||
      (this->Tangents == (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) ||
     (this->Bitangents == (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) {
LAB_1434cec67:
    bVar15 = false;
  }
  else {
    if (param_1) {
      uVar19 = (pFVar8->TriangleRefCounts).RefCounts.CurBlockUsed +
               (pFVar8->TriangleRefCounts).RefCounts.CurBlock * 0x200;
      uVar18 = 0;
      if ((uVar19 != 0) &&
         (pFVar9 = (pFVar8->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar18 = 0,
         0xfffd < (ushort)(**(short **)pFVar9 - 1U))) {
        uVar17 = 1;
        uVar18 = 1;
        if (1 < (int)uVar19) {
          do {
            lVar10 = *(longlong *)(pFVar9 + (ulonglong)(uVar17 >> 9) * 8);
            if ((*(short *)(lVar10 + (ulonglong)(uVar17 & 0x1ff) * 2) != 0) &&
               (uVar18 = uVar17, *(short *)(lVar10 + (ulonglong)(uVar17 & 0x1ff) * 2) != -1)) break;
            uVar17 = uVar17 + 1;
            uVar18 = uVar17;
          } while ((int)uVar17 < (int)uVar19);
        }
      }
joined_r0x0001434cea48:
      if (uVar18 != uVar19) {
        while( true ) {
          uVar17 = uVar18 * 3;
          if (*(int *)(*(longlong *)
                        (*(longlong *)&this->Tangents->field_0x78 + (ulonglong)(uVar17 >> 9) * 8) +
                      (ulonglong)(uVar17 & 0x1ff) * 4) < 0) goto LAB_1434cec67;
          do {
            lVar10 = *(longlong *)&this->Tangents->field_0x48;
            uVar12 = *(int *)(*(longlong *)
                               (*(longlong *)&this->Tangents->field_0x78 +
                               (ulonglong)(uVar17 >> 9) * 8) + (ulonglong)(uVar17 & 0x1ff) * 4) * 3;
            fVar1 = *(float *)(*(longlong *)(lVar10 + (ulonglong)(uVar12 >> 9) * 8) +
                              (ulonglong)(uVar12 & 0x1ff) * 4);
            fVar2 = *(float *)(*(longlong *)(lVar10 + (ulonglong)(uVar12 + 1 >> 9) * 8) +
                              (ulonglong)(uVar12 + 1 & 0x1ff) * 4);
            lVar11 = *(longlong *)&this->Bitangents->field_0x48;
            fVar3 = *(float *)(*(longlong *)(lVar10 + (ulonglong)(uVar12 + 2 >> 9) * 8) +
                              (ulonglong)(uVar12 + 2 & 0x1ff) * 4);
            uVar12 = *(int *)(*(longlong *)
                               (*(longlong *)&this->Bitangents->field_0x78 +
                               (ulonglong)(uVar17 >> 9) * 8) + (ulonglong)(uVar17 & 0x1ff) * 4) * 3;
            fVar4 = *(float *)(*(longlong *)(lVar11 + (ulonglong)(uVar12 >> 9) * 8) +
                              (ulonglong)(uVar12 & 0x1ff) * 4);
            fVar5 = *(float *)(*(longlong *)(lVar11 + (ulonglong)(uVar12 + 1 >> 9) * 8) +
                              (ulonglong)(uVar12 + 1 & 0x1ff) * 4);
            fVar6 = *(float *)(*(longlong *)(lVar11 + (ulonglong)(uVar12 + 2 >> 9) * 8) +
                              (ulonglong)(uVar12 + 2 & 0x1ff) * 4);
            if (((((((float)((uint)fVar1 & uVar14) <= fVar13) &&
                   ((float)((uint)fVar2 & uVar14) <= fVar13)) &&
                  ((float)((uint)fVar3 & uVar14) <= fVar13)) ||
                 ((iVar16 = _finite((double)fVar1), iVar16 == 0 ||
                  (iVar16 = _finite((double)fVar2), iVar16 == 0)))) ||
                (iVar16 = _finite((double)fVar3), iVar16 == 0)) ||
               (((((float)((uint)fVar4 & uVar14) <= fVar13 &&
                  ((float)((uint)fVar5 & uVar14) <= fVar13)) &&
                 ((float)((uint)fVar6 & uVar14) <= fVar13)) ||
                (((iVar16 = _finite((double)fVar4), iVar16 == 0 ||
                  (iVar16 = _finite((double)fVar5), iVar16 == 0)) ||
                 (iVar16 = _finite((double)fVar6), iVar16 == 0)))))) goto LAB_1434cec67;
            uVar17 = uVar17 + 1;
          } while ((int)(uVar18 * -3 + uVar17) < 2);
          uVar18 = uVar18 + 1;
          if ((int)uVar19 <= (int)uVar18) break;
          while ((sVar7 = *(short *)(*(longlong *)
                                      ((pFVar8->TriangleRefCounts).RefCounts.Blocks.
                                       AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8) +
                                    (ulonglong)(uVar18 & 0x1ff) * 2), sVar7 == 0 || (sVar7 == -1)))
          {
            uVar18 = uVar18 + 1;
            if ((int)uVar19 <= (int)uVar18) goto joined_r0x0001434cea48;
          }
        }
        goto joined_r0x0001434cea48;
      }
    }
    bVar15 = true;
  }
  return bVar15;
}

