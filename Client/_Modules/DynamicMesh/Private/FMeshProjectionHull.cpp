// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 4

// operator() @ 14c7bbd00

void __thiscall
`UE::Geometry::FMeshProjectionHull::ComputeWith3DHullSide'::__l2::<lambda_1>::operator()
          (void *this,FIndex3i *param_1)

{
  double *pdVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  TVector<double>_u_0 local_68;
  undefined8 local_50;
  float local_48;
  undefined8 local_44;
  float local_3c;
  TVector2<float>_u_0 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  
  uVar2 = (param_1->field0_0x0)._s_0.A;
  lVar9 = (longlong)(int)uVar2;
  plVar3 = *(longlong **)this;
  uVar10 = ~uVar2 >> 0x1f;
  uVar7 = 0;
  if ((int)uVar2 < (int)plVar3[1]) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(*plVar3 + lVar9 * 4);
  if (iVar8 == -1) {
    plVar3 = *(longlong **)((longlong)this + 8);
    uVar7 = 0;
    if ((int)uVar2 < (int)plVar3[1]) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = *plVar3;
    local_30 = 0;
    local_2e = 0;
    pdVar1 = (double *)(lVar4 + lVar9 * 0x18);
    local_68._s_0.X = *pdVar1;
    local_68._s_0.Y = pdVar1[1];
    local_68._s_0.Z = *(double *)(lVar4 + 0x10 + lVar9 * 0x18);
    local_48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_3c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_50 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_44 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_38 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    iVar8 = UE::Geometry::FDynamicMesh3::AppendVertex
                      ((FDynamicMesh3 *)(*(longlong *)((longlong)this + 0x10) + 0x80),
                       (FVertexInfo *)&local_68._s_0);
    plVar3 = *(longlong **)this;
    uVar7 = 0;
    if ((int)uVar2 < (int)plVar3[1]) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(int *)(*plVar3 + lVar9 * 4) = iVar8;
  }
  (param_1->field0_0x0)._s_0.A = iVar8;
  uVar2 = (param_1->field0_0x0)._s_0.B;
  lVar9 = (longlong)(int)uVar2;
  plVar3 = *(longlong **)this;
  uVar10 = ~uVar2 >> 0x1f;
  uVar7 = 0;
  if ((int)uVar2 < (int)plVar3[1]) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(*plVar3 + lVar9 * 4);
  if (iVar8 == -1) {
    plVar3 = *(longlong **)((longlong)this + 8);
    uVar7 = 0;
    if ((int)uVar2 < (int)plVar3[1]) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = *plVar3;
    local_30 = 0;
    local_2e = 0;
    pdVar1 = (double *)(lVar4 + lVar9 * 0x18);
    local_68._s_0.X = *pdVar1;
    local_68._s_0.Y = pdVar1[1];
    local_68._s_0.Z = *(double *)(lVar4 + 0x10 + lVar9 * 0x18);
    local_48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_3c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_50 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_44 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_38 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    iVar8 = UE::Geometry::FDynamicMesh3::AppendVertex
                      ((FDynamicMesh3 *)(*(longlong *)((longlong)this + 0x10) + 0x80),
                       (FVertexInfo *)&local_68._s_0);
    plVar3 = *(longlong **)this;
    uVar7 = 0;
    if ((int)uVar2 < (int)plVar3[1]) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(int *)(*plVar3 + lVar9 * 4) = iVar8;
  }
  (param_1->field0_0x0)._s_0.B = iVar8;
  uVar2 = (param_1->field0_0x0)._s_0.C;
  lVar9 = (longlong)(int)uVar2;
  plVar3 = *(longlong **)this;
  uVar10 = ~uVar2 >> 0x1f;
  uVar7 = 0;
  if ((int)uVar2 < (int)plVar3[1]) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(*plVar3 + lVar9 * 4);
  if (iVar8 == -1) {
    plVar3 = *(longlong **)((longlong)this + 8);
    uVar7 = 0;
    if ((int)uVar2 < (int)plVar3[1]) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = *plVar3;
    local_30 = 0;
    local_2e = 0;
    pdVar1 = (double *)(lVar4 + lVar9 * 0x18);
    local_68._s_0.X = *pdVar1;
    local_68._s_0.Y = pdVar1[1];
    local_68._s_0.Z = *(double *)(lVar4 + 0x10 + lVar9 * 0x18);
    local_48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_3c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_50 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_44 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_38 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    iVar8 = UE::Geometry::FDynamicMesh3::AppendVertex
                      ((FDynamicMesh3 *)(*(longlong *)((longlong)this + 0x10) + 0x80),
                       (FVertexInfo *)&local_68._s_0);
    plVar3 = *(longlong **)this;
    uVar7 = 0;
    if ((int)uVar2 < (int)plVar3[1]) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(int *)(*plVar3 + lVar9 * 4) = iVar8;
  }
  (param_1->field0_0x0)._s_0.C = iVar8;
  UE::Geometry::FDynamicMesh3::AppendTriangle
            ((FDynamicMesh3 *)(*(longlong *)((longlong)this + 0x10) + 0x80),param_1,0);
  return;
}

// Compute @ 14c7ea130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UE::Geometry::FMeshProjectionHull::Compute(FMeshProjectionHull *this)

{
  int iVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  FDynamicMesh3 *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  bool bVar15;
  undefined1 uVar16;
  ulonglong uVar17;
  TVector<double> *pTVar18;
  TPolygon2<double> *pTVar19;
  TPolygon2<double> *pTVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined4 uVar25;
  double dVar26;
  undefined4 uVar28;
  double dVar27;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStackY_458 [32];
  ForAnyElementType local_408;
  int local_400;
  int iStack_3fc;
  undefined1 local_3f8 [8];
  double local_3f0;
  double dStack_3e8;
  double local_3e0;
  double dStack_3d8;
  double local_3d0;
  double dStack_3c8;
  double local_3c0;
  TConvexHull2<double> local_3b8;
  double local_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double local_380;
  double local_378;
  FScriptContainerElement **local_370;
  FScriptContainerElement *local_368;
  int iStack_360;
  undefined4 uStack_35c;
  code *local_358;
  undefined1 *local_350;
  code *local_348;
  FScriptContainerElement ***local_340;
  FScriptContainerElement *local_338;
  int iStack_330;
  undefined4 uStack_32c;
  FScriptContainerElement *local_328;
  int iStack_320;
  undefined4 uStack_31c;
  FScriptContainerElement *local_318;
  undefined8 uStack_310;
  TArrayView<int_const_,int> local_308;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_2f8;
  TPolygon2<double> local_2e8;
  TVector<double>_u_0 local_2d8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  TVector<double> local_298;
  TVector<double> local_280;
  undefined1 local_268 [160];
  undefined2 local_1c8;
  ForAnyElementType local_198;
  undefined8 local_190;
  ForAnyElementType local_188;
  int local_180;
  int local_17c;
  TVector<double>_u_0 local_178;
  TQuaternion<double>_u_0 local_160;
  ForAnyElementType local_140;
  undefined8 local_138;
  ForAnyElementType local_130;
  undefined8 local_128;
  undefined2 local_120;
  ECapType local_11c;
  double local_118;
  double dStack_110;
  double local_108;
  undefined2 local_100;
  float local_fc;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  
  dVar11 = __real_ffefffffffffffff;
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_458;
  dVar26 = (this->ProjectionFrame).Rotation.field0_0x0._s_0.X;
  dVar3 = (this->ProjectionFrame).Rotation.field0_0x0._s_0.Y;
  dVar4 = (this->ProjectionFrame).Rotation.field0_0x0._s_0.W;
  dVar27 = (this->ProjectionFrame).Rotation.field0_0x0._s_0.Z;
  uVar29 = SUB84(__real_3ff0000000000000,0);
  uVar30 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  dVar27 = dVar27 + dVar27;
  uVar25 = SUB84(__real_7fefffffffffffff,0);
  uVar28 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  local_408.Data = (FScriptContainerElement *)0x0;
  local_400 = 0;
  iStack_3fc = 0;
  uVar24 = (this->Mesh->VertexRefCounts).UsedCount;
  local_3a0 = __real_7fefffffffffffff;
  dVar8 = dVar4 * (dVar3 + dVar3) + dVar27 * dVar26;
  dVar4 = dVar27 * dVar3 - dVar4 * (dVar26 + dVar26);
  dVar26 = __real_3ff0000000000000 - ((dVar3 + dVar3) * dVar3 + (dVar26 + dVar26) * dVar26);
  local_388 = dVar4;
  local_380 = dVar8;
  local_378 = dVar26;
  if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
  }
  if (0 < (int)uVar24) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar24,&local_408,0,&iStack_3fc);
  }
  pFVar5 = this->Mesh;
  uVar24 = (pFVar5->VertexRefCounts).RefCounts.CurBlockUsed +
           (pFVar5->VertexRefCounts).RefCounts.CurBlock * 0x200;
  uVar23 = 0;
  if (((uVar24 != 0) &&
      (pFVar6 = (pFVar5->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar23 = 0,
      0xfffd < (ushort)(**(short **)pFVar6 - 1U))) && (uVar23 = 1, 1 < (int)uVar24)) {
    do {
      uVar17 = (ulonglong)((uint)uVar23 & 0x1ff);
      lVar21 = *(longlong *)(pFVar6 + (uVar23 >> 9) * 8);
      if ((*(short *)(lVar21 + uVar17 * 2) != 0) && (*(short *)(lVar21 + uVar17 * 2) != -1)) break;
      uVar22 = (uint)uVar23 + 1;
      uVar23 = (ulonglong)uVar22;
    } while ((int)uVar22 < (int)uVar24);
  }
  dVar3 = dVar11;
  if ((uint)uVar23 != uVar24) {
LAB_14c7ea300:
    do {
      uVar17 = (ulonglong)((uint)uVar23 & 0x1ff);
      lVar21 = *(longlong *)
                ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data + (uVar23 >> 9) * 8);
      pdVar2 = (double *)(lVar21 + uVar17 * 0x18);
      dVar12 = *pdVar2;
      dVar13 = pdVar2[1];
      dVar26 = *(double *)(lVar21 + 0x10 + uVar17 * 0x18);
      dVar10 = dVar12 - (this->ProjectionFrame).Origin.field0_0x0._s_0.X;
      dVar9 = dVar13 - (this->ProjectionFrame).Origin.field0_0x0._s_0.Y;
      dVar8 = dVar26 - (this->ProjectionFrame).Origin.field0_0x0._s_0.Z;
      local_298.field0_0x0._s_0.Z = dVar26;
      pTVar18 = TFrame3<double>::GetAxis(&this->ProjectionFrame,&local_298,0);
      dVar3 = (pTVar18->field0_0x0)._s_0.Z;
      dVar4 = (pTVar18->field0_0x0)._s_0.X;
      dVar27 = (pTVar18->field0_0x0)._s_0.Y;
      pTVar18 = TFrame3<double>::GetAxis(&this->ProjectionFrame,&local_280,1);
      local_398 = dVar10 * dVar4 + dVar9 * dVar27 + dVar8 * dVar3;
      dStack_390 = dVar9 * (pTVar18->field0_0x0)._s_0.Y + dVar10 * (pTVar18->field0_0x0)._s_0.X +
                   dVar8 * (pTVar18->field0_0x0)._s_0.Z;
      if (((local_408.Data <= (FScriptContainerElement *)&local_398) &&
          ((FScriptContainerElement *)&local_398 < local_408.Data + (longlong)iStack_3fc * 0x10)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar7 = (code *)swi(3);
        uVar16 = (*pcVar7)();
        return (bool)uVar16;
      }
      if (local_400 == iStack_3fc) {
        local_400 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_408,&iStack_3fc);
      }
      iVar1 = local_400 + 1;
      uVar22 = (uint)uVar23 + 1;
      uVar23 = (ulonglong)uVar22;
      *(double *)(local_408.Data + (longlong)local_400 * 0x10) = local_398;
      *(double *)(local_408.Data + (longlong)local_400 * 0x10 + 8) = dStack_390;
      dVar26 = (dVar13 - (this->ProjectionFrame).Origin.field0_0x0._s_0.Y) * local_388 +
               (dVar12 - (this->ProjectionFrame).Origin.field0_0x0._s_0.X) * local_380 +
               (dVar26 - (this->ProjectionFrame).Origin.field0_0x0._s_0.Z) * local_378;
      dVar3 = dVar26;
      if (dVar26 <= dVar11) {
        dVar3 = dVar11;
      }
      if (local_3a0 <= dVar26) {
        dVar26 = local_3a0;
      }
      uVar25 = SUB84(dVar26,0);
      uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
      dVar11 = dVar3;
      local_3a0 = dVar26;
      local_400 = iVar1;
      if ((int)uVar22 < (int)uVar24) {
        do {
          uVar17 = (ulonglong)((uint)uVar23 & 0x1ff);
          lVar21 = *(longlong *)
                    ((pFVar5->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (uVar23 >> 9) * 8);
          if ((*(short *)(lVar21 + uVar17 * 2) != 0) && (*(short *)(lVar21 + uVar17 * 2) != -1))
          goto LAB_14c7ea300;
          uVar22 = (uint)uVar23 + 1;
          uVar23 = (ulonglong)uVar22;
        } while ((int)uVar22 < (int)uVar24);
      }
    } while (uVar22 != uVar24);
    uVar29 = SUB84(__real_3ff0000000000000,0);
    uVar30 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    dVar8 = local_380;
    dVar4 = local_388;
    dVar26 = local_378;
  }
  iVar1 = local_400;
  local_368 = local_408.Data;
  local_3b8.Dimension = 0;
  local_3b8.NumUniquePoints = 0;
  local_3b8.Hull.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3b8.Hull.ArrayNum = 0;
  local_3b8.Hull.ArrayMax = 0;
  if ((local_400 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    uVar16 = (*pcVar7)();
    return (bool)uVar16;
  }
  local_350 = local_3f8;
  iStack_360 = iVar1;
  uStack_310 = CONCAT44(uStack_35c,iVar1);
  local_318 = local_368;
  local_358 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::TConvexHull2<double>::Solve'::__l2::<lambda_2>,bool,int>
              ::Call;
  local_370 = &local_318;
  local_340 = &local_370;
  local_348 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::TConvexHull2<double>::Solve'::__l2::<lambda_1>,UE::Math::TVector2<double>,int>
              ::Call;
  bVar15 = TConvexHull2<double>::Solve
                     (&local_3b8,iVar1,
                      (TFunctionRef<UE::Math::TVector2<double>___cdecl(int)> *)&local_348,
                      (TFunctionRef<bool___cdecl(int)> *)&local_358);
  if (bVar15) {
    if ((local_3b8.Dimension != 2) &&
       (bVar15 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_2612336754539102086>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\CompGeom\\ConvexHull2.h"
                            ,0x7a,"IsSolutionAvailable()"), bVar15)) {
      pcVar7 = (code *)swi(3);
      uVar16 = (*pcVar7)();
      return (bool)uVar16;
    }
    iVar1 = local_3b8.Hull.ArrayNum;
    local_338 = local_3b8.Hull.AllocatorInstance.Data;
    if ((local_3b8.Hull.ArrayNum < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar7 = (code *)swi(3);
      uVar16 = (*pcVar7)();
      return (bool)uVar16;
    }
    iVar14 = local_400;
    iStack_330 = iVar1;
    local_328 = local_408.Data;
    if ((local_400 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar7 = (code *)swi(3);
      uVar16 = (*pcVar7)();
      return (bool)uVar16;
    }
    local_308._12_4_ = uStack_32c;
    local_308.ArrayNum = iStack_330;
    iStack_320 = iVar14;
    local_2f8._12_4_ = uStack_31c;
    local_2f8.ArrayNum = iVar14;
    local_2f8.DataPtr = (TVector2<double> *)local_328;
    local_308.DataPtr = (int *)local_338;
    pTVar19 = TPolygon2<double>::TPolygon2<double>(&local_2e8,&local_2f8,&local_308);
    pTVar20 = &this->ConvexHull2D;
    if (pTVar20 != pTVar19) {
      pFVar6 = (pTVar20->Vertices).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pTVar20->Vertices).AllocatorInstance.Data = (pTVar19->Vertices).AllocatorInstance.Data;
      (pTVar19->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->ConvexHull2D).Vertices.ArrayNum = (pTVar19->Vertices).ArrayNum;
      (this->ConvexHull2D).Vertices.ArrayMax = (pTVar19->Vertices).ArrayMax;
      (pTVar19->Vertices).ArrayNum = 0;
      (pTVar19->Vertices).ArrayMax = 0;
    }
    if (local_2e8.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Vertices.AllocatorInstance.Data);
    }
    dVar27 = TPolygon2<double>::SignedArea(pTVar20);
    if (__real_3eb0c6f7a0000000 <=
        (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar27,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      if (this->bSimplifyPolygon != false) {
        TPolygon2<double>::operator=(&this->SimplifiedHull2D,pTVar20);
        TPolygon2<double>::Simplify
                  (&this->SimplifiedHull2D,this->MinEdgeLength,this->DeviationTolerance);
      }
      dStack_3d8 = (this->ProjectionFrame).Rotation.field0_0x0._s_0.X;
      local_3d0 = (this->ProjectionFrame).Rotation.field0_0x0._s_0.Y;
      dStack_3c8 = (this->ProjectionFrame).Rotation.field0_0x0._s_0.Z;
      local_3c0 = (this->ProjectionFrame).Rotation.field0_0x0._s_0.W;
      dVar3 = dVar3 - (double)CONCAT44(uVar28,uVar25);
      dVar27 = this->MinThickness;
      local_3f0 = (double)CONCAT44(uVar28,uVar25) * dVar8 +
                  (this->ProjectionFrame).Origin.field0_0x0._s_0.X;
      dStack_3e8 = (double)CONCAT44(uVar28,uVar25) * dVar4 +
                   (this->ProjectionFrame).Origin.field0_0x0._s_0.Y;
      local_3e0 = (double)CONCAT44(uVar28,uVar25) * dVar26 +
                  (this->ProjectionFrame).Origin.field0_0x0._s_0.Z;
      if (dVar3 < dVar27) {
        local_3f0 = local_3f0 - dVar8 * dVar27 * __real_3fe0000000000000;
        local_3e0 = local_3e0 - dVar26 * dVar27 * __real_3fe0000000000000;
        dStack_3e8 = dStack_3e8 - dVar4 * dVar27 * __real_3fe0000000000000;
        dVar3 = dVar27;
      }
      if (this->Keep3DHullSide != None) {
        local_2d8._s_0.X = local_3f0;
        local_2d8._s_0.Y = dStack_3e8;
        local_2d8._s_0.Z = local_3e0;
        dStack_2c0 = dStack_3d8;
        local_2b8 = local_3d0;
        dStack_2b0 = dStack_3c8;
        local_2a8 = local_3c0;
        bVar15 = ComputeWith3DHullSide(this,(TFrame3<double> *)&local_2d8._s_0,dVar3);
        goto LAB_14c7ead3d;
      }
      local_268._0_8_ = &___7FGeneralizedCylinderGenerator_Geometry_UE__6B_;
      pTVar20 = &this->SimplifiedHull2D;
      local_160._s_0.X = 0.0;
      local_268._8_8_ = (FScriptContainerElement *)0x0;
      local_160._s_0.W = (double)CONCAT44(uVar30,uVar29);
      local_178._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_178._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_178._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_160._s_0.Y = 0.0;
      local_160._s_0.Z = 0.0;
      local_118 = ___xmm_3ff00000000000003ff0000000000000;
      dStack_110 = _UNK_150689688;
      local_108 = (double)CONCAT44(uVar30,uVar29);
      local_268._16_8_ = 0;
      local_268._24_8_ = (FScriptContainerElement *)0x0;
      local_268._32_8_ = 0;
      local_268._40_8_ = (FScriptContainerElement *)0x0;
      local_268._48_8_ = 0;
      local_268._56_8_ = (FScriptContainerElement *)0x0;
      local_268._64_8_ = 0;
      local_268._72_8_ = (FScriptContainerElement *)0x0;
      local_268._80_8_ = 0;
      local_268._88_8_ = (FScriptContainerElement *)0x0;
      local_268._96_8_ = 0;
      local_268._104_8_ = (FScriptContainerElement *)0x0;
      local_268._112_8_ = 0;
      local_268._120_8_ = (FScriptContainerElement *)0x0;
      local_268._128_8_ = 0;
      local_268._136_8_ = (FScriptContainerElement *)0x0;
      local_268._144_8_ = 0;
      local_268[0x98] = false;
      local_1c8 = 0x100;
      local_198.Data = (FScriptContainerElement *)0x0;
      local_190 = 0;
      local_188.Data = (FScriptContainerElement *)0x0;
      local_180 = 0;
      local_17c = 0;
      local_140.Data = (FScriptContainerElement *)0x0;
      local_138._0_4_ = 0;
      local_138._4_4_ = 0;
      local_130.Data = (FScriptContainerElement *)0x0;
      local_128._0_4_ = 0;
      local_128._4_4_ = 0;
      local_120._0_1_ = false;
      local_120._1_1_ = false;
      local_11c = FlatTriangulation;
      local_100._0_1_ = false;
      local_100._1_1_ = false;
      local_fc = 100.0;
      local_f8.Data = (FScriptContainerElement *)0x0;
      local_f0._0_4_ = 0;
      local_f0._4_4_ = 0;
      local_e8.Data = (FScriptContainerElement *)0x0;
      local_e0._0_4_ = 0;
      local_e0._4_4_ = 0;
      if (this->bSimplifyPolygon == false) {
        pTVar20 = &this->ConvexHull2D;
      }
      if ((TPolygon2<double> *)&local_198 == pTVar20) {
LAB_14c7eaa2a:
        if (((FScriptContainerElement *)&local_3f0 < local_188.Data + (longlong)local_17c * 0x18) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          uVar16 = (*pcVar7)();
          return (bool)uVar16;
        }
      }
      else {
        uVar24 = (pTVar20->Vertices).ArrayNum;
        pFVar6 = (pTVar20->Vertices).AllocatorInstance.Data;
        local_190 = (ulonglong)uVar24;
        if (uVar24 == 0) goto LAB_14c7eaa2a;
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar24,0,&local_198,uVar24,(int *)((longlong)&local_190 + 4));
        memcpy(local_198.Data,pFVar6,(longlong)(int)uVar24 << 4);
        if (local_188.Data <= (FScriptContainerElement *)&local_3f0) goto LAB_14c7eaa2a;
      }
      if (local_180 == local_17c) {
        local_180 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_188,&local_17c);
      }
      lVar21 = (longlong)local_180;
      local_180 = local_180 + 1;
      *(double *)(local_188.Data + lVar21 * 0x18) = local_3f0;
      *(double *)(local_188.Data + lVar21 * 0x18 + 8) = dStack_3e8;
      *(double *)(local_188.Data + lVar21 * 0x18 + 0x10) = local_3e0;
      local_3f0 = local_3f0 + dVar3 * dVar8;
      dStack_3e8 = dStack_3e8 + dVar3 * dVar4;
      local_3e0 = local_3e0 + dVar3 * dVar26;
      if (((local_188.Data <= (FScriptContainerElement *)&local_3f0) &&
          ((FScriptContainerElement *)&local_3f0 < local_188.Data + (longlong)local_17c * 0x18)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar7 = (code *)swi(3);
        uVar16 = (*pcVar7)();
        return (bool)uVar16;
      }
      if (local_180 == local_17c) {
        local_180 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_188,&local_17c);
      }
      *(double *)(local_188.Data + (longlong)local_180 * 0x18) = local_3f0;
      *(double *)(local_188.Data + (longlong)local_180 * 0x18 + 8) = dStack_3e8;
      *(double *)(local_188.Data + (longlong)local_180 * 0x18 + 0x10) = local_3e0;
      local_120._0_1_ = true;
      local_180 = local_180 + 1;
      FGeneralizedCylinderGenerator::Generate((FGeneralizedCylinderGenerator *)local_268);
      FDynamicMesh3::Copy(&this->ConvexHull3D,(FMeshShapeGenerator *)local_268);
      bVar15 = true;
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      if (local_f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data);
      }
      if (local_130.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data);
      }
      if (local_140.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data);
      }
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data);
      }
      if (local_198.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data);
      }
      local_268._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
      if ((FScriptContainerElement *)local_268._136_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_268._136_8_);
      }
      if ((FScriptContainerElement *)local_268._120_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_268._120_8_);
      }
      if ((FScriptContainerElement *)local_268._104_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_268._104_8_);
      }
      if ((FScriptContainerElement *)local_268._88_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_268._88_8_);
      }
      if ((FScriptContainerElement *)local_268._72_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_268._72_8_);
      }
      if ((FScriptContainerElement *)local_268._56_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_268._56_8_);
      }
      if ((FScriptContainerElement *)local_268._40_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_268._40_8_);
      }
      if ((FScriptContainerElement *)local_268._24_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_268._24_8_);
      }
      if ((FScriptContainerElement *)local_268._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_268._8_8_);
      }
      goto LAB_14c7ead3d;
    }
  }
  bVar15 = false;
LAB_14c7ead3d:
  if (local_3b8.Hull.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Hull.AllocatorInstance.Data);
  }
  if (local_408.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data);
  }
  return bVar15;
}

// ComputeWith3DHullSide @ 14c7f4150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FMeshProjectionHull::ComputeWith3DHullSide
          (FMeshProjectionHull *this,TFrame3<double> *param_1,double param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  FRefCountVector *pFVar10;
  double dVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  TVector<double> *pTVar19;
  TVector<double> *pTVar20;
  FDynamicMesh3 *pFVar21;
  longlong *plVar22;
  ulonglong uVar23;
  double *pdVar24;
  ForAnyElementType FVar25;
  double *pdVar26;
  uint uVar27;
  longlong lVar28;
  undefined1 auStackY_788 [32];
  ForAnyElementType local_738;
  undefined8 local_730;
  undefined1 local_728;
  undefined1 local_727;
  undefined1 local_726 [6];
  TVector2<double>_u_0 local_720;
  double local_710;
  double dStack_708;
  double local_700;
  int local_6f8;
  int local_6f0 [2];
  int local_6e8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_6e0;
  double local_6d0;
  double dStack_6c8;
  double local_6c0;
  FScriptContainerElement **local_6b8 [2];
  FIndex3i_u_0 local_6a8;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  FScriptContainerElement *local_678;
  int iStack_670;
  undefined4 uStack_66c;
  FScriptContainerElement *local_668;
  int iStack_660;
  undefined4 uStack_65c;
  code *local_658;
  undefined1 *local_650;
  code *local_648;
  FScriptContainerElement ***local_640;
  TVector<double>_u_0 local_638;
  TVector<double>_u_0 local_620;
  TVector<double>_u_0 local_608;
  TArray<int,TSizedDefaultAllocator<32>_> *local_5f0;
  ForAnyElementType *local_5e8;
  FMeshProjectionHull *local_5e0;
  TConvexHull3<double> local_5d8;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_528;
  FScriptContainerElement *local_518;
  undefined8 uStack_510;
  TVector<double> local_508;
  TVector<double> local_4f0;
  TVector<double> local_4d8;
  TVector<double> local_4c0;
  TVector<double> local_4a8;
  FDynamicMesh3 local_488;
  undefined1 local_258 [32];
  longlong local_238 [3];
  longlong *local_220;
  undefined1 local_218 [32];
  longlong local_1f8 [3];
  longlong *local_1e0;
  FRefCountVector *local_1d8;
  double dStack_1d0;
  undefined1 local_1c8 [40];
  longlong *local_1a0;
  FRefCountVector *local_198;
  double dStack_190;
  undefined1 local_188 [40];
  longlong *local_160;
  undefined1 local_158 [48];
  IndexEnumerable local_128;
  undefined1 local_118 [48];
  IndexEnumerable local_e8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_788;
  dVar2 = (this->ProjectionFrame).Rotation.field0_0x0._s_0.X;
  dVar3 = (this->ProjectionFrame).Rotation.field0_0x0._s_0.W;
  dVar4 = (this->ProjectionFrame).Rotation.field0_0x0._s_0.Z;
  dVar4 = dVar4 + dVar4;
  dVar5 = (this->ProjectionFrame).Rotation.field0_0x0._s_0.Y;
  local_738.Data = (FScriptContainerElement *)0x0;
  local_730 = 0;
  lVar28 = 0x70;
  if (this->bSimplifyPolygon == false) {
    lVar28 = 0x60;
  }
  uVar27 = *(int *)((longlong)&(this->ProjectionFrame).Origin.field0_0x0 + lVar28) +
           (this->Mesh->VertexRefCounts).UsedCount;
  dVar11 = __real_3ff0000000000000 - ((dVar5 + dVar5) * dVar5 + (dVar2 + dVar2) * dVar2);
  if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
  }
  if (0 < (int)uVar27) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar27,&local_738,0,(int *)((longlong)&local_730 + 4));
  }
  if (this->bSimplifyPolygon == false) {
    FDynamicMesh3::VerticesItr(this->Mesh,(MappedEnumerable<UE::Math::TVector<double>_> *)local_118)
    ;
    FRefCountVector::MappedEnumerable<UE::Math::TVector<double>_>::begin
              ((MappedEnumerable<UE::Math::TVector<double>_> *)local_118,
               (MappedIterator<int,UE::Math::TVector<double>,UE::Geometry::FRefCountVector::IndexIterator>
                *)local_218);
    local_720._s_0.X = (double)local_e8.Vector;
    local_720._12_4_ =
         ((local_e8.Vector)->RefCounts).CurBlock * 0x200 +
         ((local_e8.Vector)->RefCounts).CurBlockUsed;
    local_720._8_4_ = local_720._12_4_;
    local_188._0_8_ = 0;
    local_160 = (longlong *)0x0;
    local_198 = local_e8.Vector;
    dStack_190 = local_720._s_0.Y;
    TFunction<UE::Math::TVector<double>___cdecl(int)>::operator=
              ((TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_188,
               (TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_118);
    if ((int)local_218._8_8_ != dStack_190._0_4_) {
      do {
        local_6f0[0] = (int)local_218._8_8_;
        Core::Private::Function::CheckCallable((void *)local_218._16_8_);
        uVar13 = local_218._16_8_;
        plVar22 = local_1f8;
        if (local_1e0 != (longlong *)0x0) {
          plVar22 = local_1e0;
        }
        uVar18 = (**(code **)(*plVar22 + 8))();
        (*(code *)uVar13)(&local_698,uVar18,local_6f0);
        if (((local_738.Data <= (FScriptContainerElement *)&local_698) &&
            ((FScriptContainerElement *)&local_698 <
             local_738.Data + (longlong)local_730._4_4_ * 0x18)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          uVar15 = (*pcVar6)();
          return (bool)uVar15;
        }
        iVar16 = (int)local_730;
        if ((int)local_730 == local_730._4_4_) {
          iVar16 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_738,(int *)((longlong)&local_730 + 4));
        }
        local_730 = CONCAT44(local_730._4_4_,iVar16 + 1);
        *(undefined8 *)(local_738.Data + (longlong)iVar16 * 0x18) = local_698;
        *(undefined8 *)(local_738.Data + (longlong)iVar16 * 0x18 + 8) = uStack_690;
        *(undefined8 *)(local_738.Data + (longlong)iVar16 * 0x18 + 0x10) = local_688;
        FRefCountVector::BaseIterator::goto_next((BaseIterator *)local_218);
      } while ((int)local_218._8_8_ != dStack_190._0_4_);
    }
    if (local_188._0_8_ != 0) {
      plVar22 = (longlong *)(local_188 + 0x10);
      if (local_160 != (longlong *)0x0) {
        plVar22 = local_160;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    if ((code *)local_218._16_8_ != (code *)0x0) {
      plVar22 = local_1f8;
      if (local_1e0 != (longlong *)0x0) {
        plVar22 = local_1e0;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    if (local_118._0_8_ == 0) goto LAB_14c7f4871;
    puVar12 = local_118;
    local_158._40_8_ = local_118._40_8_;
  }
  else {
    FDynamicMesh3::VerticesItr(this->Mesh,(MappedEnumerable<UE::Math::TVector<double>_> *)local_158)
    ;
    FRefCountVector::MappedEnumerable<UE::Math::TVector<double>_>::begin
              ((MappedEnumerable<UE::Math::TVector<double>_> *)local_158,
               (MappedIterator<int,UE::Math::TVector<double>,UE::Geometry::FRefCountVector::IndexIterator>
                *)local_258);
    local_720._s_0.X = (double)local_128.Vector;
    local_720._12_4_ =
         ((local_128.Vector)->RefCounts).CurBlock * 0x200 +
         ((local_128.Vector)->RefCounts).CurBlockUsed;
    local_720._8_4_ = local_720._12_4_;
    local_1c8._0_8_ = 0;
    local_1a0 = (longlong *)0x0;
    local_1d8 = local_128.Vector;
    dStack_1d0 = local_720._s_0.Y;
    TFunction<UE::Math::TVector<double>___cdecl(int)>::operator=
              ((TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_1c8,
               (TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_158);
    if ((int)local_258._8_8_ != dStack_1d0._0_4_) {
      do {
        local_6f8 = (int)local_258._8_8_;
        Core::Private::Function::CheckCallable((void *)local_258._16_8_);
        uVar13 = local_258._16_8_;
        plVar22 = local_238;
        if (local_220 != (longlong *)0x0) {
          plVar22 = local_220;
        }
        uVar18 = (**(code **)(*plVar22 + 8))();
        (*(code *)uVar13)(&local_710,uVar18);
        dVar8 = local_710 - (this->ProjectionFrame).Origin.field0_0x0._s_0.X;
        dVar9 = dStack_708 - (this->ProjectionFrame).Origin.field0_0x0._s_0.Y;
        dVar7 = local_700 - (this->ProjectionFrame).Origin.field0_0x0._s_0.Z;
        pTVar19 = TFrame3<double>::GetAxis(&this->ProjectionFrame,&local_508,0);
        pFVar10 = (FRefCountVector *)
                  (dVar9 * (pTVar19->field0_0x0)._s_0.Y + dVar8 * (pTVar19->field0_0x0)._s_0.X +
                  dVar7 * (pTVar19->field0_0x0)._s_0.Z);
        pTVar19 = TFrame3<double>::GetAxis(&this->ProjectionFrame,&local_4f0,1);
        iVar16 = (this->SimplifiedHull2D).Vertices.ArrayNum;
        local_678 = (this->SimplifiedHull2D).Vertices.AllocatorInstance.Data;
        dVar7 = dVar9 * (pTVar19->field0_0x0)._s_0.Y + dVar8 * (pTVar19->field0_0x0)._s_0.X +
                dVar7 * (pTVar19->field0_0x0)._s_0.Z;
        local_720._s_0.X = (double)pFVar10;
        local_720._s_0.Y = dVar7;
        if ((iVar16 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar14)) {
          pcVar6 = (code *)swi(3);
          uVar15 = (*pcVar6)();
          return (bool)uVar15;
        }
        local_528._12_4_ = uStack_66c;
        local_528.ArrayNum = iVar16;
        local_528.DataPtr = (TVector2<double> *)local_678;
        iStack_670 = iVar16;
        bVar14 = CurveUtil::ProjectPointInsideConvexPolygon<double>
                           (&local_528,(TVector2<double> *)&local_720._s_0,false);
        if (bVar14) {
          local_638._s_0.Z = 0.0;
          local_638._0_8_ = pFVar10;
          local_638._s_0.Y = dVar7;
          pTVar19 = operator*<double>(&local_4d8,&(this->ProjectionFrame).Rotation,
                                      (TVector<double> *)&local_638._s_0);
          local_620._s_0.Z = 0.0;
          dVar7 = (pTVar19->field0_0x0)._s_0.Y;
          dVar8 = (pTVar19->field0_0x0)._s_0.Z;
          local_620._s_0.X = local_720._s_0.X;
          local_620._s_0.Y = local_720._s_0.Y;
          pTVar20 = operator*<double>(&local_4c0,&(this->ProjectionFrame).Rotation,
                                      (TVector<double> *)&local_620._s_0);
          local_710 = local_710 + ((pTVar20->field0_0x0)._s_0.X - (pTVar19->field0_0x0)._s_0.X);
          dStack_708 = dStack_708 + ((pTVar20->field0_0x0)._s_0.Y - dVar7);
          local_700 = local_700 + ((pTVar20->field0_0x0)._s_0.Z - dVar8);
        }
        if (((local_738.Data <= (FScriptContainerElement *)&local_710) &&
            ((FScriptContainerElement *)&local_710 <
             local_738.Data + (longlong)local_730._4_4_ * 0x18)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          uVar15 = (*pcVar6)();
          return (bool)uVar15;
        }
        iVar16 = (int)local_730;
        if ((int)local_730 == local_730._4_4_) {
          iVar16 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_738,(int *)((longlong)&local_730 + 4));
        }
        local_730 = CONCAT44(local_730._4_4_,iVar16 + 1);
        *(double *)(local_738.Data + (longlong)iVar16 * 0x18) = local_710;
        *(double *)(local_738.Data + (longlong)iVar16 * 0x18 + 8) = dStack_708;
        *(double *)(local_738.Data + (longlong)iVar16 * 0x18 + 0x10) = local_700;
        FRefCountVector::BaseIterator::goto_next((BaseIterator *)local_258);
      } while ((int)local_258._8_8_ != dStack_1d0._0_4_);
    }
    if (local_1c8._0_8_ != 0) {
      plVar22 = (longlong *)(local_1c8 + 0x10);
      if (local_1a0 != (longlong *)0x0) {
        plVar22 = local_1a0;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    if ((code *)local_258._16_8_ != (code *)0x0) {
      plVar22 = local_238;
      if (local_220 != (longlong *)0x0) {
        plVar22 = local_220;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    if (local_158._0_8_ == 0) goto LAB_14c7f4871;
    puVar12 = local_158;
  }
  plVar22 = (longlong *)(puVar12 + 0x10);
  if ((longlong *)local_158._40_8_ != (longlong *)0x0) {
    plVar22 = (longlong *)local_158._40_8_;
  }
  (**(code **)(*plVar22 + 0x10))();
LAB_14c7f4871:
  if (this->Keep3DHullSide == Back) {
    dVar7 = (param_1->Origin).field0_0x0._s_0.Y;
    dVar8 = (param_1->Origin).field0_0x0._s_0.Z;
    (param_1->Origin).field0_0x0._s_0.X =
         (dVar3 * (dVar5 + dVar5) + dVar4 * dVar2) * param_2 + (param_1->Origin).field0_0x0._s_0.X;
    (param_1->Origin).field0_0x0._s_0.Y =
         (dVar4 * dVar5 - dVar3 * (dVar2 + dVar2)) * param_2 + dVar7;
    (param_1->Origin).field0_0x0._s_0.Z = dVar11 * param_2 + dVar8;
  }
  iVar16 = *(int *)((longlong)&(this->ProjectionFrame).Origin.field0_0x0 + lVar28);
  pdVar24 = *(double **)((longlong)&this->Mesh + lVar28);
  pdVar26 = pdVar24 + (longlong)iVar16 * 2;
  while( true ) {
    if (*(int *)((longlong)&(this->ProjectionFrame).Origin.field0_0x0 + lVar28) != iVar16) {
      local_728 = 0;
      `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_728);
    }
    if (pdVar24 == pdVar26) break;
    local_608._s_0.X = *pdVar24;
    local_608._s_0.Y = pdVar24[1];
    local_608._s_0.Z = 0.0;
    pTVar19 = operator*<double>(&local_4a8,&param_1->Rotation,(TVector<double> *)&local_608._s_0);
    local_6c0 = (param_1->Origin).field0_0x0._s_0.Z + (pTVar19->field0_0x0)._s_0.Z;
    dStack_6c8 = (param_1->Origin).field0_0x0._s_0.Y + (pTVar19->field0_0x0)._s_0.Y;
    local_6d0 = (pTVar19->field0_0x0)._s_0.X + (param_1->Origin).field0_0x0._s_0.X;
    if (((local_738.Data <= (FScriptContainerElement *)&local_6d0) &&
        ((FScriptContainerElement *)&local_6d0 < local_738.Data + (longlong)local_730._4_4_ * 0x18))
       && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar14)) {
      pcVar6 = (code *)swi(3);
      uVar15 = (*pcVar6)();
      return (bool)uVar15;
    }
    iVar17 = (int)local_730;
    if ((int)local_730 == local_730._4_4_) {
      iVar17 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_738,(int *)((longlong)&local_730 + 4));
    }
    pdVar24 = pdVar24 + 2;
    local_730 = CONCAT44(local_730._4_4_,iVar17 + 1);
    *(double *)(local_738.Data + (longlong)iVar17 * 0x18) = local_6d0;
    *(double *)(local_738.Data + (longlong)iVar17 * 0x18 + 8) = dStack_6c8;
    *(double *)(local_738.Data + (longlong)iVar17 * 0x18 + 0x10) = local_6c0;
  }
  iVar16 = (int)local_730;
  local_5d8.SimplificationSettings.DegenerateEdgeTolerance = 0.0;
  local_5d8.bSaveTriangleNeighbors = false;
  local_5d8.SimplificationSettings.MaxHullVertices = -1;
  local_5d8.Progress = (FProgressCancel *)0x0;
  local_5d8.NumHullPoints = 0;
  local_5d8.Hull.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5d8.Hull.ArrayNum = 0;
  local_5d8.Hull.ArrayMax = 0;
  local_5d8.HullNeighbors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5d8.HullNeighbors.ArrayNum = 0;
  local_5d8.HullNeighbors.ArrayMax = 0;
  local_668 = local_738.Data;
  local_5d8.SimplificationSettings.SkipAtHullDistanceAbsolute =
       ___xmm_ffefffffffffffffffefffffffffffff;
  local_5d8.SimplificationSettings.SkipAtHullDistanceAsFraction = _UNK_1508ffb58;
  local_5d8.Line.Origin.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_5d8.Line.Direction.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  local_5d8.Line.Origin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_5d8.Line.Origin.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_5d8.Line.Direction.field0_0x0._s_0.X =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
  local_5d8.Line.Direction.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  if (((int)local_730 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    uVar15 = (*pcVar6)();
    return (bool)uVar15;
  }
  local_650 = &local_727;
  iStack_660 = iVar16;
  uStack_510 = CONCAT44(uStack_65c,iVar16);
  local_518 = local_668;
  local_658 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::TConvexHull3<double>::Solve<UE::Math::TVector<double>_>'::__l2::<lambda_2>,bool,int>
              ::Call;
  local_6b8[0] = &local_518;
  local_640 = local_6b8;
  local_648 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::TConvexHull3<double>::Solve<UE::Math::TVector<double>_>'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
              ::Call;
  bVar14 = TConvexHull3<double>::Solve
                     (&local_5d8,iVar16,
                      (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_648,
                      (TFunctionRef<bool___cdecl(int)> *)&local_658);
  if (bVar14) {
    local_6e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6e0.ArrayNum = 0;
    local_6e0.ArrayMax = 0;
    local_6e8[0] = -1;
    TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_6e0,local_6e8,(int)local_730);
    pFVar21 = FDynamicMesh3::FDynamicMesh3(&local_488,None);
    FDynamicMesh3::operator=(&this->ConvexHull3D,pFVar21);
    FDynamicMesh3::~FDynamicMesh3(&local_488);
    iVar16 = local_5d8.Hull.ArrayNum;
    uVar23 = (ulonglong)local_5d8.Hull.ArrayNum;
    local_5f0 = &local_6e0;
    local_5e8 = &local_738;
    pFVar1 = local_5d8.Hull.AllocatorInstance.Data + uVar23 * 0xc;
    FVar25.Data = local_5d8.Hull.AllocatorInstance.Data;
    local_5e0 = this;
    while( true ) {
      if ((int)uVar23 != iVar16) {
        `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_726);
      }
      if (FVar25.Data == pFVar1) break;
      local_6a8._0_8_ = *(undefined8 *)FVar25.Data;
      local_6a8._s_0.C = *(undefined4 *)(FVar25.Data + 8);
      Core::Private::Function::
      TFunctionRefCaller<`UE::Geometry::FMeshProjectionHull::ComputeWith3DHullSide'::__l2::<lambda_1>,void,UE::Geometry::FIndex3i>
      ::Call(&local_5f0,(FIndex3i *)&local_6a8._s_0);
      uVar23 = local_5d8.Hull._8_8_ & 0xffffffff;
      FVar25.Data = FVar25.Data + 0xc;
    }
    bVar14 = true;
    if (local_6e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6e0.AllocatorInstance.Data);
    }
  }
  else {
    bVar14 = false;
  }
  if (local_5d8.HullNeighbors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d8.HullNeighbors.AllocatorInstance.Data);
  }
  if (local_5d8.Hull.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d8.Hull.AllocatorInstance.Data);
  }
  if (local_738.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_738.Data);
  }
  return bVar14;
}

