// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 14

// ~FMinimalHoleFiller @ 14c7b7390

void __thiscall UE::Geometry::FMinimalHoleFiller::~FMinimalHoleFiller(FMinimalHoleFiller *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  FMeshRegionOperator *this_00;
  
  pFVar1 = (this->Curvatures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ExteriorAngleSums).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ExteriorAngleSums).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExteriorAngleSums);
  (this->BoundaryVertices).HashSize = 0;
  FVar3 = (this->BoundaryVertices).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->BoundaryVertices).Elements);
  this_00 = (this->RegionOp).Ptr;
  if (this_00 != (FMeshRegionOperator *)0x0) {
    FMeshRegionOperator::~FMeshRegionOperator(this_00);
    ::operator_delete(this_00,0x6f0);
  }
  pFVar1 = (this->FillLoop).BowtieVertices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FillLoop).Edges.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FillLoop).Vertices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// AddAllEdges @ 14c7d8d10

void __thiscall
UE::Geometry::FMinimalHoleFiller::AddAllEdges
          (FMinimalHoleFiller *this,int param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int local_res10 [2];
  undefined8 local_18;
  undefined4 local_10 [2];
  
  uVar1 = *(ulonglong *)
           (*(longlong *)
             ((this->FillMesh->Edges).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)param_1 >> 9) * 8) + 8 + (ulonglong)(param_1 & 0x1ff) * 0x10);
  uVar3 = (ulonglong)((uint)uVar1 & 0x1ff);
  lVar2 = *(longlong *)
           ((this->FillMesh->TriangleEdges).Blocks.AllocatorInstance.Data +
           ((uVar1 & 0xffffffff) >> 9) * 8);
  local_18 = *(undefined8 *)(lVar2 + uVar3 * 0xc);
  local_10[0] = *(undefined4 *)(lVar2 + 8 + uVar3 * 0xc);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (param_2,local_res10,(bool *)&local_18);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (param_2,local_res10,(bool *)((longlong)&local_18 + 4));
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (param_2,local_res10,(bool *)local_10);
  uVar3 = (ulonglong)((uint)(uVar1 >> 0x20) & 0x1ff);
  lVar2 = *(longlong *)
           ((this->FillMesh->TriangleEdges).Blocks.AllocatorInstance.Data + (uVar1 >> 0x29) * 8);
  local_18 = *(undefined8 *)(lVar2 + uVar3 * 0xc);
  local_10[0] = *(undefined4 *)(lVar2 + 8 + uVar3 * 0xc);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (param_2,local_res10,(bool *)&local_18);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (param_2,local_res10,(bool *)((longlong)&local_18 + 4));
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (param_2,local_res10,(bool *)local_10);
  return;
}

// AspectMetric @ 14c7e2f20

double __thiscall
UE::Geometry::FMinimalHoleFiller::AspectMetric(FMinimalHoleFiller *this,int param_1)

