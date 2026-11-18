// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 6

// branch_fast_winding_num @ 1495da360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
UE::Geometry::
TFastWindingTree<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::branch_fast_winding_num
          (TFastWindingTree<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,int param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  *this_00;
  FScriptContainerElement *pFVar8;
  TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_> *pTVar9;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  undefined1 in_XMM5 [16];
  undefined1 unaff_XMM6 [16];
  double local_res8;
  ulonglong local_res20;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_f8 [7];
  
  this_00 = this->Tree;
  dVar29 = 0.0;
  local_res8 = 0.0;
  uVar7 = *(uint *)(*(longlong *)
                     ((this_00->BoxToIndex).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  pFVar8 = (this_00->IndexList).Blocks.AllocatorInstance.Data;
  lVar23 = *(longlong *)(pFVar8 + (ulonglong)(uVar7 >> 9) * 8);
  if ((int)uVar7 < this_00->TrianglesEnd) {
    uVar21 = *(uint *)(lVar23 + (ulonglong)(uVar7 & 0x1ff) * 4);
    local_res20 = (ulonglong)uVar21;
    if (0 < (int)uVar21) {
      do {
        uVar7 = uVar7 + 1;
        pTVar9 = this->Tree->Mesh;
        pTVar10 = pTVar9->SourceTriangles;
        uVar21 = *(uint *)(*(longlong *)
                            ((this->Tree->IndexList).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
        lVar23 = (longlong)(int)uVar21;
        uVar20 = 0;
        if ((int)uVar21 < pTVar10->ArrayNum) {
          uVar20 = ~uVar21 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar13 = (code *)swi(3);
          dVar29 = (double)(*pcVar13)();
          return dVar29;
        }
        pFVar8 = (pTVar10->AllocatorInstance).Data;
        pTVar11 = pTVar9->SourceVertices;
        uVar21 = *(uint *)(pFVar8 + lVar23 * 0xc);
        uVar20 = 0;
        if ((int)uVar21 < pTVar11->ArrayNum) {
          uVar20 = ~uVar21 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar13 = (code *)swi(3);
          dVar29 = (double)(*pcVar13)();
          return dVar29;
        }
        pFVar12 = (pTVar11->AllocatorInstance).Data;
        uVar20 = *(uint *)(pFVar8 + lVar23 * 0xc + 4);
        pTVar11 = pTVar9->SourceVertices;
        pFVar1 = pFVar12 + (longlong)(int)uVar21 * 0x18;
        dVar18 = *(double *)pFVar1;
        dVar17 = *(double *)(pFVar1 + 8);
        dVar29 = *(double *)(pFVar12 + (longlong)(int)uVar21 * 0x18 + 0x10);
        uVar21 = 0;
        if ((int)uVar20 < pTVar11->ArrayNum) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar13 = (code *)swi(3);
          dVar29 = (double)(*pcVar13)();
          return dVar29;
        }
        pFVar1 = (pTVar11->AllocatorInstance).Data;
        uVar21 = *(uint *)(pFVar8 + lVar23 * 0xc + 8);
        pTVar11 = pTVar9->SourceVertices;
        pFVar8 = pFVar1 + (longlong)(int)uVar20 * 0x18;
        dVar16 = *(double *)pFVar8;
        dVar15 = *(double *)(pFVar8 + 8);
        dVar2 = *(double *)(pFVar1 + (longlong)(int)uVar20 * 0x18 + 0x10);
        uVar20 = 0;
        if ((int)uVar21 < pTVar11->ArrayNum) {
          uVar20 = ~uVar21 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar13 = (code *)swi(3);
          dVar29 = (double)(*pcVar13)();
          return dVar29;
        }
        dVar3 = (param_2->field0_0x0)._s_0.X;
        dVar4 = (param_2->field0_0x0)._s_0.Y;
        dVar5 = (param_2->field0_0x0)._s_0.Z;
        dVar18 = dVar18 - dVar3;
        dVar17 = dVar17 - dVar4;
        dVar16 = dVar16 - dVar3;
        dVar2 = dVar2 - dVar5;
        pFVar8 = (pTVar11->AllocatorInstance).Data;
        dVar15 = dVar15 - dVar4;
        dVar29 = dVar29 - dVar5;
        auVar6 = *(undefined1 (*) [16])(pFVar8 + (longlong)(int)uVar21 * 0x18);
        dVar5 = *(double *)(pFVar8 + (longlong)(int)uVar21 * 0x18 + 0x10) - dVar5;
        dVar3 = auVar6._0_8_ - dVar3;
        dVar4 = auVar6._8_8_ - dVar4;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = dVar17 * dVar17 + dVar18 * dVar18 + dVar29 * dVar29;
        in_XMM5 = sqrtpd(in_XMM5,auVar6);
        auVar14._8_8_ = 0;
        auVar14._0_8_ = dVar15 * dVar15 + dVar16 * dVar16 + dVar2 * dVar2;
        unaff_XMM6 = sqrtpd(unaff_XMM6,auVar14);
        dVar29 = atan2(((dVar5 * dVar15 - dVar4 * dVar2) * dVar18 -
                       (dVar5 * dVar16 - dVar3 * dVar2) * dVar17) +
                       (dVar4 * dVar16 - dVar3 * dVar15) * dVar29,
                       SQRT(dVar4 * dVar4 + dVar3 * dVar3 + dVar5 * dVar5) *
                       (dVar15 * dVar17 + dVar16 * dVar18 +
                       unaff_XMM6._0_8_ * in_XMM5._0_8_ + dVar2 * dVar29) +
                       (dVar4 * dVar15 + dVar3 * dVar16 + dVar5 * dVar2) * in_XMM5._0_8_ +
                       (dVar4 * dVar17 + dVar3 * dVar18 + dVar5 * dVar29) * unaff_XMM6._0_8_);
        local_res20 = local_res20 - 1;
        dVar29 = local_res8 + dVar29 * __real_c000000000000000;
        local_res8 = dVar29;
      } while (local_res20 != 0);
    }
    dVar29 = dVar29 * ___real_3fb45f306dc9c883;
  }
  else {
    uVar21 = *(uint *)(lVar23 + (ulonglong)(uVar7 & 0x1ff) * 4);
    if ((int)uVar21 < 0) {
      uVar21 = ~uVar21;
      bVar19 = TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
               ::box_contains(this_00,uVar21,param_2);
      if ((bVar19) || (bVar19 = can_use_fast_winding_cache(this,uVar21,param_2), !bVar19)) {
        local_138._s_0.X = (param_2->field0_0x0)._s_0.X;
        local_138._s_0.Y = (param_2->field0_0x0)._s_0.Y;
        local_138._s_0.Z = (param_2->field0_0x0)._s_0.Z;
        dVar29 = branch_fast_winding_num(this,uVar21,(TVector<double> *)&local_138._s_0);
      }
      else {
        dVar29 = evaluate_box_fast_winding_cache(this,uVar21,param_2);
      }
    }
    else {
      iVar22 = uVar21 - 1;
      iVar24 = *(int *)(*(longlong *)(pFVar8 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                       (ulonglong)(uVar7 + 1 & 0x1ff) * 4) + -1;
      bVar19 = TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
               ::box_contains(this_00,iVar22,param_2);
      if ((bVar19) || (bVar19 = can_use_fast_winding_cache(this,iVar22,param_2), !bVar19)) {
        local_118._s_0.X = (param_2->field0_0x0)._s_0.X;
        local_118._s_0.Y = (param_2->field0_0x0)._s_0.Y;
        local_118._s_0.Z = (param_2->field0_0x0)._s_0.Z;
        dVar29 = branch_fast_winding_num(this,iVar22,(TVector<double> *)&local_118._s_0);
        uVar25 = SUB84(dVar29,0);
        uVar27 = (undefined4)((ulonglong)dVar29 >> 0x20);
      }
      else {
        dVar29 = evaluate_box_fast_winding_cache(this,iVar22,param_2);
        uVar25 = SUB84(dVar29,0);
        uVar27 = (undefined4)((ulonglong)dVar29 >> 0x20);
      }
      bVar19 = TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
               ::box_contains(this->Tree,iVar24,param_2);
      if ((bVar19) || (bVar19 = can_use_fast_winding_cache(this,iVar24,param_2), !bVar19)) {
        local_f8[0]._0_8_ = (param_2->field0_0x0)._s_0.X;
        local_f8[0]._8_8_ = (param_2->field0_0x0)._s_0.Y;
        local_f8[0]._16_8_ = (param_2->field0_0x0)._s_0.Z;
        dVar29 = branch_fast_winding_num(this,iVar24,(TVector<double> *)&local_f8[0]._s_0);
        uVar26 = SUB84(dVar29,0);
        uVar28 = (undefined4)((ulonglong)dVar29 >> 0x20);
      }
      else {
        dVar29 = evaluate_box_fast_winding_cache(this,iVar24,param_2);
        uVar26 = SUB84(dVar29,0);
        uVar28 = (undefined4)((ulonglong)dVar29 >> 0x20);
      }
      dVar29 = (double)CONCAT44(uVar28,uVar26) + (double)CONCAT44(uVar27,uVar25);
    }
  }
  return dVar29;
}

// build_fast_winding_cache @ 1495da9b0

int __thiscall
UE::Geometry::
TFastWindingTree<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::build_fast_winding_cache
          (TFastWindingTree<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,int param_1,int param_2,int param_3,
          TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *param_4,FMeshTriInfoCache *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>_u_0 local_168;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  double local_110;
  double dStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  TVector<double>_u_0 local_c8;
  double dStack_b0;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 TStack_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined7 uStack_47;
  
  if ((param_4->field0_0x0).TypedValue.ArrayMax != -1) {
    pFVar2 = (param_4->field0_0x0).TypedValue.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_4->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_4->field0_0x0).TypedValue.ArrayNum = 0;
    (param_4->field0_0x0).TypedValue.ArrayMax = -1;
  }
  pTVar3 = this->Tree;
  pFVar2 = (pTVar3->IndexList).Blocks.AllocatorInstance.Data;
  uVar11 = *(uint *)(*(longlong *)
                      ((pTVar3->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  uVar13 = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)(uVar11 >> 9) * 8) +
                    (ulonglong)(uVar11 & 0x1ff) * 4);
  if ((int)uVar11 < pTVar3->TrianglesEnd) {
    return uVar13;
  }
  iVar8 = param_2 + 1;
  if ((int)uVar13 < 0) {
    iVar8 = build_fast_winding_cache(this,~uVar13,iVar8,param_3,param_4,param_5);
    return iVar8;
  }
  local_158 = CONCAT44(local_158._4_4_,uVar13 - 1);
  iVar9 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                  (ulonglong)(uVar11 + 1 & 0x1ff) * 4) + -1;
  local_168.TypedValue.AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_168.TypedValue.ArrayNum = 0;
  local_168.TypedValue.ArrayMax = -1;
  iVar10 = build_fast_winding_cache(this,uVar13 - 1,iVar8,param_3,param_4,param_5);
  iVar8 = build_fast_winding_cache
                    (this,iVar9,iVar8,param_3,
                     (TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *)&local_168.TypedValue,
                     param_5);
  if (param_2 == 0) goto LAB_1495daf9d;
  if ((param_4->field0_0x0).TypedValue.ArrayMax == -1) {
    if (local_168.TypedValue.ArrayMax == -1) {
      if (iVar10 + iVar8 <= param_3) goto LAB_1495daf9d;
      pFVar2 = (param_4->field0_0x0).TypedValue.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_4->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_4->field0_0x0).TypedValue.ArrayNum = 0;
      (param_4->field0_0x0).TypedValue.ArrayMax = 0;
      collect_triangles(this,(int)local_158,(TArray<int,TSizedDefaultAllocator<32>_> *)param_4);
      goto LAB_1495dab7e;
    }
    collect_triangles(this,(int)local_158,&local_168.TypedValue);
    if (&local_168 != &param_4->field0_0x0) {
      if (local_168.TypedValue.ArrayMax == -1) {
        if ((param_4->field0_0x0).TypedValue.ArrayMax != -1) {
          pFVar2 = (param_4->field0_0x0).TypedValue.AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (param_4->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (param_4->field0_0x0).TypedValue.ArrayNum = 0;
          (param_4->field0_0x0).TypedValue.ArrayMax = -1;
        }
      }
      else {
        pFVar2 = (param_4->field0_0x0).TypedValue.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        uVar6 = local_168.TypedValue.ArrayMax;
        (param_4->field0_0x0).TypedValue.AllocatorInstance.Data =
             (FScriptContainerElement *)local_168.TypedValue.AllocatorInstance.Data;
        (param_4->field0_0x0).TypedValue.ArrayNum = local_168.TypedValue.ArrayNum;
        local_168.TypedValue.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        (param_4->field0_0x0).TypedValue.ArrayMax = local_168.TypedValue.ArrayMax;
        local_168.TypedValue.ArrayNum = 0;
        local_168.TypedValue.ArrayMax = 0;
        if ((uVar6 == -1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
      }
    }
  }
  else {
LAB_1495dab7e:
    iVar1 = (param_4->field0_0x0).TypedValue.ArrayMax;
    if (local_168.TypedValue.ArrayMax == -1) {
      if ((iVar1 == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      collect_triangles(this,iVar9,(TArray<int,TSizedDefaultAllocator<32>_> *)param_4);
    }
    else {
      if ((iVar1 == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      if ((local_168.TypedValue.ArrayMax == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      if ((&param_4->field0_0x0 == &local_168) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      lVar12 = (longlong)local_168.TypedValue.ArrayNum;
      if (local_168.TypedValue.ArrayNum != 0) {
        iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_168.TypedValue.ArrayNum,(ForAnyElementType *)param_4,
                           &(param_4->field0_0x0).TypedValue.ArrayNum,
                           &(param_4->field0_0x0).TypedValue.ArrayMax);
        memcpy((param_4->field0_0x0).TypedValue.AllocatorInstance.Data + (longlong)iVar9 * 4,
               (void *)local_168.TypedValue.AllocatorInstance.Data,lVar12 << 2);
      }
    }
  }
  if (param_3 < iVar8 + iVar10) {
    if ((param_4->field0_0x0).TypedValue.ArrayMax == -1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TriArray.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                         ,0x239,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      if (((param_4->field0_0x0).TypedValue.ArrayMax == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
    }
    uVar13 = param_1 - this->FastWindingCacheOffset;
    uVar11 = 0;
    if ((int)uVar13 < (this->FastWindingCache).ArrayNum) {
      uVar11 = ~uVar13 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    if (((this->FastWindingCache).AllocatorInstance.Data[(longlong)(int)uVar13 * 0x88 + 0x80] !=
         (FScriptContainerElement)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!FastWindingCache[IBox - FastWindingCacheOffset].bValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                           ,0x259,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    local_48 = 0;
    FastTriWinding::
    ComputeCoeffs<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
              (this->Tree->Mesh,(TArray<int,TSizedDefaultAllocator<32>_> *)param_4,param_5,
               (TVector<double> *)&local_c8._s_0,&dStack_b0,(TVector<double> *)&local_a8._s_0,
               (TMatrix3<double> *)&TStack_90._s_0,0x10);
    uVar13 = param_1 - this->FastWindingCacheOffset;
    local_140 = local_c8._s_0.Z;
    dStack_138 = dStack_b0;
    local_130 = local_a8._s_0.X;
    dStack_128 = local_a8._s_0.Y;
    uVar11 = 0;
    if ((int)uVar13 < (this->FastWindingCache).ArrayNum) {
      uVar11 = ~uVar13 >> 0x1f;
    }
    local_48 = 1;
    local_120 = local_a8._s_0.Z;
    dStack_118 = TStack_90._s_0.X;
    local_110 = TStack_90._s_0.Y;
    dStack_108 = TStack_90._s_0.Z;
    local_100 = local_78;
    uStack_f8 = uStack_70;
    local_f0 = local_68;
    uStack_e8 = uStack_60;
    local_158 = CONCAT71(uStack_47,1);
    local_150 = local_c8._0_4_;
    uStack_14c = local_c8._4_4_;
    uStack_148 = local_c8._8_4_;
    uStack_144 = local_c8._12_4_;
    local_e0 = local_58;
    uStack_d8 = uStack_50;
    if ((uVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    lVar12 = (longlong)(int)uVar13 * 0x88;
    pFVar4 = (this->FastWindingCache).AllocatorInstance.Data;
    pFVar2 = pFVar4 + lVar12;
    *(undefined4 *)pFVar2 = local_150;
    *(undefined4 *)(pFVar2 + 4) = uStack_14c;
    *(undefined4 *)(pFVar2 + 8) = uStack_148;
    *(undefined4 *)(pFVar2 + 0xc) = uStack_144;
    *(double *)(pFVar4 + lVar12 + 0x10) = local_140;
    *(double *)(pFVar4 + lVar12 + 0x10 + 8) = dStack_138;
    *(double *)(pFVar4 + lVar12 + 0x20) = local_130;
    *(double *)(pFVar4 + lVar12 + 0x20 + 8) = dStack_128;
    *(double *)(pFVar4 + lVar12 + 0x30) = local_120;
    *(double *)(pFVar4 + lVar12 + 0x30 + 8) = dStack_118;
    *(double *)(pFVar4 + lVar12 + 0x40) = local_110;
    *(double *)(pFVar4 + lVar12 + 0x40 + 8) = dStack_108;
    *(undefined8 *)(pFVar4 + lVar12 + 0x50) = local_100;
    *(undefined8 *)(pFVar4 + lVar12 + 0x50 + 8) = uStack_f8;
    *(undefined8 *)(pFVar4 + lVar12 + 0x60) = local_f0;
    *(undefined8 *)(pFVar4 + lVar12 + 0x60 + 8) = uStack_e8;
    *(undefined8 *)(pFVar4 + lVar12 + 0x70) = local_e0;
    *(undefined8 *)(pFVar4 + lVar12 + 0x70 + 8) = uStack_d8;
    *(undefined8 *)(pFVar4 + lVar12 + 0x80) = local_158;
  }
LAB_1495daf9d:
  if ((local_168.TypedValue.ArrayMax != -1) &&
     (local_168.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_168.TypedValue.AllocatorInstance.Data);
  }
  return iVar8 + iVar10;
}

// build_fast_winding_cache @ 1495daff0

void __thiscall
UE::Geometry::
TFastWindingTree<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::build_fast_winding_cache
          (TFastWindingTree<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this)

{
  int *piVar1;
  TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_> *pTVar2;
  TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  <lambda_1> local_res8;
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>_u_0 local_148;
  FMeshTriInfoCache local_138;
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>_u_0 local_e8;
  TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_> *local_d8;
  FMeshTriInfoCache *local_d0;
  TArrayView<std::nullptr_t,int> local_c8;
  code *local_b8;
  TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_> **local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined7 uStack_27;
  
  uVar8 = 0;
  pTVar2 = this->Tree->Mesh;
  local_138.Centroids.CurBlock = 0;
  local_138.Centroids.CurBlockUsed = 0;
  local_138.Centroids.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Centroids.Blocks.ArrayNum = 0;
  local_138.Centroids.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_138.Centroids);
  local_138.Normals.CurBlock = 0;
  local_138.Normals.CurBlockUsed = 0;
  local_138.Normals.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Normals.Blocks.ArrayNum = 0;
  local_138.Normals.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_138.Normals);
  local_138.Areas.CurBlock = 0;
  local_138.Areas.CurBlockUsed = 0;
  local_138.Areas.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Areas.Blocks.ArrayNum = 0;
  local_138.Areas.Blocks.ArrayMax = 0;
  TDynamicVector<double,512>::AddAllocatedBlock(&local_138.Areas);
  uVar11 = pTVar2->SourceTriangles->ArrayNum;
  TDynamicVector<UE::Math::TVector<double>,512>::Resize(&local_138.Centroids,uVar11);
  TDynamicVector<UE::Math::TVector<double>,512>::Resize(&local_138.Normals,uVar11);
  TDynamicVector<double,512>::Resize(&local_138.Areas,uVar11);
  local_d0 = &local_138;
  local_c8.DataPtr = (void **)0x0;
  local_b8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshTriInfoCache::BuildTriInfoCache<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>'::__l2::<lambda_1>,void,int>
             ::Call;
  local_b0 = &local_d8;
  uVar10 = 0;
  local_c8.ArrayNum = 0;
  local_d8 = pTVar2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",uVar11,1,(TFunctionRef<void___cdecl(int)> *)&local_b8,local_res8,
             None,&local_c8);
  pTVar3 = this->Tree;
  this->FastWindingCacheOffset = 0;
  uVar9 = (pTVar3->BoxToIndex).CurBlock;
  uVar11 = (pTVar3->BoxToIndex).CurBlockUsed;
  if (uVar9 * 0x200 + uVar11 != 0) {
    do {
      uVar10 = (uint)uVar8;
      if (pTVar3->TrianglesEnd <=
          *(int *)(*(longlong *)
                    ((pTVar3->BoxToIndex).Blocks.AllocatorInstance.Data + (uVar8 >> 9) * 8) +
                  (ulonglong)(uVar10 & 0x1ff) * 4)) break;
      uVar10 = uVar10 + 1;
      this->FastWindingCacheOffset = uVar10;
      uVar8 = (ulonglong)uVar10;
      uVar9 = (pTVar3->BoxToIndex).CurBlock;
      uVar11 = (pTVar3->BoxToIndex).CurBlockUsed;
    } while ((ulonglong)(longlong)(int)uVar10 < (ulonglong)(uVar9 * 0x200 + uVar11));
  }
  uVar11 = (uVar9 * 0x200 - uVar10) + uVar11;
  uVar8 = (ulonglong)uVar11;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &(this->FastWindingCache).ArrayMax;
  (this->FastWindingCache).ArrayNum = 0;
  if (*piVar1 != uVar11) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,uVar11,&(this->FastWindingCache).AllocatorInstance,0,piVar1);
  }
  (this->FastWindingCache).ArrayNum = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_28 = 0;
  if (*piVar1 != uVar11) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,uVar11,&(this->FastWindingCache).AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar11) {
    do {
      pFVar7 = (this->FastWindingCache).AllocatorInstance.Data;
      if (((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 < pFVar7 + (longlong)*piVar1 * 0x88)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->FastWindingCache).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x888,&(this->FastWindingCache).AllocatorInstance,piVar1);
      }
      (this->FastWindingCache).ArrayNum = iVar6 + 1;
      pFVar7 = (this->FastWindingCache).AllocatorInstance.Data + (longlong)iVar6 * 0x88;
      *(undefined8 *)pFVar7 = local_a8;
      *(undefined8 *)(pFVar7 + 8) = uStack_a0;
      *(undefined8 *)(pFVar7 + 0x10) = local_98;
      *(undefined8 *)(pFVar7 + 0x18) = uStack_90;
      *(undefined8 *)(pFVar7 + 0x20) = local_88;
      *(undefined8 *)(pFVar7 + 0x28) = uStack_80;
      *(undefined8 *)(pFVar7 + 0x30) = local_78;
      *(undefined8 *)(pFVar7 + 0x38) = uStack_70;
      *(undefined8 *)(pFVar7 + 0x40) = local_68;
      *(undefined8 *)(pFVar7 + 0x48) = uStack_60;
      *(undefined8 *)(pFVar7 + 0x50) = local_58;
      *(undefined8 *)(pFVar7 + 0x58) = uStack_50;
      *(undefined8 *)(pFVar7 + 0x60) = local_48;
      *(undefined8 *)(pFVar7 + 0x68) = uStack_40;
      *(undefined8 *)(pFVar7 + 0x70) = local_38;
      *(undefined8 *)(pFVar7 + 0x78) = uStack_30;
      *(ulonglong *)(pFVar7 + 0x80) = CONCAT71(uStack_27,local_28);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  pTVar3 = this->Tree;
  local_148.TypedValue.AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_148.TypedValue.ArrayNum = 0;
  local_148.TypedValue.ArrayMax = -1;
  uVar11 = *(uint *)(*(longlong *)
                      ((pTVar3->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)pTVar3->RootIndex >> 9) * 8) +
                    (ulonglong)(pTVar3->RootIndex & 0x1ff) * 4);
  if (pTVar3->TrianglesEnd <= (int)uVar11) {
    pFVar7 = (pTVar3->IndexList).Blocks.AllocatorInstance.Data;
    uVar9 = *(uint *)(*(longlong *)(pFVar7 + (ulonglong)(uVar11 >> 9) * 8) +
                     (ulonglong)(uVar11 & 0x1ff) * 4);
    if ((int)uVar9 < 0) {
      build_fast_winding_cache
                (this,~uVar9,1,1,
                 (TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *)&local_148.TypedValue,
                 &local_138);
    }
    else {
      iVar6 = *(int *)(*(longlong *)(pFVar7 + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                      (ulonglong)(uVar11 + 1 & 0x1ff) * 4);
      local_e8.TypedValue.AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0
      ;
      local_e8.TypedValue.ArrayNum = 0;
      local_e8.TypedValue.ArrayMax = -1;
      build_fast_winding_cache
                (this,uVar9 - 1,1,1,
                 (TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *)&local_148.TypedValue,
                 &local_138);
      build_fast_winding_cache
                (this,iVar6 + -1,1,1,
                 (TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *)&local_e8.TypedValue,
                 &local_138);
      if ((local_e8.TypedValue.ArrayMax != -1) &&
         (local_e8.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_e8.TypedValue.AllocatorInstance.Data);
      }
    }
  }
  if ((local_148.TypedValue.ArrayMax != -1) &&
     (local_148.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_148.TypedValue.AllocatorInstance.Data);
  }
  TDynamicVector<double,512>::~TDynamicVector<double,512>(&local_138.Areas);
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_138.Normals,0);
  if (local_138.Normals.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Normals.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_138.Centroids,0);
  if (local_138.Centroids.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Centroids.Blocks.AllocatorInstance.Data);
  }
  return;
}

// can_use_fast_winding_cache @ 1495db480

bool __thiscall
UE::Geometry::
TFastWindingTree<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::can_use_fast_winding_cache
          (TFastWindingTree<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,int param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar7 = param_1 - this->FastWindingCacheOffset;
  if (-1 < (int)uVar7) {
    uVar5 = 0;
    if ((int)uVar7 < (this->FastWindingCache).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    lVar6 = (longlong)(int)uVar7 * 0x88;
    pFVar1 = (this->FastWindingCache).AllocatorInstance.Data;
    if (pFVar1[lVar6 + 0x80] != (FScriptContainerElement)0x0) {
      dVar10 = (param_2->field0_0x0)._s_0.X - *(double *)(pFVar1 + lVar6);
      dVar11 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar1 + lVar6 + 8);
      dVar8 = (param_2->field0_0x0)._s_0.Z - *(double *)(pFVar1 + lVar6 + 0x10);
      dVar9 = *(double *)(pFVar1 + lVar6 + 0x18) * this->FWNBeta;
      return dVar9 * dVar9 < dVar11 * dVar11 + dVar10 * dVar10 + dVar8 * dVar8;
    }
  }
  return false;
}

// collect_triangles @ 1495dd4c0

void __thiscall
UE::Geometry::
TFastWindingTree<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::collect_triangles(TFastWindingTree<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                    *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  *pTVar8;
  ulonglong uVar9;
  
  pTVar8 = this->Tree;
  uVar7 = *(uint *)(*(longlong *)
                     ((pTVar8->BoxToIndex).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (pTVar8->TrianglesEnd <= (int)uVar7) {
    do {
      uVar5 = *(uint *)(*(longlong *)
                         ((pTVar8->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
      if ((int)uVar5 < 0) {
        uVar5 = ~uVar5;
      }
      else {
        collect_triangles(this,uVar5 - 1,param_2);
        pTVar8 = this->Tree;
        uVar5 = *(int *)(*(longlong *)
                          ((pTVar8->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar7 + 1 >> 9) * 8) + (ulonglong)(uVar7 + 1 & 0x1ff) * 4) - 1
        ;
      }
      uVar7 = *(uint *)(*(longlong *)
                         ((pTVar8->BoxToIndex).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4);
    } while (pTVar8->TrianglesEnd <= (int)uVar7);
  }
  uVar5 = *(uint *)(*(longlong *)
                     ((pTVar8->IndexList).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
  if (0 < (int)uVar5) {
    uVar9 = (ulonglong)uVar5;
    do {
      uVar7 = uVar7 + 1;
      pFVar1 = (FScriptContainerElement *)
               (*(longlong *)
                 ((this->Tree->IndexList).Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
      pFVar2 = (param_2->AllocatorInstance).Data;
      if (((pFVar2 <= pFVar1) && (pFVar1 < pFVar2 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) =
           *(undefined4 *)pFVar1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}

// evaluate_box_fast_winding_cache @ 1495eb5f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
UE::Geometry::
TFastWindingTree<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::evaluate_box_fast_winding_cache
          (TFastWindingTree<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,int param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  
  uVar10 = param_1 - this->FastWindingCacheOffset;
  uVar8 = 0;
  if ((int)uVar10 < (this->FastWindingCache).ArrayNum) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      dVar11 = (double)(*pcVar2)();
      return dVar11;
    }
  }
  lVar9 = (longlong)(int)uVar10 * 0x88;
  pFVar1 = (this->FastWindingCache).AllocatorInstance.Data;
  dVar5 = *(double *)(pFVar1 + lVar9) - (param_2->field0_0x0)._s_0.X;
  dVar4 = *(double *)(pFVar1 + lVar9 + 8) - (param_2->field0_0x0)._s_0.Y;
  dVar6 = *(double *)(pFVar1 + lVar9 + 0x10) - (param_2->field0_0x0)._s_0.Z;
  auVar12._0_8_ = dVar5 * dVar5;
  auVar12._8_8_ = 0;
  dVar11 = dVar4 * dVar4 + auVar12._0_8_ + dVar6 * dVar6;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar11;
  auVar13 = sqrtpd(auVar12,auVar13);
  if (this->FWNApproxOrder == 2) {
    dVar14 = dVar11 * auVar13._0_8_ * __real_402921fb54442d18;
    dVar3 = __real_3ff0000000000000 / dVar14;
    dVar14 = __real_c008000000000000 / (dVar14 * dVar11);
    dVar11 = dVar4 * dVar14;
    dVar15 = dVar5 * dVar14;
    dVar14 = dVar6 * dVar14;
    dVar11 = (dVar6 * dVar14 + dVar3) * *(double *)(pFVar1 + lVar9 + 0x78) +
             dVar4 * dVar14 * *(double *)(pFVar1 + lVar9 + 0x70) +
             dVar5 * dVar14 * *(double *)(pFVar1 + lVar9 + 0x68) +
             (dVar4 * dVar11 + dVar3) * *(double *)(pFVar1 + lVar9 + 0x58) +
             dVar5 * dVar11 * *(double *)(pFVar1 + lVar9 + 0x50) +
             dVar6 * dVar11 * *(double *)(pFVar1 + lVar9 + 0x60) +
             dVar4 * dVar15 * *(double *)(pFVar1 + lVar9 + 0x40) +
             (dVar5 * dVar15 + dVar3) * *(double *)(pFVar1 + lVar9 + 0x38) +
             dVar6 * dVar15 * *(double *)(pFVar1 + lVar9 + 0x48) +
             (dVar4 * *(double *)(pFVar1 + lVar9 + 0x28) +
              dVar5 * *(double *)(pFVar1 + lVar9 + 0x20) +
             dVar6 * *(double *)(pFVar1 + lVar9 + 0x30)) * dVar3;
  }
  else {
    dVar11 = __real_3ff0000000000000 / (dVar11 * auVar13._0_8_);
    dVar11 = (dVar4 * dVar11 * *(double *)(pFVar1 + lVar9 + 0x28) +
              dVar5 * dVar11 * *(double *)(pFVar1 + lVar9 + 0x20) +
             dVar6 * dVar11 * *(double *)(pFVar1 + lVar9 + 0x30)) * ___real_3fb45f306dc9c883;
  }
  return dVar11;
}

