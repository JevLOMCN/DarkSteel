// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FLumenSurfaceCacheCullInstancesTask @ 144d414a0

FLumenSurfaceCacheCullInstancesTask * __thiscall
FLumenSurfaceCacheCullInstancesTask::FLumenSurfaceCacheCullInstancesTask
          (FLumenSurfaceCacheCullInstancesTask *this,
          TSparseSpanArray<FLumenPrimitiveGroupCullingInfo> *param_1,
          TArrayView<FInstanceRange_const_,int> *param_2,TArrayView<int_const_,int> *param_3,
          TArray<UE::Math::TVector<double>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_4,bool param_5,float param_6,float param_7,int param_8,int param_9,bool param_10)

{
  int *piVar1;
  code *pcVar2;
  FInstanceRange *pFVar3;
  undefined4 uVar4;
  TConsoleVariableData<float> *pTVar5;
  TConsoleVariableData<float> *pTVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FLumenSurfaceCacheCullInstancesTask *pFVar11;
  ForElementType<UE::Math::TVector<double>_> FVar12;
  float fVar13;
  
  pFVar3 = param_2->DataPtr;
  iVar9 = param_2->ArrayNum;
  uVar4 = *(undefined4 *)&param_2->field_0xc;
  this->InstanceCullingInfos = param_1;
  (this->MeshCardsAdds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshCardsAdds).ArrayNum = 0;
  (this->MeshCardsAdds).ArrayMax = 0;
  (this->MeshCardsRemoves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshCardsRemoves).ArrayNum = 0;
  (this->MeshCardsRemoves).ArrayMax = 0;
  (this->InstanceRanges).DataPtr = pFVar3;
  (this->InstanceRanges).ArrayNum = iVar9;
  *(undefined4 *)&(this->InstanceRanges).field_0xc = uVar4;
  iVar9 = param_3->ArrayNum;
  uVar4 = *(undefined4 *)&param_3->field_0xc;
  (this->RebasedRangeOffsets).DataPtr = param_3->DataPtr;
  (this->RebasedRangeOffsets).ArrayNum = iVar9;
  *(undefined4 *)&(this->RebasedRangeOffsets).field_0xc = uVar4;
  (this->ViewOrigins).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TVector<double>_>)0x0;
  FVar12 = (param_4->AllocatorInstance).SecondaryData;
  iVar9 = param_4->ArrayNum;
  (this->ViewOrigins).ArrayNum = iVar9;
  if (FVar12 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
    param_4 = (TArray<UE::Math::TVector<double>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
               *)FVar12;
  }
  piVar1 = &(this->ViewOrigins).ArrayMax;
  if (iVar9 == 0) {
    *piVar1 = 2;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
              (0x18,8,iVar9,0,&(this->ViewOrigins).AllocatorInstance,iVar9,piVar1);
    FVar12 = (this->ViewOrigins).AllocatorInstance.SecondaryData;
    if (FVar12 == (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FVar12 = (ForElementType<UE::Math::TVector<double>_>)&this->ViewOrigins;
    }
    memcpy((void *)FVar12,param_4,(longlong)iVar9 * 0x18);
  }
  this->FirstCullingInfoIndex = param_8;
  this->LumenSceneDetail = param_6;
  this->MaxDistanceFromCameraSq = param_7 * param_7;
  this->bOrthographicCamera = param_5;
  this->NumCullingInfosPerPacket = param_9;
  fVar13 = LumenScene::GetCardTexelDensity();
  this->TexelDensityScale = fVar13;
  iVar9 = LumenScene::GetCardMinResolution(param_5);
  iVar10 = (int)ROUND(((float)iVar9 + (float)iVar9) / this->LumenSceneDetail + __real_3f000000) >> 1
  ;
  iVar9 = 0x400;
  if (iVar10 < 0x400) {
    iVar9 = iVar10;
  }
  iVar10 = 1;
  if (1 < iVar9) {
    iVar10 = iVar9;
  }
  this->MinCardResolution = iVar10;
  pTVar7 = CVarLumenSceneSurfaceCacheRemovesPerFrame.Ref;
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FLumenSurfaceCacheCullInstancesTask *)(*pcVar2)();
      return pFVar11;
    }
  }
  iVar9 = 0;
  if (0 < pTVar7->ShadowedValue[1]) {
    iVar9 = pTVar7->ShadowedValue[1];
  }
  this->MaxMeshCardsRemoves = iVar9;
  pTVar5 = CVarLumenSceneFarFieldDistance.Ref;
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FLumenSurfaceCacheCullInstancesTask *)(*pcVar2)();
      return pFVar11;
    }
  }
  pTVar6 = CVarLumenSceneFarFieldDistance.Ref;
  fVar13 = pTVar5->ShadowedValue[1];
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FLumenSurfaceCacheCullInstancesTask *)(*pcVar2)();
      return pFVar11;
    }
  }
  this->FarFieldCardMaxDistanceSq = fVar13 * pTVar6->ShadowedValue[1];
  pTVar5 = CVarLumenSceneFarFieldTexelDensity.Ref;
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FLumenSurfaceCacheCullInstancesTask *)(*pcVar2)();
      return pFVar11;
    }
  }
  this->FarFieldCardTexelDensity = pTVar5->ShadowedValue[1];
  this->bAddTranslucentToCache = param_10;
  return this;
}

