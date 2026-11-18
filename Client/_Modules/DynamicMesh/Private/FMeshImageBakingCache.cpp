// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 20

// operator() @ 14c8a0460

void __thiscall
`UE::Geometry::FMeshImageBakingCache::EvaluateSamples'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int local_res8;
  int local_resc;
  
  puVar1 = *(undefined8 **)this;
  UE::Core::Private::Function::CheckCallable((void *)*puVar1);
  pcVar2 = (code *)*puVar1;
  plVar8 = puVar1 + 2;
  if ((longlong *)puVar1[5] != (longlong *)0x0) {
    plVar8 = (longlong *)puVar1[5];
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  cVar4 = (*pcVar2)(uVar7);
  if (cVar4 == '\0') {
    lVar9 = *(longlong *)this;
    iVar11 = 0;
    if (0 < *(int *)(lVar9 + 0x48)) {
      lVar10 = 0;
      do {
        lVar3 = *(longlong *)(lVar9 + 0x98);
        lVar9 = (longlong)*(int *)(lVar9 + 0x48) * (longlong)param_1 + lVar10;
        uVar12 = (uint)((ulonglong)lVar9 >> 0x3f) ^ 1;
        uVar6 = 0;
        if (lVar9 < *(longlong *)(lVar3 + 0x30)) {
          uVar6 = uVar12;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(char *)(lVar9 + *(longlong *)(lVar3 + 0x28)) == '\x01') {
          lVar3 = *(longlong *)this;
          uVar6 = 0;
          if (lVar9 < *(longlong *)(lVar3 + 0x70)) {
            uVar6 = uVar12;
          }
          local_res8 = iVar11;
          local_resc = param_1;
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          (*(code *)**(undefined8 **)((longlong)this + 8))
                    ((*(undefined8 **)((longlong)this + 8))[1],&local_res8,
                     lVar9 * 0x100 + *(longlong *)(lVar3 + 0x68));
        }
        lVar9 = *(longlong *)this;
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + 1;
      } while (iVar11 < *(int *)(lVar9 + 0x48));
    }
  }
  return;
}

// operator() @ 14c8a0860

void __thiscall
`UE::Geometry::FMeshImageBakingCache::FindSamplingHoles'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  ForAnyElementType *pFVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  int local_38;
  int iStack_34;
  
  puVar2 = *(undefined8 **)this;
  UE::Core::Private::Function::CheckCallable((void *)*puVar2);
  pcVar3 = (code *)*puVar2;
  plVar11 = puVar2 + 2;
  if ((longlong *)puVar2[5] != (longlong *)0x0) {
    plVar11 = (longlong *)puVar2[5];
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  cVar6 = (*pcVar3)(uVar10);
  if (cVar6 == '\0') {
    lVar12 = *(longlong *)this;
    iVar14 = 0;
    if (0 < *(int *)(lVar12 + 0x48)) {
      lVar15 = 0;
      do {
        lVar4 = *(longlong *)(lVar12 + 0x98);
        lVar12 = (longlong)*(int *)(lVar12 + 0x48) * (longlong)param_1 + lVar15;
        uVar13 = (uint)((ulonglong)lVar12 >> 0x3f) ^ 1;
        uVar8 = 0;
        if (lVar12 < *(longlong *)(lVar4 + 0x30)) {
          uVar8 = uVar13;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(char *)(lVar12 + *(longlong *)(lVar4 + 0x28)) == '\x01') {
          uVar8 = 0;
          if (lVar12 < *(longlong *)(*(longlong *)this + 0x70)) {
            uVar8 = uVar13;
          }
          local_38 = iVar14;
          iStack_34 = param_1;
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          cVar6 = (*(code *)**(undefined8 **)((longlong)this + 8))
                            ((*(undefined8 **)((longlong)this + 8))[1],&local_38);
          if (cVar6 != '\0') {
            EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
            pFVar5 = *(ForAnyElementType **)((longlong)this + 0x18);
            if (((pFVar5->Data <= (FScriptContainerElement *)&local_38) &&
                ((FScriptContainerElement *)&local_38 <
                 pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 8)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar9 = *(int *)&pFVar5[1].Data;
            piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,pFVar5,piVar1);
            }
            *(int *)&pFVar5[1].Data = iVar9 + 1;
            *(ulonglong *)(pFVar5->Data + (longlong)iVar9 * 8) = CONCAT44(iStack_34,local_38);
            LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
          }
        }
        lVar12 = *(longlong *)this;
        iVar14 = iVar14 + 1;
        lVar15 = lVar15 + 1;
      } while (iVar14 < *(int *)(lVar12 + 0x48));
    }
  }
  return;
}

