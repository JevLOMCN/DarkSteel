// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 12

// FConvexPart @ 143366600

FConvexPart * __thiscall
UE::Geometry::FConvexDecomposition3::FConvexPart::FConvexPart
          (FConvexPart *this,FDynamicMesh3 *param_1,FPreprocessMeshOptions *param_2,
          TTransformSRT3<double> *param_3)

{
  undefined8 uVar1;
  
  FDynamicMesh3::FDynamicMesh3(&this->InternalGeo);
  this->HullSourceID = -1;
  (this->HullTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HullTriangles).ArrayNum = 0;
  (this->HullTriangles).ArrayMax = 0;
  (this->HullPlanes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HullPlanes).ArrayNum = 0;
  (this->HullPlanes).ArrayMax = 0;
  (this->OverlapsNegativeSpace).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverlapsNegativeSpace).ArrayNum = 0;
  (this->OverlapsNegativeSpace).ArrayMax = 0;
  this->HullVolume = 0.0;
  this->GeoVolume = 0.0;
  this->SumHullsVolume = -1.7976931348623157e+308;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->GeoCenter).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->GeoCenter).field0_0x0._s_0.Y = (double)uVar1;
  (this->GeoCenter).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Bounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->Bounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->Bounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  this->bGeometryVolumeUnreliable = false;
  this->bSplitFailed = false;
  this->bMustMerge = false;
  this->HullError = 1.7976931348623157e+308;
  this->bIsCompact = false;
  this->bFailed = false;
  FDynamicMesh3::Copy(&this->InternalGeo,param_1,false,false,false,false);
  InitializeFromInternalGeo(this,param_2,param_3);
  return this;
}

// FConvexPart @ 143366740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FConvexPart * __thiscall
UE::Geometry::FConvexDecomposition3::FConvexPart::FConvexPart
          (FConvexPart *this,FDynamicMesh3 *param_1,bool param_2,TTransformSRT3<double> *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [56];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  FDynamicMesh3::FDynamicMesh3(&this->InternalGeo);
  this->HullSourceID = -1;
  (this->HullTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HullTriangles).ArrayNum = 0;
  (this->HullTriangles).ArrayMax = 0;
  (this->HullPlanes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HullPlanes).ArrayNum = 0;
  (this->HullPlanes).ArrayMax = 0;
  (this->OverlapsNegativeSpace).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverlapsNegativeSpace).ArrayNum = 0;
  (this->OverlapsNegativeSpace).ArrayMax = 0;
  this->SumHullsVolume = -1.7976931348623157e+308;
  this->HullVolume = 0.0;
  this->GeoVolume = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->GeoCenter).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->GeoCenter).field0_0x0._s_0.Y = (double)uVar1;
  (this->GeoCenter).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Bounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->Bounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->Bounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  this->bGeometryVolumeUnreliable = false;
  this->bSplitFailed = false;
  this->bMustMerge = false;
  this->HullError = 1.7976931348623157e+308;
  this->bIsCompact = false;
  this->bFailed = false;
  FDynamicMesh3::Copy(&this->InternalGeo,param_1,false,false,false,false);
  local_78._16_8_ = 0;
  local_78._8_8_ = 0.0;
  local_40 = (longlong *)0x0;
  local_78[0] = param_2;
  InitializeFromInternalGeo(this,(FPreprocessMeshOptions *)local_78,param_3);
  if (local_78._16_8_ != 0) {
    plVar2 = (longlong *)(local_78 + 0x20);
    if (local_40 != (longlong *)0x0) {
      plVar2 = local_40;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return this;
}

// FConvexPart @ 1433668c0

FConvexPart * __thiscall
UE::Geometry::FConvexDecomposition3::FConvexPart::FConvexPart
          (FConvexPart *this,TArrayView<UE::Math::TVector<float>_const_,int> *param_1,
          TArrayView<UE::Math::TIntVector3<int>_const_,int> *param_2,FPreprocessMeshOptions *param_3
          ,TTransformSRT3<double> *param_4,int param_5)

{
  TVector<float> *pTVar1;
  TIntVector3<int> *pTVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  TIntVector3<int> *pTVar6;
  TVector<float> *pTVar7;
  FIndex3i_u_0 local_78;
  undefined8 local_68;
  TVector<double>_u_0 local_58;
  undefined8 local_40;
  float local_38;
  undefined8 local_34;
  float local_2c;
  TVector2<float>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  
  FDynamicMesh3::FDynamicMesh3(&this->InternalGeo);
  this->HullSourceID = -1;
  (this->HullTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HullTriangles).ArrayNum = 0;
  (this->HullTriangles).ArrayMax = 0;
  (this->HullPlanes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HullPlanes).ArrayNum = 0;
  (this->HullPlanes).ArrayMax = 0;
  (this->OverlapsNegativeSpace).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverlapsNegativeSpace).ArrayNum = 0;
  (this->OverlapsNegativeSpace).ArrayMax = 0;
  this->HullVolume = 0.0;
  this->GeoVolume = 0.0;
  this->SumHullsVolume = -1.7976931348623157e+308;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->GeoCenter).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->GeoCenter).field0_0x0._s_0.Y = (double)uVar5;
  (this->GeoCenter).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Bounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->Bounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->Bounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  pTVar7 = param_1->DataPtr;
  this->HullError = 1.7976931348623157e+308;
  iVar3 = param_1->ArrayNum;
  this->bGeometryVolumeUnreliable = false;
  this->bSplitFailed = false;
  this->bMustMerge = false;
  this->bIsCompact = false;
  this->bFailed = false;
  pTVar1 = pTVar7 + iVar3;
  for (; pTVar7 != pTVar1; pTVar7 = pTVar7 + 1) {
    dVar4 = (double)(float)((ulonglong)*(undefined8 *)&pTVar7->field0_0x0 >> 0x20);
    local_20 = 0;
    local_1e = 0;
    local_58._8_4_ = SUB84(dVar4,0);
    local_58._0_8_ = (double)(float)*(undefined8 *)&pTVar7->field0_0x0;
    local_58._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_58._s_0.Z = (double)(pTVar7->field0_0x0)._s_0.Z;
    local_40 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_38 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_34 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_2c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_28 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    FDynamicMesh3::AppendVertex(&this->InternalGeo,(FVertexInfo *)&local_58._s_0);
  }
  pTVar6 = param_2->DataPtr;
  pTVar2 = pTVar6 + param_2->ArrayNum;
  for (; pTVar6 != pTVar2; pTVar6 = pTVar6 + 1) {
    local_68 = *(undefined8 *)&pTVar6->field0_0x0;
    local_78._s_0.A = (int)local_68 + param_5;
    local_78._s_0.B = (int)((ulonglong)local_68 >> 0x20) + param_5;
    local_78._s_0.C = (pTVar6->field0_0x0)._s_0.Z + param_5;
    FDynamicMesh3::AppendTriangle(&this->InternalGeo,(FIndex3i *)&local_78._s_0,0);
  }
  InitializeFromInternalGeo(this,param_3,param_4);
  return this;
}