// FMeshProjectionHull @ 14c897550

FMeshProjectionHull * __thiscall
UE::Geometry::FMeshProjectionHull::FMeshProjectionHull
          (FMeshProjectionHull *this,FDynamicMesh3 *param_1)

{
  undefined8 uVar1;
  
  (this->ProjectionFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->ProjectionFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ProjectionFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ProjectionFrame).Rotation.field0_0x0._s_0.X = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ProjectionFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ProjectionFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->ProjectionFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ProjectionFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ProjectionFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ProjectionFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ProjectionFrame).Rotation.field0_0x0._s_0.W = 1.0;
  this->MinEdgeLength = 0.01;
  this->bSimplifyPolygon = false;
  this->MinThickness = 0.0;
  (this->ConvexHull2D).Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConvexHull2D).Vertices.ArrayNum = 0;
  (this->ConvexHull2D).Vertices.ArrayMax = 0;
  (this->SimplifiedHull2D).Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimplifiedHull2D).Vertices.ArrayNum = 0;
  (this->SimplifiedHull2D).Vertices.ArrayMax = 0;
  this->DeviationTolerance = 0.1;
  FDynamicMesh3::FDynamicMesh3(&this->ConvexHull3D);
  this->Mesh = param_1;
  this->Keep3DHullSide = None;
  return this;
}

