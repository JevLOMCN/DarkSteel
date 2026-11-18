// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FShadowMeshCollector @ 14560a230

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FShadowMeshCollector * __thiscall
FShadowMeshCollector::FShadowMeshCollector
          (FShadowMeshCollector *this,FRHICommandList *param_1,FSceneRenderer *param_2)

{
  FGlobalDynamicIndexBuffer *pFVar1;
  FGlobalDynamicVertexBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  FShadowMeshCollector *pFVar6;
  
  FMeshElementCollector::FMeshElementCollector
            (&this->Collector,param_2->FeatureLevel,&param_2->Allocator,None);
  pFVar1 = &this->DynamicIndexBuffer;
  pFVar2 = &this->DynamicVertexBuffer;
  pFVar1->RHICmdList = (FRHICommandListBase *)0x0;
  pFVar2->RHICmdList = (FRHICommandListBase *)0x0;
  (this->DynamicVertexBuffer).VertexBuffers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicVertexBuffer).VertexBuffers.ArrayNum = 0;
  (this->DynamicVertexBuffer).VertexBuffers.ArrayMax = 0;
  (this->DynamicIndexBuffer).IndexBuffers16.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicIndexBuffer).IndexBuffers16.ArrayNum = 0;
  (this->DynamicIndexBuffer).IndexBuffers16.ArrayMax = 0;
  (this->DynamicIndexBuffer).IndexBuffers32.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicIndexBuffer).IndexBuffers32.ArrayNum = 0;
  (this->DynamicIndexBuffer).IndexBuffers32.ArrayMax = 0;
  (this->Pipe).LastTask = (atomic<UE::Tasks::Private::FTaskBase_*>)0x0;
  (this->Pipe).TaskCount = (atomic<unsigned___int64>)0x0;
  pTVar5 = ::operator_new(0x18);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    (this->Pipe).EmptyEventRef.Object = (TEventCount<unsigned_int> *)0x10;
    (this->Pipe).EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__TEventCount_I_UE___00_SharedPointerInternals__6B_;
    *(undefined8 *)&pTVar5->WeakReferenceCount = 1;
    (this->Pipe).EmptyEventRef.Object = (TEventCount<unsigned_int> *)(pTVar5 + 1);
    (this->Pipe).EmptyEventRef.SharedReferenceCount.ReferenceController = pTVar5;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FShadowMeshCollector *)(*pcVar3)();
        return pFVar6;
      }
    }
  }
  (this->Pipe).DebugName =
       L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp(1358)"
  ;
  if ((this->DynamicVertexBuffer).VertexBuffers.ArrayNum != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexBuffers.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalRenderResources.h"
                       ,0xe9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FShadowMeshCollector *)(*pcVar3)();
      return pFVar6;
    }
  }
  pFVar2->RHICmdList = (FRHICommandListBase *)param_1;
  if (((this->DynamicIndexBuffer).IndexBuffers16.ArrayNum != 0) ||
     ((this->DynamicIndexBuffer).IndexBuffers32.ArrayNum != 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IndexBuffers16.IsEmpty() && IndexBuffers32.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalRenderResources.h"
                       ,0x13e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FShadowMeshCollector *)(*pcVar3)();
      return pFVar6;
    }
  }
  pFVar1->RHICmdList = (FRHICommandListBase *)param_1;
  FMeshElementCollector::Start
            (&this->Collector,param_1,pFVar2,pFVar1,
             (FGlobalDynamicReadBuffer *)&FSceneRenderer::DynamicReadBufferForShadows);
  return this;
}

