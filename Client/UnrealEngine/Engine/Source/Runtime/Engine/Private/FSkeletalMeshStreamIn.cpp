// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FSkeletalMeshStreamIn @ 14733fe40

FSkeletalMeshStreamIn * __thiscall
FSkeletalMeshStreamIn::FSkeletalMeshStreamIn
          (FSkeletalMeshStreamIn *this,USkeletalMesh *param_1,EThreadType param_2)

{
  code *pcVar1;
  bool bVar2;
  FSkeletalMeshStreamIn *pFVar3;
  
  FRenderAssetUpdate::FRenderAssetUpdate
            ((FRenderAssetUpdate *)this,(UStreamableRenderAsset *)param_1);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSkeletalMeshStreamIn__6B_;
  this->IntermediateBuffersArray[0].TangentsVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[0].TexCoordVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[0].PositionVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[0].ColorVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[0].SkinWeightVertexBuffer.DataVertexBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[0].SkinWeightVertexBuffer.LookupVertexBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[0].ClothVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[0].IndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[0].AltSkinWeightVertexBuffers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->IntermediateBuffersArray[0].AltSkinWeightVertexBuffers.ArrayNum = 0;
  this->IntermediateBuffersArray[0].AltSkinWeightVertexBuffers.ArrayMax = 0;
  this->IntermediateBuffersArray[0].HalfEdgeBuffer.VertexToEdgeBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[0].HalfEdgeBuffer.EdgeToTwinEdgeBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[1].TangentsVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[1].TexCoordVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[1].PositionVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[1].ColorVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[1].SkinWeightVertexBuffer.DataVertexBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[1].SkinWeightVertexBuffer.LookupVertexBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[1].ClothVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[1].IndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[1].AltSkinWeightVertexBuffers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->IntermediateBuffersArray[1].AltSkinWeightVertexBuffers.ArrayNum = 0;
  this->IntermediateBuffersArray[1].AltSkinWeightVertexBuffers.ArrayMax = 0;
  this->IntermediateBuffersArray[1].HalfEdgeBuffer.VertexToEdgeBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[1].HalfEdgeBuffer.EdgeToTwinEdgeBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[2].TangentsVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[2].TexCoordVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[2].PositionVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[2].ColorVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[2].SkinWeightVertexBuffer.DataVertexBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[2].SkinWeightVertexBuffer.LookupVertexBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[2].ClothVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[2].IndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[2].AltSkinWeightVertexBuffers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->IntermediateBuffersArray[2].AltSkinWeightVertexBuffers.ArrayNum = 0;
  this->IntermediateBuffersArray[2].AltSkinWeightVertexBuffers.ArrayMax = 0;
  this->IntermediateBuffersArray[2].HalfEdgeBuffer.VertexToEdgeBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[2].HalfEdgeBuffer.EdgeToTwinEdgeBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[3].TangentsVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[3].TexCoordVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[3].PositionVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[3].ColorVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[3].SkinWeightVertexBuffer.DataVertexBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[3].SkinWeightVertexBuffer.LookupVertexBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[3].ClothVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[3].IndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[3].AltSkinWeightVertexBuffers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->IntermediateBuffersArray[3].AltSkinWeightVertexBuffers.ArrayNum = 0;
  this->IntermediateBuffersArray[3].AltSkinWeightVertexBuffers.ArrayMax = 0;
  this->IntermediateBuffersArray[3].HalfEdgeBuffer.VertexToEdgeBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[3].HalfEdgeBuffer.EdgeToTwinEdgeBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[4].TangentsVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[4].TexCoordVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[4].PositionVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[4].ColorVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[4].SkinWeightVertexBuffer.DataVertexBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[4].SkinWeightVertexBuffer.LookupVertexBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[4].ClothVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[4].IndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[4].AltSkinWeightVertexBuffers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->IntermediateBuffersArray[4].AltSkinWeightVertexBuffers.ArrayNum = 0;
  this->IntermediateBuffersArray[4].AltSkinWeightVertexBuffers.ArrayMax = 0;
  this->IntermediateBuffersArray[4].HalfEdgeBuffer.VertexToEdgeBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[4].HalfEdgeBuffer.EdgeToTwinEdgeBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[5].TangentsVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[5].TexCoordVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[5].PositionVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[5].ColorVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[5].SkinWeightVertexBuffer.DataVertexBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[5].SkinWeightVertexBuffer.LookupVertexBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[5].ClothVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[5].IndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[5].AltSkinWeightVertexBuffers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->IntermediateBuffersArray[5].AltSkinWeightVertexBuffers.ArrayNum = 0;
  this->IntermediateBuffersArray[5].AltSkinWeightVertexBuffers.ArrayMax = 0;
  this->IntermediateBuffersArray[5].HalfEdgeBuffer.VertexToEdgeBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[5].HalfEdgeBuffer.EdgeToTwinEdgeBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[6].TangentsVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[6].TexCoordVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[6].PositionVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[6].ColorVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[6].SkinWeightVertexBuffer.DataVertexBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[6].SkinWeightVertexBuffer.LookupVertexBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[6].ClothVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[6].IndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[6].AltSkinWeightVertexBuffers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->IntermediateBuffersArray[6].AltSkinWeightVertexBuffers.ArrayNum = 0;
  this->IntermediateBuffersArray[6].AltSkinWeightVertexBuffers.ArrayMax = 0;
  this->IntermediateBuffersArray[6].HalfEdgeBuffer.VertexToEdgeBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[6].HalfEdgeBuffer.EdgeToTwinEdgeBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[7].TangentsVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[7].TexCoordVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[7].PositionVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[7].ColorVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[7].SkinWeightVertexBuffer.DataVertexBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[7].SkinWeightVertexBuffer.LookupVertexBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[7].ClothVertexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[7].IndexBuffer.Reference = (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[7].AltSkinWeightVertexBuffers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->IntermediateBuffersArray[7].AltSkinWeightVertexBuffers.ArrayNum = 0;
  this->IntermediateBuffersArray[7].AltSkinWeightVertexBuffers.ArrayMax = 0;
  this->IntermediateBuffersArray[7].HalfEdgeBuffer.VertexToEdgeBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  this->IntermediateBuffersArray[7].HalfEdgeBuffer.EdgeToTwinEdgeBufferRHI.Reference =
       (FRHIBuffer *)0x0;
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
  if ((int)this->_padding_ <= *(int *)((longlong)&this->_padding_ + 4)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6453310030073561209>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                       ,0x79,"PendingFirstLODIdx < CurrentFirstLODIdx");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSkeletalMeshStreamIn *)(*pcVar1)();
      return pFVar3;
    }
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  }
  return this;
}

