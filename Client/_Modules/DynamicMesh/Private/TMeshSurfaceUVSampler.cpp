// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 5

// CachedSampleUV @ 14c8c34d0

bool __thiscall
UE::Geometry::TMeshSurfaceUVSampler<UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample>::
CachedSampleUV(TMeshSurfaceUVSampler<UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample>
               *this,FMeshUVSampleInfo *param_1,FCorrespondenceSample *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  Core::Private::Function::CheckCallable(*(void **)&this->ValueFunction);
  plVar1 = *(longlong **)&(this->ValueFunction).field_0x28;
  pcVar2 = *(code **)&this->ValueFunction;
  plVar4 = (longlong *)&(this->ValueFunction).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,param_1,param_2);
  return true;
}

// Initialize @ 14c8fbcb0

void __thiscall
UE::Geometry::TMeshSurfaceUVSampler<UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample>::
Initialize(TMeshSurfaceUVSampler<UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample> *this,
          FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          EMeshSurfaceSamplerQueryType param_3,FCorrespondenceSample *param_4,
          TUniqueFunction<void___cdecl(UE::Geometry::FMeshUVSampleInfo_const_&,UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample_&)>
          *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  ulong64 uVar14;
  FCorrespondenceSample *pFVar15;
  longlong *plVar16;
  longlong lVar17;
  
  this->Mesh = param_1;
  lVar17 = 2;
  this->UVOverlay = param_2;
  pFVar15 = &this->ZeroValue;
  do {
    uVar2 = *(undefined8 *)((longlong)&(param_4->BaseSample).MeshVertices.field0_0x0 + 4);
    dVar3 = (param_4->BaseSample).Triangle3D.V[0].field0_0x0._s_0.X;
    dVar4 = (param_4->BaseSample).Triangle3D.V[0].field0_0x0._s_0.Y;
    *(undefined8 *)&pFVar15->BaseSample = *(undefined8 *)&param_4->BaseSample;
    *(undefined8 *)((longlong)&(pFVar15->BaseSample).MeshVertices.field0_0x0 + 4) = uVar2;
    dVar5 = (param_4->BaseSample).Triangle3D.V[0].field0_0x0._s_0.Z;
    dVar6 = (param_4->BaseSample).Triangle3D.V[1].field0_0x0._s_0.X;
    (pFVar15->BaseSample).Triangle3D.V[0].field0_0x0._s_0.X = dVar3;
    (pFVar15->BaseSample).Triangle3D.V[0].field0_0x0._s_0.Y = dVar4;
    dVar3 = (param_4->BaseSample).Triangle3D.V[1].field0_0x0._s_0.Y;
    dVar4 = (param_4->BaseSample).Triangle3D.V[1].field0_0x0._s_0.Z;
    (pFVar15->BaseSample).Triangle3D.V[0].field0_0x0._s_0.Z = dVar5;
    (pFVar15->BaseSample).Triangle3D.V[1].field0_0x0._s_0.X = dVar6;
    dVar5 = (param_4->BaseSample).Triangle3D.V[2].field0_0x0._s_0.X;
    dVar6 = (param_4->BaseSample).Triangle3D.V[2].field0_0x0._s_0.Y;
    (pFVar15->BaseSample).Triangle3D.V[1].field0_0x0._s_0.Y = dVar3;
    (pFVar15->BaseSample).Triangle3D.V[1].field0_0x0._s_0.Z = dVar4;
    dVar3 = (param_4->BaseSample).Triangle3D.V[2].field0_0x0._s_0.Z;
    uVar2 = *(undefined8 *)&(param_4->BaseSample).UVVertices.field0_0x0;
    (pFVar15->BaseSample).Triangle3D.V[2].field0_0x0._s_0.X = dVar5;
    (pFVar15->BaseSample).Triangle3D.V[2].field0_0x0._s_0.Y = dVar6;
    uVar7 = *(undefined8 *)((longlong)&(param_4->BaseSample).UVVertices.field0_0x0 + 8);
    dVar4 = (param_4->BaseSample).TriangleUV.V[0].field0_0x0._s_0.X;
    (pFVar15->BaseSample).Triangle3D.V[2].field0_0x0._s_0.Z = dVar3;
    *(undefined8 *)&(pFVar15->BaseSample).UVVertices.field0_0x0 = uVar2;
    dVar3 = (param_4->BaseSample).TriangleUV.V[0].field0_0x0._s_0.Y;
    dVar5 = (param_4->BaseSample).TriangleUV.V[1].field0_0x0._s_0.X;
    *(undefined8 *)((longlong)&(pFVar15->BaseSample).UVVertices.field0_0x0 + 8) = uVar7;
    (pFVar15->BaseSample).TriangleUV.V[0].field0_0x0._s_0.X = dVar4;
    (pFVar15->BaseSample).TriangleUV.V[0].field0_0x0._s_0.Y = dVar3;
    (pFVar15->BaseSample).TriangleUV.V[1].field0_0x0._s_0.X = dVar5;
    lVar17 = lVar17 + -1;
    param_4 = (FCorrespondenceSample *)
              ((longlong)&(param_4->BaseSample).TriangleUV.V[1].field0_0x0 + 8);
    pFVar15 = (FCorrespondenceSample *)
              ((longlong)&(pFVar15->BaseSample).TriangleUV.V[1].field0_0x0 + 8);
  } while (lVar17 != 0);
  uVar2 = *(undefined8 *)&param_5->field_0x8;
  uVar7 = *(undefined8 *)&this->ValueFunction;
  uVar8 = *(undefined8 *)&(this->ValueFunction).field_0x8;
  uVar9 = *(undefined8 *)&(this->ValueFunction).field_0x10;
  uVar10 = *(undefined8 *)&(this->ValueFunction).field_0x18;
  uVar11 = *(undefined8 *)&(this->ValueFunction).field_0x20;
  uVar12 = *(undefined8 *)&(this->ValueFunction).field_0x28;
  *(undefined8 *)&this->ValueFunction = *(undefined8 *)param_5;
  *(undefined8 *)&(this->ValueFunction).field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&param_5->field_0x18;
  *(undefined8 *)&(this->ValueFunction).field_0x10 = *(undefined8 *)&param_5->field_0x10;
  *(undefined8 *)&(this->ValueFunction).field_0x18 = uVar2;
  uVar2 = *(undefined8 *)&param_5->field_0x28;
  *(undefined8 *)&(this->ValueFunction).field_0x20 = *(undefined8 *)&param_5->field_0x20;
  *(undefined8 *)&(this->ValueFunction).field_0x28 = uVar2;
  *(undefined8 *)param_5 = uVar7;
  *(undefined8 *)&param_5->field_0x8 = uVar8;
  *(undefined8 *)&param_5->field_0x10 = uVar9;
  *(undefined8 *)&param_5->field_0x18 = uVar10;
  *(undefined8 *)&param_5->field_0x20 = uVar11;
  *(undefined8 *)&param_5->field_0x28 = uVar12;
  this->QueryType = param_3;
  if ((param_3 == UVOnly) && (this->bUVSpatialValid == false)) {
    if (this->UVOverlay == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("UVOverlay",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Sampling\\MeshSurfaceSampler.h"
                          ,0x109,L"");
      if (bVar13) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (this->UVMeshAdapter).Mesh = this->Mesh;
    (this->UVMeshAdapter).UV = this->UVOverlay;
    (this->UVBVTree).Mesh = &this->UVMeshAdapter;
    (this->UVBVTree).MeshChangeStamp = 0;
    TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::BuildTopDown(&this->UVBVTree,false);
    uVar14 = FDynamicMesh3::GetChangeStamp(((this->UVBVTree).Mesh)->Mesh);
    (this->UVBVTree).MeshChangeStamp = uVar14;
    this->bUVSpatialValid = true;
  }
  if (*(longlong *)param_5 != 0) {
    plVar16 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar16 = *(longlong **)&param_5->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x00014c8fbe23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar16 + 0x10))();
    return;
  }
  return;
}

