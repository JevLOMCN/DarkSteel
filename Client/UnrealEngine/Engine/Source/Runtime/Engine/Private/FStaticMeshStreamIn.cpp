// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FStaticMeshStreamIn @ 14877bcc0

FStaticMeshStreamIn * __thiscall
FStaticMeshStreamIn::FStaticMeshStreamIn
          (FStaticMeshStreamIn *this,UStaticMesh *param_1,EThreadType param_2)

{
  FStaticMeshUpdate::FStaticMeshUpdate((FStaticMeshUpdate *)this,param_1);
  this->_padding_ = (longlong)&___7FStaticMeshStreamIn__6B_;
  this->IntermediateBuffersArray[0].TangentsVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[0].TexCoordVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[0].PositionVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[0].ColorVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[0].IndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[0].ReversedIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[0].DepthOnlyIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[0].ReversedDepthOnlyIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[0].WireframeIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[1].TangentsVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[1].TexCoordVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[1].PositionVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[1].ColorVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[1].IndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[1].ReversedIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[1].DepthOnlyIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[1].ReversedDepthOnlyIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[1].WireframeIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[2].TangentsVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[2].TexCoordVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[2].PositionVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[2].ColorVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[2].IndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[2].ReversedIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[2].DepthOnlyIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[2].ReversedDepthOnlyIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[2].WireframeIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[3].TangentsVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[3].TexCoordVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[3].PositionVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[3].ColorVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[3].IndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[3].ReversedIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[3].DepthOnlyIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[3].ReversedDepthOnlyIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[3].WireframeIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[4].TangentsVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[4].TexCoordVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[4].PositionVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[4].ColorVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[4].IndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[4].ReversedIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[4].DepthOnlyIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[4].ReversedDepthOnlyIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[4].WireframeIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[5].TangentsVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[5].TexCoordVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[5].PositionVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[5].ColorVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[5].IndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[5].ReversedIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[5].DepthOnlyIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[5].ReversedDepthOnlyIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[5].WireframeIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[6].TangentsVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[6].TexCoordVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[6].PositionVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[6].ColorVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[6].IndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[6].ReversedIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[6].DepthOnlyIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[6].ReversedDepthOnlyIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[6].WireframeIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[7].TangentsVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[7].TexCoordVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[7].PositionVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[7].ColorVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[7].IndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[7].ReversedIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[7].DepthOnlyIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[7].ReversedDepthOnlyIndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[7].WireframeIndexBuffer.Reference = (FRHIBuffer *)0x0;
  FRayTracingGeometryInitializer::FRayTracingGeometryInitializer
            (&this->IntermediateRayTracingGeometry[0].Initializer);
  this->IntermediateRayTracingGeometry[0].RayTracingGeometryRHI.Reference =
       (FRHIRayTracingGeometry *)0x0;
  this->IntermediateRayTracingGeometry[0].bRequiresBuild = false;
  FRayTracingGeometryInitializer::FRayTracingGeometryInitializer
            (&this->IntermediateRayTracingGeometry[1].Initializer);
  this->IntermediateRayTracingGeometry[1].RayTracingGeometryRHI.Reference =
       (FRHIRayTracingGeometry *)0x0;
  this->IntermediateRayTracingGeometry[1].bRequiresBuild = false;
  FRayTracingGeometryInitializer::FRayTracingGeometryInitializer
            (&this->IntermediateRayTracingGeometry[2].Initializer);
  this->IntermediateRayTracingGeometry[2].RayTracingGeometryRHI.Reference =
       (FRHIRayTracingGeometry *)0x0;
  this->IntermediateRayTracingGeometry[2].bRequiresBuild = false;
  FRayTracingGeometryInitializer::FRayTracingGeometryInitializer
            (&this->IntermediateRayTracingGeometry[3].Initializer);
  this->IntermediateRayTracingGeometry[3].RayTracingGeometryRHI.Reference =
       (FRHIRayTracingGeometry *)0x0;
  this->IntermediateRayTracingGeometry[3].bRequiresBuild = false;
  FRayTracingGeometryInitializer::FRayTracingGeometryInitializer
            (&this->IntermediateRayTracingGeometry[4].Initializer);
  this->IntermediateRayTracingGeometry[4].RayTracingGeometryRHI.Reference =
       (FRHIRayTracingGeometry *)0x0;
  this->IntermediateRayTracingGeometry[4].bRequiresBuild = false;
  FRayTracingGeometryInitializer::FRayTracingGeometryInitializer
            (&this->IntermediateRayTracingGeometry[5].Initializer);
  this->IntermediateRayTracingGeometry[5].RayTracingGeometryRHI.Reference =
       (FRHIRayTracingGeometry *)0x0;
  this->IntermediateRayTracingGeometry[5].bRequiresBuild = false;
  FRayTracingGeometryInitializer::FRayTracingGeometryInitializer
            (&this->IntermediateRayTracingGeometry[6].Initializer);
  this->IntermediateRayTracingGeometry[6].RayTracingGeometryRHI.Reference =
       (FRHIRayTracingGeometry *)0x0;
  this->IntermediateRayTracingGeometry[6].bRequiresBuild = false;
  FRayTracingGeometryInitializer::FRayTracingGeometryInitializer
            (&this->IntermediateRayTracingGeometry[7].Initializer);
  this->IntermediateRayTracingGeometry[7].RayTracingGeometryRHI.Reference =
       (FRHIRayTracingGeometry *)0x0;
  this->IntermediateRayTracingGeometry[7].bRequiresBuild = false;
  this->StreamingRHICmdList = (FRHICommandList *)0x0;
  this->CreateResourcesThread = param_2;
  return this;
}

