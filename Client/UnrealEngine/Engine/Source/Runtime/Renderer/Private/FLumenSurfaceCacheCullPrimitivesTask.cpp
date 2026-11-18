// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FLumenSurfaceCacheCullPrimitivesTask @ 144d41740

FLumenSurfaceCacheCullPrimitivesTask * __thiscall
FLumenSurfaceCacheCullPrimitivesTask::FLumenSurfaceCacheCullPrimitivesTask
          (FLumenSurfaceCacheCullPrimitivesTask *this,
          TSparseArray<FLumenPrimitiveGroupCullingInfo,FDefaultSparseArrayAllocator> *param_1,
          TArray<UE::Math::TVector<double>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_2,bool param_3,float param_4,float param_5,int param_6,int param_7,bool param_8)

{
  int *piVar1;
  code *pcVar2;
  TConsoleVariableData<float> *pTVar3;
  TConsoleVariableData<float> *pTVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FLumenSurfaceCacheCullPrimitivesTask *pFVar9;
  ForElementType<UE::Math::TVector<double>_> FVar10;
  float fVar11;
  
  this->PrimitiveCullingInfos = param_1;
  (this->MeshCardsAdds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshCardsAdds).ArrayNum = 0;
  (this->MeshCardsAdds).ArrayMax = 0;
  (this->MeshCardsRemoves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshCardsRemoves).ArrayNum = 0;
  (this->MeshCardsRemoves).ArrayMax = 0;
  (this->InstanceCullingRanges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceCullingRanges).ArrayNum = 0;
  (this->InstanceCullingRanges).ArrayMax = 0;
  (this->ViewOrigins).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TVector<double>_>)0x0;
  FVar10 = (param_2->AllocatorInstance).SecondaryData;
  iVar7 = param_2->ArrayNum;
  if (FVar10 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
    param_2 = (TArray<UE::Math::TVector<double>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
               *)FVar10;
  }
  (this->ViewOrigins).ArrayNum = iVar7;
  piVar1 = &(this->ViewOrigins).ArrayMax;
  if (iVar7 == 0) {
    *piVar1 = 2;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
              (0x18,8,iVar7,0,&(this->ViewOrigins).AllocatorInstance,iVar7,piVar1);
    FVar10 = (this->ViewOrigins).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar10 = (ForElementType<UE::Math::TVector<double>_>)&this->ViewOrigins;
    }
    memcpy((void *)FVar10,param_2,(longlong)iVar7 * 0x18);
  }
  this->FirstCullingInfoIndex = param_6;
  this->LumenSceneDetail = param_4;
  this->MaxDistanceFromCameraSq = param_5 * param_5;
  this->bOrthographicCamera = param_3;
  this->NumCullingInfosPerPacket = param_7;
  fVar11 = LumenScene::GetCardTexelDensity();
  this->TexelDensityScale = fVar11;
  iVar7 = LumenScene::GetCardMinResolution(param_3);
  iVar8 = (int)ROUND(((float)iVar7 + (float)iVar7) / this->LumenSceneDetail + __real_3f000000) >> 1;
  iVar7 = 0x400;
  if (iVar8 < 0x400) {
    iVar7 = iVar8;
  }
  iVar8 = 1;
  if (1 < iVar7) {
    iVar8 = iVar7;
  }
  this->MinCardResolution = iVar8;
  pTVar5 = CVarLumenSceneSurfaceCacheRemovesPerFrame.Ref;
  bVar6 = IsInParallelRenderingThread();
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FLumenSurfaceCacheCullPrimitivesTask *)(*pcVar2)();
      return pFVar9;
    }
  }
  iVar7 = 0;
  if (0 < pTVar5->ShadowedValue[1]) {
    iVar7 = pTVar5->ShadowedValue[1];
  }
  this->MaxMeshCardsRemoves = iVar7;
  pTVar3 = CVarLumenSceneFarFieldDistance.Ref;
  bVar6 = IsInParallelRenderingThread();
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FLumenSurfaceCacheCullPrimitivesTask *)(*pcVar2)();
      return pFVar9;
    }
  }
  pTVar4 = CVarLumenSceneFarFieldDistance.Ref;
  fVar11 = pTVar3->ShadowedValue[1];
  bVar6 = IsInParallelRenderingThread();
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FLumenSurfaceCacheCullPrimitivesTask *)(*pcVar2)();
      return pFVar9;
    }
  }
  this->FarFieldCardMaxDistanceSq = fVar11 * pTVar4->ShadowedValue[1];
  pTVar3 = CVarLumenSceneFarFieldTexelDensity.Ref;
  bVar6 = IsInParallelRenderingThread();
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FLumenSurfaceCacheCullPrimitivesTask *)(*pcVar2)();
      return pFVar9;
    }
  }
  this->FarFieldCardTexelDensity = pTVar3->ShadowedValue[1];
  this->bAddTranslucentToCache = param_8;
  return this;
}

