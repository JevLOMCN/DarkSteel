// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ~TTupleBaseElement<TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>,1,2> @ 144c1e960

void __thiscall
UE::Core::Private::Tuple::
TTupleBaseElement<TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>,1,2>::
~TTupleBaseElement<TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>,1,2>
          (TTupleBaseElement<TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>,1,2>
           *this)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  FTemporalAAHistory *pFVar2;
  longlong lVar3;
  TRefCountPtr<IPooledRenderTarget> *pTVar4;
  
  pFVar2 = (this->Value).Ptr;
  if (pFVar2 != (FTemporalAAHistory *)0x0) {
    lVar3 = 2;
    pTVar4 = (TRefCountPtr<IPooledRenderTarget> *)&pFVar2->ReferenceBufferSize;
    do {
      pTVar1 = pTVar4 + -1;
      pTVar4 = pTVar4 + -1;
      lVar3 = lVar3 + -1;
      if (pTVar1->Reference != (IPooledRenderTarget *)0x0) {
        (**(code **)(pTVar1->Reference->_padding_ + 0x38))();
      }
    } while (lVar3 != 0);
    ::operator_delete(pFVar2,0x30);
    return;
  }
  return;
}

// ~TTupleBaseElement<TUniquePtr<FMaterialCachePrimitiveCachedLayerCommands,TDefaultDelete<FMaterialCachePrimitiveCachedLayerCommands>_>,1,2> @ 144e74370

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
UE::Core::Private::Tuple::
TTupleBaseElement<TUniquePtr<FMaterialCachePrimitiveCachedLayerCommands,TDefaultDelete<FMaterialCachePrimitiveCachedLayerCommands>_>,1,2>
::
~TTupleBaseElement<TUniquePtr<FMaterialCachePrimitiveCachedLayerCommands,TDefaultDelete<FMaterialCachePrimitiveCachedLayerCommands>_>,1,2>
          (TTupleBaseElement<TUniquePtr<FMaterialCachePrimitiveCachedLayerCommands,TDefaultDelete<FMaterialCachePrimitiveCachedLayerCommands>_>,1,2>
           *this)

{
  FMaterialCachePrimitiveCachedLayerCommands *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->Value).Ptr;
  if (pFVar1 != (FMaterialCachePrimitiveCachedLayerCommands *)0x0) {
    if ((pFVar1->VertexInvariantShadingCommand).bIsSet != false) {
      FMeshDrawShaderBindings::~FMeshDrawShaderBindings
                ((FMeshDrawShaderBindings *)&pFVar1->VertexInvariantShadingCommand);
    }
    if ((pFVar1->NaniteLayerShadingCommand).bIsSet != false) {
      FMeshDrawShaderBindings::~FMeshDrawShaderBindings
                ((FMeshDrawShaderBindings *)&pFVar1->NaniteLayerShadingCommand);
    }
    DestructItems<FMaterialCacheMeshDrawCommand,int>
              ((FMaterialCacheMeshDrawCommand *)
               (pFVar1->StaticMeshBatchCommands).AllocatorInstance.Data,
               (pFVar1->StaticMeshBatchCommands).ArrayNum);
    pFVar2 = (pFVar1->StaticMeshBatchCommands).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x130);
    return;
  }
  return;
}

