// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// operator() @ 14c7ce600

int __thiscall
`UE::Geometry::FPolygroupRemesh::Compute'::__l10::<lambda_2>::operator()
          (void *this,int param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  
  if (param_2 < param_1) {
    plVar8 = *(longlong **)((longlong)this + 8);
    if (param_1 < (int)plVar8[1]) {
      lVar9 = (longlong)param_1 * 4;
      uVar7 = param_1;
      do {
        plVar1 = *(longlong **)this;
        uVar4 = 0;
        if ((int)uVar7 < (int)plVar8[1]) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        uVar4 = *(uint *)(lVar9 + *plVar8);
        uVar6 = 0;
        if ((int)uVar4 < (int)plVar1[1]) {
          uVar6 = ~uVar4 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 4;
        *(undefined1 *)((longlong)(int)uVar4 + *plVar1) = 1;
        plVar8 = *(longlong **)((longlong)this + 8);
      } while ((int)uVar7 < (int)plVar8[1]);
    }
    uVar7 = 0;
    if (-1 < param_2) {
      lVar9 = 0;
      do {
        plVar8 = *(longlong **)((longlong)this + 8);
        plVar1 = *(longlong **)this;
        uVar4 = 0;
        if ((int)uVar7 < (int)plVar8[1]) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        uVar4 = *(uint *)(lVar9 + *plVar8);
        uVar6 = 0;
        if ((int)uVar4 < (int)plVar1[1]) {
          uVar6 = ~uVar4 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 4;
        *(undefined1 *)((longlong)(int)uVar4 + *plVar1) = 1;
      } while ((int)uVar7 <= param_2);
    }
    iVar5 = (*(int *)(*(longlong *)((longlong)this + 8) + 8) - param_1) + 1 + param_2;
  }
  else {
    lVar9 = (longlong)param_1 * 4;
    uVar7 = param_1;
    do {
      plVar8 = *(longlong **)((longlong)this + 8);
      plVar1 = *(longlong **)this;
      uVar4 = 0;
      if ((int)uVar7 < (int)plVar8[1]) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      uVar4 = *(uint *)(lVar9 + *plVar8);
      uVar6 = 0;
      if ((int)uVar4 < (int)plVar1[1]) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 4;
      *(undefined1 *)((longlong)(int)uVar4 + *plVar1) = 1;
    } while ((int)uVar7 <= param_2);
    iVar5 = (param_2 - param_1) + 1;
  }
  return iVar5;
}

// Compute @ 14c7eb180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UE::Geometry::FPolygroupRemesh::Compute(FPolygroupRemesh *this)

{
  TFunction<bool___cdecl(UE::Geometry::FGroupTopology_const_&,int,UE::Geometry::FIndex2i_const_&)>
  *pTVar1;
  double *pdVar2;
  undefined1 auVar3 [16];
  FDynamicMesh3 *pFVar4;
  FDynamicMesh3 *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ForAnyElementType FVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  FDynamicMeshAttributeSet *pFVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  FScriptContainerElement *pFVar26;
  int *piVar27;
  FDynamicMeshAttributeSet *pFVar28;
  FDynamicMeshAttributeSet *pFVar29;
  FGroupTopology *pFVar30;
  FGroupTopology *pFVar31;
  FGroupTopology *pFVar32;
  FScriptContainerElement *pFVar33;
  longlong lVar34;
  TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
  *_Dst;
  uint *puVar35;
  FDynamicMeshAttributeSet *pFVar36;
  longlong lVar37;
  double dVar38;
  uint *puVar39;
  ulonglong uVar40;
  uint uVar41;
  longlong lVar42;
  FGroupTopology *pFVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined1 auStackY_4b8 [32];
  <lambda_4> local_468;
  int local_464;
  bool local_45e [10];
  uint local_454;
  uint local_450;
  ulonglong local_448;
  FGroupTopology *local_440;
  TArray<bool,TSizedDefaultAllocator<32>_> local_438;
  ForAnyElementType local_428;
  int local_420 [2];
  FPolygroupRemesh *local_418;
  FGroupTopology *local_410;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_408;
  uint local_3f8;
  uint local_3f4;
  FGroupTopology *local_3f0;
  uint local_3e8;
  FGroupTopology *local_3e0;
  FGroupTopology *local_3d8;
  double local_3d0;
  FIndex3i_u_0 local_3c8;
  double local_3b8;
  int local_3b0;
  int local_3ac;
  int local_3a8;
  int local_3a4;
  FGroupTopology *local_3a0;
  uint local_398 [4];
  FGroupTopology *local_388;
  FGroupTopology *local_380;
  undefined8 local_378;
  int local_370;
  undefined4 local_368 [2];
  FScriptContainerElement *local_360;
  undefined4 local_358;
  undefined4 uStack_354;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_350;
  TFunction<bool___cdecl(UE::Geometry::FGroupTopology_const_&,int,UE::Geometry::FIndex2i_const_&)>
  *local_348;
  FMeshNormals local_340;
  FMeshNormals local_328;
  FDynamicMeshEditor local_310;
  FPolygroupRemesh *local_308;
  undefined1 local_300 [24];
  undefined8 local_2e8;
  undefined4 local_2e0;
  FIndex2i local_2d8;
  FDynamicMeshEditor local_2d0;
  FDynamicMeshAttributeSet *local_2c8;
  undefined1 local_2c0 [16];
  FGroupTopology *local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  undefined4 *local_290;
  undefined1 *local_288;
  code *local_280;
  FPolygroupRemesh **local_278;
  longlong local_268;
  longlong local_258 [3];
  longlong *local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double dStack_210;
  double local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  undefined1 local_1e8 [16];
  FGroupTopology *local_1c8;
  TSet<UE::Geometry::FIndex2i,DefaultKeyFuncs<UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
  local_1b8;
  undefined1 local_168 [88];
  longlong *local_110;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  local_3e8 = (uint)CONCAT71((int7)(local_d8 >> 8),1);
  local_340.Mesh = this->Mesh;
  local_340.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_340.Normals.ArrayNum = 0;
  local_340.Normals.ArrayMax = 0;
  local_418 = this;
  FMeshNormals::Compute_Triangle(&local_340);
  local_438.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_438.ArrayNum = 0;
  local_438.ArrayMax = 0;
  local_45e[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init
            (&local_438,local_45e,
             (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed);
  pFVar30 = this->Topology;
  iVar16 = (pFVar30->Corners).ArrayNum;
  pFVar26 = (pFVar30->Corners).AllocatorInstance.Data;
  pFVar33 = pFVar26 + (longlong)iVar16 * 0x18;
  while( true ) {
    if ((pFVar30->Corners).ArrayNum != iVar16) {
      local_45e[1] = false;
      `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FCorner_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_45e + 1);
    }
    if (pFVar26 == pFVar33) break;
    uVar41 = *(uint *)pFVar26;
    uVar23 = 0;
    if ((int)uVar41 < local_438.ArrayNum) {
      uVar23 = ~uVar41 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    pFVar26 = pFVar26 + 0x18;
    local_438.AllocatorInstance.Data[(int)uVar41] = (FScriptContainerElement)0x1;
  }
  local_1b8.Elements._0_8_ = 0;
  local_1b8.Elements._8_8_ = 0;
  local_1b8.Elements._32_8_ = 0;
  local_1b8.Elements._40_4_ = 0;
  local_1b8.Elements._44_4_ = 0x80;
  local_1b8.Elements._48_4_ = 0xffffffff;
  local_1b8.Elements._52_4_ = 0;
  local_1b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1b8.HashSize = 0;
  local_3b8 = cos(this->SimplificationAngleTolerance * __real_3f91df46a2529d39);
  local_3e0 = this->Topology;
  uVar44 = SUB84(local_3b8,0);
  uVar45 = (undefined4)((ulonglong)local_3b8 >> 0x20);
  uVar59 = SUB84(__real_3e45798ee0000000,0);
  uVar60 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
  uVar57 = SUB84(__real_3ff0000000000000,0);
  uVar58 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  local_450 = (local_3e0->Edges).ArrayNum;
  uVar25 = (ulonglong)(int)local_450;
  pFVar30 = (FGroupTopology *)(local_3e0->Edges).AllocatorInstance.Data;
  local_380 = (FGroupTopology *)(&pFVar30->_padding_ + uVar25 * 10);
