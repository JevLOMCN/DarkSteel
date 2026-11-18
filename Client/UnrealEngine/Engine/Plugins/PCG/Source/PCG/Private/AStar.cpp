// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// operator() @ 149f36790

bool __thiscall
`PCGSpatialAlgo::AStar::ExecuteSearchIteration'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *(longlong *)this;
  uVar5 = 0;
  if (param_2 < *(int *)(lVar6 + 0x8078)) {
    uVar5 = (uint)~param_2 >> 0x1f;
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
  lVar1 = *(longlong *)this;
  lVar7 = *(longlong *)(lVar6 + 0x8070);
  if (*(longlong *)(lVar6 + 0x8070) == 0) {
    lVar7 = lVar6 + 0x70;
  }
  uVar5 = 0;
  if (param_1 < *(int *)(lVar1 + 0x8078)) {
    uVar5 = (uint)~param_1 >> 0x1f;
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
  lVar6 = *(longlong *)(lVar1 + 0x8070);
  if (*(longlong *)(lVar1 + 0x8070) == 0) {
    lVar6 = lVar1 + 0x70;
  }
  return *(double *)(lVar6 + 0x18 + (longlong)param_1 * 0x20) <
         *(double *)((longlong)param_2 * 0x20 + 0x18 + lVar7);
}

// operator() @ 149f37a40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`PCGSpatialAlgo::AStar::ExecuteSearchIteration'::__l2::<lambda_2>::operator()
          (void *this,FPCGPoint *param_1,double param_2)

