// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 5

// AreOnSameSurfaceEdge @ 14c714800

bool __cdecl
FIntrinsicMeshImplUtils::AreOnSameSurfaceEdge
          (FSurfacePoint *param_1,FSurfacePoint *param_2,FDynamicMesh3 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if ((param_1->PositionType == Triangle) || (param_2->PositionType == Triangle)) {
    return false;
  }
  if (param_1->PositionType == Vertex) {
    if (param_2->PositionType == Vertex) {
      iVar2 = UE::Geometry::FDynamicMesh3::FindEdge
                        (param_3,(param_1->Position).EdgePosition.EdgeID,
                         (param_2->Position).EdgePosition.EdgeID);
      return iVar2 != -1;
    }
    uVar1 = (param_2->Position).EdgePosition.EdgeID;
    iVar2 = (param_1->Position).EdgePosition.EdgeID;
    uVar4 = (ulonglong)(uVar1 & 0x1ff);
    lVar5 = *(longlong *)
             ((param_3->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8);
    if (*(int *)(lVar5 + uVar4 * 0x10) == iVar2) {
      return true;
    }
  }
  else {
    iVar2 = (param_2->Position).EdgePosition.EdgeID;
    uVar1 = (param_1->Position).EdgePosition.EdgeID;
    uVar4 = (ulonglong)(uVar1 & 0x1ff);
    lVar5 = *(longlong *)
             ((param_3->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8);
    if (*(int *)(lVar5 + uVar4 * 0x10) == iVar2) {
      return true;
    }
  }
  iVar3 = -1;
  if (*(int *)(lVar5 + 4 + uVar4 * 0x10) == iVar2) {
    iVar3 = 1;
  }
  return iVar3 != -1;
}

// AsBarycenteric @ 14c714ab0

TVector<double> * __cdecl
FIntrinsicMeshImplUtils::AsBarycenteric
          (TVector<double> *__return_storage_ptr__,FSurfacePoint *param_1,int param_2,
          FDynamicMesh3 *param_3)

{
  double dVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  int local_18;
  int iStack_14;
  
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  dVar7 = __real_3ff0000000000000;
  if (param_1->PositionType == Edge) {
    uVar3 = (param_1->Position).EdgePosition.EdgeID;
    dVar1 = (param_1->Position).EdgePosition.Alpha;
    uVar5 = *(undefined8 *)
             (*(longlong *)
               ((param_3->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8) +
             (ulonglong)(uVar3 & 0x1ff) * 0x10);
    lVar6 = *(longlong *)
             ((param_3->Triangles).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)param_2 >> 9) * 8);
    uVar2 = *(undefined8 *)(lVar6 + (ulonglong)(param_2 & 0x1ff) * 0xc);
    iVar4 = *(int *)(lVar6 + 8 + (ulonglong)(param_2 & 0x1ff) * 0xc);
    iVar8 = (int)uVar5;
    local_18 = (int)uVar2;
    iVar9 = (int)((ulonglong)uVar5 >> 0x20);
    if (local_18 == iVar8) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1;
    }
    else if (local_18 == iVar9) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = __real_3ff0000000000000 - dVar1;
    }
    iStack_14 = (int)((ulonglong)uVar2 >> 0x20);
    if (iStack_14 == iVar8) {
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    }
    else if (iStack_14 == iVar9) {
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar7 - dVar1;
    }
    if (iVar4 == iVar8) {
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
      return __return_storage_ptr__;
    }
    if (iVar4 == iVar9) {
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar7 - dVar1;
      return __return_storage_ptr__;
    }
  }
  else {
    if (param_1->PositionType == Triangle) {
      dVar7 = *(double *)((longlong)&param_1->Position + 0x10);
      (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->Position).EdgePosition.Alpha;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar7;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = *(double *)((longlong)&param_1->Position + 0x18)
      ;
      return __return_storage_ptr__;
    }
    iVar4 = (param_1->Position).EdgePosition.EdgeID;
    lVar6 = *(longlong *)
             ((param_3->Triangles).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)param_2 >> 9) * 8);
    uVar2 = *(undefined8 *)(lVar6 + (ulonglong)(param_2 & 0x1ff) * 0xc);
    iVar8 = *(int *)(lVar6 + 8 + (ulonglong)(param_2 & 0x1ff) * 0xc);
    local_18 = (int)uVar2;
    if (local_18 == iVar4) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
    }
    iStack_14 = (int)((ulonglong)uVar2 >> 0x20);
    if (iStack_14 == iVar4) {
      (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
    }
    if (iVar8 == iVar4) {
      (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
    }
  }
  return __return_storage_ptr__;
}

