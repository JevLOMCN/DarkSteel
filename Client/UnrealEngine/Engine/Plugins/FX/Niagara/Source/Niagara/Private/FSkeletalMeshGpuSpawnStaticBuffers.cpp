// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// ~FSkeletalMeshGpuSpawnStaticBuffers @ 1492159e0

void __thiscall
FSkeletalMeshGpuSpawnStaticBuffers::~FSkeletalMeshGpuSpawnStaticBuffers
          (FSkeletalMeshGpuSpawnStaticBuffers *this)

{
  FRHIShaderResourceView *pFVar1;
  FRHIBuffer *pFVar2;
  
  this->_padding_ = (longlong)&___7FSkeletalMeshGpuSpawnStaticBuffers__6B_;
  pFVar1 = (this->MeshColorBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->MeshTexCoordBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->MeshTangentBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->MeshIndexBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->MeshVertexBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->FilteredAndUnfilteredBonesSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->FilteredAndUnfilteredBonesBuffer).Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->FilteredAndUnfilteredBonesArray)._padding_);
  (this->FilteredAndUnfilteredBonesArray)._padding_ =
       (longlong)&___7FResourceArrayUploadInterface__6B_;
  pFVar1 = (this->SampleRegionsVerticesSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->SampleRegionsVerticesBuffer).Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->SampleRegionsTriangleIndicesSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->SampleRegionsTriangleIndicesBuffer).Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->SampleRegionsProbAliasSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->SampleRegionsProbAliasBuffer).Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->SampleRegionsVertices)._padding_);
  (this->SampleRegionsVertices)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->SampleRegionsTriangleIndicies)._padding_);
  (this->SampleRegionsTriangleIndicies)._padding_ =
       (longlong)&___7FResourceArrayUploadInterface__6B_;
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->SampleRegionsProbAlias)._padding_);
  (this->SampleRegionsProbAlias)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  pFVar1 = (this->BufferTriangleMatricesOffsetSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->BufferTriangleMatricesOffsetRHI).Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->BufferTriangleUniformSamplerProbAliasSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->BufferTriangleUniformSamplerProbAliasRHI).Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// GetFriendlyName @ 149235fa0

FString * __thiscall
FSkeletalMeshGpuSpawnStaticBuffers::GetFriendlyName
          (FSkeletalMeshGpuSpawnStaticBuffers *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FSkeletalMeshGpuSpawnStaticBuffers");
  return __return_storage_ptr__;
}