// FConvexPart @ 143366ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FConvexPart * __thiscall
UE::Geometry::FConvexDecomposition3::FConvexPart::FConvexPart
          (FConvexPart *this,TArrayView<UE::Math::TVector<float>_const_,int> *param_1,
          TArrayView<UE::Math::TIntVector3<int>_const_,int> *param_2,bool param_3,
          TTransformSRT3<double> *param_4,int param_5)

{
  TVector<float> *pTVar1;
  TIntVector3<int> *pTVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  longlong *plVar6;
  TIntVector3<int> *pTVar7;
  TVector<float> *pTVar8;
  undefined1 auStack_108 [32];
  FIndex3i_u_0 local_e8;
  undefined8 local_d8;
  TVector<double>_u_0 local_c8;
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a4;
  float local_9c;
  TVector2<float>_u_0 local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_88 [56];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  FDynamicMesh3::FDynamicMesh3(&this->InternalGeo);
  this->HullSourceID = -1;
  (this->HullTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HullTriangles).ArrayNum = 0;
  (this->HullTriangles).ArrayMax = 0;
  (this->HullPlanes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HullPlanes).ArrayNum = 0;
  (this->HullPlanes).ArrayMax = 0;
  (this->OverlapsNegativeSpace).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverlapsNegativeSpace).ArrayNum = 0;
  (this->OverlapsNegativeSpace).ArrayMax = 0;
  this->SumHullsVolume = -1.7976931348623157e+308;
  this->HullVolume = 0.0;
  this->GeoVolume = 0.0;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->GeoCenter).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->GeoCenter).field0_0x0._s_0.Y = (double)uVar5;
  (this->GeoCenter).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Bounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->Bounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->Bounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  pTVar8 = param_1->DataPtr;
  this->HullError = 1.7976931348623157e+308;
  iVar3 = param_1->ArrayNum;
  this->bGeometryVolumeUnreliable = false;
  this->bSplitFailed = false;
  this->bMustMerge = false;
  this->bIsCompact = false;
  this->bFailed = false;
  pTVar1 = pTVar8 + iVar3;
  for (; pTVar8 != pTVar1; pTVar8 = pTVar8 + 1) {
    dVar4 = (double)(float)((ulonglong)*(undefined8 *)&pTVar8->field0_0x0 >> 0x20);
    local_90 = 0;
    local_8e = 0;
    local_c8._8_4_ = SUB84(dVar4,0);
    local_c8._0_8_ = (double)(float)*(undefined8 *)&pTVar8->field0_0x0;
    local_c8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_c8._s_0.Z = (double)(pTVar8->field0_0x0)._s_0.Z;
    local_b0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_a8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_a4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_9c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_98 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    FDynamicMesh3::AppendVertex(&this->InternalGeo,(FVertexInfo *)&local_c8._s_0);
  }
  pTVar7 = param_2->DataPtr;
  pTVar2 = pTVar7 + param_2->ArrayNum;
  for (; pTVar7 != pTVar2; pTVar7 = pTVar7 + 1) {
    local_d8 = *(undefined8 *)&pTVar7->field0_0x0;
    local_e8._s_0.A = (int)local_d8 + param_5;
    local_e8._s_0.B = (int)((ulonglong)local_d8 >> 0x20) + param_5;
    local_e8._s_0.C = (pTVar7->field0_0x0)._s_0.Z + param_5;
    FDynamicMesh3::AppendTriangle(&this->InternalGeo,(FIndex3i *)&local_e8._s_0,0);
  }
  local_88._16_8_ = 0;
  local_88._8_8_ = 0.0;
  local_50 = (longlong *)0x0;
  local_88[0] = param_3;
  InitializeFromInternalGeo(this,(FPreprocessMeshOptions *)local_88,param_4);
  if (local_88._16_8_ != 0) {
    plVar6 = (longlong *)(local_88 + 0x20);
    if (local_50 != (longlong *)0x0) {
      plVar6 = local_50;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return this;
}

// FConvexPart @ 143366d40

FConvexPart * __thiscall
UE::Geometry::FConvexDecomposition3::FConvexPart::FConvexPart(FConvexPart *this)

{
  undefined8 uVar1;
  
  FDynamicMesh3::FDynamicMesh3(&this->InternalGeo);
  this->HullSourceID = -1;
  (this->HullTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HullTriangles).ArrayNum = 0;
  (this->HullTriangles).ArrayMax = 0;
  (this->HullPlanes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HullPlanes).ArrayNum = 0;
  (this->HullPlanes).ArrayMax = 0;
  (this->OverlapsNegativeSpace).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverlapsNegativeSpace).ArrayNum = 0;
  (this->OverlapsNegativeSpace).ArrayMax = 0;
  this->HullVolume = 0.0;
  this->GeoVolume = 0.0;
  this->SumHullsVolume = -1.7976931348623157e+308;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->GeoCenter).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->GeoCenter).field0_0x0._s_0.Y = (double)uVar1;
  (this->GeoCenter).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Bounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->Bounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->Bounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->Bounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  this->HullError = 1.7976931348623157e+308;
  this->bGeometryVolumeUnreliable = false;
  this->bSplitFailed = false;
  this->bMustMerge = false;
  this->bIsCompact = false;
  this->bFailed = false;
  return this;
}

// operator= @ 14336b1b0

FConvexPart * __thiscall
UE::Geometry::FConvexDecomposition3::FConvexPart::operator=(FConvexPart *this,FConvexPart *param_1)

