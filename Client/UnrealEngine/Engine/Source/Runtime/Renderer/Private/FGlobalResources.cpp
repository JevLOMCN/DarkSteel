// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 16

// InitRHI @ 14501bac0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
Nanite::FGlobalResources::InitRHI(FGlobalResources *this,FRHICommandListBase *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  FName this_00;
  FName FVar4;
  FName FVar5;
  FDelegateHandle FVar6;
  FName FVar7;
  FLLMScope local_res18 [2];
  FName local_res20;
  FMemScope local_38;
  FName local_30;
  FName local_28;
  
  bVar2 = DoesPlatformSupportNanite(GMaxRHIShaderPlatform,true);
  if (bVar2) {
    FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
    local_res20 = LLMTagDeclaration_Nanite.UniqueName;
    FMemScope::FMemScope(&local_38,&local_res20,true);
    this_00 = (FName)::operator_new(0xb8);
    FVar5.ComparisonIndex.Value = 0;
    FVar5.Number = 0;
    if (this_00 != (FName)0x0) {
      *(undefined4 *)this_00 = 0xffffffff;
      *(undefined8 *)((longlong)this_00 + 8) = 0;
      *(undefined8 *)((longlong)this_00 + 0x10) = 0xffefffffffffffff;
      *(undefined8 *)((longlong)this_00 + 0x20) = 0xffefffffffffffff;
      *(undefined8 *)((longlong)this_00 + 0x30) = 0xffefffffffffffff;
      *(undefined8 *)((longlong)this_00 + 0x18) = 0;
      *(undefined8 *)((longlong)this_00 + 0x28) = 0;
      *(undefined8 *)((longlong)this_00 + 0x38) = 0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)((longlong)this_00 + 0x40),4000);
      *(undefined8 *)((longlong)this_00 + 0x68) = 0;
      *(undefined8 *)((longlong)this_00 + 0x70) = 0;
      *(undefined8 *)((longlong)this_00 + 0x88) = 0;
      *(undefined4 *)((longlong)this_00 + 0x90) = 0;
      *(undefined4 *)((longlong)this_00 + 0x94) = 0x80;
      *(undefined4 *)((longlong)this_00 + 0x98) = 0xffffffff;
      *(undefined4 *)((longlong)this_00 + 0x9c) = 0;
      *(undefined8 *)((longlong)this_00 + 0xa8) = 0;
      *(undefined4 *)((longlong)this_00 + 0xb0) = 0;
      FVar4 = (FName)::operator_new(0x18);
      FVar7 = FVar5;
      if (FVar4 != (FName)0x0) {
        *(FName *)((longlong)FVar4 + 0x10) = this_00;
        *(wchar_t **)((longlong)FVar4 + 8) = L"Nanite.StatusFeedback";
        *(undefined ***)FVar4 =
             &GPUMessage::
              TLambdaHandler<`Nanite::FFeedbackManager::FFeedbackManager'::`2'::<lambda_1>_>::
              _vftable_;
        FVar7 = FVar4;
      }
      local_30 = FVar7;
      FVar4 = (FName)::operator_new(0x18);
      if (FVar4 != (FName)0x0) {
        *(undefined4 *)((longlong)FVar4 + 8) = 1;
        *(undefined ***)FVar4 =
             &SharedPointerInternals::
              TReferenceControllerWithDeleter<GPUMessage::TLambdaHandler<`Nanite::FFeedbackManager::FFeedbackManager'::`2'::<lambda_1>_>,SharedPointerInternals::DefaultDeleter<GPUMessage::TLambdaHandler<`Nanite::FFeedbackManager::FFeedbackManager'::`2'::<lambda_1>_>_>,1>
              ::_vftable_;
        *(undefined4 *)((longlong)FVar4 + 0xc) = 1;
        *(FName *)((longlong)FVar4 + 0x10) = FVar7;
        FVar5 = FVar4;
      }
      local_28 = FVar5;
      GPUMessage::RegisterHandler((TSharedPtr<GPUMessage::FHandler,1> *)&local_res20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_28);
      GPUMessage::FSocket::Reset((FSocket *)this_00);
      *(uint *)this_00 = local_res20.ComparisonIndex.Value;
      local_res20.ComparisonIndex.Value = 0xffffffff;
      GPUMessage::FSocket::Reset((FSocket *)&local_res20);
      local_res20 = this_00;
      FVar6 = TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
              ::AddLambda<_Nanite::FFeedbackManager::FFeedbackManager_::__l2::<lambda_2>_>
                        (&FCoreDelegates::OnGetOnScreenMessages,(<lambda_2> *)&local_30);
      *(undefined8 *)((longlong)this_00 + 8) = *(undefined8 *)FVar6.ID;
      FVar5 = this_00;
    }
    this->FeedbackManager = (FFeedbackManager *)FVar5;
    iVar1 = this->MaxPickingBuffers;
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&(this->PickingBuffers).AllocatorInstance,
                       &(this->PickingBuffers).ArrayNum,&(this->PickingBuffers).ArrayMax);
    memset((this->PickingBuffers).AllocatorInstance.Data + (longlong)iVar3 * 8,0,
           (longlong)iVar1 << 3);
    FMemScope::~FMemScope(&local_38);
    FLLMScope::~FLLMScope(local_res18);
  }
  return;
}

// ReleaseRHI @ 14501bd20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall Nanite::FGlobalResources::ReleaseRHI(FGlobalResources *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FRDGPooledBuffer *pFVar5;
  IPooledRenderTarget *pIVar6;
  FFeedbackManager *this_00;
  void *pvVar7;
  longlong lVar8;
  bool bVar9;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  
  bVar9 = DoesPlatformSupportNanite(GMaxRHIShaderPlatform,true);
  if (bVar9) {
    FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
    local_res18 = LLMTagDeclaration_Nanite.UniqueName;
    FMemScope::FMemScope(&local_res20,&local_res18,true);
    piVar1 = &(this->PickingBuffers).ArrayMax;
    pFVar4 = (this->PickingBuffers).AllocatorInstance.Data;
    iVar3 = (this->PickingBuffers).ArrayNum;
    if ((this->PickingBuffers).ArrayMax < 0) {
      DestructItems<TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_>,int>
                ((TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_> *)pFVar4,
                 iVar3);
      (this->PickingBuffers).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->PickingBuffers).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_>,int>
                ((TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_> *)pFVar4,
                 iVar3);
      (this->PickingBuffers).ArrayNum = 0;
    }
    pFVar5 = (this->MainPassBuffers).StatsRasterizeArgsSWHWBuffer.Reference;
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      (this->MainPassBuffers).StatsRasterizeArgsSWHWBuffer.Reference = (FRDGPooledBuffer *)0x0;
      plVar2 = &pFVar5->_padding_;
      LOCK();
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar8 == 1) && (plVar2 != (longlong *)0x0)) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
    pFVar5 = (this->PostPassBuffers).StatsRasterizeArgsSWHWBuffer.Reference;
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      (this->PostPassBuffers).StatsRasterizeArgsSWHWBuffer.Reference = (FRDGPooledBuffer *)0x0;
      plVar2 = &pFVar5->_padding_;
      LOCK();
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar8 == 1) && (plVar2 != (longlong *)0x0)) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
    pFVar5 = (this->CandidateNodesBuffer).Reference;
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      (this->CandidateNodesBuffer).Reference = (FRDGPooledBuffer *)0x0;
      plVar2 = &pFVar5->_padding_;
      LOCK();
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar8 == 1) && (plVar2 != (longlong *)0x0)) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
    pFVar5 = (this->ClusterBatchesBuffer).Reference;
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      (this->ClusterBatchesBuffer).Reference = (FRDGPooledBuffer *)0x0;
      plVar2 = &pFVar5->_padding_;
      LOCK();
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar8 == 1) && (plVar2 != (longlong *)0x0)) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
    pFVar5 = (this->StatsBuffer).Reference;
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      (this->StatsBuffer).Reference = (FRDGPooledBuffer *)0x0;
      plVar2 = &pFVar5->_padding_;
      LOCK();
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar8 == 1) && (plVar2 != (longlong *)0x0)) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
    pFVar5 = (this->ShadingBinDataBuffer).Reference;
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      (this->ShadingBinDataBuffer).Reference = (FRDGPooledBuffer *)0x0;
      plVar2 = &pFVar5->_padding_;
      LOCK();
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar8 == 1) && (plVar2 != (longlong *)0x0)) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
    pIVar6 = (this->FastClearTileVis).Reference;
    if (pIVar6 != (IPooledRenderTarget *)0x0) {
      (this->FastClearTileVis).Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar6->_padding_ + 0x38))();
    }
    this_00 = this->FeedbackManager;
    if (this_00 != (FFeedbackManager *)0x0) {
      TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
      ::Remove(&FCoreDelegates::OnGetOnScreenMessages,
               (FDelegateHandle)(this_00->ScreenMessageDelegate).ID);
      *(undefined4 *)&(this_00->MaterialWarningItems).field_0x48 = 0;
      pvVar7 = *(void **)&(this_00->MaterialWarningItems).field_0x40;
      if (pvVar7 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&this_00->MaterialWarningItems);
      DeleteCriticalSection((LPCRITICAL_SECTION)&this_00->DelgateCallbackCS);
      GPUMessage::FSocket::Reset(&this_00->StatusFeedbackSocket);
      ::operator_delete(this_00,0xb8);
    }
    this->FeedbackManager = (FFeedbackManager *)0x0;
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res10);
  }
  return;
}

// ~FGlobalResources @ 145038350

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall Nanite::FGlobalResources::~FGlobalResources(FGlobalResources *this)

{
  longlong *plVar1;
  IPooledRenderTarget *pIVar2;
  FRDGPooledBuffer *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  
  pIVar2 = (this->FastClearTileVis).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pFVar3 = (this->ShadingBinDataBuffer).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->StatsBuffer).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->PostPassBuffers).StatsRasterizeArgsSWHWBuffer.Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->MainPassBuffers).StatsRasterizeArgsSWHWBuffer.Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->ClusterBatchesBuffer).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->CandidateNodesBuffer).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  DestructItems<TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_>,int>
            ((TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_> *)
             (this->PickingBuffers).AllocatorInstance.Data,(this->PickingBuffers).ArrayNum);
  pFVar4 = (this->PickingBuffers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// GetCandidateClusterSize @ 145061e00

uint __cdecl Nanite::FGlobalResources::GetCandidateClusterSize(void)

{
  bool bVar1;
  
  if (::_TSS0 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) goto LAB_145061e27;
  _Init_thread_header(&::_TSS0);
  if (::_TSS0 != -1) goto LAB_145061e27;
  bVar1 = NaniteAssembliesSupported();
  if (bVar1) {
LAB_145061e65:
    ClusterSizeDwords = 3;
  }
  else {
    bVar1 = NaniteVoxelsSupported();
    ClusterSizeDwords = 2;
    if (bVar1) goto LAB_145061e65;
  }
  _Init_thread_footer(&::_TSS0);
LAB_145061e27:
  return ClusterSizeDwords * 4;
}

// GetCandidateNodeSize @ 145061e90

uint __cdecl Nanite::FGlobalResources::GetCandidateNodeSize(bool param_1)

{
  bool bVar1;
  
  bVar1 = NaniteAssembliesSupported();
  return ((uint)bVar1 + (uint)param_1) * 4 + 8;
}

// GetFixedFunctionBinMask @ 145063860

uint __cdecl Nanite::FGlobalResources::GetFixedFunctionBinMask(void)

{
  bool bVar1;
  
  bVar1 = NaniteVoxelsSupported();
  return (uint)bVar1 * 0x10 + 0xf;
}

// GetMaxCandidateClusters @ 145063c60

uint __cdecl Nanite::FGlobalResources::GetMaxCandidateClusters(void)

{
  return GNaniteMaxCandidateClusters & 0xffffffc0;
}

// GetMaxCandidatePatches @ 145063c70

uint __cdecl Nanite::FGlobalResources::GetMaxCandidatePatches(void)

{
  return GNaniteMaxCandidatePatches;
}

// GetMaxClusterBatches @ 145063c80

uint __cdecl Nanite::FGlobalResources::GetMaxClusterBatches(void)

{
  return (uint)GNaniteMaxCandidateClusters >> 6;
}

// GetMaxNodes @ 145063c90

uint __cdecl Nanite::FGlobalResources::GetMaxNodes(void)

{
  return GNaniteMaxNodes & 0xfffffff0;
}

// GetMaxVisibleAssemblyParts @ 145063cd0

uint __cdecl Nanite::FGlobalResources::GetMaxVisibleAssemblyParts(void)

{
  uint uVar1;
  
  uVar1 = 0xffffff;
  if (GNaniteMaxVisibleAssemblyParts < 0xffffff) {
    uVar1 = GNaniteMaxVisibleAssemblyParts;
  }
  return uVar1;
}

// GetMaxVisibleClusterSize @ 145063cf0

uint __cdecl Nanite::FGlobalResources::GetMaxVisibleClusterSize(void)

{
  bool bVar1;
  
  if (::_TSS0 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) goto LAB_145063d17;
  _Init_thread_header(&::_TSS0);
  if (::_TSS0 != -1) goto LAB_145063d17;
  bVar1 = NaniteAssembliesSupported();
  if (bVar1) {
LAB_145063d55:
    ClusterSizeDwords = 3;
  }
  else {
    bVar1 = NaniteVoxelsSupported();
    ClusterSizeDwords = 2;
    if (bVar1) goto LAB_145063d55;
  }
  _Init_thread_footer(&::_TSS0);
LAB_145063d17:
  return ClusterSizeDwords * 4 + 4;
}

// GetMaxVisibleClusters @ 145063d80

uint __cdecl Nanite::FGlobalResources::GetMaxVisibleClusters(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((0x1000000 < GNaniteMaxVisibleClusters) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GNaniteMaxVisibleClusters <= (16 * 1024 * 1024)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShared.cpp"
                         ,0x180,L"r.Nanite.MaxVisibleClusters must be <= MAX_CLUSTERS"), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return GNaniteMaxVisibleClusters;
}

// GetMaxVisiblePatches @ 145063dd0

uint __cdecl Nanite::FGlobalResources::GetMaxVisiblePatches(void)

{
  return GNaniteMaxVisiblePatches;
}

// Update @ 14507f5a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall Nanite::FGlobalResources::Update(FGlobalResources *this,FRDGBuilder *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = DoesPlatformSupportNanite(GMaxRHIShaderPlatform,true);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DoesPlatformSupportNanite(GMaxRHIShaderPlatform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShared.cpp"
                       ,0x16d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// UseExtendedClusterSize @ 145082e40

bool __cdecl Nanite::FGlobalResources::UseExtendedClusterSize(void)

{
  bool bVar1;
  
  bVar1 = NaniteAssembliesSupported();
  if (!bVar1) {
    bVar1 = NaniteVoxelsSupported();
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