// InitRHI @ 1492408f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshGpuSpawnStaticBuffers::InitRHI
          (FSkeletalMeshGpuSpawnStaticBuffers *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  TRefCountPtr<FRHIBuffer> *pTVar2;
  TRefCountPtr<FRHIShaderResourceView> *pTVar3;
  ERHIPipeline EVar4;
  FRHIShaderResourceView *pFVar5;
  FSkeletalMeshAreaWeightedTriangleSampler *pFVar6;
  FRHIBuffer *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  ERHIAccess EVar12;
  uint uVar13;
  int iVar14;
  FSkeletalMeshLODRenderData *pFVar15;
  TRefCountPtr<FRHIBuffer> TVar16;
  TRefCountPtr<FRHIShaderResourceView> TVar17;
  FRHIShaderResourceView *pFVar18;
  FName FVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar21;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  byte bVar22;
  uint uVar23;
  longlong *plVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auStackY_568 [32];
  undefined4 local_508;
  undefined4 uStack_504;
  undefined1 local_3b0 [16];
  FRHIResource *local_3a0;
  undefined1 local_398 [16];
  undefined1 local_388 [120];
  uint local_310;
  uint local_30c;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  FRHIBuffer local_2e8;
  undefined8 local_200;
  ulonglong local_1f8;
  undefined8 uStack_1f0;
  wchar_t *local_1e8;
  TResourceArray<int,0> *pTStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  ulonglong local_1c0;
  undefined8 uStack_1b8;
  wchar_t *local_1b0;
  TResourceArray<unsigned_short,0> *pTStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined1 local_188 [48];
  FRHICommandListBase *local_158;
  FRHIBuffer *local_150;
  undefined1 local_138 [48];
  FRHICommandListBase *local_108;
  FRHIBuffer *local_100;
  uint *local_f8;
  undefined1 local_e8 [48];
  FRHICommandListBase *local_b8;
  FRHIBuffer *local_b0;
  undefined1 local_98 [48];
  FRHICommandListBase *local_68;
  FRHIBuffer *local_60;
  void *local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_568;
  pFVar15 = this->LODRenderData;
  if (((pFVar15->MultiSizeIndexContainer).IndexBuffer == (FRawStaticIndexBuffer16or32Interface *)0x0
      ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IndexBuffer != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                ,0x56,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar5 = (this->MeshIndexBufferSRV).Reference;
  pFVar18 = (((pFVar15->MultiSizeIndexContainer).IndexBuffer)->SRVValue).Reference;
  if (pFVar5 != pFVar18) {
    (this->MeshIndexBufferSRV).Reference = pFVar18;
    if (pFVar18 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar18);
    }
    if (pFVar5 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  pFVar5 = (this->MeshVertexBufferSRV).Reference;
  pFVar18 = (this->LODRenderData->StaticVertexBuffers).PositionVertexBuffer.PositionComponentSRV.
            Reference;
  if (pFVar5 != pFVar18) {
    (this->MeshVertexBufferSRV).Reference = pFVar18;
    if (pFVar18 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar18);
    }
    if (pFVar5 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  pFVar15 = this->LODRenderData;
  pFVar5 = (this->MeshTangentBufferSRV).Reference;
  pFVar18 = (pFVar15->StaticVertexBuffers).StaticMeshVertexBuffer.TangentsSRV.Reference;
  if (pFVar5 != pFVar18) {
    (this->MeshTangentBufferSRV).Reference = pFVar18;
    if (pFVar18 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar18);
      pFVar15 = this->LODRenderData;
    }
    if (pFVar5 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
      pFVar15 = this->LODRenderData;
    }
  }
  uVar29 = 0;
  uVar30 = 0;
  if ((((this->MeshIndexBufferSRV).Reference == (FRHIShaderResourceView *)0x0) ||
      ((this->MeshVertexBufferSRV).Reference == (FRHIShaderResourceView *)0x0)) ||
     ((this->MeshTangentBufferSRV).Reference == (FRHIShaderResourceView *)0x0)) {
    this->bMeshValid = false;
    this->NumWeights = (pFVar15->SkinWeightVertexBuffer).DataVertexBuffer.MaxBoneInfluences;
    pFVar18 = FNiagaraRenderer::GetDummyUIntBuffer();
    pFVar5 = (this->MeshIndexBufferSRV).Reference;
    if (pFVar5 != pFVar18) {
      (this->MeshIndexBufferSRV).Reference = pFVar18;
      if (pFVar18 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar18);
      }
      if (pFVar5 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
    }
    pFVar18 = FNiagaraRenderer::GetDummyFloatBuffer();
    pFVar5 = (this->MeshVertexBufferSRV).Reference;
    if (pFVar5 != pFVar18) {
      (this->MeshVertexBufferSRV).Reference = pFVar18;
      if (pFVar18 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar18);
      }
      if (pFVar5 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
    }
    pFVar18 = FNiagaraRenderer::GetDummyFloat4Buffer();
    pFVar5 = (this->MeshTangentBufferSRV).Reference;
    if (pFVar5 != pFVar18) {
      (this->MeshTangentBufferSRV).Reference = pFVar18;
      if (pFVar18 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar18);
      }
      if (pFVar5 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
    }
    this->NumWeights = 0;
    this->TriangleCount = 0;
    this->VertexCount = 0;
    piVar1 = (int *)((longlong)&(this->SampleRegionsProbAlias)._padding_ + 4);
    this->bUseGpuUniformlyDistributedSampling = false;
    this->NumSamplingRegionTriangles = 0;
    this->bSamplingRegionsAllAreaWeighted = false;
    *(undefined4 *)&(this->SampleRegionsProbAlias)._padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)&(this->SampleRegionsProbAlias)._padding_,0,piVar1);
    }
    piVar1 = (int *)((longlong)&(this->SampleRegionsTriangleIndicies)._padding_ + 4);
    *(undefined4 *)&(this->SampleRegionsTriangleIndicies)._padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)&(this->SampleRegionsTriangleIndicies)._padding_,0,
                 piVar1);
    }
    piVar1 = (int *)((longlong)&(this->SampleRegionsVertices)._padding_ + 4);
    *(undefined4 *)&(this->SampleRegionsVertices)._padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)&(this->SampleRegionsVertices)._padding_,0,piVar1);
    }
  }
  else {
    this->bMeshValid = true;
    this->NumWeights = (pFVar15->SkinWeightVertexBuffer).DataVertexBuffer.MaxBoneInfluences;
  }
  pFVar5 = (this->MeshColorBufferSRV).Reference;
  pFVar18 = (this->LODRenderData->StaticVertexBuffers).ColorVertexBuffer.ColorComponentsSRV.
            Reference;
  if (pFVar5 != pFVar18) {
    (this->MeshColorBufferSRV).Reference = pFVar18;
    if (pFVar18 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar18);
    }
    if (pFVar5 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  if ((this->bMeshValid == false) ||
     ((this->MeshColorBufferSRV).Reference == (FRHIShaderResourceView *)0x0)) {
    this->bHasMeshColors = false;
    pFVar18 = FNiagaraRenderer::GetDummyFloat4Buffer();
    pFVar5 = (this->MeshColorBufferSRV).Reference;
    if (pFVar5 != pFVar18) {
      (this->MeshColorBufferSRV).Reference = pFVar18;
      if (pFVar18 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar18);
      }
      if (pFVar5 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
    }
  }
  else {
    this->bHasMeshColors = true;
  }
  pFVar15 = this->LODRenderData;
  pFVar5 = (this->MeshTexCoordBufferSRV).Reference;
  pFVar18 = (pFVar15->StaticVertexBuffers).StaticMeshVertexBuffer.TextureCoordinatesSRV.Reference;
  if (pFVar5 != pFVar18) {
    (this->MeshTexCoordBufferSRV).Reference = pFVar18;
    if (pFVar18 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar18);
      pFVar15 = this->LODRenderData;
    }
    if (pFVar5 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
      pFVar15 = this->LODRenderData;
    }
  }
  if ((this->MeshTexCoordBufferSRV).Reference == (FRHIShaderResourceView *)0x0) {
    pFVar18 = FNiagaraRenderer::GetDummyFloat2Buffer();
    pFVar5 = (this->MeshTexCoordBufferSRV).Reference;
    uVar23 = uVar30;
    if (pFVar5 != pFVar18) {
      (this->MeshTexCoordBufferSRV).Reference = pFVar18;
      if (pFVar18 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar18);
      }
      if (pFVar5 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
    }
  }
  else {
    uVar23 = (pFVar15->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
  }
  this->NumTexCoord = uVar23;
  uVar23 = (this->LODRenderData->RenderSections).ArrayNum;
  if ((this->GPUMemoryUsage != 0) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_4024959817545153600>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                          ,0x3c0,"GPUMemoryUsage == 0"), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (this->bUseGpuUniformlyDistributedSampling == false) {
    pFVar18 = FNiagaraRenderer::GetDummyUIntBuffer();
    pFVar5 = (this->BufferTriangleUniformSamplerProbAliasSRV).Reference;
    if (pFVar5 != pFVar18) {
      (this->BufferTriangleUniformSamplerProbAliasSRV).Reference = pFVar18;
      if (pFVar18 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar18);
      }
      if (pFVar5 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
    }
  }
  else {
    pFVar6 = &this->SkeletalMeshSamplingLODBuiltData->AreaWeightedTriangleSampler;
    if ((this->TriangleCount != (uint)pFVar6->_padding_) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("TriangleCount == triangleSampler.GetNumEntries()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                            ,0x3c6,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar11 = NDISkelMeshLocal::GetProbAliasDWORDSize(this->TriangleCount);
    EVar4 = param_1->ActivePipelines;
    local_2e8._padding_ = (longlong)(uint)(iVar11 << 2);
    local_2e8._padding_ = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x4101);
    local_2e8._padding_ = 0x300000078;
    local_2e8._padding_ = 0x151daca70;
    local_2e8._padding_ = 0;
    local_2e8._padding_ = 0;
    local_2e8._padding_ = 0;
    if (((EVar4 != None) && ((EVar4 & EVar4 - Graphics) != None)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                            ,0x2a5,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (param_1->ActivePipelines == None) {
      FRHICommandListBase::SwitchPipeline(param_1,Graphics);
      (**(code **)(GDynamicRHI->_padding_ + 0x140))();
      FRHICommandListBase::SwitchPipeline(param_1,None);
    }
    else {
      (**(code **)(GDynamicRHI->_padding_ + 0x140))
                (GDynamicRHI,local_188,param_1,&local_2e8._padding_);
    }
    TRHIBufferInitializer<unsigned_int>::TRHIBufferInitializer<unsigned_int>
              ((TRHIBufferInitializer<unsigned_int> *)local_138,(FRHIBufferInitializer *)local_188);
    if ((local_158 != (FRHICommandListBase *)0x0) && (local_150 != (FRHIBuffer *)0x0)) {
      FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_188);
    }
    if (local_188._0_8_ != 0) {
      plVar24 = (longlong *)(local_188 + 0x10);
      if ((longlong *)local_188._40_8_ != (longlong *)0x0) {
        plVar24 = (longlong *)local_188._40_8_;
      }
      (**(code **)(*plVar24 + 0x10))();
    }
    NDISkelMeshLocal::PackProbAlias(local_f8,pFVar6,0);
    TVar16 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_138);
    pTVar2 = &this->BufferTriangleUniformSamplerProbAliasRHI;
    if ((FRHIBuffer *)pTVar2 != TVar16.Reference) {
      pFVar7 = pTVar2->Reference;
      pTVar2->Reference = (FRHIBuffer *)(TVar16.Reference)->_padding_;
      (TVar16.Reference)->_padding_ = 0;
      if (pFVar7 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar7);
      }
    }
    if ((FRHIResource *)CONCAT44(uStack_504,local_508) != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)CONCAT44(uStack_504,local_508));
    }
    local_388._24_8_ = 0;
    local_388._16_8_ = 0x11c00;
    TVar17 = FRHICommandListBase::CreateShaderResourceView
                       (param_1,(FRHIBuffer *)local_308,(FInitializer *)pTVar2->Reference);
    pTVar3 = &this->BufferTriangleUniformSamplerProbAliasSRV;
    if ((FRHIShaderResourceView *)pTVar3 != TVar17.Reference) {
      pFVar5 = pTVar3->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar3->Reference = *TVar17.Reference;
      *(undefined8 *)TVar17.Reference = 0;
      if (pFVar5 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
    }
    if ((FRHIResource *)local_308._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_308._0_8_);
    }
    this->GPUMemoryUsage = this->GPUMemoryUsage + (ulonglong)(uint)(iVar11 << 2);
    if ((local_108 != (FRHICommandListBase *)0x0) && (local_100 != (FRHIBuffer *)0x0)) {
      FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_138);
    }
    if (local_138._0_8_ != 0) {
      plVar24 = (longlong *)(local_138 + 0x10);
      if ((longlong *)local_138._40_8_ != (longlong *)0x0) {
        plVar24 = (longlong *)local_138._40_8_;
      }
      (**(code **)(*plVar24 + 0x10))();
    }
  }
  pFVar18 = FNiagaraRenderer::GetDummyUIntBuffer();
  pFVar5 = (this->SampleRegionsProbAliasSRV).Reference;
  if (pFVar5 != pFVar18) {
    (this->SampleRegionsProbAliasSRV).Reference = pFVar18;
    if (pFVar18 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar18);
    }
    if (pFVar5 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  pFVar18 = FNiagaraRenderer::GetDummyUIntBuffer();
  pFVar5 = (this->SampleRegionsTriangleIndicesSRV).Reference;
  if (pFVar5 != pFVar18) {
    (this->SampleRegionsTriangleIndicesSRV).Reference = pFVar18;
    if (pFVar18 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar18);
    }
    if (pFVar5 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  pFVar18 = FNiagaraRenderer::GetDummyUIntBuffer();
  pFVar5 = (this->SampleRegionsVerticesSRV).Reference;
  if (pFVar5 != pFVar18) {
    (this->SampleRegionsVerticesSRV).Reference = pFVar18;
    if (pFVar18 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar18);
    }
    if (pFVar5 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  if (this->NumSamplingRegionTriangles < 1) {
    pFVar18 = FNiagaraRenderer::GetDummyUIntBuffer();
    pFVar5 = (this->SampleRegionsProbAliasSRV).Reference;
    if (pFVar5 != pFVar18) {
      (this->SampleRegionsProbAliasSRV).Reference = pFVar18;
      if (pFVar18 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar18);
      }
      if (pFVar5 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
    }
    pFVar18 = FNiagaraRenderer::GetDummyUIntBuffer();
    pFVar5 = (this->SampleRegionsTriangleIndicesSRV).Reference;
    if (pFVar5 != pFVar18) {
      (this->SampleRegionsTriangleIndicesSRV).Reference = pFVar18;
      if (pFVar18 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar18);
      }
      if (pFVar5 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
    }
    pFVar18 = FNiagaraRenderer::GetDummyUIntBuffer();
    pFVar5 = (this->SampleRegionsVerticesSRV).Reference;
    if (pFVar5 != pFVar18) {
      (this->SampleRegionsVerticesSRV).Reference = pFVar18;
      if (pFVar18 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar18);
      }
      if (pFVar5 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
    }
  }
  else {
    if (this->bSamplingRegionsAllAreaWeighted == false) {
      pFVar18 = FNiagaraRenderer::GetDummyUIntBuffer();
      pFVar5 = (this->SampleRegionsProbAliasSRV).Reference;
      if (pFVar5 != pFVar18) {
        (this->SampleRegionsProbAliasSRV).Reference = pFVar18;
        if (pFVar18 != (FRHIShaderResourceView *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar18);
        }
        if (pFVar5 != (FRHIShaderResourceView *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar5);
        }
      }
    }
    else {
      lVar27 = (this->SampleRegionsProbAlias)._padding_;
      bVar22 = (byte)GNumExplicitGPUsForRendering;
      EVar12 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Static,false);
      local_2e8._padding_ = (longlong)(uint)((int)lVar27 << 2);
      local_2e8._padding_ = CONCAT44((1 << (bVar22 & 0x1f)) + -1,0x4101);
      local_2e8._padding_ = CONCAT44(2,EVar12);
      local_2e8._padding_ = 0x151dadd28;
      local_2e8._padding_ = 0;
      local_2e8._padding_ = 0;
      local_2e8._padding_ = (longlong)&this->SampleRegionsProbAlias;
      TVar16 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)(local_308 + 8));
      pTVar2 = &this->SampleRegionsProbAliasBuffer;
      if ((FRHIBuffer *)pTVar2 != TVar16.Reference) {
        pFVar7 = pTVar2->Reference;
        pTVar2->Reference = (FRHIBuffer *)(TVar16.Reference)->_padding_;
        (TVar16.Reference)->_padding_ = 0;
        if (pFVar7 != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar7);
        }
      }
      if ((FRHIResource *)local_308._8_8_ != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)local_308._8_8_);
      }
      local_388._40_8_ = 0;
      local_388._32_8_ = 0x11c00;
      TVar17 = FRHICommandListBase::CreateShaderResourceView
                         (param_1,(FRHIBuffer *)local_2f8,(FInitializer *)pTVar2->Reference);
      pTVar3 = &this->SampleRegionsProbAliasSRV;
      if ((FRHIShaderResourceView *)pTVar3 != TVar17.Reference) {
        pFVar5 = pTVar3->Reference;
                    /* WARNING: Load size is inaccurate */
        pTVar3->Reference = *TVar17.Reference;
        *(undefined8 *)TVar17.Reference = 0;
        if (pFVar5 != (FRHIShaderResourceView *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar5);
        }
      }
      if ((FRHIResource *)local_2f8._0_8_ != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)local_2f8._0_8_);
      }
      this->GPUMemoryUsage =
           this->GPUMemoryUsage +
           (ulonglong)(uint)((int)(this->SampleRegionsProbAlias)._padding_ << 2);
    }
    lVar27 = (this->SampleRegionsTriangleIndicies)._padding_;
    bVar22 = (byte)GNumExplicitGPUsForRendering;
    EVar12 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Static,false);
    local_2e8._padding_ = (longlong)(uint)((int)lVar27 << 2);
    local_2e8._padding_ = CONCAT44((1 << (bVar22 & 0x1f)) - 1,VertexBuffer|ShaderResource|Static);
    local_2e8.Desc.Stride = 2;
    local_2e8.Desc.Size = EVar12;
    local_2e8._padding_ = 0x151dadd70;
    local_2e8.Desc.Usage = None;
    local_2e8.Desc.GPUMask.GPUMask = 0;
    local_200 = 0;
    local_2e8._padding_ = (longlong)&this->SampleRegionsTriangleIndicies;
    TVar16 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)(local_2f8 + 8));
    pTVar2 = &this->SampleRegionsTriangleIndicesBuffer;
    if ((FRHIBuffer *)pTVar2 != TVar16.Reference) {
      pFVar7 = pTVar2->Reference;
      pTVar2->Reference = (FRHIBuffer *)(TVar16.Reference)->_padding_;
      (TVar16.Reference)->_padding_ = 0;
      if (pFVar7 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar7);
      }
    }
    if ((FRHIResource *)local_2f8._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_2f8._8_8_);
    }
    local_388._56_8_ = 0;
    local_388._48_8_ = 0x11c00;
    TVar17 = FRHICommandListBase::CreateShaderResourceView
                       (param_1,&local_2e8,(FInitializer *)pTVar2->Reference);
    pTVar3 = &this->SampleRegionsTriangleIndicesSRV;
    if ((FRHIShaderResourceView *)pTVar3 != TVar17.Reference) {
      pFVar5 = pTVar3->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar3->Reference = *TVar17.Reference;
      *(undefined8 *)TVar17.Reference = 0;
      if (pFVar5 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
    }
    if ((FRHIResource *)local_2e8._padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_2e8._padding_);
    }
    lVar27 = (this->SampleRegionsVertices)._padding_;
    this->GPUMemoryUsage =
         this->GPUMemoryUsage +
         (ulonglong)(uint)((int)(this->SampleRegionsTriangleIndicies)._padding_ << 2);
    bVar22 = (byte)GNumExplicitGPUsForRendering;
    EVar12 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Static,false);
    local_1f8 = (ulonglong)(uint)((int)lVar27 << 2);
    uStack_1f0 = CONCAT44((1 << (bVar22 & 0x1f)) + -1,0x4101);
    local_1d8 = CONCAT44(2,EVar12);
    local_1e8 = L"SampleRegionsVerticesBuffer";
    uStack_1d0 = 0;
    local_1c8 = 0;
    pTStack_1e0 = &this->SampleRegionsVertices;
    TVar16 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_3b0);
    pTVar2 = &this->SampleRegionsVerticesBuffer;
    if ((FRHIBuffer *)pTVar2 != TVar16.Reference) {
      pFVar7 = pTVar2->Reference;
      pTVar2->Reference = (FRHIBuffer *)(TVar16.Reference)->_padding_;
      (TVar16.Reference)->_padding_ = 0;
      if (pFVar7 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar7);
      }
    }
    if ((FRHIResource *)local_3b0._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_3b0._0_8_);
    }
    local_388._72_8_ = 0;
    local_388._64_8_ = 0x11c00;
    TVar17 = FRHICommandListBase::CreateShaderResourceView
                       (param_1,(FRHIBuffer *)(local_3b0 + 8),(FInitializer *)pTVar2->Reference);
    pTVar3 = &this->SampleRegionsVerticesSRV;
    if ((FRHIShaderResourceView *)pTVar3 != TVar17.Reference) {
      pFVar5 = pTVar3->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar3->Reference = *TVar17.Reference;
      *(undefined8 *)TVar17.Reference = 0;
      if (pFVar5 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
    }
    if ((FRHIResource *)local_3b0._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_3b0._8_8_);
    }
    this->GPUMemoryUsage =
         this->GPUMemoryUsage + (ulonglong)(uint)((int)(this->SampleRegionsVertices)._padding_ << 2)
    ;
  }
  if (this->bMeshValid == false) {
    pFVar18 = FNiagaraRenderer::GetDummyUIntBuffer();
    pFVar5 = (this->BufferTriangleMatricesOffsetSRV).Reference;
    if (pFVar5 != pFVar18) {
      (this->BufferTriangleMatricesOffsetSRV).Reference = pFVar18;
      if (pFVar18 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar18);
      }
      if (pFVar5 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
    }
  }
  else {
    EVar4 = param_1->ActivePipelines;
    local_2e8._padding_ = (longlong)(this->VertexCount << 2);
    local_2e8._padding_ = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x4101);
    local_2e8._padding_ = 0x300000078;
    local_2e8._padding_ = 0x151daca70;
    local_2e8._padding_ = 0;
    local_2e8._padding_ = 0;
    local_2e8._padding_ = 0;
    if (((EVar4 != None) && ((EVar4 & EVar4 - Graphics) != None)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                            ,0x2a5,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (param_1->ActivePipelines == None) {
      FRHICommandListBase::SwitchPipeline(param_1,Graphics);
      (**(code **)(GDynamicRHI->_padding_ + 0x140))
                (GDynamicRHI,local_e8,param_1,&local_2e8._padding_);
      FRHICommandListBase::SwitchPipeline(param_1,None);
    }
    else {
      (**(code **)(GDynamicRHI->_padding_ + 0x140))
                (GDynamicRHI,local_e8,param_1,&local_2e8._padding_);
    }
    TRHIBufferInitializer<unsigned_int>::TRHIBufferInitializer<unsigned_int>
              ((TRHIBufferInitializer<unsigned_int> *)local_98,(FRHIBufferInitializer *)local_e8);
    if ((local_b8 != (FRHICommandListBase *)0x0) && (local_b0 != (FRHIBuffer *)0x0)) {
      FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_e8);
    }
    if (local_e8._0_8_ != 0) {
      plVar24 = (longlong *)(local_e8 + 0x10);
      if ((longlong *)local_e8._40_8_ != (longlong *)0x0) {
        plVar24 = (longlong *)local_e8._40_8_;
      }
      (**(code **)(*plVar24 + 0x10))();
    }
    uVar28 = uVar29;
    uVar26 = uVar29;
    if (uVar23 != 0) {
      do {
        pFVar15 = this->LODRenderData;
        uVar13 = uVar30;
        if ((int)uVar28 < (pFVar15->RenderSections).ArrayNum) {
          uVar13 = ~uVar28 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar8 = (pFVar15->RenderSections).AllocatorInstance.Data;
        uVar13 = *(uint *)(pFVar8 + (longlong)(int)uVar28 * 0x118 + 0x48);
        iVar11 = *(int *)(pFVar8 + (longlong)(int)uVar28 * 0x118 + 0x10);
        uVar25 = uVar29;
        if (uVar13 != 0) {
          do {
            iVar14 = uVar25 + iVar11;
            uVar25 = uVar25 + 1;
            *(uint *)((longlong)local_58 + (longlong)iVar14 * 4) = uVar26;
          } while (uVar25 < uVar13);
        }
        lVar27 = (longlong)(int)uVar28;
        uVar28 = uVar28 + 1;
        uVar26 = uVar26 + *(int *)(pFVar8 + lVar27 * 0x118 + 0x40);
      } while (uVar28 < uVar23);
    }
    TVar16 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_98);
    pTVar2 = &this->BufferTriangleMatricesOffsetRHI;
    if ((FRHIBuffer *)pTVar2 != TVar16.Reference) {
      pFVar7 = pTVar2->Reference;
      pTVar2->Reference = (FRHIBuffer *)(TVar16.Reference)->_padding_;
      (TVar16.Reference)->_padding_ = 0;
      if (pFVar7 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar7);
      }
    }
    if (local_3a0 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_3a0);
    }
    local_388._88_8_ = 0;
    local_388._80_8_ = 0x11c00;
    TVar17 = FRHICommandListBase::CreateShaderResourceView
                       (param_1,(FRHIBuffer *)local_398,(FInitializer *)pTVar2->Reference);
    pTVar3 = &this->BufferTriangleMatricesOffsetSRV;
    if ((FRHIShaderResourceView *)pTVar3 != TVar17.Reference) {
      pFVar5 = pTVar3->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar3->Reference = *TVar17.Reference;
      *(undefined8 *)TVar17.Reference = 0;
      if (pFVar5 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
    }
    if ((FRHIResource *)local_398._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_398._0_8_);
    }
    this->GPUMemoryUsage = this->GPUMemoryUsage + (ulonglong)this->VertexCount * 4;
    if ((local_68 != (FRHICommandListBase *)0x0) && (local_60 != (FRHIBuffer *)0x0)) {
      FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_98);
    }
    if (local_98._0_8_ != 0) {
      plVar24 = (longlong *)(local_98 + 0x10);
      if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
        plVar24 = (longlong *)local_98._40_8_;
      }
      (**(code **)(*plVar24 + 0x10))();
    }
  }
  iVar11 = (int)(this->FilteredAndUnfilteredBonesArray)._padding_;
  if (iVar11 < 1) {
    FVar19 = (FName)FNiagaraRenderer::GetDummyUIntBuffer();
    local_388._0_8_ = (this->FilteredAndUnfilteredBonesSRV).Reference;
    if ((FName)local_388._0_8_ == FVar19) goto LAB_1492419ce;
    (this->FilteredAndUnfilteredBonesSRV).Reference = (FRHIShaderResourceView *)FVar19;
    if (FVar19 != (FName)0x0) {
      FRHIResource::AddRef((FRHIResource *)FVar19);
    }
  }
  else {
    bVar22 = (byte)GNumExplicitGPUsForRendering;
    EVar12 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Static,false);
    local_1c0 = (ulonglong)(uint)(iVar11 * 2);
    uStack_1b8 = CONCAT44((1 << (bVar22 & 0x1f)) + -1,0x4101);
    local_1a0 = CONCAT44(2,EVar12);
    local_1b0 = L"FilteredAndUnfilteredBonesBuffer";
    uStack_198 = 0;
    local_190 = 0;
    pTStack_1a8 = &this->FilteredAndUnfilteredBonesArray;
    TVar16 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)(local_398 + 8));
    pTVar2 = &this->FilteredAndUnfilteredBonesBuffer;
    if ((FRHIBuffer *)pTVar2 != TVar16.Reference) {
      pFVar7 = pTVar2->Reference;
      pTVar2->Reference = (FRHIBuffer *)(TVar16.Reference)->_padding_;
      (TVar16.Reference)->_padding_ = 0;
      if (pFVar7 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar7);
      }
    }
    if ((FRHIResource *)local_398._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_398._8_8_);
    }
    local_388._104_8_ = 0;
    local_388._96_8_ = 0x12000;
    TVar17 = FRHICommandListBase::CreateShaderResourceView
                       (param_1,(FRHIBuffer *)local_388,(FInitializer *)pTVar2->Reference);
    pTVar3 = &this->FilteredAndUnfilteredBonesSRV;
    if ((FRHIShaderResourceView *)pTVar3 != TVar17.Reference) {
      pFVar5 = pTVar3->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar3->Reference = *TVar17.Reference;
      *(undefined8 *)TVar17.Reference = 0;
      if (pFVar5 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar5);
      }
    }
  }
  if ((FName)local_388._0_8_ != (FName)0x0) {
    FRHIResource::Release((FRHIResource *)local_388._0_8_);
  }