{
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Geometry::TPlane3<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Geometry::TPlane3<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  double dVar8;
  
  FDynamicMesh3::operator=(&this->InternalGeo,&param_1->InternalGeo);
  pTVar1 = &param_1->HullTriangles;
  pTVar2 = &this->HullTriangles;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->HullTriangles).ArrayNum = (param_1->HullTriangles).ArrayNum;
    (this->HullTriangles).ArrayMax = (param_1->HullTriangles).ArrayMax;
    (param_1->HullTriangles).ArrayNum = 0;
    (param_1->HullTriangles).ArrayMax = 0;
  }
  pTVar3 = &param_1->HullPlanes;
  pTVar4 = &this->HullPlanes;
  if (pTVar4 != pTVar3) {
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->HullPlanes).ArrayNum = (param_1->HullPlanes).ArrayNum;
    (this->HullPlanes).ArrayMax = (param_1->HullPlanes).ArrayMax;
    (param_1->HullPlanes).ArrayNum = 0;
    (param_1->HullPlanes).ArrayMax = 0;
  }
  pTVar5 = &param_1->OverlapsNegativeSpace;
  pTVar6 = &this->OverlapsNegativeSpace;
  this->HullSourceID = param_1->HullSourceID;
  if (pTVar6 != pTVar5) {
    pFVar7 = (pTVar6->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->OverlapsNegativeSpace).ArrayNum = (param_1->OverlapsNegativeSpace).ArrayNum;
    (this->OverlapsNegativeSpace).ArrayMax = (param_1->OverlapsNegativeSpace).ArrayMax;
    (param_1->OverlapsNegativeSpace).ArrayNum = 0;
    (param_1->OverlapsNegativeSpace).ArrayMax = 0;
  }
  this->HullVolume = param_1->HullVolume;
  this->GeoVolume = param_1->GeoVolume;
  this->SumHullsVolume = param_1->SumHullsVolume;
  dVar8 = (param_1->GeoCenter).field0_0x0._s_0.Y;
  (this->GeoCenter).field0_0x0._s_0.X = (param_1->GeoCenter).field0_0x0._s_0.X;
  (this->GeoCenter).field0_0x0._s_0.Y = dVar8;
  (this->GeoCenter).field0_0x0._s_0.Z = (param_1->GeoCenter).field0_0x0._s_0.Z;
  dVar8 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_1->Bounds).Min.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar8;
  dVar8 = (param_1->Bounds).Max.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_1->Bounds).Min.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar8;
  dVar8 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_1->Bounds).Max.field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar8;
  this->bGeometryVolumeUnreliable = param_1->bGeometryVolumeUnreliable;
  this->bSplitFailed = param_1->bSplitFailed;
  this->bMustMerge = param_1->bMustMerge;
  this->HullError = param_1->HullError;
  this->bIsCompact = param_1->bIsCompact;
  this->bFailed = param_1->bFailed;
  return this;
}

// Compact @ 14338e500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Geometry::FConvexDecomposition3::FConvexPart::Compact(FConvexPart *this)

{
  FScriptContainerElement *pFVar1;
  double *pdVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  ForElementType<FSetElementId> FVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStackY_338 [32];
  uint local_308;
  uint local_304;
  undefined1 local_300 [4];
  undefined1 local_2fc [4];
  uint *local_2f8;
  uint *local_2f0;
  TVector<double>_u_0 local_2e8;
  undefined8 local_2d0;
  float local_2c8;
  undefined8 local_2c4;
  float local_2bc;
  TVector2<float>_u_0 local_2b8;
  undefined2 local_2b0;
  undefined1 local_2ae;
  FDynamicMesh3 local_2a8;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  int local_44;
  undefined1 local_40 [8];
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_338;
  if (this->bIsCompact == false) {
    pFVar10 = (FScriptContainerElement *)0x0;
    local_78._0_8_ = (FScriptContainerElement *)0x0;
    local_78._8_8_ = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_44 = 0;
    local_38 = (ForElementType<FSetElementId>)0x0;
    local_30 = 0;
    local_4c = 0x80;
    local_48 = 0xffffffff;
    FDynamicMesh3::FDynamicMesh3(&local_2a8);
    iVar3 = (this->HullTriangles).ArrayNum;
    pFVar9 = (this->HullTriangles).AllocatorInstance.Data;
    pFVar1 = pFVar9 + (longlong)iVar3 * 0xc;
LAB_14338e5b0:
    if ((this->HullTriangles).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_300);
    }
    if (pFVar9 != pFVar1) {
      local_304 = *(uint *)pFVar9;
      if (local_78._8_4_ != local_44) {
        FVar8 = (ForElementType<FSetElementId>)local_40;
        if (local_38 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = local_38;
        }
        uVar4 = *(uint *)((longlong)FVar8 + (ulonglong)(local_30 - 1U & local_304) * 4);
        while (uVar4 != 0xffffffff) {
          pFVar6 = (FScriptContainerElement *)(local_78._0_8_ + (longlong)(int)uVar4 * 0x10);
          if (*(uint *)pFVar6 == local_304) {
            pFVar7 = pFVar6 + 4;
            if (pFVar6 == (FScriptContainerElement *)0x0) {
              pFVar7 = pFVar10;
            }
            if (pFVar7 != (FScriptContainerElement *)0x0) {
              local_308 = *(uint *)pFVar7;
              goto LAB_14338e6d3;
            }
            break;
          }
          uVar4 = *(uint *)(pFVar6 + 8);
        }
      }
      local_2b0 = 0;
      local_2ae = 0;
      lVar5 = *(longlong *)
               ((this->InternalGeo).Vertices.Blocks.AllocatorInstance.Data +
               (ulonglong)(local_304 >> 9) * 8);
      pdVar2 = (double *)(lVar5 + (ulonglong)(local_304 & 0x1ff) * 0x18);
      local_2e8._s_0.X = *pdVar2;
      local_2e8._s_0.Y = pdVar2[1];
      local_2e8._s_0.Z = *(double *)(lVar5 + 0x10 + (ulonglong)(local_304 & 0x1ff) * 0x18);
      local_2c8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_2bc = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_2d0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_2c4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_2b8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_308 = FDynamicMesh3::AppendVertex(&local_2a8,(FVertexInfo *)&local_2e8._s_0);
      local_2f8 = &local_304;
      local_2f0 = &local_308;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)local_78,(TPairInitializer<int_const_&,int_const_&> *)local_2fc,
                 (bool *)(local_2fc + 4));
