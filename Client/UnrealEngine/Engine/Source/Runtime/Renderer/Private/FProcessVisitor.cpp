// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// AddOcclusionQuery @ 145528030

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FGPUOcclusionPacket::FProcessVisitor::AddOcclusionQuery
          (FProcessVisitor *this,FOcclusionQuery *param_1)

{
  uint *puVar1;
  bool bVar2;
  FSceneViewState *pFVar3;
  FPrimitiveOcclusionHistory *pFVar4;
  FGPUOcclusionState *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FRHIRenderQuery *pFVar9;
  longlong lVar10;
  ForElementType<FRHIRenderQuery_*> FVar11;
  uint uVar12;
  ulonglong uVar13;
  
  lVar10 = 0x2510;
  if (param_1->bGroupedQuery == false) {
    lVar10 = 0x24e0;
  }
  pFVar9 = FOcclusionQueryBatcher::BatchPrimitive
                     ((FOcclusionQueryBatcher *)((longlong)&this->Packet->View->_padding_ + lVar10),
                      &(param_1->Bounds).Origin,&(param_1->Bounds).Extent,this->DynamicVertexBuffer)
  ;
  pFVar3 = this->Packet->ViewState;
  uVar12 = (int)pFVar3->OcclusionFrameCounter % this->Packet->OcclusionState->NumBufferedFrames;
  uVar8 = 0;
  if ((int)uVar12 < (pFVar3->Occlusion).LastOcclusionQueryArray.ArrayNum) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FVar11 = (pFVar3->Occlusion).LastOcclusionQueryArray.AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<FRHIRenderQuery_*>)0x0) {
    FVar11 = (ForElementType<FRHIRenderQuery_*>)&(pFVar3->Occlusion).LastOcclusionQueryArray;
  }
  *(FRHIRenderQuery **)((longlong)FVar11 + (longlong)(int)uVar12 * 8) = pFVar9;
  puVar1 = &(this->Packet->ViewState->Occlusion).NumRequestedQueries;
  *puVar1 = *puVar1 + 1;
  pFVar4 = param_1->PrimitiveOcclusionHistory;
  bVar7 = param_1->bGroupedQuery;
  pFVar5 = this->Packet->OcclusionState;
  bVar2 = pFVar5->bUseRoundRobinOcclusion;
  uVar8 = this->Packet->ViewState->OcclusionFrameCounter;
  uVar13 = (longlong)(int)uVar8 % (longlong)pFVar5->NumBufferedFrames & 0xffffffff;
  pFVar4->PendingOcclusionQuery[uVar13] = pFVar9;
  pFVar4->PendingOcclusionQueryFrames[uVar13] = uVar8;
  pFVar4->bGroupedQuery[uVar13] = bVar7;
  pFVar4->bNeedsScanOnRead = bVar2;
  return;
}

// AddVisualizeQuery @ 145528ef0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FGPUOcclusionPacket::FProcessVisitor::AddVisualizeQuery
          (FProcessVisitor *this,TBox<double> *param_1,FColor *param_2)

{
  FLinearColor_u_0 local_18;
  
  local_18._s_0.R = FLinearColor::sRGBToLinearTable[(param_2->field0_0x0)._s_0.R];
  local_18._s_0.G = FLinearColor::sRGBToLinearTable[(param_2->field0_0x0)._s_0.G];
  local_18._s_0.B = FLinearColor::sRGBToLinearTable[(param_2->field0_0x0)._s_0.B];
  local_18._s_0.A = (float)(param_2->field0_0x0)._s_0.A * __real_3b808081;
  DrawWireBox((FPrimitiveDrawInterface *)this->Packet->ViewElementPDI,param_1,
              (FLinearColor *)&local_18._s_0,'\x01',0.0,0.0,false);
  return;
}

// SubmitThrottledOcclusionQueries @ 145553180

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FGPUOcclusionPacket::FProcessVisitor::SubmitThrottledOcclusionQueries(FProcessVisitor *this)

