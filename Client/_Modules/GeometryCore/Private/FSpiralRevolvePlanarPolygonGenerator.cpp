// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// GenerateMesh @ 1435a8aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FDynamicMesh3 * __thiscall
UE::Geometry::FSpiralRevolvePlanarPolygonGenerator::GenerateMesh
          (FSpiralRevolvePlanarPolygonGenerator *this,FDynamicMesh3 *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  void *_Src;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  float fVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  FDynamicMesh3 *pFVar18;
  FMeshShapeGenerator *pFVar19;
  TVector2<float>_u_0 *pTVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  ForElementType<FSetElementId> _Src_00;
  ulonglong uVar24;
  FScriptContainerElement *pFVar25;
  ForAnyElementType FVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  TVector2<float>_u_0 *pTVar30;
  bool bVar31;
  double dVar32;
  undefined1 auStackY_498 [32];
  undefined1 local_447;
  undefined1 local_446;
  undefined1 local_445 [5];
  ForAnyElementType local_440;
  uint local_438;
  int local_434;
  int local_430 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_428;
  TArray<int,TSizedDefaultAllocator<32>_> local_418;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_408;
  uint local_3f8;
  ForAnyElementType local_3f0;
  int local_3e8 [4];
  TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_> local_3d8;
  FDynamicMesh3 *local_3c8;
  longlong local_3c0;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_3b8;
  TVector2<float>_u_0 local_3a8;
  TVector2<float>_u_0 local_3a0;
  TVector2<float>_u_0 local_398;
  TVector2<float>_u_0 local_390;
  FIndex3i_u_0 local_388;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  TVector<double>_u_0 local_360;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  FSpiralRevolvePlanarPolygonGenerator *local_330;
  undefined8 local_328;
  TVector<double>_u_0 local_318;
  TVector<double>_u_0 local_300;
  TVector<double>_u_0 local_2e8;
  TQuaternion<double>_u_0 local_2d0;
  TVector<double>_u_0 local_2b0;
  TVector<double>_u_0 local_298;
  undefined1 local_278 [32];
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined1 local_240 [8];
  ForElementType<FSetElementId> local_238;
  uint local_230;
  undefined1 local_228 [208];
  undefined1 local_158 [56];
  undefined1 local_120 [8];
  ForAnyElementType local_118;
  uint local_110;
  TVector2<double>_u_0 local_108;
  TVector2<double>_u_0 local_f8;
  bool local_e8;
  float local_e4;
  undefined4 local_e0;
  EProfileSweepQuadSplit local_dc;
  double local_d8;
  EProfileSweepPolygonGrouping local_d0;
  undefined8 uStack_c0;
  uint auStack_b8 [8];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_498;
  bVar31 = -1 < CpuChannel->Enabled;
  local_3c8 = __return_storage_ptr__;
  local_330 = this;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId524,"SpiralRevolvePlanarPolygonGenerator_GenerateMesh",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\RevolveGenerator.cpp"
               ,0x20c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId524);
  }
  dVar12 = __real_3ff0000000000000;
  iVar16 = (this->PolygonVertices).ArrayNum;
  iVar21 = 0;
  pFVar22 = (this->PolygonVertices).AllocatorInstance.Data;
  pFVar25 = pFVar22 + (longlong)iVar16 * 0x10;
  local_318._s_0.Z = __real_3ff0000000000000;
  local_300._s_0.Z = 0.0;
  local_318._s_0.X = 0.0;
  local_318._s_0.Y = 0.0;
  local_428.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300._s_0.X = 0.0;
  local_300._s_0.Y = 0.0;
  local_428.ArrayNum = 0;
  local_428.ArrayMax = 0;
  local_278._0_8_ = (void *)0x0;
  local_278._8_8_ = 0;
  local_258 = 0;
  local_250 = 0;
  local_24c = 0x80;
  local_248 = 0xffffffff;
  local_244 = 0;
  local_238 = (ForElementType<FSetElementId>)0x0;
  local_230 = 0;
  while( true ) {
    if ((this->PolygonVertices).ArrayNum != iVar16) {
      local_447 = 0;
      `TCheckedPointerIterator<UE::Math::TVector2<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_447);
      iVar21 = local_428.ArrayNum;
    }
    if (pFVar22 == pFVar25) break;
    local_378 = *(undefined8 *)pFVar22;
    local_368 = *(undefined8 *)(pFVar22 + 8);
    uStack_370 = 0;
    iVar15 = iVar21;
    if ((local_428.AllocatorInstance.Data <= (FScriptContainerElement *)&local_378) &&
       ((FScriptContainerElement *)&local_378 <
        local_428.AllocatorInstance.Data + (longlong)local_428.ArrayMax * 0x18)) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar14) {
        pcVar5 = (code *)swi(3);
        pFVar18 = (FDynamicMesh3 *)(*pcVar5)();
        return pFVar18;
      }
      iVar15 = local_428.ArrayNum;
    }
    if (iVar15 == local_428.ArrayMax) {
      iVar15 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_428.AllocatorInstance,&local_428.ArrayMax);
    }
    iVar21 = iVar15 + 1;
    local_428.ArrayNum = iVar21;
    pFVar22 = pFVar22 + 0x10;
    *(undefined8 *)(local_428.AllocatorInstance.Data + (longlong)iVar15 * 0x18) = local_378;
    *(undefined8 *)(local_428.AllocatorInstance.Data + (longlong)iVar15 * 0x18 + 8) = uStack_370;
    *(undefined8 *)(local_428.AllocatorInstance.Data + (longlong)iVar15 * 0x18 + 0x10) = local_368;
  }
  lVar29 = (longlong)(iVar21 / 2);
  if (0 < iVar21 / 2) {
    pFVar22 = local_428.AllocatorInstance.Data + (longlong)(iVar21 + -1) * 0x18;
    FVar26.Data = local_428.AllocatorInstance.Data;
    do {
      uVar2 = *(undefined8 *)(FVar26.Data + 0x10);
      uVar9 = *(undefined8 *)(pFVar22 + 8);
      uVar10 = *(undefined8 *)FVar26.Data;
      uVar11 = *(undefined8 *)(FVar26.Data + 8);
      *(undefined8 *)FVar26.Data = *(undefined8 *)pFVar22;
      *(undefined8 *)(FVar26.Data + 8) = uVar9;
      *(undefined8 *)(FVar26.Data + 0x10) = *(undefined8 *)(pFVar22 + 0x10);
      *(undefined8 *)pFVar22 = uVar10;
      *(undefined8 *)(pFVar22 + 8) = uVar11;
      *(undefined8 *)(pFVar22 + 0x10) = uVar2;
      lVar29 = lVar29 + -1;
      pFVar22 = pFVar22 + -0x18;
      FVar26.Data = FVar26.Data + 0x18;
    } while (lVar29 != 0);
  }
  dVar7 = (double)*(float *)((longlong)&this->_padding_ + 4);
  dVar32 = dVar12 / (double)(int)this->_padding_;
  if (dVar7 <= __real_3f847ae147ae147b) {
    dVar7 = __real_3f847ae147ae147b;
  }
  dVar8 = (double)*(float *)&this->_padding_;
  dVar6 = dVar32 * dVar7;
  if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
    dVar6 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar6,0) ^ (uint)__xmm_80000000000000008000000000000000);
    dVar8 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar8,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  dVar7 = dVar7 * this->RisePerFullRevolution * dVar32 * __real_3f66c16c16c16c17;
  if (((*(char *)((longlong)&this->_padding_ + 5) != '\0') && (dVar6 != 0.0)) &&
     ((double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
      __real_4066800000000000)) {
    RevolveUtil::MakeProfileCurveMidpointOfFirstStep
              (&local_428,dVar6,(TVector<double> *)&local_300._s_0,
               (TVector<double> *)&local_318._s_0);
  }
  uVar27 = (int)this->_padding_ + 1;
  local_3d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3d8.ArrayNum = 0;
  local_3d8.ArrayMax = 0;
  if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
  }
  if (0 < (int)uVar27) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,uVar27,&local_3d8.AllocatorInstance,0,&local_3d8.ArrayMax);
  }
  RevolveUtil::GenerateSweepCurve
            ((TVector<double> *)&local_300._s_0,(TVector<double> *)&local_318._s_0,dVar8,dVar6,dVar7
             ,uVar27,&local_3d8);
  if ((this->bWeldVertsOnAxis != false) && (dVar7 == 0.0)) {
    RevolveUtil::WeldPointsOnAxis
              (&local_428,(TVector<double> *)&local_300._s_0,(TVector<double> *)&local_318._s_0,
               __real_3fb999999999999a,
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_278);
  }
  cVar3 = *(char *)((longlong)&this->_padding_ + 6);
  FProfileSweepGenerator::FProfileSweepGenerator((FProfileSweepGenerator *)local_228);
  FVar26.Data = local_428.AllocatorInstance.Data;
  iVar16 = local_428.ArrayNum;
  lVar29 = (longlong)local_428.ArrayNum;
  local_228._168_4_ = local_428.ArrayNum;
  if ((local_428.ArrayNum == 0) && (local_228._172_4_ == 0)) {
    local_228._172_4_ = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_428.ArrayNum,local_228._172_4_,(ForAnyElementType *)(local_228 + 0xa0),
               local_428.ArrayNum,(int *)(local_228 + 0xac));
    if (iVar16 != 0) {
      memcpy((void *)local_228._160_8_,FVar26.Data,lVar29 * 0x18);
    }
  }
  FVar26.Data = local_3d8.AllocatorInstance.Data;
  iVar16 = local_3d8.ArrayNum;
  lVar29 = (longlong)local_3d8.ArrayNum;
  local_228._184_4_ = local_3d8.ArrayNum;
  if ((local_3d8.ArrayNum == 0) && (local_228._188_4_ == 0)) {
    local_228._188_4_ = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,local_3d8.ArrayNum,local_228._188_4_,(ForAnyElementType *)(local_228 + 0xb0),
               local_3d8.ArrayNum,(int *)(local_228 + 0xbc));
    if (iVar16 != 0) {
      memcpy((void *)local_228._176_8_,FVar26.Data,lVar29 * 0x38);
    }
  }
  uVar27 = local_230;
  lVar29 = (longlong)(int)local_230;
  uVar28 = local_230;
  if (local_230 < 2) {
    if ((ForElementType<FSetElementId>)local_118.Data == (ForElementType<FSetElementId>)0x0)
    goto LAB_1435a8f97;
    uVar28 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_118,0,uVar28,4);
LAB_1435a8f97:
  _Src_00 = (ForElementType<FSetElementId>)local_240;
  if (local_238 != (ForElementType<FSetElementId>)0x0) {
    _Src_00 = local_238;
  }
  FVar26.Data = (FScriptContainerElement *)local_120;
  if ((ForElementType<FSetElementId>)local_118.Data != (ForElementType<FSetElementId>)0x0) {
    FVar26.Data = local_118.Data;
  }
  if (uVar27 != 0) {
    memcpy(FVar26.Data,(void *)_Src_00,lVar29 << 2);
  }
  local_110 = uVar27;
  uVar4 = local_278._8_4_;
  lVar29 = (longlong)(int)local_278._8_4_;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)local_158,local_278._8_4_);
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,uVar4,(ForAnyElementType *)local_158,(int *)(local_158 + 8),
             (int *)(local_158 + 0xc));
  local_158._48_4_ = local_248;
  local_158._52_4_ = local_244;
  TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
            ((TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10),
             (TBitArray<FDefaultBitArrayAllocator> *)(local_278 + 0x10));
  if (uVar4 != 0) {
    memcpy((void *)local_158._0_8_,(void *)local_278._0_8_,lVar29 * 0xc);
  }
  local_108._s_0.X = (double)this->_padding_;
  local_108._s_0.Y = (double)this->_padding_;
  local_e8 = SUB81(this->_padding_,0);
  local_d0 = (EProfileSweepPolygonGrouping)this->_padding_;
  local_e4 = *(float *)((longlong)&this->_padding_ + 4);
  local_f8._s_0.X = (double)this->_padding_;
  local_f8._s_0.Y = (double)this->_padding_;
  local_dc = (EProfileSweepQuadSplit)this->_padding_;
  local_d8 = (double)this->_padding_;
  local_e0._0_1_ = false;
  local_e0._1_1_ = true;
  local_e0._2_1_ = false;
  local_e0._3_1_ = true;
  pFVar19 = FProfileSweepGenerator::Generate((FProfileSweepGenerator *)local_228);
  FDynamicMesh3::FDynamicMesh3(__return_storage_ptr__,pFVar19);
  dVar32 = _UNK_15076c718;
  dVar7 = ___xmm_bff0000000000000bff0000000000000;
  fVar13 = __real_3f800000;
  if (cVar3 != '\0') {
    local_3c0 = 0;
    do {
      local_440.Data = (FScriptContainerElement *)0x0;
      local_438 = auStack_b8[local_3c0 * 4];
      lVar29 = (longlong)(int)local_438;
      _Src = (void *)(&uStack_c0)[local_3c0 * 2];
      if (local_438 == 0) {
        local_434 = 0;
        uVar27 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_438,0,&local_440,local_438,&local_434);
        memcpy(local_440.Data,_Src,lVar29 << 2);
        uVar27 = local_438;
      }
      uVar24 = (ulonglong)uVar27;
      local_3e8[0] = 0;
      local_3f0.Data = (FScriptContainerElement *)0x0;
      local_3e8[1] = 0;
      local_3e8[2] = uVar27;
      if ((int)uVar27 < 1) {
        if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum(uVar24);
        }
        if (0 < (int)uVar27) goto LAB_1435a91d9;
      }
      else {
        iVar16 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar27,&local_3f0,local_3e8,local_3e8 + 1);
        memset(local_3f0.Data + (longlong)iVar16 * 4,0,(longlong)(int)uVar27 << 2);
        uVar24 = (ulonglong)(uint)local_3e8[2];
        uVar27 = local_438;
LAB_1435a91d9:
        lVar29 = 0;
        uVar28 = 0;
        do {
          local_3f8 = uVar28 + 1;
          uVar23 = (int)local_3f8 % (int)uVar24;
          uVar17 = 0;
          if ((int)uVar23 < (int)uVar27) {
            uVar17 = ~uVar23 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             uVar27 = local_438, bVar14)) {
            pcVar5 = (code *)swi(3);
            pFVar18 = (FDynamicMesh3 *)(*pcVar5)();
            return pFVar18;
          }
          iVar16 = *(int *)(local_440.Data + (longlong)(int)uVar23 * 4);
          uVar17 = 0;
          if ((int)uVar28 < (int)uVar27) {
            uVar17 = ~uVar28 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            pFVar18 = (FDynamicMesh3 *)(*pcVar5)();
            return pFVar18;
          }
          __return_storage_ptr__ = local_3c8;
          iVar16 = FDynamicMesh3::FindEdge(local_3c8,*(int *)(local_440.Data + lVar29),iVar16);
          uVar27 = 0;
          if ((int)uVar28 < local_3e8[0]) {
            uVar27 = ~uVar28 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            pFVar18 = (FDynamicMesh3 *)(*pcVar5)();
            return pFVar18;
          }
          uVar24 = (ulonglong)(uint)local_3e8[2];
          *(int *)(local_3f0.Data + lVar29) = iVar16;
          lVar29 = lVar29 + 4;
          uVar28 = local_3f8;
          uVar27 = local_438;
        } while ((int)local_3f8 < local_3e8[2]);
      }
      if (local_3c0 == 0) {
        lVar29 = 0;
        uVar28 = uVar27;
        if (0 < (int)uVar27 / 2) {
          pFVar22 = local_440.Data + (longlong)(int)(uVar27 - 1) * 4;
          do {
            uVar4 = *(undefined4 *)(local_440.Data + lVar29 * 4);
            *(undefined4 *)(local_440.Data + lVar29 * 4) = *(undefined4 *)pFVar22;
            lVar29 = lVar29 + 1;
            *(undefined4 *)pFVar22 = uVar4;
            pFVar22 = pFVar22 + -4;
            uVar28 = local_438;
          } while (lVar29 < (int)uVar27 / 2);
        }
        lVar29 = 0;
        uVar27 = uVar28;
        if (0 < local_3e8[0] / 2) {
          pFVar22 = local_3f0.Data + (longlong)(local_3e8[0] + -1) * 4;
          do {
            uVar4 = *(undefined4 *)(local_3f0.Data + lVar29 * 4);
            *(undefined4 *)(local_3f0.Data + lVar29 * 4) = *(undefined4 *)pFVar22;
            lVar29 = lVar29 + 1;
            *(undefined4 *)pFVar22 = uVar4;
            pFVar22 = pFVar22 + -4;
            uVar27 = local_438;
          } while (lVar29 < local_3e8[0] / 2);
        }
      }
      iVar16 = 0;
      local_408.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_408.ArrayNum = 0;
      local_408.ArrayMax = 0;
      pFVar22 = local_440.Data + (longlong)(int)uVar27 * 4;
      FVar26.Data = local_440.Data;
      uVar28 = uVar27;
      while( true ) {
        if (uVar28 != uVar27) {
          local_446 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_446)
          ;
          iVar16 = local_408.ArrayNum;
        }
        if (FVar26.Data == pFVar22) break;
        uVar24 = (ulonglong)(*(uint *)FVar26.Data & 0x1ff);
        lVar29 = *(longlong *)
                  ((__return_storage_ptr__->Vertices).Blocks.AllocatorInstance.Data +
                  (ulonglong)(*(uint *)FVar26.Data >> 9) * 8);
        puVar1 = (undefined8 *)(lVar29 + uVar24 * 0x18);
        local_348 = *puVar1;
        uStack_340 = puVar1[1];
        local_338 = *(undefined8 *)(lVar29 + 0x10 + uVar24 * 0x18);
        iVar21 = iVar16;
        if ((local_408.AllocatorInstance.Data <= (FScriptContainerElement *)&local_348) &&
           ((FScriptContainerElement *)&local_348 <
            local_408.AllocatorInstance.Data + (longlong)local_408.ArrayMax * 0x18)) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar14) {
            pcVar5 = (code *)swi(3);
            pFVar18 = (FDynamicMesh3 *)(*pcVar5)();
            return pFVar18;
          }
          iVar21 = local_408.ArrayNum;
        }
        if (iVar21 == local_408.ArrayMax) {
          iVar21 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_408.AllocatorInstance,&local_408.ArrayMax);
        }
        iVar16 = iVar21 + 1;
        local_408.ArrayNum = iVar16;
        FVar26.Data = FVar26.Data + 4;
        *(undefined8 *)(local_408.AllocatorInstance.Data + (longlong)iVar21 * 0x18) = local_348;
        *(undefined8 *)(local_408.AllocatorInstance.Data + (longlong)iVar21 * 0x18 + 8) = uStack_340
        ;
        *(undefined8 *)(local_408.AllocatorInstance.Data + (longlong)iVar21 * 0x18 + 0x10) =
             local_338;
        uVar28 = local_438;
      }
      PolygonTriangulation::ComputePolygonPlane<double>
                (&local_408,(TVector<double> *)&local_360._s_0,(TVector<double> *)&local_2b0._s_0);
      local_3f8 = __return_storage_ptr__->GroupIDCounter;
      local_3b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_360._s_0.X = local_360._s_0.X * dVar7;
      local_360._s_0.Y = local_360._s_0.Y * dVar32;
      __return_storage_ptr__->GroupIDCounter = local_3f8 + 1;
      local_3b8.ArrayNum = 0;
      local_3b8.ArrayMax = 0;
      local_418.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_418.ArrayNum = 0;
      local_418.ArrayMax = 0;
      local_360._s_0.Z = local_360._s_0.Z * dVar7;
      PolygonTriangulation::TriangulateSimplePolygon<double>(&local_408,&local_3b8,true);
      uVar27 = local_3f8;
      iVar16 = local_3b8.ArrayNum;
      uVar24 = (ulonglong)local_3b8.ArrayNum;
      pFVar22 = local_3b8.AllocatorInstance.Data + uVar24 * 0xc;
      FVar26.Data = local_3b8.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar24 != iVar16) {
          local_445[0] = 0;
          `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_445);
        }
        __return_storage_ptr__ = local_3c8;
        if (FVar26.Data == pFVar22) break;
        iVar21 = *(int *)(FVar26.Data + 8);
        local_328 = *(longlong *)FVar26.Data;
        if ((iVar21 < 0 || (int)local_438 <= iVar21) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          pFVar18 = (FDynamicMesh3 *)(*pcVar5)();
          return pFVar18;
        }
        iVar21 = *(int *)(local_440.Data + (longlong)iVar21 * 4);
        lVar29 = (longlong)local_328._4_4_;
        if ((local_328 < 0 || (int)local_438 <= local_328._4_4_) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          pFVar18 = (FDynamicMesh3 *)(*pcVar5)();
          return pFVar18;
        }
        iVar15 = *(int *)(local_440.Data + lVar29 * 4);
        lVar29 = (longlong)(int)local_328;
        if (((int)local_328 < 0 || (int)local_438 <= (int)local_328) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          pFVar18 = (FDynamicMesh3 *)(*pcVar5)();
          return pFVar18;
        }
        local_388._s_0.A = *(undefined4 *)(local_440.Data + lVar29 * 4);
        local_388._s_0.B = iVar15;
        local_388._s_0.C = iVar21;
        local_430[0] = FDynamicMesh3::AppendTriangle(local_3c8,(FIndex3i *)&local_388._s_0,uVar27);
        if (-1 < local_430[0]) {
          if (((local_418.AllocatorInstance.Data <= (FScriptContainerElement *)local_430) &&
              ((FScriptContainerElement *)local_430 <
               local_418.AllocatorInstance.Data + (longlong)local_418.ArrayMax * 4)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar5 = (code *)swi(3);
            pFVar18 = (FDynamicMesh3 *)(*pcVar5)();
            return pFVar18;
          }
          iVar21 = local_418.ArrayNum;
          if (local_418.ArrayNum == local_418.ArrayMax) {
            iVar21 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_418.AllocatorInstance,&local_418.ArrayMax);
          }
          local_418.ArrayNum = iVar21 + 1;
          *(int *)(local_418.AllocatorInstance.Data + (longlong)iVar21 * 4) = local_430[0];
        }
        uVar24 = local_3b8._8_8_ & 0xffffffff;
        FVar26.Data = FVar26.Data + 0xc;
      }
      if ((local_3c8->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
        UELocal::SetTriangleNormals(local_3c8,&local_418);
        local_2e8._s_0.X = local_2b0._s_0.X;
        local_2e8._s_0.Y = local_2b0._s_0.Y;
        local_2d0._s_0.X = 0.0;
        local_298._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
        local_298._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
        local_298._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
        local_2d0._s_0.W = dVar12;
        local_2d0._s_0.Y = 0.0;
        local_2d0._s_0.Z = 0.0;
        local_2e8._s_0.Z = local_2b0._s_0.Z;
        TQuaternion<double>::SetFromTo
                  ((TQuaternion<double> *)&local_2d0._s_0,(TVector<double> *)&local_298._s_0,
                   (TVector<double> *)&local_360._s_0);
        bVar14 = (char)local_330->_padding_ == '\0';
        if (bVar14) {
          pTVar30 = &local_390;
          local_398._s_0.X = (float)(double)local_330->_padding_;
          local_398._s_0.Y = (float)(double)local_330->_padding_;
          local_390._s_0.X = (float)(double)local_330->_padding_;
          local_390._s_0.Y = (float)(double)local_330->_padding_;
          pTVar20 = &local_398;
        }
        else {
          pTVar30 = &local_3a0;
          local_3a0._s_0.X = (float)(double)local_330->_padding_ * (fVar13 / local_e4);
          local_3a0._s_0.Y = (float)(double)local_330->_padding_ * (fVar13 / local_e4);
          local_3a8._s_0.X = (float)(double)local_330->_padding_;
          local_3a8._s_0.Y = (float)(double)local_330->_padding_;
          pTVar20 = &local_3a8;
        }
        UELocal::SetTriangleUVsFromProjection
                  (__return_storage_ptr__,&local_418,(TFrame3<double> *)&local_2e8._s_0,
                   (TVector2<float> *)&pTVar30->_s_0,(TVector2<float> *)&pTVar20->_s_0,0,true,bVar14
                  );
      }
      if (local_418.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_418.AllocatorInstance.Data);
      }
      if (local_3b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b8.AllocatorInstance.Data);
      }
      if (local_408.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_408.AllocatorInstance.Data);
      }
      if (local_3f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f0.Data);
      }
      if (local_440.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_440.Data);
      }
      local_3c0 = local_3c0 + 1;
    } while (local_3c0 < 2);
  }
  FProfileSweepGenerator::~FProfileSweepGenerator((FProfileSweepGenerator *)local_228);
  if (local_3d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.AllocatorInstance.Data);
  }
  local_230 = 0;
  if (local_238 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_238);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_278);
  if (local_428.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.AllocatorInstance.Data);
  }
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