LAB_14338e6d3:
      *(uint *)pFVar9 = local_308;
      local_304 = *(uint *)(pFVar9 + 4);
      if (local_78._8_4_ != local_44) {
        FVar8 = (ForElementType<FSetElementId>)local_40;
        if (local_38 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = local_38;
        }
        uVar4 = *(uint *)((longlong)FVar8 + (ulonglong)(local_30 - 1U & local_304) * 4);
        while (uVar4 != 0xffffffff) {
          pFVar6 = (FScriptContainerElement *)(local_78._0_8_ + (longlong)(int)uVar4 * 0x10);
          if (*(uint *)pFVar6 == local_304) {
            pFVar7 = pFVar6 + 4;
            if (pFVar6 == (FScriptContainerElement *)0x0) {
              pFVar7 = pFVar10;
            }
            if (pFVar7 != (FScriptContainerElement *)0x0) {
              local_308 = *(uint *)pFVar7;
              goto LAB_14338e7e4;
            }
            break;
          }
          uVar4 = *(uint *)(pFVar6 + 8);
        }
      }
      local_2b0 = 0;
      local_2ae = 0;
      lVar5 = *(longlong *)
               ((this->InternalGeo).Vertices.Blocks.AllocatorInstance.Data +
               (ulonglong)(local_304 >> 9) * 8);
      pdVar2 = (double *)(lVar5 + (ulonglong)(local_304 & 0x1ff) * 0x18);
      local_2e8._s_0.X = *pdVar2;
      local_2e8._s_0.Y = pdVar2[1];
      local_2e8._s_0.Z = *(double *)(lVar5 + 0x10 + (ulonglong)(local_304 & 0x1ff) * 0x18);
      local_2c8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_2bc = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_2d0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_2c4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_2b8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_308 = FDynamicMesh3::AppendVertex(&local_2a8,(FVertexInfo *)&local_2e8._s_0);
      local_2f8 = &local_304;
      local_2f0 = &local_308;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)local_78,(TPairInitializer<int_const_&,int_const_&> *)local_2fc,
                 (bool *)(local_2fc + 4));
LAB_14338e7e4:
      *(uint *)(pFVar9 + 4) = local_308;
      local_304 = *(uint *)(pFVar9 + 8);
      if (local_78._8_4_ != local_44) {
        FVar8 = (ForElementType<FSetElementId>)local_40;
        if (local_38 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = local_38;
        }
        uVar4 = *(uint *)((longlong)FVar8 + (ulonglong)(local_30 - 1U & local_304) * 4);
        while (uVar4 != 0xffffffff) {
          pFVar6 = (FScriptContainerElement *)(local_78._0_8_ + (longlong)(int)uVar4 * 0x10);
          if (*(uint *)pFVar6 == local_304) {
            pFVar7 = pFVar6 + 4;
            if (pFVar6 == (FScriptContainerElement *)0x0) {
              pFVar7 = pFVar10;
            }
            if (pFVar7 != (FScriptContainerElement *)0x0) {
              local_308 = *(uint *)pFVar7;
              *(uint *)(pFVar9 + 8) = local_308;
              pFVar9 = pFVar9 + 0xc;
              goto LAB_14338e5b0;
            }
            break;
          }
          uVar4 = *(uint *)(pFVar6 + 8);
        }
      }
      local_2b0 = 0;
      local_2ae = 0;
      lVar5 = *(longlong *)
               ((this->InternalGeo).Vertices.Blocks.AllocatorInstance.Data +
               (ulonglong)(local_304 >> 9) * 8);
      pdVar2 = (double *)(lVar5 + (ulonglong)(local_304 & 0x1ff) * 0x18);
      local_2e8._s_0.X = *pdVar2;
      local_2e8._s_0.Y = pdVar2[1];
      local_2e8._s_0.Z = *(double *)(lVar5 + 0x10 + (ulonglong)(local_304 & 0x1ff) * 0x18);
      local_2c8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_2bc = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_2d0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_2c4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_2b8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_308 = FDynamicMesh3::AppendVertex(&local_2a8,(FVertexInfo *)&local_2e8._s_0);
      local_2f8 = &local_304;
      local_2f0 = &local_308;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)local_78,(TPairInitializer<int_const_&,int_const_&> *)local_2fc,
                 (bool *)(local_2fc + 4));
      *(uint *)(pFVar9 + 8) = local_308;
      pFVar9 = pFVar9 + 0xc;
      goto LAB_14338e5b0;
    }
    FDynamicMesh3::operator=(&this->InternalGeo,&local_2a8);
    this->bIsCompact = true;
    FDynamicMesh3::~FDynamicMesh3(&local_2a8);
    local_30 = 0;
    if (local_38 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_38);
    }
    iVar3 = SUB84(local_78._8_8_,4);
    local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
    }
    local_44 = 0;
    local_50 = 0;
    local_48 = 0xffffffff;
    if (0x80 < local_4c) {
      local_4c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
  }
  return;
}

// ComputeHull @ 1433906b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FConvexDecomposition3::FConvexPart::ComputeHull
          (FConvexPart *this,bool param_1,double param_2)

