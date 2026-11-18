// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 3

// BlendColors_Mix<float> @ 14ccad140

TVector4<float> * __cdecl
UELocal::BlendColors_Mix<float>
          (TVector4<float> *__return_storage_ptr__,TVector4<float> *param_1,TVector4<float> *param_2
          ,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = __real_3f800000;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  fVar2 = __real_358637bd;
  fVar5 = param_3 * (param_2->field0_0x0)._s_0.W;
  fVar7 = fVar1 - fVar5;
  fVar6 = fVar7 * (param_1->field0_0x0)._s_0.W + fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.W = fVar6;
  fVar4 = (param_1->field0_0x0)._s_0.X * (param_1->field0_0x0)._s_0.W * fVar7 +
          fVar5 * (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar4;
  if (fVar2 < fVar6) {
    fVar4 = fVar4 / fVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.X = fVar4;
  }
  fVar3 = (param_1->field0_0x0)._s_0.Y * (param_1->field0_0x0)._s_0.W * fVar7 +
          fVar5 * (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3;
  if (fVar2 < fVar6) {
    fVar3 = fVar3 / fVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3;
  }
  fVar5 = (param_1->field0_0x0)._s_0.Z * (param_1->field0_0x0)._s_0.W * fVar7 +
          fVar5 * (param_2->field0_0x0)._s_0.Z;
  if (fVar2 < fVar6) {
    fVar5 = fVar5 / fVar6;
  }
  if (0.0 <= fVar4) {
    if (fVar1 <= fVar4) {
      fVar4 = fVar1;
    }
  }
  else {
    fVar4 = 0.0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar4;
  if (0.0 <= fVar3) {
    if (fVar1 <= fVar3) {
      fVar3 = fVar1;
    }
  }
  else {
    fVar3 = 0.0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar3;
  if (0.0 <= fVar5) {
    if (fVar1 <= fVar5) {
      fVar5 = fVar1;
    }
  }
  else {
    fVar5 = 0.0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar5;
  if (fVar6 < 0.0) {
    (__return_storage_ptr__->field0_0x0)._s_0.W = 0.0;
    return __return_storage_ptr__;
  }
  if (fVar1 <= fVar6) {
    fVar6 = fVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.W = fVar6;
  return __return_storage_ptr__;
}

// CopyVertexColorsToLOD @ 14ccf2a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UELocal::CopyVertexColorsToLOD
          (FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *param_2,
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_3,FDynamicMesh3 *param_4,
          TVector4<float> *param_5)

{
  undefined4 *puVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  FDynamicMeshAttributeSet *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  FDynamicMeshAttributeSet *pFVar17;
  uint uVar18;
  longlong *plVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  FDynamicMeshAttributeSet *pFVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  uint uVar28;
  TDynamicMeshOverlay<float,4> *pTVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStackY_268 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_238;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> local_228;
  TDynamicMeshOverlay<float,4> *local_218;
  undefined8 local_210;
  FDynamicMesh3 *local_200;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *local_1f8;
  FIndex3i_u_0 local_1f0;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  double local_1c0;
  undefined1 local_1b8 [16];
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 TStack_190;
  TVector<double>_u_0 local_178;
  undefined8 local_158 [2];
  longlong local_148;
  longlong local_138 [3];
  longlong *local_120;
  undefined1 local_118;
  TVector<double>_u_0 local_108;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_210 = param_3;
  local_200 = param_1;
  local_1f8 = param_2;
  if ((param_4->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    UE::Geometry::FDynamicMesh3::EnableAttributes(param_4);
  }
  pFVar5 = (param_4->AttributeSet).Ptr;
  pFVar24 = (FDynamicMeshAttributeSet *)0x0;
  pFVar17 = pFVar24;
  if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar17 = pFVar5;
  }
  if ((pFVar17->ColorLayer).Ptr ==
      (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
    UE::Geometry::FDynamicMeshAttributeSet::EnablePrimaryColors(pFVar5);
  }
  pFVar5 = (param_4->AttributeSet).Ptr;
  pFVar17 = pFVar24;
  if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar17 = pFVar5;
  }
  pTVar29 = (TDynamicMeshOverlay<float,4> *)(pFVar17->ColorLayer).Ptr;
  local_218 = pTVar29;
  UE::Geometry::TDynamicMeshOverlay<float,4>::ClearElements(pTVar29);
  local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.ArrayNum = 0;
  local_228.ArrayMax = 0;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_228,
             (param_4->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_4->VertexRefCounts).RefCounts.CurBlockUsed,Default);
  uVar9 = __real_7fefffffffffffff;
  uVar30 = (param_4->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_4->VertexRefCounts).RefCounts.CurBlockUsed;
  if ((uVar30 == 0) ||
     (pFVar6 = (param_4->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     pFVar24 = (FDynamicMeshAttributeSet *)0x0, (ushort)(**(short **)pFVar6 - 1U) < 0xfffe)) {
LAB_14ccf2bb6:
    uVar23 = (uint)pFVar24;
  }
  else {
    pFVar24 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar23 = 1;
    if (1 < (int)uVar30) {
      do {
        uVar27 = (ulonglong)((uint)pFVar24 & 0x1ff);
        lVar25 = *(longlong *)(pFVar6 + ((ulonglong)pFVar24 >> 9) * 8);
        if ((*(short *)(lVar25 + uVar27 * 2) != 0) && (*(short *)(lVar25 + uVar27 * 2) != -1))
        break;
        uVar23 = (uint)pFVar24 + 1;
        pFVar24 = (FDynamicMeshAttributeSet *)(ulonglong)uVar23;
      } while ((int)uVar23 < (int)uVar30);
      goto LAB_14ccf2bb6;
    }
  }
joined_r0x00014ccf2bb9:
  if (uVar23 != uVar30) {
    while( true ) {
      uVar22 = (uint)pFVar24;
      local_158[0] = uVar9;
      local_148 = 0;
      local_120 = (longlong *)0x0;
      local_118 = 0;
      lVar25 = *(longlong *)
                ((param_4->Vertices).Blocks.AllocatorInstance.Data + ((ulonglong)pFVar24 >> 9) * 8);
      puVar1 = (undefined4 *)(lVar25 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
      local_1d0 = *puVar1;
      uStack_1cc = puVar1[1];
      uStack_1c8 = puVar1[2];
      uStack_1c4 = puVar1[3];
      local_1c0 = *(double *)(lVar25 + 0x10 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
      uVar23 = (**(code **)(param_3->_padding_ + 0x20))(param_3,&local_1d0,local_1b8,local_158);
      if (local_148 != 0) {
        plVar19 = local_138;
        if (local_120 != (longlong *)0x0) {
          plVar19 = local_120;
        }
        (**(code **)(*plVar19 + 0x10))();
      }
      dVar13 = local_1c0;
      uVar21 = (ulonglong)(uVar23 * 3 & 0x1ff);
      uVar27 = (ulonglong)(uVar23 * 3 >> 9);
      if (*(int *)(*(longlong *)(*(longlong *)&local_1f8->field_0x78 + uVar27 * 8) + uVar21 * 4) < 0
         ) {
        uVar9 = *(undefined8 *)&param_5->field0_0x0;
        uVar10 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
        uVar30 = 0;
        if ((int)uVar22 < local_228.ArrayNum) {
          uVar30 = ~uVar22 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(undefined8 *)(local_228.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10) = uVar9;
        *(undefined8 *)(local_228.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10 + 8) =
             uVar10;
        pTVar29 = local_218;
        goto LAB_14ccf3087;
      }
      dVar11 = (double)CONCAT44(uStack_1cc,local_1d0);
      dVar12 = (double)CONCAT44(uStack_1c4,uStack_1c8);
      if (((((int)uVar23 < 0) ||
           ((int)((local_200->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (local_200->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar23)) ||
          (0xfffd < (ushort)(*(short *)(*(longlong *)
                                         ((local_200->TriangleRefCounts).RefCounts.Blocks.
                                          AllocatorInstance.Data + (ulonglong)(uVar23 >> 9) * 8) +
                                       (ulonglong)(uVar23 & 0x1ff) * 2) - 1U))) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mesh.IsTriangle(TriIdx)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                              ,0x1e,L""), bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                (local_200,uVar23,(TVector<double> *)&local_1a8._s_0,
                 (TVector<double> *)&TStack_190._s_0,(TVector<double> *)&local_178._s_0);
      local_f0 = local_1a8._s_0.X;
      dStack_e8 = local_1a8._s_0.Y;
      local_d0 = TStack_190._s_0.Y;
      dStack_c8 = TStack_190._s_0.Z;
      local_e0 = local_1a8._s_0.Z;
      dStack_d8 = TStack_190._s_0.X;
      local_b0 = local_178._s_0.Z;
      local_108._s_0.Z = dVar13;
      local_c0 = local_178._s_0.X;
      dStack_b8 = local_178._s_0.Y;
      local_108._s_0.X = dVar11;
      local_108._s_0.Y = dVar12;
      UE::Geometry::TDistPoint3Triangle3<double>::ComputeResult
                ((TDistPoint3Triangle3<double> *)&local_108._s_0);
      uVar16 = uVar23 * 3 + 1;
      lVar25 = *(longlong *)&local_1f8->field_0x78;
      lVar7 = *(longlong *)&local_1f8->field_0x48;
      fVar33 = (float)local_a0;
      uVar3 = *(uint *)(*(longlong *)(lVar25 + uVar27 * 8) + uVar21 * 4);
      uVar26 = uVar3 * 4;
      fVar31 = (float)local_a8;
      uVar16 = *(uint *)(*(longlong *)(lVar25 + (ulonglong)(uVar16 >> 9) * 8) +
                        (ulonglong)(uVar16 & 0x1ff) * 4);
      uVar23 = uVar23 * 3 + 2;
      uVar28 = uVar16 * 4;
      fVar32 = (float)local_98;
      uVar23 = *(uint *)(*(longlong *)(lVar25 + (ulonglong)(uVar23 >> 9) * 8) +
                        (ulonglong)(uVar23 & 0x1ff) * 4);
      uVar18 = uVar23 * 4;
      local_1e0 = fVar33 * *(float *)(*(longlong *)
                                       (lVar7 + (ulonglong)((uVar16 & 0x3fffffff) >> 7) * 8) +
                                     (ulonglong)(uVar28 & 0x1ff) * 4) +
                  fVar31 * *(float *)(*(longlong *)
                                       (lVar7 + (ulonglong)((uVar3 & 0x3fffffff) >> 7) * 8) +
                                     (ulonglong)(uVar26 & 0x1ff) * 4) +
                  fVar32 * *(float *)(*(longlong *)
                                       (lVar7 + (ulonglong)((uVar23 & 0x3fffffff) >> 7) * 8) +
                                     (ulonglong)(uVar18 & 0x1ff) * 4);
      fStack_1dc = fVar33 * *(float *)(*(longlong *)
                                        (lVar7 + (ulonglong)((uVar16 & 0x3fffffff) >> 7) * 8) +
                                      (ulonglong)(uVar28 + 1 & 0x1ff) * 4) +
                   fVar31 * *(float *)(*(longlong *)
                                        (lVar7 + (ulonglong)((uVar3 & 0x3fffffff) >> 7) * 8) +
                                      (ulonglong)(uVar26 + 1 & 0x1ff) * 4) +
                   fVar32 * *(float *)(*(longlong *)
                                        (lVar7 + (ulonglong)((uVar23 & 0x3fffffff) >> 7) * 8) +
                                      (ulonglong)(uVar18 + 1 & 0x1ff) * 4);
      fStack_1d8 = fVar33 * *(float *)(*(longlong *)
                                        (lVar7 + (ulonglong)((uVar16 & 0x3fffffff) >> 7) * 8) +
                                      (ulonglong)(uVar28 + 2 & 0x1ff) * 4) +
                   fVar31 * *(float *)(*(longlong *)
                                        (lVar7 + (ulonglong)((uVar3 & 0x3fffffff) >> 7) * 8) +
                                      (ulonglong)(uVar26 + 2 & 0x1ff) * 4) +
                   fVar32 * *(float *)(*(longlong *)
                                        (lVar7 + (ulonglong)((uVar23 & 0x3fffffff) >> 7) * 8) +
                                      (ulonglong)(uVar18 + 2 & 0x1ff) * 4);
      fStack_1d4 = fVar33 * *(float *)(*(longlong *)
                                        (lVar7 + (ulonglong)((uVar16 & 0x3fffffff) >> 7) * 8) +
                                      (ulonglong)(uVar28 + 3 & 0x1ff) * 4) +
                   fVar31 * *(float *)(*(longlong *)
                                        (lVar7 + (ulonglong)((uVar3 & 0x3fffffff) >> 7) * 8) +
                                      (ulonglong)(uVar26 + 3 & 0x1ff) * 4) +
                   fVar32 * *(float *)(*(longlong *)
                                        (lVar7 + (ulonglong)((uVar23 & 0x3fffffff) >> 7) * 8) +
                                      (ulonglong)(uVar18 + 3 & 0x1ff) * 4);
      uVar23 = 0;
      if ((int)uVar22 < local_228.ArrayNum) {
        uVar23 = ~uVar22 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar23 = uVar22 + 1;
      pFVar24 = (FDynamicMeshAttributeSet *)(ulonglong)uVar23;
      *(ulonglong *)(local_228.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10) =
           CONCAT44(fStack_1dc,local_1e0);
      *(ulonglong *)(local_228.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10 + 8) =
           CONCAT44(fStack_1d4,fStack_1d8);
      pTVar29 = local_218;
      param_3 = local_210;
      if ((int)uVar30 <= (int)uVar23) break;
      while( true ) {
        uVar27 = (ulonglong)((uint)pFVar24 & 0x1ff);
        lVar25 = *(longlong *)
                  ((param_4->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  ((ulonglong)pFVar24 >> 9) * 8);
        if ((*(short *)(lVar25 + uVar27 * 2) != 0) && (*(short *)(lVar25 + uVar27 * 2) != -1))
        break;
        uVar23 = (uint)pFVar24 + 1;
        pFVar24 = (FDynamicMeshAttributeSet *)(ulonglong)uVar23;
        if ((int)uVar30 <= (int)uVar23) goto joined_r0x00014ccf2bb9;
      }
    }
    goto joined_r0x00014ccf2bb9;
  }
LAB_14ccf3087:
  local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.ArrayNum = 0;
  local_238.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_238,local_228.ArrayNum,Default);
  uVar30 = (param_4->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_4->VertexRefCounts).RefCounts.CurBlockUsed;
  uVar27 = 0;
  if ((uVar30 != 0) &&
     (pFVar6 = (param_4->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar27 = 0,
     0xfffd < (ushort)(**(short **)pFVar6 - 1U))) {
    uVar27 = 1;
    uVar23 = 1;
    if ((int)uVar30 < 2) goto joined_r0x00014ccf3109;
    do {
      sVar2 = *(short *)(*(longlong *)(pFVar6 + (uVar27 >> 9) * 8) +
                        (ulonglong)((uint)uVar27 & 0x1ff) * 2);
      if ((sVar2 != 0) && (sVar2 != -1)) break;
      uVar23 = (uint)uVar27 + 1;
      uVar27 = (ulonglong)uVar23;
    } while ((int)uVar23 < (int)uVar30);
  }
  uVar23 = (uint)uVar27;
joined_r0x00014ccf3109:
  if (uVar23 != uVar30) {
    while( true ) {
      uVar22 = (uint)uVar27;
      uVar23 = 0;
      if ((int)uVar22 < local_228.ArrayNum) {
        uVar23 = ~uVar22 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar15 = UE::Geometry::TDynamicMeshOverlay<float,4>::AppendElement
                         (pTVar29,(float *)(local_228.AllocatorInstance.Data +
                                           (longlong)(int)uVar22 * 0x10));
      uVar23 = 0;
      if ((int)uVar22 < local_238.ArrayNum) {
        uVar23 = ~uVar22 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar23 = uVar22 + 1;
      uVar27 = (ulonglong)uVar23;
      *(int *)(local_238.AllocatorInstance.Data + (longlong)(int)uVar22 * 4) = iVar15;
      if ((int)uVar30 <= (int)uVar23) break;
      while( true ) {
        uVar21 = (ulonglong)((uint)uVar27 & 0x1ff);
        lVar25 = *(longlong *)
                  ((param_4->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (uVar27 >> 9) * 8);
        if ((*(short *)(lVar25 + uVar21 * 2) != 0) && (*(short *)(lVar25 + uVar21 * 2) != -1))
        break;
        uVar23 = (uint)uVar27 + 1;
        uVar27 = (ulonglong)uVar23;
        if ((int)uVar30 <= (int)uVar23) goto joined_r0x00014ccf3109;
      }
    }
    goto joined_r0x00014ccf3109;
  }
  uVar23 = (param_4->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_4->TriangleRefCounts).RefCounts.CurBlockUsed;
  uVar30 = 0;
  if ((uVar23 != 0) &&
     (pFVar6 = (param_4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar30 = 0,
     0xfffd < (ushort)(**(short **)pFVar6 - 1U))) {
    uVar22 = 1;
    uVar30 = 1;
    if (1 < (int)uVar23) {
      do {
        lVar25 = *(longlong *)(pFVar6 + (ulonglong)(uVar22 >> 9) * 8);
        pTVar29 = local_218;
        if ((*(short *)(lVar25 + (ulonglong)(uVar22 & 0x1ff) * 2) != 0) &&
           (uVar30 = uVar22, *(short *)(lVar25 + (ulonglong)(uVar22 & 0x1ff) * 2) != -1)) break;
        uVar22 = uVar22 + 1;
        uVar30 = uVar22;
      } while ((int)uVar22 < (int)uVar23);
    }
  }
joined_r0x00014ccf327d:
  do {
    if (uVar30 == uVar23) {
      if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.AllocatorInstance.Data);
      }
      if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.AllocatorInstance.Data);
      }
      return;
    }
    while( true ) {
      lVar25 = *(longlong *)
                ((param_4->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar30 >> 9) * 8);
      uVar22 = *(uint *)(lVar25 + 8 + (ulonglong)(uVar30 & 0x1ff) * 0xc);
      local_210 = *(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)
                   (lVar25 + (ulonglong)(uVar30 & 0x1ff) * 0xc);
      uVar16 = 0;
      if ((int)uVar22 < local_238.ArrayNum) {
        uVar16 = ~uVar22 >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar15 = *(int *)(local_238.AllocatorInstance.Data + (longlong)(int)uVar22 * 4);
      lVar25 = (longlong)(int)local_210._4_4_;
      uVar22 = 0;
      if ((int)local_210._4_4_ < local_238.ArrayNum) {
        uVar22 = ~local_210._4_4_ >> 0x1f;
      }
      iVar20 = local_238.ArrayNum;
      if (uVar22 == 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar20 = local_238.ArrayNum;
      }
      iVar4 = *(int *)(local_238.AllocatorInstance.Data + lVar25 * 4);
      lVar25 = (longlong)(int)(uint)local_210;
      uVar22 = 0;
      if ((int)(uint)local_210 < iVar20) {
        uVar22 = ~(uint)local_210 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_1f0._s_0.A = *(undefined4 *)(local_238.AllocatorInstance.Data + lVar25 * 4);
      local_1f0._s_0.B = iVar4;
      local_1f0._s_0.C = iVar15;
      UE::Geometry::TDynamicMeshOverlay<float,4>::SetTriangle
                (pTVar29,uVar30,(FIndex3i *)&local_1f0._s_0,true);
      uVar30 = uVar30 + 1;
      if ((int)uVar23 <= (int)uVar30) break;
      while( true ) {
        lVar25 = *(longlong *)
                  ((param_4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar30 >> 9) * 8);
        if ((*(short *)(lVar25 + (ulonglong)(uVar30 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar25 + (ulonglong)(uVar30 & 0x1ff) * 2) != -1)) break;
        uVar30 = uVar30 + 1;
        if ((int)uVar23 <= (int)uVar30) goto joined_r0x00014ccf327d;
      }
    }
  } while( true );
}

// GetMeshDescriptionLODWithCopiedVertexColors @ 14ccfea40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UELocal::GetMeshDescriptionLODWithCopiedVertexColors
          (UToolTarget *param_1,EMeshLODIdentifier param_2,FDynamicMesh3 *param_3,
          TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *param_4,
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_5,TVector4<float> *param_6,
          FMeshDescription *param_7)

{
  FMeshDescription *pFVar1;
  undefined1 auStackY_5c8 [32];
  FDynamicMeshToMeshDescription local_598;
  FGetMeshParameters local_578;
  FMeshDescriptionToDynamicMesh local_568;
  FDynamicMesh3 local_528;
  FMeshDescription local_2f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  local_578.bHaveRequestLOD = true;
  local_578.bWantMeshTangents = false;
  local_578.RequestLOD = param_2;
  pFVar1 = UE::ToolTarget::GetMeshDescriptionCopy(&local_2f8,param_1,&local_578);
  FMeshDescription::operator=(param_7,pFVar1);
  FMeshDescription::~FMeshDescription(&local_2f8);
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_528);
  local_568.bPrintDebugMessages = false;
  local_568.bEnableOutputGroups = true;
  local_568.bCalculateMaps = true;
  local_568.bDisableAttributes = false;
  local_568.TriIDMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_568.TriIDMap.ArrayNum = 0;
  local_568.TriIDMap.ArrayMax = 0;
  local_568.VertIDMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_568.VertIDMap.ArrayNum = 0;
  local_568.VertIDMap.ArrayMax = 0;
  local_568.bVIDsFromNonManifoldMeshDescriptionAttr = false;
  local_568.PolygonGroupToMaterialIndexMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_568.PolygonGroupToMaterialIndexMap.ArrayNum = 0;
  local_568.PolygonGroupToMaterialIndexMap.ArrayMax = 0;
  local_568.bTransformVertexColorsLinearToSRGB = true;
  local_568.bUseCompactedPolygonGroupIDValues = false;
  local_568.GroupMode = SetToPolyGroup;
  FMeshDescriptionToDynamicMesh::Convert(&local_568,param_7,&local_528,false);
  CopyVertexColorsToLOD(param_3,param_4,param_5,&local_528,param_6);
  local_598.bPrintDebugMessages = false;
  local_598.ConversionOptions.bSetPolyGroups = true;
  local_598.ConversionOptions.bUpdatePositions = true;
  local_598.ConversionOptions.bUpdateNormals = true;
  local_598.ConversionOptions.bUpdateTangents = false;
  local_598.ConversionOptions.bUpdateUVs = false;
  local_598.ConversionOptions.bUpdateVtxColors = false;
  local_598.ConversionOptions.bTransformVtxColorsSRGBToLinear = true;
  local_598.ConversionOptions.bConvertBackToNonManifold = false;
  local_598.ConversionOptions.bSetHardEdgesFromNormalSeams = true;
  local_598.MaterialIDToPolygroupIDMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_598.MaterialIDToPolygroupIDMap.ArrayNum = 0;
  local_598.MaterialIDToPolygroupIDMap.ArrayMax = 0;
  FDynamicMeshToMeshDescription::UpdateVertexColors(&local_598,&local_528,param_7);
  if (local_598.MaterialIDToPolygroupIDMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_598.MaterialIDToPolygroupIDMap.AllocatorInstance.Data);
  }
  if (local_568.PolygonGroupToMaterialIndexMap.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_568.PolygonGroupToMaterialIndexMap.AllocatorInstance.Data);
  }
  if (local_568.VertIDMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_568.VertIDMap.AllocatorInstance.Data);
  }
  if (local_568.TriIDMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_568.TriIDMap.AllocatorInstance.Data);
  }
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_528);
  return;
}