{
  uint *puVar1;
  int iVar2;
  FGPUOcclusionState *pFVar3;
  TSet<FPrimitiveOcclusionHistory,FPrimitiveOcclusionHistoryKeyFuncs,FDefaultSetAllocator> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  FSceneViewState *pFVar6;
  ForElementType<FRHIRenderQuery_*> FVar7;
  code *pcVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  FRHIRenderQuery *pFVar14;
  uint uVar15;
  ForElementType<FSetElementId> FVar16;
  ulonglong uVar17;
  int iVar18;
  FThrottledOcclusionQuery *pFVar19;
  uint *puVar20;
  FThrottledOcclusionQuery *pFVar21;
  ForElementType<FThrottledOcclusionQuery_*> FVar22;
  uint uVar23;
  FPrimitiveComponentId FVar24;
  uint uVar25;
  ForElementType<FRHIRenderQuery_*> FVar26;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_res18;
  longlong local_res20;
  ForElementType<FThrottledOcclusionQuery_*> local_58;
  undefined8 local_50;
  
  uVar25 = (this->ThrottledOcclusionQueries).ArrayNum;
  if (uVar25 != 0) {
    local_50._0_4_ = 0;
    local_58.Data = (FThrottledOcclusionQuery **)0x0;
    local_50 = 0;
    if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
    }
    if (0 < (int)uVar25) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FThrottledOcclusionQuery_*>_>
                (8,8,uVar25,&local_58,0,(int *)((longlong)&local_50 + 4));
    }
    iVar2 = (this->ThrottledOcclusionQueries).ArrayNum;
    pFVar19 = (this->ThrottledOcclusionQueries).AllocatorInstance.Data;
    pFVar21 = pFVar19 + iVar2;
    FVar22.Data = local_58.Data;
    iVar11 = (int)local_50;
    while( true ) {
      if ((this->ThrottledOcclusionQueries).ArrayNum != iVar2) {
        local_res8[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<FThrottledOcclusionQuery,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar19 == pFVar21) break;
      if (iVar11 == local_50._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FThrottledOcclusionQuery_*>_>
                           (0x808,&local_58,(int *)((longlong)&local_50 + 4));
        FVar22.Data = local_58.Data;
      }
      lVar13 = (longlong)iVar11;
      iVar11 = iVar11 + 1;
      FVar22.Data[lVar13] = pFVar19;
      local_50 = CONCAT44(local_50._4_4_,iVar11);
      pFVar19 = pFVar19 + 1;
    }
    iVar2 = (this->Packet->View->GroupedOcclusionQueries).BatchOcclusionQueries.ArrayNum;
    pFVar3 = this->Packet->OcclusionState;
    iVar12 = 2;
    if (pFVar3->NumBufferedFrames < 2) {
      iVar12 = pFVar3->NumBufferedFrames;
    }
    iVar12 = GRHIGlobals.MaximumInFlightQueries / iVar12;
    iVar18 = iVar11;
    if (iVar12 < iVar2 + iVar11) {
      iVar9 = (iVar11 + 9) / 10;
      iVar18 = iVar12 - iVar2;
      if (iVar12 <= iVar9 + iVar2) {
        iVar18 = iVar9;
      }
      if (iVar18 < iVar11) {
        AlgoImpl::
        IntroSortInternal<FThrottledOcclusionQuery_*,int,FIdentityFunctor,TDereferenceWrapper<FThrottledOcclusionQuery_*,_FGPUOcclusionPacket::FProcessVisitor::SubmitThrottledOcclusionQueries_::__l18::<lambda_1>_>_>
                  (FVar22.Data,iVar11,local_res8[0],(<lambda_1> *)local_res10);
      }
    }
    uVar25 = 0;
    local_res20 = (longlong)iVar18;
    if (0 < iVar18) {
      local_res18 = 0;
      do {
        lVar13 = local_res18;
        uVar23 = 0;
        if ((int)uVar25 < iVar11) {
          uVar23 = ~uVar25 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar4 = this->PrimitiveOcclusionHistorySet;
        pFVar19 = FVar22.Data[lVar13];
        uVar23 = (pFVar19->PrimitiveOcclusionHistoryKey).CustomIndex;
        FVar24 = (pFVar19->PrimitiveOcclusionHistoryKey).PrimitiveId;
        if (*(int *)&(pTVar4->Elements).field_0x8 != *(int *)&(pTVar4->Elements).field_0x34) {
          FVar5 = (pTVar4->Hash).SecondaryData;
          FVar16 = (ForElementType<FSetElementId>)&pTVar4->Hash;
          if (FVar5 != (ForElementType<FSetElementId>)0x0) {
            FVar16 = FVar5;
          }
          uVar15 = *(uint *)((longlong)FVar16 +
                            (ulonglong)
                            (pTVar4->HashSize - 1U & (uVar23 >> 0x14 ^ FVar24.PrimIDValue)) * 4);
          if (uVar15 != 0xffffffff) {
            do {
              puVar20 = (uint *)((longlong)(int)uVar15 * 0x68 + *(longlong *)&pTVar4->Elements);
              if ((*puVar20 == FVar24.PrimIDValue) && (puVar20[0x14] == uVar23)) {
                if (uVar15 != 0xffffffff) goto LAB_1455533ca;
                break;
              }
              uVar15 = puVar20[0x18];
            } while (uVar15 != 0xffffffff);
          }
        }
        puVar20 = (uint *)0x0;
LAB_1455533ca:
        pFVar14 = FOcclusionQueryBatcher::BatchPrimitive
                            (&this->Packet->View->IndividualOcclusionQueries,
                             &(pFVar19->Bounds).Origin,&(pFVar19->Bounds).Extent,
                             this->DynamicVertexBuffer);
        pFVar6 = this->Packet->ViewState;
        uVar15 = (int)pFVar6->OcclusionFrameCounter %
                 this->Packet->OcclusionState->NumBufferedFrames;
        uVar23 = 0;
        if ((int)uVar15 < (pFVar6->Occlusion).LastOcclusionQueryArray.ArrayNum) {
          uVar23 = ~uVar15 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar7 = (pFVar6->Occlusion).LastOcclusionQueryArray.AllocatorInstance.SecondaryData;
        FVar26 = (ForElementType<FRHIRenderQuery_*>)&(pFVar6->Occlusion).LastOcclusionQueryArray;
        if (FVar7 != (ForElementType<FRHIRenderQuery_*>)0x0) {
          FVar26 = FVar7;
        }
        uVar25 = uVar25 + 1;
        *(FRHIRenderQuery **)((longlong)FVar26 + (longlong)(int)uVar15 * 8) = pFVar14;
        puVar1 = &(this->Packet->ViewState->Occlusion).NumRequestedQueries;
        *puVar1 = *puVar1 + 1;
        pFVar3 = this->Packet->OcclusionState;
        bVar10 = pFVar3->bUseRoundRobinOcclusion;
        uVar23 = this->Packet->ViewState->OcclusionFrameCounter;
        uVar17 = (longlong)(int)uVar23 % (longlong)pFVar3->NumBufferedFrames & 0xffffffff;
        *(FRHIRenderQuery **)(puVar20 + uVar17 * 2 + 2) = pFVar14;
        puVar20[uVar17 + 10] = uVar23;
        *(undefined1 *)(uVar17 + 0x55 + (longlong)puVar20) = 0;
        *(bool *)((longlong)puVar20 + 0x59) = bVar10;
        local_res18 = local_res18 + 1;
      } while (local_res18 < local_res20);
    }
    if (FVar22.Data != (FThrottledOcclusionQuery **)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(FVar22.Data);
    }
  }
  return;
}