{
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined1 auVar6 [8];
  FConvexPart *local_res8;
  FConvexPart *local_res20;
  undefined1 local_168 [8];
  FConvexPart **local_160;
  undefined1 local_158 [8];
  FConvexPart **local_150;
  code *local_148;
  FConvexPart **local_140;
  TVector<double>_u_0 local_138;
  undefined8 local_120;
  float local_118;
  undefined8 local_114;
  float local_10c;
  TVector2<float>_u_0 local_108;
  undefined2 local_100;
  undefined1 local_fe;
  TConvexHull3<double> local_f8;
  
  local_f8.SimplificationSettings.SkipAtHullDistanceAbsolute =
       ___xmm_ffefffffffffffffffefffffffffffff;
  local_f8.SimplificationSettings.SkipAtHullDistanceAsFraction = _UNK_1508ffb58;
  local_150 = &local_res8;
  local_158 = (undefined1  [8])
              Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FConvexDecomposition3::FConvexPart::ComputeHull'::__l2::<lambda_2>,bool,int>
              ::Call;
  local_160 = &local_res20;
  local_f8.Line.Origin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_f8.Line.Origin.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_f8.Line.Origin.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_168 = (undefined1  [8])
              Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FConvexDecomposition3::FConvexPart::ComputeHull'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
              ::Call;
  local_f8.SimplificationSettings.DegenerateEdgeTolerance = 0.0;
  local_f8.bSaveTriangleNeighbors = false;
  local_f8.SimplificationSettings.MaxHullVertices = -1;
  local_f8.Progress = (FProgressCancel *)0x0;
  local_f8.Line.Direction.field0_0x0._s_0.X =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
  local_f8.Line.Direction.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  local_f8.Line.Direction.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  local_f8.NumHullPoints = 0;
  local_f8.Hull.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Hull.ArrayNum = 0;
  local_f8.Hull.ArrayMax = 0;
  local_f8.HullNeighbors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.HullNeighbors.ArrayNum = 0;
  local_f8.HullNeighbors.ArrayMax = 0;
  local_res8 = this;
  local_res20 = this;
  bVar4 = TConvexHull3<double>::Solve
                    (&local_f8,
                     (this->InternalGeo).VertexRefCounts.RefCounts.CurBlock * 0x200 +
                     (this->InternalGeo).VertexRefCounts.RefCounts.CurBlockUsed,
                     (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)local_168,
                     (TFunctionRef<bool___cdecl(int)> *)local_158);
  if ((!bVar4) && (0.0 < param_2)) {
    local_140 = &local_res8;
    local_158 = (undefined1  [8])0x0;
    local_150 = (FConvexPart **)0x0;
    local_148 = Core::Private::Function::TFunctionRefCaller<UE::Geometry::<lambda_26_>,bool,int>::
                Call;
    local_168 = (undefined1  [8])0x0;
    local_160 = (FConvexPart **)0x0;
    bVar4 = ComputeThickenedHull
                      (param_2,&local_f8,&this->InternalGeo,
                       (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)local_158,
                       (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)local_168,
                       (TFunctionRef<bool___cdecl(int)> *)&local_148);
    if (!bVar4) {
      this->bFailed = true;
      if (local_168 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_168);
      }
      if (local_158 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_158);
      }
      bVar4 = false;
      goto LAB_14339091e;
    }
    iVar3 = (int)local_160;
    uVar5 = (ulonglong)(int)local_160;
    pFVar2 = (FScriptContainerElement *)((longlong)local_168 + uVar5 * 0x18);
    auVar6 = local_168;
    while( true ) {
      if ((int)uVar5 != iVar3) {
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (auVar6 == (undefined1  [8])pFVar2) break;
      local_138._s_0.X = (double)*(undefined8 *)auVar6;
      local_138._s_0.Y = (double)*(undefined8 *)((longlong)auVar6 + 8);
      local_118 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_138._s_0.Z = (double)*(undefined8 *)((longlong)auVar6 + 0x10);
      local_10c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_120 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_114 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_108 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_100 = 0;
      local_fe = 0;
      FDynamicMesh3::AppendVertex(&this->InternalGeo,(FVertexInfo *)&local_138._s_0);
      uVar5 = (ulonglong)local_160 & 0xffffffff;
      auVar6 = (undefined1  [8])((longlong)auVar6 + 0x18);
    }
    if (local_168 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_168);
    }
    if (local_158 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_158);
    }
  }
  pTVar1 = &this->HullTriangles;
  if (pTVar1 != &local_f8.Hull) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = local_f8.Hull.AllocatorInstance.Data;
    (this->HullTriangles).ArrayNum = local_f8.Hull.ArrayNum;
    (this->HullTriangles).ArrayMax = local_f8.Hull.ArrayMax;
    local_f8.Hull.ArrayNum = 0;
    local_f8.Hull.ArrayMax = 0;
    local_f8.Hull.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (param_1) {
    ComputeHullPlanes(this);
  }
  bVar4 = true;
LAB_14339091e:
  if (local_f8.HullNeighbors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.HullNeighbors.AllocatorInstance.Data);
  }
  if (local_f8.Hull.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Hull.AllocatorInstance.Data);
  }
  return bVar4;
}

// ComputeHullPlanes @ 1433909a0

void __thiscall
UE::Geometry::FConvexDecomposition3::FConvexPart::ComputeHullPlanes(FConvexPart *this)