// AnyThreadTask @ 144d58e00

void __thiscall
FLumenSurfaceCacheCullPrimitivesTask::AnyThreadTask(FLumenSurfaceCacheCullPrimitivesTask *this)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  TSparseArray<FLumenPrimitiveGroupCullingInfo,FDefaultSparseArrayAllocator> *pTVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  byte bVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  int iVar15;
  longlong lVar16;
  ForElementType<UE::Math::TVector<double>_> FVar17;
  int iVar18;
  uint uVar19;
  undefined1 *puVar20;
  ForElementType<UE::Math::TVector<double>_> FVar21;
  longlong lVar22;
  uint uVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  uint local_res20;
  undefined4 local_f8 [2];
  longlong local_f0;
  undefined4 local_e8;
  uint uStack_e4;
  undefined4 local_e0;
  float fStack_dc;
  ForElementType<UE::Math::TVector<double>_> local_d8;
  
  fVar13 = __real_7f7fffff;
  fVar12 = __real_3f000000;
  fVar11 = __real_3f800000;
  fVar10 = __real_3c23d70a;
  local_res10 = this->FirstCullingInfoIndex;
  local_f0 = (longlong)local_res10;
  iVar15 = *(int *)&this->PrimitiveCullingInfos->field_0x8;
  iVar18 = this->NumCullingInfosPerPacket + local_res10;
  if (iVar18 < iVar15) {
    iVar15 = iVar18;
  }
  if (local_f0 < iVar15) {
    bVar8 = (byte)local_res10 & 0x1f;
    uVar23 = 1 << bVar8 | 1U >> 0x20 - bVar8;
    lVar22 = local_f0 << 5;
    local_f0 = iVar15 - local_f0;
    do {
      pTVar4 = this->PrimitiveCullingInfos;
      local_res20 = uVar23;
      if (((local_res10 < 0) || (*(int *)&pTVar4->field_0x28 <= local_res10)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar20 = &pTVar4->field_0x10;
      if (*(undefined1 **)&pTVar4->field_0x20 != (undefined1 *)0x0) {
        puVar20 = *(undefined1 **)&pTVar4->field_0x20;
      }
      iVar15 = local_res10;
      if (local_res10 < 0) {
        iVar15 = local_res10 + 0x1f;
      }
      if ((*(uint *)(puVar20 + (longlong)(iVar15 >> 5) * 4) & uVar23) != 0) {
        FVar21 = (ForElementType<UE::Math::TVector<double>_>)&this->ViewOrigins;
        FVar17 = (this->ViewOrigins).AllocatorInstance.SecondaryData;
        lVar5 = *(longlong *)this->PrimitiveCullingInfos;
        iVar15 = (this->ViewOrigins).ArrayNum;
        if (FVar17 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
          FVar21 = FVar17;
        }
        pfVar26 = (float *)(lVar5 + 0x18 + lVar22);
        pfVar27 = (float *)(lVar5 + 0xc + lVar22);
        pfVar28 = (float *)(lVar5 + 0x1c + lVar22);
        FVar17 = (ForElementType<UE::Math::TVector<double>_>)
                 ((longlong)FVar21 + (longlong)iVar15 * 0x18);
        pfVar24 = (float *)(lVar5 + lVar22 + 0x14);
        pfVar25 = (float *)(lVar5 + lVar22 + 8);
        pfVar29 = (float *)(lVar5 + 0x10 + lVar22);
        fVar36 = fVar13;
        local_res18 = iVar15;
        local_d8 = FVar17;
        while( true ) {
          if ((this->ViewOrigins).ArrayNum != iVar15) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_res8);
            pfVar26 = (float *)(lVar5 + 0x18 + lVar22);
            pfVar27 = (float *)(lVar5 + 0xc + lVar22);
            pfVar28 = (float *)(lVar5 + 0x1c + lVar22);
            pfVar24 = (float *)(lVar5 + lVar22 + 0x14);
            pfVar29 = (float *)(lVar5 + 0x10 + lVar22);
            pfVar25 = (float *)(lVar5 + lVar22 + 8);
            FVar17 = local_d8;
            iVar15 = local_res18;
          }
          if (FVar21 == FVar17) break;
          dVar3 = *(double *)FVar21;
          pfVar25 = (float *)(lVar5 + 8 + lVar22);
          pfVar24 = (float *)(lVar5 + 0x14 + lVar22);
          pfVar26 = (float *)(lVar5 + 0x18 + lVar22);
          pfVar28 = (float *)(lVar5 + 0x1c + lVar22);
          pfVar27 = (float *)(lVar5 + 0xc + lVar22);
          pfVar29 = (float *)(lVar5 + 0x10 + lVar22);
          dVar32 = 0.0;
          dVar34 = (double)*pfVar25;
          dVar35 = (double)*pfVar27;
          dVar9 = (double)*pfVar29;
          if ((dVar3 < dVar34) || (dVar34 = (double)*pfVar24, (double)*pfVar24 < dVar3)) {
            dVar32 = (dVar3 - dVar34) * (dVar3 - dVar34);
          }
          dVar3 = *(double *)((longlong)FVar21 + 8);
          if ((dVar3 < dVar35) || (dVar35 = (double)*pfVar26, (double)*pfVar26 < dVar3)) {
            dVar32 = dVar32 + (dVar3 - dVar35) * (dVar3 - dVar35);
          }
          dVar3 = *(double *)((longlong)FVar21 + 0x10);
          if ((dVar3 < dVar9) || (dVar9 = (double)*pfVar28, (double)*pfVar28 < dVar3)) {
            dVar32 = dVar32 + (dVar3 - dVar9) * (dVar3 - dVar9);
          }
          FVar21 = (ForElementType<UE::Math::TVector<double>_>)((longlong)FVar21 + 0x18);
          dVar3 = (double)fVar36;
          if (dVar32 <= (double)fVar36) {
            dVar3 = dVar32;
          }
          fVar36 = (float)dVar3;
        }
        uVar23 = *(uint *)(lVar5 + lVar22);
        lVar16 = 0x98;
        if ((uVar23 & 4) == 0) {
          lVar16 = 0x88;
        }
        fVar2 = *(float *)((longlong)(&(this->ViewOrigins).AllocatorInstance + -1) + lVar16);
        if ((uVar23 & 0xffffffe0) == 0) {
          fVar33 = (*pfVar24 - *pfVar25) * fVar12;
          fVar30 = (*pfVar26 - *pfVar27) * fVar12;
          fVar31 = (*pfVar28 - *pfVar29) * fVar12;
          if (fVar33 <= fVar30) {
            fVar33 = fVar30;
          }
          if (fVar33 <= fVar31) {
            fVar33 = fVar31;
          }
          if ((uVar23 & 4) == 0) {
            fVar30 = fVar36;
            if (fVar36 <= fVar11) {
              fVar30 = fVar11;
            }
            fVar33 = (fVar33 * this->TexelDensityScale) / SQRT(fVar30) + fVar10;
          }
          else {
            fVar33 = fVar33 * this->FarFieldCardTexelDensity;
          }
          if (fVar36 <= fVar2) {
            fVar2 = fVar11;
            if ((uVar23 & 8) == 0) {
              fVar2 = (float)this->MinCardResolution;
            }
            if ((fVar2 <= fVar33) &&
               (((uVar23 & 0x10) != 0 || (this->bAddTranslucentToCache != false)))) {
              if (((byte)uVar23 & 3) == 2) {
                local_e0 = *(undefined4 *)(lVar5 + 4 + lVar22);
                pFVar6 = (this->MeshCardsAdds).AllocatorInstance.Data;
                fStack_dc = fVar36;
                if (((pFVar6 <= (FScriptContainerElement *)&local_e0) &&
                    ((FScriptContainerElement *)&local_e0 <
                     pFVar6 + (longlong)(this->MeshCardsAdds).ArrayMax * 8)) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar14)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                iVar15 = (this->MeshCardsAdds).ArrayNum;
                piVar1 = &(this->MeshCardsAdds).ArrayMax;
                if (iVar15 == *piVar1) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x408,(ForAnyElementType *)this,piVar1);
                }
                (this->MeshCardsAdds).ArrayNum = iVar15 + 1;
                *(ulonglong *)((this->MeshCardsAdds).AllocatorInstance.Data + (longlong)iVar15 * 8)
                     = CONCAT44(fStack_dc,local_e0);
              }
              goto LAB_144d593f9;
            }
          }
          if (((uVar23 & 1) != 0) && ((this->MeshCardsRemoves).ArrayNum < this->MaxMeshCardsRemoves)
             ) {
            local_f8[0] = *(undefined4 *)(lVar5 + 4 + lVar22);
            pFVar6 = (this->MeshCardsRemoves).AllocatorInstance.Data;
            if ((pFVar6 <= (FScriptContainerElement *)local_f8) &&
               (((FScriptContainerElement *)local_f8 <
                 pFVar6 + (longlong)(this->MeshCardsRemoves).ArrayMax * 4 &&
                (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar14)))) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar15 = (this->MeshCardsRemoves).ArrayNum;
            piVar1 = &(this->MeshCardsRemoves).ArrayMax;
            if (iVar15 == *piVar1) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&(this->MeshCardsRemoves).AllocatorInstance,piVar1);
            }
            (this->MeshCardsRemoves).ArrayNum = iVar15 + 1;
            *(undefined4 *)((this->MeshCardsRemoves).AllocatorInstance.Data + (longlong)iVar15 * 4)
                 = local_f8[0];
          }
        }
        else {
          uVar19 = (uint)(fVar36 <= fVar2);
          *(uint *)(lVar5 + lVar22) = uVar19 | uVar23 & 0xfffffffe;
          if (((uVar23 & 1) != 0) || (uVar19 != 0)) {
            local_e8 = *(undefined4 *)(lVar5 + 4 + lVar22);
            pFVar6 = (this->InstanceCullingRanges).AllocatorInstance.Data;
            uStack_e4 = uVar23 >> 5;
            if ((pFVar6 <= (FScriptContainerElement *)&local_e8) &&
               (((FScriptContainerElement *)&local_e8 <
                 pFVar6 + (longlong)(this->InstanceCullingRanges).ArrayMax * 8 &&
                (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar14)))) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar15 = (this->InstanceCullingRanges).ArrayNum;
            piVar1 = &(this->InstanceCullingRanges).ArrayMax;
            if (iVar15 == *piVar1) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&(this->InstanceCullingRanges).AllocatorInstance,piVar1);
            }
            (this->InstanceCullingRanges).ArrayNum = iVar15 + 1;
            *(ulonglong *)
             ((this->InstanceCullingRanges).AllocatorInstance.Data + (longlong)iVar15 * 8) =
                 CONCAT44(uStack_e4,local_e8);
          }
        }
      }
LAB_144d593f9:
      lVar22 = lVar22 + 0x20;
      local_res10 = local_res10 + 1;
      uVar23 = local_res20 << 1 | (uint)((int)local_res20 < 0);
      local_f0 = local_f0 + -1;
    } while (local_f0 != 0);
  }
  return;
}