// InitializeBVTree @ 14c8fcd40

void __thiscall
UE::Geometry::TMeshSurfaceUVSampler<UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample>::
InitializeBVTree(TMeshSurfaceUVSampler<UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample>
                 *this)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if (this->bUVSpatialValid == false) {
    if (this->UVOverlay == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("UVOverlay",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Sampling\\MeshSurfaceSampler.h"
                         ,0x109,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (this->UVMeshAdapter).Mesh = this->Mesh;
    (this->UVMeshAdapter).UV = this->UVOverlay;
    (this->UVBVTree).Mesh = &this->UVMeshAdapter;
    (this->UVBVTree).MeshChangeStamp = 0;
    TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::BuildTopDown(&this->UVBVTree,false);
    uVar3 = FDynamicMesh3::GetChangeStamp(((this->UVBVTree).Mesh)->Mesh);
    (this->UVBVTree).MeshChangeStamp = uVar3;
    this->bUVSpatialValid = true;
  }
  return;
}

// SampleUV @ 14c915470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::TMeshSurfaceUVSampler<UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample>::
SampleUV(TMeshSurfaceUVSampler<UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample> *this,
        TVector2<double> *param_1,FCorrespondenceSample *param_2)

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
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Sampling\\MeshSurfaceSampler.h"
                       ,0x117,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (this->bUVSpatialValid == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bUVSpatialValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Sampling\\MeshSurfaceSampler.h"
                       ,0x118,L"");
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
  uVar4 = (**(code **)((this->UVBVTree)._padding_ + 0x40))(&this->UVBVTree,&local_a8,local_78);
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

// SampleUV @ 14c9155e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshSurfaceUVSampler<UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample>::
SampleUV(TMeshSurfaceUVSampler<UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample> *this,
        int param_1,TVector2<double> *param_2,FCorrespondenceSample *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  FDynamicMesh3 *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  bool bVar12;
  undefined1 uVar13;
  TVector<double> *pTVar14;
  undefined8 uVar15;
  FCorrespondenceSample *pFVar16;
  longlong *plVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStackY_1e8 [32];
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  TVector<double> local_158;
  TVector<double> local_140;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  TVector2<double>_u_0 local_c0;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  double local_90;
  double dStack_88;
  double local_80;
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if ((this->QueryType != TriangleAndUV) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("QueryType == EMeshSurfaceSamplerQueryType::TriangleAndUV",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Sampling\\MeshSurfaceSampler.h"
                          ,0x126,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    uVar13 = (*pcVar7)();
    return (bool)uVar13;
  }
  pFVar4 = this->Mesh;
  uStack_124 = 0xffffffff;
  uStack_120 = 0xffffffff;
  local_11c = 0xffffffff;
  local_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (((param_1 < 0) ||
      ((int)((pFVar4->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (pFVar4->TriangleRefCounts).RefCounts.CurBlockUsed) <= param_1)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                     Data + (ulonglong)((uint)param_1 >> 9) * 8) +
                                  (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) {
    lVar18 = 2;
    pFVar16 = &this->ZeroValue;
    do {
      uVar15 = *(undefined8 *)((longlong)&(pFVar16->BaseSample).MeshVertices.field0_0x0 + 4);
      *(undefined8 *)&param_3->BaseSample = *(undefined8 *)&pFVar16->BaseSample;
      *(undefined8 *)((longlong)&(param_3->BaseSample).MeshVertices.field0_0x0 + 4) = uVar15;
      dVar19 = (pFVar16->BaseSample).Triangle3D.V[0].field0_0x0._s_0.Y;
      (param_3->BaseSample).Triangle3D.V[0].field0_0x0._s_0.X =
           (pFVar16->BaseSample).Triangle3D.V[0].field0_0x0._s_0.X;
      (param_3->BaseSample).Triangle3D.V[0].field0_0x0._s_0.Y = dVar19;
      dVar19 = (pFVar16->BaseSample).Triangle3D.V[1].field0_0x0._s_0.X;
      (param_3->BaseSample).Triangle3D.V[0].field0_0x0._s_0.Z =
           (pFVar16->BaseSample).Triangle3D.V[0].field0_0x0._s_0.Z;
      (param_3->BaseSample).Triangle3D.V[1].field0_0x0._s_0.X = dVar19;
      dVar19 = (pFVar16->BaseSample).Triangle3D.V[1].field0_0x0._s_0.Z;
      (param_3->BaseSample).Triangle3D.V[1].field0_0x0._s_0.Y =
           (pFVar16->BaseSample).Triangle3D.V[1].field0_0x0._s_0.Y;
      (param_3->BaseSample).Triangle3D.V[1].field0_0x0._s_0.Z = dVar19;
      dVar19 = (pFVar16->BaseSample).Triangle3D.V[2].field0_0x0._s_0.Y;
      (param_3->BaseSample).Triangle3D.V[2].field0_0x0._s_0.X =
           (pFVar16->BaseSample).Triangle3D.V[2].field0_0x0._s_0.X;
      (param_3->BaseSample).Triangle3D.V[2].field0_0x0._s_0.Y = dVar19;
      uVar15 = *(undefined8 *)&(pFVar16->BaseSample).UVVertices.field0_0x0;
      (param_3->BaseSample).Triangle3D.V[2].field0_0x0._s_0.Z =
           (pFVar16->BaseSample).Triangle3D.V[2].field0_0x0._s_0.Z;
      *(undefined8 *)&(param_3->BaseSample).UVVertices.field0_0x0 = uVar15;
      dVar19 = (pFVar16->BaseSample).TriangleUV.V[0].field0_0x0._s_0.X;
      *(undefined8 *)((longlong)&(param_3->BaseSample).UVVertices.field0_0x0 + 8) =
           *(undefined8 *)((longlong)&(pFVar16->BaseSample).UVVertices.field0_0x0 + 8);
      (param_3->BaseSample).TriangleUV.V[0].field0_0x0._s_0.X = dVar19;
      dVar19 = (pFVar16->BaseSample).TriangleUV.V[1].field0_0x0._s_0.X;
      (param_3->BaseSample).TriangleUV.V[0].field0_0x0._s_0.Y =
           (pFVar16->BaseSample).TriangleUV.V[0].field0_0x0._s_0.Y;
      (param_3->BaseSample).TriangleUV.V[1].field0_0x0._s_0.X = dVar19;
      lVar18 = lVar18 + -1;
      pFVar16 = (FCorrespondenceSample *)
                ((longlong)&(pFVar16->BaseSample).TriangleUV.V[1].field0_0x0 + 8);
      param_3 = (FCorrespondenceSample *)
                ((longlong)&(param_3->BaseSample).TriangleUV.V[1].field0_0x0 + 8);
    } while (lVar18 != 0);
    bVar12 = false;
  }
  else {
    local_128 = param_1;
    if ((*(int *)(*(longlong *)
                   (*(longlong *)&this->UVOverlay->field_0x78 +
                   (ulonglong)((uint)(param_1 * 3) >> 9) * 8) + (ulonglong)(param_1 * 3 & 0x1ff) * 4
                 ) < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("UVOverlay->IsSetTriangle(Sample.TriangleIndex)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Sampling\\MeshSurfaceSampler.h"
                            ,0x130,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      uVar13 = (*pcVar7)();
      return (bool)uVar13;
    }
    uVar11 = local_128;
    pFVar4 = this->Mesh;
    lVar18 = *(longlong *)
              ((pFVar4->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(local_128 >> 9) * 8);
    uVar3 = *(ulonglong *)(lVar18 + (ulonglong)(local_128 & 0x1ff) * 0xc);
    uStack_124 = (uint)uVar3;
    uStack_120 = (uint)(uVar3 >> 0x20);
    local_11c = *(uint *)(lVar18 + 8 + (ulonglong)(local_128 & 0x1ff) * 0xc);
    pFVar5 = (pFVar4->Vertices).Blocks.AllocatorInstance.Data;
    puVar1 = (undefined8 *)
             (*(longlong *)(pFVar5 + ((uVar3 & 0xffffffff) >> 9) * 8) +
             (ulonglong)(uStack_124 & 0x1ff) * 0x18);
    local_118 = *puVar1;
    uStack_110 = puVar1[1];
    puVar2 = (undefined4 *)
             (*(longlong *)(pFVar5 + ((uVar3 & 0xffffffff) >> 9) * 8) + 0x10 +
             (ulonglong)(uStack_124 & 0x1ff) * 0x18);
    local_108 = *puVar2;
    uStack_104 = puVar2[1];
    puVar1 = (undefined8 *)
             (*(longlong *)(pFVar5 + (uVar3 >> 0x29) * 8) + (ulonglong)(uStack_120 & 0x1ff) * 0x18);
    uVar9 = *puVar1;
    uVar10 = puVar1[1];
    uVar15 = *(undefined8 *)
              (*(longlong *)(pFVar5 + (uVar3 >> 0x29) * 8) + 0x10 +
              (ulonglong)(uStack_120 & 0x1ff) * 0x18);
    local_190 = (undefined4)uVar9;
    uStack_18c = (undefined4)((ulonglong)uVar9 >> 0x20);
    puVar1 = (undefined8 *)
             (*(longlong *)(pFVar5 + (ulonglong)(local_11c >> 9) * 8) +
             (ulonglong)(local_11c & 0x1ff) * 0x18);
    local_e8 = *puVar1;
    uStack_e0 = puVar1[1];
    local_d8 = *(undefined8 *)
                (*(longlong *)(pFVar5 + (ulonglong)(local_11c >> 9) * 8) + 0x10 +
                (ulonglong)(local_11c & 0x1ff) * 0x18);
    uVar8 = local_128 * 3;
    uStack_188 = (undefined4)uVar10;
    uStack_184 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uStack_100 = local_190;
    uStack_fc = uStack_18c;
    uStack_f0 = (undefined4)uVar15;
    uStack_ec = (undefined4)((ulonglong)uVar15 >> 0x20);
    local_f8 = uStack_188;
    uStack_f4 = uStack_184;
    lVar18 = *(longlong *)&this->UVOverlay->field_0x78;
    local_d0 = *(uint *)(*(longlong *)(lVar18 + (ulonglong)(uVar8 >> 9) * 8) +
                        (ulonglong)(uVar8 & 0x1ff) * 4);
    local_cc = *(uint *)(*(longlong *)(lVar18 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                        (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
    local_c8 = *(uint *)(*(longlong *)(lVar18 + (ulonglong)(uVar8 + 2 >> 9) * 8) +
                        (ulonglong)(uVar8 + 2 & 0x1ff) * 4);
    lVar18 = *(longlong *)&this->UVOverlay->field_0x48;
    dVar21 = (double)*(float *)(*(longlong *)
                                 (lVar18 + (ulonglong)((local_d0 & 0x7fffffff) >> 8) * 8) +
                               (ulonglong)(local_d0 * 2 + 1 & 0x1ff) * 4);
    dVar20 = (double)*(float *)(*(longlong *)
                                 (lVar18 + (ulonglong)((local_cc & 0x7fffffff) >> 8) * 8) +
                               (ulonglong)(local_cc * 2 + 1 & 0x1ff) * 4);
    dVar19 = (double)*(float *)(*(longlong *)
                                 (lVar18 + (ulonglong)((local_c8 & 0x7fffffff) >> 8) * 8) +
                               (ulonglong)(local_c8 * 2 + 1 & 0x1ff) * 4);
    local_c0._8_4_ = SUB84(dVar21,0);
    local_c0._s_0.X =
         (double)*(float *)(*(longlong *)(lVar18 + (ulonglong)((local_d0 & 0x7fffffff) >> 8) * 8) +
                           (ulonglong)(local_d0 * 2 & 0x1ff) * 4);
    local_c0._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    local_a0._8_4_ = SUB84(dVar19,0);
    local_a0._0_8_ =
         (double)*(float *)(*(longlong *)(lVar18 + (ulonglong)((local_c8 & 0x7fffffff) >> 8) * 8) +
                           (ulonglong)(local_c8 * 2 & 0x1ff) * 4);
    local_a0._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    local_b0._8_4_ = SUB84(dVar20,0);
    local_b0._0_8_ =
         (double)*(float *)(*(longlong *)(lVar18 + (ulonglong)((local_cc & 0x7fffffff) >> 8) * 8) +
                           (ulonglong)(local_cc * 2 & 0x1ff) * 4);
    local_b0._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    pTVar14 = TTriangle2<double>::GetBarycentricCoords
                        ((TTriangle2<double> *)&local_c0._s_0,&local_158,param_2);
    local_90 = (pTVar14->field0_0x0)._s_0.X;
    dStack_88 = (pTVar14->field0_0x0)._s_0.Y;
    local_80 = (pTVar14->field0_0x0)._s_0.Z;
    pTVar14 = FDynamicMesh3::GetTriBaryPoint(pFVar4,&local_140,uVar11,local_90,dStack_88,local_80);
    local_78 = (pTVar14->field0_0x0)._s_0.X;
    dStack_70 = (pTVar14->field0_0x0)._s_0.Y;
    local_68 = (pTVar14->field0_0x0)._s_0.Z;
    Core::Private::Function::CheckCallable(*(void **)&this->ValueFunction);
    plVar6 = *(longlong **)&(this->ValueFunction).field_0x28;
    pcVar7 = *(code **)&this->ValueFunction;
    plVar17 = (longlong *)&(this->ValueFunction).field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar17 = plVar6;
    }
    uVar15 = (**(code **)(*plVar17 + 8))();
    (*pcVar7)(uVar15,&local_128,param_3);
    bVar12 = true;
  }
  return bVar12;
}