{
  int *piVar1;
  TArray<UE::Geometry::TPlane3<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  double *pdVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  
  uVar23 = (this->HullTriangles).ArrayNum;
  pTVar2 = &this->HullPlanes;
  piVar1 = &(this->HullPlanes).ArrayNum;
  iVar19 = *piVar1;
  if (iVar19 < (int)uVar23) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar23 - iVar19,&pTVar2->AllocatorInstance,piVar1,&(this->HullPlanes).ArrayMax
              );
  }
  else {
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
    }
    if ((int)uVar23 < iVar19) {
      uVar25 = iVar19 - uVar23;
      if (((int)(uVar25 | uVar23) < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar25 != 0) {
        pFVar20 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar23 * 0x20;
        iVar19 = (*piVar1 - uVar23) - uVar25;
        if (iVar19 != 0) {
          memmove(pFVar20,pFVar20 + (longlong)(int)uVar25 * 0x20,(longlong)iVar19 << 5);
        }
        *piVar1 = *piVar1 - uVar25;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,&pTVar2->AllocatorInstance,*piVar1,&(this->HullPlanes).ArrayMax);
      }
    }
  }
  dVar14 = __real_3fe0000000000000;
  dVar13 = __real_3e45798ee2308c3a;
  dVar12 = __real_3ff0000000000000;
  uVar23 = 0;
  if (0 < (this->HullTriangles).ArrayNum) {
    lVar24 = 0;
    lVar27 = 0;
    do {
      uVar26 = ~uVar23 >> 0x1f;
      uVar25 = 0;
      if ((int)uVar23 < (this->HullTriangles).ArrayNum) {
        uVar25 = uVar26;
      }
      if ((uVar25 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      pFVar20 = (this->HullTriangles).AllocatorInstance.Data;
      pFVar5 = (this->InternalGeo).Vertices.Blocks.AllocatorInstance.Data;
      uVar21 = (ulonglong)(*(uint *)(pFVar20 + lVar27) & 0x1ff);
      pdVar3 = (double *)
               (*(longlong *)(pFVar5 + (ulonglong)(*(uint *)(pFVar20 + lVar27) >> 9) * 8) +
               uVar21 * 0x18);
      dVar10 = *pdVar3;
      dVar11 = pdVar3[1];
      dVar4 = *(double *)
               (*(longlong *)(pFVar5 + (ulonglong)(*(uint *)(pFVar20 + lVar27) >> 9) * 8) + 0x10 +
               uVar21 * 0x18);
      uVar21 = (ulonglong)(*(uint *)(pFVar20 + lVar27 + 8) & 0x1ff);
      pdVar3 = (double *)
               (*(longlong *)(pFVar5 + (ulonglong)(*(uint *)(pFVar20 + lVar27 + 8) >> 9) * 8) +
               uVar21 * 0x18);
      uVar22 = (ulonglong)(*(uint *)(pFVar20 + lVar27 + 4) & 0x1ff);
      dVar31 = *(double *)
                (*(longlong *)(pFVar5 + (ulonglong)(*(uint *)(pFVar20 + lVar27 + 8) >> 9) * 8) +
                 0x10 + uVar21 * 0x18) - dVar4;
      dVar8 = *pdVar3 - dVar10;
      dVar28 = pdVar3[1] - dVar11;
      pdVar3 = (double *)
               (*(longlong *)(pFVar5 + (ulonglong)(*(uint *)(pFVar20 + lVar27 + 4) >> 9) * 8) +
               uVar22 * 0x18);
      dVar9 = pdVar3[1];
      dVar7 = *pdVar3 - dVar10;
      dVar32 = *(double *)
                (*(longlong *)(pFVar5 + (ulonglong)(*(uint *)(pFVar20 + lVar27 + 4) >> 9) * 8) +
                 0x10 + uVar22 * 0x18) - dVar4;
      auVar29._0_8_ = dVar9 - dVar11;
      auVar29._8_8_ = dVar9;
      dVar9 = dVar28 * dVar32 - dVar31 * auVar29._0_8_;
      dVar32 = dVar31 * dVar7 - dVar8 * dVar32;
      dVar7 = dVar8 * auVar29._0_8_ - dVar28 * dVar7;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = dVar32 * dVar32 + dVar9 * dVar9 + dVar7 * dVar7;
      auVar30 = sqrtpd(auVar29,auVar30);
      dVar28 = auVar30._0_8_;
      if (dVar28 <= 0.0) {
        dVar8 = 0.0;
        dVar32 = 0.0;
        dVar9 = 0.0;
        dVar28 = 0.0;
      }
      else {
        dVar8 = dVar12 / dVar28;
        dVar9 = dVar8 * dVar9;
        dVar32 = dVar8 * dVar32;
        dVar8 = dVar8 * dVar7;
      }
      if (dVar13 <= dVar28 * dVar14) {
        uVar25 = 0;
        if ((int)uVar23 < *piVar1) {
          uVar25 = uVar26;
        }
        if ((uVar25 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pTVar2->AllocatorInstance).Data;
        pFVar20 = pFVar5 + lVar24;
        *(double *)pFVar20 = dVar9;
        *(double *)(pFVar20 + 8) = dVar32;
        pFVar5 = pFVar5 + lVar24 + 0x10;
        *(double *)pFVar5 = dVar8;
        *(double *)(pFVar5 + 8) = dVar32 * dVar11 + dVar9 * dVar10 + dVar8 * dVar4;
      }
      else {
        uVar25 = 0;
        if ((int)uVar23 < *piVar1) {
          uVar25 = uVar26;
        }
        if ((uVar25 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pTVar2->AllocatorInstance).Data;
        pFVar20 = pFVar5 + lVar24;
        *(undefined8 *)pFVar20 = uVar15;
        *(undefined8 *)(pFVar20 + 8) = uVar16;
        pFVar5 = pFVar5 + lVar24 + 0x10;
        *(undefined8 *)pFVar5 = uVar17;
        *(double *)(pFVar5 + 8) = 0.0;
      }
      uVar23 = uVar23 + 1;
      lVar27 = lVar27 + 0xc;
      lVar24 = lVar24 + 0x20;
    } while ((int)uVar23 < (this->HullTriangles).ArrayNum);
  }
  return;
}

// ComputeStats @ 143392b90

void __thiscall UE::Geometry::FConvexDecomposition3::FConvexPart::ComputeStats(FConvexPart *this)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  TAxisAlignedBox3<double> *pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  FConvexPartHullMeshAdapter local_res8 [4];
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78;
  TVector<double> local_58;
  TAxisAlignedBox3<double> local_40;
  
  if (this->bIsCompact != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsCompact",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\ConvexDecomposition3.cpp"
                       ,0x744,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8[0].ConvexPart = this;
  pTVar5 = TMeshQueries<UE::Geometry::FDynamicMesh3>::GetMeshVerticesCentroid
                     (&local_58,&this->InternalGeo);
  dVar3 = __real_3ff0000000000000;
  dVar2 = (pTVar5->field0_0x0)._s_0.Y;
  (this->GeoCenter).field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
  (this->GeoCenter).field0_0x0._s_0.Y = dVar2;
  (this->GeoCenter).field0_0x0._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
  local_98._s_0.X = (pTVar5->field0_0x0)._s_0.X;
  local_98._s_0.Y = (pTVar5->field0_0x0)._s_0.Y;
  local_98._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
  dVar2 = Geometry::`anonymous_namespace'::GetVolumeUsingReferencePoint<UE::Geometry::FDynamicMesh3>
                    (&this->InternalGeo,(TVector<double> *)&local_98._s_0,dVar3);
  dVar3 = __real_3ff0000000000000;
  local_78._s_0.X = (this->GeoCenter).field0_0x0._s_0.X;
  local_78._s_0.Y = (this->GeoCenter).field0_0x0._s_0.Y;
  this->GeoVolume = dVar2;
  local_78._s_0.Z = (this->GeoCenter).field0_0x0._s_0.Z;
  dVar2 = Geometry::`anonymous_namespace'::
          GetVolumeUsingReferencePoint<UE::Geometry::FConvexPartHullMeshAdapter>
                    (local_res8,(TVector<double> *)&local_78._s_0,dVar3);
  this->HullVolume = dVar2;
  pTVar6 = FDynamicMesh3::GetBounds(&this->InternalGeo,&local_40,false);
  dVar2 = (pTVar6->Min).field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (pTVar6->Min).field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (pTVar6->Max).field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (pTVar6->Min).field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar2;
  dVar3 = (pTVar6->Max).field0_0x0._s_0.Z;
  dVar2 = this->GeoVolume;
  uVar7 = SUB84(dVar2,0);
  uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
  (this->Bounds).Max.field0_0x0._s_0.Y = (pTVar6->Max).field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar3;
  if (dVar2 < 0.0) {
    this->bGeometryVolumeUnreliable = true;
    uVar7 = 0;
    uVar8 = 0;
    this->GeoVolume = 0.0;
  }
  this->HullError = this->HullVolume - (double)CONCAT44(uVar8,uVar7);
  return;
}

// GetHullDepth @ 1433a87a0

double __thiscall
UE::Geometry::FConvexDecomposition3::FConvexPart::GetHullDepth
          (FConvexPart *this,TVector<double> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  
  iVar1 = (this->HullPlanes).ArrayNum;
  lVar6 = (longlong)iVar1;
  if (((this->HullTriangles).ArrayNum != iVar1) &&
     (bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5631276314938835637>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\CompGeom\\ConvexDecomposition3.h"
                         ,0x2b5,"HullTriangles.Num() == NumPlanes"), bVar4)) {
    pcVar3 = (code *)swi(3);
    dVar9 = (double)(*pcVar3)();
    return dVar9;
  }
  dVar9 = __real_ffefffffffffffff;
  if (iVar1 == 0) {
    return 0.0;
  }
  uVar8 = 0;
  uVar14 = SUB84(__real_ffefffffffffffff,0);
  uVar15 = (uint)((ulonglong)__real_ffefffffffffffff >> 0x20);
  if (0 < iVar1) {
    lVar7 = 0;
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->HullPlanes).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X, bVar4)) {
        pcVar3 = (code *)swi(3);
        dVar9 = (double)(*pcVar3)();
        return dVar9;
      }
      pFVar2 = (this->HullPlanes).AllocatorInstance.Data;
      if (((*(double *)(pFVar2 + lVar7) != (double)uVar13) ||
          ((double)uVar12 != *(double *)(pFVar2 + lVar7 + 8))) ||
         ((double)uVar11 != *(double *)(pFVar2 + lVar7 + 0x10))) {
        dVar10 = (*(double *)(pFVar2 + lVar7 + 8) * (param_1->field0_0x0)._s_0.Y +
                  *(double *)(pFVar2 + lVar7) * (param_1->field0_0x0)._s_0.X +
                 *(double *)(pFVar2 + lVar7 + 0x10) * (param_1->field0_0x0)._s_0.Z) -
                 *(double *)(pFVar2 + lVar7 + 0x18);
        if (dVar10 <= (double)CONCAT44(uVar15,uVar14)) {
          dVar10 = (double)CONCAT44(uVar15,uVar14);
        }
        uVar14 = SUB84(dVar10,0);
        uVar15 = (uint)((ulonglong)dVar10 >> 0x20);
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x20;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if ((double)CONCAT44(uVar15,uVar14) != dVar9) {
      uVar14 = uVar14 ^ (uint)__xmm_80000000000000008000000000000000;
      uVar15 = uVar15 ^ __xmm_80000000000000008000000000000000._4_4_;
      goto LAB_1433a892a;
    }
  }
  uVar14 = 0;
  uVar15 = 0;
LAB_1433a892a:
  return (double)CONCAT44(uVar15,uVar14);
}

