// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 5

// MeshDistanceStatistics<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_> @ 14cda1a10

void __cdecl
UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::
MeshDistanceStatistics<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_>
          (FDynamicMesh3 *param_1,TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_2,
          FDynamicMesh3 *param_3,TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_4,bool param_5,
          double *param_6,double *param_7,double *param_8,double *param_9)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  double dVar12;
  double dVar13;
  TArray<double,TSizedDefaultAllocator<32>_> local_48;
  TArray<double,TSizedDefaultAllocator<32>_> local_38 [2];
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  VertexToSurfaceDistances<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_>
            (param_1,param_2,&local_48);
  if (((param_5 != false) && (param_3 != (FDynamicMesh3 *)0x0)) &&
     (param_4 != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0)) {
    local_38[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38[0].ArrayNum = 0;
    local_38[0].ArrayMax = 0;
    VertexToSurfaceDistances<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_>
              (param_3,param_4,local_38);
    lVar10 = (longlong)local_38[0].ArrayNum;
    if (local_38[0].ArrayNum != 0) {
      iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,local_38[0].ArrayNum,&local_48.AllocatorInstance,&local_48.ArrayNum,
                         &local_48.ArrayMax);
      memcpy(local_48.AllocatorInstance.Data + (longlong)iVar8 * 8,
             local_38[0].AllocatorInstance.Data,lVar10 << 3);
    }
    if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].AllocatorInstance.Data);
    }
  }
  pdVar7 = param_9;
  pdVar6 = param_8;
  pdVar5 = param_7;
  pdVar4 = param_6;
  dVar3 = __real_3ff0000000000000;
  iVar8 = local_48.ArrayNum;
  uVar9 = (ulonglong)local_48.ArrayNum;
  *param_6 = -3.3999999521443642e+38;
  pFVar1 = local_48.AllocatorInstance.Data + uVar9 * 8;
  dVar12 = (double)local_48.ArrayNum;
  *param_7 = 3.3999999521443642e+38;
  *param_8 = 0.0;
  FVar11.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar9 != iVar8) {
      `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()(&param_5);
      uVar9 = local_48._8_8_ & 0xffffffff;
    }
    if (FVar11.Data == pFVar1) break;
    dVar2 = *pdVar4;
    dVar13 = *(double *)FVar11.Data;
    if (*(double *)FVar11.Data <= dVar2) {
      dVar13 = dVar2;
    }
    *pdVar4 = dVar13;
    dVar2 = *pdVar5;
    dVar13 = *(double *)FVar11.Data;
    if (dVar2 <= *(double *)FVar11.Data) {
      dVar13 = dVar2;
    }
    *pdVar5 = dVar13;
    *pdVar6 = (dVar3 / dVar12) * *(double *)FVar11.Data + *pdVar6;
    dVar2 = *(double *)FVar11.Data;
    FVar11.Data = FVar11.Data + 8;
    *pdVar7 = dVar2 * dVar2 + *pdVar7;
  }
  *pdVar7 = SQRT((dVar3 / dVar12) * *pdVar7);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// VertexToSurfaceDistances<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_> @ 14cda4ec0

void __cdecl
UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::
VertexToSurfaceDistances<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_>
          (FDynamicMesh3 *param_1,TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_2,
          TArray<double,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  <lambda_1> local_res8;
  TArrayView<std::nullptr_t,int> local_58;
  code *local_48;
  FDynamicMesh3 **local_40;
  FDynamicMesh3 *local_38;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_30;
  TArray<double,TSizedDefaultAllocator<32>_> *local_28;
  
  cVar4 = (**(code **)(param_2->_padding_ + 0x18))(param_2);
  if ((cVar4 == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SpatialB.SupportsNearestTriangle()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                         ,0x279,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar7 = param_3->ArrayNum;
  piVar1 = &param_3->ArrayNum;
  uVar2 = (param_1->VertexRefCounts).UsedCount;
  if (iVar7 < (int)uVar2) {
    iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar2 - iVar7,&param_3->AllocatorInstance,piVar1,&param_3->ArrayMax);
    memset((param_3->AllocatorInstance).Data + (longlong)iVar6 * 8,0,
           (longlong)(int)(uVar2 - iVar7) << 3);
  }
  else {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if ((int)uVar2 < iVar7) {
      uVar8 = iVar7 - uVar2;
      if (((int)(uVar8 | uVar2) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        _Dst = (param_3->AllocatorInstance).Data + (longlong)(int)uVar2 * 8;
        iVar7 = (*piVar1 - uVar2) - uVar8;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar8 * 8,(longlong)iVar7 << 3);
        }
        *piVar1 = *piVar1 - uVar8;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&param_3->AllocatorInstance,*piVar1,&param_3->ArrayMax);
      }
    }
  }
  local_48 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::VertexToSurfaceDistances<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_>'::__l2::<lambda_1>,void,int>
             ::Call;
  local_40 = &local_38;
  local_58.DataPtr = (void **)0x0;
  local_58.ArrayNum = 0;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(param_1->VertexRefCounts).UsedCount,1,
             (TFunctionRef<void___cdecl(int)> *)&local_48,local_res8,None,&local_58);
  return;
}

// operator() @ 14cda7100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::
VertexToSurfaceDistances<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_>'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88 [2];
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  undefined1 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  lVar3 = *(longlong *)this;
  if ((-1 < param_1) && (param_1 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24))) {
    uVar8 = (ulonglong)(param_1 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar3 + 0x28) + (ulonglong)((uint)param_1 >> 9) * 8) +
                           uVar8 * 2) - 1U) < 0xfffe) {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8);
      puVar1 = (undefined8 *)(lVar3 + uVar8 * 0x18);
      local_a0 = *puVar1;
      uStack_98 = puVar1[1];
      local_90 = *(undefined8 *)(lVar3 + 0x10 + uVar8 * 0x18);
      local_88[0] = __real_7fefffffffffffff;
      local_78 = 0;
      local_50 = (longlong *)0x0;
      local_48 = 0;
      (**(code **)(**(longlong **)((longlong)this + 8) + 0x20))
                (*(longlong **)((longlong)this + 8),&local_a0,&local_a8,local_88);
      if (local_78 != 0) {
        plVar6 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar6 = local_50;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      plVar6 = *(longlong **)((longlong)this + 0x10);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_a8;
      auVar9 = sqrtpd(auVar9,auVar9);
      iVar2 = (int)plVar6[1];
      local_b0 = (longlong)iVar2;
      uVar7 = 0;
      if (param_1 < iVar2) {
        uVar7 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (local_b8 = (longlong)param_1,
         bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(longlong *)(*plVar6 + (longlong)param_1 * 8) = auVar9._0_8_;
    }
  }
  return;
}

// GetVolumeArea @ 14cddb880

TVector2<double> * __cdecl
UE::Geometry::
TMeshQueries<UE::Geometry::TIndexMeshArrayAdapter<int,double,UE::Math::TVector<double>_>_>::
GetVolumeArea(TVector2<double> *__return_storage_ptr__,
             TIndexMeshArrayAdapter<int,double,UE::Math::TVector<double>_> *param_1)

{
  double dVar1;
  int iVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  TVector2<double> *pTVar17;
  uint uVar18;
  int iVar19;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar20;
  int iVar21;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  pTVar20 = param_1->SourceTriangles;
  iVar21 = 0;
  dVar9 = 0.0;
  iVar19 = pTVar20->ArrayNum;
  dVar10 = 0.0;
  dVar11 = 0.0;
  dVar1 = 0.0;
  if (0 < iVar19 / 3 + (iVar19 >> 0x1f) +
          (int)(((longlong)iVar19 / 3 + ((longlong)iVar19 >> 0x3f) & 0xffffffffU) >> 0x1f)) {
    uVar18 = 2;
    iVar19 = 0;
    lVar22 = 8;
    do {
      if ((-1 < iVar19) && ((int)(uVar18 - 2) < pTVar20->ArrayNum)) {
        pTVar3 = param_1->SourceVertices;
        if (((int)(uVar18 - 2) < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          pTVar17 = (TVector2<double> *)(*pcVar6)();
          return pTVar17;
        }
        uVar16 = *(uint *)((pTVar20->AllocatorInstance).Data + lVar22 + -8);
        uVar15 = 0;
        if ((int)uVar16 < pTVar3->ArrayNum) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          pTVar17 = (TVector2<double> *)(*pcVar6)();
          return pTVar17;
        }
        pFVar4 = (pTVar3->AllocatorInstance).Data;
        pTVar20 = param_1->SourceTriangles;
        pTVar3 = param_1->SourceVertices;
        dVar1 = *(double *)(pFVar4 + (longlong)(int)uVar16 * 0x18 + 0x10);
        pFVar4 = pFVar4 + (longlong)(int)uVar16 * 0x18;
        dVar11 = *(double *)pFVar4;
        dVar25 = *(double *)(pFVar4 + 8);
        uVar16 = 0;
        if ((int)(uVar18 - 1) < pTVar20->ArrayNum) {
          uVar16 = ~(uVar18 - 1) >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          pTVar17 = (TVector2<double> *)(*pcVar6)();
          return pTVar17;
        }
        uVar16 = *(uint *)((pTVar20->AllocatorInstance).Data + lVar22 + -4);
        uVar15 = 0;
        if ((int)uVar16 < pTVar3->ArrayNum) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          pTVar17 = (TVector2<double> *)(*pcVar6)();
          return pTVar17;
        }
        pFVar4 = (pTVar3->AllocatorInstance).Data;
        pTVar20 = param_1->SourceTriangles;
        pTVar3 = param_1->SourceVertices;
        dVar24 = *(double *)(pFVar4 + (longlong)(int)uVar16 * 0x18 + 0x10);
        pFVar4 = pFVar4 + (longlong)(int)uVar16 * 0x18;
        dVar12 = *(double *)pFVar4;
        dVar26 = *(double *)(pFVar4 + 8);
        uVar16 = 0;
        if ((int)uVar18 < pTVar20->ArrayNum) {
          uVar16 = ~uVar18 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          pTVar17 = (TVector2<double> *)(*pcVar6)();
          return pTVar17;
        }
        uVar16 = *(uint *)((pTVar20->AllocatorInstance).Data + lVar22);
        uVar15 = 0;
        if ((int)uVar16 < pTVar3->ArrayNum) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          pTVar17 = (TVector2<double> *)(*pcVar6)();
          return pTVar17;
        }
        pFVar5 = (pTVar3->AllocatorInstance).Data;
        dVar24 = dVar24 - dVar1;
        dVar8 = dVar12 - dVar11;
        pFVar4 = pFVar5 + (longlong)(int)uVar16 * 0x18;
        dVar13 = *(double *)pFVar4;
        dVar26 = dVar26 - dVar25;
        dVar1 = *(double *)(pFVar5 + (longlong)(int)uVar16 * 0x18 + 0x10) - dVar1;
        dVar7 = dVar13 - dVar11;
        dVar25 = *(double *)(pFVar4 + 8) - dVar25;
        dVar23 = dVar1 * dVar8 - dVar7 * dVar24;
        dVar24 = dVar25 * dVar24 - dVar1 * dVar26;
        dVar1 = dVar7 * dVar26 - dVar25 * dVar8;
        dVar9 = dVar9 + (dVar12 + dVar11 + dVar13) * dVar24;
        dVar10 = dVar10 + SQRT(dVar24 * dVar24 + dVar23 * dVar23 + dVar1 * dVar1);
      }
      pTVar20 = param_1->SourceTriangles;
      iVar21 = iVar21 + 1;
      uVar18 = uVar18 + 3;
      lVar22 = lVar22 + 0xc;
      iVar19 = iVar19 + 3;
      iVar2 = pTVar20->ArrayNum;
      dVar11 = dVar9;
      dVar1 = dVar10;
    } while (iVar21 < iVar2 / 3 + (iVar2 >> 0x1f) +
                      (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f)
            );
  }
  dVar1 = dVar1 * __real_3fe0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar11 * __real_3fc5555555555555;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetVolumeAreaCenter @ 14ce6e300

TVector2<double> * __cdecl
UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVolumeAreaCenter
          (TVector2<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,TVector<double> *param_2)

{
  double *pdVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double local_res10;
  double local_res18;
  double local_100;
  double dStack_f8;
  double local_f0;
  
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar20 = 0;
  (param_2->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = (double)uVar14;
  (param_2->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar19 = 0;
  iVar18 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
           (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  local_res18 = 0.0;
  local_res10 = 0.0;
  local_f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (0 < iVar18) {
    do {
      if ((ushort)(*(short *)(*(longlong *)
                               ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 2) - 1U
                  ) < 0xfffe) {
        lVar2 = *(longlong *)
                 ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar19 >> 9) * 8);
        pdVar1 = (double *)(lVar2 + (ulonglong)(uVar19 & 0x1ff) * 0x18);
        local_100 = *pdVar1;
        dStack_f8 = pdVar1[1];
        local_f0 = *(double *)(lVar2 + 0x10 + (ulonglong)(uVar19 & 0x1ff) * 0x18);
        break;
      }
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < iVar18);
  }
  uVar19 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
  uVar17 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  if ((int)(uVar19 * 0x200 + uVar17) < 1) {
    dVar4 = (param_2->field0_0x0)._s_0.Y;
    dVar22 = (param_2->field0_0x0)._s_0.Z;
    dVar23 = (param_2->field0_0x0)._s_0.X;
    local_res10 = 0.0;
    local_res18 = 0.0;
  }
  else {
    do {
      if (((int)uVar20 < 0) || ((int)(uVar19 * 0x200 + uVar17) <= (int)uVar20)) {
LAB_14ce6e70e:
        dVar4 = (param_2->field0_0x0)._s_0.Y;
        dVar22 = (param_2->field0_0x0)._s_0.Z;
        dVar23 = (param_2->field0_0x0)._s_0.X;
      }
      else {
        uVar16 = (ulonglong)(uVar20 & 0x1ff);
        if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                           AllocatorInstance.Data + (ulonglong)(uVar20 >> 9) * 8) +
                                        uVar16 * 2) - 1U)) goto LAB_14ce6e70e;
        lVar2 = *(longlong *)
                 ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar20 >> 9) * 8)
        ;
        pFVar3 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
        uVar19 = *(uint *)(lVar2 + uVar16 * 0xc);
        uVar15 = (ulonglong)(uVar19 & 0x1ff);
        pdVar1 = (double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar19 >> 9) * 8) + uVar15 * 0x18);
        uVar17 = *(uint *)(lVar2 + 4 + uVar16 * 0xc);
        dVar21 = *(double *)
                  (*(longlong *)(pFVar3 + (ulonglong)(uVar19 >> 9) * 8) + 0x10 + uVar15 * 0x18) -
                 local_f0;
        dVar9 = *pdVar1 - local_100;
        uVar15 = (ulonglong)(uVar17 & 0x1ff);
        dVar13 = pdVar1[1] - dStack_f8;
        pdVar1 = (double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar17 >> 9) * 8) + uVar15 * 0x18);
        uVar19 = *(uint *)(lVar2 + 8 + uVar16 * 0xc);
        dVar22 = *(double *)
                  (*(longlong *)(pFVar3 + (ulonglong)(uVar17 >> 9) * 8) + 0x10 + uVar15 * 0x18) -
                 local_f0;
        dVar8 = *pdVar1 - local_100;
        dVar11 = pdVar1[1] - dStack_f8;
        uVar16 = (ulonglong)(uVar19 & 0x1ff);
        pdVar1 = (double *)(*(longlong *)(pFVar3 + (ulonglong)(uVar19 >> 9) * 8) + uVar16 * 0x18);
        dVar12 = *(double *)
                  (*(longlong *)(pFVar3 + (ulonglong)(uVar19 >> 9) * 8) + 0x10 + uVar16 * 0x18) -
                 local_f0;
        dVar6 = *pdVar1 - local_100;
        dVar10 = pdVar1[1] - dStack_f8;
        dVar5 = (dVar12 - dVar21) * (dVar8 - dVar9) - (dVar22 - dVar21) * (dVar6 - dVar9);
        dVar23 = (dVar10 - dVar13) * (dVar22 - dVar21) - (dVar11 - dVar13) * (dVar12 - dVar21);
        dVar7 = (dVar11 - dVar13) * (dVar6 - dVar9) - (dVar10 - dVar13) * (dVar8 - dVar9);
        local_res10 = local_res10 + SQRT(dVar23 * dVar23 + dVar5 * dVar5 + dVar7 * dVar7);
        dVar4 = dVar8 + dVar9 + dVar6;
        local_res18 = local_res18 + dVar4 * dVar23;
        dVar23 = ((dVar8 + dVar9) * dVar8 + dVar9 * dVar9 + dVar4 * dVar6) * dVar23 +
                 (param_2->field0_0x0)._s_0.X;
        (param_2->field0_0x0)._s_0.X = dVar23;
        dVar4 = ((dVar11 + dVar13) * dVar11 + dVar13 * dVar13 + (dVar11 + dVar13 + dVar10) * dVar10)
                * dVar5 + (param_2->field0_0x0)._s_0.Y;
        (param_2->field0_0x0)._s_0.Y = dVar4;
        dVar22 = ((dVar22 + dVar21) * dVar22 + dVar21 * dVar21 + (dVar22 + dVar21 + dVar12) * dVar12
                 ) * dVar7 + (param_2->field0_0x0)._s_0.Z;
        (param_2->field0_0x0)._s_0.Z = dVar22;
      }
      uVar19 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
      uVar20 = uVar20 + 1;
      uVar17 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    } while ((int)uVar20 < (int)(uVar19 * 0x200 + uVar17));
    if (local_res18 != 0.0) {
      dVar5 = __real_3fd0000000000000 / local_res18;
      dVar4 = dVar4 * dVar5;
      dVar22 = dVar22 * dVar5;
      dVar23 = dVar23 * dVar5;
      (param_2->field0_0x0)._s_0.Y = dVar4;
      (param_2->field0_0x0)._s_0.Z = dVar22;
    }
  }
  local_res18 = local_res18 * __real_3fc5555555555555;
  local_res10 = local_res10 * __real_3fe0000000000000;
  (param_2->field0_0x0)._s_0.X = dVar23 + local_100;
  (param_2->field0_0x0)._s_0.Y = dVar4 + dStack_f8;
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_res18;
  (param_2->field0_0x0)._s_0.Z = dVar22 + local_f0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_res10;
  return __return_storage_ptr__;
}