// AnyThreadTask @ 144d58650

void __thiscall
FLumenSurfaceCacheCullInstancesTask::AnyThreadTask(FLumenSurfaceCacheCullInstancesTask *this)

{
  int *piVar1;
  uchar *puVar2;
  double dVar3;
  int *piVar4;
  TSparseSpanArray<FLumenPrimitiveGroupCullingInfo> *pTVar5;
  FScriptContainerElement *pFVar6;
  ForElementType<unsigned_int> FVar7;
  ForElementType<UE::Math::TVector<double>_> FVar8;
  code *pcVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  int iVar16;
  FInstanceRange *pFVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ForElementType<unsigned_int> FVar22;
  ForElementType<UE::Math::TVector<double>_> FVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  undefined1 local_res8 [8];
  int local_res10;
  longlong local_res18;
  undefined4 local_c8 [2];
  undefined4 local_c0;
  float fStack_bc;
  
  uVar25 = (this->RebasedRangeOffsets).ArrayNum;
  piVar1 = &this->FirstCullingInfoIndex;
  iVar16 = 0;
  if (0 < (int)uVar25) {
    uVar26 = uVar25;
    do {
      iVar20 = (uVar26 >> 1) + iVar16;
      if ((this->RebasedRangeOffsets).DataPtr[iVar20] <= *piVar1) {
        iVar16 = iVar20 + (uVar26 & 1);
      }
      uVar21 = uVar26 >> 1;
      uVar26 = uVar26 >> 1;
    } while (uVar21 != 0);
  }
  uVar26 = iVar16 - 1;
  uVar21 = uVar25 - 1;
  if ((int)uVar26 < (int)uVar21) {
    uVar19 = 0;
    if ((int)uVar21 < (int)uVar25) {
      uVar19 = ~uVar21 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar16 = (this->RebasedRangeOffsets).ArrayNum;
    iVar20 = this->NumCullingInfosPerPacket + *piVar1;
    local_res10 = (this->RebasedRangeOffsets).DataPtr[(longlong)iVar16 + -1];
    if (iVar20 < local_res10) {
      local_res10 = iVar20;
    }
    local_res10 = local_res10 - *piVar1;
    uVar25 = 0;
    if ((int)uVar26 < iVar16) {
      uVar25 = ~uVar26 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    piVar4 = (this->RebasedRangeOffsets).DataPtr;
    local_res18 = (longlong)(int)uVar26;
    pFVar17 = TArrayView<FInstanceRange_const_,int>::operator[](&this->InstanceRanges,uVar26);
    fVar14 = __real_7f7fffff;
    fVar13 = __real_3f000000;
    fVar12 = __real_3f800000;
    fVar11 = __real_3c23d70a;
    uVar25 = (pFVar17->Offset - piVar4[(int)uVar26]) + *piVar1;
    if (0 < local_res10) {
      do {
        pTVar5 = this->InstanceCullingInfos;
        uVar21 = 0;
        if ((int)uVar25 < (pTVar5->Elements).ArrayNum) {
          uVar21 = ~uVar25 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar6 = (pTVar5->Elements).AllocatorInstance.Data;
        lVar18 = 0x38;
        pTVar5 = this->InstanceCullingInfos;
        lVar24 = (longlong)(int)uVar25 * 0x20;
        if ((pTVar5->SpanAllocator).bGrowOnly == false) {
          lVar18 = 0x34;
        }
        if ((int)uVar25 <
            *(int *)((pTVar5->AllocatedElementsBitArray).AllocatorInstance.InlineData +
                    lVar18 + -0x10)) {
          if ((((int)uVar25 < 0) || ((pTVar5->AllocatedElementsBitArray).NumBits <= (int)uVar25)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5c6,L""), bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar7 = (pTVar5->AllocatedElementsBitArray).AllocatorInstance.SecondaryData;
          FVar22 = (ForElementType<unsigned_int>)&pTVar5->AllocatedElementsBitArray;
          if (FVar7 != (ForElementType<unsigned_int>)0x0) {
            FVar22 = FVar7;
          }
          uVar21 = uVar25;
          if ((int)uVar25 < 0) {
            uVar21 = uVar25 + 0x1f;
          }
          if (((*(uint *)((longlong)FVar22 + (longlong)((int)uVar21 >> 5) * 4) >> (uVar25 & 0x1f) &
               1) == 0) || (0x1f < *(uint *)(pFVar6 + lVar24))) goto LAB_144d58909;
        }
        else {
LAB_144d58909:
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InstanceCullingInfos.IsAllocated(CullingInfoIndex) && CullingInfo.NumInstances == 0"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneRendering.cpp"
                              ,0x252,L"");
          if (bVar15) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        FVar8 = (this->ViewOrigins).AllocatorInstance.SecondaryData;
        FVar23 = (ForElementType<UE::Math::TVector<double>_>)&this->ViewOrigins;
        iVar16 = (this->ViewOrigins).ArrayNum;
        if (FVar8 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
          FVar23 = FVar8;
        }
        FVar8 = (ForElementType<UE::Math::TVector<double>_>)
                ((longlong)FVar23 + (longlong)iVar16 * 0x18);
        fVar34 = fVar14;
        while( true ) {
          if ((this->ViewOrigins).ArrayNum != iVar16) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_res8);
          }
          if (FVar23 == FVar8) break;
          dVar3 = *(double *)FVar23;
          dVar29 = 0.0;
          dVar32 = (double)*(float *)(pFVar6 + lVar24 + 0x14);
          dVar31 = (double)*(float *)(pFVar6 + lVar24 + 8);
          dVar33 = (double)*(float *)(pFVar6 + lVar24 + 0xc);
          dVar10 = (double)*(float *)(pFVar6 + lVar24 + 0x10);
          if ((dVar3 < dVar31) || (dVar31 = dVar32, dVar32 < dVar3)) {
            dVar29 = (dVar3 - dVar31) * (dVar3 - dVar31);
          }
          dVar3 = *(double *)((longlong)FVar23 + 8);
          if ((dVar3 < dVar33) ||
             (dVar33 = (double)*(float *)(pFVar6 + lVar24 + 0x18),
             (double)*(float *)(pFVar6 + lVar24 + 0x18) < dVar3)) {
            dVar29 = dVar29 + (dVar3 - dVar33) * (dVar3 - dVar33);
          }
          dVar3 = *(double *)((longlong)FVar23 + 0x10);
          if ((dVar3 < dVar10) ||
             (dVar10 = (double)*(float *)(pFVar6 + lVar24 + 0x1c),
             (double)*(float *)(pFVar6 + lVar24 + 0x1c) < dVar3)) {
            dVar29 = dVar29 + (dVar3 - dVar10) * (dVar3 - dVar10);
          }
          FVar23 = (ForElementType<UE::Math::TVector<double>_>)((longlong)FVar23 + 0x18);
          dVar3 = (double)fVar34;
          if (dVar29 <= (double)fVar34) {
            dVar3 = dVar29;
          }
          fVar34 = (float)dVar3;
        }
        uVar21 = *(uint *)(pFVar6 + lVar24);
        fVar30 = (*(float *)(pFVar6 + lVar24 + 0x14) - *(float *)(pFVar6 + lVar24 + 8)) * fVar13;
        fVar27 = (*(float *)(pFVar6 + lVar24 + 0x18) - *(float *)(pFVar6 + lVar24 + 0xc)) * fVar13;
        fVar28 = (*(float *)(pFVar6 + lVar24 + 0x1c) - *(float *)(pFVar6 + lVar24 + 0x10)) * fVar13;
        if (fVar30 <= fVar27) {
          fVar30 = fVar27;
        }
        if (fVar30 <= fVar28) {
          fVar30 = fVar28;
        }
        if ((uVar21 & 4) == 0) {
          lVar18 = 0x98;
          fVar27 = fVar34;
          if (fVar34 <= fVar12) {
            fVar27 = fVar12;
          }
          fVar30 = (fVar30 * this->TexelDensityScale) / SQRT(fVar27) + fVar11;
        }
        else {
          fVar30 = fVar30 * this->FarFieldCardTexelDensity;
          lVar18 = 0xa8;
        }
        puVar2 = (this->ViewOrigins).AllocatorInstance.InlineData + lVar18 + -0x48;
        if (*(float *)puVar2 <= fVar34 && fVar34 != *(float *)puVar2) {
LAB_144d58bae:
          if (((uVar21 & 1) != 0) && ((this->MeshCardsRemoves).ArrayNum < this->MaxMeshCardsRemoves)
             ) {
            local_c8[0] = *(undefined4 *)(pFVar6 + lVar24 + 4);
            pFVar6 = (this->MeshCardsRemoves).AllocatorInstance.Data;
            if (((pFVar6 <= (FScriptContainerElement *)local_c8) &&
                ((FScriptContainerElement *)local_c8 <
                 pFVar6 + (longlong)(this->MeshCardsRemoves).ArrayMax * 4)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar16 = (this->MeshCardsRemoves).ArrayNum;
            piVar1 = &(this->MeshCardsRemoves).ArrayMax;
            if (iVar16 == *piVar1) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&(this->MeshCardsRemoves).AllocatorInstance,piVar1);
            }
            (this->MeshCardsRemoves).ArrayNum = iVar16 + 1;
            *(undefined4 *)((this->MeshCardsRemoves).AllocatorInstance.Data + (longlong)iVar16 * 4)
                 = local_c8[0];
          }
        }
        else {
          fVar27 = fVar12;
          if ((uVar21 & 8) == 0) {
            fVar27 = (float)this->MinCardResolution;
          }
          if ((fVar30 < fVar27) ||
             (((uVar21 & 0x10) == 0 && (this->bAddTranslucentToCache == false))))
          goto LAB_144d58bae;
          if (((byte)uVar21 & 3) == 2) {
            local_c0 = *(undefined4 *)(pFVar6 + lVar24 + 4);
            pFVar6 = (this->MeshCardsAdds).AllocatorInstance.Data;
            fStack_bc = fVar34;
            if (((pFVar6 <= (FScriptContainerElement *)&local_c0) &&
                ((FScriptContainerElement *)&local_c0 <
                 pFVar6 + (longlong)(this->MeshCardsAdds).ArrayMax * 8)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar16 = (this->MeshCardsAdds).ArrayNum;
            piVar1 = &(this->MeshCardsAdds).ArrayMax;
            if (iVar16 == *piVar1) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,(ForAnyElementType *)this,piVar1);
            }
            (this->MeshCardsAdds).ArrayNum = iVar16 + 1;
            *(ulonglong *)((this->MeshCardsAdds).AllocatorInstance.Data + (longlong)iVar16 * 8) =
                 CONCAT44(fStack_bc,local_c0);
          }
        }
        uVar25 = uVar25 + 1;
        local_res10 = local_res10 + -1;
        if (local_res10 < 1) {
          return;
        }
        uVar21 = 0;
        if ((int)uVar26 < (this->InstanceRanges).ArrayNum) {
          uVar21 = ~uVar26 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar18 = local_res18;
        pFVar17 = (this->InstanceRanges).DataPtr;
        uVar21 = 0;
        if ((int)uVar26 < (this->InstanceRanges).ArrayNum) {
          uVar21 = ~uVar26 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if ((this->InstanceRanges).DataPtr[lVar18].Offset + pFVar17[lVar18].Num <= (int)uVar25) {
          uVar26 = uVar26 + 1;
          lVar18 = lVar18 + 1;
          uVar25 = 0;
          if ((int)uVar26 < (this->InstanceRanges).ArrayNum) {
            uVar25 = ~uVar26 >> 0x1f;
          }
          local_res18 = lVar18;
          if ((uVar25 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar25 = (this->InstanceRanges).DataPtr[lVar18].Offset;
        }
      } while( true );
    }
  }
  return;
}

