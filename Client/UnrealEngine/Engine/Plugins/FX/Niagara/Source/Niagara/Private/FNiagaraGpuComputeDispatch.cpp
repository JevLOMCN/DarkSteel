// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 70

// FNiagaraGpuComputeDispatch @ 1492d0700

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNiagaraGpuComputeDispatch * __thiscall
FNiagaraGpuComputeDispatch::FNiagaraGpuComputeDispatch
          (FNiagaraGpuComputeDispatch *this,Type param_1,EShaderPlatform param_2,
          FGPUSortManager *param_3)

{
  FPendingReadback *pFVar1;
  TUniquePtr<FNiagaraGPUProfiler,TDefaultDelete<FNiagaraGPUProfiler>_> *pTVar2;
  FGPUSortManager *this_00;
  TArray<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  undefined8 uVar4;
  double dVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FNiagaraAsyncGpuTraceHelper *pFVar9;
  FNiagaraAsyncGpuTraceHelper *pFVar10;
  FNiagaraGPUProfiler *this_01;
  FNiagaraGpuReadbackManager *pFVar11;
  TNode *pTVar12;
  FNiagaraAsyncGpuTraceHelper *pFVar13;
  <lambda_2> local_res20;
  undefined8 local_78;
  undefined1 local_70 [8];
  FDelegateAllocation local_68;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  FNiagaraGpuComputeDispatchInterface::FNiagaraGpuComputeDispatchInterface
            ((FNiagaraGpuComputeDispatchInterface *)this,param_2,param_1);
  this->bIsExecutingFirstDispatchGroup = false;
  this->bIsExecutingLastDispatchGroup = false;
  *(undefined ***)this = &___7FNiagaraGpuComputeDispatch__6B_;
  (this->GPUSortManager).Reference = param_3;
  if (param_3 != (FGPUSortManager *)0x0) {
    *(int *)&param_3->_padding_ = (int)param_3->_padding_ + 1;
  }
  pFVar13 = (FNiagaraAsyncGpuTraceHelper *)0x0;
  pTVar2 = &this->GPUProfilerPtr;
  (this->SimulationsToSort).ArrayNum = 0;
  (this->SimulationsToSort).ArrayMax = 0;
  (this->CurrentPassExternalAccessQueue).Resources.ArrayNum = 0;
  (this->CurrentPassExternalAccessQueue).Resources.ArrayMax = 0;
  (this->FreeIDListSizesBuffer).NumBytes = 0;
  (this->FreeIDListSizesBuffer).ClassName.ComparisonIndex = 0;
  (this->SimulationsToSort).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncGpuTraceHelper).Ptr = (FNiagaraAsyncGpuTraceHelper *)0x0;
  pTVar2->Ptr = (FNiagaraGPUProfiler *)0x0;
  (this->CurrentPassExternalAccessQueue).Resources.AllocatorInstance.Data = (FResource *)0x0;
  (this->FreeIDListSizesBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->FreeIDListSizesBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->FreeIDListSizesBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  this->FramesBeforeTickFlush = 0;
  *(undefined8 *)&(this->FreeIDListSizesBuffer).ClassName.Number = 0;
  (this->FreeIDListSizesBuffer).OwnerName.Number = 0;
  this->AddSortedGPUSimulationMutex = (atomic<unsigned_char>)0x0;
  this->bRequiresReadback = false;
  this->NumAllocatedFreeIDListSizes = 0;
  this->NumRequiredFreeIDListSizes = 0;
  this->NumProxiesThatRequireGlobalDistanceField = 0;
  this->NumProxiesThatRequireDepthBuffer = 0;
  this->NumProxiesThatRequireEarlyViewData = 0;
  this->NumProxiesThatRequireRayTracingScene = 0;
  this->NumProxiesThatRequireCurrentFrameNDC = 0;
  this->ProxyGpuCountBufferEstimate = 0;
  this->TotalDispatchesThisFrame = 0;
  this->MaxTicksToFlush = 0x7fffffff;
  this->ProxiesPerStage[0].ArrayNum = 0;
  this->ProxiesPerStage[0].ArrayMax = 0;
  this->ProxiesPerStage[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ProxiesPerStage[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ProxiesPerStage[1].ArrayNum = 0;
  this->ProxiesPerStage[1].ArrayMax = 0;
  this->ProxiesPerStage[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ProxiesPerStage[2].ArrayNum = 0;
  this->ProxiesPerStage[2].ArrayMax = 0;
  (this->NDCDataProxies).ArrayNum = 0;
  (this->NDCDataProxies).ArrayMax = 0;
  (this->NDCDataProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->DispatchListPerStage[0].CountsToRelease.ArrayNum = 0;
  this->DispatchListPerStage[0].CountsToRelease.ArrayMax = 0;
  this->DispatchListPerStage[0].DispatchGroups.ArrayNum = 0;
  this->DispatchListPerStage[0].DispatchGroups.ArrayMax = 0;
  this->DispatchListPerStage[0].CountsToRelease.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->DispatchListPerStage[0].DispatchGroups.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->DispatchListPerStage[1].CountsToRelease.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->DispatchListPerStage[1].CountsToRelease.ArrayNum = 0;
  this->DispatchListPerStage[1].CountsToRelease.ArrayMax = 0;
  this->DispatchListPerStage[1].DispatchGroups.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->DispatchListPerStage[1].DispatchGroups.ArrayNum = 0;
  this->DispatchListPerStage[1].DispatchGroups.ArrayMax = 0;
  this->DispatchListPerStage[2].CountsToRelease.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->DispatchListPerStage[2].CountsToRelease.ArrayNum = 0;
  this->DispatchListPerStage[2].CountsToRelease.ArrayMax = 0;
  this->DispatchListPerStage[2].DispatchGroups.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->DispatchListPerStage[2].DispatchGroups.ArrayNum = 0;
  this->DispatchListPerStage[2].DispatchGroups.ArrayMax = 0;
  (this->GpuDebugReadbackInfos).ArrayNum = 0;
  (this->GpuDebugReadbackInfos).ArrayMax = 0;
  (this->NeedsMultiViewPreviousDataClear).ArrayNum = 0;
  (this->NeedsMultiViewPreviousDataClear).ArrayMax = 0;
  this->bCrossGPUTransferEnabled = false;
  (this->CrossGPUTransferBuffers).ArrayNum = 0;
  (this->CrossGPUTransferBuffers).ArrayMax = 0;
  this->OptimizedCrossGPUTransferMask = 0;
  (this->GpuDebugReadbackInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NeedsMultiViewPreviousDataClear).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CrossGPUTransferBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->OptimizedCrossGPUTransferBuffers[0].ArrayNum = 0;
  this->OptimizedCrossGPUTransferBuffers[0].ArrayMax = 0;
  this->OptimizedCrossGPUTransferBuffers[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->OptimizedCrossGPUTransferBuffers[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->OptimizedCrossGPUTransferBuffers[1].ArrayNum = 0;
  this->OptimizedCrossGPUTransferBuffers[1].ArrayMax = 0;
  this->OptimizedCrossGPUTransferBuffers[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->OptimizedCrossGPUTransferBuffers[2].ArrayNum = 0;
  this->OptimizedCrossGPUTransferBuffers[2].ArrayMax = 0;
  this->OptimizedCrossGPUTransferBuffers[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->OptimizedCrossGPUTransferBuffers[3].ArrayNum = 0;
  this->OptimizedCrossGPUTransferBuffers[3].ArrayMax = 0;
  this->OptimizedCrossGPUTransferBuffers[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->OptimizedCrossGPUTransferBuffers[4].ArrayNum = 0;
  this->OptimizedCrossGPUTransferBuffers[4].ArrayMax = 0;
  this->OptimizedCrossGPUTransferBuffers[5].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->OptimizedCrossGPUTransferBuffers[5].ArrayNum = 0;
  this->OptimizedCrossGPUTransferBuffers[5].ArrayMax = 0;
  this->OptimizedCrossGPUTransferBuffers[6].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->OptimizedCrossGPUTransferBuffers[6].ArrayNum = 0;
  this->OptimizedCrossGPUTransferBuffers[6].ArrayMax = 0;
  this->OptimizedCrossGPUTransferBuffers[7].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->OptimizedCrossGPUTransferBuffers[7].ArrayNum = 0;
  this->OptimizedCrossGPUTransferBuffers[7].ArrayMax = 0;
  this->OptimizedCrossGPUFences[0] = (FCrossGPUTransferFence *)0x0;
  this->OptimizedCrossGPUFences[1] = (FCrossGPUTransferFence *)0x0;
  this->OptimizedCrossGPUFences[2] = (FCrossGPUTransferFence *)0x0;
  this->OptimizedCrossGPUFences[3] = (FCrossGPUTransferFence *)0x0;
  this->OptimizedCrossGPUFences[4] = (FCrossGPUTransferFence *)0x0;
  this->OptimizedCrossGPUFences[5] = (FCrossGPUTransferFence *)0x0;
  this->OptimizedCrossGPUFences[6] = (FCrossGPUTransferFence *)0x0;
  this->OptimizedCrossGPUFences[7] = (FCrossGPUTransferFence *)0x0;
  (this->CachedViewInitOptions).GameTime.RealTimeSeconds = 0.0;
  (this->CachedViewInitOptions).GameTime.WorldTimeSeconds = 0.0;
  (this->CachedViewInitOptions).GameTime.DeltaRealTimeSeconds = 0.0;
  (this->CachedViewInitOptions).GameTime.DeltaWorldTimeSeconds = 0.0;
  (this->CachedViewInitOptions).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  *(undefined4 *)((longlong)&(this->CachedViewInitOptions).ViewRect.field0_0x0 + 8) = 0x40;
  *(undefined4 *)((longlong)&(this->CachedViewInitOptions).ViewRect.field0_0x0 + 0xc) = 0x40;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CachedViewInitOptions).ViewOrigin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CachedViewInitOptions).ViewOrigin.field0_0x0._s_0.Y = (double)uVar4;
  (this->CachedViewInitOptions).ViewOrigin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar5 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->CachedViewInitOptions).ViewRotationMatrix.M[0][0] =
       UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->CachedViewInitOptions).ViewRotationMatrix.M[0][1] = dVar5;
  dVar5 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->CachedViewInitOptions).ViewRotationMatrix.M[0][2] =
       UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->CachedViewInitOptions).ViewRotationMatrix.M[0][3] = dVar5;
  dVar5 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->CachedViewInitOptions).ViewRotationMatrix.M[1][0] =
       UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->CachedViewInitOptions).ViewRotationMatrix.M[1][1] = dVar5;
  dVar5 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->CachedViewInitOptions).ViewRotationMatrix.M[1][2] =
       UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->CachedViewInitOptions).ViewRotationMatrix.M[1][3] = dVar5;
  dVar5 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->CachedViewInitOptions).ViewRotationMatrix.M[2][0] =
       UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->CachedViewInitOptions).ViewRotationMatrix.M[2][1] = dVar5;
  dVar5 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->CachedViewInitOptions).ViewRotationMatrix.M[2][2] =
       UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->CachedViewInitOptions).ViewRotationMatrix.M[2][3] = dVar5;
  dVar5 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->CachedViewInitOptions).ViewRotationMatrix.M[3][0] =
       UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->CachedViewInitOptions).ViewRotationMatrix.M[3][1] = dVar5;
  dVar5 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->CachedViewInitOptions).ViewRotationMatrix.M[3][2] =
       UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->CachedViewInitOptions).ViewRotationMatrix.M[3][3] = dVar5;
  dVar5 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->CachedViewInitOptions).ProjectionMatrix.M[0][0] =
       UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->CachedViewInitOptions).ProjectionMatrix.M[0][1] = dVar5;
  dVar5 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->CachedViewInitOptions).ProjectionMatrix.M[0][2] =
       UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->CachedViewInitOptions).ProjectionMatrix.M[0][3] = dVar5;
  dVar5 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->CachedViewInitOptions).ProjectionMatrix.M[1][0] =
       UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->CachedViewInitOptions).ProjectionMatrix.M[1][1] = dVar5;
  dVar5 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->CachedViewInitOptions).ProjectionMatrix.M[1][2] =
       UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->CachedViewInitOptions).ProjectionMatrix.M[1][3] = dVar5;
  dVar5 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->CachedViewInitOptions).ProjectionMatrix.M[2][0] =
       UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->CachedViewInitOptions).ProjectionMatrix.M[2][1] = dVar5;
  dVar5 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->CachedViewInitOptions).ProjectionMatrix.M[2][2] =
       UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->CachedViewInitOptions).ProjectionMatrix.M[2][3] = dVar5;
  dVar5 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->CachedViewInitOptions).ProjectionMatrix.M[3][0] =
       UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->CachedViewInitOptions).ProjectionMatrix.M[3][1] = dVar5;
  dVar5 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->CachedViewInitOptions).ProjectionMatrix.M[3][2] =
       UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->CachedViewInitOptions).ProjectionMatrix.M[3][3] = dVar5;
  (this->CachedGDFData).bCacheValid = false;
  (this->CachedGDFData).bValidForPass = false;
  (this->CachedGDFData).PageAtlasTexture.Reference = (FRHITexture *)0x0;
  (this->CachedGDFData).CoverageAtlasTexture.Reference = (FRHITexture *)0x0;
  (this->CachedGDFData).PageObjectGridBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->CachedGDFData).PageTableTexture.Reference = (FRHITexture *)0x0;
  (this->CachedGDFData).MipTexture.Reference = (FRHITexture *)0x0;
  memset(&(this->CachedGDFData).GDFParameterData,0,0x200);
  this_00 = (this->GPUSortManager).Reference;
  this->SceneTexturesUniformParams = (TRDGUniformBuffer<FSceneTextureUniformParameters> *)0x0;
  this->MobileSceneTexturesUniformParams =
       (TRDGUniformBuffer<FMobileSceneTextureUniformParameters> *)0x0;
  this->SubstratePublicGlobalUniformParams =
       (TRDGUniformBuffer<FSubstratePublicGlobalUniformParameters> *)0x0;
  if (this_00 != (FGPUSortManager *)0x0) {
    local_70 = (undefined1  [8])0x0;
    local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_68.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_70,
               (FWriteAccessScope *)&local_58);
    local_40 = &local_68;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_68);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFRHICommandListImmediate__HHW4EGPUSortFlags__PEAVFRHIUnorderedAccessView__2_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(FRHICommandListImmediate_&,int,int,enum_EGPUSortFlags,FRHIUnorderedAccessView_*,FRHIUnorderedAccessView_*),FDefaultDelegateUserPolicy,`FNiagaraGpuComputeDispatch::FNiagaraGpuComputeDispatch'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar7[3] = this;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    FGPUSortManager::Register
              (this_00,(TDelegate<void___cdecl(FRHICommandListImmediate_&,int,int,EGPUSortFlags,FRHIUnorderedAccessView_*,FRHIUnorderedAccessView_*),FDefaultDelegateUserPolicy>
                        *)local_70,ValuesAsInt32|AnySortLocation|AnyKeyGenLocation|AnyKeyPrecision,
               &Name);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_70,
               (FWriteAccessScope *)&local_58);
    if ((local_68.DelegateSize != 0) &&
       (local_68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_68.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_68,0,0,0x10);
      local_68.DelegateSize = 0;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (local_68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_68.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_70);
    bVar6 = FNiagaraUtilities::AllowComputeShaders();
    if (bVar6) {
      TMulticastDelegateRegistration<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
      ::AddLambda<_FNiagaraGpuComputeDispatch::FNiagaraGpuComputeDispatch_::__l8::<lambda_2>_>
                ((TMulticastDelegateRegistration<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
                  *)&((this->GPUSortManager).Reference)->PostPreRenderEvent,&local_res20);
      TMulticastDelegateRegistration<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
      ::AddLambda<_FNiagaraGpuComputeDispatch::FNiagaraGpuComputeDispatch_::__l8::<lambda_3>_>
                ((TMulticastDelegateRegistration<void___cdecl(FRHICommandListImmediate_&),FDefaultDelegateUserPolicy>
                  *)&((this->GPUSortManager).Reference)->PostPostRenderEvent,
                 (<lambda_3> *)&local_res20);
    }
  }
  pFVar9 = ::operator_new(0x2b8);
  pFVar10 = pFVar13;
  if (pFVar9 != (FNiagaraAsyncGpuTraceHelper *)0x0) {
    pFVar10 = FNiagaraAsyncGpuTraceHelper::FNiagaraAsyncGpuTraceHelper
                        (pFVar9,param_2,param_1,(FNiagaraGpuComputeDispatchInterface *)this);
  }
  pFVar9 = (this->AsyncGpuTraceHelper).Ptr;
  if ((pFVar9 != pFVar10) &&
     ((this->AsyncGpuTraceHelper).Ptr = pFVar10, pFVar9 != (FNiagaraAsyncGpuTraceHelper *)0x0)) {
    FNiagaraAsyncGpuTraceHelper::~FNiagaraAsyncGpuTraceHelper(pFVar9);
    ::operator_delete(pFVar9,0x2b8);
  }
  this_01 = ::operator_new(200);
  pFVar10 = pFVar13;
  if (this_01 != (FNiagaraGPUProfiler *)0x0) {
    pFVar10 = (FNiagaraAsyncGpuTraceHelper *)
              FNiagaraGPUProfiler::FNiagaraGPUProfiler(this_01,(ulong64)this);
  }
  if (pTVar2 == (TUniquePtr<FNiagaraGPUProfiler,TDefaultDelete<FNiagaraGPUProfiler>_> *)&local_78) {
    if (pFVar10 == (FNiagaraAsyncGpuTraceHelper *)0x0) goto LAB_1492d0ca9;
    FNiagaraGPUProfiler::~FNiagaraGPUProfiler((FNiagaraGPUProfiler *)pFVar10);
  }
  else {
    pFVar9 = (FNiagaraAsyncGpuTraceHelper *)pTVar2->Ptr;
    pTVar2->Ptr = (FNiagaraGPUProfiler *)pFVar10;
    if (pFVar9 == (FNiagaraAsyncGpuTraceHelper *)0x0) goto LAB_1492d0ca9;
    FNiagaraGPUProfiler::~FNiagaraGPUProfiler((FNiagaraGPUProfiler *)pFVar9);
    pFVar10 = pFVar9;
  }
  ::operator_delete(pFVar10,200);
LAB_1492d0ca9:
  pFVar11 = ::operator_new(0x10);
  if (pFVar11 == (FNiagaraGpuReadbackManager *)0x0) {
    pFVar11 = (FNiagaraGpuReadbackManager *)0x0;
  }
  else {
    pTVar12 = ::operator_new(0x70);
    if (pTVar12 == (TNode *)0x0) {
      (pFVar11->PendingReadbacks).Tail = (TNode *)0x0;
      (pFVar11->PendingReadbacks).Head = (TNode *)0x0;
    }
    else {
      pTVar12->NextNode = (TNode *)0x0;
      pTVar12->_padding_ = 0;
      pFVar1 = &pTVar12->Item;
      (pFVar1->StagingBuffers).AllocatorInstance.InlineData[0] = '\0';
      (pFVar1->StagingBuffers).AllocatorInstance.InlineData[1] = '\0';
      (pFVar1->StagingBuffers).AllocatorInstance.InlineData[2] = '\0';
      (pFVar1->StagingBuffers).AllocatorInstance.InlineData[3] = '\0';
      (pFVar1->StagingBuffers).AllocatorInstance.InlineData[4] = '\0';
      (pFVar1->StagingBuffers).AllocatorInstance.InlineData[5] = '\0';
      (pFVar1->StagingBuffers).AllocatorInstance.InlineData[6] = '\0';
      (pFVar1->StagingBuffers).AllocatorInstance.InlineData[7] = '\0';
      pTVar3 = &(pTVar12->Item).StagingBuffers;
      (pTVar3->AllocatorInstance).InlineData[8] = '\0';
      (pTVar3->AllocatorInstance).InlineData[9] = '\0';
      (pTVar3->AllocatorInstance).InlineData[10] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0xb] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0xc] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0xd] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0xe] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0xf] = '\0';
      (pTVar12->Item).StagingBuffers.AllocatorInstance.SecondaryData =
           (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0;
      (pTVar12->Item).StagingBuffers.ArrayNum = 0;
      (pTVar12->Item).StagingBuffers.ArrayMax = 0;
      (pTVar12->Item).Fence.Reference = (FRHIGPUFence *)0x0;
      (pTVar12->Item)._padding_ = 0;
      *(undefined8 *)&(pTVar12->Item).Callback = 0;
      *(undefined8 *)&(pTVar12->Item).Callback.field_0x8 = 0;
      *(undefined8 *)&(pTVar12->Item).Callback.field_0x10 = 0;
      *(undefined8 *)&(pTVar12->Item).Callback.field_0x18 = 0;
      *(undefined8 *)&(pTVar12->Item).Callback.field_0x20 = 0;
      *(undefined8 *)&(pTVar12->Item).Callback.field_0x28 = 0;
      pTVar12->NextNode = (TNode *)0x0;
      (pTVar12->Item).StagingBuffers.AllocatorInstance.SecondaryData =
           (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0;
      (pTVar12->Item).StagingBuffers.ArrayNum = 0;
      (pTVar12->Item).StagingBuffers.ArrayMax = 1;
      (pTVar12->Item).Fence.Reference = (FRHIGPUFence *)0x0;
      *(undefined8 *)&(pTVar12->Item).Callback = 0;
      *(undefined8 *)&(pTVar12->Item).Callback.field_0x28 = 0;
      (pFVar11->PendingReadbacks).Tail = pTVar12;
      (pFVar11->PendingReadbacks).Head = pTVar12;
    }
  }
  TUniquePtr<FNiagaraGpuReadbackManager,TDefaultDelete<FNiagaraGpuReadbackManager>_>::Reset
            ((TUniquePtr<FNiagaraGpuReadbackManager,TDefaultDelete<FNiagaraGpuReadbackManager>_> *)
             &this->field_0x38,pFVar11);
  pFVar10 = ::operator_new(0x290);
  if (pFVar10 != (FNiagaraAsyncGpuTraceHelper *)0x0) {
    memset(pFVar10,0,0x290);
    (pFVar10->TraceRequests).CurrentAccess = CopySrc;
    (pFVar10->TraceRequests).NumAllocatedBytes = 0xffffffff;
    *(undefined4 *)((longlong)&(pFVar10->TraceCounts).DebugName.Data.AllocatorInstance.Data + 4) =
         0x80;
    (pFVar10->TraceCounts).DebugName.Data.ArrayNum = -1;
    (pFVar10->TraceCounts).ScratchBufferUInt.Buffers.Array.ArrayMax = 0x80;
    *(undefined4 *)&(pFVar10->TraceCounts).ScratchBufferUInt.PixelFormat = 0xffffffff;
    *(undefined4 *)&(pFVar10->Dispatches).field_0x34 = 0x80;
    *(undefined4 *)&(pFVar10->Dispatches).field_0x38 = 0xffffffff;
    *(undefined4 *)&(pFVar10->PreviousFrameDispatches).field_0x34 = 0x80;
    *(undefined4 *)&(pFVar10->PreviousFrameDispatches).field_0x38 = 0xffffffff;
    *(undefined4 *)((longlong)&(pFVar10->DummyDispatch).TraceCounts.Buffer + 4) = 0x80;
    (pFVar10->DummyDispatch).TraceCounts.Offset = 0xffffffff;
    *(undefined4 *)&(pFVar10->CollisionGroupMap).field_0x24 = 0x80;
    *(undefined4 *)&(pFVar10->CollisionGroupMap).field_0x28 = 0xffffffff;
    *(undefined4 *)
     ((longlong)&(pFVar10->CollisionGroupHashMapBuffer).HashToCollisionGroups.Buffer.Reference + 4)
         = 0x80;
    *(undefined4 *)&(pFVar10->CollisionGroupHashMapBuffer).HashToCollisionGroups.UAV.Reference =
         0xffffffff;
    pFVar13 = pFVar10;
  }
  pFVar10 = *(FNiagaraAsyncGpuTraceHelper **)&this->field_0x40;
  if (pFVar10 != pFVar13) {
    *(FNiagaraAsyncGpuTraceHelper **)&this->field_0x40 = pFVar13;
    TDefaultDelete<FNiagaraEmptyUAVPool>::operator()
              ((TDefaultDelete<FNiagaraEmptyUAVPool> *)&this->field_0x40,
               (FNiagaraEmptyUAVPool *)pFVar10);
  }
  return this;
}

// ~FNiagaraGpuComputeDispatch @ 1492d42f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::~FNiagaraGpuComputeDispatch(FNiagaraGpuComputeDispatch *this)

{
  int *piVar1;
  longlong *plVar2;
  TArray<TSharedPtr<FNiagaraDataChannelDataProxy,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  FNiagaraGPUProfiler *this_00;
  FNiagaraAsyncGpuTraceHelper *this_01;
  FGPUSortManager *pFVar4;
  code *pcVar5;
  TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  int iVar8;
  TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_> *pTVar9;
  FNiagaraGpuDispatchList *pFVar10;
  TArray<FNiagaraSystemGpuComputeProxy_*,TSizedDefaultAllocator<32>_> *pTVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  
  *(undefined ***)this = &___7FNiagaraGpuComputeDispatch__6B_;
  FinishDispatches(this);
  FNiagaraAsyncGpuTraceHelper::Reset((this->AsyncGpuTraceHelper).Ptr);
  pTVar3 = &this->NDCDataProxies;
  for (iVar8 = 0; (-1 < iVar8 && (iVar8 < (this->NDCDataProxies).ArrayNum)); iVar8 = iVar8 + 1) {
    if (iVar8 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar15 = (pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    if (*(longlong *)pFVar15 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FNiagaraDataChannelDataProxy::OnRemovedFromDispatcher
              (*(FNiagaraDataChannelDataProxy **)pFVar15,(FNiagaraGpuComputeDispatchInterface *)this
              );
  }
  piVar12 = &(this->NDCDataProxies).ArrayNum;
  DestructItems<TSharedPtr<FNiagaraDataChannelDataProxy,1>,int>
            ((TSharedPtr<FNiagaraDataChannelDataProxy,1> *)(pTVar3->AllocatorInstance).Data,*piVar12
            );
  piVar1 = &(this->NDCDataProxies).ArrayMax;
  *piVar12 = 0;
  lVar13 = 8;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  FCachedDistanceFieldData::~FCachedDistanceFieldData(&this->CachedGDFData);
  pTVar9 = (TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_> *)
           this->OptimizedCrossGPUFences;
  do {
    pTVar6 = pTVar9 + -1;
    pTVar9 = pTVar9 + -1;
    lVar13 = lVar13 + -1;
    DestructItems<FTransferResourceParams,int>
              ((FTransferResourceParams *)(pTVar9->AllocatorInstance).Data,pTVar6->ArrayNum);
    pFVar15 = (pTVar9->AllocatorInstance).Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
  } while (lVar13 != 0);
  DestructItems<FTransferResourceParams,int>
            ((FTransferResourceParams *)(this->CrossGPUTransferBuffers).AllocatorInstance.Data,
             (this->CrossGPUTransferBuffers).ArrayNum);
  pFVar15 = (this->CrossGPUTransferBuffers).AllocatorInstance.Data;
  if (pFVar15 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar15);
  }
  pFVar15 = (this->NeedsMultiViewPreviousDataClear).AllocatorInstance.Data;
  if (pFVar15 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar15);
  }
  pFVar10 = (FNiagaraGpuDispatchList *)&this->GpuDebugReadbackInfos;
  DestructItems<FNiagaraGpuComputeDispatch::FDebugReadbackInfo,int>
            ((FDebugReadbackInfo *)
             (((TArray<FNiagaraGpuComputeDispatch::FDebugReadbackInfo,TSizedDefaultAllocator<32>_> *
               )pFVar10)->AllocatorInstance).Data,(this->GpuDebugReadbackInfos).ArrayNum);
  pFVar15 = (((TArray<FNiagaraGpuComputeDispatch::FDebugReadbackInfo,TSizedDefaultAllocator<32>_> *)
             pFVar10)->AllocatorInstance).Data;
  if (pFVar15 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar15);
  }
  lVar14 = 3;
  lVar13 = 3;
  do {
    lVar13 = lVar13 + -1;
    DestructItems<FNiagaraGpuDispatchGroup,int>
              ((FNiagaraGpuDispatchGroup *)pFVar10[-1].DispatchGroups.AllocatorInstance.Data,
               pFVar10[-1].DispatchGroups.ArrayNum);
    pFVar15 = pFVar10[-1].DispatchGroups.AllocatorInstance.Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    pFVar15 = pFVar10[-1].CountsToRelease.AllocatorInstance.Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    pFVar10 = pFVar10 + -1;
  } while (lVar13 != 0);
  DestructItems<TSharedPtr<FNiagaraDataChannelDataProxy,1>,int>
            ((TSharedPtr<FNiagaraDataChannelDataProxy,1> *)
             (this->NDCDataProxies).AllocatorInstance.Data,(this->NDCDataProxies).ArrayNum);
  pFVar15 = (this->NDCDataProxies).AllocatorInstance.Data;
  if (pFVar15 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar15);
  }
  pTVar11 = (TArray<FNiagaraSystemGpuComputeProxy_*,TSizedDefaultAllocator<32>_> *)
            &this->NDCDataProxies;
  do {
    pFVar15 = pTVar11[-1].AllocatorInstance.Data;
    pTVar11 = pTVar11 + -1;
    lVar14 = lVar14 + -1;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
  } while (lVar14 != 0);
  FRWBuffer::~FRWBuffer(&this->FreeIDListSizesBuffer);
  if ((this->CurrentPassExternalAccessQueue).Resources.ArrayNum != 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x4fe,L"Submit must be called before destruction.");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00 = (this->GPUProfilerPtr).Ptr;
  if (this_00 != (FNiagaraGPUProfiler *)0x0) {
    FNiagaraGPUProfiler::~FNiagaraGPUProfiler(this_00);
    ::operator_delete(this_00,200);
  }
  this_01 = (this->AsyncGpuTraceHelper).Ptr;
  if (this_01 != (FNiagaraAsyncGpuTraceHelper *)0x0) {
    FNiagaraAsyncGpuTraceHelper::~FNiagaraAsyncGpuTraceHelper(this_01);
    ::operator_delete(this_01,0x2b8);
  }
  DestructItems<FNiagaraGPUSortInfo,int>
            ((FNiagaraGPUSortInfo *)(this->SimulationsToSort).AllocatorInstance.Data,
             (this->SimulationsToSort).ArrayNum);
  pFVar15 = (this->SimulationsToSort).AllocatorInstance.Data;
  if (pFVar15 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar15);
  }
  pFVar4 = (this->GPUSortManager).Reference;
  if (pFVar4 != (FGPUSortManager *)0x0) {
    plVar2 = &pFVar4->_padding_;
    *(int *)plVar2 = (int)*plVar2 + -1;
    if ((int)*plVar2 == 0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  FNiagaraGpuComputeDispatchInterface::~FNiagaraGpuComputeDispatchInterface
            ((FNiagaraGpuComputeDispatchInterface *)this);
  return;
}

// operator() @ 1492d5be0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FNiagaraGpuComputeDispatch::FlushAndWait_GameThread'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  FNiagaraGpuReadbackManager *this_00;
  code *pcVar2;
  bool bVar3;
  
  FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush
            (*(FNiagaraGpuComputeDispatch **)this,param_1,true);
  lVar1 = *(longlong *)this;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                       ,0x6a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FNiagaraGPUInstanceCountManager::FlushIndirectArgsPool
            ((FNiagaraGPUInstanceCountManager *)(lVar1 + 0x48),(FRHICommandListBase *)param_1);
  this_00 = *(FNiagaraGpuReadbackManager **)(*(longlong *)this + 0x38);
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  FNiagaraGpuReadbackManager::TickInternal(this_00,true);
  return;
}

// operator() @ 1492d5f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
`FNiagaraGpuComputeDispatch::RemoveGpuComputeProxy'::__l2::<lambda_1>::operator()
          (void *this,FDebugReadbackInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1->InstanceID == *(ulong64 *)(**(longlong **)this + 0x20)) {
    if ((param_1->DebugInfo).Object == (FNiagaraScriptDebuggerInfo *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    FNiagaraDataSet::CopyFromGPUReadback
              (&((param_1->DebugInfo).Object)->Frame,(float *)0x0,(int *)0x0,(FFloat16 *)0x0,0,0,0,0
               ,0);
    if ((param_1->DebugInfo).Object == (FNiagaraScriptDebuggerInfo *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    LOCK();
    ((param_1->DebugInfo).Object)->bWritten = (TAtomic<bool>)0x1;
    UNLOCK();
  }
  return param_1->InstanceID == *(ulong64 *)(**(longlong **)this + 0x20);
}

// operator() @ 1492d6040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FNiagaraGpuComputeDispatch::ProcessDebugReadbacks'::__l6::<lambda_1>::operator()
          (void *this,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<void_*,unsigned_int> *pTVar4;
  float *pfVar5;
  FFloat16 *pFVar6;
  int *piVar7;
  
  pTVar4 = TArrayView<TTuple<void_*,unsigned_int>_const_,int>::operator[]
                     (param_1,*(int *)((longlong)this + 0x14));
  if (*(uint *)&pTVar4->field_0x8 < *(int *)((longlong)this + 0x10) * 4 + 4U) {
    TArrayView<TTuple<void_*,unsigned_int>_const_,int>::operator[]
              (param_1,*(int *)((longlong)this + 0x14));
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("4 + (CountOffset * 4) <= BufferData[CountBufferIndex].Value",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                       ,0x8e2,L"CountOffset %d is out of bounds");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar4 = TArrayView<TTuple<void_*,unsigned_int>_const_,int>::operator[]
                     (param_1,*(int *)((longlong)this + 0x14));
  iVar1 = *(int *)(*(longlong *)pTVar4 + (ulonglong)*(uint *)((longlong)this + 0x10) * 4);
  if (*(int *)((longlong)this + 0x18) == -1) {
    pfVar5 = (float *)0x0;
  }
  else {
    pTVar4 = TArrayView<TTuple<void_*,unsigned_int>_const_,int>::operator[]
                       (param_1,*(int *)((longlong)this + 0x18));
    pfVar5 = *(float **)pTVar4;
  }
  if (*(int *)((longlong)this + 0x1c) == -1) {
    pFVar6 = (FFloat16 *)0x0;
  }
  else {
    pTVar4 = TArrayView<TTuple<void_*,unsigned_int>_const_,int>::operator[]
                       (param_1,*(int *)((longlong)this + 0x1c));
    pFVar6 = *(FFloat16 **)pTVar4;
  }
  if (*(int *)((longlong)this + 0x20) == -1) {
    piVar7 = (int *)0x0;
  }
  else {
    pTVar4 = TArrayView<TTuple<void_*,unsigned_int>_const_,int>::operator[]
                       (param_1,*(int *)((longlong)this + 0x20));
    piVar7 = *(int **)pTVar4;
  }
  if (*(longlong *)this == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FNiagaraDataSet::CopyFromGPUReadback
            ((FNiagaraDataSet *)(*(longlong *)this + 0x28),pfVar5,piVar7,pFVar6,0,iVar1,
             *(uint *)((longlong)this + 0x24),*(uint *)((longlong)this + 0x28),
             *(uint *)((longlong)this + 0x2c));
  if (*(longlong *)this == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  LOCK();
  *(undefined1 *)(*(longlong *)this + 0x170) = 1;
  UNLOCK();
  return;
}

// operator() @ 1492d61e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l8::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  undefined8 *puVar1;
  IRHIComputeContext *pIVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar5 = (ulonglong)*(uint *)((longlong)this + 0x10) + 0x8b;
  puVar1 = (undefined8 *)(*(longlong *)this + lVar5 * 8);
  if (*(longlong *)(*(longlong *)this + lVar5 * 8) != 0) {
    uStack_10 = 1;
    local_18 = puVar1;
    if ((GRHICommandList.bLatchedBypass) && ((param_1->field_0x29b & 0x20) != 0)) {
      pIVar2 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
      (**(code **)(pIVar2->_padding_ + 0x120))(pIVar2,&local_18);
      *puVar1 = 0;
      return;
    }
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar3;
    *(undefined8 **)&param_1->field_0x30 = puVar3 + 1;
    puVar4 = FMemStackBase::Alloc((FMemStackBase *)param_1,8,8);
    *puVar4 = *puVar1;
    *puVar3 = &___7FRHICommandCrossGPUTransferWait__6B_;
    puVar3[1] = 0;
    puVar3[2] = puVar4;
    puVar3[3] = CONCAT44(uStack_c,1);
    *puVar1 = 0;
  }
  return;
}

// operator() @ 1492d6300

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`FNiagaraGpuComputeDispatch::PostRenderOpaque'::__l19::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FNiagaraAsyncGpuTraceHelper *this_00;
  TUniformBufferRef<FSceneUniformParameters> TVar1;
  TStridedView<FSceneView_const_,int> local_18;
  
  this_00 = *(FNiagaraAsyncGpuTraceHelper **)(*(longlong *)this + 0x270);
  TVar1 = TRDGUniformBuffer<FSceneUniformParameters>::GetRHIRef
                    ((TRDGUniformBuffer<FSceneUniformParameters> *)
                     **(undefined8 **)((longlong)this + 0x18));
  local_18.FirstElementPtr = *(FSceneView **)((longlong)this + 8);
  local_18._8_8_ = *(undefined8 *)((longlong)this + 0x10);
  FNiagaraAsyncGpuTraceHelper::PostRenderOpaque
            (this_00,(FRHICommandList *)param_1,*(FNiagaraGpuComputeDispatchInterface **)this,
             &local_18,TVar1);
  return;
}

// operator() @ 1492d6370

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush'::__l37::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FNiagaraGPUInstanceCountManager::UpdateDrawIndirectBuffers
            (&(*(FNiagaraGpuComputeDispatchInterface **)this)->GPUInstanceCounterManager,
             *(FNiagaraGpuComputeDispatchInterface **)this,(FRHICommandList *)param_1,PreOpaque);
  return;
}

// operator() @ 1492d6650

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FNiagaraGpuComputeDispatch::DispatchStage'::__l126::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  TShaderRefBase<FNiagaraShader,FShaderMapPointerTable> *this_00;
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  FNiagaraShader *pFVar6;
  longlong lVar7;
  FNiagaraComputeInstanceData *pFVar8;
  FRDGResource *this_01;
  FRHIResource *pFVar9;
  code *pcVar10;
  bool bVar11;
  FRHIComputeShader *pFVar12;
  FRHIBatchedShaderParameters *this_02;
  FRHIUniformBuffer *pFVar13;
  FNiagaraGpuProfileEvent *pFVar14;
  FNiagaraGPUProfiler *this_03;
  IRHIComputeContext *pIVar15;
  undefined8 *puVar16;
  FNiagaraEmptyUAVPoolScopedAccess local_res10;
  FNiagaraGpuProfileEvent local_68;
  
  this_00 = (TShaderRefBase<FNiagaraShader,FShaderMapPointerTable> *)((longlong)this + 0x18);
  pFVar12 = TShaderRefBase<FNiagaraShader,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar12);
  this_02 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  if (this_00->ShaderContent->ExternalConstantBufferParam[0].BaseIndex != 0xffff) {
    pFVar13 = FNiagaraGPUSystemTick::GetExternalUniformBuffer
                        (*(FNiagaraGPUSystemTick **)((longlong)this + 0x28),
                         *(FNiagaraComputeInstanceData **)((longlong)this + 0x30),false);
    pFVar6 = this_00->ShaderContent;
    if ((pFVar6->ExternalConstantBufferParam[0].BaseIndex == 0xffff) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4717616138333192331>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                            ,0x8b,"IsBound()"), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FRHIBatchedShaderParameters::SetShaderUniformBuffer
              (this_02,(uint)pFVar6->ExternalConstantBufferParam[0].BaseIndex,pFVar13);
  }
  if (this_00->ShaderContent->ExternalConstantBufferParam[1].BaseIndex != 0xffff) {
    if ((*(char *)(*(longlong *)(*(longlong *)((longlong)this + 0x30) + 200) + 0x1fc) == '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InstanceDataPtr->Context->HasInterpolationParameters",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                            ,0x6da,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar13 = FNiagaraGPUSystemTick::GetExternalUniformBuffer
                        (*(FNiagaraGPUSystemTick **)((longlong)this + 0x28),
                         *(FNiagaraComputeInstanceData **)((longlong)this + 0x30),true);
    lVar7 = *(longlong *)((longlong)this + 0x18);
    if ((*(short *)(lVar7 + 0xe6) == -1) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4717616138333192331>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                            ,0x8b,"IsBound()"), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FRHIBatchedShaderParameters::SetShaderUniformBuffer
              (this_02,(uint)*(ushort *)(lVar7 + 0xe6),pFVar13);
  }
  FNiagaraEmptyUAVPoolScopedAccess::FNiagaraEmptyUAVPoolScopedAccess
            (&local_res10,*(FNiagaraEmptyUAVPool **)(*(longlong *)this + 0x40));
  iVar2 = *(int *)(*(longlong *)((longlong)this + 0x28) + 0x48);
  pFVar8 = *(FNiagaraComputeInstanceData **)(*(longlong *)((longlong)this + 0x28) + 0x28);
  if (iVar2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else if (0 < iVar2) goto LAB_1492d6852;
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("(Index >= 0) & (Index < ArrayNum)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                      ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
  if (bVar11) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_1492d6852:
  plVar1 = (longlong *)((longlong)this + 0x38);
  pFVar14 = FNiagaraGpuProfileEvent::FNiagaraGpuProfileEvent
                      (&local_68,*(FNiagaraComputeInstanceData **)((longlong)this + 0x30),
                       (FNiagaraSimStageData *)*plVar1,
                       *(FNiagaraComputeInstanceData **)((longlong)this + 0x30) == pFVar8);
  this_03 = (FNiagaraGPUProfiler *)(**(code **)(**(longlong **)this + 0xf0))();
  if (this_03 != (FNiagaraGPUProfiler *)0x0) {
    FNiagaraGPUProfiler::BeginDispatch(this_03,param_1,pFVar14);
  }
  lVar7 = *(longlong *)(*plVar1 + 0x20);
  uVar3 = *(uint *)(*plVar1 + 0x28);
  iVar2 = *(int *)(lVar7 + 0x84);
  iVar4 = *(int *)(lVar7 + 0x80);
  if (((uVar3 & 3) != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(IndirectArgOffset % 4) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                          ,0x1b9,
                          L"IndirectArgOffset for compute shader indirect dispatch needs to be a multiple of 4."
                         ), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (((uint)(iVar2 * iVar4) < uVar3 + 0xc) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(IndirectArgOffset + IndirectArgsSize) <= IndirectArgsBufferSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                          ,0x1bd,
                          L"Indirect parameters buffer for compute shader indirect dispatch at byte offset %d doesn\'t have enough room for one element."
                         ), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  SetShaderParameters<FNiagaraShader>
            (this_02,this_00,*(FShaderParametersMetadata **)((longlong)this + 8),
             *(FParameters **)((longlong)this + 0x10));
  FRHIComputeCommandList::SetBatchedShaderParameters
            ((FRHIComputeCommandList *)param_1,pFVar12,this_02);
  this_01 = *(FRDGResource **)(*plVar1 + 0x20);
  uVar5 = *(undefined4 *)(*plVar1 + 0x28);
  if ((((ulonglong)this_01[4].Name & 0x80) == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Desc.Usage & EBufferUsageFlags::DrawIndirect",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                          ,0x53c,L"Buffer %s was not flagged for indirect draw usage."), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FRDGResource::ValidateRHIAccess(this_01);
  pFVar9 = this_01->ResourceRHI;
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar16 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar16;
    *(undefined8 **)&param_1->field_0x30 = puVar16 + 1;
    puVar16[1] = 0;
    *puVar16 = &___7FRHICommandDispatchIndirectComputeShader__6B_;
    puVar16[2] = pFVar9;
    *(undefined4 *)(puVar16 + 3) = uVar5;
  }
  else {
    pIVar15 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar15->_padding_ + 0x30))(pIVar15,pFVar9,uVar5);
  }
  UnsetShaderUAVs<FRHICommandList,FNiagaraShader>(param_1,this_00,pFVar12);
  if (this_03 != (FNiagaraGPUProfiler *)0x0) {
    FNiagaraGPUProfiler::EndDispatch(this_03,param_1);
  }
  FNiagaraEmptyUAVPoolScopedAccess::~FNiagaraEmptyUAVPoolScopedAccess(&local_res10);
  return;
}

// operator() @ 1492d6b70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`FNiagaraGpuComputeDispatch::PostRenderOpaque'::__l20::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FNiagaraAsyncGpuTraceHelper *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TUniformBufferRef<FSceneUniformParameters> TVar4;
  FRHIGPUBufferReadback *pFVar5;
  FName *pFVar6;
  FName local_res18;
  
  if (*(char *)((longlong)this + 0x18) != '\0') {
    this_00 = *(FNiagaraAsyncGpuTraceHelper **)(*(longlong *)this + 0x270);
    TVar4 = TRDGUniformBuffer<FSceneUniformParameters>::GetRHIRef
                      ((TRDGUniformBuffer<FSceneUniformParameters> *)
                       **(undefined8 **)((longlong)this + 0x10));
    FNiagaraAsyncGpuTraceHelper::EndFrame
              (this_00,(FRHICommandList *)param_1,*(FNiagaraGpuComputeDispatchInterface **)this,
               TVar4);
  }
  (**(code **)(**(longlong **)this + 0x110))(*(longlong **)this,param_1,0);
  if (*(char *)((longlong)this + 8) != '\0') {
    bVar3 = FNiagaraGPUInstanceCountManager::HasPendingGPUReadback
                      ((FNiagaraGPUInstanceCountManager *)(*(longlong *)this + 0x48));
    if (bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GPUInstanceCounterManager.HasPendingGPUReadback()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                         ,0x88b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar1 = *(longlong *)this;
    bVar3 = IsInRenderingThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                         ,0x286,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((0 < *(int *)(lVar1 + 0x50)) && (*(int *)(lVar1 + 0x50) != *(int *)(lVar1 + 0xd0))) {
      pFVar5 = *(FRHIGPUBufferReadback **)(lVar1 + 0xd8);
      if (pFVar5 == (FRHIGPUBufferReadback *)0x0) {
        pFVar5 = ::operator_new(0x58);
        if (pFVar5 == (FRHIGPUBufferReadback *)0x0) {
          pFVar5 = (FRHIGPUBufferReadback *)0x0;
        }
        else {
          pFVar6 = ::FName::FName(&local_res18,L"Niagara GPU Instance Count Readback");
          pFVar5 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(pFVar5,*pFVar6);
        }
        *(FRHIGPUBufferReadback **)(lVar1 + 0xd8) = pFVar5;
      }
      *(undefined4 *)(lVar1 + 0xe0) = *(undefined4 *)(lVar1 + 0x50);
      (**(code **)(pFVar5->_padding_ + 0x10))(pFVar5,param_1,*(undefined8 *)(lVar1 + 0x68),0);
    }
  }
  return;
}

// operator() @ 1492d6cd0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush'::__l37::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FNiagaraGPUInstanceCountManager::UpdateDrawIndirectBuffers
            (&(*(FNiagaraGpuComputeDispatchInterface **)this)->GPUInstanceCounterManager,
             *(FNiagaraGpuComputeDispatchInterface **)this,(FRHICommandList *)param_1,PostOpaque);
  return;
}

// operator() @ 1492d6cf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
`FNiagaraGpuComputeDispatch::DispatchStage'[::A]::<lambda_2>::operator()
          (void *this,FRHICommandList *param_1)

{
  int iVar1;
  longlong lVar2;
  FNiagaraComputeInstanceData *pFVar3;
  code *pcVar4;
  bool bVar5;
  FRHIComputeShader *pFVar6;
  FRHIBatchedShaderParameters *this_00;
  FRHIUniformBuffer *pFVar7;
  FNiagaraGpuProfileEvent *pFVar8;
  FNiagaraGPUProfiler *this_01;
  FNiagaraGpuProfileEvent local_58;
  
  pFVar6 = TShaderRefBase<FNiagaraShader,FShaderMapPointerTable>::GetComputeShader
                     ((TShaderRefBase<FNiagaraShader,FShaderMapPointerTable> *)
                      ((longlong)this + 0x18));
  SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar6);
  this_00 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  if (*(short *)(*(longlong *)((longlong)this + 0x18) + 0xe4) != -1) {
    pFVar7 = FNiagaraGPUSystemTick::GetExternalUniformBuffer
                       (*(FNiagaraGPUSystemTick **)((longlong)this + 0x38),
                        *(FNiagaraComputeInstanceData **)((longlong)this + 0x40),false);
    lVar2 = *(longlong *)((longlong)this + 0x18);
    if (*(short *)(lVar2 + 0xe4) == -1) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FRHIBatchedShaderParameters::SetShaderUniformBuffer
              (this_00,(uint)*(ushort *)(lVar2 + 0xe4),pFVar7);
  }
  if (*(short *)(*(longlong *)((longlong)this + 0x18) + 0xe6) != -1) {
    if (*(char *)(*(longlong *)(*(longlong *)((longlong)this + 0x40) + 200) + 0x1fc) == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceDataPtr->Context->HasInterpolationParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                         ,0x737,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar7 = FNiagaraGPUSystemTick::GetExternalUniformBuffer
                       (*(FNiagaraGPUSystemTick **)((longlong)this + 0x38),
                        *(FNiagaraComputeInstanceData **)((longlong)this + 0x40),true);
    lVar2 = *(longlong *)((longlong)this + 0x18);
    if (*(short *)(lVar2 + 0xe6) == -1) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FRHIBatchedShaderParameters::SetShaderUniformBuffer
              (this_00,(uint)*(ushort *)(lVar2 + 0xe6),pFVar7);
  }
  iVar1 = *(int *)(*(longlong *)((longlong)this + 0x38) + 0x48);
  pFVar3 = *(FNiagaraComputeInstanceData **)(*(longlong *)((longlong)this + 0x38) + 0x28);
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (0 < iVar1) goto LAB_1492d6ee9;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1492d6ee9:
  pFVar8 = FNiagaraGpuProfileEvent::FNiagaraGpuProfileEvent
                     (&local_58,*(FNiagaraComputeInstanceData **)((longlong)this + 0x40),
                      *(FNiagaraSimStageData **)((longlong)this + 0x48),
                      *(FNiagaraComputeInstanceData **)((longlong)this + 0x40) == pFVar3);
  this_01 = (FNiagaraGPUProfiler *)(**(code **)(**(longlong **)this + 0xf0))();
  if (this_01 != (FNiagaraGPUProfiler *)0x0) {
    FNiagaraGPUProfiler::BeginDispatch(this_01,param_1,pFVar8);
  }
  SetShaderParameters<FNiagaraShader>
            (this_00,(TShaderRefBase<FNiagaraShader,FShaderMapPointerTable> *)
                     ((longlong)this + 0x18),*(FShaderParametersMetadata **)((longlong)this + 8),
             *(FParameters **)((longlong)this + 0x10));
  FRHIComputeCommandList::SetBatchedShaderParameters
            ((FRHIComputeCommandList *)param_1,pFVar6,this_00);
  DispatchComputeShader
            ((FRHIComputeCommandList *)param_1,*(FShader **)((longlong)this + 0x18),
             *(uint *)((longlong)this + 0x28),*(uint *)((longlong)this + 0x2c),
             *(uint *)((longlong)this + 0x30));
  UnsetShaderUAVs<FRHICommandList,FNiagaraShader>
            (param_1,(TShaderRefBase<FNiagaraShader,FShaderMapPointerTable> *)
                     ((longlong)this + 0x18),pFVar6);
  if (this_01 != (FNiagaraGPUProfiler *)0x0) {
    FNiagaraGPUProfiler::EndDispatch(this_01,param_1);
  }
  return;
}

// operator() @ 1492d6fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l11::<lambda_2>::operator()
          (void *this,FRHICommandList *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  FNiagaraComputeExecutionContext *this_00;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)this;
  puVar5 = *(undefined8 **)(lVar3 + 0x3a8);
  iVar2 = *(int *)(lVar3 + 0x3b0);
  puVar1 = puVar5 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x3b0) != iVar2) {
      `TCheckedPointerIterator<FNiagaraComputeExecutionContext_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar5 == puVar1) break;
    this_00 = (FNiagaraComputeExecutionContext *)*puVar5;
    FNiagaraComputeExecutionContext::SetMultiViewPreviousDataToRender
              (this_00,(FNiagaraDataBuffer *)0x0);
    lVar4 = (**(code **)(this_00->_padding_ + 0x10))(this_00);
    puVar5 = puVar5 + 1;
    *(undefined4 *)(lVar4 + 0x58) = 0;
    this_00->DataBuffers_RT[0]->GPUInstanceCountBufferOffset = 0xffffffff;
    this_00->DataBuffers_RT[1]->GPUInstanceCountBufferOffset = 0xffffffff;
  }
  lVar3 = *(longlong *)this;
  *(undefined4 *)(lVar3 + 0x3b0) = 0;
  if (*(int *)(lVar3 + 0x3b4) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)(lVar3 + 0x3a8),0,(int *)(lVar3 + 0x3b4));
  }
  return;
}

// operator() @ 1492d70b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`FNiagaraGpuComputeDispatch::PostRenderOpaque'::__l2::<lambda_3>::operator()(void *this)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  FRHIResource *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  TArray<TSharedPtr<FNiagaraDataChannelDataProxy,1>,TSizedDefaultAllocator<32>_> *this_01;
  FScriptContainerElement *pFVar9;
  FRHIPooledRenderQuery local_28;
  
  uVar1 = *(undefined8 *)((longlong)this + 8);
  lVar2 = *(longlong *)(*(longlong *)this + 0x278);
  if (*(longlong *)(lVar2 + 0xb0) != 0) {
    puVar7 = (undefined8 *)
             (**(code **)(**(longlong **)(lVar2 + 0xc0) + 0x10))
                       (*(longlong **)(lVar2 + 0xc0),&local_28);
    puVar3 = *(undefined8 **)(lVar2 + 0xb0);
    if (puVar3 != puVar7) {
      this_00 = (FRHIResource *)*puVar3;
      *puVar3 = *puVar7;
      *puVar7 = 0;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_00);
      }
    }
    puVar3[1] = puVar7[1];
    FRHIPooledRenderQuery::~FRHIPooledRenderQuery(&local_28);
    (**(code **)(GDynamicRHI->_padding_ + 0x280))(GDynamicRHI,uVar1,**(undefined8 **)(lVar2 + 0xb0))
    ;
    *(undefined8 *)(lVar2 + 0xb0) = 0;
    *(int *)(lVar2 + 0xc) = (*(int *)(lVar2 + 0xc) + 1) % 5;
  }
  if (*(char *)((longlong)this + 0x10) != '\0') {
    FNiagaraGpuComputeDispatch::FinishDispatches(*(FNiagaraGpuComputeDispatch **)this);
    lVar2 = *(longlong *)this;
    this_01 = (TArray<TSharedPtr<FNiagaraDataChannelDataProxy,1>,TSizedDefaultAllocator<32>_> *)
              (lVar2 + 0x328);
    uVar8 = 0;
    while ((-1 < (int)uVar8 && ((int)uVar8 < *(int *)(lVar2 + 0x330)))) {
      if (((int)uVar8 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = (this_01->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10;
      if ((*(longlong *)(pFVar9 + 8) == 0) || (*(int *)(*(longlong *)(pFVar9 + 8) + 8) != 1)) {
        if ((*(longlong *)pFVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FNiagaraDataChannelDataProxy::EndFrame
                  (*(FNiagaraDataChannelDataProxy **)pFVar9,
                   *(FNiagaraGpuComputeDispatchInterface **)this,
                   *(FRHICommandListImmediate **)((longlong)this + 8));
        uVar8 = uVar8 + 1;
      }
      else {
        if ((*(longlong *)pFVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FNiagaraDataChannelDataProxy::OnRemovedFromDispatcher
                  (*(FNiagaraDataChannelDataProxy **)pFVar9,
                   *(FNiagaraGpuComputeDispatchInterface **)this);
        uVar6 = 0;
        if ((int)uVar8 < *(int *)(lVar2 + 0x330)) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        TArray<TSharedPtr<FNiagaraDataChannelDataProxy,1>,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(this_01,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)this_01,*(int *)(lVar2 + 0x330),
                   (int *)(lVar2 + 0x334));
      }
    }
  }
  return;
}

// operator() @ 1492d7320

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l35::<lambda_5>::operator()
          (void *this,FRHICommandList *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  atomic<unsigned_int> aVar7;
  int iVar8;
  FRHIBreadcrumbAllocator *pFVar9;
  FRHIBreadcrumbNode *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 local_res8 [8];
  FRHIUnorderedAccessView *local_res18 [2];
  ForAnyElementType local_e8;
  undefined8 local_e0;
  FRHITransitionInfo *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FRHITransitionInfo *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FRHIUnorderedAccessView **local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  char *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  wchar_t *pwStack_90;
  FRHIBreadcrumbScope local_88;
  undefined1 local_78;
  TArrayView<FRHITransitionInfo_const_,int> local_68;
  TArrayView<FRHITransitionInfo_const_,int> local_58;
  TArrayView<FRHIUnorderedAccessView_*_const,int> local_48;
  
  local_d8 = *(FRHITransitionInfo **)((longlong)this + 8);
  iVar1 = *(int *)((longlong)this + 0x10);
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_68._12_4_ = uStack_cc;
  local_68.ArrayNum = iVar1;
  local_68.DataPtr = local_d8;
  iStack_d0 = iVar1;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_68,None);
  if (0 < *(int *)((longlong)this + 0x20)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      uStack_a0 = 0x4fd;
      local_a8 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
      ;
      local_98 = 0;
      pwStack_90 = L"NiagaraGPUComputeClearIDToIndexBuffer";
      ::Desc._padding_._0_4_ = 0x51ddbbc0;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x4fd;
      ::Desc._padding_._4_4_ = uStack_9c;
      ::Desc._padding_._0_4_ = 0;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_._0_4_ = 0x51ddc490;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FNiagaraGpuComputeDispatch::ExecuteTicks'::__l35::<lambda_5>::operator()'::__l10::
             <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar9 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pFVar10 = FMemStackBase::Alloc(&pFVar9->Inner,0x50,8);
    pFVar10->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar10->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar10->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar10->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar10->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar10->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar10->Allocator = pFVar9;
    pFVar10->TraceCpuSpecId = 0;
    pFVar10->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar6 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar10->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar10->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar10->ID = uVar6;
    pFVar10->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar10[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar5 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar5)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar7 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar7;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar10->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_88,(FRHIComputeCommandList *)param_1,pFVar10);
    uVar6 = *(uint *)((longlong)this + 0x20);
    local_78 = 1;
    local_e8.Data = (FScriptContainerElement *)0x0;
    local_e0 = 0;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if (0 < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar6,&local_e8,0,(int *)((longlong)&local_e0 + 4));
    }
    iVar1 = *(int *)((longlong)this + 0x20);
    puVar12 = *(undefined8 **)((longlong)this + 0x18);
    puVar13 = puVar12 + (longlong)iVar1 * 2;
    while( true ) {
      if (*(int *)((longlong)this + 0x20) != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TTuple<FRHIUnorderedAccessView_*,int>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (puVar12 == puVar13) break;
      NiagaraFillGPUIntBuffer
                (param_1,*(Type *)(*(longlong *)this + 0x34),(FRHIUnorderedAccessView *)*puVar12,
                 *(uint *)(puVar12 + 1),-1);
      iVar8 = (int)local_e0;
      if ((int)local_e0 == local_e0._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_e8,(int *)((longlong)&local_e0 + 4));
      }
      local_e0 = CONCAT44(local_e0._4_4_,iVar8 + 1);
      uVar2 = *puVar12;
      pFVar11 = local_e8.Data + (longlong)iVar8 * 0x30;
      puVar12 = puVar12 + 2;
      *(undefined4 *)&pFVar11->field_0x0 = 0xffffffff;
      *(undefined2 *)(pFVar11 + 4) = 0xffff;
      *(undefined8 *)(pFVar11 + 8) = uVar2;
      pFVar11[0x10] = (FScriptContainerElement)0x3;
      *(undefined4 *)(pFVar11 + 0x14) = 0x400;
      *(undefined4 *)(pFVar11 + 0x18) = 0x400;
      pFVar11[0x1c] = (FScriptContainerElement)0x0;
      pFVar11[0x28] = (FScriptContainerElement)0x0;
    }
    iVar1 = (int)local_e0;
    local_c8 = (FRHITransitionInfo *)local_e8.Data;
    if (((int)local_e0 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iStack_c0 = iVar1;
    local_58._12_4_ = uStack_bc;
    local_58.ArrayNum = iVar1;
    local_58.DataPtr = local_c8;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_58,None);
    if (local_e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data);
    }
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_88);
  }
  lVar3 = *(longlong *)this;
  if ((*(int *)(lVar3 + 0x54) < *(int *)(lVar3 + 0x50)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("UsedInstanceCounts <= AllocatedInstanceCounts",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                         ,0x44,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_res18[0] = *(FRHIUnorderedAccessView **)(lVar3 + 0x70);
  local_b8 = local_res18;
  uStack_b0 = 1;
  local_48._12_4_ = uStack_ac;
  local_48.ArrayNum = 1;
  local_48.DataPtr = local_b8;
  FRHIComputeCommandList::BeginUAVOverlap((FRHIComputeCommandList *)param_1,&local_48);
  return;
}

// operator() @ 1492d7770

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l35::<lambda_6>::operator()
          (void *this,FRHICommandList *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FRHIUnorderedAccessView *local_res8;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  TArrayView<FRHIUnorderedAccessView_*_const,int> local_28;
  TArrayView<FRHITransitionInfo_const_,int> local_18;
  
  lVar2 = *(longlong *)this;
  if (*(int *)(lVar2 + 0x54) < *(int *)(lVar2 + 0x50)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("UsedInstanceCounts <= AllocatedInstanceCounts",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res8 = *(FRHIUnorderedAccessView **)(lVar2 + 0x70);
  local_28.DataPtr = &local_res8;
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = 1;
  FRHIComputeCommandList::EndUAVOverlap((FRHIComputeCommandList *)param_1,&local_28);
  local_18.DataPtr = *(FRHITransitionInfo **)((longlong)this + 8);
  iVar1 = *(int *)((longlong)this + 0x10);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iVar1;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_18,None);
  return;
}

// operator() @ 1492d7860

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l118::<lambda_7>::operator()
          (void *this,FRHICommandList *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  uint uVar6;
  atomic<unsigned_int> aVar7;
  int iVar8;
  FRHIBreadcrumbAllocator *pFVar9;
  FRHIBreadcrumbNode *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong *plVar13;
  int *piVar14;
  ulonglong uVar15;
  FRHIUnorderedAccessView *local_res8;
  undefined8 local_res10;
  FRHIUnorderedAccessView *local_res18;
  ForAnyElementType local_1e8;
  undefined8 uStack_1e0;
  FRHITransitionInfo *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  FRHITransitionInfo local_1c8;
  FRHITransitionInfo local_198;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<27,FName>_const_*,std::tuple<FName_&&>_>
  local_168;
  FRHIUnorderedAccessView **local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FRHITransitionInfo *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  char *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  wchar_t *pwStack_120;
  char *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  TGPUStat<TRHIGPUStatNameProvider_NiagaraGPUComputeFreeIDs> *local_108;
  wchar_t *pwStack_100;
  FRHIBreadcrumbScope local_f8;
  char local_e8;
  TArrayView<FRHITransitionInfo_const_,int> local_d8;
  TArrayView<FRHITransitionInfo_const_,int> local_c8;
  TArrayView<FRHIUnorderedAccessView_*_const,int> local_b8;
  TArrayView<FRHIUnorderedAccessView_*_const,int> local_a8;
  TArrayView<FRHITransitionInfo_const_,int> local_98;
  FRHIBreadcrumbScope local_88;
  undefined1 local_78;
  FRHIBreadcrumbScope local_70;
  undefined1 local_60;
  uint uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  uVar15 = (ulonglong)_tls_index;
  uVar1 = *(uint *)((longlong)this + 0x10);
  piVar14 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0x9d4c);
  if ((*piVar14 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_138 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
    ;
    pwStack_120 = L"NiagaraGPUComputeClearFreeIDListSizes";
    uStack_130 = 0x586;
    local_128 = 0;
    ::Desc._padding_._0_4_ = 0x51ddbbc0;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x586;
    ::Desc._padding_._4_4_ = uStack_12c;
    ::Desc._padding_._0_4_ = 0;
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_._0_4_ = 0x51ddc4e0;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(```FNiagaraGpuComputeDispatch::ExecuteTicks'::__l118::<lambda_7>::operator()'::__l8::
           <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar9 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar10 = FMemStackBase::Alloc(&pFVar9->Inner,0x50,8);
  pFVar10->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar10->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar10->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar10->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar10->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar10->TraceCpuSpecId = 0;
  pFVar10->TraceCpuMetadataId = 0;
  pFVar10->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar10->Allocator = pFVar9;
  LOCK();
  UNLOCK();
  uVar6 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar10->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar10->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar10->ID = uVar6;
  pFVar10->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar10[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar5 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar5)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar7 = (atomic<unsigned_int>)
              FCpuProfilerTrace::OutputEventType
                        ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar7;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar10->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_88,(FRHIComputeCommandList *)param_1,pFVar10);
  uStack_1e0._0_4_ = 1;
  local_78 = 1;
  local_1c8.field1_0x8 = *(FRHITransitionInfo_u_8 *)(*(longlong *)this + 0x2a0);
  local_1c8._padding_._4_2_ = 0xffff;
  local_1e8.Data = (FScriptContainerElement *)&local_1c8;
  local_d8.ArrayNum = 1;
  local_d8._12_4_ = uStack_1e0._4_4_;
  local_1c8._padding_._0_4_ = 0xffffffff;
  local_1c8.Type = UAV;
  local_1c8.AccessBefore = UAVCompute;
  local_1c8.AccessAfter = UAVCompute;
  local_1c8.Flags = None;
  local_1c8.CommitInfo.bIsSet = false;
  local_d8.DataPtr = (FRHITransitionInfo *)local_1e8.Data;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_d8,None);
  lVar2 = *(longlong *)this;
  NiagaraFillGPUIntBuffer
            (param_1,*(Type *)(lVar2 + 0x34),*(FRHIUnorderedAccessView **)(lVar2 + 0x2a0),
             *(uint *)(lVar2 + 0x2b0) >> 2,0);
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_88);
  if ((*piVar14 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    uStack_110 = 0x58d;
    local_118 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
    ;
    local_108 = &GPUStat_NiagaraGPUComputeFreeIDs;
    pwStack_100 = L"NiagaraGPUComputeFreeIDs";
    ::Desc._padding_._0_4_ = 0x51ddbbc0;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x58d;
    ::Desc._padding_._4_4_ = uStack_10c;
    ::Desc._padding_._0_4_ = 0x54c81020;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x51dce658;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(```FNiagaraGpuComputeDispatch::ExecuteTicks'::__l118::<lambda_7>::operator()'::__l14::
           <lambda_2>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  uVar12 = 0;
  pFVar9 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar10 = FMemStackBase::Alloc(&pFVar9->Inner,0x50,8);
  pFVar10->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar10->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar10->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar10->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar10->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar10->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar10->Allocator = pFVar9;
  pFVar10->TraceCpuSpecId = 0;
  pFVar10->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar6 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar10->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar10->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar10->ID = uVar6;
  pFVar10->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar10[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar5 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar5)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar7 = (atomic<unsigned_int>)
              FCpuProfilerTrace::OutputEventType
                        ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar7;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar10->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_f8,(FRHIComputeCommandList *)param_1,pFVar10);
  uStack_1d0 = 1;
  local_e8 = '\x01';
  local_198.field1_0x8 = *(FRHITransitionInfo_u_8 *)(*(longlong *)this + 0x2a0);
  local_198._padding_._4_2_ = 0xffff;
  local_1d8 = &local_198;
  local_c8._12_4_ = uStack_1cc;
  local_c8.ArrayNum = 1;
  local_198._padding_._0_4_ = 0xffffffff;
  local_198.Type = UAV;
  local_198.AccessBefore = UAVCompute;
  local_198.AccessAfter = UAVCompute;
  local_198.Flags = None;
  local_198.CommitInfo.bIsSet = false;
  local_c8.DataPtr = local_1d8;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_c8,None);
  local_1e8.Data = (FScriptContainerElement *)0x0;
  uStack_1e0 = 0;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar1,&local_1e8,0,(int *)((longlong)&uStack_1e0 + 4));
  }
  uStack_1d0 = 1;
  local_res8 = *(FRHIUnorderedAccessView **)(*(longlong *)this + 0x2a0);
  local_1d8 = (FRHITransitionInfo *)&local_res8;
  local_b8._12_4_ = uStack_1cc;
  local_b8.ArrayNum = 1;
  local_b8.DataPtr = (FRHIUnorderedAccessView **)local_1d8;
  FRHIComputeCommandList::BeginUAVOverlap((FRHIComputeCommandList *)param_1,&local_b8);
  pvVar4 = ThreadLocalStoragePointer;
  if (uVar1 != 0) {
    do {
      uVar6 = 0;
      if ((int)uVar12 < *(int *)((longlong)this + 0x10)) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar13 = (longlong *)((longlong)(int)uVar12 * 0x20 + *(longlong *)((longlong)this + 8));
      local_res10 = *(undefined8 *)(*plVar13 + 0x20);
      if ((*(int *)(*(longlong *)((longlong)pvVar4 + uVar15 * 8) + 0x9d4c) < ::_TSS0) &&
         (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_48 = 0;
        uStack_44 = 0;
        ::Desc._12_8_ = ZEXT48(uStack_4c);
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_NiagaraGPUCompu;
        ::Desc._padding_ = (longlong)u_Update_Free_ID_;
        ::Desc._padding_._0_4_ = 0x599;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FNiagaraGpuComputeDispatch::ExecuteTicks'::__l118::<lambda_7>::operator()'::__l22
               ::<lambda_3>::operator()<FName>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_168._padding_ = (longlong)&local_res10;
      local_168._Myfirst._Val = &::Desc;
      pFVar9 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
      pFVar10 = FRHIBreadcrumbAllocator::
                AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<27,FName>,FName_&&>
                          (pFVar9,&local_168);
      FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_70,(FRHIComputeCommandList *)param_1,pFVar10);
      local_60 = 1;
      NiagaraComputeGPUFreeIDs
                (param_1,*(Type *)(*(longlong *)this + 0x34),(FRHIShaderResourceView *)plVar13[1],
                 *(uint *)(plVar13 + 3),(FRHIUnorderedAccessView *)plVar13[2],
                 *(FRHIUnorderedAccessView **)(*(longlong *)this + 0x2a0),uVar12);
      iVar8 = (int)uStack_1e0;
      if ((int)uStack_1e0 == uStack_1e0._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_1e8,(int *)((longlong)&uStack_1e0 + 4));
      }
      uStack_1e0 = CONCAT44(uStack_1e0._4_4_,iVar8 + 1);
      lVar2 = plVar13[2];
      pFVar11 = local_1e8.Data + (longlong)iVar8 * 0x30;
      *(undefined4 *)&pFVar11->field_0x0 = 0xffffffff;
      *(undefined2 *)(pFVar11 + 4) = 0xffff;
      *(longlong *)(pFVar11 + 8) = lVar2;
      pFVar11[0x10] = (FScriptContainerElement)0x3;
      *(undefined4 *)(pFVar11 + 0x14) = 0x400;
      *(undefined4 *)(pFVar11 + 0x18) = 0x10;
      pFVar11[0x1c] = (FScriptContainerElement)0x0;
      pFVar11[0x28] = (FScriptContainerElement)0x0;
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_70);
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar1);
  }
  uStack_150 = 1;
  local_res18 = *(FRHIUnorderedAccessView **)(*(longlong *)this + 0x2a0);
  local_158 = &local_res18;
  local_a8._12_4_ = uStack_14c;
  local_a8.ArrayNum = 1;
  local_a8.DataPtr = local_158;
  FRHIComputeCommandList::EndUAVOverlap((FRHIComputeCommandList *)param_1,&local_a8);
  iStack_140 = (int)uStack_1e0;
  local_148 = (FRHITransitionInfo *)local_1e8.Data;
  if (((int)uStack_1e0 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_98._12_4_ = uStack_13c;
  local_98.ArrayNum = iStack_140;
  local_98.DataPtr = local_148;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_98,None);
  if (local_1e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data);
  }
  if (local_e8 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_f8);
  }
  return;
}

// AddCrossGPUTransfer @ 1492da2e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::AddCrossGPUTransfer
          (FNiagaraGpuComputeDispatch *this,FRHICommandList *param_1,FRHIBuffer *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FCrossGPUTransferFence *pFVar7;
  FCrossGPUTransferFence *pFVar8;
  uint uVar9;
  TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  
  if ((this->bCrossGPUTransferEnabled == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bCrossGPUTransferEnabled",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                         ,0xa84,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_2 != (FRHIBuffer *)0x0) {
    uVar1 = *(uint *)&param_1->field_0x29c;
    uVar12 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    uVar2 = 0;
    bVar5 = uVar12 != 0;
    if (bVar5) {
      for (; (uVar12 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    while (bVar5) {
      uVar9 = 1 << ((byte)uVar2 & 0x1f);
      if ((uVar1 & uVar9) == 0) {
        if ((this->OptimizedCrossGPUTransferMask & uVar9) == 0) {
          pTVar10 = &this->CrossGPUTransferBuffers;
        }
        else {
          if (this->OptimizedCrossGPUTransferBuffers[uVar2].ArrayNum == 0) {
            pFVar7 = ::operator_new(0x10);
            pFVar8 = (FCrossGPUTransferFence *)0x0;
            if (pFVar7 != (FCrossGPUTransferFence *)0x0) {
              pFVar7->SignalGPUIndex = 0;
              pFVar7->WaitGPUIndex = 0;
              pFVar7->SyncPoint = (void *)0x0;
              pFVar8 = pFVar7;
            }
            this->OptimizedCrossGPUFences[uVar2] = pFVar8;
          }
          pTVar10 = this->OptimizedCrossGPUTransferBuffers + uVar2;
        }
        iVar6 = pTVar10->ArrayNum;
        iVar3 = 0;
        if (uVar1 != 0) {
          for (; (uVar1 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
          }
        }
        iVar13 = 0x20;
        if (uVar1 != 0) {
          iVar13 = iVar3;
        }
        if (iVar6 == pTVar10->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x848,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
          pTVar10->ArrayNum = iVar6 + 1;
          pFVar11 = (pTVar10->AllocatorInstance).Data;
          *(undefined8 *)(pFVar11 + (longlong)iVar6 * 0x48) = 0;
          pFVar11 = pFVar11 + (longlong)iVar6 * 0x48;
        }
        else {
          pTVar10->ArrayNum = iVar6 + 1;
          pFVar11 = (pTVar10->AllocatorInstance).Data;
          *(undefined8 *)(pFVar11 + (longlong)iVar6 * 0x48) = 0;
          pFVar11 = pFVar11 + (longlong)iVar6 * 0x48;
        }
        *(FRHIBuffer **)(pFVar11 + 8) = param_2;
        FRHIResource::AddRef((FRHIResource *)param_2);
        *(undefined8 *)(pFVar11 + 0x40) = 0;
        *(undefined8 *)(pFVar11 + 0x38) = 0;
        *(undefined2 *)(pFVar11 + 0x30) = 0;
        *(uint *)(pFVar11 + 0x2c) = uVar2;
        *(int *)(pFVar11 + 0x28) = iVar13;
        *(undefined8 *)(pFVar11 + 0x20) = 0;
        *(undefined8 *)(pFVar11 + 0x18) = 0;
        *(undefined8 *)(pFVar11 + 0x10) = 0;
      }
      uVar12 = uVar12 & ~uVar9;
      uVar2 = 0;
      bVar5 = uVar12 != 0;
      if (bVar5) {
        for (; (uVar12 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
    }
  }
  return;
}

// AddDebugReadback @ 1492da4b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::AddDebugReadback
          (FNiagaraGpuComputeDispatch *this,ulong64 param_1,
          TSharedPtr<FNiagaraScriptDebuggerInfo,1> *param_2,FNiagaraComputeExecutionContext *param_3
          )

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNiagaraScriptDebuggerInfo *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  iVar5 = (this->GpuDebugReadbackInfos).ArrayNum;
  piVar1 = &(this->GpuDebugReadbackInfos).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->GpuDebugReadbackInfos).AllocatorInstance,piVar1);
  }
  (this->GpuDebugReadbackInfos).ArrayNum = iVar5 + 1;
  pFVar6 = (this->GpuDebugReadbackInfos).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  DefaultConstructItems<FNiagaraGpuComputeDispatch::FDebugReadbackInfo,int>(pFVar6,1);
  *(ulong64 *)pFVar6 = param_1;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar3 = param_2->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = *(TReferenceControllerBase<1> **)(pFVar6 + 0x10);
  *(FNiagaraScriptDebuggerInfo **)(pFVar6 + 8) = pFVar3;
  *(TReferenceControllerBase<1> **)(pFVar6 + 0x10) = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(FNiagaraComputeExecutionContext **)(pFVar6 + 0x18) = param_3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// AddGpuComputeProxy @ 1492dab20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::AddGpuComputeProxy
          (FNiagaraGpuComputeDispatch *this,FNiagaraSystemGpuComputeProxy *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FNiagaraSystemGpuComputeProxy_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FNiagaraSystemGpuComputeProxy *local_res10 [3];
  
  local_res10[0] = param_1;
  if ((param_1->ComputeDispatchIndex != -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComputeProxy->ComputeDispatchIndex == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                         ,0x108,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar5 = this->ProxiesPerStage + (int)local_res10[0]->ComputeTickStage;
  local_res10[0]->ComputeDispatchIndex =
       this->ProxiesPerStage[(int)local_res10[0]->ComputeTickStage].ArrayNum;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  if (((pFVar1 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 < pFVar1 + (longlong)pTVar5->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  pTVar5->ArrayNum = iVar4 + 1;
  *(FNiagaraSystemGpuComputeProxy **)((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 8) =
       local_res10[0];
  this->NumProxiesThatRequireGlobalDistanceField =
       this->NumProxiesThatRequireGlobalDistanceField + local_res10[0]->bRequiresGlobalDistanceField
  ;
  this->NumProxiesThatRequireDepthBuffer =
       this->NumProxiesThatRequireDepthBuffer + local_res10[0]->bRequiresDepthBuffer;
  this->NumProxiesThatRequireEarlyViewData =
       this->NumProxiesThatRequireEarlyViewData + local_res10[0]->bRequiresEarlyViewData;
  this->NumProxiesThatRequireRayTracingScene =
       this->NumProxiesThatRequireRayTracingScene + local_res10[0]->bRequiresRayTracingScene;
  this->NumProxiesThatRequireCurrentFrameNDC =
       this->NumProxiesThatRequireCurrentFrameNDC + local_res10[0]->bRequiresCurrentFrameNDC;
  this->ProxyGpuCountBufferEstimate =
       this->ProxyGpuCountBufferEstimate + local_res10[0]->GpuCountBufferEstimate;
  return;
}

// AddNDCDataProxy @ 1492dad20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::AddNDCDataProxy
          (FNiagaraGpuComputeDispatch *this,TSharedPtr<FNiagaraDataChannelDataProxy,1> *param_1)

{
  int *piVar1;
  TSharedPtr<FNiagaraDataChannelDataProxy,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  TArray<TSharedPtr<FNiagaraDataChannelDataProxy,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  
  if (param_1->Object == (FNiagaraDataChannelDataProxy *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FNiagaraDataChannelDataProxy::OnAddedToDispatcher
            (param_1->Object,(FNiagaraGpuComputeDispatchInterface *)this);
  pTVar8 = &this->NDCDataProxies;
  pTVar2 = (TSharedPtr<FNiagaraDataChannelDataProxy,1> *)(pTVar8->AllocatorInstance).Data;
  if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->NDCDataProxies).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NDCDataProxies).ArrayNum;
  piVar1 = &(this->NDCDataProxies).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar8->AllocatorInstance,piVar1);
  }
  (this->NDCDataProxies).ArrayNum = iVar6 + 1;
  pFVar7 = (pTVar8->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(FNiagaraDataChannelDataProxy **)pFVar7 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AddSortedGPUSimulation @ 1492db080

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FNiagaraGpuComputeDispatch::AddSortedGPUSimulation
          (FNiagaraGpuComputeDispatch *this,FRHICommandListBase *param_1,
          FNiagaraGPUSortInfo *param_2)

{
  int *piVar1;
  FMutex *this_00;
  atomic<unsigned_char> aVar2;
  FGPUSortManager *this_01;
  FNiagaraGPUSortInfo *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  TArray<FNiagaraGPUSortInfo,TSizedDefaultAllocator<32>_> *pTVar8;
  
  this_01 = (this->GPUSortManager).Reference;
  if ((this_01 == (FGPUSortManager *)0x0) ||
     (bVar5 = FGPUSortManager::AddTask
                        (this_01,param_1,&param_2->AllocationInfo,param_2->ParticleCount,
                         param_2->SortFlags), !bVar5)) {
    return false;
  }
  this_00 = &this->AddSortedGPUSimulationMutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  LOCK();
  bVar5 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(this_00);
  }
  pTVar8 = &this->SimulationsToSort;
  pFVar3 = (FNiagaraGPUSortInfo *)(pTVar8->AllocatorInstance).Data;
  if (((pFVar3 <= param_2) && (param_2 < pFVar3 + (this->SimulationsToSort).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar7 = (this->SimulationsToSort).ArrayNum;
  piVar1 = &(this->SimulationsToSort).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x2a0,0x10,&pTVar8->AllocatorInstance,piVar1);
  }
  (this->SimulationsToSort).ArrayNum = iVar7 + 1;
  FNiagaraGPUSortInfo::FNiagaraGPUSortInfo
            ((FNiagaraGPUSortInfo *)((pTVar8->AllocatorInstance).Data + (longlong)iVar7 * 0x2a0),
             param_2);
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar2 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return true;
}

// AddVectorField @ 1492db200

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::AddVectorField
          (FNiagaraGpuComputeDispatch *this,UVectorFieldComponent *param_1)

{
  return;
}

// DispatchStage @ 1492e0990

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::DispatchStage
          (FNiagaraGpuComputeDispatch *this,FRDGBuilder *param_1,FNiagaraGPUSystemTick *param_2,
          FNiagaraComputeInstanceData *param_3,FNiagaraSimStageData *param_4)

{
  uint *puVar1;
  int *piVar2;
  undefined8 uVar3;
  ENiagaraIterationSource EVar4;
  ENiagaraGpuDispatchType EVar5;
  undefined1 uVar6;
  ushort uVar7;
  TStatIdData *pTVar8;
  FNiagaraDataBuffer *pFVar9;
  FSimulationStageMetaData *pFVar10;
  FNiagaraShaderScript *pFVar11;
  FNiagaraShaderScriptParametersMetadata *pFVar12;
  FShaderParametersMetadata *pFVar13;
  FShaderMapBase *pFVar14;
  TRDGUniformBuffer<FSceneTextureUniformParameters> *pTVar15;
  TRDGUniformBuffer<FMobileSceneTextureUniformParameters> *pTVar16;
  TRDGUniformBuffer<FSubstratePublicGlobalUniformParameters> *pTVar17;
  FName FVar18;
  code *pcVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  int iVar24;
  int iVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  ERDGPassFlags EVar29;
  uint uVar30;
  int iVar31;
  TStridedView<FNiagaraShader::FParameters,int> *this_00;
  FParameters *pFVar32;
  FRHIShaderResourceView *pFVar33;
  TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> *pTVar34;
  FSceneView *pFVar35;
  FShaderParametersMetadata *pFVar36;
  FRDGBufferSRV *pFVar37;
  FRDGEventName *pFVar38;
  wchar_t *pwVar39;
  FRDGPass *pFVar40;
  FName *pFVar41;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDispatches> FVar42;
  FCsvProfiler *pFVar43;
  FThreadStats *pFVar44;
  FThreadStatsPool *pFVar45;
  uint uVar46;
  EUniformBufferBindingFlags EVar47;
  uint uVar48;
  FName FVar49;
  FName FVar50;
  size_t sVar51;
  uint uVar52;
  ulonglong uVar53;
  int local_2a4;
  int local_29c;
  uint local_298;
  uint local_294;
  int local_290;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  uint local_260;
  uint uStack_25c;
  FColor_u_0 local_250;
  FColor_u_0 local_24c;
  FNiagaraShader *local_248;
  FName local_240;
  FName local_238;
  FName local_230;
  FName local_220;
  FNiagaraEmptyRDGUAVPoolScopedAccess local_210;
  LARGE_INTEGER local_208;
  LARGE_INTEGER local_200;
  FName local_1f8;
  FName local_1f0;
  FStatMessage local_1e8;
  FStatMessage local_1d8;
  FStatMessage local_1c8;
  FNiagaraGpuComputeDispatch *local_1b8;
  FShaderParametersMetadata *pFStack_1b0;
  FParameters *local_1a8;
  FNiagaraShader *pFStack_1a0;
  FShaderMapBase *local_198;
  int iStack_190;
  int iStack_18c;
  int local_188;
  undefined4 uStack_184;
  FRHIUniformBufferLayout *pFStack_180;
  FNiagaraComputeInstanceData *local_178;
  FRHIUniformBufferLayout *pFStack_170;
  TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> local_168;
  FNiagaraGpuComputeDispatch *local_158;
  FShaderParametersMetadata *pFStack_150;
  FParameters *local_148;
  FNiagaraShader *pFStack_140;
  FShaderMapBase *local_138;
  FNiagaraGPUSystemTick *pFStack_130;
  FNiagaraComputeInstanceData *local_128;
  FRHIUniformBufferLayout *pFStack_120;
  FRDGParameterStruct local_118;
  FRDGParameterStruct local_100;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FRDGEventName local_a0;
  FRDGEventName local_88;
  TStridedView<FNiagaraShader::FParameters,int> local_70;
  TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> local_60 [2];
  
  bVar20 = false;
  bVar23 = false;
  pTVar8 = (param_3->Context->SystemStatID).StatIdPtr;
  FVar49 = *(FName *)&pTVar8->Name;
  local_230.ComparisonIndex.Value = 0;
  local_230.Number = 0;
  bVar26 = false;
  bVar21 = false;
  if ((FVar49.ComparisonIndex.Value.Value == 0) && (FVar49.Number == 0)) {
LAB_1492e0a9c:
    bVar23 = bVar21;
    bVar20 = bVar26;
    bVar26 = false;
    FVar49 = local_230;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_250.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_250._s_0,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar20 = false;
      bVar23 = true;
      bVar26 = false;
      bVar21 = true;
      if (-1 < CpuChannel->Enabled) {
        local_240.ComparisonIndex.Value = FVar49.ComparisonIndex.Value.Value;
        local_240.Number = FVar49.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_240,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                   ,0x5ba);
        bVar20 = true;
        bVar23 = true;
        bVar26 = true;
        bVar21 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1492e0a9c;
    FThreadStats::AddMessage(FVar49,CycleScopeStart);
    bVar26 = true;
  }
  bVar22 = false;
  bVar21 = false;
  local_220.ComparisonIndex.Value = 0;
  local_220.Number = 0;
  bVar28 = false;
  bVar27 = false;
  pTVar8 = (param_3->Context->EmitterStatID).StatIdPtr;
  FVar50 = *(FName *)&pTVar8->Name;
  if ((FVar50.ComparisonIndex.Value.Value == 0) && (FVar50.Number == 0)) {
LAB_1492e0b6f:
    bVar22 = bVar28;
    bVar21 = bVar27;
    bVar27 = false;
    FVar50 = local_220;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_24c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_24c._s_0,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar22 = false;
      bVar21 = true;
      bVar28 = false;
      bVar27 = true;
      if (-1 < CpuChannel->Enabled) {
        local_238.ComparisonIndex.Value = FVar50.ComparisonIndex.Value.Value;
        local_238.Number = FVar50.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_238,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                   ,0x5bb);
        bVar22 = true;
        bVar21 = true;
        bVar28 = true;
        bVar27 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1492e0b6f;
    FThreadStats::AddMessage(FVar50,CycleScopeStart);
    bVar27 = true;
  }
  pFVar9 = param_4->Source;
  puVar1 = &param_4->SourceNumInstances;
  if (pFVar9 != (FNiagaraDataBuffer *)0x0) {
    uVar52 = *puVar1;
    if ((pFVar9->NumInstancesAllocated < uVar52) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("InNumInstances <= NumInstancesAllocated",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                            ,0x9c,L""), bVar28)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pFVar9->NumInstances = uVar52;
    param_4->Source->GPUInstanceCountBufferOffset = param_4->SourceCountOffset;
  }
  local_294 = 0;
  pFVar9 = param_4->Destination;
  if (pFVar9 != (FNiagaraDataBuffer *)0x0) {
    uVar52 = param_4->DestinationNumInstances;
    if ((pFVar9->NumInstancesAllocated < uVar52) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("InNumInstances <= NumInstancesAllocated",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                            ,0x9c,L""), bVar28)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pFVar9->NumInstances = uVar52;
    param_4->Destination->GPUInstanceCountBufferOffset = param_4->DestinationCountOffset;
    param_4->Destination->IDAcquireTag = FNiagaraComputeExecutionContext::TickCounter;
    if (param_4->bFirstStage != 0) {
      if ((param_4->DestinationNumInstances < *puVar1) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("SimStageData.DestinationNumInstances >= SimStageData.SourceNumInstances"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                              ,0x5cf,L""), bVar28)) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      local_294 = param_4->DestinationNumInstances - *puVar1;
    }
    param_4->Destination->NumSpawnedInstances = local_294;
  }
  pFVar10 = param_4->StageMetaData;
  uVar53 = 0;
  local_298 = 0;
  uStack_25c = 0;
  EVar4 = pFVar10->IterationSourceType;
  if (EVar4 == Particles) {
    uVar52 = param_4->DestinationNumInstances;
    EVar5 = OneD;
    local_290 = 1;
    local_29c = 1;
    local_2a4 = 0x40;
LAB_1492e0f06:
    local_298 = 1;
    uStack_25c = 1;
  }
  else {
    if (EVar4 == DataInterface) {
      if (param_4->AlternateIterationSource == (FNiagaraDataInterfaceProxyRW *)0x0)
      goto LAB_1492e1da4;
      EVar5 = pFVar10->GpuDispatchType;
      uVar3 = *(undefined8 *)&(pFVar10->GpuDispatchNumThreads).field0_0x0;
      local_29c = (pFVar10->GpuDispatchNumThreads).field0_0x0._s_0.Z;
      local_278 = uVar3;
      if (pFVar10->bGpuIndirectDispatch == 0) {
        local_298 = (param_4->DispatchArgs).ElementCount.field0_0x0._s_0.Z;
        uVar53 = *(ulonglong *)&(param_4->DispatchArgs).ElementCount.field0_0x0;
        uStack_25c = (uint)(uVar53 >> 0x20);
        if (0x7ffffffe <
            (ulonglong)
            ((longlong)(int)uStack_25c * (longlong)(int)local_298 * (longlong)(int)uVar53)) {
          ::FName::ToString((FName *)&param_4->AlternateIterationSource->field_0x8,&local_e0);
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("uint64(DispatchCount.X) * uint64(DispatchCount.Y) * uint64(DispatchCount.Z) < uint64(TNumericLimits<int32>::Max())"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                              ,0x5fa,
                              L"DispatchCount(%d, %d, %d) for IterationInterface(%s) overflows an int32 this is not allowed"
                             );
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          if (bVar28) {
            pcVar19 = (code *)swi(3);
            (*pcVar19)();
            return;
          }
        }
        if (EVar5 == OneD) {
          local_278._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
          local_278._0_4_ = (int)uVar3;
          local_290 = local_278._4_4_;
          local_2a4 = (int)local_278;
          uVar52 = (int)uVar53 * local_298 * uStack_25c;
          goto LAB_1492e0f06;
        }
      }
      else if ((param_4->DispatchArgs).IndirectBuffer == (FRDGBuffer *)0x0) goto LAB_1492e1da4;
    }
    else {
      if (EVar4 != DirectSet) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        goto LAB_1492e1da4;
      }
      EVar5 = pFVar10->GpuDispatchType;
      local_278 = *(undefined8 *)&(pFVar10->GpuDispatchNumThreads).field0_0x0;
      local_29c = (pFVar10->GpuDispatchNumThreads).field0_0x0._s_0.Z;
      if (EVar5 == OneD) {
        uStack_25c = 1;
LAB_1492e0d7e:
        local_298 = 1;
        local_260 = (param_4->DispatchArgs).ElementCount.field0_0x0._s_0.X;
LAB_1492e0d82:
        uVar53 = (ulonglong)local_260;
      }
      else {
        if (EVar5 == TwoD) {
          uStack_25c = (param_4->DispatchArgs).ElementCount.field0_0x0._s_0.Y;
          goto LAB_1492e0d7e;
        }
        if (EVar5 == ThreeD) {
          uVar3 = *(undefined8 *)&(param_4->DispatchArgs).ElementCount.field0_0x0;
          local_298 = (param_4->DispatchArgs).ElementCount.field0_0x0._s_0.Z;
          uStack_25c = (uint)((ulonglong)uVar3 >> 0x20);
          local_260 = (uint)uVar3;
          goto LAB_1492e0d82;
        }
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      if (param_4->StageMetaData->GpuDirectDispatchElementType == NumGroups) {
        local_278._4_4_ = (int)((ulonglong)local_278 >> 0x20);
        uVar52 = (int)uVar53 * (int)local_278;
        uStack_25c = uStack_25c * local_278._4_4_;
        local_298 = local_298 * local_29c;
        local_2a4 = (int)local_278;
        local_290 = local_278._4_4_;
        goto LAB_1492e0f0d;
      }
    }
    uVar52 = (uint)uVar53;
    local_290 = local_278._4_4_;
    local_2a4 = (int)local_278;
  }
LAB_1492e0f0d:
  uVar30 = local_298 * uStack_25c * uVar52;
  if (((int)uVar30 < 1) && ((param_4->DispatchArgs).IndirectBuffer == (FRDGBuffer *)0x0))
  goto LAB_1492e1da4;
  if ((local_29c * local_290 * local_2a4 < 1) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("DispatchNumThreads.X * DispatchNumThreads.Y * DispatchNumThreads.Z > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                          ,0x631,L"DispatchNumThreads(%d, %d, %d) is invalid"), bVar28)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  FNiagaraEmptyRDGUAVPoolScopedAccess::FNiagaraEmptyRDGUAVPoolScopedAccess
            (&local_210,*(FNiagaraEmptyUAVPool **)&this->field_0x40);
  pFVar11 = param_3->Context->GPUScript_RT;
  if (((pFVar11->ScriptParametersMetadata_RT).Object ==
       (FNiagaraShaderScriptParametersMetadata *)0x0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScriptParametersMetadata_RT.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraShared.h"
                          ,0x379,L""), bVar28)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  pFVar12 = (pFVar11->ScriptParametersMetadata_RT).Object;
  pFVar13 = (pFVar12->ShaderParametersMetadata).Object;
  this_00 = FRDGBuilder::AllocParameters<FNiagaraShader::FParameters>(param_1,&local_70,pFVar13,1);
  pFVar32 = TStridedView<FNiagaraShader::FParameters,int>::GetElementPtr(this_00,0);
  pFVar32->SimStart = param_3->bResetData;
  pFVar32->EmitterTickCounter = FNiagaraComputeExecutionContext::TickCounter;
  pFVar32->NumSpawnedInstances = local_294;
  if (((param_3->Context->MainDataSet->CompiledData).StructPtr)->bRequiresPersistentIDs == 0) {
    pFVar33 = FNiagaraRenderer::GetDummyIntBuffer();
  }
  else {
    pFVar33 = (param_3->Context->MainDataSet->GPUFreeIDs).SRV.Reference;
  }
  pFVar32->FreeIDList = pFVar33;
  iVar31 = (param_3->SpawnInfo).SpawnInfoStartOffsets[1];
  iVar24 = (param_3->SpawnInfo).SpawnInfoStartOffsets[2];
  iVar25 = (param_3->SpawnInfo).SpawnInfoStartOffsets[3];
  *(int *)&(pFVar32->EmitterSpawnInfoOffsets).Elements[0].field_0x0 =
       (param_3->SpawnInfo).SpawnInfoStartOffsets[0];
  *(int *)&(pFVar32->EmitterSpawnInfoOffsets).Elements[0].field_0x4 = iVar31;
  *(int *)&(pFVar32->EmitterSpawnInfoOffsets).Elements[0].field_0x8 = iVar24;
  *(int *)&(pFVar32->EmitterSpawnInfoOffsets).Elements[0].field_0xc = iVar25;
  iVar31 = (param_3->SpawnInfo).SpawnInfoStartOffsets[5];
  iVar24 = (param_3->SpawnInfo).SpawnInfoStartOffsets[6];
  iVar25 = (param_3->SpawnInfo).SpawnInfoStartOffsets[7];
  *(int *)&(pFVar32->EmitterSpawnInfoOffsets).Elements[1].field_0x0 =
       (param_3->SpawnInfo).SpawnInfoStartOffsets[4];
  *(int *)&(pFVar32->EmitterSpawnInfoOffsets).Elements[1].field_0x4 = iVar31;
  *(int *)&(pFVar32->EmitterSpawnInfoOffsets).Elements[1].field_0x8 = iVar24;
  *(int *)&(pFVar32->EmitterSpawnInfoOffsets).Elements[1].field_0xc = iVar25;
  uVar3 = *(undefined8 *)&(param_3->SpawnInfo).SpawnInfoParams[0].SpawnGroup;
  *(undefined8 *)&(pFVar32->EmitterSpawnInfoParams).Elements[0].field0_0x0 =
       *(undefined8 *)(param_3->SpawnInfo).SpawnInfoParams;
  *(undefined8 *)((longlong)&(pFVar32->EmitterSpawnInfoParams).Elements[0].field0_0x0 + 8) = uVar3;
  uVar3 = *(undefined8 *)&(param_3->SpawnInfo).SpawnInfoParams[1].SpawnGroup;
  *(undefined8 *)&(pFVar32->EmitterSpawnInfoParams).Elements[1].field0_0x0 =
       *(undefined8 *)((param_3->SpawnInfo).SpawnInfoParams + 1);
  *(undefined8 *)((longlong)&(pFVar32->EmitterSpawnInfoParams).Elements[1].field0_0x0 + 8) = uVar3;
  uVar3 = *(undefined8 *)&(param_3->SpawnInfo).SpawnInfoParams[2].SpawnGroup;
  *(undefined8 *)&(pFVar32->EmitterSpawnInfoParams).Elements[2].field0_0x0 =
       *(undefined8 *)((param_3->SpawnInfo).SpawnInfoParams + 2);
  *(undefined8 *)((longlong)&(pFVar32->EmitterSpawnInfoParams).Elements[2].field0_0x0 + 8) = uVar3;
  uVar3 = *(undefined8 *)&(param_3->SpawnInfo).SpawnInfoParams[3].SpawnGroup;
  *(undefined8 *)&(pFVar32->EmitterSpawnInfoParams).Elements[3].field0_0x0 =
       *(undefined8 *)((param_3->SpawnInfo).SpawnInfoParams + 3);
  *(undefined8 *)((longlong)&(pFVar32->EmitterSpawnInfoParams).Elements[3].field0_0x0 + 8) = uVar3;
  uVar3 = *(undefined8 *)&(param_3->SpawnInfo).SpawnInfoParams[4].SpawnGroup;
  *(undefined8 *)&(pFVar32->EmitterSpawnInfoParams).Elements[4].field0_0x0 =
       *(undefined8 *)((param_3->SpawnInfo).SpawnInfoParams + 4);
  *(undefined8 *)((longlong)&(pFVar32->EmitterSpawnInfoParams).Elements[4].field0_0x0 + 8) = uVar3;
  uVar3 = *(undefined8 *)&(param_3->SpawnInfo).SpawnInfoParams[5].SpawnGroup;
  *(undefined8 *)&(pFVar32->EmitterSpawnInfoParams).Elements[5].field0_0x0 =
       *(undefined8 *)((param_3->SpawnInfo).SpawnInfoParams + 5);
  *(undefined8 *)((longlong)&(pFVar32->EmitterSpawnInfoParams).Elements[5].field0_0x0 + 8) = uVar3;
  uVar3 = *(undefined8 *)&(param_3->SpawnInfo).SpawnInfoParams[6].SpawnGroup;
  *(undefined8 *)&(pFVar32->EmitterSpawnInfoParams).Elements[6].field0_0x0 =
       *(undefined8 *)((param_3->SpawnInfo).SpawnInfoParams + 6);
  *(undefined8 *)((longlong)&(pFVar32->EmitterSpawnInfoParams).Elements[6].field0_0x0 + 8) = uVar3;
  uVar3 = *(undefined8 *)&(param_3->SpawnInfo).SpawnInfoParams[7].SpawnGroup;
  *(undefined8 *)&(pFVar32->EmitterSpawnInfoParams).Elements[7].field0_0x0 =
       *(undefined8 *)((param_3->SpawnInfo).SpawnInfoParams + 7);
  *(undefined8 *)((longlong)&(pFVar32->EmitterSpawnInfoParams).Elements[7].field0_0x0 + 8) = uVar3;
  if ((*(int *)&this->field_0x54 < *(int *)&this->field_0x50) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("UsedInstanceCounts <= AllocatedInstanceCounts",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                          ,0x44,L""), bVar28)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  pFVar32->RWInstanceCounts = *(FRHIUnorderedAccessView **)&this->field_0x70;
  if (param_4->StageMetaData->IterationSourceType == Particles) {
    pFVar32->ReadInstanceCountOffset = param_4->SourceCountOffset;
    uVar48 = param_4->DestinationCountOffset;
  }
  else {
    pFVar32->ReadInstanceCountOffset = 0xffffffff;
    uVar48 = 0xffffffff;
  }
  pFVar32->WriteInstanceCountOffset = uVar48;
  (pFVar32->SimulationStageIterationInfo).field0_0x0._s_0.X = 0xffffffff;
  *(undefined8 *)((longlong)&(pFVar32->SimulationStageIterationInfo).field0_0x0 + 4) = 0;
  (pFVar32->SimulationStageIterationInfo).field0_0x0._s_0.W = 0;
  EVar4 = param_4->StageMetaData->IterationSourceType;
  if (EVar4 == DataInterface) {
    if (param_4->AlternateIterationSource != (FNiagaraDataInterfaceProxyRW *)0x0) {
      uVar48 = (param_4->DispatchArgs).GpuElementCountOffset;
      (pFVar32->SimulationStageIterationInfo).field0_0x0._s_0.X = uVar48;
      uVar46 = 0;
      if (uVar48 == 0xffffffff) {
        uVar46 = uVar30;
      }
      (pFVar32->SimulationStageIterationInfo).field0_0x0._s_0.Y = uVar46;
    }
  }
  else if (EVar4 == DirectSet) {
    (pFVar32->SimulationStageIterationInfo).field0_0x0._s_0.Y = uVar30;
  }
  uVar7 = param_4->NumIterations;
  (pFVar32->SimulationStageIterationInfo).field0_0x0._s_0.Z = (uint)uVar7 << 0x10;
  (pFVar32->SimulationStageIterationInfo).field0_0x0._s_0.Z =
       CONCAT22(uVar7,param_4->IterationIndex);
  uVar7 = param_4->NumLoops;
  (pFVar32->SimulationStageIterationInfo).field0_0x0._s_0.W = (uint)uVar7 << 0x10;
  (pFVar32->SimulationStageIterationInfo).field0_0x0._s_0.W = CONCAT22(uVar7,param_4->LoopIndex);
  (pFVar32->ParticleIterationStateInfo).field0_0x0._s_0.X =
       param_4->StageMetaData->ParticleIterationStateComponentIndex;
  (pFVar32->ParticleIterationStateInfo).field0_0x0._s_0.Y =
       (param_4->StageMetaData->ParticleIterationStateRange).field0_0x0._s_0.X;
  (pFVar32->ParticleIterationStateInfo).field0_0x0._s_0.Z =
       (param_4->StageMetaData->ParticleIterationStateRange).field0_0x0._s_0.Y;
  pFVar32->StaticInputFloat = (param_2->SystemGpuComputeProxy->StaticFloatBuffer).Reference;
  pFVar9 = param_4->Source;
  if ((pFVar9 == (FNiagaraDataBuffer *)0x0) || (pFVar9->NumInstancesAllocated == 0)) {
    pFVar33 = FNiagaraRenderer::GetDummyFloatBuffer();
    pFVar32->InputFloat = pFVar33;
    pFVar33 = FNiagaraRenderer::GetDummyHalfBuffer();
    pFVar32->InputHalf = pFVar33;
    pFVar33 = FNiagaraRenderer::GetDummyIntBuffer();
    pFVar32->InputInt = pFVar33;
    uVar30 = 0;
  }
  else {
    pFVar32->InputFloat = (pFVar9->GPUBufferFloat).SRV.Reference;
    pFVar32->InputHalf = (param_4->Source->GPUBufferHalf).SRV.Reference;
    pFVar32->InputInt = (param_4->Source->GPUBufferInt).SRV.Reference;
    uVar30 = param_4->Source->FloatStride >> 2;
  }
  pFVar32->ComponentBufferSizeRead = uVar30;
  if (param_4->Destination == (FNiagaraDataBuffer *)0x0) {
    pFVar32->RWOutputFloat = (FRHIUnorderedAccessView *)0x0;
    uVar30 = 0;
    pFVar32->RWOutputHalf = (FRHIUnorderedAccessView *)0x0;
    pFVar32->RWOutputInt = (FRHIUnorderedAccessView *)0x0;
    pFVar32->RWIDToIndexTable = (FRHIUnorderedAccessView *)0x0;
  }
  else {
    pFVar32->RWOutputFloat = (param_4->Destination->GPUBufferFloat).UAV.Reference;
    pFVar32->RWOutputHalf = (param_4->Destination->GPUBufferHalf).UAV.Reference;
    pFVar32->RWOutputInt = (param_4->Destination->GPUBufferInt).UAV.Reference;
    pFVar32->RWIDToIndexTable = (param_4->Destination->GPUIDToIndexTable).UAV.Reference;
    uVar30 = param_4->Destination->FloatStride >> 2;
  }
  pFVar32->ComponentBufferSizeWrite = uVar30;
  pTVar34 = FNiagaraShaderScript::GetShader
                      (param_3->Context->GPUScript_RT,local_60,(uint)param_4->StageIndex);
  local_248 = pTVar34->ShaderContent;
  pFVar14 = pTVar34->ShaderMap;
  local_168.ShaderContent = local_248;
  local_168.ShaderMap = pFVar14;
  SetDataInterfaceParameters
            (this,param_1,param_2,param_3,&local_168,param_4,pFVar12,(uchar *)pFVar32);
  uVar48 = 0x20;
  uVar30 = uVar48;
  if (param_3->Context->HasInterpolationParameters != false) {
    uVar30 = 0x40;
  }
  memcpy(&pFVar32->GlobalParameters,param_2->GlobalParamData,(ulonglong)uVar30);
  sVar51 = 0x40;
  if (param_3->Context->HasInterpolationParameters != false) {
    sVar51 = 0x80;
  }
  memcpy(&pFVar32->SystemParameters,param_2->SystemParamData,sVar51);
  sVar51 = 0x200;
  if (param_3->Context->HasInterpolationParameters != false) {
    sVar51 = 0x400;
  }
  memcpy(&pFVar32->OwnerParameters,param_2->OwnerParamData,sVar51);
  if (param_3->Context->HasInterpolationParameters != false) {
    uVar48 = 0x40;
  }
  memcpy(&pFVar32->EmitterParameters,param_3->EmitterParamData,(ulonglong)uVar48);
  if (local_248->bNeedsViewUniformBuffer != false) {
    pFVar35 = TStridedView<FSceneView_const_,int>::GetElementPtr
                        ((TStridedView<FSceneView_const_,int> *)&this->field_0x1d0,0);
    pFVar36 = FViewUniformShaderParameters::GetStructMetadata();
    EVar47 = Static;
    if (pFVar36->BindingFlags != StaticAndShader) {
      EVar47 = pFVar36->BindingFlags;
    }
    uStack_270 = CONCAT31(uStack_270._1_3_,EVar47);
    *(TUniformBufferRef<FViewUniformShaderParameters> *)&pFVar32->View = pFVar35->ViewUniformBuffer;
    *(ulonglong *)&(pFVar32->View).field_0x8 = CONCAT44(uStack_26c,uStack_270);
  }
  pTVar15 = this->SceneTexturesUniformParams;
  pFVar36 = FSceneTextureUniformParameters::GetStructMetadata();
  EVar47 = Static;
  if (pFVar36->BindingFlags != StaticAndShader) {
    EVar47 = pFVar36->BindingFlags;
  }
  uStack_270 = CONCAT31(uStack_270._1_3_,EVar47);
  *(TRDGUniformBuffer<FSceneTextureUniformParameters> **)&(pFVar32->SceneTextures).SceneTextures =
       pTVar15;
  *(ulonglong *)&(pFVar32->SceneTextures).SceneTextures.field_0x8 = CONCAT44(uStack_26c,uStack_270);
  pTVar16 = this->MobileSceneTexturesUniformParams;
  pFVar36 = FMobileSceneTextureUniformParameters::GetStructMetadata();
  EVar47 = Static;
  if (pFVar36->BindingFlags != StaticAndShader) {
    EVar47 = pFVar36->BindingFlags;
  }
  uStack_270 = CONCAT31(uStack_270._1_3_,EVar47);
  *(TRDGUniformBuffer<FMobileSceneTextureUniformParameters> **)
   &(pFVar32->SceneTextures).MobileSceneTextures = pTVar16;
  *(ulonglong *)&(pFVar32->SceneTextures).MobileSceneTextures.field_0x8 =
       CONCAT44(uStack_26c,uStack_270);
  pTVar17 = this->SubstratePublicGlobalUniformParams;
  pFVar36 = ::GetForwardDeclaredShaderParametersStructMetadata
                      ((FSubstratePublicGlobalUniformParameters *)0x0);
  EVar47 = Static;
  if (pFVar36->BindingFlags != StaticAndShader) {
    EVar47 = pFVar36->BindingFlags;
  }
  uStack_270 = CONCAT31(uStack_270._1_3_,EVar47);
  *(TRDGUniformBuffer<FSubstratePublicGlobalUniformParameters> **)&pFVar32->SubstratePublic =
       pTVar17;
  *(ulonglong *)&(pFVar32->SubstratePublic).field_0x8 = CONCAT44(uStack_26c,uStack_270);
  if (param_4->StageMetaData->bGpuIndirectDispatch == 0) {
    if ((EVar5 == OneD) &&
       (iVar31 = (int)(local_2a4 + -1 + uVar52) / local_2a4,
       GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X < iVar31)) {
      uStack_25c = (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X + -1 + iVar31)
                   / GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X;
      uVar52 = ((int)((uStack_25c - 1) + iVar31) / (int)uStack_25c) * local_2a4;
      if ((GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y < (int)uStack_25c) &&
         (bVar28 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1042012302129235704>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                              ,0x6f8,
                              "DispatchCount.Y <= GRHIGlobals.MaxDispatchThreadGroupsPerDimension.Y"
                             ), bVar28)) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
    }
    local_2a4 = (int)((uVar52 - 1) + local_2a4) / local_2a4;
    local_290 = (int)(local_290 + -1 + uStack_25c) / local_290;
    local_29c = (int)((local_298 - 1) + local_29c) / local_29c;
    if ((((-1 < local_2a4) &&
         (local_2a4 <= GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X)) &&
        (-1 < local_290)) &&
       (((local_290 <= GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y &&
         (-1 < local_29c)) &&
        (local_29c <= GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Z)))) {
      (pFVar32->DispatchThreadIdToLinear).field0_0x0._s_0.X = 1;
      (pFVar32->DispatchThreadIdToLinear).field0_0x0._s_0.Y = uVar52;
      (pFVar32->DispatchThreadIdToLinear).field0_0x0._s_0.Z = uStack_25c * uVar52;
      (pFVar32->DispatchThreadIdBounds).field0_0x0._s_0.X = uVar52;
      (pFVar32->DispatchThreadIdBounds).field0_0x0._s_0.Y = uStack_25c;
      (pFVar32->DispatchThreadIdBounds).field0_0x0._s_0.Z = local_298;
      pFStack_1a0 = local_248;
      local_1b8 = this;
      pFStack_1b0 = pFVar13;
      local_1a8 = pFVar32;
      local_198 = pFVar14;
      iStack_190 = local_2a4;
      iStack_18c = local_290;
      local_188 = local_29c;
      pFStack_180 = (FRHIUniformBufferLayout *)param_2;
      local_178 = param_3;
      pFStack_170 = (FRHIUniformBufferLayout *)param_4;
      ::FName::ToString(&param_4->StageMetaData->SimulationStageName,&local_c0);
      pFVar38 = FRDGEventName::FRDGEventName
                          (&local_88,
                           L"NiagaraGpuSim(%s) DispatchCount(%dx%dx%d) Stage(%s %u) Iteration(%u) NumThreads(%dx%dx%d)"
                          );
      FRDGUserValidation::ValidateAddPass
                (&param_1->UserValidation,pFVar32,pFVar13,pFVar38,NeverCull|Compute);
      FRDGBuilder::FlushAccessModeQueue(param_1);
      pwVar39 = FRDGEventName::GetTCHAR(pFVar38);
      EVar29 = FRDGBuilder::OverridePassFlags(param_1,pwVar39,NeverCull|Compute);
      pFVar40 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1d8,8);
      local_100.Contents = (uchar *)pFVar32;
      if (((pFVar13->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLayoutInitialized()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                              ,0x17c,L""), bVar28)) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      local_100.Layout.Reference = (pFVar13->Layout).Reference;
      if (local_100.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_100.Layout.Reference);
      }
      local_100.Metadata = pFVar13;
      FRDGPass::FRDGPass(pFVar40,pFVar38,&local_100,EVar29,Await);
      pFVar40->_padding_ =
           (longlong)
           &TRDGLambdaPass<void,`FNiagaraGpuComputeDispatch::DispatchStage'[::A]::<lambda_2>_>::
            _vftable_;
      pFVar40[1]._padding_ = (longlong)local_1b8;
      pFVar40[1].FullPathIfDebug.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)pFStack_1b0;
      *(FParameters **)&pFVar40[1].Workload = pFVar32;
      *(FParameters **)&pFVar40[1].FullPathIfDebug.Data.ArrayNum = local_1a8;
      pFVar40[1].Name.EventFormat = (wchar_t *)pFStack_1a0;
      pFVar40[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)local_198;
      pFVar40[1].Name.FormattedEventName.Data.ArrayNum = iStack_190;
      pFVar40[1].Name.FormattedEventName.Data.ArrayMax = iStack_18c;
      pFVar40[1].ParameterStruct.Contents = (uchar *)CONCAT44(uStack_184,local_188);
      pFVar40[1].ParameterStruct.Layout.Reference = pFStack_180;
      pFVar40[1].ParameterStruct.Metadata = (FShaderParametersMetadata *)local_178;
      *(FRHIUniformBufferLayout **)&pFVar40[1].Flags = pFStack_170;
      FRDGBuilder::ClobberPassOutputs(param_1,pFVar40);
      iVar31 = (param_1->Passes).Array.ArrayNum;
      piVar2 = &(param_1->Passes).Array.ArrayMax;
      if (iVar31 == *piVar2) {
        iVar31 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                           (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar2);
      }
      (param_1->Passes).Array.ArrayNum = iVar31 + 1;
      (param_1->Passes).Array.AllocatorInstance.Data[iVar31] = pFVar40;
      (pFVar40->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
      FRDGBuilder::SetupParameterPass(param_1,pFVar40);
      if (local_88.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_88.FormattedEventName.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      goto LAB_1492e1b8f;
    }
    if (2 < (byte)LogNiagara._0_1_) {
      ::FName::ToString(&param_4->StageMetaData->SimulationStageName,&local_b0);
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_FNiagaraGpuComp_151ddc978,
                 (FLogCategoryBase *)&LogNiagara);
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    *(FRDGBuffer **)&pFVar32->IndirectDispatchArgsBuffer = (param_4->DispatchArgs).IndirectBuffer;
    *(ulonglong *)&(pFVar32->IndirectDispatchArgsBuffer).field_0x8 = CONCAT44(uStack_26c,4);
    pFVar37 = FRDGBuilder::CreateSRV
                        (param_1,(param_4->DispatchArgs).IndirectBuffer,PF_R32G32B32A32_UINT);
    pFVar32->IndirectDispatchArgs = pFVar37;
    pFVar32->IndirectDispatchArgsOffset = ((param_4->DispatchArgs).IndirectOffset >> 4) + 1;
    pFStack_140 = local_248;
    local_158 = this;
    pFStack_150 = pFVar13;
    local_148 = pFVar32;
    local_138 = pFVar14;
    pFStack_130 = param_2;
    local_128 = param_3;
    pFStack_120 = (FRHIUniformBufferLayout *)param_4;
    ::FName::ToString(&param_4->StageMetaData->SimulationStageName,&local_d0);
    pFVar38 = FRDGEventName::FRDGEventName
                        (&local_a0,
                         L"NiagaraGpuSim(%s) Indirect Stage(%s %u) Iteration(%u) NumThreads(%dx%dx%d)"
                        );
    FRDGUserValidation::ValidateAddPass
              (&param_1->UserValidation,pFVar32,pFVar13,pFVar38,NeverCull|Compute);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    pwVar39 = FRDGEventName::GetTCHAR(pFVar38);
    EVar29 = FRDGBuilder::OverridePassFlags(param_1,pwVar39,NeverCull|Compute);
    pFVar40 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1c8,8);
    local_118.Contents = (uchar *)pFVar32;
    if (((pFVar13->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x17c,L""), bVar28)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    local_118.Layout.Reference = (pFVar13->Layout).Reference;
    if (local_118.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_118.Layout.Reference);
    }
    local_118.Metadata = pFVar13;
    FRDGPass::FRDGPass(pFVar40,pFVar38,&local_118,EVar29,Await);
    pFVar40[1].ParameterStruct.Metadata = (FShaderParametersMetadata *)pFVar32;
    pFVar40[1]._padding_ = (longlong)local_158;
    pFVar40[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_150;
    pFVar40->_padding_ =
         (longlong)
         &TRDGLambdaPass<void,`FNiagaraGpuComputeDispatch::DispatchStage'::`126'::<lambda_1>_>::
          _vftable_;
    *(FParameters **)&pFVar40[1].FullPathIfDebug.Data.ArrayNum = local_148;
    pFVar40[1].Name.EventFormat = (wchar_t *)pFStack_140;
    pFVar40[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)local_138;
    *(FNiagaraGPUSystemTick **)&pFVar40[1].Name.FormattedEventName.Data.ArrayNum = pFStack_130;
    pFVar40[1].ParameterStruct.Contents = (uchar *)local_128;
    pFVar40[1].ParameterStruct.Layout.Reference = pFStack_120;
    FRDGBuilder::ClobberPassOutputs(param_1,pFVar40);
    iVar31 = (param_1->Passes).Array.ArrayNum;
    piVar2 = &(param_1->Passes).Array.ArrayMax;
    if (iVar31 == *piVar2) {
      iVar31 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                         (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar2);
    }
    (param_1->Passes).Array.ArrayNum = iVar31 + 1;
    (param_1->Passes).Array.AllocatorInstance.Data[iVar31] = pFVar40;
    (pFVar40->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
    FRDGBuilder::SetupParameterPass(param_1,pFVar40);
    if (local_a0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
LAB_1492e1b8f:
    if (FThreadStats::bPrimaryEnable != false) {
      FVar42 = StatPtr_STAT_NiagaraGPUDispatches;
      if (StatPtr_STAT_NiagaraGPUDispatches ==
          (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDispatches>)0x0) {
        pFVar41 = ::FName::FName(&local_e8,"STAT_NiagaraGPUDispatches");
        FVar42 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDispatches>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDispatches,*pFVar41
                            ,L"# GPU Dispatches","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
                            true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar18 = *(FName *)FVar42;
      if (((FVar18 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar44 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar44 == (FThreadStats *)0x0) {
          pFVar45 = FThreadStatsPool::Get();
          pFVar44 = FThreadStatsPool::GetFromPool(pFVar45);
        }
        local_1e8.NameAndInfo.Number = FVar18.Number & 0xffffafff | 0xa000;
        local_1e8.StatData.Pad[0] = '\x01';
        local_1e8.StatData.Pad[1] = '\0';
        local_1e8.StatData.Pad[2] = '\0';
        local_1e8.StatData.Pad[3] = '\0';
        local_1e8.StatData.Pad[4] = '\0';
        local_1e8.StatData.Pad[5] = '\0';
        local_1e8.StatData.Pad[6] = '\0';
        local_1e8.StatData.Pad[7] = '\0';
        local_1f8 = FVar18;
        local_1e8.NameAndInfo.Index.Value = FVar18.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar44,&local_1e8);
        FStatsTrace::Add(&local_1f8,1);
        if (pFVar44->ScopeCount == 0) {
          FThreadStats::Flush(pFVar44,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar44,false,false);
        }
      }
    }
    bVar28 = FNiagaraGpuComputeDispatchLocal::CsvStatsEnabled();
    if ((bVar28) && (pFVar43 = FCsvProfiler::Get(), pFVar43 != (FCsvProfiler *)0x0)) {
      local_1f0 = param_3->Context->DebugSimFName;
      FCsvProfiler::RecordCustomStat(&local_1f0,_GCsvCategory_NiagaraGpuCompute.Index,1,Accumulate);
    }
    this->TotalDispatchesThisFrame = this->TotalDispatchesThisFrame + 1;
  }
  FNiagaraEmptyRDGUAVPoolScopedAccess::~FNiagaraEmptyRDGUAVPoolScopedAccess(&local_210);
LAB_1492e1da4:
  if (bVar21) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar27) && (FVar50 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar44 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar44 == (FThreadStats *)0x0) {
      pFVar45 = FThreadStatsPool::Get();
      pFVar44 = FThreadStatsPool::GetFromPool(pFVar45);
    }
    if (pFVar44->bWaitForExplicitFlush < pFVar44->ScopeCount) {
      local_1d8.NameAndInfo.Index = FVar50.ComparisonIndex.Value;
      local_1d8.NameAndInfo.Number = FVar50.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_208);
      local_1d8.StatData.Pad[4] = '\0';
      local_1d8.StatData.Pad[5] = '\0';
      local_1d8.StatData.Pad[6] = '\0';
      local_1d8.StatData.Pad[7] = '\0';
      local_1d8.StatData.Pad[0] = local_208.s.LowPart._0_1_;
      local_1d8.StatData.Pad[1] = local_208.s.LowPart._1_1_;
      local_1d8.StatData.Pad[2] = local_208.s.LowPart._2_1_;
      local_1d8.StatData.Pad[3] = local_208.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar44,&local_1d8);
      piVar2 = &pFVar44->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar44,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar44,false,false);
      }
    }
  }
  if (bVar23) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar26) && (FVar49 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar44 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar44 == (FThreadStats *)0x0) {
      pFVar45 = FThreadStatsPool::Get();
      pFVar44 = FThreadStatsPool::GetFromPool(pFVar45);
    }
    if (pFVar44->bWaitForExplicitFlush < pFVar44->ScopeCount) {
      local_1c8.NameAndInfo.Index = FVar49.ComparisonIndex.Value;
      local_1c8.NameAndInfo.Number = FVar49.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_200);
      local_1c8.StatData.Pad[4] = '\0';
      local_1c8.StatData.Pad[5] = '\0';
      local_1c8.StatData.Pad[6] = '\0';
      local_1c8.StatData.Pad[7] = '\0';
      local_1c8.StatData.Pad[0] = local_200.s.LowPart._0_1_;
      local_1c8.StatData.Pad[1] = local_200.s.LowPart._1_1_;
      local_1c8.StatData.Pad[2] = local_200.s.LowPart._2_1_;
      local_1c8.StatData.Pad[3] = local_200.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar44,&local_1c8);
      piVar2 = &pFVar44->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar44,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar44,false,false);
      }
    }
  }
  return;
}

// DrawDebug @ 1492e1f80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::DrawDebug(FNiagaraGpuComputeDispatch *this,FCanvas *param_1)

{
  return;
}

// DrawDebug_RenderThread @ 1492e1f90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::DrawDebug_RenderThread
          (FNiagaraGpuComputeDispatch *this,FRDGBuilder *param_1,FSceneView *param_2,
          FScreenPassRenderTarget *param_3)

{
  return;
}

// DrawSceneDebug_RenderThread @ 1492e1fa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::DrawSceneDebug_RenderThread
          (FNiagaraGpuComputeDispatch *this,FRDGBuilder *param_1,FSceneView *param_2,
          FRDGTexture *param_3,FRDGTexture *param_4)

{
  return;
}

// DumpDebugFrame @ 1492e1fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraGpuComputeDispatch::DumpDebugFrame(FNiagaraGpuComputeDispatch *this)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  void *pvVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  FNiagaraGpuComputeDispatch *pFVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  longlong *plVar18;
  undefined1 *puVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  undefined1 auStack_9b8 [32];
  longlong local_998;
  longlong local_990;
  undefined1 local_988;
  undefined1 local_987;
  undefined1 local_986;
  undefined1 local_985;
  uint local_984;
  uint local_980;
  int local_97c;
  uint local_978;
  FNiagaraGpuComputeDispatch *local_970;
  longlong local_968;
  longlong local_960;
  longlong local_958;
  int *local_950;
  undefined1 *local_948;
  int local_940;
  int local_93c;
  longlong *local_938;
  FScriptContainerElement *local_930;
  longlong *local_928;
  int iStack_920;
  uint uStack_91c;
  TBitArray<FDefaultBitArrayAllocator> *local_918;
  undefined4 uStack_910;
  int iStack_90c;
  int local_908;
  undefined4 uStack_904;
  int iStack_900;
  undefined4 uStack_8fc;
  longlong *local_8f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_8f0;
  undefined8 uStack_8d0;
  FString local_8c8;
  FString local_8b8;
  FString local_8a8 [2];
  undefined4 local_87c;
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [512];
  TStringBuilderBase<wchar_t> local_458;
  wchar_t local_438 [512];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_9b8;
  uVar13 = 0;
  local_984 = 0;
  if (0 < this->DispatchListPerStage[2].DispatchGroups.ArrayNum ||
      (0 < this->DispatchListPerStage[0].DispatchGroups.ArrayNum ||
      0 < this->DispatchListPerStage[1].DispatchGroups.ArrayNum)) {
    local_970 = this;
    if (2 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    local_97c = 0;
    local_968 = 0;
    local_960 = 0;
    pFVar12 = local_970;
    do {
      lVar11 = local_960;
      lVar14 = local_968;
      iVar20 = local_97c;
      if (0 < *(int *)((longlong)&pFVar12->DispatchListPerStage[0].DispatchGroups.ArrayNum +
                      local_960)) {
        puVar19 = &pFVar12->field_0x0 + local_968 * 0x20;
        piVar2 = (int *)(puVar19 + 0x350);
        local_950 = piVar2;
        local_948 = puVar19;
        if (2 < (byte)LogNiagara._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        }
        local_980 = 0;
        if (0 < *piVar2) {
          local_958 = 0;
          do {
            lVar14 = local_958;
            uVar15 = 0;
            if ((int)local_980 < *(int *)(puVar19 + 0x350)) {
              uVar15 = ~local_980 >> 0x1f;
            }
            if (uVar15 == 0) {
              local_998 = (longlong)(int)local_980;
              local_990 = (longlong)*(int *)(puVar19 + 0x350);
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            pFVar21 = (((TArray<FNiagaraGpuDispatchGroup,TSizedDefaultAllocator<32>_> *)
                       (puVar19 + 0x348))->AllocatorInstance).Data + lVar14;
            local_930 = pFVar21;
            if (0 < *(int *)(pFVar21 + 8)) {
              if (2 < (byte)LogNiagara._0_1_) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
              }
              local_978 = *(uint *)(pFVar21 + 8);
              uVar10 = (ulonglong)(int)local_978;
              plVar18 = *(longlong **)pFVar21;
              local_938 = plVar18 + uVar10;
              while( true ) {
                plVar1 = local_938;
                if (*(int *)(pFVar21 + 8) != (int)uVar10) {
                  local_988 = 0;
                  `TCheckedPointerIterator<FNiagaraGPUSystemTick_*_const,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&local_988);
                }
                uVar13 = local_984;
                if (plVar18 == plVar1) break;
                uStack_91c = 1;
                lVar14 = *(longlong *)(*plVar18 + 0x20);
                iVar20 = *(int *)(lVar14 + 0x30);
                local_918 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar14 + 0x18);
                iStack_920 = 0;
                local_908 = 0;
                plVar1 = (longlong *)(lVar14 + 8);
                iStack_90c = 0;
                if (iVar20 != 0) {
                  pTVar17 = local_918;
                  if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x28) !=
                      (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                    pTVar17 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x28);
                  }
                  uVar13 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
                  local_908 = 0;
                  while (uVar13 == 0) {
                    lVar11 = (longlong)iStack_920;
                    local_908 = local_908 + 0x20;
                    iStack_920 = iStack_920 + 1;
                    iStack_90c = iVar20;
                    if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_920)
                    goto LAB_1492e222f;
                    uVar13 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar11 * 4 + 4);
                  }
                  uStack_91c = -uVar13 & uVar13;
                  uVar10 = (ulonglong)uStack_91c * 2 + 1;
                  lVar11 = 0x3f;
                  if (uVar10 != 0) {
                    for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                    }
                  }
                  local_940 = (int)lVar11;
                  iStack_90c = local_908 + -1 + local_940;
                  if (iVar20 < iStack_90c) {
                    iStack_90c = iVar20;
                  }
                }
LAB_1492e222f:
                uStack_904 = local_87c;
                iStack_900 = *(int *)(lVar14 + 0x10) - *(int *)(lVar14 + 0x3c);
                uVar13 = *(uint *)(lVar14 + 0x30);
                TStack_8f0._padding_ = CONCAT44(uStack_91c,iStack_920);
                uVar15 = uVar13 & 0xffffffe0;
                uStack_910 = 0xffffffff;
                TStack_8f0.CurrentBitIndex = iStack_90c;
                TStack_8f0.UnvisitedBitMask = 0xffffffff;
                iVar16 = (int)uVar13 >> 5;
                TStack_8f0._28_4_ = local_87c;
                TStack_8f0.BaseBitIndex = local_908;
                uStack_8d0 = CONCAT44(uStack_8fc,iStack_900);
                local_928 = plVar1;
                local_8f8 = plVar1;
                TStack_8f0.Array = local_918;
                if ((((int)uVar13 < 0) || (iVar20 < (int)uVar13)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x7af,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                uVar9 = *(uint *)(lVar14 + 0x30);
                if (uVar13 != uVar9) {
                  pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar14 + 0x18);
                  if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x28) !=
                      (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                    pTVar17 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x28);
                  }
                  uVar13 = -1 << ((byte)uVar13 & 0x1f) &
                           *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar16 * 4)
                  ;
                  while (uVar13 == 0) {
                    lVar11 = (longlong)iVar16;
                    uVar15 = uVar15 + 0x20;
                    iVar16 = iVar16 + 1;
                    uVar13 = uVar9;
                    if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
                    goto LAB_1492e2330;
                    uVar13 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar11 * 4 + 4);
                  }
                  uVar10 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
                  lVar11 = 0x3f;
                  if (uVar10 != 0) {
                    for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                    }
                  }
                  local_93c = (int)lVar11;
                  uVar13 = (uVar15 - 1) + local_93c;
                  if ((int)uVar9 < (int)uVar13) {
                    uVar13 = uVar9;
                  }
                }
LAB_1492e2330:
                while( true ) {
                  plVar5 = local_8f8;
                  if ((int)local_8f8[1] - *(int *)((longlong)local_8f8 + 0x34) != (int)uStack_8d0) {
                    local_987 = 0;
                    `TSparseArray<TSparseSetElement<TTuple<FNiagaraDataInterfaceProxy_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_987);
                  }
                  if (((TStack_8f0.CurrentBitIndex == uVar13) &&
                      (TStack_8f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(lVar14 + 0x18)))
                     && (plVar5 == plVar1)) break;
                  if (2 < (byte)LogNiagara._0_1_) {
                    ::FName::ToString((FName *)(*(longlong *)
                                                 (*plVar5 +
                                                 (longlong)TStack_8f0.CurrentBitIndex * 0x18) + 8),
                                      &local_8c8);
                    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara)
                    ;
                    if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
                    }
                  }
                  TStack_8f0.UnvisitedBitMask =
                       TStack_8f0.UnvisitedBitMask & ~TStack_8f0._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_8f0);
                }
                uVar10 = (ulonglong)local_978;
                plVar18 = plVar18 + 1;
                pFVar21 = local_930;
              }
            }
            if (2 < (byte)LogNiagara._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
            }
            iVar20 = *(int *)(pFVar21 + 0x18);
            lVar14 = *(longlong *)(pFVar21 + 0x10);
            lVar11 = (longlong)iVar20 * 0x70 + lVar14;
            while( true ) {
              if (*(int *)(pFVar21 + 0x18) != iVar20) {
                local_986 = 0;
                `TCheckedPointerIterator<FNiagaraGpuDispatchInstance_const_,int,0>::operator!='::
                __l2::<lambda_1>::operator()(&local_986);
              }
              uVar15 = local_980;
              if (lVar14 == lVar11) break;
              local_878.Base = local_858;
              lVar3 = *(longlong *)(lVar14 + 8);
              local_878.CurPos = local_858;
              local_878.bIsDynamic = false;
              local_878.bIsExternal = false;
              local_878.End = (wchar_t *)&local_458;
              TStringBuilderBase<wchar_t>::AppendfImpl(&local_878,L"Proxy(%p) ");
              TStringBuilderBase<wchar_t>::AppendfImpl(&local_878,L"ComputeContext(%p) ");
              TStringBuilderBase<wchar_t>::AppendfImpl(&local_878,L"Emitter(%s) ");
              ::FName::ToString(*(FName **)(lVar14 + 0x68),&local_8b8);
              TStringBuilderBase<wchar_t>::AppendfImpl(&local_878,L"Stage(%d | %s) ");
              if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
              }
              if ((*(byte *)(lVar3 + 0x120) & 1) != 0) {
                if (local_878.End < (TStringBuilderBase<wchar_t> *)(local_878.CurPos + 10)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_878,10);
                }
                pvVar8 = FGenericPlatformString::Memcpy(local_878.CurPos,L"ResetData ",0x14);
                local_878.CurPos = (wchar_t *)((longlong)pvVar8 + 0x14);
              }
              if ((*(byte *)(*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 200) + 0x58) + 8) +
                            0x38) & 1) != 0) {
                if (local_878.End < (TStringBuilderBase<wchar_t> *)(local_878.CurPos + 0x11)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_878,0x11);
                }
                pvVar8 = FGenericPlatformString::Memcpy(local_878.CurPos,L"HasPersistentIDs ",0x22);
                local_878.CurPos = (wchar_t *)((longlong)pvVar8 + 0x22);
              }
              if ((*(byte *)(lVar14 + 0x10) & 1) != 0) {
                if (local_878.End < (TStringBuilderBase<wchar_t> *)(local_878.CurPos + 0xb)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_878,0xb);
                }
                pvVar8 = FGenericPlatformString::Memcpy(local_878.CurPos,L"FirstStage ",0x16);
                local_878.CurPos = (wchar_t *)((longlong)pvVar8 + 0x16);
              }
              if ((*(byte *)(lVar14 + 0x10) & 2) != 0) {
                if (local_878.End < (TStringBuilderBase<wchar_t> *)(local_878.CurPos + 10)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_878,10);
                }
                pvVar8 = FGenericPlatformString::Memcpy(local_878.CurPos,L"LastStage ",0x14);
                local_878.CurPos = (wchar_t *)((longlong)pvVar8 + 0x14);
              }
              if ((*(byte *)(lVar14 + 0x10) & 4) != 0) {
                if (local_878.End < (TStringBuilderBase<wchar_t> *)(local_878.CurPos + 0x10)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_878,0x10);
                }
                pvVar8 = FGenericPlatformString::Memcpy(local_878.CurPos,L"SetDataToRender ",0x20);
                local_878.CurPos = (wchar_t *)((longlong)pvVar8 + 0x20);
              }
              iVar16 = *(int *)(*(longlong *)(lVar3 + 200) + 8);
              if ((iVar16 != -1) && (iVar16 == *(int *)(lVar14 + 0x48))) {
                TStringBuilderBase<wchar_t>::AppendfImpl(&local_878,L"ReadbackSource(%d) ");
              }
              local_998._0_4_ = *(undefined4 *)(lVar14 + 0x4c);
              TStringBuilderBase<wchar_t>::AppendfImpl(&local_878,L"Source(%p 0x%08x %d) ");
              local_998 = CONCAT44(local_998._4_4_,*(undefined4 *)(lVar14 + 0x5c));
              TStringBuilderBase<wchar_t>::AppendfImpl(&local_878,L"Destination(%p 0x%08x %d) ");
              if (*(longlong *)(lVar14 + 0x60) != 0) {
                uVar13 = uVar13 | 1;
                ::FName::ToString((FName *)(*(longlong *)(lVar14 + 0x60) + 8),local_8a8);
              }
              TStringBuilderBase<wchar_t>::AppendfImpl(&local_878,L"Iteration(%d | %s) ");
              if (((uVar13 & 1) != 0) &&
                 (uVar13 = uVar13 & 0xfffffffe,
                 local_8a8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_8a8[0].Data.AllocatorInstance.Data);
              }
              local_998 = CONCAT44(local_998._4_4_,*(undefined4 *)(lVar14 + 0x28));
              TStringBuilderBase<wchar_t>::AppendfImpl
                        (&local_878,L"DispatchElementCount(%d, %d, %d) ");
              if (2 < (byte)LogNiagara._0_1_) {
                if (local_878.End < (TStringBuilderBase<wchar_t> *)(local_878.CurPos + 1)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_878,1);
                }
                *local_878.CurPos = L'\0';
                UE::Logging::Private::BasicLog<3>
                          ((FStaticBasicLogRecord *)&PTR_u__s_151ddbff8,
                           (FLogCategoryBase *)&LogNiagara);
              }
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
              lVar14 = lVar14 + 0x70;
            }
            local_984 = uVar13;
            if (0 < *(int *)(pFVar21 + 0x28)) {
              if (2 < (byte)LogNiagara._0_1_) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
              }
              iVar20 = *(int *)(pFVar21 + 0x28);
              lVar14 = *(longlong *)(pFVar21 + 0x20);
              lVar11 = lVar14 + (longlong)iVar20 * 0x20;
              while( true ) {
                if (*(int *)(pFVar21 + 0x28) != iVar20) {
                  local_985 = 0;
                  `TCheckedPointerIterator<FNiagaraGpuFreeIDUpdate_const_,int,0>::operator!='::__l2
                  ::<lambda_1>::operator()(&local_985);
                }
                if (lVar14 == lVar11) break;
                if (2 < (byte)LogNiagara._0_1_) {
                  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
                }
                lVar14 = lVar14 + 0x20;
              }
            }
            local_980 = uVar15 + 1;
            local_958 = local_958 + 0x30;
            lVar14 = local_968;
            lVar11 = local_960;
            puVar19 = local_948;
            iVar20 = local_97c;
          } while ((int)local_980 < *local_950);
        }
        pFVar12 = local_970;
        if (0 < *(int *)(puVar19 + 0x340)) {
          if (2 < (byte)LogNiagara._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          }
          local_458.Base = local_438;
          local_458.bIsDynamic = false;
          local_458.bIsExternal = false;
          uVar15 = 0;
          iVar16 = *(int *)(puVar19 + 0x340);
          local_458.CurPos = local_438;
          local_458.End = (wchar_t *)local_38;
          if (0 < iVar16) {
            do {
              uVar9 = uVar15 & 0x8000000f;
              if ((int)uVar9 < 0) {
                uVar9 = (uVar9 - 1 | 0xfffffff0) + 1;
              }
              if ((uVar9 == 0xf) || (uVar15 == iVar16 - 1U)) {
                bVar6 = true;
              }
              else {
                bVar6 = false;
              }
              if (uVar9 != 0) {
                if (local_458.End < local_458.CurPos + 2) {
                  TStringBuilderBase<wchar_t>::Extend(&local_458,2);
                }
                pvVar8 = FGenericPlatformString::Memcpy(local_458.CurPos,L", ",4);
                local_458.CurPos = (wchar_t *)((longlong)pvVar8 + 4);
              }
              uVar9 = 0;
              if ((int)uVar15 < *(int *)(puVar19 + 0x340)) {
                uVar9 = ~uVar15 >> 0x1f;
              }
              if (uVar9 == 0) {
                local_998 = (longlong)(int)uVar15;
                local_990 = (longlong)*(int *)(puVar19 + 0x340);
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar7) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              TStringBuilderBase<wchar_t>::AppendfImpl(&local_458,L"0x%08x");
              if (bVar6) {
                if (2 < (byte)LogNiagara._0_1_) {
                  if (local_458.End < local_458.CurPos + 1) {
                    TStringBuilderBase<wchar_t>::Extend(&local_458,1);
                  }
                  *local_458.CurPos = L'\0';
                  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
                }
                local_458.CurPos = local_458.Base;
              }
              iVar16 = *(int *)(puVar19 + 0x340);
              uVar15 = uVar15 + 1;
            } while ((int)uVar15 < iVar16);
          }
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_458);
          pFVar12 = local_970;
          lVar14 = local_968;
          lVar11 = local_960;
        }
      }
      local_97c = iVar20 + 1;
      local_968 = lVar14 + 1;
      local_960 = lVar11 + 0x20;
    } while (local_97c < 3);
  }
  return;
}

// ExecuteTicks @ 1492e9490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001492ea464) */
/* WARNING: Removing unreachable block (ram,0x0001492ea470) */
/* WARNING: Removing unreachable block (ram,0x0001492ea800) */
/* WARNING: Removing unreachable block (ram,0x0001492ea810) */
/* WARNING: Removing unreachable block (ram,0x0001492eaefe) */
/* WARNING: Removing unreachable block (ram,0x0001492eaf0f) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::ExecuteTicks
          (FNiagaraGpuComputeDispatch *this,FRDGBuilder *param_1,
          TStridedView<FSceneView_const_,int> *param_2,Type param_3)

{
  int *piVar1;
  char cVar2;
  FRHIComputeCommandList *this_00;
  undefined8 uVar3;
  FNiagaraComputeExecutionContext *this_01;
  FNiagaraDataBuffer *this_02;
  FNiagaraGpuFreeIDUpdate *pFVar4;
  code *pcVar5;
  FNiagaraGpuDispatchList *pFVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  atomic<unsigned_int> aVar10;
  int iVar11;
  int iVar12;
  FSceneView *pFVar13;
  FRDGEventName *pFVar14;
  void *pvVar15;
  TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_8_::<lambda_1>_>
  *pTVar16;
  TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_11_::<lambda_2>_>
  *pTVar17;
  TStatId TVar18;
  FRDGScope *this_03;
  FRHIBreadcrumbAllocator *pFVar19;
  FRHIBreadcrumbNode *pFVar20;
  TRDGUniformBuffer<FSceneTextureUniformParameters> *pTVar21;
  TRDGUniformBuffer<FMobileSceneTextureUniformParameters> *pTVar22;
  TRDGUniformBuffer<FSubstratePublicGlobalUniformParameters> *pTVar23;
  TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_35_::<lambda_5>_>
  *pTVar24;
  TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_35_::<lambda_6>_>
  *pTVar25;
  TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraGpuComputeDispatch::ExecuteTicks(FRDGBuilder_&,TStridedView<FSceneView_const_,int>,ENiagaraGpuComputeTickStage::Type)_::_118_::<lambda_7>_>
  *pTVar26;
  byte bVar27;
  longlong lVar28;
  undefined ***pppuVar29;
  uint uVar30;
  FScriptContainerElement *pFVar31;
  FScriptContainerElement *pFVar32;
  undefined4 uVar33;
  bool *pbVar34;
  longlong lVar35;
  FNiagaraSimStageData *pFVar36;
  longlong *plVar37;
  undefined8 *puVar38;
  ulonglong uVar39;
  uint *puVar40;
  longlong lVar41;
  undefined8 *puVar42;
  FNiagaraGpuComputeDispatch *pFVar43;
  bool *pbVar44;
  TBitArray<FDefaultBitArrayAllocator> *pTVar45;
  FRDGBuilder *pFVar46;
  FNiagaraDataBuffer *pFVar47;
  uint uVar48;
  longlong *plVar49;
  ForAnyElementType FVar50;
  bool bVar51;
  undefined1 auStackY_5a8 [32];
  TArray<FRHITransitionInfo,TSizedDefaultAllocator<32>_> local_570;
  undefined1 local_560;
  undefined1 local_55f;
  undefined1 local_55e;
  undefined1 local_55d;
  undefined1 local_55c;
  undefined1 local_55b;
  undefined1 local_55a;
  undefined1 local_559;
  undefined1 local_558 [8];
  FRDGBuilder *local_550;
  FScriptContainerElement *local_548;
  TArray<FRHITransitionInfo,TSizedDefaultAllocator<32>_> local_540;
  ForAnyElementType local_530;
  undefined8 local_528;
  FNiagaraGpuComputeDispatch *local_520;
  FNiagaraGpuDispatchList *local_518;
  FScriptContainerElement *local_510;
  FRDGUserValidation *local_508;
  uint local_500;
  uint local_4fc;
  FName local_4f8;
  byte local_4f0;
  int local_4e0;
  uint uStack_4dc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_4d8;
  undefined4 local_4d0;
  uint uStack_4cc;
  int iStack_4c8;
  undefined4 uStack_4c4;
  longlong *local_4c0;
  undefined8 uStack_4b8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_4b0;
  uint uStack_4a8;
  uint uStack_4a4;
  int iStack_4a0;
  undefined4 uStack_49c;
  int local_498;
  undefined4 uStack_494;
  longlong *local_490;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_488;
  undefined4 local_45c;
  FScriptContainerElement *local_458;
  bool *local_448;
  <lambda_2> local_440;
  uint local_438;
  TRDGEventScopeGuard<FRDGScope_RHI> local_430;
  char local_420;
  int local_418;
  int local_414;
  int local_410;
  longlong *local_408;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_400;
  undefined8 uStack_3e0;
  longlong *local_3d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3d0;
  undefined8 uStack_3b0;
  <lambda_1> local_3a8;
  FSourceLocation local_388;
  <lambda_7> local_368;
  FNDIGpuComputeDispatchArgsGenContext local_348;
  <lambda_5> local_2f8;
  FNiagaraGpuDispatchInstance *local_2c0;
  int iStack_2b8;
  undefined4 uStack_2b4;
  FNiagaraGpuDispatchInstance *local_2b0;
  int iStack_2a8;
  undefined4 uStack_2a4;
  char *local_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  TGPUStat<TRHIGPUStatNameProvider_NiagaraGPUSimulation> *local_290;
  wchar_t *pwStack_288;
  <lambda_6> local_280;
  FRDGBuilder *local_258;
  FNiagaraGpuComputeDispatch *local_250;
  undefined8 local_248;
  FRHIBreadcrumbScope local_240;
  char local_230;
  TStridedView<FSceneView_const_,int> local_228;
  TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> local_218;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26>_const_*,std::tuple<>_> local_208;
  TStridedView<FSceneView_const_,int> local_1f8;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  FRDGEventName local_1c8;
  FRDGEventName local_1b0;
  FRDGEventName local_198;
  FRDGEventName local_180;
  FRDGEventName local_168 [2];
  undefined4 local_134;
  undefined1 local_128 [32];
  uint *local_108;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  code *local_88 [2];
  undefined **local_78;
  FNiagaraGpuDispatchList *local_70;
  undefined ***local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  local_550 = param_1;
  local_520 = this;
  if (param_3 == Last) {
    pFVar13 = TStridedView<FSceneView_const_,int>::GetElementPtr(param_2,0);
    local_438 = 0;
    bVar51 = (pFVar13->GPUMask).GPUMask != 0;
    if (bVar51) {
      for (; ((pFVar13->GPUMask).GPUMask >> local_438 & 1) == 0; local_438 = local_438 + 1) {
      }
    }
    uVar9 = 0x20;
    if (bVar51) {
      uVar9 = local_438;
    }
    if ((this->OptimizedCrossGPUTransferMask >> (uVar9 & 0x1f) & 1) != 0) {
      this->OptimizedCrossGPUTransferMask =
           this->OptimizedCrossGPUTransferMask & ~(1 << (uVar9 & 0x1f));
      local_3a8.NumDispatchGroups = this->DispatchListPerStage[2].DispatchGroups.ArrayNum;
      local_3a8.__this = this;
      local_3a8.TickStage = param_3;
      local_3a8.GPUIndex = uVar9;
      pFVar14 = FRDGEventName::FRDGEventName(&local_1c8,1,L"Niagara::ExecuteTicksPre");
      FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar14,None);
      FRDGBuilder::FlushAccessModeQueue(param_1);
      pvVar15 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1a0,8);
      pTVar16 = TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l8::<lambda_1>_>::
                TRDGEmptyLambdaPass<_FNiagaraGpuComputeDispatch::ExecuteTicks_::__l8::<lambda_1>_>
                          (pvVar15,pFVar14,NeverCull,&local_3a8);
      TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0>::Insert
                (&param_1->Passes,(FRDGPass *)pTVar16);
      FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar16);
      if (local_1c8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_1c8.FormattedEventName.Data.AllocatorInstance.Data);
      }
    }
    if ((this->field_0x1e2 != '\0') && (this->field_0x1e1 == '\0')) {
      local_440.__this = this;
      pFVar14 = FRDGEventName::FRDGEventName(&local_1b0,1,L"Niagara::MultiViewPreviousDataClear");
      FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar14,None);
      FRDGBuilder::FlushAccessModeQueue(param_1);
      pvVar15 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,400,8);
      pTVar17 = TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l11::<lambda_2>_>
                ::
                TRDGEmptyLambdaPass<_FNiagaraGpuComputeDispatch::ExecuteTicks_::__l11::<lambda_2>_>
                          (pvVar15,pFVar14,NeverCull,&local_440);
      TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0>::Insert
                (&param_1->Passes,(FRDGPass *)pTVar17);
      FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar17);
      if (local_1b0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_1b0.FormattedEventName.Data.AllocatorInstance.Data);
      }
    }
  }
  local_518 = this->DispatchListPerStage + (int)param_3;
  if (0 < this->DispatchListPerStage[(int)param_3].DispatchGroups.ArrayNum) {
    bVar51 = -1 < CpuChannel->Enabled;
    if (bVar51) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1156,"FNiagaraGpuComputeDispatch_ExecuteTicks",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                 ,0x484);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1156);
    }
    TVar18 = FThreadSafeStaticStatInner<FStat_STAT_NiagaraGPUSimTick_RT,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_NiagaraGPUSimTick_RT,1> *)
                        &StatPtr_STAT_NiagaraGPUSimTick_RT);
    local_388.Impl._Line = 0x485;
    local_388.Impl._Function =
         "void __cdecl FNiagaraGpuComputeDispatch::ExecuteTicks(class FRDGBuilder &,class TStridedView<class FSceneView const ,int>,enum ENiagaraGpuComputeTickStage::Type)"
    ;
    local_388.Impl._Column = 2;
    local_388.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
    ;
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_4f8,*(TStatIdData **)&(TVar18.StatIdPtr)->Name,
               CycleStat|ClearEveryFrame,false,&local_388);
    cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
    uVar39 = (ulonglong)_tls_index;
    local_420 = '\0';
    if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar39 * 8) + 0x9d4c) <
           ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_1d8 = 0x54c80f40;
        uStack_1d4 = 1;
        ::Desc._padding_._0_4_ = 0x54c80f40;
        ::Desc._padding_._4_4_ = uStack_1dc;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_._0_4_ = 0x486;
        ::Desc._padding_ = (longlong)u_NiagaraGpuCompu;
        ::Desc._padding_ = (longlong)u_NiagaraGpuCompu;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FNiagaraGpuComputeDispatch::ExecuteTicks'::__l19::<lambda_3>::operator()<>'::__l3
               ::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_208._Myfirst._Val = &::Desc;
      local_430.State = (FRDGScopeState *)param_1;
      this_03 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)this_03;
      local_430.Scope = this_03;
      UE::Core::Private::
      TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Destruct((ulonglong)(this_03->Impl).Impl.TypeIndex,&this_03->Impl);
      FRDGScope_RHI::FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26>_>
                ((FRDGScope_RHI *)&this_03->Impl,(FRDGScopeState *)param_1,&local_208);
      (this_03->Impl).Impl.TypeIndex = '\x02';
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(this_03,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(this_03,(FRHIComputeCommandList *)param_1->_padding_);
      }
      local_420 = '\x01';
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar39 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      uStack_298 = 0x486;
      local_2a0 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
      ;
      local_290 = &GPUStat_NiagaraGPUSimulation;
      pwStack_288 = L"NiagaraGpuComputeDispatch";
      ::Desc._padding_._0_4_ = 0x51ddbbc0;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x486;
      ::Desc._padding_._4_4_ = uStack_294;
      ::Desc._padding_._0_4_ = 0x54c80f40;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x51ddc450;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FNiagaraGpuComputeDispatch::ExecuteTicks'::__l24::<lambda_4>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    this_00 = (FRHIComputeCommandList *)param_1->_padding_;
    pFVar19 = FRHIComputeCommandList::GetBreadcrumbAllocator(this_00);
    pFVar20 = FMemStackBase::Alloc(&pFVar19->Inner,0x50,8);
    pFVar20->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar20->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar20->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar20->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar20->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar20->TraceCpuSpecId = 0;
    pFVar20->TraceCpuMetadataId = 0;
    pFVar20->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar20->Allocator = pFVar19;
    LOCK();
    UNLOCK();
    uVar9 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar20->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar20->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar20->ID = uVar9;
    pFVar20->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar20[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar7 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar7)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar10 = (atomic<unsigned_int>)
                 FCpuProfilerTrace::OutputEventType
                           ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_)
                            ,(char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                            (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar10;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar20->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_240,this_00,pFVar20);
    pFVar13 = param_2->FirstElementPtr;
    uVar3._0_4_ = param_2->BytesBetweenElements;
    uVar3._4_4_ = param_2->NumElements;
    local_230 = '\x01';
    *(FSceneView **)&this->field_0x1d0 = pFVar13;
    *(int *)&this->field_0x1d8 = (int)uVar3;
    *(int *)&this->field_0x1dc = uVar3._4_4_;
    if ((int)*(Type *)&this->field_0x34 < 3) {
      local_228.FirstElementPtr = pFVar13;
      local_228._8_8_ = uVar3;
      pTVar22 = UE::FXRenderingUtils::GetOrCreateMobileSceneTextureUniformBuffer
                          (param_1,&local_228,None);
      this->MobileSceneTexturesUniformParams = pTVar22;
    }
    else {
      local_1f8.FirstElementPtr = pFVar13;
      local_1f8._8_8_ = uVar3;
      pTVar21 = UE::FXRenderingUtils::GetOrCreateSceneTextureUniformBuffer
                          (param_1,&local_1f8,*(Type *)&this->field_0x34,SceneVelocity);
      this->SceneTexturesUniformParams = pTVar21;
    }
    pTVar23 = Substrate::GetPublicGlobalUniformBuffer(param_1,*(FScene **)&this->field_0x28);
    pbVar44 = &this->bIsExecutingFirstDispatchGroup;
    this->SubstratePublicGlobalUniformParams = pTVar23;
    local_4fc = (local_518->DispatchGroups).ArrayNum;
    uVar39 = (ulonglong)(int)local_4fc;
    pFVar32 = (local_518->DispatchGroups).AllocatorInstance.Data;
    local_458 = pFVar32 + uVar39 * 0x30;
    pbVar34 = pbVar44;
    while( true ) {
      local_548 = pFVar32;
      if ((local_518->DispatchGroups).ArrayNum != (int)uVar39) {
        local_560 = 0;
        `TCheckedPointerIterator<FNiagaraGpuDispatchGroup,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_560);
        pbVar34 = pbVar44;
      }
      pFVar6 = local_518;
      if (pFVar32 == local_458) break;
      if (((local_518->DispatchGroups).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = (pFVar6->DispatchGroups).ArrayNum;
      local_508 = (FRDGUserValidation *)(pFVar6->DispatchGroups).AllocatorInstance.Data;
      bVar7 = (FRDGUserValidation *)pFVar32 == local_508;
      uVar30 = iVar11 - 1;
      uVar9 = 0;
      if ((int)uVar30 < iVar11) {
        uVar9 = ~uVar30 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_448 = &this->bIsExecutingFirstDispatchGroup;
      local_510 = (pFVar6->DispatchGroups).AllocatorInstance.Data +
                  (longlong)((pFVar6->DispatchGroups).ArrayNum + -1) * 0x30;
      *local_448 = bVar7;
      this->bIsExecutingLastDispatchGroup = pFVar32 == local_510;
      local_540.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_540.ArrayNum = 0;
      local_540.ArrayMax = 0;
      local_570.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar9 = *(int *)(pFVar32 + 0x18) * 3;
      local_570.ArrayNum = 0;
      local_570.ArrayMax = 0;
      local_530.Data = (FScriptContainerElement *)0x0;
      local_528._0_4_ = 0;
      local_528._4_4_ = 0;
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      if (0 < (int)uVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,uVar9,&local_540.AllocatorInstance,0,&local_540.ArrayMax);
      }
      uVar9 = *(int *)(pFVar32 + 0x18) * 3;
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      if (local_570.ArrayMax < (int)uVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,uVar9,&local_570.AllocatorInstance,local_570.ArrayNum,&local_570.ArrayMax)
        ;
      }
      iVar11 = *(int *)(pFVar32 + 0x18);
      lVar35 = *(longlong *)(pFVar32 + 0x10);
      lVar41 = (longlong)iVar11 * 0x70 + lVar35;
      while( true ) {
        if (*(int *)(pFVar32 + 0x18) != iVar11) {
          local_55f = 0;
          `TCheckedPointerIterator<FNiagaraGpuDispatchInstance_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_55f);
        }
        pFVar43 = local_520;
        if (lVar35 == lVar41) break;
        if (*(FNiagaraDataBuffer **)(lVar35 + 0x50) != (FNiagaraDataBuffer *)0x0) {
          FNiagaraGpuComputeDispatchLocal::
          AddDataBufferTransitions<TArray<FRHITransitionInfo,TSizedDefaultAllocator<32>_>_>
                    (&local_540,&local_570,*(FNiagaraDataBuffer **)(lVar35 + 0x50),SRVMask,
                     UAVCompute);
        }
        if (((*(byte *)(*(longlong *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(lVar35 + 8) + 200) + 0x58) + 8)
                       + 0x38) & 1) != 0) && (lVar28 = *(longlong *)(lVar35 + 0x50), lVar28 != 0)) {
          uVar9 = *(uint *)(lVar28 + 0xd8);
          uVar3 = *(undefined8 *)(lVar28 + 200);
          if ((int)local_528 == local_528._4_4_) {
            local_528._0_4_ =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_530,(int *)((longlong)&local_528 + 4));
          }
          lVar28 = (longlong)(int)local_528;
          local_528._0_4_ = (int)local_528 + 1;
          *(undefined8 *)(local_530.Data + lVar28 * 0x10) = uVar3;
          *(uint *)(local_530.Data + lVar28 * 0x10 + 8) = uVar9 >> 2;
          if (local_540.ArrayNum == local_540.ArrayMax) {
            local_540.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&local_540.AllocatorInstance,&local_540.ArrayMax);
          }
          iVar12 = local_540.ArrayNum + 1;
          lVar28 = (longlong)local_540.ArrayNum;
          *(undefined4 *)(local_540.AllocatorInstance.Data + lVar28 * 0x30) = 0xffffffff;
          *(undefined2 *)(local_540.AllocatorInstance.Data + lVar28 * 0x30 + 4) = 0xffff;
          *(undefined8 *)(local_540.AllocatorInstance.Data + lVar28 * 0x30 + 8) = uVar3;
          local_540.AllocatorInstance.Data[lVar28 * 0x30 + 0x10] = (FScriptContainerElement)0x3;
          *(undefined4 *)(local_540.AllocatorInstance.Data + lVar28 * 0x30 + 0x14) = 0x10;
          *(undefined4 *)(local_540.AllocatorInstance.Data + lVar28 * 0x30 + 0x18) = 0x400;
          local_540.AllocatorInstance.Data[lVar28 * 0x30 + 0x1c] = (FScriptContainerElement)0x0;
          local_540.AllocatorInstance.Data[lVar28 * 0x30 + 0x28] = (FScriptContainerElement)0x0;
          local_540.ArrayNum = iVar12;
          if (local_570.ArrayNum == local_570.ArrayMax) {
            local_570.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&local_570.AllocatorInstance,&local_570.ArrayMax);
          }
          lVar28 = (longlong)local_570.ArrayNum;
          *(undefined8 *)(local_570.AllocatorInstance.Data + lVar28 * 0x30 + 8) = uVar3;
          *(undefined4 *)(local_570.AllocatorInstance.Data + lVar28 * 0x30) = 0xffffffff;
          *(undefined2 *)(local_570.AllocatorInstance.Data + lVar28 * 0x30 + 4) = 0xffff;
          local_570.AllocatorInstance.Data[lVar28 * 0x30 + 0x10] = (FScriptContainerElement)0x3;
          *(undefined4 *)(local_570.AllocatorInstance.Data + lVar28 * 0x30 + 0x14) = 0x400;
          *(undefined4 *)(local_570.AllocatorInstance.Data + lVar28 * 0x30 + 0x18) = 0x10;
          local_570.AllocatorInstance.Data[lVar28 * 0x30 + 0x1c] = (FScriptContainerElement)0x0;
          local_570.AllocatorInstance.Data[lVar28 * 0x30 + 0x28] = (FScriptContainerElement)0x0;
          pFVar32 = local_548;
          local_570.ArrayNum = local_570.ArrayNum + 1;
        }
        lVar35 = lVar35 + 0x70;
      }
      uVar33 = 0x400;
      if ((FRDGUserValidation *)pFVar32 == local_508) {
        uVar33 = 0xf0;
      }
      if ((*(int *)&local_520->field_0x54 < *(int *)&local_520->field_0x50) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("UsedInstanceCounts <= AllocatedInstanceCounts",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                             ,0x44,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_540.ArrayNum == local_540.ArrayMax) {
        local_540.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_540.AllocatorInstance,&local_540.ArrayMax);
      }
      lVar35 = (longlong)local_540.ArrayNum;
      local_540.ArrayNum = local_540.ArrayNum + 1;
      uVar3 = *(undefined8 *)&pFVar43->field_0x70;
      pFVar31 = local_540.AllocatorInstance.Data + lVar35 * 0x30;
      *(undefined4 *)pFVar31 = 0xffffffff;
      *(undefined2 *)(pFVar31 + 4) = 0xffff;
      *(undefined8 *)(pFVar31 + 8) = uVar3;
      pFVar31[0x10] = (FScriptContainerElement)0x3;
      *(undefined4 *)(pFVar31 + 0x14) = uVar33;
      *(undefined4 *)(pFVar31 + 0x18) = 0x400;
      pFVar31[0x1c] = (FScriptContainerElement)0x0;
      pFVar31[0x28] = (FScriptContainerElement)0x0;
      if (pFVar32 == local_510) {
        if ((*(int *)&pFVar43->field_0x54 < *(int *)&pFVar43->field_0x50) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("UsedInstanceCounts <= AllocatedInstanceCounts",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                               ,0x44,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (local_570.ArrayNum == local_570.ArrayMax) {
          local_570.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_570.AllocatorInstance,&local_570.ArrayMax);
        }
        uVar3 = *(undefined8 *)&pFVar43->field_0x70;
        pFVar31 = local_570.AllocatorInstance.Data + (longlong)local_570.ArrayNum * 0x30;
        *(undefined4 *)pFVar31 = 0xffffffff;
        *(undefined2 *)(pFVar31 + 4) = 0xffff;
        *(undefined8 *)(pFVar31 + 8) = uVar3;
        pFVar31[0x10] = (FScriptContainerElement)0x3;
        *(undefined4 *)(pFVar31 + 0x14) = 0x400;
        *(undefined4 *)(pFVar31 + 0x18) = 0xf0;
        pFVar31[0x1c] = (FScriptContainerElement)0x0;
        pFVar31[0x28] = (FScriptContainerElement)0x0;
        local_570.ArrayNum = local_570.ArrayNum + 1;
      }
      pFVar31 = pFVar32;
      if (0 < *(int *)(pFVar32 + 0x28)) {
        uVar9 = *(int *)(pFVar32 + 0x28) + local_570.ArrayNum;
        if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
        }
        if (local_570.ArrayMax < (int)uVar9) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,uVar9,&local_570.AllocatorInstance,local_570.ArrayNum,
                     &local_570.ArrayMax);
        }
        pFVar31 = local_548;
        iVar11 = *(int *)(pFVar32 + 0x28);
        plVar37 = *(longlong **)(pFVar32 + 0x20);
        plVar49 = plVar37 + (longlong)iVar11 * 4;
        while( true ) {
          if (*(int *)(pFVar31 + 0x28) != iVar11) {
            local_55e = 0;
            `TCheckedPointerIterator<FNiagaraGpuFreeIDUpdate_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_55e);
          }
          if (plVar37 == plVar49) break;
          lVar35 = *(longlong *)(*plVar37 + 0x58);
          if (local_570.ArrayNum == local_570.ArrayMax) {
            local_570.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&local_570.AllocatorInstance,&local_570.ArrayMax);
          }
          lVar41 = (longlong)local_570.ArrayNum;
          local_570.ArrayNum = local_570.ArrayNum + 1;
          uVar3 = *(undefined8 *)(lVar35 + 0x48);
          pFVar32 = local_570.AllocatorInstance.Data + lVar41 * 0x30;
          plVar37 = plVar37 + 4;
          *(undefined4 *)pFVar32 = 0xffffffff;
          *(undefined2 *)(pFVar32 + 4) = 0xffff;
          *(undefined8 *)(pFVar32 + 8) = uVar3;
          pFVar32[0x10] = (FScriptContainerElement)0x3;
          *(undefined4 *)(pFVar32 + 0x14) = 0x10;
          *(undefined4 *)(pFVar32 + 0x18) = 0x400;
          pFVar32[0x1c] = (FScriptContainerElement)0x0;
          pFVar32[0x28] = (FScriptContainerElement)0x0;
        }
      }
      pFVar32 = local_548;
      pFVar46 = local_550;
      iVar11 = *(int *)(pFVar31 + 0x18);
      local_348.SimStageData = (FNiagaraSimStageData *)0x0;
      local_348.NumIndirectCounterGenArgs = 0;
      local_348.IndirectCallbacks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_348.IndirectCallbacks.ArrayNum = 0;
      local_348.IndirectCallbacks.ArrayMax = 0;
      local_348.PassParameters = (FNDIGpuComputeDispatchArgsGenParameters *)0x0;
      local_d8._0_8_ = 0;
      local_d8._8_8_ = 0;
      local_b8 = (uint *)0x0;
      local_b0 = 0;
      local_a4 = 0;
      local_98 = (ForElementType<FSetElementId>)0x0;
      local_90 = 0;
      plVar37 = *(longlong **)(pFVar31 + 0x10);
      local_348.IndirectBuffer = (FRDGBuffer *)0x0;
      local_348.IndirectCounterGenArgs = (FNiagaraDispatchIndirectInfoCS *)0x0;
      local_348._padding_ = (longlong)local_550;
      pFVar36 = (FNiagaraSimStageData *)(plVar37 + 2);
      plVar49 = plVar37 + (longlong)iVar11 * 0xe;
      local_348._padding_ = (longlong)pFVar43;
      local_ac = 0x80;
      local_a8 = 0xffffffff;
      while( true ) {
        if (*(int *)(pFVar32 + 0x18) != iVar11) {
          local_55d = 0;
          `TCheckedPointerIterator<FNiagaraGpuDispatchInstance_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_55d);
        }
        uVar9 = local_b0;
        if (plVar37 == plVar49) break;
        if (pFVar36->AlternateIterationSource != (FNiagaraDataInterfaceProxyRW *)0x0) {
          local_348.SystemInstanceID = *(ulong64 *)(*plVar37 + 0x10);
          local_348.SimStageData = pFVar36;
          (**(code **)(*(longlong *)pFVar36->AlternateIterationSource + 0x60))
                    (pFVar36->AlternateIterationSource,&local_348);
        }
        PreStageInterface(pFVar43,pFVar46,(FNiagaraGPUSystemTick *)*plVar37,
                          (FNiagaraComputeInstanceData *)pFVar36[-1].StageMetaData,pFVar36,
                          (TSet<FNiagaraDataInterfaceProxy_*,DefaultKeyFuncs<FNiagaraDataInterfaceProxy_*,0>,FDefaultSetAllocator>
                           *)local_d8);
        plVar37 = plVar37 + 0xe;
        pFVar36 = (FNiagaraSimStageData *)&pFVar36[1].DispatchArgs;
      }
      pTStack_4d8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
      uStack_4dc = 1;
      local_4e0 = 0;
      uStack_4cc = 0;
      iStack_4c8 = 0;
      if (local_b0 != 0) {
        puVar40 = (uint *)(local_d8 + 0x10);
        if (local_b8 != (uint *)0x0) {
          puVar40 = local_b8;
        }
        uVar30 = *puVar40;
        iStack_4c8 = 0;
        local_4e0 = 0;
        while (uVar30 == 0) {
          iStack_4c8 = iStack_4c8 + 0x20;
          lVar35 = (longlong)local_4e0;
          local_4e0 = local_4e0 + 1;
          if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < local_4e0) {
            uStack_4cc = local_b0;
            goto LAB_1492ea142;
          }
          uVar30 = puVar40[lVar35 + 1];
        }
        uStack_4dc = -uVar30 & uVar30;
        uVar39 = (ulonglong)uStack_4dc * 2 + 1;
        lVar35 = 0x3f;
        if (uVar39 != 0) {
          for (; uVar39 >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        local_418 = (int)lVar35;
        uStack_4cc = local_418 + -1 + iStack_4c8;
        if ((int)local_b0 < (int)uStack_4cc) {
          uStack_4cc = local_b0;
        }
      }
LAB_1492ea142:
      local_4d0 = 0xffffffff;
      uStack_4b8 = CONCAT44(uStack_4dc,local_4e0);
      local_4c0 = (longlong *)local_d8;
      uStack_4a4 = uStack_4cc;
      uStack_4a8 = 0xffffffff;
      uStack_49c = uStack_4c4;
      iStack_4a0 = iStack_4c8;
      pTVar45 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
      bVar27 = (byte)local_b0 & 0x1f;
      local_498 = local_d8._8_4_ - local_a4;
      local_488._padding_._0_4_ = (int)local_b0 >> 5;
      local_488._padding_._4_4_ = 1 << bVar27;
      local_488.UnvisitedBitMask = -1 << bVar27;
      local_488.BaseBitIndex = local_b0 & 0xffffffe0;
      local_488.CurrentBitIndex = local_b0;
      uStack_3e0 = CONCAT44(uStack_494,local_498);
      pTStack_4b0 = pTStack_4d8;
      local_488.Array = pTVar45;
      local_408 = local_4c0;
      TStack_400._padding_ = uStack_4b8;
      TStack_400.Array = pTStack_4d8;
      TStack_400._16_8_ = _uStack_4a8;
      TStack_400._24_8_ = _iStack_4a0;
      if (((int)local_b0 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar9 != local_b0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_488);
        pTVar45 = local_488.Array;
        uVar9 = local_488.CurrentBitIndex;
      }
      while( true ) {
        plVar37 = local_408;
        if ((int)local_408[1] - *(int *)((longlong)local_408 + 0x34) != (int)uStack_3e0) {
          local_55c = 0;
          `TSparseArray<TSparseSetElement<FNiagaraDataInterfaceProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_55c);
        }
        if (((TStack_400.CurrentBitIndex == uVar9) && (TStack_400.Array == pTVar45)) &&
           (plVar37 == (longlong *)local_d8)) break;
        plVar37 = *(longlong **)(*plVar37 + (longlong)TStack_400.CurrentBitIndex * 0x10);
        (**(code **)(*plVar37 + 0x40))(plVar37,pFVar46,pFVar43);
        TStack_400.UnvisitedBitMask = TStack_400.UnvisitedBitMask & ~TStack_400._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_400);
      }
      local_90 = 0;
      if (local_98 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98);
      }
      TSparseArray<TSparseSetElement<FNiagaraDataInterfaceProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FNiagaraDataInterfaceProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FNiagaraDataInterfaceProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_d8);
      FNDIGpuComputeDispatchArgsGenContext::FlushPass(&local_348);
      DestructItems<TTuple<TFunction<void___cdecl(FRHICommandList_&,FRDGBuffer_*,unsigned_int)>,TTuple<FRDGBuffer_*,unsigned_int>_>,int>
                ((TTuple<TFunction<void___cdecl(FRHICommandList_&,FRDGBuffer_*,unsigned_int)>,TTuple<FRDGBuffer_*,unsigned_int>_>
                  *)local_348.IndirectCallbacks.AllocatorInstance.Data,
                 local_348.IndirectCallbacks.ArrayNum);
      if ((TTuple<TFunction<void___cdecl(FRHICommandList_&,FRDGBuffer_*,unsigned_int)>,TTuple<FRDGBuffer_*,unsigned_int>_>
           *)local_348.IndirectCallbacks.AllocatorInstance.Data !=
          (TTuple<TFunction<void___cdecl(FRHICommandList_&,FRDGBuffer_*,unsigned_int)>,TTuple<FRDGBuffer_*,unsigned_int>_>
           *)0x0) {
        FMemory::Free(local_348.IndirectCallbacks.AllocatorInstance.Data);
      }
      local_2c0 = *(FNiagaraGpuDispatchInstance **)(pFVar32 + 0x10);
      iVar11 = *(int *)(pFVar32 + 0x18);
      if ((iVar11 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_2f8.PreStageTransitions.AllocatorInstance.Data = local_540.AllocatorInstance.Data;
      local_2f8.PreStageTransitions.ArrayNum = local_540.ArrayNum;
      local_2f8.PreStageTransitions.ArrayMax = local_540.ArrayMax;
      local_2f8.PreStageIDToIndexInit.AllocatorInstance.Data = local_530.Data;
      local_2f8.PreStageIDToIndexInit.ArrayNum = (int)local_528;
      local_2f8.DispatchInstances._12_4_ = uStack_2b4;
      local_2f8.DispatchInstances.ArrayNum = iVar11;
      local_2f8.PreStageIDToIndexInit.ArrayMax = local_528._4_4_;
      local_528 = 0;
      local_2f8.__this = pFVar43;
      local_540.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_540.ArrayNum = 0;
      local_540.ArrayMax = 0;
      local_530.Data = (FScriptContainerElement *)0x0;
      local_2f8.DispatchInstances.DataPtr = local_2c0;
      iStack_2b8 = iVar11;
      pFVar14 = FRDGEventName::FRDGEventName(local_168,1,L"Niagara::ExecuteTicks::DispatchGroupPre")
      ;
      local_508 = &pFVar46->UserValidation;
      FRDGUserValidation::ValidateAddPass(local_508,pFVar14,None);
      FRDGBuilder::FlushAccessModeQueue(pFVar46);
      pvVar15 = FMemStackBase::Alloc((FMemStackBase *)&pFVar46->_padding_,0x1c0,8);
      pTVar24 = TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l35::<lambda_5>_>
                ::
                TRDGEmptyLambdaPass<_FNiagaraGpuComputeDispatch::ExecuteTicks_::__l35::<lambda_5>_>
                          (pvVar15,pFVar14,NeverCull,&local_2f8);
      iVar11 = (pFVar46->Passes).Array.ArrayNum;
      if (iVar11 == (pFVar46->Passes).Array.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                           (0x808,(ForElementType<FRDGPass_*> *)&pFVar46->Passes,
                            &(pFVar46->Passes).Array.ArrayMax);
      }
      (pFVar46->Passes).Array.ArrayNum = iVar11 + 1;
      (pFVar46->Passes).Array.AllocatorInstance.Data[iVar11] = (FRDGPass *)pTVar24;
      *(int *)&pTVar24->field_0x4c = (pFVar46->Passes).Array.ArrayNum + -1;
      FRDGBuilder::SetupEmptyPass(pFVar46,(FRDGPass *)pTVar24);
      if (local_168[0].FormattedEventName.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168[0].FormattedEventName.Data.AllocatorInstance.Data);
      }
      if (local_2f8.PreStageIDToIndexInit.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_2f8.PreStageIDToIndexInit.AllocatorInstance.Data);
      }
      if (local_2f8.PreStageTransitions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.PreStageTransitions.AllocatorInstance.Data);
      }
      local_500 = *(uint *)(pFVar32 + 0x18);
      uVar39 = (ulonglong)(int)local_500;
      pFVar31 = *(FScriptContainerElement **)(pFVar32 + 0x10);
      plVar37 = (longlong *)((longlong)pFVar31 + uVar39 * 0xe * 8);
      local_490 = plVar37;
      while( true ) {
        local_510 = pFVar31;
        if (*(int *)(pFVar32 + 0x18) != (int)uVar39) {
          local_55b = 0;
          `TCheckedPointerIterator<FNiagaraGpuDispatchInstance_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_55b);
        }
        if (pFVar31 == (FScriptContainerElement *)plVar37) break;
        FNiagaraComputeExecutionContext::TickCounter =
             FNiagaraComputeExecutionContext::TickCounter + 1;
        lVar35 = *(longlong *)((longlong)pFVar31 + 8);
        if (((*(byte *)(lVar35 + 0x120) & 1) != 0) &&
           ((*(byte *)((longlong)pFVar31 + 0x10) & 1) != 0)) {
          iVar11 = *(int *)(lVar35 + 0xd8);
          lVar41 = *(longlong *)pFVar31;
          if (iVar11 != 0) {
            FNiagaraShaderScript::GetShader
                      (*(FNiagaraShaderScript **)(*(longlong *)(lVar35 + 200) + 0x68),&local_218,0);
            FVar50 = ((local_218.ShaderContent)->DataInterfaceParameters).AllocatorInstance;
            if (((ulonglong)FVar50 & 1) != 0) {
              FVar50 = (ForAnyElementType)
                       ((longlong)
                        &((local_218.ShaderContent)->DataInterfaceParameters).AllocatorInstance.
                         field_0x0 + ((longlong)FVar50 >> 0x18));
            }
            iVar12 = ((local_218.ShaderContent)->DataInterfaceParameters).ArrayNum;
            if ((iVar12 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar28 = 0;
            local_258 = local_550;
            local_250 = local_520;
            local_248 = *(undefined8 *)(lVar41 + 0x10);
            uVar9 = 0;
            plVar37 = local_490;
            pFVar32 = local_548;
            if (0 < iVar11) {
              do {
                uVar30 = 0;
                if ((int)uVar9 < iVar12) {
                  uVar30 = ~uVar9 >> 0x1f;
                }
                if ((uVar30 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0x14f,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (*(int *)FVar50 != -1) {
                  uVar30 = 0;
                  if ((int)uVar9 < *(int *)(lVar35 + 0xd8)) {
                    uVar30 = ~uVar9 >> 0x1f;
                  }
                  if ((uVar30 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  plVar37 = *(longlong **)(*(longlong *)(lVar35 + 0xd0) + lVar28 * 8);
                  (**(code **)(*plVar37 + 0x18))(plVar37,&local_258);
                }
                uVar9 = uVar9 + 1;
                lVar28 = lVar28 + 1;
                FVar50 = (ForAnyElementType)((longlong)FVar50 + 0x18);
                pFVar31 = local_510;
                plVar37 = local_490;
                pFVar32 = local_548;
              } while (lVar28 < iVar11);
            }
          }
        }
        pFVar43 = local_520;
        DispatchStage(local_520,local_550,*(FNiagaraGPUSystemTick **)pFVar31,
                      *(FNiagaraComputeInstanceData **)((longlong)pFVar31 + 8),
                      (FNiagaraSimStageData *)((longlong)pFVar31 + 0x10));
        uVar39 = (ulonglong)local_500;
        pFVar31 = (FScriptContainerElement *)((longlong)pFVar31 + 0x70);
      }
      local_2b0 = *(FNiagaraGpuDispatchInstance **)(pFVar32 + 0x10);
      iVar11 = *(int *)(pFVar32 + 0x18);
      if ((iVar11 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_280.PostStageTransitions.ArrayMax = local_570.ArrayMax;
      local_280.PostStageTransitions.AllocatorInstance.Data = local_570.AllocatorInstance.Data;
      local_280.PostStageTransitions.ArrayNum = local_570.ArrayNum;
      local_570.ArrayNum = 0;
      local_570.ArrayMax = 0;
      local_570.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_280.DispatchInstances._12_4_ = uStack_2a4;
      local_280.DispatchInstances.ArrayNum = iVar11;
      local_280.DispatchInstances.DataPtr = local_2b0;
      iStack_2a8 = iVar11;
      local_280.__this = pFVar43;
      pFVar14 = FRDGEventName::FRDGEventName
                          (&local_198,1,L"Niagara::ExecuteTicks::DispatchGroupPost");
      FRDGUserValidation::ValidateAddPass(local_508,pFVar14,None);
      pFVar46 = local_550;
      FRDGBuilder::FlushAccessModeQueue(local_550);
      pvVar15 = FMemStackBase::Alloc((FMemStackBase *)&pFVar46->_padding_,0x1b0,8);
      pTVar25 = TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l35::<lambda_6>_>
                ::
                TRDGEmptyLambdaPass<_FNiagaraGpuComputeDispatch::ExecuteTicks_::__l35::<lambda_6>_>
                          (pvVar15,pFVar14,NeverCull,&local_280);
      iVar11 = (pFVar46->Passes).Array.ArrayNum;
      if (iVar11 == (pFVar46->Passes).Array.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                           (0x808,(ForElementType<FRDGPass_*> *)&pFVar46->Passes,
                            &(pFVar46->Passes).Array.ArrayMax);
      }
      (pFVar46->Passes).Array.ArrayNum = iVar11 + 1;
      (pFVar46->Passes).Array.AllocatorInstance.Data[iVar11] = (FRDGPass *)pTVar25;
      *(int *)&pTVar25->field_0x4c = (pFVar46->Passes).Array.ArrayNum + -1;
      FRDGBuilder::SetupEmptyPass(pFVar46,(FRDGPass *)pTVar25);
      if (local_198.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_198.FormattedEventName.Data.AllocatorInstance.Data);
      }
      if (local_280.PostStageTransitions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.PostStageTransitions.AllocatorInstance.Data);
      }
      puVar42 = *(undefined8 **)(pFVar32 + 0x10);
      local_128._0_8_ = 0;
      local_128._8_8_ = 0;
      iVar11 = *(int *)(local_548 + 0x18);
      local_108 = (uint *)0x0;
      puVar38 = puVar42 + (longlong)iVar11 * 0xe;
      local_100 = 0;
      local_fc = 0x80;
      local_f8 = 0xffffffff;
      local_f4 = 0;
      local_e8 = (ForElementType<FSetElementId>)0x0;
      local_e0 = 0;
      while( true ) {
        if (*(int *)(local_548 + 0x18) != iVar11) {
          local_55a = 0;
          `TCheckedPointerIterator<FNiagaraGpuDispatchInstance_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_55a);
        }
        uVar9 = local_100;
        pFVar43 = local_520;
        if (puVar42 == puVar38) break;
        pFVar36 = (FNiagaraSimStageData *)(puVar42 + 2);
        PostStageInterface(local_520,pFVar46,(FNiagaraGPUSystemTick *)*puVar42,
                           (FNiagaraComputeInstanceData *)puVar42[1],pFVar36,
                           (TSet<FNiagaraDataInterfaceProxy_*,DefaultKeyFuncs<FNiagaraDataInterfaceProxy_*,0>,FDefaultSetAllocator>
                            *)local_128);
        if (pFVar36->bLastStage != 0) {
          PostSimulateInterface
                    (pFVar43,pFVar46,(FNiagaraGPUSystemTick *)*puVar42,
                     (FNiagaraComputeInstanceData *)puVar42[1],pFVar36);
        }
        pFVar47 = (FNiagaraDataBuffer *)puVar42[10];
        this_01 = *(FNiagaraComputeExecutionContext **)(puVar42[1] + 200);
        if (((pFVar47 == (FNiagaraDataBuffer *)0x0) &&
            (pFVar47 = (FNiagaraDataBuffer *)puVar42[8], pFVar47 == (FNiagaraDataBuffer *)0x0)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("FinalSimStageDataBuffer != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                               ,0x534,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (pFVar36->bSetDataToRender == 0) {
          puVar42 = puVar42 + 0xe;
          this_01->MainDataSet->CurrentData = pFVar47;
          pFVar46 = local_550;
        }
        else {
          if ((this_01->DataSetOriginalBuffer_RT == (FNiagaraDataBuffer *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ComputeContext->DataSetOriginalBuffer_RT != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                                 ,0x539,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          this_02 = this_01->DataSetOriginalBuffer_RT;
          this_01->DataSetOriginalBuffer_RT = (FNiagaraDataBuffer *)0x0;
          this_01->MainDataSet->CurrentData = this_02;
          FNiagaraDataBuffer::SwapGPU(this_02,pFVar47);
          FNiagaraComputeExecutionContext::SetTranslucentDataToRender
                    (this_01,(FNiagaraDataBuffer *)0x0);
          FNiagaraComputeExecutionContext::SetDataToRender(this_01,this_02);
          pFVar43 = local_520;
          if (local_520->bCrossGPUTransferEnabled != false) {
            AddCrossGPUTransfer(local_520,(FRHICommandList *)local_550->_padding_,
                                (this_02->GPUBufferFloat).Buffer.Reference);
            AddCrossGPUTransfer(pFVar43,(FRHICommandList *)local_550->_padding_,
                                (this_02->GPUBufferHalf).Buffer.Reference);
            AddCrossGPUTransfer(pFVar43,(FRHICommandList *)local_550->_padding_,
                                (this_02->GPUBufferInt).Buffer.Reference);
          }
          if (pFVar43->field_0x1e2 == '\0') {
            FNiagaraComputeExecutionContext::SetMultiViewPreviousDataToRender(this_01,pFVar47);
            iVar12 = (pFVar43->NeedsMultiViewPreviousDataClear).ArrayNum;
            piVar1 = &(pFVar43->NeedsMultiViewPreviousDataClear).ArrayMax;
            if (iVar12 == *piVar1) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&(pFVar43->NeedsMultiViewPreviousDataClear).
                                         AllocatorInstance,piVar1);
            }
            (pFVar43->NeedsMultiViewPreviousDataClear).ArrayNum = iVar12 + 1;
            puVar42 = puVar42 + 0xe;
            *(FNiagaraComputeExecutionContext **)
             ((pFVar43->NeedsMultiViewPreviousDataClear).AllocatorInstance.Data +
             (longlong)iVar12 * 8) = this_01;
            this_02->GPUDataReadyStage = Last;
            pFVar46 = local_550;
          }
          else {
            puVar42 = puVar42 + 0xe;
            this_02->GPUDataReadyStage = First;
            pFVar46 = local_550;
          }
        }
      }
      iVar11 = 0;
      iStack_4a0 = 0;
      uVar30 = 1;
      uStack_4a4 = 0;
      if (local_100 != 0) {
        puVar40 = (uint *)(local_128 + 0x10);
        if (local_108 != (uint *)0x0) {
          puVar40 = local_108;
        }
        uVar48 = *puVar40;
        while (uVar48 == 0) {
          lVar35 = (longlong)iVar11;
          iStack_4a0 = iStack_4a0 + 0x20;
          iVar11 = iVar11 + 1;
          uStack_4a4 = local_100;
          if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
          goto LAB_1492eab33;
          uVar48 = puVar40[lVar35 + 1];
        }
        uVar30 = -uVar48 & uVar48;
        uVar39 = (ulonglong)uVar30 * 2 + 1;
        lVar35 = 0x3f;
        if (uVar39 != 0) {
          for (; uVar39 >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        local_414 = (int)lVar35;
        uStack_4a4 = iStack_4a0 + -1 + local_414;
        if ((int)local_100 < (int)uStack_4a4) {
          uStack_4a4 = local_100;
        }
      }
LAB_1492eab33:
      local_4c0 = (longlong *)local_128;
      pTStack_4b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
      uVar48 = local_100 & 0xffffffe0;
      local_498 = local_128._8_4_ - local_f4;
      uStack_4b8 = CONCAT44(uVar30,iVar11);
      uStack_4a8 = 0xffffffff;
      uStack_49c = local_134;
      TStack_3d0._padding_ = uStack_4b8;
      iVar11 = (int)local_100 >> 5;
      uStack_3b0 = CONCAT44(uStack_494,local_498);
      bVar27 = (byte)local_100;
      TStack_3d0.UnvisitedBitMask = 0xffffffff;
      TStack_3d0.CurrentBitIndex = uStack_4a4;
      TStack_3d0.BaseBitIndex = iStack_4a0;
      TStack_3d0._28_4_ = local_134;
      local_3d8 = local_4c0;
      TStack_3d0.Array = pTStack_4b0;
      if (((int)local_100 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this = local_520;
      pFVar46 = local_550;
      if (uVar9 != local_100) {
        puVar40 = (uint *)(local_128 + 0x10);
        if (local_108 != (uint *)0x0) {
          puVar40 = local_108;
        }
        uVar9 = -1 << (bVar27 & 0x1f) & puVar40[iVar11];
        while (uVar9 == 0) {
          lVar35 = (longlong)iVar11;
          uVar48 = uVar48 + 0x20;
          iVar11 = iVar11 + 1;
          uVar9 = local_100;
          if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
          goto LAB_1492eac66;
          uVar9 = puVar40[lVar35 + 1];
        }
        uVar39 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
        lVar35 = 0x3f;
        if (uVar39 != 0) {
          for (; uVar39 >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        local_410 = (int)lVar35;
        uVar9 = local_410 + -1 + uVar48;
        if ((int)local_100 < (int)uVar9) {
          uVar9 = local_100;
        }
      }
LAB_1492eac66:
      while( true ) {
        plVar37 = local_3d8;
        if ((int)local_3d8[1] - *(int *)((longlong)local_3d8 + 0x34) != (int)uStack_3b0) {
          local_559 = 0;
          `TSparseArray<TSparseSetElement<FNiagaraDataInterfaceProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_559);
        }
        uVar33 = local_45c;
        pFVar32 = local_548;
        if (((TStack_3d0.CurrentBitIndex == uVar9) &&
            (TStack_3d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10))) &&
           (plVar37 == (longlong *)local_128)) break;
        plVar37 = *(longlong **)(*plVar37 + (longlong)TStack_3d0.CurrentBitIndex * 0x10);
        (**(code **)(*plVar37 + 0x50))(plVar37,pFVar46,this);
        TStack_3d0.UnvisitedBitMask = TStack_3d0.UnvisitedBitMask & ~TStack_3d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3d0);
      }
      iVar11 = *(int *)(local_548 + 0x28);
      param_1 = local_550;
      if (0 < iVar11) {
        plVar37 = *(longlong **)(local_548 + 0x20);
        plVar49 = plVar37 + (longlong)iVar11 * 4;
        while( true ) {
          if (*(int *)(pFVar32 + 0x28) != iVar11) {
            local_558[0] = 0;
            `TCheckedPointerIterator<FNiagaraGpuFreeIDUpdate_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_558);
          }
          this = local_520;
          if (plVar37 == plVar49) break;
          lVar35 = *(longlong *)(*plVar37 + 0x58);
          lVar41 = *(longlong *)(*(longlong *)(lVar35 + 0x78) + 0xd0);
          plVar37[1] = lVar41;
          plVar37[2] = *(longlong *)(lVar35 + 0x48);
          *(undefined4 *)(plVar37 + 3) = *(undefined4 *)(lVar35 + 0x70);
          if ((lVar41 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("FreeIDUpdate.IDToIndexSRV != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                                 ,0x579,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((plVar37[2] == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("FreeIDUpdate.FreeIDsUAV != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                                 ,0x57a,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          plVar37 = plVar37 + 4;
        }
        iVar11 = *(int *)(pFVar32 + 0x28);
        pFVar4 = *(FNiagaraGpuFreeIDUpdate **)(pFVar32 + 0x20);
        if ((iVar11 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_368.__this = this;
        local_368.FreeIDUpdates._12_4_ = uVar33;
        local_368.FreeIDUpdates.DataPtr = pFVar4;
        local_368.FreeIDUpdates.ArrayNum = iVar11;
        pFVar14 = FRDGEventName::FRDGEventName(&local_180,1,L"Niagara::ExecuteTicks::FreeIDUpdates")
        ;
        FRDGUserValidation::ValidateAddPass(local_508,pFVar14,None);
        param_1 = local_550;
        FRDGBuilder::FlushAccessModeQueue(local_550);
        pvVar15 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1a0,8);
        pTVar26 = TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l118::<lambda_7>_>
                  ::
                  TRDGEmptyLambdaPass<_FNiagaraGpuComputeDispatch::ExecuteTicks_::__l118::<lambda_7>_>
                            (pvVar15,pFVar14,NeverCull,&local_368);
        iVar11 = (param_1->Passes).Array.ArrayNum;
        piVar1 = &(param_1->Passes).Array.ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                             (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
        }
        (param_1->Passes).Array.ArrayNum = iVar11 + 1;
        (param_1->Passes).Array.AllocatorInstance.Data[iVar11] = (FRDGPass *)pTVar26;
        *(int *)&pTVar26->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
        FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar26);
        if (local_180.FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.FormattedEventName.Data.AllocatorInstance.Data);
        }
      }
      local_e0 = 0;
      if (local_e8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_e8);
      }
      TSparseArray<TSparseSetElement<FNiagaraDataInterfaceProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FNiagaraDataInterfaceProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FNiagaraDataInterfaceProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_128);
      if (local_530.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_530.Data);
      }
      if (local_570.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_570.AllocatorInstance.Data);
      }
      if (local_540.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_540.AllocatorInstance.Data);
      }
      pbVar44 = &this->bIsExecutingFirstDispatchGroup;
      pFVar32 = pFVar32 + 0x30;
      uVar39 = (ulonglong)local_4fc;
      pbVar34 = local_448;
    }
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::ExecuteTicks'::`2'::<lambda_8>,1,0>
                ::_vftable_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraGpuComputeDispatch::ExecuteTicks'::__l2::<lambda_8>,void>
                  ::Call;
    local_60 = (undefined ***)0x0;
    local_70 = local_518;
    FRDGBuilder::AddPostExecuteCallback(param_1,(TUniqueFunction<void___cdecl(void)> *)local_88);
    if (local_88[0] != (code *)0x0) {
      pppuVar29 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar29 = local_60;
      }
      (*(code *)(*pppuVar29)[2])();
      pbVar34 = pbVar44;
    }
    *(undefined8 *)&this->field_0x1d0 = 0;
    *(undefined8 *)&this->field_0x1d8 = 0;
    this->SceneTexturesUniformParams = (TRDGUniformBuffer<FSceneTextureUniformParameters> *)0x0;
    this->MobileSceneTexturesUniformParams =
         (TRDGUniformBuffer<FMobileSceneTextureUniformParameters> *)0x0;
    this->SubstratePublicGlobalUniformParams =
         (TRDGUniformBuffer<FSubstratePublicGlobalUniformParameters> *)0x0;
    *pbVar34 = false;
    FRDGExternalAccessQueue::Submit(&this->CurrentPassExternalAccessQueue,param_1);
    if (local_230 != '\0') {
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_240);
    }
    if (local_420 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_430);
    }
    if ((local_4f0 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_4f0 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_4f0 & 4) != 0) {
      FThreadStats::AddMessage(local_4f8,CycleScopeEnd);
    }
    local_4f0 = 0;
    if (bVar51) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// FindIterationInterface @ 1492eb220

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataInterfaceProxyRW * __thiscall
FNiagaraGpuComputeDispatch::FindIterationInterface
          (FNiagaraGpuComputeDispatch *this,FNiagaraComputeInstanceData *param_1,uint param_2)

{
  FNiagaraDataInterfaceProxyRW *pFVar1;
  
  pFVar1 = FNiagaraComputeInstanceData::FindIterationInterface(param_1,param_2);
  return pFVar1;
}

// FinishDispatches @ 1492eb240

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraGpuComputeDispatch::FinishDispatches(FNiagaraGpuComputeDispatch *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  int *piVar7;
  undefined1 local_res8 [8];
  undefined4 uStack_2c;
  TArrayView<unsigned_int_const_,int> local_28;
  
  bVar5 = IsInRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                         ,0x21f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = this->ProxiesPerStage[0].AllocatorInstance.Data;
  iVar3 = this->ProxiesPerStage[0].ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if (this->ProxiesPerStage[0].ArrayNum != iVar3) {
      `TCheckedPointerIterator<FNiagaraSystemGpuComputeProxy_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar2) break;
    FNiagaraSystemGpuComputeProxy::ReleaseTicks
              (*(FNiagaraSystemGpuComputeProxy **)pFVar6,this->MaxTicksToFlush,
               (bool)this->field_0x1e2);
    pFVar6 = pFVar6 + 8;
  }
  pFVar6 = this->ProxiesPerStage[1].AllocatorInstance.Data;
  iVar3 = this->ProxiesPerStage[1].ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if (this->ProxiesPerStage[1].ArrayNum != iVar3) {
      `TCheckedPointerIterator<FNiagaraSystemGpuComputeProxy_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar2) break;
    FNiagaraSystemGpuComputeProxy::ReleaseTicks
              (*(FNiagaraSystemGpuComputeProxy **)pFVar6,this->MaxTicksToFlush,
               (bool)this->field_0x1e2);
    pFVar6 = pFVar6 + 8;
  }
  pFVar6 = this->ProxiesPerStage[2].AllocatorInstance.Data;
  iVar3 = this->ProxiesPerStage[2].ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if (this->ProxiesPerStage[2].ArrayNum != iVar3) {
      `TCheckedPointerIterator<FNiagaraSystemGpuComputeProxy_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar2) break;
    FNiagaraSystemGpuComputeProxy::ReleaseTicks
              (*(FNiagaraSystemGpuComputeProxy **)pFVar6,this->MaxTicksToFlush,
               (bool)this->field_0x1e2);
    pFVar6 = pFVar6 + 8;
  }
  if (this->DispatchListPerStage != (FNiagaraGpuDispatchList *)&this->GpuDebugReadbackInfos) {
    piVar7 = &this->DispatchListPerStage[0].DispatchGroups.ArrayMax;
    do {
      DestructItems<FNiagaraGpuDispatchGroup,int>
                ((FNiagaraGpuDispatchGroup *)
                 (((TArray<FNiagaraGpuDispatchGroup,TSizedDefaultAllocator<32>_> *)(piVar7 + -3))->
                 AllocatorInstance).Data,piVar7[-1]);
      piVar7[-1] = 0;
      if (*piVar7 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)(piVar7 + -3),0,piVar7);
      }
      if (0 < piVar7[-5]) {
        local_28.DataPtr = *(uint **)(piVar7 + -7);
        local_28._12_4_ = uStack_2c;
        local_28.ArrayNum = piVar7[-5];
        FNiagaraGPUInstanceCountManager::FreeEntryArray
                  ((FNiagaraGPUInstanceCountManager *)&this->field_0x48,&local_28);
        piVar7[-5] = 0;
        if (piVar7[-4] != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,(ForAnyElementType *)(piVar7 + -7),0,piVar7 + -4);
        }
      }
      puVar1 = (undefined1 *)(piVar7 + 1);
      piVar7 = piVar7 + 8;
    } while ((TArray<FNiagaraGpuComputeDispatch::FDebugReadbackInfo,TSizedDefaultAllocator<32>_> *)
             puVar1 != &this->GpuDebugReadbackInfos);
  }
  return;
}

// FlushAndWait_GameThread @ 1492eb430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::FlushAndWait_GameThread(FNiagaraGpuComputeDispatch *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_d8 [32];
  TArrayView<FRenderCommandPipe_*_const,int> local_b8;
  FRenderCommandPipe *local_a8 [2];
  code *local_98 [2];
  undefined **local_88;
  FNiagaraGpuComputeDispatch *pFStack_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  FNiagaraGpuComputeDispatch *pFStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  FSyncScope local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                       ,0x173,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_b8.ArrayNum = 1;
  local_a8[0] = &UE::RenderCommandPipe::SkeletalMesh;
  local_b8.DataPtr = local_a8;
  UE::RenderCommandPipe::FSyncScope::FSyncScope(&local_28,&local_b8);
  local_70 = (undefined ***)0x0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::FlushAndWait_GameThread'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraGpuComputeDispatch::FlushAndWait_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_80 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraGpuComputeDispatch::FlushAndWait_GameThread_::__l2::TSTR_NiagaraFlushPendingTicks373>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_58 = local_88;
    pFStack_50 = pFStack_80;
    local_48 = local_78;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FNiagaraGpuComputeDispatch::FlushAndWait_GameThread'::__l2::TSTR_NiagaraFlushPendingTicks373>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar3);
    uVar5 = (ulonglong)local_38;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_68 + 0x10);
        if (local_40 != (undefined ***)0x0) {
          pppuVar4 = local_40;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar4 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar4 = local_70;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  FlushRenderingCommands();
  UE::RenderCommandPipe::FSyncScope::~FSyncScope(&local_28);
  return;
}

// FlushPendingTicks_GameThread @ 1492eb9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::FlushPendingTicks_GameThread(FNiagaraGpuComputeDispatch *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_d8 [32];
  TArrayView<FRenderCommandPipe_*_const,int> local_b8;
  FRenderCommandPipe *local_a8 [2];
  code *local_98 [2];
  undefined **local_88;
  FNiagaraGpuComputeDispatch *pFStack_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  FNiagaraGpuComputeDispatch *pFStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  FSyncScope local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                       ,0x166,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_b8.ArrayNum = 1;
  local_a8[0] = &UE::RenderCommandPipe::SkeletalMesh;
  local_b8.DataPtr = local_a8;
  UE::RenderCommandPipe::FSyncScope::FSyncScope(&local_28,&local_b8);
  local_70 = (undefined ***)0x0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::FlushPendingTicks_GameThread'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraGpuComputeDispatch::FlushPendingTicks_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_80 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraGpuComputeDispatch::FlushPendingTicks_GameThread_::__l2::TSTR_NiagaraFlushPendingTicks360>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_58 = local_88;
    pFStack_50 = pFStack_80;
    local_48 = local_78;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FNiagaraGpuComputeDispatch::FlushPendingTicks_GameThread'::__l2::TSTR_NiagaraFlushPendingTicks360>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar3);
    uVar5 = (ulonglong)local_38;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_68 + 0x10);
        if (local_40 != (undefined ***)0x0) {
          pppuVar4 = local_40;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar4 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar4 = local_70;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  UE::RenderCommandPipe::FSyncScope::~FSyncScope(&local_28);
  return;
}

// GenerateSortKeys @ 1492ec4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::GenerateSortKeys
          (FNiagaraGpuComputeDispatch *this,FRHICommandListImmediate *param_1,int param_2,
          int param_3,EGPUSortFlags param_4,FRHIUnorderedAccessView *param_5,
          FRHIUnorderedAccessView *param_6)

{
  FShader *pFVar1;
  code *pcVar2;
  int iVar3;
  FGlobalShaderMap *pFVar4;
  FRWBuffer *pFVar5;
  FString *pFVar6;
  FRHIBreadcrumbAllocator *this_00;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,FString>_> *pTVar7;
  FShaderParametersMetadata *pFVar8;
  FRHIComputeShader *pFVar9;
  FRHIBatchedShaderUnbinds *pFVar10;
  float *pfVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool bVar14;
  FName *pFVar15;
  uint uVar16;
  FName *pFVar17;
  TShaderRefBase<FNiagaraSortKeyGenCS,FShaderMapPointerTable> *this_01;
  FName *pFVar18;
  undefined1 auStackY_388 [32];
  undefined1 local_358;
  undefined1 local_357 [3];
  TShaderPermutationDomain<FNiagaraSortKeyGenCS::FEnableCulling,FNiagaraSortKeyGenCS::FSortUsingMaxPrecision,FNiagaraSortKeyGenCS::FUseWaveOps>
  local_354;
  TShaderPermutationDomain<FNiagaraSortKeyGenCS::FEnableCulling,FNiagaraSortKeyGenCS::FSortUsingMaxPrecision,FNiagaraSortKeyGenCS::FUseWaveOps>
  local_350;
  uint local_34c;
  int local_348;
  uint local_344;
  FName *local_340;
  FNiagaraGpuComputeDispatch *local_338;
  FName *local_330;
  TIntVector3<int>_u_0 local_328;
  FNiagaraEmptyUAVPoolScopedAccess local_318 [4];
  FRHIUnorderedAccessView **local_2f8;
  int iStack_2f0;
  undefined4 uStack_2ec;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2e8;
  FRHIUnorderedAccessView **local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  FKeyGenInfo local_2c8;
  FRHIBreadcrumbScope local_2a8;
  char local_298;
  TArrayView<FRHIUnorderedAccessView_*_const,int> local_288;
  FString local_278;
  TShaderRefBase<FNiagaraSortKeyGenCS,FShaderMapPointerTable> local_268;
  TShaderRefBase<FNiagaraSortKeyGenCS,FShaderMapPointerTable> local_258;
  TArrayView<FRHIUnorderedAccessView_*_const,int> local_248;
  uint uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  FName local_218;
  FName FStack_210;
  FName local_208;
  FName FStack_200;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  uint local_1e8;
  uint local_1e4;
  int local_1e0;
  uint local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  uint local_1bc;
  uint local_1b8;
  uint local_1b4;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  float local_198 [48];
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  float local_c8;
  float local_c4;
  FName local_b8;
  FName FStack_b0;
  FName local_a8;
  FName FStack_a0;
  float local_98;
  float local_94;
  float local_90;
  FRHIUnorderedAccessView *local_78;
  FRHIUnorderedAccessView *local_70;
  FRHIUnorderedAccessView *local_68;
  FRHIUnorderedAccessView *local_58;
  FRHIUnorderedAccessView *local_50;
  FRHIUnorderedAccessView *local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_388;
  bVar14 = (bool)((byte)(param_4 >> 1) & 1);
  local_34c = param_2;
  local_338 = this;
  FGPUSortManager::FKeyGenInfo::FKeyGenInfo(&local_2c8,param_3,bVar14);
  local_354.Tail.Tail.DimensionValue =
       FNiagaraSortKeyGenCS::UseWaveOps(*(EShaderPlatform *)&this->field_0x30);
  local_354.DimensionValue = false;
  local_350.DimensionValue = true;
  local_354.Tail.DimensionValue = bVar14;
  local_350.Tail.DimensionValue = bVar14;
  local_350.Tail.Tail.DimensionValue = local_354.Tail.Tail.DimensionValue;
  pFVar4 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&this->field_0x34]);
  TShaderMapRef<FNiagaraSortKeyGenCS>::TShaderMapRef<FNiagaraSortKeyGenCS>
            ((TShaderMapRef<FNiagaraSortKeyGenCS> *)&local_258,pFVar4,&local_354);
  pFVar4 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&this->field_0x34]);
  TShaderMapRef<FNiagaraSortKeyGenCS>::TShaderMapRef<FNiagaraSortKeyGenCS>
            ((TShaderMapRef<FNiagaraSortKeyGenCS> *)&local_268,pFVar4,&local_350);
  pFVar5 = FNiagaraGPUInstanceCountManager::AcquireCulledCountsBuffer
                     ((FNiagaraGPUInstanceCountManager *)&this->field_0x48,param_1);
  pfVar11 = local_198 + 2;
  local_218.ComparisonIndex.Value = 0;
  local_218.Number = 0;
  FStack_210.ComparisonIndex.Value = 0;
  FStack_210.Number = 0;
  local_208.ComparisonIndex.Value = 0;
  local_208.Number = 0;
  FStack_200.ComparisonIndex.Value = 0;
  FStack_200.Number = 0;
  lVar13 = 0xc;
  do {
    pfVar11[-2] = 0.0;
    pfVar11[-1] = 0.0;
    *pfVar11 = 0.0;
    pfVar11[1] = 1.0;
    pfVar11 = pfVar11 + 4;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  local_68 = (FRHIUnorderedAccessView *)0x0;
  local_1b4 = local_2c8.SortKeyParams.field0_0x0._s_0.X;
  local_70 = param_6;
  local_50 = param_6;
  iVar3 = 2;
  local_1b0 = local_2c8.SortKeyParams.field0_0x0._s_0.Y;
  local_1ac = local_2c8.SortKeyParams.field0_0x0._s_0.Z;
  local_b8 = ___xmm_3f800000000000000000000000000000;
  FStack_b0 = _UNK_150689648;
  local_a8 = ___xmm_3f800000000000000000000000000000;
  FStack_a0 = _UNK_150689648;
  local_78 = param_5;
  local_58 = param_5;
  local_348 = 2;
  if (pFVar5 == (FRWBuffer *)0x0) {
    FNiagaraEmptyUAVPoolScopedAccess::FNiagaraEmptyUAVPoolScopedAccess
              (local_318,*(FNiagaraEmptyUAVPool **)&this->field_0x40);
    local_68 = FNiagaraEmptyUAVPool::GetEmptyUAVFromPool
                         (*(FNiagaraEmptyUAVPool **)&this->field_0x40,(FRHICommandList *)param_1,
                          PF_R32_UINT,Buffer);
    FNiagaraEmptyUAVPoolScopedAccess::~FNiagaraEmptyUAVPoolScopedAccess(local_318);
  }
  else {
    local_68 = (pFVar5->UAV).Reference;
    iVar3 = 3;
    local_48 = (pFVar5->UAV).Reference;
    local_348 = 3;
  }
  local_2f8 = &local_58;
  local_288._12_4_ = uStack_2ec;
  local_288.ArrayNum = iVar3;
  iStack_2f0 = iVar3;
  local_288.DataPtr = local_2f8;
  FRHIComputeCommandList::BeginUAVOverlap((FRHIComputeCommandList *)param_1,&local_288);
  local_344 = (this->SimulationsToSort).ArrayNum;
  uVar12 = (ulonglong)(int)local_344;
  pFVar15 = (FName *)(this->SimulationsToSort).AllocatorInstance.Data;
  pFVar18 = pFVar15 + 0x4e;
  pFVar17 = pFVar15 + uVar12 * 0x54;
  local_330 = pFVar17;
  do {
    local_340 = pFVar15;
    if ((this->SimulationsToSort).ArrayNum != (int)uVar12) {
      local_358 = 0;
      `TCheckedPointerIterator<FNiagaraGPUSortInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_358);
    }
    if (pFVar15 == pFVar17) {
      local_2d8 = &local_58;
      iStack_2d0 = local_348;
      local_248._12_4_ = uStack_2cc;
      local_248.ArrayNum = local_348;
      local_248.DataPtr = local_2d8;
      FRHIComputeCommandList::EndUAVOverlap((FRHIComputeCommandList *)param_1,&local_248);
      return;
    }
    if (pFVar18[3].Number == param_2) {
      pFVar6 = ::FName::ToString(pFVar15,&local_278);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_228 = 0;
        uStack_224 = 0;
        ::Desc._12_8_ = ZEXT48(uStack_22c);
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_GenerateSortKey;
        ::Desc._padding_ = (longlong)u_Owner__s;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._0_4_ = 0x96a;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(``FNiagaraGpuComputeDispatch::GenerateSortKeys'::__l19::<lambda_1>::
               operator()<FString>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      uVar12 = 0;
      this_00 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
      pTVar7 = FRHIBreadcrumbAllocator::
               Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,FString>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,FString>_const_&,FString_&>
                         (this_00,this_00,&::Desc,pFVar6);
      FRHIBreadcrumbScope::FRHIBreadcrumbScope
                (&local_2a8,(FRHIComputeCommandList *)param_1,(FRHIBreadcrumbNode *)pTVar7);
      local_298 = '\x01';
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
      local_218 = pFVar18[-0x4b];
      FStack_210 = pFVar18[-0x4a];
      local_208 = pFVar18[-0x49];
      FStack_200 = pFVar18[-0x46];
      local_1f8 = pFVar18[-0x48].ComparisonIndex.Value;
      local_1f4 = pFVar18[-0x48].Number;
      local_1f0 = pFVar18[-0x47].ComparisonIndex.Value;
      local_1ec = pFVar18[-0x4d].ComparisonIndex.Value;
      local_1e8 = pFVar18[-0x45].ComparisonIndex.Value;
      local_1e4 = pFVar18[-0x45].Number;
      local_1e0 = pFVar18[4].ComparisonIndex.Value << ((byte)local_2c8.ElementKeyShift & 0x1f);
      local_1dc = pFVar18[3].ComparisonIndex.Value;
      local_1d8 = (float)(double)pFVar18[-0x44];
      local_1d4 = (float)(double)pFVar18[-0x43];
      local_1d0 = (float)(double)pFVar18[-0x42];
      local_1c4 = (float)(double)pFVar18[-0x40];
      local_1c8 = (float)(double)pFVar18[-0x41];
      local_1c0 = (float)(double)pFVar18[-0x3f];
      local_1bc = (uint)(byte)pFVar18[-0x4d].Number;
      local_1b8 = pFVar18[-0x4c].ComparisonIndex.Value;
      local_1a8 = pFVar18[-0x3e].Number;
      local_1a4 = pFVar18[-0x3d].ComparisonIndex.Value;
      local_1a0 = pFVar18[-0x3d].Number;
      local_d8 = pFVar18[-0x3c].Number;
      local_d4 = pFVar18[-0x3c].ComparisonIndex.Value;
      local_d0 = pFVar18[-0x3b].Number;
      local_cc = pFVar18[-0x3b].ComparisonIndex.Value;
      local_c8 = (float)pFVar18[-0x33].ComparisonIndex.Value;
      local_c8 = local_c8 * local_c8;
      local_c4 = (float)pFVar18[-0x33].Number * (float)pFVar18[-0x33].Number;
      local_b8 = pFVar18[-0x32];
      FStack_b0 = pFVar18[-0x31];
      pFVar15 = pFVar18 + -0x2e;
      local_a8.Number = (uint)(float)(double)pFVar18[-0x39];
      local_a8.ComparisonIndex.Value = (uint)(float)(double)pFVar18[-0x3a];
      FStack_a0.Number = (uint)(float)(double)pFVar18[-0x37];
      FStack_a0.ComparisonIndex.Value = (uint)(float)(double)pFVar18[-0x38];
      local_94 = (float)(double)pFVar18[-0x35];
      local_19c = 0;
      local_90 = (float)(double)pFVar18[-0x34];
      local_98 = (float)(double)pFVar18[-0x36];
      uVar16 = (pFVar18->ComparisonIndex).Value;
      while( true ) {
        if ((pFVar18->ComparisonIndex).Value != uVar16) {
          local_357[0] = 0;
          `TCheckedPointerIterator<UE::Math::TPlane<double>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_357);
          uVar12 = (ulonglong)local_19c;
        }
        if (pFVar15 + -2 == pFVar18 + ((longlong)(int)uVar16 + -0xc) * 4) break;
        local_198[uVar12 * 4] = (float)(double)pFVar15[-2];
        local_198[(ulonglong)local_19c * 4 + 1] = (float)(double)pFVar15[-1];
        local_198[(ulonglong)local_19c * 4 + 2] = (float)(double)*pFVar15;
        local_198[(ulonglong)local_19c * 4 + 3] = (float)(double)pFVar15[1];
        local_19c = local_19c + 1;
        uVar12 = (ulonglong)local_19c;
        pFVar15 = pFVar15 + 4;
      }
      iVar3 = pFVar18[-0x4d].ComparisonIndex.Value + 0x3f;
      uVar16 = (int)((iVar3 >> 0x1f & 0x3fU) + iVar3) >> 6;
      this_01 = &local_268;
      if ((char)pFVar18[-0x3e].ComparisonIndex.Value == '\0') {
        this_01 = &local_258;
      }
      pFVar8 = FNiagaraSortKeyGenCS::FParameters::FTypeInfo::GetStructMetadata();
      local_328._s_0.Y = 1;
      local_328._s_0.Z = 1;
      local_328._s_0.X = uVar16;
      FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_328._s_0);
      pFVar9 = TShaderRefBase<FNiagaraSortKeyGenCS,FShaderMapPointerTable>::GetComputeShader
                         (this_01);
      SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar9);
      local_2e8.ShaderMap = this_01->ShaderMap;
      pFVar1 = (FShader *)this_01->ShaderContent;
      local_2e8.ShaderContent = pFVar1;
      ValidateShaderParameters(&local_2e8,pFVar8,&local_218);
      ::SetShaderParameters
                ((FRHIComputeCommandList *)param_1,pFVar9,(FShaderParameterBindings *)pFVar1,pFVar8,
                 &local_218);
      FRHIComputeCommandList::DispatchComputeShader((FRHIComputeCommandList *)param_1,uVar16,1,1);
      pFVar9 = TShaderRefBase<FNiagaraSortKeyGenCS,FShaderMapPointerTable>::GetComputeShader
                         (this_01);
      if (GRHIGlobals.NeedsShaderUnbinds != false) {
        pFVar10 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
        if (((pFVar1->Bindings).RootParameterBufferIndex != 0xffff) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                                ,0xb3,
                                L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
           bVar14)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UnsetShaderUAVs(pFVar10,(FShaderParameterBindings *)pFVar1);
        FRHIComputeCommandList::SetBatchedShaderUnbinds
                  ((FRHIComputeCommandList *)param_1,pFVar9,pFVar10);
        pFVar15 = local_340;
        pFVar17 = local_330;
        this = local_338;
        param_2 = local_34c;
        if (local_298 == '\0') goto LAB_1492ecbd2;
      }
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_2a8);
      pFVar15 = local_340;
      pFVar17 = local_330;
      this = local_338;
      param_2 = local_34c;
    }
LAB_1492ecbd2:
    uVar12 = (ulonglong)local_344;
    pFVar15 = pFVar15 + 0x54;
    pFVar18 = pFVar18 + 0x54;
  } while( true );
}

// GetAsyncGpuTraceHelper @ 1492ed550

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNiagaraAsyncGpuTraceHelper * __thiscall
FNiagaraGpuComputeDispatch::GetAsyncGpuTraceHelper(FNiagaraGpuComputeDispatch *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraAsyncGpuTraceHelper *pFVar3;
  
  if ((this->AsyncGpuTraceHelper).Ptr != (FNiagaraAsyncGpuTraceHelper *)0x0) {
    return (this->AsyncGpuTraceHelper).Ptr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("AsyncGpuTraceHelper.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                     ,0x9a2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraAsyncGpuTraceHelper *)(*pcVar1)();
    return pFVar3;
  }
  return (this->AsyncGpuTraceHelper).Ptr;
}

// GetGPUProfiler @ 1492efaa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNiagaraGPUProfilerInterface * __thiscall
FNiagaraGpuComputeDispatch::GetGPUProfiler(FNiagaraGpuComputeDispatch *this)

{
  return (FNiagaraGPUProfilerInterface *)(this->GPUProfilerPtr).Ptr;
}

// GetGPUSortManager @ 1492efdd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FGPUSortManager * __thiscall
FNiagaraGpuComputeDispatch::GetGPUSortManager(FNiagaraGpuComputeDispatch *this)

{
  return (this->GPUSortManager).Reference;
}

// GetGlobalDistanceFieldData @ 1492efde0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FGlobalDistanceFieldParameterData * __thiscall
FNiagaraGpuComputeDispatch::GetGlobalDistanceFieldData(FNiagaraGpuComputeDispatch *this)

{
  FGlobalDistanceFieldParameterData *pFVar1;
  
  pFVar1 = &(this->CachedGDFData).GDFParameterData;
  if ((this->CachedGDFData).bValidForPass == false) {
    pFVar1 = (FGlobalDistanceFieldParameterData *)0x0;
  }
  return pFVar1;
}

// GetInterface @ 1492f0040

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FFXSystemInterface * __thiscall
FNiagaraGpuComputeDispatch::GetInterface(FNiagaraGpuComputeDispatch *this,FName *param_1)

{
  FNiagaraGpuComputeDispatch *pFVar1;
  
  pFVar1 = (FNiagaraGpuComputeDispatch *)0x0;
  if (*param_1 == Name) {
    pFVar1 = this;
  }
  return (FFXSystemInterface *)pFVar1;
}

// MultiGPUResourceModified @ 1492f8fe0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::MultiGPUResourceModified
          (FNiagaraGpuComputeDispatch *this,FRDGBuilder *param_1,FRHIBuffer *param_2,bool param_3,
          bool param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001492f8ffa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x128))(this,param_1->_padding_);
  return;
}

// MultiGPUResourceModified @ 1492f9010

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::MultiGPUResourceModified
          (FNiagaraGpuComputeDispatch *this,FRDGBuilder *param_1,FRHITexture *param_2,bool param_3,
          bool param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001492f902a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x120))(this,param_1->_padding_);
  return;
}

// MultiGPUResourceModified @ 1492f9040

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::MultiGPUResourceModified
          (FNiagaraGpuComputeDispatch *this,FRHICommandList *param_1,FRHIBuffer *param_2,
          bool param_3,bool param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FCrossGPUTransferFence *pFVar7;
  FCrossGPUTransferFence *pFVar8;
  uint uVar9;
  TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  
  if ((this->bCrossGPUTransferEnabled == false) || (!param_4)) {
    return;
  }
  if ((this->bCrossGPUTransferEnabled == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bCrossGPUTransferEnabled",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                         ,0xa84,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_2 != (FRHIBuffer *)0x0) {
    uVar1 = *(uint *)&param_1->field_0x29c;
    uVar12 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    uVar2 = 0;
    bVar5 = uVar12 != 0;
    if (bVar5) {
      for (; (uVar12 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    while (bVar5) {
      uVar9 = 1 << ((byte)uVar2 & 0x1f);
      if ((uVar1 & uVar9) == 0) {
        if ((this->OptimizedCrossGPUTransferMask & uVar9) == 0) {
          pTVar10 = &this->CrossGPUTransferBuffers;
        }
        else {
          if (this->OptimizedCrossGPUTransferBuffers[uVar2].ArrayNum == 0) {
            pFVar7 = ::operator_new(0x10);
            pFVar8 = (FCrossGPUTransferFence *)0x0;
            if (pFVar7 != (FCrossGPUTransferFence *)0x0) {
              pFVar7->SignalGPUIndex = 0;
              pFVar7->WaitGPUIndex = 0;
              pFVar7->SyncPoint = (void *)0x0;
              pFVar8 = pFVar7;
            }
            this->OptimizedCrossGPUFences[uVar2] = pFVar8;
          }
          pTVar10 = this->OptimizedCrossGPUTransferBuffers + uVar2;
        }
        iVar6 = pTVar10->ArrayNum;
        iVar3 = 0;
        if (uVar1 != 0) {
          for (; (uVar1 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
          }
        }
        iVar13 = 0x20;
        if (uVar1 != 0) {
          iVar13 = iVar3;
        }
        if (iVar6 == pTVar10->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x848,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
          pTVar10->ArrayNum = iVar6 + 1;
          pFVar11 = (pTVar10->AllocatorInstance).Data;
          *(undefined8 *)(pFVar11 + (longlong)iVar6 * 0x48) = 0;
          pFVar11 = pFVar11 + (longlong)iVar6 * 0x48;
        }
        else {
          pTVar10->ArrayNum = iVar6 + 1;
          pFVar11 = (pTVar10->AllocatorInstance).Data;
          *(undefined8 *)(pFVar11 + (longlong)iVar6 * 0x48) = 0;
          pFVar11 = pFVar11 + (longlong)iVar6 * 0x48;
        }
        *(FRHIBuffer **)(pFVar11 + 8) = param_2;
        FRHIResource::AddRef((FRHIResource *)param_2);
        *(undefined8 *)(pFVar11 + 0x40) = 0;
        *(undefined8 *)(pFVar11 + 0x38) = 0;
        *(undefined2 *)(pFVar11 + 0x30) = 0;
        *(uint *)(pFVar11 + 0x2c) = uVar2;
        *(int *)(pFVar11 + 0x28) = iVar13;
        *(undefined8 *)(pFVar11 + 0x20) = 0;
        *(undefined8 *)(pFVar11 + 0x18) = 0;
        *(undefined8 *)(pFVar11 + 0x10) = 0;
      }
      uVar12 = uVar12 & ~uVar9;
      uVar2 = 0;
      bVar5 = uVar12 != 0;
      if (bVar5) {
        for (; (uVar12 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
    }
  }
  return;
}

// MultiGPUResourceModified @ 1492f9060

/* WARNING: Removing unreachable block (ram,0x0001492f90bf) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::MultiGPUResourceModified
          (FNiagaraGpuComputeDispatch *this,FRHICommandList *param_1,FRHITexture *param_2,
          bool param_3,bool param_4)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  FCrossGPUTransferFence *pFVar7;
  FCrossGPUTransferFence *pFVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  
  if ((this->bCrossGPUTransferEnabled != false) && (param_4)) {
    uVar2 = *(uint *)&param_1->field_0x29c;
    uVar10 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    uVar4 = 0;
    bVar13 = uVar10 != 0;
    if (bVar13) {
      for (; (uVar10 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    while (bVar13) {
      uVar11 = 1 << ((byte)uVar4 & 0x1f);
      if ((uVar2 & uVar11) == 0) {
        if ((this->OptimizedCrossGPUTransferMask & uVar11) == 0) {
          iVar6 = 0;
          if (uVar2 != 0) {
            for (; (uVar2 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
            }
          }
          piVar1 = &(this->CrossGPUTransferBuffers).ArrayMax;
          iVar12 = 0x20;
          if (uVar2 != 0) {
            iVar12 = iVar6;
          }
          iVar6 = (this->CrossGPUTransferBuffers).ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x848,&(this->CrossGPUTransferBuffers).AllocatorInstance,piVar1);
          }
          pFVar3 = (this->CrossGPUTransferBuffers).AllocatorInstance.Data;
          lVar9 = (longlong)iVar6;
          (this->CrossGPUTransferBuffers).ArrayNum = iVar6 + 1;
          *(FRHITexture **)(pFVar3 + lVar9 * 0x48) = param_2;
          if (param_2 != (FRHITexture *)0x0) {
            FRHIResource::AddRef((FRHIResource *)param_2);
          }
          *(undefined8 *)(pFVar3 + lVar9 * 0x48 + 8) = 0;
          *(int *)(pFVar3 + lVar9 * 0x48 + 0x28) = iVar12;
          *(undefined8 *)(pFVar3 + lVar9 * 0x48 + 0x10) = 0;
          *(undefined8 *)(pFVar3 + lVar9 * 0x48 + 0x18) = 0;
          *(undefined8 *)(pFVar3 + lVar9 * 0x48 + 0x20) = 0;
          *(uint *)(pFVar3 + lVar9 * 0x48 + 0x2c) = uVar4;
          *(undefined2 *)(pFVar3 + lVar9 * 0x48 + 0x30) = 0;
          *(undefined8 *)(pFVar3 + lVar9 * 0x48 + 0x38) = 0;
          *(undefined8 *)(pFVar3 + lVar9 * 0x48 + 0x40) = 0;
          if ((param_2 == (FRHITexture *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InTexture",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                                  ,0xa4,L""), bVar13)) goto code_r0x0001492f92ca;
        }
        else {
          if (this->OptimizedCrossGPUTransferBuffers[uVar4].ArrayNum == 0) {
            pFVar7 = ::operator_new(0x10);
            pFVar8 = (FCrossGPUTransferFence *)0x0;
            if (pFVar7 != (FCrossGPUTransferFence *)0x0) {
              pFVar7->SignalGPUIndex = 0;
              pFVar7->WaitGPUIndex = 0;
              pFVar7->SyncPoint = (void *)0x0;
              pFVar8 = pFVar7;
            }
            this->OptimizedCrossGPUFences[uVar4] = pFVar8;
          }
          iVar6 = 0;
          if (uVar2 != 0) {
            for (; (uVar2 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
            }
          }
          piVar1 = &this->OptimizedCrossGPUTransferBuffers[uVar4].ArrayMax;
          iVar12 = 0x20;
          if (uVar2 != 0) {
            iVar12 = iVar6;
          }
          iVar6 = this->OptimizedCrossGPUTransferBuffers[uVar4].ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x848,&this->OptimizedCrossGPUTransferBuffers[uVar4].
                                      AllocatorInstance,piVar1);
          }
          lVar9 = (longlong)iVar6;
          this->OptimizedCrossGPUTransferBuffers[uVar4].ArrayNum = iVar6 + 1;
          pFVar3 = this->OptimizedCrossGPUTransferBuffers[uVar4].AllocatorInstance.Data;
          *(FRHITexture **)(pFVar3 + lVar9 * 0x48) = param_2;
          if (param_2 != (FRHITexture *)0x0) {
            FRHIResource::AddRef((FRHIResource *)param_2);
          }
          *(undefined8 *)(pFVar3 + lVar9 * 0x48 + 8) = 0;
          *(undefined8 *)(pFVar3 + lVar9 * 0x48 + 0x10) = 0;
          *(undefined8 *)(pFVar3 + lVar9 * 0x48 + 0x18) = 0;
          *(undefined8 *)(pFVar3 + lVar9 * 0x48 + 0x20) = 0;
          *(int *)(pFVar3 + lVar9 * 0x48 + 0x28) = iVar12;
          *(uint *)(pFVar3 + lVar9 * 0x48 + 0x2c) = uVar4;
          *(undefined2 *)(pFVar3 + lVar9 * 0x48 + 0x30) = 0;
          *(undefined8 *)(pFVar3 + lVar9 * 0x48 + 0x38) = 0;
          *(undefined8 *)(pFVar3 + lVar9 * 0x48 + 0x40) = 0;
          if ((param_2 == (FRHITexture *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InTexture",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                                  ,0xa4,L""), bVar13)) {
code_r0x0001492f92ca:
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
      }
      uVar10 = uVar10 & ~uVar11;
      uVar4 = 0;
      bVar13 = uVar10 != 0;
      if (bVar13) {
        for (; (uVar10 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
    }
  }
  return;
}

// OnMarkPendingKill @ 1492f9620

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNiagaraGpuComputeDispatch::OnMarkPendingKill(FNiagaraGpuComputeDispatch *this)

{
  FNiagaraWorldManager::OnComputeDispatchInterfaceDestroyed
            ((FNiagaraGpuComputeDispatchInterface *)this);
  this->field_0x18 = 1;
  return;
}

// PostInitViews @ 1492fad60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::PostInitViews
          (FNiagaraGpuComputeDispatch *this,FRDGBuilder *param_1,
          TStridedView<FSceneView_const_,int> *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  FSceneView *pFVar3;
  FRDGScope *this_00;
  ulonglong uVar4;
  FLLMScope local_res20 [2];
  FMemScope local_38 [2];
  TStridedView<FSceneView_const_,int> local_28;
  
  FLLMScope::FLLMScope(local_res20,Niagara,false,None,Default,true);
  FMemScope::FMemScope(local_38,Niagara,true);
  if ((param_3) && (0 < param_2->NumElements)) {
    pFVar3 = TStridedView<FSceneView_const_,int>::GetElementPtr(param_2,0);
    if ((pFVar3->bIsPlanarReflection == false) &&
       ((pFVar3->bIsSceneCapture == false && (pFVar3->bIsReflectionCapture == false)))) {
      bVar2 = FNiagaraUtilities::AllowGPUParticles();
      if (bVar2) {
        this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                            ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
        param_1->_padding_ = (longlong)this_00;
        uVar4 = (ulonglong)(this_00->Impl).Impl.TypeIndex;
        if (3 < uVar4) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
          ::__l2::Destructors[uVar4])(&this_00->Impl);
        (this_00->Impl).Impl._padding_ = (longlong)"Niagara";
        FCsvProfiler::BeginExclusiveStat("Niagara",(char *)0x0);
        (this_00->Impl).Impl.TypeIndex = '\x03';
        if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
          FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
          FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
        }
        local_28.FirstElementPtr = param_2->FirstElementPtr;
        local_28.BytesBetweenElements = param_2->BytesBetweenElements;
        local_28.NumElements = param_2->NumElements;
        ExecuteTicks(this,param_1,&local_28,PostInitViews);
        if (this_00 != (FRDGScope *)0x0) {
          if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
            FRDGScope::EndGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
            FRDGScope::EndCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
          }
          FRDGScope::ImmediateEnd(this_00,(FRDGScopeState *)param_1);
          *(uint *)&param_1->_padding_ = (uint)param_1->_padding_ & 0xfffffff7;
          param_1->_padding_ = *(longlong *)param_1->_padding_;
        }
      }
    }
  }
  FMemScope::~FMemScope(local_38);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// PostRenderOpaque @ 1492fb160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001492fbd87) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffd58 : 0x0001492fbd8b */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::PostRenderOpaque
          (FNiagaraGpuComputeDispatch *this,FRDGBuilder *param_1,
          TStridedView<FSceneView_const_,int> *param_2,FSceneUniformBuffer *param_3,bool param_4)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  FRHITexture *pFVar4;
  FRHITexture *pFVar5;
  FRDGPooledBuffer *pFVar6;
  FRDGPooledBuffer *pFVar7;
  FSceneViewFamily *pFVar8;
  TUniqueFunction<void___cdecl(void)> *pTVar9;
  code *pcVar10;
  undefined8 uVar11;
  double dVar12;
  longlong lVar13;
  float fVar14;
  bool bVar15;
  ERDGPassFlags EVar16;
  int iVar17;
  FSceneView *pFVar18;
  FGlobalDistanceFieldParameterData *pFVar19;
  TIntRect<int> *pTVar20;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar21;
  FScriptContainerElement *pFVar22;
  FSceneUniformBuffer *this_00;
  FShaderParametersMetadata *pFVar23;
  wchar_t *pwVar24;
  FRDGPass *pFVar25;
  FRDGEventName *this_01;
  undefined1 auStackY_3e8 [32];
  char local_3b8;
  FLLMScope local_3b4;
  FSceneUniformBuffer *local_3b0;
  FMemScope local_3a8;
  FNiagaraGpuComputeDispatch *local_3a0;
  longlong lStack_398;
  char local_390;
  undefined7 uStack_38f;
  FNiagaraGpuComputeDispatch *local_388;
  undefined1 uStack_380;
  undefined7 uStack_37f;
  FScriptContainerElement *local_378;
  char cStack_370;
  undefined7 uStack_36f;
  FRDGParameterStruct local_368;
  FRDGParameterStruct local_350;
  FNiagaraGpuComputeDispatch *local_338;
  FSceneView *pFStack_330;
  undefined8 uStack_328;
  FScriptContainerElement *pFStack_320;
  TStridedView<FSceneView_const_,int> local_318;
  TStridedView<FSceneView_const_,int> local_308;
  FRDGEventName local_2f8;
  FRDGEventName local_2e0;
  TIntRect<int> local_2c8;
  code *local_2b8;
  longlong local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 *local_290;
  FCachedDistanceFieldData local_288;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  local_3b0 = param_3;
  FLLMScope::FLLMScope(&local_3b4,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_3a8,Niagara,true);
  if ((((!param_4) || (param_2->NumElements < 1)) ||
      (pFVar18 = TStridedView<FSceneView_const_,int>::GetElementPtr(param_2,0),
      pFVar18->bIsPlanarReflection != false)) ||
     ((pFVar18->bIsSceneCapture != false ||
      (local_3b8 = '\x01', pFVar18->bIsReflectionCapture != false)))) {
    local_3b8 = '\0';
  }
  if (this->field_0x1e0 == '\0') {
    local_318.FirstElementPtr = param_2->FirstElementPtr;
    local_318.BytesBetweenElements = param_2->BytesBetweenElements;
    local_318.NumElements = param_2->NumElements;
    pFVar19 = UE::FXRenderingUtils::GetGlobalDistanceFieldParameterData(&local_318);
    if (pFVar19 == (FGlobalDistanceFieldParameterData *)0x0) {
      local_288._2_4_ = 0;
      local_288._6_2_ = 0;
      local_288.GDFParameterData.MipFactor = 0.0;
      local_288.GDFParameterData.MipTransition = 0.0;
      local_288.GDFParameterData.PageAtlasTexture = (FRHITexture *)0x0;
      local_288.CoverageAtlasTexture.Reference = (FRHITexture *)0x0;
      local_288.PageObjectGridBuffer.Reference = (FRDGPooledBuffer *)0x0;
      local_288.GDFParameterData.TranslatedCenterAndExtent[0].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.TranslatedCenterAndExtent[0].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.TranslatedCenterAndExtent[1].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.TranslatedCenterAndExtent[1].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.TranslatedCenterAndExtent[2].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.TranslatedCenterAndExtent[2].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.TranslatedCenterAndExtent[3].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.TranslatedCenterAndExtent[3].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.TranslatedCenterAndExtent[4].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.TranslatedCenterAndExtent[4].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.TranslatedCenterAndExtent[5].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.TranslatedCenterAndExtent[5].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.TranslatedWorldToUVAddAndMul[0].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.TranslatedWorldToUVAddAndMul[0].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.TranslatedWorldToUVAddAndMul[1].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.TranslatedWorldToUVAddAndMul[1].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.TranslatedWorldToUVAddAndMul[2].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.TranslatedWorldToUVAddAndMul[2].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.TranslatedWorldToUVAddAndMul[3].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.TranslatedWorldToUVAddAndMul[3].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.TranslatedWorldToUVAddAndMul[4].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.TranslatedWorldToUVAddAndMul[4].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.TranslatedWorldToUVAddAndMul[5].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.TranslatedWorldToUVAddAndMul[5].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.MipTranslatedWorldToUVScale[0].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.MipTranslatedWorldToUVScale[0].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.MipTranslatedWorldToUVScale[1].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.MipTranslatedWorldToUVScale[1].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.MipTranslatedWorldToUVScale[2].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.MipTranslatedWorldToUVScale[2].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.MipTranslatedWorldToUVScale[3].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.MipTranslatedWorldToUVScale[3].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.MipTranslatedWorldToUVScale[4].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.MipTranslatedWorldToUVScale[4].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.MipTranslatedWorldToUVScale[5].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.MipTranslatedWorldToUVScale[5].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.MipTranslatedWorldToUVBias[0].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.MipTranslatedWorldToUVBias[0].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.MipTranslatedWorldToUVBias[1].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.MipTranslatedWorldToUVBias[1].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.MipTranslatedWorldToUVBias[2].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.MipTranslatedWorldToUVBias[2].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.MipTranslatedWorldToUVBias[3].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.MipTranslatedWorldToUVBias[3].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.MipTranslatedWorldToUVBias[4].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.MipTranslatedWorldToUVBias[4].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.MipTranslatedWorldToUVBias[5].field0_0x0._0_8_ =
           ___xmm_3f800000000000000000000000000000;
      local_288.GDFParameterData.MipTranslatedWorldToUVBias[5].field0_0x0._8_8_ = _UNK_150689648;
      local_288.GDFParameterData.PageTableTexture = (FRHITexture *)0x0;
      local_288.GDFParameterData.MipTexture = (FRHITexture *)0x0;
      local_288.GDFParameterData.ClipmapSizeInPages = 0;
      local_288.GDFParameterData._436_4_ = 0;
      local_288.GDFParameterData.InvPageAtlasSize.field0_0x0._s_0.X = 0.0;
      local_288.GDFParameterData.InvPageAtlasSize.field0_0x0._s_0.Y = 0.0;
      local_288.GDFParameterData.InvPageAtlasSize.field0_0x0._s_0.Z = 0.0;
      local_288.GDFParameterData.InvCoverageAtlasSize.field0_0x0._s_0.X = 0.0;
      local_288.GDFParameterData.InvCoverageAtlasSize.field0_0x0._s_0.Y = 0.0;
      local_288.GDFParameterData.InvCoverageAtlasSize.field0_0x0._s_0.Z = 0.0;
      local_288.GDFParameterData.MaxPageNum = 0;
      local_288.GDFParameterData.GlobalDFResolution = 0.0;
      local_288.GDFParameterData.MaxDFAOConeDistance = 0.0;
      local_288.GDFParameterData.NumGlobalSDFClipmaps = 0;
      local_288.GDFParameterData._504_8_ = 0;
      local_288.bCacheValid = false;
      local_288.bValidForPass = false;
      local_288.PageAtlasTexture.Reference = (FRHITexture *)0x0;
      local_288.PageTableTexture.Reference = (FRHITexture *)0x0;
      local_288.MipTexture.Reference = (FRHITexture *)0x0;
      local_288.GDFParameterData.PageObjectGridBuffer.Reference = (FRDGPooledBuffer *)0x0;
      local_288.GDFParameterData.CoverageAtlasTexture = (FRHITexture *)pFVar19;
      memset(&local_288.GDFParameterData,0,0x200);
      FCachedDistanceFieldData::operator=(&this->CachedGDFData,&local_288);
      if (local_288.GDFParameterData.PageObjectGridBuffer.Reference != (FRDGPooledBuffer *)0x0) {
        plVar1 = &(local_288.GDFParameterData.PageObjectGridBuffer.Reference)->_padding_;
        LOCK();
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar13 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)(local_288.GDFParameterData.PageObjectGridBuffer.Reference)->_padding_)();
        }
      }
      if (local_288.MipTexture.Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)local_288.MipTexture.Reference);
      }
      if (local_288.PageTableTexture.Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)local_288.PageTableTexture.Reference);
      }
      if (local_288.PageObjectGridBuffer.Reference != (FRDGPooledBuffer *)0x0) {
        plVar1 = &(local_288.PageObjectGridBuffer.Reference)->_padding_;
        LOCK();
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar13 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)(local_288.PageObjectGridBuffer.Reference)->_padding_)();
        }
      }
      if (local_288.CoverageAtlasTexture.Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)local_288.CoverageAtlasTexture.Reference);
      }
      param_3 = local_3b0;
      if (local_288.PageAtlasTexture.Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)local_288.PageAtlasTexture.Reference);
        param_3 = local_3b0;
      }
    }
    else {
      (this->CachedGDFData).bCacheValid = true;
      pFVar4 = pFVar19->PageAtlasTexture;
      pFVar5 = (this->CachedGDFData).PageAtlasTexture.Reference;
      if (pFVar5 != pFVar4) {
        (this->CachedGDFData).PageAtlasTexture.Reference = pFVar4;
        if (pFVar4 != (FRHITexture *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar4);
        }
        if (pFVar5 != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar5);
        }
      }
      pFVar4 = pFVar19->CoverageAtlasTexture;
      pFVar5 = (this->CachedGDFData).CoverageAtlasTexture.Reference;
      if (pFVar5 != pFVar4) {
        (this->CachedGDFData).CoverageAtlasTexture.Reference = pFVar4;
        if (pFVar4 != (FRHITexture *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar4);
        }
        if (pFVar5 != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar5);
        }
      }
      pFVar6 = (pFVar19->PageObjectGridBuffer).Reference;
      pFVar7 = (this->CachedGDFData).PageObjectGridBuffer.Reference;
      if (pFVar7 != pFVar6) {
        (this->CachedGDFData).PageObjectGridBuffer.Reference = pFVar6;
        if (pFVar6 != (FRDGPooledBuffer *)0x0) {
          LOCK();
          *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
          UNLOCK();
        }
        if (pFVar7 != (FRDGPooledBuffer *)0x0) {
          plVar1 = &pFVar7->_padding_;
          LOCK();
          lVar13 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if (((int)lVar13 == 1) && (plVar1 != (longlong *)0x0)) {
            (**(code **)pFVar7->_padding_)();
          }
        }
      }
      pFVar4 = pFVar19->PageTableTexture;
      pFVar5 = (this->CachedGDFData).PageTableTexture.Reference;
      if (pFVar5 != pFVar4) {
        (this->CachedGDFData).PageTableTexture.Reference = pFVar4;
        if (pFVar4 != (FRHITexture *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar4);
        }
        if (pFVar5 != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar5);
        }
      }
      pFVar4 = pFVar19->MipTexture;
      pFVar5 = (this->CachedGDFData).MipTexture.Reference;
      if (pFVar5 != pFVar4) {
        (this->CachedGDFData).MipTexture.Reference = pFVar4;
        if (pFVar4 != (FRHITexture *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar4);
        }
        if (pFVar5 != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar5);
        }
      }
      uVar11 = *(undefined8 *)((longlong)&pFVar19->TranslatedCenterAndExtent[0].field0_0x0 + 8);
      *(undefined8 *)&(this->CachedGDFData).GDFParameterData.TranslatedCenterAndExtent[0].field0_0x0
           = *(undefined8 *)&pFVar19->TranslatedCenterAndExtent[0].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.TranslatedCenterAndExtent[0].field0_0x0 +
       8) = uVar11;
      uVar11 = *(undefined8 *)((longlong)&pFVar19->TranslatedCenterAndExtent[1].field0_0x0 + 8);
      *(undefined8 *)&(this->CachedGDFData).GDFParameterData.TranslatedCenterAndExtent[1].field0_0x0
           = *(undefined8 *)&pFVar19->TranslatedCenterAndExtent[1].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.TranslatedCenterAndExtent[1].field0_0x0 +
       8) = uVar11;
      uVar11 = *(undefined8 *)((longlong)&pFVar19->TranslatedCenterAndExtent[2].field0_0x0 + 8);
      *(undefined8 *)&(this->CachedGDFData).GDFParameterData.TranslatedCenterAndExtent[2].field0_0x0
           = *(undefined8 *)&pFVar19->TranslatedCenterAndExtent[2].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.TranslatedCenterAndExtent[2].field0_0x0 +
       8) = uVar11;
      uVar11 = *(undefined8 *)((longlong)&pFVar19->TranslatedCenterAndExtent[3].field0_0x0 + 8);
      *(undefined8 *)&(this->CachedGDFData).GDFParameterData.TranslatedCenterAndExtent[3].field0_0x0
           = *(undefined8 *)&pFVar19->TranslatedCenterAndExtent[3].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.TranslatedCenterAndExtent[3].field0_0x0 +
       8) = uVar11;
      uVar11 = *(undefined8 *)((longlong)&pFVar19->TranslatedCenterAndExtent[4].field0_0x0 + 8);
      *(undefined8 *)&(this->CachedGDFData).GDFParameterData.TranslatedCenterAndExtent[4].field0_0x0
           = *(undefined8 *)&pFVar19->TranslatedCenterAndExtent[4].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.TranslatedCenterAndExtent[4].field0_0x0 +
       8) = uVar11;
      uVar11 = *(undefined8 *)((longlong)&pFVar19->TranslatedCenterAndExtent[5].field0_0x0 + 8);
      *(undefined8 *)&(this->CachedGDFData).GDFParameterData.TranslatedCenterAndExtent[5].field0_0x0
           = *(undefined8 *)&pFVar19->TranslatedCenterAndExtent[5].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.TranslatedCenterAndExtent[5].field0_0x0 +
       8) = uVar11;
      uVar11 = *(undefined8 *)((longlong)&pFVar19->TranslatedWorldToUVAddAndMul[0].field0_0x0 + 8);
      *(undefined8 *)
       &(this->CachedGDFData).GDFParameterData.TranslatedWorldToUVAddAndMul[0].field0_0x0 =
           *(undefined8 *)&pFVar19->TranslatedWorldToUVAddAndMul[0].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.TranslatedWorldToUVAddAndMul[0].field0_0x0
       + 8) = uVar11;
      uVar11 = *(undefined8 *)((longlong)&pFVar19->TranslatedWorldToUVAddAndMul[1].field0_0x0 + 8);
      *(undefined8 *)
       &(this->CachedGDFData).GDFParameterData.TranslatedWorldToUVAddAndMul[1].field0_0x0 =
           *(undefined8 *)&pFVar19->TranslatedWorldToUVAddAndMul[1].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.TranslatedWorldToUVAddAndMul[1].field0_0x0
       + 8) = uVar11;
      uVar11 = *(undefined8 *)((longlong)&pFVar19->TranslatedWorldToUVAddAndMul[2].field0_0x0 + 8);
      *(undefined8 *)
       &(this->CachedGDFData).GDFParameterData.TranslatedWorldToUVAddAndMul[2].field0_0x0 =
           *(undefined8 *)&pFVar19->TranslatedWorldToUVAddAndMul[2].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.TranslatedWorldToUVAddAndMul[2].field0_0x0
       + 8) = uVar11;
      uVar11 = *(undefined8 *)((longlong)&pFVar19->TranslatedWorldToUVAddAndMul[3].field0_0x0 + 8);
      *(undefined8 *)
       &(this->CachedGDFData).GDFParameterData.TranslatedWorldToUVAddAndMul[3].field0_0x0 =
           *(undefined8 *)&pFVar19->TranslatedWorldToUVAddAndMul[3].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.TranslatedWorldToUVAddAndMul[3].field0_0x0
       + 8) = uVar11;
      uVar11 = *(undefined8 *)((longlong)&pFVar19->TranslatedWorldToUVAddAndMul[4].field0_0x0 + 8);
      *(undefined8 *)
       &(this->CachedGDFData).GDFParameterData.TranslatedWorldToUVAddAndMul[4].field0_0x0 =
           *(undefined8 *)&pFVar19->TranslatedWorldToUVAddAndMul[4].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.TranslatedWorldToUVAddAndMul[4].field0_0x0
       + 8) = uVar11;
      uVar11 = *(undefined8 *)((longlong)&pFVar19->TranslatedWorldToUVAddAndMul[5].field0_0x0 + 8);
      *(undefined8 *)
       &(this->CachedGDFData).GDFParameterData.TranslatedWorldToUVAddAndMul[5].field0_0x0 =
           *(undefined8 *)&pFVar19->TranslatedWorldToUVAddAndMul[5].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.TranslatedWorldToUVAddAndMul[5].field0_0x0
       + 8) = uVar11;
      uVar11 = *(undefined8 *)((longlong)&pFVar19->MipTranslatedWorldToUVScale[0].field0_0x0 + 8);
      *(undefined8 *)
       &(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVScale[0].field0_0x0 =
           *(undefined8 *)&pFVar19->MipTranslatedWorldToUVScale[0].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVScale[0].field0_0x0
       + 8) = uVar11;
      uVar11 = *(undefined8 *)((longlong)&pFVar19->MipTranslatedWorldToUVScale[1].field0_0x0 + 8);
      *(undefined8 *)
       &(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVScale[1].field0_0x0 =
           *(undefined8 *)&pFVar19->MipTranslatedWorldToUVScale[1].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVScale[1].field0_0x0
       + 8) = uVar11;
      uVar11 = *(undefined8 *)((longlong)&pFVar19->MipTranslatedWorldToUVScale[2].field0_0x0 + 8);
      *(undefined8 *)
       &(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVScale[2].field0_0x0 =
           *(undefined8 *)&pFVar19->MipTranslatedWorldToUVScale[2].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVScale[2].field0_0x0
       + 8) = uVar11;
      uVar11 = *(undefined8 *)((longlong)&pFVar19->MipTranslatedWorldToUVScale[3].field0_0x0 + 8);
      *(undefined8 *)
       &(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVScale[3].field0_0x0 =
           *(undefined8 *)&pFVar19->MipTranslatedWorldToUVScale[3].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVScale[3].field0_0x0
       + 8) = uVar11;
      uVar11 = *(undefined8 *)((longlong)&pFVar19->MipTranslatedWorldToUVScale[4].field0_0x0 + 8);
      *(undefined8 *)
       &(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVScale[4].field0_0x0 =
           *(undefined8 *)&pFVar19->MipTranslatedWorldToUVScale[4].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVScale[4].field0_0x0
       + 8) = uVar11;
      uVar11 = *(undefined8 *)((longlong)&pFVar19->MipTranslatedWorldToUVScale[5].field0_0x0 + 8);
      *(undefined8 *)
       &(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVScale[5].field0_0x0 =
           *(undefined8 *)&pFVar19->MipTranslatedWorldToUVScale[5].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVScale[5].field0_0x0
       + 8) = uVar11;
      uVar11 = *(undefined8 *)((longlong)&pFVar19->MipTranslatedWorldToUVBias[0].field0_0x0 + 8);
      *(undefined8 *)
       &(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVBias[0].field0_0x0 =
           *(undefined8 *)&pFVar19->MipTranslatedWorldToUVBias[0].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVBias[0].field0_0x0 +
       8) = uVar11;
      uVar11 = *(undefined8 *)((longlong)&pFVar19->MipTranslatedWorldToUVBias[1].field0_0x0 + 8);
      *(undefined8 *)
       &(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVBias[1].field0_0x0 =
           *(undefined8 *)&pFVar19->MipTranslatedWorldToUVBias[1].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVBias[1].field0_0x0 +
       8) = uVar11;
      uVar11 = *(undefined8 *)((longlong)&pFVar19->MipTranslatedWorldToUVBias[2].field0_0x0 + 8);
      *(undefined8 *)
       &(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVBias[2].field0_0x0 =
           *(undefined8 *)&pFVar19->MipTranslatedWorldToUVBias[2].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVBias[2].field0_0x0 +
       8) = uVar11;
      uVar11 = *(undefined8 *)((longlong)&pFVar19->MipTranslatedWorldToUVBias[3].field0_0x0 + 8);
      *(undefined8 *)
       &(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVBias[3].field0_0x0 =
           *(undefined8 *)&pFVar19->MipTranslatedWorldToUVBias[3].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVBias[3].field0_0x0 +
       8) = uVar11;
      uVar11 = *(undefined8 *)((longlong)&pFVar19->MipTranslatedWorldToUVBias[4].field0_0x0 + 8);
      *(undefined8 *)
       &(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVBias[4].field0_0x0 =
           *(undefined8 *)&pFVar19->MipTranslatedWorldToUVBias[4].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVBias[4].field0_0x0 +
       8) = uVar11;
      uVar11 = *(undefined8 *)((longlong)&pFVar19->MipTranslatedWorldToUVBias[5].field0_0x0 + 8);
      *(undefined8 *)
       &(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVBias[5].field0_0x0 =
           *(undefined8 *)&pFVar19->MipTranslatedWorldToUVBias[5].field0_0x0;
      *(undefined8 *)
       ((longlong)&(this->CachedGDFData).GDFParameterData.MipTranslatedWorldToUVBias[5].field0_0x0 +
       8) = uVar11;
      (this->CachedGDFData).GDFParameterData.MipFactor = pFVar19->MipFactor;
      (this->CachedGDFData).GDFParameterData.MipTransition = pFVar19->MipTransition;
      (this->CachedGDFData).GDFParameterData.PageAtlasTexture = pFVar19->PageAtlasTexture;
      (this->CachedGDFData).GDFParameterData.CoverageAtlasTexture = pFVar19->CoverageAtlasTexture;
      pFVar6 = (pFVar19->PageObjectGridBuffer).Reference;
      pFVar7 = (this->CachedGDFData).GDFParameterData.PageObjectGridBuffer.Reference;
      if (pFVar7 != pFVar6) {
        (this->CachedGDFData).GDFParameterData.PageObjectGridBuffer.Reference = pFVar6;
        if (pFVar6 != (FRDGPooledBuffer *)0x0) {
          LOCK();
          *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
          UNLOCK();
        }
        if (pFVar7 != (FRDGPooledBuffer *)0x0) {
          plVar1 = &pFVar7->_padding_;
          LOCK();
          lVar13 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if (((int)lVar13 == 1) && (plVar1 != (longlong *)0x0)) {
            (**(code **)pFVar7->_padding_)();
          }
        }
      }
      (this->CachedGDFData).GDFParameterData.PageTableTexture = pFVar19->PageTableTexture;
      (this->CachedGDFData).GDFParameterData.MipTexture = pFVar19->MipTexture;
      (this->CachedGDFData).GDFParameterData.ClipmapSizeInPages = pFVar19->ClipmapSizeInPages;
      dVar12 = (pFVar19->InvPageAtlasSize).field0_0x0._s_0.Y;
      (this->CachedGDFData).GDFParameterData.InvPageAtlasSize.field0_0x0._s_0.X =
           (pFVar19->InvPageAtlasSize).field0_0x0._s_0.X;
      (this->CachedGDFData).GDFParameterData.InvPageAtlasSize.field0_0x0._s_0.Y = dVar12;
      (this->CachedGDFData).GDFParameterData.InvPageAtlasSize.field0_0x0._s_0.Z =
           (pFVar19->InvPageAtlasSize).field0_0x0._s_0.Z;
      dVar12 = (pFVar19->InvCoverageAtlasSize).field0_0x0._s_0.Y;
      (this->CachedGDFData).GDFParameterData.InvCoverageAtlasSize.field0_0x0._s_0.X =
           (pFVar19->InvCoverageAtlasSize).field0_0x0._s_0.X;
      (this->CachedGDFData).GDFParameterData.InvCoverageAtlasSize.field0_0x0._s_0.Y = dVar12;
      (this->CachedGDFData).GDFParameterData.InvCoverageAtlasSize.field0_0x0._s_0.Z =
           (pFVar19->InvCoverageAtlasSize).field0_0x0._s_0.Z;
      (this->CachedGDFData).GDFParameterData.MaxPageNum = pFVar19->MaxPageNum;
      (this->CachedGDFData).GDFParameterData.GlobalDFResolution = pFVar19->GlobalDFResolution;
      (this->CachedGDFData).GDFParameterData.MaxDFAOConeDistance = pFVar19->MaxDFAOConeDistance;
      (this->CachedGDFData).GDFParameterData.NumGlobalSDFClipmaps = pFVar19->NumGlobalSDFClipmaps;
      param_3 = local_3b0;
    }
  }
  bVar3 = (this->CachedGDFData).bValidForPass;
  (this->CachedGDFData).bValidForPass = (this->CachedGDFData).bCacheValid;
  if (local_3b8 == '\0') {
    pTVar21 = UE::FXRenderingUtils::GetSceneUniformBuffer(param_1,param_3);
  }
  else {
    if (0 < param_2->NumElements) {
      pFVar18 = TStridedView<FSceneView_const_,int>::GetElementPtr(param_2,0);
      pFVar8 = pFVar18->Family;
      if (pFVar8 != (FSceneViewFamily *)0x0) {
        dVar12 = (pFVar8->Time).WorldTimeSeconds;
        (this->CachedViewInitOptions).GameTime.RealTimeSeconds = (pFVar8->Time).RealTimeSeconds;
        (this->CachedViewInitOptions).GameTime.WorldTimeSeconds = dVar12;
        fVar14 = (pFVar8->Time).DeltaWorldTimeSeconds;
        (this->CachedViewInitOptions).GameTime.DeltaRealTimeSeconds =
             (pFVar8->Time).DeltaRealTimeSeconds;
        (this->CachedViewInitOptions).GameTime.DeltaWorldTimeSeconds = fVar14;
      }
      pFVar18 = TStridedView<FSceneView_const_,int>::GetElementPtr(param_2,0);
      pTVar20 = UE::FXRenderingUtils::GetRawViewRectUnsafe(&local_2c8,pFVar18);
      (this->CachedViewInitOptions).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
           (pTVar20->field0_0x0)._s_0.Min.field0_0x0;
      (this->CachedViewInitOptions).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
           (pTVar20->field0_0x0)._s_0.Max.field0_0x0;
      pFVar18 = TStridedView<FSceneView_const_,int>::GetElementPtr(param_2,0);
      dVar12 = (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ViewOrigin.field0_0x0._s_0.X =
           (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ViewOrigin.field0_0x0._s_0.Y = dVar12;
      (this->CachedViewInitOptions).ViewOrigin.field0_0x0._s_0.Z =
           (double)(pFVar18->SceneViewInitOptions)._padding_;
      pFVar18 = TStridedView<FSceneView_const_,int>::GetElementPtr(param_2,0);
      dVar12 = (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ViewRotationMatrix.M[0][0] =
           (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ViewRotationMatrix.M[0][1] = dVar12;
      dVar12 = (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ViewRotationMatrix.M[0][2] =
           (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ViewRotationMatrix.M[0][3] = dVar12;
      dVar12 = (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ViewRotationMatrix.M[1][0] =
           (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ViewRotationMatrix.M[1][1] = dVar12;
      dVar12 = (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ViewRotationMatrix.M[1][2] =
           (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ViewRotationMatrix.M[1][3] = dVar12;
      dVar12 = (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ViewRotationMatrix.M[2][0] =
           (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ViewRotationMatrix.M[2][1] = dVar12;
      dVar12 = (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ViewRotationMatrix.M[2][2] =
           (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ViewRotationMatrix.M[2][3] = dVar12;
      dVar12 = (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ViewRotationMatrix.M[3][0] =
           (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ViewRotationMatrix.M[3][1] = dVar12;
      dVar12 = (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ViewRotationMatrix.M[3][2] =
           (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ViewRotationMatrix.M[3][3] = dVar12;
      pFVar18 = TStridedView<FSceneView_const_,int>::GetElementPtr(param_2,0);
      dVar12 = (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ProjectionMatrix.M[0][0] =
           (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ProjectionMatrix.M[0][1] = dVar12;
      dVar12 = (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ProjectionMatrix.M[0][2] =
           (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ProjectionMatrix.M[0][3] = dVar12;
      dVar12 = (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ProjectionMatrix.M[1][0] =
           (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ProjectionMatrix.M[1][1] = dVar12;
      dVar12 = (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ProjectionMatrix.M[1][2] =
           (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ProjectionMatrix.M[1][3] = dVar12;
      dVar12 = (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ProjectionMatrix.M[2][0] =
           (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ProjectionMatrix.M[2][1] = dVar12;
      dVar12 = (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ProjectionMatrix.M[2][2] =
           (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ProjectionMatrix.M[2][3] = dVar12;
      dVar12 = (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ProjectionMatrix.M[3][0] =
           (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ProjectionMatrix.M[3][1] = dVar12;
      dVar12 = (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ProjectionMatrix.M[3][2] =
           (double)(pFVar18->SceneViewInitOptions)._padding_;
      (this->CachedViewInitOptions).ProjectionMatrix.M[3][3] = dVar12;
    }
    pTVar21 = UE::FXRenderingUtils::GetSceneUniformBuffer(param_1,param_3);
    bVar15 = FNiagaraUtilities::AllowGPUParticles();
    if (bVar15) {
      pFVar22 = (FScriptContainerElement *)MakeParameters(param_1,pTVar21);
      pFStack_330 = param_2->FirstElementPtr;
      uStack_328._0_4_ = param_2->BytesBetweenElements;
      uStack_328._4_4_ = param_2->NumElements;
      local_338 = this;
      pFStack_320 = pFVar22;
      this_00 = (FSceneUniformBuffer *)
                FRDGEventName::FRDGEventName(&local_2f8,1,L"AsyncGpuTraceHelper::PostRenderOpaque");
      local_3b0 = this_00;
      pFVar23 = FNiagaraGpuComputeDispatchParameters::FTypeInfo::GetStructMetadata();
      FRDGUserValidation::ValidateAddPass
                (&param_1->UserValidation,pFVar22,pFVar23,(FRDGEventName *)this_00,NeverCull|Compute
                );
      FRDGBuilder::FlushAccessModeQueue(param_1);
      pwVar24 = FRDGEventName::GetTCHAR((FRDGEventName *)this_00);
      EVar16 = FRDGBuilder::OverridePassFlags(param_1,pwVar24,NeverCull|Compute);
      pFVar25 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1a8,8);
      local_368.Contents = (uchar *)pFVar22;
      if (((pFVar23->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLayoutInitialized()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                              ,0x17c,L""), bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_368.Layout.Reference = (pFVar23->Layout).Reference;
      if (local_368.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_368.Layout.Reference);
      }
      local_368.Metadata = pFVar23;
      FRDGPass::FRDGPass(pFVar25,(FRDGEventName *)local_3b0,&local_368,EVar16,Inline);
      pFVar25->_padding_ =
           (longlong)
           &TRDGLambdaPass<FNiagaraGpuComputeDispatchParameters,`FNiagaraGpuComputeDispatch::PostRenderOpaque'::`19'::<lambda_1>_>
            ::_vftable_;
      pFVar25[1]._padding_ = (longlong)local_338;
      pFVar25[1].FullPathIfDebug.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)pFStack_330;
      pFVar25[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar22;
      pFVar25[1].FullPathIfDebug.Data.ArrayNum = (undefined4)uStack_328;
      pFVar25[1].FullPathIfDebug.Data.ArrayMax = uStack_328._4_4_;
      pFVar25[1].Name.EventFormat = (wchar_t *)pFStack_320;
      FRDGBuilder::ClobberPassOutputs(param_1,pFVar25);
      iVar17 = (param_1->Passes).Array.ArrayNum;
      piVar2 = &(param_1->Passes).Array.ArrayMax;
      if (iVar17 == *piVar2) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                           (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar2);
      }
      (param_1->Passes).Array.ArrayNum = iVar17 + 1;
      (param_1->Passes).Array.AllocatorInstance.Data[iVar17] = pFVar25;
      (pFVar25->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
      FRDGBuilder::SetupParameterPass(param_1,pFVar25);
      if (local_2f8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_2f8.FormattedEventName.Data.AllocatorInstance.Data);
      }
      local_308.FirstElementPtr = param_2->FirstElementPtr;
      local_308.BytesBetweenElements = param_2->BytesBetweenElements;
      local_308.NumElements = param_2->NumElements;
      ExecuteTicks(this,param_1,&local_308,Last);
    }
  }
  pFVar22 = (FScriptContainerElement *)MakeParameters(param_1,pTVar21);
  uStack_380 = this->bRequiresReadback;
  cStack_370 = local_3b8;
  local_388 = this;
  local_378 = pFVar22;
  this_01 = FRDGEventName::FRDGEventName(&local_2e0,1,L"Niagara::PostRenderFinish");
  pFVar23 = FNiagaraGpuComputeDispatchParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass
            (&param_1->UserValidation,pFVar22,pFVar23,this_01,NeverCull|Compute);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar24 = FRDGEventName::GetTCHAR(this_01);
  EVar16 = FRDGBuilder::OverridePassFlags(param_1,pwVar24,NeverCull|Compute);
  pFVar25 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1a8,8);
  local_350.Contents = (uchar *)pFVar22;
  if (((pFVar23->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLayoutInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                          ,0x17c,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_350.Layout.Reference = (pFVar23->Layout).Reference;
  if (local_350.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_350.Layout.Reference);
  }
  local_350.Metadata = pFVar23;
  FRDGPass::FRDGPass(pFVar25,this_01,&local_350,EVar16,Inline);
  pFVar25->_padding_ =
       (longlong)
       &TRDGLambdaPass<FNiagaraGpuComputeDispatchParameters,`FNiagaraGpuComputeDispatch::PostRenderOpaque'::`20'::<lambda_2>_>
        ::_vftable_;
  pFVar25[1]._padding_ = (longlong)local_388;
  pFVar25[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)CONCAT71(uStack_37f,uStack_380);
  pFVar25[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar22;
  *(FScriptContainerElement **)&pFVar25[1].FullPathIfDebug.Data.ArrayNum = local_378;
  pFVar25[1].Name.EventFormat = (wchar_t *)CONCAT71(uStack_36f,cStack_370);
  FRDGBuilder::ClobberPassOutputs(param_1,pFVar25);
  iVar17 = (param_1->Passes).Array.ArrayNum;
  piVar2 = &(param_1->Passes).Array.ArrayMax;
  if (iVar17 == *piVar2) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar2);
  }
  (param_1->Passes).Array.ArrayNum = iVar17 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar17] = pFVar25;
  (pFVar25->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,pFVar25);
  if (local_2e0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.FormattedEventName.Data.AllocatorInstance.Data);
  }
  lStack_398 = param_1->_padding_;
  local_2b8 = (code *)0x0;
  local_390 = local_3b8;
  local_3a0 = this;
  local_290 = FMemory::Malloc(0x20,8);
  *local_290 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::PostRenderOpaque'::`2'::<lambda_3>,1,1>
                ::_vftable_;
  local_290[1] = local_3a0;
  local_290[2] = lStack_398;
  local_290[3] = CONCAT71(uStack_38f,local_390);
  if (local_290 + 1 != (undefined8 *)0x0) {
    local_2b8 = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraGpuComputeDispatch::PostRenderOpaque'::__l2::<lambda_3>,void>
                ::Call;
  }
  if ((local_2b8 == (code *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Callback",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphBuilder.h"
                          ,0xc4,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar17 = (param_1->PostExecuteCallbacks).ArrayNum;
  piVar2 = &(param_1->PostExecuteCallbacks).ArrayMax;
  if (iVar17 == *piVar2) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TUniqueFunction<void___cdecl(void)>_>_>
                       (0x1030,&(param_1->PostExecuteCallbacks).AllocatorInstance,piVar2);
  }
  (param_1->PostExecuteCallbacks).ArrayNum = iVar17 + 1;
  pTVar9 = (param_1->PostExecuteCallbacks).AllocatorInstance.Data;
  *(code **)(pTVar9 + iVar17) = local_2b8;
  *(undefined8 **)&pTVar9[iVar17].field_0x28 = local_290;
  local_290 = (undefined8 *)0x0;
  *(longlong *)&pTVar9[iVar17].field_0x10 = local_2a8;
  *(undefined8 *)(&pTVar9[iVar17].field_0x10 + 8) = uStack_2a0;
  *(undefined8 *)&pTVar9[iVar17].field_0x20 = local_298;
  if ((*(longlong *)(pTVar9 + iVar17) == 0) && (local_2b8 != (code *)0x0)) {
    (**(code **)(local_2a8 + 0x10))();
  }
  this->bRequiresReadback = false;
  TMulticastDelegate<void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy> *)
             &this->field_0x228,param_1);
  bVar15 = FNiagaraGpuComputeDispatchLocal::CsvStatsEnabled();
  if (bVar15) {
    if (__CsvProfilerStat2228 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("TotalDispatchesThisFrame",_GCsvCategory_NiagaraGpuCompute.Index);
      __CsvProfilerStat2228 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("TotalDispatchesThisFrame",_GCsvCategory_NiagaraGpuCompute.Index,
               this->TotalDispatchesThisFrame,Set);
  }
  (this->CachedGDFData).bValidForPass = bVar3;
  FMemScope::~FMemScope(&local_3a8);
  FLLMScope::~FLLMScope(&local_3b4);
  return;
}

// PostSimulateInterface @ 1492fc000

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::PostSimulateInterface
          (FNiagaraGpuComputeDispatch *this,FRDGBuilder *param_1,FNiagaraGPUSystemTick *param_2,
          FNiagaraComputeInstanceData *param_3,FNiagaraSimStageData *param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  uint uVar9;
  TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> local_48;
  FRDGBuilder *local_38;
  FNiagaraGpuComputeDispatch *local_30;
  ulong64 local_28;
  byte local_20;
  
  iVar1 = (param_3->DataInterfaceProxies).ArrayNum;
  if (iVar1 != 0) {
    FNiagaraShaderScript::GetShader(param_3->Context->GPUScript_RT,&local_48,0);
    FVar7 = ((local_48.ShaderContent)->DataInterfaceParameters).AllocatorInstance;
    if (((ulonglong)FVar7 & 1) != 0) {
      FVar7 = (ForAnyElementType)
              ((longlong)
               &((local_48.ShaderContent)->DataInterfaceParameters).AllocatorInstance.field_0x0 +
              ((longlong)FVar7 >> 0x18));
    }
    iVar2 = ((local_48.ShaderContent)->DataInterfaceParameters).ArrayNum;
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_28 = param_2->SystemInstanceID;
    uVar9 = 0;
    local_20 = param_4->bSetDataToRender;
    if (0 < iVar1) {
      lVar8 = 0;
      local_38 = param_1;
      local_30 = this;
      do {
        uVar6 = 0;
        if ((int)uVar9 < iVar2) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(int *)FVar7 != -1) {
          uVar6 = 0;
          if ((int)uVar9 < (param_3->DataInterfaceProxies).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          plVar3 = *(longlong **)
                    ((param_3->DataInterfaceProxies).AllocatorInstance.Data + lVar8 * 8);
          (**(code **)(*plVar3 + 0x30))(plVar3,&local_38);
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 1;
        FVar7 = (ForAnyElementType)((longlong)FVar7 + 0x18);
      } while (lVar8 < iVar1);
    }
  }
  return;
}

// PostStageInterface @ 1492fc1c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::PostStageInterface
          (FNiagaraGpuComputeDispatch *this,FRDGBuilder *param_1,FNiagaraGPUSystemTick *param_2,
          FNiagaraComputeInstanceData *param_3,FNiagaraSimStageData *param_4,
          TSet<FNiagaraDataInterfaceProxy_*,DefaultKeyFuncs<FNiagaraDataInterfaceProxy_*,0>,FDefaultSetAllocator>
          *param_5)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  FNiagaraDataInterfaceProxy *local_res20;
  longlong *local_78;
  TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> local_70;
  FRDGBuilder *local_60;
  FNiagaraGpuComputeDispatch *local_58;
  FNiagaraGPUSystemTick *local_50;
  FNiagaraComputeInstanceData *local_48;
  FNiagaraSimStageData *local_40;
  longlong *local_38;
  
  iVar1 = (param_3->DataInterfaceProxies).ArrayNum;
  if (iVar1 != 0) {
    FNiagaraShaderScript::GetShader(param_3->Context->GPUScript_RT,&local_70,0);
    FVar9 = ((local_70.ShaderContent)->DataInterfaceParameters).AllocatorInstance;
    if (((ulonglong)FVar9 & 1) != 0) {
      FVar9 = (ForAnyElementType)
              ((longlong)
               &((local_70.ShaderContent)->DataInterfaceParameters).AllocatorInstance.field_0x0 +
              ((longlong)FVar9 >> 0x18));
    }
    iVar2 = ((local_70.ShaderContent)->DataInterfaceParameters).ArrayNum;
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar10 = 0;
    local_40 = param_4;
    local_38 = (longlong *)0x0;
    if (0 < iVar1) {
      lVar8 = 0;
      local_60 = param_1;
      local_58 = this;
      local_50 = param_2;
      local_48 = param_3;
      do {
        uVar7 = 0;
        if ((int)uVar10 < iVar2) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(int *)FVar9 != -1) {
          uVar7 = 0;
          if ((int)uVar10 < (param_3->DataInterfaceProxies).ArrayNum) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          plVar3 = *(longlong **)
                    ((param_3->DataInterfaceProxies).AllocatorInstance.Data + lVar8 * 8);
          local_78 = plVar3;
          local_38 = plVar3;
          (**(code **)(*plVar3 + 0x28))(plVar3,&local_60);
          cVar6 = (**(code **)(*plVar3 + 0x48))(plVar3);
          if (cVar6 != '\0') {
            TSet<FNiagaraDataInterfaceProxy_*,DefaultKeyFuncs<FNiagaraDataInterfaceProxy_*,0>,FDefaultSetAllocator>
            ::Emplace<FNiagaraDataInterfaceProxy_*_const_&>(param_5,&local_res20,(bool *)&local_78);
          }
        }
        uVar10 = uVar10 + 1;
        lVar8 = lVar8 + 1;
        FVar9 = (ForAnyElementType)((longlong)FVar9 + 0x18);
      } while (lVar8 < iVar1);
    }
  }
  return;
}

// PreInitViews @ 1492fc3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::PreInitViews
          (FNiagaraGpuComputeDispatch *this,FRDGBuilder *param_1,bool param_2,
          TArrayView<FSceneViewFamily_const_*,int> *param_3,FSceneViewFamily *param_4)

{
  int *piVar1;
  TArray<TSharedPtr<FNiagaraDataChannelDataProxy,1>,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FRHIGPUMask FVar4;
  FSceneViewFamily *pFVar5;
  FRHICommandListBase *this_01;
  FNiagaraGPUProfiler *this_02;
  FNiagaraGPUSortInfo *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  FRDGBuilder *pFVar10;
  bool bVar11;
  bool bVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDispatchSetup_RT> FVar14;
  FRDGScope *pFVar15;
  FSceneViewFamily **ppFVar16;
  char *pcVar17;
  void *pvVar18;
  FNiagaraGpuDispatchList *pFVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  FName FVar25;
  FRDGBuilder *pFVar26;
  FName *pFVar27;
  undefined1 auStackY_638 [32];
  undefined1 local_5d6;
  undefined1 local_5d5 [5];
  char *local_5d0;
  FRDGBuilder *local_5c8;
  FName local_5c0;
  uint local_5b8;
  FLLMScope local_5b4;
  FColor_u_0 local_5b0;
  uint local_5ac;
  int local_5a8 [4];
  FRHITransitionInfo *local_598;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  FName local_588;
  FSceneViewFamily **local_580;
  FRDGScope *local_578;
  FName local_570;
  FSceneViewFamily **local_560;
  FRHIUnorderedAccessView *local_558;
  FMemScope local_550;
  TStridedView<FSceneView_const_,int> local_548;
  FRHITransitionInfo local_538;
  FRHITransitionInfo local_508;
  FName local_4d8 [2];
  TArrayView<FRHITransitionInfo_const_,int> local_4c8;
  TArrayView<FRHITransitionInfo_const_,int> local_4b8;
  FString local_4a8;
  FCachedDistanceFieldData local_498;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_638;
  FVar14 = StatPtr_STAT_NiagaraGPUDispatchSetup_RT;
  local_5c8 = param_1;
  local_598 = (FRHITransitionInfo *)param_3;
  if (StatPtr_STAT_NiagaraGPUDispatchSetup_RT ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDispatchSetup_RT>)0x0) {
    pFVar13 = ::FName::FName(local_4d8,"STAT_NiagaraGPUDispatchSetup_RT");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDispatchSetup_RT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDispatchSetup_RT,
                        *pFVar13,L"GPU Dispatch Setup [RT]","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar8 = false;
  bVar9 = false;
  local_570.ComparisonIndex.Value = 0;
  local_570.Number = 0;
  FVar25 = *(FName *)FVar14;
  bVar11 = false;
  bVar12 = false;
  if ((FVar25.ComparisonIndex.Value.Value == 0) && (FVar25.Number == 0)) {
LAB_1492fc541:
    bVar9 = bVar12;
    bVar8 = bVar11;
    bVar11 = false;
    local_5c0 = local_570;
    FVar25 = local_570;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_5b0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_5b0._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar11 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_588.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_588.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_588,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                   ,0x761);
        bVar8 = true;
        bVar9 = true;
        bVar11 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1492fc541;
    local_5c0 = FVar25;
    FThreadStats::AddMessage(FVar25,CycleScopeStart);
    bVar11 = true;
  }
  pFVar15 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                      ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
  param_1->_padding_ = (longlong)pFVar15;
  uVar22 = (ulonglong)(pFVar15->Impl).Impl.TypeIndex;
  local_578 = pFVar15;
  if ((3 < uVar22) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[uVar22])(&pFVar15->Impl);
  (pFVar15->Impl).Impl._padding_ = (longlong)"Niagara";
  FCsvProfiler::BeginExclusiveStat("Niagara",(char *)0x0);
  (pFVar15->Impl).Impl.TypeIndex = '\x03';
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    FRDGScope::BeginCPU(local_578,(FRHIComputeCommandList *)param_1->_padding_,false);
    FRDGScope::BeginGPU(local_578,(FRHIComputeCommandList *)param_1->_padding_);
  }
  FLLMScope::FLLMScope(&local_5b4,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_550,Niagara,true);
  TMulticastDelegate<void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy> *)
             &this->field_0x1e8,param_1);
  if (param_4 == (FSceneViewFamily *)0x0) {
    local_5d0 = &this->field_0x1e1;
    bVar12 = true;
    *local_5d0 = 1;
  }
  else {
    ppFVar16 = TArrayView<FSceneViewFamily_const_*,int>::operator[](param_3,0);
    local_5d0 = &this->field_0x1e1;
    *local_5d0 = param_4 == *ppFVar16;
    uVar20 = param_3->ArrayNum - 1;
    uVar21 = 0;
    if ((int)uVar20 < param_3->ArrayNum) {
      uVar21 = ~uVar20 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    bVar12 = param_4 == param_3->DataPtr[(longlong)param_3->ArrayNum + -1];
  }
  this->field_0x1e2 = bVar12;
  this->bRequiresReadback = false;
  this->bCrossGPUTransferEnabled = 1 < GNumExplicitGPUsForRendering;
  if (this->field_0x1e1 != '\0') {
    this->OptimizedCrossGPUTransferMask = 0;
  }
  if (((param_3->ArrayNum < 2) || (this->field_0x1e1 == '\0')) ||
     (GNiagaraOptimizedCrossGPUTransferEnabled == 0)) {
    pcVar17 = &this->field_0x1e1;
    pFVar26 = param_1;
  }
  else {
    ppFVar16 = TArrayView<FSceneViewFamily_const_*,int>::operator[](param_3,0);
    pFVar5 = *ppFVar16;
    if (((pFVar5->Views).ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_5ac = *(uint *)(*(longlong *)(pFVar5->Views).AllocatorInstance.Data + 0xde0);
    local_580 = param_3->DataPtr;
    local_560 = local_580 + param_3->ArrayNum;
    uVar21 = local_5ac;
    if (local_580 == local_560) {
      pcVar17 = &this->field_0x1e1;
    }
    else {
      do {
        pFVar5 = *local_580;
        if (((pFVar5->Views).ArrayNum < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar23 = (pFVar5->Views).AllocatorInstance.Data;
        uVar20 = *(uint *)(*(longlong *)pFVar23 + 0xde0);
        local_5b8 = uVar21 | uVar20;
        pcVar17 = local_5d0;
        pFVar26 = local_5c8;
        if ((uVar20 & uVar20 - 1) != 0) goto LAB_1492fc87c;
        iVar3 = (pFVar5->Views).ArrayNum;
        pFVar2 = pFVar23 + (longlong)iVar3 * 8;
        while( true ) {
          if ((pFVar5->Views).ArrayNum != iVar3) {
            local_5d6 = 0;
            `TCheckedPointerIterator<FSceneView_const_*_const,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_5d6);
          }
          pcVar17 = local_5d0;
          if (pFVar23 == pFVar2) break;
          pFVar26 = local_5c8;
          if (*(uint *)(*(longlong *)pFVar23 + 0xde0) != uVar20) goto LAB_1492fc87c;
          pFVar23 = pFVar23 + 8;
        }
        local_580 = local_580 + 1;
        uVar21 = local_5b8;
      } while (local_580 != local_560);
    }
    uVar20 = local_5ac;
    if (GVirtualMGPU != 0) {
      uVar20 = 1;
      uVar21 = 1;
    }
    this->OptimizedCrossGPUTransferMask = ~uVar20 & uVar21;
    pFVar26 = local_5c8;
  }
LAB_1492fc87c:
  if ((1 < *(int *)&local_598->field1_0x8) && (*pcVar17 != '\0')) {
    this_01 = (FRHICommandListBase *)pFVar26->_padding_;
    bVar12 = IsInRenderingThread();
    if ((!bVar12) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInRenderingThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                            ,0x29c,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (0 < *(int *)&this->field_0x54) {
      FVar4.GPUMask = (this_01->PersistentState).CurrentGPUMask.GPUMask;
      FRHIComputeCommandList::SetGPUMask
                ((FRHIComputeCommandList *)this_01,
                 (FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
      uVar21 = *(uint *)&this->field_0x54;
      if (*(uint *)&this->field_0xe4 == uVar21) {
        local_538.field1_0x8 = *(FRHITransitionInfo_u_8 *)&this->field_0xf0;
        uStack_590 = 1;
        local_4c8._12_4_ = uStack_58c;
        local_4c8.ArrayNum = 1;
        local_538._padding_._0_4_ = 0xffffffff;
        local_538._padding_._4_2_ = 0xffff;
        local_538.Type = UAV;
        local_538.AccessBefore = CopySrc|SRVMask;
        local_538.AccessAfter = UAVCompute;
        local_538.Flags = None;
        local_538.CommitInfo.bIsSet = false;
        local_598 = &local_538;
        local_4c8.DataPtr = &local_538;
        FRHIComputeCommandList::Transition((FRHIComputeCommandList *)this_01,&local_4c8,None);
      }
      else {
        *(uint *)&this->field_0xe4 = uVar21;
        FRWBuffer::Initialize
                  ((FRWBuffer *)&this->field_0xe8,this_01,L"NiagaraGPUInstanceCounts",4,uVar21,
                   PF_R32_UINT,UAVCompute,SourceCopy|Static,(FResourceArrayUploadInterface *)0x0);
      }
      local_558 = *(FRHIUnorderedAccessView **)&this->field_0xf0;
      local_5a8[0] = *(int *)&this->field_0xe4;
      CopyUIntBufferToTargets
                ((FRHICommandList *)this_01,*(Type *)&this->field_0x4c,
                 *(FRHIShaderResourceView **)&this->field_0x78,&local_558,local_5a8,0,1);
      local_508.field1_0x8 = *(FRHITransitionInfo_u_8 *)&this->field_0xf0;
      local_598 = &local_508;
      uStack_590 = 1;
      local_4b8._12_4_ = uStack_58c;
      local_4b8.ArrayNum = 1;
      local_508._padding_._0_4_ = 0xffffffff;
      local_508._padding_._4_2_ = 0xffff;
      local_508.Type = UAV;
      local_508.AccessBefore = UAVCompute;
      local_508.AccessAfter = CopySrc|SRVMask;
      local_508.Flags = None;
      local_508.CommitInfo.bIsSet = false;
      local_4b8.DataPtr = local_598;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)this_01,&local_4b8,None);
      FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)this_01,FVar4);
    }
  }
  FNiagaraEmptyUAVPool::Tick(*(FNiagaraEmptyUAVPool **)&this->field_0x40);
  FNiagaraGpuReadbackManager::TickInternal(*(FNiagaraGpuReadbackManager **)&this->field_0x38,false);
  if (this->field_0x1e0 == '\0') {
    local_498.GDFParameterData.PageTableTexture = (FRHITexture *)0x0;
    local_498.GDFParameterData.MipTexture = (FRHITexture *)0x0;
    local_498._2_4_ = 0;
    local_498.GDFParameterData.MipFactor = 0.0;
    local_498.GDFParameterData.MipTransition = 0.0;
    local_498.GDFParameterData.PageAtlasTexture = (FRHITexture *)0x0;
    local_498.CoverageAtlasTexture.Reference = (FRHITexture *)0x0;
    local_498.PageObjectGridBuffer.Reference = (FRDGPooledBuffer *)0x0;
    local_498.GDFParameterData.TranslatedCenterAndExtent[0].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.TranslatedCenterAndExtent[0].field0_0x0._8_8_ = _UNK_150689648;
    local_498.GDFParameterData.TranslatedCenterAndExtent[1].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.TranslatedCenterAndExtent[1].field0_0x0._8_8_ = _UNK_150689648;
    local_498.GDFParameterData.TranslatedCenterAndExtent[2].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.TranslatedCenterAndExtent[2].field0_0x0._8_8_ = _UNK_150689648;
    local_498.GDFParameterData.TranslatedCenterAndExtent[3].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.TranslatedCenterAndExtent[3].field0_0x0._8_8_ = _UNK_150689648;
    local_498.GDFParameterData.TranslatedCenterAndExtent[4].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.TranslatedCenterAndExtent[4].field0_0x0._8_8_ = _UNK_150689648;
    local_498.GDFParameterData.TranslatedCenterAndExtent[5].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.TranslatedCenterAndExtent[5].field0_0x0._8_8_ = _UNK_150689648;
    local_498.GDFParameterData.TranslatedWorldToUVAddAndMul[0].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.TranslatedWorldToUVAddAndMul[0].field0_0x0._8_8_ = _UNK_150689648;
    local_498.GDFParameterData.TranslatedWorldToUVAddAndMul[1].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.TranslatedWorldToUVAddAndMul[1].field0_0x0._8_8_ = _UNK_150689648;
    local_498.GDFParameterData.TranslatedWorldToUVAddAndMul[2].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.TranslatedWorldToUVAddAndMul[2].field0_0x0._8_8_ = _UNK_150689648;
    local_498.GDFParameterData.TranslatedWorldToUVAddAndMul[3].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.TranslatedWorldToUVAddAndMul[3].field0_0x0._8_8_ = _UNK_150689648;
    local_498.GDFParameterData.TranslatedWorldToUVAddAndMul[4].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.TranslatedWorldToUVAddAndMul[4].field0_0x0._8_8_ = _UNK_150689648;
    local_498.GDFParameterData.TranslatedWorldToUVAddAndMul[5].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.TranslatedWorldToUVAddAndMul[5].field0_0x0._8_8_ = _UNK_150689648;
    local_498.GDFParameterData.MipTranslatedWorldToUVScale[0].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.MipTranslatedWorldToUVScale[0].field0_0x0._8_8_ = _UNK_150689648;
    local_498.GDFParameterData.MipTranslatedWorldToUVScale[1].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.MipTranslatedWorldToUVScale[1].field0_0x0._8_8_ = _UNK_150689648;
    local_498.GDFParameterData.MipTranslatedWorldToUVScale[2].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.MipTranslatedWorldToUVScale[2].field0_0x0._8_8_ = _UNK_150689648;
    local_498.GDFParameterData.MipTranslatedWorldToUVScale[3].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.MipTranslatedWorldToUVScale[3].field0_0x0._8_8_ = _UNK_150689648;
    local_498.GDFParameterData.MipTranslatedWorldToUVScale[4].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.MipTranslatedWorldToUVScale[4].field0_0x0._8_8_ = _UNK_150689648;
    local_498.GDFParameterData.MipTranslatedWorldToUVScale[5].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.MipTranslatedWorldToUVScale[5].field0_0x0._8_8_ = _UNK_150689648;
    local_498.GDFParameterData.MipTranslatedWorldToUVBias[0].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.MipTranslatedWorldToUVBias[0].field0_0x0._8_8_ = _UNK_150689648;
    local_498.GDFParameterData.MipTranslatedWorldToUVBias[1].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.MipTranslatedWorldToUVBias[1].field0_0x0._8_8_ = _UNK_150689648;
    local_498.GDFParameterData.MipTranslatedWorldToUVBias[2].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.MipTranslatedWorldToUVBias[2].field0_0x0._8_8_ = _UNK_150689648;
    local_498.GDFParameterData.MipTranslatedWorldToUVBias[3].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.MipTranslatedWorldToUVBias[3].field0_0x0._8_8_ = _UNK_150689648;
    local_498.GDFParameterData.MipTranslatedWorldToUVBias[4].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.MipTranslatedWorldToUVBias[4].field0_0x0._8_8_ = _UNK_150689648;
    local_498.GDFParameterData.MipTranslatedWorldToUVBias[5].field0_0x0._0_8_ =
         ___xmm_3f800000000000000000000000000000;
    local_498.GDFParameterData.MipTranslatedWorldToUVBias[5].field0_0x0._8_8_ = _UNK_150689648;
    local_498._6_2_ = 0;
    local_498.GDFParameterData.CoverageAtlasTexture = (FRHITexture *)0x0;
    local_498.GDFParameterData.ClipmapSizeInPages = 0;
    local_498.GDFParameterData._436_4_ = 0;
    local_498.GDFParameterData.InvPageAtlasSize.field0_0x0._s_0.X = 0.0;
    local_498.GDFParameterData.InvPageAtlasSize.field0_0x0._s_0.Y = 0.0;
    local_498.GDFParameterData.InvPageAtlasSize.field0_0x0._s_0.Z = 0.0;
    local_498.GDFParameterData.InvCoverageAtlasSize.field0_0x0._s_0.X = 0.0;
    local_498.GDFParameterData.InvCoverageAtlasSize.field0_0x0._s_0.Y = 0.0;
    local_498.GDFParameterData.InvCoverageAtlasSize.field0_0x0._s_0.Z = 0.0;
    local_498.GDFParameterData.MaxPageNum = 0;
    local_498.GDFParameterData.GlobalDFResolution = 0.0;
    local_498.GDFParameterData.MaxDFAOConeDistance = 0.0;
    local_498.GDFParameterData.NumGlobalSDFClipmaps = 0;
    local_498.GDFParameterData._504_8_ = 0;
    local_498.bCacheValid = false;
    local_498.bValidForPass = false;
    local_498.PageAtlasTexture.Reference = (FRHITexture *)0x0;
    local_498.PageTableTexture.Reference = (FRHITexture *)0x0;
    local_498.MipTexture.Reference = (FRHITexture *)0x0;
    local_498.GDFParameterData.PageObjectGridBuffer.Reference = (FRDGPooledBuffer *)0x0;
    memset(&local_498.GDFParameterData,0,0x200);
    FCachedDistanceFieldData::operator=(&this->CachedGDFData,&local_498);
    FCachedDistanceFieldData::~FCachedDistanceFieldData(&local_498);
  }
  this_02 = (this->GPUProfilerPtr).Ptr;
  this->TotalDispatchesThisFrame = 0;
  FNiagaraGPUProfiler::BeginFrame(this_02,(FRHICommandList *)pFVar26->_padding_);
  if (0 < FNiagaraGpuComputeDispatchLocal::GDumpSortedSimulations) {
    FNiagaraGpuComputeDispatchLocal::GDumpSortedSimulations =
         FNiagaraGpuComputeDispatchLocal::GDumpSortedSimulations + -1;
    if (4 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    iVar3 = (this->SimulationsToSort).ArrayNum;
    pFVar13 = (FName *)(this->SimulationsToSort).AllocatorInstance.Data;
    pFVar27 = pFVar13 + (longlong)iVar3 * 0x54;
    while( true ) {
      if ((this->SimulationsToSort).ArrayNum != iVar3) {
        local_5d5[0] = 0;
        `TCheckedPointerIterator<FNiagaraGPUSortInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_5d5);
      }
      FVar25 = local_5c0;
      pFVar26 = local_5c8;
      if (pFVar13 == pFVar27) break;
      local_268.Base = local_248;
      local_268.bIsDynamic = false;
      local_268.bIsExternal = false;
      local_268.CurPos = local_248;
      local_268.End = (wchar_t *)local_48;
      if (((char)pFVar13[1].Number != '\0') && (pFVar13[2].ComparisonIndex.Value != 0xffffffff)) {
        pvVar18 = FGenericPlatformString::Memcpy(local_248,L"SortingEnabled ",0x1e);
        local_268.CurPos = (wchar_t *)((longlong)pvVar18 + 0x1e);
      }
      if ((char)pFVar13[0x10].ComparisonIndex.Value != '\0') {
        if (local_268.End < local_268.CurPos + 0xf) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,0xf);
        }
        pvVar18 = FGenericPlatformString::Memcpy(local_268.CurPos,L"CullingEnabled ",0x1e);
        local_268.CurPos = (wchar_t *)((longlong)pvVar18 + 0x1e);
        if (0 < (int)pFVar13[0x4e].ComparisonIndex.Value) {
          if (local_268.End < (wchar_t *)((longlong)pvVar18 + 0x3c)) {
            TStringBuilderBase<wchar_t>::Extend(&local_268,0xf);
          }
          pvVar18 = FGenericPlatformString::Memcpy(local_268.CurPos,L"FrustumCulling ",0x1e);
          local_268.CurPos = (wchar_t *)((longlong)pvVar18 + 0x1e);
        }
        if (pFVar13[0x12].ComparisonIndex.Value != 0xffffffff) {
          if (local_268.End < local_268.CurPos + 0x13) {
            TStringBuilderBase<wchar_t>::Extend(&local_268,0x13);
          }
          pvVar18 = FGenericPlatformString::Memcpy(local_268.CurPos,L"RendererVisEnabled ",0x26);
          local_268.CurPos = (wchar_t *)((longlong)pvVar18 + 0x26);
        }
        if (pFVar13[0x13].ComparisonIndex.Value != 0xffffffff) {
          if (local_268.End < local_268.CurPos + 0x11) {
            TStringBuilderBase<wchar_t>::Extend(&local_268,0x11);
          }
          pvVar18 = FGenericPlatformString::Memcpy(local_268.CurPos,L"MeshIndexEnabled ",0x22);
          local_268.CurPos = (wchar_t *)((longlong)pvVar18 + 0x22);
        }
      }
      if (4 < (byte)LogNiagara._0_1_) {
        if (local_268.End < local_268.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,1);
        }
        *local_268.CurPos = L'\0';
        ::FName::ToString(pFVar13,&local_4a8);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
        }
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
      pFVar13 = pFVar13 + 0x54;
    }
  }
  piVar1 = &(this->SimulationsToSort).ArrayMax;
  pFVar6 = (FNiagaraGPUSortInfo *)(this->SimulationsToSort).AllocatorInstance.Data;
  iVar3 = (this->SimulationsToSort).ArrayNum;
  if ((this->SimulationsToSort).ArrayMax < 0) {
    DestructItems<FNiagaraGPUSortInfo,int>(pFVar6,iVar3);
    (this->SimulationsToSort).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x2a0,0x10,0,&(this->SimulationsToSort).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FNiagaraGPUSortInfo,int>(pFVar6,iVar3);
    (this->SimulationsToSort).ArrayNum = 0;
  }
  bVar12 = FNiagaraUtilities::AllowGPUParticles();
  pFVar10 = local_5c8;
  if (bVar12) {
    if (!param_2) {
      FNiagaraGPUInstanceCountManager::ResizeBuffers
                ((FNiagaraGPUInstanceCountManager *)&this->field_0x48,
                 (FRHICommandListImmediate *)pFVar26->_padding_,this->ProxyGpuCountBufferEstimate);
      goto LAB_1492fd1af;
    }
    this_00 = &this->NDCDataProxies;
    this->FramesBeforeTickFlush = 0;
    uVar21 = 0;
    while ((-1 < (int)uVar21 && ((int)uVar21 < (this->NDCDataProxies).ArrayNum))) {
      if (((int)uVar21 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar23 = (this_00->AllocatorInstance).Data;
      lVar24 = (longlong)(int)uVar21;
      if ((*(longlong *)(pFVar23 + lVar24 * 0x10 + 8) == 0) ||
         (*(int *)(*(longlong *)(pFVar23 + lVar24 * 0x10 + 8) + 8) != 1)) {
        if ((*(longlong *)(pFVar23 + lVar24 * 0x10) == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FNiagaraDataChannelDataProxy::BeginFrame
                  (*(FNiagaraDataChannelDataProxy **)(pFVar23 + lVar24 * 0x10),
                   (FNiagaraGpuComputeDispatchInterface *)this,
                   (FRHICommandListImmediate *)pFVar10->_padding_);
        uVar21 = uVar21 + 1;
      }
      else {
        if ((*(longlong *)(pFVar23 + lVar24 * 0x10) == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FNiagaraDataChannelDataProxy::OnRemovedFromDispatcher
                  (*(FNiagaraDataChannelDataProxy **)(pFVar23 + lVar24 * 0x10),
                   (FNiagaraGpuComputeDispatchInterface *)this);
        uVar20 = 0;
        if ((int)uVar21 < (this->NDCDataProxies).ArrayNum) {
          uVar20 = ~uVar21 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        TArray<TSharedPtr<FNiagaraDataChannelDataProxy,1>,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(this_00,uVar21);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,(this->NDCDataProxies).ArrayNum,
                   &(this->NDCDataProxies).ArrayMax);
      }
    }
    UpdateInstanceCountManager(this,(FRHICommandListImmediate *)pFVar10->_padding_);
    PrepareAllTicks(this,(FRHICommandListImmediate *)pFVar10->_padding_);
    FNiagaraAsyncGpuTraceHelper::BeginFrame
              ((this->AsyncGpuTraceHelper).Ptr,(FRHICommandList *)pFVar10->_padding_,
               (FNiagaraGpuComputeDispatchInterface *)this);
    local_548.FirstElementPtr = (FSceneView *)0x0;
    local_548.BytesBetweenElements = 0;
    local_548.NumElements = 0;
    ExecuteTicks(this,pFVar10,&local_548,First);
    FVar25 = local_5c0;
    pFVar26 = pFVar10;
  }
  else {
    FNiagaraGPUInstanceCountManager::ResizeBuffers
              ((FNiagaraGPUInstanceCountManager *)&this->field_0x48,
               (FRHICommandListImmediate *)pFVar26->_padding_,this->ProxyGpuCountBufferEstimate);
    FinishDispatches(this);
    if (!param_2) goto LAB_1492fd1af;
  }
  if ((this->field_0x1e1 == '\0') || (*(int *)&this->field_0x190 < 1)) {
    for (pFVar19 = this->DispatchListPerStage;
        pFVar19 != (FNiagaraGpuDispatchList *)&this->GpuDebugReadbackInfos; pFVar19 = pFVar19 + 1) {
      if (0 < (pFVar19->DispatchGroups).ArrayNum) goto LAB_1492fd161;
    }
  }
  else {
LAB_1492fd161:
    pcVar7 = *(code **)(*(longlong *)this + 0x138);
    if ((*(int *)&this->field_0x54 < *(int *)&this->field_0x50) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("UsedInstanceCounts <= AllocatedInstanceCounts",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                            ,0x44,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (*pcVar7)(this,pFVar26,*(undefined8 *)&this->field_0x68,1);
  }
LAB_1492fd1af:
  FMemScope::~FMemScope(&local_550);
  FLLMScope::~FLLMScope(&local_5b4);
  pFVar15 = local_578;
  if (local_578 != (FRDGScope *)0x0) {
    if (*(char *)((longlong)&pFVar26->_padding_ + 4) != '\0') {
      FRDGScope::EndGPU(local_578,(FRHIComputeCommandList *)pFVar26->_padding_);
      FRDGScope::EndCPU(pFVar15,(FRHIComputeCommandList *)pFVar26->_padding_,false);
    }
    FRDGScope::ImmediateEnd(pFVar15,(FRDGScopeState *)pFVar26);
    *(uint *)&pFVar26->_padding_ = (uint)pFVar26->_padding_ & 0xfffffff7;
    pFVar26->_padding_ = *(longlong *)pFVar26->_padding_;
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  return;
}

// PreRender @ 1492fd270

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::PreRender
          (FNiagaraGpuComputeDispatch *this,FRDGBuilder *param_1,
          TStridedView<FSceneView_const_,int> *param_2,FSceneUniformBuffer *param_3,bool param_4)

{
  bool bVar1;
  FLLMScope local_res8 [10];
  FMemScope local_18 [3];
  
  TMulticastDelegate<void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy> *)
             &this->field_0x208,param_1);
  bVar1 = FNiagaraUtilities::AllowGPUParticles();
  if (bVar1) {
    FLLMScope::FLLMScope(local_res8,Niagara,false,None,Default,true);
    FMemScope::FMemScope(local_18,Niagara,true);
    FMemScope::~FMemScope(local_18);
    FLLMScope::~FLLMScope(local_res8);
  }
  return;
}

// PreStageInterface @ 1492fd2e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::PreStageInterface
          (FNiagaraGpuComputeDispatch *this,FRDGBuilder *param_1,FNiagaraGPUSystemTick *param_2,
          FNiagaraComputeInstanceData *param_3,FNiagaraSimStageData *param_4,
          TSet<FNiagaraDataInterfaceProxy_*,DefaultKeyFuncs<FNiagaraDataInterfaceProxy_*,0>,FDefaultSetAllocator>
          *param_5)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  FNiagaraDataInterfaceProxy *local_res20;
  longlong *local_78;
  TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> local_70;
  FRDGBuilder *local_60;
  FNiagaraGpuComputeDispatch *local_58;
  FNiagaraGPUSystemTick *local_50;
  FNiagaraComputeInstanceData *local_48;
  FNiagaraSimStageData *local_40;
  longlong *local_38;
  
  iVar1 = (param_3->DataInterfaceProxies).ArrayNum;
  if (iVar1 != 0) {
    FNiagaraShaderScript::GetShader(param_3->Context->GPUScript_RT,&local_70,0);
    FVar9 = ((local_70.ShaderContent)->DataInterfaceParameters).AllocatorInstance;
    if (((ulonglong)FVar9 & 1) != 0) {
      FVar9 = (ForAnyElementType)
              ((longlong)
               &((local_70.ShaderContent)->DataInterfaceParameters).AllocatorInstance.field_0x0 +
              ((longlong)FVar9 >> 0x18));
    }
    iVar2 = ((local_70.ShaderContent)->DataInterfaceParameters).ArrayNum;
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar10 = 0;
    local_40 = param_4;
    local_38 = (longlong *)0x0;
    if (0 < iVar1) {
      lVar8 = 0;
      local_60 = param_1;
      local_58 = this;
      local_50 = param_2;
      local_48 = param_3;
      do {
        uVar7 = 0;
        if ((int)uVar10 < iVar2) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(int *)FVar9 != -1) {
          uVar7 = 0;
          if ((int)uVar10 < (param_3->DataInterfaceProxies).ArrayNum) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          plVar3 = *(longlong **)
                    ((param_3->DataInterfaceProxies).AllocatorInstance.Data + lVar8 * 8);
          local_78 = plVar3;
          local_38 = plVar3;
          (**(code **)(*plVar3 + 0x20))(plVar3,&local_60);
          cVar6 = (**(code **)(*plVar3 + 0x38))(plVar3);
          if (cVar6 != '\0') {
            TSet<FNiagaraDataInterfaceProxy_*,DefaultKeyFuncs<FNiagaraDataInterfaceProxy_*,0>,FDefaultSetAllocator>
            ::Emplace<FNiagaraDataInterfaceProxy_*_const_&>(param_5,&local_res20,(bool *)&local_78);
          }
        }
        uVar10 = uVar10 + 1;
        lVar8 = lVar8 + 1;
        FVar9 = (ForAnyElementType)((longlong)FVar9 + 0x18);
      } while (lVar8 < iVar1);
    }
  }
  return;
}

// PrepareAllTicks @ 1492fd4e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::PrepareAllTicks
          (FNiagaraGpuComputeDispatch *this,FRHICommandListImmediate *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FRHIBuffer *this_00;
  FRHIUnorderedAccessView *this_01;
  FRHIShaderResourceView *this_02;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  this->NumRequiredFreeIDListSizes = 0;
  pFVar3 = this->ProxiesPerStage[0].AllocatorInstance.Data;
  iVar2 = this->ProxiesPerStage[0].ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (this->ProxiesPerStage[0].ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraSystemGpuComputeProxy_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    PrepareTicksForProxy
              (this,param_1,*(FNiagaraSystemGpuComputeProxy **)pFVar3,this->DispatchListPerStage);
    pFVar3 = pFVar3 + 8;
  }
  pFVar3 = this->ProxiesPerStage[1].AllocatorInstance.Data;
  iVar2 = this->ProxiesPerStage[1].ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (this->ProxiesPerStage[1].ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraSystemGpuComputeProxy_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    PrepareTicksForProxy
              (this,param_1,*(FNiagaraSystemGpuComputeProxy **)pFVar3,this->DispatchListPerStage + 1
              );
    pFVar3 = pFVar3 + 8;
  }
  pFVar3 = this->ProxiesPerStage[2].AllocatorInstance.Data;
  iVar2 = this->ProxiesPerStage[2].ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (this->ProxiesPerStage[2].ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraSystemGpuComputeProxy_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    PrepareTicksForProxy
              (this,param_1,*(FNiagaraSystemGpuComputeProxy **)pFVar3,this->DispatchListPerStage + 2
              );
    pFVar3 = pFVar3 + 8;
  }
  if (this->NumAllocatedFreeIDListSizes < this->NumRequiredFreeIDListSizes) {
    this->NumAllocatedFreeIDListSizes = this->NumRequiredFreeIDListSizes + 0x7f & 0xffffff80;
    (this->FreeIDListSizesBuffer).NumBytes = 0;
    this_00 = (this->FreeIDListSizesBuffer).Buffer.Reference;
    if (this_00 != (FRHIBuffer *)0x0) {
      (this->FreeIDListSizesBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)this_00);
    }
    this_01 = (this->FreeIDListSizesBuffer).UAV.Reference;
    if (this_01 != (FRHIUnorderedAccessView *)0x0) {
      (this->FreeIDListSizesBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      FRHIResource::Release((FRHIResource *)this_01);
    }
    this_02 = (this->FreeIDListSizesBuffer).SRV.Reference;
    if (this_02 != (FRHIShaderResourceView *)0x0) {
      (this->FreeIDListSizesBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)this_02);
    }
    FRWBuffer::Initialize
              (&this->FreeIDListSizesBuffer,(FRHICommandListBase *)param_1,L"NiagaraFreeIDListSizes"
               ,4,this->NumAllocatedFreeIDListSizes,PF_R32_SINT,UAVCompute,Static,
               (FResourceArrayUploadInterface *)0x0);
  }
  return;
}

// PrepareTicksForProxy @ 1492fd6b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::PrepareTicksForProxy
          (FNiagaraGpuComputeDispatch *this,FRHICommandListImmediate *param_1,
          FNiagaraSystemGpuComputeProxy *param_2,FNiagaraGpuDispatchList *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  undefined1 *this_00;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  longlong lVar7;
  FNiagaraComputeExecutionContext *pFVar8;
  FNiagaraShaderScript *pFVar9;
  ForElementType<FNiagaraComputeInstanceData::FPerStageInfo> FVar10;
  FNiagaraSimStageExecutionData *pFVar11;
  FScriptContainerElement *pFVar12;
  FNiagaraDataSet *this_01;
  code *pcVar13;
  ForElementType<FNiagaraComputeInstanceData::FPerStageInfo> *pFVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  wchar_t *pwVar19;
  FNiagaraDataBuffer *pFVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  ulonglong uVar29;
  FNiagaraDataBuffer **ppFVar30;
  ForElementType<FNiagaraComputeInstanceData::FPerStageInfo> FVar31;
  FScriptContainerElement *pFVar32;
  FNiagaraComputeInstanceData *this_02;
  uchar *puVar33;
  FNiagaraGPUSystemTick *this_03;
  uchar *puVar34;
  ulonglong uVar35;
  byte local_b8;
  byte local_b7;
  undefined1 local_b5;
  undefined1 local_b4;
  undefined1 local_b3 [3];
  uint local_b0;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  int local_94;
  uint local_90;
  uint local_8c;
  FNiagaraGPUSystemTick *local_88;
  uchar *local_80;
  FNiagaraComputeInstanceData *local_78;
  FScriptContainerElement *local_70;
  ulonglong local_68;
  longlong local_60;
  FScriptContainerElement *local_58;
  FNiagaraDataInterfaceProxyRW *local_50;
  ForElementType<FNiagaraComputeInstanceData::FPerStageInfo> *local_48;
  FNiagaraComputeInstanceData *local_40;
  
  pFVar24 = (param_2->ComputeContexts).AllocatorInstance.Data;
  iVar17 = (param_2->ComputeContexts).ArrayNum;
  uVar35 = 0;
  pFVar32 = pFVar24 + (longlong)iVar17 * 8;
  while( true ) {
    if ((param_2->ComputeContexts).ArrayNum != iVar17) {
      local_b5 = 0;
      `TCheckedPointerIterator<FNiagaraComputeExecutionContext_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_b5);
    }
    if (pFVar24 == pFVar32) break;
    lVar7 = *(longlong *)pFVar24;
    pFVar24 = pFVar24 + 8;
    *(undefined8 *)(lVar7 + 0x238) = 0;
    *(undefined4 *)(lVar7 + 0x218) = 0;
    *(undefined8 *)(lVar7 + 0x220) = 0xffffffffffffffff;
  }
  if ((param_2->PendingTicks).ArrayNum != 0) {
    bVar15 = IsInRenderingThread();
    if ((!bVar15) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInRenderingThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                            ,0x296,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    if ((*(longlong *)&this->field_0xd8 == 0) || (bVar15 = false, *(int *)&this->field_0xe0 == 0)) {
      bVar15 = true;
    }
    iVar17 = (param_2->PendingTicks).ArrayNum;
    iVar18 = this->MaxTicksToFlush;
    if (iVar17 < this->MaxTicksToFlush) {
      iVar18 = iVar17;
    }
    uVar26 = iVar18 - 1;
    uVar27 = 0;
    if ((int)uVar26 < iVar17) {
      uVar27 = ~uVar26 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    local_b0 = 0;
    local_8c = 0;
    (param_2->PendingTicks).AllocatorInstance.Data[(longlong)(int)uVar26 * 0x68 + 0x50] =
         (FScriptContainerElement)0x1;
    local_70 = (FScriptContainerElement *)(longlong)iVar18;
    if (0 < iVar18) {
      local_60 = 0;
      uVar25 = uVar35;
      do {
        lVar7 = local_60;
        uVar27 = 0;
        if ((int)(uint)uVar25 < (param_2->PendingTicks).ArrayNum) {
          uVar27 = ~(uint)uVar25 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        this_03 = (FNiagaraGPUSystemTick *)
                  ((param_2->PendingTicks).AllocatorInstance.Data + lVar7 * 0x68);
        local_b8 = 0;
        uVar27 = this_03->InstanceCount;
        this_02 = (FNiagaraComputeInstanceData *)this_03->InstanceData_ParamData_Packed;
        local_88 = this_03;
        local_78 = this_02;
        if (((int)uVar27 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar16)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        local_40 = this_02 + (int)uVar27;
        uVar25 = uVar35;
        uVar29 = uVar35;
        if (this_02 != local_40) {
          do {
            uVar27 = (uint)uVar29;
            pFVar8 = this_02->Context;
            if (this_02->bResetData != 0) {
              puVar2 = &pFVar8->CountOffset_RT;
              pFVar8->CurrentNumInstances_RT = 0;
              if (*puVar2 != 0xffffffff) {
                pFVar32 = (param_3->CountsToRelease).AllocatorInstance.Data;
                if (((pFVar32 <= puVar2) &&
                    (puVar2 < pFVar32 + (longlong)(param_3->CountsToRelease).ArrayMax * 4)) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar16)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                iVar17 = (param_3->CountsToRelease).ArrayNum;
                piVar1 = &(param_3->CountsToRelease).ArrayMax;
                if (iVar17 == *piVar1) {
                  iVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,(ForAnyElementType *)param_3,piVar1);
                }
                (param_3->CountsToRelease).ArrayNum = iVar17 + 1;
                *(uint *)((param_3->CountsToRelease).AllocatorInstance.Data + (longlong)iVar17 * 4)
                     = *puVar2;
                *puVar2 = 0xffffffff;
              }
            }
            pFVar9 = pFVar8->GPUScript_RT;
            bVar16 = IsInRenderingThread();
            if ((!bVar16) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsInRenderingThread()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraShared.h"
                                    ,0x386,L""), bVar16)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            uVar26 = local_b0;
            if (((pFVar9->CachedData_RenderThread).bIsComplete != 0) &&
               (this_02->TotalDispatches != 0)) {
              piVar1 = &(param_3->DispatchGroups).ArrayNum;
              if (this_02->bStartNewOverlapGroup != 0) {
                uVar27 = (uint)uVar25;
              }
              uVar25 = (ulonglong)(int)uVar27;
              iVar17 = uVar27 + (this_02->TotalDispatches - *piVar1);
              local_90 = uVar27;
              if (0 < iVar17) {
                iVar18 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x30,8,iVar17,&(param_3->DispatchGroups).AllocatorInstance,
                                    piVar1,&(param_3->DispatchGroups).ArrayMax);
                DefaultConstructItems<FNiagaraGpuDispatchGroup,int>
                          ((param_3->DispatchGroups).AllocatorInstance.Data +
                           (longlong)iVar18 * 0x30,iVar17);
              }
              local_a8 = pFVar8->CurrentNumInstances_RT;
              uVar26 = local_a8 +
                       (this_02->SpawnInfo).SpawnRateInstances +
                       (this_02->SpawnInfo).EventSpawnTotal;
              uVar27 = pFVar8->MainDataSet->MaxInstanceCount;
              if (uVar26 < uVar27) {
                uVar27 = uVar26;
              }
              pFVar8->CurrentNumInstances_RT = uVar27;
              if (uVar27 < pFVar8->CurrentMaxInstances_RT) {
                uVar27 = pFVar8->CurrentMaxInstances_RT;
              }
              pFVar8->CurrentMaxInstances_RT = uVar27;
              if ((GNiagaraBatcherFreeBufferEarly == 0) || (uVar27 != 0)) {
                uVar26 = (this_02->SpawnInfo).MaxParticleCount;
                if (uVar27 < pFVar8->CurrentMaxAllocateInstances_RT) {
                  uVar27 = pFVar8->CurrentMaxAllocateInstances_RT;
                }
                if (uVar26 < uVar27) {
                  uVar26 = uVar27;
                }
                pFVar8->CurrentMaxAllocateInstances_RT = uVar26;
              }
              else {
                uVar27 = 0;
                if (pFVar8->CurrentMaxAllocateInstances_RT != 0) {
                  uVar27 = pFVar8->CurrentMaxAllocateInstances_RT;
                }
                pFVar8->CurrentMaxAllocateInstances_RT = uVar27;
              }
              FVar31 = (ForElementType<FNiagaraComputeInstanceData::FPerStageInfo>)
                       &this_02->PerStageInfo;
              FVar10 = (this_02->PerStageInfo).AllocatorInstance.SecondaryData;
              local_b7 = 1;
              local_94 = (this_02->PerStageInfo).ArrayNum;
              local_b8 = local_b8 |
                         ((pFVar8->MainDataSet->CompiledData).StructPtr)->bRequiresPersistentIDs;
              if (FVar10 != (ForElementType<FNiagaraComputeInstanceData::FPerStageInfo>)0x0) {
                FVar31 = FVar10;
              }
              puVar34 = (uchar *)((longlong)FVar31 + 6);
              local_48 = (ForElementType<FNiagaraComputeInstanceData::FPerStageInfo> *)
                         ((longlong)FVar31 + (longlong)local_94 * 0x14);
              local_68 = uVar25;
              while( true ) {
                pFVar14 = local_48;
                local_80 = puVar34;
                if ((this_02->PerStageInfo).ArrayNum != local_94) {
                  local_b4 = 0;
                  `TCheckedPointerIterator<FNiagaraComputeInstanceData::FPerStageInfo,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(&local_b4);
                }
                if ((ForElementType<FNiagaraComputeInstanceData::FPerStageInfo> *)(puVar34 + -6) ==
                    pFVar14) break;
                uVar6 = *(ushort *)
                         ((ForElementType<FNiagaraComputeInstanceData::FPerStageInfo> *)
                         (puVar34 + -6))->InlineData;
                uVar27 = (uint)uVar6;
                local_a4 = uVar27;
                if (((pFVar8->SimStageExecData).Object == (FNiagaraSimStageExecutionData *)0x0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar16)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pFVar11 = (pFVar8->SimStageExecData).Object;
                if (((pFVar11->SimStageMetaData).ArrayNum <= (int)uVar27) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                local_58 = (pFVar11->SimStageMetaData).AllocatorInstance.Data +
                           (ulonglong)uVar6 * 0xa8;
                local_50 = FNiagaraComputeInstanceData::FindIterationInterface(this_02,(uint)uVar6);
                local_9c = (uint)*(ushort *)(puVar34 + -4);
                local_a0 = 0;
                if (local_9c != 0) {
                  do {
                    uVar35 = local_68;
                    uVar27 = local_a0;
                    uVar23 = (uint)uVar25;
                    uVar26 = 0;
                    if ((int)uVar23 < (param_3->DispatchGroups).ArrayNum) {
                      uVar26 = ~uVar23 >> 0x1f;
                    }
                    if ((uVar26 == 0) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar16)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    local_98 = uVar23 + 1;
                    local_68 = uVar35 + 1;
                    pFVar32 = (param_3->DispatchGroups).AllocatorInstance.Data;
                    iVar17 = *(int *)(pFVar32 + uVar35 * 0x30 + 0x18);
                    if (iVar17 == *(int *)(pFVar32 + uVar35 * 0x30 + 0x1c)) {
                      iVar17 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x870,(ForAnyElementType *)
                                                (pFVar32 + uVar35 * 0x30 + 0x10),
                                          (int *)(pFVar32 + uVar35 * 0x30 + 0x1c));
                    }
                    *(int *)(pFVar32 + uVar35 * 0x30 + 0x18) = iVar17 + 1;
                    lVar7 = *(longlong *)(pFVar32 + uVar35 * 0x30 + 0x10);
                    lVar28 = (longlong)iVar17 * 0x70;
                    *(FNiagaraGPUSystemTick **)(lVar28 + lVar7) = local_88;
                    *(FNiagaraComputeInstanceData **)(lVar28 + 8 + lVar7) = local_78;
                    puVar3 = (ushort *)(lVar28 + 0x10 + lVar7);
                    *puVar3 = *puVar3 & 0xfff8;
                    *(undefined8 *)(lVar28 + 0x12 + lVar7) = 0xffff;
                    *(undefined2 *)(lVar28 + 0x1a + lVar7) = 0;
                    *(undefined8 *)(lVar28 + 0x20 + lVar7) =
                         UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
                    *(int *)(lVar28 + 0x28 + lVar7) =
                         UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
                    *(undefined4 *)(lVar28 + 0x2c + lVar7) = 0xffffffff;
                    *(undefined8 *)(lVar28 + 0x30 + lVar7) = 0;
                    *(undefined4 *)(lVar28 + 0x38 + lVar7) = 0;
                    *(undefined8 *)(lVar28 + 0x40 + lVar7) = 0;
                    *(undefined4 *)(lVar28 + 0x48 + lVar7) = 0xffffffff;
                    *(undefined4 *)(lVar28 + 0x4c + lVar7) = 0;
                    *(undefined8 *)(lVar28 + 0x50 + lVar7) = 0;
                    *(undefined4 *)(lVar28 + 0x58 + lVar7) = 0xffffffff;
                    *(undefined4 *)(lVar28 + 0x5c + lVar7) = 0;
                    *(undefined8 *)(lVar28 + 0x60 + lVar7) = 0;
                    *(undefined8 *)(lVar28 + 0x68 + lVar7) = 0;
                    puVar3 = (ushort *)(lVar28 + 0x10 + lVar7);
                    *puVar3 = *puVar3 | (ushort)local_b7;
                    *(short *)(lVar28 + 0x12 + lVar7) = (short)local_a4;
                    *(short *)(lVar28 + 0x14 + lVar7) = (short)local_9c;
                    if ((uVar27 != (uVar27 & 0xffff)) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IntFitsIn<OutType>(In)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                            ,0xaa,
                                            L"Loss of data caused by narrowing conversion, In = %lld"
                                           ), bVar16)) {
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    *(short *)(lVar28 + 0x16 + lVar7) = (short)uVar27;
                    *(undefined2 *)(lVar28 + 0x18 + lVar7) = *(undefined2 *)puVar34;
                    *(undefined2 *)(lVar28 + 0x1a + lVar7) = *(undefined2 *)(puVar34 + -2);
                    *(undefined8 *)(lVar28 + 0x20 + lVar7) = *(undefined8 *)(puVar34 + 2);
                    *(undefined4 *)(lVar28 + 0x28 + lVar7) = *(undefined4 *)(puVar34 + 10);
                    *(FScriptContainerElement **)(lVar28 + 0x68 + lVar7) = local_58;
                    *(FNiagaraDataInterfaceProxyRW **)(lVar28 + 0x60 + lVar7) = local_50;
                    local_b7 = 0;
                    if (pFVar8->bHasTickedThisFrame_RT == false) {
                      pFVar20 = pFVar8->MainDataSet->CurrentData;
                    }
                    else {
                      bVar16 = IsInRenderingThread();
                      if (((!bVar16) || (pFVar8->BufferSwapsThisFrame_RT == 0)) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsInRenderingThread() && (BufferSwapsThisFrame_RT > 0)"
                                              ,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraComputeExecutionContext.h"
                                              ,0xc2,L""), bVar16)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      pFVar20 = pFVar8->DataBuffers_RT[~pFVar8->BufferSwapsThisFrame_RT & 1];
                    }
                    uVar26 = *(uint *)(*(longlong *)(lVar28 + 0x68 + lVar7) + 0x4c);
                    if ((uVar26 & 1) == 0) {
                      *(FNiagaraDataBuffer **)(lVar28 + 0x40 + lVar7) = pFVar20;
                      *(uint *)(lVar28 + 0x48 + lVar7) = pFVar8->CountOffset_RT;
                      *(uint *)(lVar28 + 0x4c + lVar7) = pFVar8->CurrentNumInstances_RT;
                      *(undefined8 *)(lVar28 + 0x50 + lVar7) = 0;
                      *(uint *)(lVar28 + 0x58 + lVar7) = pFVar8->CountOffset_RT;
                      *(uint *)(lVar28 + 0x5c + lVar7) = pFVar8->CurrentNumInstances_RT;
                    }
                    else if ((uVar26 & 2) == 0) {
                      *(FNiagaraDataBuffer **)(lVar28 + 0x40 + lVar7) = pFVar20;
                      *(uint *)(lVar28 + 0x48 + lVar7) = pFVar8->CountOffset_RT;
                      if ((local_a4 != 0) || (uVar26 = local_a8, uVar27 != 0)) {
                        uVar26 = pFVar8->CurrentNumInstances_RT;
                      }
                      *(uint *)(lVar28 + 0x4c + lVar7) = uVar26;
                      bVar16 = IsInRenderingThread();
                      if ((!bVar16) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsInRenderingThread()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraComputeExecutionContext.h"
                                              ,0xc3,L""), bVar16)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      *(FNiagaraDataBuffer **)(lVar28 + 0x50 + lVar7) =
                           pFVar8->DataBuffers_RT[pFVar8->BufferSwapsThisFrame_RT & 1];
                      bVar16 = IsInParallelRenderingThread();
                      if ((!bVar16) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsInParallelRenderingThread()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                                              ,0x97,L""), bVar16)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      this_00 = &this->field_0x1bc;
                      if ((this_00 == (undefined1 *)0x0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Mutex",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                              ,0x1b,L""), bVar16)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      LOCK();
                      cVar4 = *this_00;
                      if (cVar4 == '\0') {
                        *this_00 = 1;
                      }
                      UNLOCK();
                      if (cVar4 != '\0') {
                        UE::FMutex::LockSlow((FMutex *)this_00);
                      }
                      if (*(int *)&this->field_0xd0 == 0) {
                        iVar17 = *(int *)&this->field_0x50;
                        if (iVar17 < *(int *)&this->field_0x54) {
                          *(int *)&this->field_0x50 = iVar17 + 1;
                          if (this_00 != (undefined1 *)0x0) {
                            LOCK();
                            bVar5 = *this_00;
                            *this_00 = *this_00 + -1;
                            UNLOCK();
                            if ((bVar5 & 2) != 0) {
                              UE::FMutex::WakeWaitingThread((FMutex *)this_00);
                            }
                          }
                        }
                        else {
                          if (this_00 != (undefined1 *)0x0) {
                            LOCK();
                            bVar5 = *this_00;
                            *this_00 = *this_00 + -1;
                            UNLOCK();
                            if ((bVar5 & 2) != 0) {
                              UE::FMutex::WakeWaitingThread((FMutex *)this_00);
                            }
                          }
                          iVar17 = -1;
                        }
                      }
                      else {
                        if ((*(int *)&this->field_0xd0 < 1) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar16)) {
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                        iVar18 = *(int *)&this->field_0xd0 + -1;
                        iVar17 = *(int *)(*(longlong *)&this->field_0xc8 + -4 +
                                         (longlong)*(int *)&this->field_0xd0 * 4);
                        *(int *)&this->field_0xd0 = iVar18;
                        UE::Core::Private::
                        ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (4,4,(ForAnyElementType *)&this->field_0xc8,iVar18,
                                   (int *)&this->field_0xd4);
                        uVar27 = local_a0;
                        if (this_00 != (undefined1 *)0x0) {
                          LOCK();
                          bVar5 = *this_00;
                          *this_00 = *this_00 + -1;
                          UNLOCK();
                          if ((bVar5 & 2) != 0) {
                            UE::FMutex::WakeWaitingThread((FMutex *)this_00);
                            uVar27 = local_a0;
                          }
                        }
                      }
                      *(int *)(lVar28 + 0x58 + lVar7) = iVar17;
                      *(uint *)(lVar28 + 0x5c + lVar7) = pFVar8->CurrentNumInstances_RT;
                      pFVar8->BufferSwapsThisFrame_RT = pFVar8->BufferSwapsThisFrame_RT + 1;
                      pFVar8->CountOffset_RT = *(uint *)(lVar28 + 0x58 + lVar7);
                      pFVar8->bHasTickedThisFrame_RT = true;
                      if (*(int *)(lVar28 + 0x48 + lVar7) == -1) {
                        if ((*(int *)(lVar28 + 0x4c + lVar7) != 0) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("SimStageData.SourceCountOffset != INDEX_NONE || SimStageData.SourceNumInstances == 0"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                                                ,0x3c1,L""), bVar16)) {
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                        puVar34 = local_80;
                        if (*(int *)(lVar28 + 0x48 + lVar7) == -1) goto LAB_1492fe1dd;
                      }
                      if (((bVar15) && (local_88->bIsFinalTick != false)) &&
                         ((pFVar8->EmitterInstanceReadback).GPUCountOffset == 0xffffffff)) {
                        this->bRequiresReadback = true;
                        (pFVar8->EmitterInstanceReadback).CPUCount =
                             *(uint *)(lVar28 + 0x4c + lVar7);
                        (pFVar8->EmitterInstanceReadback).GPUCountOffset =
                             *(uint *)(lVar28 + 0x48 + lVar7);
                      }
                      pFVar32 = (param_3->CountsToRelease).AllocatorInstance.Data;
                      if (((pFVar32 <= (FScriptContainerElement *)(lVar7 + 0x48 + lVar28)) &&
                          ((FScriptContainerElement *)(lVar7 + 0x48 + lVar28) <
                           pFVar32 + (longlong)(param_3->CountsToRelease).ArrayMax * 4)) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar16)) {
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      iVar17 = (param_3->CountsToRelease).ArrayNum;
                      piVar1 = &(param_3->CountsToRelease).ArrayMax;
                      if (iVar17 == *piVar1) {
                        iVar17 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,(ForAnyElementType *)param_3,piVar1);
                      }
                      (param_3->CountsToRelease).ArrayNum = iVar17 + 1;
                      *(undefined4 *)
                       ((param_3->CountsToRelease).AllocatorInstance.Data + (longlong)iVar17 * 4) =
                           *(undefined4 *)(lVar28 + 0x48 + lVar7);
                      puVar34 = local_80;
                    }
                    else {
                      *(undefined8 *)(lVar28 + 0x40 + lVar7) = 0;
                      *(uint *)(lVar28 + 0x48 + lVar7) = pFVar8->CountOffset_RT;
                      *(uint *)(lVar28 + 0x4c + lVar7) = pFVar8->CurrentNumInstances_RT;
                      *(FNiagaraDataBuffer **)(lVar28 + 0x50 + lVar7) = pFVar20;
                      *(uint *)(lVar28 + 0x58 + lVar7) = pFVar8->CountOffset_RT;
                      *(uint *)(lVar28 + 0x5c + lVar7) = pFVar8->CurrentNumInstances_RT;
                    }
LAB_1492fe1dd:
                    uVar25 = (ulonglong)local_98;
                    local_a0 = uVar27 + 1;
                  } while ((int)local_a0 < (int)local_9c);
                }
                puVar34 = puVar34 + 0x14;
                this_02 = local_78;
              }
              uVar26 = (uint)uVar25;
              uVar23 = uVar26 - 1;
              uVar27 = 0;
              if ((int)uVar23 < (param_3->DispatchGroups).ArrayNum) {
                uVar27 = ~uVar23 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar32 = (param_3->DispatchGroups).AllocatorInstance.Data;
              uVar22 = *(int *)(pFVar32 + (longlong)(int)uVar23 * 0x30 + 0x18) - 1;
              uVar27 = 0;
              if ((int)uVar22 < *(int *)(pFVar32 + (longlong)(int)uVar23 * 0x30 + 0x18)) {
                uVar27 = ~uVar22 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              uVar29 = (ulonglong)local_90;
              puVar3 = (ushort *)
                       ((longlong)*(int *)(pFVar32 + (longlong)(int)uVar23 * 0x30 + 0x18) * 0x70 +
                        -0x60 + *(longlong *)(pFVar32 + (longlong)(int)uVar23 * 0x30 + 0x10));
              *puVar3 = *puVar3 | 2;
              pFVar8->FinalDispatchGroup_RT = uVar26 - 1;
              pFVar8->FinalDispatchGroupInstance_RT =
                   *(int *)(pFVar32 + (longlong)(int)uVar23 * 0x30 + 0x18) - 1;
              if ((int)uVar26 < (int)local_b0) {
                uVar26 = local_b0;
              }
            }
            local_b0 = uVar26;
            uVar35 = (ulonglong)local_b0;
            this_02 = this_02 + 1;
            local_78 = this_02;
          } while (this_02 != local_40);
          this_03 = local_88;
          if (local_b8 != 0) {
            uVar26 = (int)uVar25 - 1;
            uVar27 = 0;
            if ((int)uVar26 < (param_3->DispatchGroups).ArrayNum) {
              uVar27 = ~uVar26 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            this_03 = local_88;
            uVar27 = local_88->InstanceCount;
            puVar34 = local_88->InstanceData_ParamData_Packed;
            pFVar32 = (param_3->DispatchGroups).AllocatorInstance.Data;
            if (((int)uVar27 < 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar16)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            puVar33 = puVar34 + (longlong)(int)uVar27 * 0x128;
            for (; puVar34 != puVar33; puVar34 = puVar34 + 0x128) {
              lVar7 = *(longlong *)(puVar34 + 200);
              lVar28 = *(longlong *)(lVar7 + 0x68);
              bVar16 = IsInRenderingThread();
              if ((!bVar16) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsInRenderingThread()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraShared.h"
                                      ,0x386,L""), bVar16)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              if ((((*(byte *)(lVar28 + 0xac) & 1) != 0) &&
                  ((*(byte *)(*(longlong *)(*(longlong *)(lVar7 + 0x58) + 8) + 0x38) & 1) != 0)) &&
                 (*(char *)(lVar7 + 0x230) != '\0')) {
                iVar17 = *(int *)(pFVar32 + (longlong)(int)uVar26 * 0x30 + 0x28);
                if (iVar17 == *(int *)(pFVar32 + (longlong)(int)uVar26 * 0x30 + 0x2c)) {
                  iVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x820,(ForAnyElementType *)
                                            (pFVar32 + (longlong)(int)uVar26 * 0x30 + 0x20),
                                      (int *)(pFVar32 + (longlong)(int)uVar26 * 0x30 + 0x2c));
                }
                *(int *)(pFVar32 + (longlong)(int)uVar26 * 0x30 + 0x28) = iVar17 + 1;
                lVar28 = *(longlong *)(pFVar32 + (longlong)(int)uVar26 * 0x30 + 0x20);
                lVar21 = (longlong)iVar17 * 0x20;
                *(longlong *)(lVar21 + lVar28) = lVar7;
                *(undefined8 *)(lVar21 + 8 + lVar28) = 0;
                *(undefined8 *)(lVar21 + 0x10 + lVar28) = 0;
                *(undefined4 *)(lVar21 + 0x18 + lVar28) = 0;
                uVar27 = *(uint *)(pFVar32 + (longlong)(int)uVar26 * 0x30 + 0x28);
                if (*(uint *)(pFVar32 + (longlong)(int)uVar26 * 0x30 + 0x28) <
                    this->NumRequiredFreeIDListSizes) {
                  uVar27 = this->NumRequiredFreeIDListSizes;
                }
                this->NumRequiredFreeIDListSizes = uVar27;
              }
              this_03 = local_88;
            }
            uVar35 = (ulonglong)local_b0;
          }
        }
        FNiagaraGPUSystemTick::BuildUniformBuffers(this_03);
        local_8c = local_8c + 1;
        uVar25 = (ulonglong)local_8c;
        local_60 = local_60 + 1;
      } while (local_60 < (longlong)local_70);
    }
    pFVar24 = (param_2->ComputeContexts).AllocatorInstance.Data;
    local_a8 = (param_2->ComputeContexts).ArrayNum;
    uVar35 = (ulonglong)(int)local_a8;
    pFVar32 = pFVar24 + uVar35 * 8;
    local_70 = pFVar32;
    while( true ) {
      if ((param_2->ComputeContexts).ArrayNum != (int)uVar35) {
        local_b3[0] = 0;
        `TCheckedPointerIterator<FNiagaraComputeExecutionContext_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_b3);
      }
      if (pFVar24 == pFVar32) break;
      pFVar8 = *(FNiagaraComputeExecutionContext **)pFVar24;
      if (pFVar8->bHasTickedThisFrame_RT == false) {
LAB_1492fe892:
        pFVar24 = pFVar24 + 8;
      }
      else {
        if ((pFVar8->FinalDispatchGroup_RT == 0xffffffff) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("ComputeContext->FinalDispatchGroup_RT != INDEX_NONE",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                                ,0x3fe,L""), bVar15)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar27 = pFVar8->FinalDispatchGroup_RT;
        uVar26 = 0;
        if ((int)uVar27 < (param_3->DispatchGroups).ArrayNum) {
          uVar26 = ~uVar27 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar26 = pFVar8->FinalDispatchGroupInstance_RT;
        pFVar12 = (param_3->DispatchGroups).AllocatorInstance.Data;
        uVar23 = 0;
        if ((int)uVar26 < *(int *)(pFVar12 + (longlong)(int)uVar27 * 0x30 + 0x18)) {
          uVar23 = ~uVar26 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        puVar3 = (ushort *)
                 ((longlong)(int)uVar26 * 0x70 + 0x10 +
                 *(longlong *)(pFVar12 + (longlong)(int)uVar27 * 0x30 + 0x10));
        *puVar3 = *puVar3 | 4;
        this_01 = pFVar8->MainDataSet;
        pFVar8->DataSetOriginalBuffer_RT = this_01->CurrentData;
        if (((this_01->CompiledData).StructPtr)->bRequiresPersistentIDs != 0) {
          if ((pFVar8->DebugSimName).Data.ArrayNum == 0) {
            pwVar19 = L"";
          }
          else {
            pwVar19 = (wchar_t *)(pFVar8->DebugSimName).Data.AllocatorInstance.Data;
          }
          FNiagaraDataSet::AllocateGPUFreeIDs
                    (this_01,pFVar8->CurrentMaxAllocateInstances_RT + 1,(FRHICommandList *)param_1,
                     *(Type *)&this->field_0x34,pwVar19);
        }
        uVar27 = 2;
        if (pFVar8->BufferSwapsThisFrame_RT < 2) {
          uVar27 = pFVar8->BufferSwapsThisFrame_RT;
        }
        if (uVar27 != 0) {
          ppFVar30 = pFVar8->DataBuffers_RT;
          uVar35 = (ulonglong)uVar27;
          do {
            if ((pFVar8->DebugSimName).Data.ArrayNum == 0) {
              pwVar19 = L"";
            }
            else {
              pwVar19 = (wchar_t *)(pFVar8->DebugSimName).Data.AllocatorInstance.Data;
            }
            FNiagaraDataBuffer::AllocateGPU
                      (*ppFVar30,(FRHICommandListBase *)param_1,
                       pFVar8->CurrentMaxAllocateInstances_RT + 1,*(Type *)&this->field_0x34,pwVar19
                      );
            ppFVar30 = ppFVar30 + 1;
            uVar35 = uVar35 - 1;
          } while (uVar35 != 0);
          uVar35 = (ulonglong)local_a8;
          pFVar32 = local_70;
        }
        if (uVar27 < 2) {
          uVar25 = (ulonglong)(2 - uVar27);
          ppFVar30 = pFVar8->DataBuffers_RT + uVar27;
          do {
            FNiagaraDataBuffer::ReleaseGPU(*ppFVar30);
            ppFVar30 = ppFVar30 + 1;
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
        }
        if ((param_2->ComputeTickStage == First) || (param_2->ComputeTickStage == PostInitViews)) {
          bVar15 = IsInRenderingThread();
          if (((!bVar15) || (pFVar8->BufferSwapsThisFrame_RT == 0)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsInRenderingThread() && (BufferSwapsThisFrame_RT > 0)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraComputeExecutionContext.h"
                                  ,0xc2,L""), bVar15)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar20 = pFVar8->DataBuffers_RT[~pFVar8->BufferSwapsThisFrame_RT & 1];
          pFVar20->GPUInstanceCountBufferOffset = pFVar8->CountOffset_RT;
          uVar27 = pFVar8->CurrentNumInstances_RT;
          if ((pFVar20->NumInstancesAllocated < uVar27) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InNumInstances <= NumInstancesAllocated",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                  ,0x9c,L""), bVar15)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar20->NumInstances = uVar27;
          pFVar20->GPUDataReadyStage = param_2->ComputeTickStage;
          FNiagaraComputeExecutionContext::SetDataToRender(pFVar8,pFVar20);
          goto LAB_1492fe892;
        }
        if (GNiagaraGpuLowLatencyTranslucencyEnabled == 0) goto LAB_1492fe892;
        bVar15 = IsInRenderingThread();
        if (((!bVar15) || (pFVar8->BufferSwapsThisFrame_RT == 0)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInRenderingThread() && (BufferSwapsThisFrame_RT > 0)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraComputeExecutionContext.h"
                                ,0xc2,L""), bVar15)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar20 = pFVar8->DataBuffers_RT[~pFVar8->BufferSwapsThisFrame_RT & 1];
        pFVar20->GPUInstanceCountBufferOffset = pFVar8->CountOffset_RT;
        uVar27 = pFVar8->CurrentNumInstances_RT;
        if ((pFVar20->NumInstancesAllocated < uVar27) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InNumInstances <= NumInstancesAllocated",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                ,0x9c,L""), bVar15)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar20->NumInstances = uVar27;
        pFVar20->GPUDataReadyStage = param_2->ComputeTickStage;
        FNiagaraComputeExecutionContext::SetTranslucentDataToRender(pFVar8,pFVar20);
        pFVar24 = pFVar24 + 8;
      }
    }
  }
  return;
}

// ProcessDebugReadbacks @ 1492fe8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::ProcessDebugReadbacks
          (FNiagaraGpuComputeDispatch *this,FRHICommandList *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  FNiagaraGpuReadbackManager *this_00;
  code *pcVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ForElementType<FRHIBuffer_*> FVar14;
  TArray<FNiagaraGpuComputeDispatch::FDebugReadbackInfo,TSizedDefaultAllocator<32>_> *pTVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStackY_188 [32];
  int local_138;
  undefined1 local_134;
  char local_133;
  int local_130;
  uchar local_128 [8];
  uchar local_120 [8];
  uchar local_118 [8];
  uchar local_110 [8];
  int local_108;
  uint local_104;
  FScriptContainerElement *local_100;
  TArray<FNiagaraGpuComputeDispatch::FDebugReadbackInfo,TSizedDefaultAllocator<32>_> *local_f8;
  FNiagaraGpuComputeDispatch *local_f0;
  FScriptContainerElement *local_e8;
  FRHICommandList *local_e0;
  FNiagaraGpuReadbackManager *local_d8;
  ForElementType<FRHIBuffer_*> local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TArrayView<FRHIBuffer_*_const,int> local_b8;
  code *local_a8 [5];
  undefined8 *local_80;
  ForElementType<FRHIBuffer_*> local_78;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_f8 = &this->GpuDebugReadbackInfos;
  local_104 = (this->GpuDebugReadbackInfos).ArrayNum;
  uVar13 = (ulonglong)(int)local_104;
  pFVar16 = (local_f8->AllocatorInstance).Data;
  local_e8 = pFVar16 + uVar13 * 0x20;
  pTVar15 = local_f8;
  pFVar17 = local_e8;
  local_133 = param_2;
  local_f0 = this;
  local_e0 = param_1;
  do {
    while( true ) {
      local_100 = pFVar16;
      if (pTVar15->ArrayNum != (int)uVar13) {
        local_134 = 0;
        `TCheckedPointerIterator<FNiagaraGpuComputeDispatch::FDebugReadbackInfo,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(&local_134);
      }
      if (pFVar16 == pFVar17) {
        DestructItems<FNiagaraGpuComputeDispatch::FDebugReadbackInfo,int>
                  ((FDebugReadbackInfo *)(pTVar15->AllocatorInstance).Data,pTVar15->ArrayNum);
        pTVar15->ArrayNum = 0;
        if (pTVar15->ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,&pTVar15->AllocatorInstance,0,&pTVar15->ArrayMax);
        }
        if (local_133 != '\0') {
          this_00 = *(FNiagaraGpuReadbackManager **)&this->field_0x38;
          if (((((FRHICommandListImmediate *)param_1)->field_0x29b & 0x20) == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsImmediate()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                                  ,0x17,L"This operation expects the immediate command list."),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle((FRHICommandListImmediate *)param_1);
          FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle((FRHICommandListImmediate *)param_1);
          FNiagaraGpuReadbackManager::TickInternal(this_00,true);
        }
        return;
      }
      lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(pFVar16 + 0x18) + 0x58) + 0x78);
      if (lVar5 != 0) break;
      if ((*(longlong *)(pFVar16 + 8) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FNiagaraDataSet::CopyFromGPUReadback
                ((FNiagaraDataSet *)(*(longlong *)(pFVar16 + 8) + 0x28),(float *)0x0,(int *)0x0,
                 (FFloat16 *)0x0,0,0,0,0,0);
      if ((*(longlong *)(pFVar16 + 8) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
LAB_1492fe9e8:
      pFVar1 = pFVar16 + 8;
      pFVar16 = pFVar16 + 0x20;
      LOCK();
      *(undefined1 *)(*(longlong *)pFVar1 + 0x170) = 1;
      UNLOCK();
      uVar13 = (ulonglong)local_104;
    }
    local_108 = *(int *)(lVar5 + 0x5c);
    if (local_108 == -1) {
      if ((*(longlong *)(pFVar16 + 8) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FNiagaraDataSet::CopyFromGPUReadback
                ((FNiagaraDataSet *)(*(longlong *)(pFVar16 + 8) + 0x28),(float *)0x0,(int *)0x0,
                 (FFloat16 *)0x0,0,0,0,0,0);
      if ((*(longlong *)(pFVar16 + 8) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      goto LAB_1492fe9e8;
    }
    local_78.SecondaryData = (ForElementType<FRHIBuffer_*>)0x0;
    local_50 = 0;
    local_4c = 4;
    if ((*(int *)&this->field_0x54 < *(int *)&this->field_0x50) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("UsedInstanceCounts <= AllocatedInstanceCounts",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                            ,0x44,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_128[0] = this->field_0x68;
    local_128[1] = this->field_0x69;
    local_128[2] = this->field_0x6a;
    local_128[3] = this->field_0x6b;
    local_128[4] = this->field_0x6c;
    local_128[5] = this->field_0x6d;
    local_128[6] = this->field_0x6e;
    local_128[7] = this->field_0x6f;
    FVar14 = (ForElementType<FRHIBuffer_*>)&local_78;
    if (local_78.SecondaryData != (ForElementType<FRHIBuffer_*>)0x0) {
      FVar14 = local_78.SecondaryData;
    }
    if ((ulonglong)FVar14 <= local_128) {
      FVar14 = (ForElementType<FRHIBuffer_*>)&local_78;
      if (local_78.SecondaryData != (ForElementType<FRHIBuffer_*>)0x0) {
        FVar14 = local_78.SecondaryData;
      }
      if ((local_128 < (uchar *)((longlong)FVar14 + (longlong)local_4c * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    local_138 = local_50;
    if (local_50 == local_4c) {
      local_138 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIBuffer_*>_>
                            (0x808,&local_78,&local_4c);
    }
    local_50 = local_138 + 1;
    FVar14 = (ForElementType<FRHIBuffer_*>)&local_78;
    if (local_78.SecondaryData != (ForElementType<FRHIBuffer_*>)0x0) {
      FVar14 = local_78.SecondaryData;
    }
    *(uchar (*) [8])((longlong)FVar14 + (longlong)local_138 * 8) = local_128;
    if (*(int *)(lVar5 + 0x78) == 0) {
      local_130 = -1;
    }
    else {
      local_120 = *(uchar (*) [8])(lVar5 + 0x60);
      FVar14 = (ForElementType<FRHIBuffer_*>)&local_78;
      if (local_78.SecondaryData != (ForElementType<FRHIBuffer_*>)0x0) {
        FVar14 = local_78.SecondaryData;
      }
      if ((ulonglong)FVar14 <= local_120) {
        FVar14 = (ForElementType<FRHIBuffer_*>)&local_78;
        if (local_78.SecondaryData != (ForElementType<FRHIBuffer_*>)0x0) {
          FVar14 = local_78.SecondaryData;
        }
        if ((local_120 < (uchar *)((longlong)FVar14 + (longlong)local_4c * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      local_130 = local_50;
      if (local_50 == local_4c) {
        local_130 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIBuffer_*>_>
                              (0x808,&local_78,&local_4c);
      }
      local_50 = local_130 + 1;
      FVar14 = (ForElementType<FRHIBuffer_*>)&local_78;
      if (local_78.SecondaryData != (ForElementType<FRHIBuffer_*>)0x0) {
        FVar14 = local_78.SecondaryData;
      }
      *(uchar (*) [8])((longlong)FVar14 + (longlong)local_130 * 8) = local_120;
    }
    if (*(int *)(lVar5 + 0x108) == 0) {
      iVar11 = -1;
    }
    else {
      local_118 = *(uchar (*) [8])(lVar5 + 0xf0);
      FVar14 = (ForElementType<FRHIBuffer_*>)&local_78;
      if (local_78.SecondaryData != (ForElementType<FRHIBuffer_*>)0x0) {
        FVar14 = local_78.SecondaryData;
      }
      if ((ulonglong)FVar14 <= local_118) {
        FVar14 = (ForElementType<FRHIBuffer_*>)&local_78;
        if (local_78.SecondaryData != (ForElementType<FRHIBuffer_*>)0x0) {
          FVar14 = local_78.SecondaryData;
        }
        if ((local_118 < (uchar *)((longlong)FVar14 + (longlong)local_4c * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar11 = local_50;
      if (local_50 == local_4c) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIBuffer_*>_>
                           (0x808,&local_78,&local_4c);
      }
      local_50 = iVar11 + 1;
      FVar14 = (ForElementType<FRHIBuffer_*>)&local_78;
      if (local_78.SecondaryData != (ForElementType<FRHIBuffer_*>)0x0) {
        FVar14 = local_78.SecondaryData;
      }
      *(uchar (*) [8])((longlong)FVar14 + (longlong)iVar11 * 8) = local_118;
    }
    if (*(int *)(lVar5 + 0xa8) == 0) {
      iVar12 = -1;
    }
    else {
      local_110 = *(uchar (*) [8])(lVar5 + 0x90);
      FVar14 = (ForElementType<FRHIBuffer_*>)&local_78;
      if (local_78.SecondaryData != (ForElementType<FRHIBuffer_*>)0x0) {
        FVar14 = local_78.SecondaryData;
      }
      if ((ulonglong)FVar14 <= local_110) {
        FVar14 = (ForElementType<FRHIBuffer_*>)&local_78;
        if (local_78.SecondaryData != (ForElementType<FRHIBuffer_*>)0x0) {
          FVar14 = local_78.SecondaryData;
        }
        if ((local_110 < (uchar *)((longlong)FVar14 + (longlong)local_4c * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar12 = local_50;
      if (local_50 == local_4c) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIBuffer_*>_>
                           (0x808,&local_78,&local_4c);
      }
      local_50 = iVar12 + 1;
      FVar14 = (ForElementType<FRHIBuffer_*>)&local_78;
      if (local_78.SecondaryData != (ForElementType<FRHIBuffer_*>)0x0) {
        FVar14 = local_78.SecondaryData;
      }
      *(uchar (*) [8])((longlong)FVar14 + (longlong)iVar12 * 8) = local_110;
    }
    local_d8 = *(FNiagaraGpuReadbackManager **)&this->field_0x38;
    uVar6 = *(undefined8 *)(pFVar16 + 8);
    lVar7 = *(longlong *)(pFVar16 + 0x10);
    uVar2 = *(undefined4 *)(lVar5 + 300);
    uVar3 = *(undefined4 *)(lVar5 + 0x134);
    uVar4 = *(undefined4 *)(lVar5 + 0x130);
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    local_a8[0] = (code *)0x0;
    local_80 = (undefined8 *)0x0;
    local_80 = FMemory::Malloc(0x38,8);
    iVar9 = local_50;
    local_80[1] = uVar6;
    *(int *)(local_80 + 3) = local_108;
    *local_80 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::ProcessDebugReadbacks'::`6'::<lambda_1>,0,1>
                 ::_vftable_;
    *(int *)((longlong)local_80 + 0x1c) = local_138;
    *(int *)(local_80 + 4) = local_130;
    local_80[2] = lVar7;
    *(int *)((longlong)local_80 + 0x24) = iVar11;
    *(int *)(local_80 + 5) = iVar12;
    *(undefined4 *)((longlong)local_80 + 0x2c) = uVar2;
    *(undefined4 *)(local_80 + 6) = uVar4;
    *(undefined4 *)((longlong)local_80 + 0x34) = uVar3;
    if (local_80 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FNiagaraGpuComputeDispatch::ProcessDebugReadbacks'::__l6::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
                    ::Call;
    }
    FVar14 = (ForElementType<FRHIBuffer_*>)&local_78;
    if (local_78.SecondaryData != (ForElementType<FRHIBuffer_*>)0x0) {
      FVar14 = local_78.SecondaryData;
    }
    if ((local_50 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    param_1 = local_e0;
    iStack_c0 = iVar9;
    local_b8._12_4_ = uStack_bc;
    local_b8.ArrayNum = iVar9;
    local_c8 = FVar14;
    local_b8.DataPtr = (FRHIBuffer **)FVar14;
    FNiagaraGpuReadbackManager::EnqueueReadbacks
              (local_d8,local_e0,&local_b8,
               (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)
               local_a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_78.SecondaryData != (ForElementType<FRHIBuffer_*>)0x0) {
      FMemory::Free((void *)local_78.SecondaryData);
    }
    pFVar16 = local_100 + 0x20;
    uVar13 = (ulonglong)local_104;
    pTVar15 = local_f8;
    this = local_f0;
    pFVar17 = local_e8;
  } while( true );
}

// ProcessPendingTicksFlush @ 1492ffee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001493009cf) */
/* WARNING: Removing unreachable block (ram,0x0001493009d7) */
/* WARNING: Removing unreachable block (ram,0x000149300b07) */
/* WARNING: Removing unreachable block (ram,0x000149300b0f) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush
          (FNiagaraGpuComputeDispatch *this,FRHICommandListImmediate *param_1,bool param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  int iVar4;
  double dVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  int *piVar12;
  FSkeletalMeshUpdater *this_00;
  FGPUSkinCache *this_01;
  ConstructionValues *pCVar13;
  IRendererModule *pIVar14;
  FRDGEventName *pFVar15;
  void *pvVar16;
  TRDGEmptyLambdaPass<_public:_void___cdecl_FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush(FRHICommandListImmediate_&,bool)_::_37_::<lambda_1>_>
  *pTVar17;
  FSceneUniformBuffer *pFVar18;
  TRDGEmptyLambdaPass<_public:_void___cdecl_FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush(FRHICommandListImmediate_&,bool)_::_37_::<lambda_2>_>
  *pTVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  FRHICommandListImmediate *pFVar25;
  int iVar26;
  undefined1 auStackY_1708 [32];
  undefined1 local_16d8 [8];
  undefined8 *local_16d0;
  FRHICommandListImmediate *local_16c8;
  <lambda_2> local_16c0;
  undefined1 local_16b8 [32];
  longlong local_1698;
  longlong local_1690;
  FRDGEventName local_1688;
  longlong local_1670;
  undefined4 local_1668;
  FSubmitTasks local_1660;
  TSharedPtr<FWN_SceneTexturesCaptureInfo,1> local_1640;
  longlong local_1628;
  longlong lStack_1620;
  longlong local_1618;
  longlong lStack_1610;
  FRDGEventName local_1608;
  FRDGEventName local_15f0;
  double local_15d8;
  double dStack_15d0;
  double local_15c8;
  double local_15b8;
  double dStack_15b0;
  double local_15a8;
  double dStack_15a0;
  double local_1598;
  double dStack_1590;
  FTaskHandle local_1588;
  double dStack_1580;
  FRDGAllocatorScope local_1578;
  FRDGAllocator *pFStack_1570;
  ForElementType<FRDGBlackboard::FStruct_*> local_1568;
  double dStack_1560;
  wchar_t *local_1558;
  ForAnyElementType FStack_1550;
  double local_1548;
  FRDGPass *pFStack_1540;
  FRDGPass *local_1538;
  double dStack_1530;
  double local_1528;
  ForElementType<FRDGDispatchPass_*> FStack_1520;
  double local_1518;
  ForElementType<FRDGPass_*> FStack_1510;
  double local_1508;
  ForElementType<FRDGTexture_*> FStack_1500;
  double local_14f8;
  ForElementType<FRDGBuffer_*> FStack_14f0;
  double local_14e8;
  ForElementType<FRDGView_*> FStack_14e0;
  double local_14d8;
  ForElementType<FRDGUniformBuffer_*> FStack_14d0;
  double local_14c8;
  ForElementType<FRDGBuilder::FExtractedTexture> FStack_14c0;
  TIntPoint<int>_u_0 local_14b8;
  TIntPoint<int>_u_0 TStack_14b0;
  double local_14a8;
  double dStack_14a0;
  double local_1498;
  TIntPoint<int>_u_0 local_1490;
  TIntPoint<int>_u_0 local_1488;
  undefined1 *local_1480;
  undefined8 local_1478;
  undefined8 uStack_1470;
  FSceneViewOwner local_1468;
  undefined4 local_1458;
  undefined8 local_1450;
  FLinearColor_u_0 local_1448;
  FLinearColor_u_0 local_1438;
  FLinearColor_u_0 local_1428;
  undefined4 local_1418;
  undefined4 local_1414;
  undefined4 local_1410;
  undefined8 local_1408;
  undefined8 uStack_1400;
  undefined8 local_13f8;
  undefined8 uStack_13f0;
  undefined8 local_13e8;
  undefined8 uStack_13e0;
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_13d8;
  void *local_1398;
  undefined1 local_1390 [16];
  undefined4 local_1380;
  int local_137c;
  undefined8 local_1368;
  undefined4 local_1360;
  undefined4 local_135c;
  undefined4 local_1358;
  undefined4 local_1354;
  void *local_1348;
  undefined4 local_1340;
  undefined8 local_1338;
  undefined4 local_1330;
  undefined4 local_132c;
  undefined8 local_1328;
  undefined8 uStack_1320;
  undefined1 local_1318 [88];
  ulonglong uStack_12c0;
  ulonglong local_12b8;
  ulonglong uStack_12b0;
  void *local_1298;
  undefined4 local_1290;
  undefined4 local_128c;
  ConstructionValues local_1288;
  undefined1 local_11e8 [424];
  ForElementType<FRDGPass_*> local_1040;
  int local_1038;
  int local_1034 [339];
  FRDGUserValidation local_ae8;
  undefined1 local_a18 [16];
  int local_a08;
  FRDGBuilder local_858;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1708;
  uVar22 = 0;
  piVar12 = &this->ProxiesPerStage[0].ArrayNum;
  uVar21 = uVar22;
  while (*piVar12 < 1) {
    uVar21 = uVar21 + 1;
    piVar12 = piVar12 + 4;
    if (2 < (longlong)uVar21) {
      return;
    }
  }
  this->FramesBeforeTickFlush = this->FramesBeforeTickFlush + 1;
  pFVar23 = this->ProxiesPerStage[0].AllocatorInstance.Data;
  uVar11 = FNiagaraGpuComputeDispatchLocal::GTickFlushMaxQueuedFrames;
  if (FNiagaraGpuComputeDispatchLocal::GTickFlushMaxQueuedFrames < 0) {
    uVar11 = 0;
  }
  uVar20 = (uint)param_2;
  if (uVar11 <= this->FramesBeforeTickFlush) {
    uVar20 = 1;
  }
  iVar26 = this->ProxiesPerStage[0].ArrayNum;
  local_16d0 = (undefined8 *)CONCAT44((int)((ulonglong)local_16d0 >> 0x20),uVar20);
  iVar4 = 1;
  if (1 < FNiagaraGpuComputeDispatchLocal::GTickFlushMaxPendingTicks) {
    iVar4 = FNiagaraGpuComputeDispatchLocal::GTickFlushMaxPendingTicks;
  }
  pFVar24 = pFVar23 + (longlong)iVar26 * 8;
  local_16c8 = param_1;
  while( true ) {
    if (this->ProxiesPerStage[0].ArrayNum != iVar26) {
      local_16d8[0] = 0;
      `TCheckedPointerIterator<FNiagaraSystemGpuComputeProxy_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_16d8);
    }
    if (pFVar23 == pFVar24) break;
    uVar11 = *(uint *)(*(longlong *)pFVar23 + 0x58);
    if ((int)*(uint *)(*(longlong *)pFVar23 + 0x58) < (int)(uint)uVar22) {
      uVar11 = (uint)uVar22;
    }
    pFVar23 = pFVar23 + 8;
    uVar22 = (ulonglong)uVar11;
  }
  pFVar24 = this->ProxiesPerStage[1].AllocatorInstance.Data;
  iVar26 = this->ProxiesPerStage[1].ArrayNum;
  pFVar23 = pFVar24 + (longlong)iVar26 * 8;
  while( true ) {
    if (this->ProxiesPerStage[1].ArrayNum != iVar26) {
      local_16d8[0] = 0;
      `TCheckedPointerIterator<FNiagaraSystemGpuComputeProxy_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_16d8);
    }
    if (pFVar24 == pFVar23) break;
    uVar11 = *(uint *)(*(longlong *)pFVar24 + 0x58);
    if ((int)*(uint *)(*(longlong *)pFVar24 + 0x58) < (int)(uint)uVar22) {
      uVar11 = (uint)uVar22;
    }
    pFVar24 = pFVar24 + 8;
    uVar22 = (ulonglong)uVar11;
  }
  pFVar24 = this->ProxiesPerStage[2].AllocatorInstance.Data;
  iVar26 = this->ProxiesPerStage[2].ArrayNum;
  pFVar23 = pFVar24 + (longlong)iVar26 * 8;
  while( true ) {
    uVar11 = (uint)uVar22;
    if (this->ProxiesPerStage[2].ArrayNum != iVar26) {
      local_16d8[0] = 0;
      `TCheckedPointerIterator<FNiagaraSystemGpuComputeProxy_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_16d8);
    }
    pFVar25 = local_16c8;
    if (pFVar24 == pFVar23) break;
    uVar20 = *(uint *)(*(longlong *)pFVar24 + 0x58);
    if ((int)*(uint *)(*(longlong *)pFVar24 + 0x58) < (int)uVar11) {
      uVar20 = uVar11;
    }
    pFVar24 = pFVar24 + 8;
    uVar22 = (ulonglong)uVar20;
  }
  if (iVar4 <= (int)uVar11 || (char)local_16d0 != '\0') {
    this->FramesBeforeTickFlush = 0;
    if (FNiagaraGpuComputeDispatchLocal::GTickFlushMode == 1) {
      if (uVar11 == 0) {
        FNiagaraGpuReadbackManager::TickInternal
                  (*(FNiagaraGpuReadbackManager **)&this->field_0x38,false);
      }
      else {
        FDeferredUpdateResource::UpdateResources(local_16c8);
        FMaterialRenderProxy::UpdateDeferredCachedUniformExpressions();
        this_00 = (FSkeletalMeshUpdater *)(**(code **)(**(longlong **)&this->field_0x20 + 0x460))();
        this_01 = (FGPUSkinCache *)(**(code **)(**(longlong **)&this->field_0x20 + 0x458))();
        if ((this_00 != (FSkeletalMeshUpdater *)0x0) || (this_01 != (FGPUSkinCache *)0x0)) {
          local_16b8._24_8_ = L"";
          local_1698 = 0;
          local_1690 = 0;
          FRDGBuilder::FRDGBuilder
                    (&local_858,pFVar25,(FRDGEventName *)(local_16b8 + 0x18),None,
                     GMaxRHIShaderPlatform);
          if (this_00 != (FSkeletalMeshUpdater *)0x0) {
            FSkeletalMeshUpdater::Submit(this_00,&local_1660,&local_858,Graphics);
            if (local_1660.SkinCache.Pimpl.Reference != (FTaskBase *)0x0) {
              LOCK();
              paVar1 = (atomic<unsigned_int> *)
                       ((longlong)local_1660.SkinCache.Pimpl.Reference + 0x30);
              aVar2 = *paVar1;
              *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar2 == (atomic<unsigned_int>)0x1) {
                (*(code *)**(undefined8 **)local_1660.SkinCache.Pimpl.Reference)();
              }
            }
            if (local_1660.MeshDeformer.Pimpl.Reference != (FTaskBase *)0x0) {
              LOCK();
              paVar1 = (atomic<unsigned_int> *)
                       ((longlong)local_1660.MeshDeformer.Pimpl.Reference + 0x30);
              aVar2 = *paVar1;
              *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar2 == (atomic<unsigned_int>)0x1) {
                (*(code *)**(undefined8 **)local_1660.MeshDeformer.Pimpl.Reference)();
              }
            }
            if (local_1660.Inline.Pimpl.Reference != (FTaskBase *)0x0) {
              LOCK();
              paVar1 = (atomic<unsigned_int> *)((longlong)local_1660.Inline.Pimpl.Reference + 0x30);
              aVar2 = *paVar1;
              *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar2 == (atomic<unsigned_int>)0x1) {
                (*(code *)**(undefined8 **)local_1660.Inline.Pimpl.Reference)();
              }
            }
            if (local_1660.Filter.Pimpl.Reference != (FTaskBase *)0x0) {
              LOCK();
              paVar1 = (atomic<unsigned_int> *)((longlong)local_1660.Filter.Pimpl.Reference + 0x30);
              aVar2 = *paVar1;
              *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar2 == (atomic<unsigned_int>)0x1) {
                (*(code *)**(undefined8 **)local_1660.Filter.Pimpl.Reference)();
              }
            }
          }
          if (this_01 != (FGPUSkinCache *)0x0) {
            local_16d0 = (undefined8 *)0x0;
            FGPUSkinCache::Dispatch
                      (this_01,(FRDGBuilder *)local_16b8,(FTaskHandle *)&local_858,
                       (ERHIPipeline)&local_16d0);
            if ((undefined8 *)local_16b8._0_8_ != (undefined8 *)0x0) {
              LOCK();
              piVar12 = (int *)(local_16b8._0_8_ + 0x30);
              iVar26 = *piVar12;
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (iVar26 == 1) {
                (*(code *)**(undefined8 **)local_16b8._0_8_)();
              }
            }
            if (local_16d0 != (undefined8 *)0x0) {
              LOCK();
              piVar12 = (int *)(local_16d0 + 6);
              iVar26 = *piVar12;
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (iVar26 == 1) {
                (**(code **)*local_16d0)();
              }
            }
          }
          FRDGBuilder::Execute(&local_858);
          FRDGBuilder::~FRDGBuilder(&local_858);
        }
        local_128c = 0x80;
        local_1640.Object = (FWN_SceneTexturesCaptureInfo *)0x0;
        local_1640.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        iVar26 = 0;
        local_1318._80_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
        uStack_12c0 = _UNK_15060db28;
        local_1298 = (void *)0x0;
        local_12b8 = ___xmm_ffffffffffffffffffffffffffffffff;
        uStack_12b0 = _UNK_15060db28;
        local_1290 = 0;
        FEngineShowFlags::InitCustomShowFlags((FEngineShowFlags *)(local_1318 + 0x50),ESFIM_Game);
        uStack_12c0 = uStack_12c0 & 0x202f200ffc7d6fd;
        local_12b8 = local_12b8 & 0x90027823833c45c | 0x100;
        local_1318._80_8_ = local_1318._80_8_ & 0xb07e06bf001ff0ff | 0x40060003000000;
        uStack_12b0 = uStack_12b0 & 0xffffffe074606800 | 0x81f8000;
        pCVar13 = FSceneViewFamily::ConstructionValues::ConstructionValues
                            (&local_1288,(FRenderTarget *)0x0,*(FSceneInterface **)&this->field_0x20
                             ,(FEngineShowFlags *)(local_1318 + 0x50),&local_1640);
        dVar5 = (this->CachedViewInitOptions).GameTime.WorldTimeSeconds;
        (pCVar13->Time).RealTimeSeconds = (this->CachedViewInitOptions).GameTime.RealTimeSeconds;
        (pCVar13->Time).WorldTimeSeconds = dVar5;
        fVar7 = (this->CachedViewInitOptions).GameTime.DeltaRealTimeSeconds;
        fVar8 = (this->CachedViewInitOptions).GameTime.DeltaWorldTimeSeconds;
        pCVar13->bTimesSet = 1;
        (pCVar13->Time).DeltaRealTimeSeconds = fVar7;
        (pCVar13->Time).DeltaWorldTimeSeconds = fVar8;
        FSceneViewFamilyContext::FSceneViewFamilyContext
                  ((FSceneViewFamilyContext *)local_a18,pCVar13);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1288.SceneTexturesCaptureInfo.SharedReferenceCount.ReferenceController);
        if (local_1288.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_1288.EngineShowFlags.CustomShowFlags.AllocatorInstance.
                                SecondaryData);
        }
        if (local_1298 != (void *)0x0) {
          FMemory::Free(local_1298);
        }
        local_1490 = (TIntPoint<int>_u_0)0x0;
        local_1548 = UE::Math::TMatrix<double>::Identity.M[3][2];
        pFStack_1540 = (FRDGPass *)UE::Math::TMatrix<double>::Identity.M[3][3];
        local_14c8 = UE::Math::TMatrix<double>::Identity.M[3][2];
        FStack_14c0.Data = (FExtractedTexture *)UE::Math::TMatrix<double>::Identity.M[3][3];
        local_14b8 = (TIntPoint<int>_u_0)0x0;
        TStack_14b0 = (TIntPoint<int>_u_0)0x0;
        local_1478 = 0;
        uStack_1470 = 0;
        local_15d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_15d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_15c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_15b8 = UE::Math::TMatrix<double>::Identity.M[0][0];
        dStack_15b0 = UE::Math::TMatrix<double>::Identity.M[0][1];
        local_15a8 = UE::Math::TMatrix<double>::Identity.M[0][2];
        dStack_15a0 = UE::Math::TMatrix<double>::Identity.M[0][3];
        local_1598 = UE::Math::TMatrix<double>::Identity.M[1][0];
        dStack_1590 = UE::Math::TMatrix<double>::Identity.M[1][1];
        local_1588.Pimpl.Reference =
             (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
             (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
             UE::Math::TMatrix<double>::Identity.M[1][2];
        dStack_1580 = UE::Math::TMatrix<double>::Identity.M[1][3];
        local_1578.AllocatorToRestore = (void *)UE::Math::TMatrix<double>::Identity.M[2][0];
        pFStack_1570 = (FRDGAllocator *)UE::Math::TMatrix<double>::Identity.M[2][1];
        local_1568.Data = (FStruct **)UE::Math::TMatrix<double>::Identity.M[2][2];
        dStack_1560 = UE::Math::TMatrix<double>::Identity.M[2][3];
        local_1558 = (wchar_t *)UE::Math::TMatrix<double>::Identity.M[3][0];
        FStack_1550.Data = (FScriptContainerElement *)UE::Math::TMatrix<double>::Identity.M[3][1];
        local_1538 = (FRDGPass *)UE::Math::TMatrix<double>::Identity.M[0][0];
        dStack_1530 = UE::Math::TMatrix<double>::Identity.M[0][1];
        local_1528 = UE::Math::TMatrix<double>::Identity.M[0][2];
        FStack_1520.Data = (FRDGDispatchPass **)UE::Math::TMatrix<double>::Identity.M[0][3];
        local_1518 = UE::Math::TMatrix<double>::Identity.M[1][0];
        FStack_1510.Data = (FRDGPass **)UE::Math::TMatrix<double>::Identity.M[1][1];
        local_1508 = UE::Math::TMatrix<double>::Identity.M[1][2];
        FStack_1500.Data = (FRDGTexture **)UE::Math::TMatrix<double>::Identity.M[1][3];
        local_14f8 = UE::Math::TMatrix<double>::Identity.M[2][0];
        FStack_14f0.Data = (FRDGBuffer **)UE::Math::TMatrix<double>::Identity.M[2][1];
        local_14e8 = UE::Math::TMatrix<double>::Identity.M[2][2];
        FStack_14e0.Data = (FRDGView **)UE::Math::TMatrix<double>::Identity.M[2][3];
        local_14d8 = UE::Math::TMatrix<double>::Identity.M[3][0];
        FStack_14d0.Data = (FRDGUniformBuffer **)UE::Math::TMatrix<double>::Identity.M[3][1];
        local_14a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_14a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_1498 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_1488 = (TIntPoint<int>_u_0)0x0;
        local_1480 = (undefined1 *)0x0;
        FSceneViewOwner::FSceneViewOwner(&local_1468,(AActor *)0x0);
        local_1458 = 0xffffffff;
        local_1450 = 0;
        local_1448 = FLinearColor::Transparent.field0_0x0;
        local_1438 = FLinearColor::Transparent.field0_0x0;
        local_1418 = 0;
        local_1318._0_8_ = 0;
        local_1428 = FLinearColor::White.field0_0x0;
        local_1408 = 0;
        uStack_1400 = 0;
        local_13e8 = 0;
        uStack_13e0 = 0;
        local_13f8 = 0;
        uStack_13f0 = 0;
        local_1328 = 0;
        uStack_1320 = 0;
        local_1414 = 0xffffffff;
        local_1410 = 0x42c80000;
        local_13d8._0_8_ = 0;
        local_13d8._8_8_ = 0;
        local_13d8._32_8_ = 0;
        local_13d8._40_4_ = 0;
        local_13d8._44_4_ = 0x80;
        local_13d8._48_4_ = -1;
        local_13d8._52_4_ = 0;
        local_1398 = (void *)0x0;
        local_1390._0_4_ = 0;
        local_1390._8_8_ = 0;
        local_1380 = 0;
        local_137c = -1;
        local_1368 = 0;
        local_1360 = 0;
        local_135c = 0x80;
        local_1358 = 0xffffffff;
        local_1354 = 0;
        local_1348 = (void *)0x0;
        local_1340 = 0;
        local_1338 = 0xffffffffffffffff;
        local_1330 = 0x3f800000;
        local_132c = 0xbf800000;
        local_1318._8_2_ = 0x100;
        local_1318._12_4_ = 0x42b40000;
        local_1480 = local_a18;
        local_14b8 = (this->CachedViewInitOptions).ViewRect.field0_0x0._s_0.Min.field0_0x0;
        local_15c8 = (this->CachedViewInitOptions).ViewOrigin.field0_0x0._s_0.Z;
        local_1318._64_8_ = ___xmm_3f8000003f8000003f8000003f800000;
        local_1318._72_8_ = _UNK_15076b1f8;
        local_15d8 = (this->CachedViewInitOptions).ViewOrigin.field0_0x0._s_0.X;
        dStack_15d0 = (this->CachedViewInitOptions).ViewOrigin.field0_0x0._s_0.Y;
        TStack_14b0 = (this->CachedViewInitOptions).ViewRect.field0_0x0._s_0.Max.field0_0x0;
        local_15b8 = (this->CachedViewInitOptions).ViewRotationMatrix.M[0][0];
        dStack_15b0 = (this->CachedViewInitOptions).ViewRotationMatrix.M[0][1];
        local_1318._16_4_ = (undefined4)___xmm_00000000000000000000000042b40000;
        local_1318._20_4_ = 0x3f800000;
        local_15a8 = (this->CachedViewInitOptions).ViewRotationMatrix.M[0][2];
        dStack_15a0 = (this->CachedViewInitOptions).ViewRotationMatrix.M[0][3];
        local_1598 = (this->CachedViewInitOptions).ViewRotationMatrix.M[1][0];
        dStack_1590 = (this->CachedViewInitOptions).ViewRotationMatrix.M[1][1];
        local_1318._29_3_ = (undefined3)((ulonglong)_UNK_150ee30d8 >> 0x28);
        local_1318._24_5_ = 0x3f800000;
        local_1588.Pimpl.Reference =
             (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
             (this->CachedViewInitOptions).ViewRotationMatrix.M[1][2];
        dStack_1580 = (this->CachedViewInitOptions).ViewRotationMatrix.M[1][3];
        local_1318._32_4_ = 0;
        local_1578.AllocatorToRestore =
             (void *)(this->CachedViewInitOptions).ViewRotationMatrix.M[2][0];
        pFStack_1570 = (FRDGAllocator *)(this->CachedViewInitOptions).ViewRotationMatrix.M[2][1];
        local_1318._36_2_ = 0;
        local_1568.Data = (FStruct **)(this->CachedViewInitOptions).ViewRotationMatrix.M[2][2];
        dStack_1560 = (this->CachedViewInitOptions).ViewRotationMatrix.M[2][3];
        local_1318._40_4_ = 0xbf800000;
        local_1558 = (wchar_t *)(this->CachedViewInitOptions).ViewRotationMatrix.M[3][0];
        FStack_1550.Data =
             (FScriptContainerElement *)(this->CachedViewInitOptions).ViewRotationMatrix.M[3][1];
        local_1318._44_4_ = 0x3f800000;
        local_1548 = (this->CachedViewInitOptions).ViewRotationMatrix.M[3][2];
        pFStack_1540 = (FRDGPass *)(this->CachedViewInitOptions).ViewRotationMatrix.M[3][3];
        local_1318._48_4_ = 0x3f800000;
        local_1538 = (FRDGPass *)(this->CachedViewInitOptions).ProjectionMatrix.M[0][0];
        dStack_1530 = (this->CachedViewInitOptions).ProjectionMatrix.M[0][1];
        local_1528 = (this->CachedViewInitOptions).ProjectionMatrix.M[0][2];
        FStack_1520.Data =
             (FRDGDispatchPass **)(this->CachedViewInitOptions).ProjectionMatrix.M[0][3];
        local_1518 = (this->CachedViewInitOptions).ProjectionMatrix.M[1][0];
        FStack_1510.Data = (FRDGPass **)(this->CachedViewInitOptions).ProjectionMatrix.M[1][1];
        local_1508 = (this->CachedViewInitOptions).ProjectionMatrix.M[1][2];
        FStack_1500.Data = (FRDGTexture **)(this->CachedViewInitOptions).ProjectionMatrix.M[1][3];
        local_14f8 = (this->CachedViewInitOptions).ProjectionMatrix.M[2][0];
        FStack_14f0.Data = (FRDGBuffer **)(this->CachedViewInitOptions).ProjectionMatrix.M[2][1];
        local_14e8 = (this->CachedViewInitOptions).ProjectionMatrix.M[2][2];
        FStack_14e0.Data = (FRDGView **)(this->CachedViewInitOptions).ProjectionMatrix.M[2][3];
        local_14d8 = (this->CachedViewInitOptions).ProjectionMatrix.M[3][0];
        FStack_14d0.Data =
             (FRDGUniformBuffer **)(this->CachedViewInitOptions).ProjectionMatrix.M[3][1];
        local_14c8 = (this->CachedViewInitOptions).ProjectionMatrix.M[3][2];
        FStack_14c0.Data =
             (FExtractedTexture *)(this->CachedViewInitOptions).ProjectionMatrix.M[3][3];
        local_1490 = local_14b8;
        local_1488 = TStack_14b0;
        pIVar14 = GetRendererModule();
        pFVar25 = local_16c8;
        (**(code **)((longlong)*pIVar14 + 0x48))(pIVar14,local_16c8,local_a18);
        if ((local_a08 < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_16b8._8_4_ = 0;
        local_16b8._12_4_ = 1;
        local_16b8._0_8_ = *(undefined8 *)local_a18._8_8_;
        pIVar14 = GetRendererModule();
        (**(code **)((longlong)*pIVar14 + 0x90))(pIVar14,pFVar25);
        uVar9 = local_16b8._0_8_;
        this->field_0x1e0 = 1;
        this->MaxTicksToFlush = iVar4;
        if (0 < (int)uVar11) {
          lVar6 = CONCAT44(local_16b8._12_4_,local_16b8._8_4_);
          local_16c0.__this = this;
          local_16b8._16_8_ = this;
          do {
            local_1688.EventFormat = L"";
            local_1688.FormattedEventName.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_1688.FormattedEventName.Data.ArrayNum = 0;
            local_1688.FormattedEventName.Data.ArrayMax = 0;
            FRDGBuilder::FRDGBuilder
                      ((FRDGBuilder *)local_11e8,pFVar25,&local_1688,None,GMaxRHIShaderPlatform);
            CreateSystemTextures((FRDGBuilder *)local_11e8);
            local_1670 = 0;
            local_1668 = 0;
            (**(code **)(*(longlong *)this + 0x60))(this,local_11e8,1,&local_1670);
            pFVar15 = FRDGEventName::FRDGEventName
                                (&local_1608,1,L"UpdateDrawIndirectBuffers - PreOpaque");
            FRDGUserValidation::ValidateAddPass(&local_ae8,pFVar15,None);
            FRDGBuilder::FlushAccessModeQueue((FRDGBuilder *)local_11e8);
            pvVar16 = FMemStackBase::Alloc((FMemStackBase *)(local_11e8 + 0x18),400,8);
            pTVar17 = TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush'::__l37::<lambda_1>_>
                      ::
                      TRDGEmptyLambdaPass<_FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush_::__l37::<lambda_1>_>
                                (pvVar16,pFVar15,NeverCull,(<lambda_1> *)(local_16b8 + 0x10));
            if (local_1038 == local_1034[0]) {
              local_1038 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                                     (0x808,&local_1040,local_1034);
            }
            local_1040.Data[local_1038] = (FRDGPass *)pTVar17;
            *(int *)&pTVar17->field_0x4c = local_1038;
            local_1038 = local_1038 + 1;
            FRDGBuilder::SetupEmptyPass((FRDGBuilder *)local_11e8,(FRDGPass *)pTVar17);
            if (local_1608.FormattedEventName.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1608.FormattedEventName.Data.AllocatorInstance.Data);
            }
            local_1628 = uVar9;
            lStack_1620 = lVar6;
            (**(code **)(*(longlong *)this + 0x68))(this,local_11e8,&local_1628,1);
            pFVar18 = UE::FXRenderingUtils::CreateSceneUniformBuffer
                                ((FRDGBuilder *)local_11e8,*(FSceneInterface **)&this->field_0x20);
            local_1618 = uVar9;
            lStack_1610 = lVar6;
            (**(code **)(*(longlong *)this + 0x98))(this,local_11e8,&local_1618,pFVar18);
            pFVar15 = FRDGEventName::FRDGEventName
                                (&local_15f0,1,L"UpdateDrawIndirectBuffers - PostOpaque");
            FRDGUserValidation::ValidateAddPass(&local_ae8,pFVar15,None);
            FRDGBuilder::FlushAccessModeQueue((FRDGBuilder *)local_11e8);
            pvVar16 = FMemStackBase::Alloc((FMemStackBase *)(local_11e8 + 0x18),400,8);
            pTVar19 = TRDGEmptyLambdaPass<`FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush'::__l37::<lambda_2>_>
                      ::
                      TRDGEmptyLambdaPass<_FNiagaraGpuComputeDispatch::ProcessPendingTicksFlush_::__l37::<lambda_2>_>
                                (pvVar16,pFVar15,NeverCull,&local_16c0);
            if (local_1038 == local_1034[0]) {
              local_1038 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                                     (0x808,&local_1040,local_1034);
            }
            local_1040.Data[local_1038] = (FRDGPass *)pTVar19;
            *(int *)&pTVar19->field_0x4c = local_1038;
            local_1038 = local_1038 + 1;
            FRDGBuilder::SetupEmptyPass((FRDGBuilder *)local_11e8,(FRDGPass *)pTVar19);
            if (local_15f0.FormattedEventName.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_15f0.FormattedEventName.Data.AllocatorInstance.Data);
            }
            FRDGBuilder::Execute((FRDGBuilder *)local_11e8);
            FRDGBuilder::~FRDGBuilder((FRDGBuilder *)local_11e8);
            iVar26 = iVar26 + this->MaxTicksToFlush;
            pFVar25 = local_16c8;
          } while (iVar26 < (int)uVar11);
        }
        this->MaxTicksToFlush = 0x7fffffff;
        this->field_0x1e0 = 0;
        if (local_137c != -1) {
          local_1340 = 0;
          if (local_1348 != (void *)0x0) {
            FMemory::Free(local_1348);
          }
          TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(local_1390 + 8));
        }
        local_1390._0_4_ = 0;
        if (local_1398 != (void *)0x0) {
          FMemory::Free(local_1398);
        }
        TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_13d8);
        FSceneViewFamilyContext::~FSceneViewFamilyContext((FSceneViewFamilyContext *)local_a18);
      }
    }
    else if (FNiagaraGpuComputeDispatchLocal::GTickFlushMode == 2) {
      FinishDispatches(this);
      FNiagaraAsyncGpuTraceHelper::Reset((this->AsyncGpuTraceHelper).Ptr);
    }
  }
  return;
}

// RemoveGpuComputeProxy @ 149303650

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::RemoveGpuComputeProxy
          (FNiagaraGpuComputeDispatch *this,FNiagaraSystemGpuComputeProxy *param_1)

{
  Type TVar1;
  FScriptContainerElement *pFVar2;
  FDebugReadbackInfo *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  TArray<FNiagaraSystemGpuComputeProxy_*,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  FNiagaraSystemGpuComputeProxy **local_res8;
  FNiagaraSystemGpuComputeProxy *local_res10;
  
  local_res10 = param_1;
  if ((param_1->ComputeDispatchIndex == -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComputeProxy->ComputeDispatchIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                         ,0x118,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar10 = local_res10->ComputeDispatchIndex;
  lVar14 = (longlong)(int)uVar10;
  iVar15 = 0;
  TVar1 = local_res10->ComputeTickStage;
  uVar13 = ~uVar10 >> 0x1f;
  pTVar12 = this->ProxiesPerStage + (int)TVar1;
  uVar8 = 0;
  if ((int)uVar10 < pTVar12->ArrayNum) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(FNiagaraSystemGpuComputeProxy **)((pTVar12->AllocatorInstance).Data + lVar14 * 8) !=
       local_res10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ProxiesPerStage[TickStage][ProxyIndex] == ComputeProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                         ,0x11c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = 0;
  if ((int)uVar10 < pTVar12->ArrayNum) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (pTVar12->AllocatorInstance).Data;
  iVar9 = ~uVar10 + pTVar12->ArrayNum;
  if (1 < iVar9) {
    iVar9 = 1;
  }
  if (iVar9 != 0) {
    memmove(pFVar2 + lVar14 * 8,pFVar2 + (longlong)(pTVar12->ArrayNum - iVar9) * 8,
            (longlong)iVar9 << 3);
  }
  pTVar12->ArrayNum = pTVar12->ArrayNum + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&pTVar12->AllocatorInstance,pTVar12->ArrayNum,&pTVar12->ArrayMax);
  if ((-1 < (int)uVar10) && ((int)uVar10 < this->ProxiesPerStage[(int)TVar1].ArrayNum)) {
    uVar8 = 0;
    if ((int)uVar10 < pTVar12->ArrayNum) {
      uVar8 = uVar13;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(uint *)(*(longlong *)((pTVar12->AllocatorInstance).Data + lVar14 * 8) + 0x10) = uVar10;
  }
  local_res10->ComputeDispatchIndex = -1;
  this->NumProxiesThatRequireGlobalDistanceField =
       this->NumProxiesThatRequireGlobalDistanceField - local_res10->bRequiresGlobalDistanceField;
  this->NumProxiesThatRequireDepthBuffer =
       this->NumProxiesThatRequireDepthBuffer - local_res10->bRequiresDepthBuffer;
  this->NumProxiesThatRequireEarlyViewData =
       this->NumProxiesThatRequireEarlyViewData - local_res10->bRequiresEarlyViewData;
  this->NumProxiesThatRequireRayTracingScene =
       this->NumProxiesThatRequireRayTracingScene - local_res10->bRequiresRayTracingScene;
  this->NumProxiesThatRequireCurrentFrameNDC =
       this->NumProxiesThatRequireCurrentFrameNDC - local_res10->bRequiresCurrentFrameNDC;
  if (this->ProxyGpuCountBufferEstimate < local_res10->GpuCountBufferEstimate) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1042012302129234220>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                       ,300,"GpuCountEstimate <= ProxyGpuCountBufferEstimate");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar10 = 0;
  }
  else {
    uVar10 = this->ProxyGpuCountBufferEstimate - local_res10->GpuCountBufferEstimate;
  }
  this->ProxyGpuCountBufferEstimate = uVar10;
  local_res8 = &local_res10;
  iVar9 = (this->GpuDebugReadbackInfos).ArrayNum;
  if (iVar9 != 0) {
    pFVar3 = (FDebugReadbackInfo *)(this->GpuDebugReadbackInfos).AllocatorInstance.Data;
    bVar6 = `FNiagaraGpuComputeDispatch::RemoveGpuComputeProxy'::__l2::<lambda_1>::operator()
                      (&local_res8,pFVar3);
    bVar6 = !bVar6;
    iVar11 = 0;
    do {
      iVar5 = iVar11;
      do {
        iVar5 = iVar5 + 1;
        if (iVar9 <= iVar5) break;
        bVar7 = `FNiagaraGpuComputeDispatch::RemoveGpuComputeProxy'::__l2::<lambda_1>::operator()
                          (&local_res8,pFVar3 + iVar5);
      } while (bVar6 == !bVar7);
      iVar16 = iVar5 - iVar11;
      if (bVar6 == false) {
        DestructItems<FNiagaraGpuComputeDispatch::FDebugReadbackInfo,int>(pFVar3 + iVar11,iVar16);
      }
      else {
        if (iVar15 != iVar11) {
          memmove(pFVar3 + iVar15,pFVar3 + iVar11,(longlong)iVar16 << 5);
        }
        iVar15 = iVar15 + iVar16;
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar11 = iVar5;
    } while (iVar5 < iVar9);
    (this->GpuDebugReadbackInfos).ArrayNum = iVar15;
  }
  return;
}

// RemoveNDCDataProxy @ 1493039b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::RemoveNDCDataProxy
          (FNiagaraGpuComputeDispatch *this,TSharedPtr<FNiagaraDataChannelDataProxy,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->Object == (FNiagaraDataChannelDataProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNiagaraDataChannelDataProxy::OnRemovedFromDispatcher
            (param_1->Object,(FNiagaraGpuComputeDispatchInterface *)this);
  TArray<TSharedPtr<FNiagaraDataChannelDataProxy,1>,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&this->NDCDataProxies,param_1,Default);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RemoveVectorField @ 149303cf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::RemoveVectorField
          (FNiagaraGpuComputeDispatch *this,UVectorFieldComponent *param_1)

{
  return;
}

// RequiresEarlyViewUniformBuffer @ 149303e50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FNiagaraGpuComputeDispatch::RequiresEarlyViewUniformBuffer(FNiagaraGpuComputeDispatch *this)

{
  return this->NumProxiesThatRequireEarlyViewData != 0;
}

// RequiresRayTracingScene @ 149303e70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FNiagaraGpuComputeDispatch::RequiresRayTracingScene(FNiagaraGpuComputeDispatch *this)

{
  return this->NumProxiesThatRequireRayTracingScene != 0;
}

// ResetDataInterfaces @ 149303f90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::ResetDataInterfaces
          (FNiagaraGpuComputeDispatch *this,FRDGBuilder *param_1,FNiagaraGPUSystemTick *param_2,
          FNiagaraComputeInstanceData *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> local_48;
  FRDGBuilder *local_38;
  FNiagaraGpuComputeDispatch *local_30;
  ulong64 local_28;
  
  iVar1 = (param_3->DataInterfaceProxies).ArrayNum;
  if (iVar1 != 0) {
    FNiagaraShaderScript::GetShader(param_3->Context->GPUScript_RT,&local_48,0);
    FVar9 = ((local_48.ShaderContent)->DataInterfaceParameters).AllocatorInstance;
    if (((ulonglong)FVar9 & 1) != 0) {
      FVar9 = (ForAnyElementType)
              ((longlong)
               &((local_48.ShaderContent)->DataInterfaceParameters).AllocatorInstance.field_0x0 +
              ((longlong)FVar9 >> 0x18));
    }
    iVar2 = ((local_48.ShaderContent)->DataInterfaceParameters).ArrayNum;
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_28 = param_2->SystemInstanceID;
    uVar7 = 0;
    if (0 < iVar1) {
      lVar8 = 0;
      local_38 = param_1;
      local_30 = this;
      do {
        uVar6 = 0;
        if ((int)uVar7 < iVar2) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(int *)FVar9 != -1) {
          uVar6 = 0;
          if ((int)uVar7 < (param_3->DataInterfaceProxies).ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          plVar3 = *(longlong **)
                    ((param_3->DataInterfaceProxies).AllocatorInstance.Data + lVar8 * 8);
          (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 1;
        FVar9 = (ForAnyElementType)((longlong)FVar9 + 0x18);
      } while (lVar8 < iVar1);
    }
  }
  return;
}

// SetDataInterfaceParameters @ 149305fd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::SetDataInterfaceParameters
          (FNiagaraGpuComputeDispatch *this,FRDGBuilder *param_1,FNiagaraGPUSystemTick *param_2,
          FNiagaraComputeInstanceData *param_3,
          TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> *param_4,
          FNiagaraSimStageData *param_5,FNiagaraShaderScriptParametersMetadata *param_6,
          uchar *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FShaderMapBase *pFVar4;
  FShaderMapPointerTable *pFVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  TArray<FNiagaraDataInterfaceParamRef,TMemoryImageAllocator<0>_> *pTVar10;
  UClass *pUVar11;
  FString *pFVar12;
  uint uVar13;
  UNiagaraDataInterfaceBase *pUVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  ulonglong *puVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  longlong lVar20;
  FRDGBuilder *local_b8;
  FNiagaraGpuComputeDispatch *local_b0;
  FNiagaraGPUSystemTick *local_a8;
  FNiagaraComputeInstanceData *local_a0;
  FNiagaraSimStageData *local_98;
  TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> *local_90;
  FNiagaraShaderScriptParametersMetadata *local_88;
  uchar *local_80;
  ulonglong local_78;
  undefined8 uStack_70;
  int local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  iVar1 = (param_3->DataInterfaceProxies).ArrayNum;
  if (iVar1 != 0) {
    pwVar19 = L"";
    pFVar4 = param_4->ShaderMap;
    if ((pFVar4->PointerTable == (FShaderMapPointerTable *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("PointerTable",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x9b4,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = pFVar4->PointerTable;
    pTVar10 = &param_4->ShaderContent->DataInterfaceParameters;
    FVar16 = pTVar10->AllocatorInstance;
    if (((ulonglong)FVar16 & 1) != 0) {
      FVar16 = (ForAnyElementType)
               ((longlong)&(pTVar10->AllocatorInstance).field_0x0 + ((longlong)FVar16 >> 0x18));
    }
    iVar2 = (param_4->ShaderContent->DataInterfaceParameters).ArrayNum;
    if ((iVar2 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_98 = param_5;
    uVar15 = 0;
    local_88 = param_6;
    local_80 = param_7;
    local_90 = param_4;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    if (0 < iVar1) {
      lVar20 = 0;
      puVar17 = (ulonglong *)((longlong)FVar16 + 0x10);
      local_b8 = param_1;
      local_b0 = this;
      local_a8 = param_2;
      local_a0 = param_3;
      do {
        uVar9 = 0;
        if ((int)uVar15 < (param_3->DataInterfaceProxies).ArrayNum) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar6 = *(undefined8 *)((param_3->DataInterfaceProxies).AllocatorInstance.Data + lVar20 * 8)
        ;
        uVar9 = 0;
        if ((int)uVar15 < iVar2) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar3 = (int)puVar17[-2];
        if (iVar3 != -1) {
          local_78 = *puVar17;
          if ((local_78 & 1) != 0) {
            local_78 = ((longlong)local_78 >> 0x18) + (longlong)puVar17;
          }
          pUVar14 = (UNiagaraDataInterfaceBase *)puVar17[-1];
          uStack_70 = uVar6;
          local_68 = iVar3;
          if (((ulonglong)pUVar14 & 1) != 0) {
            uVar13 = (uint)((ulonglong)pUVar14 >> 1);
            uVar9 = 0;
            if ((int)uVar13 < *(int *)&pFVar5[1].ShaderTypes.field_0x20) {
              uVar9 = ~uVar13 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pUVar14 = *(UNiagaraDataInterfaceBase **)
                       (*(longlong *)&pFVar5[1].ShaderTypes.field_0x18 + (longlong)(int)uVar13 * 8);
          }
          if (pUVar14 == (UNiagaraDataInterfaceBase *)0x0) {
            pFVar12 = GetTypeName<UNiagaraDataInterface>(&local_38);
            if ((pFVar12->Data).ArrayNum != 0) {
              pwVar19 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(L"nullptr",pwVar19);
          }
          pUVar11 = Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
          iVar3 = (int)pUVar11->_padding_;
          if ((*(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38) < iVar3) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar11->_padding_)) {
            pFVar12 = GetTypeName<UNiagaraDataInterface>(&local_58);
            if ((pFVar12->Data).ArrayNum == 0) {
              pwVar18 = L"";
            }
            else {
              pwVar18 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
            }
            pFVar12 = GetFullNameForCastLogError<UNiagaraDataInterfaceBase>(&local_48,pUVar14);
            if ((pFVar12->Data).ArrayNum != 0) {
              pwVar19 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar19,pwVar18);
          }
          (**(code **)(*(longlong *)pUVar14 + 0x440))(pUVar14,&local_b8);
        }
        uVar15 = uVar15 + 1;
        lVar20 = lVar20 + 1;
        puVar17 = puVar17 + 3;
      } while (lVar20 < iVar1);
    }
  }
  return;
}

// ShouldDebugDraw_RenderThread @ 149309080

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FNiagaraGpuComputeDispatch::ShouldDebugDraw_RenderThread(FNiagaraGpuComputeDispatch *this)

{
  return false;
}

// Tick @ 14930a880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::Tick(FNiagaraGpuComputeDispatch *this,UWorld *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_d8 [32];
  TArrayView<FRenderCommandPipe_*_const,int> local_b8;
  FRenderCommandPipe *local_a8 [2];
  code *local_98 [2];
  undefined **local_88;
  FNiagaraGpuComputeDispatch *pFStack_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  FNiagaraGpuComputeDispatch *pFStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  FSyncScope local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                       ,0x159,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_b8.ArrayNum = 1;
  local_a8[0] = &UE::RenderCommandPipe::SkeletalMesh;
  local_b8.DataPtr = local_a8;
  UE::RenderCommandPipe::FSyncScope::FSyncScope(&local_28,&local_b8);
  local_70 = (undefined ***)0x0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraGpuComputeDispatch::Tick'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraGpuComputeDispatch::Tick'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_80 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraGpuComputeDispatch::Tick_::__l2::TSTR_NiagaraPumpBatcher347>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_58 = local_88;
    pFStack_50 = pFStack_80;
    local_48 = local_78;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FNiagaraGpuComputeDispatch::Tick'::__l2::TSTR_NiagaraPumpBatcher347>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar3);
    uVar5 = (ulonglong)local_38;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_68 + 0x10);
        if (local_40 != (undefined ***)0x0) {
          pppuVar4 = local_40;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar4 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar4 = local_70;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  UE::RenderCommandPipe::FSyncScope::~FSyncScope(&local_28);
  return;
}

// TransferMultiGPUBuffers @ 14930b0c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::TransferMultiGPUBuffers
          (FNiagaraGpuComputeDispatch *this,FRHICommandList *param_1)

{
  int *piVar1;
  int iVar2;
  FTransferResourceParams *pFVar3;
  code *pcVar4;
  bool bVar5;
  TArrayView<FTransferResourceParams_const_,int> *pTVar6;
  TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  TArray<FCrossGPUTransferFence_*,TSizedDefaultAllocator<32>_> local_118;
  FTransferResourceParams *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FTransferResourceParams *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FCrossGPUTransferFence **local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FTransferResourceParams *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TArrayView<FTransferResourceParams_const_,int> local_a8;
  TArrayView<FTransferResourceParams_const_,int> local_98;
  TArrayView<FCrossGPUTransferFence_*_const,int> local_88;
  TArrayView<FTransferResourceParams_const_,int> local_78;
  TArrayView<FCrossGPUTransferFence_*_const,int> local_68;
  TArrayView<FCrossGPUTransferFence_*_const,int> local_58;
  TArrayView<FTransferResourceParams_const_,int> local_48;
  TArrayView<FTransferResourceParams_const_,int> local_38;
  ulonglong uVar9;
  
  uVar9 = 0;
  if ((this->CrossGPUTransferBuffers).ArrayNum != 0) {
    pTVar7 = &this->CrossGPUTransferBuffers;
    pTVar6 = TArrayView<FTransferResourceParams_const_,int>::
             TArrayView<FTransferResourceParams_const_,int><TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_>_&,TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_>_>
                       (&local_38,pTVar7);
    local_a8.DataPtr = pTVar6->DataPtr;
    local_a8.ArrayNum = pTVar6->ArrayNum;
    local_a8._12_4_ = *(undefined4 *)&pTVar6->field_0xc;
    FRHIComputeCommandList::TransferResources((FRHIComputeCommandList *)param_1,&local_a8);
    piVar1 = &(this->CrossGPUTransferBuffers).ArrayMax;
    pFVar3 = (FTransferResourceParams *)(pTVar7->AllocatorInstance).Data;
    iVar2 = (this->CrossGPUTransferBuffers).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FTransferResourceParams,int>(pFVar3,iVar2);
      (this->CrossGPUTransferBuffers).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,0,&pTVar7->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FTransferResourceParams,int>(pFVar3,iVar2);
      (this->CrossGPUTransferBuffers).ArrayNum = 0;
    }
  }
  if (GNumExplicitGPUsForRendering != 0) {
    do {
      if (this->OptimizedCrossGPUTransferBuffers[uVar9].ArrayNum != 0) {
        local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.ArrayNum = 0;
        local_118.ArrayMax = 0;
        pTVar7 = this->OptimizedCrossGPUTransferBuffers + uVar9;
        local_108 = (FTransferResourceParams *)(pTVar7->AllocatorInstance).Data;
        iVar2 = pTVar7->ArrayNum;
        if ((iVar2 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_98._12_4_ = uStack_fc;
        local_98.ArrayNum = iVar2;
        local_98.DataPtr = local_108;
        iStack_100 = iVar2;
        RHIGenerateCrossGPUPreTransferFences(&local_98,&local_118);
        iVar2 = local_118.ArrayNum;
        local_f8 = local_118.AllocatorInstance.Data;
        if ((local_118.ArrayNum < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_e8 = (FTransferResourceParams *)(pTVar7->AllocatorInstance).Data;
        iStack_f0 = iVar2;
        iVar2 = pTVar7->ArrayNum;
        if ((iVar2 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_88._12_4_ = uStack_ec;
        local_88.ArrayNum = iStack_f0;
        local_78._12_4_ = uStack_dc;
        local_78.ArrayNum = iVar2;
        local_78.DataPtr = local_e8;
        local_88.DataPtr = (FCrossGPUTransferFence **)local_f8;
        iStack_e0 = iVar2;
        FRHIComputeCommandList::CrossGPUTransferSignal
                  ((FRHIComputeCommandList *)param_1,&local_78,&local_88);
        iStack_d0 = 1;
        local_d8 = this->OptimizedCrossGPUFences + uVar9;
        iVar2 = local_118.ArrayNum;
        local_c8 = local_118.AllocatorInstance.Data;
        if ((local_118.ArrayNum < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_b8 = (FTransferResourceParams *)(pTVar7->AllocatorInstance).Data;
        iStack_c0 = iVar2;
        iVar2 = pTVar7->ArrayNum;
        if ((iVar2 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_68._12_4_ = uStack_cc;
        local_68.ArrayNum = iStack_d0;
        local_58._12_4_ = uStack_bc;
        local_58.ArrayNum = iStack_c0;
        local_68.DataPtr = local_d8;
        local_48._12_4_ = uStack_ac;
        local_48.ArrayNum = iVar2;
        local_48.DataPtr = local_b8;
        local_58.DataPtr = (FCrossGPUTransferFence **)local_c8;
        iStack_b0 = iVar2;
        FRHIComputeCommandList::CrossGPUTransfer
                  ((FRHIComputeCommandList *)param_1,&local_48,&local_58,&local_68);
        piVar1 = &pTVar7->ArrayMax;
        pFVar3 = (FTransferResourceParams *)(pTVar7->AllocatorInstance).Data;
        if (*piVar1 < 0) {
          DestructItems<FTransferResourceParams,int>(pFVar3,pTVar7->ArrayNum);
          pTVar7->ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,0,&pTVar7->AllocatorInstance,0,piVar1);
          }
        }
        else {
          DestructItems<FTransferResourceParams,int>(pFVar3,pTVar7->ArrayNum);
          pTVar7->ArrayNum = 0;
        }
        if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.AllocatorInstance.Data);
        }
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 < GNumExplicitGPUsForRendering);
  }
  return;
}

// UpdateInstanceCountManager @ 14930d430

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::UpdateInstanceCountManager
          (FNiagaraGpuComputeDispatch *this,FRHICommandListImmediate *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  uint uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUReadback_RT> FVar17;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUReadbackLock> FVar18;
  FScriptContainerElement *pFVar19;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  FName FVar24;
  longlong *plVar25;
  int iVar26;
  FNiagaraGPUInstanceCountManager *pFVar27;
  longlong lVar28;
  FName FVar29;
  uint uVar30;
  longlong lVar31;
  bool bVar32;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_d6 [6];
  FName local_d0;
  FName local_c8;
  FScriptContainerElement *local_c0;
  uint local_b8;
  FNiagaraGPUInstanceCountManager *local_b0;
  FColor_u_0 local_a8;
  FColor_u_0 local_a4;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_80;
  LARGE_INTEGER local_70;
  FStatMessage local_68;
  FName local_58;
  FName local_50 [2];
  
  bVar32 = -1 < CpuChannel->Enabled;
  if (bVar32) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId704,"FNiagaraGpuComputeDispatch_UpdateInstanceCountManager",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
               ,0x2c0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId704);
  }
  local_c8 = (FName)&this->ProxiesPerStage[0].ArrayNum;
  local_d0.ComparisonIndex.Value = 3;
  local_d0.Number = 0;
  iVar26 = 0;
  do {
    local_b8 = *(uint *)local_c8;
    uVar22 = (ulonglong)(int)local_b8;
    pFVar19 = (((TArray<FNiagaraSystemGpuComputeProxy_*,TSizedDefaultAllocator<32>_> *)
               ((longlong)local_c8 + -8))->AllocatorInstance).Data;
    pFVar27 = (FNiagaraGPUInstanceCountManager *)(pFVar19 + uVar22 * 8);
    local_b0 = pFVar27;
    while( true ) {
      local_c0 = pFVar19;
      if (*(int *)local_c8 != (int)uVar22) {
        local_d6[0] = 0;
        `TCheckedPointerIterator<FNiagaraSystemGpuComputeProxy_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_d6);
      }
      if ((FNiagaraGPUInstanceCountManager *)pFVar19 == pFVar27) break;
      lVar3 = *(longlong *)pFVar19;
      uVar30 = 0;
      iVar20 = this->MaxTicksToFlush;
      if (*(int *)(lVar3 + 0x58) < this->MaxTicksToFlush) {
        iVar20 = *(int *)(lVar3 + 0x58);
      }
      lVar28 = (longlong)iVar20;
      if (0 < iVar20) {
        lVar31 = 0;
        do {
          uVar15 = 0;
          if ((int)uVar30 < *(int *)(lVar3 + 0x58)) {
            uVar15 = ~uVar30 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar23 = *(longlong *)(lVar3 + 0x50);
          iVar26 = iVar26 + *(int *)(lVar23 + 0x4c + lVar31);
          iVar20 = *(int *)(lVar23 + 0x48 + lVar31);
          lVar23 = *(longlong *)(lVar23 + 0x28 + lVar31);
          if ((iVar20 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar12)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar21 = (longlong)iVar20 * 0x128 + lVar23;
          for (; lVar23 != lVar21; lVar23 = lVar23 + 0x128) {
            if ((*(byte *)(lVar23 + 0x120) & 1) != 0) {
              *(undefined4 *)(*(longlong *)(lVar23 + 200) + 8) = 0xffffffff;
            }
          }
          uVar30 = uVar30 + 1;
          lVar31 = lVar31 + 0x68;
          lVar28 = lVar28 + -1;
          pFVar19 = local_c0;
          pFVar27 = local_b0;
        } while (lVar28 != 0);
      }
      pFVar19 = pFVar19 + 8;
      uVar22 = (ulonglong)local_b8;
    }
    local_c8 = (FName)((longlong)local_c8 + 0x10);
    local_d0 = (FName)((longlong)local_d0 + -1);
  } while (local_d0 != (FName)0x0);
  pFVar27 = (FNiagaraGPUInstanceCountManager *)&this->field_0x48;
  local_b0 = pFVar27;
  FNiagaraGPUInstanceCountManager::ResizeBuffers
            (pFVar27,param_1,this->ProxyGpuCountBufferEstimate + iVar26);
  FVar17 = StatPtr_STAT_NiagaraGPUReadback_RT;
  if (StatPtr_STAT_NiagaraGPUReadback_RT ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUReadback_RT>)0x0) {
    pFVar16 = ::FName::FName(&local_58,"STAT_NiagaraGPUReadback_RT");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUReadback_RT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUReadback_RT,*pFVar16,
                        L"GPU Data Readback [RT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar29 = *(FName *)FVar17;
  bVar12 = false;
  bVar9 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  bVar11 = false;
  bVar13 = false;
  if ((FVar29.ComparisonIndex.Value.Value == 0) &&
     (bVar6 = bVar12, bVar8 = bVar9, FVar29.Number == 0)) {
LAB_14930d76a:
    bVar9 = bVar13;
    bVar12 = bVar11;
    bVar11 = false;
    local_c8 = local_90;
    FVar29 = local_90;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a8._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar12 = false;
      bVar9 = true;
      bVar11 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar29.ComparisonIndex.Value.Value;
        local_a0.Number = FVar29.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuComputeDispatch.cpp"
                   ,0x2e0);
        bVar12 = true;
        bVar9 = true;
        bVar11 = true;
        bVar13 = true;
      }
    }
    bVar6 = bVar12;
    bVar8 = bVar9;
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14930d76a;
    local_d0 = FVar29;
    local_c8 = FVar29;
    FThreadStats::AddMessage(FVar29,CycleScopeStart);
    bVar11 = true;
  }
  bVar13 = IsInRenderingThread();
  if ((!bVar13) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                          ,0x26e,L""), bVar13)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)&this->field_0xd8;
  if (((lVar3 == 0) || (*(int *)&this->field_0xe0 == 0)) ||
     ((*(longlong *)(lVar3 + 8) != 0 &&
      ((*(int *)(*(longlong *)(lVar3 + 8) + 0x18) != 0 ||
       (cVar14 = (**(code **)(**(longlong **)(lVar3 + 8) + 0x20))(), cVar14 == '\0'))))))
  goto LAB_14930dc88;
  FVar18 = StatPtr_STAT_NiagaraGPUReadbackLock;
  if (StatPtr_STAT_NiagaraGPUReadbackLock ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUReadbackLock>)0x0) {
    pFVar16 = ::FName::FName(local_50,"STAT_NiagaraGPUReadbackLock");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUReadbackLock>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUReadbackLock,*pFVar16,
                        L"GPU Readback Lock","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar18;
  bVar13 = false;
  bVar7 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  if ((FVar24.ComparisonIndex.Value.Value == 0) && (FVar24.Number == 0)) {
LAB_14930d8fa:
    bVar5 = false;
    FVar24 = local_80;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a4._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar13 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_98.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                   ,0x272);
        bVar13 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14930d8fa;
    local_d0 = FVar24;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar5 = true;
  }
  pFVar19 = (FScriptContainerElement *)
            (**(code **)(**(longlong **)&this->field_0xd8 + 0x18))
                      (*(longlong **)&this->field_0xd8,*(int *)&this->field_0xe0 << 2);
  local_c0 = pFVar19;
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar24 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_68.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_70);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_68);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  pFVar27 = local_b0;
  if (pFVar19 != (FScriptContainerElement *)0x0) {
    iVar26 = this->ProxiesPerStage[0].ArrayNum;
    pFVar19 = this->ProxiesPerStage[0].AllocatorInstance.Data;
    local_d0 = (FName)(pFVar19 + (longlong)iVar26 * 8);
    while( true ) {
      FVar29 = local_d0;
      if (this->ProxiesPerStage[0].ArrayNum != iVar26) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FNiagaraSystemGpuComputeProxy_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      pFVar10 = local_c0;
      if ((FName)pFVar19 == FVar29) break;
      lVar3 = *(longlong *)pFVar19;
      plVar25 = *(longlong **)(lVar3 + 0x40);
      iVar20 = *(int *)(lVar3 + 0x48);
      plVar2 = plVar25 + iVar20;
      while( true ) {
        if (*(int *)(lVar3 + 0x48) != iVar20) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FNiagaraComputeExecutionContext_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (plVar25 == plVar2) break;
        lVar28 = *plVar25;
        if (*(uint *)(lVar28 + 8) != 0xffffffff) {
          uVar30 = *(int *)(lVar28 + 0xc) - *(int *)(pFVar10 + (ulonglong)*(uint *)(lVar28 + 8) * 4)
          ;
          if (uVar30 <= *(uint *)(lVar28 + 0x234)) {
            *(uint *)(lVar28 + 0x234) = *(uint *)(lVar28 + 0x234) - uVar30;
          }
          *(undefined4 *)(lVar28 + 8) = 0xffffffff;
        }
        plVar25 = plVar25 + 1;
      }
      pFVar19 = pFVar19 + 8;
    }
    iVar26 = this->ProxiesPerStage[1].ArrayNum;
    pFVar19 = this->ProxiesPerStage[1].AllocatorInstance.Data;
    local_d0 = (FName)(pFVar19 + (longlong)iVar26 * 8);
    while( true ) {
      FVar29 = local_d0;
      if (this->ProxiesPerStage[1].ArrayNum != iVar26) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FNiagaraSystemGpuComputeProxy_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      pFVar10 = local_c0;
      if ((FName)pFVar19 == FVar29) break;
      lVar3 = *(longlong *)pFVar19;
      plVar25 = *(longlong **)(lVar3 + 0x40);
      iVar20 = *(int *)(lVar3 + 0x48);
      plVar2 = plVar25 + iVar20;
      while( true ) {
        if (*(int *)(lVar3 + 0x48) != iVar20) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FNiagaraComputeExecutionContext_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (plVar25 == plVar2) break;
        lVar28 = *plVar25;
        if (*(uint *)(lVar28 + 8) != 0xffffffff) {
          uVar30 = *(int *)(lVar28 + 0xc) - *(int *)(pFVar10 + (ulonglong)*(uint *)(lVar28 + 8) * 4)
          ;
          if (uVar30 <= *(uint *)(lVar28 + 0x234)) {
            *(uint *)(lVar28 + 0x234) = *(uint *)(lVar28 + 0x234) - uVar30;
          }
          *(undefined4 *)(lVar28 + 8) = 0xffffffff;
        }
        plVar25 = plVar25 + 1;
      }
      pFVar19 = pFVar19 + 8;
    }
    iVar26 = this->ProxiesPerStage[2].ArrayNum;
    FVar29 = *(FName *)(this->ProxiesPerStage + 2);
    local_d0 = (FName)((longlong)iVar26 * 8 + (longlong)FVar29);
    while( true ) {
      FVar24 = local_d0;
      if (this->ProxiesPerStage[2].ArrayNum != iVar26) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FNiagaraSystemGpuComputeProxy_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      pFVar19 = local_c0;
      if (FVar29 == FVar24) break;
      lVar3 = *(longlong *)FVar29;
      plVar25 = *(longlong **)(lVar3 + 0x40);
      iVar20 = *(int *)(lVar3 + 0x48);
      plVar2 = plVar25 + iVar20;
      while( true ) {
        if (*(int *)(lVar3 + 0x48) != iVar20) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FNiagaraComputeExecutionContext_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (plVar25 == plVar2) break;
        lVar28 = *plVar25;
        if (*(uint *)(lVar28 + 8) != 0xffffffff) {
          uVar30 = *(int *)(lVar28 + 0xc) - *(int *)(pFVar19 + (ulonglong)*(uint *)(lVar28 + 8) * 4)
          ;
          if (uVar30 <= *(uint *)(lVar28 + 0x234)) {
            *(uint *)(lVar28 + 0x234) = *(uint *)(lVar28 + 0x234) - uVar30;
          }
          *(undefined4 *)(lVar28 + 8) = 0xffffffff;
        }
        plVar25 = plVar25 + 1;
      }
      FVar29 = (FName)((longlong)FVar29 + 8);
    }
    bVar13 = IsInRenderingThread();
    FVar29 = local_c8;
    if ((!bVar13) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInRenderingThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                            ,0x27d,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((*(longlong *)&this->field_0xd8 == 0) || (*(int *)&this->field_0xe0 == 0)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("CountReadback && CountReadbackSize",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUInstanceCountManager.cpp"
                            ,0x27e,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(**(longlong **)&this->field_0xd8 + 0x20))();
    *(undefined4 *)&this->field_0xe0 = 0;
    pFVar27 = local_b0;
    bVar6 = bVar12;
    bVar8 = bVar9;
  }
LAB_14930dc88:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar29,CycleScopeEnd);
  }
  FNiagaraGPUInstanceCountManager::ProcessInitInstanceCountTasks
            (pFVar27,(FNiagaraGpuComputeDispatchInterface *)this,(FRHICommandList *)param_1);
  if (bVar32) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateVectorField @ 14930de40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::UpdateVectorField
          (FNiagaraGpuComputeDispatch *this,UVectorFieldComponent *param_1)

{
  return;
}

// UsesDepthBuffer @ 14930de50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FNiagaraGpuComputeDispatch::UsesDepthBuffer(FNiagaraGpuComputeDispatch *this)

{
  return this->NumProxiesThatRequireDepthBuffer != 0;
}

// UsesGlobalDistanceField @ 14930de70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FNiagaraGpuComputeDispatch::UsesGlobalDistanceField(FNiagaraGpuComputeDispatch *this)

{
  return this->NumProxiesThatRequireGlobalDistanceField != 0;
}

// WaitForMultiGPUBuffers @ 14930ded0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraGpuComputeDispatch::WaitForMultiGPUBuffers
          (FNiagaraGpuComputeDispatch *this,FRHICommandList *param_1,uint param_2)

{
  FCrossGPUTransferFence **ppFVar1;
  IRHIComputeContext *pIVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  FCrossGPUTransferFence **local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  ppFVar1 = this->OptimizedCrossGPUFences + param_2;
  if (this->OptimizedCrossGPUFences[param_2] != (FCrossGPUTransferFence *)0x0) {
    uStack_10 = 1;
    local_18 = ppFVar1;
    if ((GRHICommandList.bLatchedBypass) && ((param_1->field_0x29b & 0x20) != 0)) {
      pIVar2 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
      (**(code **)(pIVar2->_padding_ + 0x120))(pIVar2,&local_18);
      *ppFVar1 = (FCrossGPUTransferFence *)0x0;
      return;
    }
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar3;
    *(undefined8 **)&param_1->field_0x30 = puVar3 + 1;
    puVar4 = FMemStackBase::Alloc((FMemStackBase *)param_1,8,8);
    *puVar4 = *ppFVar1;
    *puVar3 = &___7FRHICommandCrossGPUTransferWait__6B_;
    puVar3[1] = 0;
    puVar3[2] = puVar4;
    puVar3[3] = CONCAT44(uStack_c,1);
    *ppFVar1 = (FCrossGPUTransferFence *)0x0;
  }
  return;
}

