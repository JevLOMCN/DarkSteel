// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// operator() @ 14c89e4d0

TVector<float> * __thiscall
`UE::Geometry::FMeshPropertyMapBaker::Bake'::__l2::<lambda_1>::operator()
          (void *this,TVector<float> *__return_storage_ptr__,FCorrespondenceSample *param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  FDynamicMesh3 *this_00;
  FDynamicMeshAttributeSet *pFVar4;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar5;
  TDynamicMeshOverlay<float,2> *this_01;
  double *pdVar6;
  double dVar7;
  TVector<float> *pTVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  TVector<float> local_98;
  double local_88;
  double local_80;
  TVector<double>_u_0 local_78;
  double local_60;
  double local_58;
  double local_50;
  TVector<double>_u_0 local_48 [2];
  
  uVar1 = param_1->DetailTriID;
  fVar2 = *(float *)(*(undefined8 **)this + 1);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = **(undefined8 **)this;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  fVar2 = __real_3f41c1c2;
  this_00 = (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8);
  if ((-1 < (int)uVar1) &&
     ((int)uVar1 <
      (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (this_00->TriangleRefCounts).RefCounts.CurBlockUsed))) {
    if ((ushort)(*(short *)(*(longlong *)
                             ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) <
        0xfffe) {
      iVar3 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x10);
      if (iVar3 == 1) {
        UE::Geometry::FDynamicMesh3::GetTriBaryPoint
                  (this_00,(TVector<double> *)&local_48[0]._s_0,uVar1,
                   (param_1->DetailBaryCoords).field0_0x0._s_0.X,
                   (param_1->DetailBaryCoords).field0_0x0._s_0.Y,
                   (param_1->DetailBaryCoords).field0_0x0._s_0.Z);
        pdVar6 = *(double **)((longlong)this + 0x18);
        dVar16 = pdVar6[1];
        dVar7 = pdVar6[2];
        dVar11 = pdVar6[4] - dVar16;
        dVar15 = pdVar6[5] - dVar7;
        dVar14 = pdVar6[3] - *pdVar6;
        if (dVar11 <= 0.0) {
          dVar11 = 0.0;
        }
        if (dVar15 <= 0.0) {
          dVar15 = 0.0;
        }
        if (dVar14 <= 0.0) {
          dVar14 = 0.0;
        }
        (__return_storage_ptr__->field0_0x0)._s_0.X =
             (float)(((double)local_48[0]._0_8_ - *pdVar6) / dVar14);
        (__return_storage_ptr__->field0_0x0)._s_0.Y =
             (float)(((double)local_48[0]._8_8_ - dVar16) / dVar11);
        (__return_storage_ptr__->field0_0x0)._s_0.Z =
             (float)(((double)local_48[0]._16_8_ - dVar7) / dVar15);
      }
      else if (iVar3 == 2) {
        if (-1 < *(int *)(*(longlong *)
                           ((((TDynamicMeshOverlay<float,3> *)
                             **(undefined8 **)((longlong)this + 0x20))->ElementTriangles).Blocks.
                            AllocatorInstance.Data + (ulonglong)(uVar1 * 3 >> 9) * 8) +
                         (ulonglong)(uVar1 * 3 & 0x1ff) * 4)) {
          UE::Geometry::TDynamicMeshOverlay<float,3>::GetTriBaryInterpolate<double>
                    ((TDynamicMeshOverlay<float,3> *)**(undefined8 **)((longlong)this + 0x20),uVar1,
                     (double *)&param_1->DetailBaryCoords,&local_60);
          auVar12._0_8_ = local_50 * local_50;
          auVar12._8_8_ = 0;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = local_60 * local_60 + local_58 * local_58 + auVar12._0_8_;
          auVar13 = sqrtpd(auVar12,auVar13);
          if (auVar13._0_8_ <= 0.0) {
            local_50 = 0.0;
            local_58 = 0.0;
            local_60 = 0.0;
          }
          else {
            dVar14 = __real_3ff0000000000000 / auVar13._0_8_;
            local_50 = local_50 * dVar14;
            local_58 = local_58 * dVar14;
            local_60 = local_60 * dVar14;
          }
          dVar16 = (local_58 + UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y) *
                   __real_3fe0000000000000;
          dVar14 = (local_50 + UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z) *
                   __real_3fe0000000000000;
          (__return_storage_ptr__->field0_0x0)._s_0.X =
               (float)((local_60 + UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X) *
                      __real_3fe0000000000000);
          (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)dVar16;
          (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)dVar14;
        }
      }
      else {
        if (iVar3 != 3) {
          if (iVar3 == 4) {
            this_01 = (TDynamicMeshOverlay<float,2> *)**(undefined8 **)((longlong)this + 0x28);
            if (this_01 == (TDynamicMeshOverlay<float,2> *)0x0) {
              return __return_storage_ptr__;
            }
            if (*(int *)(*(longlong *)
                          ((this_01->ElementTriangles).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar1 * 3 >> 9) * 8) + (ulonglong)(uVar1 * 3 & 0x1ff) * 4) < 0
               ) {
              return __return_storage_ptr__;
            }
            UE::Geometry::TDynamicMeshOverlay<float,2>::GetTriBaryInterpolate<double>
                      (this_01,uVar1,(double *)&param_1->DetailBaryCoords,&local_88);
            uVar9 = SUB84(local_88,0);
            uVar10 = (undefined4)((ulonglong)local_88 >> 0x20);
            if (0.0 <= local_88) {
              if (__real_3ff0000000000000 <= local_88) {
                uVar9 = SUB84(__real_3ff0000000000000,0);
                uVar10 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
              }
            }
            else {
              uVar9 = 0;
              uVar10 = 0;
            }
            dVar14 = 0.0;
            if ((0.0 <= local_80) && (dVar14 = local_80, __real_3ff0000000000000 <= local_80)) {
              dVar14 = __real_3ff0000000000000;
            }
            (__return_storage_ptr__->field0_0x0)._s_0.X = (float)(double)CONCAT44(uVar10,uVar9);
            (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)dVar14;
            (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
            return __return_storage_ptr__;
          }
          if (iVar3 == 5) {
            pFVar4 = (this_00->AttributeSet).Ptr;
            if ((pFVar4 != (FDynamicMeshAttributeSet *)0x0) &&
               (pTVar5 = (pFVar4->MaterialIDAttrib).Ptr,
               pTVar5 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0)) {
              pTVar8 = UE::Geometry::LinearColors::SelectColor<UE::Math::TVector<float>_>
                                 (&local_98,
                                  *(int *)(*(longlong *)
                                            (*(longlong *)&pTVar5->field_0x20 +
                                            (ulonglong)(uVar1 >> 9) * 8) +
                                          (ulonglong)(uVar1 & 0x1ff) * 4));
              fVar2 = (pTVar8->field0_0x0)._s_0.Z;
              *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
                   *(undefined8 *)&pTVar8->field0_0x0;
              (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
              return __return_storage_ptr__;
            }
            *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
                 CONCAT44(__real_3f36b6b7,__real_3f800000);
            (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
            return __return_storage_ptr__;
          }
        }
        UE::Geometry::FDynamicMesh3::GetTriNormal(this_00,(TVector<double> *)&local_78._s_0,uVar1);
        dVar14 = (local_78._s_0.Y + UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y) *
                 __real_3fe0000000000000;
        dVar16 = (local_78._s_0.Z + UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z) *
                 __real_3fe0000000000000;
        (__return_storage_ptr__->field0_0x0)._s_0.X =
             (float)((local_78._s_0.X + UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X) *
                    __real_3fe0000000000000);
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)dVar14;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)dVar16;
      }
    }
  }
  return __return_storage_ptr__;
}

// Bake @ 14c8bfa30

void __thiscall UE::Geometry::FMeshPropertyMapBaker::Bake(FMeshPropertyMapBaker *this)

{
  TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector<float>_>_>_>
  *pTVar1;
  long64 *plVar2;
  EMeshPropertyBakeType EVar3;
  float fVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  TImageBuilder<UE::Math::TVector<float>_> *pTVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  long64 lVar11;
  bool bVar12;
  uint uVar13;
  FDynamicMeshAttributeSet *pFVar14;
  FDynamicMeshAttributeSet *pFVar15;
  TVector<float> *pTVar16;
  longlong lVar17;
  FDynamicMeshAttributeSet *pFVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  FDynamicMesh3 *local_res8;
  longlong local_res10;
  FDynamicMeshAttributeSet *local_res18;
  float local_188;
  float local_184;
  float local_180;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  float **local_148;
  FMeshPropertyMapBaker *local_140;
  code *local_138;
  float ***local_130;
  longlong local_128;
  code **local_120;
  TArrayView<std::nullptr_t,int> local_118;
  code *local_108;
  longlong *local_100;
  double local_f8 [9];
  float *local_b0;
  FDynamicMesh3 **local_a8;
  FMeshPropertyMapBaker *local_a0;
  TVector<double>_u_0 *local_98;
  longlong *local_90;
  FDynamicMeshAttributeSet **local_88;
  undefined8 local_80 [9];
  
  lVar5 = this->_padding_;
  if ((lVar5 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("BakeCache",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshPropertyMapBaker.cpp"
                          ,0x20,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_res8 = *(FDynamicMesh3 **)(lVar5 + 0x30);
  if (((*(longlong *)(lVar5 + 0x30) == 0) ||
      (*(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x208) == 0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("DetailMesh && DetailMesh->HasAttributes()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshImageBakingCache.cpp"
                          ,0x53,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar18 = (FDynamicMeshAttributeSet *)0x0;
  pFVar14 = *(FDynamicMeshAttributeSet **)(*(longlong *)(lVar5 + 0x30) + 0x208);
  pFVar15 = pFVar18;
  if (pFVar14 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar15 = pFVar14;
  }
  if ((pFVar15->NormalLayers).Array.ArrayNum < 1) {
    local_res10 = 0;
LAB_14c8bfb0d:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("DetailNormalOverlay",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshPropertyMapBaker.cpp"
                        ,0x23,L"");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    local_res10 = *(longlong *)(pFVar15->NormalLayers).Array.AllocatorInstance.Data;
    if (local_res10 == 0) goto LAB_14c8bfb0d;
  }
  pFVar14 = (local_res8->AttributeSet).Ptr;
  pFVar15 = pFVar18;
  if (pFVar14 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar15 = pFVar14;
  }
  local_res18 = pFVar18;
  if (0 < (int)*(long64 *)&(pFVar15->UVLayers).Array.ArrayNum) {
    local_res18 = *(FDynamicMeshAttributeSet **)(pFVar15->UVLayers).Array.AllocatorInstance.Data;
  }
  FDynamicMesh3::GetBounds(local_res8,(TAxisAlignedBox3<double> *)&local_178._s_0,false);
  uVar23 = SUB84(local_160._s_0.Z,0);
  uVar24 = (undefined4)((ulonglong)local_160._16_8_ >> 0x20);
  uVar25 = SUB84(local_160._s_0.Y,0);
  uVar26 = (undefined4)((ulonglong)local_160._8_8_ >> 0x20);
  uVar27 = SUB84(local_160._s_0.X,0);
  uVar28 = (undefined4)((ulonglong)local_160._0_8_ >> 0x20);
  pFVar14 = pFVar18;
  uVar20 = local_178._s_0.Y;
  uVar19 = local_178._s_0.X;
  uVar22 = local_178._s_0.Z;
  do {
    local_f8[0] = (double)CONCAT44(uVar28,uVar27) - (double)uVar19;
    local_f8[1] = (double)CONCAT44(uVar26,uVar25) - (double)uVar20;
    local_f8[2] = (double)CONCAT44(uVar24,uVar23) - (double)uVar22;
    if (*(double *)((longlong)local_f8 + (longlong)pFVar14) <= __real_3eb0c6f7a0000000 &&
        __real_3eb0c6f7a0000000 != *(double *)((longlong)local_f8 + (longlong)pFVar14)) {
      local_f8[3] = ((double)uVar19 + (double)CONCAT44(uVar28,uVar27)) * __real_3fe0000000000000;
      local_f8[4] = ((double)uVar20 + (double)CONCAT44(uVar26,uVar25)) * __real_3fe0000000000000;
      local_f8[5] = ((double)uVar22 + (double)CONCAT44(uVar24,uVar23)) * __real_3fe0000000000000;
      *(double *)((longlong)&local_178 + (longlong)pFVar14) =
           *(double *)((longlong)&pFVar14->ParentMesh + (longlong)local_f8) -
           __real_3eb0c6f7a0000000;
      local_f8[6] = (local_178._s_0.X + local_160._s_0.X) * __real_3fe0000000000000;
      local_f8[7] = (local_178._s_0.Y + local_160._s_0.Y) * __real_3fe0000000000000;
      local_f8[8] = (local_178._s_0.Z + local_160._s_0.Z) * __real_3fe0000000000000;
      *(double *)((longlong)&local_160 + (longlong)pFVar14) =
           *(double *)
            ((longlong)&(pFVar14->NormalLayers).Array.AllocatorInstance.Data + (longlong)local_f8) +
           __real_3eb0c6f7a0000000;
      uVar23 = SUB84(local_160._s_0.Z,0);
      uVar24 = (undefined4)((ulonglong)local_160._16_8_ >> 0x20);
      uVar25 = SUB84(local_160._s_0.Y,0);
      uVar26 = (undefined4)((ulonglong)local_160._8_8_ >> 0x20);
      uVar27 = SUB84(local_160._s_0.X,0);
      uVar28 = (undefined4)((ulonglong)local_160._0_8_ >> 0x20);
      uVar20 = local_178._s_0.Y;
      uVar19 = local_178._s_0.X;
      uVar22 = local_178._s_0.Z;
    }
    pFVar14 = (FDynamicMeshAttributeSet *)&pFVar14->_padding_;
  } while ((longlong)pFVar14 < 0x18);
  EVar3 = this->Property;
  if (EVar3 == Position) {
    dVar9 = (double)CONCAT44(uVar26,uVar25) - (double)uVar20;
    dVar10 = (double)CONCAT44(uVar28,uVar27) - (double)uVar19;
    if (dVar10 <= 0.0) {
      dVar10 = 0.0;
    }
    if (dVar9 <= 0.0) {
      dVar9 = 0.0;
    }
    dVar21 = (double)CONCAT44(uVar24,uVar23) - (double)uVar22;
    uVar19 = (((double)uVar19 + (double)CONCAT44(uVar28,uVar27)) * __real_3fe0000000000000 -
             (double)uVar19) / dVar10;
    if (dVar21 <= 0.0) {
      dVar21 = 0.0;
    }
    uVar20 = (((double)uVar20 + (double)CONCAT44(uVar26,uVar25)) * __real_3fe0000000000000 -
             (double)uVar20) / dVar9;
    dVar21 = (((double)uVar22 + (double)CONCAT44(uVar24,uVar23)) * __real_3fe0000000000000 -
             (double)uVar22) / dVar21;
LAB_14c8bfde5:
    local_180 = (float)dVar21;
  }
  else {
    if (((EVar3 == Normal) || (EVar3 == FacetNormal)) || (EVar3 != UVPosition)) {
      uVar19 = (UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X +
               UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X) * __real_3fe0000000000000;
      uVar20 = (UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y +
               UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y) * __real_3fe0000000000000;
      dVar21 = (UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z +
               UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z) * __real_3fe0000000000000;
      goto LAB_14c8bfde5;
    }
    if (0.0 <= UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X) {
      uVar19 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
      if (__real_3ff0000000000000 <= UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X) {
        uVar19 = __real_3ff0000000000000;
      }
    }
    else {
      uVar19 = 0.0;
    }
    uVar20 = 0.0;
    if ((0.0 <= UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y) &&
       (uVar20 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y,
       __real_3ff0000000000000 <= UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y)) {
      uVar20 = __real_3ff0000000000000;
    }
    local_180 = 0.0;
  }
  local_184 = (float)(double)uVar20;
  local_188 = (float)(double)uVar19;
  local_b0 = &local_188;
  local_a8 = &local_res8;
  local_98 = &local_178;
  local_90 = &local_res10;
  local_88 = &local_res18;
  local_a0 = this;
  pFVar15 = ::operator_new(0x30);
  pFVar14 = pFVar18;
  if (pFVar15 != (FDynamicMeshAttributeSet *)0x0) {
    *(int *)&pFVar15->_padding_ = 0;
    *(int *)((longlong)&pFVar15->_padding_ + 4) = 0;
    (((TDenseGrid2<UE::Math::TVector<float>_> *)&pFVar15->_padding_)->Buffer).AllocatorInstance.Data
         = (FScriptContainerElement *)0x0;
    pFVar15->_padding_ = 0;
    pFVar15->ParentMesh = (FDynamicMesh3 *)0x0;
    (pFVar15->UVLayers).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(long64 *)&(pFVar15->UVLayers).Array.ArrayNum = 0;
    pFVar14 = pFVar15;
  }
  pTVar1 = &this->ResultBuilder;
  if (pTVar1 == (TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector<float>_>_>_>
                 *)local_80) {
    if (pFVar14 == (FDynamicMeshAttributeSet *)0x0) goto LAB_14c8bfea4;
    pFVar6 = (((TDenseGrid2<UE::Math::TVector<float>_> *)&pFVar14->_padding_)->Buffer).
             AllocatorInstance.Data;
    pFVar15 = pFVar14;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
  }
  else {
    pFVar15 = (FDynamicMeshAttributeSet *)pTVar1->Ptr;
    pTVar1->Ptr = (TImageBuilder<UE::Math::TVector<float>_> *)pFVar14;
    if (pFVar15 == (FDynamicMeshAttributeSet *)0x0) goto LAB_14c8bfea4;
    pFVar6 = (((TDenseGrid2<UE::Math::TVector<float>_> *)&pFVar15->_padding_)->Buffer).
             AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
  }
  ::operator_delete(pFVar15,0x30);
LAB_14c8bfea4:
  TImageBuilder<UE::Math::TVector<float>_>::SetDimensions
            (pTVar1->Ptr,*(FImageDimensions *)(lVar5 + 0x48));
  local_148 = &local_b0;
  local_130 = &local_148;
  local_138 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FMeshPropertyMapBaker::Bake'::__l2::<lambda_2>,void,UE::Geometry::FVector2i_const_&,UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample_const_&>
              ::Call;
  local_140 = this;
  if (((*(char *)(lVar5 + 0xa0) == '\0') || (*(char *)(lVar5 + 0x90) == '\0')) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsCacheValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshImageBakingCache.cpp"
                          ,0x17e,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_120 = &local_138;
  local_108 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FMeshImageBakingCache::EvaluateSamples'::__l2::<lambda_1>,void,int>
              ::Call;
  local_100 = &local_128;
  local_118.DataPtr = (void **)0x0;
  local_118.ArrayNum = 0;
  local_128 = lVar5;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",*(int *)(lVar5 + 0x4c),1,
             (TFunctionRef<void___cdecl(int)> *)&local_108,local_res8._0_1_,None,&local_118);
  if (((*(char *)(lVar5 + 0xa0) == '\0') || (*(char *)(lVar5 + 0x90) == '\0')) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsCacheValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshImageBakingCache.cpp"
                          ,0x66,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar5 = *(longlong *)(lVar5 + 0x98);
  lVar17 = *(longlong *)(lVar5 + 0xc0);
  pFVar14 = pFVar18;
  if (0 < lVar17) {
    do {
      uVar13 = 0;
      if ((longlong)pFVar18 < lVar17) {
        uVar13 = (uint)((ulonglong)pFVar18 >> 0x3f) ^ 1;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar7 = (this->ResultBuilder).Ptr;
      plVar2 = (long64 *)
               ((longlong)&((FImageDimensions *)&pFVar14->_padding_)->Width +
               *(longlong *)(lVar5 + 0xb8));
      lVar11 = *plVar2;
      pTVar16 = TDenseGrid2<UE::Math::TVector<float>_>::operator[](&pTVar7->Image,plVar2[1]);
      uVar20 = *(undefined8 *)&pTVar16->field0_0x0;
      fVar4 = (pTVar16->field0_0x0)._s_0.Z;
      pTVar16 = TDenseGrid2<UE::Math::TVector<float>_>::operator[](&pTVar7->Image,lVar11);
      pFVar18 = (FDynamicMeshAttributeSet *)
                ((longlong)&((FImageDimensions *)&pFVar18->_padding_)->Width + 1);
      *(undefined8 *)&pTVar16->field0_0x0 = uVar20;
      (pTVar16->field0_0x0)._s_0.Z = fVar4;
      lVar17 = *(longlong *)(lVar5 + 0xc0);
      pFVar14 = (FDynamicMeshAttributeSet *)&pFVar14->_padding_;
    } while ((longlong)pFVar18 < lVar17);
  }
  return;
}