LAB_1492419ce:
  lVar27 = (ulonglong)(uint)((int)(this->FilteredAndUnfilteredBonesArray)._padding_ * 2) +
           this->GPUMemoryUsage;
  this->GPUMemoryUsage = lVar27;
  if (lVar27 != 0) {
    FVar21 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar20 = ::FName::FName((FName *)&local_2e8._padding_,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar21 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                          *pFVar20,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                          "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar19 = *(FName *)FVar21;
    if (((FVar19 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_30c = FVar19.Number & 0xffffafff | 0xa000;
      local_388._8_8_ = FVar19;
      local_388._112_8_ = lVar27;
      local_310 = FVar19.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)(local_388 + 0x70));
      FStatsTrace::Add((FName *)(local_388 + 8),lVar27);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Initialise @ 149241c00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshGpuSpawnStaticBuffers::Initialise
          (FSkeletalMeshGpuSpawnStaticBuffers *this,FNDISkeletalMesh_InstanceData *param_1,
          int param_2,FSkeletalMeshLODRenderData *param_3,FSkeletalMeshSamplingLODBuiltData *param_4
          ,FNiagaraSystemInstance *param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  UNiagaraSystem *this_00;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  UObject *this_01;
  undefined2 *puVar12;
  USkeletalMesh *this_02;
  UClass *pUVar13;
  int *piVar14;
  int *piVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  int *piVar19;
  undefined4 *puVar20;
  FScriptContainerElement *pFVar21;
  undefined2 *puVar22;
  FScriptContainerElement *pFVar23;
  longlong *plVar24;
  undefined1 local_res8 [8];
  FNDISkeletalMesh_InstanceData *local_res10;
  undefined1 local_res18 [8];
  undefined2 local_98 [2];
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92 [2];
  int local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  uint local_80;
  FScriptContainerElement *local_78;
  FScriptContainerElement *local_70;
  FString local_68;
  FString local_58;
  USkeletalMesh *local_48;
  
  this->LODIndex = param_2;
  plVar24 = &(this->FilteredAndUnfilteredBonesArray)._padding_;
  this->SkeletalMeshSamplingLODBuiltData = (FSkeletalMeshSamplingLODBuiltData *)0x0;
  this->bUseGpuUniformlyDistributedSampling = false;
  piVar1 = (int *)((longlong)&(this->FilteredAndUnfilteredBonesArray)._padding_ + 4);
  this->LODRenderData = (FSkeletalMeshLODRenderData *)0x0;
  this->TriangleCount = 0;
  this->VertexCount = 0;
  this->NumFilteredBones = 0;
  this->NumUnfilteredBones = 0;
  *(undefined4 *)&(this->FilteredAndUnfilteredBonesArray)._padding_ = 0;
  local_res10 = param_1;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (2,2,0,(ForAnyElementType *)plVar24,0,piVar1);
  }
  this->NumFilteredSockets = 0;
  this->FilteredSocketBoneOffset = 0;
  if (param_1 != (FNDISkeletalMesh_InstanceData *)0x0) {
    (this->SceneComponent).WeakPtr = (param_1->SceneComponent).WeakPtr;
    this->SkeletalMeshSamplingLODBuiltData = param_4;
    this->LODRenderData = param_3;
    this->bUseGpuUniformlyDistributedSampling = param_1->bIsGpuUniformlyDistributedSampling;
    if (((param_3->MultiSizeIndexContainer).IndexBuffer ==
         (FRawStaticIndexBuffer16or32Interface *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexBuffer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                           ,0x56,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar9 = (**(code **)(((param_3->MultiSizeIndexContainer).IndexBuffer)->_padding_ + 0x50))();
    this->TriangleCount =
         iVar9 / 3 + (iVar9 >> 0x1f) +
         (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f);
    this->VertexCount = (param_3->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
    if (this->bUseGpuUniformlyDistributedSampling != false) {
      if ((this->SkeletalMeshSamplingLODBuiltData == (FSkeletalMeshSamplingLODBuiltData *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("SkeletalMeshSamplingLODBuiltData != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                             ,0x347,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((uint)(this->SkeletalMeshSamplingLODBuiltData->AreaWeightedTriangleSampler)._padding_ !=
          this->TriangleCount) {
        if (2 < (byte)LogNiagara._0_1_) {
          this_00 = param_5->System;
          if ((this_00 == (UNiagaraSystem *)0x0) || (this_00->_padding_ == 0)) {
            ::FString::FString(&local_58,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this_00,&local_58,(UObject *)0x0,None);
          }
          this_01 = FWeakObjectPtr::Get(&(param_1->SkeletalMesh).WeakPtr);
          if ((this_01 == (UObject *)0x0) || (*(longlong *)&this_01->field_0x10 == 0)) {
            ::FString::FString(&local_68,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this_01,&local_68,(UObject *)0x0,None);
          }
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_FSkeletalMeshGpuSpawnStaticBuffers::Initialise(FNDISkeletalMesh_InstanceData*___ptr64,int,FSkeletalMeshLODRenderData_const&___ptr64,FSkeletalMeshSamplingLODBuiltData_const*___ptr64,FNiagaraSystemInstance*___ptr64)___ptr64'
                      ::__l19::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        this->bUseGpuUniformlyDistributedSampling = false;
      }
    }
    this->NumFilteredBones = param_1->NumFilteredBones;
    this->NumUnfilteredBones = param_1->NumUnfilteredBones;
    this->ExcludedBoneIndex = param_1->ExcludedBoneIndex;
    uVar5 = (param_1->FilteredAndUnfilteredBones).ArrayNum;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if (*piVar1 < (int)uVar5) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (2,2,uVar5,(ForAnyElementType *)plVar24,
                 (int)(this->FilteredAndUnfilteredBonesArray)._padding_,piVar1);
    }
    pFVar21 = (param_1->FilteredAndUnfilteredBones).AllocatorInstance.Data;
    iVar9 = (param_1->FilteredAndUnfilteredBones).ArrayNum;
    pFVar23 = pFVar21 + (longlong)iVar9 * 2;
    while( true ) {
      if ((param_1->FilteredAndUnfilteredBones).ArrayNum != iVar9) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<unsigned_short,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar21 == pFVar23) break;
      local_98[0] = *(undefined2 *)pFVar21;
      puVar12 = (undefined2 *)*plVar24;
      puVar22 = (undefined2 *)((longlong)plVar24 + ((longlong)puVar12 >> 0x18));
      if (((ulonglong)puVar12 & 1) == 0) {
        puVar22 = puVar12;
      }
      if (puVar22 <= local_98) {
        if (((ulonglong)puVar12 & 1) != 0) {
          puVar12 = (undefined2 *)((longlong)plVar24 + ((longlong)puVar12 >> 0x18));
        }
        if ((local_98 < puVar12 + *piVar1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar10 = (int)(this->FilteredAndUnfilteredBonesArray)._padding_;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                           (0x202,(ForAnyElementType *)plVar24,piVar1);
      }
      *(int *)&(this->FilteredAndUnfilteredBonesArray)._padding_ = iVar10 + 1;
      uVar17 = *plVar24;
      if ((uVar17 & 1) != 0) {
        uVar17 = (longlong)plVar24 + ((longlong)uVar17 >> 0x18);
      }
      pFVar21 = pFVar21 + 2;
      *(undefined2 *)(uVar17 + (longlong)iVar10 * 2) = local_98[0];
    }
    this->NumFilteredSockets = (param_1->FilteredSocketInfo).ArrayNum;
    this->FilteredSocketBoneOffset = param_1->FilteredSocketBoneOffset;
    if (0 < (param_1->SamplingRegionIndices).ArrayNum) {
      this_02 = (USkeletalMesh *)FWeakObjectPtr::Get(&(param_1->SkeletalMesh).WeakPtr);
      local_48 = this_02;
      USkeletalMesh::WaitUntilAsyncPropertyReleased(this_02,SamplingInfo,ReadOnly);
      this->bSamplingRegionsAllAreaWeighted = true;
      this->NumSamplingRegionTriangles = 0;
      this->NumSamplingRegionVertices = 0;
      pFVar21 = (param_1->SamplingRegionIndices).AllocatorInstance.Data;
      iVar9 = (param_1->SamplingRegionIndices).ArrayNum;
      pFVar23 = pFVar21 + (longlong)iVar9 * 4;
      while( true ) {
        if ((param_1->SamplingRegionIndices).ArrayNum != iVar9) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        if (pFVar21 == pFVar23) break;
        uVar5 = *(uint *)pFVar21;
        uVar11 = 0;
        if ((int)uVar5 < (this_02->SamplingInfo).BuiltData.RegionBuiltData.ArrayNum) {
          uVar11 = ~uVar5 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (this_02->SamplingInfo).BuiltData.RegionBuiltData.AllocatorInstance.Data;
        this->NumSamplingRegionTriangles =
             this->NumSamplingRegionTriangles + *(int *)(pFVar6 + (longlong)(int)uVar5 * 0x78 + 8);
        this->NumSamplingRegionVertices =
             this->NumSamplingRegionVertices + *(int *)(pFVar6 + (longlong)(int)uVar5 * 0x78 + 0x18)
        ;
        this->bSamplingRegionsAllAreaWeighted =
             (bool)(this->bSamplingRegionsAllAreaWeighted &
                   *(int *)(pFVar6 + (longlong)(int)uVar5 * 0x78 + 0x40) ==
                   *(int *)(pFVar6 + (longlong)(int)uVar5 * 0x78 + 8));
        pFVar21 = pFVar21 + 4;
      }
      iVar9 = this->NumSamplingRegionTriangles;
      pUVar13 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
      if ((pUVar13->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar13);
      }
      cVar3 = (pUVar13->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x27;
      if (cVar3 == '\0') {
        iVar9 = iVar9 * 2;
      }
      else if ((cVar3 != '\x01') && (cVar3 != '\x02')) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        iVar9 = 0;
      }
      UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (4,4,iVar9,(ForAnyElementType *)&(this->SampleRegionsProbAlias)._padding_,
                 (int *)&(this->SampleRegionsProbAlias)._padding_,
                 (int *)((longlong)&(this->SampleRegionsProbAlias)._padding_ + 4));
      uVar5 = this->NumSamplingRegionTriangles;
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      if (*(int *)((longlong)&(this->SampleRegionsTriangleIndicies)._padding_ + 4) < (int)uVar5) {
        UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (4,4,uVar5,(ForAnyElementType *)&(this->SampleRegionsTriangleIndicies)._padding_,
                   (int)(this->SampleRegionsTriangleIndicies)._padding_,
                   (int *)((longlong)&(this->SampleRegionsTriangleIndicies)._padding_ + 4));
      }
      uVar5 = this->NumSamplingRegionVertices;
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      piVar1 = (int *)((longlong)&(this->SampleRegionsVertices)._padding_ + 4);
      if (*piVar1 < (int)uVar5) {
        UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (4,4,uVar5,(ForAnyElementType *)&(this->SampleRegionsVertices)._padding_,
                   (int)(this->SampleRegionsVertices)._padding_,piVar1);
      }
      local_80 = (param_1->SamplingRegionIndices).ArrayNum;
      uVar17 = (ulonglong)(int)local_80;
      iVar9 = 0;
      pFVar23 = (param_1->SamplingRegionIndices).AllocatorInstance.Data;
      local_88 = 0;
      local_70 = pFVar23 + uVar17 * 4;
      while( true ) {
        plVar24 = &(this->SampleRegionsTriangleIndicies)._padding_;
        local_84 = iVar9;
        local_78 = pFVar23;
        if ((param_1->SamplingRegionIndices).ArrayNum != (int)uVar17) {
          local_94 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_94);
        }
        if (pFVar23 == local_70) break;
        uVar5 = *(uint *)pFVar23;
        uVar11 = 0;
        if ((int)uVar5 < (this_02->SamplingInfo).BuiltData.RegionBuiltData.ArrayNum) {
          uVar11 = ~uVar5 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = local_88;
        pFVar23 = (this_02->SamplingInfo).BuiltData.RegionBuiltData.AllocatorInstance.Data +
                  (longlong)(int)uVar5 * 0x78;
        if (this->bSamplingRegionsAllAreaWeighted != false) {
          uVar17 = (this->SampleRegionsProbAlias)._padding_;
          if ((uVar17 & 1) != 0) {
            uVar17 = (longlong)&(this->SampleRegionsProbAlias)._padding_ +
                     ((longlong)uVar17 >> 0x18);
          }
          NDISkelMeshLocal::PackProbAlias
                    ((uint *)(uVar17 + (longlong)local_88 * 4),
                     (FSkeletalMeshAreaWeightedTriangleSampler *)(pFVar23 + 0x30),iVar9);
          iVar9 = *(int *)(pFVar23 + 0x40);
          pUVar13 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
          if ((pUVar13->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar13);
          }
          cVar3 = (pUVar13->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x27;
          if (cVar3 == '\0') {
            iVar9 = iVar9 * 2;
          }
          else if ((cVar3 != '\x01') && (cVar3 != '\x02')) {
            UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
            iVar9 = 0;
          }
          local_88 = iVar10 + iVar9;
        }
        piVar19 = *(int **)pFVar23;
        iVar9 = *(int *)(pFVar23 + 8);
        piVar1 = piVar19 + iVar9;
        while( true ) {
          if (*(int *)(pFVar23 + 8) != iVar9) {
            local_93 = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_93);
          }
          if (piVar19 == piVar1) break;
          iVar10 = *piVar19;
          local_90 = iVar10 / 3 + (iVar10 >> 0x1f) +
                     (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f
                          );
          piVar15 = (int *)*plVar24;
          piVar14 = piVar15;
          if (((ulonglong)piVar15 & 1) != 0) {
            piVar14 = (int *)((longlong)plVar24 + ((longlong)piVar15 >> 0x18));
          }
          if (piVar14 <= &local_90) {
            if (((ulonglong)piVar15 & 1) != 0) {
              piVar15 = (int *)((longlong)plVar24 + ((longlong)piVar15 >> 0x18));
            }
            if ((&local_90 <
                 piVar15 + *(int *)((longlong)&(this->SampleRegionsTriangleIndicies)._padding_ + 4))
               && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          iVar10 = (int)(this->SampleRegionsTriangleIndicies)._padding_;
          if (iVar10 == *(int *)((longlong)&(this->SampleRegionsTriangleIndicies)._padding_ + 4)) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)plVar24,
                                (int *)((longlong)&(this->SampleRegionsTriangleIndicies)._padding_ +
                                       4));
          }
          *(int *)&(this->SampleRegionsTriangleIndicies)._padding_ = iVar10 + 1;
          uVar17 = *plVar24;
          if ((uVar17 & 1) != 0) {
            uVar17 = (longlong)plVar24 + ((longlong)uVar17 >> 0x18);
          }
          piVar19 = piVar19 + 1;
          *(int *)(uVar17 + (longlong)iVar10 * 4) = local_90;
        }
        puVar20 = *(undefined4 **)(pFVar23 + 0x10);
        plVar24 = &(this->SampleRegionsVertices)._padding_;
        iVar9 = *(int *)(pFVar23 + 0x18);
        puVar2 = puVar20 + iVar9;
        while( true ) {
          if (*(int *)(pFVar23 + 0x18) != iVar9) {
            local_92[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_92);
          }
          if (puVar20 == puVar2) break;
          local_8c = *puVar20;
          puVar16 = (undefined4 *)*plVar24;
          puVar18 = puVar16;
          if (((ulonglong)puVar16 & 1) != 0) {
            puVar18 = (undefined4 *)((longlong)plVar24 + ((longlong)puVar16 >> 0x18));
          }
          if (puVar18 <= &local_8c) {
            if (((ulonglong)puVar16 & 1) != 0) {
              puVar16 = (undefined4 *)((longlong)plVar24 + ((longlong)puVar16 >> 0x18));
            }
            if ((&local_8c <
                 puVar16 + *(int *)((longlong)&(this->SampleRegionsVertices)._padding_ + 4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          iVar10 = (int)(this->SampleRegionsVertices)._padding_;
          if (iVar10 == *(int *)((longlong)&(this->SampleRegionsVertices)._padding_ + 4)) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)plVar24,
                                (int *)((longlong)&(this->SampleRegionsVertices)._padding_ + 4));
          }
          *(int *)&(this->SampleRegionsVertices)._padding_ = iVar10 + 1;
          uVar17 = *plVar24;
          if ((uVar17 & 1) != 0) {
            uVar17 = (longlong)plVar24 + ((longlong)uVar17 >> 0x18);
          }
          puVar20 = puVar20 + 1;
          *(undefined4 *)(uVar17 + (longlong)iVar10 * 4) = local_8c;
        }
        iVar9 = local_84 + *(int *)(pFVar23 + 8);
        pFVar23 = local_78 + 4;
        uVar17 = (ulonglong)local_80;
        param_1 = local_res10;
        this_02 = local_48;
      }
    }
  }
  return;
}

// ReleaseRHI @ 14924ada0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSkeletalMeshGpuSpawnStaticBuffers::ReleaseRHI(FSkeletalMeshGpuSpawnStaticBuffers *this)

{
  uchar auVar1 [8];
  FName FVar2;
  FRHIBuffer *pFVar3;
  FRHIShaderResourceView *pFVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_28;
  
  auVar1 = (uchar  [8])this->GPUMemoryUsage;
  if (auVar1 != (uchar  [8])0x0) {
    FVar6 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar5 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar5,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar6;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar2;
      local_28.StatData.Pad = auVar1;
      local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  this->GPUMemoryUsage = 0;
  pFVar3 = (this->BufferTriangleMatricesOffsetRHI).Reference;
  if (pFVar3 != (FRHIBuffer *)0x0) {
    (this->BufferTriangleMatricesOffsetRHI).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->BufferTriangleMatricesOffsetSRV).Reference;
  if (pFVar4 != (FRHIShaderResourceView *)0x0) {
    (this->BufferTriangleMatricesOffsetSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar3 = (this->BufferTriangleUniformSamplerProbAliasRHI).Reference;
  if (pFVar3 != (FRHIBuffer *)0x0) {
    (this->BufferTriangleUniformSamplerProbAliasRHI).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->BufferTriangleUniformSamplerProbAliasSRV).Reference;
  if (pFVar4 != (FRHIShaderResourceView *)0x0) {
    (this->BufferTriangleUniformSamplerProbAliasSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar3 = (this->SampleRegionsProbAliasBuffer).Reference;
  if (pFVar3 != (FRHIBuffer *)0x0) {
    (this->SampleRegionsProbAliasBuffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->SampleRegionsProbAliasSRV).Reference;
  if (pFVar4 != (FRHIShaderResourceView *)0x0) {
    (this->SampleRegionsProbAliasSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar3 = (this->SampleRegionsTriangleIndicesBuffer).Reference;
  if (pFVar3 != (FRHIBuffer *)0x0) {
    (this->SampleRegionsTriangleIndicesBuffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->SampleRegionsTriangleIndicesSRV).Reference;
  if (pFVar4 != (FRHIShaderResourceView *)0x0) {
    (this->SampleRegionsTriangleIndicesSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar3 = (this->SampleRegionsVerticesBuffer).Reference;
  if (pFVar3 != (FRHIBuffer *)0x0) {
    (this->SampleRegionsVerticesBuffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->SampleRegionsVerticesSRV).Reference;
  if (pFVar4 != (FRHIShaderResourceView *)0x0) {
    (this->SampleRegionsVerticesSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar3 = (this->FilteredAndUnfilteredBonesBuffer).Reference;
  if (pFVar3 != (FRHIBuffer *)0x0) {
    (this->FilteredAndUnfilteredBonesBuffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->FilteredAndUnfilteredBonesSRV).Reference;
  if (pFVar4 != (FRHIShaderResourceView *)0x0) {
    (this->FilteredAndUnfilteredBonesSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar4 = (this->MeshVertexBufferSRV).Reference;
  if (pFVar4 != (FRHIShaderResourceView *)0x0) {
    (this->MeshVertexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar4 = (this->MeshIndexBufferSRV).Reference;
  if (pFVar4 != (FRHIShaderResourceView *)0x0) {
    (this->MeshIndexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar4 = (this->MeshTangentBufferSRV).Reference;
  if (pFVar4 != (FRHIShaderResourceView *)0x0) {
    (this->MeshTangentBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar4 = (this->MeshTexCoordBufferSRV).Reference;
  if (pFVar4 != (FRHIShaderResourceView *)0x0) {
    (this->MeshTexCoordBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar4 = (this->MeshColorBufferSRV).Reference;
  if (pFVar4 != (FRHIShaderResourceView *)0x0) {
    (this->MeshColorBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  return;
}

