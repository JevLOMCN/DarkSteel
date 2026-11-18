// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 30

// FindNearestHitTriangle @ 14ca89870

void * __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::FindNearestHitTriangle
          (FMeshBakerDynamicMeshSampler *this,TRay<double> *param_1,double *param_2,int *param_3,
          TVector<double> *param_4,FQueryOptions *param_5)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->DetailSpatial->_padding_ + 0x30))();
  if (cVar1 != '\0') {
    return this->DetailMesh;
  }
  return (void *)0x0;
}

// FindNearestTriangle @ 14ca898d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::FindNearestTriangle
          (FMeshBakerDynamicMeshSampler *this,TVector<double> *param_1,double *param_2,int *param_3,
          TVector<double> *param_4,FQueryOptions *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  FDynamicMesh3 *this_00;
  undefined1 auStackY_168 [32];
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 TStack_100;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_c8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar4 = (**(code **)(this->DetailSpatial->_padding_ + 0x20))
                    (this->DetailSpatial,param_1,param_2,param_5);
  *param_3 = uVar4;
  this_00 = this->DetailMesh;
  if (((-1 < (int)uVar4) &&
      ((int)uVar4 <
       (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (this_00->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 2) - 1U) <
      0xfffe)) {
    dVar2 = (param_1->field0_0x0)._s_0.X;
    dVar3 = (param_1->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
              (this_00,uVar4,(TVector<double> *)&local_118._s_0,(TVector<double> *)&TStack_100._s_0,
               (TVector<double> *)&local_e8._s_0);
    local_b0 = local_118._s_0.X;
    dStack_a8 = local_118._s_0.Y;
    local_90 = TStack_100._s_0.Y;
    dStack_88 = TStack_100._s_0.Z;
    local_a0 = local_118._s_0.Z;
    dStack_98 = TStack_100._s_0.X;
    local_70 = local_e8._s_0.Z;
    local_80 = local_e8._s_0.X;
    dStack_78 = local_e8._s_0.Y;
    local_c8._s_0.X = dVar2;
    local_c8._s_0.Y = dVar3;
    local_c8._s_0.Z = dVar1;
    TDistPoint3Triangle3<double>::ComputeResult((TDistPoint3Triangle3<double> *)&local_c8._s_0);
    (param_4->field0_0x0)._s_0.X = local_68;
    (param_4->field0_0x0)._s_0.Y = dStack_60;
    (param_4->field0_0x0)._s_0.Z = local_58;
    this_00 = this->DetailMesh;
  }
  return this_00;
}

// GetBounds @ 14ca8e2c0

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::GetBounds
          (FMeshBakerDynamicMeshSampler *this,TAxisAlignedBox3<double> *__return_storage_ptr__)

{
  FDynamicMesh3::GetBounds(this->DetailMesh,__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// GetCurvature @ 14ca8e7d0

void __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::GetCurvature
          (FMeshBakerDynamicMeshSampler *this,void *param_1,FMeshVertexCurvatureCache *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  FMeshVertexCurvatureCache::BuildAll(param_2,param_1);
  if ((param_2->Curvatures).ArrayNum !=
      (this->DetailMesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
      (this->DetailMesh->VertexRefCounts).RefCounts.CurBlockUsed) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2241748812823526797>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Sampling\\MeshBakerCommon.h"
                       ,0x273,"CurvatureCache.Num() == DetailMesh->MaxVertexID()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetMaterialID @ 14ca904e0

int __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::GetMaterialID
          (FMeshBakerDynamicMeshSampler *this,void *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(longlong *)((longlong)param_1 + 0x208) != 0) {
    lVar1 = *(longlong *)((longlong)param_1 + 0x208);
  }
  if (*(longlong *)(lVar1 + 0x48) != 0) {
    return *(int *)(*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar1 + 0x48) + 0x20) +
                     (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
  }
  return -1;
}

// GetNormalTextureMap @ 14ca90860

TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>
* __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::GetNormalTextureMap
          (FMeshBakerDynamicMeshSampler *this,void *param_1)

{
  return &this->DetailNormalTextureMap;
}

// GetPolyGroupID @ 14ca90af0

int __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::GetPolyGroupID
          (FMeshBakerDynamicMeshSampler *this,void *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FDynamicMesh3::GetTriangleGroup(param_1,param_2);
  return iVar1;
}

// GetTextureMap @ 14ca937b0

TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int> * __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::GetTextureMap
          (FMeshBakerDynamicMeshSampler *this,void *param_1)

{
  return &this->DetailTextureMap;
}

// GetTriNormal @ 14ca93d10

TVector<double> * __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::GetTriNormal
          (FMeshBakerDynamicMeshSampler *this,TVector<double> *__return_storage_ptr__,void *param_1,
          int param_2)

{
  FDynamicMesh3::GetTriNormal(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// GetTriUVs @ 14ca93d40

bool __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::GetTriUVs
          (FMeshBakerDynamicMeshSampler *this,void *param_1,int param_2,int param_3,
          TVector2<float> *param_4,TVector2<float> *param_5,TVector2<float> *param_6)

{
  uint uVar1;
  uint uVar2;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar3;
  
  if (*(FDynamicMeshAttributeSet **)((longlong)param_1 + 0x208) != (FDynamicMeshAttributeSet *)0x0)
  {
    pTVar3 = FDynamicMeshAttributeSet::GetUVLayer
                       (*(FDynamicMeshAttributeSet **)((longlong)param_1 + 0x208),param_3);
    if (pTVar3 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
      uVar2 = param_2 * 3;
      uVar1 = *(uint *)(*(longlong *)
                         (*(longlong *)&pTVar3->field_0x78 + (ulonglong)(uVar2 >> 9) * 8) +
                       (ulonglong)(uVar2 & 0x1ff) * 4);
      if (-1 < (int)uVar1) {
        (param_4->field0_0x0)._s_0.X =
             *(float *)(*(longlong *)
                         (*(longlong *)&pTVar3->field_0x48 +
                         (ulonglong)((uVar1 & 0x7fffffff) >> 8) * 8) +
                       (ulonglong)(uVar1 * 2 & 0x1ff) * 4);
        (param_4->field0_0x0)._s_0.Y =
             *(float *)(*(longlong *)
                         (*(longlong *)&pTVar3->field_0x48 +
                         (ulonglong)((uVar1 & 0x7fffffff) >> 8) * 8) +
                       (ulonglong)(uVar1 * 2 + 1 & 0x1ff) * 4);
        uVar1 = *(uint *)(*(longlong *)
                           (*(longlong *)&pTVar3->field_0x78 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                         (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
        (param_5->field0_0x0)._s_0.X =
             *(float *)(*(longlong *)
                         (*(longlong *)&pTVar3->field_0x48 +
                         (ulonglong)((uVar1 & 0x7fffffff) >> 8) * 8) +
                       (ulonglong)(uVar1 * 2 & 0x1ff) * 4);
        (param_5->field0_0x0)._s_0.Y =
             *(float *)(*(longlong *)
                         (*(longlong *)&pTVar3->field_0x48 +
                         (ulonglong)((uVar1 & 0x7fffffff) >> 8) * 8) +
                       (ulonglong)(uVar1 * 2 + 1 & 0x1ff) * 4);
        uVar1 = *(uint *)(*(longlong *)
                           (*(longlong *)&pTVar3->field_0x78 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                         (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
        (param_6->field0_0x0)._s_0.X =
             *(float *)(*(longlong *)
                         (*(longlong *)&pTVar3->field_0x48 +
                         (ulonglong)((uVar1 & 0x7fffffff) >> 8) * 8) +
                       (ulonglong)(uVar1 * 2 & 0x1ff) * 4);
        (param_6->field0_0x0)._s_0.Y =
             *(float *)(*(longlong *)
                         (*(longlong *)&pTVar3->field_0x48 +
                         (ulonglong)((uVar1 & 0x7fffffff) >> 8) * 8) +
                       (ulonglong)(uVar1 * 2 + 1 & 0x1ff) * 4);
        return true;
      }
    }
  }
  return false;
}

// GetTriangle @ 14ca93ec0

FIndex3i * __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::GetTriangle
          (FMeshBakerDynamicMeshSampler *this,FIndex3i *__return_storage_ptr__,void *param_1,
          int param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)param_1 + 0x130) + (ulonglong)((uint)param_2 >> 9) * 8);
  iVar1 = *(int *)(lVar2 + 8 + (ulonglong)(param_2 & 0x1ff) * 0xc);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)(lVar2 + (ulonglong)(param_2 & 0x1ff) * 0xc);
  (__return_storage_ptr__->field0_0x0)._s_0.C = iVar1;
  return __return_storage_ptr__;
}

// GetTriangleCount @ 14ca93fb0

int __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::GetTriangleCount
          (FMeshBakerDynamicMeshSampler *this,void *param_1)

{
  return *(int *)((longlong)param_1 + 0x170);
}

// HasColors @ 14ca94b60

bool __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::HasColors
          (FMeshBakerDynamicMeshSampler *this,void *param_1)

{
  if (((param_1 != (void *)0x0) && (*(longlong *)((longlong)param_1 + 0x208) != 0)) &&
     (*(longlong *)(*(longlong *)((longlong)param_1 + 0x208) + 0x40) != 0)) {
    return true;
  }
  return false;
}

// HasNormals @ 14ca94d00

bool __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::HasNormals
          (FMeshBakerDynamicMeshSampler *this,void *param_1)

{
  longlong lVar1;
  
  if ((((param_1 != (void *)0x0) && (lVar1 = *(longlong *)((longlong)param_1 + 0x208), lVar1 != 0))
      && (0 < *(int *)(lVar1 + 0x38))) && (**(longlong **)(lVar1 + 0x30) != 0)) {
    return true;
  }
  return false;
}

// HasTangents @ 14ca94f40

bool __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::HasTangents
          (FMeshBakerDynamicMeshSampler *this,void *param_1)

{
  return this->DetailTangents != (TMeshTangents<double> *)0x0;
}

// HasUVs @ 14ca94f50

bool __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::HasUVs
          (FMeshBakerDynamicMeshSampler *this,void *param_1,int param_2)

{
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar1;
  
  if ((param_1 != (void *)0x0) &&
     (*(FDynamicMeshAttributeSet **)((longlong)param_1 + 0x208) != (FDynamicMeshAttributeSet *)0x0))
  {
    pTVar1 = FDynamicMeshAttributeSet::GetUVLayer
                       (*(FDynamicMeshAttributeSet **)((longlong)param_1 + 0x208),param_2);
    if (pTVar1 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
      return true;
    }
  }
  return false;
}

// IsTriangle @ 14ca97910

bool __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::IsTriangle
          (FMeshBakerDynamicMeshSampler *this,void *param_1,int param_2)

{
  if (((-1 < param_2) &&
      (param_2 < *(int *)((longlong)param_1 + 0x140) * 0x200 + *(int *)((longlong)param_1 + 0x144)))
     && ((ushort)(*(short *)(*(longlong *)
                              (*(longlong *)((longlong)param_1 + 0x148) +
                              (ulonglong)((uint)param_2 >> 9) * 8) +
                            (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// ProcessMeshes @ 14ca9f1d0

void __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::ProcessMeshes
          (FMeshBakerDynamicMeshSampler *this,TFunctionRef<void___cdecl(void_const_*)> *param_1)

{
  FDynamicMesh3 *local_res8 [4];
  
  local_res8[0] = this->DetailMesh;
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res8);
  return;
}

// SetNormalTextureMap @ 14caa3f60

void __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::SetNormalTextureMap
          (FMeshBakerDynamicMeshSampler *this,void *param_1,
          TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&this->DetailNormalTextureMap = *(undefined8 *)param_2;
  *(undefined8 *)&(this->DetailNormalTextureMap).field_0x8 = uVar1;
  return;
}

// SetTangents @ 14caa42e0

void __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::SetTangents
          (FMeshBakerDynamicMeshSampler *this,void *param_1,TMeshTangents<double> *param_2)

{
  this->DetailTangents = param_2;
  return;
}

// SetTextureMap @ 14caa43a0

void __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::SetTextureMap
          (FMeshBakerDynamicMeshSampler *this,void *param_1,
          TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int> *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&this->DetailTextureMap = *(undefined8 *)param_2;
  *(undefined8 *)&(this->DetailTextureMap).field_0x8 = uVar1;
  return;
}

// SupportsIdentityCorrespondence @ 14caa7390

bool __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::SupportsIdentityCorrespondence
          (FMeshBakerDynamicMeshSampler *this)

{
  return true;
}

// SupportsNearestPointCorrespondence @ 14caa73a0

bool __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::SupportsNearestPointCorrespondence
          (FMeshBakerDynamicMeshSampler *this)

{
  return true;
}

// SupportsRaycastCorrespondence @ 14caa73b0

bool __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::SupportsRaycastCorrespondence
          (FMeshBakerDynamicMeshSampler *this)

{
  return true;
}

// TestAnyHitTriangle @ 14caa73c0

bool __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::TestAnyHitTriangle
          (FMeshBakerDynamicMeshSampler *this,TRay<double> *param_1,FQueryOptions *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014caa73c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->DetailSpatial->_padding_ + 0x68))();
  return (bool)uVar1;
}

// TriBaryInterpolateColor @ 14caa7450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::TriBaryInterpolateColor
          (FMeshBakerDynamicMeshSampler *this,void *param_1,int param_2,TVector<double> *param_3,
          TVector4<float> *param_4)

{
  TDynamicMeshOverlay<float,4> *this_00;
  longlong lVar1;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  lVar1 = 0;
  if (*(longlong *)((longlong)param_1 + 0x208) != 0) {
    lVar1 = *(longlong *)((longlong)param_1 + 0x208);
  }
  this_00 = *(TDynamicMeshOverlay<float,4> **)(lVar1 + 0x40);
  if ((this_00 != (TDynamicMeshOverlay<float,4> *)0x0) &&
     (-1 < *(int *)(*(longlong *)
                     ((this_00->ElementTriangles).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)(param_2 * 3) >> 9) * 8) +
                   (ulonglong)(param_2 * 3 & 0x1ff) * 4))) {
    local_18 = ___xmm_3ff00000000000000000000000000000;
    dStack_10 = _UNK_15061cbc8;
    local_28 = 0.0;
    dStack_20 = 0.0;
    TDynamicMeshOverlay<float,4>::GetTriBaryInterpolate<double>
              (this_00,param_2,(double *)param_3,&local_28);
    (param_4->field0_0x0)._s_0.X = (float)local_28;
    (param_4->field0_0x0)._s_0.Y = (float)dStack_20;
    (param_4->field0_0x0)._s_0.Z = (float)local_18;
    (param_4->field0_0x0)._s_0.W = (float)dStack_10;
    return true;
  }
  return false;
}

// TriBaryInterpolateNormal @ 14caa7530

bool __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::TriBaryInterpolateNormal
          (FMeshBakerDynamicMeshSampler *this,void *param_1,int param_2,TVector<double> *param_3,
          TVector<float> *param_4)

{
  TDynamicMeshOverlay<float,3> *this_00;
  longlong lVar1;
  double local_28;
  double local_20;
  double local_18;
  
  lVar1 = 0;
  if (*(longlong *)((longlong)param_1 + 0x208) != 0) {
    lVar1 = *(longlong *)((longlong)param_1 + 0x208);
  }
  if (((0 < *(int *)(lVar1 + 0x38)) &&
      (this_00 = (TDynamicMeshOverlay<float,3> *)**(undefined8 **)(lVar1 + 0x30),
      this_00 != (TDynamicMeshOverlay<float,3> *)0x0)) &&
     (-1 < *(int *)(*(longlong *)
                     ((this_00->ElementTriangles).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)(param_2 * 3) >> 9) * 8) +
                   (ulonglong)(param_2 * 3 & 0x1ff) * 4))) {
    TDynamicMeshOverlay<float,3>::GetTriBaryInterpolate<double>
              (this_00,param_2,(double *)param_3,&local_28);
    (param_4->field0_0x0)._s_0.X = (float)local_28;
    (param_4->field0_0x0)._s_0.Y = (float)local_20;
    (param_4->field0_0x0)._s_0.Z = (float)local_18;
    return true;
  }
  return false;
}

// TriBaryInterpolatePoint @ 14caa75e0

TVector<double> * __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::TriBaryInterpolatePoint
          (FMeshBakerDynamicMeshSampler *this,TVector<double> *__return_storage_ptr__,void *param_1,
          int param_2,TVector<double> *param_3)

{
  FDynamicMesh3::GetTriBaryPoint
            (param_1,__return_storage_ptr__,param_2,(param_3->field0_0x0)._s_0.X,
             (param_3->field0_0x0)._s_0.Y,(param_3->field0_0x0)._s_0.Z);
  return __return_storage_ptr__;
}

// TriBaryInterpolateTangents @ 14caa7620

bool __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::TriBaryInterpolateTangents
          (FMeshBakerDynamicMeshSampler *this,void *param_1,int param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5)

{
  if (this->DetailTangents != (TMeshTangents<double> *)0x0) {
    TMeshTangents<double>::GetInterpolatedTriangleTangent
              (this->DetailTangents,param_2,param_3,param_4,param_5);
    return true;
  }
  return false;
}

// TriBaryInterpolateUV @ 14caa7670

bool __thiscall
UE::Geometry::FMeshBakerDynamicMeshSampler::TriBaryInterpolateUV
          (FMeshBakerDynamicMeshSampler *this,void *param_1,int param_2,TVector<double> *param_3,
          int param_4,TVector2<float> *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  TVector2<float>_u_0 TVar6;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar7;
  FDynamicMeshAttributeSet *this_00;
  
  this_00 = (FDynamicMeshAttributeSet *)0x0;
  if (*(FDynamicMeshAttributeSet **)((longlong)param_1 + 0x208) != (FDynamicMeshAttributeSet *)0x0)
  {
    this_00 = *(FDynamicMeshAttributeSet **)((longlong)param_1 + 0x208);
  }
  pTVar7 = FDynamicMeshAttributeSet::GetUVLayer(this_00,param_4);
  if (pTVar7 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
    lVar4 = *(longlong *)&pTVar7->field_0x78;
    uVar3 = param_2 * 3;
    uVar1 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8) +
                     (ulonglong)(uVar3 & 0x1ff) * 4);
    if (-1 < (int)uVar1) {
      lVar5 = *(longlong *)&pTVar7->field_0x48;
      uVar2 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                       (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
      uVar3 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
                       (ulonglong)(uVar3 + 2 & 0x1ff) * 4);
      TVar6._s_0.Y = (float)((double)*(float *)(*(longlong *)
                                                 (lVar5 + (ulonglong)((uVar1 & 0x7fffffff) >> 8) * 8
                                                 ) + (ulonglong)(uVar1 * 2 + 1 & 0x1ff) * 4) *
                             (param_3->field0_0x0)._s_0.X +
                             (double)*(float *)(*(longlong *)
                                                 (lVar5 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8
                                                 ) + (ulonglong)(uVar2 * 2 + 1 & 0x1ff) * 4) *
                             (param_3->field0_0x0)._s_0.Y +
                            (double)*(float *)(*(longlong *)
                                                (lVar5 + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8)
                                              + (ulonglong)(uVar3 * 2 + 1 & 0x1ff) * 4) *
                            (param_3->field0_0x0)._s_0.Z);
      TVar6._s_0.X = (float)((double)*(float *)(*(longlong *)
                                                 (lVar5 + (ulonglong)((uVar1 & 0x7fffffff) >> 8) * 8
                                                 ) + (ulonglong)(uVar1 * 2 & 0x1ff) * 4) *
                             (param_3->field0_0x0)._s_0.X +
                             (double)*(float *)(*(longlong *)
                                                 (lVar5 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8
                                                 ) + (ulonglong)(uVar2 * 2 & 0x1ff) * 4) *
                             (param_3->field0_0x0)._s_0.Y +
                            (double)*(float *)(*(longlong *)
                                                (lVar5 + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8)
                                              + (ulonglong)(uVar3 * 2 & 0x1ff) * 4) *
                            (param_3->field0_0x0)._s_0.Z);
      param_5->field0_0x0 = TVar6;
      return true;
    }
  }
  return false;
}

