// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// AddRasterBin @ 145048570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FNaniteMaterialListContext::AddRasterBin
          (FNaniteMaterialListContext *this,FPrimitiveSceneInfo *param_1,FNaniteRasterBin *param_2,
          FNaniteRasterBin *param_3,Type param_4,uchar param_5)

{
  FNaniteRasterBin *pFVar1;
  code *pcVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  FNaniteMaterialSlot *pFVar6;
  TArray<FNaniteRasterBin,TSizedDefaultAllocator<32>_> *pTVar7;
  
  if ((param_2->BinId == -1) && (param_2->BinIndex == 0xffff)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrimaryRasterBin.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteDrawList.cpp"
                       ,0xf5,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar6 = GetMaterialSlotForWrite(this,param_1,param_4,param_5);
  if (pFVar6->RasterBin != 0xffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaterialSlot.RasterBin == 0xFFFFu",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteDrawList.cpp"
                       ,0xf8,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar6->RasterBin = param_2->BinIndex;
  pTVar7 = param_1->NaniteRasterBins + (int)param_4;
  pFVar6->FallbackRasterBin = param_3->BinIndex;
  pFVar1 = (FNaniteRasterBin *)(pTVar7->AllocatorInstance).Data;
  if ((pFVar1 <= param_2) && (param_2 < pFVar1 + pTVar7->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = pTVar7->ArrayNum;
  piVar3 = &pTVar7->ArrayMax;
  if (iVar5 == *piVar3) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar7->AllocatorInstance,piVar3);
  }
  pTVar7->ArrayNum = iVar5 + 1;
  *(FNaniteRasterBin *)((pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 8) = *param_2;
  if ((param_3->BinId != -1) || (param_3->BinIndex != 0xffff)) {
    pTVar7 = param_1->NaniteRasterBins + (int)param_4;
    pFVar1 = (FNaniteRasterBin *)(pTVar7->AllocatorInstance).Data;
    if ((pFVar1 <= param_3) && (param_3 < pFVar1 + *piVar3)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar5 = pTVar7->ArrayNum;
    if (iVar5 == pTVar7->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
    }
    pTVar7->ArrayNum = iVar5 + 1;
    *(FNaniteRasterBin *)((pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 8) = *param_3;
  }
  return;
}

// AddShadingBin @ 1450487b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FNaniteMaterialListContext::AddShadingBin
          (FNaniteMaterialListContext *this,FPrimitiveSceneInfo *param_1,FNaniteShadingBin *param_2,
          FNaniteShadingBin *param_3,Type param_4,uchar param_5)

{
  FNaniteShadingBin *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNaniteMaterialSlot *pFVar5;
  TArray<FNaniteShadingBin,TSizedDefaultAllocator<32>_> *pTVar6;
  
  pFVar5 = GetMaterialSlotForWrite(this,param_1,param_4,param_5);
  if (pFVar5->TriangleShadingBin != 0xffff) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaterialSlot.TriangleShadingBin == 0xFFFFu",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteDrawList.cpp"
                       ,0xe0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (pFVar5->VoxelShadingBin != 0xffff) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaterialSlot.VoxelShadingBin == 0xFFFFu",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteDrawList.cpp"
                       ,0xe1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5->TriangleShadingBin = param_2->BinIndex;
  pFVar5->VoxelShadingBin = param_3->BinIndex;
  pTVar6 = param_1->NaniteShadingBins + (int)param_4;
  pFVar1 = (FNaniteShadingBin *)(pTVar6->AllocatorInstance).Data;
  if ((pFVar1 <= param_2) && (param_2 < pFVar1 + pTVar6->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar6->ArrayNum;
  if (iVar4 == pTVar6->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
  }
  pTVar6->ArrayNum = iVar4 + 1;
  *(FNaniteShadingBin *)((pTVar6->AllocatorInstance).Data + (longlong)iVar4 * 8) = *param_2;
  if ((param_3->BinId != -1) || (param_3->BinIndex != 0xffff)) {
    pFVar1 = (FNaniteShadingBin *)(pTVar6->AllocatorInstance).Data;
    if ((pFVar1 <= param_3) && (param_3 < pFVar1 + pTVar6->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = pTVar6->ArrayNum;
    if (iVar4 == pTVar6->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
    }
    pTVar6->ArrayNum = iVar4 + 1;
    *(FNaniteShadingBin *)((pTVar6->AllocatorInstance).Data + (longlong)iVar4 * 8) = *param_3;
  }
  return;
}

// Apply @ 14504b080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FNaniteMaterialListContext::Apply(FNaniteMaterialListContext *this,FScene *param_1)

{
  code *pcVar1;
  FDisplacementScaling FVar2;
  FDisplacementFadeRange FVar3;
  longlong lVar4;
  FNaniteVisibility *this_00;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FPrimitiveReferences *pFVar9;
  ForElementType<FNaniteVisibility::FRasterBin> FVar10;
  ForElementType<FNaniteVisibility::FShadingBin> FVar11;
  ulonglong uVar12;
  ForElementType<FNaniteVisibility::FRasterBin> FVar13;
  ForElementType<FNaniteVisibility::FShadingBin> FVar14;
  FPrimitiveSceneInfo *this_01;
  ForElementType<FNaniteVisibility::FShadingBin> FVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  ForElementType<FNaniteVisibility::FRasterBin> FVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  undefined1 local_res18 [8];
  Type local_res20;
  undefined4 local_108;
  undefined4 local_104;
  FNaniteRasterBin local_100;
  FNaniteShadingBin local_f8;
  int local_f0;
  uint local_ec;
  longlong local_e8;
  FPrimitiveSceneInfo *local_e0;
  int *local_d8;
  FNaniteRasterPipelines *local_d0;
  undefined1 local_c8 [20];
  undefined2 local_b4;
  longlong local_b0;
  FScriptContainerElement *local_a8;
  ulonglong local_a0;
  FNaniteVisibility *local_98;
  FScriptContainerElement *local_90;
  FNaniteRasterPipeline local_88;
  FNaniteRasterPipeline local_68;
  
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteDrawList.cpp"
                         ,0x105,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FVar3 = _UNK_150efd758;
  FVar2 = ___xmm_3f800000408000003f00000040800000;
  local_d8 = &this->DeferredPipelines[0].ArrayNum;
  local_a0 = 0;
  local_res20 = BasePass;
  do {
    local_d0 = param_1->NaniteRasterPipelines + local_a0;
    local_c8._8_8_ = param_1->NaniteShadingPipelines + local_a0;
    pFVar17 = (((TArray<FNaniteMaterialListContext::FDeferredPipelines,TSizedDefaultAllocator<32>_>
                 *)(local_d8 + -2))->AllocatorInstance).Data;
    local_ec = *local_d8;
    uVar12 = (ulonglong)(int)local_ec;
    pFVar19 = pFVar17 + 0x88;
    local_98 = param_1->NaniteVisibility + local_a0;
    local_90 = pFVar17 + uVar12 * 0x378;
    while( true ) {
      pFVar5 = local_90;
      this_00 = local_98;
      local_a8 = pFVar17;
      if (*local_d8 != (int)uVar12) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FNaniteMaterialListContext::FDeferredPipelines,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar17 == pFVar5) break;
      this_01 = *(FPrimitiveSceneInfo **)pFVar17;
      local_e0 = this_01;
      if (GNaniteMaterialVisibility == 0) {
        FVar18 = (ForElementType<FNaniteVisibility::FRasterBin>)0x0;
        FVar15 = (ForElementType<FNaniteVisibility::FShadingBin>)0x0;
      }
      else {
        pFVar9 = FNaniteVisibility::FindOrAddPrimitiveReferences(this_00,this_01);
        pFVar9->SceneInfo = this_01;
        FVar18 = (ForElementType<FNaniteVisibility::FRasterBin>)&pFVar9->RasterBins;
        if (GNaniteMaterialVisibility == 0) {
          FVar15 = (ForElementType<FNaniteVisibility::FShadingBin>)0x0;
        }
        else {
          pFVar9 = FNaniteVisibility::FindOrAddPrimitiveReferences(this_00,this_01);
          pFVar9->SceneInfo = this_01;
          FVar15 = (ForElementType<FNaniteVisibility::FShadingBin>)&pFVar9->ShadingBins;
        }
      }
      if ((*(int *)(pFVar19 + 8) != *(int *)(pFVar19 + 0x178)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(PipelinesCommand.RasterPipelines.Num() == PipelinesCommand.TriangleShadingPipelines.Num())"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteDrawList.cpp"
                             ,0x113,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_f0 = *(int *)(pFVar19 + 8);
      uVar20 = 0;
      if (0 < local_f0) {
        local_b0 = 0;
        local_e8 = 0;
        do {
          lVar4 = local_e8;
          uVar16 = ~uVar20 >> 0x1f;
          uVar7 = 0;
          if ((int)uVar20 < *(int *)(pFVar19 + 8)) {
            uVar7 = uVar16;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar17 = *(FScriptContainerElement **)pFVar19;
          if (*(FScriptContainerElement **)pFVar19 == (FScriptContainerElement *)0x0) {
            pFVar17 = pFVar19 + -0x80;
          }
          FNaniteRasterPipelines::Register(local_d0,(FNaniteRasterPipeline *)local_c8);
          local_88.bFirstPersonLerp = false;
          local_88.bVertexUVs = false;
          local_88.bCastShadow = false;
          local_88.bFixedDisplacementFallback = false;
          local_88.bHasDisplacementFadeOut = false;
          local_88.bHasPixelDistance = false;
          local_100.BinId = 0;
          local_100.BinIndex = 0xffff;
          local_100.BinId = -1;
          local_88.RasterMaterial = (FMaterialRenderProxy *)0x0;
          local_88.DisplacementScaling = FVar2;
          local_88.DisplacementFadeRange = FVar3;
          local_88.bHasWPODistance = false;
          local_88.bVoxel = false;
          local_88.bSkinnedMesh = false;
          local_88.bSplineMesh = false;
          local_88.bPerPixelEval = false;
          local_88.bDisplacementEnabled = false;
          local_88.bWPOEnabled = false;
          local_88.bIsTwoSided = false;
          if ((GNaniteAllowProgrammableDistances != 0) &&
             (bVar6 = FNaniteRasterPipeline::GetFallbackPipeline
                                ((FNaniteRasterPipeline *)(pFVar17 + lVar4),&local_88), bVar6)) {
            local_100 = FNaniteRasterPipelines::Register(local_d0,&local_68);
            local_100 = *(FNaniteRasterBin *)local_100;
          }
          AddRasterBin(this,local_e0,(FNaniteRasterBin *)local_c8,&local_100,local_res20,
                       (uchar)uVar20);
          if (FVar18 != (ForElementType<FNaniteVisibility::FRasterBin>)0x0) {
            FVar13 = *(ForElementType<FNaniteVisibility::FRasterBin> *)((longlong)FVar18 + 8);
            local_108 = CONCAT22(local_100.BinIndex,local_c8._4_2_);
            FVar10 = FVar18;
            if (FVar13 != (ForElementType<FNaniteVisibility::FRasterBin>)0x0) {
              FVar10 = FVar13;
            }
            if ((ulonglong)FVar10 <= &local_108) {
              FVar10 = FVar18;
              if (FVar13 != (ForElementType<FNaniteVisibility::FRasterBin>)0x0) {
                FVar10 = FVar13;
              }
              if ((&local_108 <
                   (undefined4 *)
                   ((longlong)FVar10 + (longlong)*(int *)((longlong)FVar18 + 0x14) * 4)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            iVar8 = *(int *)((longlong)FVar18 + 0x10);
            if (iVar8 == *(int *)((longlong)FVar18 + 0x14)) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteVisibility::FRasterBin>_>
                                (0x204,(ForElementType<FNaniteVisibility::FRasterBin> *)FVar18,
                                 (int *)((longlong)FVar18 + 0x14));
            }
            *(int *)((longlong)FVar18 + 0x10) = iVar8 + 1;
            FVar13 = FVar18;
            if (*(ForElementType<FNaniteVisibility::FRasterBin> *)((longlong)FVar18 + 8) !=
                (ForElementType<FNaniteVisibility::FRasterBin>)0x0) {
              FVar13 = *(ForElementType<FNaniteVisibility::FRasterBin> *)((longlong)FVar18 + 8);
            }
            *(undefined4 *)((longlong)FVar13 + (longlong)iVar8 * 4) = local_108;
          }
          uVar7 = 0;
          if ((int)uVar20 < *(int *)(pFVar19 + 0x178)) {
            uVar7 = uVar16;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          lVar4 = local_b0;
          FNaniteShadingPipelines::Register
                    ((FNaniteShadingPipelines *)local_c8._8_8_,
                     (FNaniteShadingPipeline *)(local_c8 + 0x10));
          local_f8.BinId = -1;
          local_f8.BinIndex = 0xffff;
          if (*(int *)(pFVar19 + 0x2e8) != 0) {
            if ((*(int *)(pFVar19 + 0x178) != *(int *)(pFVar19 + 0x2e8)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("PipelinesCommand.TriangleShadingPipelines.Num() == PipelinesCommand.VoxelShadingPipelines.Num()"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteDrawList.cpp"
                                   ,0x134,L""), bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar7 = 0;
            if ((int)uVar20 < *(int *)(pFVar19 + 0x2e8)) {
              uVar7 = uVar16;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pFVar17 = *(FScriptContainerElement **)(pFVar19 + 0x2e0);
            if (*(FScriptContainerElement **)(pFVar19 + 0x2e0) == (FScriptContainerElement *)0x0) {
              pFVar17 = pFVar19 + 0x180;
            }
            if (*(longlong *)(pFVar17 + lVar4 + 0x30) != 0) {
              local_f8 = FNaniteShadingPipelines::Register
                                   ((FNaniteShadingPipelines *)local_c8._8_8_,
                                    (FNaniteShadingPipeline *)&local_68.DisplacementScaling);
              local_f8 = *(FNaniteShadingBin *)local_f8;
            }
          }
          AddShadingBin(this,local_e0,(FNaniteShadingBin *)(local_c8 + 0x10),&local_f8,local_res20,
                        (uchar)uVar20);
          if (FVar15 != (ForElementType<FNaniteVisibility::FShadingBin>)0x0) {
            FVar14 = *(ForElementType<FNaniteVisibility::FShadingBin> *)((longlong)FVar15 + 8);
            local_104 = CONCAT22(local_f8.BinIndex,local_b4);
            FVar11 = FVar15;
            if (FVar14 != (ForElementType<FNaniteVisibility::FShadingBin>)0x0) {
              FVar11 = FVar14;
            }
            if ((ulonglong)FVar11 <= &local_104) {
              FVar11 = FVar15;
              if (FVar14 != (ForElementType<FNaniteVisibility::FShadingBin>)0x0) {
                FVar11 = FVar14;
              }
              if ((&local_104 <
                   (undefined4 *)
                   ((longlong)FVar11 + (longlong)*(int *)((longlong)FVar15 + 0x14) * 4)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            iVar8 = *(int *)((longlong)FVar15 + 0x10);
            if (iVar8 == *(int *)((longlong)FVar15 + 0x14)) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FNaniteVisibility::FShadingBin>_>
                                (0x204,(ForElementType<FNaniteVisibility::FShadingBin> *)FVar15,
                                 (int *)((longlong)FVar15 + 0x14));
            }
            *(int *)((longlong)FVar15 + 0x10) = iVar8 + 1;
            FVar14 = FVar15;
            if (*(ForElementType<FNaniteVisibility::FShadingBin> *)((longlong)FVar15 + 8) !=
                (ForElementType<FNaniteVisibility::FShadingBin>)0x0) {
              FVar14 = *(ForElementType<FNaniteVisibility::FShadingBin> *)((longlong)FVar15 + 8);
            }
            *(undefined4 *)((longlong)FVar14 + (longlong)iVar8 * 4) = local_104;
          }
          local_e8 = local_e8 + 0x20;
          local_b0 = lVar4 + 0x58;
          uVar20 = uVar20 + 1;
          this_01 = local_e0;
          pFVar17 = local_a8;
        } while ((int)uVar20 < local_f0);
      }
      if ((int)local_a0 == 0) {
        FPrimitiveSceneInfo::RefreshNaniteRasterBins(this_01);
      }
      pFVar17 = pFVar17 + 0x378;
      pFVar19 = pFVar19 + 0x378;
      uVar12 = (ulonglong)local_ec;
    }
    local_d8 = local_d8 + 4;
    local_res20 = local_res20 + LumenCardCapture;
    local_a0 = (ulonglong)local_res20;
    if (2 < (int)local_res20) {
      return;
    }
  } while( true );
}

// GetMaterialSlotForWrite @ 145063a00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FNaniteMaterialSlot * __thiscall
FNaniteMaterialListContext::GetMaterialSlotForWrite
          (FNaniteMaterialListContext *this,FPrimitiveSceneInfo *param_1,Type param_2,uchar param_3)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNaniteMaterialSlot *pFVar6;
  uint uVar7;
  TArray<FNaniteMaterialSlot,TSizedDefaultAllocator<32>_> *pTVar8;
  
  pTVar8 = param_1->NaniteMaterialSlots + (int)param_2;
  piVar1 = &pTVar8->ArrayNum;
  if (pTVar8->ArrayNum == 0) {
    if (param_1->Proxy->bIsNaniteMesh == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrimitiveSceneInfo.Proxy->IsNaniteMesh()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteDrawList.cpp"
                         ,0xc9,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FNaniteMaterialSlot *)(*pcVar3)();
        return pFVar6;
      }
    }
    if (param_1->NaniteRasterBins[(int)param_2].ArrayNum != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrimitiveSceneInfo.NaniteRasterBins[MeshPass].Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteDrawList.cpp"
                         ,0xca,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FNaniteMaterialSlot *)(*pcVar3)();
        return pFVar6;
      }
    }
    if (param_1->NaniteShadingBins[(int)param_2].ArrayNum != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrimitiveSceneInfo.NaniteShadingBins[MeshPass].Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteDrawList.cpp"
                         ,0xcb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FNaniteMaterialSlot *)(*pcVar3)();
        return pFVar6;
      }
    }
    iVar5 = *piVar1;
    uVar2 = (uint)param_1->Proxy[1]._padding_;
    if (iVar5 < (int)uVar2) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,2,uVar2 - iVar5,&pTVar8->AllocatorInstance,piVar1,&pTVar8->ArrayMax);
    }
    else {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if ((int)uVar2 < iVar5) {
        uVar7 = iVar5 - uVar2;
        if ((int)(uVar7 | uVar2) < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FNaniteMaterialSlot *)(*pcVar3)();
            return pFVar6;
          }
        }
        if (uVar7 != 0) {
          _Dst = (pTVar8->AllocatorInstance).Data + (longlong)(int)uVar2 * 8;
          iVar5 = (*piVar1 - uVar2) - uVar7;
          if (iVar5 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar7 * 8,(longlong)iVar5 << 3);
          }
          *piVar1 = *piVar1 - uVar7;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,2,&pTVar8->AllocatorInstance,*piVar1,&pTVar8->ArrayMax);
        }
      }
    }
    memset((pTVar8->AllocatorInstance).Data,0xff,(ulonglong)(uVar2 * 8));
  }
  if (*piVar1 <= (int)(uint)param_3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaterialSlots.IsValidIndex(SectionIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteDrawList.cpp"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FNaniteMaterialSlot *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (*piVar1 <= (int)(uint)param_3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FNaniteMaterialSlot *)(*pcVar3)();
      return pFVar6;
    }
  }
  return (FNaniteMaterialSlot *)((pTVar8->AllocatorInstance).Data + (ulonglong)param_3 * 8);
}