{
  uint *puVar1;
  double *pdVar2;
  undefined8 uVar3;
  FDynamicMesh3 *this_00;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  uint uVar15;
  double dVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint local_res8;
  uint uStackX_c;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50 [3];
  
  this_00 = this->FillMesh;
  puVar1 = (uint *)(*(longlong *)
                     ((this_00->Edges).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x10);
  uVar17 = *puVar1;
  uVar18 = puVar1[1];
  uVar15 = puVar1[2];
  FDynamicMesh3::GetEdgeOpposingV(this_00,(int)&local_res8);
  uVar10 = (ulonglong)(uVar15 & 0x1ff);
  lVar4 = *(longlong *)
           ((this_00->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8);
  uVar3 = *(undefined8 *)(lVar4 + uVar10 * 0xc);
  uVar15 = *(uint *)(lVar4 + 8 + uVar10 * 0xc);
  local_158._0_4_ = (undefined4)uVar3;
  uVar19 = uVar17;
  if (uVar17 == local_158._0_4_) {
    bVar14 = uVar15 == uVar18;
  }
  else {
    uVar20 = (uint)((ulonglong)uVar3 >> 0x20);
    if (uVar17 == uVar20) {
      bVar14 = local_158._0_4_ == uVar18;
    }
    else {
      if (uVar17 != uVar15) goto LAB_14c7e2ffe;
      bVar14 = uVar20 == uVar18;
    }
  }
  if (bVar14) {
    uVar19 = uVar18;
    uVar18 = uVar17;
  }
LAB_14c7e2ffe:
  pFVar5 = (this->FillMesh->Vertices).Blocks.AllocatorInstance.Data;
  uVar10 = (ulonglong)(local_res8 & 0x1ff);
  lVar4 = *(longlong *)(pFVar5 + (ulonglong)(local_res8 >> 9) * 8);
  uVar11 = (ulonglong)(uVar18 & 0x1ff);
  local_80._s_0.Z = *(double *)(lVar4 + 0x10 + uVar10 * 0x18);
  pdVar2 = (double *)(lVar4 + uVar10 * 0x18);
  local_80._s_0.X = *pdVar2;
  local_80._s_0.Y = pdVar2[1];
  lVar6 = *(longlong *)(pFVar5 + (ulonglong)(uVar18 >> 9) * 8);
  uVar12 = (ulonglong)(uVar19 & 0x1ff);
  pdVar2 = (double *)(lVar6 + uVar11 * 0x18);
  local_68._s_0.X = *pdVar2;
  local_68._s_0.Y = pdVar2[1];
  local_68._s_0.Z = *(double *)(lVar6 + 0x10 + uVar11 * 0x18);
  lVar7 = *(longlong *)(pFVar5 + (ulonglong)(uVar19 >> 9) * 8);
  uVar13 = (ulonglong)(uStackX_c & 0x1ff);
  pdVar2 = (double *)(lVar7 + uVar12 * 0x18);
  local_50[0]._0_8_ = *pdVar2;
  local_50[0]._8_8_ = pdVar2[1];
  lVar8 = *(longlong *)(pFVar5 + (ulonglong)(uStackX_c >> 9) * 8);
  local_50[0]._16_8_ = *(double *)(lVar7 + 0x10 + uVar12 * 0x18);
  pdVar2 = (double *)(lVar8 + uVar13 * 0x18);
  local_c8._s_0.X = *pdVar2;
  local_c8._s_0.Y = pdVar2[1];
  local_c8._s_0.Z = *(double *)(lVar8 + 0x10 + uVar13 * 0x18);
  pdVar2 = (double *)(lVar7 + uVar12 * 0x18);
  local_b0._s_0.X = *pdVar2;
  local_b0._s_0.Y = pdVar2[1];
  local_b0._s_0.Z = *(double *)(lVar7 + 0x10 + uVar12 * 0x18);
  pdVar2 = (double *)(lVar6 + uVar11 * 0x18);
  local_110._s_0.X = *pdVar2;
  local_110._s_0.Y = pdVar2[1];
  local_110._s_0.Z = *(double *)(lVar6 + 0x10 + uVar11 * 0x18);
  pdVar2 = (double *)(lVar8 + uVar13 * 0x18);
  local_f8._s_0.X = *pdVar2;
  local_f8._s_0.Y = pdVar2[1];
  local_f8._s_0.Z = *(double *)(lVar8 + 0x10 + uVar13 * 0x18);
  pdVar2 = (double *)(lVar4 + uVar10 * 0x18);
  local_e0._s_0.X = *pdVar2;
  local_e0._s_0.Y = pdVar2[1];
  local_e0._s_0.Z = *(double *)(lVar4 + 0x10 + uVar10 * 0x18);
  pdVar2 = (double *)(lVar7 + uVar12 * 0x18);
  local_158._s_0.X = *pdVar2;
  local_158._s_0.Y = pdVar2[1];
  local_158._s_0.Z = *(double *)(lVar7 + 0x10 + uVar12 * 0x18);
  pdVar2 = (double *)(lVar4 + uVar10 * 0x18);
  local_140._s_0.X = *pdVar2;
  local_140._s_0.Y = pdVar2[1];
  local_140._s_0.Z = *(double *)(lVar4 + 0x10 + uVar10 * 0x18);
  pdVar2 = (double *)(lVar8 + uVar13 * 0x18);
  local_128._s_0.X = *pdVar2;
  local_128._s_0.Y = pdVar2[1];
  local_128._s_0.Z = *(double *)(lVar8 + 0x10 + uVar13 * 0x18);
  local_98._s_0.X = local_110._s_0.X;
  local_98._s_0.Y = local_110._s_0.Y;
  local_98._s_0.Z = local_110._s_0.Z;
  dVar16 = VectorUtil::AspectRatio
                     ((TVector<double> *)&local_128._s_0,(TVector<double> *)&local_140._s_0,
                      (TVector<double> *)&local_158._s_0);
  dVar9 = __real_3ff0000000000000;
  uVar20 = SUB84(dVar16 - __real_3ff0000000000000,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar21 = (uint)((ulonglong)(dVar16 - __real_3ff0000000000000) >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar16 = VectorUtil::AspectRatio
                     ((TVector<double> *)&local_e0._s_0,(TVector<double> *)&local_f8._s_0,
                      (TVector<double> *)&local_110._s_0);
  uVar15 = SUB84(dVar16 - dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar17 = (uint)((ulonglong)(dVar16 - dVar9) >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar16 = VectorUtil::AspectRatio
                     ((TVector<double> *)&local_98._s_0,(TVector<double> *)&local_b0._s_0,
                      (TVector<double> *)&local_c8._s_0);
  uVar18 = SUB84(dVar16 - dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar19 = (uint)((ulonglong)(dVar16 - dVar9) >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar16 = VectorUtil::AspectRatio
                     ((TVector<double> *)&local_50[0]._s_0,(TVector<double> *)&local_68._s_0,
                      (TVector<double> *)&local_80._s_0);
  return ((double)CONCAT44(uVar21,uVar20) + (double)CONCAT44(uVar17,uVar15)) /
         ((double)CONCAT44(uVar19,uVar18) +
         (double)CONCAT44((uint)((ulonglong)(dVar16 - dVar9) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar16 - dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
}

// CollapseToMinimal @ 14c7e9c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UE::Geometry::FMinimalHoleFiller::CollapseToMinimal(FMinimalHoleFiller *this)

{
  ulonglong uVar1;
  bool bVar2;
  FilteredEnumerable *pFVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStackY_4a8 [32];
  FMeshConstraints local_458;
  char local_3a0;
  FilteredEnumerable local_398;
  undefined1 local_358 [32];
  void *local_338;
  undefined4 local_330;
  uint local_32c;
  undefined4 local_328;
  int local_324;
  void *local_318;
  undefined4 local_310;
  ForAnyElementType local_308;
  undefined8 local_300;
  TBitArray<FDefaultBitArrayAllocator> local_2f8;
  undefined4 local_2d8;
  int local_2d4;
  void *local_2c8;
  undefined4 local_2c0;
  int local_2b8;
  ForAnyElementType local_2b0;
  undefined8 local_2a8;
  undefined1 local_298 [200];
  char local_1d0;
  undefined1 local_170;
  bool local_158;
  bool local_157;
  undefined2 local_156;
  bool local_154;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  FRemesher::FRemesher((FRemesher *)local_298,this->FillMesh);
  local_32c = 0x80;
  local_358._0_8_ = (FScriptContainerElement *)0x0;
  local_358._8_8_ = 0;
  local_338 = (void *)0x0;
  local_330 = 0;
  local_324 = 0;
  local_318 = (void *)0x0;
  local_310 = 0;
  local_308.Data = (FScriptContainerElement *)0x0;
  local_300 = 0;
  local_2f8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_2f8.NumBits = 0;
  local_2d4 = 0;
  local_2c8 = (void *)0x0;
  local_2c0 = 0;
  local_2b0.Data = (FScriptContainerElement *)0x0;
  local_2a8._0_4_ = 0;
  local_2a8._4_4_ = 0;
  local_2b8 = 0;
  local_328 = 0xffffffff;
  local_2f8.MaxBits = 0x80;
  local_2d8 = 0xffffffff;
  pFVar3 = FDynamicMesh3::BoundaryEdgeIndicesItr(this->FillMesh,&local_398);
  FMeshConstraintsUtil::FullyConstrainEdges<UE::Geometry::FRefCountVector::FilteredEnumerable>
            ((FMeshConstraints *)local_358,this->FillMesh,pFVar3);
  if ((0 < local_358._8_4_ - local_324) || (0 < (int)local_300 - local_2d4)) {
    FMeshConstraints::FMeshConstraints(&local_458,(FMeshConstraints *)local_358);
    local_3a0 = '\x01';
    if (local_1d0 != '\0') {
      FMeshConstraints::~FMeshConstraints((FMeshConstraints *)(local_298 + 0x10));
    }
    FMeshConstraints::FMeshConstraints((FMeshConstraints *)(local_298 + 0x10),&local_458);
    local_1d0 = '\x01';
    if (local_3a0 != '\0') {
      FMeshConstraints::~FMeshConstraints(&local_458);
    }
  }
  local_157 = true;
  local_154 = true;
  FRemesher::SetTargetEdgeLength((FRemesher *)local_298,__real_47eff933c0000000);
  lVar6 = 0x14;
  local_158 = false;
  local_156._0_1_ = false;
  local_156._1_1_ = false;
  local_170 = 0;
  do {
    FRemesher::Precompute((FRemesher *)local_298);
    FRemesher::BasicRemeshPass((FRemesher *)local_298);
    iVar5 = (this->FillMesh->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
            (this->FillMesh->EdgeRefCounts).RefCounts.CurBlockUsed;
    iVar4 = 0;
    if (0 < iVar5) {
      do {
        bVar2 = ::`anonymous_namespace'::ShouldFlip_CollapseToMinimal(this->FillMesh,iVar4);
        if (bVar2) {
          (**(code **)(this->FillMesh->_padding_ + 0x40))(this->FillMesh,iVar4);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
    }
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  DestructItems<TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,int>
            ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)local_2b0.Data,(int)local_2a8);
  if ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)local_2b0.Data !=
      (TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)0x0) {
    FMemory::Free(local_2b0.Data);
  }
  local_2c0 = 0;
  if (local_2c8 != (void *)0x0) {
    FMemory::Free(local_2c8);
  }
  uVar1 = local_300 >> 0x20;
  local_300 = local_300 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&local_308,0,(int *)((longlong)&local_300 + 4));
  }
  local_2d8 = 0xffffffff;
  local_2d4 = 0;
  local_2f8.NumBits = 0;
  if (0x80 < (uint)local_2f8.MaxBits) {
    local_2f8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_2f8,0);
  }
  if (local_2f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_2f8.AllocatorInstance.SecondaryData);
  }
  if (local_308.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data);
  }
  local_310 = 0;
  if (local_318 != (void *)0x0) {
    FMemory::Free(local_318);
  }
  iVar4 = SUB84(local_358._8_8_,4);
  local_358._8_8_ = local_358._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_358,0,(int *)(local_358 + 0xc));
  }
  local_328 = 0xffffffff;
  local_324 = 0;
  local_330 = 0;
  if (0x80 < local_32c) {
    local_32c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_358 + 0x10),0);
  }
  if (local_338 != (void *)0x0) {
    FMemory::Free(local_338);
  }
  if ((FScriptContainerElement *)local_358._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_358._0_8_);
  }
  FRemesher::~FRemesher((FRemesher *)local_298);
  return;
}

// ComputeGaussCurvature @ 14c7f0980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __thiscall
UE::Geometry::FMinimalHoleFiller::ComputeGaussCurvature(FMinimalHoleFiller *this,int param_1)

{
  longlong lVar1;
  double dVar2;
  int iVar3;
  double *pdVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined1 local_1d8 [48];
  ValueIterator local_1a8;
  ValueIterator local_180;
  undefined1 local_158 [144];
  undefined1 local_c8 [144];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_208;
  uVar8 = 0;
  uVar9 = 0;
  if (*(int *)&(this->ExteriorAngleSums).field_0x8 != *(int *)&(this->ExteriorAngleSums).field_0x34)
  {
    puVar6 = *(undefined1 **)&(this->ExteriorAngleSums).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ExteriorAngleSums).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->ExteriorAngleSums).field_0x48 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->ExteriorAngleSums;
      do {
        if (*(int *)(lVar1 + (longlong)iVar3 * 0x18) == param_1) {
          pdVar4 = TMapBase<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_>
                   ::FindChecked((TMapBase<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_>
                                  *)&this->ExteriorAngleSums,param_1);
          uVar8 = SUB84(*pdVar4,0);
          uVar9 = (undefined4)((ulonglong)*pdVar4 >> 0x20);
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  dVar2 = (double)CONCAT44(uVar9,uVar8);
  FDynamicMesh3::VtxTrianglesItr
            (this->FillMesh,
             (TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)local_1d8,param_1)
  ;
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
            ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_158,&local_1a8
             ,&local_180,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1d8);
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
            ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_c8,&local_180,
             &local_180,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1d8);
  while ((((local_158._0_8_ != local_c8._0_8_ || (local_158._8_4_ != local_c8._8_4_)) ||
          (local_158._24_4_ != local_c8._24_4_)) || (local_158._28_4_ != local_c8._28_4_))) {
    lVar1 = *(longlong *)
             ((this->FillMesh->Triangles).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)local_158._88_4_ >> 9) * 8);
    local_1e8 = *(undefined8 *)(lVar1 + (ulonglong)(local_158._88_4_ & 0x1ff) * 0xc);
    if ((int)local_1e8 == param_1) {
      iVar3 = 0;
    }
    else if ((int)((ulonglong)local_1e8 >> 0x20) == param_1) {
      iVar3 = 1;
    }
    else {
      iVar3 = -1;
      if (*(int *)(lVar1 + 8 + (ulonglong)(local_158._88_4_ & 0x1ff) * 0xc) == param_1) {
        iVar3 = 2;
      }
    }
    dVar7 = FDynamicMesh3::GetTriInternalAngleR(this->FillMesh,local_158._88_4_,iVar3);
    dVar2 = dVar2 + dVar7;
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_158);
  }
  if (local_c8._96_8_ != 0) {
    plVar5 = (longlong *)(local_c8 + 0x70);
    if ((longlong *)local_c8._136_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_c8._136_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_158._96_8_ != 0) {
    plVar5 = (longlong *)(local_158 + 0x70);
    if ((longlong *)local_158._136_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_158._136_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_1d8._0_8_ != 0) {
    plVar5 = (longlong *)(local_1d8 + 0x10);
    if ((longlong *)local_1d8._40_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_1d8._40_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return dVar2 - __real_401921fb60000000;
}

// CurvatureMetricCached @ 14c7fd2c0

double __thiscall
UE::Geometry::FMinimalHoleFiller::CurvatureMetricCached
          (FMinimalHoleFiller *this,int param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  double dVar8;
  
  uVar7 = 0;
  if (param_1 < (this->Curvatures).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      dVar8 = (double)(*pcVar5)();
      return dVar8;
    }
  }
  uVar1 = *(undefined8 *)((this->Curvatures).AllocatorInstance.Data + (longlong)param_1 * 8);
  uVar7 = 0;
  if (param_2 < (this->Curvatures).ArrayNum) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      dVar8 = (double)(*pcVar5)();
      return dVar8;
    }
  }
  uVar2 = *(undefined8 *)((this->Curvatures).AllocatorInstance.Data + (longlong)param_2 * 8);
  uVar7 = 0;
  if (param_3 < (this->Curvatures).ArrayNum) {
    uVar7 = (uint)~param_3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      dVar8 = (double)(*pcVar5)();
      return dVar8;
    }
  }
  uVar3 = *(undefined8 *)((this->Curvatures).AllocatorInstance.Data + (longlong)param_3 * 8);
  uVar7 = 0;
  if (param_4 < (this->Curvatures).ArrayNum) {
    uVar7 = (uint)~param_4 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      dVar8 = (double)(*pcVar5)();
      return dVar8;
    }
  }
  uVar4 = *(undefined8 *)((this->Curvatures).AllocatorInstance.Data + (longlong)param_4 * 8);
  return (double)CONCAT44((uint)((ulonglong)uVar4 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)uVar4 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
         (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)uVar3 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
         (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
}

// CurvatureMetricEval @ 14c7fd4b0

double __thiscall
UE::Geometry::FMinimalHoleFiller::CurvatureMetricEval
          (FMinimalHoleFiller *this,int param_1,int param_2,int param_3,int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = ComputeGaussCurvature(this,param_1);
  dVar2 = ComputeGaussCurvature(this,param_2);
  dVar3 = ComputeGaussCurvature(this,param_3);
  dVar4 = ComputeGaussCurvature(this,param_4);
  return (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
         (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
         (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
}

// Fill @ 14c802ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UE::Geometry::FMinimalHoleFiller::Fill(FMinimalHoleFiller *this,int param_1)

{
  TUniquePtr<UE::Geometry::FMeshRegionOperator,TDefaultDelete<UE::Geometry::FMeshRegionOperator>_>
  *pTVar1;
  double *pdVar2;
  double *pdVar3;
  EMapType EVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  undefined8 uVar14;
  bool bVar15;
  undefined1 uVar16;
  FEdgeLoop *pFVar17;
  ulonglong uVar18;
  FMeshRegionOperator *pFVar19;
  FMeshRegionOperator *pFVar20;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar21;
  uint *puVar22;
  FilteredEnumerable *pFVar23;
  byte bVar24;
  uint *puVar25;
  longlong *plVar26;
  FDynamicMesh3 *pFVar27;
  ForElementType<FSetElementId> FVar28;
  undefined1 *puVar29;
  uint uVar30;
  FScriptContainerElement *pFVar31;
  longlong lVar32;
  int iVar33;
  uint uVar34;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar35;
  bool bVar36;
  double dVar37;
  double dVar38;
  undefined1 auStackY_a48 [32];
  undefined1 local_a18;
  undefined1 local_a17;
  undefined1 local_a16 [2];
  uint local_a14;
  double local_a10;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a08;
  undefined8 uStack_9e8;
  int local_9e0;
  undefined4 uStack_9dc;
  undefined8 local_9d8;
  uint local_9d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_9c8;
  TPairInitializer<int_&,double_&> local_9a8;
  double local_998;
  double local_990;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_988;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_980;
  undefined8 uStack_960;
  undefined1 local_958 [16];
  longlong local_948;
  FDynamicMesh3 *local_940;
  FEdgeLoop local_938;
  EFillType local_8f8;
  int local_8f4;
  uint *local_8e8;
  double *local_8e0;
  int *local_8d8;
  int iStack_8d0;
  undefined4 uStack_8cc;
  code *local_8c8;
  undefined1 *local_8c0;
  TArrayView<int_const_,int> local_8b8;
  TArrayView<int_const_,int> local_8a8;
  double local_898;
  longlong local_888;
  double local_880;
  double local_878;
  double local_870;
  double local_868 [2];
  longlong local_858;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_850;
  uint local_848;
  int iStack_844;
  ulonglong uStack_840;
  FMeshConstraints local_830;
  char local_778;
  FEdgeLoop local_770;
  FilteredEnumerable local_728;
  undefined1 local_6e8 [32];
  void *local_6c8;
  undefined4 local_6c0;
  uint local_6bc;
  undefined4 local_6b8;
  int local_6b4;
  void *local_6a8;
  undefined4 local_6a0;
  ForAnyElementType local_698;
  undefined8 local_690;
  TBitArray<FDefaultBitArrayAllocator> local_688;
  undefined4 local_668;
  int local_664;
  void *local_658;
  undefined4 local_650;
  int local_648;
  ForAnyElementType local_640;
  undefined8 local_638;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_628;
  undefined1 local_5d8 [200];
  char local_510;
  double local_470;
  int local_378;
  int local_374;
  double local_370;
  undefined1 local_368 [80];
  ForAnyElementType local_318;
  undefined8 local_310;
  TBitArray<FDefaultBitArrayAllocator> local_308;
  undefined4 local_2e8;
  undefined4 local_2e4;
  ForElementType<FSetElementId> local_2d8;
  int local_2d0;
  longlong local_2c8;
  longlong local_2b8 [3];
  longlong *local_2a0;
  ForAnyElementType local_270;
  undefined8 local_268;
  undefined1 local_258 [48];
  ValueIterator local_228;
  ValueIterator local_200;
  undefined1 local_1d8 [144];
  undefined1 local_148 [144];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_a48;
  if ((param_1 < 0) && (pFVar27 = this->Mesh, (pFVar27->TriangleGroups).bIsSet != false)) {
    param_1 = pFVar27->GroupIDCounter;
    pFVar27->GroupIDCounter = param_1 + 1;
  }
  local_9a8.Value = (double *)this;
  pFVar17 = FEdgeLoop::FEdgeLoop(&local_770,&this->FillLoop);
  local_940 = this->Mesh;
  local_958._0_8_ = &___7FSimpleHoleFiller_Geometry_UE__6B_;
  local_958._8_8_ = (int *)0x0;
  local_948 = 0;
  FEdgeLoop::FEdgeLoop(&local_938,pFVar17);
  local_8f8 = TriangleFan;
  local_8f4 = -1;
  pFVar6 = (pFVar17->BowtieVertices).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (pFVar17->Edges).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (pFVar17->Vertices).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  bVar15 = FSimpleHoleFiller::Fill((FSimpleHoleFiller *)local_958,param_1);
  if (!bVar15) {
    bVar15 = false;
    goto LAB_14c803e83;
  }
  if (3 < (this->FillLoop).Vertices.ArrayNum) {
    pFVar31 = (this->FillLoop).Edges.AllocatorInstance.Data;
    iVar5 = (this->FillLoop).Edges.ArrayNum;
    pFVar27 = this->Mesh;
    dVar12 = 0.0;
    pFVar6 = pFVar31 + (longlong)iVar5 * 4;
    while( true ) {
      if ((this->FillLoop).Edges.ArrayNum != iVar5) {
        local_a18 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_a18);
      }
      if (pFVar31 == pFVar6) break;
      uVar30 = *(uint *)pFVar31;
      if ((-1 < (int)uVar30) &&
         ((int)uVar30 <
          (int)((pFVar27->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar27->EdgeRefCounts).RefCounts.CurBlockUsed))) {
        if ((ushort)(*(short *)(*(longlong *)
                                 ((pFVar27->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar30 >> 9) * 8) + (ulonglong)(uVar30 & 0x1ff) * 2) -
                    1U) < 0xfffe) {
          pFVar7 = (pFVar27->Vertices).Blocks.AllocatorInstance.Data;
          uVar8 = *(ulonglong *)
                   (*(longlong *)
                     ((pFVar27->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar30 >> 9) * 8)
                   + (ulonglong)(uVar30 & 0x1ff) * 0x10);
          uVar18 = (ulonglong)((uint)uVar8 & 0x1ff);
          lVar32 = *(longlong *)(pFVar7 + ((uVar8 & 0xffffffff) >> 9) * 8);
          pdVar2 = (double *)(lVar32 + uVar18 * 0x18);
          local_898 = *(double *)(lVar32 + 0x10 + uVar18 * 0x18);
          uVar18 = (ulonglong)((uint)(uVar8 >> 0x20) & 0x1ff);
          lVar32 = *(longlong *)(pFVar7 + (uVar8 >> 0x29) * 8);
          pdVar3 = (double *)(lVar32 + uVar18 * 0x18);
          dVar11 = *pdVar3 - *pdVar2;
          dVar37 = *(double *)(lVar32 + 0x10 + uVar18 * 0x18) - local_898;
          dVar38 = pdVar3[1] - pdVar2[1];
          dVar12 = dVar12 + SQRT(dVar38 * dVar38 + dVar11 * dVar11 + dVar37 * dVar37);
        }
      }
      pFVar31 = pFVar31 + 4;
    }
    if (__real_3f1a36e2ea000000 <= dVar12) {
      iVar5 = (int)local_948;
      local_8d8 = (int *)local_958._8_8_;
      if (((int)local_948 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar15)) {
        pcVar10 = (code *)swi(3);
        uVar16 = (*pcVar10)();
        return (bool)uVar16;
      }
      pFVar20 = (FMeshRegionOperator *)0x0;
      iStack_8d0 = iVar5;
      local_8a8._12_4_ = uStack_8cc;
      local_8a8.ArrayNum = iVar5;
      local_8a8.DataPtr = local_8d8;
      local_628.Elements._0_8_ = 0;
      local_628.Elements._8_8_ = 0;
      local_628.Elements._32_8_ = 0;
      local_628.Elements._40_4_ = 0;
      local_628.Elements._44_4_ = 0x80;
      local_628.Elements._48_4_ = 0xffffffff;
      local_628.Elements._52_4_ = 0;
      local_628.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_628.HashSize = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append(&local_628,&local_8a8);
      pFVar19 = ::operator_new(0x6f0);
      if (pFVar19 != (FMeshRegionOperator *)0x0) {
        local_8c0 = local_a16;
        iVar5 = (int)local_948;
        local_8c8 = Core::Private::Function::
                    TFunctionRefCaller<`UE::Geometry::FMinimalHoleFiller::Fill'::__l2::<lambda_1>,void,UE::Geometry::FDynamicSubmesh3_&>
                    ::Call;
        local_8b8.DataPtr = (int *)local_958._8_8_;
        if (((int)local_948 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          uVar16 = (*pcVar10)();
          return (bool)uVar16;
        }
        local_8b8.ArrayNum = iVar5;
        pFVar20 = FMeshRegionOperator::FMeshRegionOperator
                            (pFVar19,this->Mesh,&local_8b8,
                             (TFunctionRef<void___cdecl(UE::Geometry::FDynamicSubmesh3_&)> *)
                             &local_8c8);
      }
      pTVar1 = &this->RegionOp;
      if (pTVar1 == (TUniquePtr<UE::Geometry::FMeshRegionOperator,TDefaultDelete<UE::Geometry::FMeshRegionOperator>_>
                     *)&local_888) {
        if (pFVar20 != (FMeshRegionOperator *)0x0) {
          FMeshRegionOperator::~FMeshRegionOperator(pFVar20);
          goto LAB_14c803297;
        }
      }
      else {
        pFVar19 = pTVar1->Ptr;
        pTVar1->Ptr = pFVar20;
        if (pFVar19 != (FMeshRegionOperator *)0x0) {
          FMeshRegionOperator::~FMeshRegionOperator(pFVar19);
          pFVar20 = pFVar19;
LAB_14c803297:
          ::operator_delete(pFVar20,0x6f0);
        }
      }
      pFVar27 = &(pTVar1->Ptr->Region).Submesh;
      this->FillMesh = pFVar27;
      pTVar21 = ::`anonymous_namespace'::GetBoundaryEdgeVertices(&local_b8,pFVar27);
      pTVar35 = &this->BoundaryVertices;
      if (pTVar35 != pTVar21) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
        Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(pTVar35,pTVar21);
      }
      local_b8.HashSize = 0;
      if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_b8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_b8.Elements);
      if (this->bIgnoreBoundaryTriangles == false) {
        FMeshRegionOperator::BackPropropagate(pTVar1->Ptr,true);
        local_9c8._padding_._0_4_ = 0;
        local_a08.Array =
             (TBitArray<FDefaultBitArrayAllocator> *)&(this->BoundaryVertices).Elements.field_0x10;
        local_9c8._padding_._4_4_ = 1;
        local_9c8.UnvisitedBitMask = 0xffffffff;
        local_9c8.CurrentBitIndex = 0;
        local_9c8.BaseBitIndex = 0;
        local_9c8.Array = local_a08.Array;
        if (*(int *)&(this->BoundaryVertices).Elements.field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_9c8);
        }
        iVar5 = *(int *)&(this->BoundaryVertices).Elements.field_0x28;
        TStack_980._padding_ = CONCAT44(local_9c8._padding_._4_4_,(undefined4)local_9c8._padding_);
        bVar24 = (byte)iVar5 & 0x1f;
        local_9e0 = *(int *)&(this->BoundaryVertices).Elements.field_0x8 -
                    *(int *)&(this->BoundaryVertices).Elements.field_0x34;
        TStack_980.CurrentBitIndex = local_9c8.CurrentBitIndex;
        TStack_980.UnvisitedBitMask = local_9c8.UnvisitedBitMask;
        uStack_9e8._4_4_ = local_9c8._28_4_;
        uStack_9e8._0_4_ = local_9c8.BaseBitIndex;
        local_a08._padding_ = CONCAT44(1 << bVar24,iVar5 >> 5);
        local_a08.CurrentBitIndex = iVar5;
        local_a08.UnvisitedBitMask = -1 << bVar24;
        local_a08._24_8_ = CONCAT44(local_9c8.CurrentBitIndex,iVar5) & 0xffffffffffffffe0;
        uStack_960 = CONCAT44(uStack_9dc,local_9e0);
        TStack_980.Array = local_9c8.Array;
        local_988 = pTVar35;
        TStack_980._24_8_ = uStack_9e8;
        if ((iVar5 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar15)) {
          pcVar10 = (code *)swi(3);
          uVar16 = (*pcVar10)();
          return (bool)uVar16;
        }
        if (iVar5 != *(int *)&(this->BoundaryVertices).Elements.field_0x28) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a08);
        }
        pTVar13 = local_a08.Array;
        local_858 = local_a08._padding_;
        pTStack_850 = local_a08.Array;
        local_848 = local_a08.UnvisitedBitMask;
        iStack_844 = local_a08.CurrentBitIndex;
        uVar14 = _local_848;
        uStack_840 = local_a08._24_8_;
        iStack_844 = local_a08.CurrentBitIndex;
        iVar5 = iStack_844;
        _local_848 = uVar14;
        while( true ) {
          pTVar21 = local_988;
          if (*(int *)&(local_988->Elements).field_0x8 - *(int *)&(local_988->Elements).field_0x34
              != (int)uStack_960) {
            local_a17 = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_a17);
          }
          if (((TStack_980.CurrentBitIndex == iVar5) && (TStack_980.Array == pTVar13)) &&
             (pTVar21 == pTVar35)) break;
          pFVar20 = pTVar1->Ptr;
          local_a10 = 0.0;
          local_a14 = *(uint *)(*(longlong *)&pTVar21->Elements +
                               (longlong)TStack_980.CurrentBitIndex * 0xc);
          lVar32 = (longlong)(int)local_a14;
          if (((int)local_a14 < 0) ||
             ((iVar33 = (pFVar20->ReinsertSubToBaseMapV).MaxIndex, -1 < iVar33 &&
              (iVar33 <= (int)local_a14)))) {
LAB_14c8034c7:
            uVar30 = 0xffffffff;
          }
          else {
            EVar4 = (pFVar20->ReinsertSubToBaseMapV).MapType;
            if (EVar4 == Dense) {
              uVar30 = 0;
              if ((int)local_a14 < (pFVar20->ReinsertSubToBaseMapV).Dense.ArrayNum) {
                uVar30 = ~local_a14 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar10 = (code *)swi(3);
                uVar16 = (*pcVar10)();
                return (bool)uVar16;
              }
              uVar30 = *(uint *)((pFVar20->ReinsertSubToBaseMapV).Dense.AllocatorInstance.Data +
                                lVar32 * 4);
            }
            else if (EVar4 == Sparse) {
              if (*(int *)&(pFVar20->ReinsertSubToBaseMapV).Sparse.field_0x8 !=
                  *(int *)&(pFVar20->ReinsertSubToBaseMapV).Sparse.field_0x34) {
                puVar9 = *(undefined1 **)&(pFVar20->ReinsertSubToBaseMapV).Sparse.field_0x40;
                puVar29 = &(pFVar20->ReinsertSubToBaseMapV).Sparse.field_0x38;
                if (puVar9 != (undefined1 *)0x0) {
                  puVar29 = puVar9;
                }
                uVar30 = *(uint *)(puVar29 +
                                  (ulonglong)
                                  (*(int *)&(pFVar20->ReinsertSubToBaseMapV).Sparse.field_0x48 - 1U
                                  & local_a14) * 4);
                if (uVar30 != 0xffffffff) {
                  do {
                    puVar25 = (uint *)((longlong)(int)uVar30 * 0x10 +
                                      *(longlong *)&(pFVar20->ReinsertSubToBaseMapV).Sparse);
                    if (*puVar25 == local_a14) {
                      puVar22 = puVar25 + 1;
                      if (puVar25 == (uint *)0x0) {
                        puVar22 = (uint *)0x0;
                      }
                      if (puVar22 != (uint *)0x0) {
                        uVar30 = *puVar22;
                        goto LAB_14c8034cf;
                      }
                      break;
                    }
                    uVar30 = puVar25[2];
                  } while (uVar30 != 0xffffffff);
                }
              }
              uVar30 = local_a14 * (pFVar20->ReinsertSubToBaseMapV).DefaultScale +
                       (pFVar20->ReinsertSubToBaseMapV).DefaultOffset;
            }
            else {
              if (EVar4 != ScaleAndOffset) {
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("false",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\SparseIndexCollectionTypes.h"
                                    ,0x14d,L"");
                if (bVar15) {
                  pcVar10 = (code *)swi(3);
                  uVar16 = (*pcVar10)();
                  return (bool)uVar16;
                }
                goto LAB_14c8034c7;
              }
              uVar30 = local_a14 * (pFVar20->ReinsertSubToBaseMapV).DefaultScale +
                       (pFVar20->ReinsertSubToBaseMapV).DefaultOffset;
            }
          }
LAB_14c8034cf:
          FDynamicMesh3::VtxTrianglesItr
                    (pTVar1->Ptr->BaseMesh,
                     (TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)local_258,
                     uVar30);
          TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
          TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                    ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_1d8,
                     &local_228,&local_200,
                     (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_258);
          TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
          TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                    ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_148,
                     &local_200,&local_200,
                     (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_258);
          while ((((this = (FMinimalHoleFiller *)local_9a8.Value, local_1d8._0_8_ != local_148._0_8_
                   || (local_1d8._8_4_ != local_148._8_4_)) ||
                  (local_1d8._24_4_ != local_148._24_4_)) || (local_1d8._28_4_ != local_148._28_4_))
                ) {
            uVar34 = (uint)local_1d8._88_8_;
            if (local_628.Elements._8_4_ != local_628.Elements._52_4_) {
              FVar28 = (ForElementType<FSetElementId>)&local_628.Hash;
              if (local_628.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar28 = local_628.Hash.SecondaryData;
              }
              for (iVar33 = *(int *)((longlong)FVar28 +
                                    ((ulonglong)(local_628.HashSize - 1) &
                                    local_1d8._88_8_ & 0xffffffff) * 4); iVar33 != -1;
                  iVar33 = *(int *)(local_628.Elements._0_8_ + 4 + (longlong)iVar33 * 0xc)) {
                if (*(uint *)(local_628.Elements._0_8_ + (longlong)iVar33 * 0xc) == uVar34)
                goto LAB_14c803733;
              }
            }
            pFVar27 = pTVar1->Ptr->BaseMesh;
            lVar32 = *(longlong *)
                      ((pFVar27->Triangles).Blocks.AllocatorInstance.Data +
                      ((local_1d8._88_8_ & 0xffffffff) >> 9) * 8);
            local_9d8 = *(undefined8 *)(lVar32 + (ulonglong)(uVar34 & 0x1ff) * 0xc);
            local_9d0 = *(uint *)(lVar32 + 8 + (ulonglong)(uVar34 & 0x1ff) * 0xc);
            if ((uint)local_9d8 == uVar30) {
              iVar33 = 0;
            }
            else if ((uint)((ulonglong)local_9d8 >> 0x20) == uVar30) {
              iVar33 = 1;
            }
            else {
              iVar33 = -1;
              if (local_9d0 == uVar30) {
                iVar33 = 2;
              }
            }
            dVar12 = FDynamicMesh3::GetTriInternalAngleR(pFVar27,uVar34,iVar33);
            local_a10 = local_a10 + dVar12;
LAB_14c803733:
            TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                      ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_1d8)
            ;
          }
          pTVar35 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                    ((longlong)local_9a8.Value + 0x80);
          if (local_148._96_8_ != 0) {
            plVar26 = (longlong *)(local_148 + 0x70);
            if ((longlong *)local_148._136_8_ != (longlong *)0x0) {
              plVar26 = (longlong *)local_148._136_8_;
            }
            (**(code **)(*plVar26 + 0x10))();
          }
          if (local_1d8._96_8_ != 0) {
            plVar26 = (longlong *)(local_1d8 + 0x70);
            if ((longlong *)local_1d8._136_8_ != (longlong *)0x0) {
              plVar26 = (longlong *)local_1d8._136_8_;
            }
            (**(code **)(*plVar26 + 0x10))();
          }
          if (local_258._0_8_ != 0) {
            plVar26 = (longlong *)(local_258 + 0x10);
            if ((longlong *)local_258._40_8_ != (longlong *)0x0) {
              plVar26 = (longlong *)local_258._40_8_;
            }
            (**(code **)(*plVar26 + 0x10))();
          }
          local_8e8 = &local_a14;
          local_8e0 = &local_a10;
          TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_&,double_&>_>
                    ((TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>
                      *)((longlong)this + 0xd0),&local_9a8,(bool *)&local_8e8);
          TStack_980.UnvisitedBitMask = TStack_980.UnvisitedBitMask & ~TStack_980._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_980);
        }
      }
      TMeshQueries<UE::Geometry::FDynamicMesh3>::EdgeLengthStatsFromEdges
                (this->Mesh,&(this->FillLoop).Edges,&local_870,local_868,&local_998);
      TMeshQueries<UE::Geometry::FDynamicMesh3>::EdgeLengthStats
                (this->FillMesh,&local_880,&local_990,&local_878,0);
      dVar12 = local_998;
      if (__real_4024000000000000 < local_990 / local_998) {
        dVar12 = local_990 * __real_3fb999999999999a;
      }
      FRemesher::FRemesher((FRemesher *)local_5d8,this->FillMesh);
      local_370 = __real_3f847ae147ae147b;
      local_470 = __real_3ff0000000000000;
      local_5d8._0_8_ = &___7FQueueRemesher_Geometry_UE__6B_;
      local_378 = 0x14;
      local_374 = 0x14;
      local_368._0_8_ = (void *)0x0;
      local_368._8_4_ = 0;
      local_368._12_4_ = -1;
      local_368._32_8_ = (void *)0x0;
      local_368._40_4_ = 0;
      local_368._44_4_ = 0x80;
      local_368._48_4_ = 0xffffffff;
      local_368._52_4_ = 0;
      local_368._64_8_ = (ForElementType<FSetElementId>)0x0;
      local_368._72_4_ = 0;
      local_318.Data = (FScriptContainerElement *)0x0;
      local_310 = 0;
      local_308.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_308.NumBits = 0;
      local_308.MaxBits = 0x80;
      local_2e8 = 0xffffffff;
      local_2e4 = 0;
      local_2d8 = (ForElementType<FSetElementId>)0x0;
      local_2d0 = 0;
      local_2c8 = 0;
      local_2a0 = (longlong *)0x0;
      local_270.Data = (FScriptContainerElement *)0x0;
      local_268._0_4_ = 0;
      local_268._4_4_ = 0;
      local_6e8._0_8_ = (FScriptContainerElement *)0x0;
      local_6e8._8_8_ = 0;
      local_6c8 = (void *)0x0;
      local_6c0 = 0;
      local_6bc = 0x80;
      local_6b8 = 0xffffffff;
      local_6b4 = 0;
      local_6a8 = (void *)0x0;
      local_6a0 = 0;
      local_698.Data = (FScriptContainerElement *)0x0;
      local_690 = 0;
      local_688.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_688.NumBits = 0;
      local_688.MaxBits = 0x80;
      local_668 = 0xffffffff;
      local_664 = 0;
      local_658 = (void *)0x0;
      local_650 = 0;
      local_640.Data = (FScriptContainerElement *)0x0;
      local_638._0_4_ = 0;
      local_638._4_4_ = 0;
      local_648 = 0;
      pFVar23 = FDynamicMesh3::BoundaryEdgeIndicesItr(this->FillMesh,&local_728);
      FMeshConstraintsUtil::FullyConstrainEdges<UE::Geometry::FRefCountVector::FilteredEnumerable>
                ((FMeshConstraints *)local_6e8,this->FillMesh,pFVar23);
      if ((0 < local_6e8._8_4_ - local_6b4) || (0 < (int)local_690 - local_664)) {
        FMeshConstraints::FMeshConstraints(&local_830,(FMeshConstraints *)local_6e8);
        local_778 = '\x01';
        if (local_510 != '\0') {
          FMeshConstraints::~FMeshConstraints((FMeshConstraints *)(local_5d8 + 0x10));
        }
        FMeshConstraints::FMeshConstraints((FMeshConstraints *)(local_5d8 + 0x10),&local_830);
        local_510 = '\x01';
        if (local_778 != '\0') {
          FMeshConstraints::~FMeshConstraints(&local_830);
        }
      }
      FRemesher::SetTargetEdgeLength((FRemesher *)local_5d8,dVar12);
      FQueueRemesher::FastestRemesh((FQueueRemesher *)local_5d8);
      CollapseToMinimal(this);
      RemoveRemainingInteriorVerts(this);
      bVar15 = this->bOptimizeDevelopability;
      if ((bVar15 == false) || (this->bOptimizeTriangles == false)) {
        FlipToFlatter(this);
        bVar36 = false;
        if (bVar15 != false) goto LAB_14c803b0a;
      }
      else {
        bVar36 = true;
        FlipToFlatter(this);
LAB_14c803b0a:
        FlipToMinimizeCurvature(this);
        if (bVar36) {
          FlipToImproveAspectRatios(this);
        }
      }
      FMeshRegionOperator::BackPropropagate((this->RegionOp).Ptr,true);
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,
                 &((this->RegionOp).Ptr)->CurrentBaseTris);
      bVar15 = true;
      DestructItems<TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,int>
                ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)local_640.Data,(int)local_638);
      if ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)local_640.Data !=
          (TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)0x0) {
        FMemory::Free(local_640.Data);
      }
      local_650 = 0;
      if (local_658 != (void *)0x0) {
        FMemory::Free(local_658);
      }
      bVar36 = local_690._4_4_ != 0;
      local_690 = (ulonglong)local_690._4_4_ << 0x20;
      if (bVar36) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&local_698,0,(int *)((longlong)&local_690 + 4));
      }
      local_668 = 0xffffffff;
      local_664 = 0;
      local_688.NumBits = 0;
      if (0x80 < (uint)local_688.MaxBits) {
        local_688.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_688,0);
      }
      if (local_688.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_688.AllocatorInstance.SecondaryData);
      }
      if (local_698.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_698.Data);
      }
      local_6a0 = 0;
      if (local_6a8 != (void *)0x0) {
        FMemory::Free(local_6a8);
      }
      bVar36 = local_6e8._12_4_ != 0;
      local_6e8._8_8_ = (ulonglong)(uint)local_6e8._12_4_ << 0x20;
      if (bVar36) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)local_6e8,0,(int *)(local_6e8 + 0xc));
      }
      local_6b8 = 0xffffffff;
      local_6b4 = 0;
      local_6c0 = 0;
      if (0x80 < local_6bc) {
        local_6bc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_6e8 + 0x10),0);
      }
      if (local_6c8 != (void *)0x0) {
        FMemory::Free(local_6c8);
      }
      if ((FScriptContainerElement *)local_6e8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_6e8._0_8_);
      }
      if (local_270.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.Data);
      }
      if (local_2c8 != 0) {
        plVar26 = local_2b8;
        if (local_2a0 != (longlong *)0x0) {
          plVar26 = local_2a0;
        }
        (**(code **)(*plVar26 + 0x10))();
      }
      local_2d0 = 0;
      if (local_2d8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_2d8);
      }
      bVar36 = local_310._4_4_ != 0;
      local_310 = (ulonglong)local_310._4_4_ << 0x20;
      if (bVar36) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&local_318,0,(int *)((longlong)&local_310 + 4));
      }
      local_2e8 = 0xffffffff;
      local_2e4 = 0;
      local_308.NumBits = 0;
      if (0x80 < (uint)local_308.MaxBits) {
        local_308.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_308,0);
      }
      if (local_308.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_308.AllocatorInstance.SecondaryData);
      }
      if (local_318.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_318.Data);
      }
      if (local_368._12_4_ != -1) {
        local_368._72_4_ = 0;
        if ((ForElementType<FSetElementId>)local_368._64_8_ != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_368._64_8_);
        }
        local_368._8_4_ = 0;
        if (local_368._12_4_ != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)local_368,0,(int *)(local_368 + 0xc));
        }
        local_368._48_4_ = 0xffffffff;
        local_368._52_4_ = 0;
        local_368._40_4_ = 0;
        if (0x80 < (uint)local_368._44_4_) {
          local_368._44_4_ = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_368 + 0x10),0);
        }
        if ((void *)local_368._32_8_ != (void *)0x0) {
          FMemory::Free((void *)local_368._32_8_);
        }
        if ((void *)local_368._0_8_ != (void *)0x0) {
          FMemory::Free((void *)local_368._0_8_);
        }
      }
      FRemesher::~FRemesher((FRemesher *)local_5d8);
      local_628.HashSize = 0;
      if (local_628.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_628.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_628.Elements);
      goto LAB_14c803e83;
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TArray<int,TSizedDefaultAllocator<32>_> *)(local_958 + 8));
  bVar15 = true;
LAB_14c803e83:
  local_958._0_8_ = &___7FSimpleHoleFiller_Geometry_UE__6B_;
  if (local_938.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_938.BowtieVertices.AllocatorInstance.Data);
  }
  if (local_938.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_938.Edges.AllocatorInstance.Data);
  }
  if (local_938.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_938.Vertices.AllocatorInstance.Data);
  }
  if ((int *)local_958._8_8_ != (int *)0x0) {
    FMemory::Free((void *)local_958._8_8_);
  }
  return bVar15;
}

// FlipToFlatter @ 14c8084e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UE::Geometry::FMinimalHoleFiller::FlipToFlatter(FMinimalHoleFiller *this)

{
  FDynamicMesh3 *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  longlong *plVar9;
  bool bVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  double dVar22;
  undefined1 auStackY_258 [32];
  undefined1 local_228 [4];
  uint local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  longlong *local_210;
  int iStack_208;
  uint uStack_204;
  TBitArray<FDefaultBitArrayAllocator> *local_200;
  undefined4 uStack_1f8;
  uint uStack_1f4;
  int local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  longlong *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  TVector<double>_u_0 local_1b0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined4 local_114;
  undefined1 local_108 [32];
  uint *local_e8;
  uint local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  int local_d4;
  ForElementType<FSetElementId> local_c8;
  int local_c0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_258;
  pFVar1 = this->FillMesh;
  uVar13 = 0;
  local_108._0_8_ = 0;
  local_108._8_8_ = 0;
  local_e8 = (uint *)0x0;
  local_e0 = 0;
  local_dc = 0x80;
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_c8 = (ForElementType<FSetElementId>)0x0;
  local_c0 = 0;
  local_224 = 0;
  uVar18 = (pFVar1->EdgeRefCounts).RefCounts.CurBlockUsed +
           (pFVar1->EdgeRefCounts).RefCounts.CurBlock * 0x200;
  uVar17 = uVar13;
  if (((uVar18 != 0) &&
      (pFVar2 = (pFVar1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar17 = 0,
      0xfffd < (ushort)(**(short **)pFVar2 - 1U))) && (uVar17 = 1, 1 < (int)uVar18)) {
    do {
      uVar12 = (ulonglong)((uint)uVar17 & 0x1ff);
      lVar11 = *(longlong *)(pFVar2 + (uVar17 >> 9) * 8);
      if ((*(short *)(lVar11 + uVar12 * 2) != 0) && (*(short *)(lVar11 + uVar12 * 2) != -1)) break;
      uVar14 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar14;
    } while ((int)uVar14 < (int)uVar18);
  }
  uVar12 = uVar13;
  if ((uint)uVar17 != uVar18) {
LAB_14c8085f0:
    do {
      local_220 = (int)uVar17;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_108,&local_21c,
                 (bool *)&local_220);
      uVar14 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar14;
      if ((int)uVar14 < (int)uVar18) {
        do {
          uVar13 = (ulonglong)((uint)uVar17 & 0x1ff);
          lVar11 = *(longlong *)
                    ((pFVar1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (uVar17 >> 9) * 8);
          if ((*(short *)(lVar11 + uVar13 * 2) != 0) && (*(short *)(lVar11 + uVar13 * 2) != -1))
          goto LAB_14c8085f0;
          uVar14 = (uint)uVar17 + 1;
          uVar17 = (ulonglong)uVar14;
        } while ((int)uVar14 < (int)uVar18);
      }
    } while (uVar14 != uVar18);
    uVar13 = (ulonglong)local_e0;
    uVar12 = (ulonglong)local_224;
  }
  dVar7 = __real_3fb999999999999a;
  dVar6 = __real_3e45798ee2308c3a;
  uVar5 = _UNK_15060db28;
  uVar4 = ___xmm_ffffffffffffffffffffffffffffffff;
  iVar21 = 0;
  local_b8.Elements._0_8_ = 0;
  local_b8.Elements._8_8_ = 0;
  local_b8.Elements._32_8_ = 0;
  local_b8.Elements._40_4_ = 0;
  local_b8.Elements._44_4_ = 0x80;
  local_b8.Elements._48_4_ = 0xffffffff;
  local_b8.Elements._52_4_ = 0;
  local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_b8.HashSize = 0;
  while( true ) {
    uVar18 = (uint)uVar13;
    local_224 = (int)uVar12 + 1;
    if (1 < iVar21) break;
    iVar15 = local_108._8_4_ - local_d4;
    if (iVar15 < 1) break;
    iVar21 = iVar21 + 1;
    uStack_204 = 1;
    local_1f0 = 0;
    uStack_1f4 = 0;
    iStack_208 = 0;
    if (uVar18 != 0) {
      puVar19 = (uint *)(local_108 + 0x10);
      if (local_e8 != (uint *)0x0) {
        puVar19 = local_e8;
      }
      uVar14 = *puVar19;
      local_1f0 = 0;
      while (uVar14 == 0) {
        lVar11 = (longlong)iStack_208;
        local_1f0 = local_1f0 + 0x20;
        iStack_208 = iStack_208 + 1;
        uStack_1f4 = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_208)
        goto LAB_14c808761;
        uVar14 = puVar19[lVar11 + 1];
      }
      uStack_204 = -uVar14 & uVar14;
      uVar17 = (ulonglong)uStack_204 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_218 = (int)lVar11;
      uStack_1f4 = local_1f0 + -1 + local_218;
      if ((int)uVar18 < (int)uStack_1f4) {
        uStack_1f4 = uVar18;
      }
    }
LAB_14c808761:
    local_210 = (longlong *)local_108;
    local_200 = (TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10);
    uVar14 = uVar18 & 0xffffffe0;
    TStack_1d8._padding_ = CONCAT44(uStack_204,iStack_208);
    uStack_1f8 = 0xffffffff;
    TStack_1d8.CurrentBitIndex = uStack_1f4;
    TStack_1d8.UnvisitedBitMask = 0xffffffff;
    uStack_1ec = local_114;
    TStack_1d8._28_4_ = local_114;
    TStack_1d8.BaseBitIndex = local_1f0;
    uStack_1b8 = CONCAT44(uStack_1e4,iVar15);
    iVar16 = (int)uVar18 >> 5;
    uVar20 = uVar18;
    iStack_1e8 = iVar15;
    local_1e0 = local_210;
    TStack_1d8.Array = local_200;
    if (((int)uVar18 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), uVar20 = local_e0, bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar8 = local_224;
    if (uVar18 != uVar20) {
      puVar19 = (uint *)(local_108 + 0x10);
      if (local_e8 != (uint *)0x0) {
        puVar19 = local_e8;
      }
      uVar18 = -1 << ((byte)uVar13 & 0x1f) & puVar19[iVar16];
      while (uVar18 == 0) {
        lVar11 = (longlong)iVar16;
        uVar14 = uVar14 + 0x20;
        iVar16 = iVar16 + 1;
        uVar18 = uVar20;
        if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_14c808871;
        uVar18 = puVar19[lVar11 + 1];
      }
      uVar17 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_214 = (int)lVar11;
      uVar18 = local_214 + -1 + uVar14;
      if ((int)uVar20 < (int)uVar18) {
        uVar18 = uVar20;
      }
    }
LAB_14c808871:
    while( true ) {
      plVar9 = local_1e0;
      if ((int)local_1e0[1] - *(int *)((longlong)local_1e0 + 0x34) != (int)uStack_1b8) {
        local_228[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_228);
      }
      if (((TStack_1d8.CurrentBitIndex == uVar18) &&
          (TStack_1d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10))) &&
         (plVar9 == (longlong *)local_108)) break;
      pFVar1 = this->FillMesh;
      uVar14 = *(uint *)(*plVar9 + (longlong)TStack_1d8.CurrentBitIndex * 0xc);
      if ((-1 < (int)uVar14) &&
         ((int)uVar14 <
          (int)((pFVar1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar1->EdgeRefCounts).RefCounts.CurBlockUsed))) {
        if (((ushort)(*(short *)(*(longlong *)
                                  ((pFVar1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                  (ulonglong)(uVar14 >> 9) * 8) + (ulonglong)(uVar14 & 0x1ff) * 2) -
                     1U) < 0xfffe) &&
           (*(int *)(*(longlong *)
                      ((pFVar1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar14 >> 9) * 8)
                     + 0xc + (ulonglong)(uVar14 & 0x1ff) * 0x10) != -1)) {
          bVar10 = false;
          ::`anonymous_namespace'::GetEdgeFlipNormals
                    (pFVar1,uVar14,(TVector<double> *)&local_198._s_0,
                     (TVector<double> *)&local_1b0._s_0,(TVector<double> *)&local_168._s_0,
                     (TVector<double> *)&local_180._s_0);
          dVar22 = local_1b0._s_0.Y * local_198._s_0.Y + local_1b0._s_0.X * local_198._s_0.X +
                   local_1b0._s_0.Z * local_198._s_0.Z;
          if (((int)uVar8 < 0x14) && (dVar22 < dVar7)) {
            bVar10 = true;
          }
          if (dVar22 + dVar6 <
              local_180._s_0.Y * local_168._s_0.Y + local_180._s_0.X * local_168._s_0.X +
              local_180._s_0.Z * local_168._s_0.Z) {
            bVar10 = true;
          }
          if (bVar10) {
            local_14c = uVar4;
            uStack_144 = uVar5;
            local_13c = 0xffffffffffffffff;
            iVar15 = (**(code **)(this->FillMesh->_padding_ + 0x40))(this->FillMesh,uVar14);
            if (iVar15 == 0) {
              AddAllEdges(this,uVar14,&local_b8);
              iVar21 = 0;
            }
          }
        }
      }
      TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
    }
    ::`anonymous_namespace'::SwapSets
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_108,&local_b8);
    if (local_b8.Elements._8_4_ != local_b8.Elements._52_4_) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(&local_b8);
      if ((longlong)local_b8.Elements._8_8_ < 0) {
        local_b8.Elements._8_8_ = (ulonglong)(uint)local_b8.Elements._12_4_ << 0x20;
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)&local_b8,0,(int *)&local_b8.Elements.field_0xc);
      }
      else {
        local_b8.Elements._8_8_ = (ulonglong)(uint)local_b8.Elements._12_4_ << 0x20;
      }
      local_b8.Elements._48_4_ = 0xffffffff;
      local_b8.Elements._52_4_ = 0;
      local_b8.Elements._40_4_ = 0;
    }
    uVar12 = (ulonglong)uVar8;
    if (0x27 < (int)uVar8) break;
    uVar13 = (ulonglong)local_e0;
  }
  local_b8.HashSize = 0;
  if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_b8.Elements);
  local_c0 = 0;
  if (local_c8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_108);
  return;
}

// FlipToImproveAspectRatios @ 14c808b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FMinimalHoleFiller::FlipToImproveAspectRatios(FMinimalHoleFiller *this)

{
  FDynamicMesh3 *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  undefined1 auStackY_218 [32];
  undefined1 local_1e8 [8];
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  undefined8 local_1c0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1b8;
  uint uStack_1b0;
  uint uStack_1ac;
  TBitArray<FDefaultBitArrayAllocator> *local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  uint local_198;
  undefined4 uStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  undefined1 local_158 [4];
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_144;
  undefined4 local_11c;
  undefined1 local_118 [32];
  uint *local_f8;
  uint local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  uint local_e4;
  ForElementType<FSetElementId> local_d8;
  int local_d0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_c8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pFVar1 = this->FillMesh;
  uVar23 = 0;
  local_118._0_8_ = 0;
  local_118._8_8_ = 0;
  local_f8 = (uint *)0x0;
  local_f0 = 0;
  local_ec = 0x80;
  local_e8 = 0xffffffff;
  local_e4 = 0;
  local_d8 = (ForElementType<FSetElementId>)0x0;
  local_d0 = 0;
  uVar19 = (pFVar1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar1->EdgeRefCounts).RefCounts.CurBlockUsed;
  uVar18 = uVar23;
  if ((uVar19 != 0) &&
     (pFVar2 = (pFVar1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar18 = 0,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar18 = 1;
    uVar15 = 1;
    if ((int)uVar19 < 2) goto LAB_14c808c58;
    do {
      uVar14 = (ulonglong)((uint)uVar18 & 0x1ff);
      lVar13 = *(longlong *)(pFVar2 + (uVar18 >> 9) * 8);
      if ((*(short *)(lVar13 + uVar14 * 2) != 0) && (*(short *)(lVar13 + uVar14 * 2) != -1)) break;
      uVar15 = (uint)uVar18 + 1;
      uVar18 = (ulonglong)uVar15;
    } while ((int)uVar15 < (int)uVar19);
  }
  uVar15 = (uint)uVar18;
LAB_14c808c58:
  uVar14 = uVar23;
  uVar24 = uVar23;
  if (uVar15 != uVar19) {
LAB_14c808c60:
    do {
      local_1d8 = (int)uVar18;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_118,&local_1d0,
                 (bool *)&local_1d8);
      uVar15 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar15;
      if ((int)uVar15 < (int)uVar19) {
        do {
          uVar23 = (ulonglong)((uint)uVar18 & 0x1ff);
          lVar13 = *(longlong *)
                    ((pFVar1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (uVar18 >> 9) * 8);
          if ((*(short *)(lVar13 + uVar23 * 2) != 0) && (*(short *)(lVar13 + uVar23 * 2) != -1))
          goto LAB_14c808c60;
          uVar15 = (uint)uVar18 + 1;
          uVar18 = (ulonglong)uVar15;
        } while ((int)uVar15 < (int)uVar19);
      }
    } while (uVar15 != uVar19);
    uVar24 = (ulonglong)local_e4;
    uVar23 = (ulonglong)local_f0;
    uVar14 = local_118._8_8_ & 0xffffffff;
  }
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar19 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar9 = _UNK_15060db28;
  uVar8 = ___xmm_ffffffffffffffffffffffffffffffff;
  dVar7 = __real_3ff0000000000000;
  iVar16 = 0;
  local_c8.Elements._0_8_ = 0;
  local_c8.Elements._8_8_ = 0;
  local_c8.Elements._32_8_ = 0;
  local_c8.Elements._40_4_ = 0;
  local_c8.Elements._44_4_ = 0x80;
  local_c8.Elements._48_4_ = 0xffffffff;
  local_c8.Elements._52_4_ = 0;
  local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_c8.HashSize = 0;
  if (0 < (int)uVar14 - (int)uVar24) {
    while( true ) {
      uVar20 = (uint)uVar23;
      local_1d4 = iVar16 + 1;
      if (0x13 < iVar16) break;
      uStack_1b0 = 0;
      uStack_1ac = 1;
      local_198 = 0;
      uStack_19c = uStack_1b0;
      if (uVar20 != 0) {
        puVar21 = (uint *)(local_118 + 0x10);
        if (local_f8 != (uint *)0x0) {
          puVar21 = local_f8;
        }
        uVar25 = *puVar21;
        local_198 = 0;
        uStack_1b0 = 0;
        while (uVar25 == 0) {
          lVar13 = (longlong)(int)uStack_1b0;
          local_198 = local_198 + 0x20;
          uStack_1b0 = uStack_1b0 + 1;
          uStack_19c = uVar20;
          if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1b0)
          goto LAB_14c808de1;
          uVar25 = puVar21[lVar13 + 1];
        }
        uStack_1ac = -uVar25 & uVar25;
        uVar18 = (ulonglong)uStack_1ac * 2 + 1;
        lVar13 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_1cc = (int)lVar13;
        uStack_19c = (local_198 - 1) + local_1cc;
        if ((int)uVar20 < (int)uStack_19c) {
          uStack_19c = uVar20;
        }
      }
LAB_14c808de1:
      iStack_190 = (int)uVar14 - (int)uVar24;
      local_1a8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10);
      TStack_180._padding_ = CONCAT44(uStack_1ac,uStack_1b0);
      uStack_1a0 = 0xffffffff;
      uVar25 = uVar20 & 0xffffffe0;
      TStack_180.CurrentBitIndex = uStack_19c;
      TStack_180.UnvisitedBitMask = 0xffffffff;
      uStack_194 = local_11c;
      TStack_180._28_4_ = local_11c;
      TStack_180.BaseBitIndex = local_198;
      uStack_160 = CONCAT44(uStack_18c,iStack_190);
      iVar16 = (int)uVar20 >> 5;
      uVar22 = uVar20;
      local_1b8 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_118;
      local_188 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_118;
      TStack_180.Array = local_1a8;
      if (((int)uVar20 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), uVar22 = local_f0, bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar20 != uVar22) {
        puVar21 = (uint *)(local_118 + 0x10);
        if (local_f8 != (uint *)0x0) {
          puVar21 = local_f8;
        }
        uVar20 = -1 << ((byte)uVar23 & 0x1f) & puVar21[iVar16];
        while (uVar20 == 0) {
          lVar13 = (longlong)iVar16;
          uVar25 = uVar25 + 0x20;
          iVar16 = iVar16 + 1;
          if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) {
            uVar23 = (ulonglong)uVar22;
            goto LAB_14c808f00;
          }
          uVar20 = puVar21[lVar13 + 1];
        }
        uVar18 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_1c8 = (int)lVar13;
        uVar25 = local_1c8 + -1 + uVar25;
        if ((int)uVar22 < (int)uVar25) {
          uVar25 = uVar22;
        }
        uVar23 = (ulonglong)uVar25;
      }
LAB_14c808f00:
      while( true ) {
        pTVar10 = local_188;
        if (*(int *)&(local_188->Elements).field_0x8 - *(int *)&(local_188->Elements).field_0x34 !=
            (int)uStack_160) {
          local_1e8[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1e8);
        }
        if (((TStack_180.CurrentBitIndex == (int)uVar23) &&
            (TStack_180.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10))) &&
           (pTVar10 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_118)) break;
        pFVar1 = this->FillMesh;
        uVar20 = *(uint *)(*(longlong *)&pTVar10->Elements +
                          (longlong)TStack_180.CurrentBitIndex * 0xc);
        if ((-1 < (int)uVar20) &&
           ((int)uVar20 <
            (int)((pFVar1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar1->EdgeRefCounts).RefCounts.CurBlockUsed))) {
          uVar18 = (ulonglong)(uVar20 & 0x1ff);
          if (((ushort)(*(short *)(*(longlong *)
                                    ((pFVar1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                    + (ulonglong)(uVar20 >> 9) * 8) + uVar18 * 2) - 1U) < 0xfffe) &&
             (lVar13 = *(longlong *)
                        ((pFVar1->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar20 >> 9) * 8), *(int *)(lVar13 + 0xc + uVar18 * 0x10) != -1)
             ) {
            uVar3 = *(undefined8 *)(lVar13 + uVar18 * 0x10);
            local_1c0 = uVar3;
            FDynamicMesh3::GetEdgeOpposingV(pFVar1,(int)&local_1e0);
            iVar16 = FDynamicMesh3::FindEdge(this->FillMesh,local_1e0,local_1dc);
            if ((iVar16 == -1) && (dVar5 = AspectMetric(this,uVar20), dVar5 <= dVar7)) {
              iVar17 = (int)uVar3;
              iVar16 = local_1c0._4_4_;
              dVar5 = CurvatureMetricCached(this,iVar17,local_1c0._4_4_,local_1e0,local_1dc);
              local_154 = uVar8;
              uStack_14c = uVar9;
              local_144 = 0xffffffffffffffff;
              iVar12 = (**(code **)(this->FillMesh->_padding_ + 0x40))
                                 (this->FillMesh,uVar20,local_158);
              if (iVar12 == 0) {
                dVar6 = CurvatureMetricEval(this,iVar17,iVar16,local_1e0,local_1dc);
                if ((double)CONCAT44((uint)((ulonglong)(dVar5 - dVar6) >> 0x20) & uVar15,
                                     SUB84(dVar5 - dVar6,0) & uVar19) <
                    this->DevelopabilityTolerance) {
                  UpdateCurvature(this,iVar17);
                  UpdateCurvature(this,iVar16);
                  UpdateCurvature(this,local_1e0);
                  UpdateCurvature(this,local_1dc);
                  AddAllEdges(this,uVar20,&local_c8);
                }
                else {
                  (**(code **)(this->FillMesh->_padding_ + 0x40))(this->FillMesh,uVar20,local_158);
                }
              }
            }
          }
        }
        TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
      }
      ::`anonymous_namespace'::SwapSets
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_118,&local_c8);
      uVar14 = local_118._8_8_ & 0xffffffff;
      uVar24 = (ulonglong)local_e4;
      if ((int)(local_118._8_4_ - local_e4) < 1) break;
      uVar23 = (ulonglong)local_f0;
      iVar16 = local_1d4;
    }
  }
  local_c8.HashSize = 0;
  if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_c8.Elements);
  local_d0 = 0;
  if (local_d8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_118);
  return;
}

// FlipToMinimizeCurvature @ 14c8091d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FMinimalHoleFiller::FlipToMinimizeCurvature(FMinimalHoleFiller *this)

{
  FDynamicMesh3 *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  uint uVar24;
  undefined1 auStackY_208 [32];
  undefined1 local_1d8 [8];
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  undefined8 local_1b8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1b0;
  uint uStack_1a8;
  uint uStack_1a4;
  TBitArray<FDefaultBitArrayAllocator> *local_1a0;
  undefined4 uStack_198;
  uint uStack_194;
  uint local_190;
  undefined4 uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  undefined1 local_150 [4];
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined4 local_114;
  undefined1 local_108 [32];
  uint *local_e8;
  uint local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  int local_d4;
  ForElementType<FSetElementId> local_c8;
  int local_c0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_208;
  iVar23 = 0;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Curvatures,
             (this->FillMesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->FillMesh->VertexRefCounts).RefCounts.CurBlockUsed,Default);
  pFVar1 = this->FillMesh;
  uVar19 = (pFVar1->VertexRefCounts).RefCounts.CurBlockUsed +
           (pFVar1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  uVar18 = 0;
  if ((uVar19 == 0) ||
     (pFVar2 = (pFVar1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar18 = 0,
     (ushort)(**(short **)pFVar2 - 1U) < 0xfffe)) {
LAB_14c8092a6:
    uVar15 = (uint)uVar18;
  }
  else {
    uVar18 = 1;
    uVar15 = 1;
    if (1 < (int)uVar19) {
      do {
        uVar22 = (ulonglong)((uint)uVar18 & 0x1ff);
        lVar13 = *(longlong *)(pFVar2 + (uVar18 >> 9) * 8);
        if ((*(short *)(lVar13 + uVar22 * 2) != 0) && (*(short *)(lVar13 + uVar22 * 2) != -1))
        break;
        uVar15 = (uint)uVar18 + 1;
        uVar18 = (ulonglong)uVar15;
      } while ((int)uVar15 < (int)uVar19);
      goto LAB_14c8092a6;
    }
  }
joined_r0x00014c8092a8:
  if (uVar15 != uVar19) {
    while( true ) {
      UpdateCurvature(this,(int)uVar18);
      uVar15 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar15;
      if ((int)uVar19 <= (int)uVar15) break;
      while( true ) {
        uVar22 = (ulonglong)((uint)uVar18 & 0x1ff);
        lVar13 = *(longlong *)
                  ((pFVar1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (uVar18 >> 9) * 8);
        if ((*(short *)(lVar13 + uVar22 * 2) != 0) && (*(short *)(lVar13 + uVar22 * 2) != -1))
        break;
        uVar15 = (uint)uVar18 + 1;
        uVar18 = (ulonglong)uVar15;
        if ((int)uVar19 <= (int)uVar15) goto joined_r0x00014c8092a8;
      }
    }
    goto joined_r0x00014c8092a8;
  }
  uVar22 = 0;
  pFVar1 = this->FillMesh;
  local_108._0_8_ = 0;
  local_108._8_8_ = 0;
  local_e8 = (uint *)0x0;
  local_e0 = 0;
  local_dc = 0x80;
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_c8 = (ForElementType<FSetElementId>)0x0;
  local_c0 = 0;
  uVar19 = (pFVar1->EdgeRefCounts).RefCounts.CurBlockUsed +
           (pFVar1->EdgeRefCounts).RefCounts.CurBlock * 0x200;
  uVar18 = uVar22;
  if ((uVar19 != 0) &&
     (pFVar2 = (pFVar1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar18 = 0,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar18 = 1;
    uVar15 = 1;
    if ((int)uVar19 < 2) goto LAB_14c809398;
    do {
      uVar14 = (ulonglong)((uint)uVar18 & 0x1ff);
      lVar13 = *(longlong *)(pFVar2 + (uVar18 >> 9) * 8);
      if ((*(short *)(lVar13 + uVar14 * 2) != 0) && (*(short *)(lVar13 + uVar14 * 2) != -1)) break;
      uVar15 = (uint)uVar18 + 1;
      uVar18 = (ulonglong)uVar15;
    } while ((int)uVar15 < (int)uVar19);
  }
  uVar15 = (uint)uVar18;
LAB_14c809398:
  if (uVar15 != uVar19) {
LAB_14c8093a0:
    do {
      local_1c8 = (int)uVar18;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_108,&local_1c4,
                 (bool *)&local_1c8);
      uVar15 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar15;
      if ((int)uVar15 < (int)uVar19) {
        do {
          uVar22 = (ulonglong)((uint)uVar18 & 0x1ff);
          lVar13 = *(longlong *)
                    ((pFVar1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (uVar18 >> 9) * 8);
          if ((*(short *)(lVar13 + uVar22 * 2) != 0) && (*(short *)(lVar13 + uVar22 * 2) != -1))
          goto LAB_14c8093a0;
          uVar15 = (uint)uVar18 + 1;
          uVar18 = (ulonglong)uVar15;
        } while ((int)uVar15 < (int)uVar19);
      }
    } while (uVar15 != uVar19);
    uVar22 = (ulonglong)local_e0;
  }
  dVar9 = __real_3e45798ee2308c3a;
  uVar8 = _UNK_15060db28;
  uVar7 = ___xmm_ffffffffffffffffffffffffffffffff;
  local_b8.Elements._0_8_ = 0;
  local_b8.Elements._8_8_ = 0;
  local_b8.Elements._32_8_ = 0;
  local_b8.Elements._40_4_ = 0;
  local_b8.Elements._44_4_ = 0x80;
  local_b8.Elements._48_4_ = 0xffffffff;
  local_b8.Elements._52_4_ = 0;
  local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_b8.HashSize = 0;
  while( true ) {
    uVar19 = 0;
    uVar15 = (uint)uVar22;
    iVar23 = iVar23 + 1;
    iVar16 = local_108._8_4_ - local_d4;
    if (iVar16 < 1) break;
    uStack_1a4 = 1;
    uStack_194 = uVar19;
    local_190 = uVar19;
    if (uVar15 != 0) {
      puVar20 = (uint *)(local_108 + 0x10);
      if (local_e8 != (uint *)0x0) {
        puVar20 = local_e8;
      }
      uVar24 = *puVar20;
      while (uVar24 == 0) {
        lVar13 = (longlong)(int)uVar19;
        local_190 = local_190 + 0x20;
        uVar19 = uVar19 + 1;
        uStack_194 = uVar15;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
        goto LAB_14c8094d4;
        uVar24 = puVar20[lVar13 + 1];
      }
      uStack_1a4 = -uVar24 & uVar24;
      uVar18 = (ulonglong)uStack_1a4 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_1c0 = (int)lVar13;
      uStack_194 = (local_190 - 1) + local_1c0;
      if ((int)uVar15 < (int)uStack_194) {
        uStack_194 = uVar15;
      }
    }
LAB_14c8094d4:
    local_1a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10);
    uVar24 = uVar15 & 0xffffffe0;
    TStack_178._padding_ = CONCAT44(uStack_1a4,uVar19);
    uStack_198 = 0xffffffff;
    TStack_178.CurrentBitIndex = uStack_194;
    TStack_178.UnvisitedBitMask = 0xffffffff;
    uStack_18c = local_114;
    TStack_178._28_4_ = local_114;
    TStack_178.BaseBitIndex = local_190;
    uStack_158 = CONCAT44(uStack_184,iVar16);
    iVar17 = (int)uVar15 >> 5;
    uVar21 = uVar15;
    local_1b0 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_108;
    uStack_1a8 = uVar19;
    iStack_188 = iVar16;
    local_180 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_108;
    TStack_178.Array = local_1a0;
    if (((int)uVar15 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), uVar21 = local_e0, bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar15 != uVar21) {
      puVar20 = (uint *)(local_108 + 0x10);
      if (local_e8 != (uint *)0x0) {
        puVar20 = local_e8;
      }
      uVar19 = -1 << ((byte)uVar22 & 0x1f) & puVar20[iVar17];
      while (uVar19 == 0) {
        lVar13 = (longlong)iVar17;
        uVar24 = uVar24 + 0x20;
        iVar17 = iVar17 + 1;
        if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) {
          uVar22 = (ulonglong)uVar21;
          goto LAB_14c8095f0;
        }
        uVar19 = puVar20[lVar13 + 1];
      }
      uVar18 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_1bc = (int)lVar13;
      uVar19 = (uVar24 - 1) + local_1bc;
      if ((int)uVar21 < (int)uVar19) {
        uVar19 = uVar21;
      }
      uVar22 = (ulonglong)uVar19;
    }
LAB_14c8095f0:
    while( true ) {
      pTVar10 = local_180;
      if (*(int *)&(local_180->Elements).field_0x8 - *(int *)&(local_180->Elements).field_0x34 !=
          (int)uStack_158) {
        local_1d8[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1d8);
      }
      if (((TStack_178.CurrentBitIndex == (int)uVar22) &&
          (TStack_178.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10))) &&
         (pTVar10 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_108)) break;
      uVar19 = *(uint *)(*(longlong *)&pTVar10->Elements +
                        (longlong)TStack_178.CurrentBitIndex * 0xc);
      lVar13 = *(longlong *)
                ((this->FillMesh->Edges).Blocks.AllocatorInstance.Data +
                (ulonglong)(uVar19 >> 9) * 8);
      if (*(int *)(lVar13 + 0xc + (ulonglong)(uVar19 & 0x1ff) * 0x10) != -1) {
        uVar3 = *(undefined8 *)(lVar13 + (ulonglong)(uVar19 & 0x1ff) * 0x10);
        local_1b8 = uVar3;
        FDynamicMesh3::GetEdgeOpposingV(this->FillMesh,(int)&local_1d0);
        iVar16 = FDynamicMesh3::FindEdge(this->FillMesh,local_1d0,local_1cc);
        if (iVar16 == -1) {
          iVar17 = (int)uVar3;
          iVar16 = local_1b8._4_4_;
          dVar5 = CurvatureMetricCached(this,iVar17,local_1b8._4_4_,local_1d0,local_1cc);
          if (dVar9 <= dVar5) {
            local_14c = uVar7;
            uStack_144 = uVar8;
            local_13c = 0xffffffffffffffff;
            iVar12 = (**(code **)(this->FillMesh->_padding_ + 0x40))
                               (this->FillMesh,uVar19,local_150);
            if (iVar12 == 0) {
              dVar6 = CurvatureMetricEval(this,iVar17,iVar16,local_1d0,local_1cc);
              if (dVar6 < dVar5 - dVar9) {
                UpdateCurvature(this,iVar17);
                UpdateCurvature(this,iVar16);
                UpdateCurvature(this,local_1d0);
                UpdateCurvature(this,local_1cc);
                AddAllEdges(this,uVar19,&local_b8);
              }
              else {
                (**(code **)(this->FillMesh->_padding_ + 0x40))(this->FillMesh,uVar19,local_150);
              }
            }
          }
        }
      }
      TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
    }
    ::`anonymous_namespace'::SwapSets
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_108,&local_b8);
    if (0x27 < iVar23) break;
    uVar22 = (ulonglong)local_e0;
  }
  local_b8.HashSize = 0;
  if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_b8.Elements);
  local_c0 = 0;
  if (local_c8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_108);
  return;
}

// GetTriAspect @ 14c811a50

double __cdecl
UE::Geometry::FMinimalHoleFiller::GetTriAspect(FDynamicMesh3 *param_1,FIndex3i *param_2)

{
  double *pdVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  ulonglong uVar5;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_40;
  TVector<double>_u_0 local_28;
  
  pFVar3 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
  uVar2 = (param_2->field0_0x0)._s_0.C;
  uVar5 = (ulonglong)(uVar2 & 0x1ff);
  pdVar1 = (double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar2 >> 9) * 8) + uVar5 * 0x18);
  local_58._s_0.X = *pdVar1;
  local_58._s_0.Y = pdVar1[1];
  local_58._s_0.Z =
       *(double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar2 >> 9) * 8) + 0x10 + uVar5 * 0x18);
  uVar2 = (param_2->field0_0x0)._s_0.B;
  uVar5 = (ulonglong)(uVar2 & 0x1ff);
  pdVar1 = (double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar2 >> 9) * 8) + uVar5 * 0x18);
  local_40._s_0.X = *pdVar1;
  local_40._s_0.Y = pdVar1[1];
  local_40._s_0.Z =
       *(double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar2 >> 9) * 8) + 0x10 + uVar5 * 0x18);
  uVar2 = (param_2->field0_0x0)._s_0.A;
  uVar5 = (ulonglong)(uVar2 & 0x1ff);
  pdVar1 = (double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar2 >> 9) * 8) + uVar5 * 0x18);
  local_28._s_0.X = *pdVar1;
  local_28._s_0.Y = pdVar1[1];
  local_28._s_0.Z =
       *(double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar2 >> 9) * 8) + 0x10 + uVar5 * 0x18);
  dVar4 = VectorUtil::AspectRatio
                    ((TVector<double> *)&local_28._s_0,(TVector<double> *)&local_40._s_0,
                     (TVector<double> *)&local_58._s_0);
  return dVar4;
}

// RemoveRemainingInteriorVerts @ 14c823a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FMinimalHoleFiller::RemoveRemainingInteriorVerts(FMinimalHoleFiller *this)

{
  FDynamicMesh3 *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  FSmallListSet *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1a8 [8];
  ForAnyElementType local_1a0;
  undefined8 local_198;
  int local_190 [2];
  uint local_188 [2];
  uint local_180;
  int local_17c;
  int local_178;
  longlong *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  longlong *local_148;
  uint uStack_140;
  uint uStack_13c;
  TBitArray<FDefaultBitArrayAllocator> *local_138;
  undefined4 uStack_130;
  int iStack_12c;
  uint local_128;
  undefined4 uStack_124;
  BaseValueIterator local_118;
  undefined1 local_f0 [8];
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pFVar1 = this->FillMesh;
  uVar17 = 0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  uVar15 = (pFVar1->VertexRefCounts).RefCounts.CurBlockUsed +
           (pFVar1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  uVar12 = uVar17;
  if ((uVar15 != 0) &&
     (pFVar2 = (pFVar1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar12 = 0,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar12 = 1;
    uVar11 = 1;
    if ((int)uVar15 < 2) goto LAB_14c823b43;
    do {
      lVar5 = (ulonglong)((uint)uVar12 & 0x1ff) * 2;
      lVar3 = *(longlong *)(pFVar2 + (uVar12 >> 9) * 8);
      if ((*(short *)(lVar5 + lVar3) != 0) && (*(short *)(lVar5 + lVar3) != -1)) break;
      uVar11 = (uint)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
    } while ((int)uVar11 < (int)uVar15);
  }
  uVar11 = (uint)uVar12;
LAB_14c823b43:
  uVar18 = uVar17;
  if (uVar11 != uVar15) {
LAB_14c823b50:
    do {
      iVar9 = (int)uVar12;
      local_190[0] = iVar9;
      bVar8 = FDynamicMesh3::IsBoundaryVertex(this->FillMesh,iVar9);
      if (!bVar8) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,&local_17c,
                   (bool *)local_190);
      }
      uVar11 = iVar9 + 1;
      uVar12 = (ulonglong)uVar11;
      if ((int)uVar11 < (int)uVar15) {
        do {
          lVar5 = (ulonglong)((uint)uVar12 & 0x1ff) * 2;
          lVar3 = *(longlong *)
                   ((pFVar1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (uVar12 >> 9) * 8);
          if ((*(short *)(lVar5 + lVar3) != 0) && (*(short *)(lVar5 + lVar3) != -1))
          goto LAB_14c823b50;
          uVar11 = (uint)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while ((int)uVar11 < (int)uVar15);
      }
    } while (uVar11 != uVar15);
    uVar18 = (ulonglong)local_70;
  }
  uVar7 = _UNK_15060db28;
  uVar6 = ___xmm_ffffffffffffffffffffffffffffffff;
  if (0 < local_98._8_4_ - local_64) {
    while( true ) {
      uVar12 = 0;
      uVar15 = local_98._8_4_ - local_64;
      if (uVar15 == (uint)uVar17) break;
      uVar11 = 0;
      local_1a0.Data = (FScriptContainerElement *)0x0;
      local_198 = 0;
      local_180 = uVar15;
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      uVar17 = uVar12;
      uVar19 = (uint)uVar18;
      if (0 < (int)uVar15) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar15,&local_1a0,0,(int *)((longlong)&local_198 + 4));
        uVar17 = local_198 & 0xffffffff;
        uVar19 = local_70;
      }
      uStack_13c = 1;
      local_128 = uVar11;
      if (uVar19 != 0) {
        puVar13 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar13 = local_78;
        }
        uVar15 = *puVar13;
        uVar18 = uVar12;
        local_128 = 0;
        uVar11 = 0;
        while (uVar15 == 0) {
          iVar9 = (int)uVar12;
          local_128 = (int)uVar18 + 0x20;
          uVar18 = (ulonglong)local_128;
          uVar11 = iVar9 + 1;
          uVar12 = (ulonglong)uVar11;
          if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11)
          goto LAB_14c823cc8;
          uVar15 = puVar13[(longlong)iVar9 + 1];
        }
        uStack_13c = -uVar15 & uVar15;
        uVar12 = (ulonglong)uStack_13c * 2 + 1;
        lVar3 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        local_178 = (int)lVar3;
        uVar15 = local_178 + -1 + local_128;
        uVar12 = (ulonglong)uVar15;
        if ((int)uVar19 < (int)uVar15) {
LAB_14c823cc8:
          uVar12 = (ulonglong)uVar19;
        }
      }
      local_170 = (longlong *)local_98;
      TStack_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      uStack_130 = 0xffffffff;
      iStack_12c = (int)uVar12;
      uStack_124 = local_9c;
      TStack_168._padding_ = CONCAT44(uStack_13c,uVar11);
      TStack_168.CurrentBitIndex = iStack_12c;
      TStack_168.UnvisitedBitMask = 0xffffffff;
      TStack_168._28_4_ = local_9c;
      TStack_168.BaseBitIndex = local_128;
      local_148 = local_170;
      uStack_140 = uVar11;
      local_138 = TStack_168.Array;
      if (iStack_12c < (int)uVar19) {
        do {
          pFVar2 = (FScriptContainerElement *)(*local_170 + (longlong)(int)uVar12 * 0xc);
          iVar9 = (int)uVar17;
          if ((local_1a0.Data <= pFVar2) &&
             (pFVar2 < local_1a0.Data + (longlong)local_198._4_4_ * 4)) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar9 = (int)local_198;
          }
          if (iVar9 == local_198._4_4_) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_1a0,(int *)((longlong)&local_198 + 4));
          }
          local_198 = CONCAT44(local_198._4_4_,iVar9 + 1);
          *(uint *)(local_1a0.Data + (longlong)iVar9 * 4) = *(uint *)pFVar2;
          TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
          uVar12 = (ulonglong)(uint)TStack_168.CurrentBitIndex;
          uVar17 = local_198 & 0xffffffff;
        } while (TStack_168.CurrentBitIndex < (TStack_168.Array)->NumBits);
      }
      iVar9 = (int)uVar17;
      pFVar2 = local_1a0.Data + (longlong)iVar9 * 4;
      FVar14.Data = local_1a0.Data;
      while( true ) {
        if ((int)uVar17 != iVar9) {
          local_1a8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1a8);
        }
        if (FVar14.Data == pFVar2) break;
        uVar15 = *(uint *)FVar14.Data;
        pFVar16 = &this->FillMesh->VertexEdgeLists;
        FSmallListSet::BaseValueIterator::BaseValueIterator(&local_118,pFVar16,uVar15,false);
        while ((((local_118.ListSet != pFVar16 || (local_118.ListIndex != uVar15)) ||
                (local_118.iCur != -1)) || (local_118.cur_ptr != -1))) {
          pFVar1 = this->FillMesh;
          uVar12 = *(ulonglong *)
                    (*(longlong *)
                      ((pFVar1->Edges).Blocks.AllocatorInstance.Data +
                      ((local_118._32_8_ & 0xffffffff) >> 9) * 8) +
                    (ulonglong)(local_118.cur_value & 0x1ff) * 0x10);
          local_e8 = 0xffffffffffffffff;
          local_c8 = 0xffffffffffffffff;
          local_d8 = uVar6;
          uStack_d0 = uVar7;
          if ((uint)uVar12 == uVar15) {
            uVar12 = uVar12 >> 0x20;
          }
          iVar10 = (**(code **)(pFVar1->_padding_ + 0x68))
                             (pFVar1,uVar12 & 0xffffffff,uVar15,local_f0);
          if (iVar10 == 0) break;
          FSmallListSet::BaseValueIterator::GotoNext(&local_118);
        }
        pFVar1 = this->FillMesh;
        if (((((int)uVar15 < 0) ||
             ((int)((pFVar1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                   (pFVar1->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar15)) ||
            (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           ((pFVar1->VertexRefCounts).RefCounts.Blocks.
                                            AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8) +
                                         (ulonglong)(uVar15 & 0x1ff) * 2) - 1U))) &&
           (local_188[0] = uVar15, local_98._8_4_ != local_64)) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,uVar15,
                     (int *)local_188);
        }
        uVar17 = local_198 & 0xffffffff;
        FVar14.Data = FVar14.Data + 4;
      }
      uVar17 = (ulonglong)local_180;
      if (local_1a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data);
      }
      if (local_98._8_4_ - local_64 < 1) break;
      uVar18 = (ulonglong)local_70;
    }
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// UpdateCurvature @ 14c84f970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMinimalHoleFiller::UpdateCurvature(FMinimalHoleFiller *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  double *pdVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  uint uVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_218 [32];
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  int local_1e0;
  undefined1 local_1d8 [48];
  ValueIterator local_1a8;
  ValueIterator local_180;
  undefined1 local_158 [144];
  undefined1 local_c8 [144];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_218;
  uVar11 = 0;
  uVar12 = 0;
  if (*(int *)&(this->ExteriorAngleSums).field_0x8 != *(int *)&(this->ExteriorAngleSums).field_0x34)
  {
    puVar8 = *(undefined1 **)&(this->ExteriorAngleSums).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ExteriorAngleSums).field_0x38;
    }
    iVar5 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->ExteriorAngleSums).field_0x48 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&this->ExteriorAngleSums;
      do {
        if (*(int *)(lVar1 + (longlong)iVar5 * 0x18) == param_1) {
          pdVar6 = TMapBase<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_>
                   ::FindChecked((TMapBase<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_>
                                  *)&this->ExteriorAngleSums,param_1);
          uVar11 = SUB84(*pdVar6,0);
          uVar12 = (undefined4)((ulonglong)*pdVar6 >> 0x20);
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10 + (longlong)iVar5 * 0x18);
      } while (iVar5 != -1);
    }
  }
  dVar3 = (double)CONCAT44(uVar12,uVar11);
  FDynamicMesh3::VtxTrianglesItr
            (this->FillMesh,
             (TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)local_1d8,param_1)
  ;
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
            ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_158,&local_1a8
             ,&local_180,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1d8);
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
            ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_c8,&local_180,
             &local_180,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1d8);
  while ((((uVar9 = 0, local_158._0_8_ != local_c8._0_8_ || (local_158._8_4_ != local_c8._8_4_)) ||
          (local_158._24_4_ != local_c8._24_4_)) || (local_158._28_4_ != local_c8._28_4_))) {
    lVar1 = *(longlong *)
             ((this->FillMesh->Triangles).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)local_158._88_4_ >> 9) * 8);
    local_1e8 = *(undefined8 *)(lVar1 + (ulonglong)(local_158._88_4_ & 0x1ff) * 0xc);
    local_1e0 = *(int *)(lVar1 + 8 + (ulonglong)(local_158._88_4_ & 0x1ff) * 0xc);
    if ((int)local_1e8 != param_1) {
      if ((int)((ulonglong)local_1e8 >> 0x20) == param_1) {
        uVar9 = 1;
      }
      else {
        uVar9 = 0xffffffff;
        if (local_1e0 == param_1) {
          uVar9 = 2;
        }
      }
    }
    dVar10 = FDynamicMesh3::GetTriInternalAngleR(this->FillMesh,local_158._88_4_,uVar9);
    dVar3 = dVar3 + dVar10;
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_158);
  }
  if (local_c8._96_8_ != 0) {
    plVar7 = (longlong *)(local_c8 + 0x70);
    if ((longlong *)local_c8._136_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_c8._136_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (local_158._96_8_ != 0) {
    plVar7 = (longlong *)(local_158 + 0x70);
    if ((longlong *)local_158._136_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_158._136_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (local_1d8._0_8_ != 0) {
    plVar7 = (longlong *)(local_1d8 + 0x10);
    if ((longlong *)local_1d8._40_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_1d8._40_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  iVar5 = (this->Curvatures).ArrayNum;
  local_1f0 = (longlong)iVar5;
  if (param_1 < iVar5) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (local_1f8 = (longlong)param_1,
     bVar4 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(double *)((this->Curvatures).AllocatorInstance.Data + (longlong)param_1 * 8) =
       dVar3 - __real_401921fb60000000;
  return;
}