LAB_14c7eb36f:
  do {
    pFVar43 = local_380;
    local_3f0 = pFVar30;
    if ((local_3e0->Edges).ArrayNum != (int)uVar25) {
      local_45e[2] = false;
      `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroupEdge_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_45e + 2);
    }
    if (pFVar30 == pFVar43) {
      local_388 = this->Topology;
      iVar16 = (local_388->Groups).ArrayNum;
      uVar25 = (ulonglong)iVar16;
      pFVar30 = (FGroupTopology *)(local_388->Groups).AllocatorInstance.Data;
      local_3b8 = (double)CONCAT44(local_3b8._4_4_,iVar16);
      local_360 = (FScriptContainerElement *)((longlong)pFVar30 + uVar25 * 0x38);
      do {
        pFVar33 = local_360;
        local_410 = pFVar30;
        if ((local_388->Groups).ArrayNum != (int)uVar25) {
          local_45e[3] = false;
          `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroup_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_45e + 3);
        }
        if (pFVar30 == (FGroupTopology *)pFVar33) {
          local_310.Mesh = this->Mesh;
          FDynamicMeshEditor::RemoveIsolatedVertices(&local_310);
          FDynamicMesh3::CompactInPlace(this->Mesh,(FCompactMaps *)0x0);
          pFVar29 = (FDynamicMeshAttributeSet *)0x0;
          pFVar28 = (this->Mesh->AttributeSet).Ptr;
          if (pFVar28 != (FDynamicMeshAttributeSet *)0x0) {
            pFVar18 = pFVar29;
            if (0 < (pFVar28->NormalLayers).Array.ArrayNum) {
              pFVar18 = *(FDynamicMeshAttributeSet **)
                         (pFVar28->NormalLayers).Array.AllocatorInstance.Data;
            }
            local_278 = &local_308;
            local_280 = Core::Private::Function::
                        TFunctionRefCaller<`UE::Geometry::FPolygroupRemesh::Compute'::__l122::<lambda_5>,bool,int,int,int>
                        ::Call;
            local_308 = this;
            TDynamicMeshOverlay<float,3>::CreateFromPredicate
                      ((TDynamicMeshOverlay<float,3> *)pFVar18,
                       (TFunctionRef<bool___cdecl(int,int,int)> *)&local_280,0.0);
            local_328.Mesh = this->Mesh;
            local_328.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_328.Normals.ArrayNum = 0;
            local_328.Normals.ArrayMax = 0;
            pFVar28 = ((local_328.Mesh)->AttributeSet).Ptr;
            pFVar18 = pFVar29;
            if (pFVar28 != (FDynamicMeshAttributeSet *)0x0) {
              pFVar18 = pFVar28;
            }
            pFVar28 = pFVar29;
            if (0 < (pFVar18->NormalLayers).Array.ArrayNum) {
              pFVar28 = *(FDynamicMeshAttributeSet **)
                         (pFVar18->NormalLayers).Array.AllocatorInstance.Data;
            }
            FMeshNormals::Compute_Overlay_FaceAvg
                      (&local_328,
                       (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar28,true,
                       true);
            pFVar28 = (this->Mesh->AttributeSet).Ptr;
            pFVar18 = pFVar29;
            if (pFVar28 != (FDynamicMeshAttributeSet *)0x0) {
              pFVar18 = pFVar28;
            }
            if (0 < (pFVar18->NormalLayers).Array.ArrayNum) {
              pFVar29 = *(FDynamicMeshAttributeSet **)
                         (pFVar18->NormalLayers).Array.AllocatorInstance.Data;
            }
            FMeshNormals::CopyToOverlay
                      (&local_328,
                       (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar29,false
                      );
            if (local_328.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_328.Normals.AllocatorInstance.Data);
            }
          }
          local_1b8.HashSize = 0;
          if (local_1b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_1b8.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<UE::Geometry::FIndex2i>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<UE::Geometry::FIndex2i>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_1b8.Elements);
          if (local_438.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_438.AllocatorInstance.Data);
          }
          if (local_340.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_340.Normals.AllocatorInstance.Data);
          }
          return SUB41(local_3e8,0);
        }
        uVar41 = *(uint *)((longlong)pFVar30 + 0x20);
        local_408.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_408.ArrayNum = 0;
        local_408.ArrayMax = 0;
        if ((int)uVar41 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar41);
        }
        if (0 < (int)uVar41) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,uVar41,&local_408.AllocatorInstance,0,&local_408.ArrayMax);
        }
        local_450 = *(uint *)((longlong)pFVar30 + 0x20);
        uVar25 = (ulonglong)(int)local_450;
        pFVar31 = *(FGroupTopology **)((longlong)pFVar30 + 0x18);
        pFVar43 = (FGroupTopology *)(&pFVar31->_padding_ + uVar25 * 5);
        local_3e0 = pFVar43;
        while( true ) {
          local_440 = pFVar31;
          if (*(int *)((longlong)pFVar30 + 0x20) != (int)uVar25) {
            local_45e[4] = false;
            `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroupBoundary_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_45e + 4);
          }
          if (pFVar31 == pFVar43) break;
          if (local_408.ArrayNum == local_408.ArrayMax) {
            local_408.ArrayNum =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_408.AllocatorInstance,&local_408.ArrayMax);
          }
          lVar34 = (longlong)local_408.ArrayNum;
          local_408.ArrayNum = local_408.ArrayNum + 1;
          pFVar33 = local_408.AllocatorInstance.Data + lVar34 * 0x10;
          *(FScriptContainerElement **)&pFVar33->field_0x0 = (FScriptContainerElement *)0x0;
          *(FScriptContainerElement **)(pFVar33 + 8) = (FScriptContainerElement *)0x0;
          uVar41 = (int)pFVar31->_padding_ - 1;
          if (-1 < (int)uVar41) {
            local_3f0 = (FGroupTopology *)(longlong)(int)uVar41;
            uVar25 = (longlong)local_3f0 * 4;
            do {
              uVar23 = 0;
              if ((int)uVar41 < (int)pFVar31->_padding_) {
                uVar23 = ~uVar41 >> 0x1f;
              }
              local_448 = uVar25;
              if ((uVar23 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar6 = (code *)swi(3);
                uVar13 = (*pcVar6)();
                return (bool)uVar13;
              }
              pFVar30 = this->Topology;
              uVar23 = *(uint *)(uVar25 + pFVar31->_padding_);
              lVar34 = (longlong)(int)uVar23;
              uVar24 = 0;
              if ((int)uVar23 < (pFVar30->Edges).ArrayNum) {
                uVar24 = ~uVar23 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar6 = (code *)swi(3);
                uVar13 = (*pcVar6)();
                return (bool)uVar13;
              }
              pFVar26 = (pFVar30->Edges).AllocatorInstance.Data;
              if (*(int *)(pFVar26 + lVar34 * 0x50 + 0x28) != 0) {
                pFVar4 = this->Mesh;
                if ((*(int *)(pFVar26 + lVar34 * 0x50 + 0x28) < 1) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar6 = (code *)swi(3);
                  uVar13 = (*pcVar6)();
                  return (bool)uVar13;
                }
                local_1e8 = *(undefined1 (*) [16])
                             (*(longlong *)
                               ((pFVar4->Edges).Blocks.AllocatorInstance.Data +
                               (ulonglong)(**(uint **)(pFVar26 + lVar34 * 0x50 + 0x20) >> 9) * 8) +
                             (ulonglong)(**(uint **)(pFVar26 + lVar34 * 0x50 + 0x20) & 0x1ff) * 0x10
                             );
                pFVar4 = this->Mesh;
                uVar23 = local_1e8._8_4_;
                iVar16 = 0;
                if ((pFVar4->TriangleGroups).bIsSet == false) {
                  iVar17 = -1;
                }
                else {
                  iVar17 = iVar16;
                  if ((-1 < (int)uVar23) &&
                     ((int)uVar23 <
                      (int)((pFVar4->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                           (pFVar4->TriangleRefCounts).RefCounts.CurBlockUsed))) {
                    if ((ushort)(*(short *)(*(longlong *)
                                             ((pFVar4->TriangleRefCounts).RefCounts.Blocks.
                                              AllocatorInstance.Data + (ulonglong)(uVar23 >> 9) * 8)
                                           + (ulonglong)(uVar23 & 0x1ff) * 2) - 1U) < 0xfffe) {
                      iVar17 = *(int *)(*(longlong *)
                                         ((pFVar4->TriangleGroups).TypedValue.Blocks.
                                          AllocatorInstance.Data + (ulonglong)(uVar23 >> 9) * 8) +
                                       (ulonglong)(uVar23 & 0x1ff) * 4);
                    }
                  }
                }
                uVar24 = local_1e8._12_4_;
                if (iVar17 == *(int *)local_410) {
                  uVar24 = uVar23;
                }
                lVar42 = *(longlong *)
                          ((pFVar4->Triangles).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar24 >> 9) * 8);
                iVar17 = *(int *)(lVar42 + 8 + (ulonglong)(uVar24 & 0x1ff) * 0xc);
                local_378 = *(undefined8 *)(lVar42 + (ulonglong)(uVar24 & 0x1ff) * 0xc);
                local_370 = iVar17;
                if ((*(int *)(pFVar26 + lVar34 * 0x50 + 0x18) < 1) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar6 = (code *)swi(3);
                  uVar13 = (*pcVar6)();
                  return (bool)uVar13;
                }
                iVar15 = **(int **)(pFVar26 + lVar34 * 0x50 + 0x10);
                if ((int)local_378 != iVar15) {
                  if (local_378._4_4_ == iVar15) {
                    iVar16 = 1;
                  }
                  else {
                    iVar16 = -1;
                    if (iVar17 == iVar15) {
                      iVar16 = 2;
                    }
                  }
                }
                iVar16 = iVar16 + 1;
                if ((*(int *)(pFVar26 + lVar34 * 0x50 + 0x18) < 2) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar6 = (code *)swi(3);
                  uVar13 = (*pcVar6)();
                  return (bool)uVar13;
                }
                if (*(int *)((longlong)&local_378 +
                            (longlong)
                            (iVar16 + (iVar16 / 3 + (iVar16 >> 0x1f) +
                                      (int)(((longlong)iVar16 / 3 + ((longlong)iVar16 >> 0x3f) &
                                            0xffffffffU) >> 0x1f)) * -3) * 4) ==
                    *(int *)(*(longlong *)(pFVar26 + lVar34 * 0x50 + 0x10) + 4)) {
                  uVar23 = *(int *)(pFVar26 + lVar34 * 0x50 + 0x18) - 1;
                  if (0 < (int)uVar23) {
                    lVar42 = (longlong)(int)uVar23 * 4;
                    do {
                      uVar24 = 0;
                      if ((int)uVar23 < *(int *)(pFVar26 + lVar34 * 0x50 + 0x18)) {
                        uVar24 = ~uVar23 >> 0x1f;
                      }
                      if ((uVar24 == 0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar12)) {
                        pcVar6 = (code *)swi(3);
                        uVar13 = (*pcVar6)();
                        return (bool)uVar13;
                      }
                      local_3f8 = *(uint *)(lVar42 + *(longlong *)(pFVar26 + lVar34 * 0x50 + 0x10));
                      lVar37 = (longlong)(int)local_3f8;
                      uVar24 = 0;
                      if ((int)local_3f8 < local_438.ArrayNum) {
                        uVar24 = ~local_3f8 >> 0x1f;
                      }
                      if ((uVar24 == 0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar12)) {
                        pcVar6 = (code *)swi(3);
                        uVar13 = (*pcVar6)();
                        return (bool)uVar13;
                      }
                      if (local_438.AllocatorInstance.Data[lVar37] != (FScriptContainerElement)0x0)
                      {
                        if (((*(FScriptContainerElement **)&pFVar33->field_0x0 <=
                              (FScriptContainerElement *)&local_3f8) &&
                            ((FScriptContainerElement *)&local_3f8 <
                             *(FScriptContainerElement **)&pFVar33->field_0x0 +
                             (longlong)*(int *)(pFVar33 + 0xc) * 4)) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar12)) {
                          pcVar6 = (code *)swi(3);
                          uVar13 = (*pcVar6)();
                          return (bool)uVar13;
                        }
                        iVar16 = *(int *)(pFVar33 + 8);
                        if (iVar16 == *(int *)(pFVar33 + 0xc)) {
                          iVar16 = Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x404,(ForAnyElementType *)pFVar33,
                                              (int *)(pFVar33 + 0xc));
                        }
                        *(int *)(pFVar33 + 8) = iVar16 + 1;
                        *(uint *)(*(FScriptContainerElement **)&pFVar33->field_0x0 +
                                 (longlong)iVar16 * 4) = local_3f8;
                      }
                      uVar23 = uVar23 - 1;
                      lVar42 = lVar42 + -4;
                      this = local_418;
                      pFVar31 = local_440;
                    } while (0 < (int)uVar23);
                  }
                }
                else {
                  iVar16 = *(int *)(pFVar26 + lVar34 * 0x50 + 0x18);
                  this = local_418;
                  if (1 < iVar16) {
                    lVar42 = 0;
                    uVar23 = 0;
                    do {
                      uVar24 = 0;
                      if ((int)uVar23 < *(int *)(pFVar26 + lVar34 * 0x50 + 0x18)) {
                        uVar24 = ~uVar23 >> 0x1f;
                      }
                      if ((uVar24 == 0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar12)) {
                        pcVar6 = (code *)swi(3);
                        uVar13 = (*pcVar6)();
                        return (bool)uVar13;
                      }
                      local_3f4 = *(uint *)(lVar42 + *(longlong *)(pFVar26 + lVar34 * 0x50 + 0x10));
                      lVar37 = (longlong)(int)local_3f4;
                      uVar24 = 0;
                      if ((int)local_3f4 < local_438.ArrayNum) {
                        uVar24 = ~local_3f4 >> 0x1f;
                      }
                      if ((uVar24 == 0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar12)) {
                        pcVar6 = (code *)swi(3);
                        uVar13 = (*pcVar6)();
                        return (bool)uVar13;
                      }
                      if (local_438.AllocatorInstance.Data[lVar37] != (FScriptContainerElement)0x0)
                      {
                        if (((*(FScriptContainerElement **)&pFVar33->field_0x0 <=
                              (FScriptContainerElement *)&local_3f4) &&
                            ((FScriptContainerElement *)&local_3f4 <
                             *(FScriptContainerElement **)&pFVar33->field_0x0 +
                             (longlong)*(int *)(pFVar33 + 0xc) * 4)) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar12)) {
                          pcVar6 = (code *)swi(3);
                          uVar13 = (*pcVar6)();
                          return (bool)uVar13;
                        }
                        iVar17 = *(int *)(pFVar33 + 8);
                        if (iVar17 == *(int *)(pFVar33 + 0xc)) {
                          iVar17 = Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x404,(ForAnyElementType *)pFVar33,
                                              (int *)(pFVar33 + 0xc));
                        }
                        *(int *)(pFVar33 + 8) = iVar17 + 1;
                        *(uint *)(*(FScriptContainerElement **)&pFVar33->field_0x0 +
                                 (longlong)iVar17 * 4) = local_3f4;
                      }
                      lVar42 = lVar42 + 4;
                      iVar17 = uVar23 + 2;
                      this = local_418;
                      pFVar31 = local_440;
                      uVar23 = uVar23 + 1;
                    } while (iVar17 < iVar16);
                  }
                }
              }
              uVar41 = uVar41 - 1;
              local_3f0 = (FGroupTopology *)((longlong)local_3f0 + -1);
              uVar25 = local_448 - 4;
              pFVar43 = local_3e0;
              pFVar30 = local_410;
              local_448 = uVar25;
            } while (-1 < (int)uVar41);
          }
          pFVar31 = (FGroupTopology *)&(pFVar31->ShouldAddExtraCornerAtVert).field_0x18;
          uVar25 = (ulonglong)local_450;
        }
        if (local_408.ArrayNum == 0) {
          iVar16 = 0;
        }
        else {
          local_428.Data = (FScriptContainerElement *)0x0;
          local_420[0] = 0;
          local_420[1] = 0;
          pFVar28 = (this->Mesh->AttributeSet).Ptr;
          if (pFVar28 != (FDynamicMeshAttributeSet *)0x0) {
            uVar41 = (**(code **)(pFVar28->_padding_ + 0xa8))();
            uVar25 = (ulonglong)uVar41;
            local_450 = uVar41;
            if (local_420[0] < (int)uVar41) {
              iVar17 = uVar41 - local_420[0];
              iVar16 = Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x50,8,iVar17,&local_428,local_420,local_420 + 1);
              DefaultConstructItems<TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>,int>
                        (local_428.Data + (longlong)iVar16 * 0x50,iVar17);
            }
            else {
              if ((int)uVar41 < 0) {
                    /* WARNING: Subroutine does not return */
                Core::Private::OnInvalidArrayNum(uVar25);
              }
              if ((int)uVar41 < local_420[0]) {
                uVar23 = local_420[0] - uVar41;
                if (((int)(uVar41 | uVar23) < 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x458,
                                        L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar6 = (code *)swi(3);
                  uVar13 = (*pcVar6)();
                  return (bool)uVar13;
                }
                if (uVar23 != 0) {
                  _Dst = (TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
                          *)(local_428.Data + (longlong)(int)uVar41 * 0x50);
                  DestructItems<TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>,int>
                            (_Dst,uVar23);
                  iVar16 = (local_420[0] - uVar23) - uVar41;
                  if (iVar16 != 0) {
                    memmove(_Dst,_Dst + (int)uVar23,(longlong)iVar16 * 0x50);
                  }
                  iVar16 = local_420[0] - uVar23;
                  local_420[0] = iVar16;
                  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x50,8,&local_428,iVar16,local_420 + 1);
                }
              }
            }
            local_454 = *(uint *)((longlong)pFVar30 + 0x10);
            uVar19 = (ulonglong)(int)local_454;
            pFVar31 = *(FGroupTopology **)((longlong)pFVar30 + 8);
            pFVar43 = (FGroupTopology *)((longlong)&pFVar31->_padding_ + uVar19 * 4);
            local_3e0 = pFVar43;
            while( true ) {
              local_3d8 = pFVar31;
              if (*(int *)((longlong)pFVar30 + 0x10) != (int)uVar19) {
                local_45e[5] = false;
                `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_45e + 5);
              }
              if (pFVar31 == pFVar43) break;
              uVar41 = 0;
              if (0 < (int)uVar25) {
                uVar23 = (int)pFVar31->_padding_ * 3;
                local_448 = (ulonglong)(uVar23 >> 9);
                dVar38 = (double)(ulonglong)(uVar23 & 0x1ff);
                local_3a0 = (FGroupTopology *)0x0;
                local_440 = (FGroupTopology *)0x0;
                local_3d0 = dVar38;
                do {
                  pFVar30 = local_3a0;
                  lVar34 = 0;
                  pFVar28 = (this->Mesh->AttributeSet).Ptr;
                  if ((int)uVar41 < (pFVar28->UVLayers).Array.ArrayNum) {
                    if (((int)uVar41 < 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), dVar38 = local_3d0, bVar12)) {
                      pcVar6 = (code *)swi(3);
                      uVar13 = (*pcVar6)();
                      return (bool)uVar13;
                    }
                    lVar34 = *(longlong *)
                              ((pFVar28->UVLayers).Array.AllocatorInstance.Data + (longlong)pFVar30)
                    ;
                  }
                  pFVar43 = local_440;
                  lVar42 = *(longlong *)(lVar34 + 0x78);
                  local_398[0] = 0xffffffff;
                  local_398[1] = 0xffffffff;
                  local_398[2] = 0xffffffff;
                  iVar16 = *(int *)(*(longlong *)(lVar42 + local_448 * 8) + (longlong)dVar38 * 4);
                  if (-1 < iVar16) {
                    puVar39 = local_398;
                    local_3f0 = (FGroupTopology *)0x3;
                    local_398[1] = *(undefined4 *)
                                    (*(longlong *)(lVar42 + (ulonglong)(uVar23 + 1 >> 9) * 8) +
                                    (ulonglong)(uVar23 + 1 & 0x1ff) * 4);
                    local_398[0] = iVar16;
                    local_398[2] = *(undefined4 *)
                                    (*(longlong *)(lVar42 + (ulonglong)(uVar23 + 2 >> 9) * 8) +
                                    (ulonglong)(uVar23 + 2 & 0x1ff) * 4);
                    do {
                      uVar24 = *puVar39;
                      local_368[0] = *(undefined4 *)
                                      (*(longlong *)
                                        (*(longlong *)(lVar34 + 0x60) + (ulonglong)(uVar24 >> 9) * 8
                                        ) + (ulonglong)(uVar24 & 0x1ff) * 4);
                      uVar22 = 0;
                      if ((int)uVar41 < local_420[0]) {
                        uVar22 = ~uVar41 >> 0x1f;
                      }
                      if ((uVar22 == 0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar12)) {
                        pcVar6 = (code *)swi(3);
                        uVar13 = (*pcVar6)();
                        return (bool)uVar13;
                      }
                      local_358 = *(undefined4 *)
                                   (*(longlong *)
                                     (*(longlong *)(lVar34 + 0x48) +
                                     (ulonglong)((uVar24 & 0x7fffffff) >> 8) * 8) +
                                   (ulonglong)(uVar24 * 2 & 0x1ff) * 4);
                      uStack_354 = *(undefined4 *)
                                    (*(longlong *)
                                      (*(longlong *)(lVar34 + 0x48) +
                                      (ulonglong)((uVar24 & 0x7fffffff) >> 8) * 8) +
                                    (ulonglong)(uVar24 * 2 + 1 & 0x1ff) * 4);
                      local_300._12_8_ = CONCAT44(uStack_354,local_358);
                      local_290 = local_368;
                      local_288 = local_300 + 8;
                      local_300._8_4_ = uVar24;
                      TSet<TTuple<int,TTuple<int,UE::Math::TVector2<float>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>,FDefaultSetAllocator>
                      ::
                      Emplace<TPairInitializer<int_const_&,TTuple<int,UE::Math::TVector2<float>_>_&&>_>
                                ((TSet<TTuple<int,TTuple<int,UE::Math::TVector2<float>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>,FDefaultSetAllocator>
                                  *)(local_428.Data + (longlong)pFVar43),
                                 (TPairInitializer<int_const_&,TTuple<int,UE::Math::TVector2<float>_>_&&>
                                  *)local_300,(bool *)&local_290);
                      puVar39 = puVar39 + 1;
                      local_3f0 = (FGroupTopology *)((longlong)local_3f0 + -1);
                    } while (local_3f0 != (FGroupTopology *)0x0);
                    local_3f0 = (FGroupTopology *)0x0;
                    pFVar30 = local_3a0;
                    dVar38 = local_3d0;
                    this = local_418;
                  }
                  uVar25 = (ulonglong)local_450;
                  local_440 = (FGroupTopology *)((longlong)pFVar43 + 0x50);
                  local_3a0 = (FGroupTopology *)((longlong)pFVar30 + 8);
                  uVar41 = uVar41 + 1;
                  pFVar31 = local_3d8;
                  pFVar43 = local_3e0;
                  pFVar30 = local_410;
                } while ((int)uVar41 < (int)local_450);
              }
              uVar19 = (ulonglong)local_454;
              pFVar31 = (FGroupTopology *)((longlong)&pFVar31->_padding_ + 4);
            }
          }
          puVar35 = *(uint **)((longlong)pFVar30 + 8);
          dVar38 = 0.0;
          iVar16 = *(int *)((longlong)pFVar30 + 0x10);
          dVar8 = 0.0;
          dVar9 = 0.0;
          puVar39 = puVar35 + iVar16;
          while( true ) {
            if (*(int *)((longlong)pFVar30 + 0x10) != iVar16) {
              local_45e[6] = false;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_45e + 6);
            }
            if (puVar35 == puVar39) break;
            uVar41 = *puVar35;
            lVar34 = (longlong)(int)uVar41;
            uVar23 = 0;
            if ((int)uVar41 < local_340.Normals.ArrayNum) {
              uVar23 = ~uVar41 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar6 = (code *)swi(3);
              uVar13 = (*pcVar6)();
              return (bool)uVar13;
            }
            puVar35 = puVar35 + 1;
            dVar38 = dVar38 + *(double *)(local_340.Normals.AllocatorInstance.Data + lVar34 * 0x18);
            dVar8 = dVar8 + *(double *)
                             (local_340.Normals.AllocatorInstance.Data + lVar34 * 0x18 + 8);
            dVar9 = dVar9 + *(double *)
                             (local_340.Normals.AllocatorInstance.Data + lVar34 * 0x18 + 0x10);
          }
          dVar46 = dVar8 * dVar8 + dVar38 * dVar38 + dVar9 * dVar9;
          if ((double)CONCAT44(uVar60,uVar59) <= dVar46 && dVar46 != (double)CONCAT44(uVar60,uVar59)
             ) {
            local_220 = (double)CONCAT44(uVar58,uVar57) / SQRT(dVar46);
            dVar38 = dVar38 * local_220;
            dVar8 = dVar8 * local_220;
            dVar9 = dVar9 * local_220;
          }
          pFVar4 = this->Mesh;
          if ((local_408.ArrayNum < 1) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
          FVar10.Data = local_408.AllocatorInstance.Data;
          if ((*(int *)(local_408.AllocatorInstance.Data + 8) < 1) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
          uVar25 = (ulonglong)(**(uint **)FVar10.Data & 0x1ff);
          lVar34 = *(longlong *)
                    ((pFVar4->Vertices).Blocks.AllocatorInstance.Data +
                    (ulonglong)(**(uint **)FVar10.Data >> 9) * 8);
          pdVar2 = (double *)(lVar34 + uVar25 * 0x18);
          dVar47 = *pdVar2;
          dVar49 = pdVar2[1];
          dVar46 = *(double *)(lVar34 + 0x10 + uVar25 * 0x18);
          local_2d0.Mesh = this->Mesh;
          FDynamicMeshEditor::RemoveTriangles
                    (&local_2d0,(TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pFVar30 + 8),
                     false);
          uVar41 = 0;
          local_268 = *(longlong *)&this->PlanarTriangulationFunc;
          local_240 = (longlong *)0x0;
          if (*(longlong *)&this->PlanarTriangulationFunc != 0) {
            puVar20 = *(undefined8 **)&(this->PlanarTriangulationFunc).field_0x28;
            if (puVar20 == (undefined8 *)0x0) {
              puVar20 = (undefined8 *)&(this->PlanarTriangulationFunc).field_0x10;
            }
            (**(code **)*puVar20)(puVar20,local_258);
          }
          local_168._24_8_ = this->Mesh;
          local_168._32_8_ = &local_408;
          local_168._8_8_ = (FGroupTopology *)0x0;
          local_168._16_8_ = 0;
          local_168._0_8_ = &___7FPlanarHoleFiller_Geometry_UE__6B_;
          local_168._48_8_ = local_268;
          local_110 = (longlong *)0x0;
          if (local_268 != 0) {
            plVar21 = local_258;
            if (local_240 != (longlong *)0x0) {
              plVar21 = local_240;
            }
            (**(code **)*plVar21)(plVar21,local_168 + 0x40);
          }
          local_f0._s_0.X = dVar38;
          local_f0._s_0.Y = dVar8;
          local_f0._s_0.Z = dVar9;
          local_108._s_0.X = dVar47;
          local_108._s_0.Y = dVar49;
          local_108._s_0.Z = dVar46;
          if (local_268 != 0) {
            plVar21 = local_258;
            if (local_240 != (longlong *)0x0) {
              plVar21 = local_240;
            }
            (**(code **)(*plVar21 + 0x10))();
          }
          bVar12 = FPlanarHoleFiller::Fill((FPlanarHoleFiller *)local_168,*(int *)pFVar30);
          local_3e8 = local_3e8 & 0xff;
          if (!bVar12) {
            local_3e8 = 0;
          }
          pFVar28 = (this->Mesh->AttributeSet).Ptr;
          if (pFVar28 != (FDynamicMeshAttributeSet *)0x0) {
            pFVar29 = (FDynamicMeshAttributeSet *)0x0;
            iVar16 = (**(code **)(pFVar28->_padding_ + 0xa8))();
            pFVar43 = (FGroupTopology *)(longlong)iVar16;
            pFVar28 = pFVar29;
            local_3e0 = pFVar43;
            if (0 < iVar16) {
              do {
                pFVar18 = (this->Mesh->AttributeSet).Ptr;
                pFVar36 = pFVar29;
                if (pFVar18 != (FDynamicMeshAttributeSet *)0x0) {
                  pFVar36 = pFVar18;
                }
                pFVar18 = pFVar29;
                if (((int)uVar41 < (pFVar36->UVLayers).Array.ArrayNum) && (-1 < (int)uVar41)) {
                  if (((int)uVar41 < 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar6 = (code *)swi(3);
                    uVar13 = (*pcVar6)();
                    return (bool)uVar13;
                  }
                  pFVar18 = *(FDynamicMeshAttributeSet **)
                             ((pFVar36->UVLayers).Array.AllocatorInstance.Data +
                             (longlong)pFVar28 * 8);
                }
                uVar23 = 0;
                if ((int)uVar41 < local_420[0]) {
                  uVar23 = ~uVar41 >> 0x1f;
                }
                local_2c8 = pFVar18;
                if ((uVar23 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar6 = (code *)swi(3);
                  uVar13 = (*pcVar6)();
                  return (bool)uVar13;
                }
                Algo::
                ForEachIf<TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>_&,_UE::Geometry::FPolygroupRemesh::Compute_::__l103::<lambda_3>,_UE::Geometry::FPolygroupRemesh::Compute_::__l103::<lambda_4>_>
                          ((TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
                            *)(local_428.Data + (longlong)(int)uVar41 * 0x50),(<lambda_3>)&local_2c8
                           ,local_468);
                uVar41 = uVar41 + 1;
                pFVar28 = (FDynamicMeshAttributeSet *)((longlong)&pFVar28->_padding_ + 1);
              } while ((longlong)pFVar28 < (longlong)pFVar43);
            }
            uVar11 = local_168._16_8_;
            uVar25 = (ulonglong)(int)local_168._16_4_;
            pFVar31 = (FGroupTopology *)((longlong)(longlong *)local_168._8_8_ + uVar25 * 4);
            local_380 = pFVar31;
            pFVar32 = (FGroupTopology *)local_168._8_8_;
            while( true ) {
              local_3d8 = pFVar32;
              if (local_168._16_4_ != (int)uVar25) {
                local_45e[7] = false;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_45e + 7);
              }
              pFVar30 = local_410;
              if (pFVar32 == pFVar31) break;
              local_450 = (uint)pFVar32->_padding_;
              uVar25 = 0;
              if (0 < (longlong)pFVar43) {
                local_448 = (ulonglong)(local_450 >> 9);
                uVar41 = local_450 & 0x1ff;
                uVar19 = uVar25;
                uVar40 = uVar25;
                do {
                  pFVar29 = (FDynamicMeshAttributeSet *)0x0;
                  pFVar28 = (this->Mesh->AttributeSet).Ptr;
                  pFVar18 = pFVar29;
                  if (pFVar28 != (FDynamicMeshAttributeSet *)0x0) {
                    pFVar18 = pFVar28;
                  }
                  uVar23 = (uint)uVar40;
                  if (((int)uVar23 < (pFVar18->UVLayers).Array.ArrayNum) && (-1 < (int)uVar23)) {
                    if (((int)uVar23 < 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar6 = (code *)swi(3);
                      uVar13 = (*pcVar6)();
                      return (bool)uVar13;
                    }
                    pFVar29 = *(FDynamicMeshAttributeSet **)
                               ((pFVar18->UVLayers).Array.AllocatorInstance.Data + uVar19 * 8);
                  }
                  lVar42 = 0;
                  lVar34 = *(longlong *)
                            ((local_418->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                            local_448 * 8);
                  local_2e8 = *(undefined8 *)(lVar34 + (ulonglong)uVar41 * 0xc);
                  local_2e0 = *(undefined4 *)(lVar34 + 8 + (ulonglong)uVar41 * 0xc);
                  local_3c8._0_8_ = 0xffffffffffffffff;
                  local_3c8._s_0.C = -1;
                  do {
                    uVar24 = 0;
                    if ((int)uVar23 < local_420[0]) {
                      uVar24 = ~uVar23 >> 0x1f;
                    }
                    if ((uVar24 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar6 = (code *)swi(3);
                      uVar13 = (*pcVar6)();
                      return (bool)uVar13;
                    }
                    if (*(int *)(local_428.Data + uVar25 + 8) ==
                        *(int *)(local_428.Data + uVar25 + 0x34)) {
LAB_14c7ed128:
                      local_3c8._0_8_ = 0xffffffffffffffff;
                      local_3c8._s_0.C = -1;
                      break;
                    }
                    pFVar33 = *(FScriptContainerElement **)(local_428.Data + uVar25 + 0x38 + 8);
                    pFVar26 = local_428.Data + uVar25 + 0x38;
                    if (pFVar33 != (FScriptContainerElement *)0x0) {
                      pFVar26 = pFVar33;
                    }
                    iVar16 = *(int *)(pFVar26 +
                                     (ulonglong)
                                     (*(int *)(local_428.Data + uVar25 + 0x48) - 1U &
                                     *(uint *)((longlong)&local_2e8 + lVar42)) * 4);
                    if (iVar16 == -1) goto LAB_14c7ed128;
                    while (lVar34 = *(longlong *)(local_428.Data + uVar25) + (longlong)iVar16 * 0x18
                          , *(uint *)(*(longlong *)(local_428.Data + uVar25) +
                                     (longlong)iVar16 * 0x18) !=
                            *(uint *)((longlong)&local_2e8 + lVar42)) {
                      iVar16 = *(int *)(lVar34 + 0x10);
                      if (iVar16 == -1) goto LAB_14c7ed128;
                    }
                    piVar27 = (int *)(lVar34 + 4);
                    if (lVar34 == 0) {
                      piVar27 = (int *)0x0;
                    }
                    if (piVar27 == (int *)0x0) goto LAB_14c7ed128;
                    iVar16 = *piVar27;
                    if (iVar16 == -1) {
                      iVar16 = TDynamicMeshOverlay<float,2>::AppendElement
                                         ((TDynamicMeshOverlay<float,2> *)pFVar29,
                                          (float *)(piVar27 + 1));
                    }
                    *(int *)((longlong)&local_3c8 + lVar42) = iVar16;
                    lVar42 = lVar42 + 4;
                  } while (lVar42 < 0xc);
                  TDynamicMeshOverlay<float,2>::SetTriangle
                            ((TDynamicMeshOverlay<float,2> *)pFVar29,local_450,
                             (FIndex3i *)&local_3c8._s_0,false);
                  uVar40 = (ulonglong)(uVar23 + 1);
                  uVar19 = uVar19 + 1;
                  uVar25 = uVar25 + 0x50;
                  pFVar32 = local_3d8;
                  pFVar31 = local_380;
                  this = local_418;
                  pFVar43 = local_3e0;
                } while ((longlong)uVar19 < (longlong)local_3e0);
              }
              uVar25 = uVar11 & 0xffffffff;
              pFVar32 = (FGroupTopology *)((longlong)&pFVar32->_padding_ + 4);
            }
          }
          local_168._0_8_ = &___7FPlanarHoleFiller_Geometry_UE__6B_;
          if (local_168._48_8_ != 0) {
            plVar21 = (longlong *)(local_168 + 0x40);
            if (local_110 != (longlong *)0x0) {
              plVar21 = local_110;
            }
            (**(code **)(*plVar21 + 0x10))();
          }
          if ((FGroupTopology *)local_168._8_8_ != (FGroupTopology *)0x0) {
            FMemory::Free((void *)local_168._8_8_);
          }
          DestructItems<TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>,int>
                    ((TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
                      *)local_428.Data,local_420[0]);
          iVar16 = local_408.ArrayNum;
          if ((TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
               *)local_428.Data !=
              (TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
               *)0x0) {
            FMemory::Free(local_428.Data);
            iVar16 = local_408.ArrayNum;
          }
        }
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)local_408.AllocatorInstance.Data,
                   iVar16);
        if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_408.AllocatorInstance.Data !=
            (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_408.AllocatorInstance.Data);
        }
        pFVar30 = (FGroupTopology *)((longlong)pFVar30 + 0x38);
        uVar25 = (ulonglong)local_3b8 & 0xffffffff;
      } while( true );
    }
    iVar16 = *(int *)&(pFVar30->ShouldAddExtraCornerAtVert).field_0x8;
    pTVar1 = &pFVar30->ShouldAddExtraCornerAtVert;
    local_348 = pTVar1;
    local_350 = &local_438;
    if (iVar16 < 3) {
      `UE::Geometry::FPolygroupRemesh::Compute'::__l10::<lambda_2>::operator()
                (&local_350,0,iVar16 + -1);
      pFVar30 = (FGroupTopology *)&pFVar30->Groups;
      uVar25 = (ulonglong)local_450;
      goto LAB_14c7eb36f;
    }
    uVar25 = (ulonglong)(*(uint *)(*(longlong *)pTVar1 + 4) & 0x1ff);
    lVar34 = *(longlong *)
              ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
              (ulonglong)(*(uint *)(*(longlong *)pTVar1 + 4) >> 9) * 8);
    auVar3 = *(undefined1 (*) [16])(lVar34 + uVar25 * 0x18);
    uVar51 = auVar3._0_4_;
    uVar52 = auVar3._4_4_;
    uVar53 = auVar3._8_4_;
    uVar54 = auVar3._12_4_;
    local_2b0 = *(FGroupTopology **)(lVar34 + 0x10 + uVar25 * 0x18);
    uVar55 = SUB84(local_2b0,0);
    uVar56 = (undefined4)((ulonglong)local_2b0 >> 0x20);
    uVar25 = (ulonglong)(**(uint **)pTVar1 & 0x1ff);
    lVar34 = *(longlong *)
              ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
              (ulonglong)(**(uint **)pTVar1 >> 9) * 8);
    local_208 = *(double *)(lVar34 + 0x10 + uVar25 * 0x18);
    pdVar2 = (double *)(lVar34 + uVar25 * 0x18);
    dVar9 = (double)local_2b0 - local_208;
    dVar38 = auVar3._0_8_ - *pdVar2;
    dVar8 = auVar3._8_8_ - pdVar2[1];
    dVar46 = dVar8 * dVar8 + dVar38 * dVar38 + dVar9 * dVar9;
    if ((double)CONCAT44(uVar60,uVar59) <= dVar46 && dVar46 != (double)CONCAT44(uVar60,uVar59)) {
      local_238 = (double)CONCAT44(uVar58,uVar57) / SQRT(dVar46);
      dVar38 = dVar38 * local_238;
      dVar8 = dVar8 * local_238;
      dVar9 = dVar9 * local_238;
    }
    if ((*(int *)&(pFVar30->ShouldAddExtraCornerAtVert).field_0x8 < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    iVar16 = *(int *)&(pFVar30->ShouldAddExtraCornerAtVert).field_0x8;
    uVar22 = iVar16 - 1;
    uVar41 = **(uint **)pTVar1;
    local_360 = (FScriptContainerElement *)(ulonglong)uVar41;
    uVar24 = 0;
    uVar23 = uVar24;
    if ((int)uVar22 < iVar16) {
      uVar23 = ~uVar22 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    iVar16 = *(int *)&(pFVar30->ShouldAddExtraCornerAtVert).field_0x8;
    uVar23 = *(uint *)(*(longlong *)pTVar1 + -4 + (longlong)iVar16 * 4);
    local_388 = (FGroupTopology *)(ulonglong)uVar23;
    if ((iVar16 < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    uVar22 = **(uint **)pTVar1;
    uVar14 = uVar24;
    if ((int)uVar22 < local_438.ArrayNum) {
      uVar14 = ~uVar22 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    if ((local_438.AllocatorInstance.Data[(int)uVar22] == (FScriptContainerElement)0x0) &&
       (uVar41 == uVar23)) {
      iVar16 = *(int *)&(pFVar30->ShouldAddExtraCornerAtVert).field_0x8;
      pFVar4 = this->Mesh;
      local_468 = (<lambda_4>)0x1;
      uVar23 = iVar16 - 1;
      uVar41 = uVar24;
      if ((int)uVar23 < iVar16) {
        uVar41 = ~uVar23 >> 0x1f;
      }
      if ((uVar41 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        uVar13 = (*pcVar6)();
        return (bool)uVar13;
      }
      iVar16 = *(int *)&(pFVar30->ShouldAddExtraCornerAtVert).field_0x8;
      uVar41 = *(uint *)(*(longlong *)pTVar1 + -4 + (longlong)iVar16 * 4);
      pFVar5 = this->Mesh;
      uVar25 = (ulonglong)(uVar41 & 0x1ff);
      lVar34 = *(longlong *)
                ((pFVar4->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar41 >> 9) * 8);
      pdVar2 = (double *)(lVar34 + uVar25 * 0x18);
      local_298 = *(double *)(lVar34 + 0x10 + uVar25 * 0x18);
      local_2a8 = *pdVar2;
      dStack_2a0 = pdVar2[1];
      uVar41 = uVar24;
      if ((int)(iVar16 - 2U) < iVar16) {
        uVar41 = ~(iVar16 - 2U) >> 0x1f;
      }
      if ((uVar41 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        uVar13 = (*pcVar6)();
        return (bool)uVar13;
      }
      iVar16 = *(int *)&(pFVar30->ShouldAddExtraCornerAtVert).field_0x8;
      uVar41 = *(uint *)(*(longlong *)pTVar1 + -8 + (longlong)iVar16 * 4);
      uVar25 = (ulonglong)(uVar41 & 0x1ff);
      lVar34 = *(longlong *)
                ((pFVar5->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar41 >> 9) * 8);
      pdVar2 = (double *)(lVar34 + uVar25 * 0x18);
      local_200 = *pdVar2;
      dStack_1f8 = pdVar2[1];
      local_1f0 = *(double *)(lVar34 + 0x10 + uVar25 * 0x18);
      dVar50 = local_2a8 - local_200;
      dVar46 = local_298 - local_1f0;
      dVar49 = dStack_2a0 - dStack_1f8;
      dVar47 = dVar49 * dVar49 + dVar50 * dVar50 + dVar46 * dVar46;
      if ((double)CONCAT44(uVar60,uVar59) <= dVar47 && dVar47 != (double)CONCAT44(uVar60,uVar59)) {
        local_230 = (double)CONCAT44(uVar58,uVar57) / SQRT(dVar47);
        dVar50 = dVar50 * local_230;
        dVar49 = dVar49 * local_230;
        dVar46 = dVar46 * local_230;
      }
      if (dVar49 * dVar8 + dVar50 * dVar38 + dVar46 * dVar9 < (double)CONCAT44(uVar45,uVar44)) {
        if ((iVar16 < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        uVar41 = **(uint **)pTVar1;
        uVar23 = uVar24;
        if ((int)uVar41 < local_438.ArrayNum) {
          uVar23 = ~uVar41 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        local_438.AllocatorInstance.Data[(int)uVar41] = (FScriptContainerElement)0x1;
        goto LAB_14c7eb82d;
      }
    }
    else {
LAB_14c7eb82d:
      local_468 = (<lambda_4>)0x0;
    }
    local_3d0 = dVar9;
    if ((*(int *)&(pFVar30->ShouldAddExtraCornerAtVert).field_0x8 < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    uVar41 = **(uint **)pTVar1;
    if ((int)uVar41 < local_438.ArrayNum) {
      uVar24 = ~uVar41 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    iVar16 = *(int *)&(pFVar30->ShouldAddExtraCornerAtVert).field_0x8;
    uVar24 = iVar16 - 1;
    uVar41 = (local_438.AllocatorInstance.Data[(int)uVar41] != (FScriptContainerElement)0x0) - 1;
    uVar23 = 0;
    if ((int)uVar24 < iVar16) {
      uVar23 = ~uVar24 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    uVar23 = *(uint *)(*(longlong *)pTVar1 + -4 +
                      (longlong)*(int *)&(pFVar30->ShouldAddExtraCornerAtVert).field_0x8 * 4);
    uVar24 = 0;
    if ((int)uVar23 < local_438.ArrayNum) {
      uVar24 = ~uVar23 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    pFVar33 = local_438.AllocatorInstance.Data + (int)uVar23;
    if ((*(int *)&(pFVar30->ShouldAddExtraCornerAtVert).field_0x8 < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    uVar23 = **(uint **)pTVar1;
    uVar24 = 0;
    if ((int)uVar23 < local_438.ArrayNum) {
      uVar24 = ~uVar23 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    iVar16 = *(int *)&(pFVar30->ShouldAddExtraCornerAtVert).field_0x8;
    uVar24 = 1;
    local_464 = (uint)(byte)local_438.AllocatorInstance.Data[(int)uVar23] + (uint)(byte)*pFVar33;
    pFVar43 = pFVar30;
    uVar23 = uVar41;
    if (2 < iVar16) {
      local_410 = (FGroupTopology *)&DAT_00000004;
      local_440 = (FGroupTopology *)((longlong)(int)uVar41 * 4);
      dVar46 = dVar38;
      dVar47 = dVar8;
      while( true ) {
        pFVar43 = local_410;
        pFVar4 = this->Mesh;
        local_454 = uVar24 + 1;
        uVar22 = 0;
        if ((int)local_454 < iVar16) {
          uVar22 = ~local_454 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        local_3a0 = (FGroupTopology *)((longlong)&pFVar43->_padding_ + 4);
        uVar22 = *(uint *)((longlong)&local_3a0->_padding_ + *(longlong *)pTVar1);
        uVar25 = (ulonglong)(uVar22 & 0x1ff);
        lVar34 = *(longlong *)
                  ((pFVar4->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar22 >> 9) * 8);
        pdVar2 = (double *)(lVar34 + uVar25 * 0x18);
        local_218 = *pdVar2;
        dStack_210 = pdVar2[1];
        local_3d8 = *(FGroupTopology **)(lVar34 + 0x10 + uVar25 * 0x18);
        dVar49 = local_218 - (double)CONCAT44(uVar52,uVar51);
        local_1c8 = local_3d8;
        dVar7 = dStack_210 - (double)CONCAT44(uVar54,uVar53);
        dVar50 = (double)local_3d8 - (double)CONCAT44(uVar56,uVar55);
        dVar48 = dVar7 * dVar7 + dVar49 * dVar49 + dVar50 * dVar50;
        if (__real_3e45798ee0000000 < dVar48) {
          local_228 = __real_3ff0000000000000 / SQRT(dVar48);
          dVar49 = dVar49 * local_228;
          dVar7 = dVar7 * local_228;
          dVar50 = dVar50 * local_228;
        }
        uVar22 = 0;
        if ((int)uVar24 < *(int *)&(pFVar30->ShouldAddExtraCornerAtVert).field_0x8) {
          uVar22 = ~uVar24 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        uVar22 = *(uint *)((longlong)&pFVar43->_padding_ + *(longlong *)pTVar1);
        uVar14 = 0;
        if ((int)uVar22 < local_438.ArrayNum) {
          uVar14 = ~uVar22 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        if (((local_438.AllocatorInstance.Data[(int)uVar22] != (FScriptContainerElement)0x0) ||
            (dVar7 * dVar47 + dVar49 * dVar46 + dVar50 * dVar9 < local_3b8)) ||
           (uVar14 = local_454, dVar7 * dVar8 + dVar49 * dVar38 + dVar50 * local_3d0 < local_3b8)) {
          local_464 = local_464 + 1;
          uVar14 = 0;
          if ((int)uVar22 < local_438.ArrayNum) {
            uVar14 = ~uVar22 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
          local_438.AllocatorInstance.Data[(int)uVar22] = (FScriptContainerElement)0x1;
          uVar14 = local_454;
          if ((uVar23 != 0xffffffff) && ((int)(uVar23 + 1) < (int)uVar24)) {
            uVar22 = 0;
            if ((int)uVar24 < *(int *)&(pFVar30->ShouldAddExtraCornerAtVert).field_0x8) {
              uVar22 = ~uVar24 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar6 = (code *)swi(3);
              uVar13 = (*pcVar6)();
              return (bool)uVar13;
            }
            pFVar43 = local_410;
            iVar16 = *(int *)((longlong)&local_410->_padding_ + *(longlong *)pTVar1);
            uVar22 = 0;
            if ((int)uVar23 < *(int *)&(pFVar30->ShouldAddExtraCornerAtVert).field_0x8) {
              uVar22 = ~uVar23 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar6 = (code *)swi(3);
              uVar13 = (*pcVar6)();
              return (bool)uVar13;
            }
            iVar17 = *(int *)((longlong)&local_440->_padding_ + *(longlong *)pTVar1);
            iVar15 = FDynamicMesh3::FindEdge(local_418->Mesh,iVar17,iVar16);
            uVar14 = local_454;
            if (iVar15 == -1) {
              local_3b0 = iVar17;
              local_3ac = iVar16;
              if (iVar16 < iVar17) {
                local_3b0 = iVar16;
                local_3ac = iVar17;
              }
              TSet<UE::Geometry::FIndex2i,DefaultKeyFuncs<UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>
              ::Emplace<UE::Geometry::FIndex2i_const_&>(&local_1b8,&local_2d8,(bool *)&local_3b0);
              local_410 = pFVar43;
              uVar14 = local_454;
            }
            else {
              iVar16 = `UE::Geometry::FPolygroupRemesh::Compute'::__l10::<lambda_2>::operator()
                                 (&local_350,uVar23 + 1,local_454 - 2);
              local_464 = local_464 + iVar16;
              local_410 = pFVar43;
            }
          }
          uVar23 = uVar24;
          dVar38 = dVar49;
          dVar8 = dVar7;
          local_440 = local_410;
          local_3d0 = dVar50;
          if (uVar41 == 0xffffffff) {
            uVar41 = uVar24;
          }
        }
        uVar24 = uVar14;
        local_2c0._8_8_ = dStack_210;
        local_2c0._0_8_ = local_218;
        local_410 = local_3a0;
        iVar16 = *(int *)&(pFVar30->ShouldAddExtraCornerAtVert).field_0x8;
        local_2b0 = local_3d8;
        this = local_418;
        if (iVar16 <= (int)(uVar24 + 1)) break;
        uVar55 = SUB84(local_3d8,0);
        uVar56 = (undefined4)((ulonglong)local_3d8 >> 0x20);
        uVar53 = SUB84(dStack_210,0);
        uVar54 = (undefined4)((ulonglong)dStack_210 >> 0x20);
        uVar51 = SUB84(local_218,0);
        uVar52 = (undefined4)((ulonglong)local_218 >> 0x20);
        dVar46 = dVar49;
        dVar47 = dVar7;
        dVar9 = dVar50;
      }
      uVar44 = SUB84(local_3b8,0);
      uVar45 = (undefined4)((ulonglong)local_3b8 >> 0x20);
      pFVar43 = local_3f0;
    }
    uVar24 = iVar16 - 1;
    if (local_464 < (int)(((int)local_360 == (int)local_388) + 2)) {
      iVar16 = 0;
LAB_14c7ebfc9:
      `UE::Geometry::FPolygroupRemesh::Compute'::__l10::<lambda_2>::operator()
                (&local_350,iVar16,uVar24);
    }
    else if ((local_468 != (<lambda_4>)0x0) || (uVar41 = uVar24, 1 < (int)(uVar24 - uVar23))) {
      uVar24 = 0;
      if ((int)uVar41 < iVar16) {
        uVar24 = ~uVar41 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        uVar13 = (*pcVar6)();
        return (bool)uVar13;
      }
      iVar16 = *(int *)(*(longlong *)pTVar1 + (longlong)(int)uVar41 * 4);
      uVar24 = 0;
      if ((int)uVar23 < *(int *)&(pFVar30->ShouldAddExtraCornerAtVert).field_0x8) {
        uVar24 = ~uVar23 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        uVar13 = (*pcVar6)();
        return (bool)uVar13;
      }
      iVar17 = *(int *)(*(longlong *)pTVar1 + (longlong)(int)uVar23 * 4);
      iVar15 = FDynamicMesh3::FindEdge(this->Mesh,iVar17,iVar16);
      if (iVar15 != -1) {
        uVar24 = uVar41 - 1;
        iVar16 = uVar23 + 1;
        goto LAB_14c7ebfc9;
      }
      local_3a8 = iVar17;
      local_3a4 = iVar16;
      if (iVar16 < iVar17) {
        local_3a8 = iVar16;
        local_3a4 = iVar17;
      }
      TSet<UE::Geometry::FIndex2i,DefaultKeyFuncs<UE::Geometry::FIndex2i,0>,FDefaultSetAllocator>::
      Emplace<UE::Geometry::FIndex2i_const_&>
                (&local_1b8,(FIndex2i *)(local_300 + 4),(bool *)&local_3a8);
    }
    uVar59 = SUB84(__real_3e45798ee0000000,0);
    uVar60 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    uVar57 = SUB84(__real_3ff0000000000000,0);
    uVar58 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    pFVar30 = (FGroupTopology *)&pFVar43->Groups;
    uVar25 = (ulonglong)local_450;
  } while( true );
}