// ~FSkeletalMeshStreamIn @ 147341e20

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall FSkeletalMeshStreamIn::~FSkeletalMeshStreamIn(FSkeletalMeshStreamIn *this)

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
  
  this->_padding_ = (longlong)&___7FSkeletalMeshStreamIn__6B_;
  if (this->StreamingRHICmdList != (FRHICommandList *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!StreamingRHICmdList",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                       ,0x81,L"");
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
    if (*(FRHIResource **)
         ((longlong)
          ((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_> *
           )(pFVar4 + -1) + 7) + 8) != (FRHIResource *)0x0) {
      FRHIResource::Release
                (*(FRHIResource **)
                  ((longlong)
                   ((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_>
                     *)(pFVar4 + -1) + 7) + 8));
    }
    if (*(FRHIResource **)
         ((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_> *)
          (pFVar4 + -1) + 7) != (FRHIResource *)0x0) {
      FRHIResource::Release
                (*(FRHIResource **)
                  ((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_>
                    *)(pFVar4 + -1) + 7));
    }
    DestructItems<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,int>
              (*(TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo> **)
                ((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_>
                  *)(pFVar4 + -1) + 6),
               *(int *)((longlong)
                        ((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_>
                          *)(pFVar4 + -1) + 6) + 8));
    if (*(void **)((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_>
                    *)(pFVar4 + -1) + 6) != (void *)0x0) {
      FMemory::Free(*(void **)((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_>
                                *)(pFVar4 + -1) + 6));
    }
    if (*(FRHIResource **)
         ((longlong)
          ((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_> *
           )(pFVar4 + -1) + 5) + 8) != (FRHIResource *)0x0) {
      FRHIResource::Release
                (*(FRHIResource **)
                  ((longlong)
                   ((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_>
                     *)(pFVar4 + -1) + 5) + 8));
    }
    if (*(FRHIResource **)
         ((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_> *)
          (pFVar4 + -1) + 5) != (FRHIResource *)0x0) {
      FRHIResource::Release
                (*(FRHIResource **)
                  ((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_>
                    *)(pFVar4 + -1) + 5));
    }
    if (*(FRHIResource **)
         ((longlong)
          ((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_> *
           )(pFVar4 + -1) + 4) + 8) != (FRHIResource *)0x0) {
      FRHIResource::Release
                (*(FRHIResource **)
                  ((longlong)
                   ((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_>
                     *)(pFVar4 + -1) + 4) + 8));
    }
    if (*(FRHIResource **)
         ((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_> *)
          (pFVar4 + -1) + 4) != (FRHIResource *)0x0) {
      FRHIResource::Release
                (*(FRHIResource **)
                  ((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_>
                    *)(pFVar4 + -1) + 4));
    }
    if (*(FRHIResource **)
         ((longlong)
          ((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_> *
           )(pFVar4 + -1) + 3) + 8) != (FRHIResource *)0x0) {
      FRHIResource::Release
                (*(FRHIResource **)
                  ((longlong)
                   ((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_>
                     *)(pFVar4 + -1) + 3) + 8));
    }
    if (*(FRHIResource **)
         ((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_> *)
          (pFVar4 + -1) + 3) != (FRHIResource *)0x0) {
      FRHIResource::Release
                (*(FRHIResource **)
                  ((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_>
                    *)(pFVar4 + -1) + 3));
    }
    if (*(FRHIResource **)
         ((longlong)
          ((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_> *
           )(pFVar4 + -1) + 2) + 8) != (FRHIResource *)0x0) {
      FRHIResource::Release
                (*(FRHIResource **)
                  ((longlong)
                   ((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_>
                     *)(pFVar4 + -1) + 2) + 8));
    }
    this_02 = *(FRHIResource **)
               ((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_>
                 *)(pFVar4 + -1) + 2);
    if (this_02 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_02);
    }
    pFVar4 = (FIntermediateRayTracingGeometry *)
             ((TArray<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,TSizedDefaultAllocator<32>_>
               *)(pFVar4 + -1) + 2);
  } while (lVar5 != 0);
  FSkeletalMeshUpdate::~FSkeletalMeshUpdate((FSkeletalMeshUpdate *)this);
  return;
}