// ComputeMinNormSolution @ 14c722c70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
FIntrinsicMeshImplUtils::ComputeMinNormSolution
          (TArray<double,TSizedDefaultAllocator<32>_> *param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2,
          TArray<double,TSizedDefaultAllocator<32>_> *param_3,TVector<double> *param_4,
          TArray<double,TSizedDefaultAllocator<32>_> *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  uint uVar10;
  code *pcVar11;
  ForAnyElementType FVar12;
  ForAnyElementType FVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  TVector<double>_u_0 *pTVar27;
  uint uVar28;
  double dVar29;
  ulonglong local_res8;
  ForAnyElementType local_220;
  int local_218 [4];
  ulonglong local_208;
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 local_1e0;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1a8;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  TVector<double>_u_0 local_158;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  TVector<double>_u_0 local_108;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  
  uVar10 = param_1->ArrayNum;
  uVar23 = (ulonglong)(int)uVar10;
  local_218[2] = uVar10;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(param_5,uVar10,Default);
  if (uVar10 == 3) {
    if ((param_3->ArrayNum < 3) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar11 = (code *)swi(3);
      uVar15 = (*pcVar11)();
      return (bool)uVar15;
    }
    dVar1 = *(double *)((param_3->AllocatorInstance).Data + 0x10);
    if ((param_3->ArrayNum < 2) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar11 = (code *)swi(3);
      uVar15 = (*pcVar11)();
      return (bool)uVar15;
    }
    dVar2 = *(double *)((param_3->AllocatorInstance).Data + 8);
    if ((param_3->ArrayNum < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar11 = (code *)swi(3);
      uVar15 = (*pcVar11)();
      return (bool)uVar15;
    }
    dVar3 = *(double *)(param_3->AllocatorInstance).Data;
    if ((param_2->ArrayNum < 3) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar11 = (code *)swi(3);
      uVar15 = (*pcVar11)();
      return (bool)uVar15;
    }
    dVar4 = *(double *)((param_2->AllocatorInstance).Data + 0x10);
    if ((param_2->ArrayNum < 2) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar11 = (code *)swi(3);
      uVar15 = (*pcVar11)();
      return (bool)uVar15;
    }
    dVar5 = *(double *)((param_2->AllocatorInstance).Data + 8);
    if ((param_2->ArrayNum < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar11 = (code *)swi(3);
      uVar15 = (*pcVar11)();
      return (bool)uVar15;
    }
    dVar6 = *(double *)(param_2->AllocatorInstance).Data;
    if ((param_1->ArrayNum < 3) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar11 = (code *)swi(3);
      uVar15 = (*pcVar11)();
      return (bool)uVar15;
    }
    dVar7 = *(double *)((param_1->AllocatorInstance).Data + 0x10);
    if ((param_1->ArrayNum < 2) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar11 = (code *)swi(3);
      uVar15 = (*pcVar11)();
      return (bool)uVar15;
    }
    dVar8 = *(double *)((param_1->AllocatorInstance).Data + 8);
    if ((param_1->ArrayNum < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar11 = (code *)swi(3);
      uVar15 = (*pcVar11)();
      return (bool)uVar15;
    }
    local_1a8._s_0.X = (double)*(undefined8 *)(param_1->AllocatorInstance).Data;
    dVar29 = (dVar2 * dVar7 - dVar1 * dVar8) * dVar6 +
             (dVar1 * dVar5 - dVar2 * dVar4) * local_1a8._s_0.X +
             (dVar4 * dVar8 - dVar5 * dVar7) * dVar3;
    if ((double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar29,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
        __real_3cb0000000000000) {
      return false;
    }
    local_1a8._s_0.Y = dVar8;
    local_1a8._s_0.Z = dVar7;
    local_190 = dVar6;
    local_188 = dVar5;
    local_180 = dVar4;
    local_178 = dVar3;
    local_170 = dVar2;
    local_168 = dVar1;
    UE::Geometry::TMatrix3<double>::Inverse
              ((TMatrix3<double> *)&local_1a8._s_0,(TMatrix3<double> *)&local_158._s_0);
    dVar1 = (param_4->field0_0x0)._s_0.X;
    dVar2 = (param_4->field0_0x0)._s_0.Y;
    dVar3 = (param_4->field0_0x0)._s_0.Z;
    if ((param_5->ArrayNum < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar11 = (code *)swi(3);
      uVar15 = (*pcVar11)();
      return (bool)uVar15;
    }
    *(double *)(param_5->AllocatorInstance).Data =
         local_158._s_0.Y * dVar2 + local_158._s_0.X * dVar1 + local_158._s_0.Z * dVar3;
    if ((param_5->ArrayNum < 2) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar11 = (code *)swi(3);
      uVar15 = (*pcVar11)();
      return (bool)uVar15;
    }
    *(double *)((param_5->AllocatorInstance).Data + 8) =
         local_138 * dVar2 + local_140 * dVar1 + local_130 * dVar3;
    if ((param_5->ArrayNum < 3) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar11 = (code *)swi(3);
      uVar15 = (*pcVar11)();
      return (bool)uVar15;
    }
    *(double *)((param_5->AllocatorInstance).Data + 0x10) =
         local_120 * dVar2 + local_128 * dVar1 + local_118 * dVar3;
  }
  else {
    uVar20 = 0;
    local_220.Data = (FScriptContainerElement *)0x0;
    local_218[0] = 0;
    local_218[1] = 0;
    iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,uVar10 * 3,&local_220,local_218,local_218 + 1);
    memset(local_220.Data + (longlong)iVar16 * 8,0,(longlong)(int)(uVar10 * 3) << 3);
    uVar28 = 0;
    uVar17 = 0;
    uVar18 = uVar20;
    uVar26 = uVar20;
    local_208 = uVar23;
    if (0 < (int)uVar10) {
      do {
        uVar22 = (uint)uVar18;
        uVar21 = ~uVar22 >> 0x1f;
        uVar25 = uVar28;
        if ((int)uVar22 < param_1->ArrayNum) {
          uVar25 = uVar21;
        }
        if ((uVar25 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          uVar15 = (*pcVar11)();
          return (bool)uVar15;
        }
        uVar9 = *(undefined8 *)((param_1->AllocatorInstance).Data + uVar26 * 8);
        uVar25 = uVar28;
        if ((int)uVar22 < local_218[0]) {
          uVar25 = uVar21;
        }
        if ((uVar25 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          uVar15 = (*pcVar11)();
          return (bool)uVar15;
        }
        *(undefined8 *)(local_220.Data + uVar26 * 8) = uVar9;
        uVar25 = uVar28;
        if ((int)uVar22 < param_2->ArrayNum) {
          uVar25 = uVar21;
        }
        if ((uVar25 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          uVar15 = (*pcVar11)();
          return (bool)uVar15;
        }
        uVar24 = uVar10 + uVar22;
        uVar9 = *(undefined8 *)((param_2->AllocatorInstance).Data + uVar26 * 8);
        uVar25 = uVar17;
        if ((int)uVar24 < local_218[0]) {
          uVar25 = ~uVar24 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          uVar15 = (*pcVar11)();
          return (bool)uVar15;
        }
        *(undefined8 *)(local_220.Data + (longlong)(int)uVar24 * 8) = uVar9;
        uVar25 = uVar17;
        if ((int)uVar22 < param_3->ArrayNum) {
          uVar25 = uVar21;
        }
        if ((uVar25 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          uVar15 = (*pcVar11)();
          return (bool)uVar15;
        }
        uVar9 = *(undefined8 *)((param_3->AllocatorInstance).Data + uVar26 * 8);
        uVar21 = uVar22 + uVar10 * 2;
        uVar25 = uVar17;
        if ((int)uVar21 < local_218[0]) {
          uVar25 = ~uVar21 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          uVar15 = (*pcVar11)();
          return (bool)uVar15;
        }
        uVar26 = uVar26 + 1;
        *(undefined8 *)(local_220.Data + (longlong)(int)uVar21 * 8) = uVar9;
        uVar18 = (ulonglong)(uVar22 + 1);
      } while ((longlong)uVar26 < (longlong)local_208);
      uVar23 = (ulonglong)(uint)local_218[2];
    }
    local_1f8._s_0.Z = 0.0;
    local_1c8._s_0.Z = 0.0;
    local_1f8._s_0.X = 0.0;
    local_1f8._s_0.Y = 0.0;
    local_1e0._s_0.X = 0.0;
    local_1e0._s_0.Y = 0.0;
    local_res8 = 0;
    local_1e0._s_0.Z = 0.0;
    local_1c8._s_0.X = 0.0;
    local_1c8._s_0.Y = 0.0;
    uVar18 = uVar20;
    do {
      uVar26 = uVar20;
      if ((int)uVar18 == 0) {
        pTVar27 = &local_1f8;
      }
      else {
        pTVar27 = &local_1e0;
        if ((int)uVar18 != 1) {
          pTVar27 = &local_1c8;
        }
      }
      do {
        uVar28 = 0;
        uVar19 = uVar20;
        if (0 < (int)uVar23) {
          do {
            iVar16 = (int)uVar19;
            uVar22 = uVar10 * (int)uVar18 + iVar16;
            uVar25 = uVar17;
            if ((int)uVar22 < local_218[0]) {
              uVar25 = ~uVar22 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar11 = (code *)swi(3);
              uVar15 = (*pcVar11)();
              return (bool)uVar15;
            }
            FVar12.Data = local_220.Data;
            uVar21 = uVar10 * (int)uVar26 + iVar16;
            uVar25 = uVar28;
            if ((int)uVar21 < local_218[0]) {
              uVar25 = ~uVar21 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar11 = (code *)swi(3);
              uVar15 = (*pcVar11)();
              return (bool)uVar15;
            }
            uVar23 = (ulonglong)(uint)local_218[2];
            (pTVar27->_s_0).X =
                 *(double *)(local_220.Data + (longlong)(int)uVar21 * 8) *
                 *(double *)(FVar12.Data + (longlong)(int)uVar22 * 8) + (pTVar27->_s_0).X;
            uVar18 = local_res8;
            uVar19 = (ulonglong)(iVar16 + 1U);
          } while ((int)(iVar16 + 1U) < local_218[2]);
        }
        uVar25 = (int)uVar26 + 1;
        uVar26 = (ulonglong)uVar25;
        pTVar27 = (TVector<double>_u_0 *)(pTVar27->XYZ + 1);
      } while ((int)uVar25 < 3);
      uVar25 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar25;
      local_res8 = (ulonglong)uVar25;
    } while ((int)uVar25 < 3);
    dVar1 = (local_1c8._s_0.Z * local_1e0._s_0.Y - local_1c8._s_0.Y * local_1e0._s_0.Z) *
            local_1f8._s_0.X +
            (local_1c8._s_0.Y * local_1f8._s_0.Z - local_1c8._s_0.Z * local_1f8._s_0.Y) *
            local_1e0._s_0.X +
            (local_1e0._s_0.Z * local_1f8._s_0.Y - local_1e0._s_0.Y * local_1f8._s_0.Z) *
            local_1c8._s_0.X;
    if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
        __real_3cb0000000000000) {
      if (local_220.Data == (FScriptContainerElement *)0x0) {
        return false;
      }
      FMemory::Free(local_220.Data);
      return false;
    }
    UE::Geometry::TMatrix3<double>::Inverse
              ((TMatrix3<double> *)&local_1f8._s_0,(TMatrix3<double> *)&local_108._s_0);
    dVar1 = (param_4->field0_0x0)._s_0.X;
    dVar2 = (param_4->field0_0x0)._s_0.Y;
    dVar3 = (param_4->field0_0x0)._s_0.Z;
    uVar23 = uVar20;
    if (0 < (longlong)local_208) {
      do {
        uVar22 = (uint)uVar20;
        uVar21 = uVar10 + uVar22;
        uVar25 = uVar28;
        if ((int)uVar21 < local_218[0]) {
          uVar25 = ~uVar21 >> 0x1f;
        }
        if (uVar25 == 0) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar11 = (code *)swi(3);
            uVar15 = (*pcVar11)();
            return (bool)uVar15;
          }
        }
        FVar12.Data = local_220.Data;
        uVar24 = uVar22 + uVar10 * 2;
        uVar25 = uVar17;
        if ((int)uVar24 < local_218[0]) {
          uVar25 = ~uVar24 >> 0x1f;
        }
        iVar16 = local_218[0];
        if (uVar25 == 0) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar11 = (code *)swi(3);
            uVar15 = (*pcVar11)();
            return (bool)uVar15;
          }
          iVar16 = local_218[0];
        }
        FVar13.Data = local_220.Data;
        uVar25 = uVar17;
        if ((int)uVar22 < iVar16) {
          uVar25 = ~uVar22 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          uVar15 = (*pcVar11)();
          return (bool)uVar15;
        }
        dVar4 = *(double *)(FVar12.Data + (longlong)(int)uVar21 * 8);
        dVar5 = *(double *)(local_220.Data + uVar23 * 8);
        dVar6 = *(double *)(FVar13.Data + (longlong)(int)uVar24 * 8);
        uVar25 = uVar28;
        if ((int)uVar22 < param_5->ArrayNum) {
          uVar25 = ~uVar22 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          uVar15 = (*pcVar11)();
          return (bool)uVar15;
        }
        uVar20 = (ulonglong)(uVar22 + 1);
        *(double *)((param_5->AllocatorInstance).Data + uVar23 * 8) =
             (local_e8 * dVar2 + local_f0 * dVar1 + local_e0 * dVar3) * dVar4 +
             (local_108._s_0.Y * dVar2 + local_108._s_0.X * dVar1 + local_108._s_0.Z * dVar3) *
             dVar5 + (local_d0 * dVar2 + local_d8 * dVar1 + local_c8 * dVar3) * dVar6;
        uVar23 = uVar23 + 1;
      } while ((longlong)uVar23 < (longlong)local_208);
    }
    if (local_220.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data);
    }
  }
  return true;
}

// GetAdjacentTriangles @ 14c738dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
FIntrinsicMeshImplUtils::GetAdjacentTriangles
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FSurfacePoint *param_1,
          FDynamicMesh3 *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong *plVar6;
  undefined1 auStack_238 [32];
  int *local_218;
  FScriptContainerElement *local_210;
  longlong local_208;
  longlong local_200;
  undefined8 local_1f8;
  ForAnyElementType local_1e8;
  int local_1e0;
  int iStack_1dc;
  int local_1d8 [2];
  undefined8 local_1d0;
  undefined1 local_1c8 [48];
  ValueIterator local_198;
  ValueIterator local_170;
  undefined1 local_148 [144];
  undefined1 local_b8 [144];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_238;
  uVar1 = (param_1->Position).EdgePosition.EdgeID;
  local_1e8.Data = (FScriptContainerElement *)0x0;
  local_1e0 = 0;
  iStack_1dc = 0;
  if (param_1->PositionType == Edge) {
    local_1d0 = *(undefined8 *)
                 (*(longlong *)
                   ((param_2->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8) +
                  8 + (ulonglong)(uVar1 & 0x1ff) * 0x10);
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_1e8,&iStack_1dc);
    local_1e0 = iVar4 + 1;
    *(undefined4 *)(local_1e8.Data + (longlong)iVar4 * 4) = (undefined4)local_1d0;
    if (local_1d0._4_4_ != -1) {
      if ((local_1e8.Data <= (FScriptContainerElement *)((longlong)&local_1d0 + 4U)) &&
         ((FScriptContainerElement *)((longlong)&local_1d0 + 4U) <
          local_1e8.Data + (longlong)iStack_1dc * 4)) {
        local_200 = (longlong)local_1e0;
        local_1f8 = 4;
        local_218 = (int *)((longlong)&local_1d0 + 4);
        local_210 = local_1e8.Data;
        local_208 = (longlong)iStack_1dc;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar5;
        }
      }
      if (local_1e0 == iStack_1dc) {
        local_1e0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_1e8,&iStack_1dc);
      }
      *(int *)(local_1e8.Data + (longlong)local_1e0 * 4) = local_1d0._4_4_;
      local_1e0 = local_1e0 + 1;
    }
  }
  else if (param_1->PositionType == Triangle) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_1e8,&iStack_1dc);
    local_1e0 = iVar4 + 1;
    *(uint *)(local_1e8.Data + (longlong)iVar4 * 4) = uVar1;
  }
  else {
    UE::Geometry::FDynamicMesh3::VtxTrianglesItr
              (param_2,(TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)
                       local_1c8,uVar1);
    UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_148,
               &local_198,&local_170,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1c8);
    UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_b8,
               &local_170,&local_170,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1c8);
    while ((((local_148._0_8_ != local_b8._0_8_ || (local_148._8_4_ != local_b8._8_4_)) ||
            (local_148._24_4_ != local_b8._24_4_)) || (local_148._28_4_ != local_b8._28_4_))) {
      local_1d8[0] = local_148._88_4_;
      if ((local_1e8.Data <= (FScriptContainerElement *)local_1d8) &&
         ((FScriptContainerElement *)local_1d8 < local_1e8.Data + (longlong)iStack_1dc * 4)) {
        local_200 = (longlong)local_1e0;
        local_1f8 = 4;
        local_218 = local_1d8;
        local_210 = local_1e8.Data;
        local_208 = (longlong)iStack_1dc;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar5;
        }
      }
      if (local_1e0 == iStack_1dc) {
        local_1e0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_1e8,&iStack_1dc);
      }
      *(int *)(local_1e8.Data + (longlong)local_1e0 * 4) = local_1d8[0];
      local_1e0 = local_1e0 + 1;
      UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_148);
    }
    if (local_b8._96_8_ != 0) {
      plVar6 = (longlong *)(local_b8 + 0x70);
      if ((longlong *)local_b8._136_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_b8._136_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (local_148._96_8_ != 0) {
      plVar6 = (longlong *)(local_148 + 0x70);
      if ((longlong *)local_148._136_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_148._136_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (local_1c8._0_8_ != 0) {
      plVar6 = (longlong *)(local_1c8 + 0x10);
      if ((longlong *)local_1c8._40_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_1c8._40_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_1e8.Data;
  __return_storage_ptr__->ArrayNum = local_1e0;
  __return_storage_ptr__->ArrayMax = iStack_1dc;
  return __return_storage_ptr__;
}

// IsOnSurfaceTriangle @ 14c751090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FIntrinsicMeshImplUtils::IsOnSurfaceTriangle
          (FSurfacePoint *param_1,int param_2,FDynamicMesh3 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [48];
  ValueIterator local_188;
  ValueIterator local_160;
  undefined1 local_138 [144];
  undefined1 local_a8 [144];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  bVar5 = false;
  if (((param_2 < 0) ||
      ((int)((param_3->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (param_3->TriangleRefCounts).RefCounts.CurBlockUsed) <= param_2)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((param_3->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance
                                     .Data + (ulonglong)((uint)param_2 >> 9) * 8) +
                                  (ulonglong)(param_2 & 0x1ff) * 2) - 1U))) {
    bVar5 = false;
  }
  else {
    uVar1 = (param_1->Position).EdgePosition.EdgeID;
    if (param_1->PositionType == Triangle) {
      bVar5 = uVar1 == param_2;
    }
    else if (param_1->PositionType == Edge) {
      uVar2 = *(undefined8 *)
               (*(longlong *)
                 ((param_3->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8) + 8
               + (ulonglong)(uVar1 & 0x1ff) * 0x10);
      if ((int)uVar2 == param_2) {
        bVar5 = true;
      }
      else {
        iVar3 = -1;
        if ((int)((ulonglong)uVar2 >> 0x20) == param_2) {
          iVar3 = 1;
        }
        bVar5 = iVar3 != -1;
      }
    }
    else {
      UE::Geometry::FDynamicMesh3::VtxTrianglesItr
                (param_3,(TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)
                         local_1b8,uVar1);
      UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_138,
                 &local_188,&local_160,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1b8);
      UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_a8,
                 &local_160,&local_160,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1b8);
      while( true ) {
        if (((local_138._0_8_ == local_a8._0_8_) && (local_138._8_4_ == local_a8._8_4_)) &&
           ((local_138._24_4_ == local_a8._24_4_ && (local_138._28_4_ == local_a8._28_4_))))
        goto LAB_14c751205;
        if (local_138._88_4_ == param_2) break;
        UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_138);
      }
      bVar5 = true;
LAB_14c751205:
      if (local_a8._96_8_ != 0) {
        plVar4 = (longlong *)(local_a8 + 0x70);
        if ((longlong *)local_a8._136_8_ != (longlong *)0x0) {
          plVar4 = (longlong *)local_a8._136_8_;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      if (local_138._96_8_ != 0) {
        plVar4 = (longlong *)(local_138 + 0x70);
        if ((longlong *)local_138._136_8_ != (longlong *)0x0) {
          plVar4 = (longlong *)local_138._136_8_;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      if (local_1b8._0_8_ != 0) {
        plVar4 = (longlong *)(local_1b8 + 0x10);
        if ((longlong *)local_1b8._40_8_ != (longlong *)0x0) {
          plVar4 = (longlong *)local_1b8._40_8_;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
    }
  }
  return bVar5;
}

