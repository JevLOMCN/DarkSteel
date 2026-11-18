// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// GenerateMesh @ 1435a68e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FDynamicMesh3 * __thiscall
UE::Geometry::FRevolvePlanarPathGenerator::GenerateMesh
          (FRevolvePlanarPathGenerator *this,FDynamicMesh3 *__return_storage_ptr__)

{
  undefined8 *puVar1;
  double dVar2;
  char cVar3;
  undefined4 uVar4;
  void *_Src;
  bool bVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  FDynamicMesh3 *pFVar18;
  FMeshShapeGenerator *pFVar19;
  TVector2<float>_u_0 *pTVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  ForElementType<FSetElementId> _Src_00;
  ulonglong uVar23;
  FScriptContainerElement *pFVar24;
  ForAnyElementType FVar25;
  uint uVar26;
  longlong lVar27;
  TVector2<float>_u_0 *pTVar28;
  uint uVar29;
  bool bVar30;
  float fVar31;
  undefined1 auStackY_4e8 [32];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_490;
  undefined1 local_480;
  undefined1 local_47f;
  undefined1 local_47e [6];
  ForAnyElementType local_478;
  uint local_470;
  int local_46c;
  int local_468 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_460;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_450;
  uint local_440;
  ForAnyElementType local_438;
  int local_430 [2];
  FDynamicMesh3 *local_428;
  double local_420;
  double dStack_418;
  double local_410;
  TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_> local_408;
  int local_3f8;
  longlong local_3f0;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_3e8;
  TVector<double>_u_0 local_3d8;
  TVector<double>_u_0 local_3c0;
  TVector2<float>_u_0 local_3a8;
  TVector2<float>_u_0 local_3a0;
  TVector2<float>_u_0 local_398;
  TVector2<float>_u_0 local_390;
  FIndex3i_u_0 local_388;
  double local_378;
  double dStack_370;
  undefined8 local_368;
  TVector<double>_u_0 local_360;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  FRevolvePlanarPathGenerator *local_330;
  undefined8 local_328;
  double local_318;
  TVector<double>_u_0 local_310;
  TQuaternion<double>_u_0 local_2f8;
  TVector<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2c0;
  double local_298;
  undefined1 local_288 [32];
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined1 local_250 [8];
  ForElementType<FSetElementId> local_248;
  uint local_240;
  undefined1 local_238 [208];
  undefined1 local_168 [56];
  undefined1 local_130 [8];
  ForAnyElementType local_128;
  uint local_120;
  TVector2<double>_u_0 local_118;
  TVector2<double>_u_0 local_108;
  bool local_f8;
  float local_f4;
  bool local_f0;
  bool local_ef;
  undefined2 local_ee;
  EProfileSweepQuadSplit local_ec;
  double local_e8;
  EProfileSweepPolygonGrouping local_e0;
  undefined8 uStack_d0;
  uint auStack_c8 [8];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  bVar30 = -1 < CpuChannel->Enabled;
  local_428 = __return_storage_ptr__;
  local_330 = this;
  if (bVar30) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId123,"RevolvePlanarPathGenerator_GenerateMesh",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\RevolveGenerator.cpp"
               ,0x7b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId123);
  }
  dVar10 = __real_3ff0000000000000;
  iVar16 = (this->PathVertices).ArrayNum;
  iVar14 = 0;
  pFVar21 = (this->PathVertices).AllocatorInstance.Data;
  pFVar24 = pFVar21 + (longlong)iVar16 * 0x10;
  local_3d8._s_0.Z = __real_3ff0000000000000;
  local_3c0._s_0.Z = 0.0;
  local_3d8._s_0.X = 0.0;
  local_3d8._s_0.Y = 0.0;
  local_490.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3c0._s_0.X = 0.0;
  local_3c0._s_0.Y = 0.0;
  local_490.ArrayNum = 0;
  local_490.ArrayMax = 0;
  local_288._0_8_ = (void *)0x0;
  local_288._8_8_ = 0;
  local_268 = 0;
  local_260 = 0;
  local_25c = 0x80;
  local_258 = 0xffffffff;
  local_254 = 0;
  local_248 = (ForElementType<FSetElementId>)0x0;
  local_240 = 0;
  while( true ) {
    if ((this->PathVertices).ArrayNum != iVar16) {
      local_480 = 0;
      `TCheckedPointerIterator<UE::Math::TVector2<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_480);
      iVar14 = local_490.ArrayNum;
    }
    if (pFVar21 == pFVar24) break;
    local_378 = *(double *)pFVar21;
    local_368 = *(undefined8 *)(pFVar21 + 8);
    dStack_370 = 0.0;
    iVar13 = iVar14;
    if ((local_490.AllocatorInstance.Data <= (FScriptContainerElement *)&local_378) &&
       ((FScriptContainerElement *)&local_378 <
        local_490.AllocatorInstance.Data + (longlong)local_490.ArrayMax * 0x18)) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        pFVar18 = (FDynamicMesh3 *)(*pcVar6)();
        return pFVar18;
      }
      iVar13 = local_490.ArrayNum;
    }
    if (iVar13 == local_490.ArrayMax) {
      iVar13 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_490.AllocatorInstance,&local_490.ArrayMax);
    }
    iVar14 = iVar13 + 1;
    pFVar21 = pFVar21 + 0x10;
    local_490.ArrayNum = iVar14;
    *(double *)(local_490.AllocatorInstance.Data + (longlong)iVar13 * 0x18) = local_378;
    *(double *)(local_490.AllocatorInstance.Data + (longlong)iVar13 * 0x18 + 8) = dStack_370;
    *(undefined8 *)(local_490.AllocatorInstance.Data + (longlong)iVar13 * 0x18 + 0x10) = local_368;
  }
  lVar27 = (longlong)(iVar14 / 2);
  if (0 < iVar14 / 2) {
    pFVar21 = local_490.AllocatorInstance.Data + (longlong)(iVar14 + -1) * 0x18;
    FVar25.Data = local_490.AllocatorInstance.Data;
    do {
      dVar2 = *(double *)(FVar25.Data + 0x10);
      dVar7 = *(double *)(pFVar21 + 8);
      dVar8 = *(double *)FVar25.Data;
      dVar9 = *(double *)(FVar25.Data + 8);
      *(double *)FVar25.Data = *(double *)pFVar21;
      *(double *)(FVar25.Data + 8) = dVar7;
      *(double *)(FVar25.Data + 0x10) = *(double *)(pFVar21 + 0x10);
      *(double *)pFVar21 = dVar8;
      *(double *)(pFVar21 + 8) = dVar9;
      *(double *)(pFVar21 + 0x10) = dVar2;
      lVar27 = lVar27 + -1;
      pFVar21 = pFVar21 + -0x18;
      FVar25.Data = FVar25.Data + 0x18;
    } while (lVar27 != 0);
    iVar14 = local_490.ArrayNum;
  }
  if (this->bCapped == false) {
    bVar12 = false;
  }
  else {
    if (iVar14 < 1) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        pFVar18 = (FDynamicMesh3 *)(*pcVar6)();
        return pFVar18;
      }
      iVar14 = local_490.ArrayNum;
    }
    local_318 = *(double *)(local_490.AllocatorInstance.Data + 0x10);
    dVar2 = *(double *)local_490.AllocatorInstance.Data;
    dVar7 = *(double *)(local_490.AllocatorInstance.Data + 8);
    uVar15 = 0;
    if ((int)(iVar14 - 1U) < iVar14) {
      uVar15 = ~(iVar14 - 1U) >> 0x1f;
    }
    if (uVar15 == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        pFVar18 = (FDynamicMesh3 *)(*pcVar6)();
        return pFVar18;
      }
      iVar14 = local_490.ArrayNum;
    }
    local_298 = *(double *)
                 (local_490.AllocatorInstance.Data + (longlong)(iVar14 + -1) * 0x18 + 0x10);
    dVar8 = (*(double *)(local_490.AllocatorInstance.Data + (longlong)(iVar14 + -1) * 0x18) -
            local_3c0._s_0.X) * local_3d8._s_0.X +
            (*(double *)(local_490.AllocatorInstance.Data + (longlong)(iVar14 + -1) * 0x18 + 8) -
            local_3c0._s_0.Y) * local_3d8._s_0.Y + (local_298 - local_3c0._s_0.Z) * local_3d8._s_0.Z
    ;
    local_420 = dVar8 * local_3d8._s_0.X + local_3c0._s_0.X;
    dStack_418 = dVar8 * local_3d8._s_0.Y + local_3c0._s_0.Y;
    local_410 = dVar8 * local_3d8._s_0.Z + local_3c0._s_0.Z;
    if ((local_490.AllocatorInstance.Data <= (FScriptContainerElement *)&local_420) &&
       ((FScriptContainerElement *)&local_420 <
        local_490.AllocatorInstance.Data + (longlong)local_490.ArrayMax * 0x18)) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        pFVar18 = (FDynamicMesh3 *)(*pcVar6)();
        return pFVar18;
      }
      iVar14 = local_490.ArrayNum;
    }
    if (iVar14 == local_490.ArrayMax) {
      iVar14 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_490.AllocatorInstance,&local_490.ArrayMax);
    }
    iVar16 = iVar14 + 1;
    *(double *)(local_490.AllocatorInstance.Data + (longlong)iVar14 * 0x18) = local_420;
    *(double *)(local_490.AllocatorInstance.Data + (longlong)iVar14 * 0x18 + 8) = dStack_418;
    *(double *)(local_490.AllocatorInstance.Data + (longlong)iVar14 * 0x18 + 0x10) = local_410;
    dVar2 = (dVar2 - local_3c0._s_0.X) * local_3d8._s_0.X +
            (dVar7 - local_3c0._s_0.Y) * local_3d8._s_0.Y +
            (local_318 - local_3c0._s_0.Z) * local_3d8._s_0.Z;
    local_420 = dVar2 * local_3d8._s_0.X + local_3c0._s_0.X;
    dStack_418 = dVar2 * local_3d8._s_0.Y + local_3c0._s_0.Y;
    local_410 = dVar2 * local_3d8._s_0.Z + local_3c0._s_0.Z;
    local_490.ArrayNum = iVar16;
    if (((local_490.AllocatorInstance.Data <= (FScriptContainerElement *)&local_420) &&
        ((FScriptContainerElement *)&local_420 <
         local_490.AllocatorInstance.Data + (longlong)local_490.ArrayMax * 0x18)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar6 = (code *)swi(3);
      pFVar18 = (FDynamicMesh3 *)(*pcVar6)();
      return pFVar18;
    }
    iVar16 = local_490.ArrayNum;
    if (local_490.ArrayNum == local_490.ArrayMax) {
      iVar16 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_490.AllocatorInstance,&local_490.ArrayMax);
    }
    bVar12 = true;
    local_490.ArrayNum = iVar16 + 1;
    *(double *)(local_490.AllocatorInstance.Data + (longlong)iVar16 * 0x18) = local_420;
    *(double *)(local_490.AllocatorInstance.Data + (longlong)iVar16 * 0x18 + 8) = dStack_418;
    *(double *)(local_490.AllocatorInstance.Data + (longlong)iVar16 * 0x18 + 0x10) = local_410;
  }
  fVar11 = __real_43b40000;
  fVar31 = *(float *)((longlong)&this->_padding_ + 4);
  if (__real_43b40000 <= fVar31) {
    fVar31 = __real_43b40000;
  }
  uVar15 = (uint)this->_padding_;
  dVar2 = (double)*(float *)&this->_padding_;
  if (fVar31 <= __real_3dcccccd) {
    fVar31 = __real_3dcccccd;
  }
  dVar7 = (double)fVar31 / (double)(int)uVar15;
  if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
    dVar7 = (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar7,0) ^ (uint)__xmm_80000000000000008000000000000000);
    dVar2 = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar2,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  if (((*(char *)((longlong)&this->_padding_ + 5) != '\0') && (dVar7 != 0.0)) &&
     ((double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
      __real_4066800000000000)) {
    RevolveUtil::MakeProfileCurveMidpointOfFirstStep
              (&local_490,dVar7,(TVector<double> *)&local_3c0._s_0,
               (TVector<double> *)&local_3d8._s_0);
    uVar15 = (uint)this->_padding_;
  }
  bVar5 = fVar31 == fVar11;
  local_408.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_408.ArrayNum = 0;
  local_408.ArrayMax = 0;
  if (!bVar5) {
    uVar15 = uVar15 + 1;
  }
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (0 < (int)uVar15) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,uVar15,&local_408.AllocatorInstance,0,&local_408.ArrayMax);
  }
  RevolveUtil::GenerateSweepCurve
            ((TVector<double> *)&local_3c0._s_0,(TVector<double> *)&local_3d8._s_0,dVar2,dVar7,0.0,
             uVar15,&local_408);
  RevolveUtil::WeldPointsOnAxis
            (&local_490,(TVector<double> *)&local_3c0._s_0,(TVector<double> *)&local_3d8._s_0,
             __real_3fb999999999999a,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_288);
  cVar3 = *(char *)((longlong)&this->_padding_ + 6);
  FProfileSweepGenerator::FProfileSweepGenerator((FProfileSweepGenerator *)local_238);
  FVar25.Data = local_490.AllocatorInstance.Data;
  iVar16 = local_490.ArrayNum;
  lVar27 = (longlong)local_490.ArrayNum;
  local_238._168_4_ = local_490.ArrayNum;
  if (((local_490.ArrayNum != 0) || (local_238._172_4_ != 0)) &&
     (Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_490.ArrayNum,local_238._172_4_,(ForAnyElementType *)(local_238 + 0xa0)
                 ,local_490.ArrayNum,(int *)(local_238 + 0xac)), iVar16 != 0)) {
    memcpy((void *)local_238._160_8_,FVar25.Data,lVar27 * 0x18);
  }
  FVar25.Data = local_408.AllocatorInstance.Data;
  iVar16 = local_408.ArrayNum;
  lVar27 = (longlong)local_408.ArrayNum;
  local_238._184_4_ = local_408.ArrayNum;
  if ((local_408.ArrayNum == 0) && (local_238._188_4_ == 0)) {
    local_238._188_4_ = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,local_408.ArrayNum,local_238._188_4_,(ForAnyElementType *)(local_238 + 0xb0),
               local_408.ArrayNum,(int *)(local_238 + 0xbc));
    if (iVar16 != 0) {
      memcpy((void *)local_238._176_8_,FVar25.Data,lVar27 * 0x38);
    }
  }
  uVar15 = local_240;
  lVar27 = (longlong)(int)local_240;
  uVar26 = local_240;
  if (local_240 < 2) {
    if ((ForElementType<FSetElementId>)local_128.Data == (ForElementType<FSetElementId>)0x0)
    goto LAB_1435a70ed;
    uVar26 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_128,0,uVar26,4);
LAB_1435a70ed:
  _Src_00 = (ForElementType<FSetElementId>)local_250;
  if (local_248 != (ForElementType<FSetElementId>)0x0) {
    _Src_00 = local_248;
  }
  FVar25.Data = (FScriptContainerElement *)local_130;
  if ((ForElementType<FSetElementId>)local_128.Data != (ForElementType<FSetElementId>)0x0) {
    FVar25.Data = local_128.Data;
  }
  if (uVar15 != 0) {
    memcpy(FVar25.Data,(void *)_Src_00,lVar27 << 2);
  }
  local_120 = uVar15;
  uVar4 = local_288._8_4_;
  lVar27 = (longlong)(int)local_288._8_4_;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)local_168,local_288._8_4_);
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,uVar4,(ForAnyElementType *)local_168,(int *)(local_168 + 8),
             (int *)(local_168 + 0xc));
  local_168._48_4_ = local_258;
  local_168._52_4_ = local_254;
  TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
            ((TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10),
             (TBitArray<FDefaultBitArrayAllocator> *)(local_288 + 0x10));
  if (uVar4 != 0) {
    memcpy((void *)local_168._0_8_,(void *)local_288._0_8_,lVar27 * 0xc);
  }
  local_118._s_0.X = (double)this->_padding_;
  local_118._s_0.Y = (double)this->_padding_;
  local_f8 = SUB81(this->_padding_,0);
  local_e0 = (EProfileSweepPolygonGrouping)this->_padding_;
  local_f4 = *(float *)((longlong)&this->_padding_ + 4);
  local_108._s_0.X = (double)this->_padding_;
  local_108._s_0.Y = (double)this->_padding_;
  local_ec = (EProfileSweepQuadSplit)this->_padding_;
  local_e8 = (double)this->_padding_;
  local_ee._0_1_ = false;
  local_ee._1_1_ = true;
  local_f0 = bVar5;
  local_ef = bVar12;
  pFVar19 = FProfileSweepGenerator::Generate((FProfileSweepGenerator *)local_238);
  pFVar18 = local_428;
  FDynamicMesh3::FDynamicMesh3(local_428,pFVar19);
  dVar7 = _UNK_15076c718;
  dVar2 = ___xmm_bff0000000000000bff0000000000000;
  fVar31 = __real_3f800000;
  if (((bVar12 != false) && (!bVar5)) && (cVar3 != '\0')) {
    local_3f0 = 0;
    do {
      local_478.Data = (FScriptContainerElement *)0x0;
      local_470 = auStack_c8[local_3f0 * 4];
      lVar27 = (longlong)(int)local_470;
      _Src = (void *)(&uStack_d0)[local_3f0 * 2];
      if (local_470 == 0) {
        local_46c = 0;
        uVar15 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_470,0,&local_478,local_470,&local_46c);
        memcpy(local_478.Data,_Src,lVar27 << 2);
        uVar15 = local_470;
      }
      local_430[0] = 0;
      local_438.Data = (FScriptContainerElement *)0x0;
      local_430[1] = 0;
      if ((int)uVar15 < 1) {
        if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
        }
        uVar26 = uVar15;
        if (0 < (int)uVar15) goto LAB_1435a7351;
      }
      else {
        iVar16 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar15,&local_438,local_430,local_430 + 1);
        memset(local_438.Data + (longlong)iVar16 * 4,0,(longlong)(int)uVar15 << 2);
        uVar26 = local_470;
LAB_1435a7351:
        pFVar18 = local_428;
        lVar27 = 0;
        uVar29 = 0;
        do {
          local_440 = uVar29 + 1;
          uVar22 = (int)local_440 % (int)uVar15;
          uVar17 = 0;
          if ((int)uVar22 < (int)uVar26) {
            uVar17 = ~uVar22 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             uVar26 = local_470, bVar12)) {
            pcVar6 = (code *)swi(3);
            pFVar18 = (FDynamicMesh3 *)(*pcVar6)();
            return pFVar18;
          }
          local_3f8 = *(int *)(local_478.Data + (longlong)(int)uVar22 * 4);
          uVar17 = 0;
          if ((int)uVar29 < (int)uVar26) {
            uVar17 = ~uVar29 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            pFVar18 = (FDynamicMesh3 *)(*pcVar6)();
            return pFVar18;
          }
          iVar16 = FDynamicMesh3::FindEdge(pFVar18,*(int *)(local_478.Data + lVar27),local_3f8);
          uVar26 = 0;
          if ((int)uVar29 < local_430[0]) {
            uVar26 = ~uVar29 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            pFVar18 = (FDynamicMesh3 *)(*pcVar6)();
            return pFVar18;
          }
          *(int *)(local_438.Data + lVar27) = iVar16;
          lVar27 = lVar27 + 4;
          uVar29 = local_440;
          uVar26 = local_470;
        } while ((int)local_440 < (int)uVar15);
      }
      if (local_3f0 == 0) {
        lVar27 = 0;
        uVar15 = uVar26;
        if (0 < (int)uVar26 / 2) {
          pFVar21 = local_478.Data + (longlong)(int)(uVar26 - 1) * 4;
          do {
            uVar4 = *(undefined4 *)(local_478.Data + lVar27 * 4);
            *(undefined4 *)(local_478.Data + lVar27 * 4) = *(undefined4 *)pFVar21;
            lVar27 = lVar27 + 1;
            *(undefined4 *)pFVar21 = uVar4;
            pFVar21 = pFVar21 + -4;
            uVar15 = local_470;
          } while (lVar27 < (int)uVar26 / 2);
        }
        lVar27 = 0;
        uVar26 = uVar15;
        if (0 < local_430[0] / 2) {
          pFVar21 = local_438.Data + (longlong)(local_430[0] + -1) * 4;
          do {
            uVar4 = *(undefined4 *)(local_438.Data + lVar27 * 4);
            *(undefined4 *)(local_438.Data + lVar27 * 4) = *(undefined4 *)pFVar21;
            lVar27 = lVar27 + 1;
            *(undefined4 *)pFVar21 = uVar4;
            pFVar21 = pFVar21 + -4;
            uVar26 = local_470;
          } while (lVar27 < local_430[0] / 2);
        }
      }
      iVar16 = 0;
      local_450.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_450.ArrayNum = 0;
      local_450.ArrayMax = 0;
      pFVar21 = local_478.Data + (longlong)(int)uVar26 * 4;
      FVar25.Data = local_478.Data;
      uVar15 = uVar26;
      while( true ) {
        if (uVar15 != uVar26) {
          local_47f = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_47f)
          ;
          iVar16 = local_450.ArrayNum;
        }
        if (FVar25.Data == pFVar21) break;
        uVar23 = (ulonglong)(*(uint *)FVar25.Data & 0x1ff);
        lVar27 = *(longlong *)
                  ((local_428->Vertices).Blocks.AllocatorInstance.Data +
                  (ulonglong)(*(uint *)FVar25.Data >> 9) * 8);
        puVar1 = (undefined8 *)(lVar27 + uVar23 * 0x18);
        local_348 = *puVar1;
        uStack_340 = puVar1[1];
        local_338 = *(undefined8 *)(lVar27 + 0x10 + uVar23 * 0x18);
        iVar14 = iVar16;
        if ((local_450.AllocatorInstance.Data <= (FScriptContainerElement *)&local_348) &&
           ((FScriptContainerElement *)&local_348 <
            local_450.AllocatorInstance.Data + (longlong)local_450.ArrayMax * 0x18)) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar12) {
            pcVar6 = (code *)swi(3);
            pFVar18 = (FDynamicMesh3 *)(*pcVar6)();
            return pFVar18;
          }
          iVar14 = local_450.ArrayNum;
        }
        if (iVar14 == local_450.ArrayMax) {
          iVar14 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_450.AllocatorInstance,&local_450.ArrayMax);
        }
        iVar16 = iVar14 + 1;
        local_450.ArrayNum = iVar16;
        FVar25.Data = FVar25.Data + 4;
        *(undefined8 *)(local_450.AllocatorInstance.Data + (longlong)iVar14 * 0x18) = local_348;
        *(undefined8 *)(local_450.AllocatorInstance.Data + (longlong)iVar14 * 0x18 + 8) = uStack_340
        ;
        *(undefined8 *)(local_450.AllocatorInstance.Data + (longlong)iVar14 * 0x18 + 0x10) =
             local_338;
        uVar15 = local_470;
      }
      PolygonTriangulation::ComputePolygonPlane<double>
                (&local_450,(TVector<double> *)&local_360._s_0,(TVector<double> *)&local_2d8._s_0);
      pFVar18 = local_428;
      local_360._s_0.X = local_360._s_0.X * dVar2;
      local_360._s_0.Y = local_360._s_0.Y * dVar7;
      local_3e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_440 = local_428->GroupIDCounter;
      local_428->GroupIDCounter = local_440 + 1;
      local_3e8.ArrayNum = 0;
      local_3e8.ArrayMax = 0;
      local_460.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_460.ArrayNum = 0;
      local_460.ArrayMax = 0;
      local_360._s_0.Z = local_360._s_0.Z * dVar2;
      PolygonTriangulation::TriangulateSimplePolygon<double>(&local_450,&local_3e8,true);
      uVar15 = local_440;
      iVar16 = local_3e8.ArrayNum;
      uVar23 = (ulonglong)local_3e8.ArrayNum;
      pFVar21 = local_3e8.AllocatorInstance.Data + uVar23 * 0xc;
      FVar25.Data = local_3e8.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar23 != iVar16) {
          local_47e[0] = 0;
          `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_47e);
        }
        if (FVar25.Data == pFVar21) break;
        iVar14 = *(int *)(FVar25.Data + 8);
        local_328 = *(longlong *)FVar25.Data;
        if ((iVar14 < 0 || (int)local_470 <= iVar14) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          pFVar18 = (FDynamicMesh3 *)(*pcVar6)();
          return pFVar18;
        }
        iVar14 = *(int *)(local_478.Data + (longlong)iVar14 * 4);
        lVar27 = (longlong)local_328._4_4_;
        if ((local_328 < 0 || (int)local_470 <= local_328._4_4_) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          pFVar18 = (FDynamicMesh3 *)(*pcVar6)();
          return pFVar18;
        }
        iVar13 = *(int *)(local_478.Data + lVar27 * 4);
        lVar27 = (longlong)(int)local_328;
        if (((int)local_328 < 0 || (int)local_470 <= (int)local_328) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          pFVar18 = (FDynamicMesh3 *)(*pcVar6)();
          return pFVar18;
        }
        pFVar18 = local_428;
        local_388._s_0.A = *(undefined4 *)(local_478.Data + lVar27 * 4);
        local_388._s_0.B = iVar13;
        local_388._s_0.C = iVar14;
        local_468[0] = FDynamicMesh3::AppendTriangle(local_428,(FIndex3i *)&local_388._s_0,uVar15);
        if (-1 < local_468[0]) {
          if (((local_460.AllocatorInstance.Data <= (FScriptContainerElement *)local_468) &&
              ((FScriptContainerElement *)local_468 <
               local_460.AllocatorInstance.Data + (longlong)local_460.ArrayMax * 4)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar6 = (code *)swi(3);
            pFVar18 = (FDynamicMesh3 *)(*pcVar6)();
            return pFVar18;
          }
          iVar14 = local_460.ArrayNum;
          if (local_460.ArrayNum == local_460.ArrayMax) {
            iVar14 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_460.AllocatorInstance,&local_460.ArrayMax);
          }
          local_460.ArrayNum = iVar14 + 1;
          *(int *)(local_460.AllocatorInstance.Data + (longlong)iVar14 * 4) = local_468[0];
        }
        uVar23 = local_3e8._8_8_ & 0xffffffff;
        FVar25.Data = FVar25.Data + 0xc;
      }
      if ((pFVar18->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
        UELocal::SetTriangleNormals(pFVar18,&local_460);
        local_310._s_0.X = local_2d8._s_0.X;
        local_310._s_0.Y = local_2d8._s_0.Y;
        local_2f8._s_0.X = 0.0;
        local_2c0._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
        local_2c0._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
        local_2c0._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
        local_2f8._s_0.W = dVar10;
        local_2f8._s_0.Y = 0.0;
        local_2f8._s_0.Z = 0.0;
        local_310._s_0.Z = local_2d8._s_0.Z;
        TQuaternion<double>::SetFromTo
                  ((TQuaternion<double> *)&local_2f8._s_0,(TVector<double> *)&local_2c0._s_0,
                   (TVector<double> *)&local_360._s_0);
        bVar12 = (char)local_330->_padding_ == '\0';
        if (bVar12) {
          pTVar20 = &local_398;
          pTVar28 = &local_390;
          local_398._s_0.X = (float)(double)local_330->_padding_;
          local_398._s_0.Y = (float)(double)local_330->_padding_;
          local_390._s_0.X = (float)(double)local_330->_padding_;
          local_390._s_0.Y = (float)(double)local_330->_padding_;
        }
        else {
          pTVar20 = &local_3a8;
          pTVar28 = &local_3a0;
          local_3a0._s_0.X = (float)(double)local_330->_padding_ * (fVar31 / local_f4);
          local_3a0._s_0.Y = (float)(double)local_330->_padding_ * (fVar31 / local_f4);
          local_3a8._s_0.X = (float)(double)local_330->_padding_;
          local_3a8._s_0.Y = (float)(double)local_330->_padding_;
        }
        UELocal::SetTriangleUVsFromProjection
                  (pFVar18,&local_460,(TFrame3<double> *)&local_310._s_0,
                   (TVector2<float> *)&pTVar28->_s_0,(TVector2<float> *)&pTVar20->_s_0,0,true,bVar12
                  );
      }
      if (local_460.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_460.AllocatorInstance.Data);
      }
      if (local_3e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e8.AllocatorInstance.Data);
      }
      if (local_450.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_450.AllocatorInstance.Data);
      }
      if (local_438.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_438.Data);
      }
      if (local_478.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_478.Data);
      }
      local_3f0 = local_3f0 + 1;
    } while (local_3f0 < 2);
  }
  FProfileSweepGenerator::~FProfileSweepGenerator((FProfileSweepGenerator *)local_238);
  if (local_408.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.AllocatorInstance.Data);
  }
  local_240 = 0;
  if (local_248 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_248);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_288);
  if (local_490.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_490.AllocatorInstance.Data);
  }
  if (bVar30) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pFVar18;
}