// CreateBuffers @ 147348ad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshStreamIn::CreateBuffers(FSkeletalMeshStreamIn *this,FSkelMeshUpdateContext *param_1)

{
  longlong *plVar1;
  int iVar2;
  FRHIComputeCommandList *this_00;
  FSkeletalMeshLODRenderData *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  FRHICommandListBase *this_01;
  FRHIBreadcrumbAllocator *this_02;
  FRHIBreadcrumbNode *pFVar8;
  uint uVar9;
  FRHICommandListBase *this_03;
  ulonglong uVar10;
  longlong lVar11;
  TRefCountPtr<FRHIBuffer> *pTVar12;
  FLLMScope local_res8 [2];
  longlong *local_res10;
  longlong local_res18;
  FMemScope local_res20;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,FName>_const_*,std::tuple<FName_&&>_>
  local_b8;
  FRHIInfo local_a8;
  FRHIResourceReplaceBatcher local_98;
  FRHIBreadcrumbScope local_80;
  char local_70;
  uint uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  FLLMScope::FLLMScope(local_res8,SkeletalMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,SkeletalMesh,true);
  if (((param_1->Mesh == (USkeletalMesh *)0x0) ||
      (param_1->RenderData == (FSkeletalMeshRenderData *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context.Mesh && Context.RenderData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                         ,0x88,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
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
    ::Desc._padding_ = (longlong)u_SkeletalMesh_St;
    ::Desc._padding_ = (longlong)u_SkeletalMesh___;
    ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
    ::Desc._padding_._0_4_ = 0x8d;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FSkeletalMeshStreamIn::CreateBuffers'::__l15::<lambda_1>::operator()<FName>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  this_00 = (FRHIComputeCommandList *)this->StreamingRHICmdList;
  local_b8._padding_ = (longlong)&local_res18;
  local_b8._Myfirst._Val = &::Desc;
  this_02 = FRHIComputeCommandList::GetBreadcrumbAllocator(this_00);
  pFVar8 = FRHIBreadcrumbAllocator::
           AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,FName>,FName_&&>
                     (this_02,&local_b8);
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_80,this_00,pFVar8);
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  uVar10 = (ulonglong)iVar2;
  plVar1 = &this->_padding_;
  local_70 = '\x01';
  if (iVar2 < (int)*plVar1) {
    lVar11 = uVar10 * 8;
    do {
      uVar9 = (uint)uVar10;
      uVar7 = 0;
      if ((int)uVar9 < (param_1->LODResourcesView).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = *(FSkeletalMeshLODRenderData **)
                (lVar11 + (longlong)(param_1->LODResourcesView).DataPtr);
      FIntermediateBuffers::CreateFromCPUData
                (this->IntermediateBuffersArray + (int)uVar9,
                 (FRHICommandListBase *)this->StreamingRHICmdList,pFVar3);
      bVar5 = IsRayTracingEnabled();
      if ((((bVar5) && (cVar6 = (**(code **)(param_1->Mesh->_padding_ + 0x368))(), cVar6 != '\0'))
          && ((pFVar3->StaticVertexBuffers).PositionVertexBuffer.NumVertices != 0)) &&
         (pFVar3->bReferencedByStaticSkeletalMeshObjects_RenderThread != false)) {
        FIntermediateRayTracingGeometry::CreateFromCPUData
                  (this->IntermediateRayTracingGeometry + (int)uVar9,
                   (FRHICommandListBase *)this->StreamingRHICmdList,
                   &pFVar3->StaticRayTracingGeometry);
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      lVar11 = lVar11 + 8;
    } while ((int)(uVar9 + 1) < (int)*plVar1);
  }
  local_res10 = &this->_padding_;
  local_98.RHICmdList = (FRHICommandListBase *)this->StreamingRHICmdList;
  local_98.Infos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Infos.ArrayNum = 0;
  local_98.Infos.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,0x70,&local_98.Infos.AllocatorInstance,0,&local_98.Infos.ArrayMax);
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  uVar10 = (ulonglong)iVar2;
  if (iVar2 < (int)*plVar1) {
    lVar11 = uVar10 * 8;
    pTVar12 = &this->IntermediateBuffersArray[uVar10].HalfEdgeBuffer.EdgeToTwinEdgeBufferRHI;
    do {
      uVar9 = (uint)uVar10;
      uVar7 = 0;
      if ((int)uVar9 < (param_1->LODResourcesView).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = *(FSkeletalMeshLODRenderData **)
                (lVar11 + (longlong)(param_1->LODResourcesView).DataPtr);
      bVar5 = (bool)(**(code **)(param_1->Mesh->_padding_ + 0x470))();
      FSkeletalMeshLODRenderData::IncrementMemoryStats(pFVar3,bVar5);
      FSkeletalMeshLODRenderData::InitMorphResources(pFVar3);
      FStaticMeshVertexBuffer::InitRHIForStreaming
                (&(pFVar3->StaticVertexBuffers).StaticMeshVertexBuffer,pTVar12[-0xb].Reference,
                 pTVar12[-10].Reference,&local_98);
      FPositionVertexBuffer::InitRHIForStreaming
                (&(pFVar3->StaticVertexBuffers).PositionVertexBuffer,pTVar12[-9].Reference,&local_98
                );
      FColorVertexBuffer::InitRHIForStreaming
                (&(pFVar3->StaticVertexBuffers).ColorVertexBuffer,pTVar12[-8].Reference,&local_98);
      FSkinWeightDataVertexBuffer::InitRHIForStreaming
                (&(pFVar3->SkinWeightVertexBuffer).DataVertexBuffer,pTVar12[-7].Reference,&local_98)
      ;
      FSkinWeightLookupVertexBuffer::InitRHIForStreaming
                (&(pFVar3->SkinWeightVertexBuffer).LookupVertexBuffer,pTVar12[-6].Reference,
                 &local_98);
      FSkeletalMeshVertexClothBuffer::InitRHIForStreaming
                (&pFVar3->ClothVertexBuffer,pTVar12[-5].Reference,&local_98);
      FMultiSizeIndexContainer::InitRHIForStreaming
                (&pFVar3->MultiSizeIndexContainer,pTVar12[-4].Reference,&local_98);
      FSkinWeightProfilesData::InitRHIForStreaming
                (&pFVar3->SkinWeightProfilesData,
                 &this->IntermediateBuffersArray[(int)uVar9].AltSkinWeightVertexBuffers,&local_98);
      local_a8.VertexToEdgeBufferRHI.Reference =
           (((FRHIInfo *)(pTVar12 + -1))->VertexToEdgeBufferRHI).Reference;
      if (local_a8.VertexToEdgeBufferRHI.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_a8.VertexToEdgeBufferRHI.Reference);
      }
      local_a8.EdgeToTwinEdgeBufferRHI.Reference = pTVar12->Reference;
      if (local_a8.EdgeToTwinEdgeBufferRHI.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_a8.EdgeToTwinEdgeBufferRHI.Reference);
      }
      FSkeletalMeshHalfEdgeBuffer::InitRHIForStreaming(&pFVar3->HalfEdgeBuffer,&local_a8,&local_98);
      uVar10 = (ulonglong)(uVar9 + 1);
      lVar11 = lVar11 + 8;
      pTVar12 = pTVar12 + 0xc;
    } while ((int)(uVar9 + 1) < (int)*local_res10);
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

// DiscardNewLODs @ 14734a710

void __thiscall
FSkeletalMeshStreamIn::DiscardNewLODs(FSkeletalMeshStreamIn *this,FSkelMeshUpdateContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((param_1->RenderData != (FSkeletalMeshRenderData *)0x0) &&
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
      FSkeletalMeshLODRenderData::ReleaseCPUResources
                (*(FSkeletalMeshLODRenderData **)
                  (lVar7 + (longlong)(param_1->LODResourcesView).DataPtr),true);
      uVar6 = (ulonglong)(uVar5 + 1);
      lVar7 = lVar7 + 8;
    } while ((int)(uVar5 + 1) < (int)this->_padding_);
  }
  return;
}

// DoCancel @ 14734a7d0

void __thiscall
FSkeletalMeshStreamIn::DoCancel(FSkeletalMeshStreamIn *this,FSkelMeshUpdateContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((param_1->RenderData != (FSkeletalMeshRenderData *)0x0) &&
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
      FSkeletalMeshLODRenderData::ReleaseCPUResources
                (*(FSkeletalMeshLODRenderData **)
                  (lVar7 + (longlong)(param_1->LODResourcesView).DataPtr),true);
      uVar6 = (ulonglong)(uVar5 + 1);
      lVar7 = lVar7 + 8;
    } while ((int)(uVar5 + 1) < (int)this->_padding_);
  }
  if ((this->StreamingRHICmdList != (FRHICommandList *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!StreamingRHICmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                         ,0x100,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// DoFinishUpdate @ 14734ad50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FSkeletalMeshStreamIn::DoFinishUpdate(FSkeletalMeshStreamIn *this,FSkelMeshUpdateContext *param_1)

{
  FRHIResource **ppFVar1;
  TArray<FRayTracingGeometrySegment,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  longlong lVar4;
  FRHIResource *pFVar5;
  FScriptContainerElement *pFVar6;
  FSkeletalMeshRenderData *pFVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  uchar uVar12;
  uint uVar13;
  int *piVar14;
  ulonglong uVar15;
  FRayTracingGeometry *this_00;
  longlong lVar16;
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
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context.CurrentThread == TT_Render",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                         ,0xbc,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  bVar9 = IsInRenderingThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                         ,0xbd,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (this->StreamingRHICmdList != (FRHICommandList *)0x0) {
    bVar9 = IsInRenderingThread();
    if ((!bVar9) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_c8[0].CmdList = (FRHICommandListBase *)this->StreamingRHICmdList;
    local_d8.ArrayNum = 1;
    local_d8.DataPtr = local_c8;
    FRHICommandListImmediate::QueueAsyncCommandListSubmit
              (&GRHICommandList.CommandListImmediate,&local_d8,Disabled,0);
    this->StreamingRHICmdList = (FRHICommandList *)0x0;
  }
  bVar9 = IsRayTracingAllowed();
  if ((bVar9) && (cVar10 = (**(code **)(param_1->Mesh->_padding_ + 0x368))(), cVar10 != '\0')) {
    bVar9 = IsInRenderingThread();
    if ((!bVar9) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_f0.RHICmdList = (FRHICommandListBase *)&GRHICommandList.CommandListImmediate;
    local_f0.Infos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.Infos.ArrayNum = 0;
    local_f0.Infos.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0x70,&local_f0.Infos.AllocatorInstance,0,&local_f0.Infos.ArrayMax);
    iVar3 = *(int *)((longlong)&this->_padding_ + 4);
    uVar15 = (ulonglong)iVar3;
    if (iVar3 < (int)this->_padding_) {
      lVar16 = uVar15 * 8;
      piVar14 = &this->IntermediateRayTracingGeometry[uVar15].Initializer.Segments.ArrayNum;
      do {
        uVar13 = (uint)uVar15;
        uVar11 = 0;
        if ((int)uVar13 < (param_1->LODResourcesView).ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar4 = *(longlong *)(lVar16 + (longlong)(param_1->LODResourcesView).DataPtr);
        bVar9 = IsRayTracingEnabled();
        if ((((bVar9) && (*(int *)(lVar4 + 300) != 0)) && (*(char *)(lVar4 + 0x660) != '\0')) &&
           (bVar9 = FRayTracingGeometry::IsEvicted((FRayTracingGeometry *)(lVar4 + 0x668)), !bVar9))
        {
          if (*(longlong *)(piVar14 + 0x12) == 0) {
            local_f8[0] = 0;
            bVar9 = `FSkeletalMeshStreamIn::FIntermediateRayTracingGeometry::
                    TransferRayTracingGeometry'::__l3::<lambda_1>::operator()(local_f8);
            if (!bVar9) goto LAB_14734aff7;
          }
          FRayTracingGeometry::InitRHIForStreaming
                    ((FRayTracingGeometry *)(lVar4 + 0x668),
                     *(FRHIRayTracingGeometry **)(piVar14 + 0x12),&local_f0);
          if ((char)piVar14[0x14] == '\0') {
            uVar11 = *(uint *)(lVar4 + 0x758) & 0xfffffffe;
          }
          else {
            uVar11 = *(uint *)(lVar4 + 0x758) | 1;
          }
          *(uint *)(lVar4 + 0x758) = uVar11;
        }
LAB_14734aff7:
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
        ppFVar1 = (FRHIResource **)(piVar14 + -10);
        local_54 = 0;
        if (ppFVar1 != &local_b8) {
          pFVar5 = *ppFVar1;
          *ppFVar1 = local_b8;
          local_b8 = (FRHIResource *)0x0;
          if (pFVar5 != (FRHIResource *)0x0) {
            FRHIResource::Release(pFVar5);
          }
        }
        pTVar2 = (TArray<FRayTracingGeometrySegment,TSizedDefaultAllocator<32>_> *)(piVar14 + -2);
        piVar14[-8] = (int)local_b0;
        piVar14[-7] = local_b0._4_4_;
        piVar14[-6] = local_a8;
        *(undefined1 *)(piVar14 + -5) = (undefined1)local_a4;
        *(undefined1 *)((longlong)piVar14 + -0x13) = local_a4._1_1_;
        *(undefined1 *)((longlong)piVar14 + -0x12) = local_a4._2_1_;
        *(undefined1 *)((longlong)piVar14 + -0x11) = local_a4._3_1_;
        *(undefined1 *)(piVar14 + -4) = local_a0;
        if (pTVar2 == &local_98) {
          uVar11 = local_98.ArrayNum;
        }
        else {
          DestructItems<FRayTracingGeometrySegment,int>
                    ((FRayTracingGeometrySegment *)(pTVar2->AllocatorInstance).Data,*piVar14);
          pFVar6 = (pTVar2->AllocatorInstance).Data;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
          (pTVar2->AllocatorInstance).Data = local_98.AllocatorInstance.Data;
          *piVar14 = local_98.ArrayNum;
          piVar14[1] = local_98.ArrayMax;
          local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_98.ArrayNum = 0;
          local_98.ArrayMax = 0;
          uVar11 = 0;
        }
        *(undefined8 *)(piVar14 + 2) = local_88;
        *(undefined8 *)(piVar14 + 4) = local_80;
        *(undefined8 *)(piVar14 + 6) = uStack_78;
        *(undefined8 *)(piVar14 + 10) = local_68;
        *(FName *)(piVar14 + 0xc) = local_60.Name;
        piVar14[0xe] = local_60.Number;
        *(undefined8 *)(piVar14 + 0xf) = local_54;
        *(undefined8 *)(piVar14 + 8) = local_70;
        DestructItems<FRayTracingGeometrySegment,int>
                  ((FRayTracingGeometrySegment *)local_98.AllocatorInstance.Data,uVar11);
        if ((FRayTracingGeometrySegment *)local_98.AllocatorInstance.Data !=
            (FRayTracingGeometrySegment *)0x0) {
          FMemory::Free(local_98.AllocatorInstance.Data);
        }
        if (local_b8 != (FRHIResource *)0x0) {
          FRHIResource::Release(local_b8);
        }
        pFVar5 = *(FRHIResource **)(piVar14 + 0x12);
        if (pFVar5 != (FRHIResource *)0x0) {
          piVar14[0x12] = 0;
          piVar14[0x13] = 0;
          FRHIResource::Release(pFVar5);
        }
        uVar15 = (ulonglong)(uVar13 + 1);
        lVar16 = lVar16 + 8;
        piVar14 = piVar14 + 0x20;
      } while ((int)(uVar13 + 1) < (int)this->_padding_);
    }
    if (local_f0.Infos.ArrayNum != 0) {
      (**(code **)(GDynamicRHI->_padding_ + 0x138))(GDynamicRHI,local_f0.RHICmdList,&local_f0.Infos)
      ;
    }
    if (local_f0.Infos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Infos.AllocatorInstance.Data);
    }
    iVar3 = *(int *)((longlong)&this->_padding_ + 4);
    uVar15 = (ulonglong)iVar3;
    if (iVar3 < (int)this->_padding_) {
      lVar16 = uVar15 * 8;
      do {
        uVar13 = (uint)uVar15;
        uVar11 = 0;
        if ((int)uVar13 < (param_1->LODResourcesView).ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar4 = *(longlong *)(lVar16 + (longlong)(param_1->LODResourcesView).DataPtr);
        if (((*(int *)(lVar4 + 300) != 0) && (*(char *)(lVar4 + 0x660) != '\0')) &&
           (bVar9 = IsRayTracingEnabled(), bVar9)) {
          this_00 = (FRayTracingGeometry *)(lVar4 + 0x668);
          bVar9 = FRayTracingGeometry::IsValid(this_00);
          if ((!bVar9) || (bVar9 = FRayTracingGeometry::IsEvicted(this_00), bVar9)) {
            bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6453310030073561313>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                               ,0xe1,
                               "LODResource.StaticRayTracingGeometry.IsValid() && !LODResource.StaticRayTracingGeometry.IsEvicted()"
                              );
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          else {
            bVar9 = IsInRenderingThread();
            if ((!bVar9) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsInRenderingThread()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                   ,0x1594,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FRayTracingGeometry::RequestBuildIfNeeded
                      (this_00,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate,Normal);
          }
        }
        uVar15 = (ulonglong)(uVar13 + 1);
        lVar16 = lVar16 + 8;
      } while ((int)(uVar13 + 1) < (int)this->_padding_);
    }
  }
  uVar12 = (*(char *)((longlong)&this->_padding_ + 4) - *(char *)((longlong)&this->_padding_ + 6)) +
           *(char *)((longlong)&this->_padding_ + 3);
  param_1->RenderData->CurrentFirstLODIdx = uVar12;
  param_1->RenderData->PendingFirstLODIdx = uVar12;
  bVar9 = IsRayTracingAllowed();
  if ((bVar9) && (pFVar7 = param_1->RenderData, pFVar7->bSupportRayTracing != false)) {
    uVar12 = pFVar7->CurrentFirstLODIdx;
    iVar3 = pFVar7->RayTracingGeometryGroupHandle;
    bVar9 = IsInRenderingThread();
    if ((!bVar9) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FRayTracingGeometryManager::SetRayTracingGeometryGroupCurrentFirstLODIndex
              ((FRayTracingGeometryManager *)GRayTracingGeometryManager,
               (FRHICommandListBase *)&GRHICommandList.CommandListImmediate,iVar3,uVar12);
    (**(code **)((longlong)*GRayTracingGeometryManager + 0x50))
              (GRayTracingGeometryManager,param_1->RenderData->RayTracingGeometryGroupHandle);
  }
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 1;
  return;
}