{
  int *piVar1;
  undefined4 uVar2;
  ForElementType<PCGSpatialAlgo::AStar::FNode> FVar3;
  code *pcVar4;
  FPCGPoint *pFVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  int *piVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  int *piVar16;
  longlong lVar17;
  uint *puVar18;
  ForElementType<PCGSpatialAlgo::AStar::FNode> FVar19;
  double dVar20;
  double dVar21;
  uint local_res8 [2];
  FPCGPoint *local_res10;
  int local_res20 [2];
  TPairInitializer<FPCGPoint_const_*_&,int_const_&> local_b8;
  FPCGPoint *local_a8;
  double local_a0;
  int *local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  FPCGPoint **local_70;
  int *local_68;
  
  lVar15 = *(longlong *)((longlong)this + 0x28);
  uVar11 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  local_res10 = param_1;
  if (*(int *)(lVar15 + 0xa0a8) != *(int *)(lVar15 + 0xa0d4)) {
    lVar17 = *(longlong *)(lVar15 + 0xa0e0);
    if (*(longlong *)(lVar15 + 0xa0e0) == 0) {
      lVar17 = lVar15 + 0xa0d8;
    }
    iVar7 = *(int *)(lVar17 + (ulonglong)
                              (*(int *)(lVar15 + 0xa0e8) - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4);
    if (iVar7 != -1) {
      lVar17 = *(longlong *)
                &(((TMapBase<FPCGPoint_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGPoint_const_*,int,0>_>
                    *)(lVar15 + 0xa0a0))->Pairs).Elements;
      do {
        if (*(FPCGPoint **)(lVar17 + (longlong)iVar7 * 0x18) == param_1) {
          if (iVar7 != -1) {
            piVar9 = TMapBase<FPCGPoint_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGPoint_const_*,int,0>_>
                     ::FindChecked((TMapBase<FPCGPoint_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGPoint_const_*,int,0>_>
                                    *)(lVar15 + 0xa0a0),param_1);
            piVar16 = *(int **)(lVar15 + 0xa090);
            if (*(int **)(lVar15 + 0xa090) == (int *)0x0) {
              piVar16 = (int *)(lVar15 + 0x9090);
            }
            piVar1 = piVar16 + *(int *)(lVar15 + 0xa098);
            if (piVar16 != piVar1) {
              do {
                if (*piVar16 == *piVar9) {
                  return;
                }
                piVar16 = piVar16 + 1;
              } while (piVar16 != piVar1);
            }
          }
          goto LAB_149f37af0;
        }
        iVar7 = *(int *)(lVar17 + 0x10 + (longlong)iVar7 * 0x18);
      } while (iVar7 != -1);
    }
  }
  iVar7 = -1;
LAB_149f37af0:
  pFVar5 = local_res10;
  uVar11 = *(uint *)((longlong)this + 8);
  lVar15 = *(longlong *)this;
  lVar17 = *(longlong *)((longlong)this + 0x28);
  uVar12 = 0;
  if ((int)uVar11 < *(int *)(lVar15 + 0x8008)) {
    uVar12 = ~uVar11 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar12 = *(uint *)((longlong)this + 8);
  lVar13 = *(longlong *)(lVar15 + 0x8000);
  if (*(longlong *)(lVar15 + 0x8000) == 0) {
    lVar13 = lVar15;
  }
  lVar15 = *(longlong *)this;
  local_b8.Value = *(int **)(lVar13 + (longlong)(int)uVar11 * 0x20);
  uVar11 = 0;
  if ((int)uVar12 < *(int *)(lVar15 + 0x8008)) {
    uVar11 = ~uVar12 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar13 = *(longlong *)(lVar15 + 0x8000);
  if (*(longlong *)(lVar15 + 0x8000) == 0) {
    lVar13 = lVar15;
  }
  local_90 = *(undefined8 *)(lVar13 + 0x10 + (longlong)(int)uVar12 * 0x20);
  local_98 = local_b8.Value;
  local_a8 = pFVar5;
  local_a0 = param_2;
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar17 + 0x10));
  pcVar4 = *(code **)(lVar17 + 0x10);
  plVar14 = (longlong *)(lVar17 + 0x20);
  if (*(longlong **)(lVar17 + 0x38) != (longlong *)0x0) {
    plVar14 = *(longlong **)(lVar17 + 0x38);
  }
  uVar8 = (**(code **)(*plVar14 + 8))();
  dVar20 = (double)(*pcVar4)(uVar8,&local_90,&local_98,&local_a0,&local_a8);
  if (dVar20 != __real_7fefffffffffffff) {
    local_88 = *(undefined8 *)((longlong)this + 0x20);
    local_80 = *(longlong *)((longlong)this + 0x28);
    local_78 = *(undefined8 *)((longlong)this + 0x30);
    if (iVar7 == -1) {
      dVar21 = ``PCGSpatialAlgo::AStar::ExecuteSearchIteration'::__l2::<lambda_2>::operator()'::__l2
               ::<lambda_1>::operator()
                         (&local_88,local_res10,*(FPCGPoint **)((longlong)this + 0x10));
      FVar3 = *(ForElementType<PCGSpatialAlgo::AStar::FNode> *)this;
      iVar7 = *(int *)((ForElementType<PCGSpatialAlgo::AStar::FNode> *)((longlong)FVar3 + 0x8008))->
                      InlineData;
      if (iVar7 == *(int *)((longlong)FVar3 + 0x800c)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGSpatialAlgo::AStar::FNode>_>
                          (0x820,(ForElementType<PCGSpatialAlgo::AStar::FNode> *)FVar3,
                           (int *)((longlong)FVar3 + 0x800c));
      }
      *(int *)((ForElementType<PCGSpatialAlgo::AStar::FNode> *)((longlong)FVar3 + 0x8008))->
              InlineData = iVar7 + 1;
      FVar19 = *(ForElementType<PCGSpatialAlgo::AStar::FNode> *)((longlong)FVar3 + 0x8000);
      if (*(ForElementType<PCGSpatialAlgo::AStar::FNode> *)((longlong)FVar3 + 0x8000) ==
          (ForElementType<PCGSpatialAlgo::AStar::FNode>)0x0) {
        FVar19 = FVar3;
      }
      lVar15 = (longlong)iVar7 * 0x20;
      *(undefined4 *)((longlong)FVar19 + 8 + lVar15) = *(undefined4 *)((longlong)this + 8);
      *(double *)((longlong)FVar19 + 0x10 + lVar15) = dVar20;
      *(double *)((longlong)FVar19 + 0x18 + lVar15) = dVar21 + dVar20;
      *(FPCGPoint **)((longlong)FVar19 + lVar15) = local_res10;
      local_res20[0] = *(int *)(*(longlong *)this + 0x8008) + -1;
      TArray<int,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_>::
      HeapPush<_PCGSpatialAlgo::AStar::ExecuteSearchIteration_::__l2::<lambda_1>_>
                ((TArray<int,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_> *)
                 (*(longlong *)((longlong)this + 0x28) + 0x8080),local_res20,
                 *(<lambda_1> **)((longlong)this + 0x18));
      local_70 = &local_res10;
      local_68 = local_res20;
      TSet<TTuple<FPCGPoint_const_*,int>,TDefaultMapHashableKeyFuncs<FPCGPoint_const_*,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FPCGPoint_const_*_&,int_const_&>_>
                ((TSet<TTuple<FPCGPoint_const_*,int>,TDefaultMapHashableKeyFuncs<FPCGPoint_const_*,int,0>,FDefaultSetAllocator>
                  *)(*(longlong *)((longlong)this + 0x28) + 0xa0a0),&local_b8,(bool *)&local_70);
    }
    else {
      puVar10 = (uint *)TMapBase<FPCGPoint_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGPoint_const_*,int,0>_>
                        ::FindChecked((TMapBase<FPCGPoint_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGPoint_const_*,int,0>_>
                                       *)(local_80 + 0xa0a0),local_res10);
      lVar15 = *(longlong *)((longlong)this + 0x28);
      local_res8[0] = *puVar10;
      lVar17 = (longlong)(int)local_res8[0];
      uVar11 = 0;
      if ((int)local_res8[0] < *(int *)(lVar15 + 0x8078)) {
        uVar11 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar13 = *(longlong *)(lVar15 + 0x8070);
      if (*(longlong *)(lVar15 + 0x8070) == 0) {
        lVar13 = lVar15 + 0x70;
      }
      lVar17 = lVar17 * 0x20;
      if (dVar20 < *(double *)(lVar13 + 0x10 + lVar17)) {
        lVar15 = *(longlong *)((longlong)this + 0x28);
        puVar10 = *(uint **)(lVar15 + 0x9080);
        if (*(uint **)(lVar15 + 0x9080) == (uint *)0x0) {
          puVar10 = (uint *)(lVar15 + 0x8080);
        }
        for (puVar18 = puVar10; puVar18 != puVar10 + *(int *)(lVar15 + 37000); puVar18 = puVar18 + 1
            ) {
          if (*puVar18 == local_res8[0]) {
            iVar7 = (int)((longlong)puVar18 - (longlong)puVar10 >> 2);
            if (iVar7 != -1) goto LAB_149f37e8f;
            goto LAB_149f37e69;
          }
        }
        iVar7 = -1;
LAB_149f37e69:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentOpenListIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGAStar.cpp"
                           ,0xa6,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_149f37e8f:
        TArray<int,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_>::
        HeapRemoveAt<_PCGSpatialAlgo::AStar::ExecuteSearchIteration_::__l2::<lambda_1>_>
                  ((TArray<int,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_> *)
                   (*(longlong *)((longlong)this + 0x28) + 0x8080),iVar7,
                   *(<lambda_1> **)((longlong)this + 0x18),No);
        dVar21 = ``PCGSpatialAlgo::AStar::ExecuteSearchIteration'::__l2::<lambda_2>::operator()'::
                 __l2::<lambda_1>::operator()
                           (&local_88,local_res10,*(FPCGPoint **)((longlong)this + 0x10));
        uVar2 = *(undefined4 *)((longlong)this + 8);
        *(double *)(lVar13 + 0x10 + lVar17) = dVar20;
        *(undefined4 *)(lVar13 + 8 + lVar17) = uVar2;
        *(double *)(lVar13 + 0x18 + lVar17) = dVar21 + dVar20;
        TArray<int,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_>::
        HeapPush<_PCGSpatialAlgo::AStar::ExecuteSearchIteration_::__l2::<lambda_1>_>
                  ((TArray<int,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_> *)
                   (*(longlong *)((longlong)this + 0x28) + 0x8080),(int *)local_res8,
                   *(<lambda_1> **)((longlong)this + 0x18));
      }
    }
  }
  return;
}

// BuildFinalPath @ 149f3d340

/* WARNING: Type propagation algorithm not settling */

void __cdecl
PCGSpatialAlgo::AStar::Helpers::BuildFinalPath
          (FSearchState *param_1,FNode *param_2,bool param_3,
          TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  uint uVar2;
  FPCGPoint *pFVar3;
  ForElementType<PCGSpatialAlgo::AStar::FNode> FVar4;
  code *pcVar5;
  double dVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  ForElementType<PCGSpatialAlgo::AStar::FNode> FVar13;
  TVector<double>_u_0 local_48 [2];
  
  if ((param_2 == (FNode *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("&FinalNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGAStar.cpp"
                         ,0x13,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar1 = &param_4->ArrayMax;
  param_4->ArrayNum = 0;
  fVar7 = __real_3f800000;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,0x10,0,&param_4->AllocatorInstance,0,piVar1);
    fVar7 = __real_3f800000;
  }
  do {
    if ((param_2->PCGPoint == (FPCGPoint *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Node->PCGPoint",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGAStar.cpp"
                           ,0x1a,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = param_2->PCGPoint;
    if (param_3) {
      iVar9 = param_4->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10d0,&param_4->AllocatorInstance,piVar1);
      }
      param_4->ArrayNum = iVar9 + 1;
      dVar6 = (pFVar3->Transform).Rotation.XY.m128d_f64[1];
      pFVar12 = (param_4->AllocatorInstance).Data + (longlong)iVar9 * 0xd0;
      *(double *)pFVar12 = (pFVar3->Transform).Rotation.XY.m128d_f64[0];
      *(double *)(pFVar12 + 8) = dVar6;
      dVar6 = (pFVar3->Transform).Rotation.ZW.m128d_f64[1];
      *(double *)(pFVar12 + 0x10) = (pFVar3->Transform).Rotation.ZW.m128d_f64[0];
      *(double *)(pFVar12 + 0x18) = dVar6;
      dVar6 = (pFVar3->Transform).Translation.XY.m128d_f64[1];
      *(double *)(pFVar12 + 0x20) = (pFVar3->Transform).Translation.XY.m128d_f64[0];
      *(double *)(pFVar12 + 0x28) = dVar6;
      dVar6 = (pFVar3->Transform).Translation.ZW.m128d_f64[1];
      *(double *)(pFVar12 + 0x30) = (pFVar3->Transform).Translation.ZW.m128d_f64[0];
      *(double *)(pFVar12 + 0x38) = dVar6;
      dVar6 = (pFVar3->Transform).Scale3D.XY.m128d_f64[1];
      *(double *)(pFVar12 + 0x40) = (pFVar3->Transform).Scale3D.XY.m128d_f64[0];
      *(double *)(pFVar12 + 0x48) = dVar6;
      dVar6 = (pFVar3->Transform).Scale3D.ZW.m128d_f64[1];
      *(double *)(pFVar12 + 0x50) = (pFVar3->Transform).Scale3D.ZW.m128d_f64[0];
      *(double *)(pFVar12 + 0x58) = dVar6;
      dVar6 = (pFVar3->BoundsMin).field0_0x0._s_0.X;
      *(double *)(pFVar12 + 0x60) = *(double *)&pFVar3->Density;
      *(double *)(pFVar12 + 0x68) = dVar6;
      dVar6 = (pFVar3->BoundsMin).field0_0x0._s_0.Z;
      *(double *)(pFVar12 + 0x70) = (pFVar3->BoundsMin).field0_0x0._s_0.Y;
      *(double *)(pFVar12 + 0x78) = dVar6;
      dVar6 = (pFVar3->BoundsMax).field0_0x0._s_0.Y;
      *(double *)(pFVar12 + 0x80) = (pFVar3->BoundsMax).field0_0x0._s_0.X;
      *(double *)(pFVar12 + 0x88) = dVar6;
      dVar6 = (double)pFVar3->_padding_;
      *(double *)(pFVar12 + 0x90) = (pFVar3->BoundsMax).field0_0x0._s_0.Z;
      *(double *)(pFVar12 + 0x98) = dVar6;
      dVar6 = (pFVar3->Color).field0_0x0._s_0.Y;
      *(double *)(pFVar12 + 0xa0) = (pFVar3->Color).field0_0x0._s_0.X;
      *(double *)(pFVar12 + 0xa8) = dVar6;
      dVar6 = (pFVar3->Color).field0_0x0._s_0.W;
      *(double *)(pFVar12 + 0xb0) = (pFVar3->Color).field0_0x0._s_0.Z;
      *(double *)(pFVar12 + 0xb8) = dVar6;
      dVar6 = (double)pFVar3->MetadataEntry;
      *(double *)(pFVar12 + 0xc0) = *(double *)&pFVar3->Steepness;
      *(double *)(pFVar12 + 200) = dVar6;
    }
    else {
      local_48[0]._0_8_ = (pFVar3->Transform).Translation.XY.m128d_f64[0];
      local_48[0]._8_8_ = (pFVar3->Transform).Translation.XY.m128d_f64[1];
      local_48[0]._16_8_ = (pFVar3->Transform).Translation.ZW.m128d_f64[0];
      iVar10 = PCGHelpers::ComputeSeedFromPosition((TVector<double> *)&local_48[0]._s_0);
      pFVar3 = param_2->PCGPoint;
      iVar9 = param_4->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10d0,&param_4->AllocatorInstance,piVar1);
      }
      param_4->ArrayNum = iVar9 + 1;
      FPCGPoint::FPCGPoint
                ((FPCGPoint *)((param_4->AllocatorInstance).Data + (longlong)iVar9 * 0xd0),
                 &pFVar3->Transform,fVar7,iVar10);
    }
    uVar2 = param_2->PreviousNodeIndex;
    if (uVar2 == 0xffffffff) break;
    uVar11 = 0;
    if ((int)uVar2 < (param_1->NodeList).ArrayNum) {
      uVar11 = ~uVar2 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar4 = (param_1->NodeList).AllocatorInstance.SecondaryData;
    FVar13 = (ForElementType<PCGSpatialAlgo::AStar::FNode>)&param_1->NodeList;
    if (FVar4 != (ForElementType<PCGSpatialAlgo::AStar::FNode>)0x0) {
      FVar13 = FVar4;
    }
    param_2 = (FNode *)((longlong)(int)uVar2 * 0x20 + (longlong)FVar13);
  } while (param_2 != (FNode *)0x0);
  AlgoImpl::Reverse<FPCGPoint>((FPCGPoint *)(param_4->AllocatorInstance).Data,param_4->ArrayNum);
  return;
}

// CalculateCost_EuclideanDistance @ 149f3d5d0

double __cdecl
PCGSpatialAlgo::AStar::Cost::CalculateCost_EuclideanDistance
          (double param_1,FPCGPoint *param_2,double param_3,FPCGPoint *param_4)

{
  return SQRT(param_3) + param_1;
}

// CalculateHeuristic_EuclideanDistance @ 149f3d5f0

double __cdecl
PCGSpatialAlgo::AStar::Heuristic::CalculateHeuristic_EuclideanDistance
          (TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  
  dVar5 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar4 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  auVar2._0_8_ = dVar1 * dVar1;
  auVar2._8_8_ = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar5 * dVar5 + dVar4 * dVar4 + auVar2._0_8_;
  auVar3 = sqrtpd(auVar2,auVar3);
  return auVar3._0_8_;
}

// CompareNodes @ 149f402f0

bool __cdecl PCGSpatialAlgo::AStar::Helpers::CompareNodes(FNode *param_1,FNode *param_2)

{
  return param_1->EstimatedGoalCost < param_2->EstimatedGoalCost;
}

// ExecuteSearchIteration @ 149f43620

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

ESearchResult __cdecl
PCGSpatialAlgo::AStar::ExecuteSearchIteration
          (FSearchSettings *param_1,FSearchState *param_2,TArrayView<FPCGPoint_const_,int> *param_3,
          TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *param_4)

{
  TArray<PCGSpatialAlgo::AStar::FNode,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  int *piVar3;
  double dVar4;
  UPCGPointData *pUVar5;
  UPCGPointData *pUVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  ESearchResult EVar10;
  int iVar11;
  uint uVar12;
  UClass *pUVar13;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this;
  ForElementType<int> FVar14;
  ForElementType<PCGSpatialAlgo::AStar::FNode> FVar15;
  ForElementType<PCGSpatialAlgo::AStar::FNode> FVar16;
  ForElementType<int> FVar17;
  ESearchResult EVar18;
  uint uVar19;
  longlong lVar20;
  ForElementType<int> FVar21;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar22;
  bool bVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  uint local_184;
  undefined1 local_180 [8];
  <lambda_1> local_178;
  ForElementType<int> local_170;
  FPCGPoint *local_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  ForElementType<PCGSpatialAlgo::AStar::FNode> local_140;
  uint local_138;
  FPCGPoint *local_130;
  <lambda_1> *local_128;
  FSearchSettings *local_120;
  FSearchState *local_118;
  TArrayView<FPCGPoint_const_,int> *local_110;
  UPCGPointData *local_108;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *local_100;
  double *local_f8;
  double local_f0;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *local_e8;
  ForElementType<PCGSpatialAlgo::AStar::FNode> *local_e0;
  undefined1 local_d8 [16];
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0;
  TVector4<double>_u_0 local_98;
  undefined1 local_78 [16];
  double local_68;
  undefined8 local_60;
  
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId100,
               "FPCGPathfindingElement::Algorithm::ExecuteSearchIteration",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGAStar.cpp"
               ,100);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId100);
  }
  if ((param_2->OriginatingPointData == (UPCGPointData *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SearchState.OriginatingPointData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGAStar.cpp"
                         ,0x65,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    EVar10 = (*pcVar7)();
    return EVar10;
  }
  if (param_3->ArrayNum != 0) {
    if ((param_2->OpenIndexList).ArrayNum != 0) {
      pTVar1 = &param_2->NodeList;
      local_178.SearchState = param_2;
      TArray<int,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_>::
      HeapPop<_PCGSpatialAlgo::AStar::ExecuteSearchIteration_::__l2::<lambda_1>_>
                (&param_2->OpenIndexList,(int *)&local_184,&local_178,No);
      lVar20 = (longlong)(int)local_184;
      EVar18 = Invalid;
      EVar10 = EVar18;
      if ((int)local_184 < (param_2->NodeList).ArrayNum) {
        EVar10 = ~local_184 >> 0x1f;
      }
      if ((EVar10 == Invalid) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        EVar10 = (*pcVar7)();
        return EVar10;
      }
      FVar15 = (param_2->NodeList).AllocatorInstance.SecondaryData;
      if (FVar15 == (ForElementType<PCGSpatialAlgo::AStar::FNode>)0x0) {
        FVar15 = (ForElementType<PCGSpatialAlgo::AStar::FNode>)pTVar1;
      }
      if ((*(longlong *)((longlong)FVar15 + lVar20 * 0x20) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("NodeList[CurrentNodeIndex].PCGPoint",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGAStar.cpp"
                             ,0x74,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        EVar10 = (*pcVar7)();
        return EVar10;
      }
      lVar20 = (longlong)(int)local_184;
      EVar10 = EVar18;
      if ((int)local_184 < (param_2->NodeList).ArrayNum) {
        EVar10 = ~local_184 >> 0x1f;
      }
      if ((EVar10 == Invalid) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        EVar10 = (*pcVar7)();
        return EVar10;
      }
      FVar15 = (param_2->NodeList).AllocatorInstance.SecondaryData;
      if (FVar15 == (ForElementType<PCGSpatialAlgo::AStar::FNode>)0x0) {
        FVar15 = (ForElementType<PCGSpatialAlgo::AStar::FNode>)pTVar1;
      }
      lVar20 = *(longlong *)((longlong)FVar15 + lVar20 * 0x20);
      local_c8._s_0.X = *(double *)(lVar20 + 0x20);
      local_c8._s_0.Y = *(double *)(lVar20 + 0x28);
      local_c8._s_0.Z = *(double *)(lVar20 + 0x30);
      Helpers::GetNearestGoalToLocation
                ((TTuple<FPCGPoint_const_*,double> *)&local_168,(TVector<double> *)&local_c8._s_0,
                 param_3);
      local_128 = &local_178;
      uVar24 = SUB84(local_160,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar25 = (uint)((ulonglong)local_160 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      local_138 = local_184;
      local_130 = local_168;
      uVar19 = 0;
      local_140 = (ForElementType<PCGSpatialAlgo::AStar::FNode>)pTVar1;
      local_120 = param_1;
      local_118 = param_2;
      local_110 = param_3;
      if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar25,uVar24) &&
          (double)CONCAT44(uVar25,uVar24) != __real_3e45798ee2308c3a) {
        if (local_160 <= param_1->SearchDistance * param_1->SearchDistance) {
          `PCGSpatialAlgo::AStar::ExecuteSearchIteration'::__l2::<lambda_2>::operator()
                    (&local_140,local_168,local_160);
        }
        lVar20 = (longlong)(int)local_184;
        pUVar5 = param_2->OriginatingPointData;
        dVar4 = param_1->SearchDistance;
        uVar24 = uVar19;
        if ((int)local_184 < (param_2->NodeList).ArrayNum) {
          uVar24 = ~local_184 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          EVar10 = (*pcVar7)();
          return EVar10;
        }
        FVar15 = (param_2->NodeList).AllocatorInstance.SecondaryData;
        pUVar6 = param_2->OriginatingPointData;
        if (FVar15 == (ForElementType<PCGSpatialAlgo::AStar::FNode>)0x0) {
          FVar15 = (ForElementType<PCGSpatialAlgo::AStar::FNode>)pTVar1;
        }
        lVar20 = *(longlong *)((longlong)FVar15 + lVar20 * 0x20);
        local_158 = *(double *)(lVar20 + 0x20);
        dStack_150 = *(double *)(lVar20 + 0x28);
        local_148 = *(double *)(lVar20 + 0x30);
        if (pUVar6 != (UPCGPointData *)0x0) {
          local_68 = dVar4 * __real_3ff6a09e667f3bcd;
          local_98._s_0.W = 0.0;
          local_78._8_4_ = SUB84(local_68,0);
          local_78._0_8_ = local_68;
          local_78._12_4_ = (int)((ulonglong)local_68 >> 0x20);
          local_60 = 0;
          local_98._s_0.X = local_158;
          local_98._s_0.Y = dStack_150;
          local_98._s_0.Z = local_148;
          pUVar13 = Z_Construct_UClass_UPCGPointData_NoRegister();
          iVar11 = (int)pUVar13->_padding_;
          if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar11) ||
             (pTVar22 = &pUVar6->Points,
             (longlong *)
             *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
             &pUVar13->_padding_)) {
            pTVar22 = (TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)0x0;
          }
          this = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
                 (**(code **)(pUVar6->_padding_ + 0x618))(pUVar6);
          local_f8 = &local_158;
          local_e0 = &local_140;
          local_108 = pUVar6;
          local_100 = pTVar22;
          local_f0 = dVar4 * dVar4;
          local_e8 = &pUVar5->Points;
          TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
          FindElementsWithBoundsTestInternal<_UPCGOctreeQueries::ForEachPointInsideSphere<_PCGSpatialAlgo::AStar::ExecuteSearchIteration_::__l2::<lambda_3>_>_::__l2::<lambda_1>_>
                    (this,0,(FOctreeNodeContext *)this,(FBoxCenterAndExtent *)&local_98._s_0,
                     (<lambda_1> *)&local_108);
        }
        FVar17 = (param_2->ClosedIndexList).AllocatorInstance.SecondaryData;
        FVar21 = (ForElementType<int>)&param_2->ClosedIndexList;
        FVar14 = FVar17;
        if (FVar17 == (ForElementType<int>)0x0) {
          FVar14 = FVar21;
        }
        if ((ulonglong)FVar14 <= &local_184) {
          FVar14 = FVar21;
          if (FVar17 != (ForElementType<int>)0x0) {
            FVar14 = FVar17;
          }
          if ((&local_184 <
               (uint *)((longlong)FVar14 + (longlong)(param_2->ClosedIndexList).ArrayMax * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar7 = (code *)swi(3);
            EVar10 = (*pcVar7)();
            return EVar10;
          }
        }
        piVar2 = &(param_2->ClosedIndexList).ArrayNum;
        iVar11 = *piVar2;
        piVar3 = &(param_2->ClosedIndexList).ArrayMax;
        if (iVar11 == *piVar3) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                             (0x404,(ForElementType<int> *)FVar21,piVar3);
        }
        *piVar2 = iVar11 + 1;
        FVar17 = (param_2->ClosedIndexList).AllocatorInstance.SecondaryData;
        if (FVar17 == (ForElementType<int>)0x0) {
          FVar17 = FVar21;
        }
        *(uint *)((longlong)FVar17 + (longlong)iVar11 * 4) = local_184;
        if ((param_2->OpenIndexList).ArrayNum == 0) {
          param_4->ArrayNum = 0;
          if (param_4->ArrayMax < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xd0,0x10,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
          }
          if (param_1->bAcceptPartialPath != false) {
            FVar17 = (param_2->ClosedIndexList).AllocatorInstance.SecondaryData;
            uVar24 = 0xffffffff;
            iVar11 = *piVar2;
            uVar26 = (undefined4)__real_7fefffffffffffff;
            uVar27 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
            if (FVar17 != (ForElementType<int>)0x0) {
              FVar21 = FVar17;
            }
            local_170 = (ForElementType<int>)((longlong)FVar21 + (longlong)iVar11 * 4);
            while( true ) {
              FVar17 = local_170;
              if (*piVar2 != iVar11) {
                local_180[0] = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_180);
              }
              if (FVar21 == FVar17) break;
              uVar25 = *(uint *)FVar21;
              uVar12 = uVar19;
              if ((int)uVar25 < (param_2->NodeList).ArrayNum) {
                uVar12 = ~uVar25 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                EVar10 = (*pcVar7)();
                return EVar10;
              }
              FVar15 = (param_2->NodeList).AllocatorInstance.SecondaryData;
              FVar16 = (ForElementType<PCGSpatialAlgo::AStar::FNode>)pTVar1;
              if (FVar15 != (ForElementType<PCGSpatialAlgo::AStar::FNode>)0x0) {
                FVar16 = FVar15;
              }
              lVar20 = *(longlong *)((longlong)(int)uVar25 * 0x20 + (longlong)FVar16);
              local_b0._s_0.X = *(double *)(lVar20 + 0x20);
              local_b0._s_0.Y = *(double *)(lVar20 + 0x28);
              local_b0._s_0.Z = *(double *)(lVar20 + 0x30);
              Helpers::GetNearestGoalToLocation
                        ((TTuple<FPCGPoint_const_*,double> *)local_d8,
                         (TVector<double> *)&local_b0._s_0,param_3);
              if ((double)local_d8._8_8_ < (double)CONCAT44(uVar27,uVar26)) {
                uVar26 = (int)local_d8._8_8_;
                uVar27 = SUB84(local_d8._8_8_,4);
                uVar24 = uVar25;
              }
              FVar21 = (ForElementType<int>)((longlong)FVar21 + 4);
            }
            bVar8 = param_1->bCopyOriginatingPoints;
            if ((int)uVar24 < (param_2->NodeList).ArrayNum) {
              uVar19 = ~uVar24 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              EVar10 = (*pcVar7)();
              return EVar10;
            }
            FVar15 = (param_2->NodeList).AllocatorInstance.SecondaryData;
            if (FVar15 == (ForElementType<PCGSpatialAlgo::AStar::FNode>)0x0) {
              FVar15 = (ForElementType<PCGSpatialAlgo::AStar::FNode>)pTVar1;
            }
            Helpers::BuildFinalPath
                      (param_2,(FNode *)((longlong)FVar15 + (longlong)(int)uVar24 * 0x20),bVar8,
                       param_4);
            EVar18 = Partial;
          }
        }
        else {
          EVar18 = Processing;
        }
      }
      else {
        bVar8 = param_1->bCopyOriginatingPoints;
        if ((int)local_184 < (param_2->NodeList).ArrayNum) {
          uVar19 = ~local_184 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          EVar10 = (*pcVar7)();
          return EVar10;
        }
        FVar15 = (param_2->NodeList).AllocatorInstance.SecondaryData;
        if (FVar15 == (ForElementType<PCGSpatialAlgo::AStar::FNode>)0x0) {
          FVar15 = (ForElementType<PCGSpatialAlgo::AStar::FNode>)pTVar1;
        }
        Helpers::BuildFinalPath
                  (param_2,(FNode *)((longlong)FVar15 + (longlong)(int)local_184 * 0x20),bVar8,
                   param_4);
        EVar18 = Complete;
      }
      goto LAB_149f43733;
    }
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5876175839783026584>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGAStar.cpp"
                       ,0x68,"!SearchState.OpenIndexList.IsEmpty()");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      EVar10 = (*pcVar7)();
      return EVar10;
    }
  }
  EVar18 = Invalid;
LAB_149f43733:
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar18;
}

// GetNearestGoalToLocation @ 149f4b1e0

TTuple<FPCGPoint_const_*,double> * __cdecl
PCGSpatialAlgo::AStar::Helpers::GetNearestGoalToLocation
          (TTuple<FPCGPoint_const_*,double> *__return_storage_ptr__,TVector<double> *param_1,
          TArrayView<FPCGPoint_const_,int> *param_2)

{
  double *pdVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TTuple<FPCGPoint_const_*,double> *pTVar6;
  FPCGPoint *pFVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  double dVar15;
  undefined4 uVar16;
  
  if (param_2->ArrayNum == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GoalPoints.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGAStar.cpp"
                       ,0x2e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TTuple<FPCGPoint_const_*,double> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar8 = param_2->ArrayNum;
  uVar9 = 0;
  uVar14 = (undefined4)__real_7fefffffffffffff;
  uVar16 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  uVar5 = 0xffffffff;
  if (0 < iVar8) {
    lVar10 = 0;
    uVar11 = 0xffffffff;
    do {
      uVar5 = 0;
      if ((int)uVar9 < iVar8) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TTuple<FPCGPoint_const_*,double> *)(*pcVar3)();
          return pTVar6;
        }
      }
      iVar8 = param_2->ArrayNum;
      pdVar1 = (double *)((longlong)(param_2->DataPtr->Transform).Translation.XY.m128d_f64 + lVar10)
      ;
      dVar15 = *pdVar1 - (param_1->field0_0x0)._s_0.X;
      dVar13 = *(double *)
                ((longlong)(param_2->DataPtr->Transform).Translation.ZW.m128d_f64 + lVar10) -
               (param_1->field0_0x0)._s_0.Z;
      dVar12 = pdVar1[1] - (param_1->field0_0x0)._s_0.Y;
      dVar12 = dVar15 * dVar15 + dVar12 * dVar12 + dVar13 * dVar13;
      bVar4 = (double)CONCAT44(uVar16,uVar14) == dVar12;
      bVar2 = (double)CONCAT44(uVar16,uVar14) < dVar12;
      if ((double)CONCAT44(uVar16,uVar14) <= dVar12) {
        dVar12 = (double)CONCAT44(uVar16,uVar14);
      }
      uVar5 = uVar9;
      if (bVar2 || bVar4) {
        uVar5 = uVar11;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0xd0;
      uVar14 = SUB84(dVar12,0);
      uVar16 = (undefined4)((ulonglong)dVar12 >> 0x20);
      uVar11 = uVar5;
    } while ((int)uVar9 < iVar8);
    if (uVar5 != 0xffffffff) goto LAB_149f4b32c;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("CurrentGoalIndex != INDEX_NONE",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGAStar.cpp"
                     ,0x3b,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TTuple<FPCGPoint_const_*,double> *)(*pcVar3)();
    return pTVar6;
  }
LAB_149f4b32c:
  pFVar7 = TArrayView<FPCGPoint_const_,int>::operator[](param_2,uVar5);
  *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(uVar16,uVar14);
  *(FPCGPoint **)__return_storage_ptr__ = pFVar7;
  return __return_storage_ptr__;
}

// Initialize @ 149f504e0

void __cdecl PCGSpatialAlgo::AStar::Initialize(FPCGPoint *param_1,FSearchState *param_2)

{
  TArray<PCGSpatialAlgo::AStar::FNode,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  TArray<int,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  ForElementType<PCGSpatialAlgo::AStar::FNode> FVar9;
  ForElementType<int> FVar10;
  undefined4 local_18 [4];
  
  if (param_1 == (FPCGPoint *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartPoint",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\SpatialAlgo\\PCGAStar.cpp"
                       ,0x55,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar1 = &param_2->NodeList;
  piVar2 = &(param_2->NodeList).ArrayMax;
  (param_2->NodeList).ArrayNum = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGSpatialAlgo::AStar::FNode>_>
              (0x20,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar7 = (param_2->NodeList).ArrayNum;
  if (iVar7 == (param_2->NodeList).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGSpatialAlgo::AStar::FNode>_>
                      (0x820,&pTVar1->AllocatorInstance,piVar2);
  }
  (param_2->NodeList).ArrayNum = iVar7 + 1;
  FVar9 = (param_2->NodeList).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<PCGSpatialAlgo::AStar::FNode>)0x0) {
    FVar9 = (ForElementType<PCGSpatialAlgo::AStar::FNode>)pTVar1;
  }
  lVar8 = (longlong)iVar7 * 0x20;
  pTVar3 = &param_2->OpenIndexList;
  piVar2 = &(param_2->OpenIndexList).ArrayMax;
  *(FPCGPoint **)((longlong)FVar9 + lVar8) = param_1;
  puVar4 = (uchar *)((longlong)FVar9 + 8) + lVar8;
  puVar4[0] = 0xff;
  puVar4[1] = 0xff;
  puVar4[2] = 0xff;
  puVar4[3] = 0xff;
  puVar4 = (uchar *)((longlong)FVar9 + 0x10) + lVar8;
  puVar4[0] = '\0';
  puVar4[1] = '\0';
  puVar4[2] = '\0';
  puVar4[3] = '\0';
  puVar4[4] = '\0';
  puVar4[5] = '\0';
  puVar4[6] = '\0';
  puVar4[7] = '\0';
  puVar4 = (uchar *)((longlong)FVar9 + 0x18) + lVar8;
  puVar4[0] = '\0';
  puVar4[1] = '\0';
  puVar4[2] = '\0';
  puVar4[3] = '\0';
  puVar4[4] = '\0';
  puVar4[5] = '\0';
  puVar4[6] = '\0';
  puVar4[7] = '\0';
  (param_2->OpenIndexList).ArrayNum = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,0,&pTVar3->AllocatorInstance,0,piVar2);
  }
  FVar10 = (param_2->OpenIndexList).AllocatorInstance.SecondaryData;
  local_18[0] = 0;
  if (FVar10 == (ForElementType<int>)0x0) {
    FVar10 = (ForElementType<int>)pTVar3;
  }
  if (((ulonglong)FVar10 <= local_18) &&
     (local_18 < (undefined4 *)((longlong)FVar10 + (longlong)*piVar2 * 4))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (param_2->OpenIndexList).ArrayNum;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,&pTVar3->AllocatorInstance,piVar2);
  }
  (param_2->OpenIndexList).ArrayNum = iVar7 + 1;
  FVar10 = (param_2->OpenIndexList).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<int>)0x0) {
    FVar10 = (ForElementType<int>)pTVar3;
  }
  *(undefined4 *)((longlong)FVar10 + (longlong)iVar7 * 4) = local_18[0];
  piVar2 = &(param_2->ClosedIndexList).ArrayMax;
  (param_2->ClosedIndexList).ArrayNum = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,0,&(param_2->ClosedIndexList).AllocatorInstance,0,piVar2);
  }
  TSet<TTuple<FPCGPoint_const_*,int>,TDefaultMapHashableKeyFuncs<FPCGPoint_const_*,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FPCGPoint_const_*,int>,TDefaultMapHashableKeyFuncs<FPCGPoint_const_*,int,0>,FDefaultSetAllocator>
           *)&param_2->PointToNodeIndexMap);
  return;
}