// operator() @ 14c8ae300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FMeshImageBakingCache::ValidateCache'::__l29::<lambda_2>::operator()
          (void *this,FMeshUVSampleInfo *param_1,FCorrespondenceSample *param_2)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  FDynamicMesh3 *this_00;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  longlong *plVar14;
  undefined1 auStackY_1f8 [32];
  undefined8 local_1b8;
  TVector<double>_u_0 local_1b0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 TStack_180;
  TVector<double>_u_0 local_168;
  undefined8 local_148 [2];
  longlong local_138;
  longlong local_128 [3];
  longlong *local_110;
  undefined1 local_108;
  TVector<double>_u_0 local_f8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  UE::Geometry::TDynamicMeshOverlay<float,3>::GetTriBaryInterpolate<double>
            (*(TDynamicMeshOverlay<float,3> **)((longlong)this + 8),param_1->TriangleIndex,
             (double *)&param_1->BaryCoords,(double *)&param_2->BaseNormal);
  UE::Geometry::Normalize<double>(&param_2->BaseNormal,0.0);
  local_1b0._s_0.X = (param_2->BaseNormal).field0_0x0._s_0.X;
  local_1b0._s_0.Y = (param_2->BaseNormal).field0_0x0._s_0.Y;
  local_1b0._s_0.Z = (param_2->BaseNormal).field0_0x0._s_0.Z;
  piVar1 = &param_2->DetailTriID;
  uVar9 = *(undefined8 *)((longlong)&(param_1->MeshVertices).field0_0x0 + 4);
  *(undefined8 *)&param_2->BaseSample = *(undefined8 *)param_1;
  *(undefined8 *)((longlong)&(param_2->BaseSample).MeshVertices.field0_0x0 + 4) = uVar9;
  dVar2 = (param_1->Triangle3D).V[0].field0_0x0._s_0.Y;
  (param_2->BaseSample).Triangle3D.V[0].field0_0x0._s_0.X =
       (param_1->Triangle3D).V[0].field0_0x0._s_0.X;
  (param_2->BaseSample).Triangle3D.V[0].field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Triangle3D).V[1].field0_0x0._s_0.X;
  (param_2->BaseSample).Triangle3D.V[0].field0_0x0._s_0.Z =
       (param_1->Triangle3D).V[0].field0_0x0._s_0.Z;
  (param_2->BaseSample).Triangle3D.V[1].field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->Triangle3D).V[1].field0_0x0._s_0.Z;
  (param_2->BaseSample).Triangle3D.V[1].field0_0x0._s_0.Y =
       (param_1->Triangle3D).V[1].field0_0x0._s_0.Y;
  (param_2->BaseSample).Triangle3D.V[1].field0_0x0._s_0.Z = dVar2;
  dVar2 = (param_1->Triangle3D).V[2].field0_0x0._s_0.Y;
  (param_2->BaseSample).Triangle3D.V[2].field0_0x0._s_0.X =
       (param_1->Triangle3D).V[2].field0_0x0._s_0.X;
  (param_2->BaseSample).Triangle3D.V[2].field0_0x0._s_0.Y = dVar2;
  uVar9 = *(undefined8 *)&(param_1->UVVertices).field0_0x0;
  (param_2->BaseSample).Triangle3D.V[2].field0_0x0._s_0.Z =
       (param_1->Triangle3D).V[2].field0_0x0._s_0.Z;
  *(undefined8 *)&(param_2->BaseSample).UVVertices.field0_0x0 = uVar9;
  dVar2 = (param_1->TriangleUV).V[0].field0_0x0._s_0.X;
  *(undefined8 *)((longlong)&(param_2->BaseSample).UVVertices.field0_0x0 + 8) =
       *(undefined8 *)((longlong)&(param_1->UVVertices).field0_0x0 + 8);
  (param_2->BaseSample).TriangleUV.V[0].field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->TriangleUV).V[1].field0_0x0._s_0.X;
  (param_2->BaseSample).TriangleUV.V[0].field0_0x0._s_0.Y =
       (param_1->TriangleUV).V[0].field0_0x0._s_0.Y;
  (param_2->BaseSample).TriangleUV.V[1].field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->TriangleUV).V[2].field0_0x0._s_0.X;
  (param_2->BaseSample).TriangleUV.V[1].field0_0x0._s_0.Y =
       (param_1->TriangleUV).V[1].field0_0x0._s_0.Y;
  (param_2->BaseSample).TriangleUV.V[2].field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->BaryCoords).field0_0x0._s_0.X;
  (param_2->BaseSample).TriangleUV.V[2].field0_0x0._s_0.Y =
       (param_1->TriangleUV).V[2].field0_0x0._s_0.Y;
  (param_2->BaseSample).BaryCoords.field0_0x0._s_0.X = dVar2;
  uVar6 = *(undefined4 *)((longlong)&(param_1->BaryCoords).field0_0x0 + 0xc);
  uVar7 = *(undefined4 *)((longlong)&(param_1->BaryCoords).field0_0x0 + 0x10);
  uVar8 = *(undefined4 *)((longlong)&(param_1->BaryCoords).field0_0x0 + 0x14);
  *(undefined4 *)((longlong)&(param_2->BaseSample).BaryCoords.field0_0x0 + 8) =
       *(undefined4 *)((longlong)&(param_1->BaryCoords).field0_0x0 + 8);
  *(undefined4 *)((longlong)&(param_2->BaseSample).BaryCoords.field0_0x0 + 0xc) = uVar6;
  *(undefined4 *)((longlong)&(param_2->BaseSample).BaryCoords.field0_0x0 + 0x10) = uVar7;
  *(undefined4 *)((longlong)&(param_2->BaseSample).BaryCoords.field0_0x0 + 0x14) = uVar8;
  dVar2 = (param_1->SurfacePoint).field0_0x0._s_0.Y;
  (param_2->BaseSample).SurfacePoint.field0_0x0._s_0.X = (param_1->SurfacePoint).field0_0x0._s_0.X;
  (param_2->BaseSample).SurfacePoint.field0_0x0._s_0.Y = dVar2;
  (param_2->BaseSample).SurfacePoint.field0_0x0._s_0.Z = (param_1->SurfacePoint).field0_0x0._s_0.Z;
  *piVar1 = -1;
  iVar3 = *(int *)((longlong)this + 0x10);
  if (iVar3 == 3) {
    *piVar1 = param_1->TriangleIndex;
    dVar2 = (param_1->BaryCoords).field0_0x0._s_0.Y;
    (param_2->DetailBaryCoords).field0_0x0._s_0.X = (param_1->BaryCoords).field0_0x0._s_0.X;
    (param_2->DetailBaryCoords).field0_0x0._s_0.Y = dVar2;
    (param_2->DetailBaryCoords).field0_0x0._s_0.Z = (param_1->BaryCoords).field0_0x0._s_0.Z;
  }
  else {
    lVar4 = *(longlong *)((longlong)this + 0x18);
    if (iVar3 == 1) {
      this_00 = *(FDynamicMesh3 **)(lVar4 + 0x30);
      local_1b8 = 0;
      local_138 = 0;
      local_110 = (longlong *)0x0;
      local_108 = 0;
      local_148[0] = __real_7fefffffffffffff;
      uVar13 = (**(code **)(**(longlong **)(lVar4 + 0x38) + 0x20))
                         (*(longlong **)(lVar4 + 0x38),&param_1->SurfacePoint,&local_1b8,local_148);
      if (local_138 != 0) {
        plVar14 = local_128;
        if (local_110 != (longlong *)0x0) {
          plVar14 = local_110;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      if ((-1 < (int)uVar13) &&
         ((int)uVar13 <
          (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (this_00->TriangleRefCounts).RefCounts.CurBlockUsed))) {
        if ((ushort)(*(short *)(*(longlong *)
                                 ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + (ulonglong)(uVar13 >> 9) * 8) +
                               (ulonglong)(uVar13 & 0x1ff) * 2) - 1U) < 0xfffe) {
          *piVar1 = uVar13;
          dVar10 = (param_1->SurfacePoint).field0_0x0._s_0.X;
          dVar11 = (param_1->SurfacePoint).field0_0x0._s_0.Y;
          dVar2 = (param_1->SurfacePoint).field0_0x0._s_0.Z;
          if (((int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                    (this_00->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar13) ||
             (0xfffd < (ushort)(*(short *)(*(longlong *)
                                            ((this_00->TriangleRefCounts).RefCounts.Blocks.
                                             AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8)
                                          + (ulonglong)(uVar13 & 0x1ff) * 2) - 1U))) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mesh.IsTriangle(TriIdx)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                                ,0x1e,L"");
            if (bVar12) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                    (this_00,uVar13,(TVector<double> *)&local_198._s_0,
                     (TVector<double> *)&TStack_180._s_0,(TVector<double> *)&local_168._s_0);
          local_e0 = local_198._s_0.X;
          dStack_d8 = local_198._s_0.Y;
          local_c0 = TStack_180._s_0.Y;
          dStack_b8 = TStack_180._s_0.Z;
          local_d0 = local_198._s_0.Z;
          dStack_c8 = TStack_180._s_0.X;
          local_a0 = local_168._s_0.Z;
          local_b0 = local_168._s_0.X;
          dStack_a8 = local_168._s_0.Y;
          local_f8._s_0.X = dVar10;
          local_f8._s_0.Y = dVar11;
          local_f8._s_0.Z = dVar2;
          UE::Geometry::TDistPoint3Triangle3<double>::ComputeResult
                    ((TDistPoint3Triangle3<double> *)&local_f8._s_0);
          (param_2->DetailBaryCoords).field0_0x0._s_0.X = local_98;
          (param_2->DetailBaryCoords).field0_0x0._s_0.Y = dStack_90;
          (param_2->DetailBaryCoords).field0_0x0._s_0.Z = local_88;
        }
      }
    }
    else {
      UE::Geometry::GetDetailTrianglePoint_Raycast
                (*(FDynamicMesh3 **)(lVar4 + 0x30),
                 *(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)(lVar4 + 0x38),
                 &param_1->SurfacePoint,(TVector<double> *)&local_1b0._s_0,piVar1,
                 &param_2->DetailBaryCoords,*(double *)(lVar4 + 0x58),iVar3 == 2);
    }
  }
  return;
}

// operator() @ 14c8b14d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FMeshImageBakingCache::ValidateCache'::__l29::<lambda_3>::operator()
          (void *this,int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  FMeshUVSampleInfo *pFVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auStack_278 [32];
  longlong local_258;
  longlong local_250;
  double local_248;
  double local_240;
  undefined8 local_238 [32];
  FMeshUVSampleInfo local_138;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_278;
  puVar14 = *(undefined8 **)this;
  UE::Core::Private::Function::CheckCallable((void *)*puVar14);
  pcVar2 = (code *)*puVar14;
  plVar15 = puVar14 + 2;
  if ((longlong *)puVar14[5] != (longlong *)0x0) {
    plVar15 = (longlong *)puVar14[5];
  }
  uVar13 = (**(code **)(*plVar15 + 8))();
  cVar10 = (*pcVar2)(uVar13);
  if (cVar10 == '\0') {
    lVar22 = *(longlong *)this;
    iVar20 = 0;
    if (0 < *(int *)(lVar22 + 0x48)) {
      lVar23 = 0;
      do {
        lVar18 = *(longlong *)(lVar22 + 0x98);
        lVar19 = *(longlong *)(lVar18 + 0x30);
        lVar22 = (longlong)*(int *)(lVar22 + 0x48) * (longlong)param_1 + lVar23;
        uVar21 = (uint)((ulonglong)lVar22 >> 0x3f) ^ 1;
        uVar12 = 0;
        if (lVar22 < lVar19) {
          uVar12 = uVar21;
        }
        if ((uVar12 == 0) &&
           (local_258 = lVar22, local_250 = lVar19,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar11)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(char *)(lVar22 + *(longlong *)(lVar18 + 0x28)) == '\x01') {
          lVar18 = *(longlong *)(*(longlong *)this + 0x98);
          lVar19 = *(longlong *)(lVar18 + 0x60);
          uVar12 = 0;
          if (lVar22 < lVar19) {
            uVar12 = uVar21;
          }
          if ((uVar12 == 0) &&
             (local_258 = lVar22, local_250 = lVar19,
             bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar18 = *(longlong *)(lVar18 + 0x58);
          local_240 = (double)*(float *)(lVar18 + 4 + lVar22 * 8);
          local_248 = (double)*(float *)(lVar18 + lVar22 * 8);
          lVar18 = *(longlong *)(*(longlong *)this + 0x98);
          lVar19 = *(longlong *)(lVar18 + 0x78);
          uVar12 = 0;
          if (lVar22 < lVar19) {
            uVar12 = uVar21;
          }
          if ((uVar12 == 0) &&
             (local_258 = lVar22, local_250 = lVar19,
             bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar1 = *(undefined4 *)(*(longlong *)(lVar18 + 0x70) + lVar22 * 4);
          UE::Geometry::FMeshUVSampleInfo::FMeshUVSampleInfo(&local_138);
          (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))
                    (*(longlong **)((longlong)this + 8),uVar1,&local_248,&local_138);
          lVar18 = 2;
          puVar14 = local_238;
          pFVar16 = &local_138;
          do {
            uVar13 = *(undefined8 *)((longlong)&(pFVar16->MeshVertices).field0_0x0 + 4);
            dVar3 = (pFVar16->Triangle3D).V[0].field0_0x0._s_0.X;
            dVar4 = (pFVar16->Triangle3D).V[0].field0_0x0._s_0.Y;
            *puVar14 = *(undefined8 *)pFVar16;
            puVar14[1] = uVar13;
            dVar5 = (pFVar16->Triangle3D).V[0].field0_0x0._s_0.Z;
            dVar6 = (pFVar16->Triangle3D).V[1].field0_0x0._s_0.X;
            puVar14[2] = dVar3;
            puVar14[3] = dVar4;
            dVar3 = (pFVar16->Triangle3D).V[1].field0_0x0._s_0.Y;
            dVar4 = (pFVar16->Triangle3D).V[1].field0_0x0._s_0.Z;
            puVar14[4] = dVar5;
            puVar14[5] = dVar6;
            dVar5 = (pFVar16->Triangle3D).V[2].field0_0x0._s_0.X;
            dVar6 = (pFVar16->Triangle3D).V[2].field0_0x0._s_0.Y;
            puVar14[6] = dVar3;
            puVar14[7] = dVar4;
            dVar3 = (pFVar16->Triangle3D).V[2].field0_0x0._s_0.Z;
            uVar13 = *(undefined8 *)&(pFVar16->UVVertices).field0_0x0;
            puVar14[8] = dVar5;
            puVar14[9] = dVar6;
            uVar7 = *(undefined8 *)((longlong)&(pFVar16->UVVertices).field0_0x0 + 8);
            dVar4 = (pFVar16->TriangleUV).V[0].field0_0x0._s_0.X;
            puVar14[10] = dVar3;
            puVar14[0xb] = uVar13;
            dVar3 = (pFVar16->TriangleUV).V[0].field0_0x0._s_0.Y;
            dVar5 = (pFVar16->TriangleUV).V[1].field0_0x0._s_0.X;
            puVar14[0xc] = uVar7;
            puVar14[0xd] = dVar4;
            puVar14[0xe] = dVar3;
            puVar14[0xf] = dVar5;
            lVar18 = lVar18 + -1;
            puVar14 = puVar14 + 0x10;
            pFVar16 = (FMeshUVSampleInfo *)((pFVar16->TriangleUV).V[1].field0_0x0.XY + 1);
          } while (lVar18 != 0);
          lVar18 = *(longlong *)this;
          lVar19 = *(longlong *)(lVar18 + 0x70);
          uVar12 = 0;
          if (lVar22 < lVar19) {
            uVar12 = uVar21;
          }
          if ((uVar12 == 0) &&
             (local_258 = lVar22, local_250 = lVar19,
             bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar19 = 2;
          puVar14 = local_238;
          puVar17 = (undefined8 *)(*(longlong *)(lVar18 + 0x68) + lVar22 * 0x100);
          do {
            uVar13 = puVar14[1];
            uVar7 = puVar14[2];
            uVar8 = puVar14[3];
            *puVar17 = *puVar14;
            puVar17[1] = uVar13;
            uVar13 = puVar14[4];
            uVar9 = puVar14[5];
            puVar17[2] = uVar7;
            puVar17[3] = uVar8;
            uVar7 = puVar14[6];
            uVar8 = puVar14[7];
            puVar17[4] = uVar13;
            puVar17[5] = uVar9;
            uVar13 = puVar14[8];
            uVar9 = puVar14[9];
            puVar17[6] = uVar7;
            puVar17[7] = uVar8;
            uVar7 = puVar14[10];
            uVar8 = puVar14[0xb];
            puVar17[8] = uVar13;
            puVar17[9] = uVar9;
            uVar13 = puVar14[0xc];
            uVar9 = puVar14[0xd];
            puVar17[10] = uVar7;
            puVar17[0xb] = uVar8;
            uVar7 = puVar14[0xe];
            uVar8 = puVar14[0xf];
            puVar17[0xc] = uVar13;
            puVar17[0xd] = uVar9;
            puVar17[0xe] = uVar7;
            puVar17[0xf] = uVar8;
            lVar19 = lVar19 + -1;
            puVar14 = puVar14 + 0x10;
            puVar17 = puVar17 + 0x10;
          } while (lVar19 != 0);
        }
        lVar22 = *(longlong *)this;
        iVar20 = iVar20 + 1;
        lVar23 = lVar23 + 1;
      } while (iVar20 < *(int *)(lVar22 + 0x48));
    }
  }
  return;
}

// EvaluateSamples @ 14c8e1b60

void __thiscall
UE::Geometry::FMeshImageBakingCache::EvaluateSamples
          (FMeshImageBakingCache *this,
          TFunctionRef<void___cdecl(UE::Geometry::FVector2i_const_&,UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample_const_&)>
          *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  <lambda_1> local_res18;
  FMeshImageBakingCache *local_38;
  TFunctionRef<void___cdecl(UE::Geometry::FVector2i_const_&,UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample_const_&)>
  *local_30;
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FMeshImageBakingCache **local_10;
  
  if ((this->bOccupancyValid == false) || (this->bSamplesValid == false)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCacheValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshImageBakingCache.cpp"
                       ,0x17e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28.DataPtr = (void **)0x0;
  local_28.ArrayNum = 0;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshImageBakingCache::EvaluateSamples'::__l2::<lambda_1>,void,int>
             ::Call;
  local_10 = &local_38;
  local_38 = this;
  local_30 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->Dimensions).Height,1,
             (TFunctionRef<void___cdecl(int)> *)&local_18,local_res18,param_2 ^ ForceSingleThread,
             &local_28);
  return;
}

// FindSamplingHoles @ 14c8ecb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMeshImageBakingCache::FindSamplingHoles
          (FMeshImageBakingCache *this,
          TFunctionRef<bool___cdecl(UE::Geometry::FVector2i_const_&)> *param_1,
          TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStackY_c8 [32];
  <lambda_1> local_88;
  TArrayView<std::nullptr_t,int> local_80;
  code *local_70;
  FMeshImageBakingCache **local_68;
  FMeshImageBakingCache *local_60;
  TFunctionRef<bool___cdecl(UE::Geometry::FVector2i_const_&)> *local_58;
  _RTL_CRITICAL_SECTION *local_50;
  TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> *local_48;
  _RTL_CRITICAL_SECTION local_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if ((this->bOccupancyValid == false) || (this->bSamplesValid == false)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCacheValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshImageBakingCache.cpp"
                       ,0x1a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  InitializeCriticalSectionAndSpinCount(&local_40,4000);
  local_50 = &local_40;
  local_80.DataPtr = (void **)0x0;
  local_80.ArrayNum = 0;
  local_70 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshImageBakingCache::FindSamplingHoles'::__l2::<lambda_1>,void,int>
             ::Call;
  local_68 = &local_60;
  local_60 = this;
  local_58 = param_1;
  local_48 = param_2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->Dimensions).Height,1,
             (TFunctionRef<void___cdecl(int)> *)&local_70,local_88,param_3 ^ ForceSingleThread,
             &local_80);
  DeleteCriticalSection(&local_40);
  return;
}

// GetBakeTargetNormals @ 14c8f2270

TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> * __thiscall
UE::Geometry::FMeshImageBakingCache::GetBakeTargetNormals(FMeshImageBakingCache *this)

{
  FDynamicMeshAttributeSet *pFVar1;
  code *pcVar2;
  bool bVar3;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar4;
  FDynamicMeshAttributeSet *pFVar5;
  
  if ((this->TargetMesh == (FDynamicMesh3 *)0x0) ||
     ((this->TargetMesh->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TargetMesh && TargetMesh->HasAttributes()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshImageBakingCache.cpp"
                       ,0x60,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pFVar1 = (this->TargetMesh->AttributeSet).Ptr;
  pFVar5 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar5 = pFVar1;
  }
  if (0 < (pFVar5->NormalLayers).Array.ArrayNum) {
    return *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
            (pFVar5->NormalLayers).Array.AllocatorInstance.Data;
  }
  return (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
}

// GetBakeTargetUVs @ 14c8f22f0

TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> * __thiscall
UE::Geometry::FMeshImageBakingCache::GetBakeTargetUVs(FMeshImageBakingCache *this)

{
  int iVar1;
  FDynamicMeshAttributeSet *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar6;
  FDynamicMeshAttributeSet *this_00;
  
  if ((this->TargetMesh != (FDynamicMesh3 *)0x0) &&
     (pFVar2 = (this->TargetMesh->AttributeSet).Ptr, pFVar2 != (FDynamicMeshAttributeSet *)0x0)) {
    iVar1 = this->UVLayer;
    iVar5 = (**(code **)(pFVar2->_padding_ + 0xa8))();
    if (iVar1 < iVar5) goto LAB_14c8f234e;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("TargetMesh && TargetMesh->HasAttributes() && UVLayer < TargetMesh->Attributes()->NumUVLayers()"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshImageBakingCache.cpp"
                     ,0x5a,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)(*pcVar3)();
    return pTVar6;
  }
LAB_14c8f234e:
  pFVar2 = (this->TargetMesh->AttributeSet).Ptr;
  this_00 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    this_00 = pFVar2;
  }
  pTVar6 = FDynamicMeshAttributeSet::GetUVLayer(this_00,this->UVLayer);
  return pTVar6;
}

// GetDetailNormals @ 14c8f3260

TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> * __thiscall
UE::Geometry::FMeshImageBakingCache::GetDetailNormals(FMeshImageBakingCache *this)

{
  FDynamicMeshAttributeSet *pFVar1;
  code *pcVar2;
  bool bVar3;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar4;
  FDynamicMeshAttributeSet *pFVar5;
  
  if ((this->DetailMesh == (FDynamicMesh3 *)0x0) ||
     ((this->DetailMesh->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DetailMesh && DetailMesh->HasAttributes()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshImageBakingCache.cpp"
                       ,0x53,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pFVar1 = (this->DetailMesh->AttributeSet).Ptr;
  pFVar5 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar5 = pFVar1;
  }
  if (0 < (pFVar5->NormalLayers).Array.ArrayNum) {
    return *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
            (pFVar5->NormalLayers).Array.AllocatorInstance.Data;
  }
  return (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
}

// GetOccupancyMap @ 14c8f50d0

FImageOccupancyMap * __thiscall
UE::Geometry::FMeshImageBakingCache::GetOccupancyMap(FMeshImageBakingCache *this)

{
  code *pcVar1;
  bool bVar2;
  FImageOccupancyMap *pFVar3;
  
  if ((this->bOccupancyValid != false) && (this->bSamplesValid != false)) {
    return (this->OccupancyMap).Ptr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsCacheValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshImageBakingCache.cpp"
                     ,0x66,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FImageOccupancyMap *)(*pcVar1)();
    return pFVar3;
  }
  return (this->OccupancyMap).Ptr;
}

// InvalidateOccupancy @ 14c900700

void __thiscall
UE::Geometry::FMeshImageBakingCache::InvalidateOccupancy(FMeshImageBakingCache *this)

{
  this->bOccupancyValid = false;
  return;
}

// InvalidateSamples @ 14c900710

void __thiscall UE::Geometry::FMeshImageBakingCache::InvalidateSamples(FMeshImageBakingCache *this)

{
  this->bSamplesValid = false;
  return;
}

// SetBakeTargetMesh @ 14c915a80

void __thiscall
UE::Geometry::FMeshImageBakingCache::SetBakeTargetMesh
          (FMeshImageBakingCache *this,FDynamicMesh3 *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (FDynamicMesh3 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mesh",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshImageBakingCache.cpp"
                       ,0x13,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->TargetMesh = param_1;
  this->bSamplesValid = false;
  this->bOccupancyValid = false;
  return;
}

// SetCorrespondenceStrategy @ 14c916660

void __thiscall
UE::Geometry::FMeshImageBakingCache::SetCorrespondenceStrategy
          (FMeshImageBakingCache *this,ECorrespondenceStrategy param_1)

{
  if (this->CorrespondenceStrategy != param_1) {
    this->CorrespondenceStrategy = param_1;
    this->bSamplesValid = false;
    this->bOccupancyValid = false;
  }
  return;
}

// SetDetailMesh @ 14c916680

void __thiscall
UE::Geometry::FMeshImageBakingCache::SetDetailMesh
          (FMeshImageBakingCache *this,FDynamicMesh3 *param_1,
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (FDynamicMesh3 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mesh",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshImageBakingCache.cpp"
                       ,9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->DetailMesh = param_1;
  if (param_2 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Spatial",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshImageBakingCache.cpp"
                       ,0xb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->DetailSpatial = param_2;
  this->bSamplesValid = false;
  this->bOccupancyValid = false;
  return;
}

// SetDimensions @ 14c9169c0

void __thiscall
UE::Geometry::FMeshImageBakingCache::SetDimensions
          (FMeshImageBakingCache *this,FImageDimensions param_1)

{
  if (((this->Dimensions).Width != param_1.Width) || ((this->Dimensions).Height != param_1.Height))
  {
    this->Dimensions = param_1;
    this->bSamplesValid = false;
    this->bOccupancyValid = false;
  }
  return;
}

// SetGutterSize @ 14c916cb0

void __thiscall
UE::Geometry::FMeshImageBakingCache::SetGutterSize(FMeshImageBakingCache *this,int param_1)

{
  if (this->GutterSize != param_1) {
    this->GutterSize = param_1;
    this->bOccupancyValid = false;
  }
  return;
}

// SetThickness @ 14c9172e0

void __thiscall
UE::Geometry::FMeshImageBakingCache::SetThickness(FMeshImageBakingCache *this,double param_1)

{
  if (param_1 != this->Thickness) {
    this->Thickness = param_1;
    this->bSamplesValid = false;
    this->bOccupancyValid = false;
  }
  return;
}

// SetUVLayer @ 14c917400

void __thiscall
UE::Geometry::FMeshImageBakingCache::SetUVLayer(FMeshImageBakingCache *this,int param_1)

{
  if (this->UVLayer != param_1) {
    this->UVLayer = param_1;
    this->bSamplesValid = false;
    this->bOccupancyValid = false;
  }
  return;
}

// ValidateCache @ 14c924bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UE::Geometry::FMeshImageBakingCache::ValidateCache(FMeshImageBakingCache *this)

{
  long64 *plVar1;
  TUniquePtr<UE::Geometry::FImageOccupancyMap,TDefaultDelete<UE::Geometry::FImageOccupancyMap>_>
  *pTVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FDynamicMesh3 *pFVar10;
  FDynamicMeshAttributeSet *pFVar11;
  FImageDimensions FVar12;
  code *pcVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  bool bVar25;
  undefined1 uVar26;
  int iVar27;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar28;
  FDynamicMeshAttributeSet *pFVar29;
  FImageOccupancyMap *pFVar30;
  FMeshUVSampleInfo *pFVar31;
  FImageOccupancyMap *pFVar32;
  undefined ***pppuVar33;
  FMeshUVSampleInfo *pFVar34;
  longlong *plVar35;
  FScriptContainerElement *pFVar36;
  longlong *plVar37;
  ulonglong uVar38;
  longlong lVar39;
  ECorrespondenceStrategy EVar40;
  longlong lVar41;
  ulong64 uVar42;
  uint uVar43;
  uint uVar44;
  FDynamicMeshAttributeSet *pFVar45;
  undefined1 auStackY_868 [32];
  <lambda_1> local_828;
  longlong local_810;
  FIndex3i_u_0 local_808;
  code *local_7f8;
  undefined8 uStack_7f0;
  undefined4 local_7e8;
  undefined4 uStack_7e4;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  undefined8 local_7d8;
  longlong *plStack_7d0;
  FMeshImageBakingCache *local_7c8;
  undefined ***local_7c0;
  TArrayView<std::nullptr_t,int> local_7b8;
  code *local_7a8;
  FMeshImageBakingCache **local_7a0;
  FDynamicMesh3 *local_798;
  longlong lStack_790;
  ECorrespondenceStrategy local_788;
  undefined4 uStack_784;
  FMeshImageBakingCache *pFStack_780;
  TVector<double>_u_0 local_778;
  undefined8 local_760;
  float local_758;
  undefined8 local_754;
  float local_74c;
  TVector2<float>_u_0 local_748;
  undefined2 local_740;
  undefined1 local_73e;
  TVector<double>_u_0 local_738;
  undefined8 local_720;
  float local_718;
  undefined8 local_714;
  float local_70c;
  TVector2<float>_u_0 local_708;
  undefined2 local_700;
  undefined1 local_6fe;
  TVector<double>_u_0 local_6f8;
  undefined8 local_6e0;
  float local_6d8;
  undefined8 local_6d4;
  float local_6cc;
  TVector2<float>_u_0 local_6c8;
  undefined2 local_6c0;
  undefined1 local_6be;
  longlong local_6b8 [2];
  FDynamicMesh3 local_6a8;
  undefined1 local_478 [48];
  undefined **local_448;
  code *local_440;
  undefined ***local_430;
  double local_428;
  TDynamicVector<int,512> local_420;
  TDynamicVector<UE::Math::TVector<double>,512> local_408;
  TDynamicVector<UE::Math::TVector<double>,512> local_3f0;
  TDynamicVector<int,512> local_3d8;
  undefined8 local_3c0;
  undefined **local_3b8;
  undefined2 local_3b0;
  FDynamicMesh3 *local_3a8;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTStack_3a0;
  code *local_398;
  undefined8 uStack_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  longlong *plStack_370;
  FMeshUVSampleInfo local_368;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258 [48];
  undefined **local_228;
  code *local_220;
  undefined8 local_210;
  double local_208;
  TDynamicVector<int,512> local_200;
  TDynamicVector<UE::Math::TVector<double>,512> local_1e8;
  TDynamicVector<UE::Math::TVector<double>,512> local_1d0;
  TDynamicVector<int,512> local_1b8;
  undefined8 local_1a0;
  FMeshUVSampleInfo local_198;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_868;
  if ((((this->TargetMesh == (FDynamicMesh3 *)0x0) || (this->DetailMesh == (FDynamicMesh3 *)0x0)) ||
      (this->DetailSpatial == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0)) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("TargetMesh && DetailMesh && DetailSpatial",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshImageBakingCache.cpp"
                          ,0x106,L""), bVar25)) {
    pcVar13 = (code *)swi(3);
    uVar26 = (*pcVar13)();
    return (bool)uVar26;
  }
  if ((((this->Dimensions).Width < 1) || ((this->Dimensions).Height < 1)) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("Dimensions.GetWidth() > 0 && Dimensions.GetHeight() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshImageBakingCache.cpp"
                          ,0x107,L""), bVar25)) {
    pcVar13 = (code *)swi(3);
    uVar26 = (*pcVar13)();
    return (bool)uVar26;
  }
  pFVar10 = this->TargetMesh;
  if ((((pFVar10 == (FDynamicMesh3 *)0x0) ||
       (pFVar11 = (pFVar10->AttributeSet).Ptr, pFVar11 == (FDynamicMeshAttributeSet *)0x0)) ||
      (iVar7 = this->UVLayer, iVar27 = (**(code **)(pFVar11->_padding_ + 0xa8))(), iVar27 <= iVar7))
     && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                            ("TargetMesh && TargetMesh->HasAttributes() && UVLayer < TargetMesh->Attributes()->NumUVLayers()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshImageBakingCache.cpp"
                             ,0x5a,L""), bVar25)) {
    pcVar13 = (code *)swi(3);
    uVar26 = (*pcVar13)();
    return (bool)uVar26;
  }
  pFVar45 = (FDynamicMeshAttributeSet *)0x0;
  pFVar11 = (this->TargetMesh->AttributeSet).Ptr;
  pFVar29 = pFVar45;
  if (pFVar11 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar29 = pFVar11;
  }
  pTVar28 = FDynamicMeshAttributeSet::GetUVLayer(pFVar29,this->UVLayer);
  if (((this->TargetMesh == (FDynamicMesh3 *)0x0) ||
      ((this->TargetMesh->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0)) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("TargetMesh && TargetMesh->HasAttributes()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshImageBakingCache.cpp"
                          ,0x60,L""), bVar25)) {
    pcVar13 = (code *)swi(3);
    uVar26 = (*pcVar13)();
    return (bool)uVar26;
  }
  dVar15 = __real_3e45798ee2308c3a;
  pFVar11 = (this->TargetMesh->AttributeSet).Ptr;
  pFVar29 = pFVar45;
  if (pFVar11 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar29 = pFVar11;
  }
  if ((pFVar29->NormalLayers).Array.ArrayNum < 1) {
    local_810 = 0;
  }
  else {
    local_810 = *(longlong *)(pFVar29->NormalLayers).Array.AllocatorInstance.Data;
  }
  if (this->bOccupancyValid != false) goto LAB_14c9254e8;
  FDynamicMesh3::FDynamicMesh3(&local_6a8,FaceGroups);
  uVar43 = (pFVar10->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar10->TriangleRefCounts).RefCounts.CurBlockUsed;
  if ((uVar43 == 0) ||
     (pFVar36 = (pFVar10->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     pFVar45 = (FDynamicMeshAttributeSet *)0x0, (ushort)(**(short **)pFVar36 - 1U) < 0xfffe)) {
LAB_14c924de6:
    uVar44 = (uint)pFVar45;
  }
  else {
    pFVar45 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar44 = 1;
    if (1 < (int)uVar43) {
      do {
        uVar38 = (ulonglong)((uint)pFVar45 & 0x1ff);
        lVar39 = *(longlong *)(pFVar36 + ((ulonglong)pFVar45 >> 9) * 8);
        if ((*(short *)(lVar39 + uVar38 * 2) != 0) && (*(short *)(lVar39 + uVar38 * 2) != -1))
        break;
        uVar44 = (uint)pFVar45 + 1;
        pFVar45 = (FDynamicMeshAttributeSet *)(ulonglong)uVar44;
      } while ((int)uVar44 < (int)uVar43);
      goto LAB_14c924de6;
    }
  }
joined_r0x00014c924de8:
  if (uVar44 != uVar43) {
    while( true ) {
      lVar39 = *(longlong *)&pTVar28->field_0x78;
      iVar7 = (int)pFVar45;
      uVar9 = iVar7 * 3;
      uVar44 = *(uint *)(*(longlong *)(lVar39 + (ulonglong)(uVar9 >> 9) * 8) +
                        (ulonglong)(uVar9 & 0x1ff) * 4);
      if (-1 < (int)uVar44) {
        lVar41 = *(longlong *)&pTVar28->field_0x48;
        local_778._s_0.Z = 0.0;
        local_760 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_754 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_740 = 0;
        local_73e = 0;
        uVar8 = *(uint *)(*(longlong *)(lVar39 + (ulonglong)(uVar9 + 1 >> 9) * 8) +
                         (ulonglong)(uVar9 + 1 & 0x1ff) * 4);
        fVar3 = *(float *)(*(longlong *)(lVar41 + (ulonglong)((uVar8 & 0x7fffffff) >> 8) * 8) +
                          (ulonglong)(uVar8 * 2 & 0x1ff) * 4);
        fVar4 = *(float *)(*(longlong *)(lVar41 + (ulonglong)((uVar8 & 0x7fffffff) >> 8) * 8) +
                          (ulonglong)(uVar8 * 2 + 1 & 0x1ff) * 4);
        uVar9 = *(uint *)(*(longlong *)(lVar39 + (ulonglong)(uVar9 + 2 >> 9) * 8) +
                         (ulonglong)(uVar9 + 2 & 0x1ff) * 4);
        fVar5 = *(float *)(*(longlong *)(lVar41 + (ulonglong)((uVar9 & 0x7fffffff) >> 8) * 8) +
                          (ulonglong)(uVar9 * 2 & 0x1ff) * 4);
        fVar6 = *(float *)(*(longlong *)(lVar41 + (ulonglong)((uVar9 & 0x7fffffff) >> 8) * 8) +
                          (ulonglong)(uVar9 * 2 + 1 & 0x1ff) * 4);
        local_778._s_0.X =
             (double)*(float *)(*(longlong *)(lVar41 + (ulonglong)((uVar44 & 0x7fffffff) >> 8) * 8)
                               + (ulonglong)(uVar44 * 2 & 0x1ff) * 4);
        local_778._s_0.Y =
             (double)*(float *)(*(longlong *)(lVar41 + (ulonglong)((uVar44 & 0x7fffffff) >> 8) * 8)
                               + (ulonglong)(uVar44 * 2 + 1 & 0x1ff) * 4);
        local_758 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_74c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_748 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        iVar27 = FDynamicMesh3::AppendVertex(&local_6a8,(FVertexInfo *)&local_778._s_0);
        local_738._s_0.X = (double)fVar3;
        local_738._s_0.Y = (double)fVar4;
        local_720 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_738._s_0.Z = 0.0;
        local_718 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_70c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_714 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_708 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_700 = 0;
        local_6fe = 0;
        local_808._s_0.B = FDynamicMesh3::AppendVertex(&local_6a8,(FVertexInfo *)&local_738._s_0);
        local_6f8._s_0.X = (double)fVar5;
        local_6d8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_6cc = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_6c8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_6c0 = 0;
        local_6f8._s_0.Y = (double)fVar6;
        local_6be = 0;
        local_6e0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_6d4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_6f8._s_0.Z = 0.0;
        local_808._s_0.A = iVar27;
        local_808._s_0.C = FDynamicMesh3::AppendVertex(&local_6a8,(FVertexInfo *)&local_6f8._s_0);
        FDynamicMesh3::AppendTriangle(&local_6a8,(FIndex3i *)&local_808._s_0,iVar7);
      }
      uVar44 = iVar7 + 1;
      pFVar45 = (FDynamicMeshAttributeSet *)(ulonglong)uVar44;
      if ((int)uVar43 <= (int)uVar44) break;
      while( true ) {
        uVar38 = (ulonglong)((uint)pFVar45 & 0x1ff);
        lVar39 = *(longlong *)
                  ((pFVar10->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  ((ulonglong)pFVar45 >> 9) * 8);
        if ((*(short *)(lVar39 + uVar38 * 2) != 0) && (*(short *)(lVar39 + uVar38 * 2) != -1))
        break;
        uVar44 = (uint)pFVar45 + 1;
        pFVar45 = (FDynamicMeshAttributeSet *)(ulonglong)uVar44;
        if ((int)uVar43 <= (int)uVar44) goto joined_r0x00014c924de8;
      }
    }
    goto joined_r0x00014c924de8;
  }
  pFVar32 = (FImageOccupancyMap *)0x0;
  pFVar30 = ::operator_new(0xd8);
  if (pFVar30 != (FImageOccupancyMap *)0x0) {
    *(undefined8 *)&pFVar30->GutterSize = 4;
    *(undefined2 *)&pFVar30->field_0xd5 = 0;
    pFVar30->field_0xd7 = 0;
    (pFVar30->Dimensions).Width = 0;
    (pFVar30->Dimensions).Height = 0;
    (pFVar30->Tile).Start.field0_0x0 = (FVector2i_u_0)0x0;
    (pFVar30->Tile).End.field0_0x0 = (FVector2i_u_0)0x0;
    (pFVar30->Tile).Width = 0;
    (pFVar30->Tile).Height = 0;
    (pFVar30->TexelType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar30->TexelType).ArrayNum = 0;
    (pFVar30->TexelType).ArrayMax = 0;
    (pFVar30->TexelInteriorSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar30->TexelInteriorSamples).ArrayNum = 0;
    (pFVar30->TexelInteriorSamples).ArrayMax = 0;
    (pFVar30->TexelQueryUV).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar30->TexelQueryUV).ArrayNum = 0;
    (pFVar30->TexelQueryUV).ArrayMax = 0;
    (pFVar30->TexelQueryTriangle).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar30->TexelQueryTriangle).ArrayNum = 0;
    (pFVar30->TexelQueryTriangle).ArrayMax = 0;
    (pFVar30->TexelQueryUVChart).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar30->TexelQueryUVChart).ArrayNum = 0;
    (pFVar30->TexelQueryUVChart).ArrayMax = 0;
    (pFVar30->BorderTexels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar30->BorderTexels).ArrayNum = 0;
    (pFVar30->BorderTexels).ArrayMax = 0;
    (pFVar30->GutterTexels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar30->GutterTexels).ArrayNum = 0;
    (pFVar30->GutterTexels).ArrayMax = 0;
    (pFVar30->PixelSampler).Size = 1;
    pFVar30->bParallel = true;
    pFVar32 = pFVar30;
  }
  pTVar2 = &this->OccupancyMap;
  if (pTVar2 == (TUniquePtr<UE::Geometry::FImageOccupancyMap,TDefaultDelete<UE::Geometry::FImageOccupancyMap>_>
                 *)local_6b8) {
    if (pFVar32 != (FImageOccupancyMap *)0x0) {
      FImageOccupancyMap::~FImageOccupancyMap(pFVar32);
      goto LAB_14c9251dd;
    }
  }
  else {
    pFVar30 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar32;
    if (pFVar30 != (FImageOccupancyMap *)0x0) {
      FImageOccupancyMap::~FImageOccupancyMap(pFVar30);
      pFVar32 = pFVar30;
LAB_14c9251dd:
      ::operator_delete(pFVar32,0xd8);
    }
  }
  pTVar2->Ptr->GutterSize = this->GutterSize;
  FVar12 = this->Dimensions;
  pFVar32 = pTVar2->Ptr;
  if ((FVar12.Width != FVar12.Height) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("DimensionsIn.IsSquare()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Image\\ImageOccupancyMap.h"
                          ,100,L""), bVar25)) {
    pcVar13 = (code *)swi(3);
    uVar26 = (*pcVar13)();
    return (bool)uVar26;
  }
  pFVar32->Dimensions = FVar12;
  (pFVar32->Tile).Start.field0_0x0 = (FVector2i_u_0)0x0;
  *(int *)&(pFVar32->Tile).End.field0_0x0 = FVar12.Width;
  *(int *)((longlong)&(pFVar32->Tile).End.field0_0x0 + 4) = FVar12.Height;
  (pFVar32->Tile).Width = FVar12.Width;
  (pFVar32->Tile).Height = FVar12.Height;
  (pFVar32->PixelSampler).Size = (int)ROUND(__real_3fc00000) >> 1;
  pFVar32 = (this->OccupancyMap).Ptr;
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId140,"FImageOccupancyMap::ClassifySamples_NoSpatial",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Image\\ImageOccupancyMap.h"
               ,0x8c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId140);
  }
  local_428 = dVar15;
  local_478._0_8_ = &___7__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  local_478._16_8_ = 0;
  local_448 = &
              ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  local_478._24_4_ = 3;
  local_440 = `UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::MakeDefaultSplitAxisFunc'
              ::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_430 = (undefined ***)0x0;
  local_478._32_8_ =
       Core::Private::Function::
       TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
       ::Call;
  local_420.CurBlock = 0;
  local_420.CurBlockUsed = 0;
  local_420.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_420.Blocks.ArrayNum = 0;
  local_420.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_420);
  local_408.CurBlock = 0;
  local_408.CurBlockUsed = 0;
  local_408.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_408.Blocks.ArrayNum = 0;
  local_408.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_408);
  local_3f0.CurBlock = 0;
  local_3f0.CurBlockUsed = 0;
  local_3f0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3f0.Blocks.ArrayNum = 0;
  local_3f0.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_3f0);
  local_3d8.CurBlock = 0;
  local_3d8.CurBlockUsed = 0;
  local_3d8.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3d8.Blocks.ArrayNum = 0;
  local_3d8.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_3d8);
  local_478._8_8_ = &local_6a8;
  local_3c0._0_4_ = -1;
  local_3c0._4_4_ = -1;
  local_478._16_8_ = 0;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
            ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_478,false);
  local_478._16_8_ = FDynamicMesh3::GetChangeStamp((FDynamicMesh3 *)local_478._8_8_);
  FImageOccupancyMap::
  ClassifySamplesFromUVSpaceMesh<UE::Geometry::FDynamicMesh3,_UE::Geometry::FMeshImageBakingCache::ValidateCache_::__l19::<lambda_1>_>
            (pFVar32,&local_6a8,(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_478,&local_6a8,
             (TArray<int,TSizedDefaultAllocator<32>_> *)0x0);
  TDynamicVector<int,512>::Empty(&local_3d8,0);
  if (local_3d8.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_3f0,0);
  if (local_3f0.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f0.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_408,0);
  if (local_408.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<int,512>::Empty(&local_420,0);
  if (local_420.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_420.Blocks.AllocatorInstance.Data);
  }
  if ((code *)local_478._32_8_ != (code *)0x0) {
    pppuVar33 = &local_448;
    if (local_430 != (undefined ***)0x0) {
      pppuVar33 = local_430;
    }
    (*(code *)(*pppuVar33)[2])();
  }
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FImageOccupancyMap::ComputeGutterTexelsFromGutterSamples(pFVar32);
  this->bOccupancyValid = true;
  FDynamicMesh3::~FDynamicMesh3(&local_6a8);
LAB_14c9254e8:
  if (this->bSamplesValid == false) {
    EVar40 = this->CorrespondenceStrategy;
    if ((EVar40 == Identity) && (this->DetailMesh != pFVar10)) {
      bVar25 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3890479091517750997>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshImageBakingCache.cpp"
                          ,299,"DetailMesh == Mesh");
      if (bVar25) {
        pcVar13 = (code *)swi(3);
        uVar26 = (*pcVar13)();
        return (bool)uVar26;
      }
      EVar40 = NearestPoint;
    }
    local_3b0 = 1;
    local_3b8 = &
                ___7__TMeshSurfaceUVSampler_UFCorrespondenceSample_FMeshImageBakingCache_Geometry_UE___Geometry_UE__6B_
    ;
    local_3a8 = (FDynamicMesh3 *)0x0;
    pTStack_3a0 = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0;
    local_398 = (code *)0x0;
    plStack_370 = (longlong *)0x0;
    FMeshUVSampleInfo::FMeshUVSampleInfo(&local_368);
    local_208 = dVar15;
    local_258._0_8_ = &___7__TMeshAABBTree3_UFDynamicMeshUVMesh_Geometry_UE___Geometry_UE__6B_;
    local_258._16_8_ = 0;
    local_220 = `UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::
                MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_268 = 0;
    uStack_260 = 0;
    local_258._24_4_ = 3;
    local_210 = 0;
    local_228 = &
                ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    local_258._32_8_ =
         Core::Private::Function::
         TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
         ::Call;
    local_200.CurBlock = 0;
    local_200.CurBlockUsed = 0;
    local_200.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_200.Blocks.ArrayNum = 0;
    local_200.Blocks.ArrayMax = 0;
    TDynamicVector<int,512>::AddAllocatedBlock(&local_200);
    local_1e8.CurBlock = 0;
    local_1e8.CurBlockUsed = 0;
    local_1e8.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.Blocks.ArrayNum = 0;
    local_1e8.Blocks.ArrayMax = 0;
    TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_1e8);
    local_1d0.CurBlock = 0;
    local_1d0.CurBlockUsed = 0;
    local_1d0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d0.Blocks.ArrayNum = 0;
    local_1d0.Blocks.ArrayMax = 0;
    TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_1d0);
    local_1b8.CurBlock = 0;
    local_1b8.CurBlockUsed = 0;
    local_1b8.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.Blocks.ArrayNum = 0;
    local_1b8.Blocks.ArrayMax = 0;
    TDynamicVector<int,512>::AddAllocatedBlock(&local_1b8);
    lStack_790 = local_810;
    local_1a0._0_4_ = -1;
    local_1a0._4_4_ = -1;
    local_258._8_8_ = (FDynamicMeshUVMesh *)0x0;
    local_7f8 = (code *)0x0;
    local_798 = pFVar10;
    local_788 = EVar40;
    pFStack_780 = this;
    plStack_7d0 = FMemory::Malloc(0x28,8);
    *plStack_7d0 = (longlong)
                   &Core::Private::Function::
                    TFunction_OwnedObject<`UE::Geometry::FMeshImageBakingCache::ValidateCache'::`29'::<lambda_2>,1,1>
                    ::_vftable_;
    plStack_7d0[1] = (longlong)local_798;
    plStack_7d0[2] = lStack_790;
    plStack_7d0[3] = CONCAT44(uStack_784,local_788);
    plStack_7d0[4] = (longlong)pFStack_780;
    if (plStack_7d0 + 1 != (longlong *)0x0) {
      local_7f8 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FMeshImageBakingCache::ValidateCache'::__l29::<lambda_2>,void,UE::Geometry::FMeshUVSampleInfo_const_&,UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample_&>
                  ::Call;
    }
    memset(&local_198,0,0x100);
    FMeshUVSampleInfo::FMeshUVSampleInfo(&local_198);
    plVar37 = plStack_370;
    uVar24 = uStack_37c;
    uVar23 = uStack_380;
    uVar22 = uStack_384;
    uVar21 = local_388;
    uVar20 = uStack_390;
    pcVar13 = local_398;
    local_3a8 = pFVar10;
    pTStack_3a0 = pTVar28;
    lVar39 = 2;
    pFVar31 = &local_368;
    pFVar34 = &local_198;
    do {
      uVar14 = *(undefined8 *)((longlong)&(pFVar34->MeshVertices).field0_0x0 + 4);
      dVar15 = (pFVar34->Triangle3D).V[0].field0_0x0._s_0.X;
      dVar16 = (pFVar34->Triangle3D).V[0].field0_0x0._s_0.Y;
      *(undefined8 *)pFVar31 = *(undefined8 *)pFVar34;
      *(undefined8 *)((longlong)&(pFVar31->MeshVertices).field0_0x0 + 4) = uVar14;
      dVar17 = (pFVar34->Triangle3D).V[0].field0_0x0._s_0.Z;
      dVar18 = (pFVar34->Triangle3D).V[1].field0_0x0._s_0.X;
      (pFVar31->Triangle3D).V[0].field0_0x0._s_0.X = dVar15;
      (pFVar31->Triangle3D).V[0].field0_0x0._s_0.Y = dVar16;
      dVar15 = (pFVar34->Triangle3D).V[1].field0_0x0._s_0.Y;
      dVar16 = (pFVar34->Triangle3D).V[1].field0_0x0._s_0.Z;
      (pFVar31->Triangle3D).V[0].field0_0x0._s_0.Z = dVar17;
      (pFVar31->Triangle3D).V[1].field0_0x0._s_0.X = dVar18;
      dVar17 = (pFVar34->Triangle3D).V[2].field0_0x0._s_0.X;
      dVar18 = (pFVar34->Triangle3D).V[2].field0_0x0._s_0.Y;
      (pFVar31->Triangle3D).V[1].field0_0x0._s_0.Y = dVar15;
      (pFVar31->Triangle3D).V[1].field0_0x0._s_0.Z = dVar16;
      dVar15 = (pFVar34->Triangle3D).V[2].field0_0x0._s_0.Z;
      uVar14 = *(undefined8 *)&(pFVar34->UVVertices).field0_0x0;
      (pFVar31->Triangle3D).V[2].field0_0x0._s_0.X = dVar17;
      (pFVar31->Triangle3D).V[2].field0_0x0._s_0.Y = dVar18;
      uVar19 = *(undefined8 *)((longlong)&(pFVar34->UVVertices).field0_0x0 + 8);
      dVar16 = (pFVar34->TriangleUV).V[0].field0_0x0._s_0.X;
      (pFVar31->Triangle3D).V[2].field0_0x0._s_0.Z = dVar15;
      *(undefined8 *)&(pFVar31->UVVertices).field0_0x0 = uVar14;
      dVar15 = (pFVar34->TriangleUV).V[0].field0_0x0._s_0.Y;
      dVar17 = (pFVar34->TriangleUV).V[1].field0_0x0._s_0.X;
      *(undefined8 *)((longlong)&(pFVar31->UVVertices).field0_0x0 + 8) = uVar19;
      (pFVar31->TriangleUV).V[0].field0_0x0._s_0.X = dVar16;
      (pFVar31->TriangleUV).V[0].field0_0x0._s_0.Y = dVar15;
      (pFVar31->TriangleUV).V[1].field0_0x0._s_0.X = dVar17;
      lVar39 = lVar39 + -1;
      pFVar31 = (FMeshUVSampleInfo *)((pFVar31->TriangleUV).V[1].field0_0x0.XY + 1);
      pFVar34 = (FMeshUVSampleInfo *)((pFVar34->TriangleUV).V[1].field0_0x0.XY + 1);
    } while (lVar39 != 0);
    local_398 = local_7f8;
    uStack_390 = uStack_7f0;
    local_378 = (undefined4)local_7d8;
    uStack_374 = local_7d8._4_4_;
    plStack_370 = plStack_7d0;
    local_388 = local_7e8;
    uStack_384 = uStack_7e4;
    uStack_380 = uStack_7e0;
    uStack_37c = uStack_7dc;
    local_7f8 = pcVar13;
    uStack_7f0 = uVar20;
    local_7e8 = uVar21;
    uStack_7e4 = uVar22;
    uStack_7e0 = uVar23;
    uStack_7dc = uVar24;
    plStack_7d0 = plVar37;
    local_3b0 = CONCAT11(local_3b0._1_1_,1);
    if (pcVar13 != (code *)0x0) {
      plVar35 = (longlong *)&local_7e8;
      if (plVar37 != (longlong *)0x0) {
        plVar35 = plVar37;
      }
      (**(code **)(*plVar35 + 0x10))();
    }
    lVar41 = (longlong)(this->Dimensions).Height;
    plVar1 = &(this->SampleMap).Buffer.ArrayNum;
    lVar39 = (longlong)(this->Dimensions).Width;
    (this->SampleMap).DimensionY = lVar41;
    uVar42 = lVar41 * lVar39;
    (this->SampleMap).DimensionX = lVar39;
    lVar39 = *plVar1;
    if (uVar42 - lVar39 == 0 || (longlong)uVar42 < lVar39) {
      if ((longlong)uVar42 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar42);
      }
      if ((longlong)uVar42 < lVar39) {
        lVar39 = lVar39 - uVar42;
        if (((((uint)(uVar42 >> 0x3f) ^ 1) & ((uint)((ulonglong)lVar39 >> 0x3f) ^ 1)) == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar13 = (code *)swi(3);
          uVar26 = (*pcVar13)();
          return (bool)uVar26;
        }
        if (lVar39 != 0) {
          pFVar36 = (this->SampleMap).Buffer.AllocatorInstance.Data + uVar42 * 0x100;
          lVar41 = ((this->SampleMap).Buffer.ArrayNum - lVar39) - uVar42;
          if (lVar41 != 0) {
            memmove(pFVar36,pFVar36 + lVar39 * 0x100,lVar41 * 0x100);
          }
          lVar39 = (this->SampleMap).Buffer.ArrayNum - lVar39;
          (this->SampleMap).Buffer.ArrayNum = lVar39;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (0x100,8,(ForAnyElementType *)&this->SampleMap,lVar39,
                     &(this->SampleMap).Buffer.ArrayMax);
        }
      }
    }
    else {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (0x100,8,uVar42 - lVar39,(ForAnyElementType *)&this->SampleMap,plVar1,
                 &(this->SampleMap).Buffer.ArrayMax);
    }
    local_7c0 = &local_3b8;
    local_7a8 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FMeshImageBakingCache::ValidateCache'::__l29::<lambda_3>,void,int>
                ::Call;
    local_7a0 = &local_7c8;
    local_7b8.DataPtr = (void **)0x0;
    local_7b8.ArrayNum = 0;
    local_7c8 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",(this->Dimensions).Height,1,
               (TFunctionRef<void___cdecl(int)> *)&local_7a8,local_828,None,&local_7b8);
    this->bSamplesValid = true;
    TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>::
    ~TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh>
              ((TMeshAABBTree3<UE::Geometry::FDynamicMeshUVMesh> *)local_258);
    if (local_398 != (code *)0x0) {
      plVar37 = (longlong *)&local_388;
      if (plStack_370 != (longlong *)0x0) {
        plVar37 = plStack_370;
      }
      (**(code **)(*plVar37 + 0x10))();
    }
  }
  if ((this->bOccupancyValid == false) || (this->bSamplesValid == false)) {
    bVar25 = false;
  }
  else {
    bVar25 = true;
  }
  return bVar25;
}

