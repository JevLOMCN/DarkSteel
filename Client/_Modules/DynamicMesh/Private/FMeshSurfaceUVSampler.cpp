// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 4

// Initialize @ 14c8fcca0

void __thiscall
UE::Geometry::FMeshSurfaceUVSampler::Initialize
          (FMeshSurfaceUVSampler *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          EMeshSurfaceSamplerQueryType param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  this->Mesh = param_1;
  this->UVOverlay = param_2;
  this->QueryType = param_3;
  if ((param_3 == UVOnly) && (this->bUVMeshSpatialInitialized == false)) {
    if (param_2 == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("UVOverlay",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshSurfaceSampler.cpp"
                         ,0x54,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (this->UVMeshAdapter).Mesh = this->Mesh;
    (this->UVMeshAdapter).UV = this->UVOverlay;
    (this->UVMeshSpatial).Mesh = &this->UVMeshAdapter;
    (this->UVMeshSpatial).MeshChangeStamp = 0;
    TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::BuildTopDown(&this->UVMeshSpatial,false);
    uVar3 = FDynamicMesh3::GetChangeStamp(((this->UVMeshSpatial).Mesh)->Mesh);
    (this->UVMeshSpatial).MeshChangeStamp = uVar3;
    this->bUVMeshSpatialInitialized = true;
  }
  return;
}

// InitializeUVMeshSpatial @ 14c8ff500

void __thiscall
UE::Geometry::FMeshSurfaceUVSampler::InitializeUVMeshSpatial(FMeshSurfaceUVSampler *this)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if (this->bUVMeshSpatialInitialized == false) {
    if (this->UVOverlay == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("UVOverlay",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshSurfaceSampler.cpp"
                         ,0x54,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (this->UVMeshAdapter).Mesh = this->Mesh;
    (this->UVMeshAdapter).UV = this->UVOverlay;
    (this->UVMeshSpatial).Mesh = &this->UVMeshAdapter;
    (this->UVMeshSpatial).MeshChangeStamp = 0;
    TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::BuildTopDown(&this->UVMeshSpatial,false);
    uVar3 = FDynamicMesh3::GetChangeStamp(((this->UVMeshSpatial).Mesh)->Mesh);
    (this->UVMeshSpatial).MeshChangeStamp = uVar3;
    this->bUVMeshSpatialInitialized = true;
  }
  return;
}

// QuerySampleInfo @ 14c910dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FMeshSurfaceUVSampler::QuerySampleInfo
          (FMeshSurfaceUVSampler *this,TVector2<double> *param_1,FMeshUVSampleInfo *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  undefined8 local_98;
  TVector<double>_u_0 local_90;
  undefined8 local_78 [2];
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (this->QueryType != UVOnly) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("QueryType == EMeshSurfaceSamplerQueryType::UVOnly",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshSurfaceSampler.cpp"
                       ,0x1f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (this->bUVMeshSpatialInitialized == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bUVMeshSpatialInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshSurfaceSampler.cpp"
                       ,0x20,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_a8 = (param_1->field0_0x0)._s_0.X;
  dStack_a0 = (param_1->field0_0x0)._s_0.Y;
  local_90._0_4_ =
       UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_ ^
       (uint)__xmm_80000000000000008000000000000000;
  local_90._4_4_ =
       UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_ ^
       __xmm_80000000000000008000000000000000._4_4_;
  local_90._8_4_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_ ^ _UNK_15066df78;
  local_90._12_4_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_ ^ _UNK_15066df7c;
  local_98 = __real_4059000000000000;
  local_90._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::ZAxisVector.field0_0x0._16_8_
                              >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_,
                        SUB84(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z,0) ^
                        (uint)__xmm_80000000000000008000000000000000);
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_90._s_0,__real_3e45798ee0000000);
  local_78[0] = __real_7fefffffffffffff;
  local_68 = 0;
  local_40 = (longlong *)0x0;
  local_38 = 0;
  uVar4 = (**(code **)((this->UVMeshSpatial)._padding_ + 0x40))
                    (&this->UVMeshSpatial,&local_a8,local_78);
  if (local_68 != 0) {
    plVar5 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar5 = local_40;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  uVar3 = (**(code **)(this->_padding_ + 0x10))(this,uVar4,param_1,param_2);
  return (bool)uVar3;
}

// QuerySampleInfo @ 14c910f30

bool __thiscall
UE::Geometry::FMeshSurfaceUVSampler::QuerySampleInfo
          (FMeshSurfaceUVSampler *this,int param_1,TVector2<double> *param_2,
          FMeshUVSampleInfo *param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  double *pdVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  FDynamicMesh3 *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  code *pcVar16;
  TVector2<double>_u_0 TVar17;
  TVector2<double> TVar18;
  TVector2<double> TVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  bool bVar27;
  undefined1 uVar28;
  TVector<double> *pTVar29;
  ulonglong uVar30;
  double dVar31;
  double dVar32;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  TVector<double> local_38;
  TVector<double> local_20;
  
  param_3->TriangleIndex = param_1;
  pFVar13 = this->Mesh;
  if (((param_1 < 0) ||
      ((int)((pFVar13->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (pFVar13->TriangleRefCounts).RefCounts.CurBlockUsed) <= param_1)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((pFVar13->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance
                                     .Data + (ulonglong)((uint)param_1 >> 9) * 8) +
                                  (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) {
    bVar27 = false;
  }
  else {
    if (*(int *)(*(longlong *)
                  (*(longlong *)&this->UVOverlay->field_0x78 +
                  (ulonglong)((uint)(param_1 * 3) >> 9) * 8) + (ulonglong)(param_1 * 3 & 0x1ff) * 4)
        < 0) {
      bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("UVOverlay->IsSetTriangle(SampleInfo.TriangleIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshSurfaceSampler.cpp"
                          ,0x32,L"");
      if (bVar27) {
        pcVar16 = (code *)swi(3);
        uVar28 = (*pcVar16)();
        return (bool)uVar28;
      }
    }
    uVar9 = param_3->TriangleIndex;
    uVar20 = uVar9 * 3;
    lVar14 = *(longlong *)
              ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8);
    *(undefined8 *)&(param_3->MeshVertices).field0_0x0 =
         *(undefined8 *)(lVar14 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
    uVar9 = *(uint *)(lVar14 + 8 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
    (param_3->MeshVertices).field0_0x0._s_0.C = uVar9;
    uVar10 = (param_3->MeshVertices).field0_0x0._s_0.B;
    uVar11 = (param_3->MeshVertices).field0_0x0._s_0.A;
    pFVar15 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
    uVar30 = (ulonglong)(uVar11 & 0x1ff);
    pdVar1 = (double *)(*(longlong *)(pFVar15 + (ulonglong)(uVar11 >> 9) * 8) + uVar30 * 0x18);
    dVar31 = pdVar1[1];
    puVar4 = (undefined4 *)
             (*(longlong *)(pFVar15 + (ulonglong)(uVar11 >> 9) * 8) + 0x10 + uVar30 * 0x18);
    uVar21 = *puVar4;
    uVar22 = puVar4[1];
    uVar30 = (ulonglong)(uVar10 & 0x1ff);
    puVar2 = (undefined8 *)(*(longlong *)(pFVar15 + (ulonglong)(uVar10 >> 9) * 8) + uVar30 * 0x18);
    uVar23 = *puVar2;
    uVar24 = puVar2[1];
    uVar8 = *(undefined8 *)
             (*(longlong *)(pFVar15 + (ulonglong)(uVar10 >> 9) * 8) + 0x10 + uVar30 * 0x18);
    local_70 = (undefined4)uVar23;
    uStack_6c = (undefined4)((ulonglong)uVar23 >> 0x20);
    pdVar3 = (double *)
             (*(longlong *)(pFVar15 + (ulonglong)(uVar9 >> 9) * 8) +
             (ulonglong)(uVar9 & 0x1ff) * 0x18);
    dVar25 = *pdVar3;
    dVar26 = pdVar3[1];
    dVar32 = *(double *)
              (*(longlong *)(pFVar15 + (ulonglong)(uVar9 >> 9) * 8) + 0x10 +
              (ulonglong)(uVar9 & 0x1ff) * 0x18);
    (param_3->Triangle3D).V[0].field0_0x0._s_0.X = *pdVar1;
    (param_3->Triangle3D).V[0].field0_0x0._s_0.Y = dVar31;
    uStack_68 = (undefined4)uVar24;
    uStack_64 = (undefined4)((ulonglong)uVar24 >> 0x20);
    *(undefined4 *)((longlong)&(param_3->Triangle3D).V[0].field0_0x0 + 0x10) = uVar21;
    *(undefined4 *)((longlong)&(param_3->Triangle3D).V[0].field0_0x0 + 0x14) = uVar22;
    *(undefined4 *)&(param_3->Triangle3D).V[1].field0_0x0 = local_70;
    *(undefined4 *)((longlong)&(param_3->Triangle3D).V[1].field0_0x0 + 4) = uStack_6c;
    *(undefined4 *)((longlong)&(param_3->Triangle3D).V[1].field0_0x0 + 8) = uStack_68;
    *(undefined4 *)((longlong)&(param_3->Triangle3D).V[1].field0_0x0 + 0xc) = uStack_64;
    *(int *)((longlong)&(param_3->Triangle3D).V[1].field0_0x0 + 0x10) = (int)uVar8;
    *(int *)((longlong)&(param_3->Triangle3D).V[1].field0_0x0 + 0x14) =
         (int)((ulonglong)uVar8 >> 0x20);
    (param_3->Triangle3D).V[2].field0_0x0._s_0.X = dVar25;
    (param_3->Triangle3D).V[2].field0_0x0._s_0.Y = dVar26;
    (param_3->Triangle3D).V[2].field0_0x0._s_0.Z = dVar32;
    lVar14 = *(longlong *)&this->UVOverlay->field_0x78;
    iVar12 = *(int *)(*(longlong *)(lVar14 + (ulonglong)(uVar20 + 1 >> 9) * 8) +
                     (ulonglong)(uVar20 + 1 & 0x1ff) * 4);
    uVar9 = *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar20 + 2 >> 9) * 8) +
                     (ulonglong)(uVar20 + 2 & 0x1ff) * 4);
    (param_3->UVVertices).field0_0x0._s_0.A =
         *(int *)(*(longlong *)(lVar14 + (ulonglong)(uVar20 >> 9) * 8) +
                 (ulonglong)(uVar20 & 0x1ff) * 4);
    (param_3->UVVertices).field0_0x0._s_0.B = iVar12;
    (param_3->UVVertices).field0_0x0._s_0.C = uVar9;
    lVar14 = *(longlong *)&this->UVOverlay->field_0x48;
    uVar10 = (param_3->UVVertices).field0_0x0._s_0.B;
    uVar11 = (param_3->UVVertices).field0_0x0._s_0.A;
    dVar32 = (double)*(float *)(*(longlong *)(lVar14 + (ulonglong)((uVar11 & 0x7fffffff) >> 8) * 8)
                               + (ulonglong)(uVar11 * 2 + 1 & 0x1ff) * 4);
    fVar5 = *(float *)(*(longlong *)(lVar14 + (ulonglong)((uVar10 & 0x7fffffff) >> 8) * 8) +
                      (ulonglong)(uVar10 * 2 & 0x1ff) * 4);
    dVar31 = (double)*(float *)(*(longlong *)(lVar14 + (ulonglong)((uVar10 & 0x7fffffff) >> 8) * 8)
                               + (ulonglong)(uVar10 * 2 + 1 & 0x1ff) * 4);
    fVar6 = *(float *)(*(longlong *)(lVar14 + (ulonglong)((uVar9 & 0x7fffffff) >> 8) * 8) +
                      (ulonglong)(uVar9 * 2 & 0x1ff) * 4);
    fVar7 = *(float *)(*(longlong *)(lVar14 + (ulonglong)((uVar9 & 0x7fffffff) >> 8) * 8) +
                      (ulonglong)(uVar9 * 2 + 1 & 0x1ff) * 4);
    TVar17._8_4_ = SUB84(dVar32,0);
    TVar17._s_0.X =
         (double)*(float *)(*(longlong *)(lVar14 + (ulonglong)((uVar11 & 0x7fffffff) >> 8) * 8) +
                           (ulonglong)(uVar11 * 2 & 0x1ff) * 4);
    TVar17._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
    (param_3->TriangleUV).V[0].field0_0x0 = TVar17;
    dVar32 = (double)fVar7;
    TVar18.field0_0x0._8_4_ = SUB84(dVar31,0);
    TVar18.field0_0x0._s_0.X = (double)fVar5;
    TVar18.field0_0x0._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    (param_3->TriangleUV).V[1].field0_0x0 = TVar18.field0_0x0;
    TVar19.field0_0x0._8_4_ = SUB84(dVar32,0);
    TVar19.field0_0x0._s_0.X = (double)fVar6;
    TVar19.field0_0x0._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
    (param_3->TriangleUV).V[2].field0_0x0 = TVar19.field0_0x0;
    pTVar29 = TTriangle2<double>::GetBarycentricCoords(&param_3->TriangleUV,&local_38,param_2);
    iVar12 = param_3->TriangleIndex;
    dVar32 = (pTVar29->field0_0x0)._s_0.Y;
    (param_3->BaryCoords).field0_0x0._s_0.X = (pTVar29->field0_0x0)._s_0.X;
    (param_3->BaryCoords).field0_0x0._s_0.Y = dVar32;
    (param_3->BaryCoords).field0_0x0._s_0.Z = (pTVar29->field0_0x0)._s_0.Z;
    pTVar29 = FDynamicMesh3::GetTriBaryPoint
                        (this->Mesh,&local_20,iVar12,(param_3->BaryCoords).field0_0x0._s_0.X,
                         (param_3->BaryCoords).field0_0x0._s_0.Y,
                         (param_3->BaryCoords).field0_0x0._s_0.Z);
    dVar32 = (pTVar29->field0_0x0)._s_0.Y;
    (param_3->SurfacePoint).field0_0x0._s_0.X = (pTVar29->field0_0x0)._s_0.X;
    (param_3->SurfacePoint).field0_0x0._s_0.Y = dVar32;
    bVar27 = true;
    (param_3->SurfacePoint).field0_0x0._s_0.Z = (pTVar29->field0_0x0)._s_0.Z;
  }
  return bVar27;
}