// InitializeFromInternalGeo @ 1433b8370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FConvexDecomposition3::FConvexPart::InitializeFromInternalGeo
          (FConvexPart *this,FPreprocessMeshOptions *param_1,TTransformSRT3<double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  TAxisAlignedBox3<double> *pTVar11;
  longlong *plVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 local_148 [24];
  TVector<double>_u_0 TStack_130;
  undefined1 local_118 [48];
  bool local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTStack_d0;
  TQuaternion<double>_u_0 local_b8;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  
  FDynamicMesh3::GetBounds(&this->InternalGeo,(TAxisAlignedBox3<double> *)local_148,false);
  dVar20 = 0.0;
  uVar23 = TStack_130._8_4_;
  uVar24 = TStack_130._12_4_;
  uVar25 = TStack_130._16_4_;
  uVar26 = TStack_130._20_4_;
  uVar18 = local_148._8_4_;
  uVar19 = local_148._12_4_;
  uVar16 = local_148._16_4_;
  uVar17 = local_148._20_4_;
  uVar21 = local_148._24_4_;
  uVar22 = local_148._28_4_;
  uVar14 = local_148._0_4_;
  uVar15 = local_148._4_4_;
  dVar5 = TStack_130._s_0.Y - (double)local_148._8_8_;
  if (TStack_130._s_0.Y - (double)local_148._8_8_ <= 0.0) {
    dVar5 = dVar20;
  }
  dVar6 = TStack_130._s_0.Z - (double)local_148._16_8_;
  if (TStack_130._s_0.Z - (double)local_148._16_8_ <= 0.0) {
    dVar6 = dVar20;
  }
  dVar13 = TStack_130._s_0.X - (double)local_148._0_8_;
  if (TStack_130._s_0.X - (double)local_148._0_8_ <= 0.0) {
    dVar13 = dVar20;
  }
  if (dVar5 <= dVar6) {
    dVar5 = dVar6;
  }
  if (dVar5 <= dVar13) {
    dVar5 = dVar13;
  }
  if (__real_4197d78400000000 <= dVar5) {
    dVar5 = __real_4197d78400000000;
  }
  if (dVar5 <= __real_3f1a36e2e0000000) {
    dVar5 = __real_3f1a36e2e0000000;
  }
  dVar20 = __real_3ff0000000000000 / dVar5;
  if (param_1->bMergeEdges != false) {
    local_118._32_8_ = 0.0;
    local_118._0_8_ = &___7FMergeCoincidentMeshEdges_Geometry_UE__6B_;
    local_118[0x18] = false;
    local_118._40_8_ = 0.0;
    local_118._16_8_ = dVar20 * FMergeCoincidentMeshEdges::DEFAULT_TOLERANCE;
    if (dVar20 * FMergeCoincidentMeshEdges::DEFAULT_TOLERANCE <= __real_3cb0000000000000) {
      local_118._16_8_ = __real_3cb0000000000000;
    }
    local_e8 = false;
    fStack_e4 = 0.0;
    fStack_e0 = 0.0;
    fStack_dc = 0.0;
    fStack_d8 = 0.0;
    pTStack_d0 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
    local_118._8_8_ = this;
    FMergeCoincidentMeshEdges::Apply((FMergeCoincidentMeshEdges *)local_118);
    uVar16 = local_148._16_4_;
    uVar17 = local_148._20_4_;
    uVar18 = local_148._8_4_;
    uVar19 = local_148._12_4_;
    uVar14 = local_148._0_4_;
    uVar15 = local_148._4_4_;
    uVar25 = TStack_130._16_4_;
    uVar26 = TStack_130._20_4_;
    uVar23 = TStack_130._8_4_;
    uVar24 = TStack_130._12_4_;
    uVar21 = local_148._24_4_;
    uVar22 = local_148._28_4_;
  }
  if (*(void **)&param_1->CustomPreprocess != (void *)0x0) {
    Core::Private::Function::CheckCallable(*(void **)&param_1->CustomPreprocess);
    plVar1 = *(longlong **)&(param_1->CustomPreprocess).field_0x28;
    pcVar2 = *(code **)&param_1->CustomPreprocess;
    plVar12 = (longlong *)&(param_1->CustomPreprocess).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar12 = plVar1;
    }
    uVar10 = (**(code **)(*plVar12 + 8))();
    (*pcVar2)(uVar10,this);
    pTVar11 = FDynamicMesh3::GetBounds
                        (&this->InternalGeo,(TAxisAlignedBox3<double> *)local_118,false);
    local_148._0_16_ = *(undefined1 (*) [16])&(pTVar11->Min).field0_0x0;
    uVar14 = local_148._0_4_;
    uVar15 = local_148._4_4_;
    uVar18 = local_148._8_4_;
    uVar19 = local_148._12_4_;
    unique0x0000d600 = *(undefined1 (*) [16])((longlong)&(pTVar11->Min).field0_0x0 + 0x10);
    uVar16 = local_148._16_4_;
    uVar17 = local_148._20_4_;
    uVar21 = local_148._24_4_;
    uVar22 = local_148._28_4_;
    TStack_130._8_16_ = *(undefined1 (*) [16])((longlong)&(pTVar11->Max).field0_0x0 + 8);
    uVar23 = TStack_130._8_4_;
    uVar24 = TStack_130._12_4_;
    uVar25 = TStack_130._16_4_;
    uVar26 = TStack_130._20_4_;
    dVar5 = TStack_130._8_8_ - local_148._8_8_;
    dVar20 = TStack_130._16_8_ - local_148._16_8_;
    if (dVar5 <= 0.0) {
      dVar5 = 0.0;
    }
    if (dVar20 <= 0.0) {
      dVar20 = 0.0;
    }
    if (dVar5 <= dVar20) {
      dVar5 = dVar20;
    }
    dVar20 = local_148._24_8_ - local_148._0_8_;
    if (dVar20 <= 0.0) {
      dVar20 = 0.0;
    }
    if (dVar5 <= dVar20) {
      dVar5 = dVar20;
    }
    if (__real_4197d78400000000 <= dVar5) {
      dVar5 = __real_4197d78400000000;
    }
    if (dVar5 <= __real_3f1a36e2e0000000) {
      dVar5 = __real_3f1a36e2e0000000;
    }
    dVar20 = __real_3ff0000000000000 / dVar5;
  }
  dVar6 = __real_3fe0000000000000;
  local_b8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_b8._s_0.W = _UNK_15061cbc8;
  local_b8._s_0.X = 0.0;
  local_b8._s_0.Y = 0.0;
  local_88 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(dVar20,0) ^ (uint)__xmm_80000000000000008000000000000000);
  local_80 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar20;
  dStack_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar20;
  local_98 = ((double)CONCAT44(uVar15,uVar14) + (double)CONCAT44(uVar22,uVar21)) *
             __real_3fe0000000000000 * local_88;
  local_90 = ((double)CONCAT44(uVar19,uVar18) + (double)CONCAT44(uVar24,uVar23)) *
             __real_3fe0000000000000 * local_88;
  local_88 = ((double)CONCAT44(uVar17,uVar16) + (double)CONCAT44(uVar26,uVar25)) *
             __real_3fe0000000000000 * local_88;
  local_70 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * dVar20;
  MeshTransforms::ApplyTransform
            (&this->InternalGeo,(TTransformSRT3<double> *)&local_b8._s_0,false,All);
  uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar10 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dVar8 = _UNK_15061cbc8;
  dVar13 = ___xmm_3ff00000000000000000000000000000;
  uVar14 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0);
  uVar7 = (ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20;
  (param_2->Rotation).field0_0x0._s_0.X = 0.0;
  (param_2->Rotation).field0_0x0._s_0.Y = 0.0;
  (param_2->Rotation).field0_0x0._s_0.Z = dVar13;
  (param_2->Rotation).field0_0x0._s_0.W = dVar8;
  fStack_e0 = (float)uVar10;
  fStack_dc = (float)((ulonglong)uVar10 >> 0x20);
  fStack_d8 = (float)uVar9;
  uStack_d4 = (undefined4)((ulonglong)uVar9 >> 0x20);
  dVar13 = ((double)local_148._8_8_ + TStack_130._s_0.Y) * dVar6;
  auVar3._8_4_ = SUB84(dVar13,0);
  auVar3._0_8_ = ((double)local_148._0_8_ + TStack_130._s_0.X) * dVar6;
  auVar3._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])&(param_2->Translation).field0_0x0 = auVar3;
  (param_2->Translation).field0_0x0._s_0.Z = ((double)local_148._16_8_ + TStack_130._s_0.Z) * dVar6;
  (param_2->Scale3D).field0_0x0._s_0.X = (double)uVar10;
  *(float *)((longlong)&(param_2->Scale3D).field0_0x0 + 8) = fStack_d8;
  *(undefined4 *)((longlong)&(param_2->Scale3D).field0_0x0 + 0xc) = uStack_d4;
  *(undefined4 *)((longlong)&(param_2->Scale3D).field0_0x0 + 0x10) = uVar14;
  *(int *)((longlong)&(param_2->Scale3D).field0_0x0 + 0x14) = (int)uVar7;
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])&(param_2->Scale3D).field0_0x0 = auVar4;
  (param_2->Scale3D).field0_0x0._s_0.Z = dVar5;
  ComputeHull(this,true,dVar20 * param_1->ThickenInputAfterHullFailure);
  ComputeStats(this);
  return;
}