// ~FStaticMeshStreamIn @ 14877fa50

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall FStaticMeshStreamIn::~FStaticMeshStreamIn(FStaticMeshStreamIn *this)

{
  FRHIRayTracingGeometry *this_00;
  FScriptContainerElement *pFVar1;
  FRHIBuffer *this_01;
  FRHIResource *this_02;
  code *pcVar2;
  bool bVar3;
  FIntermediateRayTracingGeometry *pFVar4;
  longlong lVar5;
  longlong lVar6;
  
  this->_padding_ = (longlong)&___7FStaticMeshStreamIn__6B_;
  if (this->StreamingRHICmdList != (FRHICommandList *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!StreamingRHICmdList",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                       ,0x99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar5 = 8;
  lVar6 = 8;
  pFVar4 = (FIntermediateRayTracingGeometry *)&this->StreamingRHICmdList;
  do {
    this_00 = pFVar4[-1].RayTracingGeometryRHI.Reference;
    lVar6 = lVar6 + -1;
    if (this_00 != (FRHIRayTracingGeometry *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
    DestructItems<FRayTracingGeometrySegment,int>
              ((FRayTracingGeometrySegment *)pFVar4[-1].Initializer.Segments.AllocatorInstance.Data,
               pFVar4[-1].Initializer.Segments.ArrayNum);
    pFVar1 = pFVar4[-1].Initializer.Segments.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    this_01 = pFVar4[-1].Initializer.IndexBuffer.Reference;
    if (this_01 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
    pFVar4 = pFVar4 + -1;
  } while (lVar6 != 0);
  pFVar4 = this->IntermediateRayTracingGeometry;
  do {
    lVar5 = lVar5 + -1;
    if (*(FRHIResource **)((TRefCountPtr<FRHIBuffer> *)(pFVar4 + -1) + 0xf) != (FRHIResource *)0x0)
    {
      FRHIResource::Release(*(FRHIResource **)((TRefCountPtr<FRHIBuffer> *)(pFVar4 + -1) + 0xf));
    }
    if (*(FRHIResource **)((TRefCountPtr<FRHIBuffer> *)(pFVar4 + -1) + 0xe) != (FRHIResource *)0x0)
    {
      FRHIResource::Release(*(FRHIResource **)((TRefCountPtr<FRHIBuffer> *)(pFVar4 + -1) + 0xe));
    }
    if (*(FRHIResource **)((TRefCountPtr<FRHIBuffer> *)(pFVar4 + -1) + 0xd) != (FRHIResource *)0x0)
    {
      FRHIResource::Release(*(FRHIResource **)((TRefCountPtr<FRHIBuffer> *)(pFVar4 + -1) + 0xd));
    }
    if (*(FRHIResource **)((TRefCountPtr<FRHIBuffer> *)(pFVar4 + -1) + 0xc) != (FRHIResource *)0x0)
    {
      FRHIResource::Release(*(FRHIResource **)((TRefCountPtr<FRHIBuffer> *)(pFVar4 + -1) + 0xc));
    }
    if (*(FRHIResource **)((TRefCountPtr<FRHIBuffer> *)(pFVar4 + -1) + 0xb) != (FRHIResource *)0x0)
    {
      FRHIResource::Release(*(FRHIResource **)((TRefCountPtr<FRHIBuffer> *)(pFVar4 + -1) + 0xb));
    }
    if (*(FRHIResource **)((TRefCountPtr<FRHIBuffer> *)(pFVar4 + -1) + 10) != (FRHIResource *)0x0) {
      FRHIResource::Release(*(FRHIResource **)((TRefCountPtr<FRHIBuffer> *)(pFVar4 + -1) + 10));
    }
    if (*(FRHIResource **)((TRefCountPtr<FRHIBuffer> *)(pFVar4 + -1) + 9) != (FRHIResource *)0x0) {
      FRHIResource::Release(*(FRHIResource **)((TRefCountPtr<FRHIBuffer> *)(pFVar4 + -1) + 9));
    }
    if (*(FRHIResource **)((TRefCountPtr<FRHIBuffer> *)(pFVar4 + -1) + 8) != (FRHIResource *)0x0) {
      FRHIResource::Release(*(FRHIResource **)((TRefCountPtr<FRHIBuffer> *)(pFVar4 + -1) + 8));
    }
    this_02 = *(FRHIResource **)((TRefCountPtr<FRHIBuffer> *)(pFVar4 + -1) + 7);
    if (this_02 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_02);
    }
    pFVar4 = (FIntermediateRayTracingGeometry *)((TRefCountPtr<FRHIBuffer> *)(pFVar4 + -1) + 7);
  } while (lVar5 != 0);
  FStaticMeshUpdate::~FStaticMeshUpdate((FStaticMeshUpdate *)this);
  return;
}

// CreateBuffers @ 14878e840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStaticMeshStreamIn::CreateBuffers(FStaticMeshStreamIn *this,FStaticMeshUpdateContext *param_1)

{
  longlong *plVar1;
  FRHIComputeCommandList *this_00;
  FStaticMeshLODResources *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FRHICommandListBase *this_01;
  FRHIBreadcrumbAllocator *this_02;
  FRHIBreadcrumbNode *pFVar7;
  uint uVar8;
  FRHICommandListBase *this_03;
  ulonglong uVar9;
  FIntermediateBuffers *pFVar10;
  longlong lVar11;
  FLLMScope local_res8 [2];
  longlong *local_res10;
  longlong local_res18;
  FMemScope local_res20;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26,FName>_const_*,std::tuple<FName_&&>_>
  local_a8;
  FRHIResourceReplaceBatcher local_98;
  FRHIBreadcrumbScope local_80;
  char local_70;
  uint uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  FLLMScope::FLLMScope(local_res8,StaticMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,StaticMesh,true);
  if (((param_1->Mesh == (UStaticMesh *)0x0) ||
      (param_1->RenderData == (FStaticMeshRenderData *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context.Mesh && Context.RenderData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                         ,0xa0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_01 = ::operator_new(0x1bb0);
  this_03 = (FRHICommandListBase *)0x0;
  if (this_01 != (FRHICommandListBase *)0x0) {
    FRHICommandListBase::FRHICommandListBase
              (this_01,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1),false);
    this_03 = this_01;
  }
  this->StreamingRHICmdList = (FRHICommandList *)this_03;
  FRHICommandListBase::SwitchPipeline(this_03,Graphics);
  local_res18 = param_1->Mesh->_padding_;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_58 = 0;
    uStack_54 = 0;
    ::Desc._12_8_ = ZEXT48(uStack_5c);
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_ = (longlong)u_StaticMesh_Stre;
    ::Desc._padding_ = (longlong)u_StaticMesh___St;
    ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
    ::Desc._padding_._0_4_ = 0xa5;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FStaticMeshStreamIn::CreateBuffers'::__l15::<lambda_1>::operator()<FName>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  this_00 = (FRHIComputeCommandList *)this->StreamingRHICmdList;
  local_a8._padding_ = (longlong)&local_res18;
  local_a8._Myfirst._Val = &::Desc;
  this_02 = FRHIComputeCommandList::GetBreadcrumbAllocator(this_00);
  pFVar7 = FRHIBreadcrumbAllocator::
           AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26,FName>,FName_&&>
                     (this_02,&local_a8);
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_80,this_00,pFVar7);
  iVar6 = *(int *)((longlong)&this->_padding_ + 4);
  uVar9 = (ulonglong)iVar6;
  plVar1 = &this->_padding_;
  local_70 = '\x01';
  if (iVar6 < (int)*plVar1) {
    lVar11 = uVar9 * 8;
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (param_1->LODResourcesView).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = *(FStaticMeshLODResources **)(lVar11 + (longlong)(param_1->LODResourcesView).DataPtr)
      ;
      FIntermediateBuffers::CreateFromCPUData
                (this->IntermediateBuffersArray + (int)uVar8,
                 (FRHICommandListBase *)this->StreamingRHICmdList,pFVar2);
      bVar4 = IsRayTracingEnabled();
      if (((bVar4) && (pFVar2->RayTracingGeometry != (FRayTracingGeometry *)0x0)) &&
         (iVar6 = FStaticMeshLODResources::GetNumVertices(pFVar2), 0 < iVar6)) {
        CheckRayTracingGeometryInitializer
                  (pFVar2,StreamingDestination,&pFVar2->RayTracingGeometry->Initializer);
        FIntermediateRayTracingGeometry::CreateFromCPUData
                  (this->IntermediateRayTracingGeometry + (int)uVar8,
                   (FRHICommandListBase *)this->StreamingRHICmdList,pFVar2->RayTracingGeometry);
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      lVar11 = lVar11 + 8;
    } while ((int)(uVar8 + 1) < (int)*plVar1);
  }
  local_res10 = &this->_padding_;
  local_98.RHICmdList = (FRHICommandListBase *)this->StreamingRHICmdList;
  local_98.Infos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Infos.ArrayNum = 0;
  local_98.Infos.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,0x62,&local_98.Infos.AllocatorInstance,0,&local_98.Infos.ArrayMax);
  iVar6 = *(int *)((longlong)&this->_padding_ + 4);
  uVar9 = (ulonglong)iVar6;
  if (iVar6 < (int)*plVar1) {
    lVar11 = uVar9 * 8;
    pFVar10 = this->IntermediateBuffersArray + uVar9;
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (param_1->LODResourcesView).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = *(FStaticMeshLODResources **)(lVar11 + (longlong)(param_1->LODResourcesView).DataPtr)
      ;
      FStaticMeshLODResources::IncrementMemoryStats(pFVar2);
      FStaticMeshVertexBuffer::InitRHIForStreaming
                (&(pFVar2->VertexBuffers).StaticMeshVertexBuffer,
                 (pFVar10->TangentsVertexBuffer).Reference,(pFVar10->TexCoordVertexBuffer).Reference
                 ,&local_98);
      FPositionVertexBuffer::InitRHIForStreaming
                (&(pFVar2->VertexBuffers).PositionVertexBuffer,
                 (pFVar10->PositionVertexBuffer).Reference,&local_98);
      FColorVertexBuffer::InitRHIForStreaming
                (&(pFVar2->VertexBuffers).ColorVertexBuffer,(pFVar10->ColorVertexBuffer).Reference,
                 &local_98);
      FRawStaticIndexBuffer::InitRHIForStreaming
                (&pFVar2->IndexBuffer,(pFVar10->IndexBuffer).Reference,&local_98);
      FRawStaticIndexBuffer::InitRHIForStreaming
                (&pFVar2->DepthOnlyIndexBuffer,(pFVar10->DepthOnlyIndexBuffer).Reference,&local_98);
      if (pFVar2->AdditionalIndexBuffers != (FAdditionalStaticMeshIndexBuffers *)0x0) {
        FRawStaticIndexBuffer::InitRHIForStreaming
                  (&pFVar2->AdditionalIndexBuffers->ReversedIndexBuffer,
                   (pFVar10->ReversedIndexBuffer).Reference,&local_98);
        FRawStaticIndexBuffer::InitRHIForStreaming
                  (&pFVar2->AdditionalIndexBuffers->ReversedDepthOnlyIndexBuffer,
                   (pFVar10->ReversedDepthOnlyIndexBuffer).Reference,&local_98);
        FRawStaticIndexBuffer::InitRHIForStreaming
                  (&pFVar2->AdditionalIndexBuffers->WireframeIndexBuffer,
                   (pFVar10->WireframeIndexBuffer).Reference,&local_98);
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      lVar11 = lVar11 + 8;
      pFVar10 = pFVar10 + 1;
    } while ((int)(uVar8 + 1) < (int)*local_res10);
  }
  if (local_98.Infos.ArrayNum != 0) {
    (**(code **)(GDynamicRHI->_padding_ + 0x138))(GDynamicRHI,local_98.RHICmdList,&local_98.Infos);
  }
  if (local_98.Infos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Infos.AllocatorInstance.Data);
  }
  if (local_70 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_80);
  }
  FRHICommandListBase::FinishRecording((FRHICommandListBase *)this->StreamingRHICmdList);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// DiscardNewLODs @ 1487929a0

void __thiscall
FStaticMeshStreamIn::DiscardNewLODs(FStaticMeshStreamIn *this,FStaticMeshUpdateContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((param_1->RenderData != (FStaticMeshRenderData *)0x0) &&
     (iVar1 = *(int *)((longlong)&this->_padding_ + 4), uVar6 = (ulonglong)iVar1,
     iVar1 < (int)this->_padding_)) {
    lVar7 = uVar6 * 8;
    do {
      uVar5 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar5 < (param_1->LODResourcesView).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FStaticMeshLODResources::DiscardCPUData
                (*(FStaticMeshLODResources **)
                  (lVar7 + (longlong)(param_1->LODResourcesView).DataPtr));
      uVar6 = (ulonglong)(uVar5 + 1);
      lVar7 = lVar7 + 8;
    } while ((int)(uVar5 + 1) < (int)this->_padding_);
  }
  return;
}

// DoCancel @ 148792aa0

void __thiscall
FStaticMeshStreamIn::DoCancel(FStaticMeshStreamIn *this,FStaticMeshUpdateContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((param_1->RenderData != (FStaticMeshRenderData *)0x0) &&
     (iVar1 = *(int *)((longlong)&this->_padding_ + 4), uVar6 = (ulonglong)iVar1,
     iVar1 < (int)this->_padding_)) {
    lVar7 = uVar6 * 8;
    do {
      uVar5 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar5 < (param_1->LODResourcesView).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FStaticMeshLODResources::DiscardCPUData
                (*(FStaticMeshLODResources **)
                  (lVar7 + (longlong)(param_1->LODResourcesView).DataPtr));
      uVar6 = (ulonglong)(uVar5 + 1);
      lVar7 = lVar7 + 8;
    } while ((int)(uVar5 + 1) < (int)this->_padding_);
  }
  if ((this->StreamingRHICmdList != (FRHICommandList *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StreamingRHICmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                         ,0x119,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// DoFinishUpdate @ 148793590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FStaticMeshStreamIn::DoFinishUpdate(FStaticMeshStreamIn *this,FStaticMeshUpdateContext *param_1)

{
  FRHIResource **ppFVar1;
  TArray<FRayTracingGeometrySegment,TSizedDefaultAllocator<32>_> *pTVar2;
  FStaticMeshLODResources *pFVar3;
  FRayTracingGeometry *pFVar4;
  FRHIResource *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  EGeometryStateFlags EVar11;
  int *piVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [8];
  FRHIResourceReplaceBatcher local_f0;
  TArrayView<FRHICommandListImmediate::FQueuedCommandList,int> local_d8;
  FQueuedCommandList local_c8 [2];
  FRHIResource *local_b8;
  undefined8 local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  TArray<FRayTracingGeometrySegment,TSizedDefaultAllocator<32>_> local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  FDebugName local_60;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if ((param_1->CurrentThread != 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context.CurrentThread == TT_Render",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                         ,0xd6,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar8 = IsInRenderingThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                         ,0xd7,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (this->StreamingRHICmdList != (FRHICommandList *)0x0) {
    bVar8 = IsInRenderingThread();
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_c8[0].CmdList = (FRHICommandListBase *)this->StreamingRHICmdList;
    local_d8.ArrayNum = 1;
    local_d8.DataPtr = local_c8;
    FRHICommandListImmediate::QueueAsyncCommandListSubmit
              (&GRHICommandList.CommandListImmediate,&local_d8,Disabled,0);
    this->StreamingRHICmdList = (FRHICommandList *)0x0;
  }
  bVar8 = IsRayTracingAllowed();
  if ((bVar8) && (param_1->Mesh->bSupportRayTracing != '\0')) {
    bVar8 = IsInRenderingThread();
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_f0.RHICmdList = (FRHICommandListBase *)&GRHICommandList.CommandListImmediate;
    local_f0.Infos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.Infos.ArrayNum = 0;
    local_f0.Infos.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0x62,&local_f0.Infos.AllocatorInstance,0,&local_f0.Infos.ArrayMax);
    iVar10 = *(int *)((longlong)&this->_padding_ + 4);
    uVar14 = (ulonglong)iVar10;
    if (iVar10 < (int)this->_padding_) {
      lVar15 = uVar14 * 8;
      piVar12 = &this->IntermediateRayTracingGeometry[uVar14].Initializer.Segments.ArrayNum;
      do {
        uVar13 = (uint)uVar14;
        uVar9 = 0;
        if ((int)uVar13 < (param_1->LODResourcesView).ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
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
        pFVar3 = *(FStaticMeshLODResources **)
                  (lVar15 + (longlong)(param_1->LODResourcesView).DataPtr);
        bVar8 = IsRayTracingEnabled();
        if ((((bVar8) && (iVar10 = FStaticMeshLODResources::GetNumVertices(pFVar3), 0 < iVar10)) &&
            (pFVar3->RayTracingGeometry != (FRayTracingGeometry *)0x0)) &&
           (bVar8 = FRayTracingGeometry::IsEvicted(pFVar3->RayTracingGeometry), !bVar8)) {
          pFVar4 = pFVar3->RayTracingGeometry;
          if (*(longlong *)(piVar12 + 0x12) == 0) {
            local_f8[0] = 0;
            bVar8 = `FStaticMeshStreamIn::FIntermediateRayTracingGeometry::
                    TransferRayTracingGeometry'::__l3::<lambda_1>::operator()(local_f8);
            if (!bVar8) goto LAB_148793823;
          }
          FRayTracingGeometry::InitRHIForStreaming
                    (pFVar4,*(FRHIRayTracingGeometry **)(piVar12 + 0x12),&local_f0);
          if ((char)piVar12[0x14] == '\0') {
            EVar11 = pFVar4->GeometryState & ~RequiresBuild;
          }
          else {
            EVar11 = pFVar4->GeometryState | RequiresBuild;
          }
          pFVar4->GeometryState = EVar11;
        }
LAB_148793823:
        local_b8 = (FRHIResource *)0x0;
        local_b0 = 0;
        local_a8 = 0;
        local_a4 = 0x10000;
        local_a0 = 0;
        local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.ArrayNum = 0;
        local_98.ArrayMax = 0;
        local_88 = 0;
        local_80 = 0xffffffffffffffff;
        uStack_78 = 0xffffffffffffffff;
        local_70 = 0xffffffffffffffff;
        local_68 = 0;
        FDebugName::FDebugName(&local_60);
        ppFVar1 = (FRHIResource **)(piVar12 + -10);
        local_54 = 0;
        if (ppFVar1 != &local_b8) {
          pFVar5 = *ppFVar1;
          *ppFVar1 = local_b8;
          local_b8 = (FRHIResource *)0x0;
          if (pFVar5 != (FRHIResource *)0x0) {
            FRHIResource::Release(pFVar5);
          }
        }
        pTVar2 = (TArray<FRayTracingGeometrySegment,TSizedDefaultAllocator<32>_> *)(piVar12 + -2);
        piVar12[-8] = (int)local_b0;
        piVar12[-7] = local_b0._4_4_;
        piVar12[-6] = local_a8;
        *(undefined1 *)(piVar12 + -5) = (undefined1)local_a4;
        *(undefined1 *)((longlong)piVar12 + -0x13) = local_a4._1_1_;
        *(undefined1 *)((longlong)piVar12 + -0x12) = local_a4._2_1_;
        *(undefined1 *)((longlong)piVar12 + -0x11) = local_a4._3_1_;
        *(undefined1 *)(piVar12 + -4) = local_a0;
        if (pTVar2 == &local_98) {
          uVar9 = local_98.ArrayNum;
        }
        else {
          DestructItems<FRayTracingGeometrySegment,int>
                    ((FRayTracingGeometrySegment *)(pTVar2->AllocatorInstance).Data,*piVar12);
          pFVar6 = (pTVar2->AllocatorInstance).Data;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
          (pTVar2->AllocatorInstance).Data = local_98.AllocatorInstance.Data;
          *piVar12 = local_98.ArrayNum;
          piVar12[1] = local_98.ArrayMax;
          local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_98.ArrayNum = 0;
          local_98.ArrayMax = 0;
          uVar9 = 0;
        }
        *(undefined8 *)(piVar12 + 2) = local_88;
        *(undefined8 *)(piVar12 + 4) = local_80;
        *(undefined8 *)(piVar12 + 6) = uStack_78;
        *(undefined8 *)(piVar12 + 10) = local_68;
        *(FName *)(piVar12 + 0xc) = local_60.Name;
        piVar12[0xe] = local_60.Number;
        *(undefined8 *)(piVar12 + 0xf) = local_54;
        *(undefined8 *)(piVar12 + 8) = local_70;
        DestructItems<FRayTracingGeometrySegment,int>
                  ((FRayTracingGeometrySegment *)local_98.AllocatorInstance.Data,uVar9);
        if ((FRayTracingGeometrySegment *)local_98.AllocatorInstance.Data !=
            (FRayTracingGeometrySegment *)0x0) {
          FMemory::Free(local_98.AllocatorInstance.Data);
        }
        if (local_b8 != (FRHIResource *)0x0) {
          FRHIResource::Release(local_b8);
        }
        pFVar5 = *(FRHIResource **)(piVar12 + 0x12);
        if (pFVar5 != (FRHIResource *)0x0) {
          piVar12[0x12] = 0;
          piVar12[0x13] = 0;
          FRHIResource::Release(pFVar5);
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        lVar15 = lVar15 + 8;
        piVar12 = piVar12 + 0x20;
      } while ((int)(uVar13 + 1) < (int)this->_padding_);
    }
    if (local_f0.Infos.ArrayNum != 0) {
      (**(code **)(GDynamicRHI->_padding_ + 0x138))(GDynamicRHI,local_f0.RHICmdList,&local_f0.Infos)
      ;
    }
    if (local_f0.Infos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Infos.AllocatorInstance.Data);
    }
    iVar10 = *(int *)((longlong)&this->_padding_ + 4);
    uVar14 = (ulonglong)iVar10;
    if (iVar10 < (int)this->_padding_) {
      lVar15 = uVar14 * 8;
      do {
        uVar13 = (uint)uVar14;
        uVar9 = 0;
        if ((int)uVar13 < (param_1->LODResourcesView).ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
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
        pFVar3 = *(FStaticMeshLODResources **)
                  (lVar15 + (longlong)(param_1->LODResourcesView).DataPtr);
        iVar10 = FStaticMeshLODResources::GetNumVertices(pFVar3);
        if (((0 < iVar10) && (pFVar3->RayTracingGeometry != (FRayTracingGeometry *)0x0)) &&
           (bVar8 = FRayTracingGeometry::IsEvicted(pFVar3->RayTracingGeometry), !bVar8)) {
          CheckRayTracingGeometryInitializer
                    (pFVar3,Rendering,&pFVar3->RayTracingGeometry->Initializer);
          if (((pFVar3->RayTracingGeometry->GeometryState & StreamedIn) == Invalid) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("EnumHasAllFlags(LODResource.RayTracingGeometry->GetGeometryState(), FRayTracingGeometry::EGeometryStateFlags::StreamedIn)"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                                 ,0xfe,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          bVar8 = IsRayTracingEnabled();
          if (bVar8) {
            bVar8 = FRayTracingGeometry::IsValid(pFVar3->RayTracingGeometry);
            if (bVar8) {
              pFVar4 = pFVar3->RayTracingGeometry;
              bVar8 = IsInRenderingThread();
              if ((!bVar8) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsInRenderingThread()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                     ,0x1594,L""), bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FRayTracingGeometry::RequestBuildIfNeeded
                        (pFVar4,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate,Normal)
              ;
            }
            else {
              bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<4353875937855537410>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                                 ,0x102,"LODResource.RayTracingGeometry->IsValid()");
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
          }
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        lVar15 = lVar15 + 8;
      } while ((int)(uVar13 + 1) < (int)this->_padding_);
    }
  }
  param_1->RenderData->CurrentFirstLODIdx =
       (*(char *)((longlong)&this->_padding_ + 4) - *(char *)((longlong)&this->_padding_ + 6)) +
       *(char *)((longlong)&this->_padding_ + 3);
  UStaticMesh::RequestUpdateCachedRenderState(param_1->Mesh);
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 1;
  return;
}

